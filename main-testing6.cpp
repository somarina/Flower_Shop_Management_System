#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <cstring>
#include "Header/ANTHeader/ANTHinsyOOP"
using namespace ANTHinsyOOP;
using namespace std;

struct Feedback {
    char feedbackId[10];    // e.g., fed-0001
    char userId[10];        // e.g., U-1000
    char username[50];      // user name
    char phone[20];         // user phone
    char date[15];          // e.g., 23-11-2005
    char message[201];      // feedback message (max 200 chars)
};

//================ Generate Next Feedback ID =================
void generateFeedbackId(char* feedbackId) {
    ifstream fin("Data/Feedback.flower", ios::binary);
    int lastNum = 0;
    Feedback fb;

    if (fin) {
        fin.seekg(-static_cast<int>(sizeof(Feedback)), ios::end);
        fin.read(reinterpret_cast<char*>(&fb), sizeof(Feedback));
        if (fin.gcount() > 0) {
            sscanf(fb.feedbackId, "fed-%d", &lastNum);
        }
        fin.close();
    }

    sprintf(feedbackId, "fed-%04d", lastNum + 1);
}

//================ Current Date =================
void getCurrentDate(char* dateStr) {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    sprintf(dateStr, "%02d-%02d-%04d",
            ltm->tm_mday, ltm->tm_mon + 1, 1900 + ltm->tm_year);
}

//================ Input with 200 char limit =================
void InputFeedback(char feedback[], int maxChars) {
    int width = 50;
    int pos = 0;

    cout << "Enter your feedback (max 200 characters, ENTER = finish):\n";

    while (true) {
        char ch = _getch();

        if (ch == 13) { // ENTER
            break;
        } 
        else if (ch == 8 && pos > 0) { // BACKSPACE
            cout << "\b \b";
            pos--;
        } 
        else if (pos < maxChars && ch >= 32 && ch <= 126) {
            cout << ch;
            feedback[pos++] = ch;

            if (pos % width == 0) cout << "\n";
        }
        else if (pos >= maxChars) {
            if (ch == 13) break; 
            else continue; 
        }
    }
    feedback[pos] = '\0';
    cout << endl;
}

//================ Give Feedback =================
void GiveFeedback(const char* userId, const char* username, const char* phone) {
    Feedback fb;
    generateFeedbackId(fb.feedbackId);

    strncpy(fb.userId, userId, sizeof(fb.userId));
    strncpy(fb.username, username, sizeof(fb.username));
    strncpy(fb.phone, phone, sizeof(fb.phone));

    getCurrentDate(fb.date);
    InputFeedback(fb.message, 200);

    ofstream fout("Data/Feedback.flower", ios::binary | ios::app);
    fout.write(reinterpret_cast<char*>(&fb), sizeof(Feedback));
    fout.close();

    cout << "\n✅ Feedback saved successfully!\n";
}

//================ Wrap text =================
void printWrapped(const char* text, int width) {
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i];
        count++;
        if (count % width == 0) cout << "\n";
    }
    cout << endl;
}

//================ Show Feedback with navigation =================
void ShowFeedbackPages() {
    ifstream fin("Data/Feedback.flower", ios::binary);
    if (!fin) {
        cout << "No feedback found.\n";
        return;
    }

    Feedback fb[100]; // allow 100 feedbacks
    int count = 0;
    while (fin.read(reinterpret_cast<char*>(&fb[count]), sizeof(Feedback))) {
        count++;
    }
    fin.close();

    if (count == 0) {
        cout << "No feedback data.\n";
        return;
    }

    int index = 0;
    char key;

    do {
        system("cls");

        cout << "USER ID          : " << fb[index].userId
             << setw(20) << "FEEDBACK : " << fb[index].feedbackId << endl;

        cout << "USER NAME        : " << fb[index].username
             << setw(20) << "DATE     : " << fb[index].date << endl;

        cout << "USER PHONE NUMBER: " << fb[index].phone << endl;

        cout << "-------------------------------------------------------\n";
        printWrapped(fb[index].message, 50);

        cout << "\nUse [LEFT] [RIGHT] ARROW KEY FOR SEE NEXT FEEDBACK AND  [ESC] Exit\n";

        key = _getch(); // read key
        if (key == 0 || key == -32) { // special keys (arrows)
            key = _getch();
            switch (key) {
                case 75: // Left arrow
                    index = (index == 0) ? (count - 1) : (index - 1);
                    break;
                case 77: // Right arrow
                    index = (index == count - 1) ? 0 : (index + 1);
                    break;
            }
        }
    } while (key != 27); // 27 = ESC
}

//================ Example Menu =================
int main() {
    int choice;
    do {
        system("cls");
        cout << "===== Feedback System =====\n";
        cout << "1. Give Feedback\n";
        cout << "2. Show All Feedback\n";
        cout << "0. Exit\n";
        cout << "Choose option: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            GiveFeedback("U-1000", "KEAT SOMARINA", "016269851"); // sample user
        }
        else if (choice == 2) {
            H::setcursor(0,8);
            ShowFeedbackPages();
        }
    } while (choice != 0);

    return 0;
}

// #include "User.h"  // for Header ANT Hinsy OOP

// void NewFlowerEdit();

// int main()
// {
//     H::DisableScreenResize();
//     H::setFont(18,700);
//     H::setFixedScreenConsole(170,40);


//     NewFlowerEdit();



//     getch();
//     return 0;
// }

// void NewFlowerEdit()
// {
    
// //////////////////////////////////////////////////////////////////////////////

//     H::gotoxy(24,31);H::setcolor(2);cout << R"(                    _)";
//     H::gotoxy(24,32);H::setcolor(2);cout << R"(                  _(_)_                          wWWWw   _ )";
//     H::gotoxy(24,33);H::setcolor(2);cout << R"(      @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_ )";
//     H::gotoxy(24,34);H::setcolor(2);cout << R"(     @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_) )";
//     H::gotoxy(24,35);H::setcolor(2);cout << R"(      @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\ )";
//     H::gotoxy(24,36);H::setcolor(2);cout << R"(       /      Y       \|    \|/    /(_)    \|      |/      | )";
//     H::gotoxy(24,37);H::setcolor(2);cout << R"(    \ |     \ |/       | / \ | /  \|/       |/    \|      \|/ )";
//     H::gotoxy(24,38);H::setcolor(2);cout << R"(    \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
//     H::gotoxy(24,39);H::setcolor(2);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ )";

//     H::gotoxy(85,32);H::setcolor(2);cout << R"(               _(_)_                          wWWWw   _)";
//     H::gotoxy(85,33);H::setcolor(2);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_)";
//     H::gotoxy(85,34);H::setcolor(2);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_))";
//     H::gotoxy(85,35);H::setcolor(2);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\)";
//     H::gotoxy(85,36);H::setcolor(2);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/      |)";
//     H::gotoxy(85,37);H::setcolor(2);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \|      \|/)";
//     H::gotoxy(85,38);H::setcolor(2);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|//)";
//     H::gotoxy(85,39);H::setcolor(2);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
// /////////////////////////////////////////////////////////////////////////////////////////////////////
//     H::gotoxy(24,33);H::setcolor(4);cout << R"(      @@@@  )";
//     H::gotoxy(24,34);H::setcolor(4);cout << R"(     @@()@@ )";
//     H::gotoxy(24,35);H::setcolor(4);cout << R"(      @@@@  )";

//     H::gotoxy(85,33);H::setcolor(4);cout << R"(   @@@@  )";
//     H::gotoxy(85,34);H::setcolor(4);cout << R"(  @@()@@ )";
//     H::gotoxy(85,35);H::setcolor(4);cout << R"(   @@@@  )";
// /////////////////////////////////////////////////////////////////////////////////////////////////////
//     H::gotoxy(36,34);H::setcolor(5);cout << R"(wWWWw )";
//     H::gotoxy(36,35);H::setcolor(5);cout << R"((___) )";

//     H::gotoxy(94,34);H::setcolor(5);cout << R"(wWWWw)";
//     H::gotoxy(94,35);H::setcolor(5);cout << R"((___))"; 

// /////////////////////////////////////////////////////////////////////////////////////////////////////

//     H::gotoxy(99,31);H::setcolor(1);cout << R"(   _  )";
//     H::gotoxy(99,32);H::setcolor(1);cout << R"( _(_)_)";
//     H::gotoxy(99,33);H::setcolor(1);cout << R"((_)@(_))";
//     H::gotoxy(99,34);H::setcolor(1);cout << R"(  (_)\ )";
//     H::gotoxy(104,34);H::setcolor(2);cout<< R"(\)";

//     H::gotoxy(41,31);H::setcolor(1);cout << R"(   _)";
//     H::gotoxy(41,32);H::setcolor(1);cout << R"( _(_)_)";
//     H::gotoxy(41,33);H::setcolor(1);cout << R"((_)@(_))";
//     H::gotoxy(41,34);H::setcolor(1);cout << R"(  (_)\)"; 
//     H::gotoxy(46,34);H::setcolor(2);cout << R"(\)";
// //////////////////////////////////////////////////////////////////////////////////////////////////////
//     H::gotoxy(51,33);H::setcolor(1);cout << R"(vVVVv)";
//     H::gotoxy(51,34);H::setcolor(1);cout << R"((___))";

//     H::gotoxy(109,33);H::setcolor(1);cout << R"(vVVVv)";
//     H::gotoxy(109,34);H::setcolor(1);cout << R"((___))";

// //////////////////////////////////////////////////////////////////////////////////////////////////////
//     H::gotoxy(57,33);H::setcolor(6);cout << R"(    _)";
//     H::gotoxy(57,34);H::setcolor(6);cout << R"(  _(_)_)";
//     H::gotoxy(57,35);H::setcolor(6);cout << R"( (_)@(_))";
//     H::gotoxy(57,36);H::setcolor(6);cout << R"(  /(_))";
//     H::gotoxy(58,36);H::setcolor(2);cout << R"( /)";

//     H::gotoxy(116,33);H::setcolor(6);cout << R"(   _)";
//     H::gotoxy(116,34);H::setcolor(6);cout << R"( _(_)_)";
//     H::gotoxy(116,35);H::setcolor(6);cout << R"((_)@(_))";
//     H::gotoxy(116,36);H::setcolor(6);cout << R"( /(_))";
//     H::gotoxy(117,36);H::setcolor(2);cout << R"(/)";
    
// //////////////////////////////////////////////////////////////////////////////////////////////////////

//     H::gotoxy(66,33);H::setcolor(5);cout << R"( @@@@)";
//     H::gotoxy(66,34);H::setcolor(5);cout << R"(@@()@@)";
//     H::gotoxy(66,35);H::setcolor(5);cout << R"( @@@@)";

//     H::gotoxy(124,33);H::setcolor(5);cout << R"( @@@@)";
//     H::gotoxy(124,34);H::setcolor(5);cout << R"(@@()@@)";
//     H::gotoxy(124,35);H::setcolor(5);cout << R"( @@@@)";

// /////////////////////////////////////////////////////////////////////////////////////////////////////
//     H::gotoxy(73,32);H::setcolor(5);cout << R"(wWWWw)";
//     H::gotoxy(73,33);H::setcolor(5);cout << R"((___))";

//     H::gotoxy(131,32);H::setcolor(5);cout << R"(wWWWw)";
//     H::gotoxy(131,33);H::setcolor(5);cout << R"((___))";
// /////////////////////////////////////////////////////////////////////////////////////////////////////
//     H::gotoxy(78,32);H::setcolor(4);cout << R"(   _ )";
//     H::gotoxy(78,33);H::setcolor(4);cout << R"( _(_)_ )";
//     H::gotoxy(78,34);H::setcolor(4);cout << R"((_)@(_) )";
//     H::gotoxy(78,35);H::setcolor(4);cout << R"(  (_)\ )";
//     H::gotoxy(83,35);H::setcolor(2);cout << R"(\)";

//     H::gotoxy(136,32);H::setcolor(4);cout << R"(   _)";
//     H::gotoxy(136,33);H::setcolor(4);cout << R"( _(_)_)";
//     H::gotoxy(136,34);H::setcolor(4);cout << R"((_)@(_))";
//     H::gotoxy(136,35);H::setcolor(4);cout << R"(  (_)\)";
//     H::gotoxy(141,35);H::setcolor(2);cout << R"(\)";

// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //              Treee
// 	H::setcolor(1);H::gotoxy(6,28);cout<<R"(        a@@@@a    )";         
// 	H::setcolor(2);H::gotoxy(6,29);cout<<R"(    a@@@@@@@@@@@@a )";        
// 	H::setcolor(3);H::gotoxy(6,30);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
// 	H::setcolor(4);H::gotoxy(6,31);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
// 	H::setcolor(5);H::gotoxy(6,32);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
// 	H::setcolor(6);H::gotoxy(6,33);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
// 	H::setcolor(8);H::gotoxy(6,34);cout<<R"(          ||)";
// 	H::setcolor(8);H::gotoxy(6,35);cout<<R"(          ||   )";      
// 	H::setcolor(8);H::gotoxy(6,36);cout<<R"(          ||)";
// 	H::setcolor(8);H::gotoxy(6,37);cout<<R"(          ||)";
// 	H::setcolor(8);H::gotoxy(6,38);cout<<R"(         /MM\)";
// 	H::setcolor(2);H::gotoxy(6,39);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
// ////////////////////////////////////////////////////////////////////////////////////////////////

//     H::setcolor(1);H::gotoxy(143,28);cout<<R"(        a@@@@a    )";         
// 	H::setcolor(2);H::gotoxy(143,29);cout<<R"(    a@@@@@@@@@@@@a )";        
// 	H::setcolor(3);H::gotoxy(143,30);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
// 	H::setcolor(4);H::gotoxy(143,31);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
// 	H::setcolor(5);H::gotoxy(143,32);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
// 	H::setcolor(6);H::gotoxy(143,33);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
// 	H::setcolor(8);H::gotoxy(143,34);cout<<R"(          ||)";
// 	H::setcolor(8);H::gotoxy(143,35);cout<<R"(          ||   )";      
// 	H::setcolor(8);H::gotoxy(143,36);cout<<R"(          ||)";
// 	H::setcolor(8);H::gotoxy(143,37);cout<<R"(          ||)";
// 	H::setcolor(8);H::gotoxy(143,38);cout<<R"(         /MM\)";
// 	H::setcolor(2);H::gotoxy(143,39);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^)";


// }