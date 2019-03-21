/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_OUTPUT_HPP
#define HASH_TABLE_OUTPUT_HPP

/**
 * @brief Class Output
 *
 * This is the output class for the hash table, which is mostly a wrapper for various
 * console printing and formatting functions.
 */
class Output {
protected:
    // Placeholder variable
    int dummy_var;

public:
    // Basic constructor
    Output(int i_dummy_var);

    // Destructor
    virtual ~Output();

    // Gets
    int get_dummy_var() const;

    // Sets
    void set_dummy_var(int i_dummy_var);

    // TODO implement print function
    // TODO implement formatting function
};


#endif //HASH_TABLE_OUTPUT_HPP
