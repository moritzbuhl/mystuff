# $OpenBSD$

COMMENT =	MD5 collision generator

VERSION=	v1.0.0.5-1
DISTNAME =	fastcoll_${VERSION}_source
PKGNAME =	fastcoll-${VERSION}

CATEGORIES =	education

HOMEPAGE =	https://www.win.tue.nl/hashclash/

MAINTAINER =	Moritz Buhl <mbuhl@openbsd.org>

# (C) M.M.J.  Stevens, 2006-2007.  All rights reserved.
# This software is provided as is.  Use is at the user's risk.  No
# guarantee whatsoever is given on how it may function or malfunction.
# Support cannot be expected.
# This software is meant for scientific and educational purposes only.
# It is forbidden to use it for other than scientific or educational
# purposes.  In particular, commercial and malicious use is not
# allowed.  Further distribution of this software, by whatever means,
# is not allowed without our consent.
# This includes publication of source code or executables in printed
# form, on websites, newsgroups, CD-ROM's, etc.  Changing the (source)
# code without our consent is not allowed.  In all versions of the
# source code this disclaimer, the copyright notice and the version
# number should be present.
PERMIT_PACKAGE =	didn't ask for consent
PERMIT_DISTFILES =	didn't ask for consent

MASTER_SITES =		https://www.win.tue.nl/hashclash/

EXTRACT_SUFX =		.zip

FIX_CRLF_FILES =	${CPP_FILES}

COMPILER_LANGS =	c++

BUILD_DEPENDS =	devel/boost

SEPARATE_BUILD =	Yes

CONFIGURE_STYLE =	none

WANTLIB=		${COMPILER_LIBCXX} c boost_filesystem \
			boost_program_options boost_system
CXXFLAGS =		-O3 -pipe -I${LOCALBASE}/include \
			-L${LOCALBASE}/lib
WRKDIST=		${WRKDIR}
WRKBUILD=		${WRKDIR}

CPPFILES =	block0.cpp block1.cpp block1stevens00.cpp \
		block1stevens01.cpp block1stevens10.cpp \
		block1stevens11.cpp block1wang.cpp main.cpp md5.cpp

prog =		fastcoll


do-build:
	 cd ${WRKDIST} && ${CXX} ${CXXFLAGS} ${CPPFILES} \
	-lboost_filesystem -lboost_program_options -lboost_system \
	-o ${prog} -static && strip -s ${prog}

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/${prog} ${PREFIX}/bin

.include <bsd.port.mk>
