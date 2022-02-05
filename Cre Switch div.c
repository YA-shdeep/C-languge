#include<stdio.h>
void main()
{
int b,B ;
scanf("%d",&B);
b = 1 ;
switch (b)
{
case 1 :
   if (B<=30)
    {
        printf("Fail");

    }
    else 
    {
        goto w1 ;
    }
    break ;
w1 :
case 2 :

    if (B<=40)
    {
        printf("THIRD divison pass");
        printf("ro");
    }
    else
    {
        goto w2 ;
    }
    break ;
    w2:
    case 3 :
    if (B<=50)
    {
        printf("second divison pass");
    }
    else
    {
goto w3 ;
    }
    break ;
    w3 :
    case 4 :
    if (B<=60)
    {
        printf("FIRST division pass");
    }
    break;

default: ("enter the percentage correctly");
    break;
}


}