#include <bits/stdc++.h> 
using namespace std; 
int ROW,COL;
int M[10][10];
bool visited[10][10];

int isSafe(int row, int col) 
{ 

	return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL) && (M[row][col] && !visited[row][col]); 
} 
void DFS(int row, int col) 
{ 

	static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
	static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
	visited[row][col] = true; 


	for (int k = 0; k < 8; ++k) 
		if (isSafe(row + rowNbr[k], col + colNbr[k])) 
			DFS(row + rowNbr[k], col + colNbr[k]); 
} 


int countIslands() 
{ 
  
	memset(visited, 0, sizeof(visited)); 

	int count = 0; 
	for (int i = 0; i < ROW; ++i) 
		for (int j = 0; j < COL; ++j) 

		
			if (M[i][j] && !visited[i][j]) { 
				DFS(i, j); 
				++count; 
			} 

	return count; 
} 

int main() 
{ 
	cout<<"enter no of rows and cols";
	cin>>ROW>>COL; 
	cout<<"\nenter the array elements";
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			cin>>M[i][j];
		}
	}
	cout << "Number of islands is: " << countIslands(); 
	cout<<"\n";
	return 0; 
} 


