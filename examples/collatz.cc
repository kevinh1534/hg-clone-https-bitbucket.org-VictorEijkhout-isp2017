#include <iostream>
using namespace std;

int main() {
  // Test the Collatz conjecture:
  // for all numbers under 1000, find the longest sequence
  int longest_length = -1, longest_starter = -1;
  for (int starting=1; starting<1000; starting++) {
    // make the sequence with `starting' and record if it's the longest
    int length=0, current = starting;
    // find the length
    while (current!=1) {
      // compute the next number
      if (current%2==0) {
	current /= 2;
      } else {
	current = 3*current+1;
      }
      length++;
    }      

    // if it's the longeest, record
    if (length>longest_length) {
      longest_length = length;
      longest_starter = starting;
      cout << "Found length " << longest_length << " at " << longest_starter << endl;
    }
  }

  return 0;
}
