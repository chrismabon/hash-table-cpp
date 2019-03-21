/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/Output.hpp"

Output::Output(int i_dummy_var)
        : dummy_var(i_dummy_var) {}

Output::~Output() = default {

}

int Output::get_dummy_var() const {
    return dummy_var;
}

void Output::set_dummy_var(int i_dummy_var) {
    Output::dummy_var = i_dummy_var;
}
