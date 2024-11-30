#include <iostream>

// operator and conditional  istead of using or and not we use && || and ! for not 

// we are familiar with other lanfg so i dont code saem thign becuase usage of soem code is similart to js . 

// like usogn of condition if else else if else  && || ! 

using namespace std ;


//  in operator 1 + 2 here 1 is operand 1 and operand 2 
int main(){
    int cups;
    double PricePerCup , totalPrice , DiscountPrice ;
    cout << "enter the  no of tea cup" << endl ;
    cin >> cups ;
    cout << "enter the prive per cups " << endl ;
    cin >> PricePerCup ; 
    totalPrice = PricePerCup *  cups ;

    // apply five persant discount 

    if(totalPrice > 100 ){ 
        DiscountPrice = totalPrice * 0.05 ;
        totalPrice -= DiscountPrice ;
        cout << "Discounted Price is" << totalPrice << endl ;


    }else{
        cout << "Tota priec is " << totalPrice << endl ;
    }

    return 0 ;
}