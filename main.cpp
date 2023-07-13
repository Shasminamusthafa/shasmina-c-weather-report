/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/* Name - Shasmina 
College - Vivekananda college of engineering for women 
Input used in this program is
  FUNCTIONS
  CLASS AND OBJECT 
  WHILE LOOP
  SWITCH CASE 
  IF-ELSE CONDITIONAL STATEMENT  */
#include <iostream>

using namespace std;
//Using class
class Weather{
    
    public://using public to access all the user
    
    //using functions  
    void report(){
        
        int day;
        cout<<"Enter the report day wanted to know of the choice(1,2,3,4,5,6)- "<<" "<<endl;
        cin>>day;
        //switch case
        switch(day){
            case 1:cout<<"The weather report of today"<<endl;
            break;
            case 2:cout<<"The weather report of yesterday  "<<endl;
            break;
            case 3:cout<<"The weather report of tomorrow  "<<endl;
            break;
            case 4:cout<<"The weather report of week"<<endl;
            break;
            case 5:cout<<"The weather report of month"<<endl;
            break;
            case 6:cout<<"The weather report of year"<<endl;
            break;
            default :cout<<"!!!!Unavailable!!!! "<<endl;
            break;
            exit(day);
        }
    }
    //functions
    void climate(){
        
        int t;
        cout<<"Enter the temperature:"<<" "<<endl;
        cin>>t;
        //using if-else conditional statement 
        if(t==0){
            cout<<"The climate is too cold!!.."<<endl;
        }
        else if(t<=40){
            cout<<"The climate is moderate and windy!!..."<<endl;
            
        }
        else if(t<=80){
            cout<<"The climate is toooo hot!!..."<<endl;
        }
        else {
            cout<<"The climate is hot and dryyyy!!!..."<<endl;
        }
    }
    
};

int main()
{
    string name;
    string loc;
    //input from uset
    cout<<"Name:"<<" "<<endl;
    cin>>name;
    cout<<"Name of your location : "<<" "<<endl;
    cin>>loc;
    
    // object for class
    Weather w;
    while(1){
        
        int choice;
        cout<<"........!!!WELCOME TO WEATHER REPORT!!!!..... "<<endl;
        cout<<"\t1.DAY"<<endl;
        cout<<"\t2.TEMPERATURE"<<endl;
        cout<<"\t3.CANCEL"<<endl;
        cin>>choice;
        //switch case
        switch(choice){
            case 1:
             w.report();
             break;
            case 2:
              w.climate();
              break;
            case 3:
               exit(1);
               break;
            default:
              cout<<"Ooopss!!!!...Wrong.."<<endl;
              break;
              
             
        }
    }

    return 0;
}

