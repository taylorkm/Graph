#include <iostream>
#include <vector>
#include <string>
#include "STLGraph.hpp"


template<class item_type>
void STLGraph<item_type>::insert( item_type x, item_type y ) {		
	node[ x ].push_back(y);
	node[ y ];
}

template<class item_type>
int  STLGraph<item_type>::size() { return node.size(); }

template<class item_type>
void STLGraph<item_type>::print() {
	for (auto it = node.begin(); it != node.end(); it++ ) {
		std::cout << it->first << " : ";
		for (auto& c : it->second) 
			std::cout << c << " ";
		std::cout << std::endl;
	}
}


