// vechile management system

#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Vechile
{
private:
    string make;
    string model;
    string  year;
    float price;

public:
    void setMAke(string &mke)
    {
        mke = mke;
    }
    void setModel(string& mdl){
        model = mdl ;

    }
    void setYear(string& year){
        this->year = year;
    }
    void setPrice(float& prc){
        price = prc ; 

    }

    string getMake(){
        return make ;

};
    string getModel(){
        return model ;
    }
    string getYear(){
        return year ;
    }
    float getPrice(){
        return price ;
    }

    void displayDetail(){
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
    }

    virtual float calculateTax(){}; 




};

class Car : public Vechile{
    private :
        int numDoors;
    public :
    void setnumDoors(int doors){
        numDoors = doors;
    }
    int getNumDoors(){
        return numDoors ;
    }
    float calculateTax() override {
        return getPrice() * 0.8 ;

    }
};

class Truck : public Vechile{
    private :
        float payload ;
        float  towingCapacity;
    public :
        void setPayload(int load){
            payload = load ;
        }
        void setTowingCap(float cap){
            towingCapacity = cap ;
        }
        float  getPayload(){
            return payload;
        }
        float getTowingCap(){
            return towingCapacity ;
        }

        float calculateTax() override {
            return getPrice() * 0.9 ;


};
};

class vechileManagementSystem{
    private :
        Vechile *vechile;
        int numVechile ;
        int vechileCount = 0 ;
    public :
         vechileManagementSystem(int mcap) : numVechile(mcap) , vechile(new Vechile[numVechile]){};
         ~vechileManagementSystem(){
             delete[] vechile ;
         }

         bool addVechile(Vechile& vechile){
             if(vechileCount < numVechile){
                 this->vechile[vechileCount] = vechile ;
                 vechileCount++ ;
                 return true ;
             }
             return false ;
         }

         Vechile *searchVechile(string& mode){
            // search via modelno
            for(int i =0 ; i < vechileCount ; i++){
                if(vechile[i].getModel() == mode){
                    return &vechile[i] ;
                }
            }
            return nullptr;
         };

         Vechile *searchVechile(string& mode , string& make){
             // search via modelno and make
             for(int i =0 ; i < vechileCount ; i++){
                 if(
                     vechile[i].getMake() == make &&  vechile[i].getModel() == mode
                 ){
                     return &vechile[i] ;
                 }
             }
             return nullptr;
         };

         bool removeVechile(string maker , string mode){
            for(int i =0 ; i < vechileCount ; i++){
                if(
                    vechile[i].getMake() == maker &&  vechile[i].getModel() == mode
                ){
                    for (int j = i ; j < vechileCount-1  ; j++){
                        vechile[j] = vechile[j+1] ;

                    }
                    return true ;
                    //
                }
            }
            return false;
         }

         void run(){
            Car car1 ;
            Truck truck2 ;

            int choice ;
            string  vechiletype ;
            string maker ;
            string modelno ;
            string year ;
            float price ;
            int numDoors ;
            float payload ;
            float towingCapacity ;

             while(true){
                cout << "\n Welecome to the vechile management system \n\n";
                cout <<"\n Menu : \n";
                 cout << "\nChoose an option:\n";
                 cout << "1. Add Car\n";
                 cout << "2. Add Truck\n";
                 cout << "3. Search Vechile\n";
                 cout << "4. Remove Vechile\n";
                 cout << "5. Exit\n\n";
                 cout << "Enter your choice";

                 cin >> choice;
             while (!(cin >> choice) || choice < 1 || choice > 5)
            {
                cin.clear();
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a number between 1 and 5: ";
            };
                 
                 switch(choice){
                    case 1 :{
                         cout << "Enter Car Details : \n";
                         cout << "Maker : ";
                         cin >> maker;
                         cout << "Model : ";
                         cin >> modelno;
                         cout << "Year : ";
                         cin >> year;
                         cout << "Price : ";
                         cin >> price;
                         cout << "Number of Doors : ";
                         cin >> numDoors;
                         car1.setMAke(maker);
                         car1.setModel(modelno);
                         car1.setYear(year);
                         car1.setPrice(price);
                         car1.setnumDoors(numDoors);
                         vechileManagementSystem vms(10);
                        string created = addVechile(car1) ?  "created succefull" : "getting Error ";
                         cout << created << endl;
                         break;

                    }
                    case 2 :{
                         cout << "Enter Truck Details : \n";
                         cout << "Maker : ";
                         cin >> maker;
                         cout << "Model : ";
                         cin >> modelno;
                         cout << "Year : ";
                         cin >> year;
                         cout << "Price : ";
                         cin >> price;
                         cout << "Payload : ";
                         cin >> payload;
                         cout << "Towing Capacity : ";
                         cin >> towingCapacity;
                         truck2.setMAke(maker);
                         truck2.setModel(modelno);
                         truck2.setYear(year);
                         truck2.setPrice(price);
                         truck2.setPayload(payload);
                         truck2.setTowingCap(towingCapacity);
                         
                         string created = addVechile(truck2)?  "created succefull" : "getting Error ";
                    }
                    case 3 :{
                         cout << "Enter Vechile details to search : \n";
                         cout << "Maker : ";
                         cin >> maker;
                         cout << "Model : ";
                         cin >> modelno;
                         Vechile *vechileFound = searchVechile(modelno, maker);
                         if(vechileFound){
                             cout << "Found Vechile : \n";
                             vechileFound->displayDetail();
                         }
                         else{
                             cout << "No such Vechile found \n";
                         }
                         break;
                    }
                    case 4 :{
                         cout << "Enter Vechile details to remove : \n";
                         cout << "Maker : ";
                         cin >> maker;
                         cout << "Model : ";
                         cin >> modelno;
                         bool removed = removeVechile(maker, modelno);
                         cout << (removed? "Removed succefull" : "No such Vechile found ") << endl;
                         break;
                    }
                    case 5 :{
                         cout << "Exiting... \n";
                        
                    }
                 }
             };


         }

    
}
;

int main()
{
    vechileManagementSystem vms(100);
    vms.run();
    return 0;
}