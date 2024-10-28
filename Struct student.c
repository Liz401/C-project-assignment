//structures
#include<stdio.h>
#include<string.h>
struct student{
char name[30];
char email[20];
char regNo[20];
int phoneNumber;
int height;
} student1, student2;

int main(){
printf("Enter name");
scanf("%s",&student1.name);

student1.height=57;
strcpy(student1.regNo,"CT101/G/22000/24");
strcpy(student1.email,"jane@gmail.com");
student1.phoneNumber=123456;

printf("Name%s\n", student1.name);

printf("Height%d\n", student1.height);
printf("Registration no%s\n",student1.regNo);
printf("Email%s\n", student1.email);
printf("Phone%d\n", student1.phoneNumber);
return 0;
}
