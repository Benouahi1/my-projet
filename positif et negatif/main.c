#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   printf("tapez un nomber :");
   scanf("%d",&i);
   if(i>0)
   {
    printf(" le nomber %d et un nomber positif ",i);
   }
    else
        {
        printf(" le nomber %d et un nomber negatif",i);
        }

    return 0;
}
