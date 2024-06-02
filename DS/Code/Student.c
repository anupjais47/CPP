#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,b;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    int stud[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the marks of %d student : ",i+1);
        scanf("%d",&stud[i]);
    }
    printf("\n\n\t\t1. average marks\n\t\t2. highest and lowest\n\t\t0. EXIT\n\nEnter your choice : ");
    scanf("%d",&b);
    int min=stud[0],max=stud[0];
    float avg=0;
    switch(b)
    {
        case 1:
            for(i=0; i<n; i++)
            {
                avg+=stud[i];
            }
            avg/=n;
            printf("The average marks is \"%.2f \"\n",avg);
            break;
        case 2:
            for(i=1; i<n; i++)
            {
                if(min>=stud[i])
                {
                    min=stud[i];
                }
                if(max<=stud[i])
                {
                    max=stud[i];
                }
            }
            printf("The Lowest Marks is \"%d\" and the Highest marks is \"%d\".\n",min,max);
            break;
        case 0:
            printf("Thank you for taking my services. \n");
            exit(0);
            break;
        default :
            printf("You have entered wrong choice.\n");
    }
    return 0;
}