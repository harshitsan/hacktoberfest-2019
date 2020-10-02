#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

int h[TABLE_SIZE]={NULL};

void insert()
{
    int key,i,hkey,index;
    printf("\nEnter the key to insert:");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE;i++)
    {
        index=(hkey+i)%TABLE_SIZE;
        if(h[index]==NULL)
        {
            h[index]=key;
            break;
        }
    }
    if(i==TABLE_SIZE)
        printf("\nNo more key can be inserted!");
}

void search()
{
    int key,hkey,index,i;
    printf("\nEnter the value to search:");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE;i++)
    {
        index=(hkey+i)%TABLE_SIZE;
        if(h[index]==key)
        {
            printf("Search Found is there!");
            break;
        }
        if(i==TABLE_SIZE)
        {
             printf("\nSearch Not Found!");
        }

    }

   
}


void display()
{
    int i;
    for(i=0;i<TABLE_SIZE;i++)
    {
        printf("\nat index %d \t value=%d",i,h[i]);
    }
}


int main()
{
    int choice;
    while(1)
    {
    printf("\n\tMENU DRIVEN");
    printf("\n1.Insertion");
    printf("\n2.Searching");
    printf("\n3.Display");
    printf("\n4.EXIT");

    printf("\n\nEnter the value:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        search();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("\nINVALID CHOICE!");
    }

    }

    return 0;
}
