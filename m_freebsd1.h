/*      FreeBSD 1.x specific includes and defines
 *
 * $Revision: 41.1 $ $Date: 1995/12/29 02:10:46 $
 *
 */

#define FREEBSD_1		/* FreeBSD 1.x */

#define USES_TERMIOS		/* Use USES_TERMIOS for termios syscalls or */
#undef USES_SGTTY		/* USES_SGTTY for 4.3BSD sgtty system calls */

#ifdef USES_SGTTY
# define USES_MORESIG
#endif

#define POSIXJOB		/* Define POSIXJOB for POSIX job control or */
#undef UCBJOB 			/* UCBJOB for 4.3BSD job control */

#define VARARGS
#define SIGTYPE __sighandler_t	/* Signal handlers return this type */


#include <sys/types.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>		/* for perror */
#include <signal.h>
#include <errno.h>
#include <pwd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <curses.h>
#undef bool			/* defined in curses.h */
#undef OK			/* defined in curses.h */
#include <sys/time.h>
#include <sys/file.h>
#include <sys/wait.h>

#ifdef USES_TERMIOS
# include <string.h>
# include <termios.h>
#endif

#ifdef USES_SGTTY
# include <strings.h>
# include <sgtty.h>
# include <sys/resource.h>
#endif

#ifdef UCBJOB
# include <sys/ioctl.h>
#endif
