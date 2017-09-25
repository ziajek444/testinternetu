#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
    while(!system("ping wp.pl"))
    {
     Sleep(1000);
    }
    
    cout<<"KONIEC"<<endl;
    Beep(1000,1000);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
