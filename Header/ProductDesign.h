#ifndef DESIGN_CONSOLE_H
#define DESIGN_CONSOLE_H

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "ANTHeader/ANTHinsyOOP"
using namespace ANTHinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

class Design{
	public:
		void check01(int x);
		static void FlowerAll();
		static void Flower1();
		static void Flower2();
		static void Flower3();
		static void Flower4();
		static void Flower5();
		static void Flower6();
		static void Flower7();
		static void Flower8();
		static void Flower9();
		static void Flower10();
		static void FlowerChoice();
		static void BoxOfHeader();
		static void Flowercut();
		static void Style();
		static void Search();
		static void Flowercolor();
		static void Footer();
		static void DesignInsertFlower();
		static void DesignSearchFlower();
		static void DesignDisplayFlower();
		static void DesignDeleteFlower();
		static void DesignUpdateFlower();
};
	
void Design::FlowerAll(){
	
H::setcolor(4);H::gotoxy(0,31);cout<<R"(                    _)";
H::setcolor(6);H::gotoxy(0,32);cout<<R"(                  _(_)_                          wWWWw   _)";
H::setcolor(3);H::gotoxy(0,33);cout<<R"(      @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_)";
H::setcolor(1);H::gotoxy(0,34);cout<<R"(     @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_))";
H::setcolor(5);H::gotoxy(0,35);cout<<R"(      @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\)";
H::setcolor(2);H::gotoxy(0,36);cout<<R"(       /      Y       \|    \|/    /(_)    \|      |/      |)";
H::setcolor(2);H::gotoxy(0,37);cout<<R"(    \ |     \ |/       | / \ | /  \|/       |/    \|      \|/)";
H::setcolor(2);H::gotoxy(0,38);cout<<R"(    \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
H::setcolor(2);H::gotoxy(0,39);cout<<R"( ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	)";


H::setcolor(6);H::gotoxy(62,31);cout<<R"(                    _)";
H::setcolor(5);H::gotoxy(62,32);cout<<R"(                  _(_)_                          wWWWw   _)";
H::setcolor(4);H::gotoxy(62,33);cout<<R"(      @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_)";
H::setcolor(3);H::gotoxy(62,34);cout<<R"(     @@()@@ wWWWw  (_)\    (___)   _(_)_  @@()@@   Y  (_)@(_))";
H::setcolor(6);H::gotoxy(62,35);cout<<R"(      @@@@  (___)     `|/    Y    (_)@(_)  @@@@   \|/   (_)\)";
H::setcolor(2);H::gotoxy(62,36);cout<<R"(       /      Y       \|    \|/    /(_)    \|      |/      |)";
H::setcolor(2);H::gotoxy(62,37);cout<<R"(    \ |     \ |/       | / \ | /  \|/       |/    \|      \|/)";
H::setcolor(2);H::gotoxy(62,38);cout<<R"(    \\|//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|// )";
H::setcolor(2);H::gotoxy(62,39);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	)";


H::setcolor(1);H::gotoxy(124,31);cout<<R"(                    _)";
H::setcolor(2);H::gotoxy(124,32);cout<<R"(                  _(_)_                     )";
H::setcolor(5);H::gotoxy(124,33);cout<<R"(      @@@@       (_)@(_)   vVVVv     _     )";
H::setcolor(3);H::gotoxy(124,34);cout<<R"(     @@()@@ wWWWw  (_)\    (___)   _(_)_  )";
H::setcolor(4);H::gotoxy(124,35);cout<<R"(      @@@@  (___)     `|/    Y    (_)@(_) )";
H::setcolor(2);H::gotoxy(124,36);cout<<R"(       /      Y       \|    \|/    /(_)  )";
H::setcolor(2);H::gotoxy(124,37);cout<<R"(    \ |     \ |/       | / \ | /  \|/     )";
H::setcolor(2);H::gotoxy(124,38);cout<<R"(    \\|//   \\|///  \\\|//\\\|/// \|///  )";
H::setcolor(2);H::gotoxy(124,39);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
//VLINE for left right
H::VLine(1,-1,39,6,179);
H::VLine(170,-1,39,6,179);
H::setcolor(7);H::gotoxy(0,14);cout<<char(70);
H::setcolor(7);H::gotoxy(0,16);cout<<char(76);
H::setcolor(7);H::gotoxy(0,18);cout<<char(79);
H::setcolor(7);H::gotoxy(0,20);cout<<char(87);
H::setcolor(7);H::gotoxy(0,22);cout<<char(69);
H::setcolor(7);H::gotoxy(0,24);cout<<char(82);

H::setcolor(7);H::gotoxy(169,14);cout<<char(70);
H::setcolor(7);H::gotoxy(169,16);cout<<char(76);
H::setcolor(7);H::gotoxy(169,18);cout<<char(79);
H::setcolor(7);H::gotoxy(169,20);cout<<char(87);
H::setcolor(7);H::gotoxy(169,22);cout<<char(69);
H::setcolor(7);H::gotoxy(169,24);cout<<char(82);
}
void Design::Flower1(){
	
H::setcolor(5);H::gotoxy(57,8);cout<<R"(         ,)";
H::setcolor(5);H::gotoxy(57,9);cout<<R"(     /\^/`\)";
H::setcolor(5);H::gotoxy(57,10);cout<<R"(    | \/   |)";
H::setcolor(5);H::gotoxy(57,11);cout<<R"(    | |    |)";
H::setcolor(5);H::gotoxy(57,12);cout<<R"(    \ \    /)";
H::setcolor(5);H::gotoxy(57,13);cout<<R"(     '\\//')";
H::setcolor(2);H::gotoxy(57,14);cout<<R"(       ||)";
H::setcolor(2);H::gotoxy(57,15);cout<<R"(       ||  ,)";
H::setcolor(2);H::gotoxy(57,16);cout<<R"(   |\  ||  |\)";
H::setcolor(2);H::gotoxy(57,17);cout<<R"(   | | || / /)";
H::setcolor(2);H::gotoxy(57,18);cout<<R"(   | | || / /)";
H::setcolor(2);H::gotoxy(57,19);cout<<R"(    \ \||/ /)";
H::setcolor(2);H::gotoxy(57,20);cout<<R"(     `\\//`)";
H::setcolor(2);H::gotoxy(57,21);cout<<R"(    ^^^^^^^^)";


H::setcolor(6);H::gotoxy(79,8);cout<<R"(         ,)";
H::setcolor(6);H::gotoxy(79,9);cout<<R"(     /\^/`\)";
H::setcolor(6);H::gotoxy(79,10);cout<<R"(    | \/   |)";
H::setcolor(6);H::gotoxy(79,11);cout<<R"(    | |    |)";
H::setcolor(6);H::gotoxy(79,12);cout<<R"(    \ \    /)";
H::setcolor(6);H::gotoxy(79,13);cout<<R"(     '\\//')";
H::setcolor(2);H::gotoxy(79,14);cout<<R"(       ||)";
H::setcolor(2);H::gotoxy(79,15);cout<<R"(       ||  ,)";
H::setcolor(2);H::gotoxy(79,16);cout<<R"(   |\  ||  |\)";
H::setcolor(2);H::gotoxy(79,17);cout<<R"(   | | || / /)";
H::setcolor(2);H::gotoxy(79,18);cout<<R"(   | | || / /)";
H::setcolor(2);H::gotoxy(79,19);cout<<R"(    \ \||/ /)";
H::setcolor(2);H::gotoxy(79,20);cout<<R"(     `\\//`)";
H::setcolor(2);H::gotoxy(79,21);cout<<R"(    ^^^^^^^^)";

H::setcolor(4);H::gotoxy(99,8);cout<<R"(         ,)";
H::setcolor(4);H::gotoxy(99,9);cout<<R"(     /\^/`\)";
H::setcolor(4);H::gotoxy(99,10);cout<<R"(    | \/   |)";
H::setcolor(4);H::gotoxy(99,11);cout<<R"(    | |    |)";
H::setcolor(4);H::gotoxy(99,12);cout<<R"(    \ \    /)";
H::setcolor(4);H::gotoxy(99,13);cout<<R"(     '\\//')";
H::setcolor(2);H::gotoxy(99,14);cout<<R"(       ||)";
H::setcolor(2);H::gotoxy(99,15);cout<<R"(       ||  ,)";
H::setcolor(2);H::gotoxy(99,16);cout<<R"(   |\  ||  |\)";
H::setcolor(2);H::gotoxy(99,17);cout<<R"(   | | || / /)";
H::setcolor(2);H::gotoxy(99,18);cout<<R"(   | | || / /)";
H::setcolor(2);H::gotoxy(99,19);cout<<R"(    \ \||/ /)";
H::setcolor(2);H::gotoxy(99,20);cout<<R"(     `\\//`)";
H::setcolor(2);H::gotoxy(99,21);cout<<R"(    ^^^^^^^^)";
	
}
void Design::Flower2(){
	
H::setcolor(6);H::gotoxy(50,8);cout<<R"(         .-==-.)";
H::setcolor(6);H::gotoxy(50,9);cout<<R"(        /{.=-.}\)";
H::setcolor(6);H::gotoxy(50,10);cout<<R"(       | / .  \ |)";
H::setcolor(6);H::gotoxy(50,11);cout<<R"(       |;   :  :|)";
H::setcolor(6);H::gotoxy(50,12);cout<<R"(       \(   :  )/)";
H::setcolor(6);H::gotoxy(50,13);cout<<R"(        `._'__.')"; 
H::setcolor(2);H::gotoxy(50,14);cout<<R"(      |\   ||)";
H::setcolor(2);H::gotoxy(50,15);cout<<R"(       | | ||    /)";
H::setcolor(2);H::gotoxy(50,16);cout<<R"(       \  \||  / /)";
H::setcolor(2);H::gotoxy(50,17);cout<<R"(        \ ||| | |)";
H::setcolor(2);H::gotoxy(50,18);cout<<R"(          \||/  /)";
H::setcolor(2);H::gotoxy(50,19);cout<<R"(           ||| /)";
H::setcolor(2);H::gotoxy(50,20);cout<<R"(           ||)";
H::setcolor(2);H::gotoxy(50,21);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^)";

H::setcolor(5);H::gotoxy(73,8);cout<<R"(         .-==-.)";
H::setcolor(5);H::gotoxy(73,9);cout<<R"(        /{.=-.}\)";
H::setcolor(5);H::gotoxy(73,10);cout<<R"(       | / .  \ |)";
H::setcolor(4);H::gotoxy(73,11);cout<<R"(       |;   :  :|)";
H::setcolor(4);H::gotoxy(73,12);cout<<R"(       \(   :  )/)";
H::setcolor(4);H::gotoxy(73,13);cout<<R"(        `._'__.')"; 
H::setcolor(2);H::gotoxy(73,14);cout<<R"(      |\   ||)";
H::setcolor(2);H::gotoxy(73,15);cout<<R"(       | | ||    /)";
H::setcolor(2);H::gotoxy(73,16);cout<<R"(       \  \||  / /)";
H::setcolor(2);H::gotoxy(73,17);cout<<R"(        \ ||| | |)";
H::setcolor(2);H::gotoxy(73,18);cout<<R"(          \||/  /)";
H::setcolor(2);H::gotoxy(73,19);cout<<R"(           ||| /)";
H::setcolor(2);H::gotoxy(73,20);cout<<R"(           ||)";
H::setcolor(2);H::gotoxy(73,21);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^)";	


H::setcolor(1);H::gotoxy(97,8);cout<<R"(         .-==-.)";
H::setcolor(1);H::gotoxy(97,9);cout<<R"(        /{.=-.}\)";
H::setcolor(1);H::gotoxy(97,10);cout<<R"(       | / .  \ |)";
H::setcolor(3);H::gotoxy(97,11);cout<<R"(       |;   :  :|)";
H::setcolor(3);H::gotoxy(97,12);cout<<R"(       \(   :  )/)";
H::setcolor(3);H::gotoxy(97,13);cout<<R"(        `._'__.')"; 
H::setcolor(2);H::gotoxy(97,14);cout<<R"(      |\   ||)";
H::setcolor(2);H::gotoxy(97,15);cout<<R"(       | | ||    /)";
H::setcolor(2);H::gotoxy(97,16);cout<<R"(       \  \||  / /)";
H::setcolor(2);H::gotoxy(97,17);cout<<R"(        \ ||| | |)";
H::setcolor(2);H::gotoxy(97,18);cout<<R"(          \||/  /)";
H::setcolor(2);H::gotoxy(97,19);cout<<R"(           ||| /)";
H::setcolor(2);H::gotoxy(97,20);cout<<R"(           ||)";
H::setcolor(2);H::gotoxy(97,21);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^)";	
	
}
void Design::Flower3(){
	
H::setcolor(4);H::gotoxy(53,9);cout<<R"(              __/))";
H::setcolor(4);H::gotoxy(53,10);cout<<R"(           .-(__(=:)";
H::setcolor(4);H::gotoxy(53,11);cout<<R"(           |    \))";
H::setcolor(5);H::gotoxy(53,12);cout<<R"(     (\__  |)";
H::setcolor(5);H::gotoxy(53,13);cout<<R"(    :=)__)-|  __/))";
H::setcolor(5);H::gotoxy(53,14);cout<<R"(     (/    |-(__(=:)";
H::setcolor(2);H::gotoxy(53,15);cout<<R"(   ______  |  _ \))" ;
H::setcolor(2);H::gotoxy(53,16);cout<<R"(  /      \ | / \)" ;
H::setcolor(2);H::gotoxy(53,17);cout<<R"(       ___\|/___\)" ;
H::setcolor(2);H::gotoxy(53,18);cout<<R"(      [         ]\)" ;
H::setcolor(2);H::gotoxy(53,19);cout<<R"(       \       /  \)" ;
H::setcolor(2);H::gotoxy(53,20);cout<<R"(        \     /)" ;
H::setcolor(2);H::gotoxy(53,21);cout<<R"(         \___/)" ;


H::setcolor(4);H::gotoxy(75,9);cout<<R"(              __/))" ;
H::setcolor(4);H::gotoxy(75,10);cout<<R"(           .-(__(=:)" ;
H::setcolor(4);H::gotoxy(75,11);cout<<R"(           |    \))" ;
H::setcolor(5);H::gotoxy(75,12);cout<<R"(     (\__  |)" ;
H::setcolor(5);H::gotoxy(75,13);cout<<R"(    :=)__)-|  __/))" ;
H::setcolor(5);H::gotoxy(75,14);cout<<R"(     (/    |-(__(=:)" ;
H::setcolor(2);H::gotoxy(75,15);cout<<R"(   ______  |  _ \))" ;
H::setcolor(2);H::gotoxy(75,16);cout<<R"(  /      \ | / \)" ;
H::setcolor(2);H::gotoxy(75,17);cout<<R"(       ___\|/___\)" ;
H::setcolor(2);H::gotoxy(75,18);cout<<R"(      [         ]\)" ;
H::setcolor(2);H::gotoxy(75,19);cout<<R"(       \       /  \)" ;
H::setcolor(2);H::gotoxy(75,20);cout<<R"(        \     /)" ;
H::setcolor(2);H::gotoxy(75,21);cout<<R"(         \___/)" ;


H::setcolor(4);H::gotoxy(97,9);cout<<R"(              __/))" ;
H::setcolor(4);H::gotoxy(97,10);cout<<R"(           .-(__(=:)" ;
H::setcolor(4);H::gotoxy(97,11);cout<<R"(           |    \))" ;
H::setcolor(5);H::gotoxy(97,12);cout<<R"(     (\__  |)" ;
H::setcolor(5);H::gotoxy(97,13);cout<<R"(    :=)__)-|  __/))" ;
H::setcolor(5);H::gotoxy(97,14);cout<<R"(     (/    |-(__(=:)" ;
H::setcolor(2);H::gotoxy(97,15);cout<<R"(   ______  |  _ \))" ;
H::setcolor(2);H::gotoxy(97,16);cout<<R"(  /      \ | / \)" ;
H::setcolor(2);H::gotoxy(97,17);cout<<R"(       ___\|/___\)" ;
H::setcolor(2);H::gotoxy(97,18);cout<<R"(      [         ]\)" ;
H::setcolor(2);H::gotoxy(97,19);cout<<R"(       \       /  \)" ;
H::setcolor(2);H::gotoxy(97,20);cout<<R"(        \     /)" ;
H::setcolor(2);H::gotoxy(97,21);cout<<R"(         \___/)" ;
	
}
void Design::Flower4(){
	
H::setcolor(4);H::gotoxy(51,8);cout<<R"(    _,--._.-,)" ;
H::setcolor(4);H::gotoxy(51,9);cout<<R"(   /\_r-,\_ ))" ;
H::setcolor(4);H::gotoxy(51,10);cout<<R"(.-.) _;='_/ (.;)" ;
H::setcolor(4);H::gotoxy(51,11);cout<<R"( \ \'     \/S ))" ;
H::setcolor(4);H::gotoxy(51,12);cout<<R"(  L.'-. _.'|-')" ;
H::setcolor(4);H::gotoxy(51,13);cout<<R"( <_`-'\'_.'/)" ;
H::setcolor(4);H::gotoxy(51,14);cout<<R"(   `'-._( \)" ;
H::setcolor(2);H::gotoxy(51,15);cout<<R"(    ___   \\,      ___)" ;
H::setcolor(2);H::gotoxy(51,16);cout<<R"(    \ .'-. \\   .-'_. /)" ;
H::setcolor(2);H::gotoxy(51,17);cout<<R"(     '._' '.\\/.-'_.')" ;
H::setcolor(2);H::gotoxy(51,18);cout<<R"(        '--``\('--')" ;
H::setcolor(2);H::gotoxy(51,19);cout<<R"(              \\)" ;
H::setcolor(2);H::gotoxy(51,20);cout<<R"(              `\\,)" ;
H::setcolor(2);H::gotoxy(51,21);cout<<R"(                \|)" ;

H::setcolor(5);H::gotoxy(74,8);cout<<R"(    _,--._.-,)" ;
H::setcolor(5);H::gotoxy(74,9);cout<<R"(   /\_r-,\_ ))" ;
H::setcolor(5);H::gotoxy(74,10);cout<<R"(.-.) _;='_/ (.;)" ;
H::setcolor(5);H::gotoxy(74,11);cout<<R"( \ \'     \/S ))" ;
H::setcolor(5);H::gotoxy(74,12);cout<<R"(  L.'-. _.'|-')" ;
H::setcolor(5);H::gotoxy(74,13);cout<<R"( <_`-'\'_.'/)" ;
H::setcolor(5);H::gotoxy(74,14);cout<<R"(   `'-._( \)" ;
H::setcolor(2);H::gotoxy(74,15);cout<<R"(    ___   \\,      ___)" ;
H::setcolor(2);H::gotoxy(74,16);cout<<R"(    \ .'-. \\   .-'_. /)" ;
H::setcolor(2);H::gotoxy(74,17);cout<<R"(     '._' '.\\/.-'_.')" ;
H::setcolor(2);H::gotoxy(74,18);cout<<R"(        '--``\('--')" ;
H::setcolor(2);H::gotoxy(74,19);cout<<R"(              \\)" ;
H::setcolor(2);H::gotoxy(74,20);cout<<R"(              `\\,)" ;
H::setcolor(2);H::gotoxy(74,21);cout<<R"(                \|)" ;
	
	
H::setcolor(7);H::gotoxy(97,8);cout<<R"(    _,--._.-,)" ;
H::setcolor(7);H::gotoxy(97,9);cout<<R"(   /\_r-,\_ ))" ;
H::setcolor(7);H::gotoxy(97,10);cout<<R"(.-.) _;='_/ (.;)" ;
H::setcolor(7);H::gotoxy(97,11);cout<<R"( \ \'     \/S ))" ;
H::setcolor(7);H::gotoxy(97,12);cout<<R"(  L.'-. _.'|-')" ;
H::setcolor(7);H::gotoxy(97,13);cout<<R"( <_`-'\'_.'/)" ;
H::setcolor(7);H::gotoxy(97,14);cout<<R"(   `'-._( \)" ;
H::setcolor(2);H::gotoxy(97,15);cout<<R"(    ___   \\,      ___)" ;
H::setcolor(2);H::gotoxy(97,16);cout<<R"(    \ .'-. \\   .-'_. /)" ;
H::setcolor(2);H::gotoxy(97,17);cout<<R"(     '._' '.\\/.-'_.')" ;
H::setcolor(2);H::gotoxy(97,18);cout<<R"(        '--``\('--')" ;
H::setcolor(2);H::gotoxy(97,19);cout<<R"(              \\)" ;
H::setcolor(2);H::gotoxy(97,20);cout<<R"(              `\\,)" ;
H::setcolor(2);H::gotoxy(97,21);cout<<R"(                \|)" ;
	
}
void Design::Flower5(){                    
                         
H::setcolor(2);H::gotoxy(53,10);cout<<R"(   _x_x__x_____x  )" ;       
H::setcolor(2);H::gotoxy(53,11);cout<<R"(  x  / x | x x  \  )" ;      
H::setcolor(2);H::gotoxy(53,12);cout<<R"( x  x x| x |x x  x )" ;      
H::setcolor(2);H::gotoxy(53,13);cout<<R"( |  | |x | || |  | )" ;      
H::setcolor(2);H::gotoxy(53,14);cout<<R"( |  x || x x| |  x )" ;   
H::setcolor(7);H::gotoxy(53,15);cout<<R"(__\__x_x_|_x_x__/__ )" ;     
H::setcolor(6);H::gotoxy(53,16);cout<<R"(\                 / )" ;    
H::setcolor(6);H::gotoxy(53,17);cout<<R"( `---------------'  )" ;  
H::setcolor(6);H::gotoxy(53,18);cout<<R"(  |        :F_P:|  )" ;    
H::setcolor(6);H::gotoxy(53,19);cout<<R"(  \_____________/  )" ; 

H::setcolor(3);H::gotoxy(77,10);cout<<R"(   _x_x__x_____x  )" ;       
H::setcolor(3);H::gotoxy(77,11);cout<<R"(  x  / x | x x  \  )" ;      
H::setcolor(3);H::gotoxy(77,12);cout<<R"( x  x x| x |x x  x )" ;      
H::setcolor(3);H::gotoxy(77,13);cout<<R"( |  | |x | || |  | )" ;      
H::setcolor(3);H::gotoxy(77,14);cout<<R"( |  x || x x| |  x )" ;   
H::setcolor(7);H::gotoxy(77,15);cout<<R"(__\__x_x_|_x_x__/__ )" ;     
H::setcolor(6);H::gotoxy(77,16);cout<<R"(\                 / )" ;    
H::setcolor(6);H::gotoxy(77,17);cout<<R"( `---------------'  )" ;  
H::setcolor(6);H::gotoxy(77,18);cout<<R"(  |        :F_P:|  )" ;    
H::setcolor(6);H::gotoxy(77,19);cout<<R"(  \_____________/  )" ; 

H::setcolor(4);H::gotoxy(100,10);cout<<R"(   _x_x__x_____x  )" ;       
H::setcolor(4);H::gotoxy(100,11);cout<<R"(  x  / x | x x  \  )" ;      
H::setcolor(4);H::gotoxy(100,12);cout<<R"( x  x x| x |x x  x )" ;      
H::setcolor(4);H::gotoxy(100,13);cout<<R"( |  | |x | || |  | )" ;      
H::setcolor(4);H::gotoxy(100,14);cout<<R"( |  x || x x| |  x )" ;   
H::setcolor(7);H::gotoxy(100,15);cout<<R"(__\__x_x_|_x_x__/__ )" ;     
H::setcolor(6);H::gotoxy(100,16);cout<<R"(\                 / )" ;    
H::setcolor(6);H::gotoxy(100,17);cout<<R"( `---------------'  )" ;  
H::setcolor(6);H::gotoxy(100,18);cout<<R"(  |        :F_P:|  )" ;    
H::setcolor(6);H::gotoxy(100,19);cout<<R"(  \_____________/  )" ;     
                        

}
void Design::Flower6(){
		
H::setcolor(6);H::gotoxy(57,11);cout<<R"(      .--.)" ;  
H::setcolor(6);H::gotoxy(57,12);cout<<R"(    .'_\/_'.)" ;  
H::setcolor(6);H::gotoxy(57,13);cout<<R"(    '. /\ .')" ;  
H::setcolor(2);H::gotoxy(57,14);cout<<R"(      "||")" ;  
H::setcolor(2);H::gotoxy(57,15);cout<<R"(       || /\)" ;  
H::setcolor(2);H::gotoxy(57,16);cout<<R"(    /\ ||//\))" ;  
H::setcolor(2);H::gotoxy(57,17);cout<<R"(   (/\\||/)" ;  
H::setcolor(2);H::gotoxy(57,18);cout<<R"(______\||/_______)" ;  
H::setcolor(2);H::gotoxy(57,19);cout<<R"(^^^^^^^^^^^^^^^^^)" ;  

H::setcolor(1);H::gotoxy(78,11);cout<<R"(      .--.)" ;  
H::setcolor(1);H::gotoxy(78,12);cout<<R"(    .'_\/_'.)" ;  
H::setcolor(1);H::gotoxy(78,13);cout<<R"(    '. /\ .')" ;  
H::setcolor(2);H::gotoxy(78,14);cout<<R"(      "||")" ;  
H::setcolor(2);H::gotoxy(78,15);cout<<R"(       || /\)" ;  
H::setcolor(2);H::gotoxy(78,16);cout<<R"(    /\ ||//\))" ;  
H::setcolor(2);H::gotoxy(78,17);cout<<R"(   (/\\||/)" ;  
H::setcolor(2);H::gotoxy(78,18);cout<<R"(______\||/_______)" ;  
H::setcolor(2);H::gotoxy(78,19);cout<<R"(^^^^^^^^^^^^^^^^^)" ; 

H::setcolor(5);H::gotoxy(99,11);cout<<R"(      .--.)" ;  
H::setcolor(5);H::gotoxy(99,12);cout<<R"(    .'_\/_'.)" ;  
H::setcolor(5);H::gotoxy(99,13);cout<<R"(    '. /\ .')" ;  
H::setcolor(2);H::gotoxy(99,14);cout<<R"(      "||")" ;  
H::setcolor(2);H::gotoxy(99,15);cout<<R"(       || /\)" ;  
H::setcolor(2);H::gotoxy(99,16);cout<<R"(    /\ ||//\))" ;  
H::setcolor(2);H::gotoxy(99,17);cout<<R"(   (/\\||/)" ;  
H::setcolor(2);H::gotoxy(99,18);cout<<R"(______\||/_______)" ;  
H::setcolor(2);H::gotoxy(99,19);cout<<R"(^^^^^^^^^^^^^^^^^)" ;  
}
void Design::Flower7(){

H::setcolor(2);H::gotoxy(53,8);cout<<R"(         *)" ; 
H::setcolor(2);H::gotoxy(53,9);cout<<R"(     *  *r*  *)" ; 
H::setcolor(1);H::gotoxy(53,10);cout<<R"(  * *a* ^Y^ *i* *)" ; 
H::setcolor(1);H::gotoxy(53,11);cout<<R"( *m*^Y^*^\^*^Y^*s*)" ; 
H::setcolor(3);H::gotoxy(53,12);cout<<R"( ^Y^*\*e*/*l*/*^Y^)" ; 
H::setcolor(3);H::gotoxy(53,13);cout<<R"( *\*t*|Y^\^Y|*l*/*)" ; 
H::setcolor(6);H::gotoxy(53,14);cout<<R"(*s*|Y^\\^/^//^Y|*a*)" ; 
H::setcolor(6);H::gotoxy(53,15);cout<<R"(^Y^\\_^\\\//^_//^Y^)" ; 
H::setcolor(6);H::gotoxy(53,16);cout<<R"(^\_^\_\_\//_/_/^_/^)" ; 
H::setcolor(6);H::gotoxy(53,17);cout<<R"( ^^\_^\_\\/_/^_/^^)" ; 
H::setcolor(6);H::gotoxy(53,18);cout<<R"(   ^^\_ \// _/^^)" ; 
H::setcolor(6);H::gotoxy(53,19);cout<<R"(       \_\_/)" ; 
H::setcolor(6);H::gotoxy(53,20);cout<<R"(        /|\)" ; 
H::setcolor(6);H::gotoxy(53,21);cout<<R"(       /\\/\)" ;	
	
H::setcolor(5);H::gotoxy(77,8);cout<<R"(         *)" ; 
H::setcolor(5);H::gotoxy(77,9);cout<<R"(     *  *r*  *)" ; 
H::setcolor(5);H::gotoxy(77,10);cout<<R"(  * *a* ^Y^ *i* *)" ; 
H::setcolor(4);H::gotoxy(77,11);cout<<R"( *m*^Y^*^\^*^Y^*s*)" ; 
H::setcolor(4);H::gotoxy(77,12);cout<<R"( ^Y^*\*e*/*l*/*^Y^)" ; 
H::setcolor(2);H::gotoxy(77,13);cout<<R"( *\*t*|Y^\^Y|*l*/*)" ; 
H::setcolor(2);H::gotoxy(77,14);cout<<R"(*s*|Y^\\^/^//^Y|*a*)" ; 
H::setcolor(4);H::gotoxy(77,15);cout<<R"(^Y^\\_^\\\//^_//^Y^)" ; 
H::setcolor(4);H::gotoxy(77,16);cout<<R"(^\_^\_\_\//_/_/^_/^)" ; 
H::setcolor(4);H::gotoxy(77,17);cout<<R"( ^^\_^\_\\/_/^_/^^)" ; 
H::setcolor(4);H::gotoxy(77,18);cout<<R"(   ^^\_ \// _/^^)" ; 
H::setcolor(4);H::gotoxy(77,19);cout<<R"(       \_\_/)" ; 
H::setcolor(4);H::gotoxy(77,20);cout<<R"(        /|\)" ; 
H::setcolor(4);H::gotoxy(77,21);cout<<R"(       /\\/\)" ;	
	
H::setcolor(3);H::gotoxy(100,8);cout<<R"(         *)" ; 
H::setcolor(3);H::gotoxy(100,9);cout<<R"(     *  *r*  *)" ; 
H::setcolor(2);H::gotoxy(100,10);cout<<R"(  * *a* ^Y^ *i* *)" ; 
H::setcolor(2);H::gotoxy(100,11);cout<<R"( *m*^Y^*^\^*^Y^*s*)" ; 
H::setcolor(1);H::gotoxy(100,12);cout<<R"( ^Y^*\*e*/*l*/*^Y^)" ; 
H::setcolor(1);H::gotoxy(100,13);cout<<R"( *\*t*|Y^\^Y|*l*/*)" ; 
H::setcolor(5);H::gotoxy(100,14);cout<<R"(*s*|Y^\\^/^//^Y|*a*)" ; 
H::setcolor(5);H::gotoxy(100,15);cout<<R"(^Y^\\_^\\\//^_//^Y^)" ; 
H::setcolor(5);H::gotoxy(100,16);cout<<R"(^\_^\_\_\//_/_/^_/^)" ; 
H::setcolor(5);H::gotoxy(100,17);cout<<R"( ^^\_^\_\\/_/^_/^^)" ; 
H::setcolor(5);H::gotoxy(100,18);cout<<R"(   ^^\_ \// _/^^)" ; 
H::setcolor(5);H::gotoxy(100,19);cout<<R"(       \_\_/)" ; 
H::setcolor(5);H::gotoxy(100,20);cout<<R"(        /|\)" ; 
H::setcolor(5);H::gotoxy(100,21);cout<<R"(       /\\/\)" ; 

}
void Design::Flower8(){
	
H::setcolor(6);H::gotoxy(55,8);cout<<R"(             .-.'  '.-.)" ; 
H::setcolor(6);H::gotoxy(55,9);cout<<R"(          .-(   \  /   )-.)" ; 
H::setcolor(6);H::gotoxy(55,10);cout<<R"(         /   '..oOOo..'   \)" ; 
H::setcolor(6);H::gotoxy(55,11);cout<<R"( |\  ,   (   :oOOOOOOo:   ))" ; 
H::setcolor(6);H::gotoxy(55,12);cout<<R"(_\.\/|   /'--'oOOOOOOo'--'\)" ; 
H::setcolor(6);H::gotoxy(55,13);cout<<R"(.--`'. :/|'-(   /  \   )-')" ; 
H::setcolor(6);H::gotoxy(55,14);cout<<R"( '--. `. / //'-'.__.'-;)" ; 
H::setcolor(2);H::gotoxy(55,15);cout<<R"(   `'-,_';//      ,  /|)" ; 
H::setcolor(2);H::gotoxy(55,16);cout<<R"(        '((       |\/./_)" ; 
H::setcolor(2);H::gotoxy(55,17);cout<<R"(          \\  . |\; ..-')" ; 
H::setcolor(2);H::gotoxy(55,18);cout<<R"(           \\ |\: .'`--.)" ; 
H::setcolor(2);H::gotoxy(55,19);cout<<R"(            \\, .' .--')" ; 
H::setcolor(2);H::gotoxy(55,20);cout<<R"(            //-')" ; 
H::setcolor(2);H::gotoxy(55,21);cout<<R"(           //)" ; 

H::setcolor(4);H::gotoxy(90,8);cout<<R"(             .-.'  '.-.)" ; 
H::setcolor(4);H::gotoxy(90,9);cout<<R"(          .-(   \  /   )-.)" ; 
H::setcolor(4);H::gotoxy(90,10);cout<<R"(         /   '..oOOo..'   \)" ; 
H::setcolor(4);H::gotoxy(90,11);cout<<R"( |\  ,   (   :oOOOOOOo:   ))" ; 
H::setcolor(4);H::gotoxy(90,12);cout<<R"(_\.\/|   /'--'oOOOOOOo'--'\)" ; 
H::setcolor(4);H::gotoxy(90,13);cout<<R"(.--`'. :/|'-(   /  \   )-')" ; 
H::setcolor(4);H::gotoxy(90,14);cout<<R"( '--. `. / //'-'.__.'-;)" ; 
H::setcolor(2);H::gotoxy(90,15);cout<<R"(   `'-,_';//      ,  /|)" ; 
H::setcolor(2);H::gotoxy(90,16);cout<<R"(        '((       |\/./_)" ; 
H::setcolor(2);H::gotoxy(90,17);cout<<R"(          \\  . |\; ..-')" ; 
H::setcolor(2);H::gotoxy(90,18);cout<<R"(           \\ |\: .'`--.)" ; 
H::setcolor(2);H::gotoxy(90,19);cout<<R"(            \\, .' .--')" ; 
H::setcolor(2);H::gotoxy(90,20);cout<<R"(            //-')" ; 
H::setcolor(2);H::gotoxy(90,21);cout<<R"(           //)" ; 

}
void Design::Flower9(){
	
H::setcolor(5);H::gotoxy(53,9);cout<<R"(                   _       _)" ; 
H::setcolor(5);H::gotoxy(53,10);cout<<R"(         _.=;;;;;;/ '.,-,.' \)" ; 
H::setcolor(5);H::gotoxy(53,11);cout<<R"(       .:="`   _ _\_.'\_/'._/)" ; 
H::setcolor(5);H::gotoxy(53,12);cout<<R"(      //_ _   (_I_)  / | \)" ; 
H::setcolor(5);H::gotoxy(53,13);cout<<R"(     ||(_I_) (_>@<_)/_/_\ \)" ; 
H::setcolor(6);H::gotoxy(53,14);cout<<R"(     |(_>@<_)_(_I_) (_I_)\|_)" ; 
H::setcolor(6);H::gotoxy(53,15);cout<<R"(     |_(_I_)_I_)-_.(_>@<(_I_))" ; 
H::setcolor(1);H::gotoxy(53,16);cout<<R"(    (_I_)-(_>@<_(_I_)_I(_>@<_))" ; 
H::setcolor(1);H::gotoxy(53,17);cout<<R"(   (_>@<_)-(_I_(_>@<_)=_(_I_))" ; 
H::setcolor(3);H::gotoxy(53,18);cout<<R"(    (_I_)_-=_==_(_I_)=__=-/)" ; 
H::setcolor(3);H::gotoxy(53,19);cout<<R"(      \-=_=-_-=_-_=__=-_=/)" ; 
H::setcolor(4);H::gotoxy(53,20);cout<<R"(       \_=-_-_==-_=-__=-/)" ; 
H::setcolor(4);H::gotoxy(53,21);cout<<R"(        '-==--===-===--')" ; 


H::setcolor(6);H::gotoxy(87,9);cout<<R"(                   _       _)" ; 
H::setcolor(6);H::gotoxy(87,10);cout<<R"(         _.=;;;;;;/ '.,-,.' \)" ; 
H::setcolor(6);H::gotoxy(87,11);cout<<R"(       .:="`   _ _\_.'\_/'._/)" ; 
H::setcolor(6);H::gotoxy(87,12);cout<<R"(      //_ _   (_I_)  / | \)" ; 
H::setcolor(6);H::gotoxy(87,13);cout<<R"(     ||(_I_) (_>@<_)/_/_\ \)" ; 
H::setcolor(2);H::gotoxy(87,14);cout<<R"(     |(_>@<_)_(_I_) (_I_)\|_)" ; 
H::setcolor(2);H::gotoxy(87,15);cout<<R"(     |_(_I_)_I_)-_.(_>@<(_I_))" ; 
H::setcolor(3);H::gotoxy(87,16);cout<<R"(    (_I_)-(_>@<_(_I_)_I(_>@<_))" ; 
H::setcolor(3);H::gotoxy(87,17);cout<<R"(   (_>@<_)-(_I_(_>@<_)=_(_I_))" ; 
H::setcolor(4);H::gotoxy(87,18);cout<<R"(    (_I_)_-=_==_(_I_)=__=-/)" ; 
H::setcolor(4);H::gotoxy(87,19);cout<<R"(      \-=_=-_-=_-_=__=-_=/)" ; 
H::setcolor(1);H::gotoxy(87,20);cout<<R"(       \_=-_-_==-_=-__=-/)" ; 
H::setcolor(1);H::gotoxy(87,21);cout<<R"(        '-==--===-===--')" ; 

}
void Design::Flower10(){

H::setcolor(4);H::gotoxy(53,9);cout<<R"(         _...,..,..,..,_)" ; 
H::setcolor(4);H::gotoxy(53,10);cout<<R"(      .='               ',)" ; 
H::setcolor(3);H::gotoxy(53,11);cout<<R"(     / }`""`""`""`""`""`{ \)" ; 
H::setcolor(3);H::gotoxy(53,12);cout<<R"(    { (\/)  .=<\__{}   (=()=))" ; 
H::setcolor(2);H::gotoxy(53,13);cout<<R"(.--.{(=()=)/@  '--'(\/)q_p=.--.)" ; 
H::setcolor(2);H::gotoxy(53,14);cout<<R"(}__/>=(/\)@(\/)q_p(=()=)^b<\__{)" ; 
H::setcolor(1);H::gotoxy(53,15);cout<<R"('--'{q_p(\/)()=)@(\/)\)@q_p`--')" ; 
H::setcolor(1);H::gotoxy(53,16);cout<<R"(    {d^(-()-)\) (=()=)  (\/)\)" ; 
H::setcolor(6);H::gotoxy(53,17);cout<<R"(    /  @(/\)q_p  (/\)@ (=()=))" ; 
H::setcolor(6);H::gotoxy(53,18);cout<<R"(   /        d^(\/)@q_p  (/\)@\)" ; 
H::setcolor(6);H::gotoxy(53,19);cout<<R"(  {          (=()=)d^b        })" ; 
H::setcolor(6);H::gotoxy(53,20);cout<<R"(  {           (/\)            })" ;  
H::setcolor(6);H::gotoxy(53,21);cout<<R"(   `""""""`""`""`""`""`""`""""""`)" ; 

H::setcolor(4);H::gotoxy(87,9);cout<<R"(         _...,..,..,..,_)" ; 
H::setcolor(4);H::gotoxy(87,10);cout<<R"(      .='               ',)" ; 
H::setcolor(3);H::gotoxy(87,11);cout<<R"(     / }`""`""`""`""`""`{ \)" ; 
H::setcolor(3);H::gotoxy(87,12);cout<<R"(    { (\/)  .=<\__{}   (=()=))" ; 
H::setcolor(2);H::gotoxy(87,13);cout<<R"(.--.{(=()=)/@  '--'(\/)q_p=.--.)" ; 
H::setcolor(2);H::gotoxy(87,14);cout<<R"(}__/>=(/\)@(\/)q_p(=()=)^b<\__{)" ; 
H::setcolor(1);H::gotoxy(87,15);cout<<R"('--'{q_p(\/)()=)@(\/)\)@q_p`--')" ; 
H::setcolor(1);H::gotoxy(87,16);cout<<R"(    {d^(-()-)\) (=()=)  (\/)\)" ; 
H::setcolor(6);H::gotoxy(87,17);cout<<R"(    /  @(/\)q_p  (/\)@ (=()=))" ; 
H::setcolor(6);H::gotoxy(87,18);cout<<R"(   /        d^(\/)@q_p  (/\)@\)" ; 
H::setcolor(6);H::gotoxy(87,19);cout<<R"(  {          (=()=)d^b        })" ; 
H::setcolor(6);H::gotoxy(87,20);cout<<R"(  {           (/\)            })" ;  
H::setcolor(6);H::gotoxy(87,21);cout<<R"(   `""""""`""`""`""`""`""`""""""`)" ; 	

}
///////////////////////////////////////////////////////
void Design::check01(int x){
//HLINE VLINE Connect to box
	//Box 1 to 2
	H::HLine(58,1,7,4,220);
	H::VLine(65,1,3,4,219);
	H::HLine(65,4,8,4,220);
	//box 2 to 3
	H::HLine(98,4,8,4,220);
	H::VLine(107,1,3,4,219);
	H::HLine(106,1,7,4,220);
	//box3 to 5
	H::HLine(137,1,9,4,220);
	H::VLine(146,1,3,4,219);
	H::HLine(146,4,8,4,220);
	H::VLine(154,4,4,4,219);
	//box5 to 7
	H::HLine(146,13,7,4,220);
	H::VLine(154,9,4,4,219);
	H::VLine(147,13,2,4,219);
	//box 7 to 9
	H::VLine(147,18,7,4,219);
	H::HLine(137,25,9,4,220);
	//box 9 to 10
	H::HLine(94,25,18,4,220);
	H::HLine(76,26,18,4,220);
	H::VLine(95,25,1,4,219);
	H::VLine(76,25,1,4,219);
	H::VLine(86,26,2,4,219);
	//box 10 to 8
	H::HLine(59,25,17,4,220);
	//box 8 to 6
	H::HLine(25,25,9,4,220);
	H::VLine(26,18,7,4,219);
	//box 6 to 4
	H::HLine(15,13,11,4,220);
	H::VLine(16,9,4,4,219);
	H::VLine(26,13,2,4,219);
	//box4 to 1
	H::HLine(23,1,11,4,220);
	H::VLine(24,1,3,4,219);
	H::HLine(15,4,8,4,220);
	H::VLine(16,4,4,4,219);
			
		
	//all box choice 10;
	//box 1-3
	H::drawBoxDoubleLineWithBG(35,0,23,1,213);
	H::drawBoxDoubleLineWithBG(74,3,23,1,213);
	H::drawBoxDoubleLineWithBG(113,0,23,1,213);
	
	//box7 6 8
	H::drawBoxDoubleLineWithBG(5,8,23,1,213);
	H::drawBoxDoubleLineWithBG(14,16,23,1,213);
	H::drawBoxDoubleLineWithBG(35,24,23,1,213);
	//box10 9 
	H::drawBoxDoubleLineWithBG(74,28,23,1,213);
	H::drawBoxDoubleLineWithBG(113,24,23,1,213);
	//4 5
	H::drawBoxDoubleLineWithBG(142,8,23,1,213);
	H::drawBoxDoubleLineWithBG(135,16,23,1,213);
	
	//Box betwbeen
	H::drawBoxDoubleLineWithBG(50,7,72,14,1);


	//Write option to box
	H::setcolor(215);H::gotoxy(40,1);cout<<"[1]. INSERT" ;
	H::setcolor(215);H::gotoxy(79,4);cout<<"[2]. DISPLAY" ;
	H::setcolor(215);H::gotoxy(118,1);cout<<"[3]. SEARCH" ;
	H::setcolor(215);H::gotoxy(147,9);cout<<"[4]. UPDATE" ;
	H::setcolor(215);H::gotoxy(141,17);cout<<"[5]. DELETE" ;
	H::setcolor(215);H::gotoxy(118,25);cout<<"[6]. FEEDBACK";
	H::setcolor(215);H::gotoxy(77,29);cout<<"[7]. SHOW INVOICES";
	H::setcolor(215);H::gotoxy(41,25);cout<<"[8]. IMPORT";
	H::setcolor(215);H::gotoxy(18,17);cout<<"[9]. BUY FLOWER";
	H::setcolor(215);H::gotoxy(10,9);cout<<"[10]. BACK";
	// FlowerAll();
	
	if(x==0){
		H::drawBoxDoubleLineWithBG(35,0,23,1,230);
		H::setcolor(232);H::gotoxy(40,1);cout<<"[1]. INSERT";
		Flower1();
	}
	if(x==1){
		H::drawBoxDoubleLineWithBG(74,3,23,1,230);
		H::setcolor(232);H::gotoxy(79,4);cout<<"[2]. DISPLAY";
		Flower2();
	}
	if(x==2){
		H::drawBoxDoubleLineWithBG(113,0,23,1,230);
		H::setcolor(232);H::gotoxy(118,1);cout<<"[3]. SEARCH";
		Flower3();
	}
	if(x==3){
		H::drawBoxDoubleLineWithBG(142,8,23,1,230);
		H::setcolor(232);H::gotoxy(147,9);cout<<"[4]. UPDATE";
		Flower4();
	}
	if(x==4){
		H::drawBoxDoubleLineWithBG(135,16,23,1,230);
		H::setcolor(232);H::gotoxy(141,17);cout<<"[5]. DELETE";
		Flower5();
	}
	if(x==5){
		H::drawBoxDoubleLineWithBG(113,24,23,1,230);
		H::setcolor(232);H::gotoxy(118,25);cout<<"[6]. FEEDBACK";
		Flower6();
	}
	if(x==6){
		H::drawBoxDoubleLineWithBG(74,28,23,1,230);
		H::setcolor(232);H::gotoxy(77,29);cout<<"[7]. SHOW INVOICES";
		Flower7();	
	}
	if(x==7){
		H::drawBoxDoubleLineWithBG(35,24,23,1,230);
		H::setcolor(232);H::gotoxy(41,25);cout<<"[8]. IMPORT";
		Flower8();
	}
	if(x==8){
		H::drawBoxDoubleLineWithBG(14,16,23,1,230);
		H::setcolor(232);H::gotoxy(18,17);cout<<"[9]. BUY FLOWER";
		Flower9();
	}
	if(x==9){
		H::drawBoxDoubleLineWithBG(5,8,23,1,230);
		H::setcolor(232);H::gotoxy(10,9);cout<<"[10]. BACK";
		Flower10();
	}	
}
void Design::FlowerChoice(){
H::setcolor(4);H::gotoxy(8,32);cout<<R"(       wWWWw               wWWWw)";
H::setcolor(4);H::gotoxy(8,33);cout<<R"( vVVVv (___) wWWWw         (___)  vVVVv)";
H::setcolor(4);H::gotoxy(8,34);cout<<R"( (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
H::setcolor(2);H::gotoxy(8,35);cout<<R"(  ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
H::setcolor(2);H::gotoxy(8,36);cout<<R"(  \|   \ |/   \| /  \~Y~/   \|    \ |/)";
H::setcolor(2);H::gotoxy(8,37);cout<<R"( \\|// \\|// \\|/// \\|//  \\|// \\\|///)";
H::setcolor(7);H::gotoxy(8,38);cout<<R"( ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

H::setcolor(5);H::gotoxy(48,32);cout<<R"(	 wWWWw               wWWWw)";
H::setcolor(5);H::gotoxy(48,33);cout<<R"(   vVVVv (___) wWWWw         (___)  vVVVv)";
H::setcolor(5);H::gotoxy(48,34);cout<<R"(   (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
H::setcolor(2);H::gotoxy(48,35);cout<<R"(    ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
H::setcolor(2);H::gotoxy(48,36);cout<<R"(    \|   \ |/   \| /  \~Y~/   \|    \ |/)";
H::setcolor(2);H::gotoxy(48,37);cout<<R"(   \\|// \\|// \\|/// \\|//  \\|// \\\|///)";
H::setcolor(7);H::gotoxy(48,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

H::setcolor(3);H::gotoxy(90,32);cout<<R"(	   wWWWw               wWWWw)";
H::setcolor(3);H::gotoxy(90,33);cout<<R"(   vVVVv (___) wWWWw         (___)  vVVVv)";
H::setcolor(3);H::gotoxy(90,34);cout<<R"(   (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
H::setcolor(2);H::gotoxy(90,35);cout<<R"(    ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
H::setcolor(2);H::gotoxy(90,36);cout<<R"(    \|   \ |/   \| /  \~Y~/   \|    \ |/)";
H::setcolor(2);H::gotoxy(90,37);cout<<R"(   \\|// \\|// \\|/// \\|//  \\|// \\\|///)";
H::setcolor(7);H::gotoxy(90,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

H::setcolor(6);H::gotoxy(132,32);cout<<R"(	     wWWWw               )";
H::setcolor(6);H::gotoxy(132,33);cout<<R"(   vVVVv (___) wWWWw        )";
H::setcolor(6);H::gotoxy(132,34);cout<<R"(   (___)  ~Y~  (___)  vVVVv  )";
H::setcolor(2);H::gotoxy(132,35);cout<<R"(    ~Y~   \|    ~Y~   (___)  )";
H::setcolor(2);H::gotoxy(132,36);cout<<R"(    \|   \ |/   \| /  \~Y~/  )";
H::setcolor(2);H::gotoxy(132,37);cout<<R"(   \\|// \\|// \\|/// \\|// )";
H::setcolor(7);H::gotoxy(132,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)"; 
}
void Design::Flowercut(){
	
H::setcolor(4);H::gotoxy(8,32);cout<<R"(       wWWWw               wWWWw)";
H::setcolor(4);H::gotoxy(8,33);cout<<R"( vVVVv (___) wWWWw         (___)  vVVVv)";
H::setcolor(4);H::gotoxy(8,34);cout<<R"( (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
H::setcolor(2);H::gotoxy(8,35);cout<<R"(  ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
H::setcolor(2);H::gotoxy(8,36);cout<<R"(  \|   \ |/   \| /  \~Y~/   \|    \ |/)";
H::setcolor(2);H::gotoxy(8,37);cout<<R"( \\|// \\|// \\|/// \\|//  \\|// \\\|///)";
H::setcolor(7);H::gotoxy(8,38);cout<<R"( ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
H::setcolor(7);H::gotoxy(39,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
H::setcolor(7);H::gotoxy(77,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

H::setcolor(3);H::gotoxy(117,32);cout<<R"(	      wWWWw               wWWWw)";
H::setcolor(3);H::gotoxy(117,33);cout<<R"(   vVVVv (___) wWWWw         (___)  vVVVv)";
H::setcolor(3);H::gotoxy(117,34);cout<<R"(   (___)  ~Y~  (___)  vVVVv   ~Y~   (___))";
H::setcolor(2);H::gotoxy(117,35);cout<<R"(    ~Y~   \|    ~Y~   (___)    |/    ~Y~)";
H::setcolor(2);H::gotoxy(117,36);cout<<R"(    \|   \ |/   \| /  \~Y~/   \|    \ |/)";
H::setcolor(2);H::gotoxy(117,37);cout<<R"(   \\|// \\|// \\|/// \\|//  \\|// \\\|///)";
H::setcolor(7);H::gotoxy(117,38);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

}
void Design::Footer(){
	H::setcolor(7);H::gotoxy(32,29);cout<<"PRESS         FOR ";
	H::setcolor(2);H::gotoxy(38,29);cout<<"[ENTER]";
	H::setcolor(1);H::gotoxy(50,29);cout<<"UPDATE MORE";
	H::setcolor(7);H::gotoxy(37,31);cout<<"PRESS       FOR ";
	H::setcolor(3);H::gotoxy(43,31);cout<<"[ESC]";
	H::setcolor(6);H::gotoxy(49,31);cout<<"BACK";
}
void Design::Search(){
//	//Box for search
	H::HLine(48,20,73,5,220);
	H::HLine(48,24,73,5,223);
	H::VLine(51,19,5,2,219);
	H::VLine(85,20,3,2,219);
	H::VLine(119,19,5,2,219);
}
void Design::Flowercolor(){
	int m=1;
    while(true)
    {
    	if(m>14)
		{
        	m=1;
		}
		H::setcolor(m++);  H::gotoxy(9,32);cout << R"(      wWWWw               wWWWw               wWWWw              wWWWw                wWWWw               wWWWw               wWWWw               wWWWw )";
		H::setcolor(m++);  H::gotoxy(9,33);cout << R"(vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___)  wWWWw       (___)   vVVVv  vVVVv (___) wWWWw         (___)  vVVVv  vVVVv (___) wWWWw         (___)  )";
		H::setcolor(m++);  H::gotoxy(9,34);cout << R"((___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~   (___) vVVVv  ~Y~    (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  (___)  ~Y~  (___)  vVVVv   ~Y~   )";
		H::setcolor(m++);  H::gotoxy(9,35);cout << R"( ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~    \|    ~Y~  (___)   |/     ~Y~    ~Y~   \|    ~Y~   (___)    |/    ~Y~    ~Y~   \|    ~Y~   (___)    |/   )";
		H::setcolor(m++);  H::gotoxy(9,36);cout << R"( \|   \ |/   \| /  \~Y~/   \|    \ |/    \|    \ |/   \| / \~Y~/  \|     \ |/    \|   \ |/   \| /  \~Y~/   \|    \ |/    \|   \ |/   \| /  \~Y~/   \|    )";
		H::setcolor(m++);  H::gotoxy(9,37);cout << R"(\\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|// \\\|/// \\|// \\|// \\|/// \\|//  \\|//)";
		H::setcolor(m++);  H::gotoxy(9,38);cout << R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";
		H::delay(500);
  
	    if (_kbhit()){       
	        char key = _getch();
	        if (key == 27) {  
	        	H::cls();
	            break;       
        		H::cls(); 
            }
			if (key == 13) {  
	         	
	        	break;
	        } 
        }  
    }

}
void Design::BoxOfHeader(){
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

	//HLINE HEADER
	H::HLine(29,3,112,187,255);
	H::HLine(29,12,112,187,255); 
	
	H::VLine(32,1,12,4,219);
	H::VLine(33,1,12,4,219);
	
	H::VLine(34,3,3,5,219);
	H::HLine(34,4,4,5,223);
	
	H::VLine(138,1,12,4,219);
	H::VLine(139,1,12,4,219);
	
	//corner top left
	H::HLine(30,2,1,1,220);
	
	H::VLine(34,3,3,213,219);
	H::HLine(34,4,5,5,223);
	H::HLine(34,4,4,165,223);  
	H::VLine(35,4,1,170,219);
	
	//corner bottom left
	H::HLine(30,13,1,1,223);
	
	H::VLine(34,8,3,213,219);
	H::HLine(34,11,5,5,220);
	H::HLine(34,11,4,165,220);  
	H::VLine(35,9,1,170,219);
	
	//corner top right
	H::HLine(139,2,1,1,220);
	
	H::VLine(137,3,3,213,219);
	H::HLine(131,4,5,5,223);
	H::HLine(132,4,4,165,223);  
	H::VLine(136,4,1,170,219);
	
	//corner bottom right
	H::HLine(139,13,1,1,223);
	
	H::VLine(137,8,3,213,219);
	H::HLine(131,11,5,5,220);
	H::HLine(132,11,4,165,220);  
	H::VLine(136,9,1,170,219);
}
void Design::Style(){
	//style near box up
	H::HLine(22,7,2,179,255);
	H::HLine(20,8,2,196,255);
	H::HLine(22,8,2,230,255);
	
	H::VLine(19,8,21,153,219);
	H::VLine(20,8,21,153,219);
	//style near box down
	H::HLine(22,30,2,179,255);
	H::HLine(20,30,2,196,255);
	H::HLine(22,31,2,230,255);
	
	//style near box up
	H::HLine(145,7,2,179,255);
	H::HLine(145,8,2,196,255);
	H::HLine(147,8,2,230,255);
	
	H::VLine(150,8,21,153,219);
	H::VLine(151,8,21,153,219);
	//style near box down
	H::HLine(147,30,2,179,255);
	H::HLine(145,30,2,196,255);
	H::HLine(145,31,2,230,255);
}
void Design::DesignInsertFlower(){
	
	//Insert 	
	//HLINE UP	
	H::HLine(1,0,168,162,220);
	H::HLine(3,1,5,187,220); 
	H::HLine(162,1,5,187,220);
	//	VLINE left	
	H::VLine(6,1,36,221,219); 
	//H:INE Down
	H::HLine(1,39,168,162,220);
	H::HLine(3,38,5,187,220);
	H::HLine(162,38,5,187,220);
	//VLINE right
	H::VLine(165,1,36,221,219);
	 
	                                                                                                        
	H::setcolor(1);H::gotoxy(42,6);cout<<R"(   _____  _____________  ______  ______   ____ _      _________    ___  ___ _________ )";
	H::setcolor(2);H::gotoxy(42,7);cout<<R"(  /  _/ |/ / __/ __/ _ \/_  __/ / __/ /  / __ \ | /| / / __/ _ \  / _ \/ _ /_  __/ _ |)";
	H::setcolor(3);H::gotoxy(42,8);cout<<R"( _/ //    /\ \/ _// , _/ / /   / _// /__/ /_/ / |/ |/ / _// , _/ / // / __ |/ / / __ |)";
	H::setcolor(4);H::gotoxy(42,9);cout<<R"(/___/_/|_/___/___/_/|_| /_/   /_/ /____/\____/|__/|__/___/_/|_| /____/_/ |_/_/ /_/ |_|)";
	
	                                                                                     
	
	H::setcolor(1);H::gotoxy(13,5);cout<<R"(   __   _)";
	H::setcolor(1);H::gotoxy(13,6);cout<<R"( _(  )_( )_)";
	H::setcolor(1);H::gotoxy(13,7);cout<<R"((_   _    _))";
	H::setcolor(1);H::gotoxy(13,8);cout<<R"(  (_) (__))";
	H::setcolor(7);H::gotoxy(13,9);cout<<R"(  / / / /)";
	
	H::setcolor(3);H::gotoxy(145,5);cout<<R"(   __   _)";
	H::setcolor(3);H::gotoxy(145,6);cout<<R"( _(  )_( )_)";
	H::setcolor(3);H::gotoxy(145,7);cout<<R"((_   _    _))";
	H::setcolor(3);H::gotoxy(145,8);cout<<R"(  (_) (__))";
	H::setcolor(7);H::gotoxy(145,9);cout<<R"(  / / / /)";
	
	BoxOfHeader();
	//HLIne VLine of insert
	H::HLine(15,14,140,1,220);
	H::VLine(30,14,3,6,219);
	H::VLine(35,14,3,6,219);
	H::drawBoxDoubleLineWithBG(17,18,30,9,3);
	
	H::setcolor(6);H::gotoxy(23,19);cout<<R"(      .--.)" ;  
	H::setcolor(6);H::gotoxy(23,20);cout<<R"(    .'_\/_'.)" ;  
	H::setcolor(5);H::gotoxy(23,21);cout<<R"(    '. /\ .')" ;  
	H::setcolor(5);H::gotoxy(23,22);cout<<R"(      "||")" ;  
	H::setcolor(1);H::gotoxy(23,23);cout<<R"(       || /\)" ;  
	H::setcolor(1);H::gotoxy(23,24);cout<<R"(    /\ ||//\))" ;  
	H::setcolor(2);H::gotoxy(23,25);cout<<R"(   (/\\||/)" ;  
	H::setcolor(2);H::gotoxy(23,26);cout<<R"(______\||/_______)" ;  
	H::setcolor(2);H::gotoxy(23,27);cout<<R"(^^^^^^^^^^^^^^^^^)" ; 
	
	H::HLine(52,15,5,204,220);
	H::HLine(53,16,3,145,220);
	H::VLine(55,16,9,170,219);
	H::HLine(53,26,3,221,220);
	H::HLine(52,27,5,145,220);
	H::HLine(51,28,7,204,220);
	
	H::VLine(67,14,15,230,219);
	H::VLine(96,14,15,230,219);
	
	
	//HLIne for insert 
	
	H::HLine(62,16,38,196,220);
	H::HLine(62,18,38,196,220);
	H::HLine(62,20,38,196,220);
	H::HLine(62,22,38,196,220);
	H::HLine(62,24,38,196,220);
	H::HLine(62,26,38,196,220);
	H::HLine(62,28,38,196,220);

	H::VLine(115,14,15,230,219);
	H::VLine(149,14,15,230,219);
	
	//HLIne for insert 
	H::HLine(110,16,43,196,220);
	H::HLine(110,18,43,196,220);
	H::HLine(110,20,43,196,220);
	H::HLine(110,22,43,196,220);
	H::HLine(110,24,43,196,220);
	H::HLine(110,26,43,196,220);
	H::HLine(110,28,43,196,220);
	
	FlowerChoice();
}
void Design::DesignDisplayFlower(){
	//DisPlay flower data
	BoxOfHeader();	
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

	H::setcolor(1);H::gotoxy(39,6);cout<<R"(   ___  ___________  __   _____  __   ______   ____ _      _________     ___  ___ _________ )";
	H::setcolor(2);H::gotoxy(39,7);cout<<R"(  / _ \/  _/ __/ _ \/ /  / _ \ \/ /  / __/ /  / __ \ | /| / / __/ _ \   / _ \/ _ /_  __/ _ |)";
	H::setcolor(3);H::gotoxy(39,8);cout<<R"( / // // /_\ \/ ___/ /__/ __ |\  /  / _// /__/ /_/ / |/ |/ / _// , _/  / // / __ |/ / / __ |)";
	H::setcolor(4);H::gotoxy(39,9);cout<<R"(/____/___/___/_/  /____/_/ |_|/_/  /_/ /____/\____/|__/|__/___/_/|_|  /____/_/ |_/_/ /_/ |_|)";
	
	//Heaer of display
	
	H::drawBoxDoubleLineWithBG(20,14,130,1,3);
	H::drawBoxDoubleLineWithBG(20,17,130,13,2);
}
void Design::DesignSearchFlower(){
	
	//Search Flower Data
	//HLINE UP	
	H::HLine(1,0,168,162,220);
	//VLINE left	
	H::VLine(6,1,36,221,219);
	//VLINE right
	H::VLine(165,1,36,221,219); 
	//H:INE Down
	H::HLine(1,39,168,162,220);
	//HLine 4 have coner
	//left
	H::HLine(3,1,5,187,220); 
	H::HLine(3,38,5,187,220); 
	H::HLine(4,2,3,204,220);
	H::HLine(4,37,3,204,220);
	//right
	H::HLine(162,1,5,187,220);
	H::HLine(162,38,5,187,220);
	H::HLine(163,2,3,204,220);
	H::HLine(163,37,3,204,220);

	//HLINE HEADER
	H::HLine(29,3,112,187,255);
	H::HLine(29,12,112,187,255); 
	
	H::VLine(32,1,12,4,219);
	H::VLine(33,1,12,4,219);
	
	H::VLine(34,3,3,5,219);
	H::HLine(34,4,4,5,223);
	
	H::VLine(138,1,12,4,219);
	H::VLine(139,1,12,4,219);
	
	//corner top left
	H::HLine(30,2,1,1,220);
	
	H::VLine(34,3,3,213,219);
	H::HLine(34,4,5,5,223);
	H::HLine(34,4,4,165,223);  
	H::VLine(35,4,1,170,219);
	
	//corner bottom left
	H::HLine(30,13,1,1,223);
	
	H::VLine(34,8,3,213,219);
	H::HLine(34,11,5,5,220);
	H::HLine(34,11,4,165,220);  
	H::VLine(35,9,1,170,219);
	
	//corner top right
	H::HLine(139,2,1,1,220);
	
	H::VLine(137,3,3,213,219);
	H::HLine(131,4,5,5,223);
	H::HLine(132,4,4,165,223);  
	H::VLine(136,4,1,170,219);
	
	//corner bottom right
	H::HLine(139,13,1,1,223);
	H::VLine(137,8,3,213,219);
	H::HLine(131,11,5,5,220);
	H::HLine(132,11,4,165,220);  
	H::VLine(136,9,1,170,219);
	
	H::setcolor(1);H::gotoxy(41,6);cout<<R"(   ___________   ___  _______ __   ______   ____ _      _________     ___  ___ _________)"; 
	H::setcolor(2);H::gotoxy(41,7);cout<<R"(  / __/ __/ _ | / _ \/ ___/ // /  / __/ /  / __ \ | /| / / __/ _ \   / _ \/ _ /_  __/ _ |)";
	H::setcolor(3);H::gotoxy(41,8);cout<<R"( _\ \/ _// __ |/ , _/ /__/ _  /  / _// /__/ /_/ / |/ |/ / _// , _/  / // / __ |/ / / __ |)";
	H::setcolor(4);H::gotoxy(41,9);cout<<R"(/___/___/_/ |_/_/|_|\___/_//_/  /_/ /____/\____/|__/|__/___/_/|_|  /____/_/ |_/_/ /_/ |_|)";
    Search();                                                                                 
	FlowerChoice();
	Style();

}
void Design::DesignUpdateFlower(){
	//Update Flower
	//HLINE UP	
	H::HLine(1,0,168,162,220);
	//VLINE left	
	H::VLine(6,1,36,221,219);
	//VLINE right
	H::VLine(165,1,36,221,219); 
	//H:INE Down
	H::HLine(1,39,168,162,220);
	//HLine 4 have coner
	//left
	H::HLine(3,1,5,187,220); 
	H::HLine(3,38,5,187,220); 
	H::HLine(4,2,3,204,220);
	H::HLine(4,37,3,204,220);
	//right
	H::HLine(162,1,5,187,220);
	H::HLine(162,38,5,187,220);
	H::HLine(163,2,3,204,220);
	H::HLine(163,37,3,204,220);

	//HLINE HEADER
	H::HLine(29,3,112,187,255);
	H::HLine(29,12,112,187,255); 
	
	H::VLine(32,1,12,4,219);
	H::VLine(33,1,12,4,219);
	
	H::VLine(34,3,3,5,219);
	H::HLine(34,4,4,5,223);
	
	H::VLine(138,1,12,4,219);
	H::VLine(139,1,12,4,219);
	
	//corner top left
	H::HLine(30,2,1,1,220);
	
	H::VLine(34,3,3,213,219);
	H::HLine(34,4,5,5,223);
	H::HLine(34,4,4,165,223);  
	H::VLine(35,4,1,170,219);
	
	//corner bottom left
	H::HLine(30,13,1,1,223);
	
	H::VLine(34,8,3,213,219);
	H::HLine(34,11,5,5,220);
	H::HLine(34,11,4,165,220);  
	H::VLine(35,9,1,170,219);
	
	//corner top right
	H::HLine(139,2,1,1,220);
	
	H::VLine(137,3,3,213,219);
	H::HLine(131,4,5,5,223);
	H::HLine(132,4,4,165,223);  
	H::VLine(136,4,1,170,219);
	
	//corner bottom right
	H::HLine(139,13,1,1,223);
	
	H::VLine(137,8,3,213,219);
	H::HLine(131,11,5,5,220);
	H::HLine(132,11,4,165,220);  
	H::VLine(136,9,1,170,219);
	
	H::setcolor(1);H::gotoxy(39,6);cout<<R"(   __  _____  ___  ___ __________   ______   ____ _      _________     ___  ___ _________ )";
	H::setcolor(2);H::gotoxy(39,7);cout<<R"(  / / / / _ \/ _ \/ _ /_  __/ __/  / __/ /  / __ \ | /| / / __/ _ \   / _ \/ _ /_  __/ _ |)";
	H::setcolor(3);H::gotoxy(39,8);cout<<R"( / /_/ / ___/ // / __ |/ / / _/   / _// /__/ /_/ / |/ |/ / _// , _/  / // / __ |/ / / __ |)";
	H::setcolor(4);H::gotoxy(39,9);cout<<R"( \____/_/  /____/_/ |_/_/ /___/  /_/ /____/\____/|__/|__/___/_/|_|  /____/_/ |_/_/ /_/ |_|)";
	FlowerChoice();
}
void Design::DesignDeleteFlower(){
	//Delete Flower Data
	BoxOfHeader();
	H::HLine(48,20,73,5,220);
	H::HLine(48,24,73,5,223);
	H::VLine(51,19,5,2,219);
	H::VLine(85,20,3,2,219);
	H::VLine(119,19,5,2,219);
	
	H::setcolor(1);H::gotoxy(41,6);cout<<R"(   ___  ______   ______________   ______   ____ _      _________     ___  ___ _________ )";
	H::setcolor(2);H::gotoxy(41,7);cout<<R"(  / _ \/ __/ /  / __/_  __/ __/  / __/ /  / __ \ | /| / / __/ _ \   / _ \/ _ /_  __/ _ |)";
	H::setcolor(3);H::gotoxy(41,8);cout<<R"( / // / _// /__/ _/  / / / _/   / _// /__/ /_/ / |/ |/ / _// , _/  / // / __ |/ / / __ |)";
	H::setcolor(4);H::gotoxy(41,9);cout<<R"(/____/___/____/___/ /_/ /___/  /_/ /____/\____/|__/|__/___/_/|_|  /____/_/ |_/_/ /_/ |_|)";
                                                                                        
	Style();
	FlowerChoice();
}

#endif