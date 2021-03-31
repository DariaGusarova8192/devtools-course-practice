// Copyright 2021 Gusarova Daria

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Gusarova_Daria_ComplexNumberTest, Subtract_Zero) {
    // Arrange
    const double re1 = 5.3;
    const double im1 = 2.8;
    const double re2 = 0.0;
    const double im2 = 0.0;

    // Act
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber res = a - b;

    // Assert
    ASSERT_DOUBLE_EQ(re1, res.getRe());
    ASSERT_DOUBLE_EQ(im1, res.getIm());
}

TEST(Gusarova_Daria_ComplexNumberTest, Communicative_Law_For_Mult) {
    // Arrange
    const double re1 = 5.3;
    const double im1 = 2.8;
    const double re2 = 4.1;
    const double im2 = 0.13;

    // Act
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber res1 = a * b;
    ComplexNumber res2 = b * a;

    // Assert
    ASSERT_DOUBLE_EQ(res1.getRe(), res2.getRe());
    ASSERT_DOUBLE_EQ(res1.getIm(), res2.getIm());
}

TEST(Gusarova_Daria_ComplexNumberTest, Associative_Law_For_Mult) {
    // Arrange
    const double re1 = 5.3;
    const double im1 = 2.8;
    const double re2 = 4.1;
    const double im2 = 0.13;
    const double re3 = 2.71;
    const double im3 = 15.0;

    // Act
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber c(re3, im3);
    ComplexNumber res1 = (a * b) * c;
    ComplexNumber res2 = a * (b * c);

    // Assert
    ASSERT_DOUBLE_EQ(res1.getRe(), res2.getRe());
    ASSERT_DOUBLE_EQ(res1.getIm(), res2.getIm());
}
