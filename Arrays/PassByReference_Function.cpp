#include<iostream>
using namespace std;

int func(int arr[]){
    cout<<"Inside Function: ";
    
    for(int i=0; i<3; i++){
        arr[i] = 2*arr[i];
    }

    for(int i=0; i<3; i++){
        cout<< arr[i]<< " ";
    }
    cout<<"\n";
    
    return 0;
}

int main(){
    int arr[] = {1,2,3};

    func(arr);

    cout<<"Inside Main: ";

    for(int i=0; i<3; i++){
         cout<< arr[i]<< " ";
    }

    cout<<endl;
    
    return 0;
}