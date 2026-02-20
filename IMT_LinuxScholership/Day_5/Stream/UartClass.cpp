#include <iostream>
#include <string>

using namespace std;

class Cuart {
public:

  void take_data()
{
    string key, value;

    while (getline(cin, key, '='))
    {
        getline(cin, value);  

        if (key == "baudrate")
            baudrate = stoi(value);

        else if (key == "parity")
            parity = value;

        else if (key == "stopbits")
            stopbits = stoi(value);

        else if (key == "slaveaddress")
            slaveaddress = stoi(value);
    }
}


    void display() const
    {
        cout << "Baudrate     : " << baudrate << endl;
        cout << "Parity       : " << parity << endl;
        cout << "Stop Bits    : " << stopbits << endl;
        cout << "Slave Address: " << slaveaddress << endl;
    }

private:
    int baudrate = 0;
    string parity;
    int stopbits = 0;
    int slaveaddress = 0;
};

int main()
{
    Cuart uart;

    uart.take_data();
    uart.display();

    return 0;
}
