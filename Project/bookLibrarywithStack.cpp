#include<iostream>
#define size 20

using namespace std;

class Stack
{
    
private:

    int books[size];
    int top=-1;

public:

    bool pushBook(int val)
    {
        if (isFull())
        {
            cout<<"It's full!"<<endl;
            return false;
        }

        top++;
        books[top]=val;
        return true;
        
    }
    
    int popBook()
    {
        if(isEmpty())
        {
            cout<<"It's empty!"<<endl;
            return -1;
        }

        int popBook = books[top];
        top--;
        return popBook;
        
    }

    bool isEmpty()
    {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
            
    }
    bool isFull()
    {
        if(top==size-1){
            
            return true;
        }
        else{
            return false;
        }
            
    }

   
    void allBooks()
    {
        cout<<"Books are: "<<endl;
        
        for(int i=top;i>=0;i--)
        {
            cout<<"Book id: "<<books[i]<<endl;
        }
    }
};
int main()
{
    Stack s;
    int option;
    int position;
    int value;

    while(option!=6)
    {
    a:
        
        cout<<"1.Add a book in top"<<endl;
        cout<<"2.Remove a book in top"<<endl;
        cout<<"3.Check book shelf empty"<<endl;
        cout<<"4.Check book shelf full"<<endl;
        cout<<"5.Show all book id"<<endl;
        cout<<"6.End the Program"<<endl;
        cout<<endl;
        cout<<"Press a number to execute: ";
        cin>>option;
        cout<<endl;
        
        if(option==1){
            cout<<"Input book id: ";
            cin>>value;
            s.pushBook(value);
            cout<<endl;
            cout<<endl;
            goto a;
        }
        if(option==2){
            cout<<"book id "<<s.popBook()<<" has been out from bookshelf"<<endl;
            cout<<endl;
            cout<<endl;
            goto a;
        }
        if(option==3){
            if(s.isEmpty()){
                cout<<"BookShelf is empty"<<endl;
            }
                
            else{
                cout<<"BookShelf is not Empty"<<endl;
                
            }
            cout<<endl;
            cout<<endl;
            goto a;
               
        }
        if(option==4){
            if(s.isFull()){
               cout<<"BookShelf is Full"<<endl; 
    
            }
                
            else{
                cout<<"BookShelf is not Full"<<endl;
                
            }
            cout<<endl;
            cout<<endl;
            goto a;
                
        }
        if(option==5){
            s.allBooks();
            cout<<endl;
            cout<<endl;
            goto a;
        }   
        if(option==6){
            goto b;
        }
        else{
            cout<<"Enter a valid option to execute!"<<endl;
            cout<<endl;
            cout<<endl;
            goto a;
        }
            
        
    }
    b:
    return 0;
}
