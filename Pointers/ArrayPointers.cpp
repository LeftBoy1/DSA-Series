#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<< *(arr)<<endl;
    cout<< *(arr+1)<<endl;
    cout<< *(arr+2)<<endl;
    cout<< *(arr+3)<<endl;
    cout<<endl;

    int *p1;
    int *p2 = p1 + 2;       //it adds 2integers not a value , means it adds 8bytes in ealier bytes
            // Ex:-  p1 = 100bytes 
                    //  p2 = p1 + 2   >>>>>>  p2 = 100bytes + 8bytes
                    //                         p2 = 108bytes                
    
    cout<< p2-p1 << endl;   
    
    return 0;
}
