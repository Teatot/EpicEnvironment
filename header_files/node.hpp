/**
 * @file node.hpp
 * @brief C++ header file that declares all the methods and properties of a node for a linked list
 */
#ifndef NODE_HPP
#define NODE_HPP
/**
 * Node Properties and Methods for the Linked List
 */
class Node {
    public: 
        /**
         * Constructor
         * Creates a new node with an assigned value
         */
        Node( int const new_val );
        /**
         * Constructor
         * Creates a new node with an assigned value and an address pointing to the next head
         */
        Node( int const new_val, Node*const p_new_head ); 
        /**
         * Method that will return the current value being stored in the node
         * @returns The value stored in the node as a constant. 
         * 
         * ### Example 
         * @code
         * int my_val = 4; 
         * Node* p_node = new Node( my_val ); 
         * std::cout << p_node->getValue() << std::endl;  
         * @endcode
         * #### Output: 
         * @code
         * 4
         * @endcode
         */
        int getValue() const; 
        /**
         * Method that will return the address of the next node that the current node is pointing to
         * @returns The address of the next node store in the node as a constant. 
         * ### Example
         * @code
         * // Creating a Link Between Two Nodes
         * Node* p_tail_node = new Node( 4 );
         * Node* p_head_node = new Node( 4, p_tail_node );
         * 
         * std::cout << p_tail_node->get_nextNode() << std::endl; 
         * std::cout << p_head_node->get_nextNode() << std::endl; 
         * @endcode
         * #### Output: 
         * @code
         * nullptr
         * <Address of p_tail_node>
         * @endcode
         */
        Node* get_nextNode() const; 
        /**
         * Method that will modify the value of the current node with the requested value
         * @param new_val A constant integer value that we want to set to the node. 
         * @returns None
         * ### Example
         * @code
         * Node* p_node = new Node( 4 ); 
         * std::cout << p_node->getValue() << std::endl;
         * 
         * p_node->value( 10 );
         * 
         * std::cout << p_node->getValue() << std::endl;
         * @endcode
         * #### Output: 
         * @code
         * 4
         * 10
         * @endcode
         */
        void value( int const new_val ); 
        /**
         * Method that will modify the address of the next node in the current node
         * @param p_new_head A constant new address of the next node that we want to set to the node.
         * @returns None
         * ### Example
         * @code 
         * Node* p_old_back_node = new Node( 5 );
         * std::cout << "Address of 'p_old_back_node': " << p_old_back_node << std::endl; 
         * Node* p_front_node = new Node( 5, p_old_back_node ); 

         * std::cout << p_front_node->get_nextNode() << std::endl; 

         * Node* p_new_back_node = new Node( 6 ); 
         * std::cout << "Address of 'p_new_back_node': " << p_new_back_node << std::endl; 
         * // Changing the next node address
         * p_front_node->p_next( p_new_back_node ); 
         * 
         * std::cout << p_front_node->get_nextNode() << std::endl; 
         * @endcode
         * #### Output: 
         * @code
         * Address of 'p_old_back_node': <address_of_p_back_node>
         * <address_of_p_back_node>
         * Address of 'p_new_back_node': <address_of_p_new_node>
         * <address_of_p_new_node>
         * @endcode
         */
        void p_next( Node*const p_new_head ); 

    private:
        /**
         * The value assigned to the node */ 
        int val_; 
        /** The address of the next node that this node is pointing to */
        Node* p_next_;  
};
#endif