#include <stdio.h>
#include <unistd.h>

int sumPrior = 0;
int high[] = {11,12,13,14,15};
int low[] = {2,3,4,5,6};
int period = 4;

int main(){
		ATR(high,low,period);
    	sleep(1000);
    	return 0;
    }


int ATR(int high[],int low[],int period){
	for (int i = 0; i<period; ++i){
		sumPrior += (high[i]-low[i]);
	}

	int ATR = sumPrior/(period);
	printf("ATR: %d",ATR);
	return ATR;
}