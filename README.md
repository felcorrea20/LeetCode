# LeetCode — Soluções em C++

Coleção de soluções de exercícios do [LeetCode](https://leetcode.com/) em C++, cada uma implementada como `class Solution` (o formato esperado pelo site), com testes automatizados usando GoogleTest.

## Pré-requisitos

- CMake ≥ 3.8
- Compilador com suporte a C++14 (ex.: `g++`)
- **GoogleTest** na pasta `googletest/` — não é versionado neste repositório e precisa ser clonado antes de configurar:

```bash
git clone --depth 1 --branch v1.15.2 \
  https://github.com/google/googletest.git googletest
```

> A versão 1.15.2 é a recomendada porque o projeto fixa `CMAKE_CXX_STANDARD 14`; a partir da 1.17 o GoogleTest exige C++17.

## Compilar

```bash
cmake -S . -B build
cmake --build build
```

Isso gera a biblioteca estática `build/libLeetCode.a` e o executável de testes `build/test/Tests_Leetcode`.

## Rodar os testes

```bash
ctest --test-dir build --output-on-failure
```

Ou direto pelo executável, incluindo filtro por teste:

```bash
./build/test/Tests_Leetcode
./build/test/Tests_Leetcode --gtest_filter=TwoSum.*
```
