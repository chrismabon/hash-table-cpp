/*
 * Config.hpp
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

#ifndef HASH_TABLE_CONFIG_HPP
#define HASH_TABLE_CONFIG_HPP

#include <string>

/// ####################
/// ### TYPE ALIASES ###
/// ####################

/**
 * INTEGERS (UNSIGNED)
 */
using SmInt = unsigned short int;
using LgInt = unsigned long long int;


/**
 * STRING CAPACITY
 * -String content cannot be larger than 512 characters
 */
extern const STR_CAP = 512;

/// ##################
/// ### EXCEPTIONS ###
/// ##################

/**
 * ERROR CODES
 *  -Codes 0 through 9 indicate overall program exceptions
 *  -Codes 10 through 19 indicate more specific exceptions
 */
const std::string EXCEPTIONS[64] = {
        "Success. ",                                                    /// Error code 0
        "A general exception has occurred. ",
        "",
        "",
        "",
        "",                                                             /// 5
        "",
        "",
        "",
        "",
        "Invalid argument: input key cannot be empty. ",                /// 10
        "",
        "",
        "",
        "",
        "",                                                             /// 15
        "",
        "",
        "",
        "",                                                             /// 19
};

enum ERR_CODES {
    ERR_SUCCESS = 0,
    ERR_GEN_EXCEPTION = 1,
    ERR_INVALID_KEY_ARG = 10,

};

#endif //HASH_TABLE_CONFIG_HPP
