#ifndef ___INC_MAIN_DESIGN_H__
#define ___INC_MAIN_DESIGN_H__

#include "UserDesign.h"
//#include "../ANTHeader/ANTHinsyOOP"
//using namespace ANTHinsyOOP;
///////////////////////////////////////////////////////////////////////////////
///                               Global Function
void CurrentDateTime();
void Register();
void Login();
void ForgetPassword();
void Problem();
void Buying();
void ShowInvoice();
void UserMenu();
//////////////////////////////////////////////////////////////////////////////
class UserData {
private:
    char username[20];
    char dateOfBirth[11];
    char id[10];            // fix: use int for ID
    char gender[10];
    char password[30];
    char conPassword[30];
    char phoneNumber[20];

public:
    void inputUserData();
    void DisplayUserData();
    bool confirmPassword();
    // setter
    void setId(const char* id);
    void setUsername(const char* username);
    void setDateOfBirth(const char* dob);
    void setPassword(const char* password);
    void setPhoneNumber(const char* phoneNumber);
    void setGender(const char* gender);
    // void setAge(int age);

    // getter
    const char* getUserName() const;
    const char* getPassword() const;
    const char* getPhoneNumber() const;
    const char* getDateOfBirth() const;
    const char* getGender() const;
    const char* getId() const;
};
////////////////////////////////////////////////////////////////////////////////////////
////               body of Methods Propotype in class User Data
/////////////////////////////////////////////////////////////////////////////////////////

void UserData::setUsername(const char* username)
{
    strcpy(this->username,username);
}

void UserData::setDateOfBirth(const char * dob)
{
    strcpy(this->dateOfBirth,dob);
}

void UserData::setPassword(const char* password)
{
    strcpy(this->password,password);
}

void UserData::setPhoneNumber(const char* phoneNumber)
{
    strcpy(this->phoneNumber,phoneNumber);
}

void UserData::setGender(const char* gender){
    strcpy(this->gender,gender);
}

void UserData::setId(const char* id) {
    strcpy(this->id, id);
}

// getter// getter// getter// getter// getter// getter// getter
const char* UserData::getId() const {
    return this->id;
}
const char* UserData::getDateOfBirth() const
{
    return this->dateOfBirth;
}

const char* UserData::getPassword() const
{
    return this->password;
}

const char* UserData::getPhoneNumber() const
{
    return this->phoneNumber;
}

const char * UserData::getUserName() const
{
    return this->username;
}

const char* UserData::getGender() const
{
    return this->gender;
}

/////////////////////////////////////////////////////////////////////////////////////////
// void UserData::inputUserData()
// {
//     string strAge,strId;

//     H::setcolor(215);H::gotoxy(28,15);cout<<"Your ID";
// 	H::setcolor(215);H::gotoxy(28,20);cout<<"Enter Your Username";
//     H::setcolor(215);H::gotoxy(28,25);cout<<"Enter Your Gender";
// 	H::setcolor(215);H::gotoxy(92,25);cout<<"Enter Day of Bridth";
//     H::setcolor(215);H::gotoxy(92,15);cout<<"Enter Your Password";
//     H::setcolor(215);H::gotoxy(92,20);cout<<"Enter Your Password Again ";

// 	H::setcolor(167);H::gotoxy(57,15);cout << getId();
// 	H::setcolor(167);H::gotoxy(57,20);(H::inputLetter(this->username,10));
// 	H::setcolor(167);H::gotoxy(57,25);H::inputLetter(this->gender,7);
// 	H::setcolor(167);H::gotoxy(122,15);(H::inputPasswordMask(this->password,9));
// 	H::setcolor(167);H::gotoxy(122,20);H::input4Tel(this->phoneNumber,11);
// 	H::setcolor(167);H::gotoxy(122,25);H::inputDate(this->dateOfBirdth,'-',true);
// }
void UserData::inputUserData() {
    cout << "Your Auto ID: " << this->id << endl;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Gender: ";
    cin >> gender;
    cout << "Enter DOB (dd-mm-yyyy): ";
    cin >> dateOfBirth;
    cout << "Enter Phone Number: ";
    cin >> phoneNumber;
    cout << "Enter Password: ";
    cin >> password;
    cout << "Confirm Password: ";
    cin >> conPassword;

    if (!confirmPassword()) {
        cout << "Passwords do not match! Please re-enter.\n";
        inputUserData(); // retry
    }
}

//#######################################################################################
void UserData::DisplayUserData() {
    cout << "\n\tID: " << id;
    cout << "\n\tName: " << username;
    cout << "\n\tGender: " << gender;
    cout << "\n\tDOB: " << dateOfBirth;
    cout << "\n\tPhone: " << phoneNumber << endl;
}
////////////////////////////////////////////////////////////////////////////////////////////
bool UserData::confirmPassword() {
    return strcmp(password, conPassword) == 0;
}

//////////////////////////////////////////////////////////////////////////////
/// Helper: Generate Auto ID
///////////////////////////////////////////////////////////////////////////////
string generateNextUserId() {
    ifstream fin("Data/UserData.bin", ios::binary);
    if (!fin) {
        return "U-1000"; // first ID if no file exists
    }

    UserData user;
    fin.seekg(-static_cast<int>(sizeof(UserData)), ios::end); // move to last record
    fin.read((char*)&user, sizeof(UserData));
    fin.close();

    string lastId = user.getId();       // e.g. "U-1005"
    int num = stoi(lastId.substr(2));   // get number part
    num++;                              // increment
    return "U-" + to_string(num);       // return "U-1006"
}

///////////////////////////////////////////////////////////////////////////////
/// Global Functions
///////////////////////////////////////////////////////////////////////////////
void CurrentDateTime() {
    time_t now = time(0);
    tm* ltm = localtime(&now);

    cout << "\nCurrent Date & Time: "
         << (1900 + ltm->tm_year) << "-"
         << (1 + ltm->tm_mon) << "-"
         << ltm->tm_mday << " "
         << ltm->tm_hour << ":"
         << ltm->tm_min << ":"
         << ltm->tm_sec << endl;
}

void Register() {
    UserData user;
    cout << "\n========== User Registration ==========\n";

    // Auto-generate ID
    string newId = generateNextUserId();
    user.setId(newId.c_str());  // Save into user object
    cout << "Assigned User ID: " << newId << endl;

    // Input user details
    user.inputUserData();

    // Open file in append mode
    ofstream fout("Data/UserData.bin", ios::binary | ios::app);
    if (!fout) {
        cout << "❌ Error: could not open UserData.bin for writing.\n";
        return;
    }

    fout.write((char*)&user, sizeof(UserData));
    fout.close();

    cout << "\n✅ Registration successful. User saved!\n";
}
void Login() {
    UserData user;
    char username[20], password[30];
    bool found = false;

    cout << "\n========== User Login ==========\n";
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ifstream fin("Data/UserData.bin", ios::binary);
    if (!fin) {
        cout << "Error: no user data found!\n";
        return;
    }

    while (fin.read((char*)&user, sizeof(UserData))) {
        if (strcmp(user.getUserName(), username) == 0 &&
            strcmp(user.getPassword(), password) == 0) {
            found = true;
            cout << "\n Login Successful. Welcome, " << user.getUserName() << "!\n";
            break;
        }
    }
    fin.close();

    if (!found) {
        cout << "\n Invalid username or password.\n";
    }
}

void ForgetPassword() {
    UserData user;
    char phone[20];
    bool found = false;

    cout << "\n========== Forget Password ==========\n";
    cout << "Enter your phone number: ";
    cin >> phone;

    ifstream fin("Data/UserData.bin", ios::binary);
    if (!fin) {
        cout << "Error: no user data found!\n";
        return;
    }

    while (fin.read((char*)&user, sizeof(UserData))) {
        if (strcmp(user.getPhoneNumber(), phone) == 0) {
            found = true;
            cout << "\n✅ User found!\n";
            cout << "Your password is: " << user.getPassword() << endl;
            break;
        }
    }
    fin.close();

    if (!found) {
        cout << "\n Phone number not found.\n";
    }
}

void Problem() {
    cout << "\n========== Report Problem ==========\n";
    cout << "This is a placeholder. You can let users report issues here.\n";
}

void Buying() {
    cout << "\n========== Buying ==========\n";
    cout << "Here you will implement flower buying process later.\n";
}

void ShowInvoice() {
    cout << "\n========== Show Invoice ==========\n";
    cout << "Here you will display or print the invoice later.\n";
}

void UserMenu() {
    int choice;
    do {
        cout << "\n========== User Menu ==========\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Forget Password\n";
        cout << "4. Problem Report\n";
        cout << "5. Buying\n";
        cout << "6. Show Invoice\n";
        cout << "7. Current Date & Time\n";
        cout << "0. Exit\n";
        cout << "Choose option: ";
        cin >> choice;

        switch (choice) {
            case 1: Register(); break;
            case 2: Login(); break;
            case 3: ForgetPassword(); break;
            case 4: Problem(); break;
            case 5: Buying(); break;
            case 6: ShowInvoice(); break;
            case 7: CurrentDateTime(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n"; break;
        }
    } while (choice != 0);
}

///////////////////////////////////////////////////////////////////////////////


#endif