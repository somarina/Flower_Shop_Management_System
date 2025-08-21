#ifndef ___INC_DESIGNSTAFFADMIN_H___
#define ___INC_DESIGNSTAFADMINF_H___

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "ANTHinsyOOP"
#include "staff.h"
#include "design_staff.h"
using namespace ANTHinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

void designInsert()
{
	design();	
	H::setcolor(1);	H::gotoxy(48,5);cout << R"(    _____   _______ __________  ______   ______________    ____________ )";
	H::setcolor(1);	H::gotoxy(48,6);cout << R"(   /  _/ | / / ___// ____/ __ \/_  __/  / ___/_  __/   |  / ____/ ____/ )";
	H::setcolor(1);	H::gotoxy(48,7);cout << R"(   / //  |/ /\__ \/ __/ / /_/ / / /     \__ \ / / / /| | / /_  / /_     )";
	H::setcolor(2);	H::gotoxy(48,8);cout << R"( _/ // /|  /___/ / /___/ _, _/ / /     ___/ // / / ___ |/ __/ / __/     )";
	H::setcolor(2);	H::gotoxy(48,9);cout << R"(/___/_/ |_//____/_____/_/ |_| /_/     /____//_/ /_/  |_/_/   /_/        )";
    
	H::HLine(23,14,122,6,220); 

	H::VLine(48,14,14,6,219);   
	H::VLine(76,14,14,6,219);  
	
	H::VLine(123,14,14,6,219); 
	H::VLine(95,14,14,6,219); 
	
	
	
	H::HLine(23,28,122,6,223);  
	H::setcolor(4); H::gotoxy(126,18); cout << R"(      _ _ )";
	H::setcolor(4); H::gotoxy(126,19); cout << R"(    _{ ' }_ )";
	H::setcolor(4); H::gotoxy(126,20); cout << R"(   { `.!.` } )";
	H::setcolor(4); H::gotoxy(126,21); cout << R"(   ',_/Y\_,' )";
	H::setcolor(4); H::gotoxy(126,22); cout << R"(     {_,_} )";
	H::setcolor(2); H::gotoxy(126,23); cout << R"(       | )";
	H::setcolor(2); H::gotoxy(126,24); cout << R"(     (\|  /) )";
	H::setcolor(2); H::gotoxy(126,25); cout << R"(      \| // )";
	H::setcolor(2); H::gotoxy(126,26); cout << R"(       |// )";
	H::setcolor(2); H::gotoxy(126,27); cout << R"(    \\ |/  // )";       
	
	H::setcolor(4); H::gotoxy(25,18); cout << R"(      _ _ )";
	H::setcolor(4); H::gotoxy(25,19); cout << R"(    _{ ' }_ )";
	H::setcolor(4); H::gotoxy(25,20); cout << R"(   { `.!.` } )";
	H::setcolor(4); H::gotoxy(25,21); cout << R"(   ',_/Y\_,' )";
	H::setcolor(4); H::gotoxy(25,22); cout << R"(     {_,_} )";
	H::setcolor(2); H::gotoxy(25,23); cout << R"(       | )";
	H::setcolor(2); H::gotoxy(25,24); cout << R"(     (\|  /) )";
	H::setcolor(2); H::gotoxy(25,25); cout << R"(      \| // )";
	H::setcolor(2); H::gotoxy(25,26); cout << R"(       |// )";
	H::setcolor(2); H::gotoxy(25,27); cout << R"(    \\ |/  // )";                                                            

	staffs.WriteToFile();
	
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
                designInsert();    
				H::cls(); 
				break;
            } 
        }
        
       
	}
	
}

void MenuStaff4Admin(int x, int y)
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
	
	//INSERT
	H::drawBoxSingleLineWithBG(44,11,16,1,213);
	H::setcolor(215); H::gotoxy(49,12); cout << "INSERT";

	//display
	H::drawBoxSingleLineWithBG(79,13,16,1,213);
	H::setcolor(215); H::gotoxy(83,14); cout << "DISPLAY";
	H::VLine(87,15,6,2,219);
	
	//right
	H::HLine(99,6,11,6,223);
	H::VLine(111,5,2,6,219);
	H::HLine(111,7,10,6,220);
	H::VLine(121,7,3,6,219);
	
	//search
	H::drawBoxSingleLineWithBG(113,11,16,1,213);
	H::setcolor(215); H::gotoxy(118,12); cout << "SEARCH";
	
	
//	H::HLine(93,12,19,2,220);
	
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


	//between update and delete
	H::HLine(61,26,24,162,223);
	H::HLine(61,26,14,2,220); //bet por oy jenh bg black
	H::HLine(69,26,44,163,223);
	
	H::HLine(85,26,6,3,223); //bet color
	
	H::HLine(105,26,24,2,220);

	H::HLine(72,25,30,4,220);
	H::HLine(75,25,24,198,223);
	
	
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
//	H::HLine(57,19,22,2,220);
	H::drawBoxSingleLineWithBG(79,22,16,1,213);
	H::setcolor(215); H::gotoxy(85,23); cout << "BACK";
//	H::HLine(95,19,21,2,220);

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
		H::drawBoxSingleLineWithBG(44,11,16,1,196); H::setcolor(192); H::gotoxy(49,12),  cout << "INSERT";
	}
	if(x==0 && y==1) 
	{
		H::drawBoxSingleLineWithBG(79,13,16,1,196); H::setcolor(192); H::gotoxy(83,14); cout << "DISPLAY";;
	}
    if(x==0 && y==2)
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
    if(x==1 && y==2)
	{
		H::drawBoxSingleLineWithBG(79,22,16,1,196); H::setcolor(192); H::gotoxy(85,23); cout << "BACK";
	} 

	
}


void StaffAdmin()
{
    int x = 0, y = 0;
    Staff staffs;
    char op;

    do {
        do {
            H::setcolor(0);
            MenuStaff4Admin(x, y);
            op = _getch();

            switch (op) {
              

		    case 72: { // UP
		        if (x == 0 && y == 0)       { x = 1; y = 1; }  // INSERT -> DELETE
		        else if (x == 1 && y == 1)  { x = 0; y = 2; }  // DELETE -> SEARCH
		        else if (x == 0 && y == 2)  { x = 1; y = 2; }  // SEARCH -> BACK
		        else if (x == 1 && y == 2)  { x = 0; y = 1; }  // BACK -> DISPLAY
		        else if (x == 0 && y == 1)  { x = 1; y = 0; }  // DISPLAY -> UPDATE
		        else if (x == 1 && y == 0)  { x = 0; y = 0; }  // UPDATE -> INSERT
		        break;
		    }
		
		    case 80: { // DOWN 
		    	if (x == 0 && y == 0)       { x = 1; y = 0; }  // INSERT -> UPDATE
		        else if (x == 1 && y == 0)  { x = 0; y = 1; }  // UPDATE -> DISPLAY
		        else if (x == 0 && y == 1)  { x = 1; y = 2; }  // DISPLAY -> BACK
		        else if (x == 1 && y == 2)  { x = 0; y = 2; }  // BACK -> SEARCH
		        else if (x == 0 && y == 2)  { x = 1; y = 1; }  // SEARCH -> DELETE
		        else if (x == 1 && y == 1)  { x = 0; y = 0; }  // DELETE -> INSERT
		    
		        
		        break;
		    }
		
		    case 75: { // LEFT	    
		    	if (x == 0 && y == 0)       { x = 1; y = 1; }  // INSERT -> DELETE
		        else if (x == 1 && y == 1)  { x = 1; y = 2; }  // DELETE -> BACK
		        else if (x == 1 && y == 2)  { x = 1; y = 0; }  // BACK -> UPDATE
		        else if (x == 1 && y == 0)  { x = 0; y = 2; }  // UPDATE -> SEARCH
		        else if (x == 0 && y == 2)  { x = 0; y = 1; }  // SEARCH -> DISPLAY
		        else if (x == 0 && y == 1)  { x = 0; y = 0; }  // DISPLAY -> INSERT 
		        break;
		    }
		
		    case 77: { // RIGHT
		       	if (x == 0 && y == 0)       { x = 0; y = 1; }  // INSERT -> DISPLAY
		        else if (x == 0 && y == 1)  { x = 0; y = 2; }  // DISPLAY -> SEARCH
		        else if (x == 0 && y == 2)  { x = 1; y = 0; }  // SEARCH -> UPDATE
		        else if (x == 1 && y == 0)  { x = 1; y = 2; }  // UPDATE -> BACK
		        else if (x == 1 && y == 2)  { x = 1; y = 1; }  // BACK -> DELETE
		        else if (x == 1 && y == 1)  { x = 0; y = 0; }  // DELETE -> INSERT
		        break;
		    }
                case 27: { // ESC
                    break;
                }
            }

        } while (op != 13); // ENTER key

        H::setcolor(7);
        H::cls();

        // Handle selected function
        if (x == 0 && y == 0) {

            designInsert(); 
        }
        else if (x == 0 && y == 1) {
            designDisplay();
        }
        else if (x == 0 && y == 2) {
            designSearch();
        }
        else if (x == 1 && y == 0) {
            designUpdate();
        }
        else if (x == 1 && y == 1) {
            designDelete();
        }
        else if (x == 1 && y == 2) {
            break;
        }

        H::cls();

    } while (true);
}

void TestAdmin()
{
	p:
	char choice;
	H::cls();
	H::setcolor(2);

		cout << "\n\t\t1. Staff Feature\n\t\t2. User Feature\n\t\t3. Back ";
		
		choice = getch();
		switch (choice) {
			case '1': 
			{
				H::cls();
				H::setcolor(2);
				StaffAdmin();
				goto p;
				break;
			}
			case '2': 
			{
				H::cls();
				H::setcolor(2);
				test();
				goto p;
			} break;
			case '3':
			break;
		}
}


#endif