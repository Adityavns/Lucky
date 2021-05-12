#include <stdio.h> 
#include <stdlib.h> 

struct student 
{ 
  int rollno; 
  char name[40];
  char branch[5];
  int semester; 
}; 
struct node 
{ 
  struct student s; 
  struct node *link; 
}; 
struct node *root; 
void createlist(); 
void display(); 
int main() 
{ 
  createlist(); 
   display(); 
} 
 void createlist() 
   { int num; 
   struct node *temp ,*p; 
 
   for(int i = 1;i<=5;i++) 
   { 
    temp=(struct node*)malloc(sizeof(struct node)); 
   printf("enter the roll no of student\n"); 
   scanf("%d",&temp->s.rollno); 
    printf("enter the name of student\n"); 
    scanf("%s",temp->s.name); 
    printf("enter the semster pursuing by student\n"); 
   scanf("%d",&temp->s.semester); 
   printf("enter the branch enrolled by student\n"); 
   scanf("%s",temp->s.branch); 
   
   if(root==NULL) 
   { 
       root=temp; 
       p=temp; 
   } 
   else 
   { 
       p->link=temp; 
       p=temp; 
   } 
 
  
   } 
} 
void display() 
{ 
    struct node *temp; 
    temp=root; 
    while(temp) 
    { 
        printf("\nstudent roll no is : %d\n" ,temp->s.rollno); 
        printf("student name is : %s\n" ,temp->s.name); 
        printf("semster pursuing by student are : %d\n" ,temp->s.semester); 
        printf("student branch is : %s\n" ,temp->s.branch);
        
        
        temp=temp->link; 
    } 
}