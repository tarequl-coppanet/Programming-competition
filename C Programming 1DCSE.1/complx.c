#include<stdio.h>

main()
{
    int i=0, x=0;
    for(i=1; i<10; ++i)
        if(i%2==1)
        x=x+i;
        else
        x--;
    printf("%d\n",x);


    return 0;
}
