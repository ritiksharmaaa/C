#include <iostream>
#include <string>


using namespace std ; 


int main (){
    // array continious memory location - no matter top to bottom left to right just we get data in continious memory way ;
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl; 
    //  in c++ if we access another memory locationwe get the garbage value  

    return  0 ;
};