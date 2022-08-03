#include "GUI_System.h"
#include "GUI_Top.h"

#include <thread>
#include <string.h>

using namespace std;
// Callbacks
void GUI_System::ServiceBodyLoadSystem()// Main body of the service. Run on its own thread
{
        printf("02 params address : %08X %08X %08X\n", MyScreen->MyThreadManager , MyScreen->MyThreadManager->StructLoadSystem ,&MyScreen->MyThreadManager->StructLoadSystem->params);
        return;
}

GUI_System::GUI_System(GUI_Top* TopScreen) 
{
    MyScreen = TopScreen;

}
