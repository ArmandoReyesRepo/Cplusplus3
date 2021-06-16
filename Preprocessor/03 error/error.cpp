// another #error directive example
#include <stdio.h>
 
#if MyChar != 'X'
#error    The MyChar character is not 'X'
#endif
 
int main()
{
return 0;
}
// no output, with error message during the compilation