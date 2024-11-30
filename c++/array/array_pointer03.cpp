#include <iostream>


using namespace std; 


// pointer  so so a function take array but no return array so we use a trick we return a first array address or array first element and to hold those first element we have pointer : pointer just give first element of an array we know array are contniou we get the furthure data from those pointer incremental .  

// in pointer we get * &  * use to hold the data and & use to pass the memory locationof the data we see how we pass call by refreference  via &

// heap memory use in cpp in cpp if we have to store something in heap we use new keyword or whatever we store on stack it will distro it mean inside a function you create and array but this array not return it do some calucation at the end it return the value after return it destory every data becuase it store in stack so we retrun pointer but what benfit after retrun pointer it will distroy entire array from stack so we store the array in heap and from function we get pointer to that heap . 

int* preparedChaiOrders(int cups){
    int* orders = new int[cups];
    for(int i=0; i<cups; i++){
        orders[i] = (i + 1) * 10 ;
}
return orders ;

}

int main(){
    int cups = 3 ; 
    int* chaiorder = preparedChaiOrders(cups);
    for(int i=0; i<cups; i++){
        cout << chaiorder[i] << endl ;
    }
    delete[] chaiorder ; // delete the memory we allocated using new keyword.

    
    return 0 ;
}
