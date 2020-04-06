#include <iostream>

using namespace std;

// Class
class counterType
{
public:
    counterType();
    int getCounter();
    void setCounter(int value);
    void initialize();
    void increment();
    void decrement();

private:
    int counter;
};


int main()
{
    // Declare variables
    counterType counter;
    int value;

    // Test 1: Constructor set counter to 0
    cout << "Test 1: Constructor set to 0 ... ";
    if(counter.getCounter() == 0)
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Failure" << endl;
    }
    // Test 2: Set counter
    cout << "Test 2: Set counter to 10 ... ";
    counter.setCounter(value);
    if(counter.getCounter() == 10)
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Failure" << endl;
    }
    // Test 3: Increment counter
    cout << "Test 3: Increment counter ... ";
    counter.increment();
    if(counter.getCounter() > 0)
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Failure" << endl;
    }
    // Test 4: Decrement counter
    cout << "Test 4: Decrement counter ... ";
    counter.decrement();
    if(counter.getCounter() > 0)
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Failure" << endl;
    }
    // Test 5: Negative set
    cout << "Test 5: Negative set (enter a negative number) ... ";
    counter.setCounter(value);
    if(counter.getCounter() < 0)
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Failure" << endl;
    }
    // Test 6: Negative decrement
    cout << "Test 6: Negative decrement ... ";
    counter.initialize();
    counter.decrement();
    if(counter.getCounter() == 0)
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Failure" << endl;
    }

    return 0;
}

// Function definitions
counterType::counterType()
{
    counter = 0;
    return;
}

int counterType::getCounter()
{
    return counter;
}

void counterType::setCounter(int value)
{
    cout << "Enter the value of COUNTER: ";
    cin >> value;

    counter = value;
}

void counterType::initialize()
{
    counter = 0;
}

void counterType::increment()
{
    counter++;
}

void counterType::decrement()
{
    if(counter > 0)
    {
        counter--;
    }
    else
    {
        counter = 0;
    }
}
