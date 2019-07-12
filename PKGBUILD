pkgname=triggerbox-touch-maximize-all
_pkgname=touch-maximize-all
pkgver=1.0
pkgrel=1
pkgdesc="Triggerbox Touch Detection: Maximize All Windows"
arch=('x86_64')
url="https://github.com/realKennyStrawn93/$pkgname"
license=('GPL')
depends=('qtcreator')
source=("git+https://github.com/realKennyStrawn93/$pkgname#branch=master")
cpucores="$(cat /proc/cpuinfo | grep cores | head -n1 | tail -c2)"
md5sums=('SKIP')

package() {
  qmake -o $srcdir/$pkgname/Makefile $srcdir/$pkgname/$_pkgname.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
  cd $srcdir/$pkgname
  make -j$cpucores
  mkdir -p $pkgdir/usr/bin
  cp $_pkgname $pkgdir/usr/bin/$_pkgname
}
