#ifndef ___INC_STAFF_H___
#define ___INC_STAFF_H___

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "ANTHinsyOOP"
#include "antheaderPlusPlus.h"
#include "antheaderInput.h"

using namespace ANTHinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
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
		void DisplayStaff(int i);
		
		// File
	    void WriteToFile();
	    void ReadAllFromFile();
	    void SearchFromFile();
	    void UpdateFromFile();
	    void DeleteFromFile();
		
		// static counter for auto ID
		static int staff_count;
		//header
		static void HeaderDisplay();
		void HeaderSearch();
		void HeaderDelete();
	
		
};
Staff staffs;
Staff temp;
int Staff::staff_count = 1000;
fstream Myfile;
fstream autoId;
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
	void Staff::HeaderDisplay()
	{	
		H::HLine(30,15,110,0,205);
		H::HLine(30,17,110,0,205);
		H::VLine(30,14,1,0,201);
		H::VLine(30,15,1,0,186);
		H::VLine(30,16,1,0,200);
		
		//id
		H::VLine(45,14,1,0,203);
		H::VLine(45,15,1,0,186);
		H::VLine(45,16,1,0,202);
		
		//name
		H::VLine(70,14,1,0,203);
		H::VLine(70,15,1,0,186);
		H::VLine(70,16,1,0,202);
		
		//gender
		H::VLine(89,14,1,0,203);
		H::VLine(89,15,1,0,186);
		H::VLine(89,16,1,0,202);
		
		//email
		H::VLine(119,14,1,0,203);
		H::VLine(119,15,1,0,186);
		H::VLine(119,16,1,0,202);
		
		//phone number
		H::VLine(141,14,1,0,187);
		H::VLine(141,15,1,0,186);
		H::VLine(141,16,1,0,188);
			
		H::setcolor(5); 
		H::gotoxy(36,16); cout << "ID";	
		H::gotoxy(55,16); cout << "NAME";
		H::gotoxy(76,16); cout << "GENDER";
		H::gotoxy(101,16); cout << "EMAIL";
		H::gotoxy(123,16); cout << "PHONE NUMBER";

	}
	
	void Staff::HeaderSearch()
	{
		H::HLine(30,22,110,0,205);
		H::HLine(30,24,110,0,205);
		
		H::VLine(30,21,1,0,201);
		H::VLine(30,22,1,0,186);
		H::VLine(30,23,1,0,200);
		
		//id
		H::VLine(45,21,1,0,203);
		H::VLine(45,22,1,0,186);
		H::VLine(45,23,1,0,202);
		
		//name
		H::VLine(70,21,1,0,203);
		H::VLine(70,22,1,0,186);
		H::VLine(70,23,1,0,202);
		
		//gender
		H::VLine(89,21,1,0,203);
		H::VLine(89,22,1,0,186);
		H::VLine(89,23,1,0,202);
		
		//email
		H::VLine(119,21,1,0,203);
		H::VLine(119,22,1,0,186);
		H::VLine(119,23,1,0,202);
		
		//phone number
		H::VLine(141,21,1,0,187);
		H::VLine(141,22,1,0,186);
		H::VLine(141,23,1,0,188);
		
		H::setcolor(5); 
		H::gotoxy(36,23); cout << "ID";	
		H::gotoxy(55,23); cout << "NAME";
		H::gotoxy(76,23); cout << "GENDER";
		H::gotoxy(101,23); cout << "EMAIL";
		H::gotoxy(123,23); cout << "PHONE NUMBER";
		
		
		H::VLine(30,23,1,0,204);
		H::VLine(30,24,1,0,186);
		
		H::VLine(141,23,1,0,185);
		H::VLine(141,24,1,0,186);
		
		H::HLine(30,26,110,0,205);
		H::VLine(30,25,1,0,200);
		H::VLine(141,25,1,0,188);
		
		H::setcolor(1);
		H::gotoxy(35,25); cout << this->staff_id;
		H::gotoxy(53,25); cout << this->staff_name;
		H::gotoxy(76,25); cout << this->staff_gender;
		H::gotoxy(95,25); cout << this->staff_email;
		H::gotoxy(123,25); cout << this->staff_PhoneNumber;
		
		
		
	}
	
	void Staff::HeaderDelete()
	{
		H::HLine(30,19,110,0,205);
		H::HLine(30,21,110,0,205);
		
		H::VLine(30,18,1,0,201);
		H::VLine(30,19,1,0,186);
		H::VLine(30,20,1,0,200);
		
		//id
		H::VLine(45,18,1,0,203);
		H::VLine(45,19,1,0,186);
		H::VLine(45,20,1,0,202);
		
		//name
		H::VLine(70,18,1,0,203);
		H::VLine(70,19,1,0,186);
		H::VLine(70,20,1,0,202);
		
		//gender
		H::VLine(89,18,1,0,203);
		H::VLine(89,19,1,0,186);
		H::VLine(89,20,1,0,202);
		
		//email
		H::VLine(119,18,1,0,203);
		H::VLine(119,19,1,0,186);
		H::VLine(119,20,1,0,202);
		
		//phone number
		H::VLine(141,18,1,0,187);
		H::VLine(141,19,1,0,186);
		H::VLine(141,20,1,0,188);
		
		H::setcolor(5); 
		H::gotoxy(36,20); cout << "ID";	
		H::gotoxy(55,20); cout << "NAME";
		H::gotoxy(76,20); cout << "GENDER";
		H::gotoxy(101,20); cout << "EMAIL";
		H::gotoxy(123,20); cout << "PHONE NUMBER";
		
		
		H::VLine(30,20,1,0,204);
		H::VLine(30,21,1,0,186);
		
		H::VLine(141,20,1,0,185);
		H::VLine(141,21,1,0,186);
		
		H::HLine(30,23,110,0,205);
		H::VLine(30,22,1,0,200);
		H::VLine(141,22,1,0,188);
		
		H::setcolor(1);
		H::gotoxy(35,22); cout << this->staff_id;
		H::gotoxy(53,22); cout << this->staff_name;
		H::gotoxy(76,22); cout << this->staff_gender;
		H::gotoxy(95,22); cout << this->staff_email;
		H::gotoxy(123,22); cout << this->staff_PhoneNumber;
	}
	
	
	
	void Staff::InsertStaff() {
	    char strPhoneNum[12];
		mkdir("Data");

		ifstream idFile("Data/lastStaffId.bin", ios::binary);
		if(idFile){
		    idFile.read((char*)&staff_count, sizeof(staff_count));
		    idFile.close();
		} else {
		    staff_count = 1000;
		}
		
		sprintf(this->staff_id, "S-%d", staff_count++);
//		this->staff_id, staff_count++;
		
		ofstream idOut("Data/lastStaffId.bin", ios::binary);
		idOut.write((char*)&staff_count, sizeof(staff_count));
		idOut.close();
			    
	    H::HLine(45,17,33,135,255);
	    H::setcolor(135); H::gotoxy(50,17); cout << "STAFF ID : "; 
	    
	   	H::HLine(92,17,33,135,255);
	    H::setcolor(135); H::gotoxy(97,17); cout << this->staff_id;
				
	    H::HLine(45,19,33,135,255);
		H::setcolor(135); H::gotoxy(50,19); cout << "ENTER STAFF NAME ";
			    
	    H::HLine(45,21,33,135,255);
		H::setcolor(135); H::gotoxy(50,21); cout << "ENTER STAFF GENDER ";
			    
	   	H::HLine(45,23,33,135,255);
		H::setcolor(135); H::gotoxy(50,23); cout << "ENTER STAFF EMAIL ";
			    
	    H::HLine(45,25,33,135,255);
		H::setcolor(135); H::gotoxy(50,25); cout << "ENTER STAFF PHONE NUMBER ";
		
	    
	
		H::HLine(92,19,33,135,255);
		H::setcolor(135); H::gotoxy(97,19); H::inputLetter(this->staff_name, 20);
		H::HLine(92,21,33,135,255);
		H::setcolor(135); H::gotoxy(97,21); H::inputLetter(this->staff_gender, 10);
		H::HLine(92,23,33,135,255);
		H::setcolor(135); H::gotoxy(97,23); H::inputEmail(this->staff_email, 25);
		H::HLine(92,25,33,135,255);
		H::setcolor(135); H::gotoxy(97,25);H::input4Tel(strPhoneNum, 10); strcpy(this->staff_PhoneNumber, strPhoneNum);
	}
	
	void Staff::DisplayStaff(int i) {	
		int y = 19 + i*2; 
   
//		H::drawBoxSingleLine(30,18,110,9,0);
		H::VLine(30,16,1,0,204);
		H::VLine(30,17,11,0,186);
		
		H::VLine(141,16,1,0,185);
		H::VLine(141,17,11,0,186);
		
		H::HLine(30,28,110,0,205);
		H::VLine(30,27,1,0,200);
		H::VLine(141,27,1,0,188);
		
		H::setcolor(1);
		H::gotoxy(35,y); cout << this->staff_id;
		H::gotoxy(53,y); cout << this->staff_name;
		H::gotoxy(76,y); cout << this->staff_gender;
		H::gotoxy(95,y); cout << this->staff_email;
		H::gotoxy(123,y); cout << this->staff_PhoneNumber;

	}

	
	void Staff::WriteToFile() {
		mkdir("Data");
	    Myfile.open("Data/staff.bin", ios::out | ios::app | ios::binary  );
	    if (Myfile.is_open()) {
	    	staffs.InsertStaff();
	        Myfile.write((char*)&staffs, sizeof(Staff));
	        Myfile.close();
	    }
	}
	
	void Staff::ReadAllFromFile() {
		int i=0;
	    Myfile.open("Data/staff.bin", ios::in | ios::binary);
	    Staff::HeaderDisplay();
	    while (Myfile.read((char*)&staffs, sizeof(Staff)))
	    {
	    	staffs.DisplayStaff(i);
	    	i++;
		}
	    Myfile.close();
	}
	
	void Staff::SearchFromFile() {
		int i=0;
	    char searchId[10];
	    Myfile.open("Data/staff.bin", ios::in | ios::binary);
	    	    
	    
	    H::setcolor(7); H::gotoxy(58,16); cout << "ENTER ID TO SEARCH: "; 
		H::setcolor(6); H::gotoxy(88,16);  H::inputNumber(searchId, 10); strcpy(this->staff_id, searchId); 
	
	    bool found = false;
	
	    while (Myfile.read((char*)&staffs, sizeof(Staff))) {
		    if (strcmp(staffs.GetStaffId(), searchId) == 0) {		    	
		    	H::setcolor(2); H::gotoxy(61,20);	cout << ">>>>>>>>>>>>>>> STAFF ID " << searchId << " FOUND <<<<<<<<<<<<<<<";
		    	staffs.HeaderSearch();
//		        staffs.DisplayStaff(i);
		        found = true;
		    }
		}
	    if (!found){
	    	H::HLine(48,22,73,5,220);
			H::HLine(48,26,73,5,223);
						
			H::VLine(51,21,5,2,219);
													
			H::VLine(119,21,5,2,219);
	    	H::setcolor(4); H::gotoxy(58,24); cout << ">>>>>>>>>>>>>>> STAFF ID " << searchId << " NOT FOUND <<<<<<<<<<<<<<<";
		}	        
	    Myfile.close();
	}
	
		void Staff::UpdateFromFile() {
			int i=0;
		    char updateId[10];
		    char strPhoneNum[12];
		    Myfile.open("Data/staff.bin", ios::in | ios::out | ios::binary);

		    H::setcolor(7); H::gotoxy(58,16); cout << "ENTER ID TO UPDATE: ";
			H::setcolor(6); H::gotoxy(88,16);  H::inputNumber(updateId, 10);  strcpy(this->staff_id, updateId); 
	
		    bool updated = false;	    
			
		    while(Myfile.read((char*)&staffs, sizeof(Staff))) {
		        if (strcmp(staffs.GetStaffId(), updateId) == 0) {
		        	int lastbyte = Myfile.tellg();
		     		
//		     		H::drawBoxSingleLine(38,19,97,5,0);
		            H::setcolor(1); H::gotoxy(62,20); cout << ">>>>>>>>>>>>>>> ENTER NEW DATA <<<<<<<<<<<<<<<";	            
		       
		            H::setcolor(3); H::gotoxy(41,22); cout << "UPDATE STAFF NAME  : "; 
					H::setcolor(6); H::inputLetter(staffs.staff_name, 20);          
		          
				    H::setcolor(3); H::gotoxy(95,22);  cout << "UPDATE STAFF GENDER       : ";
					H::setcolor(6); H::inputLetter(staffs.staff_gender, 10);				    
	
				    H::setcolor(3); H::gotoxy(41,24);  cout << "UPDATE STAFF EMAIL : ";
					H::setcolor(6); H::inputEmail(staffs.staff_email, 25);				    
	
				    H::setcolor(3); H::gotoxy(95,24); cout << "UPDATE STAFF PHONE NUMBER : ";
					H::setcolor(6); H::inputNumber(strPhoneNum, 10); strcpy(staffs.staff_PhoneNumber, strPhoneNum);	
					
					H::setcursor(0, 0);
				    int m = 1;
				    int cycle = 0;
				    while (cycle < 10) {
				        if (m > 14) m = 1;
				
				        H::setcolor(m++); H::gotoxy(58, 27); cout << ">>>>>>>>>>>>>>> STAFF UPDATED SUCCESSFULLY <<<<<<<<<<<<<<<";			
				        H::delay(50);
				        cycle++;
				    }
				
				    H::setcolor(2);
				    H::gotoxy(58, 27);
				    cout << ">>>>>>>>>>>>>>> STAFF UPDATED SUCCESSFULLY <<<<<<<<<<<<<<<";

		            updated = true;
		            Myfile.seekp(lastbyte - sizeof(Staff));
					Myfile.write((char*)&staffs, sizeof(Staff));  
					
//					Staff::Header();
//					staffs.DisplayStaff(i); 
					    
		        }    				      
		    }
		
		    if (!updated){
		    	H::setcursor(0, 0);
				    int m = 1;
				    int cycle = 0;
				    while (cycle < 10) {
				        if (m > 14) m = 1;
				
				        H::setcolor(m++); H::gotoxy(61,23);  cout << ">>>>>>>>>>>>>>> STAFF ID " << updateId << " NOT FOUND <<<<<<<<<<<<<<<";			
				        H::delay(50);
				        cycle++;
				    }
				
				    H::setcolor(4);  H::gotoxy(61,23);  cout << ">>>>>>>>>>>>>>> STAFF ID " << updateId << " NOT FOUND <<<<<<<<<<<<<<<";
				   				    
//		    	H::setcolor(4); H::gotoxy(61,23);  cout << ">>>>>>>>>>>>>>> STAFF ID " << updateId << " NOT FOUND <<<<<<<<<<<<<<<";
			}
		    
		    Myfile.close();
		}

		void Staff::DeleteFromFile()
		{
			int i=0;
			ofstream backupData;
			mkdir("Data");
			backupData.open("Data/staffBackupData.bin", ios::out | ios::binary);
			Myfile.open("Data/staff.bin", ios::in | ios::binary);
			
			char deleteId[10];
			bool deleted = false;
			H::setcolor(7); H::gotoxy(58,16); cout << "ENTER ID TO DELETE: "; 
			H::setcolor(6); H::gotoxy(88,16); H::inputNumber(deleteId, 10);  strcpy(this->staff_id, deleteId); 
					
			while (Myfile.read((char*)&staffs, sizeof(Staff))) {
			    if (strcmp(staffs.GetStaffId(), deleteId) == 0) {
					staffs.HeaderDelete();		
			    	H::setcursor(0, 0);
				    int m = 1;
				    int cycle = 0;
				    while (cycle < 10) {
				        if (m > 14) m = 1;
						H::HLine(48,24,73,5,220);
						H::HLine(48,28,73,5,223);
						
						H::VLine(51,23,5,2,219);
													
						H::VLine(119,23,5,2,219); 
				        H::setcolor(m++); H::gotoxy(55, 26); cout << ">>>>>>>>>>>>>>> STAFF DELETED SUCCESSFULLY <<<<<<<<<<<<<<<";			
				        H::delay(50);
				        cycle++;
				    }
				
				    H::setcolor(2); H::gotoxy(55, 26);cout << ">>>>>>>>>>>>>>> STAFF DELETED SUCCESSFULLY <<<<<<<<<<<<<<<";		 
					   
			        deleted = true;
			    } else {
			    	backupData.write((char*)&staffs, sizeof(Staff));
				}
			}
			
			if(!deleted)
			{
				H::HLine(48,22,73,5,220);
				H::HLine(48,26,73,5,223);
						
				H::VLine(51,21,5,2,219);
													
				H::VLine(119,21,5,2,219); 
			
		    	H::setcursor(0, 0);
				int m = 1;
				int cycle = 0;
				while (cycle < 10) {
				    if (m > 14) m = 1;				
				    H::setcolor(m++); H::gotoxy(57,24);  cout << ">>>>>>>>>>>>>>> STAFF ID " << deleteId << " NOT FOUND <<<<<<<<<<<<<<<";		
			        H::delay(50);
				    cycle++;
				}
			  	H::setcolor(1); H::gotoxy(57,24);  cout << ">>>>>>>>>>>>>>> STAFF ID " << deleteId << " NOT FOUND <<<<<<<<<<<<<<<";
				
			}
			Myfile.close();
			backupData.close();
		    remove("Data/staff.bin");
		    rename("Data/staffBackupData.bin", "Data/staff.bin");
		    
		}
	
	
#endif