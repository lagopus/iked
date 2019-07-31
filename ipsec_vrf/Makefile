IPSECDIR=/usr/local/ipsec/
DESTDIR=/usr/local/ipsec/bin

ipsec_vrf: ipsec_vrf.in
	sed \
		-e "s:@IPSEC_DIR@:$(IPSECDIR):" \
		$@.in > $@

install: ipsec_vrf
	install -d $(DESTDIR)
	install ipsec_vrf $(DESTDIR)

clean: ipsec_vrf
	rm -f ipsec_vrf
