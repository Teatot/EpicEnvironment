/**
 * @file node.cpp
 * @brief Defining all the methods from the Node
 */

#include "../header_files/node.hpp"

Node::Node( int const new_val ): 
val_{ new_val }, 
p_next_{ nullptr } { 
}

Node::Node( int const new_val, Node*const p_new_head ): 
val_{ new_val }, 
p_next_{ p_new_head } {
}

int Node::getValue() const { 
    return val_; 
}

Node* Node::get_nextNode() const {
    return p_next_; 
}

void Node::value( int const new_val ) {
    val_ = new_val; 
    return; 
}

void Node::p_next( Node*const p_new_next ) {
    p_next_ = p_new_next; 
    return; 
}