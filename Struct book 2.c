//structure 
#include<stdio.h>
#include<string.h>
struct book{
char title[30];
char author[30];
int publicationYear;
int ISBN;
float price;
}book1;
int main(){
struct book;

   book1.ISBN=98765432;
   strcpy(book1.author,"John Smith");
   strcpy(book1.title,"Introduction to C programming");
   book1.publicationYear=2022;
   book1.price=49.99;
printf("Enter Title:"); 
scanf("%s",&book1.title); 
 
printf("Enter Author:");
scanf("%s",&book1.author);

printf("Enter Publication Year:");
scanf("%d",&book1.publicationYear);

printf("Enter ISBN:");
scanf("%d",&book1.ISBN);

printf("Enter price:");
scanf("%f",book1.price);

   
printf("Title:%s\n",book1.title);  
printf("Author:%s\n",book1.author);
printf("Publication Year:%d\n",book1.publicationYear); 
printf("ISBN:%d\n",book1.ISBN);  
printf("Price:%2.f\n",book1.price);

return 0;
}
   

    
