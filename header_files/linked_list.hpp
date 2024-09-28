/**
 * @file linked_list.hpp
 * @brief C++ Header file that declares all of the methods and properites of a linked list
 */
#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"
#include <vector>
#include <ostream>

/**
 * Linked List Class with Methods and Properties
 */
class Linked_list {
    public: 
        /**
         * Constructor
         * Creates an new empty Linked List object
         */
        Linked_list(); 
        /**
         * Constructor
         * Creates a linked list object from the values stored in the vector object.
         * Each value will be assigned a node, and all the nodes will form the linked list. 
         * The formation of the linked list object will maintain the same order as 
         * seen in the vector object. 
         * @param lst_values The values to assign the nodes.*/ 
        Linked_list( std::vector<int> lst_values ); 
        /**
         * Destructor
         * Removes all the nodes stored in the Linked list when the Linked List object is terminated
         */
        ~Linked_list(); 
        /**
         * Method will return the value stored in the node at the front of the linked list (head node) 
         * if not empty. Otherwise, it will throw an Out of Range Error
         * @return The value stored in the head node.
         * ### Example
         * @code
         * Linked_list lst = Linked_list( std::vector<int>( 3, 1 ) );
         * std::cout << lst.front() << std::endl; 
         * @endcode
         * #### Output: 
         * @code 
         * 1
         * @endcode
         */
        double front() const; 
        /**
         * Method will return a boolean value indicating if the linked list is empty
         * @return The status of the linked list being empty
         * ### Example 1
         * @code
         * Linked_list lst = Linked_list( std::vector<int>( 1, 1 ) );
         * std::cout << lst.empty() << std::endl; 
         * @endcode
         * #### Output: 
         * @code
         * 0
         * @endcode
         * ### Example 2
         * @code
         * Linked_list lst = Linked_list(); 
         * std::cout << lst.empty() << std::endl; 
         * @endcode
         * #### Output: 
         * @code
         * 1
         * @endcode
         * 
         */
        bool empty() const; 
        /**
         * Method will create a new node with the assigned value and placed it at the front of
         * linked list. 
         * @param new_value The value of the node you want to assign as the new head node
         * ### Example 
         * @code
         * Linked_list lst = Linked_list( std::vector<int>( 3, 2) ); 
         * std::cout << lst.front() << std::endl; 
         * 
         * lst.push_front( 4 ); 
         * 
         * std::cout << lst.front() << std::endl; 
         * @endcode
         * #### Output: 
         * @code 
         * 2
         * 4
         * @endcode
         */
        void push_front( int new_value );
        /**
         * Method will remove the current head node and replace it with 
         * the next node in the list, if there is any.
         * If the linked list is empty, nothing will happen
         * ### Example 
         * @code 
         * Linked_list lst = Linked_list();
         * lst.push_front( 3 );
         * lst.push_front( 4 ); 
         * std::cout << lst.front() << std::endl;
         * 
         * lst.pop_front();
         * 
         * std::cout << lst.front() << std::endl; 
         * @endcode
         * #### Output: 
         * @code
         * 4
         * 3
         * @endcode 
         */
        void pop_front(); 
        /**
         * Method will clear all the nodes in the linked list, leaving an empty linked list object.
         * ### Example 
         * @code 
         * Linked_list lst = Linked_list( std:vector<int>( 10, 1 ) ); 
         * std::cout << lst.empty() << std::endl; 
         * 
         * lst.clear();
         * 
         * std::cout << lst.empty() << std::endl;
         * @endcode
         * #### Output: 
         * @code
         * 0
         * 1
         * @endcode
         */
        void clear(); 


    private: 
        /**
         * Allows this function to access the private member variables 
         */
        friend std::ostream &operator<<( std::ostream& out, Linked_list const& lst ); 
        /**
         * Points to the next node in the Linked List
         */
        Node* head_;
};
/**
 * Operator Overloading to be able to format the memebers of a linked list 
 * in a personalized view.
 * @param out The output data
 * @param lst The Linked list object
 * ### Example
 * @code
 * Linked_list lst = Linked_list( std::vector<int>( 4, 5 ) );
 * std::cout << lst << std::endl; 
 * @endcode
 * #### Output: 
 * @code
 * HEAD -> 5 -> 5 -> 5 -> 5 -> NULLPTR
 * @endcode
 */
std::ostream &operator<<( std::ostream& out, Linked_list const& lst ); 
#endif