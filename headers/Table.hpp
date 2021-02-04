/*
 *  Copyright 2021 Umbra Aeterna Labs <https://github.com/Umbra-Aeterna-Labs>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/**
 * @package hash-table-cpp
 * @file Table.hpp
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
    /// #####################
    /// ### CLASS MEMBERS ###
    /// #####################

    /**
     * FILLED BUCKETS
     * -Should be <75% of capacity for performance reasons
     */
    LgInt fill;

    /**
     * TABLE SIZE
     * -Total size of the array (not table capacity)
     * -Must be a power of 2
     */
    LgInt tblSize;

    /**
     * TABLE
     * -Underlying array of hash lists
     */
    HashList** table;

public:
    /// #################################
    /// ### CONSTRUCTORS & DESTRUCTOR ###
    /// #################################

    /**
     * PRIMARY CONSTRUCTOR
     * @brief Default value for fill and table size is 0, and nullptr for table array
     */
    Table(LgInt tblSizeArg, LgInt fillArg = 0, HashList** tableArg);

    /**
     * DESTRUCTOR
     * @brief Clears the table of entries and frees allocated memory
     */
    virtual ~Table();

    /// ###########################
    /// ### GET & SET FUNCTIONS ###
    /// ###########################

    /**
     * GET FILL
     *  @brief Returns the number of filled buckets
     */
    LgInt getFill() const;

    /**
     * GET TABLE SIZE
     *  @brief Returns the total size of the array
     */
    LgInt getTblSize() const;

    /**
     * GET TABLE
     *  @brief Returns a pointer to the array of hash lists
     */
    HashList** getTable() const;

    /**
     * SET FILL
     * @brief Assigns given integer value to fill
     * @param key   unsigned long int
     */
    void setFill(LgInt fillArg);

    /**
     * SET TABLE SIZE
     * @brief Assigns given integer value to tableSize
     * @param key   unsigned long int
     */
    void setTblSize(LgInt tblSizeArg);

    /**
     * SET TABLE
     * @brief Assigns given hash list array pointer to table array var
     * @param key   unsigned long int
     */
    void setTable(HashList** tableArg);

};


#endif //HASH_TABLE_TABLE_HPP
