#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    //1. Reverse character
    char ch[] = {'h','e','l','l','o'};
    int start = 0; 
    int end= size(ch)- 1;

    while(start < end){
        swap(ch[start], ch[end]);

        start++;
        end--;
    }
    cout<<ch<<endl;


    //2. Reverse string
    string str = "Devansh Gupta";

    reverse(str.begin(), str.end());
    cout<<str<<endl;

    return 0;
}