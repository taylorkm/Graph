#ifndef NODE_H
#define NODE_H


template<class item_type>
class Node {

public:
	Node();
	Node(item_type x);
	const item_type& getdata(); // a reference to the data field

private:
	item_type data;
	Node* prev, * next;
};

#include "Node.cpp" 

#endif




