#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <string.h>
#include <conio.h>
#include <algorithm>
using namespace std;

// ------------------------- Structures -------------------------
struct Item {
    string name;
    int qty;
};

struct Invoice {
    char invNo[10];       // e.g., Inv-0001
    char customer[30];
    int itemCount;
    Item items[10];       // max 10 items per invoice
    double total;
};

// ------------------------- Product -------------------------
struct Product {
    int id;
    char name[30];
    double price;
    int qty;
};

// ------------------------- Load / Save Functions -------------------------
vector<Product> loadProducts(const string& filename) {
    vector<Product> products;
    ifstream inFile(filename, ios::binary);
    Product p;
    while (inFile.read((char*)&p, sizeof(Product))) {
        products.push_back(p);
    }
    inFile.close();
    return products;
}

void saveProduct(const string& filename, const Product& p, int pos = -1) {
    fstream file(filename, ios::in | ios::out | ios::binary);
    if (!file) return;
    if (pos >= 0)
        file.seekp(pos * sizeof(Product));
    else
        file.seekp(0, ios::end);
    file.write((char*)&p, sizeof(Product));
    file.close();
}

vector<Invoice> loadInvoices(const string& filename) {
    vector<Invoice> invoices;
    ifstream inFile(filename, ios::binary);
    Invoice inv;
    while (inFile.read((char*)&inv, sizeof(Invoice))) {
        invoices.push_back(inv);
    }
    inFile.close();
    return invoices;
}

void saveInvoice(const string& filename, const Invoice& inv) {
    ofstream outFile(filename, ios::binary | ios::app);
    outFile.write((char*)&inv, sizeof(Invoice));
    outFile.close();
}

// ------------------------- Generate Next Invoice -------------------------
string GenerateNextInvoiceNo(const string& filename) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) return "Inv-0001";

    string lastInv = "Inv-0000";
    Invoice temp;
    while (inFile.read((char*)&temp, sizeof(temp))) {
        lastInv = temp.invNo;
    }
    inFile.close();

    int num = stoi(string(lastInv).substr(4));
    num++;
    char buffer[10];
    sprintf(buffer, "Inv-%04d", num);
    return string(buffer);
}

// ------------------------- Display Invoice -------------------------
void ShowInvoice(const Invoice& inv) {
    system("cls");
    cout << "====================== Flower Shop Invoice ======================\n\n";
    cout << "Invoice No: " << inv.invNo << "\n";
    cout << "Customer  : " << inv.customer << "\n\n";
    cout << left << setw(20) << "Item" << setw(10) << "Qty" << "\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < inv.itemCount; i++) {
        cout << left << setw(20) << inv.items[i].name
             << setw(10) << inv.items[i].qty << "\n";
    }
    cout << "-----------------------------------\n";
    cout << "Total: $" << fixed << setprecision(2) << inv.total << "\n";
    cout << "\nPress any key to continue...";
    _getch();
}

// ------------------------- Buying Function -------------------------
void BuyingFlower() {
    vector<Product> products = loadProducts("Data\\Product.bin");
    if (products.empty()) {
        cout << "No products available!" << endl;
        return;
    }

    string input, customerName;
    int buyQty;
    cout << "\nEnter Customer Name: ";
    getline(cin, customerName);
    cout << "Enter Flower Name or ID: ";
    getline(cin, input);

    bool isID = all_of(input.begin(), input.end(), ::isdigit);
    int searchID = isID ? stoi(input) : 0;
    bool found = false;
    int pos = -1;

    for (int i = 0; i < products.size(); i++) {
        if ((isID && products[i].id == searchID) || (!isID && input == products[i].name)) {
            found = true;
            pos = i;
            break;
        }
    }

    if (!found) {
        cout << "Flower not found!" << endl;
        return;
    }

    cout << "Enter Quantity to Buy: ";
    cin >> buyQty;
    cin.ignore(); // flush newline

    if (products[pos].qty < buyQty) {
        cout << "Not enough stock!" << endl;
        return;
    }

    // Update stock
    products[pos].qty -= buyQty;
    saveProduct("Data\\Product.bin", products[pos], pos);

    // Create invoice
    Invoice inv;
    string invNo = GenerateNextInvoiceNo("Data\\Invoices.dat");
    strncpy(inv.invNo, invNo.c_str(), sizeof(inv.invNo));
    strncpy(inv.customer, customerName.c_str(), sizeof(inv.customer));
    inv.itemCount = 1;
    strncpy(inv.items[0].name, products[pos].name, sizeof(inv.items[0].name));
    inv.items[0].qty = buyQty;
    inv.total = products[pos].price * buyQty;

    // Save invoice
    saveInvoice("Data\\Invoices.dat", inv);

    // Show invoice immediately
    ShowInvoice(inv);
}

// ------------------------- Main Menu -------------------------
int main() {
    int choice;
    do {
        system("cls");
        cout << "====== Flower Shop Menu ======\n";
        cout << "1. Buy Flower\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                BuyingFlower();
                break;
            case 2:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 2);

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <string>
// #include <conio.h>  // for _getch()

// using namespace std;

// struct Invoice {
//     int id;
//     string customer;
//     vector<pair<string, int>> items; // {itemName, qty}
//     double total;
// };

// void displayTwoInvoices(const vector<Invoice>& invoices, int startIndex) {
//     system("cls"); // clear screen

//     int endIndex = min(startIndex + 2, (int)invoices.size());

//     cout << "================ Flower Shop Invoices ================\n\n";

//     for (int i = startIndex; i < endIndex; i++) {
//         cout << "Invoice #" << invoices[i].id << " | Customer: " << invoices[i].customer << "\n";
//         cout << "Items:\n";
//         for (auto &item : invoices[i].items) {
//             cout << "  " << item.first << " x" << item.second << "\n";
//         }
//         cout << "Total: $" << invoices[i].total << "\n";
//         cout << "-----------------------------------\n\n";
//     }

//     cout << "Use ← (Left) / → (Right) arrows to navigate, ESC to exit.\n";
// }

// int main() {
//     // Sample invoices
//     vector<Invoice> invoices = {
//         {1, "Alice", {{"Rose", 2}, {"Orchid", 1}}, 25.0},
//         {2, "Bob", {{"Lily", 5}, {"Tulip", 3}}, 45.0},
//         {3, "Charlie", {{"Sunflower", 10}}, 30.0},
//         {4, "Dara", {{"Lotus", 4}, {"Jasmine", 6}}, 50.0},
//         {5, "Eva", {{"Rose", 7}, {"Tulip", 2}}, 60.0}
//     };

//     int index = 0; // current starting invoice index
//     displayTwoInvoices(invoices, index);

//     while (true) {
//         int key = _getch();
//         if (key == 224) { // arrow keys
//             key = _getch();
//             if (key == 77) { // Right arrow →
//                 index += 2;
//                 if (index >= invoices.size()) index = 0; // wrap to first
//                 displayTwoInvoices(invoices, index);
//             }
//             else if (key == 75) { // Left arrow ←
//                 index -= 2;
//                 if (index < 0) {
//                     // wrap to last pair
//                     if (invoices.size() % 2 == 0)
//                         index = invoices.size() - 2;
//                     else
//                         index = invoices.size() - 1;
//                 }
//                 displayTwoInvoices(invoices, index);
//             }
//         }
//         else if (key == 27) { // ESC key to exit
//             break;
//         }
//     }

//     return 0;
// }



// #include "Header/design_staff.h"
// #include "Header/staff.h"
// #include "Header/designStaff4Admin.h"
// #include "header/ANTHinsyOOP"
// using namespace ANTHinsyOOP;

// int main()
// {
// 	H::DisableScreenResize();
//     H::setFixedScreenConsole(170, 40);
//     H::setFont(18,700);
//     H::setcursor(0,0);

// cout << R"(
//        _ _
//      _{ ' }_
//     { `.!.` }
//     ',_/Y\_,'
//       {_,_}
//         |
//       (\|  /)
//        \| //
//         |//
//      \\ |/  //
//  ^^^^^^^^^^^^^^^
// )";

// cout << R"(
//        .-.
//  __   /   \   __
// (  `'.\   /.'`  )
//  '-._.(;;;)._.-'
//  .-'  ,`"`,  '-.
// (__.-'/   \'-.__)
//       \   /|
//        '-' |
//            |
//            /
//      \|/\|/\|/\|/\|/
// )";




//     cout << R"(
//              a@@@@a             
//          a@@@@@@@@@@@@a         
//        a@@@@@@by@@@@@@@@a       
//      a@@@@@S@C@E@S@W@@@@@@a     
//      @@@@@@@@@@@@@@@@@@@@@@     
//       `@@@@@@`\\//'@@@@@@'      
//                ||
//                ||         
//                ||
//                ||
//               /MM\
//     )";


//     getch();
//     return 0;
// }

// #include <vector>
// #include <iostream>
// #include <algorithm>
// class Flower {
// private:
//     std::string barcode;  // Unique ID
//     std::string name;
//     float price;
//     int quantity;
// public:
//     Flower(std::string bc, std::string n, float p, int q) 
//         : barcode(bc), name(n), price(p), quantity(q) {}
//     std::string getBarcode() { return barcode; }
//     std::string getName() { return name; }
//     float getPrice() { return price; }
//     int getQuantity() { return quantity; }
// };

// int main() {
//     std::vector<Flower> flowers = {
//         Flower("B001", "Rose", 2.5, 50),
//         Flower("B002", "Tulip", 3.0, 30),
//         Flower("B003", "Rose", 2.8, 20)
//     };

//     std::string input;
//     std::cout << "Enter flower name or barcode: ";
//     std::cin >> input;

//     // Search by barcode first
//     auto it = std::find_if(flowers.begin(), flowers.end(),
//         [&](Flower f){ return f.getBarcode() == input; });

//     if(it != flowers.end()) {
//         std::cout << "Found by Barcode: " << it->getName() 
//                   << ", Price: " << it->getPrice() << "\n";
//     } else {
//         // Search by name
//         std::vector<Flower> matches;
//         for(auto &f : flowers)
//             if(f.getName() == input) matches.push_back(f);

//         if(!matches.empty()) {
//             std::cout << "Found by Name:\n";
//             for(auto &f : matches)
//                 std::cout << f.getBarcode() << " - " << f.getName() 
//                           << ", Price: " << f.getPrice() << "\n";
//         } else {
//             std::cout << "Flower not found.\n";
//         }
//     }
// }
