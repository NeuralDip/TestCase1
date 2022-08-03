
/* avoid multiple inclusions */
#ifndef GUI_TOP_H
#define GUI_TOP_H

#include <stdio.h>
#include <stdlib.h>

// include thread Manager early
#include "ThreadManger.h"

#include "GUI_System.h"
using namespace std;

class GUI_Top 
{

public:
    ThreadManger* MyThreadManager;
    GUI_System* Window_System;

    GUI_Top();
    GUI_Top(ThreadManger* MyThreadManager);
};
#endif
