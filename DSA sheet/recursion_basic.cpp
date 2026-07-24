// tuf: from striver's DSA sheet ~ (1F) : Learn the basic Recursion problems (9 problems)
// 24/07/2026

#include<bits/stdc++.h>
using namespace std;

//1. Understand recursion by print something N times
void printN(int n) {
    if(n==0)
     return;

    cout<<"\n Hello "<<n;
    return printN(n-1);
}

// Print name N times using recursion
void printName(string name, int n)
{
  if( n==0)
   return;

  cout<<name<<" "<<n<<endl;

  printName(name, n-1);
}

// Print 1 to N using Recursion
void print1toN(int n)
{
    if(n==0)
     return;

    print1toN(n-1);
    cout<<n<<" ";
}

// Print N to 1 using Recursion
void printNto1(int n)
{
    if(n==0)
     return;
    
    cout<<n<<" ";
    printNto1(n-1);
    
}
// Sum of First N Numbers
int sumOfN(int n)
{
    if(n==0)
     return 0;

    return n + sumOfN(n-1);
}

// Factorial of a given number
unsigned long fact(int n)
{
    if(n==1)
     return 1;

    return n * fact(n-1);
}


// Reverse an array

// Check if String is Palindrome or Not

// Fibonacci Number

int main() {
    // printName("Hanuman", 5);
    // cout<<sumOfN(5);
    cout<<"5! = "<<fact(5);
    
    return 0;
}
