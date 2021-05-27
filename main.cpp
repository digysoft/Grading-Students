/******************************************************************************

                            DigySoft E.I.R.L
                              C++ Compiler

Program: Grading Students
Author: Jose Vidal
E-mail: jvidalsm@gmail.com
Date: 27/05/2021
Version: 1.0.0

Description:
HackerLand University has the following grading policy:

- Every student receives a grade in the inclusive range from 0 to 100
- Any grade less than 40 is a failing grade.

Sam is a professor at the university and likes to round each student's grade
according to these rules:

- If the difference between the grade and the next multiple of 5 is less than 3,
round up to the next multiple of 5.
- If the value of grade is less than 38, no rounding occurs as the result will
still be a failing grade.
*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

enum{MIN_GRADE=37,MULTIPLER=5,MIN_DIFF=3};

int main()
{
    long int total_number = 0;
    long int number = 0;
    long int * pData;
    float result;
    float multipler;
    int mult_five = 0;
    int i=0;

    cin >> total_number;
    pData = (long int*) calloc (total_number,sizeof(long int));

    i=0;
    while (total_number > i)
    {
        cin >> number;
        if (number <= MIN_GRADE) pData[i] = number;
        else
        {
            result = ((float)number/MULTIPLER);
            multipler = ceil(result);
            mult_five = multipler*MULTIPLER;
            if (mult_five -  number >= MIN_DIFF) pData[i] = number;
            else pData[i] = mult_five;
        }
        i++;
    }

    i = 0;
    while (total_number > i)
    {
        cout<<pData[i]<<endl;
        i++;
    }
    free(pData);

    return 0;
}
