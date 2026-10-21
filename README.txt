Comandos: 
   - Reconfigurar build: cmake -S . -B build
   - Compilar lib + teste: cmake --build build
   - Rodar testes: ctest --test-dir build --output-on-failure
   - Rodar testes direto pelo executável: ./build/test/Tests_Leetcode (Opcional: --gtest_filter=...)
