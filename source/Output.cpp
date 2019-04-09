/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/Output.hpp"
#include <iostream>

Output::Output(USI_t i_state)
        : state(i_state) {

}

Output::~Output() = default {

}

USI_t Output::get_state() const {
    return state;
}

void Output::set_state(USI_t i_state) {
    Output::state = i_state;
}

void Output::print_node(KeyNode* i_keynode) {
    using namespace std;

    if (i_keynode && i_keynode->get_key() && i_keynode->get_key_len()) {
        cout << "| ";
        cout << "Key: " << i_keynode->get_key();
        cout << " | ";
        cout << "Key length: " << i_keynode->get_key_len();
        cout << " | ";
        cout << "Next node: ";
        i_keynode->get_next() ? cout << i_keynode->get_key() << " |" << endl
                              : cout << "NULL |" << endl;
    }
}

void Output::print_list(HashList* i_hashlist) {
    using namespace std;

    KeyNode* cur_node = i_hashlist->get_keys();
    while(cur_node) {
        Output::print_node(cur_node);
        cur_node = cur_node->get_next();
    }
}
