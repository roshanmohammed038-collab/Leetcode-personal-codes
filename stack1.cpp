#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
public:


    Stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
}

void push(int value){
    if(top==size-1){
        cout<<"stack overflow\n";
        
    }
    else{
        top++;
        arr[top]=value;
        cout<<"pushed\n";
    
    }
}
void pop(){
    if(top==-1){
        cout<<"stack underflow\n";
        
    }
    else{
        top--;
        cout<<"popped\n"<<arr[top+1];
    

    
    }
}
};

int main(){
    Stack s(5);
    s.push(2);
    s.push(3);
    s.pop();


return 0;
}