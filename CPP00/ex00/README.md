**Goal**: Convert alphabets from lowercase to uppercase.

- Inputs: user inputs from running the .exe file.
./megaphone input1 input2 ...etc. In case of no input it displays a specific text.

**#C++ Logic** 

In the main it takes same as C language. "int   main(int ac, char **av)" even though in C++ string is std::string but in main arguments it takes same as C.

**#Solution Logic**

Same as any language, but different syntax/function. 

if (ac == 1)
    display the text
loop: for (int i = 1; i < ac; i++) // i = 1 skip .exe name // loop over ac to go through all av args.

{
    // converting using std::transform() function
}

**#tansform()**

std::transform(first, last, destination, function)

1. First: Where to start reading data from.
2. Last: Where to stop reading data (one past the last item).
3. Destination: Where to start writing the results.

**#Summary**

“Take elements from here (first) up to here (last),
apply a function to each one,
and store the result starting here (destination).”
