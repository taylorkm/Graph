#include <iostream>
#include <vector>
#include <string>
#include "Node.hpp"
#include "Graph.hpp"
#include "STLGraph.hpp"

int main() {

	/* Using graph without STL components */

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


	/* Using graph built with help from STL */

	STLGraph<char> sg;
	sg.insert('c','a');
	sg.insert('c','d');
	sg.insert('c','a');
	sg.insert('a','b');
	sg.insert('a','a');
	sg.insert('b','d');

	sg.print();
	return 0;
}

