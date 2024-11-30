// we learn loops in cpp 


# include <iostream>
#include <string>



using namespace std ;

int main(){
    int Teacups;
    cout << "enter no of tea cup you  want :" << endl ;
    cin >> Teacups ;  // get the input from user
    while (Teacups > 0 )
    {
        cout << "Serving cup od tea \n " << Teacups  << "remaining ";
        Teacups -- ;  // decrement the value of teacups by 1

    }

    cout << "all teacups is served :" << endl ; 
    
    return 0 ;
}

int dowhile(){
    string response ; 
    do{
        cout << "do you want more tea : Yes : No" << endl ;
        cin >> response ; //;
        
    }while(response == "no" || response == "No" );
    return 0 ; 
}


int forloop(){
    int teacups = 5 ; 

    for (int i = 0; i <= teacups ; i++)
    {
    cout << "Breaiwing up" << i << "of tea .....";
    }
    

    return 0 ;
}

int forloopbreak(){
    string response ; 

    while(true){
     cout << "we are exit code insode the loops ...." << endl;
     getline(cin , response );
     if (response == "stop"){
        // exit the loop 
        break ; 
     }
     cout << "here is the another cup odf tea ..";

    }
    

    return 0 ;
}


// ler see how array or list can declare in cpp 
 

  int listdeclare(){
    //  ho  string declare we jsut write string varable = value saem as we do for strign array with size 4
    string listfruit[4] = {"mango" , "grapes" , "banana" , "orange" };

    for (int i = 0 ; i < 4 ; i ++ ){
        if (listfruit[i] == "mango" ){
            cout << "skipping the" << listfruit[i] << endl;
            continue;
        }
        cout << "Tea Breawing" << listfruit[i] << "...." << endl;
    }
    return  0 ; 

  }


//   nested loop for brewwing diffrent tpe of tea three time 


int nestedloop(){
    string listfruit[4] = {"mango" , "grapes" , "banana" , "orange" };
    for (int i = 0 ; i < 4 ; i ++ ){
        for (int j = 0 ; j < 3 ; j ++ ){
            cout << "serving " << listfruit[i] << i << "time" <<  "..." << endl;
        }
    } 

    return 0 ;
}