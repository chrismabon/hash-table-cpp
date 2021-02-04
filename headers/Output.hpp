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
 * @file Output.hpp
 */

#ifndef HASH_TABLE_OUTPUT_HPP
#define HASH_TABLE_OUTPUT_HPP

#include <system_error>
#include "HashList.hpp"

/**
 * @class Output
 * @brief Aggregates print and formatting functions
 *
 * This is the output class for the hash table, which is mostly a wrapper for various
 * console printing and formatting functions.
 */
class Output {
private:
    /// #####################
    /// ### CLASS MEMBERS ###
    /// #####################

    /**
     * OUTPUT STATE
     *  -
     */
    SmInt _state;

public:
    enum class ErrCode {
        SUCCESS = 0,
        GEN_EXC = 1,

        KEY_EMPTY = 10
    };

    // Basic constructor
    explicit Output(SmInt state);

    // Destructor
    virtual ~Output();

    // Gets
    SmInt get_state() const;

    // Sets
    void set_state(SmInt state);

    /// #######################
    /// ### PRINT FUNCTIONS ###
    /// #######################

    /**
     * PRINT NODE
     * @param keyNode Prints this individual node
     */
    static void print_node(KeyNode* keyNode) const;

    /**
     * PRINT LIST
     * @param hashList Prints this list and its member nodes
     */
    static void print_list(HashList* hashList) const;

    /**
     * PRINT EXCEPTION
     * @param excep Prints this error message
     */
    static void print_excep(std::string excep) const;
};


#endif //HASH_TABLE_OUTPUT_HPP
