#ifndef _PM_RPMVERCMP_H
#define _PM_RPMVERCMP_H

int rpmvercmp(const char *a, const char *b);

#ifndef HAVE_STRVERSCMP
int strverscmp(const char *s1, const char *s2);
#endif

#endif
