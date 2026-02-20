#include <iostream>
#include <string>

using namespace std ;

class Stack{
private:
     int top=-1;
     int *stack_ptr;
     int size;
     int *stack_mem;


public:
    Stack(int value){
        size=value;
        stack_mem = new int [size];
    }

    ~Stack()
    {
    delete stack_mem;

    }


    void push(int value)
    {
        if(top < size)
        {
            stack_mem[++top]=value;

        }
        else
        {
            cout<<"Cant Push the stack is full"<<endl;

        }

    }

     int pop()
     {
        return stack_mem[top--];

     }

     bool is_Empty()
     {
          if(top < size)
        {
                        cout << "The stack is empty"<<endl;

            return true;
        }
        else if (top >= size)
        {
                        cout << "The stack is Full"<<endl;

            return false;

        }

     }

     bool Is_Full()
     {
        if(top < size)
        {
            cout << "The stack is empty"<<endl;
            return false;
        }
        else if (top >= size)
        {
                        cout << "The stack is Full"<<endl;

            return true;

        }
     }
     


};


int main(void){

    Stack s1(2);

    s1.push(1);
    cout<< s1.pop()<<endl;
    s1.push(1);
    s1.push(1);
    s1.push(1);

    cout <<s1.is_Empty()<<endl;
    cout <<s1.Is_Full()<<endl;



return 0;

}