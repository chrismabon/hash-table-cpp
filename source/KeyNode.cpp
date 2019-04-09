/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/KeyNode.hpp"

explicit KeyNode::KeyNode(char* i_key = nullptr, USI_t i_key_len = 0, KeyNode* i_next = nullptr)
        : key(i_key), key_len(i_key_len), next(i_next) {
}

KeyNode::~KeyNode() {
    delete[] this->key;
}

char* KeyNode::get_key() const {
    return key;
}

USI_t KeyNode::get_key_len() const {
    return key_len;
}

KeyNode* KeyNode::get_next() const {
    return next;
}

void KeyNode::set_key(char* i_key) {
    KeyNode::key = i_key;
}

void KeyNode::set_key_len(USI_t i_key_len) {
    KeyNode::key_len = i_key_len;
}

void KeyNode::set_next(KeyNode* i_next) {
    KeyNode::next = i_next;
}
