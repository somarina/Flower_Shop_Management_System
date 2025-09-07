#ifndef ___INC_USER_DESIGN_H__
#define ___INC_USER_DESIGN_H__

#include "../ANTHeader/ANTHinsyOOP"
// #include "../Admin/product.h"
using namespace ANTHinsyOOP;
//////////////////////////////////////////////////////////////////////////////
void DesignUserFeature();
void DesignUserMenu();
void NewFlowerEdit2();
void DesignUserFeedback();

////////////////////////////////////////////////////////////////////////////

void DesignUserFeedback(){


	//animation top left
	H::HLine(0,0,85,24,255);
	
	//animation top left
	H::HLine(85,0,85,24,255);
	
	//animation bottom left
	H::HLine(0,39,85,24,255);
	
	//animation bottom right
	H::HLine(85,39,85,24,255);
	
	//border left
	H::VLine(1,0,39,24,255);
	H::VLine(2,0,39,24,255);
	
	//border right
	H::VLine(169,0,39,24,255);
	H::VLine(170,0,39,24,255);
	
	//////////////////////////////////////
    H::VLine(50,0,2,68,219);
    H::VLine(52,0,2,68,219);

    H::VLine(125,0,2,68,219);
    H::VLine(127,0,2,68,219);
    
    H::HLine(45,2,91,6,223);
    H::HLine(43,3,91,5,223);
    H::HLine(41,4,91,4,223);
    H::HLine(39,5,91,3,223);
    H::HLine(37,6,91,2,223);
    H::HLine(35,7,91,1,220);
	//////////////////////////////////////
	
	H::setcolor(1);H::gotoxy(57,3);cout<<R"(  _   _ ___ ___ ___    ___ ___ ___ ___  ___   _   ___ _  __)";  
	H::setcolor(2);H::gotoxy(57,4);cout<<R"( | | | / __| __| _ \  | __| __| __|   \| _ ) /_\ / __| |/ /)";  
	H::setcolor(3);H::gotoxy(57,5);cout<<R"( | |_| \__ \ _||   /  | _|| _|| _|| |) | _ \/ _ \ (__| ' < )";  
	H::setcolor(4);H::gotoxy(57,6);cout<<R"(  \___/|___/___|_|_\  |_| |___|___|___/|___/_/ \_\___|_|\_\)";  
                                                           	
	
	
	//sky
	H::setcolor(1);H::gotoxy(13,1);cout<<R"(     .-.    )";                                
	H::setcolor(1);H::gotoxy(13,2);cout<<R"(  .-(   )-.  )";                           
	H::setcolor(1);H::gotoxy(13,3);cout<<R"( (     __) )-. )";                      
	H::setcolor(1);H::gotoxy(13,4);cout<<R"(  `-(       __) )";                     
	H::setcolor(1);H::gotoxy(13,5);cout<<R"(    `(____)-',  )";                      
	H::setcolor(6);H::gotoxy(13,6);cout<<R"(  - -  :   :  - -)";
	H::setcolor(6);H::gotoxy(13,7);cout<<R"(      / `-' \)";
	H::setcolor(6);H::gotoxy(13,8);cout<<R"(    ,    |   .)";
	H::setcolor(6);H::gotoxy(13,9);cout<<R"(         .    )"; 	
	//star
	
	H::setcolor(6);H::gotoxy(142,1);cout<<R"(      ,)"; 
	H::setcolor(6);H::gotoxy(142,2);cout<<R"(   \  :  /)"; 
	H::setcolor(1);H::gotoxy(142,3);cout<<R"(`. __/ \__ .')"; 
	H::setcolor(1);H::gotoxy(142,4);cout<<R"(_ _\     /_ _)"; 
	H::setcolor(2);H::gotoxy(142,5);cout<<R"(   /_   _\)"; 
	H::setcolor(2);H::gotoxy(142,6);cout<<R"( .'  \ /  `.)"; 
	H::setcolor(3);H::gotoxy(142,7);cout<<R"(   /  :  \   )";  
	H::setcolor(3);H::gotoxy(142,8);cout<<R"(      ')"; 
	
	//BOX FOR BODY

	H::drawBoxSingleLineWithBG(30,10,110,4,136);
	H::setcolor(135);H::gotoxy(35,11);cout<<"USER ID             : ";
	H::setcolor(135);H::gotoxy(35,12);cout<<"USER NAME           : ";
	H::setcolor(135);H::gotoxy(35,13);cout<<"USER PHONE NUMBER   : ";
	H::setcolor(135);H::gotoxy(98,11);cout<<"FEEDBACK   : ";
	H::setcolor(135);H::gotoxy(98,12);cout<<"DATE       : ";
	H::drawBoxSingleLineWithBG(30,15,110,12,196);
	

	
	H::setcolor(7);H::gotoxy(47,30);cout<<"USE ARROW KEY [LEFT] OR [RIGHT] FOR SEE NEXT PAGE, AND PRESS [ESC] FOR BACK ";  
	H::setcolor(2);H::gotoxy(61,30);cout<<"[LEFT]";
	H::setcolor(4);H::gotoxy(71,30);cout<<"[RIGHT]";
	H::setcolor(6);H::gotoxy(87,30);cout<<"NEXT PAGE";
	H::setcolor(3);H::gotoxy(108,30);cout<<"[ESC]";
	
	NewFlowerEdit2(); 

	
//////////////////////////////////////
}
void NewFlowerEdit2()
{
    
//////////////////////////////////////////////////////////////////////////////

    H::gotoxy(24,30);H::setcolor(1);cout << R"(                    _)";
    H::gotoxy(24,31);H::setcolor(2);cout << R"(                  _(_)_                          wWWWw   _ )";
    H::gotoxy(24,32);H::setcolor(2);cout << R"(      @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_ )";
    H::gotoxy(24,33);H::setcolor(2);cout << R"(     @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_) )";
    H::gotoxy(24,34);H::setcolor(2);cout << R"(      @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\ )";
    H::gotoxy(24,35);H::setcolor(2);cout << R"(       /      Y       \|    \|/    /(_)    \|      |/      | )";
    H::gotoxy(24,36);H::setcolor(2);cout << R"(    \ |     \ |/       | / \ | /  \|/       |/    \|      \|/ )";
    H::gotoxy(24,37);H::setcolor(2);cout << R"(    \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
    H::gotoxy(24,38);H::setcolor(2);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ )";

    H::gotoxy(85,31);H::setcolor(2);cout << R"(               _(_)_                          wWWWw   _)";
    H::gotoxy(85,32);H::setcolor(2);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_)";
    H::gotoxy(85,33);H::setcolor(2);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_))";
    H::gotoxy(85,34);H::setcolor(2);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\)";
    H::gotoxy(85,35);H::setcolor(2);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/      |)";
    H::gotoxy(85,36);H::setcolor(2);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \|      \|/)";
    H::gotoxy(85,37);H::setcolor(2);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|//)";
    H::gotoxy(85,38);H::setcolor(2);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
/////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(24,32);H::setcolor(4);cout << R"(      @@@@  )";
    H::gotoxy(24,33);H::setcolor(4);cout << R"(     @@()@@ )";
    H::gotoxy(24,34);H::setcolor(4);cout << R"(      @@@@  )";

    H::gotoxy(85,32);H::setcolor(4);cout << R"(   @@@@  )";
    H::gotoxy(85,33);H::setcolor(4);cout << R"(  @@()@@ )";
    H::gotoxy(85,34);H::setcolor(4);cout << R"(   @@@@  )";
/////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(36,33);H::setcolor(5);cout << R"(wWWWw )";
    H::gotoxy(36,34);H::setcolor(5);cout << R"((___) )";

    H::gotoxy(94,33);H::setcolor(5);cout << R"(wWWWw)";
    H::gotoxy(94,34);H::setcolor(5);cout << R"((___))"; 

///////////////////////////////////////////////////////////////////////////////////////////////////////

//    H::gotoxy(99,30);H::setcolor(1);cout << R"(   _  )";
    H::gotoxy(99,31);H::setcolor(1);cout << R"( _(_)_)";
    H::gotoxy(99,32);H::setcolor(1);cout << R"((_)@(_))";
    H::gotoxy(99,33);H::setcolor(1);cout << R"(  (_)\ )";
    H::gotoxy(104,33);H::setcolor(2);cout<< R"(\)";

//    H::gotoxy(41,30);H::setcolor(1);cout << R"(   _)";
    H::gotoxy(41,31);H::setcolor(1);cout << R"( _(_)_)";
    H::gotoxy(41,32);H::setcolor(1);cout << R"((_)@(_))";
    H::gotoxy(41,33);H::setcolor(1);cout << R"(  (_)\)"; 
    H::gotoxy(46,33);H::setcolor(2);cout << R"(\)";
////////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(51,32);H::setcolor(1);cout << R"(vVVVv)";
    H::gotoxy(51,33);H::setcolor(1);cout << R"((___))";

    H::gotoxy(109,32);H::setcolor(1);cout << R"(vVVVv)";
    H::gotoxy(109,33);H::setcolor(1);cout << R"((___))";

////////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(57,32);H::setcolor(6);cout << R"(    _)";
    H::gotoxy(57,33);H::setcolor(6);cout << R"(  _(_)_)";
    H::gotoxy(57,34);H::setcolor(6);cout << R"( (_)@(_))";
    H::gotoxy(57,35);H::setcolor(6);cout << R"(  /(_))";
    H::gotoxy(58,35);H::setcolor(2);cout << R"( /)";

    H::gotoxy(116,32);H::setcolor(6);cout << R"(   _)";
    H::gotoxy(116,33);H::setcolor(6);cout << R"( _(_)_)";
    H::gotoxy(116,34);H::setcolor(6);cout << R"((_)@(_))";
    H::gotoxy(116,35);H::setcolor(6);cout << R"( /(_))";
    H::gotoxy(117,35);H::setcolor(2);cout << R"(/)";
    
//////////////////////////////////////////////////////////////////////////////////////////////////////

    H::gotoxy(66,32);H::setcolor(5);cout << R"( @@@@)";
    H::gotoxy(66,33);H::setcolor(5);cout << R"(@@()@@)";
    H::gotoxy(66,34);H::setcolor(5);cout << R"( @@@@)";

    H::gotoxy(124,32);H::setcolor(5);cout << R"( @@@@)";
    H::gotoxy(124,33);H::setcolor(5);cout << R"(@@()@@)";
    H::gotoxy(124,34);H::setcolor(5);cout << R"( @@@@)";

/////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(73,31);H::setcolor(5);cout << R"(wWWWw)";
    H::gotoxy(73,32);H::setcolor(5);cout << R"((___))";

    H::gotoxy(131,31);H::setcolor(5);cout << R"(wWWWw)";
    H::gotoxy(131,32);H::setcolor(5);cout << R"((___))";
/////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(78,31);H::setcolor(4);cout << R"(   _ )";
    H::gotoxy(78,32);H::setcolor(4);cout << R"( _(_)_ )";
    H::gotoxy(78,33);H::setcolor(4);cout << R"((_)@(_) )";
    H::gotoxy(78,34);H::setcolor(4);cout << R"(  (_)\ )";
    H::gotoxy(83,34);H::setcolor(2);cout << R"(\)";

    H::gotoxy(136,31);H::setcolor(4);cout << R"(   _)";
    H::gotoxy(136,32);H::setcolor(4);cout << R"( _(_)_)";
    H::gotoxy(136,33);H::setcolor(4);cout << R"((_)@(_))";
    H::gotoxy(136,34);H::setcolor(4);cout << R"(  (_)\)";
    H::gotoxy(141,34);H::setcolor(2);cout << R"(\)";
//              Treee
	H::setcolor(1);H::gotoxy(6,27);cout<<R"(        a@@@@a    )";         
	H::setcolor(2);H::gotoxy(6,28);cout<<R"(    a@@@@@@@@@@@@a )";        
	H::setcolor(3);H::gotoxy(6,29);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
	H::setcolor(4);H::gotoxy(6,30);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
	H::setcolor(5);H::gotoxy(6,31);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
	H::setcolor(6);H::gotoxy(6,32);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
	H::setcolor(8);H::gotoxy(6,33);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(6,34);cout<<R"(          ||   )";      
	H::setcolor(8);H::gotoxy(6,35);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(6,36);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(6,37);cout<<R"(         /MM\)";
	H::setcolor(2);H::gotoxy(6,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
////////////////////////////////////////////////////////////////////////////////////////////////

    H::setcolor(1);H::gotoxy(143,27);cout<<R"(        a@@@@a    )";         
	H::setcolor(2);H::gotoxy(143,28);cout<<R"(    a@@@@@@@@@@@@a )";        
	H::setcolor(3);H::gotoxy(143,29);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
	H::setcolor(4);H::gotoxy(143,30);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
	H::setcolor(5);H::gotoxy(143,31);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
	H::setcolor(6);H::gotoxy(143,32);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
	H::setcolor(8);H::gotoxy(143,33);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(143,34);cout<<R"(          ||   )";      
	H::setcolor(8);H::gotoxy(143,35);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(143,36);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(143,37);cout<<R"(         /MM\)";
	H::setcolor(2);H::gotoxy(143,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^)";


}
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