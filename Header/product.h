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
void test();
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
	H::HLine(31,30,109,2,196);
	H::setcolor(3);H::gotoxy(35,31);cout<<"DISCOUNT";
	H::setcolor(1);H::gotoxy(35,32);cout<<"TOTAL PRICE : ";
	H::setcolor(4);H::gotoxy(95,32);cout<<"USD  : ";
	H::setcolor(4);H::gotoxy(115,32);cout<<"KHR : ";	
	H::HLine(31,33,109,2,196);	
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
class Product : public Data {
public:
    void InputFlowerData();
    void DisplayFlowerData();
    void EditFlowerData();
    static void Header();
    static void DesignUpdateInsert();
    static void DesignSearchDisplay();
};

// Function to generate next Flower ID
int GenerateNextFlowerID()
{
    fstream file("Data\\Product.bin", ios::in | ios::binary);
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
	H::setcolor(199);H::gotoxy(117,20); cout<<":  "; H::inputLetter(type, 15);
	H::setcolor(199);H::gotoxy(117,22); cout<<":  "; price = stod(H::inputUNumber(strPrice, 6));
	H::setcolor(199);H::gotoxy(117,24); cout<<":  "; qty = stoi(H::inputUNumber(strQty, 4));
	H::setcolor(199);H::gotoxy(117,26); cout<<":  "; H::inputLetter(description, 20);
	H::setcolor(199);H::gotoxy(117,28); cout<<":  "; H::inputDate(date,'-');
	
	
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
	H::setcolor(199);H::gotoxy(97,18); cout<<": "; H::inputLetter(type, 15);
	H::setcolor(199);H::gotoxy(97,20); cout<<": "; price = stod(H::inputUNumber(strPrice, 6));
	H::setcolor(199);H::gotoxy(97,22); cout<<": "; qty = stoi(H::inputUNumber(strQty, 4));
	H::setcolor(199);H::gotoxy(97,24); cout<<": "; H::inputLetter(description, 20);
	H::setcolor(199);H::gotoxy(97,26); cout<<": "; H::inputDate(date,'-');
	
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

struct BoughtItem {
    Product product;
    int qty;
};

vector<BoughtItem> cart; // stores all purchases
int invoiceCounter = 1000; // starting invoice number
void AddToCart(const Product& boughtFlower, int qty) {
    cart.push_back({boughtFlower, qty});
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
// ================= HELPER FUNCTION ==================
string getCurrentDate() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    char buffer[20];
    sprintf(buffer, "%02d-%02d-%d", 
            ltm->tm_mday, ltm->tm_mon + 1, 1900 + ltm->tm_year);
    return string(buffer);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function to input flower and save to file
void InputFlowerData()
{
    H::setcursor(1,8);
    proF.open("Data\\Product.bin", ios::out | ios::app | ios::binary);
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
void DisplayFlowerData()
{
    int y=19;
    Product::Header();
    proF.open("Data\\Product.bin", ios::in | ios::binary);
    if (proF.fail())
    {
        cout << "\t File not found!!!" << endl;
        return;
    }

    Product::Header();
    while (proF.read((char*)&p, sizeof(p)))
    {
        H::gotoxy(23,y++);p.DisplayFlowerData();
    }
	Design::Flowercolor();
    proF.close();
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
    H::setcolor(4);H::gotoxy(86,22);cout<<":  P-";updateId = stoi(H::inputUNumber(strID, 10));
	H::clearBox(48,20,73,5,1);
    proF.open("Data\\Product.bin", ios::in | ios::out | ios::binary);
    if (!proF) {
        cout << "\tFile not found!" << endl;
        return;
    }

    while (proF.read((char*)&p, sizeof(p))) {
        if (updateId == p.GetFlowerId()) {
            isUpdated = true;
            p.EditFlowerData();
            proF.seekp((int)proF.tellg() - sizeof(p));
            proF.write((char*)&p, sizeof(p));
            break;
        }
    }

    proF.close();

    if (!isUpdated)
        cout << "\tThis Product ID is not found for Update!" << endl;
    else
        H::drawBoxDoubleLine(76,28,59,1,2);
		H::setcolor(6);H::gotoxy(82,29);cout<<">>>>>>>> FLOWER  UPDATE SUCCESSFULLY <<<<<<<<";
		Design::Footer();
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
    proF.open("Data\\Product.bin", ios::in | ios::binary);
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
		d.DesignSearchFlower();
        H::setcolor(3);H::gotoxy(53,22);cout << "\tProduct ID not found!";
		H::setcolor(3);H::gotoxy(86,22);cout << "\tProduct ID not found!";
	}	
    else
    {
		H::drawBoxDoubleLine(76,28,59,1,2);
		H::setcolor(6);H::gotoxy(82,29);cout<<">>>>>>>> FLOWER  SEARCH SUCCESSFULLY <<<<<<<<";
		Design::Footer();
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

    proF.open("Data\\Product.bin", ios::in | ios::binary);
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
        remove("Data\\Product.bin");
        rename("Data\\Temp.bin", "Data\\Product.bin");
        
        H::setcolor(6);H::gotoxy(52,27);cout << "\t Product with ID: P-" << deletedID 
             << " (" << deletedName << ") is deleted successfully!" << endl;
        	getch();
    }
    else
    {
        remove("Data\\Temp.bin");
        H::setcolor(6);H::gotoxy(69,27);cout << "\t Product ID not found!" << endl;
    }
}

//###############################################################################################
void ImportFlowerQty() {
    H::setcursor(1,8);
    int id;
    int addQty;
    string strID, strQty;
    bool found = false;

    do {
        found = false;

        // Ask user for ID (just label)
        cout << "Enter Flower ID to Search: P-";

        // Get input (modify inputUNumber so it DOES NOT echo to screen)
        strID = H::inputUNumber(strID, 5);   // this should only return the string
        id = stoi(strID);

        // Now print the ID nicely
        cout << "\n";

        // --- Open file ---
        proF.open("Data\\Product.bin", ios::in | ios::out | ios::binary);
        if (!proF) {
            cout << " File not found!" << endl;
            return;
        }

        // --- Search for flower ---
        while (proF.read((char*)&p, sizeof(p))) {
            if (id == p.GetFlowerId()) {
                found = true;
                cout << "\n\tEnter Quantity to Add: ";

                strQty = H::inputUNumber(strQty, 4);  // again, only return string
                addQty = stoi(strQty);

                // Update quantity
                int currentQty = p.GetFlowerQty();
                p.SetFlowerQty(currentQty + addQty);

                // Move back and overwrite record
                proF.seekp((int)proF.tellg() - sizeof(p));
                proF.write((char*)&p, sizeof(p));

                cout << " Quantity Imported Successfully!" << endl;
                break;
            }
        }

        proF.close();

        if (!found) {
            cout << "\n ID not found! Press ENTER to try again...";
            while (_getch() != 13) {
                // wait for ENTER
            }
            H::cls(); // clear screen for new search
        }

    } while (!found);
}

//###############################################################################################
void SortFlowerData() {
    Product products[100];
    int count = 0;


    proF.open("Data\\Product.bin", ios::in | ios::binary);
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
//###############################################################################################
//===================== ShowInvoice =====================
void ShowInvoice() {
    H::cls();
    DesignInvoice();
    double totalUSD = 0;
    int no = 1;
    int y = 20;

    // Get current date
    time_t now = time(0);
    tm* ltm = localtime(&now);

    ////////For output invoice date and exchange/////////////////////////
    H::setcolor(4); H::gotoxy(102,10); cout << "INVOICE NO  : INV-" << invoiceCounter++;
    H::setcolor(5); H::gotoxy(102,11); cout << "DATE        : " 
        << 1900 + ltm->tm_year << "-" << 1 + ltm->tm_mon << "-" << ltm->tm_mday;
    H::setcolor(6); H::gotoxy(102,12); cout << "EXCHANGE    : 1$ = 4100KHR";

    // Header line
    H::HLine(31,13,109,2,196);

    // Table header
    H::setcolor(5); H::gotoxy(37,18); cout << "NO";
    H::setcolor(4); H::gotoxy(53,18); cout << "PRODUCT NAME";
    H::setcolor(3); H::gotoxy(85,18); cout << "QUANTITY";
    H::setcolor(2); H::gotoxy(108,18); cout << "PRICE";
    H::setcolor(1); H::gotoxy(128,18); cout << "TOTAL";	

    for (const auto& item : cart) {
        double price = item.product.GetFlowerPrice();
        double total = price * item.qty;
        totalUSD += total;

        H::setcolor(3); H::gotoxy(37,y++); cout << left << setw(20) << no
             << setw(30) << item.product.GetFlowerName()
             << setw(21) << item.qty
             << setw(20) << fixed << setprecision(2) << price
             << setw(8) << fixed << setprecision(2) << total << endl;

        no++;
    }

    double totalKHR = totalUSD * 4100;

    // Total price section
    H::HLine(31,30,109,2,196);
    H::setcolor(3); H::gotoxy(35,31); cout << "DISCOUNT";
    H::setcolor(1); H::gotoxy(35,32); cout << "TOTAL PRICE : ";
    H::setcolor(4); H::gotoxy(95,32); cout << "(USD): $" << totalUSD;
    H::setcolor(4); H::gotoxy(115,32); cout << "(KHR) : " << totalKHR;
    H::HLine(31,33,109,2,196);	
    H::setcolor(8); H::gotoxy(35,34); cout << "ACLEDA BANK : USD 3873-05255697-17 | KH 3873-05255697-17";
    H::setcolor(8); H::gotoxy(35,35); cout << "ABA BANK    : USD 010 116 890      | KH 010 116 915";
    H::setcolor(3); H::gotoxy(95,34); cout << "Thank you for buying flowers from our shop.";
    H::setcolor(3); H::gotoxy(105,35); cout << "Have a good day ^_^.";

    getch();      // wait for key press
    cart.clear(); // clear cart after invoice
}

//===================== BuyingFlower =====================
void BuyingFlower()
{
	DesignBuyingFlower();
	//  H::drawBoxSingleLineWithBG(49,16,35,3,6);
    // H::drawBoxSingleLineWithBG(86,16,35,3,6);
    // H::drawBoxSingleLineWithBG(49,21,35,3,6);
    // H::drawBoxSingleLineWithBG(86,21,35,3,6);
    H::setcursor(true,8);
    char choice = ' ';  // outer choice after invoice

    do {
        bool exitBuying = false; // exit flag for buying
        do {
            string input;      
            int buyQty;
            string strQty;
            bool found = false;

            // Use local fstream to avoid conflicts
            fstream proF("Data\\Product.bin", ios::in | ios::out | ios::binary);
            if (!proF) {
                cout << "\tFile not found!" << endl;
                return;
            }
			DesignBuyingFlower();
            H::gotoxy(50,18);cout << "Enter Flower Name or ID : ";
            H::gotoxy(88,18);cout << "P-";H::inputAll(input, 9);

            bool isID = all_of(input.begin(), input.end(), ::isdigit);
            int searchID = 0;
            if (isID) searchID = stoi(input);

            while (proF.read((char*)&p, sizeof(p))) {
                if ((isID && p.GetFlowerId() == searchID) || (!isID && input == p.GetFlowerName())) {
                    found = true;
                    break;
                }
            }

            if (!found) {
				H::drawBoxSingleLineWithBG(49,21,72,3,6);
                H::gotoxy(52,23);cout << "\t>>>>>> Flower not found in the system! <<<<<< " << endl;
				getch();
				H::cls();
				DesignBuyingFlower();
                proF.close();
                break; // back to outer menu
            }

            H::gotoxy(50,23);cout << "\tEnter Quantity to Buy: ";
            H::gotoxy(90,23);buyQty = stoi(H::inputUNumber(strQty, 4));

            proF.seekp((int)proF.tellg() - sizeof(p));

            if (p.GetFlowerQty() >= buyQty) {
                p.SetFlowerQty(p.GetFlowerQty() - buyQty);
                proF.write((char*)&p, sizeof(p));
				DesignBuyingFlower();
				H::drawBoxSingleLineWithBG(49,21,72,3,6);
                H::gotoxy(52,23);cout << "Flower bought successfully!" << endl;
				
                // Add purchase to cart
                cart.push_back({p, buyQty});

                char subChoice = getch();
				
				DesignBuyingFlower();
                if (subChoice == 27) { // ESC → Show invoice
                    proF.close();
                    ShowInvoice();

                    // After showing invoice, decide:
                    choice = getch();
                    if (choice == 27 || choice == 8) {
                        exitBuying = true; // exit to main menu
						H::cls();
                    } else if (choice == 13) {
                        H::cls();         // continue buying
                        exitBuying = false;
                    }
                    break; // break inner buying loop
                } 
                else if (subChoice == 13) { // ENTER → buy again
                    H::cls();
                    continue; // inner loop continues
                }

            } else {
                cout << "\tNot enough quantity in stock!" << endl;
				H::delay(2000);
                H::cls();
                continue; // try again
            }

            proF.close();

        } while (!exitBuying);

        if (exitBuying) break; // go to main menu

    } while (true); // keep buying until user chooses to exit
}

//###############################################################################################
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
		else if (x == 1) 
		{ 	
			H::setcolor(0);
			H::cls();
			d.DesignDisplayFlower();
			H::setcolor(4);H::gotoxy(76,31);cout<< "Press [ESC] For Back";
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
				d.DesignDeleteFlower();	
				DeleteFlowerData();
				H::setcolor(7);H::gotoxy(56,29);cout<< "Press [ESC] For Back and Press [ENTER] For Input More..";
				H::setcolor(2);H::gotoxy(62,29);cout<< "[ESC]";
				H::setcolor(2);H::gotoxy(87,29);cout<< "[ENTER]";
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
			
		}
		else if (x == 6)
		{
			H::cls();
			ShowInvoice();	
		}
		else if (x == 7)
		{
			while(true){
				H::setcolor(0);
				H::cls();
				// DesignImportFlowerData();
				ImportFlowerQty();
				H::setcolor(7);H::gotoxy(56,29);cout<< "Press [ESC] For Back and Press [ENTER] For Input More..";
				H::setcolor(2);H::gotoxy(62,29);cout<< "[ESC]";
				H::setcolor(2);H::gotoxy(87,29);cout<< "[ENTER]";
				key = getch();
				if (key == 13) {
					H::cls();
					continue;
				}
				else if (key == 27){
					goto start;
				}
			}	
			
		}
		else if (x == 8)
		{
			while(true){
				H::cls();
				d.DesignDisplayFlower();
				H::setcolor(7);H::gotoxy(61,31);cout<< "Press [ENTER] For Buying Product";
				H::setcolor(2);H::gotoxy(67,31);cout<< "[ENTER]";
				DisplayFlowerData();
				H::cls();
				BuyingFlower();
				key = getch();
				if (key == 13) {
					continue;
				}
				else if (key == 27){
					goto start;
				}
			}
		}
		else if (x == 9) { 
		    H::cls();
		    break; 
		}
	}while(true);
}


#endif
