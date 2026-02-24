#include <iostream>
#include <vector>

using namespace std ;

class cVec{

    private:

    vector<vector<int>> data;
    int m_rows;
    int m_cols;

    public:
    cVec(int r=2,int c=2):m_rows(r),m_cols(c){
        data.resize(m_rows);
        for(int i=0;i<m_rows;i++)
        {
            data[i].resize(m_cols);
        }
    }

    cVec& inout(int row,int col,int num)
    {
        data[row][col]=num;
        return *this;
    }

    void Display()
    {
        for(int i=0;i<m_rows;i++)
        {
            cout<<"Row: "<<i<<": ";
            for(int j=0;j<m_cols;j++)
            {
                cout<<this->data[i][j]<<" ";
            }
            cout<<endl;

        }
    }

    cVec Add(cVec other)
    {
        cVec res(m_rows,m_cols);
        for(int i=0;i<m_rows;i++)
        {
           
            for(int j=0;j<m_cols;j++)
            {
                res.data[i][j]=this->data[i][j] + other.data[i][j];
            }
            

        }
        return res;

    }

     cVec Mul(cVec other)
    {
        cVec res(m_rows,m_cols);
        for(int i=0;i<m_rows;i++)
        {
        
            for(int j=0;j<m_cols;j++)
            {
                res.data[i][j]=this->data[i][j] * other.data[i][j];
            }
            

        }
        return res;

    }



};


int main()
{
    cVec v1(3,3);
     v1.inout(1,1,1)
     .inout(1,2,2)
     .inout(1,0,3)   
     .inout(2,1,4)
     .inout(0,1,5); 
    // v1.Display();

   
    cVec v2(3,3);
      v2.inout(1,1,1)
     .inout(1,2,2)
     .inout(1,0,3)   
     .inout(2,1,4)
     .inout(0,1,5); 

     cVec v3(3,3); 
     v3=v1.Add(v2);
     v3.Display();




    return 0;
}