#ifndef ENCRYPOTR_H
#define ENCRYPTOR_H

#include <string>

/***************************************************************************//**
 * This class simply encrypts a block of characters
 * using a symmetric encryption algorithm and a defined key.
 ******************************************************************************/

class Encryptor
{
 
public:	
     
   /***************************************************************************//**
    * A defaulte constructor, it inits defualt valuse to member fields.
    ******************************************************************************/
    Encryptor(); 

   /***************************************************************************//**
    * This constuctor gets the block size as parameter, then sets it in
    * block_size member field.
    ******************************************************************************/ 
    Encryptor(const size_t block);

   /***************************************************************************//**
    * This member function encrypts a block of data(characters).
    * It has only a parameter: refrence of the block we want to encrypt
    * It encrypts block in place
    ******************************************************************************/
    void encrypt(std::string& block);

   /***************************************************************************//**
    * This member function returns the key value.
    ******************************************************************************/
    std::string getKey();

   /***************************************************************************//**
    * This member function generates a new key randomly,
    * then puts it in key member field.
    ******************************************************************************/
    void generate_newKey();

    
   /***************************************************************************//**
    * This member function set a new key in key member field.
    ******************************************************************************/
    void set_new_key(const std::string _key);

private:
    const size_t block_size; ///< size of block in bytes
    std::string key; 

}


#endif
