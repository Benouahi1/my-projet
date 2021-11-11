#include <stdio.h>
#include <stdlib.h>

int main()
{   /*float mad,usd=0,eur=0;

    printf("Donnez-moi combien vous voulez convertir pour MAD  :    ");
    scanf("%f",&mad);
    eur = mad * 10.45 ;
    usd = mad * 9.11 ;
    printf("%.2f MAD= %.2f EUR \n",mad,eur);
    printf("%.2f MAD= %.2f USD \n",mad,usd);*/

    float dh,eur=0,usd=0;
    int i;

       printf("Donnez-moi combien vous voulez convertir pour MAD :  \n");
    scanf("%f",&dh);

    printf("Choisissez la devise dans laquelle vous souhaitez convertir :\n tapez 1 pour convertier DH pour USD .\n tapez 2 pour convirtur DH pour eur .\n");
    scanf("%d",&i);

    eur = dh / 10.45 ;
    usd = dh /9.11 ;
    if(i==1)
    {
      printf("%.2f MAD= %.2f USD \n",dh,usd);
    }
    else if(i==2)
    {
    printf("%.2f MAD= %.2f EUR \n",dh,eur);
    }
    else
    {
        printf("erour");
    }






    return 0;
}
