#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("\tsysconf:\n");
	printf("_SC_ARG_MAX = %ld\n", sysconf(_SC_ARG_MAX));
	printf("_SC_CHILD_MAX = %ld\n", sysconf(_SC_CHILD_MAX));
	printf("_SC_HOST_NAME_MAX = %ld\n", sysconf(_SC_HOST_NAME_MAX));
        printf("_SC_LOGIN_NAME_MAX = %ld\n", sysconf(_SC_LOGIN_NAME_MAX));
        printf("_SC_NGROUPS_MAX = %ld\n", sysconf(_SC_NGROUPS_MAX));
        printf("_SC_CLK_TCK = %ld\n", sysconf(_SC_CLK_TCK));
        printf("_SC_OPEN_MAX = %ld\n", sysconf(_SC_OPEN_MAX));
        printf("_SC_PAGESIZE = %ld\n", sysconf(_SC_PAGESIZE));
        printf("_SC_PAGE_SIZE = %ld\n", sysconf(_SC_PAGE_SIZE));
        printf("_SC_RE_DUP_MAX = %ld\n", sysconf(_SC_RE_DUP_MAX));
        printf("_SC_STREAM_MAX = %ld\n", sysconf(_SC_STREAM_MAX));
        printf("_SC_SYMLOOP_MAX = %ld\n", sysconf(_SC_SYMLOOP_MAX));
        printf("_SC_TTY_NAME_MAX = %ld\n", sysconf(_SC_TTY_NAME_MAX));
        printf("_SC_TZNAME_MAX = %ld\n", sysconf(_SC_TZNAME_MAX));
        printf("_SC_VERSION = %ld\n", sysconf(_SC_VERSION));
        printf("_SC_BC_BASE_MAX = %ld\n", sysconf(_SC_BC_BASE_MAX));
        printf("_SC_BC_DIM_MAX = %ld\n", sysconf(_SC_BC_DIM_MAX));
        printf("_SC_BC_SCALE_MAX = %ld\n", sysconf(_SC_BC_SCALE_MAX));
        printf("_SC_BC_STRING_MAX = %ld\n", sysconf(_SC_BC_STRING_MAX));
        printf("_SC_COLL_WEIGHTS_MAX =%ld\n", sysconf(_SC_COLL_WEIGHTS_MAX));
        printf("_SC_EXPR_NEST_MAX = %ld\n", sysconf(_SC_EXPR_NEST_MAX));
        printf("_SC_LINE_MAX = %ld\n", sysconf(_SC_LINE_MAX));
        printf("_SC_RE_DUP_MAX = %ld\n", sysconf(_SC_RE_DUP_MAX));
        printf("_SC_2_VERSION = %ld\n", sysconf(_SC_2_VERSION));
        printf("_SC_2_C_DEV = %ld\n", sysconf(_SC_2_C_DEV));
        printf("_SC_2_FORT_DEV = %ld\n", sysconf(_SC_2_FORT_DEV));
        printf("_SC_2_FORT_RUN = %ld\n", sysconf(_SC_2_FORT_RUN));
        printf("_SC_2_LOCALEDEF = %ld\n", sysconf(_SC_2_LOCALEDEF));
        printf("_SC_2_SW_DEV = %ld\n", sysconf(_SC_2_SW_DEV));
        printf("_SC_PHYS_PAGES = %ld\n", sysconf(_SC_PHYS_PAGES));
        printf("_SC_AVPHYS_PAGES = %ld\n", sysconf(_SC_AVPHYS_PAGES));
        printf("_SC_NPROCESSORS_CONF = %ld\n", sysconf(_SC_NPROCESSORS_CONF));
        printf("_SC_NPROCESSORS_ONLN = %ld\n", sysconf(_SC_NPROCESSORS_ONLN));

	printf("\n\tpathconf:\n");
	printf("_PC_LINK_MAX = %ld\n", pathconf("/", _PC_LINK_MAX));
        printf("_PC_MAX_CANON = %ld\n", pathconf("/", _PC_MAX_CANON));
        printf("_PC_MAX_INPUT = %ld\n", pathconf("/", _PC_MAX_INPUT));
        printf("_PC_NAME_MAX = %ld\n", pathconf("/", _PC_NAME_MAX));
        printf("_PC_PATH_MAX = %ld\n", pathconf("/", _PC_PATH_MAX));
        printf("_PC_PIPE_BUF = %ld\n", pathconf("/", _PC_PIPE_BUF));
        printf("_PC_CHOWN_RESTRICTED = %ld\n", pathconf("/", _PC_CHOWN_RESTRICTED));
        printf("_PC_NO_TRUNC = %ld\n", pathconf("/", _PC_NO_TRUNC));
        printf("_PC_VDISABLE = %ld\n", pathconf("/", _PC_VDISABLE));

        printf("\n\tfpathconf:\n");
        printf("_PC_LINK_MAX = %ld\n", fpathconf(2, _PC_LINK_MAX));
        printf("_PC_MAX_CANON = %ld\n", fpathconf(1, _PC_MAX_CANON));
        printf("_PC_MAX_INPUT = %ld\n", fpathconf(0, _PC_MAX_INPUT));
        printf("_PC_NAME_MAX = %ld\n", fpathconf(0, _PC_NAME_MAX));
        printf("_PC_PATH_MAX = %ld\n", fpathconf(1, _PC_PATH_MAX));
        printf("_PC_PIPE_BUF = %ld\n", fpathconf(1, _PC_PIPE_BUF));
        printf("_PC_CHOWN_RESTRICTED = %ld\n", fpathconf(0, _PC_CHOWN_RESTRICTED));
        printf("_PC_NO_TRUNC = %ld\n", fpathconf(1, _PC_NO_TRUNC));
        printf("_PC_VDISABLE = %ld\n", fpathconf(2, _PC_VDISABLE));
}

