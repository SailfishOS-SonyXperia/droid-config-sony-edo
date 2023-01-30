%package -n patterns-sailfish-device-configuration-xqas52
Summary: Jolla Configuration xqas52
Requires: patterns-sailfish-device-configuration-common-xqas52
Requires: patterns-sailfish-device-adaptation-pdx203

Requires: droid-config-xqas52-sailfish
Requires: droid-config-xqas52-pulseaudio-settings
Requires: droid-config-xqas52-policy-settings
Requires: droid-config-xqas52-preinit-plugin
Requires: droid-config-xqas52-flashing
Requires: droid-config-xqas52-bluez5
Requires: droid-hal-version-xqas52

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

%description -n patterns-sailfish-device-configuration-xqas52
Pattern with packages for xqas52 configurations

%files -n patterns-sailfish-device-configuration-xqas52
