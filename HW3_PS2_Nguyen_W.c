/****************************************************/
/* Name : William Nguyen                            */
/* Student ID : 1232677                             */
/* Homework 3 Program Set 2                         */
/* Date : 4/2/22                                    */
/* This Program calculates salary raise(finite loop)*/
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    float sal, rate, raise, NewSal;                 //Creates variables for Salary, Rate, Raise, and New Salary
    float totSal = 0, totraise = 0, totNewSal = 0;  //Variables for totals
    int repeats, i; //variables for number of salaries to enter


    //Data/Input
    printf("How many salaries do you want to enter? ");
    scanf("%d", &repeats);

    printf("\n                      Salary         Rate    Raise     New Salary\n"); //Header
    printf("-----------------------------------------------------------------\n");

    //Processing/Calculations
    for (i = 0; i < repeats; i += 1 )
        {
            printf("Salary : ");
            scanf("%f", &sal); //input salary

            if (sal >= 0 && sal < 30000) //Determine Rate from Salary inputed
                rate = 7.0;
            else
                if (sal >= 30000 && sal <= 40000)
                    rate = 5.5;
                else
                    if (sal > 40000)
                        rate = 4.0;

            raise = sal * (rate/100);   //Calculate Raise

            NewSal = sal + raise;   //Calculate New Salary

            totSal += sal;              //Add up salary to get total salary
            totraise += raise;          //Total Raise
            totNewSal += NewSal;        //Total New Salary

            printf("                    %10.2f %10.2f %10.2f %10.2f\n",sal,rate,raise,NewSal); //Body
        }


    //Output
    printf("-----------------------------------------------------------------\n");              //Total
    printf("Total               %10.2f            %10.2f %10.2f\n",totSal, totraise,totNewSal);



    return 0;


}

//Test Run 1
//How many salaries do you want to enter? 4
//
//                      Salary         Rate    Raise     New Salary
//-----------------------------------------------------------------
//Salary : 25000
//                      25000.00       7.00    1750.00   26750.00
//Salary : 30000
//                      30000.00       5.50    1650.00   31650.00
//Salary : 35000
//                      35000.00       5.50    1925.00   36925.00
//Salary : 40000
//                      40000.00       5.50    2200.00   42200.00
//-----------------------------------------------------------------
//Total                130000.00               7525.00  137525.00

//Test Run 2
//How many salaries do you want to enter? 6
//
//                      Salary         Rate    Raise     New Salary
//-----------------------------------------------------------------
//Salary : 90831
//                      90831.00       4.00    3633.24   94464.24
//Salary : 2311
//                       2311.00       7.00     161.77    2472.77
//Salary : 32.09
//                         32.09       7.00       2.25      34.34
//Salary : 23456
//                      23456.00       7.00    1641.92   25097.92
//Salary : 34234
//                      34234.00       5.50    1882.87   36116.87
//Salary : 41000
//                      41000.00       4.00    1640.00   42640.00
//-----------------------------------------------------------------
//Total                191864.09               8962.05  200826.14

//Test Run 3
//How many salaries do you want to enter? 2
//
//                      Salary         Rate    Raise     New Salary
//-----------------------------------------------------------------
//Salary : 3214
//                       3214.00       7.00     224.98    3438.98
//Salary : 39.21
//                         39.21       7.00       2.74      41.95
//-----------------------------------------------------------------
//Total                  3253.21                227.72    3480.93
