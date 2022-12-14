#include<stdio.h>
#include<stdlib.h>
int digitApperanceCheck(int,int); //declared function
int getNumberDigits(int); //declared function
int number_of_inputs;

int main(){
    FILE*myfile;
    myfile = fopen("selfdescribing.txt","r");
    if(myfile == NULL){
        printf("This file is empty");
        exit(0);
    }

    fscanf(myfile,"%d",&number_of_inputs);
    for(int i = 0;i<number_of_inputs;i++){
        int number;
        int temp = 0, digit = 0;
        fscanf(myfile,"%d",&number);
        temp = number;
        int flag =1;

        /*getting the returned value from the getNumberDigits function with temp as its parameter
        and assigning it to the numberDigit variable*/
        int numberDigit = getNumberDigits(temp);
        while(temp>0){
            digit = temp%10;

            /*getting the returned value from the digitApperanceCheck function
             with number and number and numberDigit as their parameters
             and assigning it to the count variable*/
            int count = digitApperanceCheck(number,numberDigit);
            if(count != digit){
                flag = 0;
                printf(" Not self-describing\n");
                break;
            }
            temp = temp/10;
            numberDigit--;
        }
        if(flag == 1){
            printf(" Self-describing\n");
        }
    }
    return 0;
}

// function to check the amount of times a digit appears
int digitApperanceCheck(int number, int digit){
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
int getNumberDigits(int number) {
    int digits = 0;
    printf("%d",number);
    while(number>0){
        digits++;
        number=number/10;
    }
    return digits-1;
}
