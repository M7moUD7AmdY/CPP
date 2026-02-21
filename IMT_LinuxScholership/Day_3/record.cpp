#include <iostream>
#include <string>
using namespace std;


// use function
// int record =0;
// void parseCSV(string headers, string record)
// {
//     record_counter+=1;
//     cout << "Record: "<<record_counter<<endl;

//     while (!headers.empty() && !record.empty())
//     {
//         int hPos = headers.find(',');
//         int rPos = record.find(',');
//         // cout<<hPos<<endl;

//         string header;
//         string value;

//         if (hPos == -1)
//         {
//             header = headers;
//             headers = "";
//         }
//         else
//         {
//             header = headers.substr(0, hPos);
//             headers = headers.substr(hPos + 1);
//         }

//         if (rPos == -1)
//         {
//             value = record;
//             record = "";
//         }
//         else
//         {
//             value = record.substr(0, rPos);
//             record = record.substr(rPos + 1);
//         }

//         cout << header << ": " << value << endl;
//     }

//     cout << endl;
// }

//use class
class CparsCSV{

    public:
    CparsCSV(){};
    // CparsCSV(string name ,string mail,string city ,string salary):m_name(name),m_mail(mail),m_city(city),m_salary(salary){}

    void parseCSV(string data,string info)
    {
        int j=0,k=0;
        for(unsigned int i=0;i<data.size();i++)
        {   size_t pos=data.find(',');
            if(pos != string::npos || i==data.size()-1)
            {
                m_headers[j]=data.substr(0,pos);
                // cout<<m_headers[j]<<endl;
                data= data.substr(pos+1);
                j++;

            }
  
        }
        for(unsigned int i=0;i<info.size();i++)
        {   size_t pos=info.find(',');
            if(pos != string::npos || i==info.size()-1)
            {
                m_record[k]=info.substr(0,pos);
                // cout<<m_record[k]<<endl;
                info= info.substr(pos+1);
                k++;

            }
  
        }


    }

     void desplay()
    {
        for(int i=0;i<4;i++)
        {
            cout<<m_headers[i]<<" : "<< m_record[i]<<endl;

        }
        cout<<endl;

    }

    private:
    string m_record[4];
    string m_headers[4];
};

int main()
{
    string headers = "Name,Email,City,Salary";

    CparsCSV s1 ,s2 , s3;
    
    
    s1.parseCSV(headers,"mahmoud,mahmoud@lol.com,zayed,7000");
    s2.parseCSV(headers, "hamdi,hamdi@lol.com, city,8000");
    s3.parseCSV(headers, "Rashed,rashed@lol.com,giza,9000");
    s1.desplay();
    s2.desplay();
    s3.desplay();


    return 0;
}
