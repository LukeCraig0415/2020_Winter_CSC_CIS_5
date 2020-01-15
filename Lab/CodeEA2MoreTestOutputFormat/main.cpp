/* 
 * Author:   Dr. Mark E. Lehr
 * Date:     January 13th, 2020
 * Purpose:  Format the Output with iomanip
 */

//System Libraries - Post Here
#include <iostream>   //I/O library
#include <iomanip>    //Format Library
using namespace std;  //Namespace of Libraries

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables or constants here
    //7 characters or less
    float a,b,c,d;
    
    //Initialize or input data here
    cin>>a>>b>>c>>d;
    
    //Process inputs  - map to outputs here
    cout<<fixed;
    cout<<setw(9)<<setprecision(0)<<a<<setw(10)<<setprecision(1)<<a<<setprecision(2)<<setw(10)<<a<<endl;
    cout<<setw(9)<<setprecision(0)<<b<<setw(10)<<setprecision(1)<<b<<setprecision(2)<<setw(10)<<b<<endl;
    cout<<setw(9)<<setprecision(0)<<c<<setw(10)<<setprecision(1)<<c<<setprecision(2)<<setw(10)<<c<<endl;
    cout<<setw(9)<<setprecision(0)<<d<<setw(10)<<setprecision(1)<<d<<setprecision(2)<<setw(10)<<d;
    
    //Exit stage left
    return 0;
}