/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/HashList.hpp"

HashList::HashList(int i_num_keys, KeyNode* i_keys)
        : num_keys(i_num_keys), keys(i_keys) {}

HashList::~HashList() {

}

int HashList::get_num_keys() const {
    return num_keys;
}

void HashList::set_num_keys(int i_num_keys) {
    HashList::num_keys = i_num_keys;
}

KeyNode* HashList::get_keys() const {
    return keys;
}

void HashList::set_keys(KeyNode* i_keys) {
    HashList::keys = i_keys;
}
