#-------------------------------------------------------------------------
# 実行ファイル作成の例
#-------------------------------------------------------------------------

# この行は触らない
AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

#ビルドする実行ファイルの指定(exsample)
bin_PROGRAMS = exsample


# ビルドする実行ファイル(exsample)を構成するソースファイルの指定
exsample_SOURCES = \
		exsample.cpp \
		exsample-c.c 



# ビルドする実行ファイル(exsample)のリンカに渡すライブラリの指定を行う。
# @XXX_LIBS@のXXXは、configure.acでPKG_CHECK_MODULESで指定したパッケージの名前を指定する。
# この例はGLIBとZLIBを指定している。
exsample_LDADD = \
		-lrt -lpthread \
		@GLIB_LIBS@ \
		@ZLIB_LIBS@ 


# ビルドする実行ファイル(exsample)のコンンパイラオプション(c)の指定を行う。
# @XXX_CFLAGS@のXXXは、configure.acでPKG_CHECK_MODULESで指定したパッケージの名前を指定する。
# この例はGLIBとZLIBを指定している。
exsample_CFLAGS = \
		-I$(top_srcdir)/include \
		@GLIB_CFLAGS@ \
		@ZLIB_CFLAGS@ 

# ビルドする実行ファイル(exsample)のコンンパイラオプション(c++)の指定を行う。
# @XXX_CXXFLAGS@のXXXは、configure.acでPKG_CHECK_MODULESで指定したパッケージの名前を指定する。
# CのライブラリはCXXFLAGSがないので、渡すパラメタはCFLAGSを指定する。
# この例はGLIBとZLIBを指定している。
exsample_CXXFLAGS = \
		-I$(top_srcdir)/include \
		-std=c++11 \
		@GLIB_CFLAGS@ \
		@ZLIB_CFLAGS@ 

# ビルドする実行ファイル(exsample)のリンカオプションの指定を行う。
exsample_LDFLAGS = 


# configureオプションによって変更する設定の記述。
# この例は、configure.acで指定した、userdebugとprintfdebugの設定に応じて、defineマクロを設定している。
if ENABLE_USERDEBUG
exsample_CFLAGS   += -D_USER_DEBUG_
exsample_CXXFLAGS += -D_USER_DEBUG_
endif

if ENABLE_PRINTFDEBUG
exsample_CFLAGS   += -D_PRINTF_DEBUG_
exsample_CXXFLAGS += -D_PRINTF_DEBUG_
endif

