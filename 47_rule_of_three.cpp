class MyClass
{
    int *data;

public:
    MyClass(int size) { data = new int[size]; } // Constructor
    ~MyClass() { delete[] data; }               // Destructor
    MyClass(const MyClass &other)
    { // Copy Constructor
        data = new int[*other.data];
    }
    MyClass &operator=(const MyClass &other)
    { // Copy Assignment Operator
        if (this != &other)
        {
            delete[] data;
            data = new int[*other.data];
        }
        return *this;
    }
};
