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
    explicit HashList(USI_t num_keys = 0, KeyNode* keys = nullptr);

    // Destructor
    // Traverses the internal list of keys, deletes all entries
    virtual ~HashList();

    // Gets
    USI_t get_num_keys() const;

    KeyNode* get_keys() const;

    // Sets
    void set_num_keys(USI_t i_num_keys);

    void set_keys(KeyNode* i_keys);

};


#endif //HASH_TABLE_HASHLIST_HPP
