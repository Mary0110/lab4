#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the number of rows(n) and columns(m)" << endl;
    cin>>n>>m;

    int** arr = new int* [n];    //arr
    for (int i = 0; i<n; ++i)
    {
        arr[i]= new int[m];
    }

    srand( time(0) );
    for (int i = 0; i < n; i++)   //array input
    {
        for(int j = 0; j < m; j++)
            arr[i][j]=rand()%20;
    }

    for (int i = 0; i < n; i++)   //array output
    {
        for(int j = 0; j < m; j++)
            cout<<arr[i][j]<<"\t";
        cout<<"\n";
    }

    for (int i = 0; i < n; i++)              //1 case
    {
        int min_r = arr[i][0], index_c = 0;   //the minimum element of row i.
        for (int j = 0; j < m; j++)
        {
            if (min_r > arr[i][j])
            {
                min_r = arr[i][j];
                index_c = j;
            }
        }
        int i2, max_c = arr[0][index_c];       //if maximum element of column
        for (i2 = 0; i2 < n; i2++)
        {
            if (min_r < arr[i2][index_c])
                break;
        }

        if(i2==n)
            cout<<"saddle point: "<<i+1<<" "<<index_c+1<<endl;
    }

    for (int i = 0; i < n; i++)         //2 case
    {
        int max_r = arr[i][0], index_c = 0;   //the minimum element of row i.
        for (int j = 0; j < m; j++)
        {
            if (max_r < arr[i][j])
            {
                max_r = arr[i][j];
                index_c = j;
            }
        }
        int i2, min_c = arr[0][index_c];       //if maximum element of column
        for (i2 = 0; i2 < n; i2++)
        {
            if (max_r > arr[i2][index_c])
                break;
        }
        if(i2==n)
            cout<<"saddle point: "<<i+1<<" "<<index_c+1<<endl;
    }
}
