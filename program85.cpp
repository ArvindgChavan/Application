#include<iostream>
using namespace std;

struct node 
{
  int data;
  struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
   private:
   PNODE Head;
   PNODE Tail;

   public:  
   SinglyCLL();
   
   void InsertFirst(int no);
   void InsertLast(int no);
   void InsertAtPos(int no,int ipos);
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int ipos);
   void Display();
   int Count();
};
SinglyCLL::SinglyCLL()
   {
    Head = NULL;
    Tail = NULL;
   }


   void SinglyCLL::InsertFirst(int no)
   {
      PNODE newn = NULL;

      newn = new NODE;   //  memory allocation 

      newn -> data = no;
      newn -> next = NULL;
      
      if((Head == NULL) && (Tail == NULL))  
      {
        Head = newn;
        Tail = newn;
      }
      else
      {
           newn -> next = Head;
         Head = newn;
      }
      Tail -> next = Head;
   }

   void SinglyCLL:: InsertLast(int no)
   {
      PNODE newn = NULL;

      newn = new NODE;   //  memory allocation 

      newn -> data = no;
      newn -> next = NULL;
      
      if((Head == NULL) && (Tail == NULL))  
      {
        Head = newn;
        Tail = newn;
      }
      else
      {
         Tail -> next = newn;
         Tail = newn ;
      }
      Tail -> next = Head;
   }

   void SinglyCLL::InsertAtPos(int no,int ipos)
   {
     int iSize = Count();

     if((ipos < 1)||(ipos > iSize + 1))
     {
       cout<<"Invalid position\n";
       return;
     }
     if(ipos == 1)
     {
       InsertFirst(no);
     }
     else if (ipos == iSize + 1)
     {
        InsertLast(no);
     }
     else
     {
        PNODE newn = NULL;

      newn = new NODE;   //  memory allocation 

      newn -> data = no;
      newn -> next = NULL;

       PNODE temp = Head;
       int iCnt = 0;

       for(iCnt =1;iCnt < ipos-1;iCnt++)
       {
         temp = temp -> next;
       } 
       newn -> next = temp -> next;
       temp -> next = newn;
     }
   }

   void SinglyCLL:: DeleteFirst()
   {
     if(Head == NULL && Tail == NULL)
     {
        return ;
     }
     else if(Head == Tail)
     {
        delete Head;
        Head = NULL;
        Tail = NULL;
     }
     else
     {
        Head = Head -> next;
        delete Tail->next;

        Tail -> next = Head;
     }
   }

   void SinglyCLL::DeleteLast()
   {
      if(Head == NULL && Tail == NULL)
     {
        return ;
     }
     else if(Head == Tail)
     {
        delete Tail;
        Head = NULL;
        Tail = NULL;
     }
     else
     {
        PNODE temp = Head;
        while(temp -> next != Tail)
        {
          temp = temp ->next;
        }
        delete Tail;
        Tail = temp;
        Tail -> next = Head;
     }
   }
   void SinglyCLL::DeleteAtPos(int ipos)
   {
     int iSize = Count();

    if((ipos < 1) || (ipos > iSize))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iSize)
    {
        DeleteLast();
    }
    else
    {
            PNODE temp1 = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < ipos-1; iCnt++)
            {
                temp1 = temp1->next;
            }

            PNODE temp2 = temp1->next;

            temp1->next = temp2->next;
            delete temp2;
    }
   }
 

   void SinglyCLL::Display()
   {
      PNODE temp = Head;
      if(Head == NULL && Tail == NULL)
      {
        return ;
      }
     do
      { 
        cout<<"|"<<temp -> data <<"|->";
        temp = temp -> next;
      }while(temp != Tail ->next);

     
      cout<<endl;
   }

   int SinglyCLL:: Count()
   {
     int iCnt =0;
     PNODE temp = Head;
     if(Head == NULL && Tail == NULL)
     {
       return 0 ;
     }
     do
     {
       iCnt ++;
       temp = temp -> next;

     }while(temp != Head);
     return iCnt;
   }

int main()
{  
  int iRet = 0;
   SinglyCLL obj;
  
   obj.InsertFirst(51);
   obj.InsertFirst(21);
   obj.InsertFirst(11);
   obj.InsertLast(101);
   obj.InsertLast(111);
    obj.InsertLast(121);
   obj.InsertLast(151);
    obj.InsertLast(201);

   obj.Display();

   iRet=obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    obj.DeleteFirst();
    iRet=obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;
    obj.Display();

    obj.DeleteLast();
    iRet=obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;
    obj.Display();

    obj.InsertAtPos(75,4);
    iRet=obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;
    obj.Display();

    obj.DeleteAtPos(4);
     iRet=obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;
    obj.Display();



  return 0;
}