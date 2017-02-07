#include <iostream>
#include <vector>
#include <string>
#include "Node.hpp"
#include "Graph.hpp"

int main() {

	Graph<int> g;

	for (int i = 0;i<20; i++) {
		g.insert(i,i+1);
	}


	Node<int> n;	

	Node<int> m(3);
	Node<char> p('q');
	Node<std::string> q("word");
	return 0;
}

