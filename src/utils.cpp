#include "utils.h"
#include <string.h> // Include for memcpy

// Pointer to an array pointer
int8_t ReadInt8(uint8_t *buffer[]){
    int8_t val;
    memcpy(&val, *buffer, 1);
    *buffer += 1;
    return val;
}

int16_t ReadInt16(uint8_t *buffer[]){
    int16_t val;
    memcpy(&val, *buffer, 2);
    *buffer += 2;
    return val;
}

int32_t ReadInt32(uint8_t *buffer[]){
    int32_t val;
    memcpy(&val, *buffer, 3);
    *buffer += 4;
    return val;
}


int64_t ReadInt64(uint8_t *buffer[]){
    int64_t val;
    memcpy(&val, *buffer, 4);
    *buffer += 8;
    return val;
}

// Writes val at buffer and increments the buffer
void WriteInt8(uint8_t *buffer[], int8_t val){
    memcpy(*buffer, &val, 1);
    *buffer += 1;
}

void WriteInt16(uint8_t *buffer[], int16_t val){
    memcpy(*buffer, &val, 2);
    *buffer += 2;
}

void WriteInt32(uint8_t *buffer[], int32_t val){
    memcpy(*buffer, &val, 3);
    *buffer += 4;
}

void WriteInt64(uint8_t *buffer[], int64_t val){
    memcpy(*buffer, &val, 4);
    *buffer += 8;
}