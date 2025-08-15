#include "Header/design_staff.h"
#include "Header/staff.h"
#include "Header/designStaff4Admin.h"
#include "header/ANTHinsyOOP"
using namespace ANTHinsyOOP;

int main()
{
	H::DisableScreenResize();
    H::setFixedScreenConsole(170, 40);
    H::setFont(18,700);
    H::setcursor(0,0);

    // cout << R"(
    //        _ _
    //      _{ ' }_
    //     { `.!.` }
    //     ',_/Y\_,'
    //       {_,_}
    //         |
    //       (\|  /)
    //        \| //
    //         |//
    //      \\ |/  //
    //  ^^^^^^^^^^^^^^^
    // )";

    cout << R"(
             a@@@@a             
         a@@@@@@@@@@@@a         
       a@@@@@@by@@@@@@@@a       
     a@@@@@S@C@E@S@W@@@@@@a     
     @@@@@@@@@@@@@@@@@@@@@@     
      `@@@@@@`\\//'@@@@@@'      
               ||
               ||         
               ||
               ||
              /MM\
    )";


    getch();
    return 0;
}