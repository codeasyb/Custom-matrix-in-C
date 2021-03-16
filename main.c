//tutorial learned for this matrix 
//https://www.youtube.com/watch?v=K8dCh3ZMLN8
//alternate to seeing the matrix
/* https://codeburst.io/install-and-setup-cmatrix-on-mac-a2076daee420 */

 

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "ui.h"
# include "matrix.h"

# define ITERATIONS 300
# define REFRESH_DELAY 50000L

int
main(int argc, char **argv) {
    
    if (!init_ui()) {
        return EXIT_FAILURE;
    }
    
    matrix_init();
    
    for (int i = 0; i < ITERATIONS; i++) {
        matrix_update();
        show_matrix();
        usleep(REFRESH_DELAY);
    }
    
    
    return EXIT_SUCCESS;
}

