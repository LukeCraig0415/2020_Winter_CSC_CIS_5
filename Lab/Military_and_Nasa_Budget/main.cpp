/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 7, 2020, 12:20 PM
 * Purpose:  Military and Nasa Budget
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    const int CNVPERC=100;//Conversion to Percentage
    float fedBudg,milBudg,nasaBdg;//Budgets in Dollars 2020
    float percMil,prcNasa;//Percentage compared to total federal budget
    
    //Initialize Variables
    fedBudg=4.1e12f;//All budgets googled in class  4.1 trillion dollars
    milBudg=686e9f; //Military budget = 686 Billion
    nasaBdg=21.5e9f;//Nasa Budget = 21.5 Billion
    
    //Process or map Inputs to Outputs
    cout<<"Federal Budget  = $"<<fedBudg<<endl;
    cout<<"Military Budget = $"<<milBudg<<endl;
    cout<<"Nasa Budget     = $"<<nasaBdg<<endl;
    cout<<"Military Budget =  "<<milBudg/fedBudg*CNVPERC<<"%"<<endl;
    cout<<"NASA Budget     =  "<<nasaBdg/fedBudg*CNVPERC<<"%"<<endl;
    
    //Display Outputs

    //Exit stage right!
    return 0;
}