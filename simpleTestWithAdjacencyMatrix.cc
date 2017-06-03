#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <limits>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include "mydb.h"

using namespace std;

void dfs(int i, vector<vector<int>> A, vector<bool> &flag, vector<int> &parent) {
	// Starting from node i, do depth-first-search
	// along graph with adjacency matrix A, building
	// a MST in the process.

	if (flag[i])
		return;
	cout << "At node " << i << endl;
	flag[i] = true;

	for (int j = 0; j < A.size(); j++) {
		if (A[i][j] && !flag[j]) {
			parent[j] = i;
			dfs(j, A, flag, parent);
		}
	}


}

void bfs(int i, vector<vector<int>> A) {
	// Starting from node i, do breadth-first-search
	// along graph with adjacency matrix A, building
	// a MST in the process.

	int n = A.size(); // number of vertices
	vector<bool> flag(n);
	vector<int> parent(n,-1); // for representing MST 
	queue<int> q;
	q.push(i);
	flag[i] = true;

	while (!q.empty()) {
		i = q.front(), q.pop();		
		cout << "At node " << i << endl;
		// expand along neighbors
		for (int j = 0; j < n; j++) {
			if (A[i][j] && !flag[j]) {
				q.push(j);
				flag[j] = true;
				parent[j] = i;
			}
		}
	}
	print(parent);
}


int main () {

	vector<vector<int>> A { {1,1,1,0,1}, {1,1,0,0,0}, {1,0,1,0,1}, {0,0,0,1,1}, {1,0,1,1,1}}; // adjacency matrix
	

	bfs(3,A);

	cout << "****************" << endl;
	vector<bool> flag(A.size(), false);
	vector<int> parent(A.size(), -1);
	dfs(3,A,flag,parent);
	print(parent);

	return 0;
}











































