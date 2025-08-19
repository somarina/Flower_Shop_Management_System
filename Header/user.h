#ifndef ___INC_USER_H__
#define ___INC_USER_H__

// #include "ANTHinsyOOP"
#include "ANTHinsyOOP.hpp"
using namespace ANTHinsyOOP;
void TesttingUser();
class User{
	
	private:
		char username[20];
		char dateOfBirdth[11];
		int age;
		int id;
		char gender[6];
		char password[30];
		char phoneNumber[20];
	public:
        void inputUserData();
        void showUserData();

        // getter and setter
        void setUsername(const char* username);
        void setAge(int age);
        void setId(int id);
        void setPassword(const char* password);
        void setPhoneNumber(const char* phoneNumber);
        void setDateOfBirdth(const char *dob);
        void setGender(const char * gender);
        
        const char* getUserName() const;
        const char* getPassword() const;
        const char* getPhoneNumber () const;
        const char* getDateOfBirdth ()const;
        const char* getGender()const;
        
        int getId();
        int getAge();
};
////////////////////////////////////////////////////////////////////////////////////////////
////                        Body Function Propotype Of class User
void User::setUsername(const char* username)
{
    strcpy(this->username,username);
}

void User::setDateOfBirdth(const char * dob)
{
    strcpy(this->dateOfBirdth,dob);
}

void User::setPassword(const char* password)
{
    strcpy(this->password,password);
}

void User::setPhoneNumber(const char* phoneNumber)
{
    strcpy(this->phoneNumber,phoneNumber);
}

void User::setGender(const char* gender){
    strcpy(this->gender,gender);
}

void User::setAge(int age)
{
    this->age=age;
}

void User::setId(int id)
{
    this->id = id;
}

// getter

int User::getAge()
{
    return this->age;
}

int User::getId()
{
    return this->id;
}

const char* User::getDateOfBirdth() const
{
    return this->dateOfBirdth;
}

const char* User::getPassword() const
{
    return this->password;
}

const char* User::getPhoneNumber() const
{
    return this->phoneNumber;
}

const char * User::getUserName() const
{
    return this->username;
}

const char* User::getGender() const
{
    return this->gender;
}

void User::inputUserData()
{
    string strAge,strId;

    H::setcolor(215);H::gotoxy(28,15);cout<<"Your ID";
	H::setcolor(215);H::gotoxy(28,20);cout<<"Enter your username";
    H::setcolor(215);H::gotoxy(28,25);cout<<"Enter your gender";
    H::setcolor(215);H::gotoxy(92,15);cout<<"Enter your password";
    H::setcolor(215);H::gotoxy(92,20);cout<<"Enter your Phone number";
    H::setcolor(215);H::gotoxy(92,25);cout<<"Enter day of bridth";

	H::setcolor(167);H::gotoxy(57,15);cout << getId();
	H::setcolor(167);H::gotoxy(57,20);(H::inputLetter(this->username,10));
	H::setcolor(167);H::gotoxy(57,25);H::inputLetter(this->gender,7);
	H::setcolor(167);H::gotoxy(122,15);(H::inputPasswordMask(this->password,9));
	H::setcolor(167);H::gotoxy(122,20);H::input4Tel(this->phoneNumber,11);
	H::setcolor(167);H::gotoxy(122,25);H::inputDate(this->dateOfBirdth,'-',true);
}

void User::showUserData()
{
    cout<<"\n\t ID: "<<this->id;
    cout<<"\n\t Name: "<<this->username;
    cout<<"\n\t Gender: "<<this->gender;
    cout<<"\n\t Age: "<<this->age;
    cout<<"\n\t DOB: "<<this->dateOfBirdth;
    cout<<"\n\t password: "<<this->password;
    cout<<"\n\t phone number: "<<this->phoneNumber;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
class UserDesign{
	public:
		static void DesignFeature();
		static void DesignMenu();
		static void DesignLogin();
		static void DesignRegister();
		static void DesignForget();	
		static void DesignForgetSuccess();
		static void DesignLoading();
		static void TestArr();
};

///////////////////////////////////////////////////////////////////////////////////////////////
//////					Methods Body Propotype Of class uerDesign
void UserDesign::DesignFeature()
{
	//		ON and left Box
	H::HLine( 3,1,28,25,255);
	H::HLine( 7,2,28,35,255);
	H::HLine(11,3,28,45,255);
	H::HLine(15,4,28,55,255);
	H::HLine(19,5,28,65,255);

	//		Under And Left Box
	H::HLine(15,6 ,28,55,255);
	H::HLine(11,7 ,28,45,255);
	H::HLine( 7,8,28,35,255);
	H::HLine( 3,9,28,25,255);
	
	///		Box
	H::drawBoxDoubleLineWithBG(47,2,75,5,5);
	
	//		On And left Box
	H::HLine(139,1,28,25,255);
	H::HLine(135,2,28,35,255);
	H::HLine(131,3,28,45,255);
	H::HLine(127,4,28,55,255);
	H::HLine(123,5,28,65,255);

	//		Under And Left Box
	H::HLine(127,6 ,28,55,255);
	H::HLine(131,7 ,28,45,255);
	H::HLine(135,8 ,28,35,255);
	H::HLine(139,9 ,28,25,255);
	
	//		Text In box
	
	//      Box under big box that have text
//	H::drawBoxDoubleLineWithBG(10,)
	H::drawBoxSingleLineWithBG(12,27,25,1,68);
	H::drawBoxSingleLineWithBG(53,22,25,1,68);
	H::drawBoxSingleLineWithBG(95,17,25,1,68);
	H::drawBoxSingleLineWithBG(135,12,25,1,68);
	
	//     Decoration Under text Box
	H::VLine(25,29,10,25,255);
	H::VLine(26,29,10,25,255);
	
	H::VLine(66,24,15,25,255);
	H::VLine(67,24,15,25,255);
	
	H::VLine(108,19,20,25,255);
	H::VLine(109,19,20,25,255);
	
	H::VLine(148,14,25,25,255);
	H::VLine(149,14,25,25,255);
	
	// 		Line ..
	H::HLine(5,39,160,25,255);
	
	///  Under Line 
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
void UserDesign::DesignMenu()
{
	H::setcursor(0,0);
	char choice;
	int x=1;
	do{
//	for(int i=0;i<n;i++)
//	{
//		
//	}
	
	//			the top of console
	//			On  left
	
	H::HLine(0,0,10,145,255);
	H::HLine(2,1,6,162,255);
	
	H::HLine(5,3,160,25,255);
	H::HLine(5,36,160,25,255);
	
	//			on right
	H::HLine(160,0,10,145,255);
	H::HLine(162,1,6,162,255);
	
	//			Under left
	H::HLine(2,38,6,162,255);
	H::HLine(0,39,10,145,255);
	
	//			Under Right
	H::HLine(160,39,10,145,255);
	H::HLine(162,38,6,162,255);
	
	//			Left 
	H::VLine(5,1,36,25,255);
	H::VLine(6,1,36,25,255);
	
	//			Right
	H::VLine(165,1,36,25,255);
	H::VLine(166,1,36,25,255);
	
	//			Ascii art Near text and Box
	H::setcolor(7);H::gotoxy(8,5);cout << R"(   __   _)";
	H::setcolor(7);H::gotoxy(8,6);cout << R"( _(  )_( ))";
	H::setcolor(7);H::gotoxy(8,7);cout << R"((_   _    _))";
	H::setcolor(7);H::gotoxy(8,8);cout << R"(  (_) (__))";
	H::setcolor(3);H::gotoxy(8,9);cout << R"(  / / / /)";

	H::setcolor(7);H::gotoxy(24,8 );cout << R"(   __   _)";
	H::setcolor(7);H::gotoxy(24,9 );cout << R"( _(  )_( ))";
	H::setcolor(7);H::gotoxy(24,10);cout << R"((_   _    _))";
	H::setcolor(7);H::gotoxy(24,11);cout << R"(  (_) (__))";
	H::setcolor(3);H::gotoxy(24,12);cout << R"(  / / / /)";
	
	H::setcolor(7);H::gotoxy(130,8 );cout << R"(   __   _)";
	H::setcolor(7);H::gotoxy(130,9 );cout << R"( _(  )_( ))";
	H::setcolor(7);H::gotoxy(130,10);cout << R"((_   _    _))";
	H::setcolor(7);H::gotoxy(130,11);cout << R"(  (_) (__))";
	H::setcolor(3);H::gotoxy(130,12);cout << R"(  / / / /)";
	
	H::setcolor(7);H::gotoxy(146,5);cout << R"(   __   _)";
	H::setcolor(7);H::gotoxy(146,6);cout << R"( _(  )_( ))";
	H::setcolor(7);H::gotoxy(146,7);cout << R"((_   _    _))";
	H::setcolor(7);H::gotoxy(146,8);cout << R"(  (_) (__))";
	H::setcolor(3);H::gotoxy(146,9);cout << R"(  / / / /)";
	
	



	//	 ascii text	Under And Left Box
	
	H::setcolor(1);H::gotoxy(50,4);cout << R"(    __  __                  ___                               __  )";
	H::setcolor(1);H::gotoxy(50,5);cout << R"(   / / / /_______  _____   /   | ______________  __  ______  / /_ )";
	H::setcolor(1);H::gotoxy(50,6);cout << R"(  / / / / ___/ _ \/ ___/  / /| |/ ___/ ___/ __ \/ / / / __ \/ __/ )";
	H::setcolor(2);H::gotoxy(50,7);cout << R"( / /_/ (__  )  __/ /     / ___ / /__/ /__/ /_/ / /_/ / / / / /_   )";
	H::setcolor(2);H::gotoxy(50,8);cout << R"( \____/____/\___/_/     /_/  |_\___/\___/\____/\__,_/_/ /_/\__/   )";
	do{                          
	//   left near Text 
	H::VLine(40,3,8,179,255);
	H::VLine(41,3,8,179,255);
	
	//   right near text
	H::VLine(126,3,8,179,255);
	H::VLine(127,3,8,179,255);
	
	///  line under text 
	H::HLine(39,12,33,179,255);
	H::HLine(94,12,33,179,255);
	H::HLine(62,11,42,230,255);
	H::HLine(67,10,32,179,255);
	
	H::VLine(59,13,21,85,255);
	H::VLine(60,13,21,85,255);
	
	H::VLine(65,13,21,85,255);
	H::VLine(66,13,21,85,255);
	
	H::HLine(59,14,6,85,255);
	H::HLine(59,34,6,85,255);
	
	H::HLine(61,16,2,102,255);
	H::HLine(61,18,2,102,255);
	H::HLine(61,20,2,102,255);
	H::HLine(61,22,2,102,255);
	H::HLine(61,24,2,102,255);
	H::HLine(61,26,2,102,255);
	H::HLine(61,28,2,102,255);
	H::HLine(61,30,2,102,255);
	H::HLine(61,32,2,102,255);
	

		H::drawBoxSingleLineWithBG(75,14,80,19,3);

		//      Box under big box that have text
		H::drawBoxDoubleLineWithBG(18,15,30,1,230);
		H::HLine(20,16,26,128,255);
		H::setcolor(135);H::gotoxy(25,16);cout << "DISPLAY FLOWERS";
		H::drawBoxDoubleLineWithBG(18,19,30,1,230);
		H::HLine(20,20,26,128,255);
		H::setcolor(135);H::gotoxy(25,20);cout << "SEARCH FLOWER";
		H::drawBoxDoubleLineWithBG(18,23,30,1,230);
		H::HLine(20,24,26,128,255);
		H::setcolor(135);H::gotoxy(25,24);cout << "BUYING FLOWER";
		H::drawBoxDoubleLineWithBG(18,27,30,1,230);
		H::HLine(20,28,26,128,255);
		H::setcolor(135);H::gotoxy(25,28);cout << "GIVE FEDBACK";
		H::drawBoxDoubleLineWithBG(18,31,30,1,230);
		H::HLine(20,32,26,128,255);
		H::setcolor(135);H::gotoxy(25,32);cout << "BACK";

		if(x==1)
		{
			H::drawBoxDoubleLineWithBG(18,15,30,1,213);
			H::HLine(20,16,26,128,216);
			H::setcolor(135);H::gotoxy(25,16);cout << "DISPLAY FLOWERS";
			
			////		Flower Show If in Arr key case 1

			H::setcolor(6);H::gotoxy(78,22);cout << R"(     .--.   )";
			H::setcolor(6);H::gotoxy(78,23);cout << R"(  .'_\/_'.  )";
			H::setcolor(6);H::gotoxy(78,24);cout << R"(  '. /\ .'  )";
			H::setcolor(6);H::gotoxy(78,25);cout << R"(    "||"    )";
			H::setcolor(2);H::gotoxy(78,26);cout << R"(     || /\  )";
			H::setcolor(2);H::gotoxy(78,27);cout << R"(  /\ ||//\) )";
			H::setcolor(2);H::gotoxy(78,28);cout << R"( (/\\||/    )";
			H::setcolor(2);H::gotoxy(78,29);cout << R"(____\||/____)";
			
			H::setcolor(5);H::gotoxy(90,22);cout << R"(     .--.  )";
			H::setcolor(5);H::gotoxy(90,23);cout << R"(  .'_\/_'.   )";
			H::setcolor(5);H::gotoxy(90,24);cout << R"(  '. /\ .'   )";
			H::setcolor(5);H::gotoxy(90,25);cout << R"(    "||"     )";
			H::setcolor(2);H::gotoxy(90,26);cout << R"(     || /\   )";
			H::setcolor(2);H::gotoxy(90,27);cout << R"(  /\ ||//\)  )";
			H::setcolor(2);H::gotoxy(90,28);cout << R"( (/\\||/     )";
			H::setcolor(2);H::gotoxy(90,29);cout << R"(____\||/_____)";
			
			H::setcolor(4);H::gotoxy(102,22);cout << R"(     .--.  )";
			H::setcolor(4);H::gotoxy(102,23);cout << R"(  .'_\/_'.   )";
			H::setcolor(4);H::gotoxy(102,24);cout << R"(  '. /\ .'   )";
			H::setcolor(4);H::gotoxy(102,25);cout << R"(    "||"     )";
			H::setcolor(2);H::gotoxy(102,26);cout << R"(     || /\   )";
			H::setcolor(2);H::gotoxy(102,27);cout << R"(  /\ ||//\)  )";
			H::setcolor(2);H::gotoxy(102,28);cout << R"( (/\\||/     )";
			H::setcolor(2);H::gotoxy(102,29);cout << R"(____\||/_____)";
			
			H::setcolor(7);H::gotoxy(114,22);cout << R"(     .--.  )";
			H::setcolor(7);H::gotoxy(114,23);cout << R"(  .'_\/_'.   )";
			H::setcolor(7);H::gotoxy(114,24);cout << R"(  '. /\ .'   )";
			H::setcolor(7);H::gotoxy(114,25);cout << R"(    "||"     )";
			H::setcolor(2);H::gotoxy(114,26);cout << R"(     || /\   )";
			H::setcolor(2);H::gotoxy(114,27);cout << R"(  /\ ||//\)  )";
			H::setcolor(2);H::gotoxy(114,28);cout << R"( (/\\||/     )";
			H::setcolor(2);H::gotoxy(114,29);cout << R"(____\||/_____)";
			
			H::setcolor(3);H::gotoxy(126,22);cout << R"(     .--.  )";
			H::setcolor(3);H::gotoxy(126,23);cout << R"(  .'_\/_'.   )";
			H::setcolor(3);H::gotoxy(126,24);cout << R"(  '. /\ .'   )";
			H::setcolor(3);H::gotoxy(126,25);cout << R"(    "||"     )";
			H::setcolor(2);H::gotoxy(126,26);cout << R"(     || /\   )";
			H::setcolor(2);H::gotoxy(126,27);cout << R"(  /\ ||//\)  )";
			H::setcolor(2);H::gotoxy(126,28);cout << R"( (/\\||/     )";
			H::setcolor(2);H::gotoxy(126,29);cout << R"(____\||/_____)";
			
			H::setcolor(1);H::gotoxy(138,22);cout << R"(     .--.  )";
			H::setcolor(1);H::gotoxy(138,23);cout << R"(  .'_\/_'.   )";
			H::setcolor(1);H::gotoxy(138,24);cout << R"(  '. /\ .'   )";
			H::setcolor(1);H::gotoxy(138,25);cout << R"(    "||"     )";
			H::setcolor(2);H::gotoxy(138,26);cout << R"(     || /\   )";
			H::setcolor(2);H::gotoxy(138,27);cout << R"(  /\ ||//\)  )";
			H::setcolor(2);H::gotoxy(138,28);cout << R"( (/\\||/     )";
			H::setcolor(2);H::gotoxy(138,29);cout << R"(____\||/_____)";
			
		}
		if(x==2)
		{
			H::drawBoxDoubleLineWithBG(18,19,30,1,213);
			H::HLine(20,20,26,128,216);
			H::setcolor(135);H::gotoxy(25,20);cout << "SEARCH FLOWER";

			//	flower arrow key in case 2 like for Search Flower 
				H::setcolor(6);H::gotoxy(82,18);cout << R"(         ,            __ \/ __)";
				H::setcolor(6);H::gotoxy(82,19);cout << R"(     /\^/`\          /o \{}/ o\)";
				H::setcolor(6);H::gotoxy(82,20);cout << R"(    | \/   |         \   ()   /)";
				H::setcolor(6);H::gotoxy(82,21);cout << R"(    | |    |          `> /\ <` )";
				H::setcolor(6);H::gotoxy(82,22);cout << R"(    \ \    /  @@@@    (o/\/\o)  {{{}}                 _ _)";
				H::setcolor(6);H::gotoxy(82,23);cout << R"(     '\\//'  @@()@@  _ )    (    ~Y~       @@@@     _{ ' }_)";
				H::setcolor(6);H::gotoxy(82,24);cout << R"(       ||     @@@@ _(_)_   wWWWw .oOOo.   @@()@@   { `.!.` })";
				H::setcolor(6);H::gotoxy(82,25);cout << R"(       ||     ,/  (_)@(_)  (___) OO()OO    @@@@  _ ',_/Y\_,')";
				H::setcolor(6);H::gotoxy(82,26);cout << R"(       ||  ,\ | /)  (_)\     Y   'OOOO',,,(\|/ _(_)_ {_,_})";
				H::setcolor(6);H::gotoxy(82,27);cout << R"(   |\  ||  |\\|// vVVVv`|/@@@@    _ \/{{}}}\| (_)@(_)  |  ,,,)";
				H::setcolor(6);H::gotoxy(82,28);cout << R"(   | | ||  | |;,,,(___) |@@()@@ _(_)_| ~Y~ wWWWw(_)\ (\| {{{}})";
				H::setcolor(6);H::gotoxy(82,29);cout << R"(   | | || / / {{}}} Y  \| @@@@ (_)#(_) \|  (___)   |  \| /~Y~)";
				H::setcolor(2);H::gotoxy(82,30);cout << R"(    \ \||/ /\\|~Y~ \|/  | \ \/  /(_) |/ |/   Y    \|/  |//\|/)";
				H::setcolor(2);H::gotoxy(82,31);cout << R"(     \ `\\//`,.\|/|//.|/\\|/\\|,\|/ //\|/\|.\\\| // \|\\ |/,\|/)";
				H::setcolor(2);H::gotoxy(82,32);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	

		}
		if(x==3)
		{
			H::drawBoxDoubleLineWithBG(18,23,30,1,213);
			H::HLine(20,24,26,128,216);
			H::setcolor(135);H::gotoxy(25,24);cout << "BUYING FLOWER";

			H::setcolor(5);H::gotoxy(76,17);cout << R"(        @(\/)       )";
			H::setcolor(5);H::gotoxy(76,18);cout << R"(        @(\/)       )";
			H::setcolor(5);H::gotoxy(76,19);cout << R"(     (\/)-{}-)@     )";
			H::setcolor(5);H::gotoxy(76,20);cout << R"(   @(={}=)/\)(\/)   )";
			H::setcolor(5);H::gotoxy(76,21);cout << R"(  (\/(/\)@| (-{}-)  )";
			H::setcolor(5);H::gotoxy(76,22);cout << R"( (={}=)@(\/)@(/\)@  )";
			H::setcolor(5);H::gotoxy(76,23);cout << R"(  (/\)\(={}=)/(\/)  )";
			H::setcolor(5);H::gotoxy(76,24);cout << R"(  @(\/)\(/\)/(={}=) )";
			H::setcolor(5);H::gotoxy(76,25);cout << R"(  (-{}-)""""@/({})  )";
			H::setcolor(5);H::gotoxy(76,26);cout << R"(   (/\)|:   |(/\)   )";
			H::setcolor(0);H::gotoxy(76,27);cout << R"(      /::'   \	   )";
			H::setcolor(0);H::gotoxy(76,28);cout << R"(     /:::     \	   )";
			H::setcolor(0);H::gotoxy(76,29);cout << R"(    |::'       |	   )";
			H::setcolor(0);H::gotoxy(76,30);cout << R"(    |::        |    )";
			H::setcolor(0);H::gotoxy(76,31);cout << R"(    \::.       /	   )";
			H::setcolor(0);H::gotoxy(76,32);cout << R"(     ':______.'	   )";

			H::setcolor(6);H::gotoxy(95,16);cout << R"(        @(\/)       )";
			H::setcolor(6);H::gotoxy(95,17);cout << R"(        @(\/)       )";
			H::setcolor(6);H::gotoxy(95,18);cout << R"(     (\/)-{}-)@     )";
			H::setcolor(6);H::gotoxy(95,19);cout << R"(   @(={}=)/\)(\/)   )";
			H::setcolor(6);H::gotoxy(95,20);cout << R"(  (\/(/\)@| (-{}-)  )";
			H::setcolor(6);H::gotoxy(95,21);cout << R"( (={}=)@(\/)@(/\)@  )";
			H::setcolor(6);H::gotoxy(95,22);cout << R"(  (/\)\(={}=)/(\/)  )";
			H::setcolor(6);H::gotoxy(95,23);cout << R"(  @(\/)\(/\)/(={}=) )";
			H::setcolor(6);H::gotoxy(95,24);cout << R"(  (-{}-)""""@/({})  )";
			H::setcolor(6);H::gotoxy(95,25);cout << R"(   (/\)|:   |(/\)   )";
			H::setcolor(0);H::gotoxy(95,26);cout << R"(      /::'   \	   )";
			H::setcolor(0);H::gotoxy(95,27);cout << R"(     /:::     \	   )";
			H::setcolor(0);H::gotoxy(95,28);cout << R"(    |::'       |	   )";
			H::setcolor(0);H::gotoxy(95,29);cout << R"(    |::        |    )";
			H::setcolor(0);H::gotoxy(95,30);cout << R"(    \::.       /	   )";
			H::setcolor(0);H::gotoxy(95,31);cout << R"(     ':______.'	   )";

			H::setcolor(3);H::gotoxy(114,16);cout << R"(        @(\/)       )";
			H::setcolor(3);H::gotoxy(114,17);cout << R"(        @(\/)       )";
			H::setcolor(3);H::gotoxy(114,18);cout << R"(     (\/)-{}-)@     )";
			H::setcolor(3);H::gotoxy(114,19);cout << R"(   @(={}=)/\)(\/)   )";
			H::setcolor(3);H::gotoxy(114,20);cout << R"(  (\/(/\)@| (-{}-)  )";
			H::setcolor(3);H::gotoxy(114,21);cout << R"( (={}=)@(\/)@(/\)@  )";
			H::setcolor(3);H::gotoxy(114,22);cout << R"(  (/\)\(={}=)/(\/)  )";
			H::setcolor(3);H::gotoxy(114,23);cout << R"(  @(\/)\(/\)/(={}=) )";
			H::setcolor(3);H::gotoxy(114,24);cout << R"(  (-{}-)""""@/({})  )";
			H::setcolor(3);H::gotoxy(114,25);cout << R"(   (/\)|:   |(/\)   )";
			H::setcolor(0);H::gotoxy(114,26);cout << R"(      /::'   \	   )";
			H::setcolor(0);H::gotoxy(114,27);cout << R"(     /:::     \	   )";
			H::setcolor(0);H::gotoxy(114,28);cout << R"(    |::'       |   )";
			H::setcolor(0);H::gotoxy(114,29);cout << R"(    |::        |   )";
			H::setcolor(0);H::gotoxy(114,30);cout << R"(    \::.       /   )";
			H::setcolor(0);H::gotoxy(114,31);cout << R"(     ':______.'	   )";

			H::setcolor(2);H::gotoxy(133,17);cout << R"(        @(\/)       )";
			H::setcolor(2);H::gotoxy(133,18);cout << R"(        @(\/)       )";
			H::setcolor(2);H::gotoxy(133,19);cout << R"(     (\/)-{}-)@     )";
			H::setcolor(2);H::gotoxy(133,20);cout << R"(   @(={}=)/\)(\/)   )";
			H::setcolor(2);H::gotoxy(133,21);cout << R"(  (\/(/\)@| (-{}-)  )";
			H::setcolor(2);H::gotoxy(133,22);cout << R"( (={}=)@(\/)@(/\)@  )";
			H::setcolor(2);H::gotoxy(133,23);cout << R"(  (/\)\(={}=)/(\/)  )";
			H::setcolor(2);H::gotoxy(133,24);cout << R"(  @(\/)\(/\)/(={}=) )";
			H::setcolor(2);H::gotoxy(133,25);cout << R"(  (-{}-)""""@/({})  )";
			H::setcolor(2);H::gotoxy(133,26);cout << R"(   (/\)|:   |(/\)   )";
			H::setcolor(0);H::gotoxy(133,27);cout << R"(      /::'   \	   )";
			H::setcolor(0);H::gotoxy(133,28);cout << R"(     /:::     \	   )";
			H::setcolor(0);H::gotoxy(133,29);cout << R"(    |::'       |   )";
			H::setcolor(0);H::gotoxy(133,30);cout << R"(    |::        |   )";
			H::setcolor(0);H::gotoxy(133,31);cout << R"(    \::.       /   )";
			H::setcolor(0);H::gotoxy(133,32);cout << R"(     ':______.'	   )";

		}
		if(x==4)
		{
			H::drawBoxDoubleLineWithBG(18,27,30,1,213);
			H::HLine(20,28,26,128,216);
			H::setcolor(135);H::gotoxy(25,28);cout << "GIVE FEDBACK";

			//		Flower set ascii code for case 4 like 
			H::setcolor(240);H::gotoxy(91,15);cout << R"( _______________________________________ )";
			H::setcolor(240);H::gotoxy(91,16);cout << R"(|,---"-----------------------------"---,|)";
			H::setcolor(240);H::gotoxy(91,17);cout << R"(||                                     ||)";
			H::setcolor(240);H::gotoxy(91,18);cout << R"(|| Group2                              ||)";
			H::setcolor(240);H::gotoxy(91,19);cout << R"(||                                     ||)";
			H::setcolor(240);H::gotoxy(91,20);cout << R"(||      Flower Shop Management System  ||)";
			H::setcolor(240);H::gotoxy(91,21);cout << R"(||                                     ||)";
			H::setcolor(240);H::gotoxy(91,22);cout << R"(|| Fedback :: Your Flower Look so      ||)";
			H::setcolor(240);H::gotoxy(91,23);cout << R"(||            Pretty                   ||)";
			H::setcolor(240);H::gotoxy(91,24);cout << R"(||_____,_________________________,_____||)";
			H::setcolor(240);H::gotoxy(91,25);cout << R"(|)_____)-----.| /Group 2 |.------(_____(|)";
			H::setcolor(7  );H::gotoxy(84,26);cout << R"(     //"""""""|_____|=----------=|______|"""""""\)";
			H::setcolor(7  );H::gotoxy(84,27);cout << R"(    // _| _| _| _| _| _| _| _| _| _| _| _| _| _| \)";
			H::setcolor(7  );H::gotoxy(84,28);cout << R"(   // ___| _| _| _| _| _| _| _| _| _| _| _|  |  | \)";
			H::setcolor(7  );H::gotoxy(84,29);cout << R"(  |/ ___| _| _| _| _| _| _| _| _| _| _| _| ______| \)";
			H::setcolor(7  );H::gotoxy(84,30);cout << R"(  / __| _| _| _| _| _| _| _| _| _| _| _| _| _| ___| \)";
			H::setcolor(7  );H::gotoxy(84,31);cout << R"( / _| _| _| _| ________________________| _| _| _| _| \)";
		H::setcolor(7  );H::gotoxy(84,32);cout << R"(|------"--------------------------------------"-------|)";
		H::setcolor(7  );H::gotoxy(84,33);cout << R"(`-----------------------------------------------------')";
    
		}
		if(x==5)
		{
			H::drawBoxDoubleLineWithBG(18,31,30,1,213);
			H::HLine(20,32,26,128,216);
			H::setcolor(135);H::gotoxy(25,32);cout << "BACK";

			H::setcolor(7);H::gotoxy(90,18);cout << R"(   /|         )";
			H::setcolor(7);H::gotoxy(90,19);cout << R"(  / |         )";
			H::setcolor(7);H::gotoxy(90,20);cout << R"( /__|_______  )";
			H::setcolor(7);H::gotoxy(90,21);cout << R"( |  __  __  | )";
			H::setcolor(7);H::gotoxy(90,22);cout << R"( | |  ||  | | )";
			H::setcolor(7);H::gotoxy(90,23);cout << R"( | |__||__| | )";
			H::setcolor(7);H::gotoxy(90,24);cout << R"( |  __  __()| )";
			H::setcolor(7);H::gotoxy(90,25);cout << R"( | |  ||  | | )";
			H::setcolor(7);H::gotoxy(90,26);cout << R"( | |  ||  | | )";
			H::setcolor(7);H::gotoxy(90,27);cout << R"( | |__||__| | )";
			H::setcolor(7);H::gotoxy(90,28);cout << R"( |__________| )";



		}
		choice = getch();
		switch(choice)
		{
			case 72: { // Up
				x--;
				if(x<1) x=5;
				break;
			}
			case 80: { // Down
				x++;
				if(x > 5) x=1;
				break;
			}
		}
	}while(choice != 13);
	if(x==1)
	{
		H::cls();
		cout << "OPTION 1";
		H::delay(2000);
		H::setcolor(2);
		H::cls();
	}
	if(x==2)
	{
		H::cls();
		cout << "OPTION 2";
		H::delay(2000);
		H::setcolor(2);
		H::cls();
	}
	if(x==3)
	{
		H::cls();
		cout << "OPTION 3";
		H::delay(2000);
		H::setcolor(2);
		H::cls();
	}
	if(x==4)
	{
		H::cls();
		cout << "OPTION 4";
		H::delay(2000);
		H::setcolor(2);
		H::cls();
	}
	if(x==5)
	{
		
		H::setcolor(2);
		H::cls();
		exit(0);
	}
	}while(choice != 27);
    
//		Flower Ascii Art For case 5 Like Back
	

}
////////////////////////////////////////////////////////////////////////////////////////////////////
void UserDesign::DesignLogin()
{
	//on    the Box
		// and left on 
	H::HLine(5,1,160,25,255);
	H::HLine(8,2,10,68,255);
	H::HLine(8,3,10,68,255);
	
		// and right on
	H::HLine(152,2,10,68,255);
	H::HLine(152,3,10,68,255);
	
	// under the box
		// and left under
	H::HLine(5,38,160,25,255);
	H::HLine(8,37,10,68,255);
	H::HLine(8,36,10,68,255);
		// and right under
	H::HLine(152,37,10,68,255);
	H::HLine(152,36,10,68,255);
	
	//    Left The Box
		//left 
	H::VLine(13,3,32,25,255);
	H::VLine(14,3,32,25,255);
	
		//rgiht
	H::VLine(157,3,32,25,255);
	H::VLine(158,3,32,25,255);
	
	
	////		Text Under Line
	
	H::setcolor(7);H::gotoxy(55,2);cout << R"(     __                _          ______                    )";
	H::setcolor(7);H::gotoxy(55,3);cout << R"(    / /   ____  ____ _(_)___     / ____/___  _________ ___  )";
	H::setcolor(7);H::gotoxy(55,4);cout << R"(   / /   / __ \/ __ `/ / __ \   / /_  / __ \/ ___/ __ `__ \ )";
	H::setcolor(7);H::gotoxy(55,5);cout << R"(  / /___/ /_/ / /_/ / / / / /  / __/ / /_/ / /  / / / / / / )";
	H::setcolor(7);H::gotoxy(55,6);cout << R"( /_____/\____/\__, /_/_/ /_/  /_/    \____/_/  /_/ /_/ /_/  )";
	H::setcolor(7);H::gotoxy(55,7);cout << R"(             /____/                                         )";
	
	////		Line Under Text 
	H::HLine(14 ,9,25,34,255);
	H::HLine(43 ,9,25,85,255);
	H::HLine(72 ,9,25,102,255);
	H::HLine(101,9,25,85,255);
	H::HLine(130,9,26,34,255);
	
	///         Big Box under text
	H::drawBoxSingleLineWithBG(43,14,83,13,179);
	
	//			Middle Box of Big Box (For Login with User and Password)
	H::drawBoxDoubleLineWithBG(49,17,30,1,213);
	H::drawBoxSingleLineWithBG(90,17,30,1,230);
	H::drawBoxSingleLineWithBG(49,23,30,1,213);
	H::drawBoxSingleLineWithBG(90,23,30,1,230);	
	//			Design with Ascii Art Like ascii Flower
	H::setcolor(1);H::gotoxy(29,30);cout << R"(                 _)";
	H::setcolor(3);H::gotoxy(29,31);cout << R"(               _(_)_                          wWWWw   _ )";
	H::setcolor(4);H::gotoxy(29,32);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_ )";
	H::setcolor(5);H::gotoxy(29,33);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_) )";
	H::setcolor(6);H::gotoxy(29,34);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\ )";
	H::setcolor(2);H::gotoxy(29,35);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/      | )";
	H::setcolor(2);H::gotoxy(29,36);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \|      \|/ )";
	H::setcolor(2);H::gotoxy(29,37);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
	
	H::setcolor(1);H::gotoxy(88,30);cout << R"(                 _)";
	H::setcolor(3);H::gotoxy(88,31);cout << R"(               _(_)_                          wWWWw )";
	H::setcolor(4);H::gotoxy(88,32);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) )";
	H::setcolor(5);H::gotoxy(88,33);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  )";
	H::setcolor(6);H::gotoxy(88,34);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/ )";
	H::setcolor(2);H::gotoxy(88,35);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/ )";
	H::setcolor(2);H::gotoxy(88,36);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \| )";
	H::setcolor(2);H::gotoxy(88,37);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|// )";
	

	

}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void UserDesign::DesignRegister()
{
	//on    the Box
		// and left on 
	H::HLine(5,1,160,25,255);
	H::HLine(8,2,10,68,255);
	H::HLine(8,3,10,68,255);
	
		// and right on
	H::HLine(152,2,10,68,255);
	H::HLine(152,3,10,68,255);
	
	// under the box
		// and left under
	H::HLine(5,38,160,25,255);
	H::HLine(8,37,10,68,255);
	H::HLine(8,36,10,68,255);
		// and right under
	H::HLine(152,37,10,68,255);
	H::HLine(152,36,10,68,255);
	
	//    Left The Box
		//left 
	H::VLine(13,3,32,25,255);
	H::VLine(14,3,32,25,255);
	
		//rgiht
	H::VLine(157,3,32,25,255);
	H::VLine(158,3,32,25,255);
	
	
	////		Text Under Line
	
	H::setcolor(7);H::gotoxy(50,2);cout << R"(     ____             _      __               ______                    )";
	H::setcolor(7);H::gotoxy(50,3);cout << R"(    / __ \___  ____ _(_)____/ /____  _____   / ____/___  _________ ___  )";
	H::setcolor(7);H::gotoxy(50,4);cout << R"(   / /_/ / _ \/ __ `/ / ___/ __/ _ \/ ___/  / /_  / __ \/ ___/ __ `__ \ )";
	H::setcolor(7);H::gotoxy(50,5);cout << R"(  / _, _/  __/ /_/ / (__  ) /_/  __/ /     / __/ / /_/ / /  / / / / / / )";
	H::setcolor(7);H::gotoxy(50,6);cout << R"( /_/ |_|\___/\__, /_/____/\__/\___/_/     /_/    \____/_/  /_/ /_/ /_/  )";
	H::setcolor(7);H::gotoxy(50,7);cout << R"(            /____/                                                      )";
	
	////		Line Under Text 
	H::HLine(14 ,9,25,34,255);
	H::HLine(43 ,9,25,85,255);
	H::HLine(72 ,9,25,102,255);
	H::HLine(101,9,25,85,255);
	H::HLine(130,9,26,34,255);
	
	///         Big Box under text
	H::drawBoxSingleLineWithBG(19,11,132,17,179);
	
	//			Middle Box of Big Box (For Login with User and Password)
	H::drawBoxDoubleLineWithBG(25,14,25,1,213);
	H::drawBoxSingleLineWithBG(25,19,25,1,213);
	H::drawBoxSingleLineWithBG(25,24,25,1,213);
	H::drawBoxSingleLineWithBG(55,14,25,1,162);
	H::drawBoxSingleLineWithBG(55,19,25,1,162);
	H::drawBoxSingleLineWithBG(55,24,25,1,162);
	
	H::drawBoxDoubleLineWithBG(90,14,25,1,213);
	H::drawBoxSingleLineWithBG(90,19,25,1,213);
	H::drawBoxSingleLineWithBG(90,24,25,1,213);
	H::drawBoxSingleLineWithBG(120,14,25,1,162);
	H::drawBoxSingleLineWithBG(120,19,25,1,162);
	H::drawBoxSingleLineWithBG(120,24,25,1,162);
	
	//////////////////////////////////////////////////////////////////////////
	//left
	H::VLine(21,10,19,136,255);
	H::VLine(22,10,19,136,255);
	
	//right
	H::VLine(149,10,19,136,255);
	H::VLine(150,10,19,136,255);
	
	//on
	H::HLine(18,12,134,247);
	
	//under
	H::HLine(18,28,134,247);
	
	//In and Under line near middle box
	H::HLine(82,13,6,134,255);
	H::HLine(82,27,6,134,255);
	H::VLine(85,13,13,102,255);
	H::VLine(86,13,13,102,255);
	
	
	//			Design with Ascii Art Like ascii Flower
	H::setcolor(1);H::gotoxy(29,30);cout << R"(                 _)";
	H::setcolor(3);H::gotoxy(29,31);cout << R"(               _(_)_                          wWWWw   _ )";
	H::setcolor(4);H::gotoxy(29,32);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_ )";
	H::setcolor(5);H::gotoxy(29,33);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_) )";
	H::setcolor(6);H::gotoxy(29,34);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\ )";
	H::setcolor(2);H::gotoxy(29,35);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/      | )";
	H::setcolor(2);H::gotoxy(29,36);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \|      \|/ )";
	H::setcolor(2);H::gotoxy(29,37);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
	
	H::setcolor(1);H::gotoxy(88,30);cout << R"(                 _)";
	H::setcolor(3);H::gotoxy(88,31);cout << R"(               _(_)_                          wWWWw )";
	H::setcolor(4);H::gotoxy(88,32);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) )";
	H::setcolor(5);H::gotoxy(88,33);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  )";
	H::setcolor(6);H::gotoxy(88,34);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/ )";
	H::setcolor(2);H::gotoxy(88,35);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/ )";
	H::setcolor(2);H::gotoxy(88,36);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \| )";
	H::setcolor(2);H::gotoxy(88,37);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|// )";

}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void UserDesign::DesignForget()
{
		//on    the Box
		// and left on 
	H::HLine(5,1,160,25,255);
	H::HLine(8,2,10,68,255);
	H::HLine(8,3,10,68,255);
	
		// and right on
	H::HLine(152,2,10,68,255);
	H::HLine(152,3,10,68,255);
	
	// under the box
		// and left under
	H::HLine(5,38,160,25,255);
	H::HLine(8,37,10,68,255);
	H::HLine(8,36,10,68,255);
		// and right under
	H::HLine(152,37,10,68,255);
	H::HLine(152,36,10,68,255);
	
	//    Left The Box
		//left 
	H::VLine(13,3,32,25,255);
	H::VLine(14,3,32,25,255);
	
		//rgiht
	H::VLine(157,3,32,25,255);
	H::VLine(158,3,32,25,255);
	
	
	////		Text Under Line
	
	H::setcolor(7);H::gotoxy(42,2);cout << R"(     ______                      __     ____                                          __ )";
	H::setcolor(7);H::gotoxy(42,3);cout << R"(    / ____/___  _________ ____  / /_   / __ \____ ____________      ______  _________/ / )";
	H::setcolor(7);H::gotoxy(42,4);cout << R"(   / /_  / __ \/ ___/ __ `/ _ \/ __/  / /_/ / __ `/ ___/ ___/ | /| / / __ \/ ___/ __  /  )";
	H::setcolor(7);H::gotoxy(42,5);cout << R"(  / __/ / /_/ / /  / /_/ /  __/ /_   / ____/ /_/ (__  |__  )| |/ |/ / /_/ / /  / /_/ /   )";
	H::setcolor(7);H::gotoxy(42,6);cout << R"( /_/    \____/_/   \__, /\___/\__/  /_/    \__,_/____/____/ |__/|__/\____/_/   \__,_/    )";
	H::setcolor(7);H::gotoxy(42,7);cout << R"(                  /____/                                                                 )";
	

	////		Line Under Text 
	H::HLine(14 ,9,25,34,255);
	H::HLine(43 ,9,25,85,255);
	H::HLine(72 ,9,25,102,255);
	H::HLine(101,9,25,85,255);
	H::HLine(130,9,26,34,255);
	
	///         Big Box under text
	H::drawBoxSingleLineWithBG(43,14,83,13,179);
	
	//			Middle Box of Big Box (For Login with User and Password)
	H::drawBoxDoubleLineWithBG(49,17,30,1,213);
	H::drawBoxSingleLineWithBG(90,17,30,1,162);
	H::drawBoxSingleLineWithBG(49,23,30,1,213);
	H::drawBoxSingleLineWithBG(90,23,30,1,162);
	
	//			Design with Ascii Art Like ascii Flower
	H::setcolor(1);H::gotoxy(29,30);cout << R"(                 _)";
	H::setcolor(3);H::gotoxy(29,31);cout << R"(               _(_)_                          wWWWw   _ )";
	H::setcolor(4);H::gotoxy(29,32);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_ )";
	H::setcolor(5);H::gotoxy(29,33);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_) )";
	H::setcolor(6);H::gotoxy(29,34);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\ )";
	H::setcolor(2);H::gotoxy(29,35);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/      | )";
	H::setcolor(2);H::gotoxy(29,36);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \|      \|/ )";
	H::setcolor(2);H::gotoxy(29,37);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
	
	H::setcolor(1);H::gotoxy(88,30);cout << R"(                 _)";
	H::setcolor(3);H::gotoxy(88,31);cout << R"(               _(_)_                          wWWWw )";
	H::setcolor(4);H::gotoxy(88,32);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) )";
	H::setcolor(5);H::gotoxy(88,33);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y   )";
	H::setcolor(6);H::gotoxy(88,34);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/  )";
	H::setcolor(2);H::gotoxy(88,35);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/  )";
	H::setcolor(2);H::gotoxy(88,36);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \|   )";
	H::setcolor(2);H::gotoxy(88,37);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|// )";
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void UserDesign::DesignForgetSuccess()
{
		//on    the Box
		// and left on 
	H::HLine(5,1,160,25,255);
	H::HLine(8,2,10,68,255);
	H::HLine(8,3,10,68,255);
	
		// and right on
	H::HLine(152,2,10,68,255);
	H::HLine(152,3,10,68,255);
	
	// under the box
		// and left under
	H::HLine(5,38,160,25,255);
	H::HLine(8,37,10,68,255);
	H::HLine(8,36,10,68,255);
		// and right under
	H::HLine(152,37,10,68,255);
	H::HLine(152,36,10,68,255);
	
	//    Left The Box
		//left 
	H::VLine(13,3,32,25,255);
	H::VLine(14,3,32,25,255);
	
		//rgiht
	H::VLine(157,3,32,25,255);
	H::VLine(158,3,32,25,255);
	
	////		Line Under Text 
	H::HLine(14 ,9,25,34,255);
	H::HLine(43 ,9,25,85,255);
	H::HLine(72 ,9,25,102,255);
	H::HLine(101,9,25,85,255);
	H::HLine(130,9,26,34,255);
	
	///         Big Box under text
	H::drawBoxSingleLineWithBG(43,14,83,13,179);
	
	//			Middle Box of Big Box (For Login with User and Password)
	H::drawBoxDoubleLineWithBG(49,17,30,1,213);
	H::drawBoxSingleLineWithBG(90,17,30,1,162);
	H::drawBoxSingleLineWithBG(49,23,30,1,213);
	H::drawBoxSingleLineWithBG(90,23,30,1,162);
	
	//			Design with Ascii Art Like ascii Flower
	H::setcolor(1);H::gotoxy(29,30);cout << R"(                 _)";
	H::setcolor(3);H::gotoxy(29,31);cout << R"(               _(_)_                          wWWWw   _ )";
	H::setcolor(4);H::gotoxy(29,32);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_ )";
	H::setcolor(5);H::gotoxy(29,33);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_) )";
	H::setcolor(6);H::gotoxy(29,34);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\ )";
	H::setcolor(2);H::gotoxy(29,35);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/      | )";
	H::setcolor(2);H::gotoxy(29,36);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \|      \|/ )";
	H::setcolor(2);H::gotoxy(29,37);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
	
	H::setcolor(1);H::gotoxy(88,30);cout << R"(                 _)";
	H::setcolor(2);H::gotoxy(88,31);cout << R"(               _(_)_                          wWWWw )";
	H::setcolor(3);H::gotoxy(88,32);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) )";
	H::setcolor(4);H::gotoxy(88,33);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  )";
	H::setcolor(5);H::gotoxy(88,34);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/ )";
	H::setcolor(2);H::gotoxy(88,35);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/ )";
	H::setcolor(2);H::gotoxy(88,36);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \| )";
	H::setcolor(2);H::gotoxy(88,37);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|// )";	 
	////		Text Under Line
	H::setcursor(0,0);
	int m=1;
	while(true)
	{
		if(m>14)
		{
			m=1;
		}
		
		H::setcolor(m++);H::gotoxy(44,2);cout << R"( __  __ __   __  __ __      ____  ___   ____  ___ _       __ ___  ____  ____ )";
		H::setcolor(m++);H::gotoxy(44,3);cout << R"( \ \/ / __ \/ / / / __ \   / __ \/   | / ___/ ___/ |     / / __ \/ __ \/ __ \ )";
		H::setcolor(m++);H::gotoxy(44,4);cout << R"(  \  / / / / / / / /_/ /  / /_/ / /| | \__ \\__ \| | /| / / / / / /_/ / / / / )";
		H::setcolor(m++);H::gotoxy(44,5);cout << R"(  / / /_/ / /_/ / _, _/  / ____/ ___ |___/ /__/ /| |/ |/ / /_/ / _, _/ /_/ /  )";
		H::setcolor(m++);H::gotoxy(44,6);cout << R"( /_/\____/\____/_/ |_|  /_/   /_/  |_/____/____/ |__/|__/\____/_/ |_/_____/   )";
		H::delay(500);
	}
}

//////////////////////////////////////////////////////////////////////////////
//===================== Data Class =====================//

class UserData : public User {
public:
    void Register();
    bool Login();
    void ForgetPassword();
};
///////////////////////////////////////////////////////////////////////////////////
///				Body Propotype Of Methods in class Data
void UserData::Register() {
	H::setcolor(0);
	H::cls();
	UserDesign::DesignRegister();
    User user;
	
    // ===== Auto-generate ID =====
    int newId = 1000;
    ifstream inFile("Data/UserData.bin", ios::binary);
    if (inFile) {
        User lastUser;
        inFile.seekg(0, ios::end);
        if (inFile.tellg() >= static_cast<std::streamoff>(sizeof(User))) {
            inFile.seekg(-static_cast<std::streamoff>(sizeof(User)), ios::end);
            inFile.read(reinterpret_cast<char*>(&lastUser), sizeof(User));
            newId = lastUser.getId() + 1;
        }
    }
    inFile.close();

    user.setId(newId); // set auto ID
    user.inputUserData();

    ofstream file("Data/UserData.bin", ios::binary | ios::app);
    if (!file) {
        cout << "Error opening file for writing.\n";
        return;
    }
    file.write(reinterpret_cast<char*>(&user), sizeof(User));
    file.close();
	
	H::setcolor(2);
	H::cls();
    cout << "Registration successful!";
	H::delay(1000);
	H::setcolor(2);
	H::cls();
}

bool UserData::Login() {
	H::setcolor(0);
	H::cls();
	UserDesign::DesignLogin();
    char uname[20], pass[30];
    H::setcolor(215);H::gotoxy(54,18);cout << "Enter Username: "; 
    H::setcolor(215);H::gotoxy(54,24);cout << "Enter Password: ";
	
	H::setcolor(228);H::gotoxy(95,18);H::inputLetter(uname,10);
	H::setcolor(228);H::gotoxy(95,24);H::inputPasswordMask(pass,9);
    ifstream file("Data/UserData.bin", ios::binary);
    if (!file) {
        cout << "Fil Not Found\n";
        return false;
    }

    User temp;
    while (file.read(reinterpret_cast<char*>(&temp), sizeof(User)))
	{
        if (strcmp(temp.getUserName(), uname) == 0 &&strcmp(temp.getPassword(), pass) == 0) 
		{
			H::setcursor(0,0);
			////		Text Under Line
			int m=1;
			int x=1;
			while(true)
			{
			
				if(m>14)
				{
					m=1;
				}
				if(x>20)
				{
					H::cls();
					break;
				}
				
				H::setcolor(0);H::gotoxy(25,30);cout << R"(                                                                                                                        )";
				H::setcolor(m++);H::gotoxy(25,31);cout << R"(      wWWWw               wWWWw               wWWWw               wWWWw               wWWWw               wWWWw         )";
				H::setcolor(m++);H::gotoxy(25,32);cout << R"(vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  )";
				H::setcolor(m++);H::gotoxy(25,33);cout << R"((___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  )";
				H::setcolor(m++);H::gotoxy(25,34);cout << R"( ~Y~   \|    ~Y~   (___)    |/    ~Y~   ~Y~   \|    ~Y~   (___)    |/    ~Y~     ~Y~   \|    ~Y~   (___)    |/    ~Y~   )";
				H::setcolor(m++);H::gotoxy(25,35);cout << R"( \|   \ |/   \| /  \~Y~/   \|    \ |/   \|   \ |/   \| /  \~Y~/   \|    \ |/     \|   \ |/   \| /  \~Y~/   \|    \ |/   )";
				H::setcolor(m++);H::gotoxy(25,36);cout << R"(\\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// )";
				H::setcolor(m++);H::gotoxy(25,37);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ )";
				x++;
				H::delay(300);
			
				// if (_kbhit()) {       
				// 		char key = _getch();
				// 		if (key == 27) {  
				// 			H::cls();
				// 			break;       
				// 	H::cls(); 
				// 		} 

				// if (key == 13) {  
				// 			H::cls();
				// 			// designUpdate();    
				// 	H::cls(); 
				// 	break;
				// 		} 
				// 	}
				
			}
			H::setcolor(0);
			H::delay(1000);
			H::cls();
			UserDesign::DesignMenu();
			H::setcolor(0);
			getch();
            file.close();
            return true;
        }
    }

	H::drawBoxSingleLineWithBG(43,14,83,13,179);
    H::setcolor(228);H::gotoxy(95,24);cout << "Invalid username or password.\n";
    file.close();
    return false;
}

void UserData::ForgetPassword() {
    char uname[20], phone[20];
    H::setcolor(215);H::gotoxy(54,18);cout << "Enter Username: "; 
    H::setcolor(215);H::gotoxy(54,24);cout << "Enter Phone Number: ";
	
	H::setcolor(167);H::gotoxy(95,18);cin >> uname;
	H::setcolor(167);H::gotoxy(95,24);cin >> phone;

    ifstream file("Data/UserData.bin", ios::binary);
    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    User temp;
    while (file.read(reinterpret_cast<char*>(&temp), sizeof(User))) {
        if (strcmp(temp.getUserName(), uname) == 0 &&
            strcmp(temp.getPhoneNumber(), phone) == 0) {
            cout << "Your password is: " << temp.getPassword() << "\n";
            file.close();
            return;
        }
    }

    cout << "User not found or phone number mismatch.\n";
	H::delay(1000);
	H::setcolor(2);
	H::cls();
    file.close();
}


////////////////////////////////////////////////////////////////////////////////
//void UserDesign::TestArr()
//{
//	char op;
//  int x=0;
//  do{
//      
//    //Write option to box
//    H::setcolor(215);H::gotoxy(40 ,1 );cout<<"[1]. INSERT";
//    H::setcolor(167);H::gotoxy(79 ,4 );cout<<"[2]. DISPLAY";
//    H::setcolor(143);H::gotoxy(118,1 );cout<<"[3]. SEARCH";
//    H::setcolor(199);H::gotoxy(147,9 );cout<<"[4]. UPDATE";
//    H::setcolor(151);H::gotoxy(141,17);cout<<"[5]. DELETE";
//    H::setcolor(151);H::gotoxy(20 ,17);cout<<"[6]. SORT";
//    H::setcolor(199);H::gotoxy(8  ,9 );cout<<"[7]. SHOW INVOICES";
//    H::setcolor(215);H::gotoxy(41 ,25);cout<<"[8]. IMPORT";
//    H::setcolor(143);H::gotoxy(117,25);cout<<"[9]. BUY FLOWER";
//    H::setcolor(167);H::gotoxy(80 ,29);cout<<"[10]. BACK";
//    if(x==1){
//      H::drawBoxDoubleLineWithBG(35,0,23,1,230);
//      H::setcolor(224);H::gotoxy(41,1);cout<<"[1]. INSERT";
////      Flower1();
//    }
//    if(x==2){
//      H::drawBoxDoubleLineWithBG(74,3,23,1,230);
//      H::setcolor(224);H::gotoxy(79,4);cout<<"[2]. DISPLAY";
////      Flower2();
//    }
//    if(x==3){
//      H::drawBoxDoubleLineWithBG(113,0,23,1,230);
//      H::setcolor(224);H::gotoxy(118,1);cout<<"[3]. SEARCH";
////      Flower3();
//    }
//    if(x==4){
//      H::drawBoxDoubleLineWithBG(142,8,23,1,230);
//      H::setcolor(224);H::gotoxy(10,9);cout<<"[4]. UPDATE";
////      Flower4();
//    }
//    if(x==5){
//      H::drawBoxDoubleLineWithBG(135,16,23,1,230);
//      H::setcolor(224);H::gotoxy(141,17);cout<<"[5]. DELETE";
////      Flower5();
//    }
//    if(x==6){
//      H::drawBoxDoubleLineWithBG(14,16,23,1,230);
//      H::setcolor(224);H::gotoxy(20,17);cout<<"[6]. SORT";
////      Flower6();
//    }
//    if(x==7){
//      H::drawBoxDoubleLineWithBG(5,8,23,1,230);
//      H::setcolor(224);H::gotoxy(145,9);cout<<"[7]. SHOW INVOICES";
////      Flower7();  
//    }
//    if(x==8){
//      H::drawBoxDoubleLineWithBG(14,16,23,1,230);
//      H::setcolor(224);H::gotoxy(41,25);cout<<"[8]. IMPORT";
////      Flower8();
//    }
//    if(x==9){
//      H::drawBoxDoubleLineWithBG(113,24,23,1,230);
//      H::setcolor(224);H::gotoxy(117,25);cout<<"[9]. BUY FLOWER";
////      Flower9();
//    }
//    if(x==10){
//      H::drawBoxDoubleLineWithBG(74,28,23,1,230);
//      H::setcolor(224);H::gotoxy(80,29);cout<<"[10]. BACK";
//    }
//    op=getch();
//    switch(op){
//      case 75:{//LEFT
//        x--;
//        if(x<0){
//          x=9;
//        }
//        break;
//      }
//      case 77:{//RIGHT
//        x++;
//        if(x>9){
//          x=0;
//        }
//        break;
//      }
//    }
//  }while(op!=13);
//  H::cls();

//}
///////////////////////////////////////////////////////////////////////////////////
//void saveUserToFile(const User& user) {
//    ofstream fout("Data/UserData.bin", ios::binary | ios::app);
//    if (fout.is_open()) {
//        fout.write((char*)&user, sizeof(User));
//        fout.close();
//    }
//}
//
//void loadUsersFromFile(vector<User>& users) {
//    ifstream fin("Data/UserData.bin", ios::binary);
//    if (fin.is_open()) {
//        User temp;
//        while (fin.read((char*)&temp, sizeof(User))) {
//            users.push_back(temp);
//        }
//        fin.close();
//    }
//}
//
//int main()
//{
//    // Prepare Console GUI
//    H::DisableButtonClose();
//    H::DisableScreenResize();
//    H::setFixedScreenConsole(170,40);
//    H::setFont(18,700);
//
//    vector<User> users;
//    loadUsersFromFile(users);
//
//    int option;
//    do {
//        cout<<"\n1. Register";
//        cout<<"\n2. Login";
//        cout<<"\n3. Forget Password";
//        cout<<"\n4. Show All Users";
//        cout<<"\n5. Exit Program\n";
//        cout<<"Choose: ";
//        cin>>option;
//        cin.ignore(); // to handle enter key
//
//        switch(option) {
//            case 1: {
//                User user;
//                Util::createUser(user);
//                if (Util::UserRegister(users, user)) {
//                    cout<<"You already have an account!\n";
//                } else {
//                    users.push_back(user);
//                    saveUserToFile(user);
//                    cout<<"Account created successfully.\n";
//                }
//                break;
//            }
//            case 2: {
//                char username[20];
//                char password[20];
//                cout<<"Enter username: ";
//                H::inputLetter(username, 10);
//                cout<<"Enter password: ";
//                H::inputPasswordMask(password, 10);
//
//                bool status = Util::login(users, username, password);
//                if (status)
//                    cout<<"Welcome to the system!\n";
//                else
//                    cout<<"Please register first.\n";
//                break;
//            }
//            case 3: {
//                char phoneNumber[20];
//                char username[20];
//                cout<<"Enter phone number: ";
//                H::input4Tel(phoneNumber, 11);
//                cout<<"Enter username: ";
//                H::inputAll(username, 10);
//                Util::recoverPassword(users, username, phoneNumber);
//                break;
//            }
//            case 4: {
//                for (User& user : users)
//                    user.showUserData();
//                break;
//            }
//            default:
//                if(option != 5)
//                    cout<<"Invalid input!\n";
//        }
//
//    } while(option != 5);
//
//    getch();
//    return 0;
//}
void TesttingUser()
{
	UserData user;
    int choice;
	X:
    do {
    	H::cls();
    	H::setcolor(2);
    
        cout << "\n1. Register\n2. Login\n3. Forget Password\n4. Back\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: user.Register(); break;
            case 2: user.Login(); break;
            case 3: user.ForgetPassword(); break;
            case 4: break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}

#endif  