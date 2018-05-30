SUMMARY = "The TCG TPM2 Software Stack"
DESCRIPTION = "The TCG (Trusted Computing Group) Software Stack (TSS) \
provides a standard API for accessing the functions of the TPM. \
Application developers can use this software to develop interoperable \
client applications."
HOMEPAGE = "https://github.com/tpm2-software/tpm2-tss"
SECTION = "security/tpm"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://${S}/LICENSE;md5=500b2e742befc3da00684d8a1d5fd9da"

DEPENDS = "autoconf-archive-native"

inherit autotools pkgconfig
