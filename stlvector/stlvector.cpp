#include "stlvector.h"

using namespace std;

void printVector(vector<int> numbers){
    cout << "immutable iteration " << endl;
    for(auto it = numbers.cbegin(); it != numbers.cend(); it++){
        cout << *it << endl;
        //cout << &it << endl;
        //cout << &(*it) << endl;
    }
}

void stlVector(){
    vector<int> numbers;
    for(int i = 1; i <= 10; i++){
        numbers.push_back(i);
    }

    printVector(numbers);
    numbers.insert(numbers.begin()+5, 88);
    numbers.erase(numbers.begin()+5);
    printVector(numbers);
    numbers.pop_back();
    printVector(numbers);

    cout << "Size: " << numbers.size() << endl;
    cout << "Max size: " << numbers.max_size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;
    numbers.resize(5);
    cout << "Size: " << numbers.size() << endl;
    if(numbers.empty())
        cout << "Vector is empty \n";
    else
        cout << "Vector is not empty \n";
    cout << "Element [0]: " << numbers[0] << endl;
    cout << "Element at(0): " << numbers.at(0) << endl;
    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;
    numbers.clear();
    cout << "Size: " << numbers.size() << endl;

    cin.get();
}