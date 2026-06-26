COMMENT =	emulation library for Trusted Platform Module TPM 1.2 or 2.0

GH_ACCOUNT =	stefanberger
GH_PROJECT =	libtpms
GH_COMMIT =	2d9b00c4e42677cd0a9b67344f4d873ddc409a21
DISTNAME =	libtpms-0.11.0pre20260611

SHARED_LIBS +=	tpms			0.0 # 11.0

CATEGORIES =	devel security

MAINTAINER =	Moritz Buhl <mbuhl@openbsd.org>

# BSD 3-Clause (TPM1.2/lib), BSD 2-Clause (TPM2 ref), TCG license (other TPM2)
PERMIT_PACKAGE =	Yes

SEPARATE_BUILD =	Yes
AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.11
AUTORECONF =		./autogen.sh
CONFIGURE_STYLE =	autoreconf

WANTLIB +=	crypto

TEST_DEPENDS =	shells/bash

.include <bsd.port.mk>
