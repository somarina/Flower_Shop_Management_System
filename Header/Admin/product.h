/*        Noted For this Header File

      This header file [product.h] use for store
        - class product that have inheritance from class Data in 
          header file data.h
        - use for take setter and getter from class Data
        - this clas have simple methods like CRUD funtion 
A
*/

#ifndef ___INC_PRODUCT_H___
#define ___INC_PRODUCT_H___

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "productData.h"
#include "ProductDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// void test();
// void LoginAsAdmin();
void NewFlowerEdit();
/////////////////////////////////////////////////////////////////
void DesignImportFlowerData(){
	Design::BoxOfHeader();
	H::setcolor(1);H::gotoxy(35,6);cout<<R"(   ______   ____ _      _________     ______  ______  ____  ___  ______   ______________  _______ __)";
	H::setcolor(2);H::gotoxy(35,7);cout<<R"(  / __/ /  / __ \ | /| / / __/ _ \   /  _/  |/  / _ \/ __ \/ _ \/_  __/  / __/_  __/ __ \/ ___/ //_/)";
	H::setcolor(3);H::gotoxy(35,8);cout<<R"( / _// /__/ /_/ / |/ |/ / _// , _/  _/ // /|_/ / ___/ /_/ / , _/ / /    _\ \  / / / /_/ / /__/ ,< )";  
	H::setcolor(4);H::gotoxy(35,9);cout<<R"(/_/ /____/\____/|__/|__/___/_/|_|  /___/_/  /_/_/   \____/_/|_| /_/    /___/ /_/  \____/\___/_/|_| )"; 
	
	H::setcolor(1);H::gotoxy(10,3);cout<<R"(     .-.    )";                                
	H::setcolor(1);H::gotoxy(10,4);cout<<R"(  .-(   )-.  )";                           
	H::setcolor(1);H::gotoxy(10,5);cout<<R"( (     __) )-. )";                      
	H::setcolor(1);H::gotoxy(10,6);cout<<R"(  `-(       __) )";                     
	H::setcolor(1);H::gotoxy(10,7);cout<<R"(    `(____)-',  )";                      
	H::setcolor(4);H::gotoxy(10,8);cout<<R"(  - -  :   :  - -)";
	H::setcolor(4);H::gotoxy(10,9);cout<<R"(      / `-' \)";
	H::setcolor(4);H::gotoxy(10,10);cout<<R"(    ,    |   .)";
	H::setcolor(4);H::gotoxy(10,11);cout<<R"(         .    )"; 	
	
	H::setcolor(6);H::gotoxy(143,4);cout<<R"(        .)";
	H::setcolor(2);H::gotoxy(143,5);cout<<R"(      \ | /)";
	H::setcolor(6);H::gotoxy(143,6);cout<<R"(    '-.;;;.-')";
	H::setcolor(2);H::gotoxy(143,7);cout<<R"(   -==;;;;;==-)";
	H::setcolor(6);H::gotoxy(143,8);cout<<R"(    .-';;;'-.)";
	H::setcolor(2);H::gotoxy(143,9);cout<<R"(      / | \)";
	H::setcolor(6);H::gotoxy(143,10);cout<<R"(        ')";
	//HLine VLine
	//near box left 
	H::VLine(13,16,13,70,233);
	H::VLine(14,16,13,70,233);
	//near box right
	H::VLine(157,16,13,70,233);
	H::VLine(158,16,13,70,233);
	
	H::VLine(20,14,18,4,219);
	H::VLine(151,14,18,4,219);
	
	H::HLine(20,16,130,7,220);
	H::HLine(20,18,130,7,220);
	H::HLine(20,20,130,7,220);
	H::HLine(20,22,130,7,220);
	H::HLine(20,24,130,7,220);
	H::HLine(20,26,130,7,220);
	H::HLine(20,28,130,7,220);
	H::HLine(20,30,130,7,220);
	//box for input 1-3
	H::drawBoxSingleLineWithBG(40,18,30,3,153);
	H::drawBoxSingleLineWithBG(100,18,30,3,153);
	H::drawBoxSingleLineWithBG(60,24,48,3,153);
	
////// Import already and then show presss//////////////////////////////////////////////////////////////////////////
	H::setcolor(7);H::gotoxy(67,30);cout<<"PRESS         FOR ";
	H::setcolor(2);H::gotoxy(73,30);cout<<"[ENTER]";
	H::setcolor(1);H::gotoxy(85,30);cout<<"IMPORT MORE";
	H::setcolor(7);H::gotoxy(74,31);cout<<"PRESS       FOR ";
	H::setcolor(3);H::gotoxy(80,31);cout<<"[ESC]";
	H::setcolor(6);H::gotoxy(86,31);cout<<"FOR Invoice";
//////////////////////////////////////////////////////////////////////////////////////////////////////////	
    Design::FlowerChoice(); 
}
void DesignBuyingFlower(){

	//HLINE UP	
	H::HLine(1,0,168,162,220);
	H::HLine(3,1,5,187,220); 
	H::HLine(162,1,5,187,220);
	//VLINE left	
	H::VLine(6,1,36,221,219); 
	//H:INE Down
	H::HLine(1,39,168,162,220);
	H::HLine(3,38,5,187,220);
	H::HLine(162,38,5,187,220);
	//VLINE right
	H::VLine(165,1,36,221,219); 
	
	//HLine Vline header
	//left
	H::HLine(12,3,30,3,223);
	H::HLine(12,5,20,3,223);
	H::HLine(20,7,22,3,223);
	H::HLine(12,9,30,3,223);
	
	//right
	H::HLine(128,3,30,3,223);
	H::HLine(128,5,20,3,223);
	H::HLine(136,7,22,3,223);
	H::HLine(128,9,30,3,223);
	
	
/////////////////////////////////////////////Make anime/////////////////////////////////////////////////////////////////
	//between
	H::VLine(48,4,3,6,219);
	H::HLine(48,5,74,8,220);
	H::HLine(48,7,74,8,223);
	H::VLine(122,4,3,6,219);
	
	H::VLine(50,3,5,1,219);
	H::VLine(52,2,7,2,219);
	H::VLine(54,1,9,4,219);
	H::VLine(56,1,9,7,219);
	H::VLine(58,1,9,7,219);
	H::VLine(60,1,9,7,219);
	H::VLine(62,1,9,7,219);
	H::VLine(64,1,9,7,219);
	H::VLine(66,1,9,7,219);
	H::VLine(68,1,9,7,219);
	H::VLine(70,1,9,7,219);
	H::VLine(72,1,9,7,219);
	H::VLine(74,1,9,7,219);
	H::VLine(76,1,9,7,219);
	H::VLine(78,1,9,7,219);
	H::VLine(80,1,9,7,219);
	H::VLine(82,1,9,7,219);
	H::VLine(84,1,9,7,219);
	H::VLine(86,1,9,7,219);
	H::VLine(88,1,9,7,219);
	H::VLine(90,1,9,7,219);
	H::VLine(92,1,9,7,219);
	H::VLine(94,1,9,7,219);
	H::VLine(96,1,9,7,219);
	H::VLine(98,1,9,7,219);
	H::VLine(100,1,9,7,219);
	H::VLine(102,1,9,7,219);
	H::VLine(104,1,9,7,219);
	H::VLine(106,1,9,7,219);
	H::VLine(108,1,9,7,219);
	H::VLine(110,1,9,7,219);
	H::VLine(112,1,9,7,219);
	H::VLine(114,1,9,7,219);
	H::VLine(116,1,9,7,219);
	H::VLine(120,3,5,7,219);
	H::VLine(118,2,7,7,219);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	H::setcolor(1);  H::gotoxy(48,4);cout << R"(   ___  __  ____  _______  _______  ______   ____ _      _________  ____ )"; 
	H::setcolor(2);  H::gotoxy(48,5);cout << R"(  / _ )/ / / /\ \/ /  _/ |/ / ___/ / __/ /  / __ \ | /| / / __/ _ \/ __/ )"; 
	H::setcolor(3);  H::gotoxy(48,6);cout << R"( / _  / /_/ /  \  // //    / (_ / / _// /__/ /_/ / |/ |/ / _// , _/\ \   )"; 
	H::setcolor(4);  H::gotoxy(48,7);cout << R"(/____/\____/   /_/___/_/|_/\___/ /_/ /____/\____/|__/|__/___/_/|_/___/   )"; 
                                                                        
    H::HLine(30,13,110,4,223);
    H::HLine(35,15,100,4,223);
    H::HLine(30,29,110,4,223);
    H::HLine(35,27,100,4,223);
    
    //Box
    H::drawBoxSingleLineWithBG(49,16,35,3,6);
    H::drawBoxSingleLineWithBG(86,16,35,3,6);
    H::drawBoxSingleLineWithBG(49,21,35,3,6);
    H::drawBoxSingleLineWithBG(86,21,35,3,6);

 
	system("chcp 65001 > nul");             
	H::setcolor(1);  H::gotoxy(31,15);cout << R"(╔═╗)"; 
	H::setcolor(1);  H::gotoxy(31,16);cout << R"(╠╣ )"; 
	H::setcolor(1);  H::gotoxy(31,17);cout << R"(╚  )"; 
	H::setcolor(2);  H::gotoxy(31,18);cout << R"(╔═╗)"; 
	H::setcolor(2);  H::gotoxy(31,19);cout << R"(╚═╗)"; 
	H::setcolor(2);  H::gotoxy(31,20);cout << R"(╚═╝)"; 
	H::setcolor(3);  H::gotoxy(31,21);cout << R"(╔╦╗)"; 
	H::setcolor(3);  H::gotoxy(31,22);cout << R"(║║║)"; 
	H::setcolor(3);  H::gotoxy(31,23);cout << R"(╩ ╩)"; 
	H::setcolor(5);  H::gotoxy(31,24);cout << R"(╔═╗)"; 
	H::setcolor(5);  H::gotoxy(31,25);cout << R"(╚═╗)"; 
	H::setcolor(5);  H::gotoxy(31,26);cout << R"(╚═╝ )";    
	system("chcp 437 > nul");  
	
	system("chcp 65001 > nul");             
	H::setcolor(1);  H::gotoxy(136,15);cout << R"(╔═╗)"; 
	H::setcolor(1);  H::gotoxy(136,16);cout << R"(╠╣ )"; 
	H::setcolor(1);  H::gotoxy(136,17);cout << R"(╚  )"; 
	H::setcolor(2);  H::gotoxy(136,18);cout << R"(╔═╗)"; 
	H::setcolor(2);  H::gotoxy(136,19);cout << R"(╚═╗)"; 
	H::setcolor(2);  H::gotoxy(136,20);cout << R"(╚═╝)"; 
	H::setcolor(3);  H::gotoxy(136,21);cout << R"(╔╦╗)"; 
	H::setcolor(3);  H::gotoxy(136,22);cout << R"(║║║)"; 
	H::setcolor(3);  H::gotoxy(136,23);cout << R"(╩ ╩)"; 
	H::setcolor(5);  H::gotoxy(136,24);cout << R"(╔═╗)"; 
	H::setcolor(5);  H::gotoxy(136,25);cout << R"(╚═╗)"; 
	H::setcolor(5);  H::gotoxy(136,26);cout << R"(╚═╝ )";    
	system("chcp 437 > nul");  
	  
	
	
	H::setcolor(2);H::gotoxy(7,27);cout<<R"(        a@@@@a    )";         
	H::setcolor(2);H::gotoxy(7,28);cout<<R"(    a@@@@@@@@@@@@a )";        
	H::setcolor(2);H::gotoxy(7,29);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
	H::setcolor(2);H::gotoxy(7,30);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
	H::setcolor(2);H::gotoxy(7,31);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
	H::setcolor(2);H::gotoxy(7,32);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
	H::setcolor(8);H::gotoxy(7,33);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(7,34);cout<<R"(          ||   )";      
	H::setcolor(8);H::gotoxy(7,35);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(7,36);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(7,37);cout<<R"(         /MM\)";
	H::setcolor(2);H::gotoxy(7,38);cout<<R"( ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
	
	H::setcolor(4);H::gotoxy(28,30);cout<<R"(                  _)";
	H::setcolor(6);H::gotoxy(28,31);cout<<R"(                _(_)_                          wWWWw   _)";
	H::setcolor(3);H::gotoxy(28,32);cout<<R"(    @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_)";
	H::setcolor(1);H::gotoxy(28,33);cout<<R"(   @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_))";
	H::setcolor(5);H::gotoxy(28,34);cout<<R"(    @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\)";
	H::setcolor(2);H::gotoxy(28,35);cout<<R"(     /      Y       \|    \|/    /(_)    \|      |/      |)";
	H::setcolor(2);H::gotoxy(28,36);cout<<R"(  \ |     \ |/       | / \ | /  \|/       |/    \|      \|/)";
	H::setcolor(2);H::gotoxy(28,37);cout<<R"(  \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
	H::setcolor(2);H::gotoxy(28,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	)";
	
	
	H::setcolor(6);H::gotoxy(87,30);cout<<R"(                    _)";
	H::setcolor(5);H::gotoxy(87,31);cout<<R"(                  _(_)_             )";
	H::setcolor(4);H::gotoxy(87,32);cout<<R"(    @@@@         (_)@(_) vVVVv )";
	H::setcolor(3);H::gotoxy(87,33);cout<<R"(   @@()@@ wWWWw    (_)   (___)  )";
	H::setcolor(6);H::gotoxy(87,34);cout<<R"(    @@@@  (___)     `|/    Y   )";
	H::setcolor(2);H::gotoxy(87,35);cout<<R"(     /      Y       \|    \|/   )";
	H::setcolor(2);H::gotoxy(87,36);cout<<R"(  \ |     \ |/       | / \ | /  )";
	H::setcolor(2);H::gotoxy(87,37);cout<<R"(  \\|//   \\|///  \\\|//\\\|///)";
	H::setcolor(2);H::gotoxy(87,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
	
	H::setcolor(1);H::gotoxy(117,32);cout<<R"(	      wWWWw               )";
	H::setcolor(3);H::gotoxy(117,33);cout<<R"(   vVVVv (___) wWWWw        )";
	H::setcolor(5);H::gotoxy(117,34);cout<<R"(   (___)  ~Y~  (___)    )";
	H::setcolor(2);H::gotoxy(117,35);cout<<R"(    ~Y~   \|    ~Y~   )";
	H::setcolor(2);H::gotoxy(117,36);cout<<R"(    \|   \ |/   \| / )";
	H::setcolor(2);H::gotoxy(117,37);cout<<R"(   \\|// \\|// \\|/// )";
	H::setcolor(2);H::gotoxy(117,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)"; 
	
	H::setcolor(2);H::gotoxy(141,27);cout<<R"(        a@@@@a    )";         
	H::setcolor(2);H::gotoxy(141,28);cout<<R"(    a@@@@@@@@@@@@a )";        
	H::setcolor(2);H::gotoxy(141,29);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
	H::setcolor(2);H::gotoxy(141,30);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
	H::setcolor(2);H::gotoxy(141,31);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
	H::setcolor(2);H::gotoxy(141,32);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
	H::setcolor(8);H::gotoxy(141,33);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(141,34);cout<<R"(          ||   )";      
	H::setcolor(8);H::gotoxy(141,35);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(141,36);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(141,37);cout<<R"(         /MM\)";
	H::setcolor(2);H::gotoxy(141,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^)";                                              

//////////////////////////////////////////// buy already and then show presss//////////////////////////////////////////////////////////////////////////
	H::setcolor(7);H::gotoxy(10,19);cout<<"PRESS         FOR ";
	H::setcolor(2);H::gotoxy(16,19);cout<<"[ENTER]";
	H::setcolor(1);H::gotoxy(13,21);cout<<"BUYING MORE";
	H::setcolor(7);H::gotoxy(143,19);cout<<"PRESS       FOR ";
	H::setcolor(4);H::gotoxy(149,19);cout<<"[ESC]";
	H::setcolor(6);H::gotoxy(147,21);cout<<"BACK...";
//////////////////////////////////////////////////////////////////////////////////////////////////////////
}
void DesignInvoice(){
	//animation top left
	H::HLine(0,0,85,88,255);

	//animation top left
	H::HLine(85,0,85,88,255);

	//animation bottom left
	H::HLine(0,39,85,88,255);

	//animation bottom right
	H::HLine(85,39,85,88,255);

	//border left
	H::VLine(1,0,39,88,255);
	H::VLine(2,0,39,88,255);

	//border right
	H::VLine(169,0,39,88,255);
	H::VLine(170,0,39,88,255);

	//HLine for header
	H::HLine(35,2,100,1,223);
	//left
	H::HLine(39,3,20,2,223);
	H::HLine(43,4,12,3,223);
	H::HLine(46,5,6,4,223);
	//right
	H::HLine(111,3,20,2,223);
	H::HLine(115,4,12,3,223);
	H::HLine(118,5,6,4,223);
	
	H::setcolor(1);H::gotoxy(61,3);cout<<R"(   _____  ___   ______  _________________)";
	H::setcolor(2);H::gotoxy(61,4);cout<<R"(  /  _/ |/ / | / / __ \/  _/ ___/ __/ __/)";
	H::setcolor(3);H::gotoxy(61,5);cout<<R"( _/ //    /| |/ / /_/ // // /__/ _/_\ \  )";
	H::setcolor(4);H::gotoxy(61,6);cout<<R"(/___/_/|_/ |___/\____/___/\___/___/___/  )";
	                                         	
	H::setcolor(2);H::gotoxy(7,1);cout<<R"(           ')";
	H::setcolor(2);H::gotoxy(7,2);cout<<R"(        \  ,  /)";
	H::setcolor(3);H::gotoxy(7,3);cout<<R"(    ' ,___/_\___, ')";
	H::setcolor(3);H::gotoxy(7,4);cout<<R"(       \ /o.o\ /)";
	H::setcolor(4);H::gotoxy(7,5);cout<<R"(   -=   > \_/ <   =-)";
	H::setcolor(4);H::gotoxy(7,6);cout<<R"(       /_\___/_\)";
	H::setcolor(5);H::gotoxy(7,7);cout<<R"(    . `   \ /   ` .)";
	H::setcolor(5);H::gotoxy(7,8);cout<<R"(        /  `  \)";
	H::setcolor(2);H::gotoxy(7,9);cout<<R"(           .)";	
	

	H::setcolor(6);H::gotoxy(141,1);cout<<R"(          |   .)";
	H::setcolor(6);H::gotoxy(141,2);cout<<R"(   `.  *  |     .')";
	H::setcolor(5);H::gotoxy(141,3);cout<<R"(     `. ._|_* .'  .)";
	H::setcolor(5);H::gotoxy(141,4);cout<<R"(   . * .'   `.  *)";
	H::setcolor(4);H::gotoxy(141,5);cout<<R"(-------|     |-------)";
	H::setcolor(4);H::gotoxy(141,6);cout<<R"(   .  *`.___.' *  .)";
	H::setcolor(3);H::gotoxy(141,7);cout<<R"(      .'  |* `.  *)";
	H::setcolor(3);H::gotoxy(141,8);cout<<R"(    .' *  |  . `.)";
	H::setcolor(1);H::gotoxy(141,9);cout<<R"(        . |)";
	

	H::setcolor(4); H::gotoxy(7,12);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(7,13);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(7,14);cout << R"(  (/|\) )";	
	
	H::setcolor(4); H::gotoxy(17,19);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(17,20);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(17,21);cout << R"(  (/|\) )";
	
	H::setcolor(4); H::gotoxy(5,25);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(5,26);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(5,27);cout << R"(  (/|\) )";

	H::setcolor(4); H::gotoxy(19,31);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(19,32);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(19,33);cout << R"(  (/|\) )";

	////////////////////////Right/////////////////////////////
	
	H::setcolor(4); H::gotoxy(155,12);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(155,13);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(155,14);cout << R"(  (/|\) )";	
	
	H::setcolor(4); H::gotoxy(146,19);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(146,20);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(146,21);cout << R"(  (/|\) )";
	
	H::setcolor(4); H::gotoxy(157,25);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(157,26);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(157,27);cout << R"(  (/|\) )";

	H::setcolor(4); H::gotoxy(144,31);cout << R"(  _ " _ )";
	H::setcolor(6); H::gotoxy(144,32);cout << R"( (_\|/_))";
	H::setcolor(2); H::gotoxy(144,33);cout << R"(  (/|\) )";


/////////////////////////////////////////////////////////////Make Invoice//////////////////////////////////////////
//big box invoice
	H::drawBoxDoubleLine(31,8,109,27,3);
	H::setcolor(5);H::gotoxy(38,9);cout<<R"(  ___   ___   __  __   ___)"; 
	H::setcolor(4);H::gotoxy(38,10);cout<<R"( | __| / __| |  \/  | / __|)";
	H::setcolor(6);H::gotoxy(38,11);cout<<R"( | _|  \__ \ | |\/| | \__ \)";
	H::setcolor(2);H::gotoxy(38,12);cout<<R"( |_|   |___/ |_|  |_| |___/)";
	
 ////////For output invoice date and exchange/////////////////////////
	H::setcolor(4);H::gotoxy(102,10);cout<<"INVOICE NO  : ";
	H::setcolor(5);H::gotoxy(102,11);cout<<"DATE        : ";
	H::setcolor(6);H::gotoxy(102,12);cout<<"EXCHANGE    : ";
////////////////////HLINe/////////////////////////////////////////////
//	H::HLine(31,14,109,3,223);
	H::HLine(31,13,109,2,196);
///////////////////For ID  username phone number////////////////////
	H::setcolor(1);H::gotoxy(40,14);cout<<"ID            : ";
	H::setcolor(2);H::gotoxy(40,15);cout<<"USERNAME      : ";
	H::setcolor(3);H::gotoxy(40,16);cout<<"PHONE NUMBER  : ";
////////////////////HLINe/////////////////////////////////////////////
//	H::HLine(31,20,109,3,223);
	H::HLine(31,17,109,2,196);
///////////////////For pRODUCT////////////////////
	H::setcolor(5);H::gotoxy(37,18);cout<<"NO";
	H::setcolor(4);H::gotoxy(53,18);cout<<"PRODUCT NAME";
	H::setcolor(3);H::gotoxy(85,18);cout<<"QUANTITY";
	H::setcolor(2);H::gotoxy(108,18);cout<<"PRICE";
	H::setcolor(1);H::gotoxy(128,18);cout<<"TOTAL";	
///////Total price and payment////////////////////////////////
	// H::HLine(31,30,109,2,196);
	// H::setcolor(3);H::gotoxy(35,31);cout<<"DISCOUNT";
	// H::setcolor(1);H::gotoxy(35,32);cout<<"TOTAL PRICE : ";
	// H::setcolor(4);H::gotoxy(95,32);cout<<"USD  : ";
	// H::setcolor(4);H::gotoxy(115,32);cout<<"KHR : ";	
	// H::HLine(31,33,109,2,196);	
	H::setcolor(8);H::gotoxy(35,34);cout<<"ACLEDA BANK : USD 3873-05255697-17 | KH 3873-05255697-17";
	H::setcolor(8);H::gotoxy(35,35);cout<<"ABA BANK    : USD 010 116 890      | KH 010 116 915";
	H::setcolor(3);H::gotoxy(95,34);cout<<"Thank you for buying flowers from our shop.";
	H::setcolor(3);H::gotoxy(105,35);cout<<"Have a good day ^_^.";
	                      	
	H::setcolor(7);H::gotoxy(54,37);cout<<"[TIP] : PRESS       OR              FOR GO TO ";
	H::setcolor(2);H::gotoxy(68,37);cout<<"[ESC]";
	H::setcolor(4);H::gotoxy(77,37);cout<<"[BACK SPACE]";
	H::setcolor(6);H::gotoxy(100,37);cout<<"MAIN MENU...";
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// Derived class Product
class Product:public Data {
public:
    void InputFlowerData();
    void DisplayFlowerData();
    void EditFlowerData();

	void SelectFlowerType(int x, int y, char flower_type[]);
	void SetCurrentDateTime(char* buffer, size_t size);
	static void Header();
    static void DesignUpdateInsert();
    static void DesignSearchDisplay();
};

// Function to generate next Flower ID
int GenerateNextFlowerID()
{
    fstream file("Data\\Product.flower", ios::in | ios::binary);
    Product temp;
    int maxID = 999;

    if (!file)
        return 1000;

    while (file.read((char*)&temp, sizeof(temp)))
    {
        if (temp.GetFlowerId() > maxID)
            maxID = temp.GetFlowerId();
    }

    file.close();
    return maxID + 1;
}
//design for  update
void Product::DesignUpdateInsert(){
	H::VLine(42,12,15,230,219);
	H::VLine(71,12,15,230,219);
	
	//HLIne for insert 
	H::HLine(37,14,38,196,220);
	H::HLine(37,16,38,196,220);
	H::HLine(37,18,38,196,220);
	H::HLine(37,20,38,196,220);
	H::HLine(37,22,38,196,220);
	H::HLine(37,24,38,196,220);
	H::HLine(37,26,38,196,220);

	H::VLine(95,12,15,230,219);
	H::VLine(129,12,15,230,219);
	
	//HLIne for insert 
	H::HLine(90,14,43,196,220);
	H::HLine(90,16,43,196,220);
	H::HLine(90,18,43,196,220);
	H::HLine(90,20,43,196,220);
	H::HLine(90,22,43,196,220);
	H::HLine(90,24,43,196,220);
	H::HLine(90,26,43,196,220);
	
H::setcolor(6);H::gotoxy(12,16);cout<<R"(      .--.)" ;H::delay(20);  
H::setcolor(6);H::gotoxy(12,17);cout<<R"(    .'_\/_'.)" ;H::delay(20);  
H::setcolor(6);H::gotoxy(12,18);cout<<R"(    '. /\ .')" ;H::delay(20);  
H::setcolor(2);H::gotoxy(12,19);cout<<R"(      "||")" ;H::delay(20);  
H::setcolor(2);H::gotoxy(12,20);cout<<R"(       || /\)" ;H::delay(20);  
H::setcolor(2);H::gotoxy(12,21);cout<<R"(    /\ ||//\))" ;H::delay(20);  
H::setcolor(2);H::gotoxy(12,22);cout<<R"(   (/\\||/)" ;H::delay(20);  
H::setcolor(2);H::gotoxy(12,23);cout<<R"(______\||/_______)" ;H::delay(20);  
H::setcolor(2);H::gotoxy(12,24);cout<<R"(^^^^^^^^^^^^^^^^^)" ;H::delay(20); 


H::setcolor(1);H::gotoxy(141,16);cout<<R"(      .--.)" ;H::delay(20);  
H::setcolor(1);H::gotoxy(141,17);cout<<R"(    .'_\/_'.)" ;H::delay(20);  
H::setcolor(1);H::gotoxy(141,18);cout<<R"(    '. /\ .')" ;H::delay(20);  
H::setcolor(2);H::gotoxy(141,19);cout<<R"(      "||")" ;H::delay(20);  
H::setcolor(2);H::gotoxy(141,20);cout<<R"(       || /\)" ;H::delay(20);  
H::setcolor(2);H::gotoxy(141,21);cout<<R"(    /\ ||//\))" ;H::delay(20);  
H::setcolor(2);H::gotoxy(141,22);cout<<R"(   (/\\||/)" ;H::delay(20);  
H::setcolor(2);H::gotoxy(141,23);cout<<R"(______\||/_______)" ;H::delay(20);  
H::setcolor(2);H::gotoxy(141,24);cout<<R"(^^^^^^^^^^^^^^^^^)" ;H::delay(20); 
 

	
}
//design searchdisplay
void Product::DesignSearchDisplay(){
	
	H::VLine(10,6,25,3,179);
	H::VLine(161,6,25,3,179);
	H::setcolor(7);H::gotoxy(9,14);cout<<char(70);
	H::setcolor(7);H::gotoxy(9,16);cout<<char(76);
	H::setcolor(7);H::gotoxy(9,18);cout<<char(79);
	H::setcolor(7);H::gotoxy(9,20);cout<<char(87);
	H::setcolor(7);H::gotoxy(9,22);cout<<char(69);
	H::setcolor(7);H::gotoxy(9,24);cout<<char(82);
	
	H::setcolor(7);H::gotoxy(160,14);cout<<char(70);
	H::setcolor(7);H::gotoxy(160,16);cout<<char(76);
	H::setcolor(7);H::gotoxy(160,18);cout<<char(79);
	H::setcolor(7);H::gotoxy(160,20);cout<<char(87);
	H::setcolor(7);H::gotoxy(160,22);cout<<char(69);
	H::setcolor(7);H::gotoxy(160,24);cout<<char(82);
	
	H::drawBoxDoubleLineWithBG(20,14,130,1,3);
	H::drawBoxDoubleLineWithBG(20,17,130,8,4);
}

void Product::SelectFlowerType(int x, int y, char flower_type[])
{
	const char* options[] = { "Red   ", "White ", "Yellow", "Orange", "Other " };
	int index = 0;
	char key;

	do {
		// Clear the area before printing (max length = 4 including null)
		H::gotoxy(x, y); H::setcolor(199);
		cout << "     "; // Padding to clear old word

		// Display current selection
		H::gotoxy(x, y); H::setcolor(199);
		cout << options[index];

		key = getch();

		if (key == 0 || key == -32) {
			char arrow = getch();
			switch (arrow) {
				case 72: case 75: // up or left
					index = (index - 1 + 5) % 5;
					break;
				case 80: case 77: // down or right
					index = (index + 1) % 5;
					break;
			}
		}
	} while (key != 13); // ENTER to confirm

	strcpy(flower_type, options[index]);
}
void Product::SetCurrentDateTime(char* buffer, size_t size) 
{
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    strftime(buffer, size, "%d-%m-%Y", localTime);
}
// Implementation of Product methods
void Product::InputFlowerData()
{
    int qty;
    double price;
    char name[50], type[30], description[100], date[20];
    string strQty, strPrice;

    int id = GenerateNextFlowerID(); // auto ID
    SetFlowerID(id);
    H::setcolor(199);H::gotoxy(69,16);cout <<"Flower ID ";          
    H::setcolor(199);H::gotoxy(69,18);cout <<"Enter Flower Name";         
    H::setcolor(199);H::gotoxy(69,20);cout <<"Enter Flower Type";         
    H::setcolor(199);H::gotoxy(69,22);cout <<"Enter Flower Price";        
    H::setcolor(199);H::gotoxy(69,24);cout <<"Enter Flower Quantity";     
    H::setcolor(199);H::gotoxy(69,26);cout <<"Enter Flower Description";  
    H::setcolor(199);H::gotoxy(69,28);cout <<"Enter Flower Date";         


	H::setcolor(199);H::gotoxy(117,16); cout<<":  P-"<< GetFlowerId();
	H::setcolor(199);H::gotoxy(117,18); cout<<":  "; H::inputLetter(name, 15);
	H::setcolor(199);H::gotoxy(117,20); cout<<":  ";
	H::setcolor(199);H::gotoxy(120,20); SelectFlowerType(120,20,type);
	H::setcolor(199);H::gotoxy(117,22); cout<<":  "; price = stod(H::inputUNumber(strPrice, 6));
	H::setcolor(199);H::gotoxy(117,24); cout<<":  "; qty = stoi(H::inputUNumber(strQty, 4));
	H::setcolor(199);H::gotoxy(117,26); cout<<":  "; H::inputLetter(description, 20);
	// H::setcolor(199);H::gotoxy(117,28); cout<<":  "; H::inputDate(date,'-');
	H::setcolor(199);H::gotoxy(117,28); cout<<":  ";
	H::setcolor(199);H::gotoxy(120,28); SetCurrentDateTime(date, sizeof(date)); cout << date;

	
	
    SetFlowerName(name);
    SetFlowerType(type);
    SetFlowerPrice(price);
    SetFlowerQty(qty);
    SetFlowerDescription(description);
    SetFlowerDate(date);
    
   
}
void Product::Header()
{
    H::setcolor(1);H::gotoxy(25,15);cout << left << setw(10) << "ID"
        << setw(20) << "Name"
        << setw(20) << "Type"
        << setw(20) << "Price"
        << setw(15) << "Qty"
        << setw(28) << "Description"
        << "Date";
}

void Product::DisplayFlowerData()
{
    H::setcolor(6);cout << left << "P-" << setw(10) << GetFlowerId()
        << "P-" << setw(18) << GetFlowerName()
        << setw(20) << GetFlowerTpye() << "$"
        << setw(19) << fixed << setprecision(2) << GetFlowerPrice()
        << setw(14) << GetFlowerQty()
        << setw(26) << GetFlowerDescription()
        << GetFlowerDate();
        
}

void Product::EditFlowerData()
{
	Product::DesignUpdateInsert();
    int qty;
    double price;
    char type[30], description[100], date[20];
    string strQty, strPrice;

    H::setcolor(199);H::gotoxy(44,14);cout << "Flower ID           : ";
    H::setcolor(199);H::gotoxy(44,16);cout << "Enter Flower Name         : ";
    H::setcolor(199);H::gotoxy(44,18);cout << "Enter Flower Type         : "; 
    H::setcolor(199);H::gotoxy(44,20);cout << "Enter Flower Price        : "; 
    H::setcolor(199);H::gotoxy(44,22);cout << "Enter Flower Quantity     : "; 
    H::setcolor(199);H::gotoxy(44,24);cout << "Enter Flower Description  : "; 
    H::setcolor(199);H::gotoxy(44,26);cout << "Enter Flower Date         : "; 

	H::setcolor(199);H::gotoxy(97,14); cout<<": P-"<< GetFlowerId();
	H::setcolor(199);H::gotoxy(97,16); cout<<": " << GetFlowerName();
	H::setcolor(199);H::gotoxy(97,18); cout<<": ";
	H::setcolor(199);H::gotoxy(100,18); SelectFlowerType(100,18,type);
	H::setcolor(199);H::gotoxy(97,20); cout<<": "; price = stod(H::inputUNumber(strPrice, 6));
	H::setcolor(199);H::gotoxy(97,22); cout<<": "; qty = stoi(H::inputUNumber(strQty, 4));
	H::setcolor(199);H::gotoxy(97,24); cout<<": "; H::inputLetter(description, 20);
	H::setcolor(199);H::gotoxy(97,26); cout<<": ";
	H::setcolor(199);H::gotoxy(100,26); SetCurrentDateTime(date, sizeof(date)); cout << date;
	
	
    SetFlowerType(type);
    SetFlowerPrice(price);
    SetFlowerQty(qty);
    SetFlowerDescription(description);
    SetFlowerDate(date);
}

// Global objects
Product p;
fstream proF;
// extern User currentUser;    // logged-in user (from Login system)

//////////////////////////////////////////////////////////////////////////////////////////////////////

// struct BoughtItem {
//     Product product;
//     int qty;
// };

// vector<BoughtItem> cart; // stores all purchases
// int invoiceCounter = 1000; // starting invoice number
// void AddToCart(const Product& boughtFlower, int qty) {
//     cart.push_back({boughtFlower, qty});
// }

//================ Bought Item =================
struct BoughtItem {
    Product product;
    int qty;
	/////////////////////////////////////////////////////////////
    double getTotal() const {
        return product.GetFlowerPrice() * qty;
    }
};

//================ Cart & Invoice =================
vector<BoughtItem> cart; 
int invoiceCounter = 1000; // Starting invoice number

//================ Add to Cart =================
void AddToCart(const Product& boughtFlower, int qty) {
    BoughtItem item;
    item.product = boughtFlower; // copy product object
    item.qty = qty;
    cart.push_back(item);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
// ================= HELPER FUNCTION ==================
// string getCurrentDate() {
//     time_t now = time(0);
//     tm* ltm = localtime(&now);
//     char buffer[20];
//     sprintf(buffer, "%02d-%02d-%d", 
//             ltm->tm_mday, ltm->tm_mon + 1, 1900 + ltm->tm_year);
//     return string(buffer);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function to input flower and save to file
void InputFlowerData()
{
    H::setcursor(1,8);
    proF.open("Data\\Product.flower", ios::out | ios::app | ios::binary);
    if (!proF)
    {
        cout << "Cannot open file for writing.\n";
        return;
    }


    p.InputFlowerData();
    proF.write((char*)&p, sizeof(p));
    proF.close();
}
//###############################################################################################
// Function to display all flower records
// void DisplayFlowerData()
// {
//     int y=19;
//     Product::Header();
//     proF.open("Data\\Product.flower", ios::in | ios::binary);
//     if (proF.fail())
//     {
//         cout << "\t File not found!!!" << endl;
//         return;
//     }

//     Product::Header();
//     while (proF.read((char*)&p, sizeof(p)))
//     {
//         H::gotoxy(23,y++);p.DisplayFlowerData();
//     }
// 	Design::Flowercolor();
//     proF.close();
// }
void DisplayFlowerData()
{
	H::setcursor(0,8);
	Design d;
	// d.DesignDisplayFlower();
    const int ROWS_PER_PAGE = 10;
    int totalRecords = 0;
    int currentPage = 0;
    vector<Product> products;
	char op2;

    // Open file
    proF.open("Data\\Product.flower", ios::in | ios::binary);
    if (proF.fail())
    {
		d.DesignDisplayFlower();
        H::setcolor(3);H::gotoxy(55, 22);cout << "File not found!!!" << endl;
		H::setcolor(4);H::gotoxy(65,31);cout<< "Press [ESC] For Back";
		op2 = getch();
		if(op2 == 27)
		{
			return;
		}
    }

    // Read all products into vector
    while (proF.read((char*)&p, sizeof(p)))
    {
        products.push_back(p);
    }
    proF.close();

    totalRecords = products.size();
	// d.DesignDisplayFlower();
    if (totalRecords == 0)
    {
		// d.DesignDisplayFlower();
        H::setcolor(3);H::gotoxy(55, 22);cout << "No records found!" << endl;
		H::setcolor(4);H::gotoxy(65,31);cout<< "Press [ESC] For Back";
		op2 = getch();
		if(op2 == 27)
		{
			return;
		}
    }

    int totalPages = (totalRecords + ROWS_PER_PAGE - 1) / ROWS_PER_PAGE;

    while (true)
    {
		H::setcolor(0);
        system("cls");
        // Product::Header();

        int y = 19;
        int start = currentPage * ROWS_PER_PAGE;
        int end = min(start + ROWS_PER_PAGE, totalRecords);
		d.DesignDisplayFlower();
		// Product::Header();
		Product::Header();

        for (int i = start; i < end; i++)
        {
			// d.DesignDisplayFlower();
            H::gotoxy(23, y++);
            products[i].DisplayFlowerData();
        }

        // Footer info
        H::setcolor(7);H::gotoxy(75, 30);cout << "Page " << (currentPage + 1) << " / " << totalPages;
        H::setcolor(4);H::gotoxy(55,31);cout<< "Use LEFT/RIGHT arrow key And Press [ESC] For Back";

        int key = _getch();
		if (key == 27) // ESC
			break;
		else if (key == 75) // Left arrow
		{
			if (currentPage > 0)
				currentPage--;
			else
				currentPage = totalPages - 1; // wrap to last
		}
		else if (key == 77) // Right arrow
		{
			if (currentPage < totalPages - 1)
				currentPage++;
			else
				currentPage = 0; // wrap to first
		}
	}
}
//###############################################################################################
void UpdateFlowerData()
{	
    H::setcursor(1,8);
	Design::Search();
    int updateId;
    string strID;
    bool isUpdated = false;

    H::setcolor(4);H::gotoxy(53,22);cout << "Input Product ID TO Update  ";
    H::setcolor(4);H::gotoxy(86,22);cout<<":  P-";updateId = stoi(H::inputUNumber(strID, 6));
	H::clearBox(48,20,73,5,1);
    proF.open("Data\\Product.flower", ios::in | ios::out | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }

    while (proF.read((char*)&p, sizeof(p))) {
        if (updateId == p.GetFlowerId()) {
            isUpdated = true;
            p.EditFlowerData();
			H::setcolor(6);H::gotoxy(56,31);cout<< "Press [ESC] For Back and Press [ENTER] For Update More";
			H::setcolor(2);H::gotoxy(62,31);cout<< "[ESC]";
			H::setcolor(2);H::gotoxy(87,31);cout<< "[ENTER]";
            proF.seekp((int)proF.tellg() - sizeof(p));
            proF.write((char*)&p, sizeof(p));
            break;
        }
    }

    proF.close();

    if (!isUpdated)
    { 
        H::drawBoxDoubleLine(76,28,59,1,2);
		H::setcolor(6);H::gotoxy(77,29);cout<<">>>>>>>> This Product ID is not found for Update <<<<<<<<";
		Design::Footer();
	}
}
//###############################################################################################
void SearchFlowerData()
{
	Design d;
	
    H::setcursor(1,8);
    int id;
    string strID;
    bool found = false;

    H::setcolor(3);H::gotoxy(53,22);cout<<"Input Product ID to Search ";
    H::setcolor(3);H::gotoxy(86,22);cout<<":  P-";id = stoi(H::inputUNumber(strID, 5));
	H::clearBox(48,20,73,5,1);
	H::clearBox(19,8,4,30,0);
	H::clearBox(146,7,4,30,0);
    proF.open("Data\\Product.flower", ios::in | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }
    while (proF.read((char*)&p, sizeof(p))) {
        if (p.GetFlowerId() == id) {
            H::setcursor(false,8);
	    	p.DesignSearchDisplay();
			H::setcolor(1);H::gotoxy(22,15);Product::Header();
            H::setcolor(5);H::gotoxy(22,18);p.DisplayFlowerData();
            found = true;
            break;
        }
    }

    if (!found)
	{
		H::setcursor(0,8);
		d.DesignSearchFlower();
        H::setcolor(3);H::gotoxy(53,22);cout << "Product ID not found!";
		H::setcolor(3);H::gotoxy(86,22);cout << "Product ID not found!";
		H::setcolor(6);H::gotoxy(56,29);cout<< "Press [ESC] For Back and Press [ENTER] For Search More";
		H::setcolor(2);H::gotoxy(62,29);cout<< "[ESC]";
		H::setcolor(2);H::gotoxy(87,29);cout<< "[ENTER]";
	}	
    else
    {
		H::drawBoxDoubleLine(76,28,59,1,2);
		H::setcolor(6);H::gotoxy(82,29);cout<<">>>>>>>> FLOWER  SEARCH SUCCESSFULLY <<<<<<<<";
		Design::FooterSearch();
    }
    proF.close();
}
//###############################################################################################
void DeleteFlowerData()
{
    H::setcursor(1,8);
    int id;
    string strID;
    bool isDeleted = false;

    H::setcolor(1);H::gotoxy(53,22);cout << "Input ID of Product to Delete  ";
    H::setcolor(1);H::gotoxy(86,22);cout<<": P-";id = stoi(H::inputUNumber(strID, 5));

    proF.open("Data\\Product.flower", ios::in | ios::binary);
    if (proF.fail())
    {
        cout << "\tFile not found!!!" << endl;
        return;
    }

    fstream backup("Data\\Temp.bin", ios::out | ios::binary);
    if (backup.fail())
    {
        cout << "\tCan't create temporary backup file!" << endl;
        proF.close();
        return;
    }

    int deletedID = -1;      // store deleted ID
    char deletedName[50];    // store deleted flower name (if you want to show name too)

    while (proF.read((char*)&p, sizeof(p)))
    {
        if (p.GetFlowerId() == id)
        {
            isDeleted = true;
            deletedID = p.GetFlowerId();
            strcpy(deletedName, p.GetFlowerName()); // keep name (if your class has char[] for name)
        }
        else
        {
            backup.write((char*)&p, sizeof(p));
        }
    }

    proF.close();
    backup.close();

    if (isDeleted)
    {
        remove("Data\\Product.flower");
        rename("Data\\Temp.bin", "Data\\Product.flower");
        
        H::setcolor(6);H::gotoxy(52,27);cout << "\t Product with ID: P-" << deletedID 
             << " (" << deletedName << ") is deleted successfully!" << endl;
    }
    else
    {
        remove("Data\\Temp.bin");
        H::setcolor(6);H::gotoxy(69,27);cout << "\t Product ID not found!" << endl;
    }
}

//###############################################################################################
// void ImportFlowerQty() {
//     H::setcursor(1,8);
//     int id;
//     int addQty;
//     string strID, strQty;
//     bool found = false;

//     do {
//         found = false;

//         // Ask user for ID (just label)
//         cout << "Enter Flower ID to Search: P-";

//         // Get input (modify inputUNumber so it DOES NOT echo to screen)
//         strID = H::inputUNumber(strID, 5);   // this should only return the string
//         id = stoi(strID);

//         // Now print the ID nicely
//         cout << "\n";

//         // --- Open file ---
//         proF.open("Data\\Product.flower", ios::in | ios::out | ios::binary);
//         if (!proF) {
//             cout << " File not found!" << endl;
//             return;
//         }

//         // --- Search for flower ---
//         while (proF.read((char*)&p, sizeof(p))) {
//             if (id == p.GetFlowerId()) {
//                 found = true;
//                 cout << "\n\tEnter Quantity to Add: ";

//                 strQty = H::inputUNumber(strQty, 4);  // again, only return string
//                 addQty = stoi(strQty);

//                 // Update quantity
//                 int currentQty = p.GetFlowerQty();
//                 p.SetFlowerQty(currentQty + addQty);

//                 // Move back and overwrite record
//                 proF.seekp((int)proF.tellg() - sizeof(p));
//                 proF.write((char*)&p, sizeof(p));

//                 cout << " Quantity Imported Successfully!" << endl;
//                 break;
//             }
//         }

//         proF.close();

//         if (!found) {
//             cout << "\n ID not found! Press ENTER to try again...";
//             while (_getch() != 13) {
//                 // wait for ENTER
//             }
//             H::cls(); // clear screen for new search
//         }

//     } while (!found);
// }
void ImportFlowerQty() {
    H::setcursor(1,8);
    int id;
    int addQty;
    string strID, strQty;
    bool found = false;
    char key;

    do {
        found = false;
        system("cls");
        cout << "==== Import Flower Quantity ====\n";
        cout << "Enter Flower ID to Search: P-";

        // Input ID
        strID = H::inputUNumber(strID, 5);
        id = stoi(strID);

        // --- Open file ---
        proF.open("Data\\Product.flower", ios::in | ios::out | ios::binary);
        if (!proF) {
            cout << " File not found!" << endl;
            return;
        }

        // --- Search for flower ---
        while (proF.read((char*)&p, sizeof(p))) {
            if (id == p.GetFlowerId()) {
                found = true;
                cout << "\nEnter Quantity to Add: ";

                strQty = H::inputUNumber(strQty, 4);
                addQty = stoi(strQty);

                // Update quantity
                int currentQty = p.GetFlowerQty();
                p.SetFlowerQty(currentQty + addQty);

                // Move back and overwrite record
                proF.seekp((int)proF.tellg() - sizeof(p));
                proF.write((char*)&p, sizeof(p));

                cout << " Quantity Imported Successfully!\n";
                break;
            }
        }
        proF.close();

        if (!found) {
            cout << " ID not found!\n";
            cout << "Press ENTER to try again or ESC to go back...";
            while (true) {
                key = _getch();
                if (key == 13) break; // ENTER -> try again
                else if (key == 27) return; // ESC -> exit
            }
        } else {
            cout << "\nPress ENTER to import another or ESC to exit...";
            while (true) {
                key = _getch();
                if (key == 13) break; // ENTER -> continue loop
                else if (key == 27) return; // ESC -> exit function
            }
        }
    } while (true);
}

//###############################################################################################
void SortFlowerData() {
    Product products[100];
    int count = 0;


    proF.open("Data\\Product.flower", ios::in | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }

    while (proF.read((char*)&products[count], sizeof(Product))) {
        count++;
    }
    proF.close();

    // Simple Bubble Sort by Name
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(products[j].GetFlowerName(), products[j + 1].GetFlowerName()) > 0) {
                Product temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }

    // Display sorted
    Product::Header();
    for (int i = 0; i < count; i++) {
        products[i].DisplayFlowerData();
    }
}
// //###############################################################################################
// //===================== ShowInvoice =====================
// void ShowInvoice() {
//     H::cls();
//     DesignInvoice();
//     double totalUSD = 0;
//     int no = 1;
//     int y = 20;

//     // Get current date
//     time_t now = time(0);
//     tm* ltm = localtime(&now);

//     ////////For output invoice date and exchange/////////////////////////
//     H::setcolor(4); H::gotoxy(102,10); cout << "INVOICE NO  : INV-" << invoiceCounter++;
//     H::setcolor(5); H::gotoxy(102,11); cout << "DATE        : " 
//         << 1900 + ltm->tm_year << "-" << 1 + ltm->tm_mon << "-" << ltm->tm_mday;
//     H::setcolor(6); H::gotoxy(102,12); cout << "EXCHANGE    : 1$ = 4100KHR";

//     // Header line
//     H::HLine(31,13,109,2,196);

//     // Table header
//     H::setcolor(5); H::gotoxy(37,18); cout << "NO";
//     H::setcolor(4); H::gotoxy(53,18); cout << "PRODUCT NAME";
//     H::setcolor(3); H::gotoxy(85,18); cout << "QUANTITY";
//     H::setcolor(2); H::gotoxy(108,18); cout << "PRICE";
//     H::setcolor(1); H::gotoxy(128,18); cout << "TOTAL";	

//     for (const auto& item : cart) {
//         double price = item.product.GetFlowerPrice();
//         double total = price * item.qty;
//         totalUSD += total;

//         H::setcolor(3); H::gotoxy(37,y++); cout << left << setw(20) << no
//              << setw(30) << item.product.GetFlowerName()
//              << setw(21) << item.qty
//              << setw(20) << fixed << setprecision(2) << price
//              << setw(8) << fixed << setprecision(2) << total << endl;

//         no++;
//     }

//     double totalKHR = totalUSD * 4100;

//     // Total price section
//     H::HLine(31,30,109,2,196);
//     H::setcolor(3); H::gotoxy(35,31); cout << "DISCOUNT";
//     H::setcolor(1); H::gotoxy(35,32); cout << "TOTAL PRICE : ";
//     H::setcolor(4); H::gotoxy(95,32); cout << "(USD): $" << totalUSD;
//     H::setcolor(4); H::gotoxy(115,32); cout << "(KHR) : " << totalKHR;
//     H::HLine(31,33,109,2,196);	
//     H::setcolor(8); H::gotoxy(35,34); cout << "ACLEDA BANK : USD 3873-05255697-17 | KH 3873-05255697-17";
//     H::setcolor(8); H::gotoxy(35,35); cout << "ABA BANK    : USD 010 116 890      | KH 010 116 915";
//     H::setcolor(3); H::gotoxy(95,34); cout << "Thank you for buying flowers from our shop.";
//     H::setcolor(3); H::gotoxy(105,35); cout << "Have a good day ^_^.";

//     getch();      // wait for key press
//     cart.clear(); // clear cart after invoice
// }

// //===================== BuyingFlower =====================
// void BuyingFlower()
// {
// 	DesignBuyingFlower();
// 	//  H::drawBoxSingleLineWithBG(49,16,35,3,6);
//     // H::drawBoxSingleLineWithBG(86,16,35,3,6);
//     // H::drawBoxSingleLineWithBG(49,21,35,3,6);
//     // H::drawBoxSingleLineWithBG(86,21,35,3,6);
//     H::setcursor(true,8);
//     char choice = ' ';  // outer choice after invoice

//     do {
//         bool exitBuying = false; // exit flag for buying
//         do {
//             string input;      
//             int buyQty;
//             string strQty;
//             bool found = false;

//             // Use local fstream to avoid conflicts
//             fstream proF("Data\\Product.flower", ios::in | ios::out | ios::binary);
//             if (!proF) {
//                 cout << "\tFile not found!" << endl;
//                 return;
//             }
// 			DesignBuyingFlower();
//             H::gotoxy(50,18);cout << "Enter Flower Name or ID : ";
//             H::gotoxy(88,18);cout << "P-";H::inputAll(input, 9);

//             bool isID = all_of(input.begin(), input.end(), ::isdigit);
//             int searchID = 0;
//             if (isID) searchID = stoi(input);

//             while (proF.read((char*)&p, sizeof(p))) {
//                 if ((isID && p.GetFlowerId() == searchID) || (!isID && input == p.GetFlowerName())) {
//                     found = true;
//                     break;
//                 }
//             }

//             if (!found) {
// 				H::drawBoxSingleLineWithBG(49,21,72,3,6);
//                 H::gotoxy(52,23);cout << "\t>>>>>> Flower not found in the system! <<<<<< " << endl;
// 				getch();
// 				H::cls();
// 				DesignBuyingFlower();
//                 proF.close();
//                 break; // back to outer menu
//             }

//             H::gotoxy(50,23);cout << "\tEnter Quantity to Buy: ";
//             H::gotoxy(90,23);buyQty = stoi(H::inputUNumber(strQty, 4));

//             proF.seekp((int)proF.tellg() - sizeof(p));

//             if (p.GetFlowerQty() >= buyQty) {
//                 p.SetFlowerQty(p.GetFlowerQty() - buyQty);
//                 proF.write((char*)&p, sizeof(p));
// 				DesignBuyingFlower();
// 				H::drawBoxSingleLineWithBG(49,21,72,3,6);
//                 H::gotoxy(52,23);cout << "Flower bought successfully!" << endl;
				
//                 // Add purchase to cart
//                 cart.push_back({p, buyQty});

//                 char subChoice = getch();
				
// 				DesignBuyingFlower();
//                 if (subChoice == 27) { // ESC → Show invoice
//                     proF.close();
//                     ShowInvoice();

//                     // After showing invoice, decide:
//                     choice = getch();
//                     if (choice == 27 || choice == 8) {
//                         exitBuying = true; // exit to main menu
// 						H::cls();
//                     } else if (choice == 13) {
//                         H::cls();         // continue buying
//                         exitBuying = false;
//                     }
//                     break; // break inner buying loop
//                 } 
//                 else if (subChoice == 13) { // ENTER → buy again
//                     H::cls();
//                     continue; // inner loop continues
//                 }

//             } else {
//                 cout << "\tNot enough quantity in stock!" << endl;
// 				H::delay(2000);
//                 H::cls();
//                 continue; // try again
//             }

//             proF.close();

//         } while (!exitBuying);

//         if (exitBuying) break; // go to main menu

//     } while (true); // keep buying until user chooses to exit
// }

// // //###############################################################################################
// void test(){
// 	H::setcursor(0,0);
// 	int x = 0;             
// 	char op,key;
// 	do{ 
// 		H::setcursor(0,0);
// 		Design d;	
// 		H::setcolor(0);
// 		H::cls();
// 		start:
// 		do{
// 			H::setcolor(0);
// 			H::cls();
// 			d.FlowerAll();
// 			d.check01(x);
// 			d.FlowerAll();
// 			op = getch(); 
// 		    if (op == -32 || op == 0){
// 		        op = getch(); // actual key code
// 		        switch(op) {
// 		            case 75:{ // LEFT
// 		                x--;
// 		                if (x < 0) x = 9;
// 		                break;
// 		            }
// 		            case 77:{ // RIGHT
// 		                x++;
// 		                if (x > 9) x = 0;
		                
// 		            }   break;
// 		        }
// 		    }
// 		} while (op != 13);  
// 		H::setcolor(7);
// 		if (x == 0) 
// 		{ 	
// 			while(true){
// 				H::setcolor(0);
// 				H::cls();
// 				d.DesignInsertFlower();
// 				InputFlowerData();
// 				H::setcolor(6);H::gotoxy(56,31);cout<< "Press [ESC] For Back and Press [ENTER] For Input More..";
// 				H::setcolor(2);H::gotoxy(62,31);cout<< "[ESC]";
// 				H::setcolor(2);H::gotoxy(87,31);cout<< "[ENTER]";
// 				d.FlowerChoice();
				
// 				key = getch();
// 				if (key == 13) {
// 					continue;
// 				}
// 				else if (key == 27){
// 					goto start;
// 				}
// 			}
// 		}
// 		else if (x == 1) 
// 		{ 	
// 			H::setcolor(0);
// 			H::cls();
// 			d.DesignDisplayFlower();
// 			DisplayFlowerData();
// 		}
// 		else if (x == 2) 
// 		{ 
// 			while(true){
// 				H::setcolor(0);
// 				H::cls();
// 				d.DesignSearchFlower();
// 				SearchFlowerData();
// 				d.Flowercut();

// 				key = getch();
// 				if (key == 13) {
// 					continue;
// 				}
// 				else if (key == 27){
// 					goto start;
// 				}
// 			}
// 		}
// 		else if (x == 3) 
// 		{ 
// 			while(true){
// 				H::setcolor(0);
// 				H::cls();
// 				d.DesignUpdateFlower();	
// 				UpdateFlowerData();
// 				key = getch();
// 				if (key == 13) {
// 					continue;
// 				}
// 				else if (key == 27){
// 					goto start;
// 				}
// 			}		
// 		}
// 		else if (x == 4)
// 		{
// 			while(true){
// 				H::setcolor(0);
// 				H::cls();
// 				d.DesignDeleteFlower();	
// 				DeleteFlowerData();
// 				H::setcolor(7);H::gotoxy(56,29);cout<< "Press [ESC] For Back and Press [ENTER] For Input More..";
// 				H::setcolor(2);H::gotoxy(62,29);cout<< "[ESC]";
// 				H::setcolor(2);H::gotoxy(87,29);cout<< "[ENTER]";
// 				key = getch();
// 				if (key == 13) {
// 					continue;
// 				}
// 				else if (key == 27){
// 					goto start;
// 				}
// 			}	
// 		}
// 		else if (x == 5)
// 		{
			
// 		}
// 		else if (x == 6)
// 		{
// 			// H::cls();
// 			// ShowInvoice();	
// 		}
// 		else if (x == 7)
// 		{
// 			while(true){
// 				H::setcolor(0);
// 				H::cls();
// 				// DesignImportFlowerData();
// 				ImportFlowerQty();
// 				H::setcolor(7);H::gotoxy(56,29);cout<< "Press [ESC] For Back and Press [ENTER] For Input More..";
// 				H::setcolor(2);H::gotoxy(62,29);cout<< "[ESC]";
// 				H::setcolor(2);H::gotoxy(87,29);cout<< "[ENTER]";
// 				key = getch();
// 				if (key == 13) {
// 					H::cls();
// 					continue;
// 				}
// 				else if (key == 27){
// 					goto start;
// 				}
// 			}	
			
// 		}
// 		else if (x == 8)
// 		{
// 			// while(true){
// 			// 	H::cls();
// 			// 	d.DesignDisplayFlower();
// 			// 	H::setcolor(7);H::gotoxy(61,31);cout<< "Press [ENTER] For Buying Product";
// 			// 	H::setcolor(2);H::gotoxy(67,31);cout<< "[ENTER]";
// 			// 	DisplayFlowerData();
// 			// 	H::cls();
// 			// 	BuyingFlower();
// 			// 	key = getch();
// 			// 	if (key == 13) {
// 			// 		continue;
// 			// 	}
// 			// 	else if (key == 27){
// 			// 		goto start;
// 			// 	}
// 			// }
// 		}
// 		else if (x == 9) { 
// 		    H::cls();
// 		    break; 
// 		}
// 	}while(true);
// }

void NewFlowerEdit()
{
    
//////////////////////////////////////////////////////////////////////////////

    H::gotoxy(24,31);H::setcolor(2);cout << R"(                    _)";
    H::gotoxy(24,32);H::setcolor(2);cout << R"(                  _(_)_                          wWWWw   _ )";
    H::gotoxy(24,33);H::setcolor(2);cout << R"(      @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_ )";
    H::gotoxy(24,34);H::setcolor(2);cout << R"(     @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_) )";
    H::gotoxy(24,35);H::setcolor(2);cout << R"(      @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\ )";
    H::gotoxy(24,36);H::setcolor(2);cout << R"(       /      Y       \|    \|/    /(_)    \|      |/      | )";
    H::gotoxy(24,37);H::setcolor(2);cout << R"(    \ |     \ |/       | / \ | /  \|/       |/    \|      \|/ )";
    H::gotoxy(24,38);H::setcolor(2);cout << R"(    \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
    H::gotoxy(24,39);H::setcolor(2);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ )";

    H::gotoxy(85,32);H::setcolor(2);cout << R"(               _(_)_                          wWWWw   _)";
    H::gotoxy(85,33);H::setcolor(2);cout << R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_)";
    H::gotoxy(85,34);H::setcolor(2);cout << R"(  @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_))";
    H::gotoxy(85,35);H::setcolor(2);cout << R"(   @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\)";
    H::gotoxy(85,36);H::setcolor(2);cout << R"(    /      Y       \|    \|/    /(_)    \|      |/      |)";
    H::gotoxy(85,37);H::setcolor(2);cout << R"( \ |     \ |/       | / \ | /  \|/       |/    \|      \|/)";
    H::gotoxy(85,38);H::setcolor(2);cout << R"( \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|//)";
    H::gotoxy(85,39);H::setcolor(2);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
/////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(24,33);H::setcolor(4);cout << R"(      @@@@  )";
    H::gotoxy(24,34);H::setcolor(4);cout << R"(     @@()@@ )";
    H::gotoxy(24,35);H::setcolor(4);cout << R"(      @@@@  )";

    H::gotoxy(85,33);H::setcolor(4);cout << R"(   @@@@  )";
    H::gotoxy(85,34);H::setcolor(4);cout << R"(  @@()@@ )";
    H::gotoxy(85,35);H::setcolor(4);cout << R"(   @@@@  )";
/////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(36,34);H::setcolor(5);cout << R"(wWWWw )";
    H::gotoxy(36,35);H::setcolor(5);cout << R"((___) )";

    H::gotoxy(94,34);H::setcolor(5);cout << R"(wWWWw)";
    H::gotoxy(94,35);H::setcolor(5);cout << R"((___))"; 

/////////////////////////////////////////////////////////////////////////////////////////////////////

    H::gotoxy(99,31);H::setcolor(1);cout << R"(   _  )";
    H::gotoxy(99,32);H::setcolor(1);cout << R"( _(_)_)";
    H::gotoxy(99,33);H::setcolor(1);cout << R"((_)@(_))";
    H::gotoxy(99,34);H::setcolor(1);cout << R"(  (_)\ )";
    H::gotoxy(104,34);H::setcolor(2);cout<< R"(\)";

    H::gotoxy(41,31);H::setcolor(1);cout << R"(   _)";
    H::gotoxy(41,32);H::setcolor(1);cout << R"( _(_)_)";
    H::gotoxy(41,33);H::setcolor(1);cout << R"((_)@(_))";
    H::gotoxy(41,34);H::setcolor(1);cout << R"(  (_)\)"; 
    H::gotoxy(46,34);H::setcolor(2);cout << R"(\)";
//////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(51,33);H::setcolor(1);cout << R"(vVVVv)";
    H::gotoxy(51,34);H::setcolor(1);cout << R"((___))";

    H::gotoxy(109,33);H::setcolor(1);cout << R"(vVVVv)";
    H::gotoxy(109,34);H::setcolor(1);cout << R"((___))";

//////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(57,33);H::setcolor(6);cout << R"(    _)";
    H::gotoxy(57,34);H::setcolor(6);cout << R"(  _(_)_)";
    H::gotoxy(57,35);H::setcolor(6);cout << R"( (_)@(_))";
    H::gotoxy(57,36);H::setcolor(6);cout << R"(  /(_))";
    H::gotoxy(58,36);H::setcolor(2);cout << R"( /)";

    H::gotoxy(116,33);H::setcolor(6);cout << R"(   _)";
    H::gotoxy(116,34);H::setcolor(6);cout << R"( _(_)_)";
    H::gotoxy(116,35);H::setcolor(6);cout << R"((_)@(_))";
    H::gotoxy(116,36);H::setcolor(6);cout << R"( /(_))";
    H::gotoxy(117,36);H::setcolor(2);cout << R"(/)";
    
//////////////////////////////////////////////////////////////////////////////////////////////////////

    H::gotoxy(66,33);H::setcolor(5);cout << R"( @@@@)";
    H::gotoxy(66,34);H::setcolor(5);cout << R"(@@()@@)";
    H::gotoxy(66,35);H::setcolor(5);cout << R"( @@@@)";

    H::gotoxy(124,33);H::setcolor(5);cout << R"( @@@@)";
    H::gotoxy(124,34);H::setcolor(5);cout << R"(@@()@@)";
    H::gotoxy(124,35);H::setcolor(5);cout << R"( @@@@)";

/////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(73,32);H::setcolor(5);cout << R"(wWWWw)";
    H::gotoxy(73,33);H::setcolor(5);cout << R"((___))";

    H::gotoxy(131,32);H::setcolor(5);cout << R"(wWWWw)";
    H::gotoxy(131,33);H::setcolor(5);cout << R"((___))";
/////////////////////////////////////////////////////////////////////////////////////////////////////
    H::gotoxy(78,32);H::setcolor(4);cout << R"(   _ )";
    H::gotoxy(78,33);H::setcolor(4);cout << R"( _(_)_ )";
    H::gotoxy(78,34);H::setcolor(4);cout << R"((_)@(_) )";
    H::gotoxy(78,35);H::setcolor(4);cout << R"(  (_)\ )";
    H::gotoxy(83,35);H::setcolor(2);cout << R"(\)";

    H::gotoxy(136,32);H::setcolor(4);cout << R"(   _)";
    H::gotoxy(136,33);H::setcolor(4);cout << R"( _(_)_)";
    H::gotoxy(136,34);H::setcolor(4);cout << R"((_)@(_))";
    H::gotoxy(136,35);H::setcolor(4);cout << R"(  (_)\)";
    H::gotoxy(141,35);H::setcolor(2);cout << R"(\)";

//////////////////////////////////////////////////////////////////////////////////////////////////////
//              Treee
	H::setcolor(1);H::gotoxy(6,28);cout<<R"(        a@@@@a    )";         
	H::setcolor(2);H::gotoxy(6,29);cout<<R"(    a@@@@@@@@@@@@a )";        
	H::setcolor(3);H::gotoxy(6,30);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
	H::setcolor(4);H::gotoxy(6,31);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
	H::setcolor(5);H::gotoxy(6,32);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
	H::setcolor(6);H::gotoxy(6,33);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
	H::setcolor(8);H::gotoxy(6,34);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(6,35);cout<<R"(          ||   )";      
	H::setcolor(8);H::gotoxy(6,36);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(6,37);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(6,38);cout<<R"(         /MM\)";
	H::setcolor(2);H::gotoxy(6,39);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
	
////////////////////////////////////////////////////////////////////////////////////////////////

    H::setcolor(1);H::gotoxy(143,28);cout<<R"(        a@@@@a    )";         
	H::setcolor(2);H::gotoxy(143,29);cout<<R"(    a@@@@@@@@@@@@a )";        
	H::setcolor(3);H::gotoxy(143,30);cout<<R"(  a@@@@@@by@@@@@@@@a )";      
	H::setcolor(4);H::gotoxy(143,31);cout<<R"(a@@@@@S@C@E@S@W@@@@@@a )";    
	H::setcolor(5);H::gotoxy(143,32);cout<<R"(@@@@@@@@@@@@@@@@@@@@@@ )";    
	H::setcolor(6);H::gotoxy(143,33);cout<<R"( `@@@@@@`\\//'@@@@@@' )";     
	H::setcolor(8);H::gotoxy(143,34);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(143,35);cout<<R"(          ||   )";      
	H::setcolor(8);H::gotoxy(143,36);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(143,37);cout<<R"(          ||)";
	H::setcolor(8);H::gotoxy(143,38);cout<<R"(         /MM\)";
	H::setcolor(2);H::gotoxy(143,39);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^)";


}

// void LoginAsAdmin()
// {
// 	char username[50], password[50];
//     int attempts = 0;
// 	// b:
//     while (true)
//     {
// 	H::setcursor(1,8);
// 	NewFlowerEdit();
//     //animation top left
// 	H::HLine(0,0,85,51,219);
	
// 	//animation top left
// 	H::HLine(85,0,85,51,219);
	
//     //border left
// 	H::VLine(2,0,39,51,219);
// 	H::VLine(3,0,39,51,219);

//     //border right
// 	H::VLine(168,0,39,51,219);
// 	H::VLine(169,0,39,51,219);

//     H::drawBoxSingleLineWithBG(47,3,81,3,136); //grey
//     H::drawBoxSingleLineWithBG(45,4,81,3,145); //blue

// //////////////////////////////////////
//     H::VLine(52,0,2,68,219);
//     H::VLine(54,0,2,68,219);

//     H::VLine(122,0,2,68,219);
//     H::VLine(124,0,2,68,219);


// //////////////////////////////////////
                                                

//     H::setcolor(151); H::gotoxy(50,4); cout << R"( __     __    ___  __  __ _     __   ____     __   ____  _  _  __  __ _ )";
//     H::setcolor(151); H::gotoxy(50,5); cout << R"((  )   /  \  / __)(  )(  ( \   / _\ / ___)   / _\ (    \( \/ )(  )(  ( \)";
//     H::setcolor(151); H::gotoxy(50,6); cout << R"(/ (_/\(  O )( (_ \ )( /    /  /    \\___ \  /    \ ) D (/ \/ \ )( /    /)";
//     H::setcolor(151); H::gotoxy(50,7); cout << R"(\____/ \__/  \___/(__)\_)__)  \_/\_/(____/  \_/\_/(____/\_)(_/(__)\_)__))";


//     //arrow left (animation)
//     H::HLine(5,14,20,4,220);
//     H::HLine(9,15,20,1,220);
//     H::HLine(13,16,20,6,220);
//     H::HLine(18,17,20,3,220);

//     H::HLine(22,18,20,5,220);

//     H::HLine(18,19,20,3,220);
//     H::HLine(13,20,20,6,220);
//     H::HLine(9,21,20,1,220);
//     H::HLine(5,22,20,4,220);


//     //arrow right (animation)
//     H::HLine(145,14,20,4,220);
//     H::HLine(141,15,20,1,220);
//     H::HLine(137,16,20,6,220);
//     H::HLine(133,17,20,3,220);

//     H::HLine(129,18,20,5,220);

//     H::HLine(133,19,20,3,220);
//     H::HLine(137,20,20,6,220);
//     H::HLine(141,21,20,1,220);
//     H::HLine(145,22,20,4,220);

//     //upper box username
//     H::VLine(61,10,3,6,219);
//     H::VLine(111,10,3,6,219);
//     H::HLine(61,11,49,6,223);

//     H::HLine(64,12,10,5,220);
//     H::HLine(75,12,10,2,220);
//     H::HLine(86,12,10,3,220);
//     H::HLine(97,12,10,4,220);

//     //left box username
//     H::VLine(51,15,11,6,219);
//     H::HLine(50,15,5,6,220);
//     H::HLine(50,26,5,6,223);
//     H::VLine(53,15,10,70,237);
//     H::VLine(54,15,10,70,237);

//     //right box username
//     H::VLine(121,15,11,6,219);
//     H::HLine(116,15,5,6,220);
//     H::HLine(116,26,5,6,223);
//     H::VLine(118,15,10,70,237);
//     H::VLine(119,15,10,70,237);

//     //box username
//     H::drawBoxSingleLineWithBG(56,14,59,12,136); 

//     // H::setcolor(135); H::gotoxy(66,16); cout << "USERNAME";
//     // H::drawBoxSingleLineWithBG(66,17,39,1,145); H::setcolor(151); H::gotoxy(70,18); cout << "FSMS";

//     // H::setcolor(135); H::gotoxy(66,22); cout << "PASSWORD";
//     // H::drawBoxSingleLineWithBG(66,23,39,1,145); H::setcolor(151); H::gotoxy(70,24); cout << "Fsms168";

//     H::VLine(66,27,3,145,219);
//     H::HLine(65,31,41,1,223);
//     H::VLine(106,27,3,145,219);

//         // ===== UI DESIGN (your H:: code goes here) =====
//         H::drawBoxSingleLineWithBG(56,14,59,12,136); 

// 		H::drawBoxSingleLineWithBG(66,17,39,1,145); 
// 		H::drawBoxSingleLineWithBG(66,23,39,1,145);

//     	H::setcolor(135); H::gotoxy(66,16); cout << "USERNAME";
//         H::setcolor(135); H::gotoxy(66,22); cout << "PASSWORD";
//    		H::setcolor(151); H::gotoxy(70,18); H::inputLetter(username,5);
//     	H::setcolor(151); H::gotoxy(70,24); H::inputPasswordMask(password,8);

// 		H::setcursor(0,0);
//         // ===== Check login =====
//         if ((strcmp(username, "fsms") == 0 || strcmp(username, "FSMS") == 0) &&
//             (strcmp(password, "fsms168") == 0 || strcmp(password, "FSMS168") == 0))
//         {
//             H::setcolor(10);
// 			H::gotoxy(69,29); cout << "                                 ";
//             H::gotoxy(69,29); cout << "         Login Success           ";

// 			TestAdmin();
//             break;
//         }
//         else
//         {
//             attempts++;
//             H::setcolor(244);
//             H::gotoxy(69,28); cout << " Incorrect Password  Or Username ";


//             if (attempts == 3)
//             {
//                 H::gotoxy(66,29); cout << " Too many attempts! Wait 10 seconds....";
//                 H::delay(10000); // 10 seconds
//                 attempts = 0; // reset attempts after lockout
// 				H::setcolor(0);
// 				H::setcursor(0,0);
// 				H::cls();
//             }
//             else
//             {
//                 H::gotoxy(74,29); cout << " Try again (" << (3 - attempts) << " left)....";

//             }
//         }
//     }

// }


#endif
