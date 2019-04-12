/*
 * HashList.hpp
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

    // TODO finish comments on HashList header file
    HashList();

    // Basic constructor
    explicit HashList(SmInt numKeys = 0, KeyNode* keys = nullptr);

    // Destructor
    // Traverses the internal list of keys, deletes all entries
    virtual ~HashList();

    // Gets
    SmInt getNumKeys() const;

    KeyNode* getKeys() const;

    // Sets
    void setNumKeys(SmInt numKeys);

    void setHeadKey(KeyNode* keynode);

    // List operations
    // Add node
    void appendNode(KeyNode* keynode);
};


#endif //HASH_TABLE_HASHLIST_HPP
