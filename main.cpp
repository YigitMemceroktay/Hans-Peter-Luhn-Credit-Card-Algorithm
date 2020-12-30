


#include <iostream>
#include <stdio.h>
using namespace std;

void printValiditiy(long number);
void validitiy(long number, int number1);
int digitFinder(long number);
int main(void)
{
    cout<<"Credit Card Number:\n";
    long credNum;
   cin>>credNum;
    int a =digitFinder(credNum);
    printf("%i \n\n",a);
    validitiy(credNum,a);


}




void validitiy(long number,int number1){

    long temp = number;

    int first =0;
    int second = 0;

    for(int i=0; i<number1;i++){

        if(i%2 == 0){

            first +=  temp%10;
            printf("FIRST: %i \n", first);
        }
        else if (i%2==1){
            int b =temp%10;
            b = b*2;
            if(b>=10){

                b = 1 + b%10;


            }

            second += b;
            printf("SECOND :%i \n", second);
        }
        temp = temp/10;
        printf("%li\n\n",temp);
    }

    int total = first +second;
    if(total%10==0){
        printf("VALID");
    }
    else{
        printf("INVALID");

    }


}

int digitFinder(long number){

    int i = 0;

    while(number>=1){

        i++;
        number = number/10;

    }

    return i;


}

