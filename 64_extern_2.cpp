//ToCompile: cl /EHsc 64_extern_1.cpp 64_extern_2.cpp

extern int globalVar; // Declaration of an external variable
int main()
{
    globalVar = 5; // Using the external variable
    return 0;
}
