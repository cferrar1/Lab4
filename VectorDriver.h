/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */

/*
Modified 10/15/18
Cameron Ferrarini
*/
typedef unsigned long ulong;

#include <iostream>
#include <vector>


using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// fill the vector with random numbers
void add_numbers(vector<short> &data)
{
	for (ulong i = 0; i < 10; i++)
	{
		data.at(i) = rand() % 100 + 1;
	}
}

// only prints the even numbers of a vector
void print_even(vector<short> &data)
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 2; i<data.size(); i+=2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// Tests to see if a given value is present in the vector
bool is_present(vector<short> &data, short value)
{
	if (data.empty()) {
		cout << "<empty>";
		return false;
	}
	std::vector<short>::const_iterator iter = data.begin();
	while (iter != data.end())
	{
		if (*iter == value)
		{
			return true;
		}
		iter++;
	}
	return false;
}


