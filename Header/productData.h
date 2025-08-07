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

class Data {
private:
    int flower_id;
    char flower_name[50];
    char flower_type[30];
    double flower_price;
    int flower_qty;
    char flower_description[100];
    char flower_date[20];
public:
    // Setter
    void SetFlowerId(int id);
    void SetFlowerName(const char* name);
    void SetFlowerType(const char* type);
    void SetFlowerPrice(double price);
    void SetFlowerQty(int qty);
    void SetFlowerDescription(const char* desc);
    void SetFlowerDate(const char* date);
    
    // Getter
    int GetFlowerId() const;
    const char* GetFlowerName() const;
    const char* GetFlowerType() const;
    double GetFlowerPrice() const;
    int GetFlowerQty() const;
    const char* GetFlowerDescription() const;
    const char* GetFlowerDate() const;
};
////////////////////////////////////////////////////////////////////////////////////////////
//////////					Body Propotype of Methods in class Data
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Data::SetFlowerName(const char* name) 
{ 
	strcpy(this->flower_name, name); 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Data::SetFlowerType(const char* type)        
{ 
	strcpy(this->flower_type, type); 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Data::SetFlowerPrice(double price)           
{ 
	this->flower_price = price; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Data::SetFlowerQty(int qty)                  
{ 
	this->flower_qty = qty; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Data::SetFlowerDescription(const char* desc) 
{ 
	strcpy(this->flower_description, desc); 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Data::SetFlowerDate(const char* date)        
{ 
	strcpy(this->flower_date, date); 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Data::SetFlowerId(int id)
{
	this->flower_id = id;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// Getter
int Data::GetFlowerId() const 
{ 
	return flower_id; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char* Data::GetFlowerName() const          
{ 
	return this->flower_name; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char* Data::GetFlowerType() const          
{ 
	return this->flower_type; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double Data::GetFlowerPrice() const              
{ 
	return this->flower_price; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int Data::GetFlowerQty() const                   
{ 
	return this->flower_qty;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char* Data::GetFlowerDescription() const   
{ 
	return this->flower_description; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char* Data::GetFlowerDate() const          
{ 
	return this->flower_date; 
}
////////////////////////////////////////////////////////////////////////////////////////////////////

#endif