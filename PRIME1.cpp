// My solution for the PRIME1 programming challenge at SPOJ.com
// (http://www.spoj.com/problems/PRIME1/)
// 
// Peter wants to generate some prime numbers for his cryptosystem. Help him!
// Your task is to generate all prime numbers between two given numbers!
// 
// Input
// 
// The input begins with the number t of test cases in a single line (t<=10). In
// each of the next t lines there are two numbers m and n (1 <= m <= n <=
// 1000000000, n-m<=100000) separated by a space.
// 
// Output
// 
// For every test case print all prime numbers p such that m <= p <= n, one
// number per line, test cases separated by an empty line.
// 
// Example
// 
// Input:
// 2
// 1 10
// 3 5
// 
// Output:
// 2
// 3
// 5
// 7
// 
// 3
// 5
// 
// Warning: large Input/Output data, be careful with certain languages
// (though most should be OK if the algorithm is well designed)
// 
// Information
// 
// After cluster change, please consider PRINT as a more challenging problem.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

std::vector<bool> sieve_of_eratosthenes( unsigned long int const n_length )
{
    std::vector<bool> primeList(n_length);
    primeList[0] = 1;
    primeList[1] = 1;
    for(unsigned long int i = 2; i <= 31622; i++) {
    	primeList[i] = 1;
    }
    return primeList;
}

int main(void)
{
	unsigned long int MAX = ULONG_MAX;
	std::vector<bool> const primeList = sieve_of_eratosthenes( 1000000000 );
	int NumberOfTests = 0;
	int upper, lower;
	cin >> NumberOfTests;
	while(NumberOfTests--)
	{
		//Read in in two integers and find all the primes between them. 
		cin >> lower >> upper;
		cout << lower << '\t' << upper << endl;
		// sqrt(1000000000) = 31622
		// create an boolean array [0,1000000000]initial to all true;
		// set 0,1 to false;
		
		// Input: an integer n > 1
 
		// Let A be an array of Boolean values, indexed by integers 2 to n,
		// initially all set to true.
		//  
		//  for i = 2, 3, 4, ..., not exceeding √n:
		//   if A[i] is true:
		//     for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n :
		//       A[j] := false
		//  
		// Output: all i such that A[i] is true.

	}
	cout << MAX << endl;
}