#include <stdio.h>
#include<limits.h>
int main(){

    int result[5];

    result[0]=80;
    result[1]=88;
    result[2]=85;
    result[3]=84;
    result[4]=83;

    int sum=1,i;
    for(i=0; i<=4;i++){
        sum+=result[i];
    }
//total result
    printf("Sum = %d\n",sum);
//average result
    printf("Average = %d\n",sum/5);

//max result
    int max,max2;
    max=max2=INT_MIN;
        for(i=0; i<=4;i++){
            if(result[i] > max){
                max2=max;
                max = result[i];
            }else if(max > result[i] && result[i] >max2){
                max2= result[i];
            }
        }
    printf("Max = %d\n",max);
    printf("2nd Max = %d\n",max2);

//min result
    int min,min2;
    min=min2=INT_MAX;
        for(i=0; i<=4;i++){
            if(result[i] < min){
                min2=min;
                min = result[i];
            }else if(result[i] <min2 && min < result[i]){
                min2= result[i];
            }
        }
    printf("Min = %d\n",min);
    printf("2nd Min = %d\n",min2);

    return 0;
}