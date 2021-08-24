// to calculate maximum of t nos.

// #include <iostream>
// # include<climits>
// using namespace std;
//  int main()
//  {
//     int t,i;
//     int max = INT_MIN;
//     cin>>t;
//     int arr[t];
//     for(i=0; i<t;i++ )
//     {
//        cin>>arr[i];
//     }
//     for(i=0;i<t;i++)
//     {
//        if (arr[i]>max)
//          max = arr[i];
//     }

//     cout<<max;

//     return 0;
//  }



// //Define a function that returns the product of two numbers entered by user.


// # include<iostream>
// using namespace std;
// int product(int a , int b);
// int main()
// {
//     int a ;
//     int b;
//     cout<<"enter your first number :"<<endl;
//     cin>>a;
//     cout<<"enter your second number :"<<endl;
//     cin>>b;
//     product(a,b);
//     cout<<product(a,b);
// }
// int product(int a , int b)
// {
    
//     return ( a*b);
// }


// // Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.

// # include<iostream>
// using namespace std;
// float circum(float r);
// float area(float r);
// int main()
// {
//     float r;
//     cout<<"enter the radius of your circle"<<endl;
//     cin>>r;
//     circum (r);
//     cout<<"the circumference is :"<<circum(r)<<endl;
//     area(r);
//     cout<<"the area is :"<<area(r)<<endl;

// }
// float circum(float r)
// {
//     return (2*3.14*r);
// }
// float area (float r)
// {
//     return (3.14 *r*r);
// }

    


// //write a program to calculate the minimum and maximum of numbers entered by the user

// # include<iostream>
// # include<climits>
// using namespace std;
// int t;
// float max (int t);
// float min(int t);
// int i;
// float arr[];
// int highest = INT_MIN;
// int least = INT_MAX;
// int main ()
// {
//     cout<<"enter no of elements you want to compare :"<<endl;
//     cin>>t;
//     for (i=0; i<t; i++)
//     {
//         cin>>arr[i];
//     }
//     float x = max(t);
//     cout<<"the greatest no is : "<<x<<endl;
//     float y = min(t);
//     cout<<"the least value is : "<<y<<endl;
// }
// float max(int t)
// {
//     for (i=0; i<t;i++)
//     {
//         if(arr[i]>highest)
//             highest = arr[i];
//     }
//     return highest;
// }
// float min(int t)
// {
//     for(i=0;i<t;i++)
//     {
//         if(arr[i]<least)
//             least = arr[i];
//     }
//     return least;
// }


// // function to find out whether a given no is even or odd
// # include<iostream>
// using namespace std;
// int n;
// void eo(int);
// int main()
// {
    
//     cout<<"enter your no. :"<<endl;
//     cin>>n;
//     eo(n);
// }
// void eo(int n)
// {
//     if (n%2==0)
//         cout<<n<<" is even"<<endl;
//     else
//         cout<<n<<" is odd"<<endl; 
// }




// // write a program to calculate the factorial of a no. entered by the user using function
// # include <iostream>
// using namespace std;

// int n, i =1;
// long long int fact(int n);
// int main()
// {
    
    
//     cout<<"enter your no. :"<<endl;
    
//     cin>>n;
//     long long int x =  fact(n);
//     cout<<"the fact value is : "<<x<<endl;
// }
//     long long int fact(int n)
//     {
//         long long int product =1;
//         while(n>=i)
//         {
//             product = product*n;
//             n--; 
//         }
//         return product;
//     }


// // writing a cpp program to calculate the factorial 

// # include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     long long int fact = 1;
//     cout<<"enter your number :"<<endl;
//     cin>>num;
//     if (num == 0 || num ==1)
//         cout<<"the factorial value of "<<num<<" is 1"<<endl;
//     else
//     {
//         for(num; num>=1; num--)
//         {
//             fact = fact * num;
//         }

//     cout<<"the factorial value of "<<&num<<"is "<<fact;
//     return 0;

//     }



// # include <iostream>
// using namespace std;
// int getSum(int t);

// int main ()
// {
//     int t;
//     cin>>t;
//     int arr[t];
//     for (int i=0;i<t; i++)
//     {
//         cin>>arr[t];
//     }
//     // int s = getSum (int t);
// }
// int getSum (int arr[],int t )
// {
//     int sum = 0;
//     for(int i=0; i<t; i++)
//     {
//         sum = sum + arr[i];
        
//     }
//     return sum;
// }



//Given an array A[] of N integers and an index Key. Your task is to print the element present at index key in the array.

// # include <iostream>
// using namespace std;
// int findElementAtIndex(int arr[] , int t, int n);
// int i;
// int main()
// {
//     int t;
//     cin>>t;
//     int arr[t];
//     for(i=0; i<t ;i++)
//     {
//         cin>>arr[i];
//     }
//     int n;
//     cin>>n;
//     int E = findElementAtIndex(arr[t], t , n);
//     cout<<E;
//     return 0;

// }
// int findElementAtIndex(int arr[], int t,int n)
// {
//     return arr[n];
// }


// // finding the element of fibbonacci series using recursion 

// # include <iostream>
// using namespace std;
// int fibb(int n);
// int a;
// int main()
// {
//     int b;
//     cout<<"enter position :"<<endl;
//     cin>>a;
//     b = fibb(a);
//     cout<<"the value at " << a<<" is : " <<b<<endl;
//     return 0;

// }
// int fibb(int n)
// {
//     if(n<2)
//         return 1;
//     else
//         return fibb(n-2) + fibb(n-1);
// }



// using recursion to find out the factorial of a number 
# include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int a;
    cout<<"enter your number to find out factorial :"<<endl;
    cin>>a;
    int k= fact(a);
    cout<<"the factorial of " <<a<<" is "<<k;
 
}
int fact(int n)
{
    if (n<2)
        return 1;
    else
        return n * fact(n-1);
}
















