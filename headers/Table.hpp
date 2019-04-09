/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_TABLE_HPP
#define HASH_TABLE_TABLE_HPP

#include "Config.hpp"
#include "HashList.hpp"

/**
 * @brief Class Table
 *
 * This is the hash table class, which contains an array of hash lists,
 * and some basic operations such as:
 *      - add and delete keys
 *      - lookup and peek at key(s) for given hash
 *      - check if a key or hash is already an entry in the table
 *      - generate a hash from a key without adding it to the table
 *      - clear the table of all entries
 */
class Table {
protected:
    // Number of occupied buckets in the table
    ULLI_t fill;

    // Total size of the array (not actual table capacity)
    // Must be a power of 2
    ULLI_t tbl_size;

    // Pointer to array of hash lists
    HashList** table;

public:
    // Basic constructor
    Table(ULLI_t i_fill, ULLI_t i_tbl_size, HashList** i_table);

    // Destructor
    // Frees all hash entries
    virtual ~Table();

    // Gets
    ULLI_t get_fill() const;

    ULLI_t get_tbl_size() const;

    HashList** get_table() const;

    // Sets
    void set_fill(ULLI_t i_fill);

    void set_tbl_size(ULLI_t i_tbl_size);

    void set_table(HashList** i_table);

    // TODO implement hash function
    ULLI_t hash_str(char* i_key);

    // TODO implement "add entry" function
    ULLI_t add_entry(char* i_entry);

    // TODO implement "delete entry" function
    ULLI_t del_entry(KeyNode* i_entry);

    // TODO implement "find keys" function
    HashList* find_keys(ULLI_t i_hash);

    // TODO implement "check key" function

    // TODO implement "clear table" function
    ULLI_t clear_table();
};


#endif //HASH_TABLE_TABLE_HPP
