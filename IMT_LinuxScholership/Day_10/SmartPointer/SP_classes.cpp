#include<iostream>
#include <memory>

using namespace std;


class cUart {
private:
    int m_Baudrate{};
    int m_Parity{};
    int m_Stop_Bits{};
    int m_Slave_Address{};

public:
    cUart() {
        cout << "UART Created\n";
    }

    ~cUart() {
        cout << "UART Destroyed\n";
    }
};

class cDeviceManager {

private:
    unique_ptr<cUart> m_uart;   // smart pointer

public:
    cDeviceManager(cUart uart) {
        m_uart = make_unique<cUart>(uart);   // create UART
    }

    void useUart() {
        cout << "Using UART\n";
    }
};

int main() {

    cUart uart;
    cDeviceManager dev(uart);   // owns UART

    return 0;
}