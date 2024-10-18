//use of the do loop
#include<stdio.h>
int main(){
int i;
int start;
int stop;
printf("Enter The Start Value:");
scanf("%d",& start);

printf("Enter The Stop Value:");
scanf("%d",&stop);

  printf("values%d\n",start,stop);
i=start;
do{
     printf("%d\n",i);
     i++;
    } while(i<=stop);{
    printf("\n");
    }
    return 0;
    }

  
