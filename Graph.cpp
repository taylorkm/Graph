#include <iostream>
#include <vector>
#include <string>
#include "Graph.hpp"
#include "Node.hpp"

template<class item_type>
Graph<item_type>::Graph() {	
	_size = 0; // identifies position of last element
};


template<class item_type>
void Graph<item_type>::insert(item_type x, item_type y) {
	if (_size >= kMax) {
		std::cout << "Graph is Full" << std::endl;
		return;
	} else {
		int x_idx = find(x);
		int y_idx = find(y);
		if ( x_idx < 0 ) {
			// x isn't in the adjacency list yet, so add it
			node[ _size ] = new Node<item_type>(x);
			_size++;
		} else {
			// add y to end adjacency list of x	by squeezing y in as first neighbor				
			Node<item_type>* t = new Node<item_type>(y);
			t->next = node[ x_idx ]->next;
			node[ x_idx ]->next = t;
		}

		// for keeping track of y's presence in the graph
		if ( y_idx < 0 && _size < kMax ) {
			node[ _size ] = new Node<item_type>(y);
			_size++;
		} 
	}
}


template<class item_type>
int Graph<item_type>::find(const item_type& x) {
	/* Return the index of x if it is a node in the graph,
	otherwise -1. */
	int ans = -1;
	for ( int i = 0; i<_size; i++ ) {
		if ( x == node[i]->getdata() ) {
			ans = i;
			break;
		}
	}
	return ans;
}



template<class item_type>
void Graph<item_type>::print() {
	/* Print the adjacency list */
	for (int i = 0; i<_size; i++) {
		Node<item_type>* t = node[i];
		while (t) {
			std::cout << t->data << "->" ;
			t = t->next;
		}
		std::cout << std::endl;
	}
}


template<class item_type>
int Graph<item_type>::size() {
	return _size;
}


