// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IGDIPlus.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef IgdiplusHPP
#define IgdiplusHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "cbgdiplus.lib"
__interface _di_IGPFontFamily;
static const Shortint BCBGDIP_EMFPLUS_RECORD_BASE = 0x00004000;
static const Shortint BCBGDIP_WMF_RECORD_BASE     = 0x00010000;
enum TIGPEmfPlusRecordType
{
    WmfRecordTypeSetBkColor              = (META_SETBKCOLOR | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetBkMode               = (META_SETBKMODE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetMapMode              = (META_SETMAPMODE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetROP2                 = (META_SETROP2 | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetRelAbs               = (META_SETRELABS | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetPolyFillMode         = (META_SETPOLYFILLMODE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetStretchBltMode       = (META_SETSTRETCHBLTMODE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetTextCharExtra        = (META_SETTEXTCHAREXTRA | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetTextColor            = (META_SETTEXTCOLOR | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetTextJustification    = (META_SETTEXTJUSTIFICATION | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetWindowOrg            = (META_SETWINDOWORG | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetWindowExt            = (META_SETWINDOWEXT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetViewportOrg          = (META_SETVIEWPORTORG | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetViewportExt          = (META_SETVIEWPORTEXT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeOffsetWindowOrg         = (META_OFFSETWINDOWORG | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeScaleWindowExt          = (META_SCALEWINDOWEXT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeOffsetViewportOrg       = (META_OFFSETVIEWPORTORG | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeScaleViewportExt        = (META_SCALEVIEWPORTEXT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeLineTo                  = (META_LINETO | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeMoveTo                  = (META_MOVETO | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeExcludeClipRect         = (META_EXCLUDECLIPRECT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeIntersectClipRect       = (META_INTERSECTCLIPRECT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeArc                     = (META_ARC | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeEllipse                 = (META_ELLIPSE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeFloodFill               = (META_FLOODFILL | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypePie                     = (META_PIE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeRectangle               = (META_RECTANGLE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeRoundRect               = (META_ROUNDRECT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypePatBlt                  = (META_PATBLT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSaveDC                  = (META_SAVEDC | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetPixel                = (META_SETPIXEL | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeOffsetClipRgn           = (META_OFFSETCLIPRGN | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeTextOut                 = (META_TEXTOUT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeBitBlt                  = (META_BITBLT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeStretchBlt              = (META_STRETCHBLT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypePolygon                 = (META_POLYGON | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypePolyline                = (META_POLYLINE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeEscape                  = (META_ESCAPE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeRestoreDC               = (META_RESTOREDC | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeFillRegion              = (META_FILLREGION | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeFrameRegion             = (META_FRAMEREGION | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeInvertRegion            = (META_INVERTREGION | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypePaintRegion             = (META_PAINTREGION | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSelectClipRegion        = (META_SELECTCLIPREGION | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSelectObject            = (META_SELECTOBJECT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetTextAlign            = (META_SETTEXTALIGN | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeDrawText                = (0x062F | BCBGDIP_WMF_RECORD_BASE),  // META_DRAWTEXT
    WmfRecordTypeChord                   = (META_CHORD | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetMapperFlags          = (META_SETMAPPERFLAGS | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeExtTextOut              = (META_EXTTEXTOUT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetDIBToDev             = (META_SETDIBTODEV | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSelectPalette           = (META_SELECTPALETTE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeRealizePalette          = (META_REALIZEPALETTE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeAnimatePalette          = (META_ANIMATEPALETTE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetPalEntries           = (META_SETPALENTRIES | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypePolyPolygon             = (META_POLYPOLYGON | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeResizePalette           = (META_RESIZEPALETTE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeDIBBitBlt               = (META_DIBBITBLT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeDIBStretchBlt           = (META_DIBSTRETCHBLT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeDIBCreatePatternBrush   = (META_DIBCREATEPATTERNBRUSH | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeStretchDIB              = (META_STRETCHDIB | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeExtFloodFill            = (META_EXTFLOODFILL | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeSetLayout               = (0x0149 | BCBGDIP_WMF_RECORD_BASE),  // META_SETLAYOUT
    WmfRecordTypeResetDC                 = (0x014C | BCBGDIP_WMF_RECORD_BASE),  // META_RESETDC
    WmfRecordTypeStartDoc                = (0x014D | BCBGDIP_WMF_RECORD_BASE),  // META_STARTDOC
    WmfRecordTypeStartPage               = (0x004F | BCBGDIP_WMF_RECORD_BASE),  // META_STARTPAGE
    WmfRecordTypeEndPage                 = (0x0050 | BCBGDIP_WMF_RECORD_BASE),  // META_ENDPAGE
    WmfRecordTypeAbortDoc                = (0x0052 | BCBGDIP_WMF_RECORD_BASE),  // META_ABORTDOC
    WmfRecordTypeEndDoc                  = (0x005E | BCBGDIP_WMF_RECORD_BASE),  // META_ENDDOC
    WmfRecordTypeDeleteObject            = (META_DELETEOBJECT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeCreatePalette           = (META_CREATEPALETTE | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeCreateBrush             = (0x00F8 | BCBGDIP_WMF_RECORD_BASE),  // META_CREATEBRUSH
    WmfRecordTypeCreatePatternBrush      = (META_CREATEPATTERNBRUSH | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeCreatePenIndirect       = (META_CREATEPENINDIRECT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeCreateFontIndirect      = (META_CREATEFONTINDIRECT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeCreateBrushIndirect     = (META_CREATEBRUSHINDIRECT | BCBGDIP_WMF_RECORD_BASE),
    WmfRecordTypeCreateBitmapIndirect    = (0x02FD | BCBGDIP_WMF_RECORD_BASE),  // META_CREATEBITMAPINDIRECT
    WmfRecordTypeCreateBitmap            = (0x06FE | BCBGDIP_WMF_RECORD_BASE),  // META_CREATEBITMAP
    WmfRecordTypeCreateRegion            = (META_CREATEREGION | BCBGDIP_WMF_RECORD_BASE),

    EmfRecordTypeHeader                  = EMR_HEADER,
    EmfRecordTypePolyBezier              = EMR_POLYBEZIER,
    EmfRecordTypePolygon                 = EMR_POLYGON,
    EmfRecordTypePolyline                = EMR_POLYLINE,
    EmfRecordTypePolyBezierTo            = EMR_POLYBEZIERTO,
    EmfRecordTypePolyLineTo              = EMR_POLYLINETO,
    EmfRecordTypePolyPolyline            = EMR_POLYPOLYLINE,
    EmfRecordTypePolyPolygon             = EMR_POLYPOLYGON,
    EmfRecordTypeSetWindowExtEx          = EMR_SETWINDOWEXTEX,
    EmfRecordTypeSetWindowOrgEx          = EMR_SETWINDOWORGEX,
    EmfRecordTypeSetViewportExtEx        = EMR_SETVIEWPORTEXTEX,
    EmfRecordTypeSetViewportOrgEx        = EMR_SETVIEWPORTORGEX,
    EmfRecordTypeSetBrushOrgEx           = EMR_SETBRUSHORGEX,
    EmfRecordTypeEOF                     = EMR_EOF,
    EmfRecordTypeSetPixelV               = EMR_SETPIXELV,
    EmfRecordTypeSetMapperFlags          = EMR_SETMAPPERFLAGS,
    EmfRecordTypeSetMapMode              = EMR_SETMAPMODE,
    EmfRecordTypeSetBkMode               = EMR_SETBKMODE,
    EmfRecordTypeSetPolyFillMode         = EMR_SETPOLYFILLMODE,
    EmfRecordTypeSetROP2                 = EMR_SETROP2,
    EmfRecordTypeSetStretchBltMode       = EMR_SETSTRETCHBLTMODE,
    EmfRecordTypeSetTextAlign            = EMR_SETTEXTALIGN,
    EmfRecordTypeSetColorAdjustment      = EMR_SETCOLORADJUSTMENT,
    EmfRecordTypeSetTextColor            = EMR_SETTEXTCOLOR,
    EmfRecordTypeSetBkColor              = EMR_SETBKCOLOR,
    EmfRecordTypeOffsetClipRgn           = EMR_OFFSETCLIPRGN,
    EmfRecordTypeMoveToEx                = EMR_MOVETOEX,
    EmfRecordTypeSetMetaRgn              = EMR_SETMETARGN,
    EmfRecordTypeExcludeClipRect         = EMR_EXCLUDECLIPRECT,
    EmfRecordTypeIntersectClipRect       = EMR_INTERSECTCLIPRECT,
    EmfRecordTypeScaleViewportExtEx      = EMR_SCALEVIEWPORTEXTEX,
    EmfRecordTypeScaleWindowExtEx        = EMR_SCALEWINDOWEXTEX,
    EmfRecordTypeSaveDC                  = EMR_SAVEDC,
    EmfRecordTypeRestoreDC               = EMR_RESTOREDC,
    EmfRecordTypeSetWorldTransform       = EMR_SETWORLDTRANSFORM,
    EmfRecordTypeModifyWorldTransform    = EMR_MODIFYWORLDTRANSFORM,
    EmfRecordTypeSelectObject            = EMR_SELECTOBJECT,
    EmfRecordTypeCreatePen               = EMR_CREATEPEN,
    EmfRecordTypeCreateBrushIndirect     = EMR_CREATEBRUSHINDIRECT,
    EmfRecordTypeDeleteObject            = EMR_DELETEOBJECT,
    EmfRecordTypeAngleArc                = EMR_ANGLEARC,
    EmfRecordTypeEllipse                 = EMR_ELLIPSE,
    EmfRecordTypeRectangle               = EMR_RECTANGLE,
    EmfRecordTypeRoundRect               = EMR_ROUNDRECT,
    EmfRecordTypeArc                     = EMR_ARC,
    EmfRecordTypeChord                   = EMR_CHORD,
    EmfRecordTypePie                     = EMR_PIE,
    EmfRecordTypeSelectPalette           = EMR_SELECTPALETTE,
    EmfRecordTypeCreatePalette           = EMR_CREATEPALETTE,
    EmfRecordTypeSetPaletteEntries       = EMR_SETPALETTEENTRIES,
    EmfRecordTypeResizePalette           = EMR_RESIZEPALETTE,
    EmfRecordTypeRealizePalette          = EMR_REALIZEPALETTE,
    EmfRecordTypeExtFloodFill            = EMR_EXTFLOODFILL,
    EmfRecordTypeLineTo                  = EMR_LINETO,
    EmfRecordTypeArcTo                   = EMR_ARCTO,
    EmfRecordTypePolyDraw                = EMR_POLYDRAW,
    EmfRecordTypeSetArcDirection         = EMR_SETARCDIRECTION,
    EmfRecordTypeSetMiterLimit           = EMR_SETMITERLIMIT,
    EmfRecordTypeBeginPath               = EMR_BEGINPATH,
    EmfRecordTypeEndPath                 = EMR_ENDPATH,
    EmfRecordTypeCloseFigure             = EMR_CLOSEFIGURE,
    EmfRecordTypeFillPath                = EMR_FILLPATH,
    EmfRecordTypeStrokeAndFillPath       = EMR_STROKEANDFILLPATH,
    EmfRecordTypeStrokePath              = EMR_STROKEPATH,
    EmfRecordTypeFlattenPath             = EMR_FLATTENPATH,
    EmfRecordTypeWidenPath               = EMR_WIDENPATH,
    EmfRecordTypeSelectClipPath          = EMR_SELECTCLIPPATH,
    EmfRecordTypeAbortPath               = EMR_ABORTPATH,
    EmfRecordTypeReserved_069            = 69,  // Not Used
    EmfRecordTypeGdiComment              = EMR_GDICOMMENT,
    EmfRecordTypeFillRgn                 = EMR_FILLRGN,
    EmfRecordTypeFrameRgn                = EMR_FRAMERGN,
    EmfRecordTypeInvertRgn               = EMR_INVERTRGN,
    EmfRecordTypePaintRgn                = EMR_PAINTRGN,
    EmfRecordTypeExtSelectClipRgn        = EMR_EXTSELECTCLIPRGN,
    EmfRecordTypeBitBlt                  = EMR_BITBLT,
    EmfRecordTypeStretchBlt              = EMR_STRETCHBLT,
    EmfRecordTypeMaskBlt                 = EMR_MASKBLT,
    EmfRecordTypePlgBlt                  = EMR_PLGBLT,
    EmfRecordTypeSetDIBitsToDevice       = EMR_SETDIBITSTODEVICE,
    EmfRecordTypeStretchDIBits           = EMR_STRETCHDIBITS,
    EmfRecordTypeExtCreateFontIndirect   = EMR_EXTCREATEFONTINDIRECTW,
    EmfRecordTypeExtTextOutA             = EMR_EXTTEXTOUTA,
    EmfRecordTypeExtTextOutW             = EMR_EXTTEXTOUTW,
    EmfRecordTypePolyBezier16            = EMR_POLYBEZIER16,
    EmfRecordTypePolygon16               = EMR_POLYGON16,
    EmfRecordTypePolyline16              = EMR_POLYLINE16,
    EmfRecordTypePolyBezierTo16          = EMR_POLYBEZIERTO16,
    EmfRecordTypePolylineTo16            = EMR_POLYLINETO16,
    EmfRecordTypePolyPolyline16          = EMR_POLYPOLYLINE16,
    EmfRecordTypePolyPolygon16           = EMR_POLYPOLYGON16,
    EmfRecordTypePolyDraw16              = EMR_POLYDRAW16,
    EmfRecordTypeCreateMonoBrush         = EMR_CREATEMONOBRUSH,
    EmfRecordTypeCreateDIBPatternBrushPt = EMR_CREATEDIBPATTERNBRUSHPT,
    EmfRecordTypeExtCreatePen            = EMR_EXTCREATEPEN,
    EmfRecordTypePolyTextOutA            = EMR_POLYTEXTOUTA,
    EmfRecordTypePolyTextOutW            = EMR_POLYTEXTOUTW,
    EmfRecordTypeSetICMMode              = 98,  // EMR_SETICMMODE,
    EmfRecordTypeCreateColorSpace        = 99,  // EMR_CREATECOLORSPACE,
    EmfRecordTypeSetColorSpace           = 100, // EMR_SETCOLORSPACE,
    EmfRecordTypeDeleteColorSpace        = 101, // EMR_DELETECOLORSPACE,
    EmfRecordTypeGLSRecord               = 102, // EMR_GLSRECORD,
    EmfRecordTypeGLSBoundedRecord        = 103, // EMR_GLSBOUNDEDRECORD,
    EmfRecordTypePixelFormat             = 104, // EMR_PIXELFORMAT,
    EmfRecordTypeDrawEscape              = 105, // EMR_RESERVED_105,
    EmfRecordTypeExtEscape               = 106, // EMR_RESERVED_106,
    EmfRecordTypeStartDoc                = 107, // EMR_RESERVED_107,
    EmfRecordTypeSmallTextOut            = 108, // EMR_RESERVED_108,
    EmfRecordTypeForceUFIMapping         = 109, // EMR_RESERVED_109,
    EmfRecordTypeNamedEscape             = 110, // EMR_RESERVED_110,
    EmfRecordTypeColorCorrectPalette     = 111, // EMR_COLORCORRECTPALETTE,
    EmfRecordTypeSetICMProfileA          = 112, // EMR_SETICMPROFILEA,
    EmfRecordTypeSetICMProfileW          = 113, // EMR_SETICMPROFILEW,
    EmfRecordTypeAlphaBlend              = 114, // EMR_ALPHABLEND,
    EmfRecordTypeSetLayout               = 115, // EMR_SETLAYOUT,
    EmfRecordTypeTransparentBlt          = 116, // EMR_TRANSPARENTBLT,
    EmfRecordTypeReserved_117            = 117, // Not Used
    EmfRecordTypeGradientFill            = 118, // EMR_GRADIENTFILL,
    EmfRecordTypeSetLinkedUFIs           = 119, // EMR_RESERVED_119,
    EmfRecordTypeSetTextJustification    = 120, // EMR_RESERVED_120,
    EmfRecordTypeColorMatchToTargetW     = 121, // EMR_COLORMATCHTOTARGETW,
    EmfRecordTypeCreateColorSpaceW       = 122, // EMR_CREATECOLORSPACEW,
    EmfRecordTypeMax                     = 122,
    EmfRecordTypeMin                     = 1,

    // That is the END of the GDI EMF records.

    // Now we start the list of EMF+ records.  We leave quite
    // a bit of room here for the addition of any new GDI
    // records that may be added later.

    EmfPlusRecordTypeInvalid = BCBGDIP_EMFPLUS_RECORD_BASE,
    EmfPlusRecordTypeHeader,
    EmfPlusRecordTypeEndOfFile,

    EmfPlusRecordTypeComment,

    EmfPlusRecordTypeGetDC,

    EmfPlusRecordTypeMultiFormatStart,
    EmfPlusRecordTypeMultiFormatSection,
    EmfPlusRecordTypeMultiFormatEnd,

    // For all persistent objects

    EmfPlusRecordTypeObject,

    // Drawing Records

    EmfPlusRecordTypeClear,
    EmfPlusRecordTypeFillRects,
    EmfPlusRecordTypeDrawRects,
    EmfPlusRecordTypeFillPolygon,
    EmfPlusRecordTypeDrawLines,
    EmfPlusRecordTypeFillEllipse,
    EmfPlusRecordTypeDrawEllipse,
    EmfPlusRecordTypeFillPie,
    EmfPlusRecordTypeDrawPie,
    EmfPlusRecordTypeDrawArc,
    EmfPlusRecordTypeFillRegion,
    EmfPlusRecordTypeFillPath,
    EmfPlusRecordTypeDrawPath,
    EmfPlusRecordTypeFillClosedCurve,
    EmfPlusRecordTypeDrawClosedCurve,
    EmfPlusRecordTypeDrawCurve,
    EmfPlusRecordTypeDrawBeziers,
    EmfPlusRecordTypeDrawImage,
    EmfPlusRecordTypeDrawImagePoints,
    EmfPlusRecordTypeDrawString,

    // Graphics State Records

    EmfPlusRecordTypeSetRenderingOrigin,
    EmfPlusRecordTypeSetAntiAliasMode,
    EmfPlusRecordTypeSetTextRenderingHint,
    EmfPlusRecordTypeSetTextContrast,
    EmfPlusRecordTypeSetInterpolationMode,
    EmfPlusRecordTypeSetPixelOffsetMode,
    EmfPlusRecordTypeSetCompositingMode,
    EmfPlusRecordTypeSetCompositingQuality,
    EmfPlusRecordTypeSave,
    EmfPlusRecordTypeRestore,
    EmfPlusRecordTypeBeginContainer,
    EmfPlusRecordTypeBeginContainerNoParams,
    EmfPlusRecordTypeEndContainer,
    EmfPlusRecordTypeSetWorldTransform,
    EmfPlusRecordTypeResetWorldTransform,
    EmfPlusRecordTypeMultiplyWorldTransform,
    EmfPlusRecordTypeTranslateWorldTransform,
    EmfPlusRecordTypeScaleWorldTransform,
    EmfPlusRecordTypeRotateWorldTransform,
    EmfPlusRecordTypeSetPageTransform,
    EmfPlusRecordTypeResetClip,
    EmfPlusRecordTypeSetClipRect,
    EmfPlusRecordTypeSetClipPath,
    EmfPlusRecordTypeSetClipRegion,
    EmfPlusRecordTypeOffsetClip,

    EmfPlusRecordTypeDrawDriverString,

    EmfPlusRecordTotal,

    EmfPlusRecordTypeMax = EmfPlusRecordTotal-1,
    EmfPlusRecordTypeMin = EmfPlusRecordTypeHeader
};
#pragma pack(push, 1)
struct TIGPENHMETAHEADER3
{
  unsigned iType;
  unsigned nSize;
  RECT rclBounds;
  RECT rclFrame;
  unsigned dSignature;
  unsigned nVersion;
  unsigned nBytes;
  unsigned nRecords;
  Word nHandles;
  Word sReserved;
  unsigned nDescription;
  unsigned offDescription;
  unsigned nPalEntries;
  tagSIZE szlDevice;
  tagSIZE szlMillimeters;
};
#pragma pack(pop)
enum TIGPImageCodecFlags
{
    ImageCodecFlagsEncoder        = 0x00000001,
    ImageCodecFlagsDecoder        = 0x00000002,
    ImageCodecFlagsSupportBitmap  = 0x00000004,
    ImageCodecFlagsSupportVector  = 0x00000008,
    ImageCodecFlagsSeekableEncode = 0x00000010,
    ImageCodecFlagsBlockingDecode = 0x00000020,

    ImageCodecFlagsBuiltin        = 0x00010000,
    ImageCodecFlagsSystem         = 0x00020000,
    ImageCodecFlagsUser           = 0x00040000
};
typedef int TIGPMetafile;

namespace Igdiplus
{
//-- forward type declarations -----------------------------------------------
struct TIGPColorNamePair;
__interface DELPHIINTERFACE TIGPImageAbortProc;
typedef  ::System::DelphiInterface<TIGPImageAbortProc> _di_TIGPImageAbortProc;
__interface DELPHIINTERFACE TIGPEnumerateMetafileProc;
typedef  ::System::DelphiInterface<TIGPEnumerateMetafileProc> _di_TIGPEnumerateMetafileProc;
class DELPHICLASS EGPException;
struct TIGPSizeF;
struct TIGPSize;
struct TIGPPointHelper /* Helper for record ' ::System::Types::TPoint' */;
struct TIGPPointFHelper /* Helper for record ' ::System::Types::TPointF' */;
struct TIGPRect;
struct TIGPRectF;
struct TIGPCharacterRange;
struct TIGPGdiplusStartupInput;
struct TIGPGdiplusStartupOutput;
struct TIGPColorPalette;
struct TPWMFRect16;
struct TIGPWmfPlaceableFileHeader;
__interface DELPHIINTERFACE IGPImageBytes;
typedef  ::System::DelphiInterface<IGPImageBytes> _di_IGPImageBytes;
struct TIGPImageCodecInfo;
struct TIGPBitmapDataRecord;
struct TIGPEncoderParameter;
struct TIGPEncoderParameters;
struct TIGPPropertyItem;
struct TIGPColorMap;
struct TIGPBlend;
struct TIGPInterpolationColor;
class DELPHICLASS TIGPBase;
__interface DELPHIINTERFACE IGPPathData;
typedef  ::System::DelphiInterface<IGPPathData> _di_IGPPathData;
__interface DELPHIINTERFACE IGPMetafileHeader;
typedef  ::System::DelphiInterface<IGPMetafileHeader> _di_IGPMetafileHeader;
__interface DELPHIINTERFACE IGPRegion;
typedef  ::System::DelphiInterface<IGPRegion> _di_IGPRegion;
class DELPHICLASS TIGPRegion;
__interface DELPHIINTERFACE IGPFontFamily;
typedef  ::System::DelphiInterface<IGPFontFamily> _di_IGPFontFamily;
class DELPHICLASS TIGPFontFamily;
__interface DELPHIINTERFACE IGPFontCollection;
typedef  ::System::DelphiInterface<IGPFontCollection> _di_IGPFontCollection;
class DELPHICLASS TIGPFontCollection;
class DELPHICLASS TIGPInstalledFontCollection;
__interface DELPHIINTERFACE IGPPrivateFontCollection;
typedef  ::System::DelphiInterface<IGPPrivateFontCollection> _di_IGPPrivateFontCollection;
class DELPHICLASS TIGPPrivateFontCollection;
__interface DELPHIINTERFACE IGPFont;
typedef  ::System::DelphiInterface<IGPFont> _di_IGPFont;
class DELPHICLASS TIGPFont;
__interface DELPHIINTERFACE IGPImage;
typedef  ::System::DelphiInterface<IGPImage> _di_IGPImage;
class DELPHICLASS TIGPImage;
__interface DELPHIINTERFACE IGPBitmapData;
typedef  ::System::DelphiInterface<IGPBitmapData> _di_IGPBitmapData;
__interface DELPHIINTERFACE IGPBitmap;
typedef  ::System::DelphiInterface<IGPBitmap> _di_IGPBitmap;
class DELPHICLASS TIGPBitmap;
__interface DELPHIINTERFACE IGPCustomLineCap;
typedef  ::System::DelphiInterface<IGPCustomLineCap> _di_IGPCustomLineCap;
class DELPHICLASS TIGPCustomLineCap;
__interface DELPHIINTERFACE IGPCachedBitmap;
typedef  ::System::DelphiInterface<IGPCachedBitmap> _di_IGPCachedBitmap;
class DELPHICLASS TIGPCachedBitmap;
__interface DELPHIINTERFACE IGPImageAttributes;
typedef  ::System::DelphiInterface<IGPImageAttributes> _di_IGPImageAttributes;
class DELPHICLASS TIGPImageAttributes;
struct TIGPMatrixParams;
__interface DELPHIINTERFACE IGPMatrix;
typedef  ::System::DelphiInterface<IGPMatrix> _di_IGPMatrix;
class DELPHICLASS TIGPMatrix;
__interface DELPHIINTERFACE IGPMatrixStore;
typedef  ::System::DelphiInterface<IGPMatrixStore> _di_IGPMatrixStore;
class DELPHICLASS TIGPMatrixStore;
__interface DELPHIINTERFACE IGPBrush;
typedef  ::System::DelphiInterface<IGPBrush> _di_IGPBrush;
__interface DELPHIINTERFACE IGPWrapBrush;
typedef  ::System::DelphiInterface<IGPWrapBrush> _di_IGPWrapBrush;
__interface DELPHIINTERFACE IGPBlendBrush;
typedef  ::System::DelphiInterface<IGPBlendBrush> _di_IGPBlendBrush;
class DELPHICLASS TIGPBrush;
__interface DELPHIINTERFACE IGPSolidBrush;
typedef  ::System::DelphiInterface<IGPSolidBrush> _di_IGPSolidBrush;
class DELPHICLASS TIGPSolidBrush;
__interface DELPHIINTERFACE IGPTransformable;
typedef  ::System::DelphiInterface<IGPTransformable> _di_IGPTransformable;
__interface DELPHIINTERFACE IGPTextureBrush;
typedef  ::System::DelphiInterface<IGPTextureBrush> _di_IGPTextureBrush;
class DELPHICLASS TIGPTextureBrush;
__interface DELPHIINTERFACE IGPLinearGradientBrush;
typedef  ::System::DelphiInterface<IGPLinearGradientBrush> _di_IGPLinearGradientBrush;
class DELPHICLASS TIGPLinearGradientBrush;
__interface DELPHIINTERFACE IGPHatchBrush;
typedef  ::System::DelphiInterface<IGPHatchBrush> _di_IGPHatchBrush;
class DELPHICLASS TIGPHatchBrush;
__interface DELPHIINTERFACE IGPPen;
typedef  ::System::DelphiInterface<IGPPen> _di_IGPPen;
class DELPHICLASS TIGPPen;
__interface DELPHIINTERFACE IGPStringFormat;
typedef  ::System::DelphiInterface<IGPStringFormat> _di_IGPStringFormat;
class DELPHICLASS TIGPStringFormat;
__interface DELPHIINTERFACE IGPGraphicsPath;
typedef  ::System::DelphiInterface<IGPGraphicsPath> _di_IGPGraphicsPath;
class DELPHICLASS TIGPGraphicsPath;
__interface DELPHIINTERFACE IGPGraphicsPathIterator;
typedef  ::System::DelphiInterface<IGPGraphicsPathIterator> _di_IGPGraphicsPathIterator;
class DELPHICLASS TIGPGraphicsPathIterator;
__interface DELPHIINTERFACE IGPPathGradientBrush;
typedef  ::System::DelphiInterface<IGPPathGradientBrush> _di_IGPPathGradientBrush;
class DELPHICLASS TIGPPathGradientBrush;
__interface DELPHIINTERFACE IGPGraphics;
typedef  ::System::DelphiInterface<IGPGraphics> _di_IGPGraphics;
class DELPHICLASS TIGPGraphics;
__interface DELPHIINTERFACE IGPAdjustableArrowCap;
typedef  ::System::DelphiInterface<IGPAdjustableArrowCap> _di_IGPAdjustableArrowCap;
class DELPHICLASS TIGPAdjustableArrowCap;
__interface DELPHIINTERFACE IGPMetafile;
typedef  ::System::DelphiInterface<IGPMetafile> _di_IGPMetafile;
//-- type declarations -------------------------------------------------------
typedef  ::System::Word *PUINT16;

struct DECLSPEC_DRECORD TIGPColorNamePair
{
public:
	 ::System::Uitypes::TAlphaColor Color;
	 ::System::UnicodeString Name;
};


typedef  ::System::StaticArray<TIGPColorNamePair, 141> Igdiplus__1;

typedef unsigned TIGPGraphicsState;

typedef unsigned TIGPGraphicsContainer;

enum DECLSPEC_DENUM TIGPFillMode : unsigned int { FillModeAlternate, FillModeWinding };

enum DECLSPEC_DENUM TIGPQualityMode: int { QualityModeInvalid = -1, QualityModeDefault, QualityModeLow, QualityModeHigh };

enum DECLSPEC_DENUM TIGPCompositingMode : unsigned int { CompositingModeSourceOver, CompositingModeSourceCopy };

enum DECLSPEC_DENUM TIGPCompositingQuality: int { CompositingQualityInvalid = -1, CompositingQualityDefault, CompositingQualityHighSpeed, CompositingQualityHighQuality, CompositingQualityGammaCorrected, CompositingQualityAssumeLinear };

enum DECLSPEC_DENUM TIGPUnit : unsigned int { UnitWorld, UnitDisplay, UnitPixel, UnitPoint, UnitInch, UnitDocument, UnitMillimeter };

enum DECLSPEC_DENUM TIGPMetafileFrameUnit : unsigned int { MetafileFrameUnitPixel = 2, MetafileFrameUnitPoint, MetafileFrameUnitInch, MetafileFrameUnitDocument, MetafileFrameUnitMillimeter, MetafileFrameUnitGdi };

enum DECLSPEC_DENUM TIGPCoordinateSpace : unsigned int { CoordinateSpaceWorld, CoordinateSpacePage, CoordinateSpaceDevice };

enum DECLSPEC_DENUM TIGPWrapMode : unsigned int { WrapModeTile, WrapModeTileFlipX, WrapModeTileFlipY, WrapModeTileFlipXY, WrapModeClamp };

enum DECLSPEC_DENUM TIGPHatchStyle : unsigned int { HatchStyleHorizontal, HatchStyleVertical, HatchStyleForwardDiagonal, HatchStyleBackwardDiagonal, HatchStyleCross, HatchStyleDiagonalCross, HatchStyle05Percent, HatchStyle10Percent, HatchStyle20Percent, HatchStyle25Percent, HatchStyle30Percent, HatchStyle40Percent, HatchStyle50Percent, HatchStyle60Percent, HatchStyle70Percent, HatchStyle75Percent, HatchStyle80Percent, HatchStyle90Percent, HatchStyleLightDownwardDiagonal, HatchStyleLightUpwardDiagonal, HatchStyleDarkDownwardDiagonal, HatchStyleDarkUpwardDiagonal, HatchStyleWideDownwardDiagonal, HatchStyleWideUpwardDiagonal, HatchStyleLightVertical, HatchStyleLightHorizontal, HatchStyleNarrowVertical, HatchStyleNarrowHorizontal, HatchStyleDarkVertical, 
	HatchStyleDarkHorizontal, HatchStyleDashedDownwardDiagonal, HatchStyleDashedUpwardDiagonal, HatchStyleDashedHorizontal, HatchStyleDashedVertical, HatchStyleSmallConfetti, HatchStyleLargeConfetti, HatchStyleZigZag, HatchStyleWave, HatchStyleDiagonalBrick, HatchStyleHorizontalBrick, HatchStyleWeave, HatchStylePlaid, HatchStyleDivot, HatchStyleDottedGrid, HatchStyleDottedDiamond, HatchStyleShingle, HatchStyleTrellis, HatchStyleSphere, HatchStyleSmallGrid, HatchStyleSmallCheckerBoard, HatchStyleLargeCheckerBoard, HatchStyleOutlinedDiamond, HatchStyleSolidDiamond };

enum DECLSPEC_DENUM TIGPDashStyle : unsigned int { DashStyleSolid, DashStyleDash, DashStyleDot, DashStyleDashDot, DashStyleDashDotDot, DashStyleCustom };

enum DECLSPEC_DENUM TIGPDashCap : unsigned int { DashCapFlat, DashCapRound = 2, DashCapTriangle };

enum DECLSPEC_DENUM TIGPLineCap : unsigned int { LineCapFlat, LineCapSquare, LineCapRound, LineCapTriangle, LineCapNoAnchor = 16, LineCapSquareAnchor, LineCapRoundAnchor, LineCapDiamondAnchor, LineCapArrowAnchor, LineCapCustom = 255, LineCapAnchorMask = 240 };

enum DECLSPEC_DENUM TIGPCustomLineCapType : unsigned int { CustomLineCapTypeDefault, CustomLineCapTypeAdjustableArrow };

enum DECLSPEC_DENUM TIGPLineJoin : unsigned int { LineJoinMiter, LineJoinBevel, LineJoinRound, LineJoinMiterClipped };

enum DECLSPEC_DENUM TIGPPathPointType : unsigned char { PathPointTypeStart, PathPointTypeLine, PathPointTypeBezier = 3, PathPointTypePathTypeMask = 7, PathPointTypeDashMode = 16, PathPointTypePathMarker = 32, PathPointTypeCloseSubpath = 128, PathPointTypeBezier3 = 3 };

enum DECLSPEC_DENUM TIGPWarpMode : unsigned int { WarpModePerspective, WarpModeBilinear };

enum DECLSPEC_DENUM TIGPLinearGradientMode : unsigned int { LinearGradientModeHorizontal, LinearGradientModeVertical, LinearGradientModeForwardDiagonal, LinearGradientModeBackwardDiagonal };

enum DECLSPEC_DENUM TIGPCombineMode : unsigned int { CombineModeReplace, CombineModeIntersect, CombineModeUnion, CombineModeXor, CombineModeExclude, CombineModeComplement };

enum DECLSPEC_DENUM TIGPImageType : unsigned int { ImageTypeUnknown, ImageTypeBitmap, ImageTypeMetafile };

enum DECLSPEC_DENUM TIGPInterpolationMode: int { InterpolationModeInvalid = -1, InterpolationModeDefault, InterpolationModeLowQuality, InterpolationModeHighQuality, InterpolationModeBilinear, InterpolationModeBicubic, InterpolationModeNearestNeighbor, InterpolationModeHighQualityBilinear, InterpolationModeHighQualityBicubic };

enum DECLSPEC_DENUM TIGPPenAlignment : unsigned int { PenAlignmentCenter, PenAlignmentInset };

enum DECLSPEC_DENUM TIGPBrushType : unsigned int { BrushTypeSolidColor, BrushTypeHatchFill, BrushTypeTextureFill, BrushTypePathGradient, BrushTypeLinearGradient };

enum DECLSPEC_DENUM TIGPPenType: int { PenTypeSolidColor, PenTypeHatchFill, PenTypeTextureFill, PenTypePathGradient, PenTypeLinearGradient, PenTypeUnknown = -1 };

enum DECLSPEC_DENUM TIGPMatrixOrder : unsigned int { MatrixOrderPrepend, MatrixOrderAppend };

enum DECLSPEC_DENUM TIGPGenericFontFamily : unsigned int { GenericFontFamilySerif, GenericFontFamilySansSerif, GenericFontFamilyMonospace };

enum DECLSPEC_DENUM TIGPSmoothingMode: int { SmoothingModeInvalid = -1, SmoothingModeDefault, SmoothingModeHighSpeed, SmoothingModeHighQuality, SmoothingModeNone, SmoothingModeAntiAlias, SmoothingModeAntiAlias8x4 = 4, SmoothingModeAntiAlias8x8 };

enum DECLSPEC_DENUM TIGPPixelOffsetMode: int { PixelOffsetModeInvalid = -1, PixelOffsetModeDefault, PixelOffsetModeHighSpeed, PixelOffsetModeHighQuality, PixelOffsetModeNone, PixelOffsetModeHalf };

enum DECLSPEC_DENUM TIGPTextRenderingHint : unsigned int { TextRenderingHintSystemDefault, TextRenderingHintSingleBitPerPixelGridFit, TextRenderingHintSingleBitPerPixel, TextRenderingHintAntiAliasGridFit, TextRenderingHintAntiAlias, TextRenderingHintClearTypeGridFit };

enum DECLSPEC_DENUM TIGPMetafileType : unsigned int { MetafileTypeInvalid, MetafileTypeWmf, MetafileTypeWmfPlaceable, MetafileTypeEmf, MetafileTypeEmfPlusOnly, MetafileTypeEmfPlusDual };

enum DECLSPEC_DENUM TIGPEmfType : unsigned int { EmfTypeEmfOnly = 3, EmfTypeEmfPlusOnly, EmfTypeEmfPlusDual };

enum DECLSPEC_DENUM TIGPObjectType : unsigned int { ObjectTypeInvalid, ObjectTypeBrush, ObjectTypePen, ObjectTypePath, ObjectTypeRegion, ObjectTypeImage, ObjectTypeFont, ObjectTypeStringFormat, ObjectTypeImageAttributes, ObjectTypeCustomLineCap };

typedef int TIGPStringFormatFlags;

enum DECLSPEC_DENUM TIGPStringTrimming : unsigned int { StringTrimmingNone, StringTrimmingCharacter, StringTrimmingWord, StringTrimmingEllipsisCharacter, StringTrimmingEllipsisWord, StringTrimmingEllipsisPath };

enum DECLSPEC_DENUM TIGPStringDigitSubstitute : unsigned int { StringDigitSubstituteUser, StringDigitSubstituteNone, StringDigitSubstituteNational, StringDigitSubstituteTraditional };

typedef TIGPStringDigitSubstitute *PGPStringDigitSubstitute;

enum DECLSPEC_DENUM TIGPHotkeyPrefix : unsigned int { HotkeyPrefixNone, HotkeyPrefixShow, HotkeyPrefixHide };

enum DECLSPEC_DENUM TIGPStringAlignment : unsigned int { StringAlignmentNear, StringAlignmentCenter, StringAlignmentFar };

typedef int TIGPDriverStringOptions;

enum DECLSPEC_DENUM TIGPFlushIntention : unsigned int { FlushIntentionFlush, FlushIntentionSync };

typedef int TIGPEncoderParameterValueType;

enum DECLSPEC_DENUM TIGPEncoderValue : unsigned int { EncoderValueColorTypeCMYK, EncoderValueColorTypeYCCK, EncoderValueCompressionLZW, EncoderValueCompressionCCITT3, EncoderValueCompressionCCITT4, EncoderValueCompressionRle, EncoderValueCompressionNone, EncoderValueScanMethodInterlaced, EncoderValueScanMethodNonInterlaced, EncoderValueVersionGif87, EncoderValueVersionGif89, EncoderValueRenderProgressive, EncoderValueRenderNonProgressive, EncoderValueTransformRotate90, EncoderValueTransformRotate180, EncoderValueTransformRotate270, EncoderValueTransformFlipHorizontal, EncoderValueTransformFlipVertical, EncoderValueMultiFrame, EncoderValueLastFrame, EncoderValueFlush, EncoderValueFrameDimensionTime, EncoderValueFrameDimensionResolution, 
	EncoderValueFrameDimensionPage };

enum DECLSPEC_DENUM TIGPEmfToWmfBitsFlags : unsigned int { EmfToWmfBitsFlagsDefault, EmfToWmfBitsFlagsEmbedEmf, EmfToWmfBitsFlagsIncludePlaceable, EmfToWmfBitsFlagsNoXORClip = 0x4 };

__interface TIGPImageAbortProc  : public  ::System::IInterface 
{
	virtual bool __fastcall Invoke() = 0 ;
};

typedef _di_TIGPImageAbortProc TIGPDrawImageAbortProc;

typedef _di_TIGPImageAbortProc TIGPGetThumbnailImageAbortProc;

__interface TIGPEnumerateMetafileProc  : public  ::System::IInterface 
{
	virtual bool __fastcall Invoke(TIGPEmfPlusRecordType recordType, unsigned flags, unsigned dataSize,  ::System::PByte data) = 0 ;
};

enum DECLSPEC_DENUM TIGPStatus : unsigned int { Ok, GenericError, InvalidParameter, OutOfMemory, ObjectBusy, InsufficientBuffer, NotImplemented, Win32Error, WrongState, Aborted, FileNotFound, ValueOverflow, AccessDenied, UnknownImageFormat, FontFamilyNotFound, FontStyleNotFound, NotTrueTypeFont, UnsupportedGdiplusVersion, GdiplusNotInitialized, PropertyNotFound, PropertyNotSupported, ProfileNotFound };

#pragma pack(push,4)
class PASCALIMPLEMENTATION EGPException : public  ::System::Sysutils::Exception
{
	typedef  ::System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EGPException(const  ::System::UnicodeString Msg) :  ::System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EGPException(const  ::System::UnicodeString Msg, const  ::System::TVarRec *Args, const int Args_High) :  ::System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EGPException(NativeUInt Ident)/* overload */ :  ::System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EGPException( ::System::PResStringRec ResStringRec)/* overload */ :  ::System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EGPException(NativeUInt Ident, const  ::System::TVarRec *Args, const int Args_High)/* overload */ :  ::System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EGPException( ::System::PResStringRec ResStringRec, const  ::System::TVarRec *Args, const int Args_High)/* overload */ :  ::System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EGPException(const  ::System::UnicodeString Msg, int AHelpContext) :  ::System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EGPException(const  ::System::UnicodeString Msg, const  ::System::TVarRec *Args, const int Args_High, int AHelpContext) :  ::System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGPException(NativeUInt Ident, int AHelpContext)/* overload */ :  ::System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGPException( ::System::PResStringRec ResStringRec, int AHelpContext)/* overload */ :  ::System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGPException( ::System::PResStringRec ResStringRec, const  ::System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ :  ::System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGPException(NativeUInt Ident, const  ::System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ :  ::System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EGPException() { }
	
};

#pragma pack(pop)

typedef TIGPSizeF *PGPSizeF;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPSizeF
{
public:
	float Width;
	float Height;
	__fastcall TIGPSizeF(float _Width, float _Height)/* overload */;
	__fastcall TIGPSizeF(float ASize)/* overload */;
	TIGPSizeF() {}
};
#pragma pack(pop)


typedef TIGPSize *PGPSize;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPSize
{
public:
	int Width;
	int Height;
	__fastcall TIGPSize(int _Width, int _Height)/* overload */;
	__fastcall TIGPSize(int ASize)/* overload */;
	TIGPSize() {}
};
#pragma pack(pop)


typedef  ::System::Types::TPoint *PGPPoint;

typedef  ::System::Types::TPointF *PGPPointF;

typedef TIGPRect *PGPRect;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPRect
{
public:
	int X;
	int Y;
	int Width;
	int Height;
	
private:
	 ::System::Types::TPoint __fastcall GetPosition();
	void __fastcall SetPosition(const  ::System::Types::TPoint &AValue);
	TIGPSize __fastcall GetSize();
	void __fastcall SetSize(const TIGPSize &AValue);
	 ::System::Types::TPoint __fastcall GetCenter();
	void __fastcall SetCenter(const  ::System::Types::TPoint &AValue);
	 ::System::Types::TPoint __fastcall GetEndPoint();
	void __fastcall SetEndPoint(const  ::System::Types::TPoint &AValue);
	
public:
	__fastcall TIGPRect(int AX, int AY, int AWidth, int AHeight)/* overload */;
	__fastcall TIGPRect(const  ::System::Types::TPoint &ALocation, const TIGPSize &ASize)/* overload */;
	__fastcall TIGPRect(const  ::System::Types::TRect &ARect)/* overload */;
	 ::System::Types::TRect __fastcall AsRect();
	bool __fastcall HitTest(int AX, int AY)/* overload */;
	bool __fastcall HitTest(const  ::System::Types::TPoint &APoint)/* overload */;
	bool __fastcall HitTest(const  ::System::Types::TPointF &APoint)/* overload */;
	bool __fastcall Intersects(const TIGPRect &ARect);
	__property  ::System::Types::TPoint Position = {read=GetPosition, write=SetPosition};
	__property TIGPSize Size = {read=GetSize, write=SetSize};
	__property  ::System::Types::TPoint Center = {read=GetCenter, write=SetCenter};
	__property  ::System::Types::TPoint EndPoint = {read=GetEndPoint, write=SetEndPoint};
	TIGPRect() {}
};
#pragma pack(pop)


typedef TIGPRectF *PGPRectF;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPRectF
{
public:
	float X;
	float Y;
	float Width;
	float Height;
	
private:
	 ::System::Types::TPointF __fastcall GetPosition();
	void __fastcall SetPosition(const  ::System::Types::TPointF &AValue);
	TIGPSizeF __fastcall GetSize();
	void __fastcall SetSize(const TIGPSizeF &AValue);
	 ::System::Types::TPointF __fastcall GetCenter();
	void __fastcall SetCenter(const  ::System::Types::TPointF &AValue);
	 ::System::Types::TPointF __fastcall GetEndPoint();
	void __fastcall SetEndPoint(const  ::System::Types::TPointF &AValue);
	
public:
	__fastcall TIGPRectF(float AX, float AY, float AWidth, float AHeight)/* overload */;
	__fastcall TIGPRectF(const  ::System::Types::TPointF &ALocation, const TIGPSizeF &ASize)/* overload */;
	__fastcall TIGPRectF(const  ::System::Types::TRect &ARect)/* overload */;
	__fastcall TIGPRectF(const TIGPRect &ARect)/* overload */;
	 ::System::Types::TRectF __fastcall AsRect();
	bool __fastcall HitTest(float AX, float AY)/* overload */;
	bool __fastcall HitTest(const  ::System::Types::TPointF &APoint)/* overload */;
	bool __fastcall HitTest(const  ::System::Types::TPoint &APoint)/* overload */;
	bool __fastcall Intersects(const TIGPRectF &ARect);
	__property  ::System::Types::TPointF Position = {read=GetPosition, write=SetPosition};
	__property TIGPSizeF Size = {read=GetSize, write=SetSize};
	__property  ::System::Types::TPointF Center = {read=GetCenter, write=SetCenter};
	__property  ::System::Types::TPointF EndPoint = {read=GetEndPoint, write=SetEndPoint};
	TIGPRectF() {}
};
#pragma pack(pop)


typedef TIGPCharacterRange *PGPCharacterRange;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPCharacterRange
{
public:
	int First;
	int Length;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TIGPDebugEventLevel : unsigned int { DebugEventLevelFatal, DebugEventLevelWarning };

typedef void __stdcall (*TIGPDebugEventProc)(TIGPDebugEventLevel Alevel,  ::System::WideChar * AMessage);

typedef TIGPStatus __stdcall (*TIGPNotificationHookProc)(/* out */ void * &AToken);

typedef void __stdcall (*TIGPNotificationUnhookProc)(void * AToken);

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPGdiplusStartupInput
{
public:
	unsigned GdiplusVersion;
	TIGPDebugEventProc DebugEventCallback;
	 ::System::LongBool SuppressBackgroundThread;
	 ::System::LongBool SuppressExternalCodecs;
};
#pragma pack(pop)


typedef TIGPGdiplusStartupInput *PGPGdiplusStartupInput;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPGdiplusStartupOutput
{
public:
	TIGPNotificationHookProc NotificationHook;
	TIGPNotificationUnhookProc NotificationUnhook;
};
#pragma pack(pop)


typedef TIGPGdiplusStartupOutput *PGPGdiplusStartupOutput;

typedef int TIGPPixelFormat;

enum DECLSPEC_DENUM TIGPPaletteFlags : unsigned int { PaletteFlagsHasAlpha = 0x1, PaletteFlagsGrayScale, PaletteFlagsHalftone = 0x4 };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPColorPalette
{
public:
	unsigned Flags;
	unsigned Count;
	 ::System::StaticArray< ::System::Uitypes::TAlphaColor, 1> Entries;
};
#pragma pack(pop)


typedef TIGPColorPalette *PGPColorPalette;

enum DECLSPEC_DENUM TIGPColorChannelFlags : unsigned int { ColorChannelFlagsC, ColorChannelFlagsM, ColorChannelFlagsY, ColorChannelFlagsK, ColorChannelFlagsLast };

typedef TIGPENHMETAHEADER3 *PENHMETAHEADER3;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPWMFRect16
{
public:
	short Left;
	short Top;
	short Right;
	short Bottom;
};
#pragma pack(pop)


typedef TPWMFRect16 *PPWMFRect16;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPWmfPlaceableFileHeader
{
public:
	unsigned Key;
	short Hmf;
	TPWMFRect16 BoundingBox;
	short Inch;
	unsigned Reserved;
	short Checksum;
};
#pragma pack(pop)


typedef TIGPWmfPlaceableFileHeader *PGPWmfPlaceableFileHeader;

__interface  INTERFACE_UUID("{025D1823-6C7D-447B-BBDB-A3CBC3DFA2FC}") IGPImageBytes  : public  ::System::IInterface 
{
	virtual HRESULT __stdcall CountBytes(/* out */ unsigned &pcb) = 0 ;
	virtual HRESULT __stdcall LockBytes(unsigned cb, unsigned ulOffset, /* out */ void * &ppvBytes) = 0 ;
	virtual HRESULT __stdcall UnlockBytes(void * pvBytes, unsigned cb, unsigned ulOffset) = 0 ;
};

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPImageCodecInfo
{
public:
	GUID Clsid;
	GUID FormatID;
	 ::System::WideChar *CodecName;
	 ::System::WideChar *DllName;
	 ::System::WideChar *FormatDescription;
	 ::System::WideChar *FilenameExtension;
	 ::System::WideChar *MimeType;
	unsigned Flags;
	unsigned Version;
	unsigned SigCount;
	unsigned SigSize;
	 ::System::Byte *SigPattern;
	 ::System::Byte *SigMask;
};
#pragma pack(pop)


typedef TIGPImageCodecInfo *PGPImageCodecInfo;

enum DECLSPEC_DENUM TIGPImageLockMode : unsigned int { ImageLockModeRead, ImageLockModeWrite, ImageLockModeUserInputBuf };

typedef  ::System::Set<TIGPImageLockMode, TIGPImageLockMode::ImageLockModeRead, TIGPImageLockMode::ImageLockModeUserInputBuf> TIGPImageLockModes;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPBitmapDataRecord
{
public:
	unsigned Width;
	unsigned Height;
	int Stride;
	int PixelFormat;
	void *Scan0;
	void *Reserved;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TIGPRotateFlipType : unsigned int { RotateNoneFlipNone, Rotate90FlipNone, Rotate180FlipNone, Rotate270FlipNone, RotateNoneFlipX, Rotate90FlipX, Rotate180FlipX, Rotate270FlipX, RotateNoneFlipY = 6, Rotate90FlipY, Rotate180FlipY = 4, Rotate270FlipY, RotateNoneFlipXY = 2, Rotate90FlipXY, Rotate180FlipXY = 0, Rotate270FlipXY };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPEncoderParameter
{
public:
	GUID Guid;
	unsigned NumberOfValues;
	unsigned DataType;
	void *Value;
};
#pragma pack(pop)


typedef TIGPEncoderParameter *PGPEncoderParameter;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPEncoderParameters
{
public:
	unsigned Count;
	 ::System::StaticArray<TIGPEncoderParameter, 1> Parameter;
};
#pragma pack(pop)


typedef TIGPEncoderParameters *PGPEncoderParameters;

struct DECLSPEC_DRECORD TIGPPropertyItem
{
public:
	unsigned id;
	unsigned length;
	 ::System::Word DataType;
	void *value;
};


typedef TIGPPropertyItem *PGPPropertyItem;

typedef  ::System::StaticArray< ::System::StaticArray<float, 5>, 5> TIGPColorMatrix;

typedef TIGPColorMatrix *PGPColorMatrix;

enum DECLSPEC_DENUM TIGPColorMatrixFlags : unsigned int { ColorMatrixFlagsDefault, ColorMatrixFlagsSkipGrays, ColorMatrixFlagsAltGray };

enum DECLSPEC_DENUM TIGPColorAdjustType : unsigned int { ColorAdjustTypeDefault, ColorAdjustTypeBitmap, ColorAdjustTypeBrush, ColorAdjustTypePen, ColorAdjustTypeText, ColorAdjustTypeCount, ColorAdjustTypeAny };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPColorMap
{
public:
	 ::System::Uitypes::TAlphaColor oldColor;
	 ::System::Uitypes::TAlphaColor newColor;
};
#pragma pack(pop)


typedef TIGPColorMap *PGPColorMap;

typedef void * GpGraphics;

typedef void * GpBrush;

typedef void * GpTexture;

typedef void * GpSolidFill;

typedef void * GpLineGradient;

typedef void * GpPathGradient;

typedef void * GpHatch;

typedef void * GpPen;

typedef void * GpCustomLineCap;

typedef void * GpAdjustableArrowCap;

typedef void * GpImage;

typedef void * GpBitmap;

typedef void * GpMetafile;

typedef void * GpImageAttributes;

typedef void * GpPath;

typedef void * GpRegion;

typedef void * GpPathIterator;

typedef void * GpFontFamily;

typedef void * GpFont;

typedef void * GpStringFormat;

typedef void * GpFontCollection;

typedef void * GpCachedBitmap;

typedef void * GpMatrix;

struct DECLSPEC_DRECORD TIGPBlend
{
public:
	float Position;
	float Value;
};


struct DECLSPEC_DRECORD TIGPInterpolationColor
{
public:
	float Position;
	 ::System::Uitypes::TAlphaColor Color;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPBase : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	__classmethod void __fastcall ErrorCheck(TIGPStatus AStatus);
	
public:
	__classmethod virtual  ::System::TObject* __fastcall NewInstance();
	virtual void __fastcall FreeInstance();
	__fastcall TIGPBase();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIGPBase() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1CA67396-A73B-4621-830D-989DA20EBE36}") IGPPathData  : public  ::System::IInterface 
{
	virtual int __fastcall GetCount() = 0 ;
	virtual  ::System::Types::TPointF __fastcall GetPoints(int Index) = 0 ;
	virtual TIGPPathPointType __fastcall GetTypes(int Index) = 0 ;
	__property int Count = {read=GetCount};
	__property  ::System::Types::TPointF Points[int Index] = {read=GetPoints};
	__property TIGPPathPointType Types[int Index] = {read=GetTypes};
};

__interface  INTERFACE_UUID("{3F6AC13B-46CD-4CA6-B5DE-ACD761649161}") IGPMetafileHeader  : public  ::System::IInterface 
{
	virtual TIGPMetafileType __fastcall GetType() = 0 ;
	virtual unsigned __fastcall GetMetafileSize() = 0 ;
	virtual unsigned __fastcall GetVersion() = 0 ;
	virtual unsigned __fastcall GetEmfPlusFlags() = 0 ;
	virtual float __fastcall GetDpiX() = 0 ;
	virtual float __fastcall GetDpiY() = 0 ;
	virtual TIGPRect __fastcall GetBounds() = 0 ;
	virtual bool __fastcall IsWmf() = 0 ;
	virtual bool __fastcall IsWmfPlaceable() = 0 ;
	virtual bool __fastcall IsEmf() = 0 ;
	virtual bool __fastcall IsEmfOrEmfPlus() = 0 ;
	virtual bool __fastcall IsEmfPlus() = 0 ;
	virtual bool __fastcall IsEmfPlusDual() = 0 ;
	virtual bool __fastcall IsEmfPlusOnly() = 0 ;
	virtual bool __fastcall IsDisplay() = 0 ;
	virtual  ::Winapi::Windows::PMetaHeader __fastcall GetWmfHeader() = 0 ;
	virtual PENHMETAHEADER3 __fastcall GetEmfHeader() = 0 ;
	__property unsigned MetafileSize = {read=GetMetafileSize};
	__property unsigned Version = {read=GetVersion};
	__property float DpiX = {read=GetDpiX};
	__property float DpiY = {read=GetDpiY};
	__property TIGPRect Bounds = {read=GetBounds};
};

__interface  INTERFACE_UUID("{ECAB7D08-39D0-47AA-8247-9DD3491485EA}") IGPRegion  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeRegion() = 0 ;
	virtual TIGPRegion* __fastcall Clone() = 0 ;
	virtual TIGPRegion* __fastcall MakeInfinite() = 0 ;
	virtual TIGPRegion* __fastcall MakeEmpty() = 0 ;
	virtual unsigned __fastcall GetDataSize() = 0 ;
	virtual  ::System::DynamicArray< ::System::Byte> __fastcall GetData() = 0 ;
	virtual TIGPRegion* __fastcall Intersect(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPRegion* __fastcall IntersectF(const TIGPRectF &ARect) = 0 ;
	virtual TIGPRegion* __fastcall Intersect(const _di_IGPGraphicsPath APath) = 0 /* overload */;
	virtual TIGPRegion* __fastcall Intersect(const _di_IGPRegion ARegion) = 0 /* overload */;
	virtual TIGPRegion* __fastcall Union(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPRegion* __fastcall UnionF(const TIGPRectF &ARect) = 0 ;
	virtual TIGPRegion* __fastcall Union(const _di_IGPGraphicsPath APath) = 0 /* overload */;
	virtual TIGPRegion* __fastcall Union(const _di_IGPRegion ARegion) = 0 /* overload */;
	virtual TIGPRegion* __fastcall XorRegion(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPRegion* __fastcall XorRegionF(const TIGPRectF &ARect) = 0 ;
	virtual TIGPRegion* __fastcall XorRegion(const _di_IGPGraphicsPath APath) = 0 /* overload */;
	virtual TIGPRegion* __fastcall XorRegion(const _di_IGPRegion ARegion) = 0 /* overload */;
	virtual TIGPRegion* __fastcall Exclude(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPRegion* __fastcall ExcludeF(const TIGPRectF &ARect) = 0 ;
	virtual TIGPRegion* __fastcall Exclude(const _di_IGPGraphicsPath APath) = 0 /* overload */;
	virtual TIGPRegion* __fastcall Exclude(const _di_IGPRegion ARegion) = 0 /* overload */;
	virtual TIGPRegion* __fastcall Complement(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPRegion* __fastcall ComplementF(const TIGPRectF &ARect) = 0 ;
	virtual TIGPRegion* __fastcall Complement(const _di_IGPGraphicsPath APath) = 0 /* overload */;
	virtual TIGPRegion* __fastcall Complement(const _di_IGPRegion ARegion) = 0 /* overload */;
	virtual TIGPRegion* __fastcall TranslateF(float dx, float dy) = 0 ;
	virtual TIGPRegion* __fastcall Translate(int dx, int dy) = 0 ;
	virtual TIGPRegion* __fastcall Transform(const _di_IGPMatrix AMatrix) = 0 ;
	virtual TIGPRect __fastcall GetBounds(const _di_IGPGraphics AGraphics) = 0 ;
	virtual TIGPRectF __fastcall GetBoundsF(const _di_IGPGraphics AGraphics) = 0 ;
	virtual HRGN __fastcall GetHRGN(const _di_IGPGraphics AGraphics) = 0 ;
	virtual bool __fastcall IsEmpty(const _di_IGPGraphics AGraphics) = 0 ;
	virtual bool __fastcall IsInfinite(const _di_IGPGraphics AGraphics) = 0 ;
	virtual bool __fastcall IsVisible(int x, int y, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisible(const  ::System::Types::TPoint &point, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(float x, float y, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(const  ::System::Types::TPointF &point, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisible(int x, int y, int AWidth, int AHeight, const _di_IGPGraphics AGraphics) = 0 /* overload */;
	virtual bool __fastcall IsVisible(const TIGPRect &ARect, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(float x, float y, float AWidth, float AHeight, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(const TIGPRectF &ARect, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall Equals(const _di_IGPRegion ARegion, const _di_IGPGraphics AGraphics) = 0 ;
	virtual unsigned __fastcall GetRegionScansCount(const _di_IGPMatrix AMatrix) = 0 ;
	virtual  ::System::DynamicArray<TIGPRectF> __fastcall GetRegionScansF(const _di_IGPMatrix AMatrix) = 0 ;
	virtual  ::System::DynamicArray<TIGPRect> __fastcall GetRegionScans(const _di_IGPMatrix AMatrix) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPRegion : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeRegion;
	void * __fastcall GetNativeRegion();
	void __fastcall SetNativeRegion(void * nativeRegion);
	__fastcall TIGPRegion(void * nativeRegion, bool ADummy);
	
public:
	__classmethod _di_IGPRegion __fastcall Create()/* overload */;
	__classmethod _di_IGPRegion __fastcall Create(const TIGPRectF &ARect)/* overload */;
	__classmethod _di_IGPRegion __fastcall Create(const TIGPRect &ARect)/* overload */;
	__classmethod _di_IGPRegion __fastcall Create(const _di_IGPGraphicsPath APath)/* overload */;
	__classmethod _di_IGPRegion __fastcall Create(const  ::System::Byte *regionData, const int regionData_High)/* overload */;
	__classmethod _di_IGPRegion __fastcall Create(HRGN hRgn)/* overload */;
	__fastcall TIGPRegion()/* overload */;
	__fastcall TIGPRegion(const TIGPRectF &ARect)/* overload */;
	__fastcall TIGPRegion(const TIGPRect &ARect)/* overload */;
	__fastcall TIGPRegion(const _di_IGPGraphicsPath APath)/* overload */;
	__fastcall TIGPRegion(const  ::System::Byte *regionData, const int regionData_High)/* overload */;
	__fastcall TIGPRegion(HRGN hRgn)/* overload */;
	__fastcall virtual ~TIGPRegion();
	__classmethod _di_IGPRegion __fastcall FromHRGN(HRGN hRgn);
	TIGPRegion* __fastcall Clone();
	TIGPRegion* __fastcall MakeInfinite();
	TIGPRegion* __fastcall MakeEmpty();
	unsigned __fastcall GetDataSize();
	 ::System::DynamicArray< ::System::Byte> __fastcall GetData();
	TIGPRegion* __fastcall Intersect(const TIGPRect &ARect)/* overload */;
	TIGPRegion* __fastcall IntersectF(const TIGPRectF &ARect);
	TIGPRegion* __fastcall Intersect(const _di_IGPGraphicsPath APath)/* overload */;
	TIGPRegion* __fastcall Intersect(const _di_IGPRegion ARegion)/* overload */;
	TIGPRegion* __fastcall Union(const TIGPRect &ARect)/* overload */;
	TIGPRegion* __fastcall UnionF(const TIGPRectF &ARect);
	TIGPRegion* __fastcall Union(const _di_IGPGraphicsPath APath)/* overload */;
	TIGPRegion* __fastcall Union(const _di_IGPRegion ARegion)/* overload */;
	TIGPRegion* __fastcall XorRegion(const TIGPRect &ARect)/* overload */;
	TIGPRegion* __fastcall XorRegionF(const TIGPRectF &ARect);
	TIGPRegion* __fastcall XorRegion(const _di_IGPGraphicsPath APath)/* overload */;
	TIGPRegion* __fastcall XorRegion(const _di_IGPRegion ARegion)/* overload */;
	TIGPRegion* __fastcall Exclude(const TIGPRect &ARect)/* overload */;
	TIGPRegion* __fastcall ExcludeF(const TIGPRectF &ARect);
	TIGPRegion* __fastcall Exclude(const _di_IGPGraphicsPath APath)/* overload */;
	TIGPRegion* __fastcall Exclude(const _di_IGPRegion ARegion)/* overload */;
	TIGPRegion* __fastcall Complement(const TIGPRect &ARect)/* overload */;
	TIGPRegion* __fastcall ComplementF(const TIGPRectF &ARect);
	TIGPRegion* __fastcall Complement(const _di_IGPGraphicsPath APath)/* overload */;
	TIGPRegion* __fastcall Complement(const _di_IGPRegion ARegion)/* overload */;
	TIGPRegion* __fastcall TranslateF(float dx, float dy);
	TIGPRegion* __fastcall Translate(int dx, int dy);
	TIGPRegion* __fastcall Transform(const _di_IGPMatrix AMatrix);
	TIGPRect __fastcall GetBounds(const _di_IGPGraphics AGraphics);
	TIGPRectF __fastcall GetBoundsF(const _di_IGPGraphics AGraphics);
	HRGN __fastcall GetHRGN(const _di_IGPGraphics AGraphics);
	bool __fastcall IsEmpty(const _di_IGPGraphics AGraphics);
	bool __fastcall IsInfinite(const _di_IGPGraphics AGraphics);
	bool __fastcall IsVisible(int x, int y, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisible(const  ::System::Types::TPoint &APoint, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisibleF(float x, float y, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisibleF(const  ::System::Types::TPointF &APoint, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisible(int x, int y, int AWidth, int AHeight, const _di_IGPGraphics AGraphics)/* overload */;
	bool __fastcall IsVisible(const TIGPRect &ARect, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisibleF(float x, float y, float AWidth, float AHeight, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisibleF(const TIGPRectF &ARect, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall EqualsRegion(const _di_IGPRegion ARegion, const _di_IGPGraphics AGraphics);
	unsigned __fastcall GetRegionScansCount(const _di_IGPMatrix AMatrix);
	 ::System::DynamicArray<TIGPRectF> __fastcall GetRegionScansF(const _di_IGPMatrix AMatrix);
	 ::System::DynamicArray<TIGPRect> __fastcall GetRegionScans(const _di_IGPMatrix AMatrix);
private:
	void *__IGPRegion;	// IGPRegion 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ECAB7D08-39D0-47AA-8247-9DD3491485EA}
	operator _di_IGPRegion()
	{
		_di_IGPRegion intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPRegion*(void) { return (IGPRegion*)&__IGPRegion; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4678D60A-EA61-410E-B543-AD0FEA23103A}") IGPFontFamily  : public  ::System::IInterface 
{
	virtual  ::System::UnicodeString __fastcall GetFamilyName( ::System::Word ALanguage = ( ::System::Word)(0x0)) = 0 ;
	virtual TIGPFontFamily* __fastcall Clone() = 0 ;
	virtual bool __fastcall IsAvailable() = 0 ;
	virtual bool __fastcall IsStyleAvailable(int AStyle) = 0 ;
	virtual  ::System::Word __fastcall GetEmHeight(int AStyle) = 0 ;
	virtual  ::System::Word __fastcall GetCellAscent(int AStyle) = 0 ;
	virtual  ::System::Word __fastcall GetCellDescent(int AStyle) = 0 ;
	virtual  ::System::Word __fastcall GetLineSpacing(int AStyle) = 0 ;
	virtual void * __fastcall GetNativeFamily() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPFontFamily : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeFamily;
	__fastcall TIGPFontFamily(void * nativeFamily, bool ADummy);
	
public:
	__classmethod _di_IGPFontFamily __fastcall Create()/* overload */;
	__classmethod _di_IGPFontFamily __fastcall Create( ::System::WideString AName, const _di_IGPFontCollection AFontCollection = _di_IGPFontCollection())/* overload */;
	__fastcall TIGPFontFamily()/* overload */;
	__fastcall TIGPFontFamily( ::System::WideString AName, const _di_IGPFontCollection AFontCollection)/* overload */;
	__fastcall virtual ~TIGPFontFamily();
	__classmethod _di_IGPFontFamily __fastcall GenericSansSerif();
	__classmethod _di_IGPFontFamily __fastcall GenericSerif();
	__classmethod _di_IGPFontFamily __fastcall GenericMonospace();
	 ::System::UnicodeString __fastcall GetFamilyName( ::System::Word ALanguage = ( ::System::Word)(0x0));
	TIGPFontFamily* __fastcall Clone();
	bool __fastcall IsAvailable();
	bool __fastcall IsStyleAvailable(int AStyle);
	 ::System::Word __fastcall GetEmHeight(int AStyle);
	 ::System::Word __fastcall GetCellAscent(int AStyle);
	 ::System::Word __fastcall GetCellDescent(int AStyle);
	 ::System::Word __fastcall GetLineSpacing(int AStyle);
	void * __fastcall GetNativeFamily();
private:
	void *__IGPFontFamily;	// IGPFontFamily 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4678D60A-EA61-410E-B543-AD0FEA23103A}
	operator _di_IGPFontFamily()
	{
		_di_IGPFontFamily intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPFontFamily*(void) { return (IGPFontFamily*)&__IGPFontFamily; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{856E57C8-CAF2-4824-8DBB-E82DDEABF0BC}") IGPFontCollection  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeFontCollection() = 0 ;
	virtual int __fastcall GetFamilyCount() = 0 ;
	virtual  ::System::DynamicArray<_di_IGPFontFamily> __fastcall GetFamilies() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPFontCollection : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeFontCollection;
	void * __fastcall GetNativeFontCollection();
	
public:
	__classmethod _di_IGPFontCollection __fastcall Create();
	__fastcall TIGPFontCollection();
	__fastcall virtual ~TIGPFontCollection();
	int __fastcall GetFamilyCount();
	 ::System::DynamicArray<_di_IGPFontFamily> __fastcall GetFamilies();
private:
	void *__IGPFontCollection;	// IGPFontCollection 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {856E57C8-CAF2-4824-8DBB-E82DDEABF0BC}
	operator _di_IGPFontCollection()
	{
		_di_IGPFontCollection intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPFontCollection*(void) { return (IGPFontCollection*)&__IGPFontCollection; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPInstalledFontCollection : public TIGPFontCollection
{
	typedef TIGPFontCollection inherited;
	
public:
	__classmethod _di_IGPFontCollection __fastcall Create();
	__fastcall TIGPInstalledFontCollection();
	__fastcall virtual ~TIGPInstalledFontCollection();
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AF596B35-2851-40AD-88E1-48CEB263314E}") IGPPrivateFontCollection  : public IGPFontCollection 
{
	virtual TIGPPrivateFontCollection* __fastcall AddFontFile( ::System::WideString filename) = 0 ;
	virtual TIGPPrivateFontCollection* __fastcall AddMemoryFont(void * memory, int length) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPPrivateFontCollection : public TIGPFontCollection
{
	typedef TIGPFontCollection inherited;
	
public:
	__classmethod _di_IGPPrivateFontCollection __fastcall Create();
	__fastcall TIGPPrivateFontCollection();
	__fastcall virtual ~TIGPPrivateFontCollection();
	TIGPPrivateFontCollection* __fastcall AddFontFile( ::System::WideString AFileName);
	TIGPPrivateFontCollection* __fastcall AddMemoryFont(void * AMemory, int ALength);
private:
	void *__IGPPrivateFontCollection;	// IGPPrivateFontCollection 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AF596B35-2851-40AD-88E1-48CEB263314E}
	operator _di_IGPPrivateFontCollection()
	{
		_di_IGPPrivateFontCollection intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPPrivateFontCollection*(void) { return (IGPPrivateFontCollection*)&__IGPPrivateFontCollection; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{034EF8BC-9EBD-4058-8C18-FFD8873E4883}") IGPFont  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeFont() = 0 ;
	virtual tagLOGFONTA __fastcall GetLogFontA(const _di_IGPGraphics AGraphics) = 0 ;
	virtual tagLOGFONTW __fastcall GetLogFontW(const _di_IGPGraphics AGraphics) = 0 ;
	virtual TIGPFont* __fastcall Clone() = 0 ;
	virtual bool __fastcall IsAvailable() = 0 ;
	virtual int __fastcall GetStyle() = 0 ;
	virtual float __fastcall GetSize() = 0 ;
	virtual TIGPUnit __fastcall GetUnit() = 0 ;
	virtual float __fastcall GetHeight(const _di_IGPGraphics AGraphics) = 0 /* overload */;
	virtual float __fastcall GetHeight(float dpi) = 0 /* overload */;
	virtual _di_IGPFontFamily __fastcall GetFamily() = 0 ;
	__property int Style = {read=GetStyle};
	__property float Size = {read=GetSize};
	__property TIGPUnit Units = {read=GetUnit};
	__property _di_IGPFontFamily Family = {read=GetFamily};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPFont : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeFont;
	void __fastcall SetNativeFont(void * AFont);
	void * __fastcall GetNativeFont();
	__fastcall TIGPFont(void * AFont, bool ADummy);
	
public:
	__classmethod _di_IGPFont __fastcall Create(HDC hdc)/* overload */;
	__classmethod _di_IGPFont __fastcall Create(HDC hdc,  ::Winapi::Windows::PLogFontA ALogFont)/* overload */;
	__classmethod _di_IGPFont __fastcall Create(HDC hdc,  ::Winapi::Windows::PLogFontW ALogFont)/* overload */;
	__classmethod _di_IGPFont __fastcall Create(HDC hdc, HFONT hfont)/* overload */;
	__classmethod _di_IGPFont __fastcall Create(const _di_IGPFontFamily AFamily, float emSize,  ::System::Uitypes::TFontStyles AStyle =  ::System::Uitypes::TFontStyles() , TIGPUnit AUnit = (TIGPUnit)(0x3))/* overload */;
	__classmethod _di_IGPFont __fastcall Create( ::System::WideString AFamilyName, float emSize,  ::System::Uitypes::TFontStyles AStyle =  ::System::Uitypes::TFontStyles() , TIGPUnit AUnit = (TIGPUnit)(0x3), const _di_IGPFontCollection AFontCollection = _di_IGPFontCollection())/* overload */;
	__fastcall TIGPFont(HDC hdc)/* overload */;
	__fastcall TIGPFont(HDC hdc,  ::Winapi::Windows::PLogFontA ALogFont)/* overload */;
	__fastcall TIGPFont(HDC hdc,  ::Winapi::Windows::PLogFontW ALogFont)/* overload */;
	__fastcall TIGPFont(HDC hdc, HFONT hfont)/* overload */;
	__fastcall TIGPFont(const _di_IGPFontFamily AFamily, float emSize,  ::System::Uitypes::TFontStyles AStyle, TIGPUnit AUnit)/* overload */;
	__fastcall TIGPFont( ::System::WideString AFamilyName, float emSize,  ::System::Uitypes::TFontStyles AStyle, TIGPUnit AUnit, _di_IGPFontCollection AFontCollection)/* overload */;
	__fastcall virtual ~TIGPFont();
	tagLOGFONTA __fastcall GetLogFontA(const _di_IGPGraphics AGraphics);
	tagLOGFONTW __fastcall GetLogFontW(const _di_IGPGraphics AGraphics);
	TIGPFont* __fastcall Clone();
	bool __fastcall IsAvailable();
	int __fastcall GetStyle();
	float __fastcall GetSize();
	TIGPUnit __fastcall GetUnit();
	float __fastcall GetHeight(const _di_IGPGraphics AGraphics)/* overload */;
	float __fastcall GetHeight(float dpi)/* overload */;
	_di_IGPFontFamily __fastcall GetFamily();
private:
	void *__IGPFont;	// IGPFont 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {034EF8BC-9EBD-4058-8C18-FFD8873E4883}
	operator _di_IGPFont()
	{
		_di_IGPFont intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPFont*(void) { return (IGPFont*)&__IGPFont; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3514B659-EAB2-4A2E-80F5-7A6AD9E2A64B}") IGPImage  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeImage() = 0 ;
	virtual TIGPImage* __fastcall Clone() = 0 ;
	virtual TIGPImage* __fastcall Save( ::System::WideString filename, const GUID &clsidEncoder, PGPEncoderParameters encoderParams = (PGPEncoderParameters)(0x0)) = 0 /* overload */;
	virtual TIGPImage* __fastcall Save(_di_IStream stream, const GUID &clsidEncoder, PGPEncoderParameters encoderParams = (PGPEncoderParameters)(0x0)) = 0 /* overload */;
	virtual TIGPImage* __fastcall Save( ::System::WideString filename, const  ::System::UnicodeString formatName = L"bmp") = 0 /* overload */;
	virtual TIGPImage* __fastcall Save(_di_IStream stream, const  ::System::UnicodeString formatName = L"bmp") = 0 /* overload */;
	virtual TIGPImage* __fastcall Save( ::System::Classes::TStream* stream, const GUID &clsidEncoder, PGPEncoderParameters encoderParams = (PGPEncoderParameters)(0x0)) = 0 /* overload */;
	virtual TIGPImage* __fastcall Save( ::System::Classes::TStream* stream, const  ::System::UnicodeString formatName = L"bmp") = 0 /* overload */;
	virtual TIGPImage* __fastcall SaveAdd(PGPEncoderParameters encoderParams) = 0 /* overload */;
	virtual TIGPImage* __fastcall SaveAdd(const _di_IGPImage newImage, PGPEncoderParameters encoderParams) = 0 /* overload */;
	virtual TIGPImageType __fastcall GetType() = 0 ;
	virtual TIGPSizeF __fastcall GetPhysicalDimension() = 0 ;
	virtual TIGPImage* __fastcall GetBounds(/* out */ TIGPRectF &sASrcRect, /* out */ TIGPUnit &ASrcUnit) = 0 ;
	virtual  ::System::DynamicArray< ::System::Byte> __fastcall AsBytes(const  ::System::UnicodeString formatName = L"bmp") = 0 /* overload */;
	virtual  ::System::DynamicArray< ::System::Byte> __fastcall AsBytes(const GUID &clsidEncoder, PGPEncoderParameters encoderParams = (PGPEncoderParameters)(0x0)) = 0 /* overload */;
	virtual unsigned __fastcall GetWidth() = 0 ;
	virtual unsigned __fastcall GetHeight() = 0 ;
	virtual float __fastcall GetHorizontalResolution() = 0 ;
	virtual float __fastcall GetVerticalResolution() = 0 ;
	virtual unsigned __fastcall GetFlags() = 0 ;
	virtual GUID __fastcall GetRawFormat() = 0 ;
	virtual  ::System::UnicodeString __fastcall GetFormatName() = 0 ;
	virtual int __fastcall GetPixelFormat() = 0 ;
	virtual int __fastcall GetPaletteSize() = 0 ;
	virtual TIGPImage* __fastcall GetPalette(PGPColorPalette palette, int size) = 0 ;
	virtual TIGPImage* __fastcall SetPalette(PGPColorPalette palette) = 0 ;
	virtual TIGPImage* __fastcall GetThumbnailImage(unsigned AThumbWidth, unsigned AThumbHeight, _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc()) = 0 ;
	virtual unsigned __fastcall GetFrameDimensionsCount() = 0 ;
	virtual  ::System::DynamicArray<GUID> __fastcall GetFrameDimensionsList() = 0 ;
	virtual unsigned __fastcall GetFrameCount(const GUID &ADimensionID) = 0 ;
	virtual TIGPImage* __fastcall SelectActiveFrame(const GUID &ADimensionID, unsigned frameIndex) = 0 ;
	virtual TIGPImage* __fastcall RotateFlip(TIGPRotateFlipType ARotateFlipType) = 0 ;
	virtual unsigned __fastcall GetPropertyCount() = 0 ;
	virtual  ::System::DynamicArray<unsigned> __fastcall GetPropertyIdList() = 0 ;
	virtual unsigned __fastcall GetPropertyItemSize(unsigned APropId) = 0 ;
	virtual TIGPImage* __fastcall GetPropertyItem(unsigned APropId, unsigned APropSize, PGPPropertyItem ABuffer) = 0 ;
	virtual TIGPImage* __fastcall GetPropertySize(/* out */ unsigned &ATotalBufferSize, /* out */ unsigned &numProperties) = 0 ;
	virtual TIGPImage* __fastcall GetAllPropertyItems(unsigned ATotalBufferSize, unsigned numProperties, PGPPropertyItem AAllItems) = 0 ;
	virtual TIGPImage* __fastcall RemovePropertyItem(unsigned APropId) = 0 ;
	virtual TIGPImage* __fastcall SetPropertyItem(const TIGPPropertyItem &AItem) = 0 ;
	virtual unsigned __fastcall GetEncoderParameterListSize(const GUID &clsidEncoder) = 0 ;
	virtual TIGPImage* __fastcall GetEncoderParameterList(const GUID &clsidEncoder, unsigned ASize, PGPEncoderParameters ABuffer) = 0 ;
	virtual _di_IGPGraphics __fastcall GetGraphics() = 0 ;
	__property unsigned Width = {read=GetWidth};
	__property unsigned Height = {read=GetHeight};
	__property int PixelFormat = {read=GetPixelFormat};
	__property TIGPImageType ImageType = {read=GetType};
	__property  ::System::UnicodeString FormatName = {read=GetFormatName};
	__property unsigned FrameDimensionsCount = {read=GetFrameDimensionsCount};
	__property  ::System::DynamicArray<GUID> FrameDimensionsList = {read=GetFrameDimensionsList};
	__property float HorizontalResolution = {read=GetHorizontalResolution};
	__property float VerticalResolution = {read=GetVerticalResolution};
	__property GUID RawFormat = {read=GetRawFormat};
	__property TIGPSizeF PhysicalDimension = {read=GetPhysicalDimension};
	__property unsigned PropertyCount = {read=GetPropertyCount};
	__property  ::System::DynamicArray<unsigned> PropertyIdList = {read=GetPropertyIdList};
	__property _di_IGPGraphics Graphics = {read=GetGraphics};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPImage : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeImage;
	void __fastcall SetNativeImage(void * nativeImage);
	void * __fastcall GetNativeImage();
	__classmethod _di_IGPImage __fastcall CreateGdiPlus(void * nativeImage, bool ADummy);
	
public:
	__classmethod _di_IGPImage __fastcall Create( ::System::WideString AFileName, bool AUseEmbeddedColorManagement = false)/* overload */;
	__classmethod _di_IGPImage __fastcall Create(_di_IStream AStream, bool AUseEmbeddedColorManagement = false)/* overload */;
	__classmethod _di_IGPImage __fastcall Create( ::System::Classes::TStream* AStream, bool AUseEmbeddedColorManagement = false)/* overload */;
	__classmethod _di_IGPImage __fastcall Create( ::System::DynamicArray< ::System::Byte> ABytes, bool AUseEmbeddedColorManagement = false)/* overload */;
	
protected:
	__fastcall TIGPImage(void * nativeImage, bool ADummy);
	
public:
	__fastcall TIGPImage( ::System::WideString AFileName, bool AUseEmbeddedColorManagement)/* overload */;
	__fastcall TIGPImage(_di_IStream AStream, bool AUseEmbeddedColorManagement)/* overload */;
	__fastcall TIGPImage( ::System::Classes::TStream* AStream, bool AUseEmbeddedColorManagement)/* overload */;
	__fastcall TIGPImage( ::System::DynamicArray< ::System::Byte> ABytes, bool AUseEmbeddedColorManagement)/* overload */;
	__fastcall virtual ~TIGPImage();
	__classmethod _di_IGPImage __fastcall FromFile( ::System::WideString AFileName, bool AUseEmbeddedColorManagement = false);
	__classmethod _di_IGPImage __fastcall FromStream(_di_IStream AStream, bool AUseEmbeddedColorManagement = false);
	TIGPImage* __fastcall Clone();
	TIGPImage* __fastcall Save( ::System::WideString AFileName, const GUID &clsidEncoder, PGPEncoderParameters AEncoderParams = (PGPEncoderParameters)(0x0))/* overload */;
	TIGPImage* __fastcall Save(_di_IStream AStream, const GUID &clsidEncoder, PGPEncoderParameters AEncoderParams = (PGPEncoderParameters)(0x0))/* overload */;
	TIGPImage* __fastcall Save( ::System::WideString AFileName, const  ::System::UnicodeString formatName)/* overload */;
	TIGPImage* __fastcall Save(_di_IStream AStream, const  ::System::UnicodeString formatName)/* overload */;
	TIGPImage* __fastcall Save( ::System::Classes::TStream* AStream, const GUID &clsidEncoder, PGPEncoderParameters AEncoderParams = (PGPEncoderParameters)(0x0))/* overload */;
	TIGPImage* __fastcall Save( ::System::Classes::TStream* AStream, const  ::System::UnicodeString formatName = L"bmp")/* overload */;
	TIGPImage* __fastcall SaveAdd(PGPEncoderParameters AEncoderParams)/* overload */;
	TIGPImage* __fastcall SaveAdd(const _di_IGPImage newImage, PGPEncoderParameters AEncoderParams)/* overload */;
	TIGPImageType __fastcall GetType();
	TIGPSizeF __fastcall GetPhysicalDimension();
	TIGPImage* __fastcall GetBounds(/* out */ TIGPRectF &ASrcRect, /* out */ TIGPUnit &ASrcUnit);
	 ::System::DynamicArray< ::System::Byte> __fastcall AsBytes(const  ::System::UnicodeString formatName = L"bmp")/* overload */;
	 ::System::DynamicArray< ::System::Byte> __fastcall AsBytes(const GUID &clsidEncoder, PGPEncoderParameters AEncoderParams = (PGPEncoderParameters)(0x0))/* overload */;
	unsigned __fastcall GetWidth();
	unsigned __fastcall GetHeight();
	float __fastcall GetHorizontalResolution();
	float __fastcall GetVerticalResolution();
	unsigned __fastcall GetFlags();
	GUID __fastcall GetRawFormat();
	 ::System::UnicodeString __fastcall GetFormatName();
	int __fastcall GetPixelFormat();
	int __fastcall GetPaletteSize();
	TIGPImage* __fastcall GetPalette(PGPColorPalette palette, int ASize);
	TIGPImage* __fastcall SetPalette(PGPColorPalette palette);
	TIGPImage* __fastcall GetThumbnailImage(unsigned AThumbWidth, unsigned AThumbHeight, _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc());
	unsigned __fastcall GetFrameDimensionsCount();
	 ::System::DynamicArray<GUID> __fastcall GetFrameDimensionsList();
	unsigned __fastcall GetFrameCount(const GUID &ADimensionID);
	TIGPImage* __fastcall SelectActiveFrame(const GUID &ADimensionID, unsigned frameIndex);
	TIGPImage* __fastcall RotateFlip(TIGPRotateFlipType ARotateFlipType);
	unsigned __fastcall GetPropertyCount();
	 ::System::DynamicArray<unsigned> __fastcall GetPropertyIdList();
	unsigned __fastcall GetPropertyItemSize(unsigned APropId);
	TIGPImage* __fastcall GetPropertyItem(unsigned APropId, unsigned APropSize, PGPPropertyItem ABuffer);
	TIGPImage* __fastcall GetPropertySize(/* out */ unsigned &ATotalBufferSize, /* out */ unsigned &numProperties);
	TIGPImage* __fastcall GetAllPropertyItems(unsigned ATotalBufferSize, unsigned numProperties, PGPPropertyItem AAllItems);
	TIGPImage* __fastcall RemovePropertyItem(unsigned APropId);
	TIGPImage* __fastcall SetPropertyItem(const TIGPPropertyItem &AItem);
	unsigned __fastcall GetEncoderParameterListSize(const GUID &clsidEncoder);
	TIGPImage* __fastcall GetEncoderParameterList(const GUID &clsidEncoder, unsigned ASize, PGPEncoderParameters ABuffer);
	_di_IGPGraphics __fastcall GetGraphics();
private:
	void *__IGPImage;	// IGPImage 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3514B659-EAB2-4A2E-80F5-7A6AD9E2A64B}
	operator _di_IGPImage()
	{
		_di_IGPImage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPImage*(void) { return (IGPImage*)&__IGPImage; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5036255F-F234-477D-8493-582198BF2CBB}") IGPBitmapData  : public  ::System::IInterface 
{
	virtual unsigned __fastcall GetWidth() = 0 ;
	virtual unsigned __fastcall GetHeight() = 0 ;
	virtual int __fastcall GetStride() = 0 ;
	virtual int __fastcall GetPixelFormat() = 0 ;
	virtual void * __fastcall GetScan0() = 0 ;
	__property unsigned Width = {read=GetWidth};
	__property unsigned Height = {read=GetHeight};
	__property int Stride = {read=GetStride};
	__property int PixelFormat = {read=GetPixelFormat};
	__property void * Scan0 = {read=GetScan0};
};

__interface  INTERFACE_UUID("{A242C124-6A5D-4F1F-9AC4-50A93D12E15B}") IGPBitmap  : public IGPImage 
{
	HIDESBASE virtual TIGPBitmap* __fastcall Clone(const TIGPRect &ARect, int AFormat) = 0 /* overload */;
	HIDESBASE virtual TIGPBitmap* __fastcall Clone(int x, int y, int AWidth, int AHeight, int AFormat) = 0 /* overload */;
	virtual TIGPBitmap* __fastcall CloneF(const TIGPRectF &ARect, int AFormat) = 0 /* overload */;
	virtual TIGPBitmap* __fastcall CloneF(float x, float y, float AWidth, float AHeight, int AFormat) = 0 /* overload */;
	virtual _di_IGPBitmapData __fastcall LockBits(const TIGPRect &ARect, TIGPImageLockModes AFlags, int AFormat) = 0 /* overload */;
	virtual _di_IGPBitmapData __fastcall LockBits(TIGPImageLockModes AFlags, int AFormat) = 0 /* overload */;
	virtual  ::System::Uitypes::TAlphaColor __fastcall GetPixel(int x, int y) = 0 ;
	virtual TIGPBitmap* __fastcall SetPixel(int x, int y,  ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual void __fastcall SetPixelProp(int x, int y,  ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual TIGPBitmap* __fastcall SetResolution(float xdpi, float ydpi) = 0 ;
	virtual HBITMAP __fastcall GetHBITMAP( ::System::Uitypes::TAlphaColor colorBackground) = 0 ;
	virtual HICON __fastcall GetHICON() = 0 ;
	__property  ::System::Uitypes::TAlphaColor Pixels[int X][int Y] = {read=GetPixel, write=SetPixelProp/*, default*/};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPBitmap : public TIGPImage
{
	typedef TIGPImage inherited;
	
protected:
	void __fastcall LockBitsInternal(const TIGPRect &ARect, unsigned AFlags, int AFormat, TIGPBitmapDataRecord &AData);
	TIGPBitmap* __fastcall UnlockBits(TIGPBitmapDataRecord &lockedBitmapData);
	__classmethod _di_IGPBitmap __fastcall CreateGdiPlus(void * nativeBitmap, bool ADummy);
	
public:
	__classmethod _di_IGPBitmap __fastcall Create( ::System::WideString AFileName, bool AUseEmbeddedColorManagement = false)/* overload */;
	__classmethod _di_IGPBitmap __fastcall Create(_di_IStream AStream, bool AUseEmbeddedColorManagement = false)/* overload */;
	__classmethod _di_IGPBitmap __fastcall Create(int AWidth, int AHeight, int AStride, int AFormat,  ::System::PByte AScan0)/* overload */;
	__classmethod _di_IGPBitmap __fastcall Create(int AWidth, int AHeight, int AFormat = 0x26200a)/* overload */;
	__classmethod _di_IGPBitmap __fastcall Create(int AWidth, int AHeight, TIGPGraphics* ATarget)/* overload */;
	__classmethod _di_IGPBitmap __fastcall CreateData(tagBITMAPINFO &AGdiBitmapInfo, void * AGdiBitmapData);
	__classmethod _di_IGPBitmap __fastcall CreateHBITMAP(HBITMAP AHbm, HPALETTE AHpal);
	__classmethod _di_IGPBitmap __fastcall CreateHICON(HICON AHicon);
	__classmethod _di_IGPBitmap __fastcall CreateRes(NativeUInt AHInstance,  ::System::WideString ABitmapName);
	
protected:
	__fastcall TIGPBitmap(void * nativeBitmap, bool ADummy);
	
public:
	__fastcall TIGPBitmap( ::System::WideString AFileName, bool AUseEmbeddedColorManagement)/* overload */;
	__fastcall TIGPBitmap(_di_IStream AStream, bool AUseEmbeddedColorManagement)/* overload */;
	__fastcall TIGPBitmap(int AWidth, int AHeight, int AStride, int AFormat,  ::System::PByte AScan0)/* overload */;
	__fastcall TIGPBitmap(int AWidth, int AHeight, int AFormat)/* overload */;
	__fastcall TIGPBitmap(int AWidth, int AHeight, TIGPGraphics* ATarget)/* overload */;
	__fastcall TIGPBitmap(tagBITMAPINFO &AGdiBitmapInfo, void * AGdiBitmapData);
	__fastcall TIGPBitmap(HBITMAP hbm, HPALETTE hpal);
	__fastcall TIGPBitmap(HICON hicon);
	__fastcall TIGPBitmap(NativeUInt AHInstance,  ::System::WideString ABitmapName);
	HIDESBASE TIGPBitmap* __fastcall Clone(const TIGPRect &ARect, int AFormat)/* overload */;
	HIDESBASE TIGPBitmap* __fastcall Clone(int x, int y, int AWidth, int AHeight, int AFormat)/* overload */;
	TIGPBitmap* __fastcall CloneF(const TIGPRectF &ARect, int AFormat)/* overload */;
	TIGPBitmap* __fastcall CloneF(float x, float y, float AWidth, float AHeight, int AFormat)/* overload */;
	_di_IGPBitmapData __fastcall LockBits(const TIGPRect &ARect, TIGPImageLockModes AFlags, int AFormat)/* overload */;
	_di_IGPBitmapData __fastcall LockBits(TIGPImageLockModes AFlags, int AFormat)/* overload */;
	 ::System::Uitypes::TAlphaColor __fastcall GetPixel(int x, int y);
	TIGPBitmap* __fastcall SetPixel(int x, int y,  ::System::Uitypes::TAlphaColor AColor);
	void __fastcall SetPixelProp(int x, int y,  ::System::Uitypes::TAlphaColor AColor);
	TIGPBitmap* __fastcall SetResolution(float xdpi, float ydpi);
	HBITMAP __fastcall GetHBITMAP( ::System::Uitypes::TAlphaColor colorBackground);
	HICON __fastcall GetHICON();
	__classmethod _di_IGPBitmap __fastcall FromBITMAPINFO(tagBITMAPINFO &gdiBitmapInfo, void * AGdiBitmapData);
	__classmethod _di_IGPBitmap __fastcall FromFile( ::System::WideString AFileName, bool AUseEmbeddedColorManagement = false);
	__classmethod _di_IGPBitmap __fastcall FromStream(_di_IStream AStream, bool AUseEmbeddedColorManagement = false);
	__classmethod _di_IGPBitmap __fastcall FromHBITMAP(HBITMAP hbm, HPALETTE hpal);
	__classmethod _di_IGPBitmap __fastcall FromHICON(HICON hicon);
	__classmethod _di_IGPBitmap __fastcall FromResource(NativeUInt hInstance,  ::System::WideString bitmapName);
public:
	/* TIGPImage.CreateObject */ inline __fastcall TIGPBitmap( ::System::Classes::TStream* AStream, bool AUseEmbeddedColorManagement)/* overload */ : TIGPImage(AStream, AUseEmbeddedColorManagement) { }
	/* TIGPImage.CreateObject */ inline __fastcall TIGPBitmap( ::System::DynamicArray< ::System::Byte> ABytes, bool AUseEmbeddedColorManagement)/* overload */ : TIGPImage(ABytes, AUseEmbeddedColorManagement) { }
	/* TIGPImage.Destroy */ inline __fastcall virtual ~TIGPBitmap() { }
	
	/* Hoisted overloads: */
	
public:
	inline _di_IGPImage __fastcall  Create( ::System::Classes::TStream* AStream, bool AUseEmbeddedColorManagement = false){ return TIGPImage::Create(AStream, AUseEmbeddedColorManagement); }
	inline _di_IGPImage __fastcall  Create( ::System::DynamicArray< ::System::Byte> ABytes, bool AUseEmbeddedColorManagement = false){ return TIGPImage::Create(ABytes, AUseEmbeddedColorManagement); }
	
private:
	void *__IGPBitmap;	// IGPBitmap 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A242C124-6A5D-4F1F-9AC4-50A93D12E15B}
	operator _di_IGPBitmap()
	{
		_di_IGPBitmap intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPBitmap*(void) { return (IGPBitmap*)&__IGPBitmap; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C11912FC-5FF7-44D1-A201-ABFDA33184E9}") IGPCustomLineCap  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeCap() = 0 ;
	virtual TIGPCustomLineCap* __fastcall Clone() = 0 ;
	virtual TIGPCustomLineCap* __fastcall SetStrokeCap(TIGPLineCap strokeCap) = 0 ;
	virtual TIGPCustomLineCap* __fastcall SetStrokeCaps(TIGPLineCap startCap, TIGPLineCap endCap) = 0 ;
	virtual TIGPCustomLineCap* __fastcall GetStrokeCaps(/* out */ TIGPLineCap &startCap, /* out */ TIGPLineCap &endCap) = 0 ;
	virtual TIGPCustomLineCap* __fastcall SetStrokeJoin(TIGPLineJoin lineJoin) = 0 ;
	virtual void __fastcall SetStrokeJoinProp(TIGPLineJoin lineJoin) = 0 ;
	virtual TIGPLineJoin __fastcall GetStrokeJoin() = 0 ;
	virtual TIGPCustomLineCap* __fastcall SetBaseCap(TIGPLineCap baseCap) = 0 ;
	virtual void __fastcall SetBaseCapProp(TIGPLineCap baseCap) = 0 ;
	virtual TIGPLineCap __fastcall GetBaseCap() = 0 ;
	virtual TIGPCustomLineCap* __fastcall SetBaseInset(float inset) = 0 ;
	virtual void __fastcall SetBaseInsetProp(float inset) = 0 ;
	virtual float __fastcall GetBaseInset() = 0 ;
	virtual TIGPCustomLineCap* __fastcall SetWidthScale(float widthScale) = 0 ;
	virtual void __fastcall SetWidthScaleProp(float widthScale) = 0 ;
	virtual float __fastcall GetWidthScale() = 0 ;
	__property TIGPLineJoin StrokeJoin = {read=GetStrokeJoin, write=SetStrokeJoinProp};
	__property TIGPLineCap BaseCap = {read=GetBaseCap, write=SetBaseCapProp};
	__property float BaseInset = {read=GetBaseInset, write=SetBaseInsetProp};
	__property float WidthScale = {read=GetWidthScale, write=SetWidthScaleProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPCustomLineCap : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeCap;
	void * __fastcall GetNativeCap();
	void __fastcall SetNativeCap(void * nativeCap);
	__classmethod _di_IGPCustomLineCap __fastcall CreateGdiPlus(void * nativeCap, bool ADummy);
	
public:
	__classmethod _di_IGPCustomLineCap __fastcall Create()/* overload */;
	__classmethod _di_IGPCustomLineCap __fastcall Create(const _di_IGPGraphicsPath fillPath, const _di_IGPGraphicsPath strokePath, TIGPLineCap baseCap = (TIGPLineCap)(0x0), float baseInset = 0.000000E+00f)/* overload */;
	
protected:
	__fastcall TIGPCustomLineCap(void * nativeCap, bool ADummy);
	
public:
	__fastcall TIGPCustomLineCap()/* overload */;
	__fastcall TIGPCustomLineCap(const _di_IGPGraphicsPath fillPath, const _di_IGPGraphicsPath strokePath, TIGPLineCap baseCap, float baseInset)/* overload */;
	__fastcall virtual ~TIGPCustomLineCap();
	TIGPCustomLineCap* __fastcall Clone();
	TIGPCustomLineCap* __fastcall SetStrokeCap(TIGPLineCap strokeCap);
	TIGPCustomLineCap* __fastcall SetStrokeCaps(TIGPLineCap startCap, TIGPLineCap endCap);
	TIGPCustomLineCap* __fastcall GetStrokeCaps(/* out */ TIGPLineCap &startCap, /* out */ TIGPLineCap &endCap);
	TIGPCustomLineCap* __fastcall SetStrokeJoin(TIGPLineJoin lineJoin);
	void __fastcall SetStrokeJoinProp(TIGPLineJoin lineJoin);
	TIGPLineJoin __fastcall GetStrokeJoin();
	TIGPCustomLineCap* __fastcall SetBaseCap(TIGPLineCap baseCap);
	void __fastcall SetBaseCapProp(TIGPLineCap baseCap);
	TIGPLineCap __fastcall GetBaseCap();
	TIGPCustomLineCap* __fastcall SetBaseInset(float inset);
	void __fastcall SetBaseInsetProp(float inset);
	float __fastcall GetBaseInset();
	TIGPCustomLineCap* __fastcall SetWidthScale(float widthScale);
	void __fastcall SetWidthScaleProp(float widthScale);
	float __fastcall GetWidthScale();
private:
	void *__IGPCustomLineCap;	// IGPCustomLineCap 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C11912FC-5FF7-44D1-A201-ABFDA33184E9}
	operator _di_IGPCustomLineCap()
	{
		_di_IGPCustomLineCap intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPCustomLineCap*(void) { return (IGPCustomLineCap*)&__IGPCustomLineCap; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{96A926BE-354E-4A88-B4B3-0DB3A648D181}") IGPCachedBitmap  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeCachedBitmap() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPCachedBitmap : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeCachedBitmap;
	void * __fastcall GetNativeCachedBitmap();
	
public:
	__classmethod _di_IGPCachedBitmap __fastcall Create(const _di_IGPBitmap bitmap, const _di_IGPGraphics AGraphics);
	__fastcall TIGPCachedBitmap(const _di_IGPBitmap bitmap, const _di_IGPGraphics AGraphics);
	__fastcall virtual ~TIGPCachedBitmap();
public:
	/* TObject.Create */ inline __fastcall TIGPCachedBitmap() : TIGPBase() { }
	
private:
	void *__IGPCachedBitmap;	// IGPCachedBitmap 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {96A926BE-354E-4A88-B4B3-0DB3A648D181}
	operator _di_IGPCachedBitmap()
	{
		_di_IGPCachedBitmap intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPCachedBitmap*(void) { return (IGPCachedBitmap*)&__IGPCachedBitmap; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{330BD1E0-00B5-4399-BAB7-990DE03CC7F4}") IGPImageAttributes  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeImageAttr() = 0 ;
	virtual TIGPImageAttributes* __fastcall Clone() = 0 ;
	virtual TIGPImageAttributes* __fastcall SetToIdentity(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall Reset(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetColorMatrix(const TIGPColorMatrix &colorMatrix, TIGPColorMatrixFlags mode = (TIGPColorMatrixFlags)(0x0), TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearColorMatrix(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetColorMatrices(const TIGPColorMatrix &colorMatrix, const TIGPColorMatrix &grayMatrix, TIGPColorMatrixFlags mode = (TIGPColorMatrixFlags)(0x0), TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearColorMatrices(TIGPColorAdjustType Type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetThreshold(float threshold, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearThreshold(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetGamma(float gamma, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearGamma(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetNoOp(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearNoOp(TIGPColorAdjustType Type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetColorKey( ::System::Uitypes::TAlphaColor colorLow,  ::System::Uitypes::TAlphaColor colorHigh, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearColorKey(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetOutputChannel(TIGPColorChannelFlags channelFlags, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearOutputChannel(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetOutputChannelColorProfile( ::System::WideString colorProfileFilename, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearOutputChannelColorProfile(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetRemapTable(unsigned mapSize, PGPColorMap map, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearRemapTable(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0)) = 0 ;
	virtual TIGPImageAttributes* __fastcall SetBrushRemapTable(unsigned mapSize, PGPColorMap map) = 0 ;
	virtual TIGPImageAttributes* __fastcall ClearBrushRemapTable() = 0 ;
	virtual TIGPImageAttributes* __fastcall SetWrapMode(TIGPWrapMode AWrap,  ::System::Uitypes::TAlphaColor AColor = ( ::System::Uitypes::TAlphaColor)(0xff000000), bool AClamp = false) = 0 ;
	virtual TIGPImageAttributes* __fastcall GetAdjustedPalette(PGPColorPalette colorPalette, TIGPColorAdjustType colorAdjustType) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPImageAttributes : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeImageAttr;
	void * __fastcall GetNativeImageAttr();
	void __fastcall SetNativeImageAttr(void * ANativeImageAttr);
	__classmethod _di_IGPImageAttributes __fastcall CreateGdiPlus(void * AImageAttr, bool ADummy);
	
public:
	__classmethod _di_IGPImageAttributes __fastcall Create();
	
protected:
	__fastcall TIGPImageAttributes(void * AImageAttr, bool ADummy);
	
public:
	__fastcall TIGPImageAttributes();
	__fastcall virtual ~TIGPImageAttributes();
	TIGPImageAttributes* __fastcall Clone();
	TIGPImageAttributes* __fastcall SetToIdentity(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall Reset(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetColorMatrix(const TIGPColorMatrix &colorMatrix, TIGPColorMatrixFlags mode = (TIGPColorMatrixFlags)(0x0), TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearColorMatrix(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetColorMatrices(const TIGPColorMatrix &colorMatrix, const TIGPColorMatrix &grayMatrix, TIGPColorMatrixFlags mode = (TIGPColorMatrixFlags)(0x0), TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearColorMatrices(TIGPColorAdjustType Type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetThreshold(float threshold, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearThreshold(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetGamma(float gamma, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearGamma(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetNoOp(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearNoOp(TIGPColorAdjustType Type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetColorKey( ::System::Uitypes::TAlphaColor colorLow,  ::System::Uitypes::TAlphaColor colorHigh, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearColorKey(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetOutputChannel(TIGPColorChannelFlags channelFlags, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearOutputChannel(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetOutputChannelColorProfile( ::System::WideString colorProfileFilename, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearOutputChannelColorProfile(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetRemapTable(unsigned mapSize, PGPColorMap map, TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall ClearRemapTable(TIGPColorAdjustType type_ = (TIGPColorAdjustType)(0x0));
	TIGPImageAttributes* __fastcall SetBrushRemapTable(unsigned mapSize, PGPColorMap map);
	TIGPImageAttributes* __fastcall ClearBrushRemapTable();
	TIGPImageAttributes* __fastcall SetWrapMode(TIGPWrapMode AWrap,  ::System::Uitypes::TAlphaColor AColor = ( ::System::Uitypes::TAlphaColor)(0xff000000), bool AClamp = false);
	TIGPImageAttributes* __fastcall GetAdjustedPalette(PGPColorPalette AColorPalette, TIGPColorAdjustType AColorAdjustType);
private:
	void *__IGPImageAttributes;	// IGPImageAttributes 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {330BD1E0-00B5-4399-BAB7-990DE03CC7F4}
	operator _di_IGPImageAttributes()
	{
		_di_IGPImageAttributes intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPImageAttributes*(void) { return (IGPImageAttributes*)&__IGPImageAttributes; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIGPMatrixParams
{
public:
	float m11;
	float m12;
	float m21;
	float m22;
	float dx;
	float dy;
};
#pragma pack(pop)


__interface  INTERFACE_UUID("{EBD3DFC3-7740-496E-B074-2AD588B11137}") IGPMatrix  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeMatrix() = 0 ;
	virtual TIGPMatrix* __fastcall Clone() = 0 ;
	virtual TIGPMatrixParams __fastcall GetElements() = 0 ;
	virtual TIGPMatrix* __fastcall SetElements(float m11, float m12, float m21, float m22, float dx, float dy) = 0 /* overload */;
	virtual TIGPMatrix* __fastcall SetElements(const TIGPMatrixParams &AElements) = 0 /* overload */;
	virtual void __fastcall SetElementsProp(const TIGPMatrixParams &AElements) = 0 ;
	virtual float __fastcall OffsetX() = 0 ;
	virtual float __fastcall OffsetY() = 0 ;
	virtual TIGPMatrix* __fastcall Reset() = 0 ;
	virtual TIGPMatrix* __fastcall Multiply(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPMatrix* __fastcall Translate(float offsetX, float offsetY, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPMatrix* __fastcall Scale(float scaleX, float scaleY, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPMatrix* __fastcall Rotate(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPMatrix* __fastcall RotateAt(float AAngle, const  ::System::Types::TPointF &center, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPMatrix* __fastcall Shear(float shearX, float shearY, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPMatrix* __fastcall Invert() = 0 ;
	virtual TIGPMatrix* __fastcall TransformPointF( ::System::Types::TPointF &APoint) = 0 ;
	virtual TIGPMatrix* __fastcall TransformPoint( ::System::Types::TPoint &APoint) = 0 ;
	virtual TIGPMatrix* __fastcall TransformPointsF( ::System::Types::TPointF *pts, const int pts_High) = 0 ;
	virtual TIGPMatrix* __fastcall TransformPoints( ::System::Types::TPoint *pts, const int pts_High) = 0 ;
	virtual TIGPMatrix* __fastcall TransformVectorsF( ::System::Types::TPointF *pts, const int pts_High) = 0 ;
	virtual TIGPMatrix* __fastcall TransformVectors( ::System::Types::TPoint *pts, const int pts_High) = 0 ;
	virtual bool __fastcall IsInvertible() = 0 ;
	virtual bool __fastcall IsIdentity() = 0 ;
	virtual bool __fastcall Equals(const _di_IGPMatrix AMatrix) = 0 ;
	__property TIGPMatrixParams Elements = {read=GetElements, write=SetElementsProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPMatrix : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeMatrix;
	void __fastcall SetNativeMatrix(void * ANativeMatrix);
	void * __fastcall GetNativeMatrix();
	__classmethod _di_IGPMatrix __fastcall CreateGdiPlus(void * ANativeMatrix, bool ADummy);
	
public:
	__classmethod _di_IGPMatrix __fastcall Create()/* overload */;
	__classmethod _di_IGPMatrix __fastcall Create(float m11, float m12, float m21, float m22, float dx, float dy)/* overload */;
	__classmethod _di_IGPMatrix __fastcall Create(const TIGPRectF &ARect, const  ::System::Types::TPointF &dstplg)/* overload */;
	__classmethod _di_IGPMatrix __fastcall Create(const TIGPRect &ARect, const  ::System::Types::TPoint &dstplg)/* overload */;
	
protected:
	__fastcall TIGPMatrix(void * ANativeMatrix, bool ADummy);
	
public:
	__fastcall TIGPMatrix()/* overload */;
	__fastcall TIGPMatrix(float m11, float m12, float m21, float m22, float dx, float dy)/* overload */;
	__fastcall TIGPMatrix(const TIGPRectF &ARect, const  ::System::Types::TPointF &dstplg)/* overload */;
	__fastcall TIGPMatrix(const TIGPRect &ARect, const  ::System::Types::TPoint &dstplg)/* overload */;
	__fastcall virtual ~TIGPMatrix();
	TIGPMatrix* __fastcall Clone();
	TIGPMatrixParams __fastcall GetElements();
	TIGPMatrix* __fastcall SetElements(float m11, float m12, float m21, float m22, float dx, float dy)/* overload */;
	TIGPMatrix* __fastcall SetElements(const TIGPMatrixParams &AElements)/* overload */;
	void __fastcall SetElementsProp(const TIGPMatrixParams &AElements);
	float __fastcall OffsetX();
	float __fastcall OffsetY();
	TIGPMatrix* __fastcall Reset();
	TIGPMatrix* __fastcall Multiply(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPMatrix* __fastcall Translate(float offsetX, float offsetY, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPMatrix* __fastcall Scale(float scaleX, float scaleY, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPMatrix* __fastcall Rotate(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPMatrix* __fastcall RotateAt(float AAngle, const  ::System::Types::TPointF &center, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPMatrix* __fastcall Shear(float shearX, float shearY, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPMatrix* __fastcall Invert();
	TIGPMatrix* __fastcall TransformPointF( ::System::Types::TPointF &APoint);
	TIGPMatrix* __fastcall TransformPoint( ::System::Types::TPoint &APoint);
	TIGPMatrix* __fastcall TransformPointsF( ::System::Types::TPointF *pts, const int pts_High);
	TIGPMatrix* __fastcall TransformPoints( ::System::Types::TPoint *pts, const int pts_High);
	TIGPMatrix* __fastcall TransformVectorsF( ::System::Types::TPointF *pts, const int pts_High);
	TIGPMatrix* __fastcall TransformVectors( ::System::Types::TPoint *pts, const int pts_High);
	bool __fastcall IsInvertible();
	bool __fastcall IsIdentity();
	bool __fastcall EqualsMatrix(const _di_IGPMatrix AMatrix);
private:
	void *__IGPMatrix;	// IGPMatrix 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EBD3DFC3-7740-496E-B074-2AD588B11137}
	operator _di_IGPMatrix()
	{
		_di_IGPMatrix intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPMatrix*(void) { return (IGPMatrix*)&__IGPMatrix; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C43901CD-CF57-485E-9050-F28AB12A63CE}") IGPMatrixStore  : public  ::System::IInterface 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPMatrixStore : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	_di_IGPTransformable FTransformable;
	_di_IGPMatrix FMatrix;
	
public:
	__classmethod _di_IGPMatrixStore __fastcall Create(const _di_IGPTransformable ATransformable);
	__fastcall TIGPMatrixStore(const _di_IGPTransformable ATransformable);
	__fastcall virtual ~TIGPMatrixStore();
public:
	/* TObject.Create */ inline __fastcall TIGPMatrixStore() :  ::System::TInterfacedObject() { }
	
private:
	void *__IGPMatrixStore;	// IGPMatrixStore 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C43901CD-CF57-485E-9050-F28AB12A63CE}
	operator _di_IGPMatrixStore()
	{
		_di_IGPMatrixStore intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPMatrixStore*(void) { return (IGPMatrixStore*)&__IGPMatrixStore; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C5A51119-107A-4EE4-8989-83659A5149A1}") IGPBrush  : public  ::System::IInterface 
{
	virtual TIGPBrush* __fastcall Clone() = 0 ;
	virtual TIGPBrushType __fastcall GetType() = 0 ;
	virtual void * __fastcall GetNativeBrush() = 0 ;
	__property TIGPBrushType BrushType = {read=GetType};
};

__interface  INTERFACE_UUID("{774EE93A-BFAD-41B2-B68A-D40E975711EA}") IGPWrapBrush  : public IGPBrush 
{
	virtual TIGPWrapMode __fastcall GetWrapMode() = 0 ;
	virtual void __fastcall SetWrapModeProp(TIGPWrapMode AWrapMode) = 0 ;
	virtual void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix) = 0 ;
	virtual _di_IGPMatrix __fastcall GetTransform() = 0 ;
	__property TIGPWrapMode WrapMode = {read=GetWrapMode, write=SetWrapModeProp};
	__property _di_IGPMatrix Transform = {read=GetTransform, write=SetTransformProp};
};

__interface  INTERFACE_UUID("{3DBE75FD-74EF-48CF-8579-69B9EF730DB1}") IGPBlendBrush  : public IGPWrapBrush 
{
	virtual int __fastcall GetBlendCount() = 0 ;
	virtual  ::System::DynamicArray<TIGPBlend> __fastcall GetBlend() = 0 ;
	virtual void __fastcall SetBlendProp(const  ::System::DynamicArray<TIGPBlend> blendFactors) = 0 ;
	virtual int __fastcall GetInterpolationColorCount() = 0 ;
	virtual void __fastcall SetInterpolationColorsProp( ::System::DynamicArray<TIGPInterpolationColor> Colors) = 0 ;
	virtual  ::System::DynamicArray<TIGPInterpolationColor> __fastcall GetInterpolationColors() = 0 ;
	virtual void __fastcall SetGammaCorrectionProp(bool AUseGammaCorrection) = 0 ;
	virtual bool __fastcall GetGammaCorrection() = 0 ;
	__property  ::System::DynamicArray<TIGPBlend> Blend = {read=GetBlend, write=SetBlendProp};
	__property int BlendCount = {read=GetBlendCount};
	__property  ::System::DynamicArray<TIGPInterpolationColor> InterpolationColors = {read=GetInterpolationColors, write=SetInterpolationColorsProp};
	__property int InterpolationColorCount = {read=GetInterpolationColorCount};
	__property bool GammaCorrection = {read=GetGammaCorrection, write=SetGammaCorrectionProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPBrush : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeBrush;
	void __fastcall SetNativeBrush(void * nativeBrush);
	void * __fastcall GetNativeBrush();
	__classmethod _di_IGPBrush __fastcall Create(void * nativeBrush)/* overload */;
	
public:
	__classmethod _di_IGPBrush __fastcall Create()/* overload */;
	
protected:
	__fastcall TIGPBrush(void * nativeBrush)/* overload */;
	
public:
	__fastcall TIGPBrush()/* overload */;
	__fastcall virtual ~TIGPBrush();
	virtual TIGPBrush* __fastcall Clone();
	TIGPBrushType __fastcall GetType();
private:
	void *__IGPBrush;	// IGPBrush 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C5A51119-107A-4EE4-8989-83659A5149A1}
	operator _di_IGPBrush()
	{
		_di_IGPBrush intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPBrush*(void) { return (IGPBrush*)&__IGPBrush; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{388E717D-5FFA-4262-9B07-0A72FF8CFEC8}") IGPSolidBrush  : public IGPBrush 
{
	virtual  ::System::Uitypes::TAlphaColor __fastcall GetColor() = 0 ;
	virtual TIGPSolidBrush* __fastcall SetColor( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual void __fastcall SetColorProp( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	__property  ::System::Uitypes::TAlphaColor Color = {read=GetColor, write=SetColorProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPSolidBrush : public TIGPBrush
{
	typedef TIGPBrush inherited;
	
protected:
	 ::System::Uitypes::TAlphaColor __fastcall GetColor();
	TIGPSolidBrush* __fastcall SetColor( ::System::Uitypes::TAlphaColor AColor);
	void __fastcall SetColorProp( ::System::Uitypes::TAlphaColor AColor);
	
public:
	__classmethod _di_IGPSolidBrush __fastcall Create( ::System::Uitypes::TAlphaColor AColor)/* overload */;
	__classmethod _di_IGPSolidBrush __fastcall Create()/* overload */;
	__fastcall TIGPSolidBrush( ::System::Uitypes::TAlphaColor AColor)/* overload */;
	__fastcall TIGPSolidBrush()/* overload */;
protected:
	/* TIGPBrush.CreateObject */ inline __fastcall TIGPSolidBrush(void * nativeBrush)/* overload */ : TIGPBrush(nativeBrush) { }
	
public:
	/* TIGPBrush.Destroy */ inline __fastcall virtual ~TIGPSolidBrush() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_IGPBrush __fastcall  Create(void * nativeBrush){ return TIGPBrush::Create(nativeBrush); }
	
private:
	void *__IGPSolidBrush;	// IGPSolidBrush 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {388E717D-5FFA-4262-9B07-0A72FF8CFEC8}
	operator _di_IGPSolidBrush()
	{
		_di_IGPSolidBrush intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPSolidBrush*(void) { return (IGPSolidBrush*)&__IGPSolidBrush; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9EEFBE7F-9DA0-47D4-B426-75A0047CF6BE}") IGPTransformable  : public  ::System::IInterface 
{
	virtual _di_IGPMatrix __fastcall GetTransform() = 0 ;
	virtual _di_IGPTransformable __fastcall SetTransform(const _di_IGPMatrix AMatrix) = 0 ;
	virtual void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix) = 0 ;
	virtual _di_IGPTransformable __fastcall ResetTransform() = 0 ;
	virtual _di_IGPTransformable __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual _di_IGPTransformable __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual _di_IGPTransformable __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual _di_IGPTransformable __fastcall ScaleTransformXY(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual _di_IGPTransformable __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	__property _di_IGPMatrix Transform = {read=GetTransform, write=SetTransformProp};
};

__interface  INTERFACE_UUID("{F0DE6DAC-4D8D-408D-8D1A-CCCF5A70FF7A}") IGPTextureBrush  : public IGPWrapBrush 
{
	virtual TIGPTextureBrush* __fastcall SetTransform(const _di_IGPMatrix AMatrix) = 0 ;
	virtual TIGPTextureBrush* __fastcall ResetTransform() = 0 ;
	virtual TIGPTextureBrush* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPTextureBrush* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPTextureBrush* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPTextureBrush* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPTextureBrush* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPTextureBrush* __fastcall SetWrapMode(TIGPWrapMode AWrapMode) = 0 ;
	virtual _di_IGPImage __fastcall GetImage() = 0 ;
	virtual TIGPTextureBrush* __fastcall SetImage(const _di_IGPImage AImage) = 0 ;
	virtual void __fastcall SetImageProp(const _di_IGPImage AImage) = 0 ;
	__property _di_IGPImage Image = {read=GetImage, write=SetImageProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPTextureBrush : public TIGPBrush
{
	typedef TIGPBrush inherited;
	
public:
	__classmethod _di_IGPTextureBrush __fastcall Create(const _di_IGPImage AImage, TIGPWrapMode AWrapMode = (TIGPWrapMode)(0x0))/* overload */;
	__classmethod _di_IGPTextureBrush __fastcall Create(const _di_IGPImage AImage, TIGPWrapMode AWrapMode, const TIGPRectF &ADstRect)/* overload */;
	__classmethod _di_IGPTextureBrush __fastcall Create(const _di_IGPImage AImage, const TIGPRectF &ADstRect, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	__classmethod _di_IGPTextureBrush __fastcall Create(const _di_IGPImage AImage, const TIGPRect &ADstRect, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	__classmethod _di_IGPTextureBrush __fastcall Create(const _di_IGPImage AImage, TIGPWrapMode AWrapMode, const TIGPRect &ADstRect)/* overload */;
	__classmethod _di_IGPTextureBrush __fastcall Create(const _di_IGPImage AImage, TIGPWrapMode AWrapMode, float ADstX, float ADstY, float ADstWidth, float ADstHeight)/* overload */;
	__classmethod _di_IGPTextureBrush __fastcall Create(const _di_IGPImage AImage, TIGPWrapMode AWrapMode, int ADstX, int ADstY, int ADstWidth, int ADstHeight)/* overload */;
	__classmethod _di_IGPTextureBrush __fastcall Create()/* overload */;
	__fastcall TIGPTextureBrush(const _di_IGPImage AImage, TIGPWrapMode AWrapMode)/* overload */;
	__fastcall TIGPTextureBrush(const _di_IGPImage AImage, TIGPWrapMode AWrapMode, const TIGPRectF &ADstRect)/* overload */;
	__fastcall TIGPTextureBrush(const _di_IGPImage AImage, const TIGPRectF &ADstRect, const _di_IGPImageAttributes AImageAttributes)/* overload */;
	__fastcall TIGPTextureBrush(const _di_IGPImage AImage, const TIGPRect &ADstRect, const _di_IGPImageAttributes AImageAttributes)/* overload */;
	__fastcall TIGPTextureBrush(const _di_IGPImage AImage, TIGPWrapMode AWrapMode, const TIGPRect &ADstRect)/* overload */;
	__fastcall TIGPTextureBrush(const _di_IGPImage AImage, TIGPWrapMode AWrapMode, float ADstX, float ADstY, float ADstWidth, float ADstHeight)/* overload */;
	__fastcall TIGPTextureBrush(const _di_IGPImage AImage, TIGPWrapMode AWrapMode, int ADstX, int ADstY, int ADstWidth, int ADstHeight)/* overload */;
	__fastcall TIGPTextureBrush()/* overload */;
	
protected:
	_di_IGPTransformable __fastcall SetTransformT(const _di_IGPMatrix AMatrix);
	_di_IGPTransformable __fastcall ResetTransformT();
	_di_IGPTransformable __fastcall MultiplyTransformT(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall TranslateTransformT(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformT(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformXYT(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall RotateTransformT(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	
public:
	TIGPTextureBrush* __fastcall SetTransform(const _di_IGPMatrix AMatrix);
	void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix);
	_di_IGPMatrix __fastcall GetTransform();
	TIGPTextureBrush* __fastcall ResetTransform();
	TIGPTextureBrush* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPTextureBrush* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPTextureBrush* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPTextureBrush* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPTextureBrush* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPWrapMode __fastcall GetWrapMode();
	TIGPTextureBrush* __fastcall SetWrapMode(TIGPWrapMode AWrapMode);
	void __fastcall SetWrapModeProp(TIGPWrapMode AWrapMode);
	_di_IGPImage __fastcall GetImage();
	TIGPTextureBrush* __fastcall SetImage(const _di_IGPImage AImage);
	void __fastcall SetImageProp(const _di_IGPImage AImage);
protected:
	/* TIGPBrush.CreateObject */ inline __fastcall TIGPTextureBrush(void * nativeBrush)/* overload */ : TIGPBrush(nativeBrush) { }
	
public:
	/* TIGPBrush.Destroy */ inline __fastcall virtual ~TIGPTextureBrush() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_IGPBrush __fastcall  Create(void * nativeBrush){ return TIGPBrush::Create(nativeBrush); }
	
private:
	void *__IGPTransformable;	// IGPTransformable 
	void *__IGPTextureBrush;	// IGPTextureBrush 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9EEFBE7F-9DA0-47D4-B426-75A0047CF6BE}
	operator _di_IGPTransformable()
	{
		_di_IGPTransformable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPTransformable*(void) { return (IGPTransformable*)&__IGPTransformable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F0DE6DAC-4D8D-408D-8D1A-CCCF5A70FF7A}
	operator _di_IGPTextureBrush()
	{
		_di_IGPTextureBrush intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPTextureBrush*(void) { return (IGPTextureBrush*)&__IGPTextureBrush; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FD7C48BB-0DD6-4F12-8786-940A0308A4C7}") IGPLinearGradientBrush  : public IGPBlendBrush 
{
	virtual TIGPLinearGradientBrush* __fastcall SetLinearColors( ::System::Uitypes::TAlphaColor color1,  ::System::Uitypes::TAlphaColor color2) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall GetLinearColors(/* out */  ::System::Uitypes::TAlphaColor &color1, /* out */  ::System::Uitypes::TAlphaColor &color2) = 0 ;
	virtual TIGPRectF __fastcall GetRectangleF() = 0 ;
	virtual TIGPRect __fastcall GetRectangle() = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall SetGammaCorrection(bool AUseGammaCorrection) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall SetBlendArrays(const float *blendFactors, const int blendFactors_High, const float *blendPositions, const int blendPositions_High) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall SetBlend(const TIGPBlend *blendFactors, const int blendFactors_High) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall SetInterpolationColors(const TIGPInterpolationColor *Colors, const int Colors_High) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall SetInterpolationColorArrays(const  ::System::Uitypes::TAlphaColor *APresetColors, const int APresetColors_High, const float *blendPositions, const int blendPositions_High) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall SetBlendBellShape(float focus, float scale = 1.000000E+00f) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall SetBlendTriangularShape(float focus, float scale = 1.000000E+00f) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall SetTransform(const _di_IGPMatrix AMatrix) = 0 /* overload */;
	virtual TIGPLinearGradientBrush* __fastcall ResetTransform() = 0 /* overload */;
	virtual TIGPLinearGradientBrush* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPLinearGradientBrush* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPLinearGradientBrush* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPLinearGradientBrush* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPLinearGradientBrush* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPLinearGradientBrush* __fastcall SetWrapMode(TIGPWrapMode AWrapMode) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPLinearGradientBrush : public TIGPBrush
{
	typedef TIGPBrush inherited;
	
public:
	__classmethod _di_IGPLinearGradientBrush __fastcall Create()/* overload */;
	__classmethod _di_IGPLinearGradientBrush __fastcall Create(const  ::System::Types::TPointF &APoint1, const  ::System::Types::TPointF &APoint2,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2)/* overload */;
	__classmethod _di_IGPLinearGradientBrush __fastcall Create(const  ::System::Types::TPoint &APoint1, const  ::System::Types::TPoint &APoint2,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2)/* overload */;
	__classmethod _di_IGPLinearGradientBrush __fastcall Create(const TIGPRectF &ARect,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2, TIGPLinearGradientMode AMode)/* overload */;
	__classmethod _di_IGPLinearGradientBrush __fastcall Create(const TIGPRect &ARect,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2, TIGPLinearGradientMode AMode)/* overload */;
	__classmethod _di_IGPLinearGradientBrush __fastcall Create(const TIGPRectF &ARect,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2, float AAngle, bool AIsAngleScalable = false)/* overload */;
	__classmethod _di_IGPLinearGradientBrush __fastcall Create(const TIGPRect &ARect,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2, float AAngle, bool AIsAngleScalable = false)/* overload */;
	__fastcall TIGPLinearGradientBrush()/* overload */;
	__fastcall TIGPLinearGradientBrush(const  ::System::Types::TPointF &APoint1, const  ::System::Types::TPointF &APoint2,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2)/* overload */;
	__fastcall TIGPLinearGradientBrush(const  ::System::Types::TPoint &APoint1, const  ::System::Types::TPoint &APoint2,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2)/* overload */;
	__fastcall TIGPLinearGradientBrush(const TIGPRectF &ARect,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2, TIGPLinearGradientMode AMode)/* overload */;
	__fastcall TIGPLinearGradientBrush(const TIGPRect &ARect,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2, TIGPLinearGradientMode AMode)/* overload */;
	__fastcall TIGPLinearGradientBrush(const TIGPRectF &ARect,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2, float AAngle, bool AIsAngleScalable)/* overload */;
	__fastcall TIGPLinearGradientBrush(const TIGPRect &ARect,  ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2, float AAngle, bool AIsAngleScalable)/* overload */;
	TIGPLinearGradientBrush* __fastcall SetLinearColors( ::System::Uitypes::TAlphaColor AColor1,  ::System::Uitypes::TAlphaColor AColor2);
	TIGPLinearGradientBrush* __fastcall GetLinearColors(/* out */  ::System::Uitypes::TAlphaColor &AColor1, /* out */  ::System::Uitypes::TAlphaColor &AColor2);
	TIGPRectF __fastcall GetRectangleF();
	TIGPRect __fastcall GetRectangle();
	void __fastcall SetGammaCorrectionProp(bool AUseGammaCorrection);
	TIGPLinearGradientBrush* __fastcall SetGammaCorrection(bool AUseGammaCorrection);
	bool __fastcall GetGammaCorrection();
	int __fastcall GetBlendCount();
	 ::System::DynamicArray<TIGPBlend> __fastcall GetBlend();
	TIGPLinearGradientBrush* __fastcall SetBlendArrays(const float *ABlendFactors, const int ABlendFactors_High, const float *ABlendPositions, const int ABlendPositions_High);
	TIGPLinearGradientBrush* __fastcall SetBlend(const TIGPBlend *ABlendFactors, const int ABlendFactors_High);
	void __fastcall SetBlendProp(const  ::System::DynamicArray<TIGPBlend> ABlendFactors);
	int __fastcall GetInterpolationColorCount();
	void __fastcall SetInterpolationColorsProp( ::System::DynamicArray<TIGPInterpolationColor> AColors);
	TIGPLinearGradientBrush* __fastcall SetInterpolationColors(const TIGPInterpolationColor *AColors, const int AColors_High);
	TIGPLinearGradientBrush* __fastcall SetInterpolationColorArrays(const  ::System::Uitypes::TAlphaColor *APresetColors, const int APresetColors_High, const float *ABlendPositions, const int ABlendPositions_High);
	 ::System::DynamicArray<TIGPInterpolationColor> __fastcall GetInterpolationColors();
	TIGPLinearGradientBrush* __fastcall SetBlendBellShape(float AFocus, float AScale = 1.000000E+00f);
	TIGPLinearGradientBrush* __fastcall SetBlendTriangularShape(float AFocus, float AScale = 1.000000E+00f);
	TIGPLinearGradientBrush* __fastcall SetTransform(const _di_IGPMatrix AMatrix);
	void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix);
	_di_IGPMatrix __fastcall GetTransform();
	TIGPLinearGradientBrush* __fastcall ResetTransform();
	TIGPLinearGradientBrush* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPLinearGradientBrush* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPLinearGradientBrush* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPLinearGradientBrush* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPLinearGradientBrush* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	void __fastcall SetWrapModeProp(TIGPWrapMode AWrapMode);
	TIGPLinearGradientBrush* __fastcall SetWrapMode(TIGPWrapMode AWrapMode);
	TIGPWrapMode __fastcall GetWrapMode();
	
protected:
	_di_IGPTransformable __fastcall SetTransformT(const _di_IGPMatrix AMatrix);
	_di_IGPTransformable __fastcall ResetTransformT();
	_di_IGPTransformable __fastcall MultiplyTransformT(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall TranslateTransformT(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformT(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformXYT(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall RotateTransformT(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
protected:
	/* TIGPBrush.CreateObject */ inline __fastcall TIGPLinearGradientBrush(void * nativeBrush)/* overload */ : TIGPBrush(nativeBrush) { }
	
public:
	/* TIGPBrush.Destroy */ inline __fastcall virtual ~TIGPLinearGradientBrush() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_IGPBrush __fastcall  Create(void * nativeBrush){ return TIGPBrush::Create(nativeBrush); }
	
private:
	void *__IGPTransformable;	// IGPTransformable 
	void *__IGPLinearGradientBrush;	// IGPLinearGradientBrush 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9EEFBE7F-9DA0-47D4-B426-75A0047CF6BE}
	operator _di_IGPTransformable()
	{
		_di_IGPTransformable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPTransformable*(void) { return (IGPTransformable*)&__IGPTransformable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FD7C48BB-0DD6-4F12-8786-940A0308A4C7}
	operator _di_IGPLinearGradientBrush()
	{
		_di_IGPLinearGradientBrush intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPLinearGradientBrush*(void) { return (IGPLinearGradientBrush*)&__IGPLinearGradientBrush; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{302E268C-E3B3-421F-8EDD-341FEA9E21D9}") IGPHatchBrush  : public IGPBrush 
{
	virtual void __fastcall SetHatchStyleProp(TIGPHatchStyle AStyle) = 0 ;
	virtual TIGPHatchBrush* __fastcall SetHatchStyle(TIGPHatchStyle AStyle) = 0 ;
	virtual TIGPHatchStyle __fastcall GetHatchStyle() = 0 ;
	virtual void __fastcall SetForegroundColorProp( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual TIGPHatchBrush* __fastcall SetForegroundColor( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual  ::System::Uitypes::TAlphaColor __fastcall GetForegroundColor() = 0 ;
	virtual void __fastcall SetBackgroundColorProp( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual TIGPHatchBrush* __fastcall SetBackgroundColor( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual  ::System::Uitypes::TAlphaColor __fastcall GetBackgroundColor() = 0 ;
	__property TIGPHatchStyle HatchStyle = {read=GetHatchStyle, write=SetHatchStyleProp};
	__property  ::System::Uitypes::TAlphaColor ForegroundColor = {read=GetForegroundColor, write=SetForegroundColorProp};
	__property  ::System::Uitypes::TAlphaColor BackgroundColor = {read=GetBackgroundColor, write=SetBackgroundColorProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPHatchBrush : public TIGPBrush
{
	typedef TIGPBrush inherited;
	
public:
	__classmethod _di_IGPHatchBrush __fastcall Create()/* overload */;
	__classmethod _di_IGPHatchBrush __fastcall Create(TIGPHatchStyle hatchStyle,  ::System::Uitypes::TAlphaColor foreColor,  ::System::Uitypes::TAlphaColor backColor = ( ::System::Uitypes::TAlphaColor)(0xff000000))/* overload */;
	__fastcall TIGPHatchBrush()/* overload */;
	__fastcall TIGPHatchBrush(TIGPHatchStyle hatchStyle,  ::System::Uitypes::TAlphaColor foreColor,  ::System::Uitypes::TAlphaColor backColor)/* overload */;
	void __fastcall SetHatchStyleProp(TIGPHatchStyle AStyle);
	TIGPHatchBrush* __fastcall SetHatchStyle(TIGPHatchStyle AStyle);
	TIGPHatchStyle __fastcall GetHatchStyle();
	void __fastcall SetForegroundColorProp( ::System::Uitypes::TAlphaColor AColor);
	TIGPHatchBrush* __fastcall SetForegroundColor( ::System::Uitypes::TAlphaColor AColor);
	 ::System::Uitypes::TAlphaColor __fastcall GetForegroundColor();
	void __fastcall SetBackgroundColorProp( ::System::Uitypes::TAlphaColor AColor);
	TIGPHatchBrush* __fastcall SetBackgroundColor( ::System::Uitypes::TAlphaColor AColor);
	 ::System::Uitypes::TAlphaColor __fastcall GetBackgroundColor();
protected:
	/* TIGPBrush.CreateObject */ inline __fastcall TIGPHatchBrush(void * nativeBrush)/* overload */ : TIGPBrush(nativeBrush) { }
	
public:
	/* TIGPBrush.Destroy */ inline __fastcall virtual ~TIGPHatchBrush() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_IGPBrush __fastcall  Create(void * nativeBrush){ return TIGPBrush::Create(nativeBrush); }
	
private:
	void *__IGPHatchBrush;	// IGPHatchBrush 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {302E268C-E3B3-421F-8EDD-341FEA9E21D9}
	operator _di_IGPHatchBrush()
	{
		_di_IGPHatchBrush intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPHatchBrush*(void) { return (IGPHatchBrush*)&__IGPHatchBrush; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3078FAF8-1E13-4FF0-A9B0-6350298958B6}") IGPPen  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativePen() = 0 ;
	virtual TIGPPen* __fastcall Clone() = 0 ;
	virtual void __fastcall SetWidthProp(float width) = 0 ;
	virtual TIGPPen* __fastcall SetWidth(float width) = 0 ;
	virtual float __fastcall GetWidth() = 0 ;
	virtual TIGPPen* __fastcall SetLineCap(TIGPLineCap startCap, TIGPLineCap endCap, TIGPDashCap dashCap) = 0 ;
	virtual void __fastcall SetStartCapProp(TIGPLineCap startCap) = 0 ;
	virtual TIGPPen* __fastcall SetStartCap(TIGPLineCap startCap) = 0 ;
	virtual TIGPLineCap __fastcall GetStartCap() = 0 ;
	virtual void __fastcall SetEndCapProp(TIGPLineCap endCap) = 0 ;
	virtual TIGPPen* __fastcall SetEndCap(TIGPLineCap endCap) = 0 ;
	virtual TIGPLineCap __fastcall GetEndCap() = 0 ;
	virtual void __fastcall SetDashCapProp(TIGPDashCap dashCap) = 0 ;
	virtual TIGPPen* __fastcall SetDashCap(TIGPDashCap dashCap) = 0 ;
	virtual TIGPDashCap __fastcall GetDashCap() = 0 ;
	virtual void __fastcall SetLineJoinProp(TIGPLineJoin lineJoin) = 0 ;
	virtual TIGPPen* __fastcall SetLineJoin(TIGPLineJoin lineJoin) = 0 ;
	virtual TIGPLineJoin __fastcall GetLineJoin() = 0 ;
	virtual void __fastcall SetCustomStartCapProp(const _di_IGPCustomLineCap customCap) = 0 ;
	virtual TIGPPen* __fastcall SetCustomStartCap(const _di_IGPCustomLineCap customCap) = 0 ;
	virtual _di_IGPCustomLineCap __fastcall GetCustomStartCap() = 0 ;
	virtual void __fastcall SetCustomEndCapProp(const _di_IGPCustomLineCap customCap) = 0 ;
	virtual TIGPPen* __fastcall SetCustomEndCap(const _di_IGPCustomLineCap customCap) = 0 ;
	virtual _di_IGPCustomLineCap __fastcall GetCustomEndCap() = 0 ;
	virtual void __fastcall SetMiterLimitProp(float miterLimit) = 0 ;
	virtual TIGPPen* __fastcall SetMiterLimit(float miterLimit) = 0 ;
	virtual float __fastcall GetMiterLimit() = 0 ;
	virtual void __fastcall SetAlignmentProp(TIGPPenAlignment penAlignment) = 0 ;
	virtual TIGPPen* __fastcall SetAlignment(TIGPPenAlignment penAlignment) = 0 ;
	virtual TIGPPenAlignment __fastcall GetAlignment() = 0 ;
	virtual TIGPPen* __fastcall SetTransform(const _di_IGPMatrix AMatrix) = 0 ;
	virtual void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix) = 0 ;
	virtual _di_IGPMatrix __fastcall GetTransform() = 0 ;
	virtual TIGPPen* __fastcall ResetTransform() = 0 ;
	virtual TIGPPen* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPPen* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPPen* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPPen* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPPen* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPPenType __fastcall GetPenType() = 0 ;
	virtual void __fastcall SetColorProp( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual TIGPPen* __fastcall SetColor( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual  ::System::Uitypes::TAlphaColor __fastcall GetColor() = 0 ;
	virtual void __fastcall SetBrushProp(const _di_IGPBrush ABrush) = 0 ;
	virtual TIGPPen* __fastcall SetBrush(const _di_IGPBrush ABrush) = 0 ;
	virtual _di_IGPBrush __fastcall GetBrush() = 0 ;
	virtual void __fastcall SetDashStyleProp(TIGPDashStyle dashStyle) = 0 ;
	virtual TIGPPen* __fastcall SetDashStyle(TIGPDashStyle dashStyle) = 0 ;
	virtual TIGPDashStyle __fastcall GetDashStyle() = 0 ;
	virtual void __fastcall SetDashOffsetProp(float dashOffset) = 0 ;
	virtual TIGPPen* __fastcall SetDashOffset(float dashOffset) = 0 ;
	virtual float __fastcall GetDashOffset() = 0 ;
	virtual int __fastcall GetDashPatternCount() = 0 ;
	virtual TIGPPen* __fastcall SetDashPattern(const float *dashArray, const int dashArray_High) = 0 ;
	virtual void __fastcall SetDashPatternProp( ::System::DynamicArray<float> dashArray) = 0 ;
	virtual  ::System::DynamicArray<float> __fastcall GetDashPattern() = 0 ;
	virtual int __fastcall GetCompoundArrayCount() = 0 ;
	virtual TIGPPen* __fastcall SetCompoundArray(const float *compoundArray, const int compoundArray_High) = 0 ;
	virtual void __fastcall SetCompoundArrayProp( ::System::DynamicArray<float> compoundArray) = 0 ;
	virtual  ::System::DynamicArray<float> __fastcall GetCompoundArray() = 0 ;
	__property TIGPPenType PenType = {read=GetPenType};
	__property float Width = {read=GetWidth, write=SetWidthProp};
	__property  ::System::Uitypes::TAlphaColor Color = {read=GetColor, write=SetColorProp};
	__property _di_IGPBrush Brush = {read=GetBrush, write=SetBrushProp};
	__property TIGPPenAlignment Alignment = {read=GetAlignment, write=SetAlignmentProp};
	__property float MiterLimit = {read=GetMiterLimit, write=SetMiterLimitProp};
	__property float DashOffset = {read=GetDashOffset, write=SetDashOffsetProp};
	__property TIGPLineCap StartCap = {read=GetStartCap, write=SetStartCapProp};
	__property TIGPLineCap EndCap = {read=GetEndCap, write=SetEndCapProp};
	__property _di_IGPCustomLineCap CustomStartCap = {read=GetCustomStartCap, write=SetCustomStartCapProp};
	__property _di_IGPCustomLineCap CustomEndCap = {read=GetCustomEndCap, write=SetCustomEndCapProp};
	__property TIGPDashStyle DashStyle = {read=GetDashStyle, write=SetDashStyleProp};
	__property TIGPDashCap DashCap = {read=GetDashCap, write=SetDashCapProp};
	__property  ::System::DynamicArray<float> DashPattern = {read=GetDashPattern, write=SetDashPatternProp};
	__property TIGPLineJoin LineJoin = {read=GetLineJoin, write=SetLineJoinProp};
	__property  ::System::DynamicArray<float> CompoundArray = {read=GetCompoundArray, write=SetCompoundArrayProp};
	__property _di_IGPMatrix Transform = {read=GetTransform, write=SetTransformProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPPen : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativePen;
	void __fastcall SetNativePen(void * nativePen);
	void * __fastcall GetNativePen();
	__classmethod _di_IGPPen __fastcall CreateGdiPlus(void * ANativePen, bool ADummy);
	
public:
	__classmethod _di_IGPPen __fastcall Create( ::System::Uitypes::TAlphaColor AColor, float AWidth = 1.000000E+00f)/* overload */;
	__classmethod _di_IGPPen __fastcall Create(const _di_IGPBrush ABrush, float AWidth = 1.000000E+00f)/* overload */;
	
protected:
	__fastcall TIGPPen(void * nativePen, bool ADummy);
	
public:
	__fastcall TIGPPen( ::System::Uitypes::TAlphaColor AColor, float AWidth)/* overload */;
	__fastcall TIGPPen(const _di_IGPBrush ABrush, float AWidth)/* overload */;
	__fastcall virtual ~TIGPPen();
	TIGPPen* __fastcall Clone();
	void __fastcall SetWidthProp(float width);
	TIGPPen* __fastcall SetWidth(float width);
	float __fastcall GetWidth();
	TIGPPen* __fastcall SetLineCap(TIGPLineCap startCap, TIGPLineCap endCap, TIGPDashCap dashCap);
	void __fastcall SetStartCapProp(TIGPLineCap startCap);
	TIGPPen* __fastcall SetStartCap(TIGPLineCap startCap);
	TIGPLineCap __fastcall GetStartCap();
	void __fastcall SetEndCapProp(TIGPLineCap endCap);
	TIGPPen* __fastcall SetEndCap(TIGPLineCap endCap);
	TIGPLineCap __fastcall GetEndCap();
	void __fastcall SetDashCapProp(TIGPDashCap dashCap);
	TIGPPen* __fastcall SetDashCap(TIGPDashCap dashCap);
	TIGPDashCap __fastcall GetDashCap();
	void __fastcall SetLineJoinProp(TIGPLineJoin lineJoin);
	TIGPPen* __fastcall SetLineJoin(TIGPLineJoin lineJoin);
	TIGPLineJoin __fastcall GetLineJoin();
	void __fastcall SetCustomStartCapProp(const _di_IGPCustomLineCap customCap);
	TIGPPen* __fastcall SetCustomStartCap(const _di_IGPCustomLineCap customCap);
	_di_IGPCustomLineCap __fastcall GetCustomStartCap();
	void __fastcall SetCustomEndCapProp(const _di_IGPCustomLineCap customCap);
	TIGPPen* __fastcall SetCustomEndCap(const _di_IGPCustomLineCap customCap);
	_di_IGPCustomLineCap __fastcall GetCustomEndCap();
	void __fastcall SetMiterLimitProp(float miterLimit);
	TIGPPen* __fastcall SetMiterLimit(float miterLimit);
	float __fastcall GetMiterLimit();
	void __fastcall SetAlignmentProp(TIGPPenAlignment penAlignment);
	TIGPPen* __fastcall SetAlignment(TIGPPenAlignment penAlignment);
	TIGPPenAlignment __fastcall GetAlignment();
	void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix);
	TIGPPen* __fastcall SetTransform(const _di_IGPMatrix AMatrix);
	_di_IGPMatrix __fastcall GetTransform();
	TIGPPen* __fastcall ResetTransform();
	TIGPPen* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPPen* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPPen* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPPen* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPPen* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPPenType __fastcall GetPenType();
	void __fastcall SetColorProp( ::System::Uitypes::TAlphaColor AColor);
	TIGPPen* __fastcall SetColor( ::System::Uitypes::TAlphaColor AColor);
	 ::System::Uitypes::TAlphaColor __fastcall GetColor();
	void __fastcall SetBrushProp(const _di_IGPBrush ABrush);
	TIGPPen* __fastcall SetBrush(const _di_IGPBrush ABrush);
	_di_IGPBrush __fastcall GetBrush();
	void __fastcall SetDashStyleProp(TIGPDashStyle dashStyle);
	TIGPPen* __fastcall SetDashStyle(TIGPDashStyle dashStyle);
	TIGPDashStyle __fastcall GetDashStyle();
	void __fastcall SetDashOffsetProp(float dashOffset);
	TIGPPen* __fastcall SetDashOffset(float dashOffset);
	float __fastcall GetDashOffset();
	int __fastcall GetDashPatternCount();
	TIGPPen* __fastcall SetDashPattern(const float *dashArray, const int dashArray_High);
	void __fastcall SetDashPatternProp( ::System::DynamicArray<float> dashArray);
	 ::System::DynamicArray<float> __fastcall GetDashPattern();
	int __fastcall GetCompoundArrayCount();
	TIGPPen* __fastcall SetCompoundArray(const float *compoundArray, const int compoundArray_High);
	void __fastcall SetCompoundArrayProp( ::System::DynamicArray<float> compoundArray);
	 ::System::DynamicArray<float> __fastcall GetCompoundArray();
	
protected:
	_di_IGPTransformable __fastcall SetTransformT(const _di_IGPMatrix AMatrix);
	_di_IGPTransformable __fastcall ResetTransformT();
	_di_IGPTransformable __fastcall MultiplyTransformT(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall TranslateTransformT(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformT(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformXYT(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall RotateTransformT(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
private:
	void *__IGPTransformable;	// IGPTransformable 
	void *__IGPPen;	// IGPPen 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9EEFBE7F-9DA0-47D4-B426-75A0047CF6BE}
	operator _di_IGPTransformable()
	{
		_di_IGPTransformable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPTransformable*(void) { return (IGPTransformable*)&__IGPTransformable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3078FAF8-1E13-4FF0-A9B0-6350298958B6}
	operator _di_IGPPen()
	{
		_di_IGPPen intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPPen*(void) { return (IGPPen*)&__IGPPen; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F07F7F74-9E3C-4B01-BC57-B892B69B6FD3}") IGPStringFormat  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeFormat() = 0 ;
	virtual TIGPStringFormat* __fastcall Clone() = 0 ;
	virtual TIGPStringFormat* __fastcall SetFormatFlags(int AFlags) = 0 ;
	virtual void __fastcall SetFormatFlagsProp(int AFlags) = 0 ;
	virtual int __fastcall GetFormatFlags() = 0 ;
	virtual TIGPStringFormat* __fastcall SetAlignment(TIGPStringAlignment align) = 0 ;
	virtual void __fastcall SetAlignmentProp(TIGPStringAlignment align) = 0 ;
	virtual TIGPStringAlignment __fastcall GetAlignment() = 0 ;
	virtual TIGPStringFormat* __fastcall SetLineAlignment(TIGPStringAlignment align) = 0 ;
	virtual void __fastcall SetLineAlignmentProp(TIGPStringAlignment align) = 0 ;
	virtual TIGPStringAlignment __fastcall GetLineAlignment() = 0 ;
	virtual TIGPStringFormat* __fastcall SetHotkeyPrefix(TIGPHotkeyPrefix hotkeyPrefix) = 0 ;
	virtual void __fastcall SetHotkeyPrefixProp(TIGPHotkeyPrefix hotkeyPrefix) = 0 ;
	virtual TIGPHotkeyPrefix __fastcall GetHotkeyPrefix() = 0 ;
	virtual TIGPStringFormat* __fastcall SetTabStops(float firstTabOffset, const float *tabStops, const int tabStops_High) = 0 ;
	virtual int __fastcall GetTabStopCount() = 0 ;
	virtual  ::System::DynamicArray<float> __fastcall GetTabStops(/* out */ float &initialTabOffset) = 0 /* overload */;
	virtual  ::System::DynamicArray<float> __fastcall GetTabStops() = 0 /* overload */;
	virtual  ::System::DynamicArray<float> __fastcall GetTabStopsProp() = 0 ;
	virtual float __fastcall GetInitialTabOffset() = 0 ;
	virtual TIGPStringFormat* __fastcall SetDigitSubstitution( ::System::Word language, TIGPStringDigitSubstitute substitute) = 0 ;
	virtual  ::System::Word __fastcall GetDigitSubstitutionLanguage() = 0 ;
	virtual TIGPStringDigitSubstitute __fastcall GetDigitSubstitutionMethod() = 0 ;
	virtual TIGPStringFormat* __fastcall SetTrimming(TIGPStringTrimming trimming) = 0 ;
	virtual void __fastcall SetTrimmingProp(TIGPStringTrimming trimming) = 0 ;
	virtual TIGPStringTrimming __fastcall GetTrimming() = 0 ;
	virtual TIGPStringFormat* __fastcall SetMeasurableCharacterRanges(const TIGPCharacterRange *ranges, const int ranges_High) = 0 ;
	virtual int __fastcall GetMeasurableCharacterRangeCount() = 0 ;
	__property int FormatFlags = {read=GetFormatFlags, write=SetFormatFlagsProp};
	__property TIGPStringAlignment Alignment = {read=GetAlignment, write=SetAlignmentProp};
	__property TIGPStringAlignment LineAlignment = {read=GetLineAlignment, write=SetLineAlignmentProp};
	__property TIGPHotkeyPrefix HotkeyPrefix = {read=GetHotkeyPrefix, write=SetHotkeyPrefixProp};
	__property int TabStopCount = {read=GetTabStopCount};
	__property  ::System::DynamicArray<float> TabStops = {read=GetTabStopsProp};
	__property float InitialTabOffset = {read=GetInitialTabOffset};
	__property  ::System::Word DigitSubstitutionLanguage = {read=GetDigitSubstitutionLanguage};
	__property TIGPStringDigitSubstitute DigitSubstitutionMethod = {read=GetDigitSubstitutionMethod};
	__property TIGPStringTrimming Trimming = {read=GetTrimming, write=SetTrimmingProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPStringFormat : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeFormat;
	void * __fastcall GetNativeFormat();
	void __fastcall Assign(TIGPStringFormat* source);
	__classmethod _di_IGPStringFormat __fastcall CreateGdiPlus(void * clonedStringFormat, bool ADummy);
	
public:
	__classmethod _di_IGPStringFormat __fastcall Create(int formatFlags = 0x0,  ::System::Word language = ( ::System::Word)(0x0))/* overload */;
	__classmethod _di_IGPStringFormat __fastcall Create(TIGPStringFormat* AFormat)/* overload */;
	
protected:
	__fastcall TIGPStringFormat(void * clonedStringFormat, bool ADummy);
	
public:
	__fastcall TIGPStringFormat(int formatFlags,  ::System::Word language)/* overload */;
	__fastcall TIGPStringFormat(TIGPStringFormat* AFormat)/* overload */;
	__fastcall virtual ~TIGPStringFormat();
	TIGPStringFormat* __fastcall Clone();
	TIGPStringFormat* __fastcall SetFormatFlags(int AFlags);
	void __fastcall SetFormatFlagsProp(int AFlags);
	int __fastcall GetFormatFlags();
	TIGPStringFormat* __fastcall SetAlignment(TIGPStringAlignment align);
	void __fastcall SetAlignmentProp(TIGPStringAlignment align);
	TIGPStringAlignment __fastcall GetAlignment();
	TIGPStringFormat* __fastcall SetLineAlignment(TIGPStringAlignment align);
	void __fastcall SetLineAlignmentProp(TIGPStringAlignment align);
	TIGPStringAlignment __fastcall GetLineAlignment();
	TIGPStringFormat* __fastcall SetHotkeyPrefix(TIGPHotkeyPrefix hotkeyPrefix);
	void __fastcall SetHotkeyPrefixProp(TIGPHotkeyPrefix hotkeyPrefix);
	TIGPHotkeyPrefix __fastcall GetHotkeyPrefix();
	TIGPStringFormat* __fastcall SetTabStops(float firstTabOffset, const float *tabStops, const int tabStops_High);
	int __fastcall GetTabStopCount();
	 ::System::DynamicArray<float> __fastcall GetTabStops(/* out */ float &initialTabOffset)/* overload */;
	 ::System::DynamicArray<float> __fastcall GetTabStops()/* overload */;
	 ::System::DynamicArray<float> __fastcall GetTabStopsProp();
	float __fastcall GetInitialTabOffset();
	TIGPStringFormat* __fastcall SetDigitSubstitution( ::System::Word language, TIGPStringDigitSubstitute substitute);
	 ::System::Word __fastcall GetDigitSubstitutionLanguage();
	TIGPStringDigitSubstitute __fastcall GetDigitSubstitutionMethod();
	TIGPStringFormat* __fastcall SetTrimming(TIGPStringTrimming trimming);
	void __fastcall SetTrimmingProp(TIGPStringTrimming trimming);
	TIGPStringTrimming __fastcall GetTrimming();
	TIGPStringFormat* __fastcall SetMeasurableCharacterRanges(const TIGPCharacterRange *ranges, const int ranges_High);
	int __fastcall GetMeasurableCharacterRangeCount();
	__classmethod _di_IGPStringFormat __fastcall GenericDefault();
	__classmethod _di_IGPStringFormat __fastcall GenericTypographic();
private:
	void *__IGPStringFormat;	// IGPStringFormat 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F07F7F74-9E3C-4B01-BC57-B892B69B6FD3}
	operator _di_IGPStringFormat()
	{
		_di_IGPStringFormat intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPStringFormat*(void) { return (IGPStringFormat*)&__IGPStringFormat; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E83A7063-6F55-4A3C-AC91-0B14DF5D5510}") IGPGraphicsPath  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativePath() = 0 ;
	virtual TIGPGraphicsPath* __fastcall Clone() = 0 ;
	virtual TIGPGraphicsPath* __fastcall Reset() = 0 ;
	virtual TIGPFillMode __fastcall GetFillMode() = 0 ;
	virtual TIGPGraphicsPath* __fastcall SetFillMode(TIGPFillMode fillmode) = 0 ;
	virtual void __fastcall SetFillModeProp(TIGPFillMode fillmode) = 0 ;
	virtual _di_IGPPathData __fastcall GetPathData() = 0 ;
	virtual TIGPGraphicsPath* __fastcall StartFigure() = 0 ;
	virtual TIGPGraphicsPath* __fastcall CloseFigure() = 0 ;
	virtual TIGPGraphicsPath* __fastcall CloseAllFigures() = 0 ;
	virtual TIGPGraphicsPath* __fastcall SetMarker() = 0 ;
	virtual TIGPGraphicsPath* __fastcall ClearMarkers() = 0 ;
	virtual TIGPGraphicsPath* __fastcall Reverse() = 0 ;
	virtual  ::System::Types::TPointF __fastcall GetLastPoint() = 0 ;
	virtual TIGPGraphicsPath* __fastcall AddLineF(const  ::System::Types::TPointF &pt1, const  ::System::Types::TPointF &pt2) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddLineF(float x1, float y1, float x2, float y2) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddLinesF(const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddLine(const  ::System::Types::TPoint &pt1, const  ::System::Types::TPoint &pt2) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddLine(int x1, int y1, int x2, int y2) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddLines(const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddArcF(const TIGPRectF &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddArcF(float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddArc(const TIGPRect &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddArc(int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddBezierF(const  ::System::Types::TPointF &pt1, const  ::System::Types::TPointF &pt2, const  ::System::Types::TPointF &pt3, const  ::System::Types::TPointF &pt4) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddBezierF(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddBeziersF(const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddBezier(const  ::System::Types::TPoint &pt1, const  ::System::Types::TPoint &pt2, const  ::System::Types::TPoint &pt3, const  ::System::Types::TPoint &pt4) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddBezier(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddBeziers(const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High, float ATension) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High, int AOffset, int ANumberOfSegments, float ATension) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddCurve(const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddCurve(const  ::System::Types::TPoint *APoints, const int APoints_High, float ATension) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddCurve(const  ::System::Types::TPoint *APoints, const int APoints_High, int AOffset, int ANumberOfSegments, float ATension) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddClosedCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddClosedCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High, float ATension) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddClosedCurve(const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddClosedCurve(const  ::System::Types::TPoint *APoints, const int APoints_High, float ATension) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddRectangleF(const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddRectangleF(float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddRectangle(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddRectangle(int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddRoundRectangleF(const TIGPRectF &ARect, const TIGPSizeF &ACornerSize) = 0 ;
	virtual TIGPGraphicsPath* __fastcall AddRoundRectangle(const TIGPRect &ARect, const TIGPSize &ACornerSize) = 0 ;
	virtual TIGPGraphicsPath* __fastcall AddRectanglesF(const TIGPRectF *ARects, const int ARects_High) = 0 ;
	virtual TIGPGraphicsPath* __fastcall AddRectangles(const TIGPRect *ARects, const int ARects_High) = 0 ;
	virtual TIGPGraphicsPath* __fastcall AddEllipseF(const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddEllipseF(float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddEllipse(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddEllipse(int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddPieF(const TIGPRectF &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddPieF(float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddPie(const TIGPRect &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddPie(int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddPolygonF(const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 ;
	virtual TIGPGraphicsPath* __fastcall AddPolygon(const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 ;
	virtual TIGPGraphicsPath* __fastcall AddPath(const _di_IGPGraphicsPath AAddingPath, bool AConnect) = 0 ;
	virtual TIGPGraphicsPath* __fastcall AddStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AFormat) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AFormat) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddString( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPoint &AOrigin, const _di_IGPStringFormat AFormat) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddString( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRect &ALayoutRect, const _di_IGPStringFormat AFormat) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddStringF( ::System::WideString string_, const _di_IGPFontFamily AFamily, int AStyle, float emSize, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AFormat) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddStringF( ::System::WideString string_, const _di_IGPFontFamily AFamily, int AStyle, float emSize, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AFormat) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddString( ::System::WideString string_, const _di_IGPFontFamily AFamily, int AStyle, float emSize, const  ::System::Types::TPoint &AOrigin, const _di_IGPStringFormat AFormat) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall AddString( ::System::WideString string_, const _di_IGPFontFamily AFamily, int AStyle, float emSize, const TIGPRect &ALayoutRect, const _di_IGPStringFormat AFormat) = 0 /* overload */;
	virtual TIGPGraphicsPath* __fastcall Transform(const _di_IGPMatrix AMatrix) = 0 ;
	virtual TIGPRectF __fastcall GetBoundsF(const _di_IGPMatrix AMatrix = _di_IGPMatrix(), const _di_IGPPen APen = _di_IGPPen()) = 0 ;
	virtual TIGPRect __fastcall GetBounds(const _di_IGPMatrix AMatrix = _di_IGPMatrix(), const _di_IGPPen APen = _di_IGPPen()) = 0 ;
	virtual TIGPGraphicsPath* __fastcall Flatten(const _di_IGPMatrix AMatrix = _di_IGPMatrix(), float AFlatness = 2.500000E-01f) = 0 ;
	virtual TIGPGraphicsPath* __fastcall Widen(const _di_IGPPen APen, const _di_IGPMatrix AMatrix = _di_IGPMatrix(), float AFlatness = 2.500000E-01f) = 0 ;
	virtual TIGPGraphicsPath* __fastcall Outline(const _di_IGPMatrix AMatrix = _di_IGPMatrix(), float AFlatness = 2.500000E-01f) = 0 ;
	virtual TIGPGraphicsPath* __fastcall Warp(const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High, const TIGPRectF &ASrcRect, const _di_IGPMatrix AMatrix = _di_IGPMatrix(), TIGPWarpMode AWarpMode = (TIGPWarpMode)(0x0), float AFlatness = 2.500000E-01f) = 0 ;
	virtual int __fastcall GetPointCount() = 0 ;
	virtual TIGPGraphicsPath* __fastcall GetPathTypes( ::System::PByte ATypes, int ACount) = 0 ;
	virtual  ::System::DynamicArray< ::System::Types::TPointF> __fastcall GetPathPointsF() = 0 ;
	virtual  ::System::DynamicArray< ::System::Types::TPoint> __fastcall GetPathPoints() = 0 ;
	virtual bool __fastcall IsVisibleF(const  ::System::Types::TPointF &APoint, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(float x, float y, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisible(const  ::System::Types::TPoint &APoint, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsVisible(int x, int y, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsOutlineVisibleF(const  ::System::Types::TPointF &APoint, const _di_IGPPen APen, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsOutlineVisibleF(float x, float y, const _di_IGPPen APen, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsOutlineVisible(const  ::System::Types::TPoint &APoint, const _di_IGPPen APen, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	virtual bool __fastcall IsOutlineVisible(int x, int y, const _di_IGPPen APen, const _di_IGPGraphics AGraphics = _di_IGPGraphics()) = 0 /* overload */;
	__property  ::System::Types::TPointF LastPoint = {read=GetLastPoint};
	__property TIGPFillMode FillMode = {read=GetFillMode, write=SetFillModeProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPGraphicsPath : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativePath;
	void __fastcall SetNativePath(void * ANativePath);
	__classmethod _di_IGPGraphicsPath __fastcall CreateGdiPlus(void * ANativePath, bool ADummy);
	
public:
	__classmethod _di_IGPGraphicsPath __fastcall Create(const _di_IGPGraphicsPath APath)/* overload */;
	__classmethod _di_IGPGraphicsPath __fastcall Create(TIGPFillMode AFillMode = (TIGPFillMode)(0x0))/* overload */;
	__classmethod _di_IGPGraphicsPath __fastcall Create(const  ::System::Types::TPointF *APoints, const int APoints_High, const  ::System::Byte *ATypes, const int ATypes_High, TIGPFillMode AFillMode = (TIGPFillMode)(0x0))/* overload */;
	__classmethod _di_IGPGraphicsPath __fastcall Create(const  ::System::Types::TPoint *APoints, const int APoints_High, const  ::System::Byte *ATypes, const int ATypes_High, TIGPFillMode AFillMode = (TIGPFillMode)(0x0))/* overload */;
	
protected:
	__fastcall TIGPGraphicsPath(void * ANativePath, bool ADummy);
	
public:
	__fastcall TIGPGraphicsPath(const _di_IGPGraphicsPath APath)/* overload */;
	__fastcall TIGPGraphicsPath(TIGPFillMode AFillMode)/* overload */;
	__fastcall TIGPGraphicsPath(const  ::System::Types::TPointF *APoints, const int APoints_High, const  ::System::Byte *ATypes, const int ATypes_High, TIGPFillMode AFillMode)/* overload */;
	__fastcall TIGPGraphicsPath(const  ::System::Types::TPoint *APoints, const int APoints_High, const  ::System::Byte *ATypes, const int ATypes_High, TIGPFillMode AFillMode)/* overload */;
	__fastcall virtual ~TIGPGraphicsPath();
	void * __fastcall GetNativePath();
	TIGPGraphicsPath* __fastcall Clone();
	TIGPGraphicsPath* __fastcall Reset();
	TIGPFillMode __fastcall GetFillMode();
	TIGPGraphicsPath* __fastcall SetFillMode(TIGPFillMode AFillMode);
	void __fastcall SetFillModeProp(TIGPFillMode AFillMode);
	_di_IGPPathData __fastcall GetPathData();
	TIGPGraphicsPath* __fastcall StartFigure();
	TIGPGraphicsPath* __fastcall CloseFigure();
	TIGPGraphicsPath* __fastcall CloseAllFigures();
	TIGPGraphicsPath* __fastcall SetMarker();
	TIGPGraphicsPath* __fastcall ClearMarkers();
	TIGPGraphicsPath* __fastcall Reverse();
	 ::System::Types::TPointF __fastcall GetLastPoint();
	TIGPGraphicsPath* __fastcall AddLineF(const  ::System::Types::TPointF &pt1, const  ::System::Types::TPointF &pt2)/* overload */;
	TIGPGraphicsPath* __fastcall AddLineF(float x1, float y1, float x2, float y2)/* overload */;
	TIGPGraphicsPath* __fastcall AddLinesF(const  ::System::Types::TPointF *APoints, const int APoints_High);
	TIGPGraphicsPath* __fastcall AddLine(const  ::System::Types::TPoint &pt1, const  ::System::Types::TPoint &pt2)/* overload */;
	TIGPGraphicsPath* __fastcall AddLine(int x1, int y1, int x2, int y2)/* overload */;
	TIGPGraphicsPath* __fastcall AddLines(const  ::System::Types::TPoint *APoints, const int APoints_High);
	TIGPGraphicsPath* __fastcall AddArcF(const TIGPRectF &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphicsPath* __fastcall AddArcF(float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphicsPath* __fastcall AddArc(const TIGPRect &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphicsPath* __fastcall AddArc(int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphicsPath* __fastcall AddBezierF(const  ::System::Types::TPointF &pt1, const  ::System::Types::TPointF &pt2, const  ::System::Types::TPointF &pt3, const  ::System::Types::TPointF &pt4)/* overload */;
	TIGPGraphicsPath* __fastcall AddBezierF(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)/* overload */;
	TIGPGraphicsPath* __fastcall AddBeziersF(const  ::System::Types::TPointF *APoints, const int APoints_High);
	TIGPGraphicsPath* __fastcall AddBezier(const  ::System::Types::TPoint &pt1, const  ::System::Types::TPoint &pt2, const  ::System::Types::TPoint &pt3, const  ::System::Types::TPoint &pt4)/* overload */;
	TIGPGraphicsPath* __fastcall AddBezier(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)/* overload */;
	TIGPGraphicsPath* __fastcall AddBeziers(const  ::System::Types::TPoint *APoints, const int APoints_High);
	TIGPGraphicsPath* __fastcall AddCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphicsPath* __fastcall AddCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High, float ATension)/* overload */;
	TIGPGraphicsPath* __fastcall AddCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High, int AOffset, int ANumberOfSegments, float ATension)/* overload */;
	TIGPGraphicsPath* __fastcall AddCurve(const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphicsPath* __fastcall AddCurve(const  ::System::Types::TPoint *APoints, const int APoints_High, float ATension)/* overload */;
	TIGPGraphicsPath* __fastcall AddCurve(const  ::System::Types::TPoint *APoints, const int APoints_High, int AOffset, int ANumberOfSegments, float ATension)/* overload */;
	TIGPGraphicsPath* __fastcall AddClosedCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphicsPath* __fastcall AddClosedCurveF(const  ::System::Types::TPointF *APoints, const int APoints_High, float ATension)/* overload */;
	TIGPGraphicsPath* __fastcall AddClosedCurve(const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphicsPath* __fastcall AddClosedCurve(const  ::System::Types::TPoint *APoints, const int APoints_High, float ATension)/* overload */;
	TIGPGraphicsPath* __fastcall AddRectangleF(const TIGPRectF &ARect)/* overload */;
	TIGPGraphicsPath* __fastcall AddRectangleF(float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphicsPath* __fastcall AddRectangle(const TIGPRect &ARect)/* overload */;
	TIGPGraphicsPath* __fastcall AddRectangle(int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphicsPath* __fastcall AddRoundRectangleF(const TIGPRectF &ARect, const TIGPSizeF &ACornerSize);
	TIGPGraphicsPath* __fastcall AddRoundRectangle(const TIGPRect &ARect, const TIGPSize &ACornerSize);
	TIGPGraphicsPath* __fastcall AddRectanglesF(const TIGPRectF *ARects, const int ARects_High);
	TIGPGraphicsPath* __fastcall AddRectangles(const TIGPRect *ARects, const int ARects_High);
	TIGPGraphicsPath* __fastcall AddEllipseF(const TIGPRectF &ARect)/* overload */;
	TIGPGraphicsPath* __fastcall AddEllipseF(float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphicsPath* __fastcall AddEllipse(const TIGPRect &ARect)/* overload */;
	TIGPGraphicsPath* __fastcall AddEllipse(int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphicsPath* __fastcall AddPieF(const TIGPRectF &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphicsPath* __fastcall AddPieF(float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphicsPath* __fastcall AddPie(const TIGPRect &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphicsPath* __fastcall AddPie(int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphicsPath* __fastcall AddPolygonF(const  ::System::Types::TPointF *APoints, const int APoints_High);
	TIGPGraphicsPath* __fastcall AddPolygon(const  ::System::Types::TPoint *APoints, const int APoints_High);
	TIGPGraphicsPath* __fastcall AddPath(const _di_IGPGraphicsPath AAddingPath, bool AConnect);
	TIGPGraphicsPath* __fastcall AddStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AFormat)/* overload */;
	TIGPGraphicsPath* __fastcall AddStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AFormat)/* overload */;
	TIGPGraphicsPath* __fastcall AddString( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPoint &AOrigin, const _di_IGPStringFormat AFormat)/* overload */;
	TIGPGraphicsPath* __fastcall AddString( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRect &ALayoutRect, const _di_IGPStringFormat AFormat)/* overload */;
	TIGPGraphicsPath* __fastcall AddStringF( ::System::WideString string_, const _di_IGPFontFamily AFamily, int AStyle, float emSize, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AFormat)/* overload */;
	TIGPGraphicsPath* __fastcall AddStringF( ::System::WideString string_, const _di_IGPFontFamily AFamily, int AStyle, float emSize, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AFormat)/* overload */;
	TIGPGraphicsPath* __fastcall AddString( ::System::WideString string_, const _di_IGPFontFamily AFamily, int AStyle, float emSize, const  ::System::Types::TPoint &AOrigin, const _di_IGPStringFormat AFormat)/* overload */;
	TIGPGraphicsPath* __fastcall AddString( ::System::WideString string_, const _di_IGPFontFamily AFamily, int AStyle, float emSize, const TIGPRect &ALayoutRect, const _di_IGPStringFormat AFormat)/* overload */;
	TIGPGraphicsPath* __fastcall Transform(const _di_IGPMatrix AMatrix);
	TIGPRectF __fastcall GetBoundsF(const _di_IGPMatrix AMatrix = _di_IGPMatrix(), const _di_IGPPen APen = _di_IGPPen());
	TIGPRect __fastcall GetBounds(const _di_IGPMatrix AMatrix = _di_IGPMatrix(), const _di_IGPPen APen = _di_IGPPen());
	TIGPGraphicsPath* __fastcall Flatten(const _di_IGPMatrix AMatrix = _di_IGPMatrix(), float AFlatness = 2.500000E-01f);
	TIGPGraphicsPath* __fastcall Widen(const _di_IGPPen APen, const _di_IGPMatrix AMatrix = _di_IGPMatrix(), float AFlatness = 2.500000E-01f);
	TIGPGraphicsPath* __fastcall Outline(const _di_IGPMatrix AMatrix = _di_IGPMatrix(), float AFlatness = 2.500000E-01f);
	TIGPGraphicsPath* __fastcall Warp(const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High, const TIGPRectF &ASrcRect, const _di_IGPMatrix AMatrix = _di_IGPMatrix(), TIGPWarpMode AWarpMode = (TIGPWarpMode)(0x0), float AFlatness = 2.500000E-01f);
	int __fastcall GetPointCount();
	TIGPGraphicsPath* __fastcall GetPathTypes( ::System::PByte ATypes, int ACount);
	 ::System::DynamicArray< ::System::Types::TPointF> __fastcall GetPathPointsF();
	 ::System::DynamicArray< ::System::Types::TPoint> __fastcall GetPathPoints();
	bool __fastcall IsVisibleF(const  ::System::Types::TPointF &APoint, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisibleF(float x, float y, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisible(const  ::System::Types::TPoint &APoint, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsVisible(int x, int y, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsOutlineVisibleF(const  ::System::Types::TPointF &APoint, const _di_IGPPen APen, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsOutlineVisibleF(float x, float y, const _di_IGPPen APen, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsOutlineVisible(const  ::System::Types::TPoint &APoint, const _di_IGPPen APen, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
	bool __fastcall IsOutlineVisible(int x, int y, const _di_IGPPen APen, const _di_IGPGraphics AGraphics = _di_IGPGraphics())/* overload */;
private:
	void *__IGPGraphicsPath;	// IGPGraphicsPath 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E83A7063-6F55-4A3C-AC91-0B14DF5D5510}
	operator _di_IGPGraphicsPath()
	{
		_di_IGPGraphicsPath intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPGraphicsPath*(void) { return (IGPGraphicsPath*)&__IGPGraphicsPath; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{893BF228-EE25-4FE5-B8F7-20997B95749C}") IGPGraphicsPathIterator  : public  ::System::IInterface 
{
	virtual int __fastcall NextSubpath(/* out */ int &AStartIndex, /* out */ int &AEndIndex, /* out */ bool &AIsClosed) = 0 /* overload */;
	virtual int __fastcall NextSubpath(const _di_IGPGraphicsPath APath, /* out */ bool &AIsClosed) = 0 /* overload */;
	virtual int __fastcall NextPathType(/* out */ TIGPPathPointType &APathType, /* out */ int &AStartIndex, /* out */ int &AEndIndex) = 0 ;
	virtual int __fastcall NextMarker(/* out */ int &AStartIndex, /* out */ int &AEndIndex) = 0 /* overload */;
	virtual int __fastcall NextMarker(const _di_IGPGraphicsPath APath) = 0 /* overload */;
	virtual int __fastcall GetCount() = 0 ;
	virtual int __fastcall GetSubpathCount() = 0 ;
	virtual bool __fastcall HasCurve() = 0 ;
	virtual TIGPGraphicsPathIterator* __fastcall Rewind() = 0 ;
	virtual int __fastcall Enumerate(/* out */  ::System::DynamicArray< ::System::Types::TPointF> &APoints, /* out */  ::System::DynamicArray< ::System::Byte> &ATypes) = 0 ;
	virtual int __fastcall CopyData(PGPPointF APoints,  ::System::PByte ATypes, int AStartIndex, int AEndIndex) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPGraphicsPathIterator : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeIterator;
	void __fastcall SetNativeIterator(void * nativeIterator);
	
public:
	__classmethod _di_IGPGraphicsPathIterator __fastcall Create(const _di_IGPGraphicsPath APath);
	__fastcall TIGPGraphicsPathIterator(const _di_IGPGraphicsPath APath);
	__fastcall virtual ~TIGPGraphicsPathIterator();
	int __fastcall NextSubpath(/* out */ int &AStartIndex, /* out */ int &AEndIndex, /* out */ bool &AIsClosed)/* overload */;
	int __fastcall NextSubpath(const _di_IGPGraphicsPath APath, /* out */ bool &AIsClosed)/* overload */;
	int __fastcall NextPathType(/* out */ TIGPPathPointType &APathType, /* out */ int &AStartIndex, /* out */ int &AEndIndex);
	int __fastcall NextMarker(/* out */ int &AStartIndex, /* out */ int &AEndIndex)/* overload */;
	int __fastcall NextMarker(const _di_IGPGraphicsPath APath)/* overload */;
	int __fastcall GetCount();
	int __fastcall GetSubpathCount();
	bool __fastcall HasCurve();
	TIGPGraphicsPathIterator* __fastcall Rewind();
	int __fastcall Enumerate(/* out */  ::System::DynamicArray< ::System::Types::TPointF> &APoints, /* out */  ::System::DynamicArray< ::System::Byte> &ATypes);
	int __fastcall CopyData(PGPPointF APoints,  ::System::PByte ATypes, int AStartIndex, int AEndIndex);
public:
	/* TObject.Create */ inline __fastcall TIGPGraphicsPathIterator() : TIGPBase() { }
	
private:
	void *__IGPGraphicsPathIterator;	// IGPGraphicsPathIterator 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {893BF228-EE25-4FE5-B8F7-20997B95749C}
	operator _di_IGPGraphicsPathIterator()
	{
		_di_IGPGraphicsPathIterator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPGraphicsPathIterator*(void) { return (IGPGraphicsPathIterator*)&__IGPGraphicsPathIterator; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C76439FD-D91B-44B5-91EB-E670B8E94A32}") IGPPathGradientBrush  : public IGPBlendBrush 
{
	virtual  ::System::Uitypes::TAlphaColor __fastcall GetCenterColor() = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetCenterColor( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual void __fastcall SetCenterColorProp( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual int __fastcall GetPointCount() = 0 ;
	virtual int __fastcall GetSurroundColorCount() = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetSurroundColors(const  ::System::Uitypes::TAlphaColor *AColors, const int AColors_High) = 0 ;
	virtual void __fastcall SetSurroundColorsProp( ::System::DynamicArray< ::System::Uitypes::TAlphaColor> AColors) = 0 ;
	virtual  ::System::DynamicArray< ::System::Uitypes::TAlphaColor> __fastcall GetSurroundColors() = 0 ;
	virtual _di_IGPGraphicsPath __fastcall GetGraphicsPath() = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetGraphicsPath(const _di_IGPGraphicsPath APath) = 0 ;
	virtual void __fastcall SetGraphicsPathProp(const _di_IGPGraphicsPath APath) = 0 ;
	virtual void __fastcall SetCenterPointFProp(const  ::System::Types::TPointF &APoint) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetCenterPointF(const  ::System::Types::TPointF &APoint) = 0 ;
	virtual  ::System::Types::TPointF __fastcall GetCenterPointF() = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetCenterPoint(const  ::System::Types::TPoint &APoint) = 0 ;
	virtual  ::System::Types::TPoint __fastcall GetCenterPoint() = 0 ;
	virtual TIGPRectF __fastcall GetRectangleF() = 0 ;
	virtual TIGPRect __fastcall GetRectangle() = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetGammaCorrection(bool AUseGammaCorrection) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetBlendArrays(const float *ABlendFactors, const int ABlendFactors_High, const float *ABlendPositions, const int ABlendPositions_High) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetBlend(const TIGPBlend *ABlendFactors, const int ABlendFactors_High) = 0 ;
	HIDESBASE virtual void __fastcall SetInterpolationColorsProp( ::System::DynamicArray<TIGPInterpolationColor> AColors) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetInterpolationColors(const TIGPInterpolationColor *AColors, const int AColors_High) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetInterpolationColorArrays(const  ::System::Uitypes::TAlphaColor *APresetColors, const int APresetColors_High, const float *ABlendPositions, const int ABlendPositions_High) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetBlendBellShape(float AFocus, float AScale = 1.000000E+00f) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetBlendTriangularShape(float AFocus, float AScale = 1.000000E+00f) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetTransform(const _di_IGPMatrix AMatrix) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall ResetTransform() = 0 ;
	virtual TIGPPathGradientBrush* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPPathGradientBrush* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPPathGradientBrush* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall GetFocusScales(/* out */ float &xScale, /* out */ float &yScale) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetFocusScales(float xScale, float yScale) = 0 ;
	virtual TIGPPathGradientBrush* __fastcall SetWrapMode(TIGPWrapMode AWrapMode) = 0 ;
	__property  ::System::Uitypes::TAlphaColor CenterColor = {read=GetCenterColor, write=SetCenterColorProp};
	__property  ::System::Types::TPointF CenterPoint = {read=GetCenterPointF, write=SetCenterPointFProp};
	__property  ::System::DynamicArray< ::System::Uitypes::TAlphaColor> SurroundColors = {read=GetSurroundColors, write=SetSurroundColorsProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPPathGradientBrush : public TIGPBrush
{
	typedef TIGPBrush inherited;
	
public:
	__classmethod _di_IGPPathGradientBrush __fastcall CreateF(const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPWrapMode AWrapMode = (TIGPWrapMode)(0x4));
	__classmethod _di_IGPPathGradientBrush __fastcall Create(const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPWrapMode AWrapMode = (TIGPWrapMode)(0x4))/* overload */;
	__classmethod _di_IGPPathGradientBrush __fastcall Create(const _di_IGPGraphicsPath APath)/* overload */;
	__fastcall TIGPPathGradientBrush(const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPWrapMode AWrapMode);
	__fastcall TIGPPathGradientBrush(const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPWrapMode AWrapMode)/* overload */;
	__fastcall TIGPPathGradientBrush(const _di_IGPGraphicsPath APath)/* overload */;
	 ::System::Uitypes::TAlphaColor __fastcall GetCenterColor();
	TIGPPathGradientBrush* __fastcall SetCenterColor( ::System::Uitypes::TAlphaColor AColor);
	void __fastcall SetCenterColorProp( ::System::Uitypes::TAlphaColor AColor);
	int __fastcall GetPointCount();
	int __fastcall GetSurroundColorCount();
	TIGPPathGradientBrush* __fastcall SetSurroundColors(const  ::System::Uitypes::TAlphaColor *AColors, const int AColors_High);
	void __fastcall SetSurroundColorsProp( ::System::DynamicArray< ::System::Uitypes::TAlphaColor> AColors);
	 ::System::DynamicArray< ::System::Uitypes::TAlphaColor> __fastcall GetSurroundColors();
	_di_IGPGraphicsPath __fastcall GetGraphicsPath();
	TIGPPathGradientBrush* __fastcall SetGraphicsPath(const _di_IGPGraphicsPath APath);
	void __fastcall SetGraphicsPathProp(const _di_IGPGraphicsPath APath);
	void __fastcall SetCenterPointFProp(const  ::System::Types::TPointF &APoint);
	TIGPPathGradientBrush* __fastcall SetCenterPointF(const  ::System::Types::TPointF &APoint);
	 ::System::Types::TPointF __fastcall GetCenterPointF();
	 ::System::Types::TPoint __fastcall GetCenterPoint();
	TIGPPathGradientBrush* __fastcall SetCenterPoint(const  ::System::Types::TPoint &APoint);
	TIGPRectF __fastcall GetRectangleF();
	TIGPRect __fastcall GetRectangle();
	void __fastcall SetGammaCorrectionProp(bool AUseGammaCorrection);
	TIGPPathGradientBrush* __fastcall SetGammaCorrection(bool AUseGammaCorrection);
	bool __fastcall GetGammaCorrection();
	int __fastcall GetBlendCount();
	 ::System::DynamicArray<TIGPBlend> __fastcall GetBlend();
	TIGPPathGradientBrush* __fastcall SetBlendArrays(const float *ABlendFactors, const int ABlendFactors_High, const float *ABlendPositions, const int ABlendPositions_High);
	TIGPPathGradientBrush* __fastcall SetBlend(const TIGPBlend *ABlendFactors, const int ABlendFactors_High);
	void __fastcall SetBlendProp(const  ::System::DynamicArray<TIGPBlend> ABlendFactors);
	int __fastcall GetInterpolationColorCount();
	TIGPPathGradientBrush* __fastcall SetInterpolationColors(const TIGPInterpolationColor *AColors, const int AColors_High)/* overload */;
	TIGPPathGradientBrush* __fastcall SetInterpolationColorArrays(const  ::System::Uitypes::TAlphaColor *APresetColors, const int APresetColors_High, const float *ABlendPositions, const int ABlendPositions_High);
	void __fastcall SetInterpolationColorsProp( ::System::DynamicArray<TIGPInterpolationColor> AColors);
	 ::System::DynamicArray<TIGPInterpolationColor> __fastcall GetInterpolationColors();
	TIGPPathGradientBrush* __fastcall SetBlendBellShape(float AFocus, float AScale = 1.000000E+00f);
	TIGPPathGradientBrush* __fastcall SetBlendTriangularShape(float AFocus, float AScale = 1.000000E+00f);
	_di_IGPMatrix __fastcall GetTransform();
	TIGPPathGradientBrush* __fastcall SetTransform(const _di_IGPMatrix AMatrix);
	void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix);
	TIGPPathGradientBrush* __fastcall ResetTransform();
	TIGPPathGradientBrush* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPPathGradientBrush* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPPathGradientBrush* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPPathGradientBrush* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPPathGradientBrush* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPPathGradientBrush* __fastcall GetFocusScales(/* out */ float &xScale, /* out */ float &yScale);
	TIGPPathGradientBrush* __fastcall SetFocusScales(float xScale, float yScale);
	TIGPWrapMode __fastcall GetWrapMode();
	TIGPPathGradientBrush* __fastcall SetWrapMode(TIGPWrapMode AWrapMode);
	void __fastcall SetWrapModeProp(TIGPWrapMode AWrapMode);
	
protected:
	_di_IGPTransformable __fastcall SetTransformT(const _di_IGPMatrix AMatrix);
	_di_IGPTransformable __fastcall ResetTransformT();
	_di_IGPTransformable __fastcall MultiplyTransformT(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall TranslateTransformT(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformT(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformXYT(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall RotateTransformT(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
protected:
	/* TIGPBrush.CreateObject */ inline __fastcall TIGPPathGradientBrush(void * nativeBrush)/* overload */ : TIGPBrush(nativeBrush) { }
	
public:
	/* TIGPBrush.CreateObject */ inline __fastcall TIGPPathGradientBrush()/* overload */ : TIGPBrush() { }
	/* TIGPBrush.Destroy */ inline __fastcall virtual ~TIGPPathGradientBrush() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_IGPBrush __fastcall  Create(void * nativeBrush){ return TIGPBrush::Create(nativeBrush); }
	
public:
	inline _di_IGPBrush __fastcall  Create(){ return TIGPBrush::Create(); }
	
private:
	void *__IGPTransformable;	// IGPTransformable 
	void *__IGPPathGradientBrush;	// IGPPathGradientBrush 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9EEFBE7F-9DA0-47D4-B426-75A0047CF6BE}
	operator _di_IGPTransformable()
	{
		_di_IGPTransformable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPTransformable*(void) { return (IGPTransformable*)&__IGPTransformable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C76439FD-D91B-44B5-91EB-E670B8E94A32}
	operator _di_IGPPathGradientBrush()
	{
		_di_IGPPathGradientBrush intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPPathGradientBrush*(void) { return (IGPPathGradientBrush*)&__IGPPathGradientBrush; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{95C573E8-DD62-41D4-83DE-2F32799BD922}") IGPGraphics  : public  ::System::IInterface 
{
	virtual void * __fastcall GetNativeGraphics() = 0 ;
	virtual TIGPGraphics* __fastcall Flush(TIGPFlushIntention intention = (TIGPFlushIntention)(0x0)) = 0 ;
	virtual HDC __fastcall GetHDC() = 0 ;
	virtual TIGPGraphics* __fastcall ReleaseHDC(HDC hdc) = 0 ;
	virtual TIGPGraphics* __fastcall SetRenderingOrigin(const  ::System::Types::TPoint &APoint) = 0 ;
	virtual void __fastcall SetRenderingOriginProp(const  ::System::Types::TPoint &APoint) = 0 ;
	virtual  ::System::Types::TPoint __fastcall GetRenderingOrigin() = 0 ;
	virtual TIGPGraphics* __fastcall SetCompositingMode(TIGPCompositingMode ACompositingMode) = 0 ;
	virtual void __fastcall SetCompositingModeProp(TIGPCompositingMode ACompositingMode) = 0 ;
	virtual TIGPCompositingMode __fastcall GetCompositingMode() = 0 ;
	virtual TIGPGraphics* __fastcall SetCompositingQuality(TIGPCompositingQuality ACompositingQuality) = 0 ;
	virtual void __fastcall SetCompositingQualityProp(TIGPCompositingQuality ACompositingQuality) = 0 ;
	virtual TIGPCompositingQuality __fastcall GetCompositingQuality() = 0 ;
	virtual TIGPGraphics* __fastcall SetTextRenderingHint(TIGPTextRenderingHint newMode) = 0 ;
	virtual void __fastcall SetTextRenderingHintProp(TIGPTextRenderingHint newMode) = 0 ;
	virtual TIGPTextRenderingHint __fastcall GetTextRenderingHint() = 0 ;
	virtual TIGPGraphics* __fastcall SetTextContrast(unsigned AContrast) = 0 ;
	virtual void __fastcall SetTextContrastProp(unsigned AContrast) = 0 ;
	virtual unsigned __fastcall GetTextContrast() = 0 ;
	virtual TIGPInterpolationMode __fastcall GetInterpolationMode() = 0 ;
	virtual TIGPGraphics* __fastcall SetInterpolationMode(TIGPInterpolationMode AInterpolationMode) = 0 ;
	virtual void __fastcall SetInterpolationModeProp(TIGPInterpolationMode AInterpolationMode) = 0 ;
	virtual TIGPSmoothingMode __fastcall GetSmoothingMode() = 0 ;
	virtual TIGPGraphics* __fastcall SetSmoothingMode(TIGPSmoothingMode ASmoothingMode) = 0 ;
	virtual void __fastcall SetSmoothingModeProp(TIGPSmoothingMode ASmoothingMode) = 0 ;
	virtual TIGPPixelOffsetMode __fastcall GetPixelOffsetMode() = 0 ;
	virtual TIGPGraphics* __fastcall SetPixelOffsetMode(TIGPPixelOffsetMode APixelOffsetMode) = 0 ;
	virtual void __fastcall SetPixelOffsetModeProp(TIGPPixelOffsetMode APixelOffsetMode) = 0 ;
	virtual TIGPGraphics* __fastcall SetTransform(const _di_IGPMatrix AMatrix) = 0 ;
	virtual void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix) = 0 ;
	virtual TIGPGraphics* __fastcall ResetTransform() = 0 ;
	virtual TIGPGraphics* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPGraphics* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual TIGPGraphics* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0)) = 0 ;
	virtual _di_IGPMatrix __fastcall GetTransform() = 0 ;
	virtual TIGPGraphics* __fastcall SetPageUnit(TIGPUnit AUnit) = 0 ;
	virtual void __fastcall SetPageUnitProp(TIGPUnit AUnit) = 0 ;
	virtual TIGPGraphics* __fastcall SetPageScale(float AScale) = 0 ;
	virtual void __fastcall SetPageScaleProp(float AScale) = 0 ;
	virtual TIGPUnit __fastcall GetPageUnit() = 0 ;
	virtual float __fastcall GetPageScale() = 0 ;
	virtual float __fastcall GetDpiX() = 0 ;
	virtual float __fastcall GetDpiY() = 0 ;
	virtual TIGPGraphics* __fastcall TransformPoints(TIGPCoordinateSpace destSpace, TIGPCoordinateSpace srcSpace,  ::System::Types::TPointF *pts, const int pts_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall TransformPoints(TIGPCoordinateSpace destSpace, TIGPCoordinateSpace srcSpace,  ::System::Types::TPoint *pts, const int pts_High) = 0 /* overload */;
	virtual  ::System::Uitypes::TAlphaColor __fastcall GetNearestColor( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual TIGPGraphics* __fastcall DrawLineF(const _di_IGPPen APen, float x1, float y1, float x2, float y2) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawLineF(const _di_IGPPen APen, const  ::System::Types::TPointF &pt1, const  ::System::Types::TPointF &pt2) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawLinesF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawLine(const _di_IGPPen APen, int x1, int y1, int x2, int y2) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawLine(const _di_IGPPen APen, const  ::System::Types::TPoint &pt1, const  ::System::Types::TPoint &pt2) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawLines(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawArcF(const _di_IGPPen APen, float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawArcF(const _di_IGPPen APen, const TIGPRectF &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawArc(const _di_IGPPen APen, int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawArc(const _di_IGPPen APen, const TIGPRect &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawBezierF(const _di_IGPPen APen, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawBezierF(const _di_IGPPen APen, const  ::System::Types::TPointF &pt1, const  ::System::Types::TPointF &pt2, const  ::System::Types::TPointF &pt3, const  ::System::Types::TPointF &pt4) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawBeziersF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 ;
	virtual TIGPGraphics* __fastcall DrawBezier(const _di_IGPPen APen, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawBezier(const _di_IGPPen APen, const  ::System::Types::TPoint &pt1, const  ::System::Types::TPoint &pt2, const  ::System::Types::TPoint &pt3, const  ::System::Types::TPoint &pt4) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawBeziers(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 ;
	virtual TIGPGraphics* __fastcall DrawRectangleF(const _di_IGPPen APen, const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangleF(const _di_IGPPen APen, float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectanglesF(const _di_IGPPen APen, const TIGPRectF *ARects, const int ARects_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangle(const _di_IGPPen APen, const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangle(const _di_IGPPen APen, int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangles(const _di_IGPPen APen, const TIGPRect *ARects, const int ARects_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangleF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangleF(const _di_IGPPen APen, const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectanglesF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF *ARects, const int ARects_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangle(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangle(const _di_IGPPen APen, const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRectangles(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect *ARects, const int ARects_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRoundRectangleF(const _di_IGPPen APen, const TIGPRectF &ARect, const TIGPSizeF &ACornerSize) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRoundRectangle(const _di_IGPPen APen, const TIGPRect &ARect, const TIGPSize &ACornerSize) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRoundRectangleF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF &ARect, const TIGPSizeF &ACornerSize) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawRoundRectangle(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect &ARect, const TIGPSize &ACornerSize) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipseF(const _di_IGPPen APen, const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipseF(const _di_IGPPen APen, float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipsesF(const _di_IGPPen APen, const TIGPRectF *ARects, const int ARects_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipse(const _di_IGPPen APen, const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipse(const _di_IGPPen APen, int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipses(const _di_IGPPen APen, const TIGPRect *ARects, const int ARects_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipseF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipseF(const _di_IGPPen APen, const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipsesF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF *ARects, const int ARects_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipse(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipse(const _di_IGPPen APen, const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawEllipses(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect *ARects, const int ARects_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPieF(const _di_IGPPen APen, const TIGPRectF &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPieF(const _di_IGPPen APen, float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPie(const _di_IGPPen APen, const TIGPRect &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPie(const _di_IGPPen APen, int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPieF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPieF(const _di_IGPPen APen, const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPie(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPie(const _di_IGPPen APen, const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPolygonF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPolygon(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPolygonF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPolygonF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPFillMode AFillMode) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPolygon(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPolygon(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPFillMode AFillMode) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPath(const _di_IGPPen APen, const _di_IGPGraphicsPath APath) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawPath(const _di_IGPPen APen, const _di_IGPBrush ABrush, const _di_IGPGraphicsPath APath) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High, float ATension) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High, int AOffset, int ANumberOfSegments, float ATension = 5.000000E-01f) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High, float ATension) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High, int AOffset, int ANumberOfSegments, float ATension = 5.000000E-01f) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawClosedCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawClosedCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High, float ATension) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawClosedCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawClosedCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High, float ATension) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawClosedCurveF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawClosedCurveF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPFillMode AFillMode, float ATension = 5.000000E-01f) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawClosedCurve(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawClosedCurve(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPFillMode AFillMode, float ATension = 5.000000E-01f) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall Clear( ::System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual TIGPGraphics* __fastcall FillRectangleF(const _di_IGPBrush ABrush, const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillRectangleF(const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillRectanglesF(const _di_IGPBrush ABrush, const TIGPRectF *ARects, const int ARects_High) = 0 ;
	virtual TIGPGraphics* __fastcall FillRectangle(const _di_IGPBrush ABrush, const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillRectangle(const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillRectangles(const _di_IGPBrush ABrush, const TIGPRect *ARects, const int ARects_High) = 0 ;
	virtual TIGPGraphics* __fastcall FillRoundRectangleF(const _di_IGPBrush ABrush, const TIGPRectF &ARect, const TIGPSizeF &ACornerSize) = 0 ;
	virtual TIGPGraphics* __fastcall FillRoundRectangle(const _di_IGPBrush ABrush, const TIGPRect &ARect, const TIGPSize &ACornerSize) = 0 ;
	virtual TIGPGraphics* __fastcall FillPolygonF(const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillPolygonF(const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPFillMode AFillMode) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillPolygon(const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillPolygon(const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPFillMode AFillMode) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillEllipseF(const _di_IGPBrush ABrush, const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillEllipseF(const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillEllipsesF(const _di_IGPBrush ABrush, const TIGPRectF *ARects, const int ARects_High) = 0 ;
	virtual TIGPGraphics* __fastcall FillEllipse(const _di_IGPBrush ABrush, const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillEllipse(const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillEllipses(const _di_IGPBrush ABrush, const TIGPRect *ARects, const int ARects_High) = 0 ;
	virtual TIGPGraphics* __fastcall FillPieF(const _di_IGPBrush ABrush, const TIGPRectF &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillPieF(const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillPie(const _di_IGPBrush ABrush, const TIGPRect &ARect, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillPie(const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillPath(const _di_IGPBrush ABrush, const _di_IGPGraphicsPath APath) = 0 ;
	virtual TIGPGraphics* __fastcall FillClosedCurveF(const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillClosedCurveF(const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPFillMode AFillMode, float ATension = 5.000000E-01f) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillClosedCurve(const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillClosedCurve(const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPFillMode AFillMode, float ATension = 5.000000E-01f) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall FillRegion(const _di_IGPBrush ABrush, const _di_IGPRegion ARegion) = 0 ;
	virtual TIGPGraphics* __fastcall DrawStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AStringFormat, const _di_IGPBrush ABrush) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPBrush ABrush) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPBrush ABrush) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AStringFormat, const _di_IGPBrush ABrush) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawString( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRect &ALayoutRect, const _di_IGPStringFormat AStringFormat, const _di_IGPBrush ABrush) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawString( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRect &ALayoutRect, const _di_IGPBrush ABrush) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawString( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPoint &AOrigin, const _di_IGPBrush ABrush) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawString( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPoint &AOrigin, const _di_IGPStringFormat AStringFormat, const _di_IGPBrush ABrush) = 0 /* overload */;
	virtual TIGPSizeF __fastcall GetStringSizeF( ::System::WideString string_, const _di_IGPFont AFont, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat()) = 0 /* overload */;
	virtual TIGPSizeF __fastcall GetStringSizeF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPSizeF &layoutRectSize, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat(),  ::System::PInteger codepointsFitted = ( ::System::PInteger)(0x0),  ::System::PInteger linesFilled = ( ::System::PInteger)(0x0)) = 0 /* overload */;
	virtual TIGPRectF __fastcall GetStringBoundingBoxF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AStringFormat,  ::System::PInteger codepointsFitted = ( ::System::PInteger)(0x0),  ::System::PInteger linesFilled = ( ::System::PInteger)(0x0)) = 0 /* overload */;
	virtual TIGPRectF __fastcall GetStringBoundingBoxF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AStringFormat) = 0 /* overload */;
	virtual TIGPRectF __fastcall GetStringBoundingBoxF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect) = 0 /* overload */;
	virtual TIGPRectF __fastcall GetStringBoundingBoxF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin) = 0 /* overload */;
	virtual TIGPSizeF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat()) = 0 /* overload */;
	virtual TIGPSizeF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPSizeF &layoutRectSize, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat(),  ::System::PInteger codepointsFitted = ( ::System::PInteger)(0x0),  ::System::PInteger linesFilled = ( ::System::PInteger)(0x0)) = 0 /* overload */;
	virtual TIGPRectF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AStringFormat,  ::System::PInteger codepointsFitted = ( ::System::PInteger)(0x0),  ::System::PInteger linesFilled = ( ::System::PInteger)(0x0)) = 0 /* overload */;
	virtual TIGPRectF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AStringFormat) = 0 /* overload */;
	virtual TIGPRectF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect) = 0 /* overload */;
	virtual TIGPRectF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin) = 0 /* overload */;
	virtual  ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat()) = 0 /* overload */;
	virtual  ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat()) = 0 /* overload */;
	virtual  ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat()) = 0 /* overload */;
	virtual  ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const TIGPCharacterRange *ranges, const int ranges_High, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat()) = 0 /* overload */;
	virtual  ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const TIGPCharacterRange *ranges, const int ranges_High, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat()) = 0 /* overload */;
	virtual  ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPCharacterRange *ranges, const int ranges_High, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawDriverString(PUINT16 AText, int ALength, const _di_IGPFont AFont, const _di_IGPBrush ABrush, PGPPointF APositions, int AFlags, const _di_IGPMatrix AMatrix) = 0 ;
	virtual TIGPRectF __fastcall GetDriverStringBoundingBoxF(PUINT16 AText, int ALength, const _di_IGPFont AFont, PGPPointF APositions, int AFlags, const _di_IGPMatrix AMatrix) = 0 ;
	virtual TIGPGraphics* __fastcall DrawCachedBitmap(const _di_IGPCachedBitmap cb, int x, int y) = 0 ;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const  ::System::Types::TPointF &APoint) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const TIGPRectF &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const  ::System::Types::TPoint &APoint) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const  ::System::Types::TPointF &APoint, float AOpacity) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y, float AOpacity) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const TIGPRectF &ARect, float AOpacity) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y, float AWidth, float AHeight, float AOpacity) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const  ::System::Types::TPoint &APoint, float AOpacity) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y, float AOpacity) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const TIGPRect &ARect, float AOpacity) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y, int AWidth, int AHeight, float AOpacity) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const  ::System::Types::TPoint *ADestPoints, const int ADestPoints_High) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y, float ASrcx, float ASrcy, float Arcwidth, float ASrcheight, TIGPUnit ASrcUnit) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const TIGPRectF &ADestRect, float ASrcx, float ASrcy, float Arcwidth, float ASrcheight, TIGPUnit ASrcUnit, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes(), _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High, float ASrcx, float ASrcy, float Arcwidth, float ASrcheight, TIGPUnit ASrcUnit, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes(), _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y, int ASrcx, int ASrcy, int Arcwidth, int ASrcheight, TIGPUnit ASrcUnit) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const TIGPRect &ADestRect, int ASrcx, int ASrcy, int Arcwidth, int ASrcheight, TIGPUnit ASrcUnit, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes(), _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const  ::System::Types::TPoint *ADestPoints, const int ADestPoints_High, int ASrcx, int ASrcy, int Arcwidth, int ASrcheight, TIGPUnit ASrcUnit, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes(), _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const  ::System::Types::TPointF &ADestPoint, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const  ::System::Types::TPoint &ADestPoint, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const TIGPRectF &ADestRect, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const TIGPRect &ADestRect, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const  ::System::Types::TPoint *ADestPoints, const int ADestPoints_High, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const  ::System::Types::TPointF &ADestPoint, const TIGPRectF &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const  ::System::Types::TPoint &ADestPoint, const TIGPRect &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const TIGPRectF &ADestRect, const TIGPRectF &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const TIGPRect &ADestRect, const TIGPRect &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High, const TIGPRectF &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const  ::System::Types::TPoint *ADestPoints, const int ADestPoints_High, const TIGPRect &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes()) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall SetClip(const _di_IGPGraphics AGraphics, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0)) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall SetClipF(const TIGPRectF &ARect, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0)) = 0 ;
	virtual TIGPGraphics* __fastcall SetClip(const TIGPRect &ARect, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0)) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall SetClip(const _di_IGPGraphicsPath APath, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0)) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall SetClip(const _di_IGPRegion ARegion, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0)) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall SetClip(HRGN hRgn, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0)) = 0 /* overload */;
	virtual void __fastcall SetClipProp(const _di_IGPRegion ARegion) = 0 ;
	virtual TIGPGraphics* __fastcall IntersectClipF(const TIGPRectF &ARect) = 0 ;
	virtual TIGPGraphics* __fastcall IntersectClip(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall IntersectClip(const _di_IGPRegion ARegion) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall ExcludeClipF(const TIGPRectF &ARect) = 0 ;
	virtual TIGPGraphics* __fastcall ExcludeClip(const TIGPRect &ARect) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall ExcludeClip(const _di_IGPRegion ARegion) = 0 /* overload */;
	virtual TIGPGraphics* __fastcall ResetClip() = 0 ;
	virtual TIGPGraphics* __fastcall TranslateClipF(float dx, float dy) = 0 ;
	virtual TIGPGraphics* __fastcall TranslateClip(int dx, int dy) = 0 ;
	virtual _di_IGPRegion __fastcall GetClip() = 0 ;
	virtual TIGPRectF __fastcall GetClipBoundsF() = 0 ;
	virtual TIGPRect __fastcall GetClipBounds() = 0 ;
	virtual bool __fastcall IsClipEmpty() = 0 ;
	virtual TIGPRectF __fastcall GetVisibleClipBoundsF() = 0 ;
	virtual TIGPRect __fastcall GetVisibleClipBounds() = 0 ;
	virtual bool __fastcall IsVisibleClipEmpty() = 0 ;
	virtual bool __fastcall IsVisible(int x, int y) = 0 /* overload */;
	virtual bool __fastcall IsVisible(const  ::System::Types::TPoint &APoint) = 0 /* overload */;
	virtual bool __fastcall IsVisible(int x, int y, int AWidth, int AHeight) = 0 /* overload */;
	virtual bool __fastcall IsVisible(const TIGPRect &ARect) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(float x, float y) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(const  ::System::Types::TPointF &APoint) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(float x, float y, float AWidth, float AHeight) = 0 /* overload */;
	virtual bool __fastcall IsVisibleF(const TIGPRectF &ARect) = 0 /* overload */;
	virtual unsigned __fastcall Save() = 0 ;
	virtual TIGPGraphics* __fastcall Restore(unsigned gstate) = 0 ;
	virtual unsigned __fastcall BeginContainerF(const TIGPRectF &ADstRect, const TIGPRectF &ASrcRect, TIGPUnit AUnit) = 0 /* overload */;
	virtual unsigned __fastcall BeginContainer(const TIGPRect &ADstRect, const TIGPRect &ASrcRect, TIGPUnit AUnit) = 0 /* overload */;
	virtual unsigned __fastcall BeginContainer() = 0 /* overload */;
	virtual TIGPGraphics* __fastcall EndContainer(unsigned state) = 0 ;
	virtual TIGPGraphics* __fastcall AddMetafileComment(const  ::System::Byte *data, const int data_High) = 0 ;
	__property  ::System::Types::TPoint RenderingOrigin = {read=GetRenderingOrigin, write=SetRenderingOriginProp};
	__property TIGPCompositingMode CompositingMode = {read=GetCompositingMode, write=SetCompositingModeProp};
	__property TIGPCompositingQuality CompositingQuality = {read=GetCompositingQuality, write=SetCompositingQualityProp};
	__property TIGPTextRenderingHint TextRenderingHint = {read=GetTextRenderingHint, write=SetTextRenderingHintProp};
	__property unsigned TextContrast = {read=GetTextContrast, write=SetTextContrastProp};
	__property TIGPInterpolationMode InterpolationMode = {read=GetInterpolationMode, write=SetInterpolationModeProp};
	__property TIGPSmoothingMode SmoothingMode = {read=GetSmoothingMode, write=SetSmoothingModeProp};
	__property TIGPPixelOffsetMode PixelOffsetMode = {read=GetPixelOffsetMode, write=SetPixelOffsetModeProp};
	__property _di_IGPMatrix Transform = {read=GetTransform, write=SetTransformProp};
	__property _di_IGPRegion Clip = {read=GetClip, write=SetClipProp};
	__property TIGPUnit PageUnit = {read=GetPageUnit, write=SetPageUnitProp};
	__property float PageScale = {read=GetPageScale, write=SetPageScaleProp};
	__property float DpiX = {read=GetDpiX};
	__property float DpiY = {read=GetDpiY};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPGraphics : public TIGPBase
{
	typedef TIGPBase inherited;
	
protected:
	void *FNativeGraphics;
	void __fastcall SetNativeGraphics(void * AGraphics);
	void * __fastcall GetNativeGraphics();
	void * __fastcall GetNativePen(TIGPPen* APen);
	__classmethod _di_IGPGraphics __fastcall CreateGdiPlus(void * AGraphics, bool ADummy1, bool ADummy2);
	
public:
	__classmethod _di_IGPGraphics __fastcall Create(HDC ahdc)/* overload */;
	__classmethod _di_IGPGraphics __fastcall Create(HDC ahdc, NativeUInt hdevice)/* overload */;
	__classmethod _di_IGPGraphics __fastcall Create(HWND hwnd, bool icm)/* overload */;
	__classmethod _di_IGPGraphics __fastcall Create(const _di_IGPImage AImage)/* overload */;
	
protected:
	__fastcall TIGPGraphics(void * AGraphics, bool ADummy1, bool ADummy2);
	
public:
	__fastcall TIGPGraphics(HDC ahdc)/* overload */;
	__fastcall TIGPGraphics(HDC ahdc, NativeUInt hdevice)/* overload */;
	__fastcall TIGPGraphics(HWND hwnd, bool icm)/* overload */;
	__fastcall TIGPGraphics(const _di_IGPImage AImage)/* overload */;
	__fastcall virtual ~TIGPGraphics();
	__classmethod _di_IGPGraphics __fastcall FromHDC(HDC ahdc)/* overload */;
	__classmethod _di_IGPGraphics __fastcall FromHDC(HDC ahdc, NativeUInt hdevice)/* overload */;
	__classmethod _di_IGPGraphics __fastcall FromHWND(HWND hwnd, bool icm = false);
	__classmethod _di_IGPGraphics __fastcall FromImage(const _di_IGPImage AImage);
	TIGPGraphics* __fastcall Flush(TIGPFlushIntention intention = (TIGPFlushIntention)(0x0));
	HDC __fastcall GetHDC();
	TIGPGraphics* __fastcall ReleaseHDC(HDC ahdc);
	TIGPGraphics* __fastcall SetRenderingOrigin(const  ::System::Types::TPoint &APoint);
	void __fastcall SetRenderingOriginProp(const  ::System::Types::TPoint &APoint);
	 ::System::Types::TPoint __fastcall GetRenderingOrigin();
	TIGPGraphics* __fastcall SetCompositingMode(TIGPCompositingMode ACompositingMode);
	void __fastcall SetCompositingModeProp(TIGPCompositingMode ACompositingMode);
	TIGPCompositingMode __fastcall GetCompositingMode();
	TIGPGraphics* __fastcall SetCompositingQuality(TIGPCompositingQuality ACompositingQuality);
	void __fastcall SetCompositingQualityProp(TIGPCompositingQuality ACompositingQuality);
	TIGPCompositingQuality __fastcall GetCompositingQuality();
	TIGPGraphics* __fastcall SetTextRenderingHint(TIGPTextRenderingHint newMode);
	void __fastcall SetTextRenderingHintProp(TIGPTextRenderingHint newMode);
	TIGPTextRenderingHint __fastcall GetTextRenderingHint();
	TIGPGraphics* __fastcall SetTextContrast(unsigned AContrast);
	void __fastcall SetTextContrastProp(unsigned AContrast);
	unsigned __fastcall GetTextContrast();
	TIGPInterpolationMode __fastcall GetInterpolationMode();
	TIGPGraphics* __fastcall SetInterpolationMode(TIGPInterpolationMode AInterpolationMode);
	void __fastcall SetInterpolationModeProp(TIGPInterpolationMode AInterpolationMode);
	TIGPSmoothingMode __fastcall GetSmoothingMode();
	TIGPGraphics* __fastcall SetSmoothingMode(TIGPSmoothingMode ASmoothingMode);
	void __fastcall SetSmoothingModeProp(TIGPSmoothingMode ASmoothingMode);
	TIGPPixelOffsetMode __fastcall GetPixelOffsetMode();
	TIGPGraphics* __fastcall SetPixelOffsetMode(TIGPPixelOffsetMode APixelOffsetMode);
	void __fastcall SetPixelOffsetModeProp(TIGPPixelOffsetMode APixelOffsetMode);
	TIGPGraphics* __fastcall SetTransform(const _di_IGPMatrix AMatrix);
	void __fastcall SetTransformProp(const _di_IGPMatrix AMatrix);
	TIGPGraphics* __fastcall ResetTransform();
	TIGPGraphics* __fastcall MultiplyTransform(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPGraphics* __fastcall TranslateTransform(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	TIGPGraphics* __fastcall ScaleTransform(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPGraphics* __fastcall ScaleTransform(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0))/* overload */;
	TIGPGraphics* __fastcall RotateTransform(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPMatrix __fastcall GetTransform();
	TIGPGraphics* __fastcall SetPageUnit(TIGPUnit AUnit);
	void __fastcall SetPageUnitProp(TIGPUnit AUnit);
	TIGPGraphics* __fastcall SetPageScale(float AScale);
	void __fastcall SetPageScaleProp(float AScale);
	TIGPUnit __fastcall GetPageUnit();
	float __fastcall GetPageScale();
	float __fastcall GetDpiX();
	float __fastcall GetDpiY();
	TIGPGraphics* __fastcall TransformPoints(TIGPCoordinateSpace destSpace, TIGPCoordinateSpace srcSpace,  ::System::Types::TPointF *pts, const int pts_High)/* overload */;
	TIGPGraphics* __fastcall TransformPoints(TIGPCoordinateSpace destSpace, TIGPCoordinateSpace srcSpace,  ::System::Types::TPoint *pts, const int pts_High)/* overload */;
	 ::System::Uitypes::TAlphaColor __fastcall GetNearestColor( ::System::Uitypes::TAlphaColor AColor);
	TIGPGraphics* __fastcall DrawLineF(const _di_IGPPen APen, float x1, float y1, float x2, float y2)/* overload */;
	TIGPGraphics* __fastcall DrawLineF(const _di_IGPPen APen, const  ::System::Types::TPointF &pt1, const  ::System::Types::TPointF &pt2)/* overload */;
	TIGPGraphics* __fastcall DrawLinesF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High);
	TIGPGraphics* __fastcall DrawLine(const _di_IGPPen APen, int x1, int y1, int x2, int y2)/* overload */;
	TIGPGraphics* __fastcall DrawLine(const _di_IGPPen APen, const  ::System::Types::TPoint &pt1, const  ::System::Types::TPoint &pt2)/* overload */;
	TIGPGraphics* __fastcall DrawLines(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High);
	TIGPGraphics* __fastcall DrawArcF(const _di_IGPPen APen, float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawArcF(const _di_IGPPen APen, const TIGPRectF &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawArc(const _di_IGPPen APen, int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawArc(const _di_IGPPen APen, const TIGPRect &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawBezierF(const _di_IGPPen APen, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)/* overload */;
	TIGPGraphics* __fastcall DrawBezierF(const _di_IGPPen APen, const  ::System::Types::TPointF &pt1, const  ::System::Types::TPointF &pt2, const  ::System::Types::TPointF &pt3, const  ::System::Types::TPointF &pt4)/* overload */;
	TIGPGraphics* __fastcall DrawBeziersF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High);
	TIGPGraphics* __fastcall DrawBezier(const _di_IGPPen APen, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)/* overload */;
	TIGPGraphics* __fastcall DrawBezier(const _di_IGPPen APen, const  ::System::Types::TPoint &pt1, const  ::System::Types::TPoint &pt2, const  ::System::Types::TPoint &pt3, const  ::System::Types::TPoint &pt4)/* overload */;
	TIGPGraphics* __fastcall DrawBeziers(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High);
	TIGPGraphics* __fastcall DrawRectangleF(const _di_IGPPen APen, const TIGPRectF &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawRectangleF(const _di_IGPPen APen, float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawRectanglesF(const _di_IGPPen APen, const TIGPRectF *ARects, const int ARects_High)/* overload */;
	TIGPGraphics* __fastcall DrawRectangle(const _di_IGPPen APen, const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawRectangle(const _di_IGPPen APen, int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawRectangles(const _di_IGPPen APen, const TIGPRect *ARects, const int ARects_High)/* overload */;
	TIGPGraphics* __fastcall DrawRectangleF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawRectangleF(const _di_IGPPen APen, const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawRectanglesF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF *ARects, const int ARects_High)/* overload */;
	TIGPGraphics* __fastcall DrawRectangle(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawRectangle(const _di_IGPPen APen, const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawRectangles(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect *ARects, const int ARects_High)/* overload */;
	TIGPGraphics* __fastcall DrawRoundRectangleF(const _di_IGPPen APen, const TIGPRectF &ARect, const TIGPSizeF &ACornerSize)/* overload */;
	TIGPGraphics* __fastcall DrawRoundRectangle(const _di_IGPPen APen, const TIGPRect &ARect, const TIGPSize &ACornerSize)/* overload */;
	TIGPGraphics* __fastcall DrawRoundRectangleF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF &ARect, const TIGPSizeF &ACornerSize)/* overload */;
	TIGPGraphics* __fastcall DrawRoundRectangle(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect &ARect, const TIGPSize &ACornerSize)/* overload */;
	TIGPGraphics* __fastcall DrawEllipseF(const _di_IGPPen APen, const TIGPRectF &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawEllipseF(const _di_IGPPen APen, float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawEllipsesF(const _di_IGPPen APen, const TIGPRectF *ARects, const int ARects_High)/* overload */;
	TIGPGraphics* __fastcall DrawEllipse(const _di_IGPPen APen, const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawEllipse(const _di_IGPPen APen, int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawEllipses(const _di_IGPPen APen, const TIGPRect *ARects, const int ARects_High)/* overload */;
	TIGPGraphics* __fastcall DrawEllipseF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawEllipseF(const _di_IGPPen APen, const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawEllipsesF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF *ARects, const int ARects_High)/* overload */;
	TIGPGraphics* __fastcall DrawEllipse(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawEllipse(const _di_IGPPen APen, const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawEllipses(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect *ARects, const int ARects_High)/* overload */;
	TIGPGraphics* __fastcall DrawPieF(const _di_IGPPen APen, const TIGPRectF &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawPieF(const _di_IGPPen APen, float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawPie(const _di_IGPPen APen, const TIGPRect &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawPie(const _di_IGPPen APen, int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawPieF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRectF &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawPieF(const _di_IGPPen APen, const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawPie(const _di_IGPPen APen, const _di_IGPBrush ABrush, const TIGPRect &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawPie(const _di_IGPPen APen, const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall DrawPolygonF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawPolygon(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawPolygonF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawPolygonF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPFillMode AFillMode)/* overload */;
	TIGPGraphics* __fastcall DrawPolygon(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawPolygon(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPFillMode AFillMode)/* overload */;
	TIGPGraphics* __fastcall DrawPath(const _di_IGPPen APen, const _di_IGPGraphicsPath APath)/* overload */;
	TIGPGraphics* __fastcall DrawPath(const _di_IGPPen APen, const _di_IGPBrush ABrush, const _di_IGPGraphicsPath APath)/* overload */;
	TIGPGraphics* __fastcall DrawCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High, float ATension)/* overload */;
	TIGPGraphics* __fastcall DrawCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High, int AOffset, int ANumberOfSegments, float ATension = 5.000000E-01f)/* overload */;
	TIGPGraphics* __fastcall DrawCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High, float ATension)/* overload */;
	TIGPGraphics* __fastcall DrawCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High, int AOffset, int ANumberOfSegments, float ATension = 5.000000E-01f)/* overload */;
	TIGPGraphics* __fastcall DrawClosedCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawClosedCurveF(const _di_IGPPen APen, const  ::System::Types::TPointF *APoints, const int APoints_High, float ATension)/* overload */;
	TIGPGraphics* __fastcall DrawClosedCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawClosedCurve(const _di_IGPPen APen, const  ::System::Types::TPoint *APoints, const int APoints_High, float ATension)/* overload */;
	TIGPGraphics* __fastcall DrawClosedCurveF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawClosedCurveF(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPFillMode AFillMode, float ATension = 5.000000E-01f)/* overload */;
	TIGPGraphics* __fastcall DrawClosedCurve(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawClosedCurve(const _di_IGPPen APen, const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPFillMode AFillMode, float ATension = 5.000000E-01f)/* overload */;
	TIGPGraphics* __fastcall Clear( ::System::Uitypes::TAlphaColor AColor);
	TIGPGraphics* __fastcall FillRectangleF(const _di_IGPBrush ABrush, const TIGPRectF &ARect)/* overload */;
	TIGPGraphics* __fastcall FillRectangleF(const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphics* __fastcall FillRectanglesF(const _di_IGPBrush ABrush, const TIGPRectF *ARects, const int ARects_High);
	TIGPGraphics* __fastcall FillRectangle(const _di_IGPBrush ABrush, const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall FillRectangle(const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphics* __fastcall FillRectangles(const _di_IGPBrush ABrush, const TIGPRect *ARects, const int ARects_High);
	TIGPGraphics* __fastcall FillRoundRectangleF(const _di_IGPBrush ABrush, const TIGPRectF &ARect, const TIGPSizeF &ACornerSize);
	TIGPGraphics* __fastcall FillRoundRectangle(const _di_IGPBrush ABrush, const TIGPRect &ARect, const TIGPSize &ACornerSize);
	TIGPGraphics* __fastcall FillPolygonF(const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall FillPolygonF(const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPFillMode AFillMode)/* overload */;
	TIGPGraphics* __fastcall FillPolygon(const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall FillPolygon(const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPFillMode AFillMode)/* overload */;
	TIGPGraphics* __fastcall FillEllipseF(const _di_IGPBrush ABrush, const TIGPRectF &ARect)/* overload */;
	TIGPGraphics* __fastcall FillEllipseF(const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphics* __fastcall FillEllipsesF(const _di_IGPBrush ABrush, const TIGPRectF *ARects, const int ARects_High);
	TIGPGraphics* __fastcall FillEllipse(const _di_IGPBrush ABrush, const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall FillEllipse(const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphics* __fastcall FillEllipses(const _di_IGPBrush ABrush, const TIGPRect *ARects, const int ARects_High);
	TIGPGraphics* __fastcall FillPieF(const _di_IGPBrush ABrush, const TIGPRectF &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall FillPieF(const _di_IGPBrush ABrush, float x, float y, float AWidth, float AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall FillPie(const _di_IGPBrush ABrush, const TIGPRect &ARect, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall FillPie(const _di_IGPBrush ABrush, int x, int y, int AWidth, int AHeight, float AStartAngle, float ASweepAngle)/* overload */;
	TIGPGraphics* __fastcall FillPath(const _di_IGPBrush ABrush, const _di_IGPGraphicsPath APath);
	TIGPGraphics* __fastcall FillClosedCurveF(const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall FillClosedCurveF(const _di_IGPBrush ABrush, const  ::System::Types::TPointF *APoints, const int APoints_High, TIGPFillMode AFillMode, float ATension = 5.000000E-01f)/* overload */;
	TIGPGraphics* __fastcall FillClosedCurve(const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High)/* overload */;
	TIGPGraphics* __fastcall FillClosedCurve(const _di_IGPBrush ABrush, const  ::System::Types::TPoint *APoints, const int APoints_High, TIGPFillMode AFillMode, float ATension = 5.000000E-01f)/* overload */;
	TIGPGraphics* __fastcall FillRegion(const _di_IGPBrush ABrush, const _di_IGPRegion ARegion);
	TIGPGraphics* __fastcall DrawStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AStringFormat, const _di_IGPBrush ABrush)/* overload */;
	TIGPGraphics* __fastcall DrawStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPBrush ABrush)/* overload */;
	TIGPGraphics* __fastcall DrawStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPBrush ABrush)/* overload */;
	TIGPGraphics* __fastcall DrawStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AStringFormat, const _di_IGPBrush ABrush)/* overload */;
	TIGPGraphics* __fastcall DrawString( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRect &ALayoutRect, const _di_IGPStringFormat AStringFormat, const _di_IGPBrush ABrush)/* overload */;
	TIGPGraphics* __fastcall DrawString( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRect &ALayoutRect, const _di_IGPBrush ABrush)/* overload */;
	TIGPGraphics* __fastcall DrawString( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPoint &AOrigin, const _di_IGPBrush ABrush)/* overload */;
	TIGPGraphics* __fastcall DrawString( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPoint &AOrigin, const _di_IGPStringFormat AStringFormat, const _di_IGPBrush ABrush)/* overload */;
	TIGPSizeF __fastcall GetStringSizeF( ::System::WideString string_, const _di_IGPFont AFont, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat())/* overload */;
	TIGPSizeF __fastcall GetStringSizeF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPSizeF &layoutRectSize, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat(),  ::System::PInteger codepointsFitted = ( ::System::PInteger)(0x0),  ::System::PInteger linesFilled = ( ::System::PInteger)(0x0))/* overload */;
	TIGPRectF __fastcall GetStringBoundingBoxF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AStringFormat,  ::System::PInteger codepointsFitted = ( ::System::PInteger)(0x0),  ::System::PInteger linesFilled = ( ::System::PInteger)(0x0))/* overload */;
	TIGPRectF __fastcall GetStringBoundingBoxF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AStringFormat)/* overload */;
	TIGPRectF __fastcall GetStringBoundingBoxF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect)/* overload */;
	TIGPRectF __fastcall GetStringBoundingBoxF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin)/* overload */;
	TIGPSizeF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat())/* overload */;
	TIGPSizeF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPSizeF &layoutRectSize, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat(),  ::System::PInteger codepointsFitted = ( ::System::PInteger)(0x0),  ::System::PInteger linesFilled = ( ::System::PInteger)(0x0))/* overload */;
	TIGPRectF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AStringFormat,  ::System::PInteger codepointsFitted = ( ::System::PInteger)(0x0),  ::System::PInteger linesFilled = ( ::System::PInteger)(0x0))/* overload */;
	TIGPRectF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AStringFormat)/* overload */;
	TIGPRectF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect)/* overload */;
	TIGPRectF __fastcall MeasureStringF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin)/* overload */;
	 ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat())/* overload */;
	 ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat())/* overload */;
	 ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat())/* overload */;
	 ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPRectF &ALayoutRect, const TIGPCharacterRange *ranges, const int ranges_High, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat())/* overload */;
	 ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const  ::System::Types::TPointF &AOrigin, const TIGPCharacterRange *ranges, const int ranges_High, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat())/* overload */;
	 ::System::DynamicArray<_di_IGPRegion> __fastcall MeasureCharacterRangesF( ::System::WideString string_, const _di_IGPFont AFont, const TIGPCharacterRange *ranges, const int ranges_High, const _di_IGPStringFormat AStringFormat = _di_IGPStringFormat())/* overload */;
	TIGPGraphics* __fastcall DrawDriverString(PUINT16 AText, int ALength, const _di_IGPFont AFont, const _di_IGPBrush ABrush, PGPPointF APositions, int AFlags, const _di_IGPMatrix AMatrix);
	TIGPRectF __fastcall GetDriverStringBoundingBoxF(PUINT16 AText, int ALength, const _di_IGPFont AFont, PGPPointF APositions, int AFlags, const _di_IGPMatrix AMatrix);
	TIGPGraphics* __fastcall DrawCachedBitmap(const _di_IGPCachedBitmap cb, int x, int y);
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const  ::System::Types::TPointF &APoint)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const TIGPRectF &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y, float AWidth, float AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const  ::System::Types::TPoint &APoint)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y, int AWidth, int AHeight)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const  ::System::Types::TPointF &APoint, float AOpacity)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y, float AOpacity)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const TIGPRectF &ARect, float AOpacity)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y, float AWidth, float AHeight, float AOpacity)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const  ::System::Types::TPoint &APoint, float AOpacity)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y, float AOpacity)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const TIGPRect &ARect, float AOpacity)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y, int AWidth, int AHeight, float AOpacity)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const  ::System::Types::TPoint *ADestPoints, const int ADestPoints_High)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, float x, float y, float ASrcx, float ASrcy, float ASrcwidth, float ASrcheight, TIGPUnit ASrcUnit)/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const TIGPRectF &ADestRect, float ASrcx, float ASrcy, float ASrcwidth, float ASrcheight, TIGPUnit ASrcUnit, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes(), _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc())/* overload */;
	TIGPGraphics* __fastcall DrawImageF(const _di_IGPImage AImage, const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High, float ASrcx, float ASrcy, float ASrcwidth, float ASrcheight, TIGPUnit ASrcUnit, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes(), _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc())/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, int x, int y, int ASrcx, int ASrcy, int ASrcwidth, int ASrcheight, TIGPUnit ASrcUnit)/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const TIGPRect &ADestRect, int ASrcx, int ASrcy, int ASrcwidth, int ASrcheight, TIGPUnit ASrcUnit, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes(), _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc())/* overload */;
	TIGPGraphics* __fastcall DrawImage(const _di_IGPImage AImage, const  ::System::Types::TPoint *ADestPoints, const int ADestPoints_High, int ASrcx, int ASrcy, int ASrcwidth, int ASrcheight, TIGPUnit ASrcUnit, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes(), _di_TIGPImageAbortProc ACallback = _di_TIGPImageAbortProc())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const  ::System::Types::TPointF &ADestPoint, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const  ::System::Types::TPoint &ADestPoint, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const TIGPRectF &ADestRect, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const TIGPRect &ADestRect, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const  ::System::Types::TPoint *ADestPoints, const int ADestPoints_High, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const  ::System::Types::TPointF &ADestPoint, const TIGPRectF &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const  ::System::Types::TPoint &ADestPoint, const TIGPRect &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const TIGPRectF &ADestRect, const TIGPRectF &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const TIGPRect &ADestRect, const TIGPRect &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafileF(const _di_IGPMetafile AMetafile, const  ::System::Types::TPointF *ADestPoints, const int ADestPoints_High, const TIGPRectF &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall EnumerateMetafile(const _di_IGPMetafile AMetafile, const  ::System::Types::TPoint *ADestPoints, const int ADestPoints_High, const TIGPRect &ASrcRect, TIGPUnit ASrcUnit, _di_TIGPEnumerateMetafileProc ACallback, const _di_IGPImageAttributes AImageAttributes = _di_IGPImageAttributes())/* overload */;
	TIGPGraphics* __fastcall SetClip(const _di_IGPGraphics AGraphics, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0))/* overload */;
	TIGPGraphics* __fastcall SetClipF(const TIGPRectF &ARect, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0));
	TIGPGraphics* __fastcall SetClip(const TIGPRect &ARect, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0))/* overload */;
	TIGPGraphics* __fastcall SetClip(const _di_IGPGraphicsPath APath, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0))/* overload */;
	TIGPGraphics* __fastcall SetClip(const _di_IGPRegion ARegion, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0))/* overload */;
	TIGPGraphics* __fastcall SetClip(HRGN hRgn, TIGPCombineMode ACombineMode = (TIGPCombineMode)(0x0))/* overload */;
	void __fastcall SetClipProp(const _di_IGPRegion ARegion);
	TIGPGraphics* __fastcall IntersectClipF(const TIGPRectF &ARect);
	TIGPGraphics* __fastcall IntersectClip(const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall IntersectClip(const _di_IGPRegion ARegion)/* overload */;
	TIGPGraphics* __fastcall ExcludeClipF(const TIGPRectF &ARect);
	TIGPGraphics* __fastcall ExcludeClip(const TIGPRect &ARect)/* overload */;
	TIGPGraphics* __fastcall ExcludeClip(const _di_IGPRegion ARegion)/* overload */;
	TIGPGraphics* __fastcall ResetClip();
	TIGPGraphics* __fastcall TranslateClipF(float dx, float dy)/* overload */;
	TIGPGraphics* __fastcall TranslateClip(int dx, int dy)/* overload */;
	_di_IGPRegion __fastcall GetClip();
	TIGPRectF __fastcall GetClipBoundsF();
	TIGPRect __fastcall GetClipBounds();
	bool __fastcall IsClipEmpty();
	TIGPRectF __fastcall GetVisibleClipBoundsF();
	TIGPRect __fastcall GetVisibleClipBounds();
	bool __fastcall IsVisibleClipEmpty();
	bool __fastcall IsVisible(int x, int y)/* overload */;
	bool __fastcall IsVisible(const  ::System::Types::TPoint &APoint)/* overload */;
	bool __fastcall IsVisible(int x, int y, int AWidth, int AHeight)/* overload */;
	bool __fastcall IsVisible(const TIGPRect &ARect)/* overload */;
	bool __fastcall IsVisibleF(float x, float y)/* overload */;
	bool __fastcall IsVisibleF(const  ::System::Types::TPointF &APoint)/* overload */;
	bool __fastcall IsVisibleF(float x, float y, float AWidth, float AHeight)/* overload */;
	bool __fastcall IsVisibleF(const TIGPRectF &ARect)/* overload */;
	unsigned __fastcall Save();
	TIGPGraphics* __fastcall Restore(unsigned gstate);
	unsigned __fastcall BeginContainerF(const TIGPRectF &ADstRect, const TIGPRectF &ASrcRect, TIGPUnit AUnit)/* overload */;
	unsigned __fastcall BeginContainer(const TIGPRect &ADstRect, const TIGPRect &ASrcRect, TIGPUnit AUnit)/* overload */;
	unsigned __fastcall BeginContainer()/* overload */;
	TIGPGraphics* __fastcall EndContainer(unsigned state);
	TIGPGraphics* __fastcall AddMetafileComment(const  ::System::Byte *AData, const int AData_High);
	__classmethod HPALETTE __fastcall GetHalftonePalette();
	
protected:
	_di_IGPTransformable __fastcall SetTransformT(const _di_IGPMatrix AMatrix);
	_di_IGPTransformable __fastcall ResetTransformT();
	_di_IGPTransformable __fastcall MultiplyTransformT(const _di_IGPMatrix AMatrix, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall TranslateTransformT(float dx, float dy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformT(float sx, float sy, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall ScaleTransformXYT(float s, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
	_di_IGPTransformable __fastcall RotateTransformT(float AAngle, TIGPMatrixOrder AOrder = (TIGPMatrixOrder)(0x0));
private:
	void *__IGPTransformable;	// IGPTransformable 
	void *__IGPGraphics;	// IGPGraphics 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9EEFBE7F-9DA0-47D4-B426-75A0047CF6BE}
	operator _di_IGPTransformable()
	{
		_di_IGPTransformable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPTransformable*(void) { return (IGPTransformable*)&__IGPTransformable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {95C573E8-DD62-41D4-83DE-2F32799BD922}
	operator _di_IGPGraphics()
	{
		_di_IGPGraphics intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPGraphics*(void) { return (IGPGraphics*)&__IGPGraphics; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4E024341-42A2-499E-8EA3-884DA121AF7A}") IGPAdjustableArrowCap  : public IGPCustomLineCap 
{
	virtual TIGPAdjustableArrowCap* __fastcall SetHeight(float height) = 0 ;
	virtual void __fastcall SetHeightProp(float height) = 0 ;
	virtual float __fastcall GetHeight() = 0 ;
	virtual TIGPAdjustableArrowCap* __fastcall SetWidth(float width) = 0 ;
	virtual void __fastcall SetWidthProp(float width) = 0 ;
	virtual float __fastcall GetWidth() = 0 ;
	virtual TIGPAdjustableArrowCap* __fastcall SetMiddleInset(float middleInset) = 0 ;
	virtual void __fastcall SetMiddleInsetProp(float middleInset) = 0 ;
	virtual float __fastcall GetMiddleInset() = 0 ;
	virtual TIGPAdjustableArrowCap* __fastcall SetFillState(bool isFilled) = 0 ;
	virtual bool __fastcall IsFilled() = 0 ;
	__property float Width = {read=GetWidth, write=SetWidthProp};
	__property float Height = {read=GetHeight, write=SetHeightProp};
	__property float MiddleInset = {read=GetMiddleInset, write=SetMiddleInsetProp};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIGPAdjustableArrowCap : public TIGPCustomLineCap
{
	typedef TIGPCustomLineCap inherited;
	
public:
	__classmethod _di_IGPAdjustableArrowCap __fastcall Create(float height, float width, bool isFilled = true);
	__fastcall TIGPAdjustableArrowCap(float height, float width, bool isFilled);
	TIGPAdjustableArrowCap* __fastcall SetHeight(float height);
	void __fastcall SetHeightProp(float height);
	float __fastcall GetHeight();
	TIGPAdjustableArrowCap* __fastcall SetWidth(float width);
	void __fastcall SetWidthProp(float width);
	float __fastcall GetWidth();
	TIGPAdjustableArrowCap* __fastcall SetMiddleInset(float middleInset);
	void __fastcall SetMiddleInsetProp(float middleInset);
	float __fastcall GetMiddleInset();
	TIGPAdjustableArrowCap* __fastcall SetFillState(bool isFilled);
	bool __fastcall IsFilled();
protected:
	/* TIGPCustomLineCap.CreateGdiPlusObject */ inline __fastcall TIGPAdjustableArrowCap(void * nativeCap, bool ADummy) : TIGPCustomLineCap(nativeCap, ADummy) { }
	
public:
	/* TIGPCustomLineCap.Destroy */ inline __fastcall virtual ~TIGPAdjustableArrowCap() { }
	
public:
	/* TObject.Create */ inline __fastcall TIGPAdjustableArrowCap() : TIGPCustomLineCap() { }
	
private:
	void *__IGPAdjustableArrowCap;	// IGPAdjustableArrowCap 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4E024341-42A2-499E-8EA3-884DA121AF7A}
	operator _di_IGPAdjustableArrowCap()
	{
		_di_IGPAdjustableArrowCap intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGPAdjustableArrowCap*(void) { return (IGPAdjustableArrowCap*)&__IGPAdjustableArrowCap; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E9766E82-C370-40C9-AEDA-4A07CBC9BC92}") IGPMetafile  : public IGPImage 
{
	virtual _di_IGPMetafileHeader __fastcall GetMetafileHeader() = 0 ;
	virtual HENHMETAFILE __fastcall GetHENHMETAFILE() = 0 ;
	virtual TIGPMetafile* __fastcall PlayRecord(TIGPEmfPlusRecordType recordType, unsigned AFlags, unsigned dataSize,  ::System::PByte data) = 0 ;
	virtual TIGPMetafile* __fastcall SetDownLevelRasterizationLimit(const unsigned metafileRasterizationLimitDpi) = 0 ;
	virtual void __fastcall SetDownLevelRasterizationLimitProp(const unsigned metafileRasterizationLimitDpi) = 0 ;
	virtual unsigned __fastcall GetDownLevelRasterizationLimit() = 0 ;
	virtual unsigned __fastcall EmfToWmfBits(HENHMETAFILE hemf, unsigned cbData16,  ::System::PByte pData16, int iMapMode = 0x8, TIGPEmfToWmfBitsFlags eFlags = (TIGPEmfToWmfBitsFlags)(0x0)) = 0 ;
	__property unsigned DownLevelRasterizationLimit = {read=GetDownLevelRasterizationLimit, write=SetDownLevelRasterizationLimitProp};
	__property _di_IGPMetafileHeader Header = {read=GetMetafileHeader};
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Igdiplus__1 GPRGBAColorNames;
static const  ::System::Int8 GPHatchStyleTotal =  ::System::Int8(0x35);
static const TIGPHatchStyle GPHatchStyleLargeGrid = (TIGPHatchStyle)(4);
static const TIGPHatchStyle GPHatchStyleMin = (TIGPHatchStyle)(0);
static const TIGPHatchStyle GPHatchStyleMax = (TIGPHatchStyle)(52);
static const TIGPObjectType GPObjectTypeMax = (TIGPObjectType)(9);
static const TIGPObjectType GPObjectTypeMin = (TIGPObjectType)(1);
static const  ::System::Int8 GPStringFormatFlagsDirectionRightToLeft =  ::System::Int8(0x1);
static const  ::System::Int8 GPStringFormatFlagsDirectionVertical =  ::System::Int8(0x2);
static const  ::System::Int8 GPStringFormatFlagsNoFitBlackBox =  ::System::Int8(0x4);
static const  ::System::Int8 GPStringFormatFlagsDisplayFormatControl =  ::System::Int8(0x20);
static const  ::System::Word GPStringFormatFlagsNoFontFallback =  ::System::Word(0x400);
static const  ::System::Word GPStringFormatFlagsMeasureTrailingSpaces =  ::System::Word(0x800);
static const  ::System::Word GPStringFormatFlagsNoWrap =  ::System::Word(0x1000);
static const  ::System::Word GPStringFormatFlagsLineLimit =  ::System::Word(0x2000);
static const  ::System::Word GPStringFormatFlagsNoClip =  ::System::Word(0x4000);
static const  ::System::Int8 DriverStringOptionsCmapLookup =  ::System::Int8(0x1);
static const  ::System::Int8 DriverStringOptionsVertical =  ::System::Int8(0x2);
static const  ::System::Int8 DriverStringOptionsRealizedAdvance =  ::System::Int8(0x4);
static const  ::System::Int8 DriverStringOptionsLimitSubpixel =  ::System::Int8(0x8);
extern DELPHI_PACKAGE int EncoderParameterValueTypeByte;
extern DELPHI_PACKAGE int EncoderParameterValueTypeASCII;
extern DELPHI_PACKAGE int EncoderParameterValueTypeShort;
extern DELPHI_PACKAGE int EncoderParameterValueTypeLong;
extern DELPHI_PACKAGE int EncoderParameterValueTypeRational;
extern DELPHI_PACKAGE int EncoderParameterValueTypeLongRange;
extern DELPHI_PACKAGE int EncoderParameterValueTypeUndefined;
extern DELPHI_PACKAGE int EncoderParameterValueTypeRationalRange;
static const int GPPixelFormatIndexed = int(0x10000);
static const int GPPixelFormatGDI = int(0x20000);
static const int GPPixelFormatAlpha = int(0x40000);
static const int GPPixelFormatPAlpha = int(0x80000);
static const int GPPixelFormatExtended = int(0x100000);
static const int GPPixelFormatCanonical = int(0x200000);
static const  ::System::Int8 GPPixelFormatUndefined =  ::System::Int8(0x0);
static const  ::System::Int8 GPPixelFormatDontCare =  ::System::Int8(0x0);
static const int GPPixelFormat1bppIndexed = int(0x30101);
static const int GPPixelFormat4bppIndexed = int(0x30402);
static const int GPPixelFormat8bppIndexed = int(0x30803);
static const int GPPixelFormat16bppGrayScale = int(0x101004);
static const int GPPixelFormat16bppRGB555 = int(0x21005);
static const int GPPixelFormat16bppRGB565 = int(0x21006);
static const int GPPixelFormat16bppARGB1555 = int(0x61007);
static const int GPPixelFormat24bppRGB = int(0x21808);
static const int GPPixelFormat32bppRGB = int(0x22009);
static const int GPPixelFormat32bppARGB = int(0x26200a);
static const int GPPixelFormat32bppPARGB = int(0xe200b);
static const int GPPixelFormat48bppRGB = int(0x10300c);
static const int GPPixelFormat64bppARGB = int(0x34400d);
static const int GPPixelFormat64bppPARGB = int(0x1c400e);
static const  ::System::Int8 GPPixelFormatMax =  ::System::Int8(0xf);
static const unsigned aclAliceBlue = unsigned(0xfff0f8ff);
static const unsigned aclAntiqueWhite = unsigned(0xfffaebd7);
static const unsigned aclAqua = unsigned(0xff00ffff);
static const unsigned aclAquamarine = unsigned(0xff7fffd4);
static const unsigned aclAzure = unsigned(0xfff0ffff);
static const unsigned aclBeige = unsigned(0xfff5f5dc);
static const unsigned aclBisque = unsigned(0xffffe4c4);
static const unsigned aclBlack = unsigned(0xff000000);
static const unsigned aclBlanchedAlmond = unsigned(0xffffebcd);
static const unsigned aclBlue = unsigned(0xff0000ff);
static const unsigned aclBlueViolet = unsigned(0xff8a2be2);
static const unsigned aclBrown = unsigned(0xffa52a2a);
static const unsigned aclBurlyWood = unsigned(0xffdeb887);
static const unsigned aclCadetBlue = unsigned(0xff5f9ea0);
static const unsigned aclChartreuse = unsigned(0xff7fff00);
static const unsigned aclChocolate = unsigned(0xffd2691e);
static const unsigned aclCoral = unsigned(0xffff7f50);
static const unsigned aclCornflowerBlue = unsigned(0xff6495ed);
static const unsigned aclCornsilk = unsigned(0xfffff8dc);
static const unsigned aclCrimson = unsigned(0xffdc143c);
static const unsigned aclCyan = unsigned(0xff00ffff);
static const unsigned aclDarkBlue = unsigned(0xff00008b);
static const unsigned aclDarkCyan = unsigned(0xff008b8b);
static const unsigned aclDarkGoldenrod = unsigned(0xffb8860b);
static const unsigned aclDarkGray = unsigned(0xffa9a9a9);
static const unsigned aclDarkGreen = unsigned(0xff006400);
static const unsigned aclDarkKhaki = unsigned(0xffbdb76b);
static const unsigned aclDarkMagenta = unsigned(0xff8b008b);
static const unsigned aclDarkOliveGreen = unsigned(0xff556b2f);
static const unsigned aclDarkOrange = unsigned(0xffff8c00);
static const unsigned aclDarkOrchid = unsigned(0xff9932cc);
static const unsigned aclDarkRed = unsigned(0xff8b0000);
static const unsigned aclDarkSalmon = unsigned(0xffe9967a);
static const unsigned aclDarkSeaGreen = unsigned(0xff8fbc8b);
static const unsigned aclDarkSlateBlue = unsigned(0xff483d8b);
static const unsigned aclDarkSlateGray = unsigned(0xff2f4f4f);
static const unsigned aclDarkTurquoise = unsigned(0xff00ced1);
static const unsigned aclDarkViolet = unsigned(0xff9400d3);
static const unsigned aclDeepPink = unsigned(0xffff1493);
static const unsigned aclDeepSkyBlue = unsigned(0xff00bfff);
static const unsigned aclDimGray = unsigned(0xff696969);
static const unsigned aclDodgerBlue = unsigned(0xff1e90ff);
static const unsigned aclFirebrick = unsigned(0xffb22222);
static const unsigned aclFloralWhite = unsigned(0xfffffaf0);
static const unsigned aclForestGreen = unsigned(0xff228b22);
static const unsigned aclFuchsia = unsigned(0xffff00ff);
static const unsigned aclGainsboro = unsigned(0xffdcdcdc);
static const unsigned aclGhostWhite = unsigned(0xfff8f8ff);
static const unsigned aclGold = unsigned(0xffffd700);
static const unsigned aclGoldenrod = unsigned(0xffdaa520);
static const unsigned aclGray = unsigned(0xff808080);
static const unsigned aclGreen = unsigned(0xff008000);
static const unsigned aclGreenYellow = unsigned(0xffadff2f);
static const unsigned aclHoneydew = unsigned(0xfff0fff0);
static const unsigned aclHotPink = unsigned(0xffff69b4);
static const unsigned aclIndianRed = unsigned(0xffcd5c5c);
static const unsigned aclIndigo = unsigned(0xff4b0082);
static const unsigned aclIvory = unsigned(0xfffffff0);
static const unsigned aclKhaki = unsigned(0xfff0e68c);
static const unsigned aclLavender = unsigned(0xffe6e6fa);
static const unsigned aclLavenderBlush = unsigned(0xfffff0f5);
static const unsigned aclLawnGreen = unsigned(0xff7cfc00);
static const unsigned aclLemonChiffon = unsigned(0xfffffacd);
static const unsigned aclLightBlue = unsigned(0xffadd8e6);
static const unsigned aclLightCoral = unsigned(0xfff08080);
static const unsigned aclLightCyan = unsigned(0xffe0ffff);
static const unsigned aclLightGoldenrodYellow = unsigned(0xfffafad2);
static const unsigned aclLightGray = unsigned(0xffd3d3d3);
static const unsigned aclLightGreen = unsigned(0xff90ee90);
static const unsigned aclLightPink = unsigned(0xffffb6c1);
static const unsigned aclLightSalmon = unsigned(0xffffa07a);
static const unsigned aclLightSeaGreen = unsigned(0xff20b2aa);
static const unsigned aclLightSkyBlue = unsigned(0xff87cefa);
static const unsigned aclLightSlateGray = unsigned(0xff778899);
static const unsigned aclLightSteelBlue = unsigned(0xffb0c4de);
static const unsigned aclLightYellow = unsigned(0xffffffe0);
static const unsigned aclLime = unsigned(0xff00ff00);
static const unsigned aclLimeGreen = unsigned(0xff32cd32);
static const unsigned aclLinen = unsigned(0xfffaf0e6);
static const unsigned aclMagenta = unsigned(0xffff00ff);
static const unsigned aclMaroon = unsigned(0xff800000);
static const unsigned aclMediumAquamarine = unsigned(0xff66cdaa);
static const unsigned aclMediumBlue = unsigned(0xff0000cd);
static const unsigned aclMediumOrchid = unsigned(0xffba55d3);
static const unsigned aclMediumPurple = unsigned(0xff9370db);
static const unsigned aclMediumSeaGreen = unsigned(0xff3cb371);
static const unsigned aclMediumSlateBlue = unsigned(0xff7b68ee);
static const unsigned aclMediumSpringGreen = unsigned(0xff00fa9a);
static const unsigned aclMediumTurquoise = unsigned(0xff48d1cc);
static const unsigned aclMediumVioletRed = unsigned(0xffc71585);
static const unsigned aclMidnightBlue = unsigned(0xff191970);
static const unsigned aclMintCream = unsigned(0xfff5fffa);
static const unsigned aclMistyRose = unsigned(0xffffe4e1);
static const unsigned aclMoccasin = unsigned(0xffffe4b5);
static const unsigned aclNavajoWhite = unsigned(0xffffdead);
static const unsigned aclNavy = unsigned(0xff000080);
static const unsigned aclOldLace = unsigned(0xfffdf5e6);
static const unsigned aclOlive = unsigned(0xff808000);
static const unsigned aclOliveDrab = unsigned(0xff6b8e23);
static const unsigned aclOrange = unsigned(0xffffa500);
static const unsigned aclOrangeRed = unsigned(0xffff4500);
static const unsigned aclOrchid = unsigned(0xffda70d6);
static const unsigned aclPaleGoldenrod = unsigned(0xffeee8aa);
static const unsigned aclPaleGreen = unsigned(0xff98fb98);
static const unsigned aclPaleTurquoise = unsigned(0xffafeeee);
static const unsigned aclPaleVioletRed = unsigned(0xffdb7093);
static const unsigned aclPapayaWhip = unsigned(0xffffefd5);
static const unsigned aclPeachPuff = unsigned(0xffffdab9);
static const unsigned aclPeru = unsigned(0xffcd853f);
static const unsigned aclPink = unsigned(0xffffc0cb);
static const unsigned aclPlum = unsigned(0xffdda0dd);
static const unsigned aclPowderBlue = unsigned(0xffb0e0e6);
static const unsigned aclPurple = unsigned(0xff800080);
static const unsigned aclRed = unsigned(0xffff0000);
static const unsigned aclRosyBrown = unsigned(0xffbc8f8f);
static const unsigned aclRoyalBlue = unsigned(0xff4169e1);
static const unsigned aclSaddleBrown = unsigned(0xff8b4513);
static const unsigned aclSalmon = unsigned(0xfffa8072);
static const unsigned aclSandyBrown = unsigned(0xfff4a460);
static const unsigned aclSeaGreen = unsigned(0xff2e8b57);
static const unsigned aclSeaShell = unsigned(0xfffff5ee);
static const unsigned aclSienna = unsigned(0xffa0522d);
static const unsigned aclSilver = unsigned(0xffc0c0c0);
static const unsigned aclSkyBlue = unsigned(0xff87ceeb);
static const unsigned aclSlateBlue = unsigned(0xff6a5acd);
static const unsigned aclSlateGray = unsigned(0xff708090);
static const unsigned aclSnow = unsigned(0xfffffafa);
static const unsigned aclSpringGreen = unsigned(0xff00ff7f);
static const unsigned aclSteelBlue = unsigned(0xff4682b4);
static const unsigned aclTan = unsigned(0xffd2b48c);
static const unsigned aclTeal = unsigned(0xff008080);
static const unsigned aclThistle = unsigned(0xffd8bfd8);
static const unsigned aclTomato = unsigned(0xffff6347);
static const  ::System::Int8 aclTransparent =  ::System::Int8(0x0);
static const unsigned aclTurquoise = unsigned(0xff40e0d0);
static const unsigned aclViolet = unsigned(0xffee82ee);
static const unsigned aclWheat = unsigned(0xfff5deb3);
static const unsigned aclWhite = unsigned(0xffffffff);
static const unsigned aclWhiteSmoke = unsigned(0xfff5f5f5);
static const unsigned aclYellow = unsigned(0xffffff00);
static const unsigned aclYellowGreen = unsigned(0xff9acd32);
extern DELPHI_PACKAGE int GPPropertyTagTypeByte;
extern DELPHI_PACKAGE int GPPropertyTagTypeASCII;
extern DELPHI_PACKAGE int GPPropertyTagTypeShort;
extern DELPHI_PACKAGE int GPPropertyTagTypeLong;
extern DELPHI_PACKAGE int GPPropertyTagTypeRational;
extern DELPHI_PACKAGE int GPPropertyTagTypeUndefined;
extern DELPHI_PACKAGE int GPPropertyTagTypeSLONG;
extern DELPHI_PACKAGE int GPPropertyTagTypeSRational;
static const  ::System::Word GPPropertyTagExifIFD =  ::System::Word(0x8769);
static const  ::System::Word GPPropertyTagGpsIFD =  ::System::Word(0x8825);
static const  ::System::Byte GPPropertyTagNewSubfileType =  ::System::Byte(0xfe);
static const  ::System::Byte GPPropertyTagSubfileType =  ::System::Byte(0xff);
static const  ::System::Word GPPropertyTagImageWidth =  ::System::Word(0x100);
static const  ::System::Word GPPropertyTagImageHeight =  ::System::Word(0x101);
static const  ::System::Word GPPropertyTagBitsPerSample =  ::System::Word(0x102);
static const  ::System::Word GPPropertyTagCompression =  ::System::Word(0x103);
static const  ::System::Word GPPropertyTagPhotometricInterp =  ::System::Word(0x106);
static const  ::System::Word GPPropertyTagThreshHolding =  ::System::Word(0x107);
static const  ::System::Word GPPropertyTagCellWidth =  ::System::Word(0x108);
static const  ::System::Word GPPropertyTagCellHeight =  ::System::Word(0x109);
static const  ::System::Word GPPropertyTagFillOrder =  ::System::Word(0x10a);
static const  ::System::Word GPPropertyTagDocumentName =  ::System::Word(0x10d);
static const  ::System::Word GPPropertyTagImageDescription =  ::System::Word(0x10e);
static const  ::System::Word GPPropertyTagEquipMake =  ::System::Word(0x10f);
static const  ::System::Word GPPropertyTagEquipModel =  ::System::Word(0x110);
static const  ::System::Word GPPropertyTagStripOffsets =  ::System::Word(0x111);
static const  ::System::Word GPPropertyTagOrientation =  ::System::Word(0x112);
static const  ::System::Word GPPropertyTagSamplesPerPixel =  ::System::Word(0x115);
static const  ::System::Word GPPropertyTagRowsPerStrip =  ::System::Word(0x116);
static const  ::System::Word GPPropertyTagStripBytesCount =  ::System::Word(0x117);
static const  ::System::Word GPPropertyTagMinSampleValue =  ::System::Word(0x118);
static const  ::System::Word GPPropertyTagMaxSampleValue =  ::System::Word(0x119);
static const  ::System::Word GPPropertyTagXResolution =  ::System::Word(0x11a);
static const  ::System::Word GPPropertyTagYResolution =  ::System::Word(0x11b);
static const  ::System::Word GPPropertyTagPlanarConfig =  ::System::Word(0x11c);
static const  ::System::Word GPPropertyTagPageName =  ::System::Word(0x11d);
static const  ::System::Word GPPropertyTagXPosition =  ::System::Word(0x11e);
static const  ::System::Word GPPropertyTagYPosition =  ::System::Word(0x11f);
static const  ::System::Word GPPropertyTagFreeOffset =  ::System::Word(0x120);
static const  ::System::Word GPPropertyTagFreeByteCounts =  ::System::Word(0x121);
static const  ::System::Word GPPropertyTagGrayResponseUnit =  ::System::Word(0x122);
static const  ::System::Word GPPropertyTagGrayResponseCurve =  ::System::Word(0x123);
static const  ::System::Word GPPropertyTagT4Option =  ::System::Word(0x124);
static const  ::System::Word GPPropertyTagT6Option =  ::System::Word(0x125);
static const  ::System::Word GPPropertyTagResolutionUnit =  ::System::Word(0x128);
static const  ::System::Word GPPropertyTagPageNumber =  ::System::Word(0x129);
static const  ::System::Word GPPropertyTagTransferFuncition =  ::System::Word(0x12d);
static const  ::System::Word GPPropertyTagSoftwareUsed =  ::System::Word(0x131);
static const  ::System::Word GPPropertyTagDateTime =  ::System::Word(0x132);
static const  ::System::Word GPPropertyTagArtist =  ::System::Word(0x13b);
static const  ::System::Word GPPropertyTagHostComputer =  ::System::Word(0x13c);
static const  ::System::Word GPPropertyTagPredictor =  ::System::Word(0x13d);
static const  ::System::Word GPPropertyTagWhitePoint =  ::System::Word(0x13e);
static const  ::System::Word GPPropertyTagPrimaryChromaticities =  ::System::Word(0x13f);
static const  ::System::Word GPPropertyTagColorMap =  ::System::Word(0x140);
static const  ::System::Word GPPropertyTagHalftoneHints =  ::System::Word(0x141);
static const  ::System::Word GPPropertyTagTileWidth =  ::System::Word(0x142);
static const  ::System::Word GPPropertyTagTileLength =  ::System::Word(0x143);
static const  ::System::Word GPPropertyTagTileOffset =  ::System::Word(0x144);
static const  ::System::Word GPPropertyTagTileByteCounts =  ::System::Word(0x145);
static const  ::System::Word GPPropertyTagInkSet =  ::System::Word(0x14c);
static const  ::System::Word GPPropertyTagInkNames =  ::System::Word(0x14d);
static const  ::System::Word GPPropertyTagNumberOfInks =  ::System::Word(0x14e);
static const  ::System::Word GPPropertyTagDotRange =  ::System::Word(0x150);
static const  ::System::Word GPPropertyTagTargetPrinter =  ::System::Word(0x151);
static const  ::System::Word GPPropertyTagExtraSamples =  ::System::Word(0x152);
static const  ::System::Word GPPropertyTagSampleFormat =  ::System::Word(0x153);
static const  ::System::Word GPPropertyTagSMinSampleValue =  ::System::Word(0x154);
static const  ::System::Word GPPropertyTagSMaxSampleValue =  ::System::Word(0x155);
static const  ::System::Word GPPropertyTagTransferRange =  ::System::Word(0x156);
static const  ::System::Word GPPropertyTagJPEGProc =  ::System::Word(0x200);
static const  ::System::Word GPPropertyTagJPEGInterFormat =  ::System::Word(0x201);
static const  ::System::Word GPPropertyTagJPEGInterLength =  ::System::Word(0x202);
static const  ::System::Word GPPropertyTagJPEGRestartInterval =  ::System::Word(0x203);
static const  ::System::Word GPPropertyTagJPEGLosslessPredictors =  ::System::Word(0x205);
static const  ::System::Word GPPropertyTagJPEGPointTransforms =  ::System::Word(0x206);
static const  ::System::Word GPPropertyTagJPEGQTables =  ::System::Word(0x207);
static const  ::System::Word GPPropertyTagJPEGDCTables =  ::System::Word(0x208);
static const  ::System::Word GPPropertyTagJPEGACTables =  ::System::Word(0x209);
static const  ::System::Word GPPropertyTagYCbCrCoefficients =  ::System::Word(0x211);
static const  ::System::Word GPPropertyTagYCbCrSubsampling =  ::System::Word(0x212);
static const  ::System::Word GPPropertyTagYCbCrPositioning =  ::System::Word(0x213);
static const  ::System::Word GPPropertyTagREFBlackWhite =  ::System::Word(0x214);
static const  ::System::Word GPPropertyTagICCProfile =  ::System::Word(0x8773);
static const  ::System::Word GPPropertyTagGamma =  ::System::Word(0x301);
static const  ::System::Word GPPropertyTagICCProfileDescriptor =  ::System::Word(0x302);
static const  ::System::Word GPPropertyTagSRGBRenderingIntent =  ::System::Word(0x303);
static const  ::System::Word GPPropertyTagImageTitle =  ::System::Word(0x320);
static const  ::System::Word GPPropertyTagCopyright =  ::System::Word(0x8298);
static const  ::System::Word GPPropertyTagResolutionXUnit =  ::System::Word(0x5001);
static const  ::System::Word GPPropertyTagResolutionYUnit =  ::System::Word(0x5002);
static const  ::System::Word GPPropertyTagResolutionXLengthUnit =  ::System::Word(0x5003);
static const  ::System::Word GPPropertyTagResolutionYLengthUnit =  ::System::Word(0x5004);
static const  ::System::Word GPPropertyTagPrintFlags =  ::System::Word(0x5005);
static const  ::System::Word GPPropertyTagPrintFlagsVersion =  ::System::Word(0x5006);
static const  ::System::Word GPPropertyTagPrintFlagsCrop =  ::System::Word(0x5007);
static const  ::System::Word GPPropertyTagPrintFlagsBleedWidth =  ::System::Word(0x5008);
static const  ::System::Word GPPropertyTagPrintFlagsBleedWidthScale =  ::System::Word(0x5009);
static const  ::System::Word GPPropertyTagHalftoneLPI =  ::System::Word(0x500a);
static const  ::System::Word GPPropertyTagHalftoneLPIUnit =  ::System::Word(0x500b);
static const  ::System::Word GPPropertyTagHalftoneDegree =  ::System::Word(0x500c);
static const  ::System::Word GPPropertyTagHalftoneShape =  ::System::Word(0x500d);
static const  ::System::Word GPPropertyTagHalftoneMisc =  ::System::Word(0x500e);
static const  ::System::Word GPPropertyTagHalftoneScreen =  ::System::Word(0x500f);
static const  ::System::Word GPPropertyTagJPEGQuality =  ::System::Word(0x5010);
static const  ::System::Word GPPropertyTagGridSize =  ::System::Word(0x5011);
static const  ::System::Word GPPropertyTagThumbnailFormat =  ::System::Word(0x5012);
static const  ::System::Word GPPropertyTagThumbnailWidth =  ::System::Word(0x5013);
static const  ::System::Word GPPropertyTagThumbnailHeight =  ::System::Word(0x5014);
static const  ::System::Word GPPropertyTagThumbnailColorDepth =  ::System::Word(0x5015);
static const  ::System::Word GPPropertyTagThumbnailPlanes =  ::System::Word(0x5016);
static const  ::System::Word GPPropertyTagThumbnailRawBytes =  ::System::Word(0x5017);
static const  ::System::Word GPPropertyTagThumbnailSize =  ::System::Word(0x5018);
static const  ::System::Word GPPropertyTagThumbnailCompressedSize =  ::System::Word(0x5019);
static const  ::System::Word GPPropertyTagColorTransferFunction =  ::System::Word(0x501a);
static const  ::System::Word GPPropertyTagThumbnailData =  ::System::Word(0x501b);
static const  ::System::Word GPPropertyTagThumbnailImageWidth =  ::System::Word(0x5020);
static const  ::System::Word GPPropertyTagThumbnailImageHeight =  ::System::Word(0x5021);
static const  ::System::Word GPPropertyTagThumbnailBitsPerSample =  ::System::Word(0x5022);
static const  ::System::Word GPPropertyTagThumbnailCompression =  ::System::Word(0x5023);
static const  ::System::Word GPPropertyTagThumbnailPhotometricInterp =  ::System::Word(0x5024);
static const  ::System::Word GPPropertyTagThumbnailImageDescription =  ::System::Word(0x5025);
static const  ::System::Word GPPropertyTagThumbnailEquipMake =  ::System::Word(0x5026);
static const  ::System::Word GPPropertyTagThumbnailEquipModel =  ::System::Word(0x5027);
static const  ::System::Word GPPropertyTagThumbnailStripOffsets =  ::System::Word(0x5028);
static const  ::System::Word GPPropertyTagThumbnailOrientation =  ::System::Word(0x5029);
static const  ::System::Word GPPropertyTagThumbnailSamplesPerPixel =  ::System::Word(0x502a);
static const  ::System::Word GPPropertyTagThumbnailRowsPerStrip =  ::System::Word(0x502b);
static const  ::System::Word GPPropertyTagThumbnailStripBytesCount =  ::System::Word(0x502c);
static const  ::System::Word GPPropertyTagThumbnailResolutionX =  ::System::Word(0x502d);
static const  ::System::Word GPPropertyTagThumbnailResolutionY =  ::System::Word(0x502e);
static const  ::System::Word GPPropertyTagThumbnailPlanarConfig =  ::System::Word(0x502f);
static const  ::System::Word GPPropertyTagThumbnailResolutionUnit =  ::System::Word(0x5030);
static const  ::System::Word GPPropertyTagThumbnailTransferFunction =  ::System::Word(0x5031);
static const  ::System::Word GPPropertyTagThumbnailSoftwareUsed =  ::System::Word(0x5032);
static const  ::System::Word GPPropertyTagThumbnailDateTime =  ::System::Word(0x5033);
static const  ::System::Word GPPropertyTagThumbnailArtist =  ::System::Word(0x5034);
static const  ::System::Word GPPropertyTagThumbnailWhitePoint =  ::System::Word(0x5035);
static const  ::System::Word GPPropertyTagThumbnailPrimaryChromaticities =  ::System::Word(0x5036);
static const  ::System::Word GPPropertyTagThumbnailYCbCrCoefficients =  ::System::Word(0x5037);
static const  ::System::Word GPPropertyTagThumbnailYCbCrSubsampling =  ::System::Word(0x5038);
static const  ::System::Word GPPropertyTagThumbnailYCbCrPositioning =  ::System::Word(0x5039);
static const  ::System::Word GPPropertyTagThumbnailRefBlackWhite =  ::System::Word(0x503a);
static const  ::System::Word GPPropertyTagThumbnailCopyRight =  ::System::Word(0x503b);
static const  ::System::Word GPPropertyTagLuminanceTable =  ::System::Word(0x5090);
static const  ::System::Word GPPropertyTagChrominanceTable =  ::System::Word(0x5091);
static const  ::System::Word GPPropertyTagFrameDelay =  ::System::Word(0x5100);
static const  ::System::Word GPPropertyTagLoopCount =  ::System::Word(0x5101);
static const  ::System::Word GPPropertyTagPixelUnit =  ::System::Word(0x5110);
static const  ::System::Word GPPropertyTagPixelPerUnitX =  ::System::Word(0x5111);
static const  ::System::Word GPPropertyTagPixelPerUnitY =  ::System::Word(0x5112);
static const  ::System::Word GPPropertyTagPaletteHistogram =  ::System::Word(0x5113);
static const  ::System::Word GPPropertyTagExifExposureTime =  ::System::Word(0x829a);
static const  ::System::Word GPPropertyTagExifFNumber =  ::System::Word(0x829d);
static const  ::System::Word GPPropertyTagExifExposureProg =  ::System::Word(0x8822);
static const  ::System::Word GPPropertyTagExifSpectralSense =  ::System::Word(0x8824);
static const  ::System::Word GPPropertyTagExifISOSpeed =  ::System::Word(0x8827);
static const  ::System::Word GPPropertyTagExifOECF =  ::System::Word(0x8828);
static const  ::System::Word GPPropertyTagExifVer =  ::System::Word(0x9000);
static const  ::System::Word GPPropertyTagExifDTOrig =  ::System::Word(0x9003);
static const  ::System::Word GPPropertyTagExifDTDigitized =  ::System::Word(0x9004);
static const  ::System::Word GPPropertyTagExifCompConfig =  ::System::Word(0x9101);
static const  ::System::Word GPPropertyTagExifCompBPP =  ::System::Word(0x9102);
static const  ::System::Word GPPropertyTagExifShutterSpeed =  ::System::Word(0x9201);
static const  ::System::Word GPPropertyTagExifAperture =  ::System::Word(0x9202);
static const  ::System::Word GPPropertyTagExifBrightness =  ::System::Word(0x9203);
static const  ::System::Word GPPropertyTagExifExposureBias =  ::System::Word(0x9204);
static const  ::System::Word GPPropertyTagExifMaxAperture =  ::System::Word(0x9205);
static const  ::System::Word GPPropertyTagExifSubjectDist =  ::System::Word(0x9206);
static const  ::System::Word GPPropertyTagExifMeteringMode =  ::System::Word(0x9207);
static const  ::System::Word GPPropertyTagExifLightSource =  ::System::Word(0x9208);
static const  ::System::Word GPPropertyTagExifFlash =  ::System::Word(0x9209);
static const  ::System::Word GPPropertyTagExifFocalLength =  ::System::Word(0x920a);
static const  ::System::Word GPPropertyTagExifMakerNote =  ::System::Word(0x927c);
static const  ::System::Word GPPropertyTagExifUserComment =  ::System::Word(0x9286);
static const  ::System::Word GPPropertyTagExifDTSubsec =  ::System::Word(0x9290);
static const  ::System::Word GPPropertyTagExifDTOrigSS =  ::System::Word(0x9291);
static const  ::System::Word GPPropertyTagExifDTDigSS =  ::System::Word(0x9292);
static const  ::System::Word GPPropertyTagExifFPXVer =  ::System::Word(0xa000);
static const  ::System::Word GPPropertyTagExifColorSpace =  ::System::Word(0xa001);
static const  ::System::Word GPPropertyTagExifPixXDim =  ::System::Word(0xa002);
static const  ::System::Word GPPropertyTagExifPixYDim =  ::System::Word(0xa003);
static const  ::System::Word GPPropertyTagExifRelatedWav =  ::System::Word(0xa004);
static const  ::System::Word GPPropertyTagExifInterop =  ::System::Word(0xa005);
static const  ::System::Word GPPropertyTagExifFlashEnergy =  ::System::Word(0xa20b);
static const  ::System::Word GPPropertyTagExifSpatialFR =  ::System::Word(0xa20c);
static const  ::System::Word GPPropertyTagExifFocalXRes =  ::System::Word(0xa20e);
static const  ::System::Word GPPropertyTagExifFocalYRes =  ::System::Word(0xa20f);
static const  ::System::Word GPPropertyTagExifFocalResUnit =  ::System::Word(0xa210);
static const  ::System::Word GPPropertyTagExifSubjectLoc =  ::System::Word(0xa214);
static const  ::System::Word GPPropertyTagExifExposureIndex =  ::System::Word(0xa215);
static const  ::System::Word GPPropertyTagExifSensingMethod =  ::System::Word(0xa217);
static const  ::System::Word GPPropertyTagExifFileSource =  ::System::Word(0xa300);
static const  ::System::Word GPPropertyTagExifSceneType =  ::System::Word(0xa301);
static const  ::System::Word GPPropertyTagExifCfaPattern =  ::System::Word(0xa302);
static const  ::System::Int8 GPPropertyTagGpsVer =  ::System::Int8(0x0);
static const  ::System::Int8 GPPropertyTagGpsLatitudeRef =  ::System::Int8(0x1);
static const  ::System::Int8 GPPropertyTagGpsLatitude =  ::System::Int8(0x2);
static const  ::System::Int8 GPPropertyTagGpsLongitudeRef =  ::System::Int8(0x3);
static const  ::System::Int8 GPPropertyTagGpsLongitude =  ::System::Int8(0x4);
static const  ::System::Int8 GPPropertyTagGpsAltitudeRef =  ::System::Int8(0x5);
static const  ::System::Int8 GPPropertyTagGpsAltitude =  ::System::Int8(0x6);
static const  ::System::Int8 GPPropertyTagGpsGpsTime =  ::System::Int8(0x7);
static const  ::System::Int8 GPPropertyTagGpsGpsSatellites =  ::System::Int8(0x8);
static const  ::System::Int8 GPPropertyTagGpsGpsStatus =  ::System::Int8(0x9);
static const  ::System::Int8 GPPropertyTagGpsGpsMeasureMode =  ::System::Int8(0xa);
static const  ::System::Int8 GPPropertyTagGpsGpsDop =  ::System::Int8(0xb);
static const  ::System::Int8 GPPropertyTagGpsSpeedRef =  ::System::Int8(0xc);
static const  ::System::Int8 GPPropertyTagGpsSpeed =  ::System::Int8(0xd);
static const  ::System::Int8 GPPropertyTagGpsTrackRef =  ::System::Int8(0xe);
static const  ::System::Int8 GPPropertyTagGpsTrack =  ::System::Int8(0xf);
static const  ::System::Int8 GPPropertyTagGpsImgDirRef =  ::System::Int8(0x10);
static const  ::System::Int8 GPPropertyTagGpsImgDir =  ::System::Int8(0x11);
static const  ::System::Int8 GPPropertyTagGpsMapDatum =  ::System::Int8(0x12);
static const  ::System::Int8 GPPropertyTagGpsDestLatRef =  ::System::Int8(0x13);
static const  ::System::Int8 GPPropertyTagGpsDestLat =  ::System::Int8(0x14);
static const  ::System::Int8 GPPropertyTagGpsDestLongRef =  ::System::Int8(0x15);
static const  ::System::Int8 GPPropertyTagGpsDestLong =  ::System::Int8(0x16);
static const  ::System::Int8 GPPropertyTagGpsDestBearRef =  ::System::Int8(0x17);
static const  ::System::Int8 GPPropertyTagGpsDestBear =  ::System::Int8(0x18);
static const  ::System::Int8 GPPropertyTagGpsDestDistRef =  ::System::Int8(0x19);
static const  ::System::Int8 GPPropertyTagGpsDestDist =  ::System::Int8(0x1a);
extern DELPHI_PACKAGE TIGPStatus __fastcall GetImageDecodersSize(/* out */ unsigned &numDecoders, /* out */ unsigned &ASize);
extern DELPHI_PACKAGE  ::System::DynamicArray<TIGPImageCodecInfo> __fastcall GetImageDecoders(void);
extern DELPHI_PACKAGE TIGPStatus __fastcall GetImageEncodersSize(/* out */ unsigned &numEncoders, /* out */ unsigned &ASize);
extern DELPHI_PACKAGE  ::System::DynamicArray<TIGPImageCodecInfo> __fastcall GetImageEncoders(void);
extern DELPHI_PACKAGE bool __fastcall GetEncoderClsid(const  ::System::UnicodeString AFormat, GUID &pClsid);
extern DELPHI_PACKAGE bool __fastcall ObjectTypeIsValid(TIGPObjectType type_);
extern DELPHI_PACKAGE int __fastcall GP_GDIP_WMF_RECORD_TO_EMFPLUS(int n);
extern DELPHI_PACKAGE int __fastcall GP_GDIP_EMFPLUS_RECORD_TO_WMF(int n);
extern DELPHI_PACKAGE bool __fastcall GP_GDIP_IS_WMF_RECORDTYPE(int n);
extern DELPHI_PACKAGE TIGPCharacterRange __fastcall MakeCharacterRange(int AFirst, int ALength);
extern DELPHI_PACKAGE TIGPRect __fastcall GPInflateRect(const TIGPRect &ARect, int CX, int CY)/* overload */;
extern DELPHI_PACKAGE TIGPRect __fastcall GPInflateRect(const TIGPRect &ARect, int AChange)/* overload */;
extern DELPHI_PACKAGE TIGPRectF __fastcall GPInflateRectF(const TIGPRectF &ARect, float CX, float CY)/* overload */;
extern DELPHI_PACKAGE TIGPRectF __fastcall GPInflateRectF(const TIGPRectF &ARect, float AChange)/* overload */;
extern DELPHI_PACKAGE TIGPRect __fastcall GPIntersectRect(const TIGPRect &ARect1, const TIGPRect &ARect2);
extern DELPHI_PACKAGE bool __fastcall GPCheckIntersectRect(const TIGPRect &ARect1, const TIGPRect &ARect2);
extern DELPHI_PACKAGE bool __fastcall GPEqualRect(const TIGPRect &ARect1, const TIGPRect &ARect2);
extern DELPHI_PACKAGE unsigned __fastcall GetPixelFormatSize(int APixfmt);
extern DELPHI_PACKAGE bool __fastcall IsIndexedPixelFormat(int APixfmt);
extern DELPHI_PACKAGE bool __fastcall IsAlphaPixelFormat(int APixfmt);
extern DELPHI_PACKAGE bool __fastcall IsExtendedPixelFormat(int APixfmt);
extern DELPHI_PACKAGE bool __fastcall IsCanonicalPixelFormat(int APixfmt);
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall MakeARGBColor( ::System::Byte AAlpha,  ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall GPMakeGrayScaleColor( ::System::Byte AAlpha,  ::System::Byte AColor);
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall MakeColor( ::System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall MakeColor( ::System::Byte AAlpha,  ::System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE  ::System::Uitypes::TColor __fastcall GPGetColor( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall MakeColor( ::System::Byte r,  ::System::Byte g,  ::System::Byte b)/* overload */;
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall MakeColor( ::System::Byte a,  ::System::Byte r,  ::System::Byte g,  ::System::Byte b)/* overload */;
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall GPMakeColor( ::System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall GPMakeColor( ::System::Byte AAlpha,  ::System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall GPMakeColor( ::System::Byte r,  ::System::Byte g,  ::System::Byte b)/* overload */;
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall GPMakeColor( ::System::Byte a,  ::System::Byte r,  ::System::Byte g,  ::System::Byte b)/* overload */;
extern DELPHI_PACKAGE  ::System::Byte __fastcall GetAlpha( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Byte __fastcall GetRed( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Byte __fastcall GetGreen( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Byte __fastcall GetBlue( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall ColorRefToARGB(unsigned ARgb);
extern DELPHI_PACKAGE unsigned __fastcall ARGBToColorRef( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall RGBToBGR( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE TIGPBlend __fastcall MakeBlend(float APosition, float AValue);
extern DELPHI_PACKAGE TIGPInterpolationColor __fastcall MakeInterpolationColor(float APosition,  ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::UnicodeString __fastcall GetStatus(TIGPStatus AStat);
extern DELPHI_PACKAGE void __fastcall GetStandardRGBAColorNames( ::System::Classes::TStrings* ANames)/* overload */;
extern DELPHI_PACKAGE void __fastcall GetStandardRGBAColorNames( ::System::Classes::TGetStrProc AProc)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall HexToUInt( ::System::UnicodeString AValue);
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall StringToRGBAColor(const  ::System::UnicodeString AValue);
extern DELPHI_PACKAGE  ::System::UnicodeString __fastcall RGBAColorToString( ::System::Uitypes::TAlphaColor AValue);
extern DELPHI_PACKAGE void __fastcall StartIGDIPlus(void);
extern DELPHI_PACKAGE void __fastcall StopIGDIPlus(void);
}	/* namespace Igdiplus */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IGDIPLUS)
using namespace Igdiplus;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IgdiplusHPP
