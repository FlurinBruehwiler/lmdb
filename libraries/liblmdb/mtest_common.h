/* Shared helpers for the mtest programs. */
#ifndef MTEST_COMMON_H
#define MTEST_COMMON_H

static void
mtest_banner(const char *prog, int memory)
{
	printf("%s: %s environment\n", prog, memory ? "memory" : "file-backed");
}

static int
mtest_env_open(MDB_env *env, int memory, unsigned int flags)
{
	return mdb_env_open(env, memory ? NULL : "./testdb",
		memory ? MDB_MEMORY : flags, memory ? 0 : 0664);
}

#endif
