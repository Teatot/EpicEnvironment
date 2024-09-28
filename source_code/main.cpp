#include <iostream> 
#include "../header_files/node.hpp"
#include "../header_files/linked_list.hpp"

int main(); 

int main() {
    Linked_list lst1 = Linked_list( std::vector<int>( 3, 1 ) ); 
    std::cout << lst1 << std::endl; 
    return 0; 
}