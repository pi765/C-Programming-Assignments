/****************************************************/
/* Name : William Nguyen                            */
/* Student ID : 1232677                             */
/* Homework 3 Program Set 1                         */
/* Date : 4/2/22                                    */
/* This Program calculates salary raise             */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
    //Declaration
    float sal, rate, raise, NewSal;                 //Creates variables for Salary, Rate, Raise, and New Salary
    float totSal = 0, totraise = 0, totNewSal = 0;  //Variables for totals

    //Data/input
    printf("                      Salary         Rate    Raise     New Salary\n"); //Header
    printf("-----------------------------------------------------------------\n");
    printf("Salary : ");
    scanf("%f", &sal); //input salary

    //Processing/Calculations
    while(sal != -1)
    {
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

        printf("Salary : ");
        scanf("%f", &sal); //input salary

    }

    //Output

    printf("-----------------------------------------------------------------\n");              //Total
    printf("Total               %10.2f            %10.2f %10.2f\n",totSal, totraise,totNewSal);

    return 0;


}

//Test Run 1
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
//Salary : -1
//-----------------------------------------------------------------
//Total                130000.00               7525.00  137525.00

//Test Run 2
//                      Salary         Rate    Raise     New Salary
//-----------------------------------------------------------------
//Salary : -1
//-----------------------------------------------------------------
//Total                     0.00                  0.00       0.00

//Test Run 3
//                      Salary         Rate    Raise     New Salary
//-----------------------------------------------------------------
//Salary : 43212
//                      43212.00       4.00    1728.48   44940.48
//Salary : 32145
//                      32145.00       5.50    1767.97   33912.98
//Salary : 98612
//                      98612.00       4.00    3944.48  102556.48
//Salary : 457689
//                     457689.00       4.00   18307.56  475996.56
//Salary : 123124
//                     123124.00       4.00    4924.96  128048.96
//Salary : 23
//                         23.00       7.00       1.61      24.61
//Salary : -1
//-----------------------------------------------------------------
//Total                754805.00              30675.07  785480.06

//Test Run 4
//                      Salary         Rate    Raise     New Salary
//-----------------------------------------------------------------
//Salary : 2.34
//                          2.34       7.00       0.16       2.50
//Salary : 245.93
//                        245.93       7.00      17.22     263.15
//Salary : -1
//-----------------------------------------------------------------
//Total                   248.27                 17.38     265.65

//Test Run 5
//                      Salary         Rate    Raise     New Salary
//-----------------------------------------------------------------
//Salary : 99999
//                      99999.00       4.00    3999.96  103998.96
//Salary : 123456
//                     123456.00       4.00    4938.24  128394.24
//Salary : 0987
//                        987.00       7.00      69.09    1056.09
//Salary : 34456
//                      34456.00       5.50    1895.08   36351.08
//Salary : 34
//                         34.00       7.00       2.38      36.38
//Salary : -1
//-----------------------------------------------------------------
//Total                258932.00              10904.75  269836.75
