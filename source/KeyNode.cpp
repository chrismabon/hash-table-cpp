/*
 * KeyNode.cpp
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

#include <limits>
#include <stdexcept>
#include <system_error>
#include "../headers/KeyNode.hpp"
#include "../headers/Output.hpp"

KeyNode::KeyNode()
        : _key(nullptr), _keyLen(0), _next(nullptr) {

}

KeyNode::KeyNode(std::string key, KeyNode* next) : _next(next) {
    try {
        if (!key.empty) {
            KeyNode::_key = key;
            EXP_STR(KeyNode::_key);
            KeyNode::_keyLen = static_cast<SmInt>(key.length());
        }
        else {
            KeyNode::_keyLen = 0;
            KeyNode::_key = nullptr;
            KeyNode::_next = nullptr;
            throw std::invalid_argument::invalid_argument(" ");
        }
    }
    catch (const std::system_error &err) {
        if (err.code() == std::errc::invalid_argument) {
            Output::print_excep(EXCEPTIONS[ERR_INVALID_KEY_ARG]);
        }
    }
    catch (...) {
        std::string ex = EXCEPTIONS[ERR_GEN_EXCEPTION];
        Output::print_excep(ex);
    }
}

KeyNode::KeyNode(std::string key) {
    try {
        if (!key.empty) {
            KeyNode::_key = key;
            EXP_STR(KeyNode::_key);
            KeyNode::_keyLen = static_cast<SmInt>(key.length());
        }
        else {
            KeyNode::_keyLen = 0;
            KeyNode::_key = nullptr;
            KeyNode::_next = nullptr;
            throw std::invalid_argument::invalid_argument(" ");
        }
    }
    catch (const std::system_error &err) {
        if (err.code() == std::errc::invalid_argument) {
            Output::print_excep(EXCEPTIONS[ERR_INVALID_KEY_ARG]);
        }
    }
    catch (...) {
        std::string ex = EXCEPTIONS[ERR_GEN_EXCEPTION];
        Output::print_excep(ex);
    }
}

KeyNode::~KeyNode() = default {
    delete KeyNode::_key;
}

std::string KeyNode::getKey() const {
    return _key;
}

SmInt KeyNode::getKeyLen() const {
    return _keyLen;
}

KeyNode* KeyNode::getNext() const {
    return _next;
}

void KeyNode::setKey(std::string key) {
    KeyNode::_key = key;
}

void KeyNode::setKeyLen(SmInt keyLen) {
    KeyNode::_keyLen = keyLen;
}

void KeyNode::setNext(KeyNode* next) {
    KeyNode::_next = next;
}
