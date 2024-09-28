/**
 * @file linked_list.cpp
 * @brief Defining all the methods for the Linked_list class
 */

#include "../header_files/linked_list.hpp"
#include <stdexcept>
#include <cassert>

Linked_list::Linked_list(): 
head_{ nullptr } {
}

Linked_list::Linked_list( std::vector<int> lst_values ): 
head_{} {
    Node* p_node;
    for ( int i = lst_values.size() - 1; i >= 0; i-- ) { 
        if ( i == lst_values.size() - 1 ) {
            p_node = new Node( lst_values[i] );
            continue; 
        }
        p_node = new Node( lst_values[i], p_node ); 
    }
    head_ = p_node; 
}

Linked_list::~Linked_list() {
    while ( !empty() ) {
        pop_front(); 
    }
}

double Linked_list::front() const {
    if ( head_ != nullptr ) {
        return head_->getValue(); 
    }
    assert( head_ == nullptr ); 
    throw std::out_of_range{ "The Linked List is empty" };
}

bool Linked_list::empty() const {
    return head_ == nullptr; 
}

void Linked_list::push_front( int new_value ) {
    head_ = new Node( new_value, head_ ); 
}

void Linked_list::pop_front() { 
    Node* p_old_node = head_; 
    head_ = head_->get_nextNode(); // Sets New Head
    // Critical Code Start
    delete p_old_node; 
    p_old_node = nullptr; 
    // Critical Code End
}

void Linked_list::clear() {
    while ( !empty() ) {
        pop_front(); 
    }
}

std::ostream &operator<<( std::ostream& out, Linked_list const& lst ) {
    out << "HEAD -> ";

    for ( Node *p_head_node { lst.head_ }; p_head_node != nullptr; p_head_node = p_head_node->get_nextNode() )
    {
        out << p_head_node->getValue() << " -> "; 
    }
    
    out << "NULLPTR";

    return out;  
}