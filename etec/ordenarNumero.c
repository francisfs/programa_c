#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2, num3, ord1, ord2, ord3;

    printf("digite o primeiro numero \n");
    scanf("%d",&num1);
    printf("digite o segundo numero \n");
    scanf("%d",&num2);
    printf("digite o terceiro numero \n");
    scanf("%d",&num3);

    if (num1 < num2 && num1 < num3 );
    {
        ord1 = num1;
    }
    if (num2 < num3 );
    {
        ord2 = num2;
    }

    if (num3 > num2 );
    {
        ord3 = num3;
    }

    

    printf("%d,%d,%d",ord1,ord2,ord3);
    return 0;
}
