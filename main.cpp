#include "user.h"
// #include "Header/product.h"
// #include <thread>
// #include "ANTHinsyOOP"
// using namespace ANTHinsyOOP;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// bool running = true;

////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//    H::DisableButtonClose();
    H::setConsoleTitle("Flower Shop Management System");
    H::DisableScreenResize();
    H::setFixedScreenConsole(170,40);
    H::setFont(18,700);
//////////////////////////////////////////////////////////////////////////////////////////////////////
////								test for main design on The first console

/////////////////////////////////////////////////////////////////////////////////////////////////////
	// Start clock in background
//    thread clockThread(showClock);
// //
//     int choice;
//     do {
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
    UserData user;
    int choice;

    do {
    
        cout << "\n1. Register\n2. Login\n3. Forget Password\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: user.Register(); break;
            case 2: user.Login(); break;
            case 3: user.ForgetPassword(); break;
            case 4: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);
/////////////////////////////////////////////////////////////////////////////
	getch();
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////