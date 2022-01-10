//
// Created by 熊志耀 on 2022/1/4.
//

#include "App2.h"
#include "iostream"
#include "public2.h"
void App2::App2_print() {
    std::cout<< "cmake:app2" << std::endl;
    Public2::Public2_print();
    std::cout << "cmake:app2 over" << std::endl;
}