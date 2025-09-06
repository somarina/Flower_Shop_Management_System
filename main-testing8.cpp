#include "Header/ANTHeader/ANTHinsyOOP"
#include "Header/MainCode/mainHeader.h"
using namespace ANTHinsyOOP;

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

    // Buying();
    // DesignBuyingFlower();
    // main1();
    // ShowAllInvoices();
    ShowUserData();
    // ShowInvoice();

    getch();
    return 0;
}