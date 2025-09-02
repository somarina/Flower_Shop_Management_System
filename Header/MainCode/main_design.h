#ifndef ___INC_MAIN_DESIGN_H__
#define ___INC_MAIN_DESIGN_H__

#include "../ANTHeader/ANTHinsyOOP"
using namespace ANTHinsyOOP;

////////////////////////////////////////////////////////////////////////////////
void openMyWebsite(const string& url) {
    string command = "start " + url;
    system(command.c_str());
}
/////////////////////////////////////////////////////////////////////////////////
void MNM(const string &str) 
{
	// int j = 1;
	for(int i = 0;i<str.length();i++)
	{
		// if(j == 16)
		// {
		// 	j=1;
		// }
		// foreColor(j);
		cout << str[i];H::delay(10);
		// j++;
	}
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
	H::setcolor(241); H::gotoxy(133,13);cout << "ANT Training Techology Center";



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
  H::drawBoxSingleLineWithBG(33,12,23,3,179); H::setcolor(6); H::gotoxy(38,14); cout << "ADMIN PROFILE";
  H::drawBoxSingleLineWithBG(33,17,23,3,179); H::setcolor(6); H::gotoxy(42,19); cout << "ADMIN";
  H::drawBoxSingleLineWithBG(33,22,23,3,179); H::setcolor(6); H::gotoxy(42,24); cout << "STAFF";
  H::drawBoxSingleLineWithBG(33,27,23,3,179); H::setcolor(6); H::gotoxy(42,29); cout << "USER";
  H::drawBoxSingleLineWithBG(33,32,23,3,179); H::setcolor(6); H::gotoxy(42,34); cout << "EXIT";

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
/////////////////////////////////////////////////////////////////////////////////////////////////////////
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
	H::setcolor(215);H::gotoxy(31,14);cout << "Advisor";
	H::drawBoxSingleLineWithBG(52,15,17,1,153);
	H::setcolor(151);H::gotoxy(56,16);cout<<"RUN LIHOU";
	H::setcolor(215);H::gotoxy(51,14);cout << "Menter";
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
			H::setcolor(7);H::gotoxy(75,17);cout << "at RUPP from .... Province. I'm currently studying Mobile App";
			H::setcolor(7);H::gotoxy(75,19);cout << "Development with Flutter as part of 2nd Generation at ANT";
			H::setcolor(7);H::gotoxy(75,21);cout << "Technology Training Center, supported by the Ministry of Post ";
			H::setcolor(7);H::gotoxy(75,23);cout << "and Telecommunications. I'm working on a scholarship app to ";
			H::setcolor(7);H::gotoxy(75,25);cout << "help students easily find and apply for opportunities.";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
			H::setcolor(5);H::gotoxy(114,15);cout << "Computer Science student";
			H::setcolor(4);H::gotoxy(77,17);cout << " RUPP";
			H::setcolor(6);H::gotoxy(126,17);cout << "Mobile App";
			H::setcolor(6);H::gotoxy(75,19);cout << "Development";
			H::setcolor(3);H::gotoxy(129,19);cout << "ANT ";
			H::setcolor(3);H::gotoxy(75,21);cout << "Technology Training Center";
			H::setcolor(1);H::gotoxy(120,21);cout << "Ministry of Post";
			H::setcolor(1);H::gotoxy(75,23);cout << "and Telecommunications";
			
		}
		if(x==3){
			H::HLine(36,28,29,170,219);
			H::setcolor(167);H::gotoxy(46,28);cout<<"KAO MEYLY";
			H::setcolor(7);H::gotoxy(77,15);cout << "Hi, I'm Kao MeyLy,a Computer Science an Engineering student";
			H::setcolor(7);H::gotoxy(75,17);cout << "at AUB from Takeo Province. I'm currently studying Mobile App";
			H::setcolor(7);H::gotoxy(75,19);cout << "Development with Flutter as part of 2nd Generation at ANT ";
			H::setcolor(7);H::gotoxy(75,21);cout << "Technology Training Center, supported by the Ministry of Post";
			H::setcolor(7);H::gotoxy(75,23);cout << "and Telecommunications. I'm working on a scholarship app to ";
			H::setcolor(7);H::gotoxy(75,25);cout << "help students easily find and apply for opportunities.";
			H::setcolor(7);H::gotoxy(75,27);cout << "                                                             ";
			H::setcolor(7);H::gotoxy(75,29);cout << "                                                           ";
			
			H::setcolor(5);H::gotoxy(114,15);cout << "Computer Science student";
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
#endif  