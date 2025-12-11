/*
 * Copyright (c) 2015 DeNA Co., Ltd., Kazuho Oku
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */
#ifndef h2o__file_h
#define h2o__file_h

#include "h2o/memory.h"

/* Forward declarations - h2o_handler_t is defined in h2o.h which must be included before this header */
struct st_h2o_handler_t;
typedef struct st_h2o_handler_t h2o_handler_t;

h2o_iovec_t h2o_file_read(const char *fn);

/**
 * opaque file handler type
 */
typedef struct st_h2o_file_handler_t h2o_file_handler_t;

/**
 * creates a temporary file using the fn_template param.
 * This is a wrapper to mkstemp(3), but the file is unlinked before returning from the function. Therefore, the name of the file is
 * not provided to the caller.
 * @return fd. -1 on failure and set errno as mkstemp(3) does.
 */
int h2o_file_mktemp(const char *fn_template);

/**
 * returns the real path (document root) for a file handler, or NULL if not a file handler
 * @param handler the handler to check
 * @return the real path string, or NULL if not a file handler
 */
const char *h2o_file_get_real_path(h2o_handler_t *handler);

#endif
