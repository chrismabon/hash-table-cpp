/*
 * HashList.hpp
 *
 * Hash Table
 * A data structure template in C++
 * Copyright (C) 2019 Chris Mabon
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/**
 * @package hash_table
 * @author Chris Mabon
 * https://github.com/chrismabon
 */

#ifndef HASH_TABLE_HASHLIST_HPP
#define HASH_TABLE_HASHLIST_HPP

#include "Config.hpp"
#include "KeyNode.hpp"

/**
 * @class HashList
 * @brief Linked list class to hold unique keys with common hashed value
 *
 * The hashed value is *NOT* stored in the list, it is computed as needed.
 * head_key holds the first KeyNode appended to the list (unless the first node is removed
 *      while other nodes are in the list, the second node will become the head node).
 * Instantiation of HashList classes normally occurs only when a key is hashed and added to the table.
 * Empty lists are the result of key deletion and are retained in the event they key is re-added.
 *
 * OPERATIONS
 *  -append key
 *  -delete key
 *  -find key
 *  -clear list (delete hash)
 */
class HashList {
private:
    /// #####################
    /// ### CLASS MEMBERS ###
    /// #####################

    /**
     * LIST LENGTH
     *  -Length of >1 indicates hash collision(s)
     */
    SmInt _numKeys;

    /**
     * HEAD NODE
     *  -Can contain value nullptr indicating a deleted key
     */
    KeyNode* _headKey;

public:
    /// #################################
    /// ### CONSTRUCTORS & DESTRUCTOR ###
    /// #################################

    /**
     * EMPTY CONSTRUCTOR
     * @brief An empty HashList
     */
    HashList();

    /**
     * PRIMARY CONSTRUCTOR
     * @brief HashList with number of keys and head node
     * @param numKeys   Count of nodes in list, numKeys >1 indicates (a) hash collision(s)
     * @param keys   Points to first node in the list
     */
    explicit HashList(SmInt numKeys = 0, KeyNode* keys = nullptr);

    /**
     * DESTRUCTOR
     * @brief Traverses the internal list of keys, deleting all entries
     */
    virtual ~HashList();

    /// ###########################
    /// ### GET & SET FUNCTIONS ###
    /// ###########################

    /**
     * GET NUM KEYS
     *  @brief Returns the number of keys in the list
     *  @return Unsigned short integer return type
     */
    SmInt getNumKeys() const;

    /**
     * GET KEYS
     *  @brief Returns a pointer to the top node of the list
     */
    KeyNode* getKeys() const;

    /**
      * SET NUMBER OF KEYS
      * @brief Assigns given value to the number of keys variable
      * @param key   Unsigned short integer type
      */
    void setNumKeys(SmInt numKeys);

    /**
      * SET HEAD KEY
      * @brief Assigns given node address to head node variable
      * @param key   C++ strings only
      */
    void setHeadKey(KeyNode* keynode);

    /// #######################
    /// ### LIST OPERATIONS ###
    /// #######################

};


#endif //HASH_TABLE_HASHLIST_HPP
