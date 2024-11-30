#include <iostream>;

using namespace std;

int main (){
    int tealeave = 4 ;
    float tempreaature = 5.34;
    double amount = 45.234523452345;
    char  t = 'a';
    bool isready = false;
    short tval = 34 ; 
    cout << tealeave << endl ;

    // modifier for data type means we can control whcih data have to change or not 

    unsigned temp = -23; //this will give you output like 234234534 for negative and right for 54 is 54  random  respons eis garbage value . 
    long largeteadStorage = 134234523452345;


    /* you can also use __int8 __int16 and more but in collage not teach becuase there compiler not understand btin moder way it use  is .*/

    //  type casting from one to another data type 
    float teaprice = 49.99 ;
    int roundteaprice = (int) teaprice ;  // here teaprice went to  inside paranthis and convert to int if short it went to short or double but you have to see it end the store in int .  
    int teaQuatity = 2 ;
    int totalPrice = teaprice * teaQuatity ; 

    cout << totalPrice << endl ; 




    cout << "data types : int float double void string boolean" << endl ;
    cout << "derrived  : array fuctnion  pointer refrence " << endl ;
    cout << "user defiend : class structure enum union typedef " << endl ;
    return 0 ;
}