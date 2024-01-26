constexpr int Size = 1;

int main()
{
    static_assert(Size > 5, "Size must be greater than 5"); // Compile-time assertion
    return 0;
}
