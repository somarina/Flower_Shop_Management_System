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
#include "ProductDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// Derived class Product
class Product : public Data {
public:
    void InputFlowerData();
    void DisplayFlowerData();
    void EditFlowerData();
    static void Header();
    static void DesignUpdateInsert();
    static void DesignSearchDisplay();
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
//design for  update
void Product::DesignUpdateInsert(){
	H::VLine(42,12,15,230,219);
	H::VLine(71,12,15,230,219);
	
	//HLIne for insert 
	H::HLine(37,14,38,196,220);
	H::HLine(37,16,38,196,220);
	H::HLine(37,18,38,196,220);
	H::HLine(37,20,38,196,220);
	H::HLine(37,22,38,196,220);
	H::HLine(37,24,38,196,220);
	H::HLine(37,26,38,196,220);

	H::VLine(95,12,15,230,219);
	H::VLine(129,12,15,230,219);
	
	//HLIne for insert 
	H::HLine(90,14,43,196,220);
	H::HLine(90,16,43,196,220);
	H::HLine(90,18,43,196,220);
	H::HLine(90,20,43,196,220);
	H::HLine(90,22,43,196,220);
	H::HLine(90,24,43,196,220);
	H::HLine(90,26,43,196,220);
	
H::setcolor(6);H::gotoxy(12,16);cout<<R"(      .--.)" ;  
H::setcolor(6);H::gotoxy(12,17);cout<<R"(    .'_\/_'.)" ;  
H::setcolor(6);H::gotoxy(12,18);cout<<R"(    '. /\ .')" ;  
H::setcolor(2);H::gotoxy(12,19);cout<<R"(      "||")" ;  
H::setcolor(2);H::gotoxy(12,20);cout<<R"(       || /\)" ;  
H::setcolor(2);H::gotoxy(12,21);cout<<R"(    /\ ||//\))" ;  
H::setcolor(2);H::gotoxy(12,22);cout<<R"(   (/\\||/)" ;  
H::setcolor(2);H::gotoxy(12,23);cout<<R"(______\||/_______)" ;  
H::setcolor(2);H::gotoxy(12,24);cout<<R"(^^^^^^^^^^^^^^^^^)" ; 

H::setcolor(1);H::gotoxy(141,16);cout<<R"(      .--.)" ;  
H::setcolor(1);H::gotoxy(141,17);cout<<R"(    .'_\/_'.)" ;  
H::setcolor(1);H::gotoxy(141,18);cout<<R"(    '. /\ .')" ;  
H::setcolor(2);H::gotoxy(141,19);cout<<R"(      "||")" ;  
H::setcolor(2);H::gotoxy(141,20);cout<<R"(       || /\)" ;  
H::setcolor(2);H::gotoxy(141,21);cout<<R"(    /\ ||//\))" ;  
H::setcolor(2);H::gotoxy(141,22);cout<<R"(   (/\\||/)" ;  
H::setcolor(2);H::gotoxy(141,23);cout<<R"(______\||/_______)" ;  
H::setcolor(2);H::gotoxy(141,24);cout<<R"(^^^^^^^^^^^^^^^^^)" ; 
 

	
}
//design searchdisplay
void Product::DesignSearchDisplay(){
	
	H::VLine(10,6,25,3,179);
	H::VLine(161,6,25,3,179);
	H::setcolor(7);H::gotoxy(9,14);cout<<char(70);
	H::setcolor(7);H::gotoxy(9,16);cout<<char(76);
	H::setcolor(7);H::gotoxy(9,18);cout<<char(79);
	H::setcolor(7);H::gotoxy(9,20);cout<<char(87);
	H::setcolor(7);H::gotoxy(9,22);cout<<char(69);
	H::setcolor(7);H::gotoxy(9,24);cout<<char(82);
	
	H::setcolor(7);H::gotoxy(160,14);cout<<char(70);
	H::setcolor(7);H::gotoxy(160,16);cout<<char(76);
	H::setcolor(7);H::gotoxy(160,18);cout<<char(79);
	H::setcolor(7);H::gotoxy(160,20);cout<<char(87);
	H::setcolor(7);H::gotoxy(160,22);cout<<char(69);
	H::setcolor(7);H::gotoxy(160,24);cout<<char(82);
	
	H::drawBoxDoubleLineWithBG(20,14,130,1,3);
	H::drawBoxDoubleLineWithBG(20,17,130,8,4);
}
// Implementation of Product methods
void Product::InputFlowerData()
{
    int qty;
    double price;
    char name[50], type[30], description[100], date[20];
    string strQty, strPrice;

    int id = GenerateNextFlowerID(); // auto ID
    SetFlowerID(id);
    H::setcolor(199);H::gotoxy(69,16);cout <<"Enter Flower ID ";          
    H::setcolor(199);H::gotoxy(69,18);cout <<"Enter Flower Name";         
    H::setcolor(199);H::gotoxy(69,20);cout <<"Enter Flower Type";         
    H::setcolor(199);H::gotoxy(69,22);cout <<"Enter Flower Price";        
    H::setcolor(199);H::gotoxy(69,24);cout <<"Enter Flower Quantity";     
    H::setcolor(199);H::gotoxy(69,26);cout <<"Enter Flower Description";  
    H::setcolor(199);H::gotoxy(69,28);cout <<"Enter Flower Date";         


	H::setcolor(199);H::gotoxy(117,16); cout<<":  "<< GetFlowerId();
	H::setcolor(199);H::gotoxy(117,18); cout<<":  "; H::inputLetter(name, 15);
	H::setcolor(199);H::gotoxy(117,20); cout<<":  "; H::inputLetter(type, 15);
	H::setcolor(199);H::gotoxy(117,22); cout<<":  "; price = stod(H::inputUNumber(strPrice, 6));
	H::setcolor(199);H::gotoxy(117,24); cout<<":  "; qty = stoi(H::inputUNumber(strQty, 4));
	H::setcolor(199);H::gotoxy(117,26); cout<<":  "; H::inputLetter(description, 20);
	H::setcolor(199);H::gotoxy(117,28); cout<<":  "; H::inputDate(date, true);
	
	
    SetFlowerName(name);
    SetFlowerType(type);
    SetFlowerPrice(price);
    SetFlowerQty(qty);
    SetFlowerDescription(description);
    SetFlowerDate(date);
    
   
}
void Product::Header()
{
    H::setcolor(1);H::gotoxy(25,15);cout << left << setw(10) << "ID"
        << setw(20) << "Name"
        << setw(20) << "Type"
        << setw(20) << "Price"
        << setw(15) << "Qty"
        << setw(28) << "Description"
        << "Date";
}

void Product::DisplayFlowerData()
{
    H::setcolor(6);cout << left << setw(10) << GetFlowerId()
        << setw(20) << GetFlowerName()
        << setw(20) << GetFlowerTpye()
        << setw(20) << fixed << setprecision(2) << GetFlowerPrice() << "$"
        << setw(15) << GetFlowerQty()
        << setw(28) << GetFlowerDescription()
        << GetFlowerDate();
        
}

void Product::EditFlowerData()
{
	Product::DesignUpdateInsert();
    int qty;
    double price;
    char type[30], description[100], date[20];
    string strQty, strPrice;

    H::setcolor(199);H::gotoxy(44,14);cout << "Enter Flower ID           : ";
    H::setcolor(199);H::gotoxy(44,16);cout << "Enter Flower Name         : ";
    H::setcolor(199);H::gotoxy(44,18);cout << "Enter Flower Type         : "; 
    H::setcolor(199);H::gotoxy(44,20);cout << "Enter Flower Price        : "; 
    H::setcolor(199);H::gotoxy(44,22);cout << "Enter Flower Quantity     : "; 
    H::setcolor(199);H::gotoxy(44,24);cout << "Enter Flower Description  : "; 
    H::setcolor(199);H::gotoxy(44,26);cout << "Enter Flower Date         : "; 

	H::setcolor(199);H::gotoxy(97,14); cout<<": "<< GetFlowerId();
	H::setcolor(199);H::gotoxy(97,16); cout<<": " << GetFlowerName();
	H::setcolor(199);H::gotoxy(97,18); cout<<": "; H::inputLetter(type, 15);
	H::setcolor(199);H::gotoxy(97,20); cout<<": "; price = stod(H::inputUNumber(strPrice, 6));
	H::setcolor(199);H::gotoxy(97,22); cout<<": "; qty = stoi(H::inputUNumber(strQty, 4));
	H::setcolor(199);H::gotoxy(97,24); cout<<": "; H::inputLetter(description, 20);
	H::setcolor(199);H::gotoxy(97,26); cout<<": "; H::inputDate(date, true);
	
    SetFlowerType(type);
    SetFlowerPrice(price);
    SetFlowerQty(qty);
    SetFlowerDescription(description);
    SetFlowerDate(date);
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
    int y=19;
    Product::Header();
    proF.open("Data\\Product.bin", ios::in | ios::binary);
    if (proF.fail())
    {
        cout << "\t File not found!!!" << endl;
        return;
    }

    Product::Header();
    while (proF.read((char*)&p, sizeof(p)))
    {
        H::gotoxy(23,y++);p.DisplayFlowerData();
    }
	Design::Flowercolor();
    proF.close();
}
//###############################################################################################
void UpdateFlowerData()
{	
	Design::Search();
    int updateId;
    string strID;
    bool isUpdated = false;

    H::setcolor(4);H::gotoxy(53,22);cout << "Input Product ID TO Update  ";
    H::setcolor(4);H::gotoxy(86,22);cout<<":  ";updateId = stoi(H::inputUNumber(strID, 10));
	H::clearBox(48,20,73,5,1);
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
    {
        H::drawBoxDoubleLine(76,28,59,1,2);
		H::setcolor(6);H::gotoxy(82,29);cout<<">>>>>>>> FLOWER  UPDATE SUCCESSFULLY <<<<<<<<";
		Design::FlowerChoice();
		Design::Style();
		Design::Footer();
    }
}
//###############################################################################################

//###############################################################################################
void SearchFlowerData()
{
    int id;
    string strID;
    bool found = false;

    H::setcolor(3);H::gotoxy(53,22);cout<<"Input Product ID to Search ";
    H::setcolor(3);H::gotoxy(86,22);cout<<":  ";id = stoi(H::inputUNumber(strID, 5));
	H::clearBox(48,20,73,5,1);
	H::clearBox(19,8,4,30,0);
	H::clearBox(146,7,4,30,0);
    proF.open("Data\\Product.bin", ios::in | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }
    while (proF.read((char*)&p, sizeof(p))) {
        if (p.GetFlowerId() == id) {
	    	p.DesignSearchDisplay();
			H::setcolor(1);H::gotoxy(22,15);Product::Header();
            H::setcolor(5);H::gotoxy(22,18);p.DisplayFlowerData();
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\tProduct ID not found!" << endl;
    else
    {
		H::drawBoxDoubleLine(76,28,59,1,2);
		H::setcolor(6);H::gotoxy(82,29);cout<<">>>>>>>> FLOWER  SEARCH SUCCESSFULLY <<<<<<<<";
		Design::Footer();
    }
    proF.close();
}
//###############################################################################################
void DeleteFlowerData()
{
    int id;
    string strID;
    bool isDeleted = false;

    H::setcolor(1);H::gotoxy(53,22);cout << "Input ID of Product to Delete  ";
    H::setcolor(1);H::gotoxy(86,22);cout<<":  ";id = stoi(H::inputUNumber(strID, 10));

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

                cout << "\t? Quantity Imported Successfully!" << endl;
                break;
            }
        }

        proF.close();

        if (!found)
            cout << "\t? ID not found! Please try again.\n";

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
