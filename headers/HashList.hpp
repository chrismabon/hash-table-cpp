/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_HASHLIST_HPP
#define HASH_TABLE_HASHLIST_HPP

#include "Config.hpp"
#include "KeyNode.hpp"

/**
 * @brief Class HashList
 *
 * This is the linked list class to hold unique key nodes of the same
 * hashed value (hash collision).
 *
 */
class HashList {
protected:
    // Total collision entries for associated hash value
    USI_t num_keys;

    // Unidirectional list of collision entries
    KeyNode* keys;

public:
    // Basic constructor
    HashList(USI_t num_keys = 0, KeyNode* keys = nullptr);

    // Destructor
    // Traverses the internal list of keys, deletes all entries
    virtual ~HashList();

    // Gets
    USI_t get_num_keys() const;

    KeyNode* get_keys() const;

    // Sets
    void set_num_keys(USI_t i_num_keys);

    void set_keys(KeyNode* i_keys);

    // TODO implement "append node" function
    USI_t append_node(KeyNode* i_keynode);

    // TODO implement "delete node" function
    USI_t delete_node(KeyNode* i_keynode);

    // TODO implement "peek node" function
    HashList* peek_nodes(USI_t i_hash, USI_t i_index = -1);

};


#endif //HASH_TABLE_HASHLIST_HPP
