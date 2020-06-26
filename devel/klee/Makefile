# $OpenBSD: Makefile.template,v 1.80 2019/04/01 07:35:45 bentley Exp $
#

COMMENT =	KLEE is a symbolic virtual machine

GH_ACCOUNT =	klee
GH_PROJECT =	klee
GH_TAGNAME =	v2.0

#SHARED_LIBS =	???

CATEGORIES =	devel

HOMEPAGE =	http://klee.github.io/

MAINTAINER =	Moritz Buhl <ports@moritzbuhl.de>

# ???
PERMIT_PACKAGE_CDROM =	Yes

# "make port-lib-depends-check" can help
#WANTLIB =		???

# Dependencies
#
#COMPILER =		???
MODULES =		devel/cmake
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
LIB_DEPENDS =		math/z3
#TEST_DEPENDS =		devel/py-lit # XXX \
#			devel/FileCheck \
#			devel/not

#MAKE_FLAGS =		-DLLVM_CONFIG_BINARY=/usr/local/bin/llvm-config
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

# For ports using C++, except in special cases you should use a compiler
# with the same standard library as used in other ports. Remove entries
# from the COMPILER list if they're known to not work.
#COMPILER =		base-clang ports-gcc base-gcc

# build/configuration variables
#
#SEPARATE_BUILD =	Yes (build in a directory other than WRKSRC)
#SEPARATE_BUILD =	flavored (distinct flavors may share a common WRKSRC)
#USE_GMAKE =		Yes
#USE_GROFF =		Yes
# Programs that require GNU libtool to build instead of the OpenBSD one
# should use this option. Add a comment explaining why. Don't use this if
# a port requires libtool's .m4 files but otherwise can use OpenBSD libtool,
# in that case use "BUILD_DEPENDS=devel/libtool" instead.
#USE_LIBTOOL=		gnu
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
#CONFIGURE_STYLE =	
#CONFIGURE_SCRIPT =	??? (if other than configure)
CONFIGURE_ARGS =	-DLLVM_CONFIG_BINARY=/usr/local/bin/llvm-config \
			-DENABLE_TCMALLOC=OFF \
			-DMAKE_BINARY="/usr/local/bin/gmake"
#			-DENABLE_UNIT_TESTS=OFF \
#			-DENABLE_SYSTEM_TESTS=OFF \

# for gnu stuff
#AUTOCONF_VERSION =	??? (defaults to 2.13)
#AUTOMAKE_VERSION =	??? (defaults to 1.4)
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC})

# Overrides for default values
#
#CFLAGS =		-D__FreeBSD__=1
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#TEST_TARGET =		???

.include <bsd.port.mk>
