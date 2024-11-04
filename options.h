struct options {
  int IGNORE_DOTFILES;
};

struct options *parse_argv         (int*, char**);


struct options *parse_argv(int *argc, char **argv) {
  char *arguments;
  struct options *options;
  char character;
  
  arguments = "AaCcdFfhiklnqRrSstuwx1";
  

  while ((character = getopt(*argc, argv, arguments)) >= 0) {
    switch (character) {

      case 'a':
        options->INCLUDE_HIDDEN_DIRECTORIES = 1;
        break;
      default:

    }
  }

 
  
  return options;
}
