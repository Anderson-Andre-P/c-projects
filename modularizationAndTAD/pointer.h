typedef struct pointer Pointer;

// build new pointer
Pointer *ptr_make(float x, float y);
// free a pointer
void ptr_free(Pointer *p);
// access values X and Y of pointer
void ptr_access(Pointer *p, float *x, float *y);
// attibuited the values in X and Y to a pointer
void ptr_att(Pointer *p, float x, float y);
// calculate distance between two points
float ptr_distance(Pointer *p1, Pointer *p2);
