#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"

//Define SPI protocol GPIO pins
#define MISO_PIN 16 
#define CS_PIN 17
#define SCK_PIN 18
#define MOSI_PIN 19

void sd_init() {

    /*===========================SPI INITIALIZATION==================================*/
    // SPI0 with 1 Mhz baudrate 
    spi_init(spi0, 1000000); 

    //Format of data to send to the SD card
    spi_set_format(spi0, 8, SPI_CPOL_0, SPI_CPHA_0, SPI_MSB_FIRST);

    // Initialize SPI pins 
    gpio_set_function(MISO_PIN, GPIO_FUNC_SPI);
    gpio_set_dir(MISO_PIN, GPIO_IN);

    gpio_set_function(CS_PIN, GPIO_FUNC_SPI);
    gpio_set_dir(CS_PIN, GPIO_OUT);

    gpio_set_function(SCK_PIN, GPIO_FUNC_SPI);
    gpio_set_dir(SCK_PIN, GPIO_OUT);

    gpio_set_function(MOSI_PIN, GPIO_FUNC_SPI);
    gpio_set_dir(MOSI_PIN, GPIO_OUT);

    /*===========================END SPI INITIALIZATION==============================*/

    /*===========================SD Card set up =====================================*/




}


/* NOTES: 
- Must use fat32 or fat16 format for SD card 


*/