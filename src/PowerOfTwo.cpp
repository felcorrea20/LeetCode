#include "PowerOfTwo.hpp"

bool Solution::isPowerOfTwo(int target) {
   int expoente = 0; 
   int resultado = 0;
   const int BASE = 2;
   const int MAX_EXPOENTE = 30;

   do {
      resultado = std::pow(BASE, expoente);
   } while (++expoente <= MAX_EXPOENTE && resultado != target);

   return resultado == target;
}
