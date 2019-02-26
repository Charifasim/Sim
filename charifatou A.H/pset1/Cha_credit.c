// Charifatou Adamou. H
#include <stdio.h>
#include <cs50.h>
#include <string.h>

 int main (void)
 {
     long long number;
     int h=0;
     do
     int g=0;
     {
         number = get_long_long("card number");
     }
     while (number<0);
     long long g= number;
     while (g>0)
     {
         g=g/10; a++;
     }
     if (h!=13 && h!=15 && h!=16)
     {
         printf ("number of card not valid");
     }
     g=number;
     int g=0;
     int j=0;
     for (int i=1; i<a; i++)
     {
         int j= g%10;
         if (i%2==0)
         {
             j=j*2;
         }
         if (i%2!=0)
         {
             j=j*1;
         }
         if (j>9)
         {
             j=j-9;
         }
         i=i+j;
         g=g/10;
         if (i%10!=0)
         {
             printf ("no valid card");
         }
         else
         {
             printf("valid card");
         }
         g=number;
         while (g>100)
         {
           g=g/10;
         }
         int k= g;
         if ((k==34 || k==37) && (g==15))
         {
             printf ("Amex");
         }
         else if ((k>50 && k<56 && g==16))
         {
             printf("mastercard");
         }
         else if ((k/10==4) && (g==13 || g==16))
         {
             printf ("visa");
         }
         else
         {
             printf ("another bank");
         }
     }

 }