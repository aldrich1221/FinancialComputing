#include "binomialTree.h" // header in local directory
#include <iostream> // header in standard library
#include <math.h>

double** binomialTree::binomialTreeStockPriceMatrix(double initialStockPrice,int numberOfPeriods,double upwardRatio,double downwardRatio)
{
	double **StockMatrix=new double*[numberOfPeriods];
	
	
	for(int i = 0; i < numberOfPeriods; i++)
    	{StockMatrix[i] = new double[numberOfPeriods];}


	StockMatrix[0][0]=initialStockPrice;

	for(int i=0;i<numberOfPeriods-1;i++)
    { 
        for(int j=0;j<=i+1;j++){
        if(j==0){
            StockMatrix[j][i+1]=StockMatrix[j][i]*upwardRatio;
        } 
        else if(j==i+1){
             StockMatrix[j][i+1]=StockMatrix[j-1][i]*downwardRatio;
        }
        else{
            StockMatrix[j][i+1]=StockMatrix[j][i]*upwardRatio;
            }
        }
    }
   
    return StockMatrix;
   
}
void binomialTree::deleteMatrix(double** Matrix) {
    delete [] Matrix; 
}

void binomialTree::displayMatrix(double** Matrix,int numberOfPeriods){
	for(int i=0;i<numberOfPeriods-1;i++)
    { 
        for(int j=0;j<numberOfPeriods;j++){
        
        	printf("%f\t",Matrix[i][j]);
          
        }
        printf("\n");
    }


}
