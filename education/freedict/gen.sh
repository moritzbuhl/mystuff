#!/bin/sh

# https://freedict.org/freedict-database.xml
for d in $(grep -R dictd.tar.xz /tmp/db.xml | grep -o 'dictionaries\/[^/]*/[^/]*/' | cut -d/ -f 2-3); do
	dict=$(echo ${d%%/*})
	ver=$(echo ${d##*/})
cat << EOF > /usr/ports/mystuff/education/freedict/$dict/Makefile
# XXX: comment lookup in dict
# XXX: license?
COMMENT =	free bilingual dictionary
DICT =	$dict
V =	$ver

# GPLv2 or v3 or CC-XYZ or no real license or fuck
PERMIT_PACKAGE =	Yes # XXX
#PERMIT_DISTFILES =	Yes | Reason if No

.include "../Makefile.inc"
.include <bsd.port.mk>
EOF

done
