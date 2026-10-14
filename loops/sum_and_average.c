#include <stdio.h>


int main(void){
int  i, cycle;
float num = 0, result = 0;

printf("How many numbers do you want to calculate? ");
scanf("%d",&cycle);
if(cycle > 0){
    for(i=1; i <= cycle; i++){
        printf("enter the value number %d: ",i);
        scanf("%f",&num);
        result += num;
    }
    printf("The sum of the numbers is: %.2f\n",result);
    printf("The average of the numbers is: %.2f\n",result / cycle);
}
else{
    printf("cycles must be positive!!!");
}


return 0;
}