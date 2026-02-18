#include <iostream>
using namespace std;

class Cinteger {
public:
    
    Cinteger(int value = 0) : m_value(value) {}

/********************Basic OPs for object******************** */ 
    Cinteger operator+( Cinteger& obj)  {
        return Cinteger(this->m_value + obj.m_value);
    }

  
    Cinteger operator-( Cinteger& obj)  {
        return Cinteger(this->m_value - obj.m_value);
    }

  
    Cinteger operator*( Cinteger& obj)  {
        return Cinteger(this->m_value * obj.m_value);
    }

    
    Cinteger operator/( Cinteger& obj)  {
        return Cinteger(this->m_value / obj.m_value);
    }
/********************Basic OPs for valus******************** */ 

//need to ask why at this[this->m_value=this->m_value+ value](done) the value a change???? and why the constract called happen???

        Cinteger operator+( int value)  {
            return Cinteger(this->m_value+ value);
            
    }

        Cinteger operator-( int value)  {
            return Cinteger( this->m_value- value);
      
    }

    
        Cinteger operator*( int value)  {
        return Cinteger(this->m_value * value);
    }

        Cinteger operator/( int value)  {
        return Cinteger(this->m_value / value);
    }


/************Object  pre&post ++ --  /=************ */
  

        Cinteger operator++(int) {
        Cinteger temp(*this);  
         m_value++;             
        return temp;           
    }


        Cinteger operator--(int)  {
        Cinteger temp(*this);
        m_value--;
        return temp;
    }

        Cinteger& operator++( )  {
        ++m_value;
        return *this;
    }

        Cinteger& operator--( )  {
        --m_value;
        return *this ;
    }


/***********Object   += -=  *= /=  /=*********** */


    Cinteger& operator+=(Cinteger& obj) {
        m_value += obj.m_value;
        return *this;
    }


    Cinteger& operator-=(Cinteger& obj) {
        m_value -= obj.m_value;
        return *this;
    }


    Cinteger& operator*=(Cinteger& obj) {
        m_value *= obj.m_value;
        return *this;
    }


    Cinteger& operator/=(Cinteger& obj) {
        m_value /= obj.m_value;
        return *this;
    }


/***********Value  += -= *= /=***********/
    
    Cinteger& operator+=(int value) {
        m_value += value;
        return *this;
    }
    
    Cinteger& operator-=(int value) {
        m_value -= value;
        return *this;
    }
    
    Cinteger& operator*=(int value) {
        m_value *= value;
        return *this;
    }
    
    Cinteger& operator/=(int value) {
        m_value /= value;
        return *this;
    }




    void print()  {
        cout << m_value << endl;
    }

private:
    int m_value;
};

int main() {
    Cinteger a(10);
    Cinteger b(5);

    Cinteger c ;

    cout<<"Object a= ";
    a.print();
    cout<<"Object b= ";
    b.print();

    cout<<endl;
    cout<<"Object with Object Basic calc + - * /"<<endl;
    // +
    c = a + b;
    cout << "a+b = ";
    c.print();

    // -
    c = a - b;
    cout << "a-b = ";
    c.print();

    // *
    c = a * b;
    cout << "a*b = ";
    c.print();

    // /
    c = a / b;
    cout << "a/b = ";
    c.print();

    cout<<endl;
    cout<<"Object a= ";
    a.print();
  
    cout<<"Object with Value Basic calc + - * /"<<endl;

    // + int
    c = a + 3;
    cout << "a+3 = ";
    c.print();

    // - int
    c = a - 1;
    cout << "a-1 = ";
    c.print();

    // * int
    c = a * 2;
    cout << "a*2 = ";
    c.print();

    // / int
    c = a / 2;
    cout << "a/2 = ";
    c.print();


    cout<<endl;
    cout<<"Object a= ";
    a.print();

    cout<<"Object   ore&post ++ -- "<<endl;


    
    //prefix ++
    ++a;
    cout << "++a = ";
    a.print();

    // postfix ++
    c=a++;
    cout << "befor = a++ -> ";
    c.print();
    cout << "after = a++ -> ";
    a.print();

    // prefix --
    --a;
    cout << "--a = ";
    a.print();

    // postfix --
    c=a--;
    cout << "befor = a-- -> ";
    c.print();
    cout << "after = a-- -> ";
    a.print();


    cout<<endl;
    cout<<"Object a= ";
    a.print();
    cout<<"Object b= ";
    b.print();
    cout<<"Object    += -= *= /=  "<<endl;

    // +=
    a += b;
    cout << "a+=b = ";
    a.print();


    // -=
    a -= b;
    cout << "a-=b = ";
    a.print();

    // *=
    a *= b;
    cout << "a*=b = ";
    a.print();


    // /=
    a /= b;
    cout << "a/=b = ";
    a.print();

   


    cout<<endl;
    cout<<"Object a= ";
    a.print();
    cout<<"Object with Valus"<<endl;


    // += int
    a += 3;
    cout << "a+=3 = ";
    a.print();
    
    // -= int
    a -= 2;
    cout << "a-=2 = ";
    a.print();
    
    // *= int
    a *= 4;
    cout << "a*=4 = ";
    a.print();
    
    // /= int
    a /= 2;
    cout << "a/=2 = ";
    a.print();


    return 0;
}
