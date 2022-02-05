#include <stdio.h>
#include <unistd.h>
///SAMPLE OF VALUES
int closePrices[] = {1,101,102,98,103,97,103,95,103,107,95,97,94,103,107,110,105,100,101,96,94,35};
int period = 2;

    int main(){
		SimpleMovingAverage(closePrices,period);
    	sleep(1000);
    	return 0;
    }

    int SimpleMovingAverage(int closePrices[],int period){
    	int sumValues = 0;

    	for(int x=0; x<period; ++x){
    		sumValues += closePrices[x];
    	}
    	int movingAverage = sumValues/period;

    	printf("MA %d",movingAverage);
    }