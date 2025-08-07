/*        Noted For this Header File

    This header file [product.h] use for store
        - class product that have inheritance from class Data in 
          header file data.h
        - use for take setter and getter from class Data
        - this clas have simple methods like CRUD funtion 

*/

#ifndef ___INC_PRODUCT_H___
#define ___INC_PRODUCT_H___

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "productData.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// Derived class Product
class Product : public Data {
public:
    void InputFlowerData();
    void DisplayFlowerData();
    void EditFlowerData();
    static void Header();
};

// Function to generate next Flower ID
int GenerateNextFlowerID()
{
    fstream file("Data\\Product.bin", ios::in | ios::binary);
    Product temp;
    int maxID = 999;

    if (!file)
        return 1000;

    while (file.read((char*)&temp, sizeof(temp)))
    {
        if (temp.GetFlowerId() > maxID)
            maxID = temp.GetFlowerId();
    }

    file.close();
    return maxID + 1;
}

// Implementation of Product methods
void Product::InputFlowerData()
{
    int qty;
    double price;
    char name[50], type[30], description[100], date[20];
    string strQty, strPrice;

    int id = GenerateNextFlowerID(); // auto ID
    SetFlowerId(id);

    cout << "\n\tFlower ID                : " << GetFlowerId();
    cout << "\n\tEdit Flower Name         : "; H::inputLetter(name, 15);
    cout << "\n\tEdit Flower Type         : "; H::inputLetter(type, 15);
    cout << "\n\tEdit Flower Price        : "; price = stod(H::inputUNumber(strPrice, 6));
    cout << "\n\tEdit Flower Quantity     : "; qty = stoi(H::inputUNumber(strQty, 4));
    cout << "\n\tEdit Flower Description  : "; H::inputLetter(description, 20);
    cout << "\n\tEdit Flower Date         : "; H::inputDate(date, true);

    SetFlowerName(name);
    SetFlowerType(type);
    SetFlowerPrice(price);
    SetFlowerQty(qty);
    SetFlowerDescription(description);
    SetFlowerDate(date);
}

void Product::DisplayFlowerData()
{
    cout << left << setw(10) << GetFlowerId()
         << setw(20) << GetFlowerName()
         << setw(15) << GetFlowerType()
         << setw(10) << fixed << setprecision(2) << GetFlowerPrice() << "$"
         << setw(10) << GetFlowerQty()
         << setw(30) << GetFlowerDescription()
         << setw(15) << GetFlowerDate()
         << endl;
}

void Product::EditFlowerData()
{
    int qty;
    double price;
    char type[30], description[100], date[20];
    string strQty, strPrice;

    cout << "\n\tFlower ID                : " << GetFlowerId();
    cout << "\n\tEdit Flower Name         : " << GetFlowerName();
    cout << "\n\tEdit Flower Type         : "; H::inputLetter(type, 15);
    cout << "\n\tEdit Flower Price        : "; price = stod(H::inputUNumber(strPrice, 6));
    cout << "\n\tEdit Flower Quantity     : "; qty = stoi(H::inputUNumber(strQty, 4));
    cout << "\n\tEdit Flower Description  : "; H::inputLetter(description, 20);
    cout << "\n\tEdit Flower Date         : "; H::inputDate(date, true);

    SetFlowerType(type);
    SetFlowerPrice(price);
    SetFlowerQty(qty);
    SetFlowerDescription(description);
    SetFlowerDate(date);
}

void Product::Header()
{
    cout << left << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(15) << "Type"
         << setw(10) << "Price"
         << setw(10) << "Qty"
         << setw(30) << "Description"
         << setw(15) << "Date" << endl;
    cout << string(145, '-') << endl;
}

// Global objects
Product p;
fstream proF;
////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function to input flower and save to file
void InputFlowerData()
{
    proF.open("Data\\Product.bin", ios::out | ios::app | ios::binary);
    if (!proF)
    {
        cout << "Cannot open file for writing.\n";
        return;
    }

    p.InputFlowerData();
    proF.write((char*)&p, sizeof(p));
    proF.close();
}
//###############################################################################################
// Function to display all flower records
void DisplayFlowerData()
{
    int y=13;

    H::gotoxy(10,11);Product::Header();
    proF.open("Data\\Product.bin", ios::in | ios::binary);
    if (proF.fail())
    {
        cout << "\t File not found!!!" << endl;
        return;
    }

    // Product::Header();
    while (proF.read((char*)&p, sizeof(p)))
    {
        H::gotoxy(10,y++);p.DisplayFlowerData();
    }

    proF.close();
}
//###############################################################################################
void SearchFlowerData()
{
    int id;
    string strID;
    bool found = false;

    cout << "\n\tInput Product ID to Search: ";
    id = stoi(H::inputUNumber(strID, 5));

    proF.open("Data\\Product.bin", ios::in | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }

    while (proF.read((char*)&p, sizeof(p))) {
        if (p.GetFlowerId() == id) {
            Product::Header();
            p.DisplayFlowerData();
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\tProduct ID not found!" << endl;

    proF.close();
}
//###############################################################################################
void UpdateFlowerData()
{
    int updateId;
    string strID;
    bool isUpdated = false;

    cout << "\n\tInput Product ID TO Update : ";
    updateId = stoi(H::inputUNumber(strID, 10));

    proF.open("Data\\Product.bin", ios::in | ios::out | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }

    while (proF.read((char*)&p, sizeof(p))) {
        if (updateId == p.GetFlowerId()) {
            isUpdated = true;
            p.EditFlowerData();
            proF.seekp((int)proF.tellg() - sizeof(p));
            proF.write((char*)&p, sizeof(p));
            break;
        }
    }

    proF.close();

    if (!isUpdated)
        cout << "\tThis Product ID is not found for Update!" << endl;
    else
        cout << "\tProduct is Updated Successfully!" << endl;
}
//###############################################################################################
void DeleteFlowerData()
{
    int id;
    string strID;
    bool isDeleted = false;

    cout << "\t Input ID of Product to Delete : ";
    id = stoi(H::inputUNumber(strID, 10));

    proF.open("Data\\Product.bin", ios::in | ios::binary);
    if (proF.fail())
    {
        cout << "\tFile not found!!!" << endl;
        return;
    }

    fstream backup("Data\\Temp.bin", ios::out | ios::binary);
    if (backup.fail())
    {
        cout << "\tCan't create temporary backup file!" << endl;
        proF.close();
        return;
    }

    while (proF.read((char*)&p, sizeof(p)))
    {
        if (p.GetFlowerId() == id)
            isDeleted = true;
        else
            backup.write((char*)&p, sizeof(p));
    }

    proF.close();
    backup.close();

    if (isDeleted)
    {
        remove("Data\\Product.bin");
        rename("Data\\Temp.bin", "Data\\Product.bin");
        cout << "\t Product Is Deleted Successfully!" << endl;
    }
    else
    {
        remove("Data\\Temp.bin");
        cout << "\t Product ID not found!" << endl;
    }
}
//###############################################################################################
void ImportFlowerQty() {
    int id;
    int addQty;
    string strID, strQty;
    bool found = false;

    do {
        found = false;

        cout << "\n\tEnter Flower ID to Import Quantity: ";
        id = stoi(H::inputUNumber(strID, 5));

        proF.open("Data\\Product.bin", ios::in | ios::out | ios::binary);
        if (!proF) {
            cout << "\tFile not found!" << endl;
            return;
        }

        while (proF.read((char*)&p, sizeof(p))) {
            if (id == p.GetFlowerId()) {
                found = true;
                cout << "\tEnter Quantity to Add: ";
                addQty = stoi(H::inputUNumber(strQty, 4));

                int currentQty = p.GetFlowerQty();
                p.SetFlowerQty(currentQty + addQty);

                proF.seekp((int)proF.tellg() - sizeof(p));
                proF.write((char*)&p, sizeof(p));

                cout << "\t Quantity Imported Successfully!" << endl;
                break;
            }
        }

        proF.close();

        if (!found)
            cout << "\t ID not found! Please try again.\n";

    } while (!found);
}
//###############################################################################################
void SortFlowerData() {
    Product products[100];
    int count = 0;

    proF.open("Data\\Product.bin", ios::in | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }

    while (proF.read((char*)&products[count], sizeof(Product))) {
        count++;
    }
    proF.close();

    // Simple Bubble Sort by Name
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(products[j].GetFlowerName(), products[j + 1].GetFlowerName()) > 0) {
                Product temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }

    // Display sorted
    Product::Header();
    for (int i = 0; i < count; i++) {
        products[i].DisplayFlowerData();
    }
}
//###############################################################################################
void BuyingFlower()
{
    string name;
    int buyQty;
    string strQty;
    bool found = false;

    cout << "\n\tEnter Flower Name to Buy: ";
    H::inputLetter(name, 15);

    cout << "\tEnter Quantity to Buy: ";
    buyQty = stoi(H::inputUNumber(strQty, 4));

    proF.open("Data\\Product.bin", ios::in | ios::out | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }

    while (proF.read((char*)&p, sizeof(p))) {
        if (name == p.GetFlowerName()) {
            if (p.GetFlowerQty() >= buyQty) {
                p.SetFlowerQty(p.GetFlowerQty() - buyQty);
                proF.seekp((int)proF.tellg() - sizeof(p));
                proF.write((char*)&p, sizeof(p));
                cout << "\tFlower bought successfully!" << endl;
            } else {
                cout << "\tNot enough quantity in stock!" << endl;
            }
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\tFlower not found!" << endl;

    proF.close();
}
//###############################################################################################
void ShowInvoiceAll() {}
//###############################################################################################
void AlertForLowStock() {}
//###############################################################################################

#endif





