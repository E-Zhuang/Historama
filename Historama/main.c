//
//  main.c
//  Historama
//
//  Created by Emily Zhuang on 11/7/17.
//  Copyright © 2017 Emily Zhuang. All rights reserved.
//

#include <stdio.h>

//  Prototypes
int prompt(void);
float calc_ave(int);
void print_histo(int value);
void print_ave(float ave);

//  1.  10 integer values from 1 to 30
//      an integer to store the sum of the 10 integer inputs
//      a float average of the ten values
//      counter for which row you are on

int main()
{
    //  2.  Variable declarations
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int sum = 0;
    float average;
    char repeat;
    
    do
    {
        //      I.  Prompt user for ten integers from 1 to 30 one at a time
        //          b.  Add value to sum
        num1 = prompt();
        sum += num1;
        
        num2 = prompt();
        sum += num2;

        num3 = prompt();
        sum += num3;
        
        num4 = prompt();
        sum += num4;
        
        num5 = prompt();
        sum += num5;
        
        num6 = prompt();
        sum += num6;
        
        num7 = prompt();
        sum += num7;
        
        num8 = prompt();
        sum += num8;
        
        num9 = prompt();
        sum += num9;
        
        num10 = prompt();
        sum += num10;
        
        //  Calculate the average for the ten values
        average = calc_ave(sum);
        
        //      III.Print the Histogram and the average.
        print_histo(num1);
        print_histo(num2);
        print_histo(num3);
        print_histo(num4);
        print_histo(num5);
        print_histo(num6);
        print_histo(num7);
        print_histo(num8);
        print_histo(num9);
        print_histo(num10);
        print_ave(average);

        //          c.  Repeat if user requests
        printf("Would you like to repeat the program? (Y/N)");
        scanf("%c", &repeat);
        getchar();
    }
    while (repeat == 'y' || repeat == 'Y');
    
    return 0;
}

//  3.
//      I.  Prompt user for ten integers from 1 to 30 one at a time
//          a.  Use an input couplet to prompt and input data           *FUNCTION*
//              Return the integer value to main()
int prompt()
{
    int value;
    static int n = 1;
    
    //prompt
    printf("Please enter value #%d (from 1 to 30 inclusive): ", n);
    scanf("%d", &value);
    getchar();
    
    //increment counter
    n++;
    
    return value;
}

//      II. Calculate the average of the ten values                     *FUNCTION*
//          a.  Pass the sum of the ten integers
//          b.  Calculate the mean average
//          c.  Return the float average to main()
float calc_ave(int sum)
{
    return (float)sum / 10;
}

//          a.  Pass one number at a time                       *FUNCTION*
//              Print the associated number of stars using a for-loop
//              After each call, increment row
void print_histo(int value)
{
    int k;
    static int row = 1;
    
    //print the left column
    printf("%-10d\t", row);
    //print stars
    for(k = 1; k <= value; k++)
    {
        putchar('*');
    }
    putchar('\n');
    row++;
}

//          b.  Pass the float average                                  *FUNCTION*
//              Print the float average and the rounded number of stars using a for-loop
void print_ave(float ave)
{
    int k;
    
    //print the left column
    printf("%-10.2f\t", ave);
    //print the stars
    for(k = 1; k <= ave + 0.5; k++)
    {
        putchar('*');
    }
    putchar('\n');
    printf("Last value is the mean of the numbers.\n");
}




