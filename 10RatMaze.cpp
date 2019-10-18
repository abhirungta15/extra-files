#include <bits/stdc++.h> 
using std::cout;
using std::cin;
int N;
int maze[10][10],sol[10][10];

bool solveMazeUtil(int x, int y); 


void printSolution() 
{ 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) 
			printf(" %d ", sol[i][j]); 
		printf("\n"); 
	} 
} 


bool isSafe(int x, int y) 
{ 
	
	if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) 
		return true; 

	return false; 
} 

bool solveMaze() 
{ 
	memset(sol,0,sizeof sol);

	if (solveMazeUtil(0, 0) == false) { 
		printf("Solution doesn't exist"); 
		return false; 
	} 

	printSolution(); 
	return true; 
} 


bool solveMazeUtil( int x, int y) 
{ 
	
	if (x == N - 1 && y == N - 1) { 
		sol[x][y] = 1; 
		return true; 
	} 

	
	if (isSafe(x, y) == true) { 
		
		sol[x][y] = 1; 

		
		if (solveMazeUtil(x + 1, y) == true) 
			return true; 

		
		if (solveMazeUtil( x, y + 1) == true) 
			return true; 

		
		sol[x][y] = 0; 
		return false; 
	} 

	return false; 
} 


int main() 
{ 
	cout<<"Enter maze size:";
	cin>>N;
	cout<<"\nenter the array:";
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>maze[i][j];
		}
	} 
	solveMaze(); 
	return 0; 
} 

