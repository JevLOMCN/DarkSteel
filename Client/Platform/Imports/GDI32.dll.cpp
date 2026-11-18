// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 38

// CreateCompatibleDC @ 15015a1a3

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}

// DeleteDC @ 15015a1af

BOOL __stdcall DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a1af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}

// GetTextExtentPoint32W @ 15015a1bb

BOOL __stdcall GetTextExtentPoint32W(HDC hdc,LPCWSTR lpString,int c,LPSIZE psizl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a1bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPoint32W(hdc,lpString,c,psizl);
  return BVar1;
}

// SelectObject @ 15015a1c7

HGDIOBJ __stdcall SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a1c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}

// SetBkMode @ 15015a1d3

int __stdcall SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}

// CombineRgn @ 15015a1df

int __stdcall CombineRgn(HRGN hrgnDst,HRGN hrgnSrc1,HRGN hrgnSrc2,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a1df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CombineRgn(hrgnDst,hrgnSrc1,hrgnSrc2,iMode);
  return iVar1;
}

// CreateBitmap @ 15015a1eb

HBITMAP __stdcall CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a1eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return pHVar1;
}

// CreateCompatibleBitmap @ 15015a1f7

HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a1f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}

// CreateFontIndirectW @ 15015a203

HFONT __stdcall CreateFontIndirectW(LOGFONTW *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectW(lplf);
  return pHVar1;
}

// CreateFontW @ 15015a20f

HFONT __stdcall
CreateFontW(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic,
           DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision
           ,DWORD iQuality,DWORD iPitchAndFamily,LPCWSTR pszFaceName)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a20f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontW(cHeight,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut
                       ,iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,pszFaceName);
  return pHVar1;
}

// CreatePen @ 15015a21b

HPEN __stdcall CreatePen(int iStyle,int cWidth,COLORREF color)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a21b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePen(iStyle,cWidth,color);
  return pHVar1;
}

// CreateRectRgn @ 15015a227

HRGN __stdcall CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgn(x1,y1,x2,y2);
  return pHVar1;
}

// CreateRoundRectRgn @ 15015a233

HRGN __stdcall CreateRoundRectRgn(int x1,int y1,int x2,int y2,int w,int h)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRoundRectRgn(x1,y1,x2,y2,w,h);
  return pHVar1;
}

// CreateSolidBrush @ 15015a23f

HBRUSH __stdcall CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a23f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}

// DeleteObject @ 15015a24b

BOOL __stdcall DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a24b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}

// GetDeviceCaps @ 15015a257

int __stdcall GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}

// GetDIBits @ 15015a263

int __stdcall
GetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,LPVOID lpvBits,LPBITMAPINFO lpbmi,UINT usage)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDIBits(hdc,hbm,start,cLines,lpvBits,lpbmi,usage);
  return iVar1;
}

// GetPixel @ 15015a26f

COLORREF __stdcall GetPixel(HDC hdc,int x,int y)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a26f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetPixel(hdc,x,y);
  return CVar1;
}

// GetStockObject @ 15015a27b

HGDIOBJ __stdcall GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a27b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}

// LineTo @ 15015a287

BOOL __stdcall LineTo(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LineTo(hdc,x,y);
  return BVar1;
}

// PtInRegion @ 15015a293

BOOL __stdcall PtInRegion(HRGN hrgn,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtInRegion(hrgn,x,y);
  return BVar1;
}

// Rectangle @ 15015a29f

BOOL __stdcall Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a29f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}

// RoundRect @ 15015a2ab

BOOL __stdcall RoundRect(HDC hdc,int left,int top,int right,int bottom,int width,int height)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a2ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RoundRect(hdc,left,top,right,bottom,width,height);
  return BVar1;
}

// SetBkColor @ 15015a2b7

COLORREF __stdcall SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a2b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}

// SetTextColor @ 15015a2c3

COLORREF __stdcall SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}

// SetTextAlign @ 15015a2cf

UINT __stdcall SetTextAlign(HDC hdc,UINT align)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a2cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTextAlign(hdc,align);
  return UVar1;
}

// CreateDIBSection @ 15015a2db

HBITMAP __stdcall
CreateDIBSection(HDC hdc,BITMAPINFO *lpbmi,UINT usage,void **ppvBits,HANDLE hSection,DWORD offset)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBSection(hdc,lpbmi,usage,ppvBits,hSection,offset);
  return pHVar1;
}

// GetObjectW @ 15015a2e7

int __stdcall GetObjectW(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectW(h,c,pv);
  return iVar1;
}

// MoveToEx @ 15015a2f3

BOOL __stdcall MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a2f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveToEx(hdc,x,y,lppt);
  return BVar1;
}

// TextOutW @ 15015a2ff

BOOL __stdcall TextOutW(HDC hdc,int x,int y,LPCWSTR lpString,int c)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a2ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TextOutW(hdc,x,y,lpString,c);
  return BVar1;
}

// ExtTextOutW @ 15015a30b

BOOL __stdcall
ExtTextOutW(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCWSTR lpString,UINT c,INT *lpDx)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a30b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExtTextOutW(hdc,x,y,options,lprect,lpString,c,lpDx);
  return BVar1;
}

// Polygon @ 15015a317

BOOL __stdcall Polygon(HDC hdc,POINT *apt,int cpt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Polygon(hdc,apt,cpt);
  return BVar1;
}

// GetTextMetricsW @ 15015a323

BOOL __stdcall GetTextMetricsW(HDC hdc,LPTEXTMETRICW lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsW(hdc,lptm);
  return BVar1;
}

// ChoosePixelFormat @ 15015a32f

int __stdcall ChoosePixelFormat(HDC hdc,PIXELFORMATDESCRIPTOR *ppfd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a32f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ChoosePixelFormat(hdc,ppfd);
  return iVar1;
}

// SetPixelFormat @ 15015a33b

BOOL __stdcall SetPixelFormat(HDC hdc,int format,PIXELFORMATDESCRIPTOR *ppfd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPixelFormat(hdc,format,ppfd);
  return BVar1;
}

// SwapBuffers @ 15015a347

BOOL __stdcall SwapBuffers(HDC param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SwapBuffers(param_1);
  return BVar1;
}

// CreateDCW @ 15015a353

HDC __stdcall CreateDCW(LPCWSTR pwszDriver,LPCWSTR pwszDevice,LPCWSTR pszPort,DEVMODEW *pdm)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDCW(pwszDriver,pwszDevice,pszPort,pdm);
  return pHVar1;
}

// GetICMProfileW @ 15015a35f

BOOL __stdcall GetICMProfileW(HDC hdc,LPDWORD pBufSize,LPWSTR pszFilename)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a35f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetICMProfileW(hdc,pBufSize,pszFilename);
  return BVar1;
}

