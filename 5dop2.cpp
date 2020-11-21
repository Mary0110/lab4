#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter n,m\n";
    cin >> n >> m;

    vector <vector <int> > a(n, vector <int> (m));
    cout<<"Enter elements\n";
    for (int i = 0; i < n; i++)     //a input
        for (int j = 0; j < m; j++)
           cin >> a[i][j];
    cout<<endl;
    for (int i = 0; i < n; i++)     //a output
     {
         for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
         cout<<endl;
     }

    vector <vector <int> > v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)        //comparing
            {
                if (a[i][j] == a[i][k] && k != j)
                {
                    v[i].push_back(a[i][k]);
                    break;
                }
            }
        }
     }
     cout << endl<<"Result:"<<endl;                             //v output
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
         cout<<endl;
     }
}
