/*      Minix 1.5 specific includes and defines
 *
 * $Revision: 41.1 $ $Date: 1995/12/29 02:10:46 $
 *
 */
#define MINIX1_5	/* Minix 1.5 */

#define VARARGS
#define V7JOB
#define PLONG long	/* Two of Minix's ptrace args are longs !! Why? */

#include <sys/types.h>
#include <ctype.h>
#include <signal.h>
#include <errno.h>
#include <pwd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sgtty.h>
#include <dirent.h>
#include <time.h>

#undef NULL		/* Minix declares NULL as (void *)0, but the ACK */
#define NULL 0		/* compiler doesn't cope. We set it to 0, it works */
