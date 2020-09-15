#include<stdio.h>
int student2(){
    int number;
    printf("Student2\n");
    printf("Enter an integer",number);
    scanf("%d",&number);
    if(number%2==0){
        printf("%d is an even integer.\a\a\a\n", number);
    }
    else{
        printf("%d is an integer.\a\a\a\n", number);
    }
    printf("End Programming\n");
    return 0;
}
