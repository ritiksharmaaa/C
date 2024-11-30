#include <iostream>
#include <string>

using namespace std ; 

int getTemprature(int temprature ){
    return temprature ; 
}



//  we can also declare a function without a body and later we defien there body it help to reserve soem memeroy  so next time when we intialize it it value went to mememory . 4



void serveChai(int value); // that it later we initilize it 


//  like thsi way 

void serveChai(int value){
    cout << "checking declare and intialization " << value << endl;
}

// end the initilization 




int main (){
    int temp = getTemprature(50); // we have to hold to return type ; 
    serveChai(5);


    return 0 ;
}

// function paprameter 

void serveChai(string value="default value of chai " ){
    //  here we write same function twicw time with diffrent parameter that is calld function oveloading whichwe dont in python here calling identify which function call based on there parameter  
    cout << "serving" << value << endl;
}
 