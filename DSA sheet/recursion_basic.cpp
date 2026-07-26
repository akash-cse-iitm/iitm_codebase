// tuf: from striver's DSA sheet ~ (1F) : Learn the basic Recursion problems (9 problems)
// 24/07/2026 & 26/07/2026

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


// ***** 26/07/2026 *****


// Factorial of a given number
unsigned long long fact(int n)
{
    if(n==1)
     return 1;

    return n*fact(n-1);
}


// Reverse an array
void reverseArray(int arr[], int left, int right)
{

   if(left >= right)
    return;

    swap(arr[left], arr[right]);
    reverseArray(arr, left+1, right-1);
}

// Check if String is Palindrome or Not
bool isPalindrome(string str, int left, int right)
{
    if(left <= right)
     return true;
    if(str[left] != str[right])
     return false;

    return isPalindrome(str, left+1, right-1);
}


// Fibonacci Number
int fib(int n)
{
    if(n==0)
     return 0;
    if(n==1)
     return 1;

    return  fib(n-1) +fib(n-2);
}

int main() {
    // printName("Hanuman", 5);
    // cout<<sumOfN(5);
    // cout<<"5! = "<<fact(5)<<endl;

    // int arr[] = {1, 2, 3, 4, 5};

    // reverseArray(arr, 0, 4);
    // for(int i=0; i<5; i++)
    //  cout<<arr[i]<<" ";

    string s = "madam";
    cout<<"Palindrome or Not: "<<isPalindrome(s, 0, s.length()-1)<<endl;

    // cout<<"Fibonacci of 8 is "<<fib(8)<<endl;


    cout<<endl;

    // cout<<"6! = "<<fact(5)<<endl;


    
    return 0;
}


// 26/07/2026: solved 9 basic recursion problems
