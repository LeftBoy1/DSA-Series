#include<iostream>
#include<vector>
using namespace std;

class Stack {
    vector<int> v;      //private access- can not access from main()

public:     // public access- can be access from main()
    void push(int value){
        v.push_back(value);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];       
    //     v.size() → tells you how many elements are in the vector.
    //     v.size() - 1 → gives you the index of the last element.
    }

    bool empty(){
        return v.size() == 0;
    }
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while( !s.empty() ){
        cout<< s.top()<< " ";
        s.pop();
    }
    cout<<endl;

    return 0;
}