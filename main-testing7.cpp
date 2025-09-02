#include "User.h"
#include "Header/design_staff.h"
#include "Header/staff.h"
#include "Header/designStaff4Admin.h"
#include "Header/ProductDesign.h"
#include "Header/product.h"
#include "Header/main_design.h"
// #include <thread>
// #include "ANTHinsyOOP"
// using namespace ANTHinsyOOP;
// //=============================== Main ===================================
// /// The final Edition for User Feature
void RegisterWithDs();
void TestMessage();
void LoginWithDs();
void BuyingWithDs();

void openMyWebsite(const string& url) {
    string command = "start " + url;
    system(command.c_str());
}
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
int main() {

    H::setConsoleTitle("Flower Shop Management System");
    H::DisableScreenResize();
    H::setFixedScreenConsole(170,40);
    H::setFont(18,700);

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
	H::setcolor(215);H::gotoxy(31,14);cout << "Advisor";
	H::drawBoxSingleLineWithBG(52,15,17,1,153);
	H::setcolor(151);H::gotoxy(56,16);cout<<"RUN LIHOU";
	H::setcolor(215);H::gotoxy(51,14);cout << "Menter";
	/////////////////////////////////////Big box right/////////////////////
	H::VLine(95,12,20,5,219);
	H::VLine(124,12,20,5,219);
	H::drawBoxDoubleLineWithBG(75,14,64,16,3);
/////////////////////////////////////////////////Tip
	H::setcolor(7);H::gotoxy(45,34);cout<<"USE               AND ";
	H::setcolor(1);H::gotoxy(49,34);cout<<"ARROW KEY";
	H::setcolor(2);H::gotoxy(60,34);cout<<"UP";
	H::setcolor(4);H::gotoxy(66,34);cout<<"DOWN";
	H::setcolor(7);H::gotoxy(47,35);cout<<"PRESS       FOR SELECT";
	H::setcolor(5);H::gotoxy(53,35);cout<<"ENTER";

	H::setcolor(4);H::gotoxy(76,33);cout << "[TIP] PRESS [1]. go to ANT Training Center Website";
	H::setcolor(3);H::gotoxy(76,34);cout << "      PRESS [2]. go to Ministry of Post and Telecommunications website";
	H::setcolor(5);H::gotoxy(76,35);cout << "      PRESS [3]. Our Develop Website";

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
			H::setcolor(7);H::gotoxy(80,15);cout << "We're the students who received a scholarship from the ";
			H::setcolor(7);H::gotoxy(76,17);cout << "[1].Ministry of Post and Telecommunications to study Mobile";
			H::setcolor(7);H::gotoxy(76,19);cout << "App(Flutter) Development Batch2 at [2]. ANT Training Center.";
			H::setcolor(7);H::gotoxy(76,21);cout << "Study for 13 Months From 16 June 2025 to 17 July 2026.";
			H::setcolor(7);H::gotoxy(76,23);cout << "Thank to the generous support of the  [1]. Ministry of Post";
			H::setcolor(7);H::gotoxy(76,25);cout << "and Telecommunications to study This opportunity is allowing us";
			H::setcolor(7);H::gotoxy(76,27);cout << "to develop valuable skills in Mobiles App Development and ";
			H::setcolor(7);H::gotoxy(76,29);cout << "pursue exciting careers intech industry.";
			
		}
		if(x==1){
			H::HLine(36,22,29,170,219);
			H::setcolor(167);H::gotoxy(44,22);cout<<"KEAT SOMARINA";
			// H::VLine(95,12,20,5,219);
			// H::VLine(124,12,20,5,219);
			H::drawBoxDoubleLineWithBG(75,14,64,16,3);
			H::setcolor(7);H::gotoxy(77,15);cout << "Hi, I'm Keat Somarina, a third-year Computer Science student";
			H::setcolor(7);H::gotoxy(75,17);cout << "at RUPP from Kampot Province. I'm currently studying Mobile App";
			H::setcolor(7);H::gotoxy(75,19);cout << "Development with Flutter as part of Batch 2 at ANT Training";
			H::setcolor(7);H::gotoxy(75,21);cout << "Center,supported by the Ministry of Post and Telecommunications.";
			H::setcolor(7);H::gotoxy(75,23);cout << "I'm working on a scholarship app to help students easily find";
			H::setcolor(7);H::gotoxy(75,25);cout << "and apply for opportunities.                                  ";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
		}
		if(x==2){
			H::HLine(36,25,29,170,219);
			H::setcolor(167);H::gotoxy(44,25);cout<<"TAING NAIHUOY";
			// H::VLine(95,12,20,5,219);
			// H::VLine(124,12,20,5,219);
			H::drawBoxDoubleLineWithBG(75,14,64,16,3);
			H::setcolor(7);H::gotoxy(77,15);cout << "Hi, I'm Taing NaiHuoy, a fourth-year Computer Science student";
			H::setcolor(7);H::gotoxy(75,17);cout << "at RUPP from .... Province. I'm currently studying Mobile App";
			H::setcolor(7);H::gotoxy(75,19);cout << "Development with Flutter as part of Batch 2 at ANT Training";
			H::setcolor(7);H::gotoxy(75,21);cout << "Center,supported by the Ministry of Post and Telecommunications.";
			H::setcolor(7);H::gotoxy(75,23);cout << "I'm working on a scholarship app to help students easily find";
			H::setcolor(7);H::gotoxy(75,25);cout << "and apply for opportunities.                                  ";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
		}
		if(x==3){
			H::HLine(36,28,29,170,219);
			H::setcolor(167);H::gotoxy(46,28);cout<<"KAO MEYLY";
			H::setcolor(7);H::gotoxy(77,15);cout << "Hi, I'm Kao MeyLy,a Computer Science an Engineering student";
			H::setcolor(7);H::gotoxy(75,17);cout << "at AUB from Takeo Province. I'm currently studying Mobile App";
			H::setcolor(7);H::gotoxy(75,19);cout << "Development with Flutter as part of Batch 2 at ANT Training";
			H::setcolor(7);H::gotoxy(75,21);cout << "Center,supported by the Ministry of Post and Telecommunications.";
			H::setcolor(7);H::gotoxy(75,23);cout << "I'm working on a scholarship app to help students easily find";
			H::setcolor(7);H::gotoxy(75,25);cout << "and apply for opportunities.                                  ";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
		}
		if(x==4){
			H::HLine(36,31,29,170,219);
            H::HLine(36,19,29,170,219);
			H::setcolor(167);H::gotoxy(48,31);cout<<"BACK";
		}
			// char xy;
    // xy = getch();
	op=getch();
    switch(op)
    {

        case '1':
        {
            H::cls();
            MNM2("Opening Website ........ ");
            openMyWebsite("http://training.antkh.com/");
			goto first;
        }break;
        case '2':
        {
            H::cls();
            MNM2("Opening Website ........ ");
            openMyWebsite("https://mptc.gov.kh/");
			goto first;
        }break;
        case '3':
        {
            H::cls();
            MNM2("Opening Website ........ ");
            openMyWebsite("Website/index.html");
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

    getch();
    return 0;
}