#############################################################################
# Makefile for building: Homework4
# Generated by qmake (2.01a) (Qt 4.6.2) on: Fri Apr 20 18:58:59 2012
# Project:  Homework4.pro
# Template: app
# Command: /usr/bin/qmake -unix -o Makefile Homework4.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = bomb.cpp \
		bonus.cpp \
		brick.cpp \
		bullet.cpp \
		catcher.cpp \
		downObstacles.cpp \
		fire.cpp \
		game.cpp \
		main.cpp \
		obstacle.cpp \
		rocket.cpp \
		sideObstacles.cpp \
		superShooter.cpp \
		tank.cpp moc_game.cpp
OBJECTS       = bomb.o \
		bonus.o \
		brick.o \
		bullet.o \
		catcher.o \
		downObstacles.o \
		fire.o \
		game.o \
		main.o \
		obstacle.o \
		rocket.o \
		sideObstacles.o \
		superShooter.o \
		tank.o \
		moc_game.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		Homework4.pro
QMAKE_TARGET  = Homework4
DESTDIR       = 
TARGET        = Homework4

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Homework4.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -unix -o Makefile Homework4.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile Homework4.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Homework41.0.0 || $(MKDIR) .tmp/Homework41.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Homework41.0.0/ && $(COPY_FILE) --parents bomb.h bonus.h brick.h bullet.h catcher.h downObstacles.h fire.h game.h obstacle.h rocket.h sideObstacles.h superShooter.h tank.h .tmp/Homework41.0.0/ && $(COPY_FILE) --parents bomb.cpp bonus.cpp brick.cpp bullet.cpp catcher.cpp downObstacles.cpp fire.cpp game.cpp main.cpp obstacle.cpp rocket.cpp sideObstacles.cpp superShooter.cpp tank.cpp .tmp/Homework41.0.0/ && (cd `dirname .tmp/Homework41.0.0` && $(TAR) Homework41.0.0.tar Homework41.0.0 && $(COMPRESS) Homework41.0.0.tar) && $(MOVE) `dirname .tmp/Homework41.0.0`/Homework41.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Homework41.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_game.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_game.cpp
moc_game.cpp: obstacle.h \
		brick.h \
		catcher.h \
		sideObstacles.h \
		downObstacles.h \
		tank.h \
		bullet.h \
		superShooter.h \
		bomb.h \
		bonus.h \
		rocket.h \
		fire.h \
		game.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) game.h -o moc_game.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

bomb.o: bomb.cpp bomb.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bomb.o bomb.cpp

bonus.o: bonus.cpp bonus.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bonus.o bonus.cpp

brick.o: brick.cpp brick.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o brick.o brick.cpp

bullet.o: bullet.cpp bullet.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bullet.o bullet.cpp

catcher.o: catcher.cpp catcher.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o catcher.o catcher.cpp

downObstacles.o: downObstacles.cpp downObstacles.h \
		sideObstacles.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o downObstacles.o downObstacles.cpp

fire.o: fire.cpp fire.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o fire.o fire.cpp

game.o: game.cpp game.h \
		obstacle.h \
		brick.h \
		catcher.h \
		sideObstacles.h \
		downObstacles.h \
		tank.h \
		bullet.h \
		superShooter.h \
		bomb.h \
		bonus.h \
		rocket.h \
		fire.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o game.o game.cpp

main.o: main.cpp game.h \
		obstacle.h \
		brick.h \
		catcher.h \
		sideObstacles.h \
		downObstacles.h \
		tank.h \
		bullet.h \
		superShooter.h \
		bomb.h \
		bonus.h \
		rocket.h \
		fire.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

obstacle.o: obstacle.cpp obstacle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obstacle.o obstacle.cpp

rocket.o: rocket.cpp rocket.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o rocket.o rocket.cpp

sideObstacles.o: sideObstacles.cpp sideObstacles.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sideObstacles.o sideObstacles.cpp

superShooter.o: superShooter.cpp superShooter.h \
		tank.h \
		bullet.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o superShooter.o superShooter.cpp

tank.o: tank.cpp tank.h \
		bullet.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o tank.o tank.cpp

moc_game.o: moc_game.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_game.o moc_game.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
