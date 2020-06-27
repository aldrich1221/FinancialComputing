#include<cstdio>
#include "./cashFlow/cashFlow.h"
#include "./bond/bond.h"
#include <iostream> // header in standard library
#include "./mathTool/binomialTree.h"
using namespace std;

int main()
{

  //   printf("Hello world!XX\n");
  //   cashFlow cf;

  //   bond bd;
    
 	// float spotInterestRate[]={0.053, 0.051, 0.049, 0.047, 0.040};
  //   float couponPayment[]={3, 2, 3, 2, 103};
  //   int timeToMaturity=5;
  //   int frequencyCouponPayment=1;
  //   float currentPrice=100;
  //   double yieldToMaturity=0.048;
  //   bd.modifiedDuration(couponPayment,timeToMaturity,frequencyCouponPayment,spotInterestRate,currentPrice,yieldToMaturity);
    
  //   bd.convexity(couponPayment,timeToMaturity,frequencyCouponPayment,spotInterestRate,currentPrice,yieldToMaturity);
    
    
  //   cf.finalValue(10,0.01,1,10);

        binomialTree bt;
         int numberOfPeriods=10;
        double **StockMatrix=bt.binomialTreeStockPriceMatrix(100.0,numberOfPeriods,1.3,0.8);

        bt.displayMatrix(StockMatrix,numberOfPeriods);
        bt.deleteMatrix(StockMatrix);

   
    return 0; 

 
    
}


