#include <iostream>
#include <vector>
#include <string>


using namespace std ; 

class Cool{
    private :
        string teaname ;
        int serving ; 
        vector<string> ingredients ;
     public :
        Cool(string name , int serve , vector<string> ingre){
            teaname = name ;
            serving = serve;
            ingredients = ingre;

        }  

        // getter 
        string getName(){
            return teaname ;
        }
        //setter
        void setName(string name){
            teaname = name ;

        };

        // getter fro ingrdient 
        vector<string> getIngredients(){
            return ingredients ;
        }
        // setter for ingredients
        void setIngredients(vector<string> ingre){
            ingredients = ingre ;
        }

        void displayChaiDetails(){
            cout << "Name : " << teaname << endl ;
            cout << "Serving : " << serving << endl ;
            cout << "Ingredients : ";
            for(string ingre : ingredients){
                cout << ingre << ", ";
            }
            cout << endl ;
        }

};

int main(){
    Cool chai("masala" , 5 , {
        "water" ,
        "spices" ,
        "chais"
    } );
};

