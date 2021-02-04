#[[
    Copyright 2021 Umbra Aeterna Labs <https://github.com/Umbra-Aeterna-Labs>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
]]

cmake_minimum_required(VERSION 3.10)
project(hash_table)

set(CMAKE_CXX_STANDARD 11)

add_executable(hash_table
        test/test.cpp
        headers/Config.hpp
        source/KeyNode.cpp 
        headers/KeyNode.hpp 
        source/HashList.cpp 
        headers/HashList.hpp 
        source/Table.cpp 
        headers/Table.hpp 
        source/Output.cpp 
        headers/Output.hpp)