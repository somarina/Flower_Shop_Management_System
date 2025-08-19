// #include "Header/design_staff.h"
// #include "Header/staff.h"
// #include "Header/designStaff4Admin.h"
// #include "header/ANTHinsyOOP"
// using namespace ANTHinsyOOP;

// int main()
// {
// 	H::DisableScreenResize();
//     H::setFixedScreenConsole(170, 40);
//     H::setFont(18,700);
//     H::setcursor(0,0);
    
//      //  big border blue (For Put Animation)
//     int m=48;
//     // for(int i=1;i<165;i++)
//     // {
//     //     H::HLine(4,0,i,m,255);
//     //     H::HLine(4,39,i,m,255);
//     //     m++;
//     // }
//     int i=1,j=164;
//     while(true)
//     {
//         H::HLine(4,0,i++,m,255);
//         H::HLine(4,39,j--,m,255);
//         m++;
//         if(i>164 || j<2)
//         {
//             break;
//         }
//     }
//     // H::HLine(4,0,i,59,255);
//     // H::HLine(4,39,i,59,255);

//     H::HLine(4,0,164,59,255);
//     H::HLine(4,39,164,59,255);

// //   H::VLine(1,1,36,59,255);
// //   H::VLine(2,1,36,59,255);

// //   H::VLine(169,1,36,59,255);
// //   H::VLine(170,1,36,59,255);


//   //border menu form
//   H::setcolor(7);

//     H::gotoxy(3, 1); cout << R"(                                  '                 '                            o          .:'                         .+                 )";
// 	H::gotoxy(3, 2); cout << R"(      .     '                                                                           _.::'                                              )";
// 	H::gotoxy(3, 3); cout << R"(                     .  .                                     +       +                (_.'      +          '                              )";
// 	H::gotoxy(3, 4); cout << R"(.                     |   +                           .:'                       '  .   o                .   .  .                     )";
// 	H::gotoxy(3, 5); cout << R"(                     -o-                   '      _.::'                                       .                o          *          )";
// 	H::gotoxy(3, 6); cout << R"(    *    +  o       + |               *          (_.'               '                                                                )";
// 	H::gotoxy(3, 7); cout << R"(                      .         .:'                                      .                               *                          )";
// 	H::gotoxy(3, 8); cout << R"(      .-.                   _.::'      '                             .                                                    .-.       )";
// 	H::gotoxy(3, 9); cout << R"(     ( (                   (_.'                             *                         +                            .     ( (        )";
// 	H::gotoxy(3, 10); cout << R"(      `-'                                        .   *              .                                           '                             `-'       )";
	
// 	H::gotoxy(50, 1); cout << R"(  _|_         .     .     .             .        '                            +                                    )";
// 	H::gotoxy(50, 2); cout << R"(   |                                                                       +                                       )";
// 	H::gotoxy(50, 3); cout << R"(                         *                                                                         o               )";
// 	H::gotoxy(50, 4); cout << R"(             *                                                           .                       .              '  )";
// 	H::gotoxy(50, 5); cout << R"(                                         .               '        +                                                )";
// 	H::gotoxy(50, 6); cout << R"(                                             '             '       o          .:'                         .+       )";
// 	H::gotoxy(50, 7); cout << R"(                 .     '                                                                           _.::'           )";
// 	H::gotoxy(50, 8); cout << R"(                                .  .                                +       +                (_.'      +          ')";
// 	H::gotoxy(50, 9); cout << R"(           .                           |   +     .:'                       '  .   o                .   .  .        )";
// 	H::gotoxy(50, 10); cout << R"(                                      -o-                   '      _.::'           .                o          * )";

//   H::gotoxy(123, 1); cout << R"(		         .    '            + )"; 
// 	H::gotoxy(123, 2); cout << R"(            '                  |)"; 
// 	H::gotoxy(123, 3); cout << R"(          ()    .-.,="``"=.    - o -)"; 
// 	H::gotoxy(123, 4); cout << R"(                '=/_       \     |)"; 
// 	H::gotoxy(123, 5); cout << R"(             *   |  '=._    |)"; 
// 	H::gotoxy(123, 6); cout << R"(                  \     `=./`,   ')"; 
// 	H::gotoxy(123, 7); cout << R"(               .   '=.__.=' `='      *)"; 
// 	H::gotoxy(123, 8); cout << R"(    +                         +)"; 
// 	H::gotoxy(123, 9); cout << R"(         O      *        '    .)"; 


//   H::HLine(45,2,82,4,220);
//   H::HLine(41,3,88,1,220);
//   H::HLine(38,4,94,6,220);

//   H::HLine(35,5,100,5,220);

//   H::HLine(38,6,94,6,220);
//   H::HLine(41,7,88,1,220);
//   H::HLine(45,8,82,4,220);

  
//   H::setcolor(1); H::gotoxy(57,3); cout << R"(    __  __________   ____  __   __________  ____  __  ___)";
//   H::setcolor(2); H::gotoxy(57,4); cout << R"(   /  |/  / ____/ | / / / / /  / ____/ __ \/ __ \/  |/  /)";
//   H::setcolor(3); H::gotoxy(57,5); cout << R"(  / /|_/ / __/ /  |/ / / / /  / /_  / / / / /_/ / /|_/ / )";
//   H::setcolor(4); H::gotoxy(57,6); cout << R"( / /  / / /___/ /|  / /_/ /  / __/ / /_/ / _, _/ /  / /  )";
//   H::setcolor(5); H::gotoxy(57,7); cout << R"(/_/  /_/_____/_/ |_/\____/  /_/    \____/_/ |_/_/  /_/   )";
                                                         

//   H::HLine(6,11,158,93,255);
// //left
//   H::VLine(9,11,27,93,255); 
//   H::VLine(10,11,27,93,255);
//   H::VLine(5,14,21,70,237);
//   H::VLine(6,14,21,70,237);
 
// //right
//   H::VLine(161,11,27,93,255); 
//   H::VLine(162,11,27,93,255);
//   H::VLine(165,14,21,70,237);
//   H::VLine(166,14,21,70,237);


// //inside menu left
//   H::drawBoxSingleLine(33,12,23,3,3); H::setcolor(6); H::gotoxy(38,14); cout << "ADMIN PROFILE";
//   H::drawBoxSingleLine(33,17,23,3,3); H::setcolor(6); H::gotoxy(42,19); cout << "ADMIN";
//   H::drawBoxSingleLine(33,22,23,3,3); H::setcolor(6); H::gotoxy(42,24); cout << "STAFF";
//   H::drawBoxSingleLine(33,27,23,3,3); H::setcolor(6); H::gotoxy(42,29); cout << "USER";
//   H::drawBoxSingleLine(33,32,23,3,3); H::setcolor(6); H::gotoxy(42,34); cout << "EXIT";

//   //grass
//  H::setcolor(2); H::gotoxy(10,37); cout << R"(/\|//\|/\|/,\\|/|/|// \|/ \|//\|/\|/,\\|/|/|// \|/\|//\|/\|/,\\|/|/\/ )";
//  H::setcolor(2); H::gotoxy(10,38); cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";




//  H::setcolor(1); H::gotoxy(10,29); cout << R"(      |\\._)";
//  H::setcolor(1); H::gotoxy(10,30); cout << R"(     |   66__)";
//  H::setcolor(2); H::gotoxy(10,31); cout << R"(      \    _.P)";
//  H::setcolor(2); H::gotoxy(10,32); cout << R"(  ,    `) ()";
//  H::setcolor(4); H::gotoxy(10,33); cout << R"(  )\   / __\__)";
//  H::setcolor(4); H::gotoxy(10,34); cout << R"( / /  / -._);_))";
//  H::setcolor(6); H::gotoxy(10,35); cout << R"(|  `\/  \ __|\)";
//  H::setcolor(6); H::gotoxy(10,36); cout << R"( \  ;    )  / ))";
//  H::setcolor(5); H::gotoxy(10,37); cout << R"(  `\|   /__/ /__  )";
//  H::setcolor(5); H::gotoxy(10,38); cout << R"(    `\______)___))";


//  H::setcolor(4); H::gotoxy(58,32); cout << R"(         _  _)";
//  H::setcolor(6); H::gotoxy(58,33); cout << R"(        (.)(.))";
//  H::setcolor(4); H::gotoxy(58,34); cout << R"(    ,-.(.____.),-.)";  
//  H::setcolor(3); H::gotoxy(58,35); cout << R"(   ( \ \ '--' / / ))";
//  H::setcolor(2); H::gotoxy(58,36); cout << R"(    \ \ / ,. \ / /)";
//  H::setcolor(5); H::gotoxy(58,37); cout << R"(     ) '| || |' ( mrf)";
//  H::setcolor(7); H::gotoxy(58,38); cout << R"( OoO'- OoO''OoO -'OoO)";

//   //line in the middle of inside menu
//   H::VLine(80,10,28,93,255);

//   //inside menu right
// //   H::drawBoxSingleLine(90,16,60,5,1);
// //   H::VLine(95,11,5,4,219);
// //   H::VLine(145,11,5,4,219);

// //   H::VLine(89,19,3,6,219);
// //   H::HLine(88,23,4,6,223);

// //   H::VLine(152,19,3,6,219);
// //   H::HLine(148,23,4,6,223);


//   H::setcolor(3); H::gotoxy(100,12); cout << R"(                                 _ " _  )";
//   H::setcolor(4); H::gotoxy(100,13); cout << R"(  _ " _                         (_\|/_) )";
//   H::setcolor(6); H::gotoxy(100,14); cout << R"( (_\|/_)  _ " _         _ " _    (/|\)  )";
//   H::setcolor(2); H::gotoxy(100,15); cout << R"(  (/|\)  (_\|/_) " _   (_\|/_)  )";
//   H::setcolor(1); H::gotoxy(100,16); cout << R"(          (/|\)_\|/_)   (/|\) )";
//   H::setcolor(5); H::gotoxy(100,17); cout << R"(               (/|\)  )";

//   H::setcolor(2); H::gotoxy(140,22); cout << R"(     _   _  )";
//   H::setcolor(6); H::gotoxy(140,23); cout << R"(    ( | / ) )";
//   H::setcolor(2); H::gotoxy(140,24); cout << R"(  \\ \|/,'_ )";
//   H::setcolor(6); H::gotoxy(140,25); cout << R"(  (")(_)()))=- )";
//   H::setcolor(2); H::gotoxy(140,26); cout << R"(     <\\ )";

       


//   H::setcolor(1); H::gotoxy(92,19); cout << R"(          __________________________________ )";
//   H::setcolor(1); H::gotoxy(92,20); cout << R"(         | ________________________________ | )";
//   H::setcolor(1); H::gotoxy(92,21); cout << R"(         ||                                || )";
//   H::setcolor(1); H::gotoxy(92,22); cout << R"(         ||                                || )";
//   H::setcolor(1); H::gotoxy(92,23); cout << R"(         ||                                || )";
//   H::setcolor(1); H::gotoxy(92,24); cout << R"(         ||                                || )";
//   H::setcolor(1); H::gotoxy(92,25); cout << R"(         ||________________________________|| )";
//   H::setcolor(1); H::gotoxy(92,26); cout << R"(         | _______________   ______________ | )";
//   H::setcolor(1); H::gotoxy(92,27); cout << R"(         ||               | |              || )";
//   H::setcolor(1); H::gotoxy(92,28); cout << R"(         ||               | |              ||     .- )";
//   H::setcolor(6); H::gotoxy(92,29); cout << R"(         ||               | |          .-. ||  .-' )";
//   H::setcolor(4); H::gotoxy(92,30); cout << R"(     .-'||| _             | |        \|\_/ ||.' )";
//   H::setcolor(6); H::gotoxy(92,31); cout << R"( |`-.|/_/||'./\   _.-._   | ||`-.    ('||\>-'_.-._ .-'| )";
//   H::setcolor(5); H::gotoxy(92,32); cout << R"( \_\|.-._||\`-.| (.--. )  | |\_\|-'|  '`-' |( .--.)\/_/ )";
//   H::setcolor(4); H::gotoxy(92,33); cout << R"(   ( .--.)| `'"Y((\_))_)) |_.-._\/_/_.-._  ((_((_/)) _ )";
//   H::setcolor(3); H::gotoxy(92,34); cout << R"(  ((_((_/)) _.-._(_.-'.-'|(.-'-.)  (.-`-.) ||(`-._)|\ \ )";
//   H::setcolor(1); H::gotoxy(92,35); cout << R"(    (`.-'``'-.`-.)`-`_\/_/(_((_/))((\_))_))l-.`'-'_`-.| )";
//   H::setcolor(4); H::gotoxy(92,36); cout << R"(     /'-___(\_`._))|\.-.___(`-._.-.__.-')__|`-,\|\ \ )";
//   H::setcolor(2); H::gotoxy(92,37); cout << R"( /|__(_.-'`._`-\_/|/_'`-(_.--.)`-'`__'\/-;`-.| (`-._) )";
//   H::setcolor(2); H::gotoxy(92,38); cout << R"(_.' |.-'/ /|`-'` '- _.' |.-'/ /|`-'` '-_.' |.-'/ /|`-'` '-)";

//   H::setcolor(1); H::gotoxy(80,19); cout << R"(  //\         /\\ )";
//   H::setcolor(2); H::gotoxy(80,20); cout << R"( || * \ . . / * || )";
//   H::setcolor(3); H::gotoxy(80,21); cout << R"(  \\____\X/____// )";
//   H::setcolor(4); H::gotoxy(80,22); cout << R"(   / *  /O\  * \ )";
//   H::setcolor(5); H::gotoxy(80,23); cout << R"(   \__/  "  \__/ )";

//   H::setcolor(7); H::gotoxy(103,22); cout << "[TIP] USE "; H::setcolor(2); cout << "UP "; H::setcolor(7); cout <<  "AND " ; H::setcolor(4); cout << "DOWN "; H::setcolor(7); cout << "ARROW KEY";
//   H::setcolor(7); H::gotoxy(108,24); cout << "AND ";  H::setcolor(1); cout << "ENTER ";  H::setcolor(7); cout << "FOR SELECT";


//   getch();
// 	H::gotoxy(0,40);
//   return 0;





// }

// #include <iostream>
// #include <thread>
// #include <chrono>
// #include <ctime>
// #include <windows.h>
// #include <conio.h>
// using namespace std;

// Move cursor to specific position
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

// /                                 Hide and show Password

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
//         ch = getch();

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
