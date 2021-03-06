# $OpenBSD$

COMMENT=		administrative Website for Devices flashed with Tasmota

V=			1.7.0
DISTNAME=		tasmoadmin-${V}

GH_ACCOUNT =   reloxx13
GH_PROJECT =   TasmoAdmin
GH_TAGNAME =   v${V}


CATEGORIES=		www

HOMEPAGE=		https://github.com/reloxx13/TasmoAdmin

MAINTAINER=		Moritz Buhl <ports@moritzbuhl.de>
# GPLv3
PERMIT_PACKAGE=	Yes

MODULES=		lang/php

NO_BUILD=		Yes
NO_TEST=		Yes
PKG_ARCH=		*

WRKDIST=		${WRKDIR}/TasmoAdmin-${V}
WRKSRC=			${WRKDIST}/tasmoadmin

PREFIX=			${VARBASE}/www
INSTDIR=		${PREFIX}/tasmoadmin
TINSTDIR=		${TRUEPREFIX}/tasmoadmin
VR=			${V:R}
MAJOR=			${VR:R}
SUBST_VARS=		INSTDIR TINSTDIR MODPHP_BIN VR MAJOR

RUN_DEPENDS=		lang/php/${MODPHP_VERSION},-zip \
			lang/php/${MODPHP_VERSION},-curl

do-install:
	cp -Rp ${WRKSRC} ${INSTDIR}
	mv ${INSTDIR}/.htaccess ${INSTDIR}/.htaccess.dist
	rm ${INSTDIR}/data{,/firmwares}/.htaccess
	chown -R ${BINOWN}:${BINGRP} ${INSTDIR}
	chown -R www:${BINGRP} ${INSTDIR}/{tmp,data}

.include <bsd.port.mk>
