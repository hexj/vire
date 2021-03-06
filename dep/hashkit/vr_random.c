#include <stdio.h>
#include <stdlib.h>

#include <vr_hashkit.h>

#define RANDOM_CONTINUUM_ADDITION   10  /* # extra slots to build into continuum */
#define RANDOM_POINTS_PER_SERVER    1

uint32_t
random_dispatch(struct continuum *continuum, uint32_t ncontinuum, uint32_t hash)
{
    struct continuum *c;

    ASSERT(continuum != NULL);
    ASSERT(ncontinuum != 0);

    c = continuum + random() % ncontinuum;

    return c->index;
}
