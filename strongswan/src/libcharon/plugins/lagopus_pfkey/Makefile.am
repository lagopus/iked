AM_CPPFLAGS = \
	-I${linux_headers} \
	-I$(top_srcdir)/src/libstrongswan \
	-I$(top_srcdir)/src/libcharon

AM_CFLAGS = \
	$(PLUGIN_CFLAGS)

if MONOLITHIC
noinst_LTLIBRARIES = libstrongswan-lagopus-pfkey.la
else
plugin_LTLIBRARIES = libstrongswan-lagopus-pfkey.la
endif

libstrongswan_lagopus_pfkey_la_SOURCES = \
	lagopus_pfkey_plugin.h lagopus_pfkey_plugin.c \
	lagopus_pfkey_ipsec.h lagopus_pfkey_ipsec.c

libstrongswan_lagopus_pfkey_la_LDFLAGS = -module -avoid-version
