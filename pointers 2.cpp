#include<iostream>
#include<string>

using namespace std;

int main() {
     
     int Firstvalue;
     string  Name;
     int * pPointer = &Firstvalue;
     cout<<"  enter integer Firstvalue   : "<<Firstvalue<<endl;
     cin>>Firstvalue;
   
     
     string * pMen = &Name;
     cout<<"enter the Name : "<<Name<<endl;
     cin>>Name;
     
    cout<< "address of Firstvalue " <<&Firstvalue<<endl;

cout  <<Firstvalue<<endl;
cout<<Name<<endl;
return 0;
}
