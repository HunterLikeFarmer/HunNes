#pragma once

#include <stdint.h>
#include <stdio.h>

#include "Common/Typedefs.hpp"
#include "INESBus.hpp"

namespace HunNes {

class RAM : public INESBus {
   public:
    u8 read(u16 address);
    void write(u16 address, u8 data);

    //256 byte pages, 8 pages on internal NES RAM (2KB onboard address space)
   private:
    u8 ram[2048] = {0};
};

}; 
