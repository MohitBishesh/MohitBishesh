// // // to find out the biggest of three numbers
// # include<iostream>
// # include<climits>
// using namespace std;
// int main()
// {   
//     int max = INT_MIN; 
//     int k;
//     cin>>k;
//     int arr[k];
//     for(int i=0;i<k;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int j=0 ; j<k ; j++)
//     {
//         if(arr[j]>max)
//         {
//             max = arr[j];
//         }
//     }
//     cout<<max;
//     return 0;

// }



//  // multiply two numberes without using * operator
//  # include <iostream>
//  using namespace std;
//  int main()
//  {
//      int a, b;
//      cin>>a;
//      cin>>b;
//      int product = 0;
//      for(int i = 0; i<b ; i++)
//      {
//          product = product + a;
//      }
//      cout<<product;
//      return 0;
//  }


// //obtain the required input and find the area of the following :

// # include <iostream>
// using namespace std;

// int main()
// {
//     cout<<"whose area u want to compute ? press 1 for parallelogram or 2 for rhombus or 
        // 3 for trapezoid or 4 for ellipse ? "<<endl;
//     int a;
//     cin>>a;
//     float p,q;
//     if(a==1)
//     {
//         cout<<"enter p and b : "<<endl;                                                                                                           
//         cin>>p>>q;
//         cout<<"area is "<< p*q<<endl;                                                                                                                                                                                                                                                                                                                                                                         
//     }
//     else if( a == 2)
//     {
//         cout<<"enter side "<<endl;
//         int p;
//         cin>>p;
//         cout<<"area is "<< p*p<<endl;
//     }

//     else if(a==3)
//     {
        
//         cout<<"enter base  and height : "<<endl;
//         cin>>p>>q;
//         cout<<"area is "<< 0.5 *p*q<<endl;                                                                                                                                                                                                                                                                                                                                                                         
//     }
//      else if(a==4)
//     {
         
//         cout<<"enter base  and height : "<<endl;
//         cin>>p>>q;
//         cout<<"area is "<< 0.5 *p*q<<endl;                                                                                                                                                                                                                                                                                                                                                                         
//     }
//      else if(a==5)
//     {
//         cout<<"enter base  and height : "<<endl;
//         cin>>p>>q;
//         cout<<"area is "<< 3.14 *p*q<<endl;                                                                                                                                                                                                                                                                                                                                                                         
//     }
//     else 
//     cout<<"choose a valid option"<<endl;
//     return 0;

// }


// //	Given two numbers. Demonstrate the swapping of the values (i) using a third variable 

//     # include<iostream>
//     using namespace std;
//     int main()
//     {
//         int a , b ,temp;
//         cout<<"enter a and b :"<<endl;
//         cin>>a>>b;
//         temp = a;
//         a= b;
//         b = temp;
//         cout<<"the value of a is "<<a<<" and of b is "<<b<<endl; 
  //          return 0;

//     }



// //	Given two numbers. Demonstrate the swapping  of the values without using a third variable
//     # include<iostream>
//     using namespace std;
//     int main()
//     {
//         int a , b ;
//         cout<<"enter a and b :"<<endl;
//         cin>>a>>b;                  
//          a = a*b;
//          b = a/b;
//          a = a/b;                                    
//         cout<<"the value of a is "<<a<<" and of b is "<<b<<endl;
//         return 0;         
//     }


// //convert temperature from celsius to farehnite and kilvin

// # include<iostream>
// using namespace std;
// int main()
// {
//   int t, h;
//   cout<<"enter 1 for celsius, 2 for farehnite and 3 for kelvin"<<endl;
//   cin>>t;
//   cout<<"enter temperature"<<endl;
//   cin>>h;
//   if(t==1)
//   {
//     cout<<" temp in farehnite is "<<(9/5)*(h)+32<<endl; 
//     cout<<" temp in kelvin is "<< h +273<<endl; 
     
//   }
//   else if(t==2)
//   {
//     cout<<" temp in celsius is "<<(h-32)*5/9<<endl; 
//     cout<<" temp in kelvin is "<<((h-32)*5/9)+273<<endl  ; 
     
//   }
//   else if(t==3)
//   {
//     cout<<" temp in celsius is "<< (h-273)<<endl; 
//     cout<<" temp in kelvin is "<< (h-273)*9/5 +32<<endl ; 
     
//   }
//   else
//     cout<<"choose a valid option !"<<endl;
//   return 0;
// }



// // prnt given no of days in year manth and day  format
// # include<iostream>
// using namespace std;
// int main()
// {
//   int a ; 
//   cin>>a;
//   int y= a/365;
//   int m =  (a-365*y)/30;
//   int w =  (a-y*365-m*30)/7;
//   int d =  (a-y*365-m*30 - w*7);
//   cout<<"no of years is : "<<y<<endl<<" no of months is : "<<m<<endl<<" no of weeks is :" <<w<<endl<< " no of days is :"<<d<< endl;
//   return 0 ;
 
// }


// // to check whether a given year is leap year or not ??
// # include<iostream>
// using namespace std;
// int main()
// {
//   int year;
//   cin>>year;
//   if(year%4==0)
//   {
//     if(year%100==0)
//     {
//       if(year%400==0)
//       {
//          cout<<"yes a leap year :"<<endl;
//       }
//       else
//       {
//          cout<<"not a leap year :"<<endl;
//       }
//     }
//     else
//     {
//        cout<<"yes a leap year :"<<endl;
//     }
//   } 
//   else
//   {
//      cout<<"not a leap year :"<<endl;
//   }
//   return 0;

//   }
  




// // to check whether a given character is a consonant or vowel using swithch case 
// # include<iostream>
// using namespace std;
// int main()
// {
//   char ch;
//   cin>>ch;
//   if((ch>='a' && ch<='z')||(ch>= 'A' && ch<='Z'))
//   {
//     switch(ch)
//     {
//       case 'A':
//         case 'E':
//           case 'I':
//             case 'O':
//               case 'U':
//                 case 'a':
//                   case 'e':
//                     case 'i':
//                       case 'o':
//                         case 'u':
//       cout<<ch<<" is a VOWEL !"<<endl;
//       break;
//       default :
//         cout<<ch<<" is a CONSONANT!"<<endl;

//     }

//   }
//   else
//   {
//     cout<<ch<<" is not an alphabet !"<<endl;
//   }
// }





// // to check whether a given character is a consonant or vowel using swithch case 
// # include<iostream>
// using namespace std;
// int main()
// {
//   char ch;
//   cin>>ch;
//   if((ch>='a' && ch<='z')||(ch>= 'A' && ch<='Z'))
//   {
//     switch(ch)
//     {
//       case 'A':
//         case 'E':
//           case 'I':
//             case 'O':
//               case 'U':
//                 case 'a':
//                   case 'e':
//                     case 'i':
//                       case 'o':
//                         case 'u':
//       cout<<ch<<" is a VOWEL !"<<endl;
//       break;
//       default :
//       cout<<ch<<" is a CONSONANT!"<<endl;

//     }
//   }
//   else if(ch>= 48 && ch<=57)
//   {
//      cout<<ch<<" is a NUMBER !"<<endl;
//   }
//   else
//   {
//      cout<<ch<<" is a SPECIAL CHARACTER !"<<endl;
//   }

// }




//to check whether a number is armstrong number or not
# include<iostream>
# include<math.h>
using namespace std;

int main()
{
  int n;
  long long int sum = 0;
  cin>>n;
  int cpn = n;
  while(n>0)
  {
    int last_digit;
    last_digit= n%10;
    sum = sum + (last_digit*last_digit*last_digit);
    n = n/10;
  }
  if(sum == cpn)
  {
    cout<<cpn<<" is an armstrong number !"<<endl;
  }
  else
  {
    cout<<cpn<<" is not an armstrong number !"<<endl;
  }
  return 0;
}
  








