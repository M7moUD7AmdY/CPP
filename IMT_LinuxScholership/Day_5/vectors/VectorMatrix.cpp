#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    int r, c;
    vector<vector<int>> data;

public:
    Matrix(int rows = 0, int cols = 0)
    {
        r = rows;
        c = cols;
        data.resize(r, vector<int>(c, 0));
    }

    void input()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> data[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix Multiply(Matrix other)
    {
    
        Matrix result(r, other.c);

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < other.c; j++)
            {
               
                result.data[i][j] +=other.data[i][j];
                
            }
        }

        return result;
    }
};

int main()
{
   
    return 0;
}
