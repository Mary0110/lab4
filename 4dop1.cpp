#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the number of rows(n) and columns(m)\n";
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

    int max = arr[0][0];
    int max_j=0,max_i=0;
    for(int i = 0; i < n; i++)        //max element
    {
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                max_i=i;max_j=j;
            }

        }
    }
    for (int i = 0; i < n; ++i) //swap columns
    {
        int t = arr[i][max_j];
        arr[i][max_j] = arr[i][0];
        arr[i][0] = t;
    }
    cout<<"\nSwapping columns:\n";
    for (int i = 0; i < n; i++)   //2array output
    {
        for(int j = 0; j < m; j++)
            cout<<arr[i][j]<<"\t";
        cout<<"\n";
    }


    for (int j = 0; j < m; ++j)  //swap rows
    {
        int t = arr[max_i][j];
        arr[max_i][j] = arr[0][j];
        arr[0][j] = t;
    }
    cout<<"\nSwapping rows:\n";
    for (int i = 0; i < n; i++)   //3array output
    {
        for(int j = 0; j < m; j++)
            cout<<arr[i][j]<<"\t";
        cout<<"\n";
    }
}
