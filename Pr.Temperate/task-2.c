//2. Write C program to print multiplication table of any number.

#include<stdio.h>

int main(){
	
	 int i=1,n;
 
    printf("Enter a Number ");
    scanf("%d",&n);
 
    while(i<=10){
                
        printf("%d x %d = %d \n", n, i, n*i);
        ++i;
    }
     return 0;
}
