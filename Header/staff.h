#ifndef ___INC_STAFF_H___
#define ___INC_STAFF_H___

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "ANTHeader/ANTHinsyOOP"
using namespace ANTHinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//				Classs of Stafff
class Staff{
	private:
		char staff_id[10];
		char staff_name[20];
		char staff_gender[10];
		char staff_email[25];
		char staff_PhoneNumber[12];
		
	public: 
		//setter
		void SetStaffId(const char* id);
		void SetStaffName(const char* name);
		void SetStaffGender(const char* gender);
		void SetStaffEmail(const char* email);
		void SetStaffPhoneNum(const char* phoneNum);
		
		//getter
		const char* GetStaffId() const;
		const char* GetStaffName() const;
		const char* GetStaffGender() const;
		const char* GetStaffEmail() const;
		const char* GetStaffPhoneNum() const;
		
		//simple method
		void InsertStaff();
		void DisplayStaff();
		
		// File
	    void WriteToFile();
	    void ReadAllFromFile();
	    void SearchFromFile();
	    void UpdateFromFile();
	    void DeleteFromFile();
		
		//header
		static void Header();
		
};
Staff staffs;
Staff temp;
fstream Myfile;
/*      									Body function propotype
	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
											Setter or Mutator
	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
//setter
void Staff::SetStaffId(const char* id)
{
	strcpy(this->staff_id, id);
}

void Staff::SetStaffName(const char* name)
{
	strcpy(this->staff_name, name);
}

void Staff::SetStaffGender(const char* gender)
{
	strcpy(this->staff_gender, gender);
}

void Staff::SetStaffEmail(const char* email)
{
	strcpy(this->staff_email, email);
}

void Staff::SetStaffPhoneNum(const char* phoneNum)
{
	strcpy(this->staff_PhoneNumber, phoneNum);
}

//getter
const char* Staff::GetStaffId() const 
{
	return this->staff_id;
}

const char* Staff::GetStaffName() const 
{
	return this->staff_name;
}

const char* Staff::GetStaffGender() const 
{
	return this->staff_gender;
}

const char* Staff::GetStaffEmail() const 
{
	return this->staff_email;
}

const char* Staff::GetStaffPhoneNum() const 
{
	return this->staff_PhoneNumber;
}

//header
void Staff::Header()
{
	cout << "\n\n\n" << "ID" << "\t" << "NAME" << "\t" <<  "GENDER" << "\t" << "EMAIL" << "\t\t\t" << "PHONE NUMBER" <<endl;		
}

void Staff::InsertStaff() {
	char strId[10], strPhoneNum[12];
	cout << "\nENTER STAFF ID           : "; H::inputUNumber(strId, 10); strcpy(this->staff_id, strId); 
	cout << "\nENTER STAFF NAME         : "; H::inputLetter(this->staff_name, 20);
	cout << "\nENTER STAFF GENDER       : "; H::inputLetter(this->staff_gender, 10);
	cout << "\nENTER STAFF EMAIL        : "; H::inputEmail(this->staff_email, 25);
	cout << "\nENTER STAFF PHONE NUMBER : "; H::input4Tel(strPhoneNum, 10); strcpy(this->staff_PhoneNumber, strPhoneNum);
}

void Staff::DisplayStaff() {
	cout << this->staff_id << "\t" << this->staff_name << "\t" << this->staff_gender << "\t"
			<< this->staff_email << "\t\t" << this->staff_PhoneNumber << endl;
}


void Staff::WriteToFile() {
	Myfile.open("Data/staff.bin", ios::out | ios::app | ios::binary  );
	if (Myfile.is_open()) {
		staffs.InsertStaff();
		Myfile.write((char*)&staffs, sizeof(Staff));
		Myfile.close();
	}
}

void Staff::ReadAllFromFile() {
	Myfile.open("Data/staff.bin", ios::in | ios::binary);
	Myfile.read((char*)&staffs, sizeof(Staff));
	Staff::Header();
	while (Myfile.eof() != true)
	{
		staffs.DisplayStaff();
		Myfile.read((char*)&staffs, sizeof(Staff));
	}
	Myfile.close();
}

void Staff::SearchFromFile() {
	char searchId[10];
	Myfile.open("Data/staff.bin", ios::in | ios::binary);
	Myfile.read((char*)&staffs, sizeof(Staff));
	
	cout << "ENTER ID TO SEARCH: ";  H::inputNumber(searchId, 10); strcpy(this->staff_id, searchId); 

	bool found = false;

	while (Myfile.eof() != true) {
		if (strcmp(staffs.GetStaffId(), searchId) == 0) {
			cout << "\nSTAFF ID " << searchId << " FOUND.\n";
			Staff::Header();
			staffs.DisplayStaff();
			found = true;
		}
		Myfile.read((char*)&staffs, sizeof(Staff));
	}
	if (!found){
		cout << "\nSTAFF ID " << searchId << " NOT FOUND.\n";
	}	        
	Myfile.close();
}

void Staff::UpdateFromFile() {
	char updateId[10];
	char strPhoneNum[12];
	Myfile.open("Data/staff.bin", ios::in | ios::out | ios::binary);
	Myfile.read((char*)&staffs, sizeof(Staff));
	cout << "ENTER ID TO UPDATE: "; H::inputNumber(updateId, 10);  strcpy(this->staff_id, updateId); 

	bool updated = false;	    
	
	while(Myfile.eof() != true) {
		if (strcmp(staffs.GetStaffId(), updateId) == 0) {
			int lastbyte = Myfile.tellg();
			
			cout << "\nENTER NEW DATA:\n";
			cout << "\nUPDATE STAFF NAME         : "; H::inputLetter(staffs.staff_name, 20);
			cout << "\nUPDATE STAFF GENDER       : "; H::inputLetter(staffs.staff_gender, 10);
			cout << "\nUPDATE STAFF EMAIL        : "; H::inputEmail(staffs.staff_email, 25);
			cout << "\nUPDATE STAFF PHONE NUMBER : "; H::inputNumber(strPhoneNum, 10); strcpy(staffs.staff_PhoneNumber, strPhoneNum);	
					
			cout << "\nSTAFF UPDATED SUCCESSFULLY.\n";
			updated = true;
			Myfile.seekp(lastbyte - sizeof(Staff));
			Myfile.write((char*)&staffs, sizeof(Staff));  
			
			Staff::Header();
			staffs.DisplayStaff();      
		}    
		Myfile.read((char*)&staffs, sizeof(Staff));       
	}

	if (!updated){
		cout << "\nSTAFF ID " << updateId << " NOT FOUND.\n";
	}
	
	Myfile.close();
}

void Staff::DeleteFromFile()
{
	ofstream backupData;
	backupData.open("Data/staffBackupData.bin", ios::out | ios::binary);
	Myfile.open("Data/staff.bin", ios::in | ios::binary);
	
	char deleteId[10];
	bool deleted = false;
	cout << "ENTER ID TO DELETE: "; H::inputNumber(deleteId, 10);  strcpy(this->staff_id, deleteId); 
	Myfile.read((char*)&staffs, sizeof(Staff));  
	
	while (Myfile.eof() != true) {
		if (strcmp(staffs.GetStaffId(), deleteId) == 0) {
			cout << "\nSTAFF ID " << deleteId << " DELETED SUCCESSFULLY.\n";		    
			deleted = true;
		} else {
			backupData.write((char*)&staffs, sizeof(Staff));
		}
		Myfile.read((char*)&staffs, sizeof(Staff));
	}
	
	if(!deleted)
	{
		cout << "\nSTAFF ID " << deleteId << " NOT FOUND.\n";
	}
	Myfile.close();
	backupData.close();
	remove("Data/staff.bin");
	rename("Data/staffBackupData.bin", "Data/staff.bin");
}

	

#endif