#include <iostream>
#include <string> 

using namespace std ; 


// new way of abstraction and derived class and virtual function 

//virtual or function make  class is nothing just pytohn have abc and abstractmethod library here we can create a blupring class with there method not the defination just declare it use a base ; 

// and virtual function

// inside class if you make any of the virtual function it automatically became abstractclass 


class Tea {
    public : 
        virtual void  prepareIngredient() = 0 ; // pure virtual function 
        virtual void brew() = 0; // we dont defien there definess becuase we have to redifined this inside derived class .
        virtual void serve () = 0; 

        void makeTea(){
            prepareIngredient();
            brew();
            serve();
        }
};
// impo just liek abs class not instace in other same as we also dont want to do this 
// now we make derived class but that class have soem exprectation that you have to must  redefine the function with defination in there derived class 


class GreenTea : public Tea{
    public : 
        // redclare the function from abstract class but not just usually doing in method overloading we have to user override keyword 
        // it s simple keyword and simple way to overide we do inheritance and from upper class we have some method whcih we inherit and want to overide there function so we have to explicity tell we are overide the function

        void prepareIngredient() override {
            cout << "Green Tea : prepare ingredients (water, green tea, honey)" << endl;
        };

        void brew() override {
            cout << "Green Tea : brew tea with steeping" << endl;
        };

        void serve() override {
            cout << "Green Tea : serve tea to customers" << endl;
        };

        // here we declare the virtual function not notmal function in abstract class but we call call it directly becuase it came from abs class function 


};

int main(){
    GreenTea greenteaone;
    greenteaone.makeTea(); // here we call the virtual function from base class to derived class
    return 0 ; 
}