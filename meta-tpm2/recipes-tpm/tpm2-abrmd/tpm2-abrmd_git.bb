include ${BPN}.inc

DEFAULT_PREFERENCE = "-1"

DEPENDS += "tpm2-tss"

PVBASE := "${PV}"
PV = "${PVBASE}.${SRCPV}"

SRC_URI += "git://github.com/01org/${BPN}.git;protocol=git;branch=master;name=${BPN};destsuffix=${BPN}"

SRCREV = "${AUTOREV}"

S = "${WORKDIR}/${BPN}"

do_configure_prepend () {
	# execute the bootstrap script
	currentdir=$(pwd)
	cd ${S}
	AUTORECONF=true ./bootstrap
	cd ${currentdir}
}
