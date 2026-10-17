#include <stdio.h>

int main(void){

int usernum=0,i=1,result=0,fresult=0;
printf("Enter The number: ");
scanf("%d",&usernum);

while(usernum > 0){
    result = usernum % 10;
    usernum = usernum /10;
    fresult += result;
}
printf("%d",fresult);

return 0;
}