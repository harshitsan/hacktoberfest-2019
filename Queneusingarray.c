//As I told yesterday that an interface describes what a data structure does, while an implementation describes how the data structure does it.
//Queue interface ( bol sakta hai right , toh iska interface kaisaa hogaa)
//add(x): add the value x to the Queue
//remove(): remove the next (previously added) value, y, from the Queue and return y
//We can see that the remove() operation takes no argument.
//ow A FIFO (first-in-first-out) Queue, 
//removes items in the same order they were added, 
//Matlab store mein jo pehle ata hai woh cash payment kar key chala jata hai fine, clear.
//And yeh jo add(x) and remove() operations ho raha hai na on  FIFO Queue  ise koh  he
//enqueue(x) and dequeue(), bolta hai data structure mein understood

//samjhe gaya na kal jo bola tah interface and implementation okay.

//Now let us see the implementation

//Queue Array implementation –

//Front – The item at the front of the queue is called front item
//Rear – The item at the end of the Queue is called rear item
//Enqueue – Process of adding or inserting a new item in the queue is called as Enqueing
//Dequeueing – Process of removing or deleting an existing item from the queue is called as dequeueing
//Size – The max size of the queue is called as size an is initialised when the queue is created


#include<stdio.h>
#define SIZE 5

//Now we will do basic initialisation
int queue[SIZE], front = -1, rear = -1;

//Function created to handle enqueue
void enqueue(int item)
{
    if(rear == SIZE-1)
	{
        printf("Can't enqueue as the queue is full\n");
    }
    else
	{
        //The first element condition
        if(front == -1)
		{
            front = 0;
        }
        
        rear = rear + 1;
        queue[rear] = item;
        printf("We have enqueued %d\n",item);
   }
}

//Function created to handle dequeue
void dequeue()
{
    if(front == -1)
	{
        printf("Can't dequeue as the queue is empty\n");
    }
    else
	{
        printf("We have dequeued : %d\n", queue[front]);
        front = front + 1;
        
        //Only happens when the last element was dequeued
        if(front > rear)
		{
	        front = -1;
	        rear = -1;
        }
   }
}

//function to print the queue
void printQueue(){
    if(rear == -1)
        printf("\nUnable to display as queue is empty");
    else{
        int i;
        printf("\nThe queue after enqueue & dequeue operations looks like :");
        
        for(i = front; i <= rear; i++)
	        printf("%d ",queue[i]);
   }
}

int main()
{
    //enqueue begins here
    enqueue(10);
    enqueue(34);
    enqueue(76);
    enqueue(66);
   
    //dequeue beings here
    dequeue();
    dequeue();
   
    printQueue();
    return 0;
}







