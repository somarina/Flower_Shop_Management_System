#include "ANTHinsyOOP"
#include "ANTHinsyOOP.hpp"
using namespace ANTHinsyOOP;

int main()
{
    H::DisableScreenResize();
    H::setFixedScreenConsole(170, 40);
    H::setFont(18,700);
    H::setcursor(0,0);



//          Biger Line
    //          On
    H::HLine(0,0,85,68,255);
    H::HLine(85,0,85,68,255);

    //          Left
    H::VLine(1,0,39,75,255);
    H::VLine(2,0,39,75,255);

    //Right
    H::VLine(169,0,39,75,255);
    H::VLine(170,0,39,75,255);

    //Under
    H::HLine(0,39,85,68,255);
    H::HLine(85,39,85,68,255);

//               Header
    H::setcolor(3);H::gotoxy(50,1);cout << R"(       __   __ )";
    H::setcolor(3);H::gotoxy(50,2);cout << R"(    .-(  '.'  )-. )";
    H::setcolor(3);H::gotoxy(50,3);cout << R"(   (   \  |  /   ) )";
    H::setcolor(3);H::gotoxy(50,4);cout << R"(  ( `'-.;;;;;.-'` ) )";
    H::setcolor(3);H::gotoxy(50,5);cout << R"( ( :-==;;;;;;;==-: ) )";
    H::setcolor(3);H::gotoxy(50,6);cout << R"(  (  .-';;;;;'-.  ) )";
    H::setcolor(3);H::gotoxy(50,7);cout << R"(   (`  /  |  \  `) )";
    H::setcolor(3);H::gotoxy(50,8);cout << R"(    '-(__.'.__)-' )";

    H::setcolor(3);H::gotoxy(100,3);cout << R"(       __   __ )";
    H::setcolor(3);H::gotoxy(100,4);cout << R"(    .-(  '.'  )-. )";
    H::setcolor(3);H::gotoxy(100,5);cout << R"(   (   \  |  /   ) )";
    H::setcolor(3);H::gotoxy(100,6);cout << R"(  ( `'-.;;;;;.-'` ) )";
    H::setcolor(3);H::gotoxy(100,7);cout << R"( ( :-==;;;;;;;==-: ) )";
    H::setcolor(3);H::gotoxy(100,8);cout << R"(  (  .-';;;;;'-.  ) )";
    H::setcolor(3);H::gotoxy(100,9);cout << R"(   (`  /  |  \  `) )";
    H::setcolor(3);H::gotoxy(100,10);cout << R"(    '-(__.'.__)-' )";

    H::setcolor(2);H::gotoxy(60,4);cout << R"(    ___    ____  ____  __  ________  __  _______)";
    H::setcolor(3);H::gotoxy(60,5);cout << R"(   /   |  / __ )/ __ \/ / / /_  __/ / / / / ___/)";
    H::setcolor(4);H::gotoxy(60,6);cout << R"(  / /| | / __  / / / / / / / / /   / / / /\__ \ )";
    H::setcolor(5);H::gotoxy(60,7);cout << R"( / ___ |/ /_/ / /_/ / /_/ / / /   / /_/ /___/ / )";
    H::setcolor(6);H::gotoxy(60,8);cout << R"(/_/  |_/_____/\____/\____/ /_/    \____//____/)";


//                  grass
    H::setcolor(2); H::gotoxy(25,37); cout << R"(/\|//\|/\|/,\\|/|/|// \|/ \|//\|/\|/,\\|/|/|// \|/\|//\|/\|/,\\|/|/\/ \|/ \|//\|/\|/,\\|/|/|// \|/\|//\|/\|/,\\|/|/\/ \|/\|)";
    H::setcolor(2); H::gotoxy(25,38); cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

//              Treee
H::setcolor(2); H::gotoxy(3,28); cout << R"(        a@@@@a )";              
H::setcolor(2); H::gotoxy(3,29); cout << R"(    a@@@@@@@@@@@@a )";          
H::setcolor(2); H::gotoxy(3,30); cout << R"(   a@@@@@@by@@@@@@@@a )";        
H::setcolor(2); H::gotoxy(3,31); cout << R"(  a@@@@@S@C@E@S@W@@@@@@a )";      
H::setcolor(2); H::gotoxy(3,32); cout << R"( @@@@@@@@@@@@@@@@@@@@@@ )";      
H::setcolor(2); H::gotoxy(3,33); cout << R"(  `@@@@@@`\\//'@@@@@@' )";  
H::setcolor(2); H::gotoxy(3,34); cout << R"(           || )"; 
H::setcolor(2); H::gotoxy(3,35); cout << R"(           || )";      
H::setcolor(2); H::gotoxy(3,36); cout << R"(           || )"; 
H::setcolor(2); H::gotoxy(3,37); cout << R"(           || )"; 
H::setcolor(2); H::gotoxy(3,38); cout << R"(          /MM\ )";  


//              Middle Box
    H::HLine(40,12,90,230,255);


    // Middle of Middle Box
    H::drawBoxSingleLineWithBG(50,14,30,1,3);
    H::setcolor(7);H::gotoxy(53,15);cout << "Advisor    :   UN Hinsy";

    H::drawBoxSingleLineWithBG(90,14,30,1,3);
    H::setcolor(7);H::gotoxy(93,15);cout << "Menter     :   Run Lihuo";

    H::drawBoxSingleLineWithBG(70,17,30,1,3);
    H::setcolor(7);H::gotoxy(79,18);cout << "Team Message";

    H::setcolor(3);H::gotoxy(80,19);cout << char(210);
    H::setcolor(3);H::gotoxy(89,19);cout << char(210);


    H::drawBoxSingleLineWithBG(70,20,30,1,3);
    H::setcolor(7);H::gotoxy(79,21);cout << "Keat Somarina";
    H::setcolor(3);H::gotoxy(80,20);cout << char(208);
    H::setcolor(3);H::gotoxy(89,20);cout << char(208);

    H::drawBoxSingleLineWithBG(28,20,30,1,3);
    H::setcolor(7);H::gotoxy(38,21);cout << "Kao Meyly";

    H::drawBoxSingleLineWithBG(114,20,30,1,3);
    H::setcolor(7);H::gotoxy(123,21);cout << "Taing NaiHuoy";

    H::drawBoxSingleLineWithBG(28,23,117,12,3);
    H::setcolor(7);H::gotoxy(79,24);cout << "Team Message";

    









    getch();
    return 0;
}
// int main()
// {
    // cout << R"(                    _                                            )";
    // cout << R"(                  _(_)_                        )";
    // cout << R"(      @@@@       (_)@(_)   vVVVv  )";
    // cout << R"(     @@()@@ wWWWw  (_)\    (___)  )";
    // cout << R"(      @@@@  (___)     `|/    Y     )";
    // cout << R"(       /      Y       \|    \|/   )";
    // cout << R"(    \ |     \ |/       | / \ | /  )";
    // cout << R"(    \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|//   )";
    // cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";


//     getch();
//     return 0;
// }