/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/KeyNode.hpp"

KeyNode::KeyNode()
        : key(nullptr), key_len(0), next(nullptr) {
}

KeyNode::KeyNode(const char* i_key)
        : next(nullptr) {
    if (i_key) {
        USI_t new_key_len = KeyNode::find_key_len(i_key);
        if (new_key_len) {
            KeyNode::key = KeyNode::copy_key(i_key, new_key_len);
            KeyNode::key_len = new_key_len;
        }
    }
}

KeyNode::KeyNode(const char* i_key, USI_t i_key_len)
        : next(nullptr) {
    if (i_key && i_key_len) {
        KeyNode::key = KeyNode::copy_key(i_key, i_key_len);
        KeyNode::key_len = i_key_len;
    }
}

KeyNode::KeyNode(char* i_key, USI_t i_key_len, KeyNode* i_next)
        : next(i_next) {
    if (i_key && i_key_len) {
        KeyNode::key = KeyNode::copy_key(i_key, i_key_len);
        KeyNode::key_len = i_key_len;
    }
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
    USI_t i_key_len = KeyNode::find_key_len(i_key);
    KeyNode::key = KeyNode::copy_key(i_key, i_key_len);
}

void KeyNode::set_key_len(USI_t i_key_len) {
    KeyNode::key_len = i_key_len;
}

void KeyNode::set_next(KeyNode* i_next) {
    KeyNode::next = i_next;
}

USI_t KeyNode::find_key_len(const char* i_key) {
    USI_t key_len = 0;

    if (i_key) {
        const char* key_cur = i_key;

        for (USI_t i = 0; key_cur[i] != '\0'; i++) {
            key_len += 1;
        }
    }

    return key_len;
}

char* KeyNode::copy_key(const char* i_key, USI_t i_key_len) {
    char* new_key = nullptr;
    if (i_key && i_key_len) {
        new_key = new char[i_key_len + 1];
        for (USI_t i = 0; i < i_key_len + 1; i++) {
            new_key[i] = i_key[i];
        }
    }

    return new_key;
}