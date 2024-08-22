#include <iostream>
#include<string>
using namespace std;

int main() 
{
  string str= "Hii";
  
  //Concatenation 
  string greeting = str+ ",It's Atharv";
  cout<<"Concatenation:"<<greeting<<endl;
  
  // Substring
  string part = greeting.substr(4,12); // Extracts "World"
  cout << "Substring: " << part << endl;
  
  // Find
  size_t pos = greeting.find("It's Atharv");
  cout << "Find: 'Atharv' found at position " << pos << endl;
  
  // Replace
  string replaced = greeting;
  replaced.replace(pos, 5, "C++");
  cout << "Replace: " << replaced << endl;
  
  // Insert
  string inserted = greeting;
  inserted.insert(15, " am persuing B.tech");
  cout << "Insert: " << inserted << endl;
  
  // Erase
  string erased = greeting;
  erased.erase(3, 12); // Removes "I am persuing B.tech"
  cout << "Erase: " << erased << endl;
  
  // To uppercase
  string uppercase = greeting;
  for (char &c : uppercase) c = toupper(c);
  cout << "To Uppercase: " << uppercase << endl;

  // To lowercase
  string lowercase = greeting;
  for (char &c : lowercase) c = tolower(c);
  cout << "To Lowercase: " << lowercase << endl;
  
    return 0;
}