#include "queuecollection.h"
using namespace std;


void printQueueElements(queue<int> queue){
    while(!queue.empty()){
        cout << "queue element " << queue.front() << endl;
        queue.pop();
    }
}

void printQueueDetails(queue<int> queue){
    if(queue.empty())
        cout << "queue is empty" << endl;
    else
        cout << "queue is not empty" << endl;
    cout << "first element is " << queue.front() << endl;
    cout << "last element is " << queue.back() << endl;
    cout << "queue size is " << queue.size() << endl;
}

void queueCollection(){
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    printQueueDetails(myQueue);
    printQueueElements(myQueue);
    system("pause>0");
}