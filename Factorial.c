#include <stdio.h>


int main(void){
int num,i;
printf("Enter num: ");
scanf("%d",&num);

if(num == 0){
    printf("num is 1");
}
else if(num > 0){

for(i=num-1; i>0; i--){
    num = num*i;
}
printf("num is %d",num);
}
else{
    printf("enter a positive number.");
}
return 0;
}