#include <iostream>
#include <string> 


using namespace std ; 

//define base class or parent or orginal and inheritance 

// weh have public for user use private for class use but protected used in furthure inherit class.

class Tea {
    protected:
        string teaName; 
        int serving; 
    public : 
        Tea(string teaName , int serve) : teaName(teaName) , serving(serve) {
            cout << "Tea object created with name : " << teaName << " and serving : " << serving << endl;
            cout << "tea constructor or base or parent constructor: " << endl ;
        }

        virtual void Brew() const {
            cout << "Brewing " << teaName << "with generic method " << endl;
            // we can call this function as abstract class also 

        };
        virtual void serve() const {
            cout << "Serving tea with " << serving << " cups " << endl;
        }
        virtual ~Tea(){
            cout << "tea destructor called" << teaName   <<endl;
        };
        
};

class GreenTea : public Tea{
    public:
        GreenTea(int serve) : Tea("Green" , serve ){
            cout << "green tea constructor called "<< endl ; 
        };
        // we have to redifind the parent virtual class 
        void Brew() const override{
            cout << "Brewing" << teaName<<endl;
            // here how we can access tea name due to base class member inside protected.
        };
        ~GreenTea(){
            cout << "called green tea destructor called" << endl; 
        };



};

// one more  inhertance 

class MasalaTea : public Tea{
    public : 
        MasalaTea( int serv) : Tea("masal tea" , serv){
            cout << "masala tea constructor called "<< endl ;

        };

        void Brew() const override final {
            cout << "Brewing" << teaName << endl;
            // here we can access tea name due to base class member inside protected.


        };

        void serve() const override {
        cout << "Serving" << teaName << endl;;

        }

        ~MasalaTea(){
            cout << "called masala tea destructor called" << endl;
        };
};

//multilevel inhertance 


class SpiceMasalTea : public MasalaTea{
    public :
        SpiceMasalTea(int serve) : MasalaTea(serve){
////
        };

        //now we except we also can overide  virtual function there also can we do this let check 
        // void Brew() const override{

        // };

        // you can t do it if masal chai set there ovride function to finnaly so no furthure sub class overide this . if you want pleae implement it in you own and use Tea class not my class if you realy want to overiride the brew function 

};

int main(){
    return 0 ;
}


