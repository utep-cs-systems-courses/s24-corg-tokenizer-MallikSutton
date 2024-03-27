ated str.

For example, tokenize("hello world string") would result in:
       tokens[0] = "hello"
       tokens[1] = "world"
       tokens[2] = "string"
       tokens[3] = 0
  */
  char **tokenize(char* str);

/* Prints all tokens. */
void print_tokens(char **tokens);

/* Frees all tokens and the vector containing themx. */
void free_tokens(char **tokens);

#endif~
