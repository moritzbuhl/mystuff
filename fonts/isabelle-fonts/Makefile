# $OpenBSD$
#

COMMENT =	glyphs from Bluesky TeX, DejaVu Sans, and Mono, and Symbola

V =		20190717
DISTNAME =	isabelle_fonts-${V}
PKGNAME =	Isabelle-fonts

CATEGORIES =	fonts

MAINTAINER =		Moritz Buhl <mbuhl@moritzbuhl.de>

# BSD-3-clause (MAYBE)
PERMIT_PACKAGE =	Yes

MASTER_SITES =		http://isabelle.in.tum.de/dist/contrib/

NO_BUILD =		Yes
NO_TEST =		Yes

FONTDIR =       ${PREFIX}/share/fonts/IsabelleDejaVu
FONTDIR-hinted =       ${PREFIX}/share/fonts/IsabelleDejaVu-hinted

do-install:
	${INSTALL_DATA_DIR} ${FONTDIR}
	${INSTALL_DATA_DIR} ${FONTDIR-hinted}
	${INSTALL_DATA} ${WRKSRC}/ttf/*.ttf ${FONTDIR}
	${INSTALL_DATA} ${WRKSRC}/ttf/*.ttf ${FONTDIR-hinted}

.include <bsd.port.mk>
