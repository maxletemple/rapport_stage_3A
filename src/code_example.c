extern int load_metadata(int* ram_addr); // Load the metadata of the address

int main(){
    int* leds     = (int*) 0x12000000; // Physical address of leds
    int* ram_addr = (int*) 0x40000000; // Tracking the metadata of this address

    *ram_addr = 0;
    *leds = 0; // Switch off all the leds

    for (int i = 0; i <= 640; i++){
        *ram_addr ++; // Write on the data
        *leds = load_metadata(ram_addr); // Display the value of the metadata on leds
    }
}