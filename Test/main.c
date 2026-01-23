#include <stdio.h>
/* Main variable */
int var1 = 2;
/* Main function */
int func1(int a, int b){
    return a+b;
}


int main()
{
    int a=2, b=3;
    
#define D_TC_1
#include "test_enviroment.h"
    {
        int t1 = var1;
        printf("var1 = %d, ",t1);
        int t2 = func1( a, b );
        printf("func1 = %d\n",t2);
        
        // -> output is var1 = 1, func1 = 3
    }
#undef D_TC_1
#include "test_enviroment.h"

    {
        int t1 = var1;
        printf("var1 = %d, ",t1);
        int t2 = func1( a , b );
        printf("func1 = %d\n",t2);
        
        // -> output is var1 = 2, func1 = 3
    }


    return 0;
}
