unsigned int strleni(char* s) {
    unsigned int r = 0;
    while (s[r] != '\0') r++; 
    return r;
    // sizeof(s) / sizeof(char) gave me an error and i forgot how to fix it so yeah this is gonna have to do for now
}
