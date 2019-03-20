/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/KeyNode.hpp"

KeyNode::KeyNode(char* i_key, int i_key_len, KeyNode* i_next)
        : key(i_key), key_len(i_key_len), next(i_next) {}

KeyNode::~KeyNode() {

}

char* KeyNode::get_key() const {
    return key;
}

void KeyNode::set_key(char* i_key) {
    KeyNode::key = i_key;
}

int KeyNode::get_key_len() const {
    return key_len;
}

void KeyNode::set_key_len(int i_key_len) {
    KeyNode::key_len = i_key_len;
}

KeyNode* KeyNode::get_next() const {
    return next;
}

void KeyNode::set_next(KeyNode* i_next) {
    KeyNode::next = i_next;
}
