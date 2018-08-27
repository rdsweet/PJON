
// Uncomment to run SoftwareBitBang in MODE 2
// #define SWBB_MODE 2
// Uncomment to run SoftwareBitBang in MODE 3
// #define SWBB_MODE 3

/*  Acknowledge maximum latency duration (1000 microseconds default).
    May be necessary to increase SWBB_RESPONSE_TIMEOUT to leave enough time for
    receiver to compute the CRC and to respond with a synchronous acknowledgement.
    SWBB_RESPONSE_TIMEOUT can be reduced to increase communication speed if
    devices are near and able to compute CRC fast enough. */
//#define SWBB_RESPONSE_TIMEOUT 1000

#include <PJON.h>

// <Strategy name> bus(selected device id)
PJON<SoftwareBitBang> bus(44);

void setup() {
  bus.strategy.set_pin(12);
  bus.begin();
};

void loop() {
  bus.receive();
};
