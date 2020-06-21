#include <iostream> 
class bond
    {
    	
    public:
        
        double MacaulayDuration(float *couponPayment,int timeToMaturity,int frequencyCouponPayment,float *spotInterestRate,float price);
        void modifiedDuration(float *couponPayment,int timeToMaturity,int frequencyCouponPayment,float *spotInterestRate,float price,float yieldToMaturity);

       void convexity(float *couponPayment,int timeToMaturity,int frequencyCouponPayment,float *spotInterestRate,float price,float yieldToMaturity);

        
    };
