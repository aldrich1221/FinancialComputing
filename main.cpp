#include<cstdio>
#include "./cashFlow/cashFlow.h"
#include "./bond/bond.h"
#include <iostream> // header in standard library

//using namespace std;

int main()
{
    printf("Hello world!XX\n");
    cashFlow cf;

    bond bd;
    
 	float spotInterestRate[]={0.053, 0.051, 0.049, 0.047, 0.040};
    float couponPayment[]={3, 2, 3, 2, 103};
    int timeToMaturity=5;
    int frequencyCouponPayment=1;
    float currentPrice=100;
    double yieldToMaturity=0.048;
    bd.modifiedDuration(couponPayment,timeToMaturity,frequencyCouponPayment,spotInterestRate,currentPrice,yieldToMaturity);
    
    bd.convexity(couponPayment,timeToMaturity,frequencyCouponPayment,spotInterestRate,currentPrice,yieldToMaturity);
    
    
    cf.finalValue(10,0.01,1,10);


    return 0;
    
}


