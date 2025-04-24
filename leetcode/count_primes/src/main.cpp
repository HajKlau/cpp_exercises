#include "count_primes.h"
#include<iostream>

using namespace std;

int main() 
{
    SolutionOfCountPrimes solution;

    int myN = 15;
    int result = solution.countPrime(myN);
    cout << "The count of primes smaller than " << myN << " is: " << result << ". This numbers are: " <<  endl;
    return 0;
}
