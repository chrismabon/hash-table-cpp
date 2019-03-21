/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_TABLE_HPP
#define HASH_TABLE_TABLE_HPP

#include "HashList.hpp"

/**
 * @brief Class Table
 *
 * This is the hash table class, which contains an array of hash lists,
 * and some basic operations such as:
 *      -add key
 *      -find keys based on hash
 *      -delete key
 *      -hash a value
 *      -clear the table
 *      -print a hash entry to console
 */
class Table {
protected:
    // Number of occupied buckets in the table
    int fill;

    // Total size of the array (not actual table capacity)
    // Must be a power of 2
    int tbl_size;

    // Pointer to array of hash lists
    HashList** table;

public:
    // Basic constructor
    Table(int i_fill, int i_tbl_size, HashList** i_table);

    // Destructor
    // Frees all hash entries
    virtual ~Table();

    // Gets
    int get_fill() const;

    int get_tbl_size() const;

    HashList** get_table() const;

    // Sets
    void set_fill(int i_fill);

    void set_tbl_size(int i_tbl_size);

    void set_table(HashList** i_table);

    // TODO implement hash function
    // TODO implement "add entry" function
    // TODO implement "delete entry" function
    // TODO implement "find keys" function
    // TODO implement "clear table" function
};


#endif //HASH_TABLE_TABLE_HPP
