/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/HashList.hpp"

HashList::HashList(int hash, int num_keys, KeyNode* keys) : hash(hash), num_keys(num_keys), keys(keys) {}

HashList::~HashList() {

}

int HashList::get_hash() const {
    return hash;
}

void HashList::set_hash(int i_hash) {
    HashList::hash = i_hash;
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
