#ifndef ___INC_DESIGNSTAFF_H___
#define ___INC_DESIGNSTAFF_H___

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "ANTHinsyOOP"
#include "staff.h"
using namespace ANTHinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


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

void designDisplay()
{
	design();
	H::setcolor(1);	H::gotoxy(48,5);cout << R"(    ____  _________ ____  __    _____  __   ______________    ____________ )";
	H::setcolor(1);	H::gotoxy(48,6);cout << R"(   / __ \/  _/ ___// __ \/ /   /   \ \/ /  / ___/_  __/   |  / ____/ ____/ )";
	H::setcolor(1);	H::gotoxy(48,7);cout << R"(  / / / // / \__ \/ /_/ / /   / /| |\  /   \__ \ / / / /| | / /_  / /_     )";
	H::setcolor(2);	H::gotoxy(48,8);cout << R"( / /_/ _/ / ___/ / ____/ /___/ ___ |/ /   ___/ // / / ___ |/ __/ / __/     )";
	H::setcolor(2);	H::gotoxy(48,9);cout << R"(/_____/___//____/_/   /_____/_/  |_/_/   /____//_/ /_/  |_/_/   /_/        )";                                                              
	
	staffs.ReadAllFromFile();
	H::drawBoxSingleLine(70,29,28,1,5);
	H::setcolor(6); H::gotoxy(73,30); cout << "Press [ ESC ] For Back";
	
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
            if (key == 27)
	       	{
	        	H::cls();
	            break;
	        }
        }
	}
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
	H::setcolor(215); H::gotoxy(49,26); cout << "UPDATE";
	
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
	H::setcolor(215); H::gotoxy(118,26); cout << "DELETE";
	
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
		H::drawBoxSingleLineWithBG(44,25,16,1,196); H::setcolor(192);  H::gotoxy(49,26),  cout << "UPDATE";
	} 
    if(x==1 && y==1)
	{
		H::drawBoxSingleLineWithBG(113,25,16,1,196); H::setcolor(192);  H::gotoxy(118,26), cout << "DELETE";
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
                    cout << "\nExiting Program...";
                    H::delay(1000);
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
				designUpdate();
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
				designDelete();
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


#endif