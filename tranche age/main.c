#include <stdio.h>
#include <stdlib.h>

int main()
{
    //exercice 4
    int i;
   do { printf(" Ecrivez votre age :\n");
    scanf("%d",&i);
   }
   while(i<=0);
    if(i<3)
    {
        printf("Categorie Bebe");
    }
    else if(i>=3&&i<15)
    {
         printf("Categorie Enfant");
    }
    else if(i>=15&&i<20)
    {
         printf("Categorie Adolescent");
    }
    else if(i>=20&&i<30)
    {
         printf("Categorie jeun");
    }
    else if(i>=35&&i<65)
    {
         printf("Categorie Mature");
    }
    else if(i>=65)
    {
         printf("Categorie Vieux");
    }
    /*else if(i<=0)
    {
         printf("entre un ages logique");
    }*/






    return 0;
}
