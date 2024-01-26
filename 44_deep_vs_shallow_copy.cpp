class MyClass
{
    int *data;

public:
    MyClass(int d)
    {
        data = new int(d);
    }
    // Deep copy constructor
    MyClass(const MyClass &source)
    {
        data = new int(*source.data);
    }
    ~MyClass()
    {
        delete data;
    }
};
