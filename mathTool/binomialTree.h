
#include <iostream> // header in standard library


class binomialTree
    {

    public:
        
        double **binomialTreeStockPriceMatrix(double initialStockPrice,int numberOfPeriods,double upwardRatio,double downwardRatio);

    	void deleteMatrix(double** Matrix);

		void displayMatrix(double** Matrix,int numberOfPeriods);

    };
