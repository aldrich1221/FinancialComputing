#include "bond.h" // header in local directory
#include <iostream> // header in standard library
#include <math.h>



double bond::MacaulayDuration(float *couponPayment,int timeToMaturity,int frequencyCouponPayment,float *spotInterestRate,float price)
{
	double sumOfWeights=0.0;
	float year=0.0;
	
	for (int i=0;i<timeToMaturity*frequencyCouponPayment;i++){

		year=year+1.0/frequencyCouponPayment;

		double presentValueOfCashFlow=couponPayment[i]/pow((1+spotInterestRate[i]/frequencyCouponPayment),frequencyCouponPayment*year);
		double weights=presentValueOfCashFlow/price;
		printf("Year: %f ,presentValueOfCashFlow %f ,weights %f \n",year,presentValueOfCashFlow,weights);
		sumOfWeights=sumOfWeights+weights*year;
		
	}
	double macaulayduration=sumOfWeights;
	printf("MacaulayDuration: %f \n",macaulayduration);
  
  	return macaulayduration;
}
void bond::modifiedDuration(float *couponPayment,int timeToMaturity,int frequencyCouponPayment,float *spotInterestRate,float price,float yieldToMaturity){

	/*
	Example:
	float spotInterestRate[]={0.07, 0.07, 0.07, 0.07,0.07, 0.07, 0.07, 0.07,0.07,0.07};
    float couponPayment[]={3.5, 3.5, 3.5, 3.5,3.5, 3.5, 3.5, 3.5,3.5 ,103.5};
    int timeToMaturity=5;
    int frequencyCouponPayment=2;
    float currentPrice=100;
    double yieldToMaturity=0.07;
    modifiedDuration(couponPayment,timeToMaturity,frequencyCouponPayment,spotInterestRate,currentPrice,yieldToMaturity);
	*/
	double macaulayduration=MacaulayDuration(couponPayment,timeToMaturity,frequencyCouponPayment,spotInterestRate,price);
	double modifiedduration=macaulayduration/(1+yieldToMaturity/frequencyCouponPayment);
	
	printf("modifiedduration %f \n",modifiedduration);

}

void bond::convexity(float *couponPayment,int timeToMaturity,int frequencyCouponPayment,float *spotInterestRate,float price,float yieldToMaturity){

	double convexity=0.0;
	double year=0.0;
	
	for (int i=0;i<timeToMaturity*frequencyCouponPayment;i++){

		year=year+1.0/frequencyCouponPayment;

		double presentValueOfCashFlow=couponPayment[i]/pow((1+spotInterestRate[i]/frequencyCouponPayment),frequencyCouponPayment*year);
		double weights=presentValueOfCashFlow/price;
		
		convexity=convexity+weights*(year*year+year);
		printf("Year: %f ,presentValueOfCashFlow %f ,weights %f \n",year,presentValueOfCashFlow,weights);
	}

	printf("convexity %f \n",convexity);



}



