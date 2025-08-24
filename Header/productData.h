 /*
            This class use for store
                - Data Member
                - Setter or Mutator
                - Getter or Accessor 
*/

#ifndef ___INC_PRODUCTDATA_H___
#define ___INC_PRODUCTDATA_H___

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "ANTHeader/ANTHinsyOOP"
using namespace ANTHinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

class Data{
	private: 
		//Data Member
		int flower_id;
		// char flower_id[10];            		 // Unique ID for each flower Product
	    char flower_name[50];            // Name of the flower
	    char flower_type[30];            // Type/category of flower (e.g. Rose, Orchid)
	    double flower_price;             // Price of the flower
	    int flower_qty;             	 // Available stock quantity
	    char flower_color[20];           // Color of the flower
	    char flower_origin[50];          // Origin country or place
	    char flower_description[100];    // Short description
	    char flower_date[20];            // Date added or harvested (dd-mm-yyyy)
	public:
		// Extra helpers
		void InputFlower();
		void DisplayFlower();

		//@@@@ 	Function Prototype 
		//										setter 
		void SetFlowerID(int id);
		void SetFlowerName(const char* name);
		void SetFlowerType(const char* type);
		void SetFlowerPrice(double price);
		void SetFlowerQty(int qty);
		void SetFlowerColor(const char* color);
		void SetFlowerOrigin(const char* origin);
		void SetFlowerDescription(const char* description);
		void SetFlowerDate(const char* date);

		//											Getter
		// const char* GetFlowerId() const;
		int GetFlowerId() const;
		const char* GetFlowerName() const;
		const char* GetFlowerTpye() const;
		double GetFlowerPrice() const;
		int GetFlowerQty() const;
		const char* GetFlowerColor() const;
		const char* GetFlowerOrigin() const;
		const char* GetFlowerDescription() const;
		const char* GetFlowerDate() const;
		
		
};
/*      										Body function propotype
	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
											Setter or Mutator
	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
void Data::SetFlowerID(int id)
{
	this->flower_id = id;
}
void Data::SetFlowerName(const char* name)
{
	strcpy(this->flower_name, name);
}
void Data::SetFlowerType(const char* type)
{
	strcpy(this->flower_type, type);
}
void Data::SetFlowerPrice(double price)
{
	this->flower_price = price;
}
void Data::SetFlowerQty(int qty)
{
	this->flower_qty = qty;
}
void Data::SetFlowerColor(const char* color)
{
	strcpy(this->flower_color, color);
}
void Data::SetFlowerOrigin(const char* origin)
{
	strcpy(this->flower_origin, origin);
}
void Data::SetFlowerDescription(const char* description)
{
	strcpy(this->flower_description, description);
}
void Data::SetFlowerDate(const char* date)
{
	strcpy(this->flower_date, date);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*      										
	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
											Getter or Accessor
	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
int Data::GetFlowerId() const
{
	return this->flower_id;
}

const char* Data::GetFlowerName() const
{
	return this->flower_name;
}
const char* Data::GetFlowerTpye() const
{
	return this->flower_type;
}
double Data::GetFlowerPrice() const
{
	return this->flower_price;
}
int Data::GetFlowerQty() const
{
	return this->flower_qty;
}
const char* Data::GetFlowerColor() const
{
	return this->flower_color;
}
const char* Data::GetFlowerOrigin() const
{
	return this->flower_origin;
}
const char* Data::GetFlowerDescription() const
{
	return this->flower_description;
}
const char* Data::GetFlowerDate() const
{
	return this->flower_date;
}
////////////////////////////////////////////////////////////////////////////

// ================= Helpers =================
void Data::InputFlower() {
    cout << "Enter Flower ID: ";
    int id; cin >> id;
    SetFlowerID(id);

    cout << "Enter Flower Name: ";
    cin.ignore();
    cin.getline(flower_name, 50);

    cout << "Enter Flower Type: ";
    cin.getline(flower_type, 30);

    cout << "Enter Price: ";
    double price; cin >> price;
    SetFlowerPrice(price);

    cout << "Enter Quantity: ";
    int qty; cin >> qty;
    SetFlowerQty(qty);

    cout << "Enter Color: ";
    cin.ignore();
    cin.getline(flower_color, 20);

    cout << "Enter Origin: ";
    cin.getline(flower_origin, 50);

    cout << "Enter Description: ";
    cin.getline(flower_description, 100);

    cout << "Enter Date (dd-mm-yyyy): ";
    cin.getline(flower_date, 20);
}

void Data::DisplayFlower() {
    cout << left << setw(6) << GetFlowerId()
         << setw(20) << GetFlowerName()
         << setw(15) << GetFlowerTpye()
         << setw(10) << GetFlowerPrice()
         << setw(8) << GetFlowerQty()
         << setw(10) << GetFlowerColor()
         << setw(15) << GetFlowerOrigin()
         << setw(20) << GetFlowerDate() << endl;
}


#endif