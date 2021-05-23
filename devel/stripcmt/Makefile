# $OpenBSD$
#
# Use /usr/ports/infrastructure/bin/portcheck

COMMENT =	remove comments from C, C++, and Java source files

# DISTNAME should not include suffix (like .tar.gz .tgz .tar.bz2 etc.)
VERSION =	0.1.2
DISTNAME =	stripcmt-${VERSION}

CATEGORIES =	devel

HOMEPAGE =	http://www.bdc.cx/software/stripcmt/

MAINTAINER =		Moritz Buhl <mbuhl@moritzbuhl.de>

# GPL
PERMIT_PACKAGE =	Yes

MASTER_SITES =		http://www.bdc.cx/download/stripcmt/

#MAKE_FLAGS =		stripcmt
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

#SEPARATE_BUILD =	Yes
# Set CONFIGURE_STYLE to value corresponding to some standard configuration
#	  perl [modbuild]: perl's MakeMaker Makefile.PL (modbuild: perl's
#	  Module::Build Build.PL)
#	  gnu [autoconf] [old] [dest]: gnu style configure (old: no
#	  sysconfdir), (dest: add DESTDIR, does not handle it),
#	  autoconf: run autoconf to regenerate configure script. implies gnu.
#	            (see also "do-gen" target below).
#	XXX: cygnus products do NOT use autoconf for making the main
#		configure from configure.in
#	  imake [noman]: port uses imake for configuration.
#	  (noman: no man page installation)
#	  simple: port has its own configure script
#	  none: override default CONFIGURE_STYLE coming from a module
#	        (needed for some ports using lang/python, etc.)
CONFIGURE_STYLE =	none

NO_TEST =		Yes

#CFLAGS =		???
#LDFLAGS =		???

ALL_TARGET =		stripcmt

.include <bsd.port.mk>
