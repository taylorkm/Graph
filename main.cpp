#include <iostream>
#include <vector>
#include <string>
#include "Node.hpp"
#include "Graph.hpp"

int main() {

	Graph<char> g;

	g.insert('c','a');
	g.insert('c','d');
	g.insert('c','a');
	g.insert('a','b');
	g.insert('a','a');
	g.insert('b','d');

	g.print();

	std::cout << "graph has size = " << g.size() << std::endl;

	Node<int> n;	

	Node<int> m(3);
	Node<char> p('q');
	Node<std::string> q("word");
	return 0;
}

