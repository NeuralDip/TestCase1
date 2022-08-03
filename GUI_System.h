
/* avoid multiple inclusions */
#ifndef GUI_SYSTEM_H
#define GUI_SYSTEM_H

#include <stdio.h>
#include <stdlib.h>

#include <string>

class GUI_Top;

using namespace std;

class GUI_System 
{
    GUI_Top* MyScreen;

public:

    GUI_System(GUI_Top* TopScreen);
    ~GUI_System() {  }

    // Service Events
    void ServiceBodyLoadSystem();
};
#endif
