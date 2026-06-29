#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Size of a vector
    vector<int>vec1 = {1,2,3,4,5};
    cout<<"Size of vec1: "<< vec1.size() << endl;
    cout<<endl;
    
    
    
    //push_back()  ---> add elements at the end of the vector
    vector<int>vec2;
    
    vec2.push_back(34);
    vec2.push_back(12);
    vec2.push_back(75);
    
    cout<<"Size of vec2: "<< vec2.size() << endl;

    for(int i: vec2){
        cout << i<<" ";
    }
    cout<<endl;



    //pop_back ---> delete the last indexed element in the vector
    vector<int>vec3 ={10,24,45};
    
    vec3.pop_back();    //delete 45 number element 
    
    cout<<"Size of vec3: "<< vec3.size() << endl;

    for(int i: vec3){
        cout<< i<<" ";
    }
    cout<<endl;
    cout<<endl;
    

    

    // front()  ---> only print the 0th index element
    // back()   ---> only print the last indexed element 
    //at()   ---> only print the input index element
    cout<<"Front element: "<< vec1.front()<<endl;
    cout<<"Back element: "<< vec1.back()<<endl;
    cout<<"At element: "<< vec1.at(2)<<endl;
    
    cout<<endl;
    


    //Capacity of Vector   ---> how much capacity of a vector to store element
    vector<int>vec4;

    vec2.push_back(21);
    vec2.push_back(98);
    vec2.push_back(29);

    cout<<"Capacity of vec4: "<< vec1.capacity()<<endl;
    cout<<endl;
    return 0;

}
