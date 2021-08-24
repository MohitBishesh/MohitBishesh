// // program to swap two numbers using call by reference using pointer variable
// // call by value will not work for this type of program

// # include<iostream>
// using namespace std;
// void swap(int* n1 , int* n2);
// int main ()
// {
//     int n1,n2;
//     cin>>n1>>n2;
//     cout<<"the value of n1 and n2 before swapping is "<<n1<<" & "<<n2<<endl;
//     swap(&n1, &n2);
//     cout<<"the value of n1 and n2 after swapping is "<<n1<<" & "<<n2<<endl;
// }
//  void swap(int* n1, int* n2)
// {  
//     int temp = *n1;
//     *n1 = *n2;
//     *n2 = temp;
// }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <math.h>
// using namespace std;

// void update(int* a , int* b);
// int main() {
//     int a;
//     int b;
//     cout<<"Enter your first number :"<<endl;
//     cin>>a;
//     cout<<"Enter your second number :"<<endl;
//     cin>>b;
//     update( &a , &b );
      
//     return 0;
// }
// void update(int* a , int* b)
// {
//     int sum;
//     int diff;
//     sum = (*a + *b);
//     cout<<sum<<endl;
//     diff = abs(*a - *b);
//     cout<<diff<<endl;
    
// }



// // // program to swap two numbers using call by reference using reference variable
// //error in this code

// # include<iostream>
// using namespace std;
// void swap(int n1 , int n2);
// int main ()
// {
//     int n1,n2;
//     cin>>n1>>n2;
//     cout<<"the value of n1 and n2 before swapping is "<<n1<<" & "<<n2<<endl;
//     swap(n1 , n2);
//     cout<<"the value of n1 and n2 after swapping is "<<n1<<" & "<<n2<<endl;
// }
//  void swap(int &x, int &y)
// {  
//     int temp =x;
//     x = y;
//    y = temp;
// }

# include <iostream>
using namespace std;
void fun(int n);
int main()
{
    int n;
    cout<<"enter your number :"<<endl;
    cin>>n;
    void fun(int n);
    return 0;

}
void fun(int n)
{
    for(int i =2;i<n;i++)
    {
        if(n%i==0)
        {
            for(int j=2;j<i;j++)
            {
                if(i%j==0);
                else
                {
                    cout<<i<<endl;
                }
            }
        }
    }
    

}

































































// // 2.	Function main() gets two numbers from the user and calls three functions in the given order:
// // a.	“int triangle_area(int base, int height)” returns the area of the right-angled triangle to main().
// // b.	“void swap(int *, int*)” swaps the two numbers using bitwise operator and displays them.
// // c.	“float* remainder (int a, int b)” returns the remainder of a/b to main().

// # include<iostream>
// using namespace std;
// int n1 , n2;
// int triangle_area(int base, int height);
// void swap(int *, int*);
// int main()
// {
//     cout<<"enter two numbers ! :"<<endl;
//     cin>>n1>>n2;
//     int area= triangle_area(n1,n2);
//     cout<<"Area of triangle is "<<area<<endl;
//     void swap(int *, int*);


// }
// int triangle_area(int n1, int n2)
// {
//     return(0.5*n1*n2);
// }