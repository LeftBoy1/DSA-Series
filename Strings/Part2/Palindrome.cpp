#include<iostream>
#include<string>
using namespace std;

int main(){
    string s ="Ac3?e3c&a";
    int n = s.size();
    int start = 0, end = n-1;

    while(start < end){

        if (!isalpha(s[start])) {
            start++;
            continue;
        }

        if (!isalpha(s[end])) {
            end--;
            continue;
        }                       
    

        if(tolower(s[start]) == tolower(s[end])){
            start++;
            end--;
        }

        else{
            cout<<"Not a Palidrome String"<<endl;
            return 0;
        }
        
    }

    cout<<"Palidrome String"<<endl;


    return 0;
}
