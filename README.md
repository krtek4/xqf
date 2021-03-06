XQF
===

![XQF logo](pixmaps/xqf.png)

DESCRIPTION
-----------

XQF is a server browser and launcher for games using [id Tech engines](http://en.wikipedia.org/wiki/Id_Tech), [Unreal engines](http://en.wikipedia.org/wiki/Unreal_Engine) and derivatives. It uses the [GTK+](http://www.gtk.org/) 2 toolkit.

XQF is a front-end to [QStat](http://qstat.sourceforge.net/), a program by Steve Jankowski.

See the file [NEWS.md](NEWS.md) and the [ChangeLog](ChangeLog) for updated information.


BUILD / INSTALLATION / USAGE
----------------------------

1. ``git clone https://github.com/XQF/xqf.git``; ``cd xqf``
2. ``./autogen.sh``
3. ``./configure`` (with Debian or Ubuntu, add ``--with-qstat=quakestat --prefix=/usr``)
4. ``make``
5. ``make install`` (or ``fakeroot checkinstall --fstrans=yes``)
6. ``xqf``

Please see the ``docs/xqfdocs.html`` file for more information. Warning, this page is not up to date!


AVAILABILITY
------------

* https://github.com/XQF/xqf/ (up to date Git repository)
* http://www.linuxgames.com/xqf/ (old but current home page)
* http://sourceforge.net/projects/xqf/ (previously published files and old SVN repository)


HOW TO CONTRIBUTE
-----------------

The best way to contribute is to fork this project, please read the [GUIDELINES.md](GUIDELINES.md) for further information.


COPYRIGHT
---------

XQF is Copyright © 1998-2000 Roman Pozlevich.  
See the file [AUTHORS.md](AUTHORS.md) for contributors.

Copying is allowed under the terms of GNU General Public License.  
See the file [COPYING](COPYING) for more details.


HISTORY
-------

2013-2014 Thomas Debesse <xqf@illwieckz.net>  
2001-2014 Jordi Mallach <jordi@debian.org>  
2001-2010 Ludwig Nussel <ludwig.nussel@suse.de>  
2000-2003 Alex Burger <alex_b@users.sf.net>  
2000-2002 Bill Adams <bill@evilbill.org>  
1998-2000 Roman Pozlevich <roma@botik.ru>
