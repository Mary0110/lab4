#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    int N = 3,M = 3, even_m = 0, even_s = 0;
    int arr[N][M];

    srand(time(0));

    for (int i = 0; i < N; i++)   //array input
    {
        for(int j = 0;j < M;j++)
            arr[i][j]=rand()%20;
    }

    for (int i = 0; i < N; i++)   //array output
    {
        for(int j = 0; j < M;j++)
            cout<<arr[i][j]<<"\t";
        cout<<"\n";
    }

    for (int i = 0 ; (i < N & i < M); i++)  //main diagonal, count even num
    {
        if (arr[i][i]%2==0)
            even_m+=1;
        else
            continue;
    }

    for (int i = N; i >= 0; i--)   //side diagonal, count even num
    {
        for(int j = 0; j < M; j++)
        {
            if (i + j == M - 1)
            {
                if(arr[i][j]%2==0)
                    even_s+=1;
                else
                    continue;
            }
            else
            {
                continue;
            }
        }
    }
    cout<<"Main diagonal:  "<<even_m<<"\n";
    cout<<"Side diagonal: "<<even_s<<"\n";
}
