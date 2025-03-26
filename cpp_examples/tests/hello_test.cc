#include "hello_world.h"
#include <gtest/gtest.h>
        
TEST(HelloTest, HelloWorld) {
    ASSERT_EQ("Hello, World!", get_hello_message());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}