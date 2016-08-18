#include <iostream>
#include <ctime>
using namespace std;
#define MAX 10000
double A[MAX][MAX], x[MAX], y[MAX];

int main(int argc, char *argv[]) {
	
	
	
	clock_t start = clock(); 
	int i,j;
	for(i = 0; i < MAX; i++)
		for(j = 0; j < MAX; j++)
			y[i] += A[i][j] * x[j];			
	clock_t end = clock(); 
	double t = double(end - start) / CLOCKS_PER_SEC;
	cout<<"first loop "<< t <<endl;
	
	
	
	
	start = clock();				  
	for( j = 0; j < MAX; j++)
		for(i = 0; i < MAX; i++)		
			y[i] += A[i][j] * x[j];
	end = clock();
	t = double(end - start) / CLOCKS_PER_SEC;
	cout<<"second loop "<< t <<endl;
	return 0;
}
