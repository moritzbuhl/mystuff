# $OpenBSD$

COMMENT =	software for solving semidefinite programming problems

V =		6.2.0
DISTNAME =	csdp-${V}

GH_ACCOUNT =	coin-or
GH_PROJECT =	Csdp
GH_TAGNAME =	releases/${V}

SHARED_LIBS =	sdp	0.0

CATEGORIES =	devel
HOMEPAGE =	https://github.com/coin-or/Csdp/wiki
MAINTAINER =		Moritz Buhl <mbuhl@moritzbuhl.de>

# EPL 2.0
PERMIT_PACKAGE =	Yes

WANTLIB += 		${MODFORTRAN_WANTLIB}
WANTLIB +=		blas c estdc++ gfortran lapack m quadmath
COMPILER =		base-clang ports-gcc base-gcc
MODULES =		fortran
MODFORTRAN_COMPILER =	gfortran
LIB_DEPENDS =		math/lapack\
			${MODFORTRAN_LIB_DEPENDS}
USE_GMAKE =		Yes

CFLAGS +=		-m64 -ansi \
			-Wall -DBIT64 -DUSESIGTERM -I../include -static -L../lib -lsdp -llapack -lblas -lm -lgfortran -L /usr/local/lib -lquadmath

WRKDIST =		${WRKDIR}/Csdp-releases-${V}
TEST_TARGET =		unitTest

.include <bsd.port.mk>
