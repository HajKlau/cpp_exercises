#include "count_primes.h"
#include<iostream>
#include<vector>

//task with used Sieve of Eratosthenes algorithm
using namespace std;

int SolutionOfCountPrimes::countPrime(int n)
{
    
    int counterOfPrimes = 0;
    vector<bool> prime(n+1, true);  //the same like: vector<bool> prime;  prime.resize(n+1,true);
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i]) 
        {
            counterOfPrimes++;
                
            for (int j = i * 2; j < n; j = j + i)
            {
                prime[j] = 0;
            }

        }
    }
    return counterOfPrimes;
}
