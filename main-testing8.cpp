#include "Header/ANTHeader/ANTHinsyOOP"
#include "Header/MainCode/mainHeader.h"
using namespace ANTHinsyOOP;

int main()
{
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  H::DisableButtonClose();
   H::setConsoleTitle("Flower Shop Management System");
   H::DisableScreenResize();
   H::setFixedScreenConsole(170,40);
   H::setFont(18,700);
//////////////////////////////////////////////////////////////////////////////////////////////////////
////								test for main design on The first console

    // Buying();
    // DesignBuyingFlower();10012ek ok
    // main1();
    // ShowAllInvoices();
    // ShowAllInvoices();
    // ShowUserData();210
    Buying();
    
    // DesignUserFeedback();
    // ShowFeedbackPages();
    // DesignImportFlowerData();
    // ImportFlowerQty();1000102e- k
    // ShowInvoice();
    // SearchUserData();
    // DesignUserInformation();
    // clear_Screen2();

    getch();
    return 0;
}