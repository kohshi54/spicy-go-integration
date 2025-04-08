# PoC

This is a proof of concept that simply calls an executable generated from a Spicy script via Go.

## Future Enhancements

- Call a C++ module and use `lookupParser()` at runtime
- Use CGO to call the parser directly from Go
- Separate the Go main logic and the C++ parser wrapper for better modularity and management
