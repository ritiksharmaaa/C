
#include <iostream>
#include <string>
#include <vector> // we use insted of list  why tis is similar to list like storing in sequecy bit it fast to access randomness

using namespace std;
//  welearn use deefind data type

//  first we create original form of sbi than we give copy to other  we can do it into other file but right now we do it in same file

class Chai
{
    public : 
            // data memeber or class attribute
            string teaName;             // name of the tea
            int serving;                // number of serving
            vector<string> ingredients; // list od ingrdient
                                        // just like we have to tell array which type of array have same as we have to tell vactor<type>

            //  Member function
            void display(){
                cout << "Name : " << teaName << endl;
                cout << "Serving : " << serving << endl;
                cout << "Ingredients : ";
                for(string ingredient : ingredients){
                    // use for in like : = in 
                    cout << ingredient << ", ";
                }
                cout << endl;
            }
    private : 
            






};

int main()
{
    //  usign class 
    Chai chaione ; // here Chai is class chainone is instnce 
    // chaione.teaName = "chaione"; // you can t aceess becuase you have to first tell in class whcih varibale use by which public or private concept called access modifier  by default it wen tto private  // we have public and protected also for derived class 
    chaione.teaName = "lemon tea";
    chaione.serving = 4;
    chaione.ingredients = {"water" , "lemon" , "honey" , "tea"};
    // call function to display
    chaione.display(); // give chai detail 

    Chai chaitwo ;
    chaitwo.teaName = "green tea";
    chaitwo.serving = 6;
    chaitwo.ingredients = {"water" , "green tea" , "honey"};
    chaitwo.display(); // give chaitwo detail
    

    return 0;
};
