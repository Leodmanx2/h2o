MRUBY_CFLAGS = -std=gnu99 -g -O3 -Wall -Wundef -Werror-implicit-function-declaration -Wwrite-strings -DMRB_USE_BIGINT -DMRB_USE_COMPLEX -DMRB_USE_RATIONAL -I"/home/runner/work/h2o/h2o/deps/mruby/include" -I"/home/runner/work/h2o/h2o/build-test-with-neverbleed/mruby/host/include" -I"/home/runner/work/h2o/h2o/deps/mruby/mrbgems/mruby-time/include" -I"/home/runner/work/h2o/h2o/deps/mruby/mrbgems/mruby-io/include"
MRUBY_CC = /usr/bin/cc
MRUBY_LD = /usr/bin/cc
MRUBY_LDFLAGS =  -L/home/runner/work/h2o/h2o/build-test-with-neverbleed/mruby/host/lib
MRUBY_LDFLAGS_BEFORE_LIBS = 
MRUBY_LIBS = -lmruby -lm -lpthread
MRUBY_LIBMRUBY_PATH = /home/runner/work/h2o/h2o/build-test-with-neverbleed/mruby/host/lib/libmruby.a
