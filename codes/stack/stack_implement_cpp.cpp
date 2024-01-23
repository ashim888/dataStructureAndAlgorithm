#include<iostream>
using namespace std; 

//implementation of stack using a class
class Stack{
    //properties
    public:
    int top;
    int *arr;
    int size;

//constructor to dynamically allocate the array size
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push ( int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty "<<endl;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
     

};

int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<"The top of the stack is"<<st.peek()<<endl;
    //ans->44

    st.pop();
    cout<<"Top is "<<st.peek()<<endl;
    //ans->43
    //another pop
    st.pop();
    cout<<"Top is "<<st.peek()<<endl;st.pop();
    cout<<"Top is "<<st.peek()<<endl;

    if (st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack aint empty "<<endl;
    }

}