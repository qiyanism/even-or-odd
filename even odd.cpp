#include<stdio.h>
int main(){
	int i = 0,sumEven = 0, sumOdd = 0;
	for(i=0;i<8;i++){
		int x;
		scanf("%d", &x);
		if(x%2 ==0)
		sumEven += x;
		else
		sumOdd += x;
		
	}
	printf("even %d odd %d\n",sumEven, sumOdd);
	if(sumEven < sumOdd)
		printf("Odd");
		else if(sumEven == sumOdd)
		printf("Equal");
		else
		printf("Even");
	
}
