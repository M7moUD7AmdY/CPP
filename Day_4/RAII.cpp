#include <iostream>
#include <cstring>

using namespace std;

class Cx {
public:
    Cx(int id, const char* name) : m_id(id) {
        m_name = new char[strlen(name) + 1];  
        strcpy(m_name, name);                
    }

    ~Cx() {
        delete[] m_name;  
    }

    void print_obj()
    {
        cout <<"ID: "<<m_id<<endl;
        cout <<"name: "<<m_name<<endl;


    }

private:
    int m_id;
    char* m_name;
};

int main() {
    Cx obj1(1, "Mahmoud");
    obj1.print_obj();

    return 0;
}
