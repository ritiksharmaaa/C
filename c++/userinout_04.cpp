#include <iostream>
#include <string>

using namespace std ;

int main(){
    string userTea ;
    int teaqut ;
    cout << "what you would like to in a tea  " << endl ; 
    getline(cin , userTea); // inside which program take input and where store that input
    cout << "how much Qnt you you want tea" << endl ;
    // getline(cin , teaqut);   use this or new way to get input 

    cout << "how many Qnt you want" <<userTea << "wouuld you like " << endl ;
    cin >> teaqut ; // new way to take a input 

    return 0 ;
}