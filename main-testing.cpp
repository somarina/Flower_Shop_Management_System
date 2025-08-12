#include "ANTHinsyOOp"
using namespace ANTHinsyOOP;

void Testing()
{
    int x = 0, y = 0;

    char op;


    do{

        H::drawBoxDoubleLineWithBG(65,17,45,1,213); H::gotoxy(80,18); H::setcolor(215); cout << "INSERT PROBLEM";

        H::drawBoxDoubleLineWithBG(65,36,45,1,213); H::gotoxy(80,37); H::setcolor(215); cout << "UPDATE PROBLEM";

        //y left

        H::drawBoxDoubleLineWithBG(18,23,35,1,213); H::gotoxy(29,24); H::setcolor(215); cout << "VIEW PROBLEM";

        H::drawBoxDoubleLineWithBG(18,30,35,1,213); H::gotoxy(28,31); H::setcolor(215); cout << "SEARCH PROBLEM";

        //y right

        H::drawBoxDoubleLineWithBG(123,23,35,1,213); H::gotoxy(138,24); H::setcolor(215); cout << "BACK";

        H::drawBoxDoubleLineWithBG(123,30,35,1,213); H::gotoxy(134,31); H::setcolor(215); cout << "DELETE PROBLEM";

        

        if(x==0 && y==1)
        {

            H::drawBoxDoubleLineWithBG(65,17,45,1,247); H::gotoxy(80,18); H::setcolor(249); cout << "INSERT PROBLEM";

        }

        if(x==1 && y==0)
        {

            H::drawBoxDoubleLineWithBG(18,23,35,1,247); H::gotoxy(29,24); H::setcolor(249); cout << "VIEW PROBLEM";

        }

        if(x==2 && y==0)
        {

            H::drawBoxDoubleLineWithBG(18,30,35,1,247); H::gotoxy(28,31); H::setcolor(249); cout << "SEARCH PROBLEM";

        }

        if(x==3 && y==1)
        {

            H::drawBoxDoubleLineWithBG(65,36,45,1,247); H::gotoxy(80,37); H::setcolor(249); cout << "UPDATE PROBLEM";

        }

        if(x==2 && y==2)
        {

            H::drawBoxDoubleLineWithBG(123,30,35,1,247); H::gotoxy(134,31); H::setcolor(249); cout << "DELETE PROBLEM";

        }

        if(x==1 && y==2)
        {

            H::drawBoxDoubleLineWithBG(123,23,35,1,247); H::gotoxy(138,24); H::setcolor(249); cout << "BACK";

        }

        op == getch();

        switch(op)
        {

            case 72:{//key up

                if(x>0){

                    x--;

                }break;
            }

            case 80:{//key down

                if(x<3){
                   x++;
                }break;

            }

        } 
    }while(op != 13);

    if(x==0 && y==1){

    // ManageProblem::AsciiInsertPro();

    }

    if(x==1 && y==0){

    // ManageProblem::AsciiViewPro();

    }

    if(x==2 && y==0){

    // ManageProblem::AsciiSearchPro();

    }

    if(x==3 && y==1){

    // ManageProblem::AsciiUpdatePro();

    }

    if(x==2 && y==2){

    // ManageProblem::AsciiDeletePro();

    }

    if(x==1 && y==2){

    // ManageProblem::AsciiBackPro();

    }
}



int main()
{
    H::setConsoleTitle("Design Project");
	H::DisableScreenResize(); 
	H::setFixedScreenConsole(170,40);
	H::setFont(18,700);
	H::setcursor(0,0);


    Testing();

    getch();
    return 0;
}

// #include <iostream>
// #include <thread>
// #include <chrono>
// #include <ctime>
// #include <windows.h>
// #include <conio.h>
// using namespace std;

// // Move cursor to specific position
// void gotoxy(int x, int y) {
//     COORD coord;
//     coord.X = x;
//     coord.Y = y;
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
// }

// // Hide cursor blinking
// void hideCursor() {
//     HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
//     CONSOLE_CURSOR_INFO     cursorInfo;
//     GetConsoleCursorInfo(out, &cursorInfo);
//     cursorInfo.bVisible = false; // hide cursor
//     SetConsoleCursorInfo(out, &cursorInfo);
// }

// // Clock thread
// void showClock(bool *running) {
//     while (*running) {
//         // Get current time
//         time_t now = time(0);
//         tm *ltm = localtime(&now);

//         // Greeting
//         string greeting;
//         if (ltm->tm_hour < 12)
//             greeting = "Good Morning";
//         else if (ltm->tm_hour < 18)
//             greeting = "Good Afternoon";
//         else
//             greeting = "Good Evening";

//         char dateStr[20], timeStr[10];
//         sprintf(dateStr, "%04d-%02d-%02d", 1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);
//         sprintf(timeStr, "%02d:%02d:%02d", ltm->tm_hour, ltm->tm_min, ltm->tm_sec);

//         // Print at top
//         gotoxy(0, 0);
//         cout << dateStr << "  " << timeStr << "  |  " << greeting << "        " << flush;

//         this_thread::sleep_for(chrono::milliseconds(200)); // smoother update
//     }
// }

// int main() {
//     hideCursor(); // optional: hide blinking cursor for cleaner UI

//     bool running = true;
//     thread clockThread(showClock, &running);

//     // Move cursor below clock
//     gotoxy(0, 2);cout << "Enter password: ";

//     string password;
//     char ch;
//     bool showPassword = false;

//     while (true) {
//         ch = _getch();

//         if (ch == 13) { // Enter
//             break;
//         } else if (ch == 9) { // Tab to toggle show/hide
//             showPassword = !showPassword;
//             gotoxy(16, 2);
//             cout << string(50, ' ') << "\r";
//             gotoxy(16, 2);
//             if (showPassword)
//                 cout << password;
//             else
//                 cout << string(password.length(), '*');
//         } else if (ch == 8) { // Backspace
//             if (!password.empty()) {
//                 password.pop_back();
//                 gotoxy(16, 2);
//                 cout << string(50, ' ') << "\r";
//                 gotoxy(16, 2);
//                 if (showPassword)
//                     cout << password;
//                 else
//                     cout << string(password.length(), '*');
//             }
//         } else {
//             password.push_back(ch);
//             if (showPassword)
//                 cout << ch;
//             else
//                 cout << '*';
//         }
//     }

//     running = false;
//     clockThread.join();

//     gotoxy(0, 4);
//     cout << "Password entered: " << password << endl;
//     return 0;
// }

///                                 Hide and show Password

// #include <iostream>
// #include <conio.h> // for _getch()
// #include <string>
// using namespace std;

// int main() {
//     string password = "";
//     char ch;
//     bool showPassword = false;

//     cout << "Enter password (Press TAB to show/hide): ";

//     while (true) {
//         ch = _getch();

//         if (ch == 13) { // Enter
//             break;
//         }
//         else if (ch == 9) { // Tab key for toggle
//             showPassword = !showPassword;
//             cout << "\rEnter password (Press TAB to show/hide): ";

//             if (showPassword) {
//                 cout << password;
//             } else {
//                 cout << string(password.length(), '*');
//             }
//         }
//         else if (ch == 8) { // Backspace
//             if (!password.empty()) {
//                 password.pop_back();
//                 cout << "\b \b";
//             }
//         }
//         else {
//             password.push_back(ch);
//             if (showPassword) {
//                 cout << ch;
//             } else {
//                 cout << '*';
//             }
//         }
//     }

//     cout << "\nPassword entered: " << password << endl;
//     return 0;
// }
