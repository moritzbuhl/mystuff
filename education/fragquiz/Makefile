# Use /usr/ports/infrastructure/bin/portcheck

# Reasons why the port/package shouldn't be built
#
#ONLY_FOR_ARCHS =	???
#NOT_FOR_ARCHS =	???
#COMES_WITH =		???
#BROKEN =		reason

#
# Very short description of the package (<=60 chars, usually starts lower-case)
COMMENT =	test your IP fragmentation knowledge

DISTNAME =	fragquiz

EXTRACT_SUFX =	.tar.gz

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =	education

HOMEPAGE =	https://valerieaurora.org/fragquiz.html

MAINTAINER =		Moritz Buhl <mbuhl@openbsd.org>

# Licensing:  This determines what we can distribute through ftp.
# When you determine the license type, make sure to look at ALL distfiles.
# Every distfile can have a different license.  The PERMIT_* values are
# determined by the most restrictive license.  If you have two licenses
# that are in conflict, set PERMIT_* based on the most restrictive one.
# Make SURE you get these values right.

# non-commercial use
# Put a comment there to state what's going on.
# I'm still thinking about the license. For now, you can run this
# code for fun (non-commercial use) but I reserve all other rights.
PERMIT_PACKAGE =	Author is still thinking about the license

# "make port-lib-depends-check" can help
#WANTLIB =		???

# where the source files and patches can be fetched
#
SITES =		https://valerieaurora.org/code/

MODULES =		lang/go

# MODGO_ settings for when using lang/go module
#
# Get source from proxy.golang.org
MODGO_MODNAME =	fragquiz
MODGO_VERSION =
MODGO_MODULES =		golang.org/x/net	v0.17.0 \
			golang.org/x/sys	v0.13.0

# Dependencies
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???
#TEST_DEPENDS =		???

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

# build/configuration variables
#
#SEPARATE_BUILD =	Yes (build in a directory other than WRKSRC)
#USE_GMAKE =		Yes
#USE_GROFF =		Yes
# Programs that require GNU libtool to build instead of the OpenBSD one
# should use this option. Add a comment explaining why. Don't use this if
# a port requires libtool's .m4 files but otherwise can use OpenBSD libtool,
# in that case use "BUILD_DEPENDS=devel/libtool" instead.
#USE_LIBTOOL=		gnu
# Set CONFIGURE_STYLE to value corresponding to some standard configuration
#	  perl [modbuild]: perl's MakeMaker Makefile.PL (modbuild: perl's
#	  Module::Build Build.PL)
#	  gnu [autoconf] [old] [dest]: gnu style configure (old: no
#	  sysconfdir), (dest: add DESTDIR, does not handle it),
#	  autoconf: run autoconf to regenerate configure script. implies gnu.
#	            (see also "do-gen" target below).
#	XXX: cygnus products do NOT use autoconf for making the main
#		configure from configure.in
#	  imake [noman]: port uses imake for configuration.
#	  (noman: no man page installation)
#	  simple: port has its own configure script
#	  none: override default CONFIGURE_STYLE coming from a module
#	        (needed for some ports using lang/python, etc.)
#CONFIGURE_STYLE =	
#CONFIGURE_SCRIPT =	??? (if other than configure)
#CONFIGURE_ARGS =	???
#CONFIGURE_ENV =	???

# if debug packages are a good idea, extra configure args may be necessary
# and DEBUG_PACKAGES will commonly be set to ${BUILD_PACKAGES}
#DEBUG_CONFIGURE_ARGS =	???
#DEBUG_PACKAGES = ${BUILD_PACKAGES}

# for gnu stuff
#AUTOCONF_VERSION =	??? (defaults to 2.13)
#AUTOMAKE_VERSION =	??? (defaults to 1.4)
# config.guess and others are copied here
#MODGNU_CONFIG_GUESS_DIRS = ??? (defaults to ${WRKSRC})

# Is the build automagic or is it interactive
#
#IS_INTERACTIVE =		Yes
#TEST_IS_INTERACTIVE =		Yes

# Assume you have one multiple choice flavor: 1 2 3 and switches a b.
# You would write
#
#FLAVORS =	1 2 3 a b
#FLAVOR ?=
# grab multiple choice value
#CHOICE = ${FLAVOR:Na:Nb}
# check that CHOICE is 1 OR 2 OR 3, or error out
#.if ${CHOICE} == "1"
# code for 1
#.elif ${CHOICE} == "2"
# code for 2
#.elif ${CHOICE} == "3"
# code for 3
#.else
#ERRORS += "Fatal: Conflicting flavor: ${FLAVOR}"
#.endif
# check for switches
#.if ${FLAVOR:Ma}
# code for a
#.endif
#.if ${FLAVOR:Mb}
# code for b
#.endif

# Things that we don't want to do for this port/package
# Generally, DON'T set anything to No if it's not needed.
# The time gained is not worth it.
#
#NO_BUILD =		Yes
#NO_TEST =		Yes

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#TEST_TARGET =		???

ALL_TARGET =		all
WRKSRC =		${WRKDIST}

.include <bsd.port.mk>
