#include <stdio.h>
#include <stdlib.h>

int main()
{


   int a,b;
    printf("tapez le premier nombre entier: \n");
    scanf("%d",&a);
     printf("tapez le deuxième nombre entier : \n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d plus grand que le nombre %d\n",a,b);

    }
     if(b>a)
    {
        printf("%d plus grand que le nombre %d\n",b,a);
    }




    return 0;
}
