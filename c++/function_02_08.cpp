
#include <iostream>
#include <string> 

using namespace std; 

//  learnign pass by value or pass by refrence 

//  this function call by value 
void pourChai(int cups){
    cups += 5 ;
    cout << "Poured cups : " << cups << endl;

}
//  this function call by refrence 
void pourChairef(int &cups){
    cups += 5 ;
    cout << "Poured cups : " << cups << endl;

}
int main (){
    int chaiCups = 2 ; 
    pourChai(chaiCups); // pass by value 
    cout << "total cups are " << chaiCups << endl;

    return 0; 
} 



// lamada function is life of framwork and library 

// declare from [] basically anonymous fuction a function which not have name called lamdaa function in js we call it anononumus function 


int lamfun(){
    // lamda 
    auto prepairedchai = [](int cups){
        cout << "Lamda function called with " << cups << " cups." << endl;

    };

    prepairedchai(4) ; // jusl like labda function in python  like varibale run lie function but it a var 



    return 0 ;
}