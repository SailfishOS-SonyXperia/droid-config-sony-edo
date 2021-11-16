%package -n patterns-sailfish-device-configuration-xqat52
Summary: Jolla Configuration xqat52
Requires: patterns-sailfish-device-configuration-common-xqat52
Requires: patterns-sailfish-device-adaptation-pdx203

Requires: droid-config-xqat52-sailfish
Requires: droid-config-xqat52-pulseaudio-settings
Requires: droid-config-xqat52-policy-settings
Requires: droid-config-xqat52-preinit-plugin
Requires: droid-config-xqat52-flashing
Requires: droid-config-xqat52-bluez5
Requires: droid-hal-version-xqat52

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
Requires: jolla-settings-networking-multisim

# Flashlight
Requires: jolla-settings-system-flashlight

# For devices which support NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

Requires: patterns-sailfish-consumer-generic
Requires: patterns-sailfish-store-applications
Requires: patterns-sailfish-rnd
# dev-tools pattern will be fixed in the next release
# for now we'll use its 'exploded' version:
Requires: zypper
Requires: jolla-rnd-device

%description -n patterns-sailfish-device-configuration-xqat52
Pattern with packages for xqat52 configurations

%files -n patterns-sailfish-device-configuration-xqat52
