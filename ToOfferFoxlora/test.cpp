#include<stdio.h>
#include<iostream>
#include<vector>



     int *test(int a, int b) {
         int *c = new int;
        *c = a+b;
        return c;
    }
     int test1(int a, int b) {
         int c = a + b;
         return c;
     }
//int main(int argc, char** argv)
//{
//
//    int *a = test(1,2);
//    int b = test1(3, 4);
//    std::cout << a << std::endl;
//    //system("pause");
// 
//}