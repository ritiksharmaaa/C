#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include<unordered_set>
#include <ctime>
#include <deque>


using namespace std ;
// in normal way you just start making class or main function 
//but in project we have to define the structure of our data which we called type in type script also


struct Product
{
    int productId;
    string productName;
    string category ;

};

struct Order {
    int OrderId ;
    int ProductId;
    int quantity;
    string customerId ;
    time_t orderDate;

};

//aslo you can make user struct 

int main(){
    // vector<Product> products;
    vector<Product> products = {
        {101 , "Laptop", "Electronic" },
        {102 , "Smartphone", "Electronic" },
        {103 , "Coffe Maker", "Kitchen" },
        {104 , "blender", "Kitchen" },
        {105 , "desklamp", "home" },
    };

    //supose soem user came and we store it so we use deque 
    deque<string> recentCustomer = {"C001", "C002" , "C003"};
    recentCustomer.push_back("C004");
    recentCustomer.push_back("C005");

    list<Order> orderHistory ; // to store order detail 
    orderHistory.push_back({1, 101, 2, "C001", time(0) });
    orderHistory.push_back({2, 102, 1, "C002", time(0) });  


    // finding unique category 

    set<string> uniqueCategories;
    // auto mean we have to tell whichtype of product it is so we say auto 
    for(const auto &product : products){
        uniqueCategories.insert(product.category);
    };

    // using a Map map alwash ordered 
    map<int , int > ProductStock = {
        // bydefault it use biary tree 
        {101, 5},
        {102, 10},
        {103, 3},
        {104, 7},
        {105, 2},
    };

    // use multimap 
    multimap<string , Order> customerOrder;
    for (const auto &order : orderHistory){
        customerOrder.insert({order.customerId, order});
    }

    // use it unorder map 

    unordered_map<string , string   > customerData={
        //behind the scene it use hash 
        {"C001" , "Alice"},
        {"C002" , "Bob"},
        {"C003" , "Charlie"},
        {"C004" , "David"},
        {"C005" , "Eve"},
    };


    unordered_set<int> uniqueProductId;

    for (const auto &product : products){
        uniqueProductId.insert(product.productId);

    }












}


