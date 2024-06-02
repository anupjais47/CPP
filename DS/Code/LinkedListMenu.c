#include<stdio.h>
#include<stdlib.h>

struct node
{
   struct node* next;
   int data; 
};

int mainMenu();
void Exit();
void Create();
int sNum();
int main()
{
    struct node *start=NULL;
    
    int n,i,data;
    int a=mainMenu();    
    switch (a)
    {
        case 1:
            printf("Creation Successfull.\n");
            break;
        case 2:
            printf("Insertion Successfull.\n");
            start=(struct node* )malloc(sizeof(struct node));
            for(i=0; i<4; i++)
            {
                printf("Enter the data : ");
                scanf("%d",data);
                start->data=data;
                start->next=start;
            }
            break;
        case 3:
            printf("Deletion Successfull.\n");
            break;
        case 4:
            printf("The datas are..\n");
            for(i=0; i<4; i++)
            {
                printf("%d ",start->data);
                start->next=start;
            }
            printf("\n");
            break;
        case 0:
            printf("Exit Successfull.\n");
            Exit();
        default:
            printf("You have entered wrong choice\n");
    }
    printf("From the Science side..\n");
    return 0;
}
int mainMenu()
{
    int n;
    system("clear");
    printf("\v\v\t\t1. Create\n\t\t2. Insert\n\t\t3. Delete\n\t\t4. Display\n\t\t0. Exit\n\n Enter the choice : ");
    scanf("%d",&n);
    return n;
}
void Exit()
{
    system("clear");
    printf("Thank you for using our program\vVisit again.. 🙏\n");
    exit (0);
}

