#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


 void is_palindrome(string word)
 {

   string w = word; //making a variable of the word but in reverse (variable "w")
   reverse(w.begin(), w.end()); //reverses the string word
   if (word == w) //if statement comparing the reversed string with the non reversed string
   {
    cout << word << " is a palindrome";
   }
   else
   {
    cout << word << " is not a palindrome";
   }

 }

int main() 
{    
  string word; //create a word variable to store the word 
  cout << "Enter a word: "; //have the user enter the word
  getline(cin, word); //stores the entire word compared to a single character if you just used << cin
  is_palindrome(word); //calls the function by passing in the user input (word)
  return 0;
}

