#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string str = "Hello World";
    string ans;
    int n = str.length();

    reverse(str.begin(), str.end());
    
    for(int i =0; i<n; i++){
        
        string word = "";

        while (i<n && str[i] != ' '){
            
            word+= str[i];
            i++;
        }
        reverse(word.begin(), word.end());

        if(word.length() > 0){
            ans += " " + word;
    }
}
    cout<< ans.substr(1) <<endl;

    return 0;
}