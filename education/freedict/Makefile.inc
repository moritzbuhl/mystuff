COMMENT =	comprehensive source of truly free bilingual dictionaries

# See https://freedict.org/freedict-database.xml for all dictionaries
DISTNAME =	freedict-${DICT}-${V}.dictd

CATEGORIES =	education

HOMEPAGE =	https://freedict.org/

MAINTAINER =		Moritz Buhl <mbuhl@openbsd.org>

SITES =		https://download.freedict.org/dictionaries/${DICT}/${V}/

EXTRACT_SUFX =		.tar.xz

CONFIGURE_STYLE =	none
NO_BUILD =		Yes
NO_TEST =		Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/freedict/${DICT}
	${INSTALL_DATA} ${WRKDIR}/${DICT}/* ${PREFIX}/freedict/${DICT}/