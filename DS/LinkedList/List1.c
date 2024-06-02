#include<stdio.h>
#include<stdlib.h>
int MainMenu()
{
    // system("clear");
    printf("\n\n\t1. Create\n\n\t2. Insert\n\n\t3. Delete\n\n\t4. Display\n\n\t0. EXIT\n");
    printf("Enter your Choice : ");
    int c;
    scanf("%d",&c);
    return c;
}
void CLS()
{
    system("clear");
}
int EXIT()
{
    printf("Thank You for using this one \vVisit Again..\n");
    exit(0);
}
int main()
{
    int m_ch;
    while(1)
    {
        // system("clear");
        m_ch=MainMenu();
        // scanf("%d",&m_ch);
        switch(m_ch)
        {
            case 1:
                CLS();
                printf("Creation will execute.\n");
                break;
            case 2:
                CLS();
                printf("Insertion will execute.\n");
                break;
            case 3:
                CLS();
                printf("Delete will execute.\n");
                break;
            case 4:
                CLS();
                printf("Display will execute.\n");
                break;
            case 0:
                CLS();
                EXIT();
                break;
            default :
                CLS();
                printf("Invalid Choice.\n");
        }
    }
    return 0;
}