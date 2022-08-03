#include "ThreadManger.h"
#include "GUI_Top.h"

// SUPPORT METHODS
void ThreadManger::SetParent(GUI_Top* SetParent)
{
    MyScreen = SetParent;
}

// Constructor / desstructor
ThreadManger::ThreadManger()
{
    StructLoadSystem = new ServiceStruct();
}
void ThreadManger::ServicesStartLoop()
{
    printf("01 params address : %08X %08X %08X\n", MyScreen->MyThreadManager, MyScreen->MyThreadManager->StructLoadSystem, &MyScreen->MyThreadManager->StructLoadSystem->params);
    MyScreen->Window_System->ServiceBodyLoadSystem();
    printf("03 params address : %08X %08X %08X\n", MyScreen->MyThreadManager, MyScreen->MyThreadManager->StructLoadSystem, &MyScreen->MyThreadManager->StructLoadSystem->params);
}


