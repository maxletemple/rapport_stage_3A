.global load_metadata
.balign 16,1
.type load_metadata, @function
load_metadata:
    // Loads the metadata from
    // argument register in
    // the return register
    .word 0x0005850b
    ret