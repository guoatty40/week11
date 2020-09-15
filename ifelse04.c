#include<stdio.h>
int Student4(){
    int number1,number2;
    printf("Student0=4\n");
    scanf("%d%d",&number1,&number2);
    if(number1>=number2){
      if(number1==number2){
        printf("Result:%d=%d",number1,number2);
      }
      else{
        printf("Result:%d>%d",number1,number2);
      }
    }
    else{
        printf("Result:%d<%d",number1,number2);
    }
}
