#include <stdio.h>
#include "options.h"
#include "traversal.h"


int main(int argc, char **argv)
{
	struct  options *options ;
	options = pars_argv(&argc, argv);
	travers_argv(options,argc, argv);

	return EXIT_SUCCESS;
}	
