#!/bin/sh

ftp -o /tmp/db.xml https://freedict.org/freedict-database.xml

# https://freedict.org/freedict-database.xml
for d in $(grep -R dictd.tar.xz /tmp/db.xml | grep -o 'dictionaries\/[^/]*/[^/]*/' | cut -d/ -f 2-3); do
	dict=$(echo ${d%%/*})
	ver=$(echo ${d##*/})
comment=$(/home/mbuhl/code/dictd/obj/dict -D $dict -d 00databaseshort | cut -d' ' -f2-)
license=$(/home/mbuhl/code/dictd/obj/dict -D $dict -d 00database | grep -A2 -i license)

clear
echo "LICENSE: $license"
read lic?'license: GPLv23+  Creative-Commons-foooooo:'

cat << EOF > /usr/ports/mystuff/education/freedict/$dict/Makefile
COMMENT =	$comment
DICT =	$dict
V =	$ver

# $lic
PERMIT_PACKAGE =	Yes

.include "../Makefile.inc"
.include <bsd.port.mk>
EOF

foo=$(/home/mbuhl/code/dictd/obj/dict -D $dict -d 00databaseinfo)
echo "${foo##- }" > /usr/ports/mystuff/education/freedict/$dict/pkg/DESCR

done
