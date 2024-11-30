#include <iostream>
#include <string>
#include <vector>

// here we make two costructor like suppose wedont want to pass whole parameter when intilise a class we want to make a quick parmeter without using normal constructor who take a parameter

// so we use a delegation constructor whhich call another constructor 
using namespace std ; 


class Cool{
    private :
        string teaname ;
        int serving ; 
        vector<string> ingredients ;
     public :
        // delegation constructor
        Cool(string name): Cool(name, 7, {"tea", "water", "sugar"}){
            cout << "delegation constructor called" << endl;
        }
        // constructor with parameter
        Cool(string name , int serve, vector<string> ingre){
            teaname = name ;
            serving = serve;
            ingredients = ingre;
        }
        // constructor with parameter
        Cool(string name , int serve): Cool(name, serve, {"tea", "water", "sugar"}){
            cout << "delegation constructor called" << endl;
        }
        // constructor with parameter
        Cool(string name): Cool(name, 7, {"tea", "water", "sugar"}){
            cout << "delegation constructor called" << endl;
        }



     // constructor with parameter main constructor
        Cool(string name , int serve, vector<string> ingre){
                teaname = name ;
                serving = serve;
                ingredients = ingre;}

    void display(){
        cout << "Name : " << teaname << endl ;
        cout << "Serving : " << serving << endl ;
        cout << "Ingredients : ";
        for(string ingre : ingredients){
            cout << ingre << ", ";
        }
        cout <<  "main constructor called " << endl ;
 
    };


};

// delegation constructor  doing nothing just water you pass intial constructor like one parameter it take it and call our orginal constrcutor with default parameter which we want to do like simple chai each time not they have to explictily tell how to make so we make a astandaer chai with work with deleagation constructor 


int main(){
    Cool quickchai("quick chai"); // want this but i not worl necause we have a constrcutor which take lot of parameter but we give only one so this should work but according to situation .
    quickchai.display();  // after delegation this work fine with also one parameter 

}