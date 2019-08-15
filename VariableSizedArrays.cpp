#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int dimension,query;
    cin>>dimension>>query;
    int columns,input;

    vector<vector<int>> DataArray;
    vector<int> DataRows;
    vector<int> QueryArray;
    vector<vector<int>> OrderArray;

    for(int i=0; i<dimension; i++)
    {
        cin>>columns;
        for(int j=0; j<columns; j++)
        {
            cin>>input;
            DataRows.push_back(input);
        }
        DataArray.push_back(DataRows);
        DataRows.clear();
    }
    
    for(int i=0; i<query; i++)
    {
        for(int j=0; j<2; j++) //in 2D this always be 2 coordinates
        {
            cin>>input;
            QueryArray.push_back(input);
        }
        OrderArray.push_back(QueryArray);
        QueryArray.clear();
    }

    while(OrderArray.size()!=0)
    {
        cout<<DataArray[OrderArray[0][0]][OrderArray[0][1]]<<endl; //print first row and erase it
        OrderArray.erase(OrderArray.begin());
    }
    return 0;
}