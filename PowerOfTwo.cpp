#include "PowerOfTwo.hpp"

bool Solution::isPowerOfTwo(int n) {
   int expoente = 0; 
   int resultado = 0;
   int base = (n >= 0) ? 2 : -2;
   int max_expoente = (n >= 0) ? 30 : 31;

   do {
      resultado = std::pow(base, expoente);
   } while (expoente++ <= max_expoente && resultado != n);

   return resultado == n;
}
