/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_KEYNODE_HPP
#define HASH_TABLE_KEYNODE_HPP

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
    // All key strings are really size 256 but are padded with zeroes in the
    //      otherwise empty elements
    int key_len;

    // Pointer to next key node in the hash list
    // The value "nullptr" may be assigned to signify the end node
    KeyNode* next;

public:
    // Basic constructor
    KeyNode(char* i_key, int i_key_len, KeyNode* i_next);

    // Destructor
    // Frees the key array
    virtual ~KeyNode();

    // Gets
    char* get_key() const;

    int get_key_len() const;

    KeyNode* get_next() const;

    // Sets
    void set_key(char* i_key);

    void set_key_len(int i_key_len);

    void set_next(KeyNode* i_next);
};


#endif //HASH_TABLE_KEYNODE_HPP
