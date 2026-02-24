/****************************************************/
/* Name : William Nguyen                            */
/* Student ID : 1232677                             */
/* Homework 4 Program Set 1                         */
/* Date : 4/22/22                                   */
/* This Program calculates salary raise and total   */
/*                                                  */
/****************************************************/

#include<stdio.h>

//function prototype
void load(char *name, float *sal);
float findRate(float sal, float rate);
void calc(float *raise, float *NewSal, float *totSal, float *totraise, float *totNewSal, float sal, float rate);
void output(char *name, float sal, float rate, float raise,float NewSal);
void total(float totSal, float totraise, float totNewSal);

int main()
{
    //Declaration
    char name[20];
    float sal, rate, raise, NewSal;
    float totSal = 0, totraise = 0, totNewSal = 0;
    int employees, i;


    //Data/Input
    printf("How many employees : ");
    scanf("%d", &employees);


    //Processing/Calculations
    for (i = 0; i < employees; i += 1 ) //loop for how many employees inputted
        {
            getchar(); //reads /n from previous scanf
        //call functions
            load(&name, &sal);
            rate = findRate(sal, rate);
            calc(&raise, &NewSal, &totSal, &totraise, &totNewSal, sal,rate);
            output(&name, sal, rate, raise, NewSal);
            printf("\n\n"); //blank lines

        }
            total(totSal, totraise, totNewSal);

return 0;
}

void load(char *name, float *sal)
{
    printf("\nEnter the Employee's name: ");
    gets(name); //gets the employee name

    printf("Enter salary : ");
    scanf("%f", &(*sal)); //reads the salary

}

float findRate(float sal, float rate)
{
            if (sal >= 0 && sal < 30000) //Determine Rate from Salary inputed
                rate = 7.0;
            else
                if (sal >= 30000 && sal <= 40000)
                    rate = 5.5;
                else
                    if (sal > 40000)
                        rate = 4.0;

            return rate;
}



void calc(float *raise, float *NewSal, float *totSal, float *totraise, float *totNewSal, float sal, float rate)
{
    *raise = sal * (rate/100);   //Calculate Raise

    *NewSal = sal + *raise;   //Calculate New Salary

    *totSal += sal;              //Add up salary to get total salary
    *totraise += *raise;          //Total Raise
    *totNewSal += *NewSal;        //Total New Salary

}

void output(char *name, float sal, float rate, float raise, float NewSal)
{
    printf("\nEmployee's Name   : %s", name);   //prints individual employee's information
    printf("\nSalary            : %13.2f", sal);
    printf("\nRate              : %12.1f%%", rate);
    printf("\nRaise             : %13.2f", raise);
    printf("\nNew salary        : %13.2f", NewSal);
}

void total(float totSal, float totraise, float totNewSal)
{
    printf("Total salary      :  %12.2f", totSal);      //prints total info
    printf("\nTotal Raise       :  %12.2f", totraise);
    printf("\nTotal New Salary  :  %12.2f", totNewSal);
}

//Test Run 1
//How many employees : 2
//
//Enter the Employee's name: Daisy Yellow
//Enter salary : 25000.00
//
//Employee's Name   : Daisy Yellow
//Salary            :      25000.00
//Rate              :          7.0%
//Raise             :       1750.00
//New salary        :      26750.00
//
//
//Enter the Employee's name: Rose Red
//Enter salary : 30000.00
//
//Employee's Name   : Rose Red
//Salary            :      30000.00
//Rate              :          5.5%
//Raise             :       1650.00
//New salary        :      31650.00
//
//Total salary      :      55000.00
//Total Raise       :       3400.00
//Total New Salary  :      58400.00

//Test Run 2
//How many employees : 3
//
//Enter the Employee's name: Periwinkle Pink
//Enter salary : 35000.00
//
//Employee's Name   : Periwinkle Pink
//Salary            :      35000.00
//Rate              :          5.5%
//Raise             :       1925.00
//New salary        :      36925.00
//
//
//Enter the Employee's name: Iris Blue
//Enter salary : 40001.00
//
//Employee's Name   : Iris Blue
//Salary            :      40001.00
//Rate              :          4.0%
//Raise             :       1600.04
//New salary        :      41601.04
//
//
//Enter the Employee's name: Lilacs Purple
//Enter salary : 45000.00
//
//Employee's Name   : Lilacs Purple
//Salary            :      45000.00
//Rate              :          4.0%
//Raise             :       1800.00
//New salary        :      46800.00
//
//Total salary      :     120001.00
//Total Raise       :       5325.04
//Total New Salary  :     125326.04

//Test Run 3
//How many employees : 4
//
//Enter the Employee's name: Daisy Yellow
//Enter salary : 25000.00
//
//Employee's Name   : Daisy Yellow
//Salary            :      25000.00
//Rate              :          7.0%
//Raise             :       1750.00
//New salary        :      26750.00
//
//
//Enter the Employee's name: Rose Red
//Enter salary : 30000.00
//
//Employee's Name   : Rose Red
//Salary            :      30000.00
//Rate              :          5.5%
//Raise             :       1650.00
//New salary        :      31650.00
//
//
//Enter the Employee's name: Periwinkle Pink
//Enter salary : 35000.00
//
//Employee's Name   : Periwinkle Pink
//Salary            :      35000.00
//Rate              :          5.5%
//Raise             :       1925.00
//New salary        :      36925.00
//
//
//Enter the Employee's name: Marigold Orange
//Enter salary : 40000.00
//
//Employee's Name   : Marigold Orange
//Salary            :      40000.00
//Rate              :          5.5%
//Raise             :       2200.00
//New salary        :      42200.00
//
//Total salary      :     130000.00
//Total Raise       :       7525.00
//Total New Salary  :     137525.00

//Test Run 4
//How many employees : 3
//
//Enter the Employee's name: Daisy Yellow
//Enter salary : 25000.00
//
//Employee's Name   : Daisy Yellow
//Salary            :      25000.00
//Rate              :          7.0%
//Raise             :       1750.00
//New salary        :      26750.00
//
//
//Enter the Employee's name: Iris Blue
//Enter salary : 40001.00
//
//Employee's Name   : Iris Blue
//Salary            :      40001.00
//Rate              :          4.0%
//Raise             :       1600.04
//New salary        :      41601.04
//
//
//Enter the Employee's name: Marigold Orange
//Enter salary : 40000.00
//
//Employee's Name   : Marigold Orange
//Salary            :      40000.00
//Rate              :          5.5%
//Raise             :       2200.00
//New salary        :      42200.00
//
//Total salary      :     105001.00
//Total Raise       :       5550.04
//Total New Salary  :     110551.04

//Test Run 5
//How many employees : 3
//
//Enter the Employee's name: Lilacs Purple
//Enter salary : 45000.00
//
//Employee's Name   : Lilacs Purple
//Salary            :      45000.00
//Rate              :          4.0%
//Raise             :       1800.00
//New salary        :      46800.00
//
//
//Enter the Employee's name: Rose Red
//Enter salary : 30000.00
//
//Employee's Name   : Rose Red
//Salary            :      30000.00
//Rate              :          5.5%
//Raise             :       1650.00
//New salary        :      31650.00
//
//
//Enter the Employee's name: Periwinkle Pink
//Enter salary : 35000.00
//
//Employee's Name   : Periwinkle Pink
//Salary            :      35000.00
//Rate              :          5.5%
//Raise             :       1925.00
//New salary        :      36925.00
//
//Total salary      :     110000.00
//Total Raise       :       5375.00
//Total New Salary  :     115375.00
