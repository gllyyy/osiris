MIN_VERSION=10.9
VMIN="-mmacosx-version-min=${MIN_VERSION}"
ARCH=""
CPPTOP=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX${MIN_VERSION}.sdk/usr
PLATFORM=`sh ../../osname`
WXHOME=`sh ../../findwx`
WXCXX=`${WXHOME}/bin/wx-config --cxxflags`
WXCXXR="-DwxDEBUG_LEVEL=0 -fno-common -O2 -fno-strict-aliasing -fno-common -D_WCHAR_H_CPLUSPLUS_98_CONFORMANCE_ ${VMIN}"
MACLD="${VMIN}"
OSIRISCXX="-Wall -Wno-unknown-pragmas -D${PLATFORM} -I${CPPTOP}/include/libxml2  -I../../wxthings/include -I../../wxplotctrl/include -I.. -I../..  -I../../Version ${WXCXX} ${WXCXXR} ${MACCXX}"
CXXFLAGS="${OSIRISCXX}"
CFLAGS="${CXXFLAGS}"

