#ifndef cplusclass1399_sajjad_ENCRYPTION_H
#define cplusclass1399_sajjad_ENCRYPTION_H

#include<string>
class Encryption {
private:
    std::string m_input;
    std::string m_output;
public:
    Encryption(std::string input, std::string output);
    void encrypt();
};
#endif
