#include <iostream>
#include <vector>
#include <string>
#include "Node.hpp"


/* Default constructor */
template<class item_type>
Node<item_type>::Node() {	
	data = 0;
	prev = next = nullptr;	
}


/* Custom constructor 1 */
template<class item_type>
Node<item_type>::Node(item_type x){	
	data = x;
	prev = next = nullptr;
}


/* A reference to the data field  */
template<class item_type>
const item_type& Node<item_type>::getdata(){	
	return data;
}



