// # include<iostream>
// using namespace std;

// int main()
// {
//     int a ;
//     int b ;
//     cout<<"Enter your number :";
//     cin>>a;
//     cout<<"Enter your second number :";
//     cin>>b;
//     cout<<"the sum is :"<<a+b<<endl;
//     cout<<"the product is :"<<a*b<<endl;
//     cout<<"the power is :"<<a-b<<endl;
//     cout<<"the modulus is :"<<a%b<<endl;

// # include <iostream>
//  using namespace std;
//  int main ()
// {
//     float a = 55.258;
//     float &b  = a;
//     float &c  = b;
//     int d = 50;

//     cout<<"the value of a is : "<<a <<endl<<"and the value of b is : "<<b <<endl<<"The value of c is : "<<a<<endl;
//     return 100;
// }

// # include<iostream>
// using namespace std;
// int main()
// {
//     int i = 0;
//     if(i<3)
//     {
//         cout<<i;
//         i++;
//         return 0;
//     }
// }

// // Writing a table of 6 using do while loop in c++
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     do
//     {
//         cout << "6* " << i << " = " << (6 * i) << endl;
//         i++;
//     } while (i <= 10);
// }




// //Take 10 integers from keyboard using loop and print their average value on the screen.


// # include <iostream>
// using namespace std;
// int main()
// {   int x;
//     float sum = 0;
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         cout<<"Enter your "<<i<<"th number :"<<endl;
//         cin>> x;
//         sum = sum +x;
//     }
//     cout<<"your average is : "<<(sum/10)<<endl;



// }


/*   Take integer inputs from user until he/she presses q ( Ask to press q to quit after every integer input ).
 Print average and product of all numbers.
*/

// # include<iostream>
// using namespace std;
// int main()
// {
//     float sum=0, product=1 ;
//     float x;
//     char choice = 'y' ;
//     while ( choice!= 'q')
//     {   
//         cout<<"Enter your number :"<<endl;
//         cin>>x;
       
//         sum = sum+x;
//         product = product*x;
//         cout<<"press 'q' to exit and see the result, else"<<endl;
//         cin>>choice;

//     }
// cout<<"Your sum is :"<<sum<<endl;
// cout<<"your product is :"<<product<<endl;
// return 0;
// }



// //understanding the concets of pointers
// # include<iostream>
// using namespace std;
// int main()
// {
//     int a =10;
//     int b=20;
     
//     int* p = &a;
//     int* q = &b;
//     cout<<"the address of a is : "<<&a<<endl;
//     cout<<"the address of a is : "<<p<<endl;
//     cout<<"the address of b is : "<<&b<<endl;
//     cout<<"the address of b is : "<<q<<endl;

// }



// // understanding the concept of arrays
// # include <iostream>
// using namespace std;
// int main()
// {
//     int marks[] = {20, 54, 65, 87, 10, 25};
//     int i = 0;
//     while(i<6)
//     {
//         cout<<"the marks of student whose roll is "<< i<<" is "<< marks[i]<<endl;
//         i = i+1;
//     }

// return 0;

// }





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

// }






// //to calculate the factorial value of a integer number

// # include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"enter your number :"<<endl;
//     cin>>num;
//     if (num == 1 || num ==0)
//     cout <<"the factorial value of "<<num<<" is 1"<<endl;
//     else
//     {
//         int i;
//         for (i=1;i<=num;i++)
//         {
//             num = num*i;

//         }
//     cout <<"the factorial value of your number is "<<num<<endl;
//     } 

// }




// // writing a function to add three numbers and understanding the concept the of default arguments

// # include <iostream>
// using namespace std;
// int add( int , int , int=10);//here int = 10 is our default parametre. Although we are assigning it 10, but compiler is treating it as 0
// int a, b ,c;
// int main()
// {

//     cout<<"enter your first number :"<<endl;
//     cin>>a;
//     cout<<"enter your second  number:"<<endl;
//     cin>>b;
//     cout<<"enter your third number :"<<endl;
//     cin>>c;
//     cout<<"the sum is "<<add(a,b,c);

// }
    
// int add(int a,int b,int c)
// {
//     return(a+b+c);
// }


// // hackerrank question , using switch case :

// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);



// int main()
// {
//   int a;
//   cout<<"enter a number"<<endl;
//   cin>>a;
//   if(a>=1&&a<=9)
//   {
//     switch (a)
//     {
//     case 1:
//         cout<<"one"<<endl;
//         break;
//     case 2:
//         cout<<"two"<<endl;
//         break;
//     case 3:
//         cout<<"three"<<endl;
//         break;
//     case 4:
//         cout<<"four"<<endl;
//         break;
//     case 5:
//         cout<<"five"<<endl;
//         break;
//     case 6:
//         cout<<"six"<<endl;
//         break;
//     case 7:
//         cout<<"seven"<<endl;
//         break;
//     case 8:
//         cout<<"eight"<<endl;
//         break;
//     case 9:
//         cout<<"nine"<<endl;
//         break;
//     }

//   }
//   else
//   cout<<"Greater than 9"<<endl;
    
// }


// //finding greatest of four numbers using functions



// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int a,b,c,d;
// int main() 
// {
// cin>>a>>b>>c>>d;
// int num(int a, int b, int c , int d);
// num(a,b,c,d);
// cout<<num<<endl;
// int num(int a, int b, int c , int d);
// {
//     if(a>b && a>c && a>d)
//         return a;
//     else if(b>a && b>c && b>d)
//         return b;
//     else if(c>a && c>b && c>d)
//         return c;
//     else
//         return d;
// }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// void calcSum(int a , int b, int c);
// int main()
// {
//  int a,b,c,t;
//  int i = 0;
//  cin>>t;
//  for(i;i<=t;i++)
//  {
//      calcSum(a,b,c);
//  }
//  return 0;
// }

//  void calcSum(int a , int b, int c)
//  {
//      cin>>a>>b>>c;
//      cout<<(a+b+c);
//  }


// #include <iostream>
// using namespace std;

// int main()
// {
//  int a,b,c,t;
//  int i = 0;
//  cin>>t;
//  int calcSum(int a , int b, int c);
//  calcSum(a, b ,c);
//  int calcSum(int a , int b, int c);
//  {
//     for (i=0;i<=t;i++)
//      {
//         cin>>a>>b>>c;
//         cout<<(a+b+c);
     
//      }
//  }
//  return 0;
// }
 



// #include<iostream>
// using namespace std;
// int greatest(int a, int b, int c, int d){
//     int largest = (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
//     cout<<largest<<endl;
//     return 0;
// }
// int main(){
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     greatest(a,b,c,d);
// }