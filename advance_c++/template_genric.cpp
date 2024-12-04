// template function is like a genric in type script where we have to send a diffrent type of argument we have to pass we can pass string also and int also suppose we have to return strign or int 

// but it is not posible becuase you have to must declare the type and return type also so we made template function and class template 

#include <iostream>
#include <vector>


using namespace std;
template <typename T>T maximun(T a , T b){
    return (a > b)? a : b;

};

template <typename T> class ClassMax {
    public :
        void add( T value ){
            data.push_back(value);
        }
        T get(int index){
            return data[index];
        }
    private :
        vector<T> data ;
};

int main(){
    int on = 1 , off = 0;
    float x =1.2 , y=2.3 ;
    cout << "Maximum of " << on << " and " << off << " is " << maximun(on,off) << endl;
    cout << "Maximum of " << x << " and " << y << " is " << maximun(x,y) << endl;

    // testing class based template 
    ClassMax<int> intMax;
    intMax.add(10);
    intMax.add(20);
    cout << "Maximum of " << intMax.get(0) << " and " << intMax.get(1) << " is " << maximun(intMax.get(0),intMax.get(1)) << endl;

    //float 
    ClassMax<float> floatMax;
    floatMax.add(1.2);
    floatMax.add(2.3);
  
    return 0 ;
}