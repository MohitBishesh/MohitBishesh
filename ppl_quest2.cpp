// //program to print all armstrong numbers between 1 to n
// # include<iostream>
// # include<math.h>
// using namespace std;
// int main()
// {
//     long long int n;
//     int digit;
//     cin>>n;
//     long long int k;
//     for(long long int i=1;i<=n;i++)
//     {
//         long long int sum = 0;
//         k=i;   
//         while(k>0)
//         {
//             digit = k%10;
//             sum = sum + (digit*digit*digit);
//             k =k/10;
//         }
//         if(sum == i)
//         {
//             cout<<i<<endl;
//         }
    
//     }
//     return 0;
// }

 

// //to check whether a given no is pallindrome or not ??

// #include <iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int cpn= n;
//     int rev =0;
//     int digit;
//     while(n!=0)
//     {
//         digit= n%10;
//         rev = rev*10 +digit;
//         n = n/10;
//     }
//     if ( rev == cpn )
//     {
//         cout<<" Yes "<<cpn<<" is a pallindrome !"<<endl;
//     }
//     else
//     {
//         cout<<"No "<<cpn<<" is not a pallindrome !"<<endl;
//     }
//     return 0;
// }
 

//  // multiply without using multi operator
//  # include <iostream>
//  using namespace std;
//  int main()
//  {
//      int a, b;
//      cin>>a>>b;
//      int product = 0;
//      for(int i=1 ; i<=b; i++)
//      {
//          product = product +a;
//      }
//      cout<<product;
//     return 0;
//  }


// //find the sum of digits of a number using while loop
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0 , digit;
//     while(n!=0)
//     {
//         digit = n%10;
//         sum= sum +digit;
//         n = n/10;
//     }
//     cout<<sum;

// }

//  // for any value of n , find the value of 1 + 1/2 + 1/3 + 1/4 ...........1/n
//  # include<iostream>
//  # include<math.h>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cin>>n;
//      double sum = 1.0;
//      for(int i=2; i<=n; i++)
//      {
//          sum = sum + ((double)1/(double)i);
//      }
//      cout<<sum;
//      return 0;
//  }



// // pattern printing using nested for loop
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i =1;i<=n; i++)
//     {
//         for(int j=1; j<=n;j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


// // pattern printing using nested for loop
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i =1;i<=n; i++)
//     {
//         for(int j=1; j<=n;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }




// // pattern printing using nested for loop
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i =1;i<=n; i++)
//     {
//         for(int j=1; j<=i;j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }



// // pattern printing using nested for loop
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i =1;i<=n; i++)
//     {
//         for(int j=1; j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// // pattern printing using nested for loop
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n; i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j<=(i+4) && j>=(6-i))
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// //to generate first n terms of an fibbonacci series using for loop
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a = 0;
//     int b = 1;
//     int sum;
//     for(int i=1; i<n; i++)
//     {
//          cout<<a<<" ";
//          //cout<<b<<" ";
//          sum = a+b;
//          a = b;
//          b = sum;
//     }
//     return 0;
// }



// // //to generate first n terms of an fibbonacci series using recursion
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int fibb(int n);
//     int s = fibb(n);
//     cout<<s<<endl;
//     return 0;
// }
// int fibb(int n)
//     {
//         if(n==1)
//             return 0;
//         else if(n==2)
//             return 1;
//         else
//         {
//            return fibb(n-2) + fibb(n-1);
//         }
//     }


// // from first n natural numbers print numbers divisible by 3 and 5
// # include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;
//     for(int i=0; i<=n;i++)
//     {
//         if(i%3==0)
//             cout<<i<<" is divisible by 3"<<endl;
//         if(i%5==0)
//             cout<<i<<" is divisible by 5"<<endl;
//         if(i%5==0 && i%3==0)
//             cout<<i<<" is divisible by 3 and 5 both"<<endl;
        

//     }
//     return 0;
// }



// 1.	Function main() gets a number and calls the following three functions
// a.	“void armstrong(int)”checks if the given number is a Armstrong number or not.
// b.	“void coprime(int) reverses the given number and checks if the given number and reversed number are coprime.
// c.	“intfactorial(int) computes the factorial of the given number using recursion and returns to main().
# include<iostream>
using namespace std;
void armstrong(int k1);
void coprime(int k2);
int factorial(int k3);
int n;
int k1, k2,k3;
int main()
{
    
    cout<<"Press 1 for armstrong , 2 for coprime and 3 for factorial"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"enter your number !"<<endl;
        cin>>k1;
        void armstrong(int k1);
    }
    else if(n==2)
    {
        cout<<"enter your number"<<endl;
        cin>>k2;
        void coprime(int k2);

        
    }
    else if(n==3)
    {
        cout<<"enter your number to calculate factorial :"<<endl;
        cin>>k3;
        int factorial(int k3);
        cout<<factorial<<endl;
    }
    else
    {
       cout<<"choose a valid option !"<<endl;
    }
    return 0;
}

void armstrong(int k1)
{
    int sum =0;
    
    int cpk1=k1;
    while(k1 !=0)
    {
        int digit = k1%10;
        int sum = sum + (digit*digit*digit);
        k1 = k1/10;
    }
    if (cpk1==sum)
    {
        cout<<"Yes! "<<cpk1<<" is an armstrong number !"<<endl;
    }
   else
    {
        cout<<"No! "<<cpk1<<" is not an armstrong number !"<<endl;
    }
}
void coprime(int k2)
{
    int cpk2=k2;
    int rev =0;
    while(k2!= 0)
    {
        int last_digit = k2%10;
       
        rev = rev *10 + last_digit;
        k2=k2/10;
    }
    for(int i=2;i<=cpk2;i++)
    {
        if(cpk2%i==0 and rev%i==0)
        {
            cout<<"No ! They are not coprimes ! "<<endl;
        }
        else
        {
            cout<<"Yes ! They are  coprimes ! "<<endl;
        }
    }

}
int factorial(int)
{
    if(k3=0)
    {
        return 1;
    }
    else if(k3=1)
    {
        return 1;
    }
    else
    {
        return k3 *factorial(k3-1);
    }
}