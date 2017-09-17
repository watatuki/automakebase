#-------------------------------------------------------------------------
# ライブラリ作成の例
#-------------------------------------------------------------------------

# この行は触らない
AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

#ビルドするライブラリの指定(libexsample)
lib_LTLIBRARIES = libexsample.la

# ビルドする実行ファイル(libexsample)を構成するソースファイルの指定
libexsample_la_SOURCES = \
		libexsample.cpp \
		libexsample-c.c 

# ビルドする実行ファイル(exsample)のリンカに渡すライブラリの指定を行う。
# @XXX_LIBS@のXXXは、configure.acでPKG_CHECK_MODULESで指定したパッケージの名前を指定する。
# この例はGLIBとZLIBを指定している。
libexsample_la_LBSADD = \
		@GLIB_LIBS@ \
		@ZLIB_LIBS@ 

# ビルドする実行ファイル(exsample)のコンンパイラオプション(c)の指定を行う。
# @XXX_CFLAGS@のXXXは、configure.acでPKG_CHECK_MODULESで指定したパッケージの名前を指定する。
# この例はGLIBとZLIBを指定している。
# visibilityはデフォルト非公開設定で、export.symに名前が書かれている関数のみ公開する。
libexsample_la_CFLAGS = \
		-I$(top_srcdir)/include \
		@GLIB_CFLAGS@ \
		@ZLIB_CFLAGS@ 

# ビルドする実行ファイル(exsample)のコンンパイラオプション(c++)の指定を行う。
# @XXX_CXXFLAGS@のXXXは、configure.acでPKG_CHECK_MODULESで指定したパッケージの名前を指定する。
# CのライブラリはCXXFLAGSがないので、渡すパラメタはCFLAGSを指定する。
# C++のvisibilityは指定が困難なのでデフォルトでは外しておく
# この例はGLIBとZLIBを指定している。
libexsample_la_CXXFLAGS = \
		-I$(top_srcdir)/include \
		-std=c++11 \
		@GLIB_CFLAGS@ \
		@ZLIB_CFLAGS@ 

# ビルドする実行ファイル(exsample)のリンカオプションの指定を行う。
libexsample_la_LDFLAGS = 


# configureオプションによって変更する設定の記述。
# この例は、configure.acで指定した、userdebugとprintfdebugの設定に応じて、defineマクロを設定している。
if ENABLE_USERDEBUG
libexsample_la_CFLAGS   += -D_USER_DEBUG_
libexsample_la_CXXFLAGS += -D_USER_DEBUG_
endif

if ENABLE_PRINTFDEBUG
libexsample_la_CFLAGS   += -D_PRINTF_DEBUG_
libexsample_la_CXXFLAGS += -D_PRINTF_DEBUG_
endif

