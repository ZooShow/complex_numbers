#include "gtest/gtest.h"
#include "lib.h"

TEST (operatorAdd,Add) {
    Complex a{12,3}, b{1,1};
    Complex result = a + b;
    EXPECT_EQ(13,result.a);
    EXPECT_EQ(4, result.b);
}

TEST (operatorSub,Sub) {
    Complex a{7,2}, b{1,1};
    Complex result = a - b;
    EXPECT_EQ(6,result.a);
    EXPECT_EQ(1, result.b);
}

TEST (operatorDiv,Div) {
    Complex a{4,2}, b{2,1};
    Complex result = a / b;
    EXPECT_EQ(2,result.a);
    EXPECT_EQ(0, result.b);
}

TEST (operatorMul,Mul) {
    Complex a{7,2}, b{1,1};
    Complex result = a * b;
    EXPECT_EQ(5,result.a);
    EXPECT_EQ(9, result.b);
}

TEST (operatorEqual,Equal) {
    Complex a{12,5}, b{12,5};
    EXPECT_EQ((a == b), true);
}

TEST (operatorNotEqual,NotEqual) {
    Complex a{67,56}, b{76,12};
    EXPECT_EQ((a == b), false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}