#include "Header/User/User.h"
#include "Header/Staff/design_staff.h"
#include "Header/Staff/staff.h"
#include "Header/Staff/designStaff4Admin.h"
#include "Header/Admin/ProductDesign.h"
#include "Header/Admin/product.h"
// #include "Header/MainCode/mainHeader.h"
////////////////////////////////////////////////////////////////////////////////////
void FirstConsole();
void BigMenu();
void LoginAsAdmin();
void AfterLoginAdmin();
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////  H::DisableButtonClose();
   H::setConsoleTitle("Flower Shop Management System");
   H::DisableScreenResize();
   H::setFixedScreenConsole(170,40);
   H::setFont(18,700);
//////////////////////////////////////////////////////////////////////////////////////////////////////
////								test for main design on The first console
	H::setcursor(0,0);
	FirstConsole();
	getch();
	H::cls();
	int x = 1;             
	char op,key;
	do{ 
		f:
		H::setcursor(0,0);	
		BigMenu();
		// start:
		do{
			// H::cls();
			BigMenu();

			if(x==1)
			{
				H::drawBoxSingleLineWithBG(33,12,23,3,130);
				H::setcolor(228); H::gotoxy(38,14); cout << "ADMIN PROFILE";
			}	
			if(x==2)
			{
				H::drawBoxSingleLineWithBG(33,17,23,3,130); 
				H::setcolor(228); H::gotoxy(42,19); cout << "ADMIN";
  
			}
			if(x==3)
			{
				H::drawBoxSingleLineWithBG(33,22,23,3,130);
				H::setcolor(228); H::gotoxy(42,24); cout << "STAFF";
  
			}
			if(x==4)
			{
				H::drawBoxSingleLineWithBG(33,27,23,3,130); 
				H::setcolor(228); H::gotoxy(42,29); cout << "USER";
  
			}
			if(x==5)
			{
				H::drawBoxSingleLineWithBG(33,32,23,3,130);
				H::setcolor(198); H::gotoxy(42,34); cout << "EXIT";
			}

			op = getch(); 
		    if (op == -32 || op == 0){
		        op = getch(); // actual key code
		        switch(op) {
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
		    }
		} while (op != 13);  
		H::setcolor(7);
		if(x==1)
		{
			H::cls();
			AboutUs();
			H::setcolor(0);
			H::cls();
			goto f;
			
		}
		if(x==2)
		{
			H::cls();
			LoginAsAdmin();
			  
			H::setcolor(0);
			H::cls();
			goto f;
		}
		if(x==3)
		{
			H::cls();
			StaffFeature();
			H::setcolor(0);
			H::cls();
			goto f;

		}
		if(x==4)
		{
			H::cls();
			UserBigMenu();
			H::setcolor(0);
			H::cls();
			goto f;
		}
		if(x=5)
		{
			H::cls();
			H::gotoxy(30,20);MNM2("Exiting The System .......");
			exit(0);
		}
	}while(true);
	getch();
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////
void AfterLoginAdmin()
{
	H::setcolor(0);
	H::cls();
do{
	d:
	H::cls();
	H::setcursor(0,0);
	int x=1;
	char op1;
	do{
		NewFlowerEdit();
		//animation top left
		H::HLine(0,0,85,51,219);
		
		//animation top left
		H::HLine(85,0,85,51,219);
		
		//border left
		H::VLine(2,0,39,51,219);
		H::VLine(3,0,39,51,219);

		//border right
		H::VLine(168,0,39,51,219);
		H::VLine(169,0,39,51,219);

		H::drawBoxSingleLineWithBG(47,3,81,3,136); //grey
		H::drawBoxSingleLineWithBG(45,4,81,3,145); //blue

	//////////////////////////////////////
		H::VLine(52,0,2,68,219);
		H::VLine(54,0,2,68,219);

		H::VLine(122,0,2,68,219);
		H::VLine(124,0,2,68,219);
	//////////////////////////////////////


		H::setcolor(151); H::gotoxy(50,4); cout << R"(  __   ____  _  _  __  __ _    ____  ____   __  ____  _  _  ____  ____ )";
		H::setcolor(151); H::gotoxy(50,5); cout << R"( / _\ (    \( \/ )(  )(  ( \  (  __)(  __) / _\(_  _)/ )( \(  _ \(  __))";
		H::setcolor(151); H::gotoxy(50,6); cout << R"(/    \ ) D (/ \/ \ )( /    /   ) _)  ) _) /    \ )(  ) \/ ( )   / ) _) )";
		H::setcolor(151); H::gotoxy(50,7); cout << R"(\_/\_/(____/\_)(_/(__)\_)__)  (__)  (____)\_/\_/(__) \____/(__\_)(____))";



		H::setcolor(6); H::gotoxy(5,1); cout << R"(             : )";
		H::setcolor(6); H::gotoxy(5,2); cout << R"(    `.       ;        .' )";
		H::setcolor(6); H::gotoxy(5,3); cout << R"(      `.  .-'''-.   .' )";
		H::setcolor(6); H::gotoxy(5,4); cout << R"(        ;'  __   _;' )";
		H::setcolor(6); H::gotoxy(5,5); cout << R"(       /   '_    _`\ )";
		H::setcolor(6); H::gotoxy(5,6); cout << R"(      |  _( a (  a  | )";
		H::setcolor(6); H::gotoxy(5,7); cout << R"( '''''| (_)    >    |`````` )";
		H::setcolor(6); H::gotoxy(5,8); cout << R"(       \    \    / / )";
		H::setcolor(6); H::gotoxy(5,9); cout << R"(        `.   `--'.' )";
		H::setcolor(6); H::gotoxy(5,10); cout << R"(       .' `-,,,-' `. )";
		H::setcolor(6); H::gotoxy(5,11); cout << R"(     .'      :      `.  )";
		H::setcolor(6); H::gotoxy(5,12); cout << R"(             : )";




		H::setcolor(2); H::gotoxy(135,1); cout << R"(          ;-._   .'````\)";
		H::setcolor(2); H::gotoxy(135,2); cout << R"(       .'    `\/       ;)";
		H::setcolor(1); H::gotoxy(135,3); cout << R"(        |       `\.---._|)";
		H::setcolor(1); H::gotoxy(135,4); cout << R"(     .--;   . ( .'      '. )";
		H::setcolor(4); H::gotoxy(135,5); cout << R"(    / _  \_  './ _.       `-._)";
		H::setcolor(4); H::gotoxy(135,6); cout << R"(   ( = \  )`""'\;--.         /)";
		H::setcolor(6); H::gotoxy(135,7); cout << R"(   {= (|  )     /`.         /)";
		H::setcolor(6); H::gotoxy(135,8); cout << R"(   ( =_/  )__..-\         .')";
		H::setcolor(3); H::gotoxy(135,9); cout << R"(    \    }/    / ;.____.-;/\)";
		H::setcolor(3); H::gotoxy(135,10); cout << R"(     '--' |  .'   |       \ \)";
		H::setcolor(5); H::gotoxy(135,11); cout << R"(          \  '    /       |\.\)";
		H::setcolor(5); H::gotoxy(135,12); cout << R"(           )    .'`-.    /  \ \)";
		H::setcolor(2); H::gotoxy(135,13); cout << R"(          /__.-'     \_.'    \ \)";

		H::drawBoxSingleLine(30,11,110,17,0); 
	

		H::drawBoxSingleLineWithBG(32,13,31,3,136);  H::setcolor(135); H::gotoxy(42,14); cout << "Flower Data"; // ah ng pel unselect
		H::drawBoxSingleLineWithBG(32,16,31,1,136); H::setcolor(135); H::gotoxy(40,17); cout << "Display User Data";
		H::drawBoxSingleLineWithBG(32,19,31,1,136);  H::setcolor(135); H::gotoxy(40,20); cout << "Staff Information";

		H::drawBoxSingleLineWithBG(32,22,31,1,136); H::setcolor(135); H::gotoxy(43,23); cout << "About Us";
		H::drawBoxSingleLineWithBG(32,25,31,1,136);  H::setcolor(135); H::gotoxy(44,26); cout << "Log Out";

		H::VLine(66,10,1,0,194);
		H::VLine(66,28,1,0,193);
		H::VLine(66,11,17,0,179);


		H::drawBoxSingleLine(69,11,68,15,1); 

		H::drawBoxSingleLineWithBG(76,22,54,1,136); H::setcolor(135); H::gotoxy(76,23); cout << "TIP : USE ARROW KEY UP DOWN AND PRESS ENTER FOR SELECT ";
		H::VLine(75,20,5,4,219);
		H::HLine(73,20,3,6,220);
		H::HLine(73,26,3,6,223);

		H::VLine(132,20,5,4,219);
		H::HLine(130,20,3,6,220);
		H::HLine(130,26,3,6,223);
		
		H::drawBoxSingleLineWithBG(84,15,38,3,145);
		H::VLine(90,11,3,6,221);
		H::VLine(92,11,3,6,221);

		H::VLine(115,11,3,6,221);
		H::VLine(117,11,3,6,221);


		if(x==1)
		{
			H::drawBoxSingleLineWithBG(32,13,31,1,145); H::setcolor(151); H::gotoxy(42,14); cout << "Flower Data"; // pel select
			H::setcolor(151); H::gotoxy(97,17); cout << "FLower Data";
		}
		if(x==2)
		{
			H::drawBoxSingleLineWithBG(32,16,31,1,145); H::setcolor(151); H::gotoxy(40,17); cout << "Display User Data";
			H::setcolor(151); H::gotoxy(97,17); cout << "Display User Data";
		}
		if(x==3)
		{
			H::drawBoxSingleLineWithBG(32,19,31,1,145);  H::setcolor(151); H::gotoxy(40,20); cout << "Staff Information";

			H::setcolor(151); H::gotoxy(97,17); cout << "Staff Information";
		}
		if(x==4)
		{
			H::drawBoxSingleLineWithBG(32,22,31,1,145); H::setcolor(151); H::gotoxy(43,23); cout << "About Us";
			H::setcolor(151); H::gotoxy(97,17); cout << "About Us";
		}
		if(x==5)
		{
			H::drawBoxSingleLineWithBG(32,25,31,1,145);  H::setcolor(151); H::gotoxy(44,26); cout << "Log Out";
			H::setcolor(151); H::gotoxy(97,17); cout << "Log Out";
		}
		op1 = getch(); 
		if (op1 == -32 || op1 == 0){
			op1 = getch(); // actual key code
			switch(op1) {
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
		}
	}while(op1 != 13);
	if(x==1)
	{
		H::setcolor(2);
		H::cls();
		test();
		goto d;
	}
	if(x==2)
	{
		char op7;
		H::setcolor(2);
		H::cls();
		ShowUserData();
		cout << "PRESS ESC FOR BACK";
		op7 = getch();
		if(op7 == 27)
		{
			goto d;
		}
	}
	if(x==3)
	{
		H::setcolor(2);
		H::cls();
		StaffAdmin();
		goto d;
		break;
	}
	if(x==4)
	{
		H::setcolor(0);
		H::cls();
		AboutUs();
		H::setcolor(0);
		H::cls();
		goto d;
	}
	if(x==5)
	{
		H::setcolor(0);
		H::cls();
		break;
	}
}while(getch() != 27);
}

void LoginAsAdmin()
{
	char username[50], password[50];
    int attempts = 0;
	// b:
    while (true)
    {
	NewFlowerEdit();
    //animation top left
	H::HLine(0,0,85,51,219);
	
	//animation top left
	H::HLine(85,0,85,51,219);
	
    //border left
	H::VLine(2,0,39,51,219);
	H::VLine(3,0,39,51,219);

    //border right
	H::VLine(168,0,39,51,219);
	H::VLine(169,0,39,51,219);

    H::drawBoxSingleLineWithBG(47,3,81,3,136); //grey
    H::drawBoxSingleLineWithBG(45,4,81,3,145); //blue

//////////////////////////////////////
    H::VLine(52,0,2,68,219);
    H::VLine(54,0,2,68,219);

    H::VLine(122,0,2,68,219);
    H::VLine(124,0,2,68,219);


//////////////////////////////////////
                                                

    H::setcolor(151); H::gotoxy(50,4); cout << R"( __     __    ___  __  __ _     __   ____     __   ____  _  _  __  __ _ )";
    H::setcolor(151); H::gotoxy(50,5); cout << R"((  )   /  \  / __)(  )(  ( \   / _\ / ___)   / _\ (    \( \/ )(  )(  ( \)";
    H::setcolor(151); H::gotoxy(50,6); cout << R"(/ (_/\(  O )( (_ \ )( /    /  /    \\___ \  /    \ ) D (/ \/ \ )( /    /)";
    H::setcolor(151); H::gotoxy(50,7); cout << R"(\____/ \__/  \___/(__)\_)__)  \_/\_/(____/  \_/\_/(____/\_)(_/(__)\_)__))";


    //arrow left (animation)
    H::HLine(5,14,20,4,220);
    H::HLine(9,15,20,1,220);
    H::HLine(13,16,20,6,220);
    H::HLine(18,17,20,3,220);

    H::HLine(22,18,20,5,220);

    H::HLine(18,19,20,3,220);
    H::HLine(13,20,20,6,220);
    H::HLine(9,21,20,1,220);
    H::HLine(5,22,20,4,220);


    //arrow right (animation)
    H::HLine(145,14,20,4,220);
    H::HLine(141,15,20,1,220);
    H::HLine(137,16,20,6,220);
    H::HLine(133,17,20,3,220);

    H::HLine(129,18,20,5,220);

    H::HLine(133,19,20,3,220);
    H::HLine(137,20,20,6,220);
    H::HLine(141,21,20,1,220);
    H::HLine(145,22,20,4,220);

    //upper box username
    H::VLine(61,10,3,6,219);
    H::VLine(111,10,3,6,219);
    H::HLine(61,11,49,6,223);

    H::HLine(64,12,10,5,220);
    H::HLine(75,12,10,2,220);
    H::HLine(86,12,10,3,220);
    H::HLine(97,12,10,4,220);

    //left box username
    H::VLine(51,15,11,6,219);
    H::HLine(50,15,5,6,220);
    H::HLine(50,26,5,6,223);
    H::VLine(53,15,10,70,237);
    H::VLine(54,15,10,70,237);

    //right box username
    H::VLine(121,15,11,6,219);
    H::HLine(116,15,5,6,220);
    H::HLine(116,26,5,6,223);
    H::VLine(118,15,10,70,237);
    H::VLine(119,15,10,70,237);

    //box username
    H::drawBoxSingleLineWithBG(56,14,59,12,136); 

    // H::setcolor(135); H::gotoxy(66,16); cout << "USERNAME";
    // H::drawBoxSingleLineWithBG(66,17,39,1,145); H::setcolor(151); H::gotoxy(70,18); cout << "FSMS";

    // H::setcolor(135); H::gotoxy(66,22); cout << "PASSWORD";
    // H::drawBoxSingleLineWithBG(66,23,39,1,145); H::setcolor(151); H::gotoxy(70,24); cout << "Fsms168";

    H::VLine(66,27,3,145,219);
    H::HLine(65,31,41,1,223);
    H::VLine(106,27,3,145,219);

        // ===== UI DESIGN (your H:: code goes here) =====
        H::drawBoxSingleLineWithBG(56,14,59,12,136); 

		H::drawBoxSingleLineWithBG(66,17,39,1,145); 
		H::drawBoxSingleLineWithBG(66,23,39,1,145);
		H::setcursor(1,8);
    	H::setcolor(135); H::gotoxy(66,16); cout << "USERNAME";
        H::setcolor(135); H::gotoxy(66,22); cout << "PASSWORD";
   		H::setcolor(151); H::gotoxy(70,18); H::inputLetter(username,5);
    	H::setcolor(151); H::gotoxy(70,24); H::inputPasswordMask(password,8);

		H::setcursor(0,8);
        // ===== Check login =====
        if ((strcmp(username, "fsms") == 0 || strcmp(username, "FSMS") == 0) &&
            (strcmp(password, "fsms168") == 0 || strcmp(password, "FSMS168") == 0))
        {
			H::setcursor(0,8);
            H::setcolor(10);
			H::gotoxy(69,29); cout << "                                 ";
            H::gotoxy(69,29); cout << "         Login Success           ";
			H::setcolor(0);
			H::cls();
			AfterLoginAdmin();
            break;
        }
        else
        {
			H::setcursor(0,8);
            attempts++;
            H::setcolor(244);
            H::gotoxy(69,28); cout << " Incorrect Password  Or Username ";


            if (attempts == 3)
            {
                H::gotoxy(66,29); cout << " Too many attempts! Wait 10 seconds....";
                H::delay(10000); // 10 seconds
                attempts = 0; // reset attempts after lockout
				H::setcolor(0);
				H::setcursor(0,0);
				H::cls();
            }
            else
            {
				H::setcursor(0,8);
                H::gotoxy(74,29); cout << " Try again (" << (3 - attempts) << " left)....";

            }
        }
    }

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////////
void FirstConsole()
{
    	//animation top left
	H::HLine(0,0,85,17,219);
	
	//animation top left
	H::HLine(85,0,85,17,219);
	
	//animation bottom left
	H::HLine(0,39,85,17,219);
	
	//animation bottom right
	H::HLine(85,39,85,17,219);
	
	
	//border left
	H::VLine(1,0,39,17,219);
	H::VLine(2,0,39,17,219);
	
	//border right
	H::VLine(169,0,39,17,219);
	H::VLine(170,0,39,17,219);

	H::setcolor(6); H::gotoxy(2,1);cout << R"(       __   __ )";
	H::setcolor(6); H::gotoxy(2,2);cout << R"(    .-(  '.'  )-.)";
	H::setcolor(6); H::gotoxy(2,3);cout << R"(   (   \  |  /   ))";
	H::setcolor(6); H::gotoxy(2,4);cout << R"(  ( `'-.;;;;;.-'` ))";
	H::setcolor(6); H::gotoxy(2,5);cout << R"( ( :-==;;;;;;;==-: ))";
	H::setcolor(6); H::gotoxy(2,6);cout << R"(  (  .-';;;;;'-.  ))";
	H::setcolor(6); H::gotoxy(2,7);cout << R"(   (`  /  |  \  `))";
	H::setcolor(6); H::gotoxy(2,8);cout << R"(   '-(__.'.__)-')";

	H::setcolor(6); H::gotoxy(108,7); cout << R"(      __   __ )";
	H::setcolor(6); H::gotoxy(108,8); cout << R"(   .-(  '.'  )-.)";
	H::setcolor(6); H::gotoxy(108,9); cout << R"(  (   \  |  /   ))";
	H::setcolor(6); H::gotoxy(108,10); cout << R"( ( `'-.;;;;;.-'` ))";
	H::setcolor(6); H::gotoxy(108,11); cout << R"(( :-==;;;;;;;==-: ))";
	H::setcolor(6); H::gotoxy(108,12);cout << R"( (  .-';;;;;'-.  ))";
	H::setcolor(6); H::gotoxy(108,13);cout << R"(  (`  /  |  \  `))";
	H::setcolor(6); H::gotoxy(108,14);cout << R"(  '-(__.'.__)-')";


	

	H::setcolor(1); H::gotoxy(14,8); cout << R"(     __  ___                                                   __     _____            __               )"; 
	H::setcolor(7); H::gotoxy(14,9);cout << R"(    /  |/  /____ _____  ____ _____ ____  ____ ___  ___  ____  / /_   / ___/__  _______/ /____  ____ ___ )"; 
	H::setcolor(6); H::gotoxy(14,10);cout << R"(   / /|_/ // __ `/ __ \/ __ `/ __ `/ _ \/ __ `__ \/ _ \/ __ \/ __/   \__ \/ / / / ___/ __/ _ \/ __ `__ \)"; 
	H::setcolor(5); H::gotoxy(14,11);cout << R"(  / /  / // /_/ / / / / /_/ / /_/ /  __/ / / / / /  __/ / / / /_    ___/ / /_/ (__  ) /_/  __/ / / / / /)"; 
	H::setcolor(4); H::gotoxy(14,12);cout << R"( /_/  /_/ \__,_/_/ /_/\__,_/\__, /\___/_/ /_/ /_/\___/_/ /_/\__/   /____/\__, /____/\__/\___/_/ /_/ /_/ )"; 
	H::setcolor(3); H::gotoxy(14,13);cout << R"(                           /____/                                       /____/                          )"; 

	H::setcolor(7); H::gotoxy(10,3);cout << R"(     ________                            _____ __ )";                  
	H::setcolor(6); H::gotoxy(10,4);cout << R"(    / ____/ /____ _      _____  _____   / ___// /_  ____  ____  )";   
	H::setcolor(5); H::gotoxy(10,5);cout << R"(   / /_  / // __ \ | /| / / _ \/ ___/   \__ \/ __ \/ __ \/ __ \)";    
	H::setcolor(4); H::gotoxy(10,6);cout << R"(  / __/ / // /_/ / |/ |/ /  __/ /      ___/ / / / / /_/ / /_/ /)";   
	H::setcolor(3); H::gotoxy(10,7);cout << R"( /_/   /_/ \____/|__/|__/\___/_/      /____/_/ /_/\____/ .___/)";     
	H::setcolor(2); H::gotoxy(10,8);cout << R"(         __  ___                                      /_/ )";


	H::setcolor(6); H::gotoxy(2,1);cout << R"(       __  )";
	H::setcolor(6); H::gotoxy(2,2);cout << R"(    .-(  '.)";
	H::setcolor(6); H::gotoxy(2,3);cout << R"(   (   \  |)";
	H::setcolor(6); H::gotoxy(2,4);cout << R"(  ( `'-.;;;)";
	H::setcolor(6); H::gotoxy(2,5);cout << R"( ( :-==;;;;)";
	H::setcolor(6); H::gotoxy(2,6);cout << R"(  (  .-';;)";
	H::setcolor(6); H::gotoxy(2,7);cout << R"(   (`  / )";
	H::setcolor(6); H::gotoxy(2,8);cout << R"(   '-(__.)";


	H::setcolor(6); H::gotoxy(108,7); cout << R"(      __   __ )";
	H::setcolor(6); H::gotoxy(108,8); cout << R"(   .-(  '.'  )-.)";
	// H::setcolor(6); H::gotoxy(108,9); cout << R"(  (      |)";
	// H::setcolor(6); H::gotoxy(108,10); cout << R"( ( `'-.;;;;;.-'` ))";
	// H::setcolor(6); H::gotoxy(108,11); cout << R"(( :-==;;;;;;;==-: ))";
	// H::setcolor(6); H::gotoxy(108,11);cout << R"( (  .-';;;;;'-.  ))";
	H::setcolor(6); H::gotoxy(108,13);cout << R"(  (`  /  |  \  `))";
	H::setcolor(6); H::gotoxy(108,14);cout << R"(  '-(__.'.__)-')";


	H::drawBoxSingleLineWithBG(130,12,35,1,247);
	H::setcolor(241); H::gotoxy(133,13);cout << "ANT Technology Training Center";



//no animation

	// H::setcolor(1); H::gotoxy(74,1);cout << R"(           .-~~~-. )";
	// H::setcolor(1); H::gotoxy(74,2);cout << R"(   .- ~ ~-(       )_ _ )";
	// H::setcolor(1); H::gotoxy(74,3);cout << R"(  /                     ~ -. )";
	// H::setcolor(1); H::gotoxy(74,4);cout << R"( |                           \ )";
	// H::setcolor(1); H::gotoxy(74,5);cout << R"(  \                         .' )";
	// H::setcolor(1); H::gotoxy(74,6);cout << R"(    ~- . _____________ . -~ )";
	
	H::setcolor(6); H::gotoxy(140,2);cout << R"(       ;   :   ; )";
	H::setcolor(6); H::gotoxy(140,3);cout << R"(    .   \_,!,_/   , )";
	H::setcolor(6); H::gotoxy(140,4);cout << R"(     `.,'     `.,' )";
	H::setcolor(6); H::gotoxy(140,5);cout << R"(      /         \ )";
	H::setcolor(6); H::gotoxy(140,6);cout << R"( ~ -- :         : -- ~ )";
	H::setcolor(6); H::gotoxy(140,7);cout << R"(      \         / )";
	H::setcolor(6); H::gotoxy(140,8);cout << R"(     ,'`._   _.'`. )";
	H::setcolor(6); H::gotoxy(140,9);cout << R"(    '   / `!` \   ` )";
	H::setcolor(6); H::gotoxy(140,10);cout << R"(       ;   :   ;  )";


	H::setcolor(1); H::gotoxy(10,16); cout << R"(  _ " _  )";
	H::setcolor(5); H::gotoxy(10,17); cout << R"( (_\|/_) )";
	H::setcolor(3); H::gotoxy(10,18); cout << R"(  (/|\)  )";         

	H::setcolor(2); H::gotoxy(3,21); cout << R"(  _ " _  )";
	H::setcolor(6); H::gotoxy(3,22); cout << R"( (_\|/_) )";
	H::setcolor(4); H::gotoxy(3,23); cout << R"(  (/|\)  )";   

	H::setcolor(4); H::gotoxy(20,19); cout << R"(  _ " _  )";
	H::setcolor(6); H::gotoxy(20,20); cout << R"( (_\|/_) )";
	H::setcolor(2); H::gotoxy(20,21); cout << R"(  (/|\)  )";   

	H::setcolor(3); H::gotoxy(14,25); cout << R"(  _ " _  )";
	H::setcolor(5); H::gotoxy(14,26); cout << R"( (_\|/_) )";
	H::setcolor(1); H::gotoxy(14,27); cout << R"(  (/|\)  )";   

	

	H::setcolor(1); H::gotoxy(150,16); cout << R"(  _ " _  )";
	H::setcolor(5); H::gotoxy(150,17); cout << R"( (_\|/_) )";
	H::setcolor(3); H::gotoxy(150,18); cout << R"(  (/|\)  )";         

	H::setcolor(4); H::gotoxy(155,20); cout << R"(  _ " _  )";
	H::setcolor(6); H::gotoxy(155,21); cout << R"( (_\|/_) )";
	H::setcolor(2); H::gotoxy(155,22); cout << R"(  (/|\)  )";   

	H::setcolor(3); H::gotoxy(148,24); cout << R"(  _ " _  )";
	H::setcolor(5); H::gotoxy(148,25); cout << R"( (_\|/_) )";
	H::setcolor(1); H::gotoxy(148,26); cout << R"(  (/|\)  )";
                
	//left
	H::setcolor(1); H::gotoxy(34,16);cout << R"(     ______ )";    
	H::setcolor(2); H::gotoxy(34,17);cout << R"(    / ____/)";   
	H::setcolor(4); H::gotoxy(34,18);cout << R"(   / /_    )";    
	H::setcolor(5); H::gotoxy(34,19);cout << R"(  / __/   )";    
	H::setcolor(6); H::gotoxy(34,20);cout << R"( /_/   )";  
	
	
	H::setcolor(1); H::gotoxy(34,21);cout << R"(    ____ )";   
	H::setcolor(2); H::gotoxy(34,22);cout << R"(   / ___/)";   
	H::setcolor(4); H::gotoxy(34,23);cout << R"(   \__ \ )";   
	H::setcolor(5); H::gotoxy(34,24);cout << R"(  ___/ / )";   
	H::setcolor(6); H::gotoxy(34,25);cout << R"( /____/)";


	H::setcolor(1); H::gotoxy(34,26);cout << R"(     __  ___)";
	H::setcolor(2); H::gotoxy(34,27);cout << R"(    /  |/  /)";
	H::setcolor(4); H::gotoxy(34,28);cout << R"(   / /|_/ /)"; 
	H::setcolor(5); H::gotoxy(34,29);cout << R"(  / /  / /)";  
	H::setcolor(6); H::gotoxy(34,30);cout << R"( /_/  /_/)"; 
	
	H::setcolor(1); H::gotoxy(34,31);cout << R"(    ____ )";   
	H::setcolor(2); H::gotoxy(34,32);cout << R"(   / ___/)";   
	H::setcolor(4); H::gotoxy(34,33);cout << R"(   \__ \ )";   
	H::setcolor(5); H::gotoxy(34,34);cout << R"(  ___/ / )";   
	H::setcolor(6); H::gotoxy(34,35);cout << R"( /____/)";


	//right
	H::setcolor(1); H::gotoxy(135,16);cout << R"(     ______ )";    
	H::setcolor(2); H::gotoxy(135,17);cout << R"(    / ____/)";   
	H::setcolor(4); H::gotoxy(135,18);cout << R"(   / /_    )";    
	H::setcolor(5); H::gotoxy(135,19);cout << R"(  / __/   )";    
	H::setcolor(6); H::gotoxy(135,20);cout << R"( /_/   )";  
	
	
	H::setcolor(1); H::gotoxy(135,21);cout << R"(    ____ )";   
	H::setcolor(2); H::gotoxy(135,22);cout << R"(   / ___/)";   
	H::setcolor(4); H::gotoxy(135,23);cout << R"(   \__ \ )";   
	H::setcolor(5); H::gotoxy(135,24);cout << R"(  ___/ / )";   
	H::setcolor(6); H::gotoxy(135,25);cout << R"( /____/)";


	H::setcolor(1); H::gotoxy(135,26);cout << R"(     __  ___)";
	H::setcolor(2); H::gotoxy(135,27);cout << R"(    /  |/  /)";
	H::setcolor(4); H::gotoxy(135,28);cout << R"(   / /|_/ /)"; 
	H::setcolor(5); H::gotoxy(135,29);cout << R"(  / /  / /)";  
	H::setcolor(6); H::gotoxy(135,30);cout << R"( /_/  /_/)"; 
	
	H::setcolor(1); H::gotoxy(135,31);cout << R"(    ____ )";   
	H::setcolor(2); H::gotoxy(135,32);cout << R"(   / ___/)";   
	H::setcolor(4); H::gotoxy(135,33);cout << R"(   \__ \ )";   
	H::setcolor(5); H::gotoxy(135,34);cout << R"(  ___/ / )";   
	H::setcolor(6); H::gotoxy(135,35);cout << R"( /____/)";

	
	H::setcolor(6); H::gotoxy(2,28);cout << R"(      _ _ )";
	H::setcolor(6); H::gotoxy(2,29);cout << R"(    _{ ' }_ )";
	H::setcolor(6); H::gotoxy(2,30);cout << R"(   { `.!.` } )";
	H::setcolor(6); H::gotoxy(2,31);cout << R"(   ',_/Y\_,' )";
	H::setcolor(6); H::gotoxy(2,32);cout << R"(     {_,_} )";
	H::setcolor(6); H::gotoxy(2,33);cout << R"(       | )";
	H::setcolor(2); H::gotoxy(2,34);cout << R"(     (\|  /) )";
	H::setcolor(2); H::gotoxy(2,35);cout << R"(      \| // )";
	H::setcolor(2); H::gotoxy(2,36);cout << R"(       |// )";
	H::setcolor(2); H::gotoxy(2,37);cout << R"(    \\ |/ // )";
	H::setcolor(2); H::gotoxy(2,38);cout << R"(^^^^^^^^^^^^^^^ )";


	H::setcolor(4); H::gotoxy(17,28);cout << R"(       .-. )";
	H::setcolor(4); H::gotoxy(17,29);cout << R"( __   /   \   __ )";
	H::setcolor(4); H::gotoxy(17,30);cout << R"((  `'.\   /.'`  ) )";
	H::setcolor(4); H::gotoxy(17,31);cout << R"( '-._.(;;;)._.-' )";
	H::setcolor(4); H::gotoxy(17,32);cout << R"( .-'  ,`"`,  '-. )";
	H::setcolor(4); H::gotoxy(17,33);cout << R"((__.-'/   \'-.__) )";
	H::setcolor(4); H::gotoxy(17,34);cout << R"(      \   /| )";
	H::setcolor(4); H::gotoxy(17,35);cout << R"(       '-' | )";
	H::setcolor(2); H::gotoxy(17,36);cout << R"(           | )";
	H::setcolor(2); H::gotoxy(17,37);cout << R"(           / )";
	H::setcolor(2); H::gotoxy(17,38);cout << R"(\|/\|\|/\|/\|/\|/)";

	
	// H::setcolor(6); H::gotoxy(34,28);cout << R"(      _ _ )";
	// H::setcolor(6); H::gotoxy(34,29);cout << R"(    _{ ' }_ )";
	// H::setcolor(6); H::gotoxy(34,30);cout << R"(   { `.!.` } )";
	// H::setcolor(6); H::gotoxy(34,31);cout << R"(   ',_/Y\_,' )";
	// H::setcolor(6); H::gotoxy(34,32);cout << R"(     {_,_} )";
	// H::setcolor(6); H::gotoxy(34,33);cout << R"(       | )";
	// H::setcolor(2); H::gotoxy(34,34);cout << R"(     (\|  /) )";
	// H::setcolor(2); H::gotoxy(34,35);cout << R"(      \| // )";
	// H::setcolor(2); H::gotoxy(34,36);cout << R"(       |// )";
	// H::setcolor(2); H::gotoxy(34,37);cout << R"(    \\ |/ // )";
	// H::setcolor(2); H::gotoxy(34,38);cout << R"(^^^^^^^^^^^^^^^ )";
	
	H::setcolor(2); H::gotoxy(146,28);cout << R"(        a@@@@a      )";       
	H::setcolor(2); H::gotoxy(146,29);cout << R"(    a@@@@@@@@@@@@a  )";       
	H::setcolor(2); H::gotoxy(146,30);cout << R"(  a@@@@@@by@@@@@@@@a  )";     
	H::setcolor(2); H::gotoxy(146,31);cout << R"(a@@@@@S@C@E@S@W@@@@@@a)";    
	H::setcolor(2); H::gotoxy(146,32);cout << R"(@@@@@@@@@@@@@@@@@@@@@@)";    
	H::setcolor(2); H::gotoxy(146,33);cout << R"( `@@@@@@`\\//'@@@@@@' )";    
	H::setcolor(0); H::gotoxy(146,34);cout << R"(          ||)";
	H::setcolor(0); H::gotoxy(146,35);cout << R"(          ||)";         
	H::setcolor(0); H::gotoxy(146,36);cout << R"(          ||)";
	H::setcolor(0); H::gotoxy(146,37);cout << R"(          ||)";
	H::setcolor(0); H::gotoxy(146,38);cout << R"(         /MM\)";
	//grass
	H::setcolor(2); H::gotoxy(34,37); cout << R"(/\|//\|/\|/,\\|/|/|// \|/ \|//\|/\|/,\\|/|/|// \|/\|//\|/\|/,\\|/|/\/ /\|//\|/\|/,\\|/|/|///\|//\|/\|/,\\|/|/|//|/|/|//,\\|/|/|//|/|/|)";
	H::setcolor(2); H::gotoxy(34,38); cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

	H::setcolor(0); H::gotoxy(156,37);cout << R"(||)";
	H::setcolor(0); H::gotoxy(155,38);cout << R"(/MM\)";



	//shop
	system("chcp 65001 > nul");
	H::setcolor(1); H::gotoxy(46,16);cout << R"(                          ▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒░░▒▒▓▓▓ )";
	H::setcolor(2); H::gotoxy(46,17);cout << R"( 	               ▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒░░░▒▒▒▓▓▓ )";
	H::setcolor(3); H::gotoxy(46,18);cout << R"(              ▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒░░░▒▒▒▓▓▓  )";
	H::setcolor(4); H::gotoxy(46,19);cout << R"(        ▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒░░░▒▒▓▓▓▓▓▓▓▒  )";
	H::setcolor(5); H::gotoxy(46,20);cout << R"(  ▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓  )";
	H::setcolor(6); H::gotoxy(46,21);cout << R"(    ░░░░░░▓▓▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓░░░░░░▒▒▓▓▒▒░░░░░░░░░░░░▒▒▓▓░░░░░░  )";
	H::setcolor(7); H::gotoxy(46,22);cout << R"(    ░░░░░░▓▓░░░░             ░░░░░              ░░░░▓▓░░  ░░▓▓░░░░░░░░░░░░░░░░▓▓░░  ░░  )";
	H::setcolor(8); H::gotoxy(46,23);cout << R"(    ░░    ▓▓░░     FLOWER SHOP                    ░░▓▓░░  ░░▓▓░░            ░░▓▓░░  ░░  )";
	H::setcolor(1); H::gotoxy(46,24);cout << R"(    ░░    ▓▓░░                                    ░░▓▓░░  ░░▓▓░░      |     ░░▓▓░░░░░░)";
	H::setcolor(2); H::gotoxy(46,25);cout << R"(    ░░    ▓▓░░             MANAGEMENT SYSTEM      ░░▓▓░░  ░░▓▓░░    __|\__  ░░▓▓░░  ░░  )";
	H::setcolor(3); H::gotoxy(46,26);cout << R"(    ░░    ▓▓░░                                    ░░▓▓░░  ░░▓▓░░   | OPEN | ░░▓▓░░  ░░  )";
	H::setcolor(4); H::gotoxy(46,27);cout << R"(    ░░░░░░▓▓░░        Credit ░░░░░  MNM           ░░▓▓░░░░░░▓▓░░   |______| ░░▓▓░░  ░░  )";
	H::setcolor(5); H::gotoxy(46,28);cout << R"(    ░░    ▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓░░  ░░▓▓░░            ░░▓▓░░░░░░  )";
	H::setcolor(6); H::gotoxy(46,29);cout << R"(    ░░    ▓▓▓▓███████▓▓▓▓▓▓▓▓███████▓▓████▓▓▓▓▓▓██▓▓▓▓░░  ░░▓▓░░            ░░▓▓░░  ░░   )";
	H::setcolor(7); H::gotoxy(46,30);cout << R"(    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓██▓▓████▓▓▓▓████▓▓▓▓░░  ░░  )";
	H::setcolor(8); H::gotoxy(46,31);cout << R"(    ░░    ░░       ░░        ░░          ░░       ░░    ░░▓▓██▓▓▓▓▓▓██▓▓▓▓▓▓██▓▓░░  ░░  )";
	H::setcolor(1); H::gotoxy(46,32);cout << R"(    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓░░░░░░  )";
	H::setcolor(2); H::gotoxy(46,33);cout << R"(  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒░░░░░░░░░░░░)";
	system("chcp 437 > nul");

	H::setcolor(7); H::gotoxy(77,35);cout << "PRESS"; H::setcolor(1); cout << " [ANY] "  ; H::setcolor(7); cout << "KEY TO CONTINUE";

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
void BigMenu()
{
    //  big border blue (For Put Animation)
  H::HLine(4,0,162,59,255);
  H::HLine(4,39,162,59,255);

  H::VLine(1,1,36,59,255);
  H::VLine(2,1,36,59,255);

  H::VLine(169,1,36,59,255);
  H::VLine(170,1,36,59,255);


  //border menu form
  H::setcolor(7);

    H::gotoxy(3, 1); cout << R"(                                  '                 '                            o          .:'                         .+                 )";
	H::gotoxy(3, 2); cout << R"(      .     '                                                                           _.::'                                              )";
	H::gotoxy(3, 3); cout << R"(                     .  .                                     +       +                (_.'      +          '                              )";
	H::gotoxy(3, 4); cout << R"(.                     |   +                           .:'                       '  .   o                .   .  .                     )";
	H::gotoxy(3, 5); cout << R"(                     -o-                   '      _.::'                                       .                o          *          )";
	H::gotoxy(3, 6); cout << R"(    *    +  o       + |               *          (_.'               '                                                                )";
	H::gotoxy(3, 7); cout << R"(                      .         .:'                                      .                               *                          )";
	H::gotoxy(3, 8); cout << R"(      .-.                   _.::'      '                             .                                                    .-.       )";
	H::gotoxy(3, 9); cout << R"(     ( (                   (_.'                             *                         +                            .     ( (        )";
	H::gotoxy(3, 10); cout << R"(      `-'                                        .   *              .                                           '                             `-'       )";
	
	H::gotoxy(50, 1); cout << R"(  _|_         .     .     .             .        '                            +                                    )";
	H::gotoxy(50, 2); cout << R"(   |                                                                       +                                       )";
	H::gotoxy(50, 3); cout << R"(                         *                                                                         o               )";
	H::gotoxy(50, 4); cout << R"(             *                                                           .                       .              '  )";
	H::gotoxy(50, 5); cout << R"(                                         .               '        +                                                )";
	H::gotoxy(50, 6); cout << R"(                                             '             '       o          .:'                         .+       )";
	H::gotoxy(50, 7); cout << R"(                 .     '                                                                           _.::'           )";
	H::gotoxy(50, 8); cout << R"(                                .  .                                +       +                (_.'      +          ')";
	H::gotoxy(50, 9); cout << R"(           .                           |   +     .:'                       '  .   o                .   .  .        )";
	H::gotoxy(50, 10); cout << R"(                                      -o-                   '      _.::'           .                o          * )";

  H::gotoxy(123, 1); cout << R"(		         .    '            + )"; 
	H::gotoxy(123, 2); cout << R"(            '                  |)"; 
	H::gotoxy(123, 3); cout << R"(          ()    .-.,="``"=.    - o -)"; 
	H::gotoxy(123, 4); cout << R"(                '=/_       \     |)"; 
	H::gotoxy(123, 5); cout << R"(             *   |  '=._    |)"; 
	H::gotoxy(123, 6); cout << R"(                  \     `=./`,   ')"; 
	H::gotoxy(123, 7); cout << R"(               .   '=.__.=' `='      *)"; 
	H::gotoxy(123, 8); cout << R"(    +                         +)"; 
	H::gotoxy(123, 9); cout << R"(         O      *        '    .)"; 


  H::HLine(45,2,82,4,220);
  H::HLine(41,3,88,1,220);
  H::HLine(38,4,94,6,220);

  H::HLine(35,5,100,5,220);

  H::HLine(38,6,94,6,220);
  H::HLine(41,7,88,1,220);
  H::HLine(45,8,82,4,220);

  
  H::setcolor(1); H::gotoxy(57,3); cout << R"(    __  __________   ____  __   __________  ____  __  ___)";
  H::setcolor(2); H::gotoxy(57,4); cout << R"(   /  |/  / ____/ | / / / / /  / ____/ __ \/ __ \/  |/  /)";
  H::setcolor(3); H::gotoxy(57,5); cout << R"(  / /|_/ / __/ /  |/ / / / /  / /_  / / / / /_/ / /|_/ / )";
  H::setcolor(4); H::gotoxy(57,6); cout << R"( / /  / / /___/ /|  / /_/ /  / __/ / /_/ / _, _/ /  / /  )";
  H::setcolor(5); H::gotoxy(57,7); cout << R"(/_/  /_/_____/_/ |_/\____/  /_/    \____/_/ |_/_/  /_/   )";
                                                         

  H::HLine(6,11,158,93,255);
//left
  H::VLine(9,11,27,93,255); 
  H::VLine(10,11,27,93,255);
  H::VLine(5,14,21,70,237);
  H::VLine(6,14,21,70,237);
 
//right
  H::VLine(161,11,27,93,255); 
  H::VLine(162,11,27,93,255);
  H::VLine(165,14,21,70,237);
  H::VLine(166,14,21,70,237);


//inside menu left
  H::drawBoxSingleLineWithBG(33,12,23,3,179); H::setcolor(181); H::gotoxy(38,14); cout << "ADMIN PROFILE";
  H::drawBoxSingleLineWithBG(33,17,23,3,179); H::setcolor(181); H::gotoxy(42,19); cout << "ADMIN";
  H::drawBoxSingleLineWithBG(33,22,23,3,179); H::setcolor(181); H::gotoxy(42,24); cout << "STAFF";
  H::drawBoxSingleLineWithBG(33,27,23,3,179); H::setcolor(181); H::gotoxy(42,29); cout << "USER";
  H::drawBoxSingleLineWithBG(33,32,23,3,179); H::setcolor(181); H::gotoxy(42,34); cout << "EXIT";

  //grass
 H::setcolor(2); H::gotoxy(10,37); cout << R"(/\|//\|/\|/,\\|/|/|// \|/ \|//\|/\|/,\\|/|/|// \|/\|//\|/\|/,\\|/|/\/ )";
 H::setcolor(2); H::gotoxy(10,38); cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";




 H::setcolor(1); H::gotoxy(10,29); cout << R"(      |\\._)";
 H::setcolor(1); H::gotoxy(10,30); cout << R"(     |   66__)";
 H::setcolor(2); H::gotoxy(10,31); cout << R"(      \    _.P)";
 H::setcolor(2); H::gotoxy(10,32); cout << R"(  ,    `) ()";
 H::setcolor(4); H::gotoxy(10,33); cout << R"(  )\   / __\__)";
 H::setcolor(4); H::gotoxy(10,34); cout << R"( / /  / -._);_))";
 H::setcolor(6); H::gotoxy(10,35); cout << R"(|  `\/  \ __|\)";
 H::setcolor(6); H::gotoxy(10,36); cout << R"( \  ;    )  / ))";
 H::setcolor(5); H::gotoxy(10,37); cout << R"(  `\|   /__/ /__  )";
 H::setcolor(5); H::gotoxy(10,38); cout << R"(    `\______)___))";


 H::setcolor(4); H::gotoxy(58,32); cout << R"(         _  _)";
 H::setcolor(6); H::gotoxy(58,33); cout << R"(        (.)(.))";
 H::setcolor(4); H::gotoxy(58,34); cout << R"(    ,-.(.____.),-.)";  
 H::setcolor(3); H::gotoxy(58,35); cout << R"(   ( \ \ '--' / / ))";
 H::setcolor(2); H::gotoxy(58,36); cout << R"(    \ \ / ,. \ / /)";
 H::setcolor(5); H::gotoxy(58,37); cout << R"(     ) '| || |' ( mrf)";
 H::setcolor(7); H::gotoxy(58,38); cout << R"( OoO'- OoO''OoO -'OoO)";

  //line in the middle of inside menu
  H::VLine(80,10,28,93,255);

  //inside menu right
//   H::drawBoxSingleLine(90,16,60,5,1);
//   H::VLine(95,11,5,4,219);
//   H::VLine(145,11,5,4,219);

//   H::VLine(89,19,3,6,219);
//   H::HLine(88,23,4,6,223);

//   H::VLine(152,19,3,6,219);
//   H::HLine(148,23,4,6,223);





  H::setcolor(3); H::gotoxy(100,12); cout << R"(                                 _ " _  )";
  H::setcolor(4); H::gotoxy(100,13); cout << R"(  _ " _                         (_\|/_) )";
  H::setcolor(6); H::gotoxy(100,14); cout << R"( (_\|/_)  _ " _         _ " _    (/|\)  )";
  H::setcolor(2); H::gotoxy(100,15); cout << R"(  (/|\)  (_\|/_) " _   (_\|/_)  )";
  H::setcolor(1); H::gotoxy(100,16); cout << R"(          (/|\)_\|/_)   (/|\) )";
  H::setcolor(5); H::gotoxy(100,17); cout << R"(               (/|\)  )";

  H::setcolor(2); H::gotoxy(140,22); cout << R"(     _   _  )";
  H::setcolor(6); H::gotoxy(140,23); cout << R"(    ( | / ) )";
  H::setcolor(2); H::gotoxy(140,24); cout << R"(  \\ \|/,'_ )";
  H::setcolor(6); H::gotoxy(140,25); cout << R"(  (")(_)()))=- )";
  H::setcolor(2); H::gotoxy(140,26); cout << R"(     <\\ )";

       


  H::setcolor(1); H::gotoxy(92,19); cout << R"(          __________________________________ )";
  H::setcolor(1); H::gotoxy(92,20); cout << R"(         | ________________________________ | )";
  H::setcolor(1); H::gotoxy(92,21); cout << R"(         ||                                || )";
  H::setcolor(1); H::gotoxy(92,22); cout << R"(         ||                                || )";
  H::setcolor(1); H::gotoxy(92,23); cout << R"(         ||                                || )";
  H::setcolor(1); H::gotoxy(92,24); cout << R"(         ||                                || )";
  H::setcolor(1); H::gotoxy(92,25); cout << R"(         ||________________________________|| )";
  H::setcolor(1); H::gotoxy(92,26); cout << R"(         | _______________   ______________ | )";
  H::setcolor(1); H::gotoxy(92,27); cout << R"(         ||               | |              || )";
  H::setcolor(1); H::gotoxy(92,28); cout << R"(         ||               | |              ||     .- )";
  H::setcolor(6); H::gotoxy(92,29); cout << R"(         ||               | |          .-. ||  .-' )";
  H::setcolor(4); H::gotoxy(92,30); cout << R"(     .-'||| _             | |        \|\_/ ||.' )";
  H::setcolor(6); H::gotoxy(92,31); cout << R"( |`-.|/_/||'./\   _.-._   | ||`-.    ('||\>-'_.-._ .-'| )";
  H::setcolor(5); H::gotoxy(92,32); cout << R"( \_\|.-._||\`-.| (.--. )  | |\_\|-'|  '`-' |( .--.)\/_/ )";
  H::setcolor(4); H::gotoxy(92,33); cout << R"(   ( .--.)| `'"Y((\_))_)) |_.-._\/_/_.-._  ((_((_/)) _ )";
  H::setcolor(3); H::gotoxy(92,34); cout << R"(  ((_((_/)) _.-._(_.-'.-'|(.-'-.)  (.-`-.) ||(`-._)|\ \ )";
  H::setcolor(1); H::gotoxy(92,35); cout << R"(    (`.-'``'-.`-.)`-`_\/_/(_((_/))((\_))_))l-.`'-'_`-.| )";
  H::setcolor(4); H::gotoxy(92,36); cout << R"(     /'-___(\_`._))|\.-.___(`-._.-.__.-')__|`-,\|\ \ )";
  H::setcolor(2); H::gotoxy(92,37); cout << R"( /|__(_.-'`._`-\_/|/_'`-(_.--.)`-'`__'\/-;`-.| (`-._) )";
  H::setcolor(2); H::gotoxy(92,38); cout << R"(_.' |.-'/ /|`-'` '- _.' |.-'/ /|`-'` '-_.' |.-'/ /|`-'` '-)";

  H::setcolor(1); H::gotoxy(80,19); cout << R"(  //\         /\\ )";
  H::setcolor(2); H::gotoxy(80,20); cout << R"( || * \ . . / * || )";
  H::setcolor(3); H::gotoxy(80,21); cout << R"(  \\____\X/____// )";
  H::setcolor(4); H::gotoxy(80,22); cout << R"(   / *  /O\  * \ )";
  H::setcolor(5); H::gotoxy(80,23); cout << R"(   \__/  "  \__/ )";

  H::setcolor(7); H::gotoxy(103,22); cout << "[TIP] USE "; H::setcolor(2); cout << "UP "; H::setcolor(7); cout <<  "AND " ; H::setcolor(4); cout << "DOWN "; H::setcolor(7); cout << "ARROW KEY";
  H::setcolor(7); H::gotoxy(108,24); cout << "AND ";  H::setcolor(1); cout << "ENTER ";  H::setcolor(7); cout << "FOR SELECT";


}
