#ifndef DOGECOIN_ITERATE_SPACE_H
#define DOGECOIN_ITERATE_SPACE_H
#include <ccan/tal/tal.h>
#include <assert.h>

/* Simple bump allocator: 5MB should be enough for 4MB blocks */
struct space {
	char buf[5 * 1024 * 1024];
	size_t off;
};

static inline void space_init(struct space *space)
{
	space->off = 0;
}

static inline void *space_alloc(struct space *space, size_t bytes)
{
	void *p = space->buf + space->off;

	/* If this fails, enlarge buf[] above */
	assert(space->off + bytes <= sizeof(space->buf));

	space->off += bytes;
	return p;
}

#define space_alloc_arr(space, type, num) \
	((type *)space_alloc((space), sizeof(type) * (num)))

#endif /* DOGECOIN_ITERATE_SPACE_H */
