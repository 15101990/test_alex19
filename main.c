#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int y,z,r;
    printf("Enter the Operator \n");
    scanf("%c",&x);

     printf("Enter Number_1 \n");
    scanf("%d",&y);

     printf("Enter Number_2 \n");
    scanf("%d",&z);

    switch (x)
    {



case'+':
    r=y+z;
    break;

case'-':
    r=y-z;

    break;

case'*':
    r=y*z;
    break;

case'/':
    r=y/z;
    break;

    }

     printf("The result = %d \n",r);


    return 0;
}
