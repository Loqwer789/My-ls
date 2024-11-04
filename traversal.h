void traverse_argv             (struct options*, int, char**);
void traverse_working_directory(struct options*);


void traverse_argv(struct options *options, int argc, char **argv) {
  struct file *files;
  int length;
  int i;
  int num_directories;
  
  if (argc == 0) {
    traverse_working_directory(options);
    return;
  }
  

void traverse_working_directory(struct options *options) {
 // traverse_directory_helper(options, ".", 0);
}
