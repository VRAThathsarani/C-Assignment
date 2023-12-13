#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stamp,coins,change;
    int C50=5;
    int C25=3;
    int C10=5;
    int C5=5;

    int S25=5;
    int S15=5;
    int S10=5;

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

                if (S25>0 && (stamp==25))
                {
                    if ((coins>=50)||(coins>=25))
                    {
                        if (coins==50)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            if (C25>0)
                            {
                                 printf("Denomination = one 25 coin\n\n");
                                 C50++;
                                 C25--;
                                 S25--;

                            }
                            else
                            {
                                printf("No Available coin");
                            }

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
                            printf("\n\nNot a valid coin\n\n");
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                    }
                    else
                    {
                        printf("\n\nInsufficient coin\n\n");
                    }
                }

                else if (S15>0 &&(stamp==15))
                {
                    if ((coins>=50)||(coins>=25))
                    {
                        if (coins==50)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            if ((C25>0) && (C10>0))
                            {
                                 printf("Denomination = one 25 coin and one 10 coin\n\n");
                                 C50++;
                                 C25--;
                                 C10--;
                                 S15--;
                            }
                            else
                            {
                                printf("\nNo Available coin\n\n");
                            }

                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        else if (coins==25)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            if (C10>0)
                            {
                                 printf("Denomination = one 10 coin\n\n");
                                 C25++;
                                 C10--;
                                 S15--;
                            }
                            else
                            {
                                printf("No Available coin");
                            }

                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        else
                        {
                            printf("\n\nNot a valid coin\n\n");
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }

                    }
                    else
                    {
                        printf("\n\nInsufficient coin\n\n");
                    }

                }


                else if (S10>0 &&(stamp==10))
                {
                    if ((coins>=50)||(coins>=25)||(coins>=10))
                    {
                        if (coins==50)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            if ((C25>0)&&(C10>0)&&(C5>0))
                            {
                                 printf("Denomination = one 25 coin , one 10 coin and one 5 coin\n\n");
                                 C50++;
                                 C25--;
                                 C10--;
                                 C5--;
                                 S10--;
                            }
                            else
                            {
                                printf("No Available coin");
                            }

                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                        if (coins==25)
                        {
                            printf("\n\nStamp dispensed\n");
                            printf("Change=%d\n",change);
                            if ((C10>0) && (C5>0))
                            {
                                 printf("Denomination = one 10 coin and one 5 coin\n\n");
                                 C25++;
                                 C10--;
                                 C5--;
                                 S10--;
                            }
                            else
                            {
                                printf("No Available coin");
                            }

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
                            printf("\n\nNot a valid coin\n\n");
                            printf("\nAvailable stamp amount: 25=%d 15=%d 10=%d\n",S25,S15,S10);
                            printf("Available coins amount: 50=%d 25=%d 10=%d 5=%d\n\n",C50,C25,C10,C5);
                        }
                    }
                    else
                    {
                        printf("\n\nInsufficient coin\n\n");
                    }
                }
                else
                {
                    printf("No Stamps Available\n\n");
                }
            }
            else
            {
                printf("\n\nNo stamps available in the machine.Please try again later\n\n");
            }
        }
        else
        {
            printf("\nInvalid Stamp\n\n");

        }

    printf("\nWish to buy another stamp(Y/N)?\n");
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
