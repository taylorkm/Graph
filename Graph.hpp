#ifndef GRAPH_H
#define GRAPH_H
#include "Node.hpp"

template<class item_type>
class Graph {
public:
	Graph(); // default constructor
	int find(const item_type& x); // return index of x if it is in the adjacency list, -1 otherwise
	void insert(item_type x, item_type y); // insert a directed edge from vertex x to y
	void print(); // display nodes and their adjacency lists 
	int size();

private:
	static const int kMax = 20;
	int _size;	
	Node<item_type>* node[kMax+1]; // the plus 1 for the case that the last node we add links with an also-unseen node 
	

};

#include "graph.cpp"

#endif




