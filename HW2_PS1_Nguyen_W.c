/****************************************************/
/* Name : William Nguyen                            */
/* Student ID : 1232677                             */
/* Homework 2 Program Set 1                         */
/* Date : 3/3/22                                    */
/* This Program calculates the amount of tax due    */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int status; //define variables
    float TI, tax;

    //Data/Input
    printf("************Menu****************\n"); //print menu display
    printf("1 Single\n");
    printf("2 Married Filing Jointly\n");
    printf("3 Married Filing Separately\n");
    printf("4 Head of Household\n");
    printf("5 Exit Program\n\n");

    printf("********************************");

    printf("\n\nEnter status : ");
    scanf("%d", &status); //input status

    //Processing/Calculations/Output
    switch(status)
    {
        case 1 :
        printf("Enter your taxable TI: $");
        scanf("%f", &TI); //input TI

            if (TI > 0 && TI <= 24000) //condition for the taxes
                tax = 0.15 * TI; //calculation for taxes owed
            else
                if (TI > 24000 && TI <= 58000)
                    tax = 3600 + .28 * (TI - 24000);
                else
                    if (TI > 58000 && TI <= 121300)
                        tax = 13162 + .31 * (TI - 58000);
                    else
                        if (TI > 121300 && TI <= 263750)
                            tax = 32738.50 + .36 * (TI - 121300);
                        else
                            if (TI > 263750)
                                tax = 84020.50 + .396 * (TI - 263750);
            printf("\nThe taxes owed are: $%.2f", tax); //Print taxes owed (Output)
            break;

        case 2 : //repeat case 1 for case 2, 3, and 4, but with different values
        printf("Enter your taxable TI: $");
        scanf("%f", &TI);
            if (TI > 0 && TI <= 40000)
                tax = 0.15 * TI;
            else
                if (TI > 40100 && TI <= 96900)
                    tax = 6015 + .28 * (TI - 40100);
                else
                    if (TI > 96900 && TI <= 147700)
                        tax = 21919 + .31 * (TI - 96900);
                    else
                        if (TI > 147700 && TI <= 263750)
                            tax = 37667 + .36 * (TI - 147700);
                        else
                            if (TI > 263750)
                                tax = 79445 + .396 * (TI - 263750);
            printf("\nThe taxes owed are: $%.2f", tax);
            break;

        case 3 :
        printf("Enter your taxable TI: $");
        scanf("%f", &TI);
            if (TI > 0 && TI <= 20050)
                tax = 0.15 * TI;
            else
                if (TI > 20050 && TI <= 48450)
                    tax = 3007.50 + .28 * (TI - 20050);
                else
                    if (TI > 48450 && TI <= 73850)
                        tax = 10959.50 + .31 * (TI - 48450);
                    else
                        if (TI > 73850 && TI <= 131875)
                            tax = 18833.50 + .36 * (TI - 73850);
                        else
                            if (TI > 131875)
                                tax = 39722.50 + .396 * (TI - 131875);
            printf("\nThe taxes owed are: $%.2f", tax);
            break;

        case 4 :
        printf("Enter your taxable TI: $");
        scanf("%f", &TI);
            if (TI > 0 && TI <= 32150)
                tax = 0.15 * TI;
            else
                if (TI > 32150 && TI <= 83050)
                    tax = 4822.50 + .28 * (TI - 32150);
                else
                    if (TI > 83050 && TI <= 134500)
                        tax = 19074.50 + .31 * (TI - 83050);
                    else
                        if (TI > 134500 && TI <= 263750)
                            tax = 35074 + .36 * (TI - 134500);
                        else
                            if (TI > 263750)
                                tax = 81554 + .396 * (TI - 263750);
            printf("\nThe taxes owed are: $%.2f", tax);
            break;

        case 5 : //status 5 exits program
            printf("\nExit Program...");
        break;

        default: printf("\nYou entered a wrong status. Program Exit..."); //if something other than 1, 2, 3, 4, 5 is inputted, exits program
    }

    return 0;

}

//Test Run 1
//************Menu****************
//1 Single
//2 Married Filing Jointly
//3 Married Filing Separately
//4 Head of Household
//5 Exit Program
//
//********************************
//
//Enter status : 1
//Enter your taxable TI: $50000
//
//The taxes owed are: $10880.00

//Test Run 2
//************Menu****************
//1 Single
//2 Married Filing Jointly
//3 Married Filing Separately
//4 Head of Household
//5 Exit Program
//
//********************************
//
//Enter status : 5
//
//Exit Program...

//Test Run 3
//************Menu****************
//1 Single
//2 Married Filing Jointly
//3 Married Filing Separately
//4 Head of Household
//5 Exit Program
//
//********************************
//
//Enter status : a
//
//You entered a wrong status. Program Exit...

//Test Run 4
//************Menu****************
//1 Single
//2 Married Filing Jointly
//3 Married Filing Separately
//4 Head of Household
//5 Exit Program
//
//********************************
//
//Enter status : 7
//
//You entered a wrong status. Program Exit...

//Test Run 5
//************Menu****************
//1 Single
//2 Married Filing Jointly
//3 Married Filing Separately
//4 Head of Household
//5 Exit Program
//
//********************************
//
//Enter status : 3
//Enter your taxable TI: $13500
//
//The taxes owed are: $2025.00

//Test Run 6
//************Menu****************
//1 Single
//2 Married Filing Jointly
//3 Married Filing Separately
//4 Head of Household
//5 Exit Program
//
//********************************
//
//Enter status : 2
//Enter your taxable TI: $98263
//
//The taxes owed are: $22341.53

//Test Run 7
//************Menu****************
//1 Single
//2 Married Filing Jointly
//3 Married Filing Separately
//4 Head of Household
//5 Exit Program
//
//********************************
//
//Enter status : 4
//Enter your taxable TI: $87312
//
//The taxes owed are: $20395.72

//Test Run 8
//************Menu****************
//1 Single
//2 Married Filing Jointly
//3 Married Filing Separately
//4 Head of Household
//5 Exit Program
//
//********************************
//
//Enter status : stuff
//
//You entered a wrong status. Program Exit...
