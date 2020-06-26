# $OpenBSD: Makefile.template,v 1.80 2019/04/01 07:35:45 bentley Exp $
#

COMMENT =	a modified version version of uClibc for KLEE

DISTNAME=	klee-uclibc
GH_ACCOUNT =	klee
GH_PROJECT =	klee-uclibc
GH_TAGNAME =	klee_uclibc_v1.2

CATEGORIES =	devel

MAINTAINER =	Moritz Buhl <ports@moritzbuhl.de>

# LGPLv2.1
PERMIT_PACKAGE_CDROM =	Yes

# "make port-lib-depends-check" can help
#WANTLIB =		???

# Dependencies
#
#COMPILER =		???
MODULES =		lang/python
BUILD_DEPENDS =		lang/python/${MODPY_VERSION}
#RUN_DEPENDS =		???
LIB_DEPENDS =		math/z3
#TEST_DEPENDS =		???

MAKE_FLAGS =		CC="${CC}" CFLAGS="${CFLAGS}"
MAKE_ENV =		V=1
#FAKE_FLAGS =		???
#TEST_FLAGS =		???
USE_GMAKE =		Yes

CONFIGURE_STYLE =	simple
CONFIGURE_SCRIPT =	${MODPY_BIN} configure
CONFIGURE_ARGS =	--make-llvm-lib \
			--with-llvm-config /usr/local/bin/llvm-config \
			--enable-release
CONFIGURE_ENV =		PYTHON="${MODPY_BIN}"

# for gnu stuff
#AUTOCONF_VERSION =	??? (defaults to 2.13)
#AUTOMAKE_VERSION =	??? (defaults to 1.4)
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC})

# Overrides for default values
#
#CFLAGS =		???
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
