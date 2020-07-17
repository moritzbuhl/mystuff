# $OpenBSD: Makefile,v 1.83 2020/04/04 16:42:57 abieber Exp $

# XXX:
# - Needs __ARM_NR_cacheflush (or the like) to work on arm-based ports.
# - Needs bundled libcares as arpa/nameser.h does not include ns_t_a.

ONLY_FOR_ARCHS =	amd64 aarch64 i386
DPB_PROPERTIES =	parallel

USE_WXNEEDED =		Yes

COMMENT =		V8 JavaScript for clients and servers

NODE_VERSION =		v12.18.0
PLEDGE_VER =		1.1.2
DISTFILES =		node-pledge-{}${PLEDGE_VER}.tar.gz:0 \
			${DISTNAME}-headers.tar.gz \
			${DISTNAME}.tar.gz

DISTNAME =		node-${NODE_VERSION}
PKGNAME =		${DISTNAME:S/v//g}

MASTER_SITES0 =		https://github.com/qbit/node-pledge/archive/

CATEGORIES =		lang devel

HOMEPAGE =		http://nodejs.org/

# MIT
PERMIT_PACKAGE =	Yes

MASTER_SITES =		${HOMEPAGE}dist/${NODE_VERSION}/

MODULES =		lang/python

WANTLIB += brotlidec c execinfo kvm m pthread util uv z ${COMPILER_LIBCXX}

COMPILER =		base-clang ports-gcc

LIB_DEPENDS =		archivers/brotli \
			devel/libexecinfo \
			devel/libuv \
			net/libcares \
			security/openssl/1.1 \
			textproc/icu4c \
			www/nghttp2

USE_GMAKE =		Yes

BUILD_DEPENDS =		sysutils/flock

RUN_DEPENDS =		devel/gmake \
			sysutils/flock

TEST_TARGET =		test
CONFIGURE_STYLE =	simple

# libpath and includes aren't picked up, but I added them here as a note.
# The patch for node.gyp is where they are actually being set.
CONFIGURE_ARGS =	--prefix=${PREFIX} --with-intl=system-icu \
	--shared-brotli --shared-libuv --shared-nghttp2 \
	--shared-zlib --shared-cares --shared-openssl \
	--shared-cares-includes=${WRKSRC}/deps/cares/include \
	--shared-openssl-includes=/usr/local/include/eopenssl11 \
	--shared-openssl-libpath=/usr/local/lib/eopenssl11

.if "${MACHINE_ARCH}" ==	"aarch64"
CONFIGURE_ARGS +=	--openssl-no-asm
.endif

SUBST_VARS += 		DISTNAME
SUBST_VARS += 		DISTFILES
SUBST_VARS += 		EXTRACT_SUFX
SUBST_VARS += 		LOCALBASE
SUBST_VARS += 		PREFIX
SUBST_VARS +=		WRKDIST
SUBST_VARS +=		MAKE_PROGRAM
SUBST_VARS +=		NODE_VERSION

MAKE_ENV +=		V=1 CXX="${CXX}" CXXFLAGS="${CXXFLAGS}" \
			LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib"

do-extract:
	mkdir ${WRKSRC}; \
	tar -C ${WRKDIR} -zxf ${FULLDISTDIR}/${DISTNAME}.tar.gz && \
	tar -C ${WRKSRC}/deps/npm/node_modules/ -zxf \
		${FULLDISTDIR}/node-pledge-${PLEDGE_VER}.tar.gz && \
	mv ${WRKSRC}/deps/npm/node_modules/node-pledge-${PLEDGE_VER} \
		${WRKSRC}/deps/npm/node_modules/node-pledge

pre-configure:
	@# Bad practice, but prevents a whole stack of patches.
	ln -sf ${LOCALBASE}/bin/python${MODPY_VERSION} ${WRKDIR}/bin/python
	${SUBST_CMD} ${WRKDIST}/lib/module.js \
		${WRKDIST}/deps/npm/bin/node-gyp-bin/node-gyp \
		${WRKDIST}/deps/npm/node_modules/node-gyp/lib/find-python.js \
		${WRKDIST}/deps/npm/node_modules/node-gyp/lib/install.js \
		${WRKDIST}/deps/openssl/config/generate_gypi.pl \
		${WRKDIST}/node.gyp \
		${WRKDIST}/common.gypi \
		${WRKDIST}/tools/test.py
	sed -i 's/-ldl//' ${WRKSRC}/deps/uv/uv.gyp
	sed -i 's/-ldl//' ${WRKSRC}/deps/v8/tools/run-wasm-api-tests.py
	sed -i 's/-ldl//' ${WRKSRC}/tools/gyp/tools/emacs/testdata/media.gyp
	sed -i 's/-ldl//' ${WRKSRC}/tools/gyp/tools/emacs/testdata/media.gyp.fontified
	sed -i 's/-ldl//' ${WRKSRC}/tools/v8_gypfiles/v8.gyp
	rm -rf ${WRKSRC}/deps/brotli/c
	rm -rf ${WRKSRC}/deps/cares/src
	rm -rf ${WRKSRC}/deps/icu-small
	rm -rf ${WRKSRC}/deps/nghttp2/lib
	rm -rf ${WRKSRC}/deps/openssl/openssl
	rm -rf ${WRKSRC}/deps/zlib/google
	rm -rf ${WRKSRC}/deps/zlib/*.c
	#rm -rf ${WRKSRC}/deps/uv/{src,include} # XXX testing
	#rm -rf ${WRKSRC}/deps/histogram # XXX https://github.com/HdrHistogram/HdrHistogram_c
	#rm -rf ${WRKSRC}/deps/uvwasi/src # XXX https://github.com/cjihrig/uvwasi
	#rm -rf ${WRKSRC}/deps/v8 # XXX htpps://github.com/v8/v8

post-install:
	${MODPY_BIN} ${MODPY_LIBDIR}/compileall.py \
		${PREFIX}/lib/node_modules/npm/node_modules/node-gyp/gyp
	${INSTALL_DATA_DIR} ${PREFIX}/share/node
	${INSTALL_DATA} ${FULLDISTDIR}/${DISTNAME}-headers.tar.gz \
		${PREFIX}/share/node/${DISTNAME}-headers.tar.gz
	ln -s ${TRUEPREFIX}/lib/node_modules/npm/bin/node-gyp-bin/node-gyp \
		${PREFIX}/bin/node-gyp;
	cd ${PREFIX}/lib/node_modules/npm/node_modules && for x in *; do \
		mv $$x ../..; \
		ln -s ../../$$x $$x; \
	done

do-test:
	cd ${WRKSRC} && \
	ulimit -n $$(ulimit -Hn) && \
	ulimit -d $$(ulimit -Hd) && \
	${MAKE_PROGRAM} test


.include <bsd.port.mk>
