/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_TABLE_HPP
#define HASH_TABLE_TABLE_HPP

#include "HashList.hpp"

class Table {
private:
    int num_entries;
    int tbl_size;
    HashList** table;

public:
    Table(int num_entries, int tbl_size, HashList** table);

    virtual ~Table();

    int get_num_entries() const;

    void set_num_entries(int i_num_entries);

    int get_tbl_size() const;

    void set_tbl_size(int i_tbl_size);

    HashList** get_table() const;

    void set_table(HashList** i_table);
};


#endif //HASH_TABLE_TABLE_HPP
