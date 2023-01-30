%define device pdx203
%define rpm_device xqat52

%define device_pretty Xperia 1 II - Dual SIM

# Community HW adaptations need this
#define community_adaptation 1

%define pixel_ratio 1.75

%include droid-config-common.inc
%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-pdx203.inc
%include patterns/patterns-sailfish-device-configuration-xqat52.inc
