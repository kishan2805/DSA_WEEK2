#include<iostream>
using namespace std;

int main()
{
    // int row,col;
    // int num=7;
    // int n=num/2+1;
    // for(row=0;row<num;row++)
    // {
    //     if (row<n)
    //     {
    //         for (col=0;col<2*row+1;col++)
    //         {
    //             if(col%2==0)
    //             {
    //                 cout<<row+1<<" ";
    //             }
    //             else{
    //                 cout<<"* ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //     else
    //     {
    //         for (col=0;col<2*num-2*row-1;col++)
    //         {
    //             if(col%2==0)
    //             {
    //                 cout<<num-row;
    //             }
    //             else{
    //                 cout<<"* ";
    //             }
    //         }
    //         cout<<endl;   
    //     }
    // }

    // int n=5;
    // for (int row=0;row<n;row++)
    // {
    //     if (row==0)
    //     {
    //         cout<<"1 ";
    //         cout<<endl;
    //     }
        
    //     else if (row==n-1)
    //     {
    //         for(int col=0;col<n;col++)
    //         {
    //             cout<<col+1<<" ";
    //         }
    //     }
    //     else
    //     {
    //         for(int col=0;col<n/2+row;col++)
    //         {
    //             if (col==0)
    //             {
    //                 cout<<"1 ";
    //             }
    //             else if (col==n/2+row-1)
    //             {
    //                 cout<<row+1<<" ";
    //             }
    //             else{
    //                 cout<<"_ ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    // }

    // int n=12;
    // char ch=n+'A'-n+1;
    // cout<<ch;


    // floyd's triangle
    // int x=1;
    // int n=5;
    // for (int row=0;row<n;row++)
    // {
    //     for (int col=0;col<=row;col++)
    //     {
    //         cout<<x<<" ";
    //         x++;
    //     }
    //     cout<<endl;
    // }


    // // butterfly pattern
    // int n=8;
    // int num;
    // for(int row =0;row<n;row++)
    // {
    //     if (row<n/2)
    //     {
    //         for (int col=0;col<n;col++)
    //         {
    //             if (col<=row)
    //             {
    //                 cout<<"* ";
    //             }
    //             else if (col<n-row-1)
    //             {
    //                 cout<<"_ ";
    //             }
    //             else{
    //                 cout<<"* ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //     else
    //     {
    //         num=row-n/2;
    //         for (int col=0;col<n;col++)
    //         {
    //             if (col<n/2-num)
    //             {
    //                 cout<<"* ";
    //             }
    //             else if (col<n/2+num)
    //             {
    //                 cout<<"_ ";
    //             }
    //             else{
    //                 cout<<"* ";
    //             }
    //         }
    //         cout<<endl;
    //     }

    // }


    // full numeric pyramid 
    // int n=5;
    // for (int i =0;i<n;i++)
    // {
    //     int x=0;
    //     for (int j=0;j<n+i;j++)
    //     {
    //         // for space 
    //         if (j<n-i-1)
    //         {
    //             cout<<"_ ";
    //         }
    //         // for ascending no. series 

    //         if(j>=n-i-1 && j<n)
    //         {
    //             cout<<x+1<<" ";
    //             x++;
    //         }

    //         if (j>=n)
    //         {
    //             cout<<x-1<<" ";
    //             x--;
    //         }
    //     }
    //     cout<<endl;
    // }


    // fancy pattern 2 
    // int n=8;
    // int x=1;
    // int r2;
    // int start;
    // for (int i =0;i<n;i++)
    // {
    //     if (i<n/2)
    //     {
    //         for (int j=0;j<2*i+1;j++)
    //         {
    //             if (j%2==0)
    //             {
    //                 cout <<x<<" ";
    //                 x++;
    //             }
    //             else
    //             {
    //                 cout<<"* ";
    //             }   
    //         }
    //         cout<<endl;
    //     }
    //     else
        
    //     {
            
    //         r2=i-n/2;
    //         start=x-n/2+r2;
    //         for(int k=n-2-r2*2;k>=0;k--)      //used revese loop structure (just to try)
    //         {
    //             if (k%2==0)
    //             {
    //                 cout<< start<<" ";
    //                 start++;
    //                 x--;
    //             }
    //             else{
    //                 cout<<"* ";
    //             }
    //         }
    //         cout<<endl;
    //     }
        
    // }


    // pascal triangle pattern 
    // int n=7;
    // int c;
    // for (int i = 1;i<=n ;i++)
    // {
    //     c=1;
    //     for (int j=1;j<=i;j++)
    //     {
    //         cout <<c<<" ";
    //         c=c*(i-j)/j;
    //     }
    //     cout<<endl;
    // }


}
