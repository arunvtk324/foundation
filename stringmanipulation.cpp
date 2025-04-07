#include<iostream>
using namespace std;
int main(){
    cout << "Varghese\n";

string fullName,favoriteSport;
int firstNo,secondNo; 
cout << "Type your full name: "; 
getline (cin, fullName); 
cout << "Type your favourite sports: "; 
getline (cin, favoriteSport); 
cout << "Your name is: " << fullName;
cout << "\nand Your favourite sport is: " << favoriteSport;
cout << "\nTHANK YOU for your valuable time\nCan u pls enter a no: ";
cin>>firstNo;
cout << "\npls enter another no: ";
cin>>secondNo;
cout << "\n Okay\n";
cout<< "Sum is : " << firstNo+secondNo <<endl;
    cout<< "Difference is : " << firstNo-secondNo <<endl;
    cout<< "Product is : " << firstNo* secondNo <<endl;   
    cout<< "Quotient is : " << firstNo/secondNo<<"  and Reminder is  " << firstNo%secondNo; 
    cout << (10 > 9);


}



