#include <gtest/gtest.h>

#define main main_0
#include "../src/hatvanyozas.c"
#undef main

#include "../../tools.cpp"

TEST(Test, visszateresi_ertek) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("3", int eredmeny = main_0(), str)
    ASSERT_EQ(eredmeny, 0);
}

TEST(Test, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int eredmeny;
    char str[100];

    IO("3", main_0(), str)
    sscanf(str, "%d", &eredmeny);
    ASSERT_EQ(eredmeny, 243);
}

TEST(Test, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int eredmeny;
    char str[100];

    IO("5", main_0(), str)
    sscanf(str, "%d", &eredmeny);
    ASSERT_EQ(eredmeny, 3125);
}

TEST(Test, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int eredmeny;
    char str[100];

    IO("-3", main_0(), str)
    sscanf(str, "%d", &eredmeny);
    ASSERT_EQ(eredmeny, -243);
}