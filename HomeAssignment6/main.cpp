//Prosvirin Alexandr B82
#include "template_class.h"
#include "class1.h"
#include "class2.h"
#include "class3.h"
#include <gtest/gtest.h>

TEST(TemplateClassTests, Class1True) {
    Class1 obj;
    TemplateClass<Class1> tmpl(obj);
    EXPECT_TRUE(tmpl.foo());
}

TEST(TemplateClassTests, Class1False) {
    Class1 obj;
    TemplateClass<Class1> tmpl(obj);
    EXPECT_FALSE(TemplateClass<Class1>(obj).foo());
}

TEST(TemplateClassTests, Class2True) {
    Class2 obj;
    TemplateClass<Class2> tmpl(obj);
    EXPECT_TRUE(tmpl.foo());
}

TEST(TemplateClassTests, Class2False) {
    Class2 obj;
    TemplateClass<Class2> tmpl(obj);
    EXPECT_FALSE(tmpl.foo());
}

TEST(TemplateClassTests, Class3True) {
    Class3 obj;
    TemplateClass<Class3> tmpl(obj);
    EXPECT_TRUE(tmpl.foo());
}

TEST(TemplateClassTests, Class3False) {
    Class3 obj;
    TemplateClass<Class3> tmpl(obj);
    EXPECT_FALSE(tmpl.foo());
}

TEST(TemplateClassTests, SpecializationInt) {
    TemplateClass<int> tmpl(10);
    EXPECT_TRUE(tmpl.foo());
}

TEST(TemplateClassTests, SpecializationDouble) {
    TemplateClass<double> tmpl(3.14);
    EXPECT_FALSE(tmpl.foo());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}