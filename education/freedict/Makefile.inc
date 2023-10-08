COMMENT =	comprehensive source of truly free bilingual dictionaries

# See https://freedict.org/freedict-database.xml for all dictionaries
DISTNAME =	freedict-${DICT}-${V}.dictd

CATEGORIES =	education

HOMEPAGE =	https://freedict.org/

MAINTAINER =		Moritz Buhl <mbuhl@openbsd.org>

# Licensing:  This determines what we can distribute through ftp.
# When you determine the license type, make sure to look at ALL distfiles.
# Every distfile can have a different license.  The PERMIT_* values are
# determined by the most restrictive license.  If you have two licenses
# that are in conflict, set PERMIT_* based on the most restrictive one.
# Make SURE you get these values right.

# Put a comment there to state what's going on.
# Can be as brief as `BSD' or `GPLv2+', but it'd better be easy to check,
# if someone wants to double-check licensing.
# For GPL, the applicable versions must be included (e.g. v2+, v2 only, v3+).
# If both PERMIT_* are Yes, just setting 'PERMIT_PACKAGE=Yes' is enough.
# GPLv2
PERMIT_PACKAGE =	Yes
#PERMIT_DISTFILES =	Yes | Reason if No

SITES =		https://download.freedict.org/dictionaries/${DICT}/${V}/

EXTRACT_SUFX =		.tar.xz

CONFIGURE_STYLE =	none
NO_BUILD =		Yes
NO_TEST =		Yes
