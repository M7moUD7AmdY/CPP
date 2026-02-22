#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class cUartConfig{

    public:
    void pars_config()
    {
        string line,key;
        int value;
        while(std::getline(cin,line))
        {
            int op_pos=line.find_first_of("=");
            key= line.substr(0,op_pos);
            value=stoi(line.substr(op_pos+1));
            if(key=="baudrate")
            {
                m_Baudrate=value;

            }
            else if(key=="parity")
            {
                m_Parity=value;
            }
             else if(key=="stopbits")
            {
                m_Stop_Bits=value;
            }
             else if(key=="slaveaddress")
            {
                m_Slave_Address=value;

            }
        }

    }

       void display() 
    {
        cout << "Baudrate     : " << m_Baudrate << endl;
        cout << "Parity       : " << m_Parity << endl;
        cout << "Stop Bits    : " << m_Stop_Bits << endl;
        cout << "Slave Address: " << m_Slave_Address << endl;
    }

    private:
    int m_Baudrate;    
    int m_Parity ;      
    int m_Stop_Bits  ; 
    int m_Slave_Address;





};

int main()
{
    cUartConfig uart;

    uart.pars_config();
    uart.display();

    return 0;
}