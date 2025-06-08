#pragma once

#include <stdint.h>
#include <stdio.h>

#include "Common/Typedefs.hpp"

namespace HunNes {

class INESBus {
   public:
    virtual ~INESBus() {}
    // The address is 16 bit, 64 KB in size
    virtual u8 read(u16 address) = 0;
    // Virtual is for polymorphism, it means the child class will use their own implementation of this function even when their type is the parent class
    virtual void write(u16 address, u8 data) = 0;
  };

};  
