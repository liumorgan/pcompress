
/* Generated File. DO NOT EDIT. */
/*
 * List of extensions and their types.
 */

#ifndef __EXT_H__
#define __EXT_H__
struct ext_entry {
	char *ext;
	int type;
	int len;
} extlist[] = {
	{"c"	, TYPE_TEXT, 1},
	{"h"	, TYPE_TEXT, 1},
	{"cc"	, TYPE_TEXT, 2},
	{"cpp"	, TYPE_TEXT, 3},
	{"c++"	, TYPE_TEXT, 3},
	{"hpp"	, TYPE_TEXT, 3},
	{"txt"	, TYPE_TEXT, 3},
	{"html"	, TYPE_TEXT|TYPE_MARKUP, 4},
	{"htm"	, TYPE_TEXT|TYPE_MARKUP, 3},
	{"xml"	, TYPE_TEXT|TYPE_MARKUP, 3},
	{"info"	, TYPE_TEXT, 4},
	{"ppm"	, TYPE_TEXT, 3},
	{"svg"	, TYPE_TEXT, 3},
	{"conf"	, TYPE_TEXT, 4},
	{"py"	, TYPE_TEXT, 2},
	{"rb"	, TYPE_TEXT, 2},
	{"xpm"	, TYPE_TEXT, 3},
	{"js"	, TYPE_TEXT, 2},
	{"jsp"	, TYPE_TEXT, 3},
	{"pl"	, TYPE_TEXT, 2},
	{"tcl"	, TYPE_TEXT, 3},
	{"sh"	, TYPE_TEXT, 2},
	{"php"	, TYPE_TEXT, 3},
	{"bat"	, TYPE_TEXT, 3},
	{"pm"	, TYPE_TEXT, 2},
	{"r"	, TYPE_TEXT, 1},
	{"d"	, TYPE_TEXT, 1},
	{"bas"	, TYPE_TEXT, 3},
	{"asm"	, TYPE_TEXT, 3},
	{"go"	, TYPE_TEXT, 2},
	{"java"	, TYPE_TEXT, 4},
	{"m4"	, TYPE_TEXT, 2},
	{"vb"	, TYPE_TEXT, 2},
	{"xslt"	, TYPE_TEXT|TYPE_MARKUP, 4},
	{"xsl"	, TYPE_TEXT|TYPE_MARKUP, 3},
	{"yacc"	, TYPE_TEXT, 4},
	{"lex"	, TYPE_TEXT, 3},
	{"csv"	, TYPE_TEXT, 3},
	{"shtml"	, TYPE_TEXT|TYPE_MARKUP, 5},
	{"xhtml"	, TYPE_TEXT|TYPE_MARKUP, 5},
	{"xht"	, TYPE_TEXT|TYPE_MARKUP, 3},
	{"asp"	, TYPE_TEXT, 3},
	{"aspx"	, TYPE_TEXT, 4},
	{"rss"	, TYPE_TEXT|TYPE_MARKUP, 3},
	{"atom"	, TYPE_TEXT|TYPE_MARKUP, 4},
	{"cgi"	, TYPE_TEXT, 3},
	{"c#"	, TYPE_TEXT, 2},
	{"cob"	, TYPE_TEXT, 3},
	{"ada"	, TYPE_TEXT, 3},
	{"ini"	, TYPE_TEXT, 3},
	{"y"	, TYPE_TEXT, 1},
	{"swg"	, TYPE_TEXT, 3},
	{"s"	, TYPE_TEXT, 1},
	{"ps"	, TYPE_TEXT, 2},
	{"bib"	, TYPE_TEXT, 3},
	{"lua"	, TYPE_TEXT, 3},
	{"qml"	, TYPE_TEXT|TYPE_MARKUP, 3},
	{"fa"	, TYPE_TEXT, 2},
	{"faa"	, TYPE_TEXT, 3},
	{"asn"	, TYPE_TEXT|TYPE_MARKUP, 3},
	{"ffn"	, TYPE_TEXT, 3},
	{"fna"	, TYPE_TEXT, 3},
	{"frn"	, TYPE_TEXT, 3},
	{"gbk"	, TYPE_TEXT, 3},
	{"gff"	, TYPE_TEXT, 3},
	{"ptt"	, TYPE_TEXT, 3},
	{"rnt"	, TYPE_TEXT, 3},
	{"val"	, TYPE_BINARY, 3},
	{"tcc"	, TYPE_TEXT, 3},
	{"css"	, TYPE_TEXT, 3},
	{"pod"	, TYPE_TEXT, 3},
	{"al"	, TYPE_TEXT, 2},
	{"vim"	, TYPE_TEXT, 3},
	{"am"	, TYPE_TEXT, 2},
	{"upp"	, TYPE_TEXT, 3},
	{"mom"	, TYPE_TEXT, 3},
	{"tmac"	, TYPE_TEXT, 4},
	{"exe"	, TYPE_BINARY|TYPE_EXE, 3},
	{"dll"	, TYPE_BINARY|TYPE_EXE, 3},
	{"bin"	, TYPE_BINARY|TYPE_EXE, 3},
	{"o"	, TYPE_BINARY|TYPE_EXE, 1},
	{"a"	, TYPE_BINARY|TYPE_EXE, 1},
	{"obj"	, TYPE_BINARY|TYPE_EXE, 3},
	{"so"	, TYPE_BINARY|TYPE_EXE, 2},
	{"com"	, TYPE_BINARY|TYPE_EXE, 3},
	{"xpi"	, TYPE_BINARY|TYPE_EXE, 3},
	{"off"	, TYPE_BINARY|TYPE_EXE, 3},
	{"pdf"	, TYPE_BINARY, 3},
	{"jpg"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_CMP_MAX, 3},
	{"jpeg"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_CMP_MAX, 4},
	{"png"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_GZ, 3},
	{"mp3"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"wma"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"divx"	, TYPE_BINARY|TYPE_COMPRESSED, 4},
	{"mp4"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"aac"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"m4a"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"m4p"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"ofs"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"ofr"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"flac"	, TYPE_BINARY|TYPE_COMPRESSED, 4},
	{"pac"	, TYPE_BINARY|TYPE_COMPRESSED, 3},
	{"gif"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LZW, 3},
	{"jp2"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_CMP_MAX, 3},
	{"pjg"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_CMP_MAX, 3},
	{"gz"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_GZ, 2},
	{"tgz"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_GZ, 3},
	{"bz2"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_BZ2, 3},
	{"tbz2"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_BZ2, 4},
	{"zip"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_ZIP, 3},
	{"arj"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_ARJ, 3},
	{"arc"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_ARC, 3},
	{"jar"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_GZ, 3},
	{"lz"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LZ, 2},
	{"lzh"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LH, 3},
	{"lha"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LH, 3},
	{"lzma"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LZMA, 4},
	{"lzo"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LZO, 3},
	{"dmg"	, TYPE_BINARY, 3},
	{"7z"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LZMA, 2},
	{"uha"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_UHARC, 3},
	{"alz"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_ALZ, 3},
	{"ace"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_ACE, 3},
	{"rar"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_RAR, 3},
	{"xz"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LZMA, 2},
	{"txz"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_LZMA, 3},
	{"pmd"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_PPMD, 3},
	{"zpaq"	, TYPE_BINARY|TYPE_COMPRESSED|TYPE_COMPRESSED_ZPAQ, 4},
	{"xcf"	, TYPE_BINARY, 3},
	{"mo"	, TYPE_BINARY, 2},
	{"bmp"	, TYPE_BINARY, 3},
	{"pyo"	, TYPE_BINARY, 3},
	{"pyc"	, TYPE_BINARY, 3},
	{"wav"	, TYPE_BINARY, 3},
};
#endif
