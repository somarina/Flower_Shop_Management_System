#ifndef ___INC_USER_H__
#define ___INC_USER_H__

#include "UserDesign.h"
#include "../Admin/product.h"
/////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///                               Global Function
void CurrentDateTime();
void Register();
void Login();
void ForgetPassword();
void Problem();
void Buying();
void ShowInvoice();
void ShowAllInvoices();
void UserMenu();
void LoginAsUser();
void DesignUserMenu();
void UserBigMenu();
void NewFlowerEdit();
void AboutUs();
void openMyWebsite(const string& url);
void MNM2(const string &str);
void test();
void DesignShowUserDate();
void SearchUserData();
void ShowUserData2();
void DesignShowUserDate2();
void DesignUserInformation();
//================================ User Class ==============================
class UserData {
private:
    char username[20];
    char id[10];
    char gender[10];
    char password[30];
    char conPassword[30];
    char phoneNumber[20];
    char email[30];

public:
    void inputUserData();
    void DisplayUserData();
    bool confirmPassword();
    void SelectGender(int x, int y, char gender[]);

    void setId(const char* id) { strcpy(this->id, id); }
    void setUsername(const char* username) { strcpy(this->username, username); }
    void setPassword(const char* password) { strcpy(this->password, password); }
    void setPhoneNumber(const char* phone) { strcpy(this->phoneNumber, phone); }
    void setGender(const char* gender) { strcpy(this->gender, gender); }
    void setEmail(const char* email) { strcpy(this->email, email); }

    const char* getId() const { return id; }
    const char* getUserName() const { return username; }
	const char* getGender() const {return gender; }
    const char* getPassword() const { return password; }
    const char* getPhoneNumber() const { return phoneNumber; }
    const char* getEmail() const { return email; }
};

void UserData::SelectGender(int x, int y, char gender[])
{
	const char* options[] = { "Male   ", "Female" };
	int index = 0;
	char key;

	do {
		// Clear the area before printing (max length = 4 including null)
		H::gotoxy(x, y); H::setcolor(167);
		cout << "     "; // Padding to clear old word

		// Display current selection
		H::gotoxy(x, y); H::setcolor(167);
		cout << options[index];

		key = getch();

		if (key == 0 || key == -32) {
			char arrow = getch();
			switch (arrow) {
				case 72: case 75: // up or left
					index = (index - 1 + 2) % 2;
					break;
				case 80: case 77: // down or right
					index = (index + 1) % 2;
					break;
			}
		}
	} while (key != 13); // ENTER to confirm

	strcpy(gender, options[index]);
}

void UserData::inputUserData() {
	H::setcursor(1,8);
    H::setcolor(215);H::gotoxy(28,20);cout << "Enter Username ";
    H::setcolor(215);H::gotoxy(28,25);cout << "Enter Gender ";
    H::setcolor(215);H::gotoxy(93,15);cout << "Enter Phone Number ";
    H::setcolor(215);H::gotoxy(93,20);cout << "Enter Password ";
    H::setcolor(215);H::gotoxy(93,25);cout << "Confirm Password";

    H::setcolor(167);H::gotoxy(58,20);cout << ":  ";H::inputLetter(username,10);
    H::setcolor(167);H::gotoxy(58,25);cout << ":  ";
    H::setcolor(167);H::gotoxy(61,25);SelectGender(61,25,gender);
    H::setcolor(167);H::gotoxy(123,15);cout << ":  ";H::inputUNumber(phoneNumber,11);
    H::setcolor(167);H::gotoxy(123,20);cout << ":  ";H::inputAll(password,10);

    // Keep asking only confirm password until it matches
    while (true) {
        H::setcolor(167);H::gotoxy(123,25);cout << ":  ";H::inputAll(conPassword,10);
        if (confirmPassword()) break; // exit loop if correct
        H::drawBoxSingleLineWithBG(120,24,25,1,162);
        H::setcolor(180);H::gotoxy(103,27);cout << "Passwords do not match! Please re-enter.\n";
    }
}

bool UserData::confirmPassword() {
    return strcmp(password, conPassword) == 0;
}
void UserData::DisplayUserData() {
	H::setcolor(3);H::gotoxy(37,21);cout<<id;
	H::setcolor(3);H::gotoxy(55,21);cout<<username;
	H::setcolor(3);H::gotoxy(76,21);cout<<gender;
	H::setcolor(3);H::gotoxy(97,21);cout<<phoneNumber;
	H::setcolor(3);H::gotoxy(124,21);cout<<password;
}

void ShowUserData() {
	a:
	H::setcursor(0,8);
    ifstream fin("Data/UserData.flower", ios::binary);
    if (!fin) {
        DesignShowUserDate();
        H::gotoxy(37, 14);
        cout << "No user data file found!" << endl;
        return;
    }

    // First, count total users
    fin.seekg(0, ios::end);
    int totalUsers = fin.tellg() / sizeof(UserData);
    fin.seekg(0, ios::beg);

    if (totalUsers == 0) {
        DesignShowUserDate();
        H::gotoxy(37, 14);
        cout << "No users to display." << endl;
        return;
    }

    int pageSize = 7;                     // Users per page
    int totalPages = (totalUsers + pageSize - 1) / pageSize;
    int currentPage = 0;

    UserData users[totalUsers];
    // Load all users into memory
    for (int i = 0; i < totalUsers; i++) {
        fin.read((char*)&users[i], sizeof(UserData));
    }
    fin.close();

    char key;
	DesignShowUserDate();
    do {
		H::setcursor(0,8);
		H::clearBox(35,15,97,6,0);
		
        int startIdx = currentPage * pageSize;
        int endIdx = min(startIdx + pageSize, totalUsers);
        int startY = 15;
		int m=1;
		H::setcursor(0,8);
        for (int i = startIdx, line = 0; i < endIdx; i++, line++,m++) {
			H::setcolor(m);H::gotoxy(36, startY + line); cout << users[i].getId();          
			H::setcolor(m);H::gotoxy(54, startY + line); cout << users[i].getUserName();    
			H::setcolor(m);H::gotoxy(76, startY + line); cout << users[i].getGender();      
			H::setcolor(m);H::gotoxy(98, startY + line); cout << users[i].getPhoneNumber(); 
			H::setcolor(m);H::gotoxy(123,startY + line); cout << users[i].getPassword();

			if(m>6)
			{
				m=1;
			}
		}
		H::setcursor(0,8);

        // H::gotoxy(37, startY + pageSize + 1);
        // cout << "Page " << currentPage + 1 << " / " << totalPages;
		H::setcolor(7);H::gotoxy(79,24);cout<<"PAGE";
		H::setcolor(1);H::gotoxy(84,24);cout << currentPage + 1 << " / " << totalPages;
        key = _getch();

        if (key == 0 || key == 224) key = _getch(); // handle arrow keys
        if (key == 75) {
            currentPage--;
            if (currentPage < 0) currentPage = totalPages - 1; // circular
        } else if (key == 77) {
            currentPage++;
            if (currentPage >= totalPages) currentPage = 0; // circular
        } else if (key == 13)
		{
			H::cls();
			H::setcursor(0,8);
			SearchUserData();
			H::cls();
			H::setcursor(0,8);
			goto a;
		}
        // system("cls"); // clear screen for next page
    } while (key != 27); // ESC key to exit
}

void ShowUserData2() {
	H::setcursor(0,8);
    ifstream fin("Data/UserData.flower", ios::binary);
    if (!fin) {
        DesignShowUserDate2();
        H::gotoxy(37, 14);
        cout << "No user data file found!" << endl;
        return;
    }

    // First, count total users
    fin.seekg(0, ios::end);
    int totalUsers = fin.tellg() / sizeof(UserData);
    fin.seekg(0, ios::beg);

    if (totalUsers == 0) {
        DesignShowUserDate2();
        H::gotoxy(37, 14);
        cout << "No users to display." << endl;
        return;
    }

    int pageSize = 7;                     // Users per page
    int totalPages = (totalUsers + pageSize - 1) / pageSize;
    int currentPage = 0;

    UserData users[totalUsers];
    // Load all users into memory
    for (int i = 0; i < totalUsers; i++) {
        fin.read((char*)&users[i], sizeof(UserData));
    }
    fin.close();

    char key;
	DesignShowUserDate2();
    do {
		H::clearBox(35,15,97,6,0);
		
        int startIdx = currentPage * pageSize;
        int endIdx = min(startIdx + pageSize, totalUsers);
        int startY = 15;
		int m=1;

        for (int i = startIdx, line = 0; i < endIdx; i++, line++,m++) {
			H::setcolor(m);H::gotoxy(34, startY + line); cout << "U-" << users[i].getId();          
			H::setcolor(m);H::gotoxy(54, startY + line); cout << users[i].getUserName();    
			H::setcolor(m);H::gotoxy(76, startY + line); cout << users[i].getGender();      
			H::setcolor(m);H::gotoxy(98, startY + line); cout << users[i].getPhoneNumber(); 
			H::setcolor(m);H::gotoxy(123,startY + line); cout << users[i].getPassword();

			if(m>6)
			{
				m=1;
			}
		}
	

        // H::gotoxy(37, startY + pageSize + 1);
        // cout << "Page " << currentPage + 1 << " / " << totalPages;
		H::setcolor(7);H::gotoxy(79,24);cout<<"PAGE";
		H::setcolor(1);H::gotoxy(84,24);cout << currentPage + 1 << " / " << totalPages;
        key = _getch();

        if (key == 0 || key == 224) key = _getch(); // handle arrow keys
        if (key == 75) {
            currentPage--;
            if (currentPage < 0) currentPage = totalPages - 1; // circular
        } else if (key == 77) {
            currentPage++;
            if (currentPage >= totalPages) currentPage = 0; // circular
        }
        // system("cls"); // clear screen for next page
    } while (key != 27); // ESC key to exit
}

void SearchUserData() {
    while (true) {
		H::setcursor(0,8);
        ifstream fin("Data/UserData.flower", ios::binary);
        if (!fin) {
			DesignUserInformation();
            H::setcolor(8);H::gotoxy(76,24);cout<<"No user data file found!";
            return;
        }
		H::clearBox(63,14,41,1,136);
		DesignUserInformation();

        char search[30];
        bool found = false;

		H::setcursor(1,8);
		H::setcolor(135);H::gotoxy(70,14);H::inputAll(search,9);  

        UserData user;
        while (fin.read((char*)&user, sizeof(UserData))) {
			H::setcursor(0,8);
            if (strcmp(user.getUserName(), search) == 0 || strcmp(user.getId(), search) == 0) {
                H::setcolor(3);H::gotoxy(37,21);user.DisplayUserData();
                found = true;
                break;
            }
        }
        fin.close();

        if (!found) {
			H::setcursor(0,8);
            H::setcolor(8);H::gotoxy(76,24);cout<<"USER NOT FOUND";
        }

		H::setcolor(7);H::gotoxy(67,29);cout<<"PRESS [ENTER] FOR SEARCH AGAIN";
		H::setcolor(2);H::gotoxy(73,29);cout<<"[ENTER]";
		H::setcolor(5);H::gotoxy(85,29);cout<<"SEARCH AGAIN";
		H::setcolor(7);H::gotoxy(72,31);cout<<"PRESS [ESC] FOR BACK";
		H::setcolor(3);H::gotoxy(78,31);cout<<"[ESC]";
		H::setcolor(6);H::gotoxy(88,31);cout<<"BACK";
        
        char choice = _getch();  // get key press
        if (choice == 27) {  // ESC key
            break;  // exit function
        } else if (choice == 13) {
			H::setcursor(1,8);
            continue;  // search again
        } else {
            break;  // exit if other keys
        }
    }
}
struct Feedback {
    char feedbackId[10];   // e.g., fed-0001
    char userId[10];       // linked to UserData
    char date[15];         // e.g., 23-11-2005
    char message[201];     // feedback message (max 200 chars)
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
void GiveFeedback(const UserData &user) {
    Feedback fb;
    generateFeedbackId(fb.feedbackId);

    strcpy(fb.userId, user.getId());
    getCurrentDate(fb.date);
    InputFeedback(fb.message, 200);

    ofstream fout("Data/Feedback.flower", ios::binary | ios::app);
    if (!fout) {
        cout << "Error: Cannot open Feedback file!\n";
        return;
    }
    fout.write(reinterpret_cast<char*>(&fb), sizeof(Feedback));
    fout.close();

    cout << " Feedback saved successfully!\n";
}

// find UserData by ID from file
bool findUserById(const char* id, UserData &user) {
    ifstream fin("Data/UserData.flower", ios::binary);
    if (!fin) return false;

    UserData temp;
    while (fin.read(reinterpret_cast<char*>(&temp), sizeof(UserData))) {
        if (strcmp(temp.getId(), id) == 0) {
            user = temp;
            fin.close();
            return true;
        }
    }
    fin.close();
    return false;
}

void printWrapped(const char* text, int width) {
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i];
        count++;
        if (count % width == 0) cout << "\n";
    }
    cout << endl;
}

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

        UserData user;
        if (findUserById(fb[index].userId, user)) {
            cout << "USER ID          : " << user.getId()
                 << setw(20) << "FEEDBACK : " << fb[index].feedbackId << endl;
            cout << "USER NAME        : " << user.getUserName()
                 << setw(20) << "DATE     : " << fb[index].date << endl;
            cout << "USER PHONE NUMBER: " << user.getPhoneNumber() << endl;
        } else {
            cout << "USER ID          : " << fb[index].userId
                 << setw(20) << "FEEDBACK : " << fb[index].feedbackId << endl;
            cout << "USER NAME        : [User not found]"
                 << setw(20) << "DATE     : " << fb[index].date << endl;
        }

        cout << "-------------------------------------------------------\n";
        printWrapped(fb[index].message, 50);

        cout << "\nUse [LEFT] [RIGHT] ARROW KEY FOR SEE NEXT FEEDBACK AND [ESC] Exit\n";

        key = _getch(); 
        if (key == 0 || key == -32) { 
            key = _getch();
            switch (key) {
                case 75: index = (index == 0) ? (count - 1) : (index - 1); break; // Left
                case 77: index = (index == count - 1) ? 0 : (index + 1); break;   // Right
            }
        }
    } while (key != 27); // ESC
}

UserData currentUser;

//=========================== Auto-generate UserID =======================
const char* generateNextUserId() {
    static char newId[10];
    ifstream fin("Data/UserData.flower", ios::binary);
    if (!fin || fin.peek() == ifstream::traits_type::eof()) {
        strcpy(newId, "1000");
        return newId;
    }

    UserData user;
    fin.seekg(-static_cast<int>(sizeof(UserData)), ios::end);
    fin.read((char*)&user, sizeof(UserData));
    fin.close();

    int num = atoi(user.getId());
    num++;
    sprintf(newId, "%d", num);
    return newId;
}

//=============================== User Functions ========================
void Register() {
	v:
	char op5;
    UserDesign::DesignRegister();
    UserData user;

    const char* newId = generateNextUserId();
    user.setId(newId);

    H::setcolor(215);H::gotoxy(28,15);cout << "User ID ";
    H::setcolor(167);H::gotoxy(58,15);cout << ":  U-" << newId;

    user.inputUserData();

    ofstream fout("Data/UserData.flower", ios::binary | ios::app);
    if (!fout) { cout << "Cannot open file!\n"; return; }
    fout.write((char*)&user, sizeof(UserData));
    fout.close();

    // H::setcolor(178);H::gotoxy(103,27);cout << "Registration successful.                   ";
	H::drawBoxSingleLineWithBG(43,14,83,13,0);
	H::drawBoxSingleLine(43,14,83,13,162);
	H::setcolor(2);H::gotoxy(70,23);cout << "Registration successful.                   ";
	// H::setcolor(2);H::gotoxy(70,23);cout << "Login Successful. Welcome " << user.getUserName() << "!\n";
	// H::delay(2000);
	H::setcolor(2);H::gotoxy(60,24);cout << "PRESS ESC FOR EXIT AND ENTER FOR REGISTER AGAIN";
	op5 = getch();

	if(op5 == 27)
	{
		return;
	}
	if(op5 == 13)
	{
		goto v;
	}
	
}

void Login() {
	H::setcursor(1,8);
    UserDesign::DesignLogin();
    UserData user;
    char username[20], password[30];
    bool found = false;
    char choice;

    do {
        UserDesign::DesignLogin();
        // cout << "\n========== User Login ==========\n";
        H::setcolor(215);H::gotoxy(54,18);cout << "Username ";
        H::setcolor(215);H::gotoxy(54,24);cout << "Password ";
        
        H::setcolor(225);H::gotoxy(95,18);cout << ":  ";H::inputLetter(username,10);
        H::setcolor(225);H::gotoxy(95,24);cout << ":  ";H::inputPasswordMask(password,9);

        ifstream fin("Data/UserData.flower", ios::binary);
        if (!fin || fin.peek() == ifstream::traits_type::eof()) {
            UserDesign::DesignLogin();
            cout << "No user data.\n"; 
            choice = 'n';
        } else {
            found = false;
            while (fin.read((char*)&user, sizeof(UserData))) {
                if (strcmp(user.getUserName(), username) == 0 &&
                    strcmp(user.getPassword(), password) == 0) {
                    found = true;
                    currentUser = user;
                    H::drawBoxSingleLineWithBG(43,14,83,13,0);
                    H::drawBoxSingleLine(43,14,83,13,162);
                    H::setcolor(2);H::gotoxy(70,23);cout << "Login Successful. Welcome " << user.getUserName() << "!\n";
                    H::delay(2000);
					H::cls();
					DesignUserMenu();
                }
            }
            fin.close();

            if (!found) 
            {
				H::setcursor(0,8);
                H::drawBoxSingleLineWithBG(43,14,83,13,0);
                H::drawBoxSingleLine(43,14,83,13,196);
                H::gotoxy(50,18);H::setcolor(7);cout << "This Username and Password Doesn't have in our system";

                // keep asking until valid choice entered
                do {
                    H::gotoxy(50,19);H::setcolor(7);cout << "Do you have an account?\n";
                    H::gotoxy(50,20);H::setcolor(7);cout << "y = try again, n = register, f = forgot password: ";
                    cin >> choice;

                    if (choice == 'y' || choice == 'Y') {
                        // just retry login
						H::setcursor(1,8);
						H::setcolor(0);
						H::cls();
                        break;
                    }
                    else if (choice == 'n' || choice == 'N') {
						H::setcursor(1,8);
						H::setcolor(0);
						H::cls();
                        Register();
                        H::setcolor(0); 
                        H::cls();
                        choice = 'y';  // go back to login after register
                        break;
                    }
                    else if (choice == 'f' || choice == 'F') {
						H::setcursor(1,8);
						H::setcolor(0);
						H::cls();
                        ForgetPassword(); 
						H::setcolor(0);
						H::cls();
                        choice = 'y';  // go back to login after forgot
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please enter again.\n";
                    }
                } while (true);
            }
        }
    } while (!found && (choice == 'y' || choice == 'Y'));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ForgetPassword() {
a:
    H::setcolor(3);
    H::setcursor(1,8);
    UserData user;
    char username[20]; 
    char phone[20];
    bool found = false; 
    char op;
	UserDesign::DesignForget();

    cout << "Enter username: "; 
    cout << ":  "; 
    H::inputLetter(username, 10);

    ifstream fin("Data/UserData.flower", ios::binary);
    if (!fin || fin.peek() == ifstream::traits_type::eof()) { 
        cout << "No user data.\n"; 
        return;
    }

    while (fin.read((char*)&user, sizeof(UserData))) {
        if (strcmp(user.getUserName(), username) == 0) {
            found = true;
            cout << "User found: " << user.getUserName() << "\n";

        b:
            cout << "Enter phone: "; 
            cin >> phone;

            if (strcmp(user.getPhoneNumber(), phone) == 0) {
                cout << "Your password: " << user.getPassword() << endl;
                cout << "PRESS ESC TO GO BACK OR ENTER TO TRY AGAIN ..";
                op = getch();
                if (op == 27) { // ESC
                    return;
                }
                if (op == 13) { // ENTER
                    H::setcolor(3);
                    H::cls();
                    goto a;
                }
            } else {
                cout << "This Phone Number Not Found.\n";
                goto b;
            }

            break; // exit after handling found user
        }
    }
    fin.close();

    if (!found) {
        cout << "Username not found.\n";
        goto a;
    }
}

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
//================ ShowInvoice Function =================
void ShowInvoice(UserData &user, BoughtItem items[], int count) {
	
    int page = 0;
    const int pageSize = 10;
    int totalPages = (count + pageSize - 1) / pageSize;

    int currentInvoiceNo = invoiceCounter++;
    char invoiceStr[20];
    sprintf(invoiceStr, "INV%04d", currentInvoiceNo);

    time_t now = time(0);
    tm* ltm = localtime(&now);

    while (true) {
		DesignInvoice();
        double grandTotal = 0;

        // cout << "================ FLOWER SHOP INVOICE ================\n";
		H::setcolor(4);H::gotoxy(120,10);cout << invoiceStr;
        H::setcolor(5);H::gotoxy(120,11);cout << 1900 + ltm->tm_year << "-"
             << 1 + ltm->tm_mon << "-" << ltm->tm_mday << " "
             << setw(2) << setfill('0') << ltm->tm_hour << ":"
             << setw(2) << setfill('0') << ltm->tm_min << setfill(' ') << "\n\n";

        H::setcolor(1);H::gotoxy(60,14);cout << user.getId();
        H::setcolor(2);H::gotoxy(60,15);cout << user.getUserName();
        H::setcolor(3);H::gotoxy(60,16);cout << user.getPhoneNumber();
        int start = page * pageSize;
        int end = min(start + pageSize, count);
		int y=20;
        for (int i = start; i < end; i++) {
				H::setcolor(5);H::gotoxy(37,y);cout<<i + 1;
				H::setcolor(4);H::gotoxy(53,y);cout<<items[i].product.GetFlowerName();
				H::setcolor(3);H::gotoxy(85,y);cout<<items[i].qty;
				H::setcolor(2);H::gotoxy(108,y);cout<<"$"<<items[i].product.GetFlowerPrice();
				H::setcolor(1);H::gotoxy(128,y);cout<<"$"<<items[i].getTotal();	
            grandTotal += items[i].getTotal();
			y++;
        }
		H::HLine(31,30,109,2,196);
		H::setcolor(3);H::gotoxy(35,31);cout<<"DISCOUNT";
		H::setcolor(1);H::gotoxy(35,32);cout<<"TOTAL PRICE : ";
		H::setcolor(4);H::gotoxy(95,32);cout<<"USD  : $" << fixed << setprecision(2) << grandTotal;
		double kh = (grandTotal * 4100);
		H::setcolor(4);H::gotoxy(115,32);cout << "KHR : " << fixed << setprecision(0) << kh;
		H::HLine(31,33,109,2,196);	
        // cout << "-------------------------------------------------\n";
        // cout << "Grand Total: $" << grandTotal << endl;
        // cout << "=================================================\n";

        // cout << "\nPage " << (page + 1) << " of " << totalPages << endl;
        // cout << "Use UP/DOWN to view more items.\n";
        // cout << "Press ENTER to Buy Again, ESC/BACKSPACE to return to Main Menu...\n";

        char ch = _getch();
        if (ch == 13) {       // ENTER
            Buying();
            return;
        } 
        else if (ch == 27 || ch == 8) { // ESC or BACKSPACE
            return;
        }
        else if (ch == -32) { // arrow key prefix
            ch = _getch();
            if (ch == 80 && page < totalPages - 1) page++;   // DOWN
            else if (ch == 72 && page > 0) page--;           // UP
        }
    }
}
void MessageBox(){
	H::setcursor(0,0);
	H::clearBox(49,16,35,3,0);
	H::clearBox(86,21,35,3,0);
	H::drawBoxSingleLineWithBG(43,15,83,10,0);
    H::drawBoxSingleLine(43,15,83,10,162);
    H::drawBoxSingleLineWithBG(44,16,81,1,213);
    H::setcolor(215);H::gotoxy(80,17);cout<<"MESSAGE";
    
    
    int x=0;
    char op;
    do{
    	//arrow key lef
	    H::drawBoxSingleLineWithBG(44,23,21,1,153);
	    H::setcolor(151);H::gotoxy(45,24);cout<<"[ENTER] TO BUY MORE";
	    //ARROE KEY RIGHT
	    H::drawBoxSingleLineWithBG(100,23,25,1,153);
	    H::setcolor(151);H::gotoxy(101,24);cout<<"[ESC] FOR PRINT INVOICE";
	    if(x==0){
	    	H::drawBoxSingleLineWithBG(44,23,21,1,136);
	    	H::setcolor(135);H::gotoxy(45,24);cout<<"[ENTER] TO BUY MORE";
		}
		if(x==1){
			H::drawBoxSingleLineWithBG(100,23,25,1,136);
	    	H::setcolor(135);H::gotoxy(101,24);cout<<"[ESC] FOR PRINT INVOICE";
		}
		op=getch();
		switch(op){
			case 75:{
				x--;
				if(x<0){
					x=1;
				}
				break;
			}
			case 77:{
				x++;
				if(x>1){
					x=0;
				}
				break;
			}
		}
	}while(op!=13);
	
}
//================ Buying Function =================
void Buying() 
{
    vector<BoughtItem> cart;
    char key;
	char op3;
   
    do {
        H::setcolor(0);
        system("cls");
        DesignBuyingFlower();

        bool found = false;
        Product flower;
        int buyQty;
        string srtBuyQty;
        char input[50];

        while (!found) {
            H::setcolor(3);H::gotoxy(53,18);cout << "Enter Flower ID or Name ";
            H::setcolor(3);H::gotoxy(90,18);cout << ":  ";H::inputAll(input,10);

            ifstream fin("Data\\Product.flower", ios::binary);
            if (!fin) {
                H::drawBoxSingleLineWithBG(49,16,72,9,6);
                H::setcolor(4);H::gotoxy(55,20);cout << "Error: Product.flower not found!";
                return;
            }

            found = false;

            while (fin.read((char*)&flower, sizeof(Product))) {
				
                if (strcmp(flower.GetFlowerName(), input) == 0 ||
                    flower.GetFlowerId() == atoi(input)) {
                    found = true;

                  do {
					e:
						H::setcolor(3);H::gotoxy(53,23); cout << "Enter Quantity to buy";
						H::setcolor(3);H::gotoxy(90,23); cout << ":  ";
						buyQty = stoi(H::inputUNumber(srtBuyQty, 6));

						if (buyQty > flower.GetFlowerQty()) {
							H::setcolor(4);
							H::gotoxy(53,24);
							cout << " Not enough stock! Available: " << flower.GetFlowerQty();
							H::setcolor(3);H::gotoxy(90,22); cout << ":             ";
							
							goto e;
							
						} else if (buyQty <= 0) {
							H::setcolor(4);
							H::gotoxy(53,24);
							cout << " Quantity must be at least 1.";
						} else {
							break; // valid quantity
						}
					} while (true);
                    // Reduce stock
                    flower.SetFlowerQty(flower.GetFlowerQty() - buyQty);

                    // Update Product.flower
                    fin.close();
                    fstream fout("Data\\Product.flower", ios::binary | ios::in | ios::out);
                    Product temp;
                    while (fout.read((char*)&temp, sizeof(Product))) {
                        if (temp.GetFlowerId() == flower.GetFlowerId()) {
                            fout.seekp((int)fout.tellg() - sizeof(Product));
                            fout.write((char*)&flower, sizeof(Product));
                            break;
                        }
                    }
                    fout.close();

                    // Add to cart
                    BoughtItem item;
                    item.product = flower;
                    item.qty = buyQty;
                    cart.push_back(item);

//                    cout << "\nItem added successfully!\n";
				
                    break;
                }
            }
            fin.close();
////////////////////////////////////////////////////////////////////////Meyly Change//////////////////////////////
            if (!found) {     	
                H::setcolor(2);H::gotoxy(55,21);cout <<"This flower ID or Name doesn't exist in our system. Try again.";
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                
            }
        }
////////////////////////////////////////////////////////////Meyly Change///////////////////////////
	H::setcolor(2);H::gotoxy(70,21);cout << "Item added successfully!";
	MessageBox();
	        
/////////////////////////////////////////////////////////////////////////////////////////////////////////////	    
        key = _getch();

    } while (key == 13);

    // Save invoice
    int count = cart.size();
    double grandTotal = 0;
    for (auto &item : cart) grandTotal += item.getTotal();

    ofstream fout("Data\\Invoice.flower", ios::binary | ios::app);
    fout.write((char*)&currentUser, sizeof(UserData));
    fout.write((char*)&count, sizeof(int));
    fout.write((char*)cart.data(), sizeof(BoughtItem) * count);
    fout.write((char*)&grandTotal, sizeof(double));
    fout.close();

    // Show invoice
    ShowInvoice(currentUser, cart.data(), count);
}
//================ ShowAllInvoices Function =================
void ShowAllInvoices() {
	H::setcursor(0,8);
    struct Invoice {
        UserData user;
        int count;
        BoughtItem items[100];
        double grandTotal;
    };

    ifstream fin("Data/Invoice.flower", ios::binary);
    if (!fin || fin.peek() == ifstream::traits_type::eof()) {
		H::setcursor(0,8);
		DesignInvoice();
        cout << "No invoices.\n";
        return;
    }

    vector<Invoice> invoices;

    while (true) {
        Invoice inv;
        if (!fin.read((char*)&inv.user, sizeof(UserData))) break;
        if (!fin.read((char*)&inv.count, sizeof(int))) break;
        if (!fin.read((char*)inv.items, sizeof(BoughtItem) * inv.count)) break;
        if (!fin.read((char*)&inv.grandTotal, sizeof(double))) break;

        invoices.push_back(inv);
    }
    fin.close();

    if (invoices.empty()) {
		H::setcursor(0,8);
		DesignInvoice();
        cout << "No invoices.\n";
        return;
    }

    int index = 0;
    int page = 0;
    const int ITEMS_PER_PAGE = 10;
	H::setcursor(0,8);
    while (true) {
		int y=20;
		DesignInvoice();
		H::clearBox(36,20,100,9,7);
		H::clearBox(58,15,15,1,7);
        Invoice &inv = invoices[index];

        // cout << "========== Invoice " << index + 1 << " / " << invoices.size() << " ==========\n";
		H::setcolor(1);H::gotoxy(60,14);cout << inv.user.getId();
        H::setcolor(2);H::gotoxy(60,15);cout << inv.user.getUserName();
        H::setcolor(3);H::gotoxy(60,16);cout << inv.user.getPhoneNumber();

        int start = page * ITEMS_PER_PAGE;
        int end = min(start + ITEMS_PER_PAGE, inv.count);
        for (int j = start; j < end; j++) 
		{
			////////////////////////////////////////////////////////////////////////
			H::setcolor(5);H::gotoxy(37,y);cout<<j + 1;
			H::setcolor(4);H::gotoxy(53,y);cout<<inv.items[j].product.GetFlowerName();
			H::setcolor(3);H::gotoxy(85,y);cout<<inv.items[j].qty;
			H::setcolor(2);H::gotoxy(108,y);cout<<"$"<<inv.items[j].product.GetFlowerPrice();
			H::setcolor(1);H::gotoxy(128,y);cout<<"$"<<inv.items[j].getTotal() << endl;
			y++;
        }
		H::HLine(31,30,109,2,196);
		H::setcolor(3);H::gotoxy(35,31);cout<<"DISCOUNT";
		H::setcolor(1);H::gotoxy(35,32);cout<<"TOTAL PRICE : ";
		H::setcolor(4);H::gotoxy(95,32);cout<<"USD  : $" << fixed << setprecision(2) << inv.grandTotal;
		double kh = (inv.grandTotal*4100);
		H::setcolor(4);H::gotoxy(115,32);cout << "KHR : " << fixed << setprecision(0) << kh;
		H::HLine(31,33,109,2,196);	
        int key = _getch();
        if (key == 27)  // ESC
		{
			return;
		}

        if (key == 0 || key == 224) {
            key = _getch();
            if (key == 75) { // LEFT
                index--; page = 0;
                if (index < 0) index = invoices.size() - 1;
            }
            else if (key == 77) { // RIGHT
                index++; page = 0;
                if (index >= invoices.size()) index = 0;
            }
            else if (key == 72) { // UP
                page--;
                if (page < 0) page = 0;
            }
            else if (key == 80) { // DOWN
                int maxPage = (inv.count + ITEMS_PER_PAGE - 1) / ITEMS_PER_PAGE - 1;
                page++;
                if (page > maxPage) page = maxPage;
            }
        }
    }
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// //=============================== User Menu ===============================
// void UserMenu() {
//     char choice;
//     do {
//         system("cls");
//         cout << "\n========== User Menu ==========\n";
//         cout << "1. Register\n2. Login\n3. Forget Password\n4. Buying\n5. Show All Invoices\n0. Exit\n";
//         cout << "Choose option: ";

// 		choice = getch();
//         switch (choice) {
//             case '1': Register(); break;
//             case '2': Login(); break;
//             case '3': ForgetPassword(); break;
//             case '4': Buying(); break;
//             case '5': ShowAllInvoices(); break;
//             case '0': cout << "Exiting...\n"; break;
//             default: cout << "Invalid choice!\n"; break;
//         }
//         if(choice != 0) { cout << "Press any key to continue...\n"; getch(); }
//     } while (choice != 0);
// }
void DesignUserMenu()
{
do{
	a:
	char op;
	int x=1;
	char key;
	Design d;
	H::setcursor(0,0);
	do{
	//left 
	H::HLine(1,0,3,1,220);
	H::HLine(1,39,3,1,223);
	H::VLine(3,0,38,4,219);
	//right
	H::HLine(166,0,3,1,220);
	H::HLine(166,39,3,1,223);
	H::VLine(168,0,38,4,219);
	
	//left 
	
	H::HLine(38,8,35,1,220);
	H::VLine(38,0,8,1,219);
	
	H::VLine(39,4,3,213,219);
	H::HLine(39,7,5,5,220);
	H::HLine(39,7,4,165,220);  
	H::VLine(40,5,1,170,219);
	
	//between
	H::HLine(72,7,27,4,220);
	H::HLine(76,6,19,3,220);
	
	//right
	
	H::HLine(98,8,35,1,220);
	H::VLine(133,0,8,1,219);
	
	H::VLine(132,4,3,213,219);
	H::HLine(126,7,5,5,220);
	H::HLine(127,7,4,165,220);  
	H::VLine(131,5,1,170,219);
    
	H::setcolor(2);H::gotoxy(55,1);cout<<R"(  __  _____________    ___  ______________  __  ___  ________)";
	H::setcolor(3);H::gotoxy(55,2);cout<<R"( / / / / __/ __/ _ \  / _ |/ ___/ ___/ __ \/ / / / |/ /_  __/)";
	H::setcolor(4);H::gotoxy(55,3);cout<<R"(/ /_/ /\ \/ _// , _/ / __ / /__/ /__/ /_/ / /_/ /    / / / )";  
	H::setcolor(5);H::gotoxy(55,4);cout<<R"(\____/___/___/_/|_| /_/ |_\___/\___/\____/\____/_/|_/ /_/    )";
	
	
	H::setcolor(2);H::gotoxy(7,1);cout<<R"(           ')";
	H::setcolor(2);H::gotoxy(7,2);cout<<R"(        \  ,  /)";
	H::setcolor(3);H::gotoxy(7,3);cout<<R"(    ' ,___/_\___, ')";
	H::setcolor(3);H::gotoxy(7,4);cout<<R"(       \ /o.o\ /)";
	H::setcolor(4);H::gotoxy(7,5);cout<<R"(   -=   > \_/ <   =-)";
	H::setcolor(4);H::gotoxy(7,6);cout<<R"(       /_\___/_\)";
	H::setcolor(5);H::gotoxy(7,7);cout<<R"(    . `   \ /   ` .)";
	H::setcolor(5);H::gotoxy(7,8);cout<<R"(        /  `  \)";
	H::setcolor(2);H::gotoxy(7,9);cout<<R"(           .)";	
	
	
	H::setcolor(7);H::gotoxy(143,1);cout<<R"(     .-.    )";                                
	H::setcolor(7);H::gotoxy(143,2);cout<<R"(  .-(   )-.  )";                           
	H::setcolor(7);H::gotoxy(143,3);cout<<R"( (     __) )-. )";                      
	H::setcolor(7);H::gotoxy(143,4);cout<<R"(  `-(       __) )";                     
	H::setcolor(7);H::gotoxy(143,5);cout<<R"(    `(____)-',  )";                      
	H::setcolor(4);H::gotoxy(143,6);cout<<R"(  - -  :   :  - -)";
	H::setcolor(4);H::gotoxy(143,7);cout<<R"(      / `-' \)";
	H::setcolor(4);H::gotoxy(143,8);cout<<R"(    ,    |   .)";
	H::setcolor(4);H::gotoxy(143,9);cout<<R"(         .    )"; 	
       
	   
	
	H::setcolor(4); H::gotoxy(7,11);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(7,12);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(7,13);cout << R"(  (/|\) )";	
	
	H::setcolor(4); H::gotoxy(34,13);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(34,14);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(34,15);cout << R"(  (/|\) )";
	
	H::setcolor(4); H::gotoxy(59,12);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(59,13);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(59,14);cout << R"(  (/|\) )";

	H::setcolor(4); H::gotoxy(79,10);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(79,11);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(79,12);cout << R"(  (/|\) )";
	
	H::setcolor(4); H::gotoxy(99,12);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(99,13);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(99,14);cout << R"(  (/|\) )";

	H::setcolor(4); H::gotoxy(119,10);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(119,11);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(119,12);cout << R"(  (/|\) )";
	
	
	H::setcolor(4); H::gotoxy(139,13);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(139,14);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(139,15);cout << R"(  (/|\) )";
	
	H::setcolor(4); H::gotoxy(155,11);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(155,12);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(155,13);cout << R"(  (/|\) )";

//fower

	H::setcolor(6);H::gotoxy(28,26);cout<<R"(      .--.)" ; 
	H::setcolor(6);H::gotoxy(28,27);cout<<R"(    .'_\/_'.)" ; 
	H::setcolor(5);H::gotoxy(28,28);cout<<R"(    '. /\ .')" ; 
	H::setcolor(5);H::gotoxy(28,29);cout<<R"(      "||")" ; 
	H::setcolor(1);H::gotoxy(28,30);cout<<R"(       || /\)" ; 
	H::setcolor(1);H::gotoxy(28,31);cout<<R"(    /\ ||//\))" ; 
	H::setcolor(2);H::gotoxy(28,32);cout<<R"(   (/\\||/)" ; 
	H::setcolor(2);H::gotoxy(28,33);cout<<R"(______\||/______)" ; 
	H::setcolor(2);H::gotoxy(24,34);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
	
	H::setcolor(5);H::gotoxy(52,21);cout<<R"(         ,)";
	H::setcolor(5);H::gotoxy(52,22);cout<<R"(     /\^/`\)";
	H::setcolor(5);H::gotoxy(52,23);cout<<R"(    | \/   |)";
	H::setcolor(5);H::gotoxy(52,24);cout<<R"(    | |    |)";
	H::setcolor(5);H::gotoxy(52,25);cout<<R"(    \ \    /)";
	H::setcolor(5);H::gotoxy(52,26);cout<<R"(     '\\//')";
	H::setcolor(2);H::gotoxy(52,27);cout<<R"(       ||)";
	H::setcolor(2);H::gotoxy(52,28);cout<<R"(       ||  ,)";
	H::setcolor(2);H::gotoxy(52,29);cout<<R"(   |\  ||  |\)";
	H::setcolor(2);H::gotoxy(52,30);cout<<R"(   | | || / /)";
	H::setcolor(2);H::gotoxy(52,31);cout<<R"(   | | || / /)";
	H::setcolor(2);H::gotoxy(52,32);cout<<R"(    \ \||/ /)";
	H::setcolor(2);H::gotoxy(52,33);cout<<R"(     `\\//`)";
	H::setcolor(2);H::gotoxy(49,34);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
	
	H::setcolor(1);H::gotoxy(73,21);cout<<R"(         .-==-.)";
	H::setcolor(1);H::gotoxy(73,22);cout<<R"(        /{.=-.}\)";
	H::setcolor(1);H::gotoxy(73,23);cout<<R"(       | / .  \ |)";
	H::setcolor(4);H::gotoxy(73,24);cout<<R"(       |;   :  :|)";
	H::setcolor(4);H::gotoxy(73,25);cout<<R"(       \(   :  )/)";
	H::setcolor(4);H::gotoxy(73,26);cout<<R"(        `._'__.')"; 
	H::setcolor(2);H::gotoxy(73,27);cout<<R"(      |\   ||)";
	H::setcolor(2);H::gotoxy(73,28);cout<<R"(       | | ||    /)";
	H::setcolor(2);H::gotoxy(73,29);cout<<R"(       \  \||  / /)";
	H::setcolor(2);H::gotoxy(73,30);cout<<R"(        \ ||| | |)";
	H::setcolor(2);H::gotoxy(73,31);cout<<R"(          \||/  /)";
	H::setcolor(2);H::gotoxy(73,32);cout<<R"(           ||| /)";
	H::setcolor(2);H::gotoxy(73,33);cout<<R"(           ||)";
	H::setcolor(2);H::gotoxy(73,34);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^)";

	H::setcolor(6);H::gotoxy(102,24);cout<<R"(      _ _)";
	H::setcolor(6);H::gotoxy(102,25);cout<<R"(    _{ ' }_)";
	H::setcolor(6);H::gotoxy(102,26);cout<<R"(   { `.!.` })";
	H::setcolor(6);H::gotoxy(102,27);cout<<R"(   ',_/Y\_,')";
	H::setcolor(6);H::gotoxy(102,28);cout<<R"(     {_,_})";
	H::setcolor(2);H::gotoxy(102,29);cout<<R"(       |)";
	H::setcolor(2);H::gotoxy(102,30);cout<<R"(     (\|  /))";
	H::setcolor(2);H::gotoxy(102,31);cout<<R"(      \| //)";
	H::setcolor(2);H::gotoxy(102,32);cout<<R"(       |//)";
	H::setcolor(2);H::gotoxy(102,33);cout<<R"(    \\ |/  //)";
	H::setcolor(2);H::gotoxy(98,34);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
	H::setcolor(5);H::gotoxy(123,28);cout<<R"(	    wWWWw      )";
	H::setcolor(5);H::gotoxy(123,29);cout<<R"(   vVVVv (___) wWWWw  )";
	H::setcolor(5);H::gotoxy(123,30);cout<<R"(   (___)  ~Y~  (___)  )";
	H::setcolor(5);H::gotoxy(123,31);cout<<R"(    ~Y~   \|    ~Y~  )";
	H::setcolor(2);H::gotoxy(123,32);cout<<R"(    \|   \ |/   \| / )";
	H::setcolor(2);H::gotoxy(123,33);cout<<R"(   \\|// \\|// \\|/// )";
	H::setcolor(2);H::gotoxy(122,34);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^)"; 
	
	//HVINE for box
	H::VLine(24,19,17,6,219);
	H::VLine(49,19,15,6,219);
	H::VLine(74,19,15,6,219);
	H::VLine(99,19,15,6,219);
	H::VLine(124,19,15,6,219);
	H::VLine(148,19,17,6,219);
	///
	H::HLine(9,35,152,5,223);
	H::HLine(24,36,123,196,255);
	
	H::setcolor(199);H::gotoxy(56,36);cout<<"USE ARROW KEY [LEFT], [RIGHT] , AND PRESS [ENTER] FOR SELECT";
	H::setcolor(194);H::gotoxy(71,36);cout<<"[LEFT]";
	H::setcolor(198);H::gotoxy(78,36);cout<<"[RIGHT]";
	H::setcolor(203);H::gotoxy(98,36);cout<<"[ENTER]";
	H::setcolor(2);  H::gotoxy(9,38);cout << R"(\\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|//)";
	H::setcolor(2);  H::gotoxy(9,39);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	/////////////////////////////Use Arrow key//////////////////////////
	
		//box
		H::drawBoxSingleLineWithBG(14,17,20,1,153);
		H::setcolor(151); H::gotoxy(17,18);cout <<"DISPLAY FLOWER";
		H::drawBoxSingleLineWithBG(39,17,20,1,153);
		H::setcolor(151); H::gotoxy(42,18);cout <<"SEARCH FLOWER";
		H::drawBoxSingleLineWithBG(64,17,20,1,153);
		H::setcolor(151); H::gotoxy(67,18);cout <<"BUYING FLOWER";
		H::drawBoxSingleLineWithBG(89,17,20,1,153);
		H::setcolor(151); H::gotoxy(92,18);cout <<"GIVE FEEDBACK";
		H::drawBoxSingleLineWithBG(114,17,20,1,153);
		H::setcolor(151); H::gotoxy(117,18);cout <<"FLOWER GARDEN";
		H::drawBoxSingleLineWithBG(138,17,20,1,153);
		H::setcolor(151); H::gotoxy(144,18);cout <<"LOG OUT";
		if(x==1){
			H::drawBoxSingleLineWithBG(14,17,20,1,136);
			H::setcolor(135); H::gotoxy(17,18);cout <<"DISPLAY FLOWER";
		}
		if(x==2){
			H::drawBoxSingleLineWithBG(39,17,20,1,136);
			H::setcolor(135); H::gotoxy(42,18);cout <<"SEARCH FLOWER";
		}
		if(x==3){
			H::drawBoxSingleLineWithBG(64,17,20,1,136);
			H::setcolor(135); H::gotoxy(67,18);cout <<"BUYING FLOWER";
		}
		if(x==4){
			H::drawBoxSingleLineWithBG(89,17,20,1,136);
			H::setcolor(135); H::gotoxy(92,18);cout <<"GIVE FEEDBACK";
		}
		if(x==5){
			H::drawBoxSingleLineWithBG(114,17,20,1,136);
			H::setcolor(135); H::gotoxy(117,18);cout <<"FLOWER GARDEN";
		}
		if(x==6){
			H::drawBoxSingleLineWithBG(138,17,20,1,136);
			H::setcolor(135); H::gotoxy(144,18);cout <<"LOG OUT";
		}
		
		op=getch();
			switch(op){
			case 75:{
				x--;
				if(x<1){
					x=6;
				}
				break;
			}
			case 77:{
				x++;
				if(x>6){
					x=1;
				}
				break;
			}
		}	
	}while(op!=13); 
	/////////////////////////////////////////////////////////
	if(x==1)
	{
		H::setcolor(0);
		H::cls();
		d.DesignDisplayFlower();
		DisplayFlowerData();
		// key = getch();
		// // if (key == 13) {
		// // 	continue;
		// // }
		// if (key == 27){
		// 	H::setcolor(0);
		// 	H::cls();
		// 	goto a;
		// }
		H::setcolor(0);
		H::cls();
		goto a;
		
	}
	/////////////////////////////////////////////////////////
	if(x==2)
	{
		while(true)
		{
			H::setcolor(0);
			H::cls();
			d.DesignSearchFlower();
			SearchFlowerData();
			// d.Flowercut();

			key = getch();
			if (key == 13) {
				continue;
			}
			else if (key == 27){
				H::setcolor(0);
				H::cls();
				goto a;
			}
		}
	}
	/////////////////////////////////////////////////////////
	if(x==3)
	{
		H::setcolor(0);
		H::cls();
		Buying();
		H::setcolor(0);
		H::cls();
		goto a;
	}
	/////////////////////////////////////////////////////////
	if(x==4)
	{
		H::setcolor(0);
		H::cls();
		GiveFeedback(currentUser);
		H::setcolor(0);
		H::cls();
		goto a;
	}
	/////////////////////////////////////////////////////////
	if(x==5)
	{
		H::setcolor(0);
		H::cls();
		cout << "WELCOME TO OUR FLOWER GARDEN";
		H::delay(5000);
		H::setcolor(0);
		H::cls();
		goto a;
	}
	/////////////////////////////////////////////////////////
	if(x==6)
	{
		H::setcolor(0);
		H::cls();
		break;
		H::setcolor(0);
		H::cls();
	}
	/////////////////////////////////////////////////////////

}while(getch() != 27);
	
/////////////////////////////////////////////////////////////////////////////	
}
void UserBigMenu(){
// do
// {	
	b:
	int x=0;
	char op;
	H::setcursor(0,0);
	do{
	//animation top left
	H::HLine(0,0,85,24,255);
	//animation top left
	H::HLine(85,0,85,24,255);
	
	//left 
	
	H::HLine(1,39,3,1,223);
	H::VLine(3,0,38,4,219);
	H::HLine(1,1,3,1,220);
	
	H::HLine(166,1,3,1,220);
	H::HLine(166,39,3,1,223);
	H::VLine(168,1,37,4,219);
	
//////////////////////////////////////	
	H::VLine(54,0,2,170,219);
    H::VLine(56,0,2,170,219);

    H::VLine(115,0,2,170,219);
    H::VLine(117,0,2,170,219);
    
    H::HLine(38,5,11,5,220);
    H::HLine(38,7,11,5,220);
    H::HLine(121,5,11,5,220);
    H::HLine(121,7,11,5,220);
///////////////////////////////////////   
	H::drawBoxSingleLineWithBG(50,3,70,5,136); 
	H::setcolor(135);H::gotoxy(57,4);cout<<R"(  _   _ ___ ___ ___    ___ ___   _ _____ _   _ ___ ___ )";
	H::setcolor(134);H::gotoxy(57,5);cout<<R"( | | | / __| __| _ \  | __| __| /_\_   _| | | | _ \ __|)";
	H::setcolor(135);H::gotoxy(57,6);cout<<R"( | |_| \__ \ _||   /  | _|| _| / _ \| | | |_| |   / _| )";
	H::setcolor(134);H::gotoxy(57,7);cout<<R"(  \___/|___/___|_|_\  |_| |___/_/ \_\_|  \___/|_|_\___|)";
                                                       		
	H::setcolor(1);H::gotoxy(12,1);cout<<R"(        . )";                
	H::setcolor(1);H::gotoxy(12,2);cout<<R"(        :     )";              
	H::setcolor(3);H::gotoxy(12,3);cout<<R"(  '.___/*\___.')";              
	H::setcolor(3);H::gotoxy(12,4);cout<<R"(    \* \ / */     )";              
	H::setcolor(2);H::gotoxy(12,5);cout<<R"(     >--X--<)";
	H::setcolor(2);H::gotoxy(12,6);cout<<R"(    /*_/ \_*\)";
	H::setcolor(4);H::gotoxy(12,7);cout<<R"(  .'   \*/   '.)";
	H::setcolor(4);H::gotoxy(12,8);cout<<R"(        :)";
	H::setcolor(1);H::gotoxy(12,9);cout<<R"(        ')";
	
	
  
	H::setcolor(6);H::gotoxy(143,1);cout<<R"(    .      .)";			
	H::setcolor(6);H::gotoxy(143,2);cout<<R"(    _\/  \/_)";
	H::setcolor(5);H::gotoxy(143,3);cout<<R"(     _\/\/_)";	
	H::setcolor(5);H::gotoxy(143,4);cout<<R"(_\_\_\/\/_/_/_)";
	H::setcolor(4);H::gotoxy(143,5);cout<<R"( / /_/\/\_\ \)";
	H::setcolor(4);H::gotoxy(143,6);cout<<R"(     _/\/\_ )";
	H::setcolor(3);H::gotoxy(143,7);cout<<R"(     /\  /\  )";   
	H::setcolor(3);H::gotoxy(143,8);cout<<R"(    '      ' )";    
  		
  		
    H::HLine(35,12,60,170,220);
    H::HLine(35,28,60,170,220);
    
	H::VLine(34,11,17,170,255);
	H::VLine(35,11,17,170,255);
	
	H::VLine(95,11,17,170,255);
	H::VLine(96,11,17,170,255);
	
	H::setcolor(1);H::gotoxy(103,11);cout<<R"(                 .##@@&&&@@##.)"; 
	H::setcolor(2);H::gotoxy(103,12);cout<<R"(              ,##@&::%&&%%::&@##.)"; 
	H::setcolor(3);H::gotoxy(103,13);cout<<R"(             #@&:%%000000000%%:&@#)"; 
	H::setcolor(4);H::gotoxy(103,14);cout<<R"(           #@&:%00'         '00%:&@#)"; 
	H::setcolor(5);H::gotoxy(103,15);cout<<R"(          #@&:%0'             '0%:&@#)"; 
	H::setcolor(6);H::gotoxy(103,16);cout<<R"(         #@&:%0                 0%:&@#)"; 
	H::setcolor(1);H::gotoxy(103,17);cout<<R"(        #@&:%0                   0%:&@#)"; 
	H::setcolor(2);H::gotoxy(103,18);cout<<R"(        #@&:%0                   0%:&@#)"; 
	H::setcolor(3);H::gotoxy(103,19);cout<<R"(       "" ' "                   " ' "")"; 
	H::setcolor(4);H::gotoxy(103,20);cout<<R"(      _oOoOoOo_                   .-.-.)"; 
	H::setcolor(4);H::gotoxy(103,21);cout<<R"(     (oOoOoOoOo)                 (  :  ))"; 
	H::setcolor(5);H::gotoxy(103,22);cout<<R"(      )`"""""`(                .-.`. .'.-.)"; 
	H::setcolor(5);H::gotoxy(103,23);cout<<R"(     /         \              (_  '.Y.'  _))"; 
	H::setcolor(6);H::gotoxy(103,24);cout<<R"(    | #         |             (   .'|'.   ))"; 
	H::setcolor(6);H::gotoxy(103,25);cout<<R"(    \           /              '-'  |  '-')"; 
	H::setcolor(1);H::gotoxy(103,26);cout<<R"(     `=========`	)"; 
	
	H::setcolor(7);H::gotoxy(56,30);cout<<"USE ARROW KEY [UP], [DOWN] , AND PRESS [ENTER] FOR SELECT";
	H::setcolor(4);H::gotoxy(71,30);cout<<"[UP]";
	H::setcolor(2);H::gotoxy(76,30);cout<<"[DOWN]";
	H::setcolor(3);H::gotoxy(95,30);cout<<"[ENTER]";
	NewFlowerEdit();
///////////////////////////////////////////Arrow key up down////////////////////////////////	
	
		//box
		H::drawBoxSingleLineWithBG(36,13,57,1,151);
		H::setcolor(151);H::gotoxy(59,14);cout<<"REGISTER";
		H::drawBoxSingleLineWithBG(36,16,57,1,151);
		H::setcolor(151);H::gotoxy(61,17);cout<<"LOGIN";
		H::drawBoxSingleLineWithBG(36,19,57,1,151);
		H::setcolor(151);H::gotoxy(55,20);cout<<"FORGET PASSWORD";
		H::drawBoxSingleLineWithBG(36,22,57,1,151);
		H::setcolor(151);H::gotoxy(59,23);cout<<"ABOUT US";
		H::drawBoxSingleLineWithBG(36,25,57,1,151);
		H::setcolor(151);H::gotoxy(61,26);cout<<"BACK";
		
		
		if(x==0){
			H::drawBoxSingleLineWithBG(36,13,57,1,199);
			H::setcolor(199);H::gotoxy(59,14);cout<<"REGISTER";
		}
		if(x==1){
			H::drawBoxSingleLineWithBG(36,16,57,1,199);
			H::setcolor(199);H::gotoxy(61,17);cout<<"LOGIN";
		}
		if(x==2){
			H::drawBoxSingleLineWithBG(36,19,57,1,199);
			H::setcolor(199);H::gotoxy(55,20);cout<<"FORGET PASSWORD";
		}
		if(x==3){
			H::drawBoxSingleLineWithBG(36,22,57,1,199);
			H::setcolor(199);H::gotoxy(59,23);cout<<"ABOUT US";
		}
		if(x==4){
			H::drawBoxSingleLineWithBG(36,25,57,1,199);
			H::setcolor(199);H::gotoxy(61,26);cout<<"BACK";	
		}
		op=getch();
		switch(op){
			case 72:{
				x--;
				if(x<0){
					x=4;
				}
				break;
			}
			case 80:{
				x++;
				if(x>4){
					x=0;
				}
				break;
			}
		}
	}while(op!=13);
	if(x==0)
	{
		H::setcolor(0);
		H::cls();
		Register();
		H::setcolor(0);
		H::cls();
		goto b;
	}
	if(x==1)
	{
		H::setcolor(0);
		H::cls();
		Login();
		H::setcolor(0);
		H::cls();
		goto b;
	}
	if(x==2)
	{
		H::setcolor(0);
		H::cls();
		ForgetPassword();
		H::setcolor(0);
		H::cls();
		goto b;
	}
	if(x==3)
	{
		H::setcolor(0);
		H::cls();
		AboutUs();
		H::setcolor(0);
		H::cls();
		goto b;
	}
	if(x==4)
	{
		// break;
		return;
	}
// }while(getch() != 27);

/////////////////////////////////////////////////////////////////////////////////////////////////
}


////////////////////////////////////////////////////////////////////////////////
void openMyWebsite(const string& url) {
    string command = "start " + url;
    system(command.c_str());
}
/////////////////////////////////////////////////////////////////////////////
void MNM2(const string &str) 
{
	int j = 1;
	for(int i = 0;i<str.length();i++)
	{
		if(j == 16)
		{
			j=1;
		}
		H::foreColor(j);
		cout << str[i];H::delay(150);
		j++;
	}
}

//////////////////////////////////////////////////////////////////
void AboutUs()
{
	first:
	H::cls();
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
    
    
    H::setcolor(4); H::gotoxy(5,5);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(5,6);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(5,7);cout << R"(  (/|\) )";	
	
	H::setcolor(4); H::gotoxy(15,2);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(15,3);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(15,4);cout << R"(  (/|\) )";
	
	H::setcolor(4); H::gotoxy(25,7);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(25,8);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(25,9);cout << R"(  (/|\) )";

	H::setcolor(4); H::gotoxy(35,3);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(35,4);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(35,5);cout << R"(  (/|\) )";
////////////////////////////////////////Right//////////////////////////////////	
	H::setcolor(4); H::gotoxy(155,5);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(155,6);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(155,7);cout << R"(  (/|\) )";	
	
	H::setcolor(4); H::gotoxy(145,2);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(145,3);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(145,4);cout << R"(  (/|\) )";
	
	H::setcolor(4); H::gotoxy(135,7);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(135,8);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(135,9);cout << R"(  (/|\) )";

	H::setcolor(4); H::gotoxy(125,3);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(125,4);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(125,5);cout << R"(  (/|\) )";


/////////////HLINE for box
	H::HLine(20,12,130,204,220);
	H::setcolor(199);H::gotoxy(80,12);cout<<"C++OOP";
	H::VLine(42,12,20,6,219);
	H::VLine(60,12,20,6,219);
	///box
	H::drawBoxSingleLineWithBG(32,15,17,1,153);
	H::setcolor(151);H::gotoxy(36,16);cout<<"UON HINSY";
	H::setcolor(215);H::gotoxy(31,14);cout << "ADVISOR";
	H::drawBoxSingleLineWithBG(52,15,17,1,153);
	H::setcolor(151);H::gotoxy(56,16);cout<<"RUN LIHUO";
	H::setcolor(215);H::gotoxy(51,14);cout << "MENTOR";
	/////////////////////////////////////Big box right/////////////////////
	H::VLine(95,12,20,5,219);
	H::VLine(124,12,20,5,219);
	H::drawBoxDoubleLineWithBG(75,14,64,16,3);
/////////////////////////////////////////////////Tip
	H::setcolor(7);H::gotoxy(45,34);cout<<"USE               AND  ";
	H::setcolor(1);H::gotoxy(49,34);cout<<"ARROW KEY";
	H::setcolor(2);H::gotoxy(60,34);cout<<"UP";
	H::setcolor(4);H::gotoxy(67,34);cout<<"DOWN";
	H::setcolor(7);H::gotoxy(47,35);cout<<"PRESS       FOR SELECT";
	H::setcolor(5);H::gotoxy(53,35);cout<<"ENTER";

	H::setcolor(3);H::gotoxy(76,33);cout << "[TIP] PRESS [1]. Go to Ministry of Post and Telecommunications website";
	H::setcolor(1);H::gotoxy(76,34);cout << "      PRESS [2]. Go to ANT Technology Training Center Website";
	H::setcolor(5);H::gotoxy(76,35);cout << "      PRESS [3]. Go to Our Develop Website";

//                 grass
    H::setcolor(2); H::gotoxy(26,37); cout << R"(/\|//\|/\|/,\\|/|/|// \|/ \|//\|/\|/,\\|/|/|// \|/\|//\|/\|/,\\|/|/\/ \|/ \|//\|/\|/,\\|/|/|// \|/\|//\|/\|/,\\|/|/\/ \|/\|/ \|/)";
    H::setcolor(2); H::gotoxy(26,38); cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

//              Treee
	H::setcolor(2);H::gotoxy(3,27);cout<<R"(        a@@@@a    )";         
	H::setcolor(2);H::gotoxy(3,28);cout<<R"(    a@@@@@@@@@@@@a )";        
	H::setcolor(2);H::gotoxy(3,29);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
	H::setcolor(2);H::gotoxy(3,30);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
	H::setcolor(2);H::gotoxy(3,31);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
	H::setcolor(2);H::gotoxy(3,32);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
	H::setcolor(8);H::gotoxy(3,33);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(3,34);cout<<R"(          ||   )";      
	H::setcolor(8);H::gotoxy(3,35);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(3,36);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(3,37);cout<<R"(         /MM\)";
	H::setcolor(2);H::gotoxy(3,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
	H::setcolor(2);H::gotoxy(142,27);cout<<R"(        a@@@@a    )";         
	H::setcolor(2);H::gotoxy(142,28);cout<<R"(    a@@@@@@@@@@@@a )";        
	H::setcolor(2);H::gotoxy(142,29);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
	H::setcolor(2);H::gotoxy(142,30);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
	H::setcolor(2);H::gotoxy(142,31);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
	H::setcolor(2);H::gotoxy(142,32);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
	H::setcolor(8);H::gotoxy(142,33);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(142,34);cout<<R"(          ||   )";      
	H::setcolor(8);H::gotoxy(142,35);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(142,36);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(142,37);cout<<R"(         /MM\)";
	H::setcolor(2);H::gotoxy(142,38);cout<<R"( ^^^^^^^^^^^^^^^^^^^^^^)";
	
	//HlINE
	//////////////////////////Arrow key////////////////
	int x=0;
	char op;
	do{
	H::setcursor(0,0);
	do{
		H::HLine(36,19,29,136,219);
		H::setcolor(135);H::gotoxy(47,19);cout<<"MESSAGE";
		H::HLine(36,22,29,136,219);
		H::setcolor(135);H::gotoxy(44,22);cout<<"KEAT SOMARINA";
		H::HLine(36,25,29,136,219);
		H::setcolor(135);H::gotoxy(44,25);cout<<"TAING NAIHUOY";
		H::HLine(36,28,29,136,219);
		H::setcolor(135);H::gotoxy(46,28);cout<<"KAO MEYLY";
		H::HLine(36,31,29,136,219);
		H::setcolor(135);H::gotoxy(48,31);cout<<"BACK";
		if(x==0){
			H::HLine(36,19,29,170,219);
			H::setcolor(167);H::gotoxy(47,19);cout<<"MESSAGE";
			// H::VLine(95,12,20,5,219);
			// H::VLine(124,12,20,5,219);
			H::drawBoxDoubleLineWithBG(75,14,64,16,3);
			H::setcolor(7);H::gotoxy(80,15);cout << "We are students who received a scholarship from the ";
			H::setcolor(7);H::gotoxy(76,17);cout << "[1].Ministry of Post and Telecommunications to study Mobile";
			H::setcolor(7);H::gotoxy(76,19);cout << "App(Flutter) Development 2nd Generation at [2]. ANT Technology ";
			H::setcolor(7);H::gotoxy(76,21);cout << "Training Center. Study for 13 Months From 16 June 2025 to 17 ";
			H::setcolor(7);H::gotoxy(76,23);cout << "July 2026. Thanks to the generous support of the [1]. Ministry";
			H::setcolor(7);H::gotoxy(76,25);cout << "of Post and Telecommunications to study This opportunity is ";
			H::setcolor(7);H::gotoxy(76,27);cout << "allowing us to develop valuable skills in Mobiles App  ";
			H::setcolor(7);H::gotoxy(76,29);cout << "Development and pursue exciting careers intech industry.";
			
			H::setcolor(1);H::gotoxy(76,17);cout << "[1].Ministry of Post and Telecommunications";
			H::setcolor(6);H::gotoxy(123,17);cout << "study Mobile";
			H::setcolor(6);H::gotoxy(76,19);cout << "App(Flutter) Development 2nd Generation";
			H::setcolor(3);H::gotoxy(119,19);cout << "[2]. ANT Technology";
			H::setcolor(3);H::gotoxy(76,21);cout << "Training Center.";
			H::setcolor(1);H::gotoxy(125,23);cout << "[1]. Ministry";
			H::setcolor(1);H::gotoxy(76,25);cout << "of Post and Telecommunications";
		}
		if(x==1){
			H::HLine(36,22,29,170,219);
			H::setcolor(167);H::gotoxy(44,22);cout<<"KEAT SOMARINA";
			// H::VLine(95,12,20,5,219);
			// H::VLine(124,12,20,5,219);
			H::drawBoxDoubleLineWithBG(75,14,64,16,3);
			H::setcolor(7);H::gotoxy(77,15);cout << "Hi, I'm Keat Somarina, a third-year Computer Science student";
			H::setcolor(7);H::gotoxy(75,17);cout << "at RUPP from Kampot Province. I'm currently studying Mobile App";
			H::setcolor(7);H::gotoxy(75,19);cout << "Development with Flutter as part of 2nd Generation at ANT ";
			H::setcolor(7);H::gotoxy(75,21);cout << "Technology Training Center, supported by the Ministry of Post";
			H::setcolor(7);H::gotoxy(75,23);cout << "and Telecommunications. I'm working on a scholarship app to";
			H::setcolor(7);H::gotoxy(75,25);cout << "help students easily find and apply for opportunities.";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
			H::setcolor(5);H::gotoxy(113,15);cout << "Computer Science student";
			H::setcolor(4);H::gotoxy(77,17);cout << " RUPP";
			H::setcolor(6);H::gotoxy(128,17);cout << "Mobile App";
			H::setcolor(6);H::gotoxy(75,19);cout << "Development";
			H::setcolor(3);H::gotoxy(129,19);cout << "ANT ";
			H::setcolor(3);H::gotoxy(75,21);cout << "Technology Training Center";
			H::setcolor(1);H::gotoxy(120,21);cout << "Ministry of Post";
			H::setcolor(1);H::gotoxy(75,23);cout << "and Telecommunications";
		}
		if(x==2){
			H::HLine(36,25,29,170,219);
			H::setcolor(167);H::gotoxy(44,25);cout<<"TAING NAIHUOY";
			// H::VLine(95,12,20,5,219);
			// H::VLine(124,12,20,5,219);
			H::drawBoxDoubleLineWithBG(75,14,64,16,3);
			H::setcolor(7);H::gotoxy(77,15);cout << "Hi, I'm Taing NaiHuoy, a fourth-year Computer Science student";
			H::setcolor(7);H::gotoxy(75,17);cout << "at RUPP from BANTEAY MEANCHEY Province. I'm currently studying ";
			H::setcolor(7);H::gotoxy(75,19);cout << "Mobile App Development with Flutter as part of 2nd Generation ";
			H::setcolor(7);H::gotoxy(75,21);cout << "at ANT Technology Training Center, supported by the Ministry ";
			H::setcolor(7);H::gotoxy(75,23);cout << "of Post and Telecommunications. I'm working on a scholarship  ";
			H::setcolor(7);H::gotoxy(75,25);cout << "app to help students easily find and apply for opportunities.";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
			H::setcolor(5);H::gotoxy(114,15);cout << "Computer Science student";
			H::setcolor(4);H::gotoxy(77,17);cout << " RUPP";
			H::setcolor(6);H::gotoxy(75,19);cout << "Mobile App Development";
			H::setcolor(3);H::gotoxy(78,21);cout << "ANT Technology Training Center";
			H::setcolor(1);H::gotoxy(127,21);cout << "Ministry";
			H::setcolor(1);H::gotoxy(75,23);cout << "of Post and Telecommunications";
			
			}

		if(x==3){
			H::HLine(36,28,29,170,219);
			H::setcolor(167);H::gotoxy(46,28);cout<<"KAO MEYLY";
			H::setcolor(7);H::gotoxy(77,15);cout << "Hi, I'm Kao MeyLy,a second-year of Engineering student";
			H::setcolor(7);H::gotoxy(75,17);cout << "at AUB from Takeo Province. I'm currently studying Mobile App ";
			H::setcolor(7);H::gotoxy(75,19);cout << "Development with Flutter as part of 2nd Generation at ANT     ";
			H::setcolor(7);H::gotoxy(75,21);cout << "Technology Training Center, supported by the Ministry of Post";
			H::setcolor(7);H::gotoxy(75,23);cout << "and Telecommunications. I'm working on a scholarship app to ";
			H::setcolor(7);H::gotoxy(75,25);cout << "help students easily find and apply for opportunities.        ";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
			H::setcolor(5);H::gotoxy(112,15);cout << "Computer Science Student";
			H::setcolor(4);H::gotoxy(78,17);cout << "AUB";
			H::setcolor(6);H::gotoxy(126,17);cout << "Mobile App";
			H::setcolor(6);H::gotoxy(75,19);cout << "Development";
			H::setcolor(3);H::gotoxy(129,19);cout << "ANT ";
			H::setcolor(3);H::gotoxy(75,21);cout << "Technology Training Center";
			H::setcolor(1);H::gotoxy(120,21);cout << "Ministry of Post";
			H::setcolor(1);H::gotoxy(75,23);cout << "and Telecommunications";
		}
		if(x==4){
			H::HLine(36,31,29,170,219);
            // H::HLine(36,19,29,170,219);
			H::setcolor(167);H::gotoxy(48,31);cout<<"BACK";
			H::setcolor(7);H::gotoxy(77,15);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,17);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,19);cout << "                                                               ";
			H::setcolor(7);H::gotoxy(75,21);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,23);cout << "                                                               ";
			H::setcolor(7);H::gotoxy(75,25);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
		}
			// char xy;
    // xy = getch();
	op=getch();
    switch(op)
    {

        case '1':
        {
			H::setcolor(0);
            H::cls();
            MNM2("Opening Website ........ ");
            openMyWebsite("https://mptc.gov.kh/");
			H::setcolor(0);
			goto first;
        }break;
        case '2':
        {
			H::setcolor(0);
            H::cls();
            MNM2("Opening Website ........ ");
			openMyWebsite("http://training.antkh.com/");
			H::setcolor(0);
			goto first;
        }break;
        case '3':
        {
			H::setcolor(0);
            H::cls();
            MNM2("Opening Website ........ ");
            openMyWebsite("Website/index.html");
			H::setcolor(0);
			goto first;
        }break;
    }
		
		
		switch(op){
			case 72:{
				x--;
				if(x<0){
					x=4;
				}
				break;
			}
			case 80:{
				x++;
				if(x>4){
					x=0;
				}
				break;
			}
		}
	}while(op!=13);

	if(x==4)
	{
		break;
	}

}while(true);

}
// //###############################################################################################
void test(){
	H::setcursor(0,0);
	int x = 0;             
	char op,key;
	do{ 
		H::setcursor(0,0);
		Design d;	
		H::setcolor(0);
		H::cls();
		start:
		do{
			H::setcolor(0);
			H::cls();
			d.FlowerAll();
			d.check01(x);
			d.FlowerAll();
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
				H::setcolor(6);H::gotoxy(56,31);cout<< "Press [ESC] For Back and Press [ENTER] For Input More..";
				H::setcolor(2);H::gotoxy(62,31);cout<< "[ESC]";
				H::setcolor(2);H::gotoxy(87,31);cout<< "[ENTER]";
				d.FlowerChoice();
				
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
				d.Flowercut();

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
			while(true){
				H::setcolor(0);
				H::cls();
				H::setcursor(1,8);
				d.DesignDeleteFlower();	
				DeleteFlowerData();
				H::setcursor(0,8);
				H::setcolor(7);H::gotoxy(56,29);cout<< "Press [ESC] For Back and Press [ENTER] For Delete Again";
				H::setcolor(2);H::gotoxy(62,29);cout<< "[ESC]";
				H::setcolor(2);H::gotoxy(87,29);cout<< "[ENTER]";
				H::setcursor(0,8);
				key = getch();
				if (key == 13) {
					continue;
				}
				else if (key == 27){
					goto start;
				}
			}	
		}
		else if (x == 5)
		{
			H::setcolor(3);
			H::cls();
			ShowFeedbackPages();
			H::setcolor(0);
			H::cls();
			goto start;
		}
		else if (x == 6)
		{
			H::setcolor(3);
			H::setcursor(0,8);
			H::cls();
			ShowAllInvoices();
			H::setcolor(0);
			H::cls();
			goto start;
		}
		else if (x == 7)
		{
			// while(true){
				H::setcolor(3);
				H::cls();
				ImportFlowerQty();
				H::setcolor(3);
				H::cls();
			// 	H::setcolor(7);H::gotoxy(56,29);cout<< "Press [ESC] For Back and Press [ENTER] For Input More..";
			// 	H::setcolor(2);H::gotoxy(62,29);cout<< "[ESC]";
			// 	H::setcolor(2);H::gotoxy(87,29);cout<< "[ENTER]";
			// 	key = getch();
			// 	if (key == 13) {
			// 		H::cls();
			// 		continue;
			// 	}
			// 	else if (key == 27){
			// 		goto start;
			// 	}
			// }	
			
		}
		else if (x == 8)
		{
			H::cls();
			Buying();
			key = getch();
			if (key == 13) {
				continue;
			}
			else if (key == 27){
					H::setcolor(0);
					H::cls();
				goto start;
			}
		}
		else if (x == 9) { 
			H::setcolor(0);
		    H::cls();
		    break; 
		}
	}while(true);
}
void DesignShowUserDate(){
	//animation top left
	H::HLine(0,0,85,153,255);
	//animation top left
	H::HLine(85,0,85,153,255);
	
	//left 

	H::VLine(2,0,38,153,255);
	H::VLine(3,0,38,153,255);
	H::VLine(168,0,38,153,255);
	H::VLine(169,0,38,153,255);
	
//////////////////////////////////////	
	H::VLine(57,0,2,72,255);
    H::VLine(59,0,2,72,255);

    H::VLine(112,0,2,72,255);
    H::VLine(114,0,2,72,255);
/////////////////////////////////////// 
	
	H::HLine(50,3,70,213,255);
	H::VLine(51,3,5,213,255);
	H::VLine(52,3,5,213,255);
	
	H::VLine(120,3,5,213,255);
	H::VLine(119,3,5,213,255);
	H::HLine(50,9,70,213,255);
	




	H::setcolor(1);H::gotoxy(64,4);cout<<R"(  __  _____________     ___  ___ _________ )";    
	H::setcolor(2);H::gotoxy(64,5);cout<<R"( / / / / __/ __/ _ \   / _ \/ _ /_  __/ _ | )";   
	H::setcolor(3);H::gotoxy(64,6);cout<<R"(/ /_/ /\ \/ _// , _/  / // / __ |/ / / __ | )";   
	H::setcolor(4);H::gotoxy(64,7);cout<<R"(\____/___/___/_/|_|  /____/_/ |_/_/ /_/ |_|  )"; 

 
	H::setcolor(1); H::gotoxy(53,5); cout << R"(  _ " _ )";
	H::setcolor(5); H::gotoxy(53,6); cout << R"( (_\|/_))";
	H::setcolor(3); H::gotoxy(53,7); cout << R"(  (/|\))";
	
	H::setcolor(3); H::gotoxy(108,5); cout << R"(  _ " _ )";
	H::setcolor(2); H::gotoxy(108,6); cout << R"( (_\|/_))";
	H::setcolor(6); H::gotoxy(108,7); cout << R"(  (/|\))";
	
	H::setcolor(3); H::gotoxy(17,2); cout << R"(          ')";
	H::setcolor(3); H::gotoxy(17,3); cout << R"(        \  ,  /)";
	H::setcolor(4); H::gotoxy(17,4); cout << R"(    ' ,___/_\___, ')";
	H::setcolor(4); H::gotoxy(17,5); cout << R"(       \ /o.o\ /)";
	H::setcolor(5); H::gotoxy(17,6); cout << R"(   -=   > \_/ <   =-)";
	H::setcolor(5); H::gotoxy(17,7); cout << R"(       /_\___/_\)";
	H::setcolor(2); H::gotoxy(17,8); cout << R"(    . `   \ /   ` .)";
	H::setcolor(2); H::gotoxy(17,9); cout << R"(        /  `  \)";
	H::setcolor(2); H::gotoxy(17,10); cout << R"(           .	)";
	
	H::setcolor(3); H::gotoxy(128,2); cout << R"(          ')";
	H::setcolor(3); H::gotoxy(128,3); cout << R"(        \  ,  /)";
	H::setcolor(4); H::gotoxy(128,4); cout << R"(    ' ,___/_\___, ')";
	H::setcolor(4); H::gotoxy(128,5); cout << R"(       \ /o.o\ /)";
	H::setcolor(5); H::gotoxy(128,6); cout << R"(   -=   > \_/ <   =-)";
	H::setcolor(5); H::gotoxy(128,7); cout << R"(       /_\___/_\)";
	H::setcolor(2); H::gotoxy(128,8); cout << R"(    . `   \ /   ` .)";
	H::setcolor(2); H::gotoxy(128,9); cout << R"(        /  `  \)";
	H::setcolor(2); H::gotoxy(128,10); cout << R"(           .	)";
	
	H::drawBoxDoubleLineWithBG(25,11,120,14,4);
	H::setcolor(6);H::gotoxy(37,12);cout<<"ID";
	H::setcolor(6);H::gotoxy(55,12);cout<<"NAME";
	H::setcolor(6);H::gotoxy(76,12);cout<<"GENDER";
	H::setcolor(6);H::gotoxy(97,12);cout<<"PHONE NUMBER";
	H::setcolor(6);H::gotoxy(124,12);cout<<"PASSWORD";
//////////////////////////////////////////////bOX FOR OUTPUT/////////////////////////////////////
	H::drawBoxSingleLineWithBG(30,13,110,9,2);
////////////////////////////////////////////////////////////////////////////////////////////////  	
	// H::setcolor(7);H::gotoxy(79,24);cout<<"PAGE";
	// H::setcolor(1);H::gotoxy(84,24);cout<<"1/1";
	H::setcolor(7);H::gotoxy(61,25);cout<<"USE [LEFT] [RIGHT] ARROW KEY FOR SEE NEXT PAGE";
	H::setcolor(2);H::gotoxy(65,25);cout<<"[LEFT]";
	H::setcolor(4);H::gotoxy(72,25);cout<<"[RIGHT]";
                                            
	H::setcolor(7);H::gotoxy(67,28);cout<<"PRESS [ENTER] FOR SHOW AGAIN";
	H::setcolor(2);H::gotoxy(73,28);cout<<"[ENTER]";
	H::setcolor(5);H::gotoxy(85,28);cout<<"SEARCH USER DATA";
	H::setcolor(7);H::gotoxy(74,30);cout<<"PRESS [ESC] FOR BACK";
	H::setcolor(3);H::gotoxy(80,30);cout<<"[ESC]";
	H::setcolor(6);H::gotoxy(90,30);cout<<"BACK";
	
	NewFlowerEdit();
}

void DesignShowUserDate2(){
	//animation top left
	H::HLine(0,0,85,153,255);
	//animation top left
	H::HLine(85,0,85,153,255);
	
	//left 

	H::VLine(2,0,38,153,255);
	H::VLine(3,0,38,153,255);
	H::VLine(168,0,38,153,255);
	H::VLine(169,0,38,153,255);
	
//////////////////////////////////////	
	H::VLine(57,0,2,72,255);
    H::VLine(59,0,2,72,255);

    H::VLine(112,0,2,72,255);
    H::VLine(114,0,2,72,255);
/////////////////////////////////////// 
	
	H::HLine(50,3,70,213,255);
	H::VLine(51,3,5,213,255);
	H::VLine(52,3,5,213,255);
	
	H::VLine(120,3,5,213,255);
	H::VLine(119,3,5,213,255);
	H::HLine(50,9,70,213,255);
	




	H::setcolor(1);H::gotoxy(64,4);cout<<R"(  __  _____________     ___  ___ _________ )";    
	H::setcolor(2);H::gotoxy(64,5);cout<<R"( / / / / __/ __/ _ \   / _ \/ _ /_  __/ _ | )";   
	H::setcolor(3);H::gotoxy(64,6);cout<<R"(/ /_/ /\ \/ _// , _/  / // / __ |/ / / __ | )";   
	H::setcolor(4);H::gotoxy(64,7);cout<<R"(\____/___/___/_/|_|  /____/_/ |_/_/ /_/ |_|  )"; 

 
	H::setcolor(1); H::gotoxy(53,5); cout << R"(  _ " _ )";
	H::setcolor(5); H::gotoxy(53,6); cout << R"( (_\|/_))";
	H::setcolor(3); H::gotoxy(53,7); cout << R"(  (/|\))";
	
	H::setcolor(3); H::gotoxy(108,5); cout << R"(  _ " _ )";
	H::setcolor(2); H::gotoxy(108,6); cout << R"( (_\|/_))";
	H::setcolor(6); H::gotoxy(108,7); cout << R"(  (/|\))";
	
	H::setcolor(3); H::gotoxy(17,2); cout << R"(          ')";
	H::setcolor(3); H::gotoxy(17,3); cout << R"(        \  ,  /)";
	H::setcolor(4); H::gotoxy(17,4); cout << R"(    ' ,___/_\___, ')";
	H::setcolor(4); H::gotoxy(17,5); cout << R"(       \ /o.o\ /)";
	H::setcolor(5); H::gotoxy(17,6); cout << R"(   -=   > \_/ <   =-)";
	H::setcolor(5); H::gotoxy(17,7); cout << R"(       /_\___/_\)";
	H::setcolor(2); H::gotoxy(17,8); cout << R"(    . `   \ /   ` .)";
	H::setcolor(2); H::gotoxy(17,9); cout << R"(        /  `  \)";
	H::setcolor(2); H::gotoxy(17,10); cout << R"(           .	)";
	
	H::setcolor(3); H::gotoxy(128,2); cout << R"(          ')";
	H::setcolor(3); H::gotoxy(128,3); cout << R"(        \  ,  /)";
	H::setcolor(4); H::gotoxy(128,4); cout << R"(    ' ,___/_\___, ')";
	H::setcolor(4); H::gotoxy(128,5); cout << R"(       \ /o.o\ /)";
	H::setcolor(5); H::gotoxy(128,6); cout << R"(   -=   > \_/ <   =-)";
	H::setcolor(5); H::gotoxy(128,7); cout << R"(       /_\___/_\)";
	H::setcolor(2); H::gotoxy(128,8); cout << R"(    . `   \ /   ` .)";
	H::setcolor(2); H::gotoxy(128,9); cout << R"(        /  `  \)";
	H::setcolor(2); H::gotoxy(128,10); cout << R"(           .	)";
	
	H::drawBoxDoubleLineWithBG(25,11,120,14,4);
	H::setcolor(6);H::gotoxy(37,12);cout<<"ID";
	H::setcolor(6);H::gotoxy(55,12);cout<<"NAME";
	H::setcolor(6);H::gotoxy(76,12);cout<<"GENDER";
	H::setcolor(6);H::gotoxy(97,12);cout<<"PHONE NUMBER";
	H::setcolor(6);H::gotoxy(124,12);cout<<"PASSWORD";
//////////////////////////////////////////////bOX FOR OUTPUT/////////////////////////////////////
	H::drawBoxSingleLineWithBG(30,13,110,9,2);
////////////////////////////////////////////////////////////////////////////////////////////////  	
	// H::setcolor(7);H::gotoxy(79,24);cout<<"PAGE";
	// H::setcolor(1);H::gotoxy(84,24);cout<<"1/1";
	H::setcolor(7);H::gotoxy(61,25);cout<<"USE [LEFT] [RIGHT] ARROW KEY FOR SEE NEXT PAGE";
	H::setcolor(2);H::gotoxy(65,25);cout<<"[LEFT]";
	H::setcolor(4);H::gotoxy(72,25);cout<<"[RIGHT]";
                                            
	H::setcolor(7);H::gotoxy(74,30);cout<<"PRESS [ESC] FOR BACK";
	H::setcolor(3);H::gotoxy(80,30);cout<<"[ESC]";
	H::setcolor(6);H::gotoxy(90,30);cout<<"BACK";
	
	NewFlowerEdit();
}

void DesignUserInformation(){
	//animation top left
	H::HLine(0,0,85,72,255);
	//animation top left
	H::HLine(85,0,85,72,255);
	
	//left 

	H::VLine(2,0,38,72,255);
	H::VLine(3,0,38,72,255);
	H::VLine(168,0,38,72,255);
	H::VLine(169,0,38,72,255);
	
//////////////////////////////////////	
	H::VLine(40,0,2,24,255);
    H::VLine(42,0,2,24,255);

    H::VLine(129,0,2,24,255);
    H::VLine(131,0,2,24,255);
/////////////////////////////////////// 
	
	H::HLine(26,3,118,88,255);
	H::VLine(27,3,5,88,255);
	H::VLine(28,3,5,88,255);
	
	H::VLine(143,3,5,88,255);
	H::VLine(144,3,5,88,255);
	H::HLine(26,9,118,88,255);
	
	H::setcolor(4);H::gotoxy(9,1);cout<<R"(      ,)"; 
	H::setcolor(4);H::gotoxy(9,2);cout<<R"(   \  :  /)"; 
	H::setcolor(6);H::gotoxy(9,3);cout<<R"(`. __/ \__ .')"; 
	H::setcolor(6);H::gotoxy(9,4);cout<<R"(_ _\     /_ _)"; 
	H::setcolor(4);H::gotoxy(9,5);cout<<R"(   /_   _\)"; 
	H::setcolor(4);H::gotoxy(9,6);cout<<R"( .'  \ /  `.)"; 
	H::setcolor(6);H::gotoxy(9,7);cout<<R"(   /  :  \   )";  
	H::setcolor(6);H::gotoxy(9,8);cout<<R"(      ')";
	
	H::setcolor(1);H::gotoxy(148,1);cout<<R"(      ,)"; 
	H::setcolor(1);H::gotoxy(148,2);cout<<R"(   \  :  /)"; 
	H::setcolor(7);H::gotoxy(148,3);cout<<R"(`. __/ \__ .')"; 
	H::setcolor(7);H::gotoxy(148,4);cout<<R"(_ _\     /_ _)"; 
	H::setcolor(1);H::gotoxy(148,5);cout<<R"(   /_   _\)"; 
	H::setcolor(1);H::gotoxy(148,6);cout<<R"( .'  \ /  `.)"; 
	H::setcolor(7);H::gotoxy(148,7);cout<<R"(   /  :  \   )";  
	H::setcolor(7);H::gotoxy(148,8);cout<<R"(      ')"; 

	H::setcolor(1);H::gotoxy(32,4);cout<<R"(  ___ ___   _   ___  ___ _  _   _   _ ___ ___ ___   ___ _  _ ___ ___  ___ __  __   _ _____ ___ ___  _  _ )";
	H::setcolor(2);H::gotoxy(32,5);cout<<R"( / __| __| /_\ | _ \/ __| || | | | | / __| __| _ \ |_ _| \| | __/ _ \| _ \  \/  | /_\_   _|_ _/ _ \| \| |)";
	H::setcolor(3);H::gotoxy(32,6);cout<<R"( \__ \ _| / _ \|   / (__| __ | | |_| \__ \ _||   /  | || .` | _| (_) |   / |\/| |/ _ \| |  | | (_) | .` |)";
	H::setcolor(4);H::gotoxy(32,7);cout<<R"( |___/___/_/ \_\_|_\\___|_||_|  \___/|___/___|_|_\ |___|_|\_|_| \___/|_|_\_|  |_/_/ \_\_| |___\___/|_|\_|)";
	
///////////////////////////////////bOX FOR ENTER NAME OR ID////////////////////////////////////////////////////

	
	H::drawBoxSingleLineWithBG(60,11,47,4,145); 
	H::setcolor(151);H::gotoxy(65,12);cout<<"ENTER USER ID OR NAME FOR SEARCH DATA "; 
	H::drawBoxSingleLineWithBG(63,13,41,1,136); 
///////////////////////////////////////For input id or name//////////////////
	// H::setcolor(135);H::gotoxy(65,14);cout<<"..............";                                                                                                 

//	H::drawBoxDoubleLine(30,18,110,9,2);
//	H::drawBoxSingleLineWithBG(35,20,100,6,3);
//////////////////////////////////////Output Information user/////////////////////////////////////////
//	//header
//	H::setcolor(6);H::gotoxy(37,19);cout<<"ID";
//	H::setcolor(6);H::gotoxy(55,19);cout<<"NAME";
//	H::setcolor(6);H::gotoxy(76,19);cout<<"GENDER";
//	H::setcolor(6);H::gotoxy(97,19);cout<<"PHONE NUMBER";
//	H::setcolor(6);H::gotoxy(124,19);cout<<"PASSWORD";
//	//output if found
//	H::setcolor(4);H::gotoxy(37,21);cout<<"1001";
//	H::setcolor(4);H::gotoxy(55,21);cout<<"Meyly";
//	H::setcolor(4);H::gotoxy(76,21);cout<<"Female";
//	H::setcolor(4);H::gotoxy(97,21);cout<<"012345678";
//	H::setcolor(4);H::gotoxy(124,21);cout<<"1111";
	
	//output not found
	
	H::drawBoxDoubleLine(30,18,110,9,2);
	H::drawBoxSingleLineWithBG(35,20,100,6,3);
////////////////////////////////////Output Information user/////////////////////////////////////////
	//header
	H::setcolor(6);H::gotoxy(37,19);cout<<"ID";
	H::setcolor(6);H::gotoxy(55,19);cout<<"NAME";
	H::setcolor(6);H::gotoxy(76,19);cout<<"GENDER";
	H::setcolor(6);H::gotoxy(97,19);cout<<"PHONE NUMBER";
	H::setcolor(6);H::gotoxy(124,19);cout<<"PASSWORD";
	
	// H::setcolor(8);H::gotoxy(76,24);cout<<"USER NOT FOUND";
	
	
	// H::setcolor(7);H::gotoxy(67,29);cout<<"PRESS [ENTER] FOR SEARCH MORE";
	// H::setcolor(2);H::gotoxy(73,29);cout<<"[ENTER]";
	// H::setcolor(5);H::gotoxy(85,29);cout<<"SEARCH MORE";
	// H::setcolor(7);H::gotoxy(72,31);cout<<"PRESS [ESC] FOR BACK";
	// H::setcolor(3);H::gotoxy(78,31);cout<<"[ESC]";
	// H::setcolor(6);H::gotoxy(88,31);cout<<"BACK";
	NewFlowerEdit();
}

#endif