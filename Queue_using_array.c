//wap to implement queue using array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Max 3
int queue_array[Max];
int rear=-1;
int front=-1;
void enqueue();
void display();
void dequeue();
int main()
{
 int choice;
 while(1)
 {
  printf("1.Insert\n2.Delete\n3.Quit");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
          enqueue();
          break;
   case 2:
          dequeue();
          break;
   case 3:
          exit(0);
   default:
          printf("wrong choice\n");       
  }                                                        
 }
 getch();
}
void enqueue()
{
 int add;
 if(rear==Max-1)
 {
   printf("Queue over flow\n");
   return;
}
 else
 {
  if(front==-1)
    front=0;
  printf("Insert the element in queue:");
  scanf("%d",&add);
  rear=rear+1;
  queue_array[rear]=add;                                                         
  display();
 }                                                          
}
void dequeue()
{
 if(front==-1||front>rear)
 {
  printf("Queue underflow \n");
  return;                                                          
 }
 else
 {
  printf("Element deleted from queue is:%d\n",queue_array[front]);
  front=front+1;
  display();
 }                                                           
}                           
void display()
{
 int i;
 if(front==-1 || front>rear)
 printf("Queue is empty\n");
 else
 {
  printf("Queue is:\n");
  for(i=front;i<=rear;i++)
  printf(" %d ",queue_array[i]);
  printf("\n");                                                           
 }                                                            
}