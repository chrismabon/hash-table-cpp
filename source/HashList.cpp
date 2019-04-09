/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/HashList.hpp"

HashList::HashList(USI_t i_num_keys = 0, KeyNode* i_keys = nullptr)
        : num_keys(i_num_keys), keys(i_keys) {

}

HashList::~HashList() {

}

USI_t HashList::get_num_keys() const {
    return num_keys;
}

void HashList::set_num_keys(USI_t i_num_keys) {
    HashList::num_keys = i_num_keys;
}

KeyNode* HashList::get_keys() const {
    return keys;
}

void HashList::set_keys(KeyNode* i_keys) {
    HashList::keys = i_keys;
}
