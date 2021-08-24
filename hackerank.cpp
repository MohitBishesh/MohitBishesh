// // Input Format
// // The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.
// // Output Format
// // Print the  integers of the array in the reverse order, space-separated on a single line.
// # include <iostream>
// using namespace std;
// int main()
// {    
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int j=0;j<n;j++)
//     {
//         cout<<arr[n-j-1];
//         cout<<" ";
//     }
//     return 0;
// }


// #include <map>
// #include <set>
// #include <list>
// #include <cmath>
// #include <ctime>
// #include <deque>
// #include <queue>
// #include <stack>
// #include <string>
// #include <bitset>
// #include <cstdio>
// #include <limits>
// #include <vector>
// #include <climits>
// #include <cstring>
// #include <cstdlib>
// #include <fstream>
// #include <numeric>
// #include <sstream>
// #include <iostream>
// #include <algorithm>
// #include <unordered_map>

// using namespace std;
// int main() {
//     int a, b;
//     cin>>a>>b;
//     for(int i=a; i<=b;i++)
//     {
//         if(i>=1&& i<=9)
//         {
//             switch(i)
//             {
//                 case 1 : cout<<"one"<<endl;
//                 break;
//                 case 2 : cout<<"two"<<endl;
//                 break;
//                 case 3 : cout<<"three"<<endl;
//                 break;
//                 case 4 : cout<<"four"<<endl;
//                 break;
//                 case 5 : cout<<"five"<<endl;
//                 break;
//                 case 6 : cout<<"six"<<endl;
//                 break;
//                 case 7 : cout<<"seven"<<endl;
//                 break;
//                 case 8 : cout<<"eight"<<endl;
//                 break;
//                 case 9 : cout<<"nine"<<endl;
//                 break;
//             }
//         }
//         else if(i>9)
//         {
//             if(i%2==0)
//             cout<<"even"<<endl;
//             else
//             cout<<"odd"<<endl;
//         }
//     }
//     return 0;
// }



// //  Write a program to print the address of a variable whose value is input from user.
// # include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter a :"<<endl;
//     cin>>a;
//     cout<< &a <<endl;
//     cout<< &a+1 <<endl;
//     cout<< &a+2 <<endl;
//     cout<< &a+3 <<endl;
//     cout<< &a+4 <<endl;
    
//     return 0;
// }



// // Write a program to print the address of the pointer to a variable whose value is input from user.
// # include<iostream>
// using namespace std;
// int main()
// {
//     int a;

//     cin>>a;
//     int *p = &a;
//     int *q = &*p;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<q<<endl;
//     cout<<*q<<endl;
// }


// // Write a program to print a number which is entered from keyboard using pointer.
// # include<iostream>
// using namespace std;
// int main()(
// {
//     int a;
//     cin>>a;
//     int *p = &a;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     return 0;
// }




// // Write a function which will take pointer and display the number on screen. 
// // Take number from user and print it on screen using that function.

// # include <iostream>
// using namespace std;
// int disp_num(int* p);
// int main()
// {
//     int a;
//     cin>>a;
//     int b = disp_num(&a);
//     cout<<b;
//     return 0;
// }
// int disp_num(int* p)
// {
//     return *p;
// }


// // Write a program to find out the greatest and the smallest among three numbers using pointers.
// # include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     int *p,*q,*r;
//     p=&a;
//     q=&b;
//     r=&c;

//     if(*p>=*q and *p>=*r)
//         cout<<*p<<" is greater "<<endl;
//     else if(*q>*p and *q>=*r)
//         cout<<*q<<" is greater "<<endl;
//     else if(*r>*p and *r>*q)
//         cout<<*r<<" is greater "<<endl;
        
// }





// // Write a program to reverse the digits a number using pointers.
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int rev = 0;
//     int *p = &n;
//     while(*p !=0)
//     {
//         int last = *p%10;
//         rev = rev * 10 + last;
//         *p =*p/10;
//     }
//     cout<<rev;

// }



// // Write a program to find the factorial of a number using pointers.
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int fact = 1;
//     int *p = &n;
//     if(*p ==1 or *p==0)
//         cout<<"1"<<endl;
//     else
//     {
//         while(*p !=0)
//             {
//                 fact = fact * (*p);
//                 (*p)--;
//             }
//             cout<<fact;
//     }
    
// }



// // Print the multiplication table of 15 using recursion.
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int multi(int n);
// }
// int multi(int n)
// {
    
// }


// Online C++ compiler to run C++ program online
// Define a function to print the prime factors of a number.
// #include <iostream>
// using namespace std;
// void fact(int n);
// int main() 
// {
//     int n;
//     cin>>n;
//     void fact(int n);
//     return 0;
// }
// void fact(int n)
// {
//     int k =1;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             for(int j=2;j<i;j++)
//             {
//                 if(i%j==0)
//                 {
//                     k++;
//                 }
                
//             }
//             if(k!=1)
//             {
//                 cout<<i<<endl;
//             }
//         }
//     }
// }


// //write a program to print primt factor of a number 
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter your number :"<<endl;
//     cin>>n;
//     for(int i=2; i<n;i++)
//     {
//         if (n%i==0)
//         {
            
//             for(int j=2;j<i;j++)
//             {
//                 if((i%j)!=0)
//                 { 
//                      cout<<i<< " , "<< j<<endl;
//                 }  
//             }
           
                    
//         }
//     }
//     return 0;
// }





// # include<iostream>

// using namespace std;

// int main(){
//     int n, i, j;
//     cin >> n;

//     for(i = 1; i < n; i++){
//         if (n % i == 0){
//             int count = 0;
//             for(j = 2; j <= i; j++){
//                 if(i % j == 0){
//                     count++;
//                 }  
//             }

//             if(count == 2){
//                 cout << i  << endl;
//             }            
//         }
//     } 

//     return 0;
// }


 //Define a function to calculate power of a number raised to other i.e. ab using recursion where the numbers 'a' and 'b' are to be entered by the user
 # include<iostream>
 # include <cmath>
 using namespace std;
 long int fpower(int a, int b);
 int main ()
 {
     int a, b;
     cout<<"enter number"<<endl;
     cin>>a;
     cout<<"enter power"<<endl;
     cin>>b;
     long int c = fpower( a, b);
     cout<<"the value is "<<c;
     
 }
 long int fpower(int a, int b)
 {
     return pow(a,b);
 }
