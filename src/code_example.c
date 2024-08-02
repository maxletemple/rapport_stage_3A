extern int load_metadata(int* ram_addr); // Load the metadata of the address

int main(){
    // Physical address of leds
    int* leds     = (int*) 0x12000000;
    // Tracking the metadata of this address
    int* ram_addr = (int*) 0x40000000; 

    *ram_addr = 0;
    // Switch off all the leds
    *leds = 0; 

    for (int i = 0; i <= 384; i++){
        // Write on the data
        *ram_addr ++; 
        // Display the value of the metadata on leds
        *leds = load_metadata(ram_addr); 
    }
}