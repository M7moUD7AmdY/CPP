#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {9, 4, 7, 2, 10, 3, 8, 1, 6, 5};

    cout << "Vector V: ";
    for_each(v.begin(), v.end(), [](int x){ cout << x << " "; });
    cout << endl;

    // count_if  even 
    int even_count = count_if(v.begin(), v.end(),[](int x){ return x % 2 == 0; });
    cout << "Even numbers count: " << even_count << endl;

    // sort
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for_each(v.begin(), v.end(), [](int x){ cout << x << " "; });
    cout << endl;

    // find first odd number
    auto it = find_if(v.begin(), v.end(),[](int x){ return x%2 !=0; });

    cout<<"First ODD : "<<*it<<endl;

    auto it2 = find_if(v.begin(), v.end(),[](int x){ return x%2 ==0; });

    cout<<"First EVEN : "<<*it2<<endl;

    //  transform *2
    transform(v.begin(), v.end(), v.begin(),
              [](int x){ return x * 2; });

    cout << "After transform (*2): ";
    for_each(v.begin(), v.end(), [](int x){ cout << x << " "; });
    cout << endl;


    auto new_end = remove_if(v.begin(), v.end(),[](int x){ return x % 2 != 0; });

    v.erase(new_end, v.end());

    cout << "remove odd: ";
    for_each(v.begin(), v.end(), [](int x){ cout << x << " "; });
    cout << endl;

    return 0;
}