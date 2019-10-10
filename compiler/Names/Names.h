#ifndef SORBET_COMPILER_NAMES_H
#define SORBET_COMPILER_NAMES_H

#include "core/NameRef.h"

namespace sorbet::compiler {
class Names {
public:
    static core::NameRef registerClass;
    static core::NameRef registerMethod;

    static void init(core::GlobalState &gs);
};
} // namespace sorbet::compiler
#endif
