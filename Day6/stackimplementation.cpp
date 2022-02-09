#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else
        cout<<"Stack Overflow\n";
    }

    void pop(){
        if(top<0)
        cout<<"stack underflow\n";
        else
        top--;
    }

    int peek(){
        if(top!=-1)
        return arr[top];
        return -1;
    }

    bool isEmpty()
    {
        if(top==-1)
        return true;
        return false;
    }
};

int main(){
    stack st(3);
    st.push(22);
    st.push(33);
    st.push(35);
    st.push(6);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;
    st.pop();
    st.pop();
    cout<<st.isEmpty()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    


    return 0;
}