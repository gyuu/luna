#ifndef STATE_H
#define STATE_H

#include <string>

namespace luna
{
    class String;

    class State
    {
    public:
        void LoadModule();
        String *GetCurrentModule() const;
        String *GetString(const std::string &str);
    };
} // namespace luna

#endif // STATE_H
