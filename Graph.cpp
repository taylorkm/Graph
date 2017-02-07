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
int Graph<item_type>::find(const item_type& x) {
	/* Return the index of x if it is a node in the graph,
	otherwise -1. */
	int ans = -1;
	for ( int i = 0; i<_size; i++ ) {
		if ( x == node[i].getdata() ) {
			ans = i;
			break;
		}
	}
	return ans;
}



