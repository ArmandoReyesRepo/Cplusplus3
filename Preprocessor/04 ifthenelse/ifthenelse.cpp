

//  A simple #if/#else example.

#include <iostream>
using namespace std;

#define MAX 6

int main()
{
    #if MAX>10
    COUT << "Extra memory required. \n";
    #else
    cout << "Current memory OK. \n";
    #endif

    //...
    return 0;
}
