// concept of iterator and algo 
// stl is not all about cp 

#include <iostream>
#include <vector> 
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std ; 
struct Employee{
    int id ;
    string name ;
    double salary ;


};

// & if it put inbeginein it mean somethign or if it put in last it mean diffrent aslo for first we get memroy address or we have to work with pointer but when it put at last we get the refresh obj 

void display(const Employee& emp){
    cout << "ID : " << emp.id << ", Name : " << emp.name << ", Salary : " << emp.salary << endl ;

}

int main(){
    vector<Employee> employees = {
        {1, "John", 50000.0},
        {2, "Alice", 60000.0},
        {3, "Bob", 70000.0},
        {4, "Charlie", 80000.0},
        {5, "David", 90000.0}
    };
    // sorting the employeee base on sal we use sorl algo 

    sort(employees.begin() , employees.end() , []( const Employee& e1 , const Employee& e2  ){ return e1.salary < e2.salary;
    });// it take iterator and there data strcuture and those data structor are itrable than it work else not work . thride arg is lamda function

    cout << "Employees sorted by salary -> highest to lowest \n " <<  endl;

    // we see senond algo called for each loop 

    for_each(employees.begin(), employees.end() , display); // pass sendond function only refrence not call there or use lamda function 

    // now we create a vector with employye who sallry is greater than 50000 

    // we run loop of previo vecotor get those emplye whooo salyr is greter than 50000 
    vector<Employee> highSalaryEmployees ;
    copy_if(employees.begin() , employees.end() , back_inserter(highSalaryEmployees ) , [](const Employee& e ){
        return e.salary > 50000.0 ;
    });

    cout << "Employee who are high earners \n" << endl;

    for_each(highSalaryEmployees.begin(), highSalaryEmployees.end(), display);

    // in js you have learn acumulate similar like reduce 

    double totlatsalary = accumulate(employees.begin(), employees.end() , 0.0 , []( double sum , const Employee& e  ){
        return sum + e.salary ;
    } );

    //average salary 

    double averageSalary = totlatsalary / employees.size() ;

    cout << "average salary: " << averageSalary << endl;

    // max element 

    auto highestPaid = max_element( employees.begin(), employees.end(), [](const Employee& e1 , const Employee& e2){
        return e1.salary < e2.salary; // what is writen type we dont no so we use auto 
    });










    return 0 ;
};





