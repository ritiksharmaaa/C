#include <iostream>


using namespace std;

int main(){
    int charserver[7] = {12 , 23 , 24 , 25 , 26 , 27 , 28 };

    cout << "chai cup served on day 1 : " << charserver[0] << " " << endl;
    cout << "chai cup served on day 2  : " << charserver[1] << " " << endl;

    //let see how we pass entire array insode a function parameter 




    return 0 ;
}


int totalchaiserved(int chai[], int size ){
        int total = 0 ; 
        for(int i = 0 ; i < size ; i++){
            total += chai[i];
        }

        // you can retrun array from there see array 3 file 
        return total ;

}
int newmain(){
    int charserver[7] = {12 , 23 , 24 , 25 , 26 , 27 , 28 };

    // calling function and paasing array inside it 
    int total = totalchaiserved(charserver, 7);
    cout << "Total chai cups served over 7 days : " << total << " " << endl;

    return 0 ;
}

    
 
    