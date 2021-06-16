// Using define for macros

#include <iostream>
using namespace std;
#define MIN(a,b) (((a)<(b))? a:b)


int main()
{
	int x,y;
	x=10;
	y=20;
	cout<< " the minimum is " << MIN(x,y);
	cout<< "\n";
	system("pause");
	return 0;
}
