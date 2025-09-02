#ifndef ___INC_USER_DESIGN_H__
#define ___INC_USER_DESIGN_H__

#include "../ANTHeader/ANTHinsyOOP"
using namespace ANTHinsyOOP;
//////////////////////////////////////////////////////////////////////////////
void DesignUserFeature();
void DesignUserMenu();
//////////////////////////////////////////////////////////////////////////////
class UserDesign{
    public:
		static void DesignLogin();
		static void DesignRegister();
		static void DesignForget();	
		static void DesignForgetSuccess();
		static void DesignLoading();
        static void DesignSearch();
};
///////////////////////////////////////////////////////////////////////////////
///     Body Propotype Of class UserDesign
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

	// H::setcolor();H::gotoxy(30,);cout << "Enter Username: ";H::inputLetter(username,10);
    // cout << "Enter Gender: ";H::inputLetter(gender,7);
    // cout << "Enter Phone Number: ";H::inputUNumber(phoneNumber,11);
    // cout << "Enter Email: "; H::inputEmail(email,20);
    // cout << "Enter Password: ";H::inputAll(password,10);

    // H::inputLetter(username,10);
    // H::inputLetter(gender,7);
    // H::inputUNumber(phoneNumber,11);
    // H::inputEmail(email,20);
    // H::inputAll(password,10);

	
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
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
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
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
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
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
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
void DesignUserFeature()
{
	
}
/////////////////////////////////////////////////////////////////////////////

#endif