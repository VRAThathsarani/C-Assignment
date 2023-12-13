#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stamp,coins,change;
    int C50=2;
    int C25=3;
    int C10=5;
    int C5=0;

    int S25=2;
    int S15=3;
    int S10=3;

    char A;

     while (1>0)
     {
        printf("Enter type of Stamps (25/15/10):");
        scanf("%d",&stamp);

        if ((stamp==25)||(stamp==15)||(stamp==10))
        {
            if (S25>0 || S15>0 || S10>0)
            {
                printf("Enter type of coins (50/25/10/5):");
                scanf("%d",&coins);

                change=coins-stamp;

                if (S25!=0)
                {
                    if (((coins>=50)||(coins>=25))&& (stamp==25))
                    {
                        if (coins==50)
                        {
                            printf("Stamp dispensed\n");
                            printf("Change=%d\n",change);
                            printf("Denomination= one 25 coin\n\n");
                            C50++;
                            C25--;
                            S25--;
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        else if (coins==25)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            printf("No change\n\n");
                            C25++;
                            S25--;
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        else
                        {
                            printf("\n\nNo change available\n\n");
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                    }
                }

                else if (S15!=0)
                {
                    if (((coins>=50)||(coins>=25))&&(stamp==15))
                    {
                        if (coins==50)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            printf("Denomination= one 25 coin and one 10 coin\n\n");
                            C50++;
                            C25--;
                            C10--;
                            S15--;
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        else if (coins==25)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            printf("Denomination= one 10 coin\n\n");
                            C25++;
                            C10--;
                            S15--;
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        else
                        {
                            printf("\n\nNo change available\n\n");
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                    }
                }
                else if (S10!=0)
                {
                    if (((coins>=50)||(coins>=25)||(coins>=10))&&(stamp==10))
                    {
                        if (coins==50)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            printf("Denomination= one 25 coin , one 10 coin and one 5 coin\n\n");
                            C50++;
                            C25--;
                            C10--;
                            C5--;
                            S10--;
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        if (coins==25)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            printf("Denomination= one 10 coin and one 5 coin\n\n");
                            C25++;
                            C10--;
                            C5--;
                            S10--;
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        else if (coins==10)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            printf("No change\n\n");
                            C10++;
                            S10--;
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        else
                        {
                            printf("\n\nNo change available\n\n");
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                    }
                }
                else
                {
                    printf("\n\nInsufficient Amount Tendered\n\n");
                }
            }
            else
            {
                printf("No Stamps Available");
                printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
            }
        }
        else
        {
            printf("\nInvalid Stamp\n\n");

        }

    printf("Wish to buy another stamp(Y/N)?\n");
    scanf("%s",&A);

    if (A==89||A==121)
        {
            continue;
        }
    else
        {
            printf("\nThank you and Come again.");
            exit(0);
        }
    }


    return 0;
}
