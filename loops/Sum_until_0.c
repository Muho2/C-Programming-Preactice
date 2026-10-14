#include <stdio.h>


int main(void){
int num =1;
int result = 0;

while(num != 0){
    printf("Enter numbers to sum (to sum the number just type '0'): ");
    scanf("%d",&num);
    result = result + num;

}
printf("The result is: %d",result);
}