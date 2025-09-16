COMMENT =	cross-platform implementation of QUIC and HTTP/3 protocol

V =		1.8.3
PKGNAME =        xquic-$V

GH_ACCOUNT =	alibaba
GH_PROJECT =	xquic
GH_TAGNAME =	v$V

SHARED_LIBS +=	xquic	0.0

CATEGORIES =	net

MAINTAINER =		Moritz Buhl <mbuhl@openbsd.org>

# Apache-2.0
PERMIT_PACKAGE =	Yes

WANTLIB +=	crypto pthread ssl

MODULES =	devel/cmake
BUILD_DEPENDS +=	devel/cunit \
			devel/libevent2
TEST_DEPENDS +=		shells/bash

SEPARATE_BUILD =	Yes
DEBUG_PACKAGES =	${BUILD_PACKAGES}
CONFIGURE_ARGS =	-DCMAKE_BUILD_TYPE=Release \
			-DXQC_SUPPORT_SENDMMSG_BUILD=1 \
			-DXQC_ENABLE_EVENT_LOG=1 \
			-DXQC_ENABLE_BBR2=1 \
			-DXQC_ENABLE_RENO=1 \
			-DXQC_ENABLE_TESTING=1 \
			-DSSL_LIB_PATH="/usr/lib/libssl.a;/usr/lib/libcrypto.a" \
			-DSSL_INC_PATH="/usr/include/openssl"

do-install:
	${INSTALL_DATA} ${WRKBUILD}/libxquic.so \
		${PREFIX}/lib/libxquic.so.${LIBxquic_VERSION}
	${INSTALL_DATA} ${WRKBUILD}/libxquic-static.a ${PREFIX}/lib/libxquic.a
	${INSTALL_DATA_DIR} ${PREFIX}/include/xquic/
	${INSTALL_DATA} ${WRKSRC}/include/xquic/* ${PREFIX}/include/xquic

do-test:
	cd ${WRKBUILD} && bash ${WRKSRC}/scripts/xquic_test.sh

.include <bsd.port.mk>
