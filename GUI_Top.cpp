
#include "GUI_Top.h"

GUI_Top::GUI_Top(ThreadManger* iMyThreadManager)  {

    MyThreadManager = iMyThreadManager;
    MyThreadManager->SetParent(this);
    Window_System = new GUI_System(this);

    MyThreadManager->StructLoadSystem->params["FileName"] = "WTF";
    MyThreadManager->ServicesStartLoop();

}
