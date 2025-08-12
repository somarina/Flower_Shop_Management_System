#include "Header/user.h"
#include "Header/design_staff.h"
#include "Header/staff.h"
#include "Header/designStaff4Admin.h"
#include "Header/ProductDesign.h"
#include "Header/product.h"
// #include <thread>
// #include "ANTHinsyOOP"
// using namespace ANTHinsyOOP;

void openMyWebsite(const string& url);
void test();
int main()
{
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////  H::DisableButtonClose();
   H::setConsoleTitle("Flower Shop Management System");
   H::DisableScreenResize();
   H::setFixedScreenConsole(170,40);
   H::setFont(18,700);
//////////////////////////////////////////////////////////////////////////////////////////////////////
////								test for main design on The first console

	char op;
	while(true)
	{
		H::cls();
		cout << "\n\t 1. Admin";
		cout << "\n\t 2. Staff";
		cout << "\n\t 3. User ";
		cout << "\n\t 4. About Us";
		cout << "\n\t 5. Exit Program";
		cout << "\n\t Press Option You Want :";

		op = getch();
		switch(op)
		{
			case '1':
			{
				test();
			}break;
			case '2':
			{
				H::cls();
				StaffFeature();
			}break;
			case '3':
			{
				H::cls();
				TesttingUser();
			}break;
			case '4':
			{
				H::cls();
				cout << "Opening Our Develop Website ....";
				H::delay(2000);
				openMyWebsite("Website/index.html");
			}break;
			case '5':
			{
				H::cls();
				cout << "E";
				H::delay(500);
				cout << "x";
				H::delay(500);
				cout << "c";
				H::delay(500);
				cout << "i";
				H::delay(500);
				cout << "t";
				H::delay(500);
				cout << "i";
				H::delay(500);
				cout << "n";
				H::delay(500);
				cout << "g";
				H::delay(500);
				cout << ".";
				H::delay(500);
				cout << ".";
				H::delay(500);
				cout << ".";
				H::delay(500);
				exit(0);
			}break;
		}
	}

	getch();
	return 0;
}
///////////////////////////////////////////////////////////////////////////////
void openMyWebsite(const string& url) {
    string command = "start " + url;
    system(command.c_str());
}

















// int main(){
// 	Design d;
// 	H::setConsoleTitle("Design Project");
// 	H::DisableScreenResize(); 
// 	H::setFixedScreenConsole(170,40);
// 	H::setFont(18,700);
// 	H::setcursor(0,0);
void test(){
	H::setcursor(0,0);
	Design d;	
	int x = 0;             
	char op,key;
	do{ 
		H::setcolor(0);
		H::cls();
		start:
		do{
			H::setcolor(0);
			H::cls();
			d.check01(x);
			op = getch(); 
		    if (op == -32 || op == 0){
		        op = getch(); // actual key code
		        switch(op) {
		            case 75:{ // LEFT
		                x--;
		                if (x < 0) x = 9;
		                break;
		            }
		            case 77:{ // RIGHT
		                x++;
		                if (x > 9) x = 0;
		                
		            }   break;
		        }
		    }
		} while (op != 13);  
		H::setcolor(7);
		if (x == 0) 
		{ 	
			while(true){
				H::setcolor(0);
				H::cls();
				d.DesignInsertFlower();
				InputFlowerData();
				key = getch();
				if (key == 13) {
					continue;
				}
				else if (key == 27){
					goto start;
				}
			}
		}
		else if (x == 1) 
		{ 	
			H::setcolor(0);
			H::cls();
			d.DesignDisplayFlower();
			DisplayFlowerData();
		}
		else if (x == 2) 
		{ 
			while(true){
				H::setcolor(0);
				H::cls();
				d.DesignSearchFlower();
				SearchFlowerData();
				key = getch();
				if (key == 13) {
					continue;
				}
				else if (key == 27){
					goto start;
				}
			}
		}
		else if (x == 3) 
		{ 
			while(true){
				H::setcolor(0);
				H::cls();
				d.DesignUpdateFlower();	
				UpdateFlowerData();
				key = getch();
				if (key == 13) {
					continue;
				}
				else if (key == 27){
					goto start;
				}
			}		
		}
		else if (x == 4)
		{
			H::setcolor(0);
			H::cls();
			d.DesignDeleteFlower();	
			DeleteFlowerData();
		}
		else if (x == 5)
		{
			
		}
		else if (x == 6)
		{
			
		}
		else if (x == 7)
		{
			
		}
		else if (x == 8)
		{
			BuyingFlower();
		}
		else if (x == 9) { 
		    H::cls();
		    cout << "\nExiting Program...";
		    H::delay(1000);
		    break; 
		}
	}while(true);
}
// //	getch();
// 	return 0;
// }




////////////////////////////////////////////////////////////////////////////////////////////////////
//int main()
//{
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////    H::DisableButtonClose();
//    H::setConsoleTitle("Flower Shop Management System");
//    H::DisableScreenResize();
//    H::setFixedScreenConsole(170,40);
//    H::setFont(18,700);
//////////////////////////////////////////////////////////////////////////////////////////////////////
////								test for main design on The first console

/////////////////////////////////////////////////////////////////////////////////////////////////////
	// Start clock in background
//    thread clockThread(showClock);
// //
    // int choice;
    // do {
    //     Move cursor below clock (row 2)
    //    COORD coord = { 0, 2 };
    //    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    //     cout << "\nFlower Management System\n";
    //     cout << "1. Insert Flower\n";
    //     cout << "2. Show   Flower\n";
    //     cout << "3. Update Flower\n";
    //     cout << "4. Import Flower\n";
    //     cout << "5. Delete Flower\n";
    //     cout << "6. Search Flower\n";
    //     cout << "0. Exit\n";
    //     cout << "Enter choice: ";
    //     cin >> choice;
    //     cin.ignore();

    //     switch (choice) {
    //     case 1: InputFlowerData(); break;
    //     case 2: DisplayFlowerData(); break;
    //     case 3: UpdateFlowerData(); break;
    //     case 4: ImportFlowerQty(); break;
    //     case 5: DeleteFlowerData(); break;
    //     case 6: SearchFlowerData(); break;
    //     case 0: cout << "Exiting...\n"; break;
    //     default: cout << "Invalid choice!\n";
    //     }

    //     system("pause");
    //     system("cls");

    // } while (choice != 0);

    // Stop clock thread
//    running = false;
//    clockThread.join();
//////////////////////////////////////////////////////////////////////////////////////////////////////
////								test for user like class UserDesign
	// UserDesign::DesignFeature();
	// UserDesign::DesignMenu();
	// UserDesign::DesignLogin();  
	// UserDesign::DesignRegister();
	// UserDesign::DesignForget();
	// UserDesign::DesignForgetSuccess();
	// UserDesign::DesignLoading();
//	UserDesign::TestArr();

    
/////////////////////////////////////////////////////////////////////////////////////////////////////
	
//	H::drawBoxSingleLineWithBG(5,1,0,-1,68);
//	H::drawBoxSingleLineWithBG(5,2,0,-1,68);
	
	// H::HLine(5,1,2,179,255);
	// H::HLine(5,2,2,196,255);
	// H::HLine(7,2,2,230,255);
///////////////////////////////////////////////////////////////////////////////////////////
//    TesttingUser();
/////////////////////////////////////////////////////////////////////////////
//	getch();
//	return 0;
//}