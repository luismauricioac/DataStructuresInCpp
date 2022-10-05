#include "stackcollection.h"
using namespace std;

void printStackElements(stack<int> stack){
    while(!stack.empty()){
        cout << "Stack element " << stack.top() << endl;
        stack.pop();
    }
}

void printStackDetails(stack<int> stack){
    if(stack.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
    cout << "Stack size is " << stack.size() << endl;
}

void stackCollection(){
    stack<int> numbersStack;
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.push(4);
    printStackDetails(numbersStack);
    printStackElements(numbersStack);
    system("pause>0");
}
