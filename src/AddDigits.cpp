#include <string>
#include <iostream>

class Solution {
public:
    int addDigits(int num) {

       while (num > 9) {

            std::string num_str = std::to_string(num);
            num = 0;
            
            for (std::size_t i = 0; i < num_str.size(); i++) {
               num += std::stoi(num_str.substr(i, 1));
            }
      }

       return num;

    }
};

int main()
{
   Solution solucao;
   int result = solucao.addDigits(329384928);
   std::cout << "Resultado: " << result << std::endl;
}
