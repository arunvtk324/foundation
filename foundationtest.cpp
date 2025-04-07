#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int arrsize;
    int largest=0;
    int secondLargest=0;
    //int *numbers=new int arr;
    cout<<"Enter the size of the array : ";
        cin>>arrsize;
    int *numbers = new int[arrsize];
    //int *arr = new int[arrsize];
    //for (i=0; i<3,i++)

        //cout<<arrsize <<endl;
cout<<"Enter the elements of the array : ";
cout<<endl;
    for (i = 0; i < arrsize; i++) 
    {
    cin>>numbers[i];
    //cout<<endl;
    //cout<<numbers[i];
    // cout<<" ";
    }
//cout<<endl;
//cout<<i;
//cout<<endl;
 // Find the largest element
    for (int i = 0; i < arrsize; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }
    cout << "The second largest element is: ";
    cout <<secondLargest;


}

