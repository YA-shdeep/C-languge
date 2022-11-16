#include <stdio.h>
void main()
/*{
    for (int i = 11; i >= 0; i--)       printing half pyramid  |\
                                                               |_\
    {
        for (int j = 0; j < i; j++)
        {
            printf("+");    }
        printf("\n");
    }
}*/
/*{
 for (int i = 0 ; ; )
 { i < 10 ;
   i++ ;
   printf("%d",i);
}
}*/
/*{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 10; k > j; k--)
            {
                printf(" ");
            }
            printf("#");
        }
        printf("\n");
    }
}*/
/*
{
    int i, j;
    for (i = 0, j = 0; j < 10, i < 10; i++, j++)
    {
        printf("%d%d", j, i);
    }
}*/
/*{ printing pyramid                                                            /\
                                                                               /__\
   int i, j, k, row = 5;
   for (i = 1; i <= row; i++)
   {
       for (j = 1; j <= row - i; j++)
       {
           printf("  ");
       }
       for (k = 1; k <= 2 * i - 1; k++)
       {
           printf("* ");
       }

       printf("\n");
   }
}*/
/*{                                       PRINTING HALF PYRAMID  /|
    int rows = 6;                                               /_|
    int i, j, k;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= i ; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}*/
/*
{
    for (int i = 0; i <= 5; i++)                                              PRINTING PYRAMID  _
    {                                                                                          | /
                                                                                               |/
        for (int j = 5; j >= i; j--)
        {
            printf("+");
        }
        printf("\n");
    }
}*/
/*                                                                              __
{ int f = 6 ;                                                   PRINTING PYRAID \ |
for (int i = 1; i < f; i++)                                                      \|
{
    for (int j = 1; j < i; j++)
    {
        printf(" ");

    }
    for (int k = 6; k > i; k--)
    {
        printf("*");
    }
    printf("\n");

}
}*/

{
    int l = 9;                                            //  PYRAMID PRINTING /*/\*/
    for (int i = 1; i <= l; i++)                                           /*  \/*/
    {
        for (int j = l; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    int a = l - 1;
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y <= x; y++)
        {
            printf(" ");
        }
        for (int z = 2*a; z > 2*x+1; z--)
        {
            printf("*");
        }
        printf("\n");
    }
}
