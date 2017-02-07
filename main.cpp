#include <iostream>
#include <vector>
#include <string>
#include "Node.hpp"
#include "Graph.hpp"

int main() {

	Graph<char> g;

	std::cout << "count = " << g.find('c') << std::endl;

	Node<int> n;	

	Node<int> m(3);
	Node<char> p('q');
	Node<std::string> q("word");
	return 0;
}

