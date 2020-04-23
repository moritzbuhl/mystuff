# $OpenBSD$
#

COMMENT =	SAT solver with an extensive API
V =		965
DISTNAME =	picosat-${V}
SHARED_LIBS =	libpicosat	0.0
CATEGORIES =	math
HOMEPAGE =	http://fmv.jku.at/picosat/

MAINTAINER =		Moritz Buhl <mbuhl@moritzbuhl.de>

# MIT
PERMIT_PACKAGE =	Yes
MASTER_SITES =		http://fmv.jku.at/picosat/
CONFIGURE_STYLE =	simple
CONFIGURE_SCRIPT =	configure.sh
CONFIGURE_ARGS =	--shared --trace
NO_TEST =		Yes # No tests available
#CFLAGS =		???
#LDFLAGS =		???
MAKE_FILE =		makefile

do-install:
	${INSTALL_DATA} ${WRKDIST}/libpicosat.a ${PREFIX}/lib
	${INSTALL_DATA} ${WRKDIST}/libpicosat.so ${PREFIX}/lib
	${INSTALL_DATA} ${WRKDIST}/picosat.h ${PREFIX}/include
	${INSTALL_PROGRAM} ${WRKDIST}/picogcnf ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKDIST}/picomcs ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKDIST}/picomus ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKDIST}/picosat ${PREFIX}/bin

.include <bsd.port.mk>
