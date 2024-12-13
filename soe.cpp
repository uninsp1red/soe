#include <iostream>
#include "soe.h"
#include <math.h>

bool is_prime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) return false;
    }
    return true;
}

void factorization(int a, int*& mn, int& sum) {
    sum = 0;
    mn = new int[a];
    for (int i = 2; i <= sqrt(a); ++i)
         while (a % i == 0) {
             mn[sum++] = i;
             a /= i;
         }
     
     if (a > 1)
         mn[sum++] = a;
     
}

void soe (long int n){
    int* r = new int [n+1];
    for(int i = 0; i <= n; ++i )
        r[i] = i;
    
    for (int i = 2; i <= sqrt(n); ++i){
        if(r[i])
            for(int j = i*i; j <= n; j += i)
                r[j]=0;
    }
    
    for(int i = 2; i <= n; ++i){
        if(r[i]){
            std::cout << r[i] << " ";
        }
    }
    
}
