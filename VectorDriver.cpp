/* Modified 10/15/18
   Cameron Ferrarini

   Desc: Tests implementation of vector operations from VectorDriver.h
*/

#include "stdafx.h"
using namespace std;
#include <algorithm>

#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;  //creative use of . and :
  system("pause");

  // Test add_numbers function
  vector<short> rand_vector(10);

  cout << endl;
  cout << "empty vector: ";
  print(rand_vector);
  cout << endl;

  add_numbers(rand_vector);  
  //add_numbers(rand_vector); //This overwrote the previous random values

  cout << "filled random vector: ";
  print(rand_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(rand_vector) << endl << endl;

  // Test print_even function
  cout << "Even values of first vector: ";
  print_even(sample_vector);
  cout << endl;
  cout << "Even values of random vector: ";
  print_even(rand_vector);
  cout << endl << endl;

  //Test is_present function
  short i = 79;  //Test known value
  bool present = is_present(rand_vector, i);
  cout << "79 is present in random vector: " << present << endl;

  short j = 26;
  bool p2 = is_present(rand_vector, j);
  cout << "26 is present in random vector: " << p2 << endl << endl;
  
  // Use std::sort
  short mynums[] = { 10,12,5,2,8 };
  vector<short> sort_vector(mynums, mynums+5);

  
  cout << "Unsorted vector: ";
  print(sort_vector);
  cout << endl;

  sort(sort_vector.begin(), sort_vector.end());
  cout << "Sorted vector: ";
  print(sort_vector);
  cout << endl << endl;

  //Check to ensure proper sorting
  bool sorted = 1;
  for (short i = 1; i < sort_vector.size(); i++)
  {
	  if (sort_vector.at(i) < sort_vector.at(i - 1))
	  {
		  sorted = false;
	  }
  }
  cout << "Is this properly sorted? " << sorted << endl << endl;


  return 0;
}
