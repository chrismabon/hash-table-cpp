/*
 * KeyNode.hpp
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

#ifndef HASH_TABLE_KEYNODE_HPP
#define HASH_TABLE_KEYNODE_HPP

#define EXP_STR(key) ((key).reserve(STR_CAP))

#include "Config.hpp"

/**
 * @class KeyNode
 * @brief Holds a unique key value
 *
 * Keys are represented and manipulated as C++ strings.
 * Key length does *NOT* include the padding characters.
 * The pointer to the next node allows unidirectional traversal within the parent list class.
 */
class KeyNode {
private:
    /// #####################
    /// ### CLASS MEMBERS ###
    /// #####################

    /**
     * KEY VALUE
     *  -Pointer to C++ string
     */
    std::string _key;

    /**
     * KEY LENGTH
     *  -All key strings are padded with the ASCII value of the element's array offset modulo 94,
     *      plus the value 33 (ASCII offset + 1, which excludes the blank space ' '):
     *      ~If key[0] is empty, it is padded with ASCII value 0 + 33 = 33 (the character '!')
     *      ~If key[50] is empty, " " value 50 + 33 = 83 (the character 'X')
     *      ~If key[456] is empty, " " value 80 + 33 = 113 (the character 'q')
     */
    SmInt _keyLen;

    /**
     * LINK TO NEXT NODE
     *  -The value "nullptr" may be assigned to signify the end node
     */
    KeyNode* _next;

public:
    /// #################################
    /// ### CONSTRUCTORS & DESTRUCTOR ###
    /// #################################

    /**
     * EMPTY CONSTRUCTOR
     * @brief An empty KeyNode
     */
    KeyNode();

    /**
     * PRIMARY CONSTRUCTOR
     * @brief KeyNode with input key
     * @param key   String value assigned to _key
     */
    explicit KeyNode(std::string key);

    /**
     * SECONDARY CONSTRUCTOR
     * @brief KeyNode with input key and pointer to next node
     * @param key   String value assigned to _key
     * @param next   Link to next node in parent list (can be nullptr)
     */
    KeyNode(std::string key, KeyNode* next);

    /**
     * DESTRUCTOR
     * @brief Frees the key array
     */
    virtual ~KeyNode();

    /// ###########################
    /// ### GET & SET FUNCTIONS ###
    /// ###########################

    /**
     * GET KEY
     *  @brief Returns the key string within a node
     */
    std::string getKey() const;

    /**
     * GET KEY LENGTH
     *  @brief Returns the actual un-padded size of the key
     */
    SmInt getKeyLen() const;

    /**
     * GET NEXT
     *  @brief Returns the pointer to the next node in the list
     */
    KeyNode* getNext() const;

    /**
     * SET KEY
     * @brief Assigns given key string to node
     * @param key   C++ strings only
     */
    void setKey(std::string key);

    /**
      * SET KEY LENGTH
      * @brief Assigns given value to the key length variable
      * @param keyLen   Unsigned short integer type
      */
    void setKeyLen(SmInt keyLen);

    /**
      * SET NEXT
      * @brief Assigns given pointer to the link variable
      * @param next   KeyNode address to which next is assigned
      */
    void setNext(KeyNode* next);
};


#endif //HASH_TABLE_KEYNODE_HPP
