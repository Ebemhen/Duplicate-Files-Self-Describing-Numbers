#include<stdio.h>
#include<stdlib.h>
int digitApperanceCheck(int,int);
int getNumberDigits(int);
int number_of_inputs

int main(){
    FILE*myfile;
    myfile = fopen("","r");
    if(myfile == NULL){
        printf("This file is empty");
    }

    fscanf(myfile,"%d",&number_of_inputs);
    for(int i = 0;i<number_of_inputs;i++){
        int number;
        int temp=0, digit = 0, count = 0;
        fscanf(myfile,"%d",&number);
        temp = number;
        int flag =1;
        int numberDigit = getNumberDigits(temp);
        while(temp>0){
            digit = temp%10;
            int count = digitApperanceCheck(number,numberDigit);
            if(count != digit){
                printf("Not self-describing");
                flag = 0;
                break;
            }
            temp-temp/10;
            numberDigit--;


        }
        if(flag){
            printf("Self-describing");
        }
    }

   
}
// function to check the amount of times a digit appears
   int digitApperanceCheck(int number, int digit)
   {
    int count = 0;
    while(number>0){
        if(number%10 == digit){
            count++;
        }
        number = number/10;
   }
    return count;
   }
   // function to check the number of digits
   int getNumberDigits(int number)
   {
    int digits;
    printf("%d",number);
    while(number>0){
        digits++;
        number=number/10;
    }
    return digits-1;
   }