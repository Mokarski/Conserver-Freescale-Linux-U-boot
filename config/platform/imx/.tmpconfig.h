/*
 * Automatically generated C config: don't edit
 * LTIB version: 8.1.2
 */
#define AUTOCONF_INCLUDED
#define CONFIG_CONFIG_TITLE "Freescale iMX6x Based Boards"
#define CONFIG_PLATFORM_COMMENT "Freescale iMX6x Based Boards"
#define CONFIG_VENDOR "Freescale"
#define CONFIG_PLATFORM "imx6q"
#define CONFIG_PLATFORM_SUBDIR "imx"
#define CONFIG_GNUTARCH "arm"
#define CONFIG_LINTARCH "arm"
#define CONFIG_CFGHOST "arm-linux"
#define CONFIG_ARMEABI_ARCH 1
#define CONFIG_VFP_ARCH 1

/*
 * LTIB settings
 */

/*
 * System features
 */
#define CONFIG_FEAT_CACHE_RPMS 1
#define CONFIG_ENDIAN "little"

/*
 * Choose the target C library type
 */
#define CONFIG_GLIBC 1
#undef CONFIG_UCLIBC
#define CONFIG_CHOICE_BASE_LIBS 1
#undef CONFIG_CHOICE_GLIBC
#undef CONFIG_CHOICE_UCLIBC
#undef CONFIG_LIBC_NONE
#undef CONFIG_PKG_GLIBC
#undef CONFIG_PKG_UCLIBC

/*
 * Toolchain component options
 */
#define CONFIG_PKG_BASE_LIBS 1
#define CONFIG_PKG_LIBC_WANT_SHARED_LIBS 1
#undef CONFIG_PKG_LIBC_WANT_CRT_FILES
#undef CONFIG_PKG_LIBC_WANT_HEADERS1
#undef CONFIG_PKG_LIBC_WANT_STATIC_LIBS
#undef CONFIG_PKG_LIBC_WANT_C_LOCALES
#define CONFIG_PKG_CXX_WANT_SHARED_LIBS 1
#undef CONFIG_PKG_CXX_WANT_HEADERS
#undef CONFIG_PKG_CXX_WANT_STATIC_LIBS
#define CONFIG_PKG_GCC_WANT_LIBGCC_SHARED 1
#define CONFIG_DYNAMIC_LINKER "/lib/ld.so.1"
#define CONFIG_SYS_WANT_MMU 1
#define CONFIG_SYS_WANT_SHARED 1

/*
 * Toolchain selection.
 */
#define CONFIG_TOOLCHAIN_ARMEABI_FSL_GCC_LINARO_MULTILIB 1
#undef CONFIG_TOOLCHAIN_ARMEABI_FSL_GCC_MULTILIB
#undef CONFIG_TOOLCHAIN_ARMEABI_CODE_SOURCERY
#undef CONFIG_TOOLCHAIN_ARMEABI_GLIBC1
#undef CONFIG_TOOLCHAIN_ARMEABI_CUSTOM
#define CONFIG_TOOLCHAIN "gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12-1.i386.rpm"
#define CONFIG_TOOLCHAIN_PATH "/opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain"
#define CONFIG_TOOLCHAIN_PREFIX "arm-none-linux-gnueabi-"
#define CONFIG_TOOLCHAIN_CFLAGS "-O2 -march=armv7-a -mfpu=vfpv3 -mfloat-abi=softfp"

/*
 * Choose your bootloader for U-Boot
 */
#define CONFIG_BOOTLOADER_U_BOOT 1
#undef CONFIG_BOOTLOADER_GIT
#undef CONFIG_U_BOOT_DIR_BUILD
#undef CONFIG_BOOTLOADER_NONE
#define CONFIG_BOOTLOADER_U_BOOT_200908 1
#undef CONFIG_BOOTLOADER_U_BOOT_201210

/*
 * Choose your board for u-boot
 */
#undef CONFIG_BOARD_MX6Q_ARM2
#undef CONFIG_BOARD_MX6Q_ARM2_LPDDR2
#undef CONFIG_BOARD_MX6Q_ARM2_LPDDR2POP
#undef CONFIG_BOARD_MX6Q_SABRELITE
#undef CONFIG_BOARD_MX6Q_SABREAUTO
#undef CONFIG_BOARD_MX6Q_SABREAUTO_NAND
#undef CONFIG_BOARD_MX6Q_SABREAUTO_WEIMNOR
#undef CONFIG_BOARD_MX6Q_SABREAUTO_SPI-NOR
#define CONFIG_BOARD_MX6Q_SABRESD 1
#undef CONFIG_BOARD_MX6Q_HDMIDONGLE
#undef CONFIG_BOARD_MX6Q_HDMIDONGLE_NAND
#undef CONFIG_BOARD_MX6DL_ARM2
#undef CONFIG_BOARD_MX6DL_ARM2_LPDDR2
#undef CONFIG_BOARD_MX6DL_SABRESD
#undef CONFIG_BOARD_MX6DL_SABREAUTO
#undef CONFIG_BOARD_MX6DL_SABREAUTO_NAND
#undef CONFIG_BOARD_MX6DL_SABREAUTO_SPI-NOR
#undef CONFIG_BOARD_MX6DL_SABREAUTO_WEIMNOR
#undef CONFIG_BOARD_MX6DL_HDMIDONGLE
#undef CONFIG_BOARD_MX6DL_HDMIDONGLE_NAND
#undef CONFIG_BOARD_MX6SOLO_SABREAUTO
#undef CONFIG_BOARD_MX6SOLO_SABREAUTO_NAND
#undef CONFIG_BOARD_MX6SOLO_SABREAUTO_WEIMNOR
#undef CONFIG_BOARD_MX6SOLO_SABREAUTO_SPI-NOR
#undef CONFIG_BOARD_MX6SOLO_SABRESD
#define CONFIG_PKG_U_BOOT "u-boot-v2009.08"
#define CONFIG_PKG_U_BOOT_CONFIG_TYPE "mx6q_sabresd_config"
#define CONFIG_PKG_U_BOOT_BUILD_ARGS "OPTFLAGS=-Os"
#define CONFIG_SYSCFG_KTARG "uImage"
#define CONFIG_SYSCFG_BOOT_KERNEL "arch/arm/boot/uImage arch/arm/boot/zImage"

/*
 * Choose your Kernel
 */
#undef CONFIG_KERNEL_3507
#define CONFIG_KERNEL_3035 1
#undef CONFIG_KERNEL_3015
#undef CONFIG_KERNEL_38
#undef CONFIG_KERNEL_35
#undef CONFIG_KERNEL_31
#undef CONFIG_KERNEL_28
#undef CONFIG_KERNEL_GIT
#undef CONFIG_KERNEL_DIR_BUILD
#undef CONFIG_KERNEL_NONE
#define CONFIG_PKG_KERNEL_FORCE 1
#undef CONFIG_PKG_KERNEL_WANT_CSCOPE
#define CONFIG_PKG_KERNEL "kernel-3.0.35"
#define CONFIG_PKG_KERNEL_WANT_HEADERS 1
#define CONFIG_PKG_KERNEL_WANT_CF 1
#define CONFIG_PKG_KERNEL_LEAVESRC 1
#undef CONFIG_PKG_KERNEL_UPDATER
#define CONFIG_PKG_KERNEL_PRECONFIG "imx6_defconfig"
#define CONFIG_DISTRO "dist/lfs-5.1"

/*
 * Package selection
 */

/*
 * Package list
 */

/*
 * Platform specific package selection
 */
#define CONFIG_PKG_FIRMWARE_IMX 1
#define CONFIG_PKG_IMX_TEST 1
#define CONFIG_PKG_IMX_LIB 1
#define CONFIG_PKG_KOBS_NG 1
#undef CONFIG_PKG_LTP_IMX
#undef CONFIG_PKG_WPA_SUPPLICANT
#undef CONFIG_PKG_GPU_VIV_BIN_MX6Q
#undef CONFIG_PKG_UUC
#undef CONFIG_PKG_ATHEROS_WIFI
#undef CONFIG_PKG_MTDEV
#undef CONFIG_PKG_GPU_VIV_WL_BIN_MX6Q
#undef CONFIG_PKG_WESTON_IMX_BIN

/*
 * Freescale Multimedia Plugins/Codecs
 */
#undef CONFIG_PKG_LIBFSLCODEC
#undef CONFIG_PKG_LIBFSLPARSER
#undef CONFIG_PKG_LIBFSLVPUWRAP
#undef CONFIG_PKG_LIBFSLAACPCODEC
#undef CONFIG_PKG_LIBFSLAC3CODEC
#undef CONFIG_PKG_LIBFSLMSCODEC
#undef CONFIG_PKG_LIBFSLMSPARSER
#undef CONFIG_PKG_GST_FSL_PLUGINS
#undef CONFIG_PKG_GST_PLUGINS_GL
#undef CONFIG_PKG_FSL_ALSA_PLUGINS

/*
 * Common package selection list
 */
#undef CONFIG_PKG_ASTERISK
#undef CONFIG_PKG_ATK
#undef CONFIG_PKG_AUTOCONF
#undef CONFIG_PKG_AUTOMAKE
#undef CONFIG_PKG_ALSA_LIB
#undef CONFIG_PKG_ALSA_UTILS
#define CONFIG_PKG_BASH 1
#undef CONFIG_PKG_BASH_WANT_NO_SH_SYMLINK
#undef CONFIG_PKG_BIND
#undef CONFIG_PKG_BINUTILS
#undef CONFIG_PKG_BISON
#undef CONFIG_PKG_BLUEZ_HCIDUMP
#undef CONFIG_PKG_BLUEZ_LIBS
#undef CONFIG_PKG_BLUEZ_UTILS
#undef CONFIG_PKG_BOA
#undef CONFIG_PKG_BONNIE_PLUS_PLUS
#undef CONFIG_PKG_BRIDGE_UTILS
#define CONFIG_PKG_BUSYBOX 1
#define CONFIG_PKG_BUSYBOX_PRECONFIG "busybox.config"
#undef CONFIG_PKG_BUSYBOX_WANT_CF
#undef CONFIG_PKG_BZIP2
#undef CONFIG_PKG_CAIRO
#undef CONFIG_PKG_CAN4LINUX
#undef CONFIG_PKG_CANTEST
#undef CONFIG_PKG_CCACHE
#undef CONFIG_PKG_CHEESE
#undef CONFIG_PKG_CLAMAV
#undef CONFIG_PKG_CONNTRACK_TOOLS
#undef CONFIG_PKG_COREUTILS
#undef CONFIG_PKG_CPIO
#undef CONFIG_PKG_CPUFREQUTILS
#undef CONFIG_PKG_CRACKLIB
#undef CONFIG_PKG_CRAMFS
#undef CONFIG_PKG_CRASHME
#undef CONFIG_PKG_CURL
#undef CONFIG_PKG_DAEMONIZER
#undef CONFIG_PKG_DEVMEM2
#undef CONFIG_PKG_DHCP
#undef CONFIG_PKG_DB1
#undef CONFIG_PKG_DB4
#undef CONFIG_PKG_DBUS
#undef CONFIG_PKG_DBUS_GLIB
#undef CONFIG_PKG_DEV
#undef CONFIG_PKG_MDEV
#define CONFIG_PKG_UDEV 1
#undef CONFIG_PKG_UDEV_WANT_AUTOMOUNT
#define CONFIG_PKG_UDEV_WANT_NON_RAID 1
#define CONFIG_PKG_UDEV_WANT_IMX 1
#undef CONFIG_PKG_DEVFSD
#undef CONFIG_PKG_DEV_NONE
#undef CONFIG_PKG_DIFFUTILS
#undef CONFIG_PKG_DIRECTFB
#undef CONFIG_PKG_DISTCC
#undef CONFIG_PKG_DOSFSTOOLS
#undef CONFIG_PKG_NEWFS_MSDOS
#undef CONFIG_PKG_DROPBEAR
#undef CONFIG_PKG_DTC
#undef CONFIG_PKG_DT_D
#undef CONFIG_PKG_E2FSPROGS

/*
 * Enlightenment window manager packages
 */
#define CONFIG_CHOICE_ENLIGHTENMENT_NONE 1
#undef CONFIG_CHOICE_ENLIGHTENMENT
#undef CONFIG_PKG_ED
#undef CONFIG_PKG_EEL
#undef CONFIG_PKG_ENCHANT
#undef CONFIG_PKG_EOG
#undef CONFIG_PKG_EPDFVIEW
#undef CONFIG_PKG_ETHTOOL
#undef CONFIG_PKG_EVOLUTION
#undef CONFIG_PKG_EVOLUTION_DATA_SERVER
#undef CONFIG_PKG_EVTEST
#undef CONFIG_PKG_EXPAT
#undef CONFIG_PKG_FAAD2
#undef CONFIG_PKG_FAKEROOT
#define CONFIG_PKG_FAKE_PROVIDES 1
#undef CONFIG_PKG_FARSIGHT
#undef CONFIG_PKG_FBPAN
#undef CONFIG_PKG_FBSET
#undef CONFIG_PKG_FBV
#undef CONFIG_PKG_FFMPEG
#undef CONFIG_PKG_FINDUTILS
#undef CONFIG_PKG_FLEX
#undef CONFIG_PKG_FMTOOLS
#undef CONFIG_PKG_FONTCONFIG
#undef CONFIG_PKG_FREETYPE
#undef CONFIG_PKG_GAWK
#undef CONFIG_PKG_GCONF_DBUS
#undef CONFIG_PKG_GDBM
#undef CONFIG_PKG_GDB
#undef CONFIG_PKG_GENEXT2FS
#undef CONFIG_PKG_GENROMFS
#undef CONFIG_PKG_GEN_INIT_CPIO
#undef CONFIG_PKG_GETTEXT
#undef CONFIG_PKG_GIT
#undef CONFIG_PKG_GLIB2
#undef CONFIG_PKG_GMP
#undef CONFIG_PKG_GNOME_DESKTOP
#undef CONFIG_PKG_GNOME_MIME_DATA
#undef CONFIG_PKG_GNOME_ICON_THEME
#undef CONFIG_PKG_GNOME_VFS
#undef CONFIG_PKG_GNOME_KEYRING
#undef CONFIG_PKG_GPSD
#undef CONFIG_PKG_GREP
#undef CONFIG_PKG_GROFF
#undef CONFIG_PKG_GSTREAMER_CORE
#undef CONFIG_PKG_GST_PLUGINS_FARSIGHT
#undef CONFIG_PKG_GTK2
#undef CONFIG_PKG_GTKHTML
#undef CONFIG_PKG_HAL
#undef CONFIG_PKG_HDPARM
#undef CONFIG_PKG_HELLOWORLD
#undef CONFIG_PKG_HELLOWORLD_MOD
#undef CONFIG_PKG_HESIOD
#undef CONFIG_PKG_HOSTAPD
#define CONFIG_PKG_HOTPLUG 1
#undef CONFIG_PKG_HTTPD
#undef CONFIG_PKG_I2C_TOOLS
#undef CONFIG_PKG_IOZONE
#undef CONFIG_PKG_INPUT_UTILS
#define CONFIG_PKG_IPROUTE 1
#undef CONFIG_PKG_INETUTILS
#undef CONFIG_PKG_IPERF
#undef CONFIG_PKG_OPENSWAN
#undef CONFIG_PKG_STRONGSWAN
#define CONFIG_PKG_IPSEC_SUITE_NONE 1
#undef CONFIG_PKG_IPSEC_TOOLS
#undef CONFIG_PKG_IPSECADM
#undef CONFIG_PKG_IPTABLES
#undef CONFIG_PKG_IPUTILS
#undef CONFIG_PKG_IRATTACH
#undef CONFIG_PKG_IRDADUMP
#undef CONFIG_PKG_ISO_CODES
#undef CONFIG_PKG_KBD
#undef CONFIG_PKG_KEYFUZZ
#undef CONFIG_PKG_KRB5
#undef CONFIG_PKG_LESS
#undef CONFIG_PKG_LFS_UTILS
#undef CONFIG_PKG_LIBERATION_FONTS
#undef CONFIG_PKG_LIBART_LGPL
#undef CONFIG_PKG_LIBBONOBO
#undef CONFIG_PKG_LIBBONOBOUI
#undef CONFIG_PKG_LIBGCRYPT
#undef CONFIG_PKG_LIBGPG_ERROR
#undef CONFIG_PKG_LIBGLADE
#undef CONFIG_PKG_LIBGNOME
#undef CONFIG_PKG_LIBGNOMECANVAS
#undef CONFIG_PKG_LIBGNOMEUI
#undef CONFIG_PKG_LIBICONV
#undef CONFIG_PKG_LIBIDL
#undef CONFIG_PKG_LIBID3TAG
#undef CONFIG_PKG_LIBMAD
#undef CONFIG_PKG_LIBMPEG2
#undef CONFIG_PKG_LIBNETFILTER_CONNTRACK
#undef CONFIG_PKG_LIBNFNETLINK
#undef CONFIG_PKG_LIBNL
#undef CONFIG_PKG_LIBJPEG
#undef CONFIG_PKG_LIBELF
#undef CONFIG_PKG_LIBNET
#undef CONFIG_PKG_LIBOGG
#undef CONFIG_PKG_LIBPCAP
#undef CONFIG_PKG_LIBPNG
#undef CONFIG_PKG_LIBOIL
#undef CONFIG_PKG_LIBRSVG
#undef CONFIG_PKG_LIBSOUP
#undef CONFIG_PKG_LIBTASN1
#define CONFIG_PKG_LIBTERMCAP 1
#undef CONFIG_PKG_LIBTIFF
#undef CONFIG_PKG_LIBTOOL
#undef CONFIG_PKG_LIBUSB
#undef CONFIG_PKG_LIBXML2
#undef CONFIG_PKG_LINUX_ATM
#undef CONFIG_PKG_LINUX_WLAN
#undef CONFIG_PKG_MPFR
#undef CONFIG_PKG_LKC
#undef CONFIG_PKG_LOGROTATE
#undef CONFIG_PKG_LTP
#undef CONFIG_PKG_LMBENCH
#undef CONFIG_PKG_LM_SENSORS
#undef CONFIG_PKG_LRZSZ
#undef CONFIG_PKG_LZO
#undef CONFIG_PKG_M4
#undef CONFIG_PKG_MADPLAY
#undef CONFIG_PKG_MAKE
#undef CONFIG_PKG_MAN

/*
 * Matchbox window manager packages
 */
#define CONFIG_CHOICE_MATCHBOX_NONE 1
#undef CONFIG_CHOICE_MATCHBOX
#undef CONFIG_PKG_MDADM
#define CONFIG_PKG_MERGE 1
#undef CONFIG_PKG_MICROWINDOWS
#undef CONFIG_PKG_MIITOOL
#undef CONFIG_PKG_MINICOM
#define CONFIG_PKG_MODEPS 1
#undef CONFIG_PKG_MODUTILS
#undef CONFIG_PKG_MODULE_INIT_TOOLS
#define CONFIG_MODUTILS_NONE 1
#undef CONFIG_PKG_MPLAYER
#undef CONFIG_PKG_MP3PLAY
#undef CONFIG_PKG_MTD_UTILS
#undef CONFIG_PKG_MUX_SERVER
#undef CONFIG_PKG_MYSQL
#undef CONFIG_PKG_NAUTILUS
#undef CONFIG_PKG_NCURSES
#undef CONFIG_PKG_NET_SNMP
#undef CONFIG_PKG_NET_TOOLS
#undef CONFIG_PKG_NETCAT
#undef CONFIG_PKG_NETPERF
#undef CONFIG_PKG_NFS_UTILS
#undef CONFIG_PKG_NSS_MDNS
#undef CONFIG_PKG_NTPCLIENT
#undef CONFIG_PKG_OPENOBEX
#undef CONFIG_PKG_OPENCV
#undef CONFIG_PKG_OPENSSH
#undef CONFIG_PKG_OPENSSL
#undef CONFIG_PKG_OPROFILE
#undef CONFIG_PKG_ORBIT2
#undef CONFIG_PKG_PANGO
#undef CONFIG_PKG_PATCH
#undef CONFIG_PKG_PCIUTILS
#undef CONFIG_PKG_PCMCIAUTILS
#undef CONFIG_PKG_PCRE
#undef CONFIG_PKG_PERL
#undef CONFIG_PKG_PHP
#undef CONFIG_PKG_PIDENTD
#undef CONFIG_PKG_PKGCONFIG
#undef CONFIG_PKG_PLAY
#undef CONFIG_PKG_POPPLER
#undef CONFIG_PKG_POPT
#undef CONFIG_PKG_PORTMAP
#undef CONFIG_PKG_PPP
#undef CONFIG_PKG_PROCINFO
#undef CONFIG_PKG_PROCPS
#undef CONFIG_PKG_PSMISC
#undef CONFIG_PKG_PYTHON

/*
 * Qt
 */
#define CONFIG_QT_NONE 1
#undef CONFIG_PKG_QT_EMBEDDED
#undef CONFIG_PKG_QT_X11

/*
 * Qtopia
 */
#define CONFIG_QTOPIA_NONE 1
#undef CONFIG_PKG_QTOPIA
#undef CONFIG_PKG_QTOPIA_4

/*
 * Applications
 */

/*
 * Settings applications
 */
#undef CONFIG_PKG_READLINE
#undef CONFIG_PKG_RPM
#undef CONFIG_PKG_RNG_TOOLS
#undef CONFIG_PKG_RSYNC
#undef CONFIG_PKG_RT_TESTS
#undef CONFIG_PKG_RTCTEST
#undef CONFIG_PKG_SAMBA
#undef CONFIG_PKG_SASH
#undef CONFIG_PKG_SCHEDUTILS
#undef CONFIG_PKG_SCREEN
#undef CONFIG_PKG_SED
#undef CONFIG_PKG_SEQ
#undef CONFIG_PKG_SETSERIAL
#undef CONFIG_PKG_SIMICSFS_MOD
#define CONFIG_PKG_SKELL 1
#undef CONFIG_PKG_SKELL_WANT_TERMINFO
#undef CONFIG_PKG_SPARSE
#undef CONFIG_PKG_STATSERIAL
#undef CONFIG_PKG_SQLITE
#undef CONFIG_PKG_STRACE
#define CONFIG_PKG_SYSCONFIG 1
#undef CONFIG_PKG_SYSFSUTILS
#undef CONFIG_PKG_SYSKLOGD
#undef CONFIG_PKG_SYSSTAT
#undef CONFIG_PKG_SYSVINIT
#undef CONFIG_PKG_TAR
#undef CONFIG_PKG_TCLAP
#undef CONFIG_PKG_TCPDUMP
#undef CONFIG_PKG_TCP_WRAPPERS
#undef CONFIG_PKG_TERMCAP
#undef CONFIG_PKG_TEXINFO
#undef CONFIG_PKG_TIME
#undef CONFIG_PKG_TIMEZONE
#undef CONFIG_PKG_TINYLOGIN
#undef CONFIG_PKG_TINYPROXY
#undef CONFIG_PKG_TOTEM
#undef CONFIG_PKG_TOTEM_PL_PARSER
#undef CONFIG_PKG_TSLIB
#undef CONFIG_PKG_TUNCTL
#undef CONFIG_PKG_USBUTILS
#undef CONFIG_PKG_UCLINUX_CKSUM
#undef CONFIG_PKG_UTIL_LINUX
#undef CONFIG_PKG_U_BOOT_TOOLS
#undef CONFIG_PKG_UNIFDEF
#undef CONFIG_PKG_UNZIP
#undef CONFIG_PKG_VIM
#undef CONFIG_PKG_VPLAY
#undef CONFIG_PKG_VSFTPD
#undef CONFIG_PKG_WATCHDOG
#undef CONFIG_PKG_WGET
#undef CONFIG_PKG_WHICH
#undef CONFIG_PKG_WIRELESS_TOOLS
#undef CONFIG_PKG_XFSPROGS
#undef CONFIG_PKG_LIBXKBCOMMON
#undef CONFIG_PKG_LIBXCB
#undef CONFIG_PKG_LIBFFI
#undef CONFIG_PKG_WAYLAND

/*
 * X11
 */
#define CONFIG_X11_NONE 1
#undef CONFIG_PKG_XORG_SERVER

/*
 * X11 libraries and packages
 */
#undef CONFIG_PKG_RANDRPROTO
#undef CONFIG_PKG_RENDERPROTO
#undef CONFIG_PKG_FIXESPROTO
#undef CONFIG_PKG_DAMAGEPROTO
#undef CONFIG_PKG_XF86DRIPROTO
#undef CONFIG_PKG_XCMISCPROTO
#undef CONFIG_PKG_XEXTPROTO
#undef CONFIG_PKG_XPROTO
#undef CONFIG_PKG_SCRNSAVERPROTO
#undef CONFIG_PKG_BIGREQSPROTO
#undef CONFIG_PKG_RESOURCEPROTO
#undef CONFIG_PKG_FONTSPROTO
#undef CONFIG_PKG_INPUTPROTO
#undef CONFIG_PKG_KBPROTO
#undef CONFIG_PKG_VIDEOPROTO
#undef CONFIG_PKG_COMPOSITEPROTO
#undef CONFIG_PKG_RECORDPROTO
#undef CONFIG_PKG_FONTCACHEPROTO
#undef CONFIG_PKG_XF86BIGFONTPROTO
#undef CONFIG_PKG_XCB_PROTO
#undef CONFIG_PKG_LIBPTHREAD_STUBS
#undef CONFIG_PKG_LIBFONTENC
#undef CONFIG_PKG_XTRANS
#undef CONFIG_PKG_LIBDRM
#undef CONFIG_PKG_PIXMAN
#undef CONFIG_PKG_LIBXKBFILE
#undef CONFIG_PKG_LIBXFONT
#undef CONFIG_PKG_LIBXDMCP
#undef CONFIG_PKG_LIBXAU
#undef CONFIG_PKG_LIBX11
#undef CONFIG_PKG_LIBXEXT
#undef CONFIG_PKG_LIBXFT
#undef CONFIG_PKG_LIBXRANDR
#undef CONFIG_PKG_LIBXRENDER
#undef CONFIG_PKG_LIBXFIXES
#undef CONFIG_PKG_LIBXDAMAGE
#undef CONFIG_PKG_LIBPCIACCESS
#undef CONFIG_PKG_FONTUTIL
#undef CONFIG_PKG_LIBICE
#undef CONFIG_PKG_LIBSM
#undef CONFIG_PKG_LIBXPM
#undef CONFIG_PKG_LIBXT
#undef CONFIG_PKG_LIBXMU
#undef CONFIG_PKG_LIBXAW
#undef CONFIG_PKG_LIBXXF86DGA
#undef CONFIG_PKG_XORG_X11_XKB_UTILS
#undef CONFIG_PKG_XORG_X11_PROTO_DEVEL
#undef CONFIG_PKG_XORG_X11_TWM
#undef CONFIG_PKG_XTERM
#undef CONFIG_PKG_YAFFS_UTILS
#undef CONFIG_PKG_ZAPTEL
#undef CONFIG_PKG_ZLIB

/*
 * Additional Package selection
 */

/*
 * Target System Configuration
 */

/*
 * Options
 */
#define CONFIG_SYSCFG_HOSTNAME "freescale"
#define CONFIG_SYSCFG_WANT_LOGIN_TTY 1
#define CONFIG_SYSCFG_LOGING_TTY "::respawn:/etc/rc.d/rc_mxc.S"
#define CONFIG_SYSCFG_MODLIST ""
#define CONFIG_SYSCFG_START_UDEV 1
#undef CONFIG_SYSCFG_START_NETWORK
#undef CONFIG_SYSCFG_SETTIME
#undef CONFIG_SYSCFG_START_SYSLOG
#define CONFIG_SYSCFG_START_INETD 1
#define CONFIG_SYSCFG_INETD_ARGS ""

/*
 * Target Image Generation
 */

/*
 * Options
 */

/*
 * Choose your root filesystem image type
 */
#define CONFIG_DEPLOYMENT_JFFS2 1
#undef CONFIG_DEPLOYMENT_UBIFS
#undef CONFIG_DEPLOYMENT_RAMDISK
#undef CONFIG_DEPLOYMENT_CRAMFS
#undef CONFIG_DEPLOYMENT_INITRAMFS
#undef CONFIG_DEPLOYMENT_ROMFS
#undef CONFIG_DEPLOYMENT_NFS
#define CONFIG_SYSCFG_DEPLOYMENT_STYLE "JFFS2"
#undef CONFIG_WANT_POST_BUILD_SCRIPT
#define CONFIG_DEPLOYMENT_ERASE_BLOCK_SIZE "512"
#undef CONFIG_SYSCFG_READONLY_FS
#define CONFIG_SYSCFG_TMPFS_SIZE "512k"
#define CONFIG_SYSCFG_RAM_DIRS "/tmp /var"
#define CONFIG_DEPLOYMENT_ROOTFS_DIR ""
#undef CONFIG_DEPLOYMENT_ROOTFS_KEEPSTAGE
#undef CONFIG_DEPLOYMENT_HL2SL
#define CONFIG_DEPLOYMENT_RM_DOCS 1
#define CONFIG_DEPLOYMENT_RM_BOOT 1
#undef CONFIG_DEPLOYMENT_RM_USR_SRC
#undef CONFIG_DEPLOYMENT_RM_USR_INCLUDE
#define CONFIG_DEPLOYMENT_RM_LOCALES 1
#define CONFIG_DEPLOYMENT_RM_USER_DIRS "/opt/qt /usr/share/man /usr/man /u /usr/arm-linux /usr/lib/fonts"
#define CONFIG_DEPLOYMENT_RM_USER_FILES "/usr/lib/libqte* /usr/include/q* /usr/include/jri*.h /usr/include/npapi.h /usr/include/npupp.h"
#define CONFIG_DEPLOYMENT_RM_STATIC_LIBS 1
#define CONFIG_DEPLOYMENT_RM_RPMDB "/var/lib/rpm"
#define CONFIG_DEPLOYMENT_STRIP 1
#undef CONFIG_DEPLOYMENT_STRIP_MORE
#undef CONFIG_DEPLOYMENT_PADDING_EN
#define CONFIG_DEPLOYMENT_PAGESIZE_KB "4"
#define CONFIG_ERASE_BLOCK_SIZE "64"
#define CONFIG_CAP_UCLIBC 1
#define CONFIG_CAP_GLIBC 1
#define CONFIG_CAP_LFS_5_1 1
#define CONFIG_CAP_HAS_MMU 1
#define CONFIG_CAP_HAS_SHARED 1
#define CONFIG_PKG_GCC_NAME "nobuild"
#define CONFIG_SYSCFG_TMPFS "tmpfs"
#define CONFIG_INITTAB_LINE "::respawn:-/sbin/getty -L console 0 screen"
#define CONFIG_UCLIBC_DYNAMIC_LINKER "/lib/ld-uClibc.so.0"
#define CONFIG_GLIBC_DYNAMIC_LINKER "/lib/ld.so.1"
#define CONFIG_SYSCFG_BAUD "115200"
#define CONFIG_SYSCFG_CONSOLEDEV "ttyS0"
#define CONFIG_SYSCFG_BOOTLOADER "u-boot"
#define CONFIG_U_BOOT_IMAGE_TYPE "ppc"
#define CONFIG_SYSCFG_RUNKERNELADDR "0x0"
#define CONFIG_SYSCFG_LOADKERNELADDR "0x800000"
#define CONFIG_SYSCFG_LOADDTBADDR "0x9F0000"
#define CONFIG_SYSCFG_LOADRAMADDR "0xB00000"
#define CONFIG_SYSCFG_CUTARG "zImage"
#define CONFIG_CAP_FSL_EXT 1
#define CONFIG_LTIB_RELEASE "8.1.2"
