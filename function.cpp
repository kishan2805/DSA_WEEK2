#include<iostream>
using namespace std;
// void printline();     /*function defination */

// // add  3 numbers 
// int add1(int a,int b ,int c)
// {
//     return (a+b+c);
// }

// find maximum of ftwo no
// void maximum(int a,int b,int c)
// {
//     if (a>b)
//     {
//         if(a>c)
//         {
//             cout<<"the maximum of the three is "<<a;
//         }
//         else
//         {
//             cout<<"the maximum of the three is "<<c;
//         }
//     }
//     else if (b>a)
//     {
//         if (b>c)
//         {
//             cout<<"the maximum of the three is "<<b;
//         }
//         else{
//             cout<<"the maximum of the three is "<<c;
//         }
//     }
// }

// find all digits of a no.
// void digits(int b )
// {
//     int rem;
//     int small;
//     bool alpha=true;
//     bool beta=true;
//     int a=0;
    

//     while (beta)   /*to reverse the no. so, that we get the digits in right order */
//         {
            
//             a=a*10+(b%10);
            
//             if (b/10==0)
//             {
//                 beta=false;
//             }
//             b=b/10;
//         }
//     while (alpha)
//     {
        

//         rem = a%10;
//         small=a/10;
//         cout<<rem<<endl;
//         if (small==0)
//         {
//             alpha=false;
//         }
//         a=small;
//     }
// }


// // to combine digits to form a multidigit no.
// void numbers(int a)
// {
//     int b;
//     int num=0;
//     for (int i=0;i<a;i++)
//     {
//         cout<<"enter the digits ";
//         cin>>b;
//         cout<<endl;

//         num=num*10+b;

//     }
//     cout<<"the number formed is  -> "<<num;

// }

//set kth bit
// void set1(int a,int num)
// {
//     int mask;
//     mask=1<<a;

//     cout<<(num | mask);
// }

// count total set bits 
// void count (int num)
// {
//     bool alpha =true;
//     int bits=0;
//     int rem,que,count1=0;
//     while (alpha)
//     {
//         rem = num%2;
//         que =num/2;
//         if (rem==1)
//         {
//             count1++;
//         }
//         bits=bits*10+rem;
//         if (que==0)
//         {
//             alpha=false;
//         }
//         num=que;
//     }
//     cout<<bits<<endl;
//     cout<<count1;

// }

// check odd even using bitwise operator 
// void check(int num)
// {
//     if ((num&1)==0)
//     {
//         cout<<"the num is even ";
//     }
//     else
//         cout<<"the number is odd ";
    
// }



int main()
{
    // printline();       /*function call */

    // int d=add1(3,5,7);
    // cout<<"the sum of three no. is   "<<d<< endl;

    // maximum(50,9,200);
    // digits(1234567);

    // int n ;
    // cout<<"enter the length of the no.   -> ";
    // cin>>n;
    // numbers(n);

    // int num ,k;
    // cout<<"enter the num to be set and value of k "<<endl;
    // cin>>num;
    // cin>>k;
    // set1(k,num);

    // int num=340;
    // count(num); 
    
    // check(50);

    // return 0;
}



// void printline()     /*function defination */
// {
//     for (int i =0;i<5;i++)
//     {
//         cout<<"the world is here where are you  ??? "<<endl;
//     }
// }