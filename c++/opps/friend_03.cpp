#include <iostream>
#include <string>

using namespace std;
// understanding a friend function 
// normal definition you search micro soft doc 
// in my understanding we have a class which have a private and protected member but on that class we can declare a another class name with friend keyword like public private have once we decalre the the another class inside that after declare we create or intiali those class which we declare for define there defination those class have acces to previous class who declare the class in there class so this functio have acces to other class private and protexted member .

//or 

// if we want to provide access of private memeber outside the class so we use frind also 

class Chai{
    private :
     string teaname ;
     int serving;

     public :
     Chai(string name , int serv) : teaname(name) , serving(serv) {}

    // we just declare not define there defination 
     friend bool compareServing( const Chai &chai1 , const Chai &chai2){

        
     }

     void display(){
         cout << "Name : " << teaname << endl;
         cout << "Serving : " << serving << endl;
     }

};

 bool compareServing( const Chai &chai1 , const Chai &chai2){
     return chai1.serving < chai2.serving;  // it will return true if chai1 serving less than chai2 serving else it will return false.

        
     }


int main (){
    Chai Lemonchai("Lemon Tea" , 2);
    Chai Masalachai("green Tea" , 4 );
    Lemonchai.display();
    Masalachai.display();

    if(compareServing(Lemonchai , Masalachai)){
        cout << "Masalachai has more serving than Lemonchai" << endl;

    }else{
        cout << "Lemonchai has more serving than Masalachai" << endl;

    };
    return 0 ; 
}