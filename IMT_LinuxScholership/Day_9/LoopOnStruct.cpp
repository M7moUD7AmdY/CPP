 #include <iostream>
 #include <exception>
 #include <stdexcept>

 using namespace std;

 struct phase
 {
    int i,v,p;

 };

 struct pv
 {
    phase Ph1;
    phase Ph2;
    phase Ph3;

    phase& operator[](int index)
    {
        switch(index)
        {
            case 1: return Ph1;break;
            case 2: return Ph2;break;
            case 3: return Ph3;break;
            default: throw std::out_of_range("Invalid index");
        }

    }

 };

 int main()
 {
    pv test;
    test.Ph1.i=10;
    test.Ph1.v=10;
    test.Ph1.p=10;
    test.Ph2.i=10;
    test.Ph2.v=10;
    test.Ph2.p=10;
    test.Ph3.i=10;
    test.Ph3.v=10;
    test.Ph3.p=10;

    for(int i=1;i<3;i++)
    {
        cout <<test[i].i<<endl;


    }
    return 0;
 }