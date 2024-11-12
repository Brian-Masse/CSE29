# CSE29

PAs, homework, and projects for UCSD CSE29

### [pa1-utf-8-Brian-Masse](https://github.com/ucsd-cse29-fa24/pa1-utf-8-Brian-Masse/tree/1ce269ea94799febb5e76fd293c199da998bfafa)

Takes a UTF-8 encoded string and a codepoint index. Calculates the codepoint at that index. Then, calculates the code point with value one higher (so e.g. for ”é“ U+00E9 that would be “ê” (U+00EA), and for “🐩” (U+1F429) that would be “🐪” (U+1F42A)). Saves the encoding of that code point in the result array starting at index 0.

### [pa2-hashing-and-passwords-Brian-Masse](https://github.com/ucsd-cse29-fa24/pa2-hashing-and-passwords-Brian-Masse/tree/7498c33587ada62e625a446db6d7bff8e794133f)

Implement pwcrack as originally described below. Also update pwcrack to check if the SHA256 hash of the potential password with each of its numeric digits '0'-'9' replaced by all possible numberic digits '0'-'9' (considering only single digit changes) matches the given hash.

### [pa3-chat-server-Brian-Masse](https://github.com/Brian-Masse/pa3-chat-server-Brian-Masse/tree/130c4c352dd3e670209292333f05d546dc3dbf03)

HTTP is one of the most common protocols for communicating across computers. At the systems programming level, this means using system calls (usually in C) to tell the operating system to send bytes over a network.

One nice feature of HTTP is that it is a primarily text-based protocol, which makes it more straightforward for humans to read and debug. It is also well-understood by web browsers and programs like curl, making it easy to test and connect to user-facing devices.

It's useful to get experience with the format of HTTP, and with using system calls in C to manipulate HTTP requests.
