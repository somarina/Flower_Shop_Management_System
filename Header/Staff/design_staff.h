#ifndef ___INC_DESIGNSTAFF_H___
#define ___INC_DESIGNSTAFF_H___

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../ANTHeader/ANTHinsyOOP"
#include "staff.h"
#include "../User/User.h"
using namespace ANTHinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

///////////////////////////////////////////////////////////////////////////////////////////////////////////
void LoginAsStaff();
void StaffFeature();
void Menu(int x, int y);
void designUpdate();
void designDelete();
void designSearch();
void designDisplay();
void design();
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void design()
{
	//border pink
	H::HLine(0,0,170,213,255);
	H::VLine(4,0,39,213,255);
	H::VLine(5,0,39,213,255);
	H::HLine(0,39,170,213,255);
	H::VLine(165,0,39,213,255);
	H::VLine(166,0,39,213,255);
	

	H::HLine(29,3,112,187,255);
	H::HLine(29,12,112,187,255); 
	
	H::VLine(32,1,12,4,219);
	H::VLine(33,1,12,4,219);
	
	H::VLine(34,3,3,5,219);
	H::HLine(34,4,4,5,223);
	
	H::VLine(138,1,12,4,219);
	H::VLine(139,1,12,4,219);
	
	//corner top left
	H::HLine(30,2,1,1,220);
	
	H::VLine(34,3,3,213,219);
	H::HLine(34,4,5,5,223);
	H::HLine(34,4,4,165,223);	
	H::VLine(35,4,1,170,219);
	
	//corner bottom left
	H::HLine(30,13,1,1,223);
	
	H::VLine(34,8,3,213,219);
	H::HLine(34,11,5,5,220);
	H::HLine(34,11,4,165,220);	
	H::VLine(35,9,1,170,219);
	
	//corner top right
	H::HLine(139,2,1,1,220);
	
	H::VLine(137,3,3,213,219);
	H::HLine(131,4,5,5,223);
	H::HLine(132,4,4,165,223);	
	H::VLine(136,4,1,170,219);
	
	//corner bottom right
	H::HLine(139,13,1,1,223);
	
	H::VLine(137,8,3,213,219);
	H::HLine(131,11,5,5,220);
	H::HLine(132,11,4,165,220);	
	H::VLine(136,9,1,170,219);
	
	// wall left top
	H::VLine(13,4,24,51,255);
	H::VLine(12,4,24,51,255);

	H::HLine(8,3,8,196,255);
	H::HLine(9,4,6,5,223);
	H::HLine(10,4,4,165,223);
	
	// wall left bottom
	H::HLine(8,30,8,196,255);
	H::HLine(9,29,6,5,220);
	H::HLine(10,29,4,165,220);
	
	// wall right top
	H::VLine(157,4,24,51,255);
	H::VLine(158,4,24,51,255);

	H::HLine(153,3,8,196,255);
	H::HLine(154,4,6,5,223);
	H::HLine(155,4,4,165,223);
	
	// wall right bottom
	H::HLine(153,30,8,196,255);
	H::HLine(154,29,6,5,220);
	H::HLine(155,29,4,165,220);
		
}

// void designDisplay()
// {
// 	design();
// 	H::setcolor(1);	H::gotoxy(48,5);cout << R"(    ____  _________ ____  __    _____  __   ______________    ____________ )";
// 	H::setcolor(1);	H::gotoxy(48,6);cout << R"(   / __ \/  _/ ___// __ \/ /   /   \ \/ /  / ___/_  __/   |  / ____/ ____/ )";
// 	H::setcolor(1);	H::gotoxy(48,7);cout << R"(  / / / // / \__ \/ /_/ / /   / /| |\  /   \__ \ / / / /| | / /_  / /_     )";
// 	H::setcolor(2);	H::gotoxy(48,8);cout << R"( / /_/ _/ / ___/ / ____/ /___/ ___ |/ /   ___/ // / / ___ |/ __/ / __/     )";
// 	H::setcolor(2);	H::gotoxy(48,9);cout << R"(/_____/___//____/_/   /_____/_/  |_/_/   /____//_/ /_/  |_/_/   /_/        )";                                                              
	
// 	staffs.ReadAllFromFile();
// 	H::drawBoxSingleLine(70,29,28,1,5);
// 	H::setcolor(6); H::gotoxy(73,30); cout << "Press [ ESC ] For Back";
	
// 	H::setcursor(0,0);
//     int m=1;
//     while(true)
//     {
// 	    if(m>14)
// 	    {
// 	      m=1;
// 	    }
    
// 	    H::setcolor(m++);  H::gotoxy(6,32);cout << R"(      wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw )";
// 	    H::setcolor(m++);  H::gotoxy(6,33);cout << R"(vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv)";
// 	    H::setcolor(m++);  H::gotoxy(6,34);cout << R"((___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
// 	    H::setcolor(m++);  H::gotoxy(6,35);cout << R"( ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
// 	    H::setcolor(m++);  H::gotoxy(6,36);cout << R"( \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |)";
// 	    H::setcolor(m++);  H::gotoxy(6,37);cout << R"(\\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/ )";
// 	    H::setcolor(m++);  H::gotoxy(6,38);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
		
// 		H::delay(500);

//         if (_kbhit()) {
//             char key = _getch();
//             if (key == 27)
// 	       	{
// 	        	H::cls();
// 	            break;
// 	        }
//         }
// 	}
// }
void DesignDisplay1()
{
	design();
	H::setcolor(1);	H::gotoxy(48,5);cout << R"(    ____  _________ ____  __    _____  __   ______________    ____________ )";
	H::setcolor(1);	H::gotoxy(48,6);cout << R"(   / __ \/  _/ ___// __ \/ /   /   \ \/ /  / ___/_  __/   |  / ____/ ____/ )";
	H::setcolor(1);	H::gotoxy(48,7);cout << R"(  / / / // / \__ \/ /_/ / /   / /| |\  /   \__ \ / / / /| | / /_  / /_     )";
	H::setcolor(2);	H::gotoxy(48,8);cout << R"( / /_/ _/ / ___/ / ____/ /___/ ___ |/ /   ___/ // / / ___ |/ __/ / __/     )";
	H::setcolor(2);	H::gotoxy(48,9);cout << R"(/_____/___//____/_/   /_____/_/  |_/_/   /____//_/ /_/  |_/_/   /_/        )";                                                              
	
	// staffs.ReadAllFromFile();
	// H::drawBoxSingleLine(70,29,28,1,5);
	
	
// 	H::setcursor(0,0);
    
	H::setcolor(1);  H::gotoxy(6,32);cout << R"(      wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw )";
	H::setcolor(3);  H::gotoxy(6,33);cout << R"(vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv)";
	H::setcolor(4);  H::gotoxy(6,34);cout << R"((___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
	H::setcolor(5);  H::gotoxy(6,35);cout << R"( ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
	H::setcolor(2);  H::gotoxy(6,36);cout << R"( \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |)";
	H::setcolor(2);  H::gotoxy(6,37);cout << R"(\\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/ )";
	H::setcolor(2);  H::gotoxy(6,38);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
		
// 		H::delay(500);

//         if (_kbhit()) {
//             char key = _getch();
//             if (key == 27)
// 	       	{
// 	        	H::cls();
// 	            break;
// 	        }
//         }
// 	}
// }	
}
void designDisplay() {

	
    fstream file;
    Staff tempStaff;
    file.open("Data/staff.flower", ios::in | ios::binary);
    if (!file) {
		DesignDisplay1();
		Staff::HeaderDisplay();
        H::setcolor(4); H::gotoxy(50, 16);
        cout << "No staff data found!";
        return;
    }

    const int pageSize = 5; // show 5 records per page
    int totalStaff = 0;

    // count total records
    while (file.read((char*)&tempStaff, sizeof(Staff)))
        totalStaff++;
    file.clear(); file.seekg(0, ios::beg); // reset file pointer

    int page = 0;
    char key;
	DesignDisplay1();
	Staff::HeaderDisplay();
    do {
		H::clearBox(34,19,100,9,7);
        int startIndex = page * pageSize;
        int endIndex = min(startIndex + pageSize, totalStaff);

        int i = 0;
		int j = 1;
        file.clear(); file.seekg(0, ios::beg);
        while (file.read((char*)&tempStaff, sizeof(Staff))) {
            if (i >= startIndex && i < endIndex)
                tempStaff.DisplayStaff(i - startIndex,j);
			j++;
            i++;
			if(j>7)
			{
				j=1;
			}
        }

        H::setcolor(3);H::gotoxy(78, 29); cout << "Page " << page + 1 << "/" << ((totalStaff + pageSize - 1) / pageSize);
		H::setcolor(6); H::gotoxy(58,30); cout << "Use Left/Right arrows to Show Next PAGE Anf [ ESC ] For Back";

        key = getch();
        if (key == 0 || key == -32) {
            key = getch();
            if (key == 77 && (page + 1) * pageSize < totalStaff) page++; // right arrow
            if (key == 75 && page > 0) page--; // left arrow
        }
    } while (key != 27); // ESC to exit

    file.close();
}


void designSearch()
{
	design();	
	H::setcolor(1);	H::gotoxy(48,5);cout << R"(   _____ _________    ____  ________  __   ______________    ____________ )";
	H::setcolor(1);	H::gotoxy(48,6);cout << R"(  / ___// ____/   |  / __ \/ ____/ / / /  / ___/_  __/   |  / ____/ ____/ )";
	H::setcolor(1);	H::gotoxy(48,7);cout << R"(  \__ \/ __/ / /| | / /_/ / /   / /_/ /   \__ \ / / / /| | / /_  / /_     )";
	H::setcolor(2);	H::gotoxy(48,8);cout << R"( ___/ / /___/ ___ |/ _, _/ /___/ __  /   ___/ // / / ___ |/ __/ / __/     )";
	H::setcolor(2);	H::gotoxy(48,9);cout << R"(/____/_____/_/  |_/_/ |_|\____/_/ /_/   /____//_/ /_/  |_/_/   /_/        )";
	
	H::HLine(48,14,73,5,220);
	H::HLine(48,18,73,5,223);
	
	H::VLine(51,13,5,2,219);
	    
	H::VLine(85,14,3,2,219);
			
	H::VLine(119,13,5,2,219);
	staffs.SearchFromFile();
	
	H::drawBoxSingleLine(55,29,63,1,5);
	H::setcolor(6); H::gotoxy(58,30); cout << "Press [ ESC ] For Back and Press [ ENTER ] For Input More ";
	
	H::setcursor(0,0);
    int m=1;
    while(true)
    {
    	
	    if(m>14)
	    {
	      m=1;
	    }
    
	    H::setcolor(m++);  H::gotoxy(6,32);cout << R"(      wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw )";
	    H::setcolor(m++);  H::gotoxy(6,33);cout << R"(vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv)";
	    H::setcolor(m++);  H::gotoxy(6,34);cout << R"((___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
	    H::setcolor(m++);  H::gotoxy(6,35);cout << R"( ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
	    H::setcolor(m++);  H::gotoxy(6,36);cout << R"( \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |)";
	    H::setcolor(m++);  H::gotoxy(6,37);cout << R"(\\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/ )";
	    H::setcolor(m++);  H::gotoxy(6,38);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
		H::delay(500);
  
		if (_kbhit()) {       
            char key = _getch();
            if (key == 27) {  
               	H::cls();
                break;       
				H::cls(); 
            } 

			if (key == 13) {  
               	H::cls();
                designSearch();    
				H::cls(); 
				break;
            } 
        }
        
       
	}
	
}


void designDelete()
{
	design();	
	
	H::setcolor(1);	H::gotoxy(48,5);cout << R"(    ____  ________    __________________   ______________    ____________ )";
	H::setcolor(1);	H::gotoxy(48,6);cout << R"(   / __ \/ ____/ /   / ____/_  __/ ____/  / ___/_  __/   |  / ____/ ____/ )";
	H::setcolor(1);	H::gotoxy(48,7);cout << R"(  / / / / __/ / /   / __/   / / / __/     \__ \ / / / /| | / /_  / /_     )";
	H::setcolor(2);	H::gotoxy(48,8);cout << R"( / /_/ / /___/ /___/ /___  / / / /___    ___/ // / / ___ |/ __/ / __/     )";
	H::setcolor(2);	H::gotoxy(48,9);cout << R"(/_____/_____/_____/_____/ /_/ /_____/   /____//_/ /_/  |_/_/   /_/        )";
	                                                                        
    H::HLine(48,14,73,5,220);
	H::HLine(48,18,73,5,223);
	
	H::VLine(51,13,5,2,219);
	    
	H::VLine(85,14,3,2,219);
			
	H::VLine(119,13,5,2,219);    
	
	   
	                                                              
	staffs.DeleteFromFile();
	
	H::drawBoxSingleLine(55,29,63,1,5);
	H::setcolor(6); H::gotoxy(58,30); cout << "Press [ ESC ] For Back and Press [ ENTER ] For Input More ";
	
	H::setcursor(0,0);
    int m=1;
    while(true)
    {
    	
	    if(m>14)
	    {
	      m=1;
	    }
    
	    H::setcolor(m++);  H::gotoxy(6,32);cout << R"(      wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw )";
	    H::setcolor(m++);  H::gotoxy(6,33);cout << R"(vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv)";
	    H::setcolor(m++);  H::gotoxy(6,34);cout << R"((___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
	    H::setcolor(m++);  H::gotoxy(6,35);cout << R"( ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
	    H::setcolor(m++);  H::gotoxy(6,36);cout << R"( \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |)";
	    H::setcolor(m++);  H::gotoxy(6,37);cout << R"(\\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/ )";
	    H::setcolor(m++);  H::gotoxy(6,38);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
		H::delay(500);
  
		if (_kbhit()) {       
            char key = _getch();
            if (key == 27) {  
               	H::cls();
                break;       
				H::cls(); 
            } 

			if (key == 13) {  
               	H::cls();
                designDelete();    
				H::cls(); 
				break;
            } 
        }
        
       
	}
	
}

void designUpdate()
{
	design();	
                				
	H::setcolor(1);	H::gotoxy(48,5);cout << R"(   __  ______  ____  ___  ____________   ______________    ____________ )";
	H::setcolor(1);	H::gotoxy(48,6);cout << R"(  / / / / __ \/ __ \/   |/_  __/ ____/  / ___/_  __/   |  / ____/ ____/ )";
	H::setcolor(1);	H::gotoxy(48,7);cout << R"( / / / / /_/ / / / / /| | / / / __/     \__ \ / / / /| | / /_  / /_     )";
	H::setcolor(2);	H::gotoxy(48,8);cout << R"(/ /_/ / ____/ /_/ / ___ |/ / / /___    ___/ // / / ___ |/ __/ / __/     )";
	H::setcolor(2);	H::gotoxy(48,9);cout << R"(\____/_/   /_____/_/  |_/_/ /_____/   /____//_/ /_/  |_/_/   /_/        )";
    
	H::HLine(48,14,73,5,220);
	H::HLine(48,18,73,5,223);
	
	H::VLine(51,13,5,2,219);
	    
	H::VLine(85,14,3,2,219);
			
	H::VLine(119,13,5,2,219);                                                                   				                                                      
	staffs.UpdateFromFile();
	
	H::drawBoxSingleLine(55,29,63,1,5);
	H::setcolor(6); H::gotoxy(58,30); cout << "Press [ ESC ] For Back and Press [ ENTER ] For Input More ";
	
	H::setcursor(0,0);
    int m=1;
    while(true)
    {
    	
	    if(m>14)
	    {
	      m=1;
	    }
	    H::setcolor(m++);  H::gotoxy(6,32);cout << R"(      wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw )";
	    H::setcolor(m++);  H::gotoxy(6,33);cout << R"(vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv)";
	    H::setcolor(m++);  H::gotoxy(6,34);cout << R"((___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
	    H::setcolor(m++);  H::gotoxy(6,35);cout << R"( ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
	    H::setcolor(m++);  H::gotoxy(6,36);cout << R"( \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |)";
	    H::setcolor(m++);  H::gotoxy(6,37);cout << R"(\\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/ )";
	    H::setcolor(m++);  H::gotoxy(6,38);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	    H::delay(500);
  
		if (_kbhit()) {       
            char key = _getch();
            if (key == 27) {  
               	H::cls();
                break;       
				H::cls(); 
            } 

			if (key == 13) {  
               	H::cls();
                designUpdate();    
				H::cls(); 
				break;
            } 
        }
        
       
	}
	
}

void Menu(int x, int y)
{

	H::setcursor(0,0);
   //border pink
	H::HLine(0,0,170,213,255);
	H::VLine(1,0,39,213,255);
	H::VLine(2,0,39,213,255);
	H::HLine(0,39,170,213,255);
	H::VLine(170,0,39,213,255);
	H::VLine(169,0,39,213,255);
	
	//border yellow
	H::HLine(6,1,158,230,255);
	H::HLine(6,38,158,230,255);
	
	//border green
	H::HLine(10,2,150,162,255);
	H::HLine(10,37,150,162,255);
	
	//staff feature
	H::drawBoxSingleLineWithBG(75,5,23,1,213);
	H::setcolor(215); H::gotoxy(80,6); cout << "STAFF FEATURE";
	
	//left
	H::HLine(63,6,11,6,223);
	H::VLine(63,5,2,6,219);
	H::HLine(52,7,10,6,220);
	H::VLine(53,7,3,6,219);
	
	//display
	H::drawBoxSingleLineWithBG(44,11,16,1,213);
	H::setcolor(215); H::gotoxy(49,12); cout << "DISPLAY";

	
	//right
	H::HLine(99,6,11,6,223);
	H::VLine(111,5,2,6,219);
	H::HLine(111,7,10,6,220);
	H::VLine(121,7,3,6,219);
	
	//search
	H::drawBoxSingleLineWithBG(113,11,16,1,213);
	H::setcolor(215); H::gotoxy(118,12); cout << "SEARCH";
	
	// flower ascii 1
	H::HLine(61,12,20,2,220);
	
	H::setcolor(3);	H::gotoxy(77,9);	cout << R"(     .;:;:.     `::`)";
	H::setcolor(4);	H::gotoxy(77,10);	cout << R"(     ::;:':      /)";
	H::setcolor(5);	H::gotoxy(77,11);	cout << R"(   _ ';:;;'     `)";
	H::setcolor(3);	H::gotoxy(77,12);	cout << R"(   >'. ||  _ )";
	H::setcolor(4);	H::gotoxy(77,13);	cout << R"(   `> \||.'< )";
	H::setcolor(2);	H::gotoxy(77,14);	cout << R"(     `>|/ <` )";
	H::setcolor(2);	H::gotoxy(77,15);	cout << R"(      `||/`  )";
	H::setcolor(2);	H::gotoxy(77,16);	cout << R"(	^^^^^^^^^^^	)";
	
	H::HLine(93,12,19,2,220);
	
	//1,3 left
	H::VLine(48,13,11,6,219);
	H::VLine(49,14,9,5,219);
	H::VLine(50,15,7,2,219);
	H::VLine(51,16,5,6,219);
	H::VLine(52,17,3,5,219);
	
	H::VLine(53,17,3,5,219);
	H::VLine(54,16,5,6,219);
	H::VLine(55,15,7,2,219);
	H::VLine(56,14,9,5,219);
	H::VLine(57,13,11,6,219);
	
	//update
	H::drawBoxSingleLineWithBG(44,25,16,1,213);
	H::setcolor(215); H::gotoxy(45,26); cout << "SHOW USER DATA";
	
	//flower ascii2
	H::HLine(61,26,20,2,220);
   	H::setcolor(3);	H::gotoxy(77,22);	cout << R"(      .--.   )";
    H::setcolor(3);	H::gotoxy(77,23);	cout << R"(    .'_\/_'. )";
    H::setcolor(3);	H::gotoxy(77,24);	cout << R"(    '. /\ .' )";
    H::setcolor(3);	H::gotoxy(77,25);	cout << R"(      "||"   )";
    H::setcolor(2);	H::gotoxy(77,26);	cout << R"(       || /\ )";
    H::setcolor(2);	H::gotoxy(77,27);	cout << R"(    /\ || /\ )";
    H::setcolor(2);	H::gotoxy(77,28);	cout << R"(   (/\\||/    )";
    H::setcolor(2);	H::gotoxy(77,29);	cout << R"(______\||/_______ )";
    H::HLine(93,26,19,2,220);
	
	//2,4 left
	H::VLine(117,13,11,6,219);
	H::VLine(118,14,9,5,219);
	H::VLine(119,15,7,2,219);
	H::VLine(120,16,5,6,219);
	H::VLine(121,17,3,5,219);
	
	H::VLine(122,17,3,5,219);
	H::VLine(123,16,5,6,219);
	H::VLine(124,15,7,2,219);
	H::VLine(125,14,9,5,219);
	H::VLine(126,13,11,6,219);
	
	//delete
	H::drawBoxSingleLineWithBG(113,25,16,1,213);
	H::setcolor(215); H::gotoxy(113,26); cout << "SEARCH USER DATA";
	
	//back
	H::HLine(57,19,22,2,220);
	H::drawBoxSingleLineWithBG(80,18,14,1,213);
	H::setcolor(215); H::gotoxy(85,19); cout << "BACK";
	H::HLine(95,19,21,2,220);

	H::setcolor(1);	H::gotoxy(6,29);   cout << R"(                    _ )";
	H::setcolor(3);	H::gotoxy(6,30);	cout << R"(                  _(_)_                            )";
	H::setcolor(4);	H::gotoxy(6,31);	cout << R"(      @@@@       (_)@(_)   vVVVv     _     @@@@    )";
	H::setcolor(5);	H::gotoxy(6,32);	cout << R"(     @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   )";
	H::setcolor(6);	H::gotoxy(6,33);	cout << R"(      @@@@  (___)     `|/    Y    (_)@(_)  @@@@    )";
	H::setcolor(2);	H::gotoxy(6,34);	cout << R"(       /      Y       \|    \|/    /(_)    \|      )";
	H::setcolor(2);	H::gotoxy(6,35);	cout << R"(    \ |     \ |/       | / \ | /  \|/       |/     )";
	H::setcolor(2);	H::gotoxy(6,36);	cout << R"(    \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//    )";
		
	H::setcolor(1);	H::gotoxy(109,29);    cout << R"(         _ )";
	H::setcolor(3);	H::gotoxy(109,30);	cout << R"(       _(_)_                          wWWWw   _ )";
	H::setcolor(4);	H::gotoxy(109,31);	cout << R"(      (_)@(_)   vVVVv     _     @@@@  (___) _(_)_ )";
	H::setcolor(5);	H::gotoxy(109,32);	cout << R"(        (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_) )";
	H::setcolor(6);	H::gotoxy(109,33);	cout << R"(           `|/    Y    (_)@(_)  @@@@   \|/   (_)\ )";
	H::setcolor(2);	H::gotoxy(109,34);	cout << R"(           \|    \|/    /(_)    \|      |/      | )";
	H::setcolor(2);	H::gotoxy(109,35);	cout << R"(            | / \ | /  \|/       |/    \|      \|/ )";
	H::setcolor(2);	H::gotoxy(109,36);	cout << R"(         \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|//  )";

	H::setcolor(7);	H::gotoxy(59,32); cout << "~> PRESS"; H::setcolor(2); cout <<" [UP] "; H::setcolor(3);cout <<"[DOWN]";
	 H::setcolor(4);cout <<" [LEFT] "; H::setcolor(5);cout <<"[RIGHT]"; H::setcolor(7);cout <<" TO MOVE OPTION. <~";
	H::setcolor(7);	H::gotoxy(71,34); cout << "~> PRESS"; H::setcolor(2);  cout << " [ENTER] "; H::setcolor(7); cout <<"TO SELECT. <~";
		
	if(x==0 && y==0) 
	{
		H::drawBoxSingleLineWithBG(44,11,16,1,196); H::setcolor(192); H::gotoxy(49,12),  cout << "DISPLAY";
	}
    if(x==0 && y==1)
	{
	 H::drawBoxSingleLineWithBG(113,11,16,1,196); H::setcolor(192);  H::gotoxy(118,12), cout << "SEARCH";
	}
    if(x==1 && y==0)
	{
		H::drawBoxSingleLineWithBG(44,25,16,1,196); H::setcolor(192);  H::gotoxy(45,26),  cout << "SHOW USER DATA";
	} 
    if(x==1 && y==1)
	{
		H::drawBoxSingleLineWithBG(113,25,16,1,196); H::setcolor(192);  H::gotoxy(113,26), cout << "SEARCH USER DATA";
	} 
    if(x==2 && y==0)
	{
		H::drawBoxSingleLineWithBG(80,18,14,1,196); H::setcolor(192);  H::gotoxy(85,19),  cout << "BACK";
	} 

	
}


void StaffFeature()
{
	int x = 0, y = 0;
    Staff staffs;
    char op;

    do {    
//    	H::cls();
//    	Menu(x, y);
        do {
        	H::setcolor(0);
//        	H::cls();
            Menu(x, y);
            op = _getch(); 

            switch (op) {
                case 72: { // key up
				    if (x == 0 && y == 0) { // DISPLAY
				        x = 1; y = 0;       // UPDATE
				    }
				    else if (x == 1 && y == 0) { // UPDATE
				        x = 0; y = 1;            // SEARCH
				    }
				    else if (x == 0 && y == 1) { // SEARCH
				        x = 1; y = 1;            // DELETE
				    }
				    else if (x == 1 && y == 1) { // DELETE
				        x = 2; y = 0;            // BACK
				    }
				    else if (x == 2 && y == 0) { // BACK
				        x = 0; y = 0;            // DISPLAY
				    }
				    break;
				}
				
				case 80: { // key down
				    if (x == 0 && y == 0) {        // DISPLAY
				        x = 1; y = 0;              // UPDATE
				    }
				    else if (x == 1 && y == 0) {   // UPDATE
				        x = 0; y = 1;              // SEARCH
				    }
				    else if (x == 0 && y == 1) {   // SEARCH
				        x = 1; y = 1;              // DELETE
				    }
				    else if (x == 1 && y == 1) {   // DELETE
				        x = 2; y = 0;              // BACK
				    }
				    else if (x == 2 && y == 0) {   // BACK
				        x = 0; y = 0;              // DISPLAY
				    }
				    break;
				}
				
				case 75: { // key left
				    if (x == 0 && y == 0) { // DISPLAY
				        x = 2; y = 0;       // BACK
				    }
				    else if (x == 0 && y == 1) { // SEARCH
				        x = 0; y = 0;            // DISPLAY
				    }
				    else if (x == 1 && y == 0) { // UPDATE
				        x = 0; y = 1;            // SEARCH
				    }
				    else if (x == 1 && y == 1) { // DELETE
				        x = 1; y = 0;            // UPDATE
				    }
				    else if (x == 2 && y == 0) { // BACK
				        x = 1; y = 1;            // DELETE
				    }
				    break;
				}
				
				case 77: { // key right
				    if (x == 0 && y == 0) { // DISPLAY
				        x = 0; y = 1;       // SEARCH
				    }
				    else if (x == 0 && y == 1) { // SEARCH
				        x = 1; y = 0;            // UPDATE
				    }
				    else if (x == 1 && y == 0) { // UPDATE
				        x = 1; y = 1;            // DELETE
				    }
				    else if (x == 1 && y == 1) { // DELETE
				        x = 2; y = 0;            // BACK
				    }
				    else if (x == 2 && y == 0) { // BACK
				        x = 0; y = 0;            // DISPLAY
				    }
				    break;
				}
				
                case 27: {		
                    break;
				}  
				  
            };
       
//            H::cls(); 
            
        } while (op != 13);   
//        H::cls();
		
		H::setcolor(7);
        if (x == 0 && y == 0) { 
	        H::cls();   
            designDisplay();
//            staffs.ReadAllFromFile(); dak knong designDisplay()
//        	H::gotoxy(90,30); cout << "\nPress any key to return to menu...";
//            _getch();
            H::cls();
        }
        else if (x == 0 && y == 1) { 
//			char key;
//            do {
            	H::cls();
//                cout << "\n\n-------------------- SEARCH STAFF --------------------\n";
//                staffs.SearchFromFile();
//                cout << "\nPress [ ESC ] to Exit or any key to continue...";
				designSearch();

                
                H::cls();
//                key = _getch();
//            } while (key != 27);
        }
        else if (x == 1 && y == 0) { 
//            char key;
//            do {
            	H::cls();
//                cout << "\n\n-------------------- UPDATE STAFF --------------------\n";
//                staffs.UpdateFromFile();
//                cout << "\nPress [ ESC ] to Exit or any key to continue...";
				ShowUserData2();
//                key = _getch();
                H::cls();
//            } while (key != 27);
        }
        else if (x == 1 && y == 1) { 
//            char key;
//            do {
            	H::cls();
//                cout << "\n\n-------------------- DELETE STAFF --------------------\n";
//                staffs.DeleteFromFile();
//                cout << "\nPress [ ESC ] to Exit or any key to continue...";
				SearchUserData();
//                key = _getch();
                H::cls();
//            } while (key != 27);
        }
        else if (x == 2 && y == 0) { 
            H::cls();
            break; 
        }


    } while (true);
}

void LoginAsStaff()
{
	char username[50], password[50];
    int attempts = 0;
	// b:
    while (true)
    {
	NewFlowerEdit();
    //animation top left
	H::HLine(0,0,85,51,219);
	
	//animation top left
	H::HLine(85,0,85,51,219);
	
    //border left
	H::VLine(2,0,39,51,219);
	H::VLine(3,0,39,51,219);

    //border right
	H::VLine(168,0,39,51,219);
	H::VLine(169,0,39,51,219);

    H::drawBoxSingleLineWithBG(47,3,81,3,136); //grey
    H::drawBoxSingleLineWithBG(45,4,81,3,145); //blue

//////////////////////////////////////
    H::VLine(52,0,2,68,219);
    H::VLine(54,0,2,68,219);

    H::VLine(122,0,2,68,219);
    H::VLine(124,0,2,68,219);


//////////////////////////////////////
                                                

    H::setcolor(151); H::gotoxy(50,4); cout << R"( __     __    ___  __  __ _     __   ____    ___  ____   __    ____  ____ )";
    H::setcolor(151); H::gotoxy(50,5); cout << R"((  )   /  \  / __)(  )(  ( \   / _\ / ___)  / __)(_  _) /__\  ( ___)( ___))";
    H::setcolor(151); H::gotoxy(50,6); cout << R"(/ (_/\(  O )( (_ \ )( /    /  /    \\___ \  \__ \  )(  /(__)\  )__)  )__))";
    H::setcolor(151); H::gotoxy(50,7); cout << R"(\____/ \__/  \___/(__)\_)__)  \_/\_/(____/  (___/ (__)(__)(__)(__)  (__))";
  


    //arrow left (animation)
    H::HLine(5,14,20,4,220);
    H::HLine(9,15,20,1,220);
    H::HLine(13,16,20,6,220);
    H::HLine(18,17,20,3,220);

    H::HLine(22,18,20,5,220);

    H::HLine(18,19,20,3,220);
    H::HLine(13,20,20,6,220);
    H::HLine(9,21,20,1,220);
    H::HLine(5,22,20,4,220);


    //arrow right (animation)
    H::HLine(145,14,20,4,220);
    H::HLine(141,15,20,1,220);
    H::HLine(137,16,20,6,220);
    H::HLine(133,17,20,3,220);

    H::HLine(129,18,20,5,220);

    H::HLine(133,19,20,3,220);
    H::HLine(137,20,20,6,220);
    H::HLine(141,21,20,1,220);
    H::HLine(145,22,20,4,220);

    //upper box username
    H::VLine(61,10,3,6,219);
    H::VLine(111,10,3,6,219);
    H::HLine(61,11,49,6,223);

    H::HLine(64,12,10,5,220);
    H::HLine(75,12,10,2,220);
    H::HLine(86,12,10,3,220);
    H::HLine(97,12,10,4,220);

    //left box username
    H::VLine(51,15,11,6,219);
    H::HLine(50,15,5,6,220);
    H::HLine(50,26,5,6,223);
    H::VLine(53,15,10,70,237);
    H::VLine(54,15,10,70,237);

    //right box username
    H::VLine(121,15,11,6,219);
    H::HLine(116,15,5,6,220);
    H::HLine(116,26,5,6,223);
    H::VLine(118,15,10,70,237);
    H::VLine(119,15,10,70,237);

    //box username
    H::drawBoxSingleLineWithBG(56,14,59,12,136); 

    // H::setcolor(135); H::gotoxy(66,16); cout << "USERNAME";
    // H::drawBoxSingleLineWithBG(66,17,39,1,145); H::setcolor(151); H::gotoxy(70,18); cout << "FSMS";

    // H::setcolor(135); H::gotoxy(66,22); cout << "PASSWORD";
    // H::drawBoxSingleLineWithBG(66,23,39,1,145); H::setcolor(151); H::gotoxy(70,24); cout << "Fsms168";

    H::VLine(66,27,3,145,219);
    H::HLine(65,31,41,1,223);
    H::VLine(106,27,3,145,219);

        // ===== UI DESIGN (your H:: code goes here) =====
        H::drawBoxSingleLineWithBG(56,14,59,12,136); 

		H::drawBoxSingleLineWithBG(66,17,39,1,145); 
		H::drawBoxSingleLineWithBG(66,23,39,1,145);
		H::setcursor(1,8);
    	H::setcolor(135); H::gotoxy(66,16); cout << "USERNAME";
        H::setcolor(135); H::gotoxy(66,22); cout << "PASSWORD";
   		H::setcolor(151); H::gotoxy(70,18); H::inputLetter(username,10);
		H::setcolor(38); H::gotoxy(64,27);cout << "TIP: USE [TAB] KEY FOR SHOW / HIDE PASSWORD";
    	H::setcolor(151); H::gotoxy(70,24); inputPasswordToggle(70, 24, password, 12);

		H::setcursor(0,8);
        // ===== Check login =====
        if (
			// Mana account
			((strcmp(username, "Mana") == 0 || strcmp(username, "mana") == 0) &&
				(strcmp(password, "Manafsms") == 0 || strcmp(password, "ManaFSMS") == 0)) ||

			// Naihuoy account
			((strcmp(username, "Naihuoy") == 0 || strcmp(username, "naihuoy") == 0) &&
				(strcmp(password, "Naihuoyfsms") == 0 || strcmp(password, "NaihuoyFSMS") == 0)) ||

			// Meyly account
			((strcmp(username, "Meyly") == 0 || strcmp(username, "meyly") == 0) &&
				(strcmp(password, "Meylyfsms") == 0|| strcmp(password, "MeylyFSMS") == 0))
			)
		{
			H::setcursor(0,8);
            H::setcolor(10);
			H::gotoxy(69,29); cout << "                                 ";
            H::gotoxy(69,29); cout << "         Login Success           ";
			H::setcolor(0);
			H::cls();
			clear_Screen2();
			StaffFeature();
            break;
        }
        else
        {
			H::setcursor(0,8);
            attempts++;
            H::setcolor(244);
            H::gotoxy(69,28); cout << " Incorrect Password  Or Username ";


            if (attempts == 3)
            {
                H::gotoxy(66,29); cout << " Too many attempts! Wait 10 seconds....";
                H::delay(10000); // 10 seconds
                attempts = 0; // reset attempts after lockout
				H::setcolor(0);
				H::setcursor(0,0);
				H::cls();
            }
            else
            {
				H::setcursor(0,8);
                H::gotoxy(74,29); cout << " Try again (" << (3 - attempts) << " left)....";

            }
        }
    }


}


#endif