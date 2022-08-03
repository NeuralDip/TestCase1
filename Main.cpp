
#include "GUI_Top.h" 

using namespace std;

int main(int argc, char** argv)
{
    ThreadManger* MyThreadManager= new ThreadManger();
    GUI_Top* TopGui = new GUI_Top(MyThreadManager);
    return 0;
}

