#ifndef STLGRAPH_H
#define STLGRAPH_H
#include <map>
#include <vector>

template<class item_type>
class STLGraph {

public:	

	void insert( item_type x, item_type y );
	int size();
	void print();
	
private:
	std::map< item_type , std::vector <item_type> > node;
};

#include "STLGraph.cpp"

#endif




