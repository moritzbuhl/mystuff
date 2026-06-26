COMMENT =	TPM emulator with socket and character device interface

GH_ACCOUNT =	stefanberger
GH_PROJECT =	swtpm
GH_COMMIT =	a1d85c9ee73af2d4ebc91fa8a5d06858ebf1b5f2
DISTNAME =	swtpm-0.10.2pre20260611

CATEGORIES =	emulators security

MAINTAINER =	Moritz Buhl <mbuhl@openbsd.org>

# BSD 3-Clause
PERMIT_PACKAGE =	Yes

SEPARATE_BUILD =	Yes
AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.11
AUTORECONF =		./autogen.sh
CONFIGURE_STYLE =	autoreconf
CONFIGURE_ARGS =	CFLAGS="-O2 -pipe -g -I/usr/local/include" \
			LDFLAGS="-L/usr/local/lib"

WANTLIB +=	tpms
# crypto

LIB_DEPENDS =	devel/gmp	\
		devel/json-glib	\
		devel/libtpms

RUN_DEPENDS =	security/pkcs11-helper

TEST_DEPENDS =	converters/base64	\
		lang/gawk		\
		lang/python/3		\
		net/socat		\
		security/gnutls		\
		security/libtasn1

# XXX: needs tss?
#TEST_ENV =	SWTPM_TEST_EXPENSIVE=1

.include <bsd.port.mk>
