/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include "proxygen/lib/http/session/TTLBAStats.h"

namespace proxygen {

// This may be retired with a byte events refactor
class HTTPSessionStats : public TTLBAStats {
 public:
  virtual ~HTTPSessionStats() noexcept {}

  virtual void recordTransactionOpened() noexcept = 0;
  virtual void recordTransactionClosed() noexcept = 0;
};

}
