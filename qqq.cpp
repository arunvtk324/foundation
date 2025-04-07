#include<iostream>
using namespace std;
int main(){
    int fno,sum,diff,prod,div ;
    int sno ;
    cout<< "Enter first no"<<endl;
    
    cin>> fno;
    cout<< "Enter second no"<<endl;
    cin>> sno;
    sum = fno + sno;
    diff = fno - sno;
    // prod = fno * sno;
    div = fno / sno;
    int rem= fno%sno;
    cout<< "Sum is : " << sum <<endl;
    cout<< "Difference is : " << diff <<endl;
    cout<< "Product is : " << (prod=fno * sno) <<endl;   
    cout<< "Quotient is : " << div <<"  and Reminder is  " << rem; 
    
}
