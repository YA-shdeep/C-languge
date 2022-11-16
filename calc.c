// here ill be making switch statement of arith,ralational.bitwise op
// Author - Yashdeep
#include <stdio.h>
#include <ctype.h>
int main()
{
    int a, b, c, d, f;
    float A, B, C;
    char x, z, ar, T, m, w1;

    printf("Mutliple Calculator Using : \n Arithmatic \n Relational \n Bitwise");
    printf("\n For starting calculator press Y \n For End press N : \n ");
    x = getchar();
    if (x == 'y' || x == 'Y')
    {
        printf("\n\nGetting started......\nGathering file....\n press 0 to enter:\n");
        scanf("%d", &f);
    w1:
        printf("Please select the Type of operation you require\n 1 For Arithmetic \n 2 for Relational \n 3 for Bitwise\n");

        scanf(" %c", &T);

        switch (T)
        {
        case '1':
        w5 :
            printf("Are you looking for Modulus Operartios?\n(Y/N)");
            scanf(" %c", &m);
            if (m == 'Y' || m == 'y')
            {
                printf("Enter the 2 number in format of A % B:\n");
                scanf("%d%d", &a, &b);

                c = a % b;
                printf("The value for %d modulo %d is %d", a, b, c);
                 printf("\n!!!\n\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w5;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
            }
            if (m == 'n' || m == 'N')
            {
                printf("Entering the Arithmeantic operator....\n\n Enter the 2 oparnds:\n");
                scanf("%f %f", &A, &B);

                printf("Enter the Operator\n +,-,*,/ \n");
                scanf(" %c", &ar);
                switch (ar)
                {
                case '+':
                    C = A + B;
                    printf(">>>>The addition of given two numbers is %2.10f\n", C);
                    printf("\n!!!\n\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w5;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;
                case '-':
                    C = A - B;
                    printf(">>>The subtraction of given two numbers is %2.10f\n", C);
                    printf("!!!\n\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w5;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;
                case '*':
                    C = A * B;
                    printf(">>>The multiplication of given two numbers is %2.10f\n", C);
                    printf("\n!!!\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w5;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;
                case '/':
                    C = A / B;
                    printf(">>>The divsion of given two numbers is %2.10f\n", C);
                    printf("!!!\n\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w5;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;
                default:
                    printf("!!!!!!! Wrong Input \n\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w5;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                }
            }

            break;

        case '2':
        w3:
            printf("Initiating the Relational Operator:\n");

            printf("Enter the 2 number\n which you like to compare :\n");
            scanf("%f %f", &A, &B);
            if (A != B)
            {
                if (A > B)
                {
                    printf(">>%5.2f is Greater than %5.2f\n\n", A, B);
                }
                else
                {
                    printf(">>%5.2f is Greater than %5.2f\n\n", B, A);
                }
            }

            if (B == A)
            {
                printf(">>%5.2f is equal to %5.2f\n\n", B, A);
            }
            printf("To start again from All case press 1 \n For going back to this case press 2:\n For Ending the code press 3 \n");
            scanf(" %c", &w1);
            if (w1 == '1')
            {
                printf("Going back to start...\n\n");
                goto w1;
            }
            if (w1 == '2')
            {
                printf("Going back to start of this case ......\n\n");
                goto w3;
            }
                if (w1 == '3')
                {
                    printf("Thanks for using");
            break;
                }

                break;
            
            case '3':
            w2:
                printf("Initialising the Bitwise Operator........\nPress 1 To get a Tip about Bitwise 0 to ignore \n");
                scanf("%d", &a);
                if (a == 1)
                {
                    printf(">>>>>>>>Bitwise can only be operated on Integer type number\n");
                }
                printf("Enter the 2 number on which you like to operate:\n");
                scanf("%d %d", &b, &c);
                printf("Enter the Bitwise Operator \n A for & \n O for |\n X for ^ \n L for << \n R for >>\n!!! Case sensitive !!!\n");
                scanf(" %c", &z);
                // putchar(toupper(z));
                switch (z)
                {
                case 'A':
                    d = b & c;
                    printf(">>The Bitwise & of %d and %d is %d\n\n", b, c, d);
                      printf("\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w2;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;
                    d = b | c;
                    printf(">>The Bitwise & of %d and %d is %d\n\n", b, c, d);
                      printf("\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w2;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;
                    d = b ^ c;
                    printf(">>The Bitwise & of %d and %d is %d\n\n", b, c, d);
                      printf("\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w2;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;
                    d = b << c;
                    printf(">>>The Bitwise & of %d and %d is %d\n\n", b, c, d);
                      printf("\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w2;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;
                    d = b >> c;
                    printf(">>The Bitwise & of %d and %d is %d\n\n", b, c, d);
                     printf("\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w2;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                    break;

                default:
                    printf("!!!!!!! Wrong Input or please check as it is case sensitive\n\n To start again from All case press 1 \n For going back to this case press 2:\nFor Ending the code press 3 \n");
                    scanf(" %c", &w1);
                    if (w1 == '1')
                    {
                        printf("Going back to start...\n\n");
                        goto w1;
                    }
                    if (w1 == '2')
                    {
                        printf("Going back to start of this case ......\n\n");
                        goto w2;
                    }
                    if (w1 == '3')
                    {
                        printf("Thanks for using");
                        break;
                    }
                }
                break;
            default:
                printf("Wrong input \n To start again press 1\n ");
                scanf(" %c", &w1);
                if (w1 == '1')
                {
                    printf("Going back to start...\n\n");
                    goto w1;
                }

                break;
            }
        }
    
        else
        {
            printf("Thanks , later");
        }

        return 0;
    }
