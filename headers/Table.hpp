/*
 * Table.hpp
 *
 * Hash Table
 * A data structure template in C++
 * Copyright (C) 2019 Chris Mabon
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/**
 * @package hash_table
 * @author Chris Mabon
 * https://github.com/chrismabon
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
private:
    // Number of occupied buckets in the table
    LgInt fill;

    // Total size of the array (not actual table capacity)
    // Must be a power of 2
    LgInt tbl_size;

    // Pointer to array of hash lists
    HashList** table;

public:
    // Basic constructor
    Table(LgInt i_fill, LgInt i_tbl_size, HashList** i_table);

    // Destructor
    // Frees all hash entries
    virtual ~Table();

    // Gets
    LgInt get_fill() const;

    LgInt get_tbl_size() const;

    HashList** get_table() const;

    // Sets
    void set_fill(LgInt i_fill);

    void set_tbl_size(LgInt i_tbl_size);

    void set_table(HashList** i_table);

};


#endif //HASH_TABLE_TABLE_HPP
