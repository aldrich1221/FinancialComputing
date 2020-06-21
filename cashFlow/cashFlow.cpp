#include "cashFlow.h" // header in local directory
#include <iostream> // header in standard library
#include <math.h>

void cashFlow::finalValue(double presentValue,double annualInterest,int compoundedTimesPerYear,int year)
{
    printf("The inputs are %f , %f , %d, %d \n",presentValue,annualInterest,compoundedTimesPerYear,year);
    double finalValue=presentValue*pow((1+annualInterest/compoundedTimesPerYear),(compoundedTimesPerYear*year));
    printf("The final value is %f \n",finalValue)  ;
   
}

