/*
 * tuple_compiler.h
 * Copyright (c) 2007 Matti 'ccr' Hämäläinen
 * Copyright (c) 2014 John Lindgren
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions, and the following disclaimer in the documentation
 *    provided with the distribution.
 *
 * This software is provided "as is" and without any warranty, express or
 * implied. In no event shall the authors be liable for any damages arising from
 * the use of this software.
 */

#ifndef LIBAUDCORE_TUPLE_COMPILER_H
#define LIBAUDCORE_TUPLE_COMPILER_H

#include "index.h"
#include "tuple.h"

class TupleCompiler
{
public:
    struct Node;

    TupleCompiler ();
    ~TupleCompiler ();

    bool compile (const char * expr);
    StringBuf evaluate (const Tuple & tuple) const;

private:
    Index<Node> root_nodes;
};

#endif /* LIBAUDCORE_TUPLE_COMPILER_H */
