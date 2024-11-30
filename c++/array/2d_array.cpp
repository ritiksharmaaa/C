#include <iostream>


using namespace std ; 

int main(){
    // first row 1 shop 7 day sales and same for other .

    int chaiSales[3][7] = {
        {100, 150, 120, 130, 140, 125, 110},
        {120, 180, 150, 140, 160, 135, 120},
        {130, 160, 140, 150, 170, 145, 130}
    };
    for (int i = 0 ; i < 3 ; i++){
        cout << "Shop " << i+1 << " sales : " << endl ;
        for (int j = 0 ; j < 7 ; j ++ ){
            cout << chaiSales[i][j] << " " ;
        }
        cout << endl ;  

    }
    return 0 ; 
}