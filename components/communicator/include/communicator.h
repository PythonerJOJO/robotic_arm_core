#pragma once

typedef struct {
    void (*init)(void);
    void (*canSend)(void);
    void (*canReceive)(void);
    void (*udpSend)(void);
    void (*udpReceive)(void);
} Communicator;