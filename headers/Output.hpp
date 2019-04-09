/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_OUTPUT_HPP
#define HASH_TABLE_OUTPUT_HPP

#include "HashList.hpp"

/**
 * @brief Class Output
 *
 * This is the output class for the hash table, which is mostly a wrapper for various
 * console printing and formatting functions.
 */
class Output {
protected:
    // Output state
    USI_t state;

public:
    // Basic constructor
    explicit Output(USI_t i_state);

    // Destructor
    virtual ~Output();

    // Gets
    USI_t get_state() const;

    // Sets
    void set_state(USI_t i_state);


    static void print_node(KeyNode* i_keynode);

    static void print_list(HashList* i_hashlist);

};


#endif //HASH_TABLE_OUTPUT_HPP
