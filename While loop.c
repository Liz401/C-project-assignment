//use of the while loop
#include<stdio.h>
int main(){
int j;
int start;
int stop;
printf("Enter the Start Value:");
scanf("%d",&start);

printf("Enter the Stop Value:");
scanf("%d",&stop);

if(start>stop){
  printf("Start value should be less than stop value");
  } 
  while(start<=stop){
  printf("This is okay");
  printf("%d\n", start);
  start++;
  }

return 0;
}

    



    
