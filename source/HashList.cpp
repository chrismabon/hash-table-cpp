/*
 * HashList.cpp
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

#include "../headers/HashList.hpp"

HashList::HashList() {
    HashList::_numKeys = 0;
    HashList::_headKey = nullptr;
}

HashList::HashList(SmInt numKeys, KeyNode* keys = nullptr)
        : _numKeys(numKeys), _headKey(keys) {

}

HashList::~HashList() = default {
    bool toDelete = (HashList::_headKey) && (HashList::_numKeys);
    switch (toDelete) {
        case true:
            KeyNode* cur = HashList::_headKey;
            KeyNode* cur_del = cur;
            while (cur) {
                delete cur_del;
                cur_del = cur;
                cur = cur->getNext();
            }
            break;
        default:
            break;
    }
}

SmInt HashList::getNumKeys() const {
    return _numKeys;
}

void HashList::setNumKeys(SmInt numKeys) {
    HashList::_numKeys = numKeys;
}

KeyNode* HashList::getKeys() const {
    return _headKey;
}

void HashList::setHeadKey(KeyNode* keynode) {
    HashList::_headKey = keynode;
}
