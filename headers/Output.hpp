/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_OUTPUT_HPP
#define HASH_TABLE_OUTPUT_HPP


class Output {
public:
    Output(int dummy_var);

    virtual ~Output();

    int get_dummy_var() const;

    void set_dummy_var(int i_dummy_var);

private:
    int dummy_var;

public:

};


#endif //HASH_TABLE_OUTPUT_HPP
