/****************************************************/
/* Name : William Nguyen                            */
/* Student ID : 1232677                             */
/* Homework 1 Program Set 1                         */
/* Date : 2/10/22                                   */
/* This Program determines the worth of your coins  */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    int quarters, dimes, nickels, pennies; //creates variables for the coins
    char first, middle, last; //variables for each letter of the initial
    int valquarters, valdimes, valnickels; //variables for the value of the coins
    int sum, dollars, cents;

    //Data/input
    printf("Enter your initials, first, middle and last: "); //input name
    scanf("%c%c%c", &first, &middle, &last);

    printf("\nHello %c.%c.%c. Let's see What your coins are worth.", first, middle, last); //repeats initials

    printf("\nEnter number of quarters: "); //input number of coins
    scanf("%d", &quarters);

    printf("Enter number of dimes: ");
    scanf("%d", &dimes);

    printf("Enter number of nickels: ");
    scanf("%d", &nickels);

    printf("Enter number of pennies: ");
    scanf("%d", &pennies);


    //Processing/Calculations
    valquarters = quarters * 25; //Converts coins into pennies
    valdimes = dimes * 10;
    valnickels = nickels * 5;

    sum = valquarters + valdimes + valnickels + pennies;

    dollars = sum / 100;
    cents = sum % 100;

    //Output
    printf("\nNumber of quarters is %d.", quarters); //tells how many of each coin
    printf("\nNumber of dimes is %d.", dimes);
    printf("\nNumber of nickels is %d.", nickels);
    printf("\nNumber of pennies is %d.", pennies);

    puts(""); //blank line

    printf("\nYour coins are worth %d dollars and %d cents.", dollars, cents); //gives the worth of the coins

    return 0;

}

//Test Run 1
//Enter your initials, first, middle and last: JTK
//
//Hello J.T.K. Let's see What your coins are worth.
//Enter number of quarters: 4
//Enter number of dimes: 0
//Enter number of nickels: 0
//Enter number of pennies: 0
//
//Number of quarters is 4.
//Number of dimes is 0.
//Number of nickels is 0.
//Number of pennies is 0.
//
//Your coins are worth 1 dollars and 0 cents.

//Test Run 2
//Enter your initials, first, middle and last: RHT
//
//Hello R.H.T. Let's see What your coins are worth.
//Enter number of quarters: 0
//Enter number of dimes: 10
//Enter number of nickels: 0
//Enter number of pennies: 0
//
//Number of quarters is 0.
//Number of dimes is 10.
//Number of nickels is 0.
//Number of pennies is 0.
//
//Your coins are worth 1 dollars and 0 cents.

//Test Run 3
//Enter your initials, first, middle and last: WBN
//
//Hello W.B.N. Let's see What your coins are worth.
//Enter number of quarters: 50
//Enter number of dimes: 29
//Enter number of nickels: 90
//Enter number of pennies: 1032
//
//Number of quarters is 50.
//Number of dimes is 29.
//Number of nickels is 90.
//Number of pennies is 1032.
//
//Your coins are worth 30 dollars and 22 cents.

//Test Run 4
//Enter your initials, first, middle and last: WOW
//
//Hello W.O.W. Let's see What your coins are worth.
//Enter number of quarters: 41
//Enter number of dimes: 235
//Enter number of nickels: 4
//Enter number of pennies: 56
//
//Number of quarters is 41.
//Number of dimes is 235.
//Number of nickels is 4.
//Number of pennies is 56.
//
//Your coins are worth 34 dollars and 51 cents.

//Test Run 5
//Enter your initials, first, middle and last: BOB
//
//Hello B.O.B. Let's see What your coins are worth.
//Enter number of quarters: 0
//Enter number of dimes: 4
//Enter number of nickels: 0
//Enter number of pennies: 7
//
//Number of quarters is 0.
//Number of dimes is 4.
//Number of nickels is 0.
//Number of pennies is 7.
//
//Your coins are worth 0 dollars and 47 cents.
