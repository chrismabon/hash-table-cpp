/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_KEYNODE_HPP
#define HASH_TABLE_KEYNODE_HPP

#include "Config.hpp"

/**
 * @brief Class KeyNode
 *
 * This is the node class to hold unique key values, normally contained
 * within a linked list class. Nodes are chained to represent unique
 * keys that share a hash value.
 */
class KeyNode {
protected:
    // Pointer to character string representing key value
    char* key;

    // Length of key strings
    // All key strings are really size 256 but are padded in the
    //      otherwise empty elements
    USI_t key_len;

    // Pointer to next key node in the hash list
    // The value "nullptr" may be assigned to signify the end node
    KeyNode* next;

public:
    // Basic constructors
    KeyNode();

    explicit KeyNode(const char* i_key);

    KeyNode(const char* i_key, USI_t i_key_len);

    KeyNode(char* i_key, USI_t i_key_len, KeyNode* i_next = nullptr);

    // Destructor
    // Frees the key array
    virtual ~KeyNode();

    // Gets
    char* get_key() const;

    USI_t get_key_len() const;

    KeyNode* get_next() const;

    // Sets
    void set_key(char* i_key);

    void set_key_len(USI_t i_key_len);

    void set_next(KeyNode* i_next);

    // Helper functions
    USI_t find_key_len(const char* i_key);

    char* copy_key(const char* i_key, USI_t i_key_len);
};


#endif //HASH_TABLE_KEYNODE_HPP
