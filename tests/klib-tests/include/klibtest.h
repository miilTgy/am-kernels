#ifndef __KLIBUNIT_H__
#define __KLIBUNIT_H__

#include <am.h>
#include <klib-macros.h>
#include <klib.h>

#define TEST(entry_) \
  void entry_(); \
  entry = entry_; \
  entry_();

#endif
