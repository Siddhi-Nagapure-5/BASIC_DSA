#include<iostream>
using namespace std;

static int N=5;
int queue[100];
static int FRONT=-1;
static int REAR=-1;

bool isFull()
{
    if(REAR==N-1)
    {
          cout<<"CAN'T Insert Element because the queue is already full..";
        return true;
    }
  
  return false;
}
bool isEmpty()
{
   if(FRONT==-1)
   {
    cout<<"SORRY CAN'T REMOVE BECAUSE THE QUEUE IS ALREADY EMPTY...";
    return true;
   }
    return false;
}

int dequeue()
{
  if(isEmpty())
  {
    return 0;
  }
  int result=queue[FRONT];
  for(int i=FRONT;i<N-1;i++)
  {
    queue[i]=queue[i+1];
  }                     
return  result;
}

void enqueue(int ele)
{
    if(isFull())
    {
        return ;
    }
    if (FRONT==-1)
    {
        FRONT=0;
    }
    queue[REAR+1]=ele;
    REAR=REAR+1;

}

int peek()
{
  return queue[FRONT]; >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:Siddhi-Nagapure-5/BASIC_DSA.git
git push -u origin mai
}
void display()
{
    if(isEmpty())
    {
        return;
    }
    for(int i=FRONT;i<=REAR;i++)
    {
        cout<<"queue["<<i<<"] >>> "<<queue[i]<<endl;
    }
}

int main()
{
   cout<<"...WELCOME TO QUEUE SCHEDULING..."<<endl;
   cout<<"ENTER SIZE OF QUEUE \n";
   cin>>N;
   queue[N];
   char ch;
   do
   {
     int choice;

     cout<<"SELECT ANY OPTION\n";
     cout<<"1. ENQUEUE\n";
     cout<<"2. DEQUEUE\n";
     cout<<"3. PEEK\n";
     cout<<"4. DISPLAY\n";
     cout<<"5. IS EMPTY\n";
     cout<<"6. IS FULL\n";
     cout<<"7. EXIT\n";
     cout<<"ENTER YOUR CHOICE\n";
     cin>>choice;

     switch (choice)
     {
     case 1:
           int ele;
           cout<<"ENTER ELEMENT TO BE ENQUEUED\n";
           cin>>ele;
           enqueue(ele);
        break;
     
     case 2:
         cout<<dequeue();
         break;

    case 3:
    cout<<"FRONT ELEMENT IS "<<peek()<<endl;
    break;

    case 4:
     display();
     break;

    case 5:
    cout<<"Is the queue empty >>> " <<isEmpty()?"TRUE":"FALSE";break;

    case 6:
    cout<<"Is the queue full >>> " <<isFull()?"TRUE":"FALSE";break;

    case 7:
    cout<<"EXITING THE PROGRAM"<<endl;
    exit(0);
break;

     default:
     cout<<"INVALID CHOICE"<<endl;
        break;
     }


cout<<endl<<"DO you want to Perorm another operation (Y/N) ? "<<endl;
cin>>ch;

}while(ch=='y'||ch=='Y');




    return 0;
}



//OUTPUT

[?2004l
...WELCOME TO QUEUE SCHEDULING...
ENTER SIZE OF QUEUE 
1-  5
SELECT ANY OPTION
1. ENQUEUE
2. DEQUEUE
3. PEEK
4. DISPLAY
5. IS EMPTY
6. IS FULL
7. EXIT
ENTER YOUR CHOICE
1
ENTER ELEMENT TO BE ENQUEUED
10

DO you want to Perorm another operation (Y/N) ? 
y
SELECT ANY OPTION
1. ENQUEUE
2. DEQUEUE
3. PEEK
4. DISPLAY
5. IS EMPTY
6. IS FULL
7. EXIT
ENTER YOUR CHOICE
1
ENTER ELEMENT TO BE ENQUEUED >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:Siddhi-Nagapure-5/BASIC_DSA.git
git push -u origin mai
20

DO you want to Perorm another operation (Y/N) ? 
y
SELECT ANY OPTION
1. ENQUEUE
2. DEQUEUE
3. PEEK
4. DISPLAY
5. IS EMPTY
6. IS FULL
7. EXIT
ENTER YOUR CHOICE
1
ENTER ELEMENT TO BE ENQUEUED
4 30
 >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:Siddhi-Nagapure-5/BASIC_DSA.git
git push -u origin mai
DO you want to Perorm another operation (Y/N) ? 
y
SELECT ANY OPTION
1. ENQUEUE
2. DEQUEUE
3. PEEK
4. DISPLAY
5. IS EMPTY
6. IS FULL
7. EXIT
ENTER YOUR CHOICE
1
ENTER ELEMENT TO BE ENQUEUED
40

DO you want to Perorm another operation (Y/N) ? 
y
SELECT ANY OPTION
1. ENQUEUE
2. DEQUEUE
3. PEEK
4. DISPLAY
5. IS EMPTY
6. IS FULL
7. EXIT
ENTER YOUR CHOICE
1
ENTER ELEMENT TO BE ENQUEUED
50

DO you want to Perorm another operation (Y/N) ? 
y
SELECT ANY OPTION
1. ENQUEUE
2. DEQUEUE
3. PEEK
4. DISPLAY
5. IS EMPTY
6. IS FULL
7. EXIT
ENTER YOUR CHOICE
1
ENTER ELEMENT TO BE ENQUEUED
60
CAN'T Insert Element because the queue is already full..
DO you want to Perorm another operation (Y/N) ? 
y
SELECT ANY OPTION
1. ENQUEUE
2. DEQUEUE
3. PEEK
4. DISPLAY
5. IS EMPTY
6. IS FULL
7. EXIT
ENTER YOUR CHOICE
4
queue[0] >>> 10
queue[1] >>> 20
queue[2] >>> 30
queue[3] >>> 40
queue[4] >>> 50
