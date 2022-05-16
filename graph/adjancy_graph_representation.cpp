#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>matrix,int r,int c){
    for(int i=1;i<r;i++){
      for(int j=1;j<c;j++){
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }

}
int main()
{
    /* in matrix row represent total nodes
     and 1 at (row, column) position represents  edges between that  row_node and column_node
     here all values will be less than the row value as greater than the row value cant be represented in the matrix it will produce an array out of bound error


     */

    int row, edges;
    cin >> row >> edges;
    // row = +1;
  row++;
    // edges += 1;
    vector<vector<int>> matrix(row,vector<int>(row));
  // int matrix[row][row];
    for(int i=0;i<edges;i++){
        int r,c=0;
        cin>>r>>c;
        matrix[r][c]=1;
        matrix[c][r]=1;
    }
    // int *re=&(matrix[0][row]);
    // int **mac=(*re)[row];
    print(matrix,row,row);
    /* we can olny make small graph representation as it takes more space*/
    return 0;
}