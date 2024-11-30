// constructore destructor and copy constructor 
#include <iostream>
#include <vector>


using namespace std;

// when new instace object create  constructor function automatically if you not define it and put into your object we alway overide the constructor function function ; 


// we have to just create constructor function just creare a function(){} no return types we have to declare we jut write function iside an objects . and function name similar to class . 

// in cpp we can define more than one constructor function


class Chai{
    public :
        string* teaName;
        int serving; 
        vector<string> ingredients;
        

        //default constructor 
        Chai(string name="" , int serve=7 , vector<string> ingr){
            cout << "COnstructor called" << endl;
            teaName = new string(name); // we have to build deconstructor to free this memory  
            serving = 0;
            ingredients = ingr;


        }

        //what happen if you define a public dynamic data or pointer in constructor so we know when use new for dynamic we have to free that memory so we have to create a destrutor same as but use with ~ chai(){}
        

        // copy constructor 
        Chai(const Chai& other){
            cout << "Copy constructor called" << endl;
            teaName = new string(*other.teaName);
            serving = other.serving;
            ingredients = other.ingredients;
        }
        ~Chai(){
            delete teaName;
            cout << "delete tea data from dynamic memory";

        };

        void display(){
            cout << "Name : " << *teaName << endl;
            cout << "Serving : " << serving << endl;
            cout << "Ingredients : ";
            for(string ingredient : ingredients){
                cout << ingredient << ", ";
            }
            cout << endl; 
        }


};

int main (){
Chai chaione; //without parameter

chaione.display(); // we get the all object withot manually setting a value of public attribute 
Chai chaitwo("tea" , 7 , {"public" , "value" });

// how we cpy the object from the instace object 
// normal way 

Chai chaiThreecopyconstrucot = chaitwo; // copy constructor destro the pointer from memory 
chaiThreecopyconstrucot.display(); // we get the all object withot manually setting a value of public attribute // or when this function done it also try to free that memory which already free by first instace 

// that why we have acopy construcutor here


// copy constructor way



    return 0; 
}