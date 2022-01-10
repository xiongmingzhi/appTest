#include "iostream"
#include "Public1.h"
#include "Public2.h"
#include "App1.h"
#include "App2.h"
#include "App3.h"
int main()
{
    App1::App1_print();
    App2::App2_print();
    App3::App3_print();
    Public1::Public1_print();
    Public2::Public2_print();
    return 0;
}