
/* avoid multiple inclusions */
#ifndef GUI_THREADMANAGER_H
#define GUI_THREADMANAGER_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <thread>
#include <queue>
#include <unordered_map>
#include <mutex>
#include <condition_variable>

#include "CommonDefines.h"

using namespace std;

class GUI_Top;
class GUI_System;

class ThreadManger
{
    class JobBaseClass
    {

    public:
        void (GUI_System::* EndEvent)();
    //    void (GUI_System::* BodyEvent)();
    };
    class JobsClass
    {
    public:
    //    JobBaseClass CPUJobs;
    //    JobBaseClass GPUJobs;
        JobBaseClass RTLJobs;
    };
    GUI_Top* MyScreen;

public:
    void ServicesStartLoop();

    // if the following three declarations are moved, then the behaviour changes
    JobsClass MyJobs;
    queue<pair<string, int>> Replies;
    ServiceStruct* StructQuitApplication;

    // the previous 3 declarations affect the 'StructLoadSystem'
    ServiceStruct* StructLoadSystem;

    ThreadManger();
    void SetParent(GUI_Top* SetParent);

};

#endif
