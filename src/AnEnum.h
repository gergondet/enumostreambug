#ifndef _H_ANENUM_H_
#define _H_ANENUM_H_

#include <ostream>

namespace anamespace{

enum AnEnum
{
    ST_OK,
    ST_KO
};

}

/* ostream operators for states enum */
inline std::ostream & operator<<(std::ostream & out, const anamespace::AnEnum & e)
{
    switch(e)
    {
        case anamespace::ST_OK:
            out << "OK"; break;
        case anamespace::ST_KO:
            out << "KO"; break;
        default:
            out << "UNIMPLEMENTED"; break;
    }
    return out;
}

#endif
