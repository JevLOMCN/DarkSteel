// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 3

// FWinHttpHttpManager @ 14314eba0

FWinHttpHttpManager * __thiscall FWinHttpHttpManager::FWinHttpHttpManager(FWinHttpHttpManager *this)

{
  FTSBackgroundableTicker *pFVar1;
  bool bVar2;
  
  pFVar1 = FTSBackgroundableTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,(FTSTicker *)pFVar1);
  bVar2 = GWinHttpManager == (FWinHttpHttpManager *)0x0;
  *(undefined ***)this = &___7FWinHttpHttpManager__6B_;
  if (bVar2) {
    GWinHttpManager = this;
  }
  return this;
}

// ~FWinHttpHttpManager @ 143151180

void __thiscall FWinHttpHttpManager::~FWinHttpHttpManager(FWinHttpHttpManager *this)

{
  bool bVar1;
  
  bVar1 = GWinHttpManager == this;
  *(undefined ***)this = &___7FWinHttpHttpManager__6B_;
  if (bVar1) {
    GWinHttpManager = (FWinHttpHttpManager *)0x0;
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// GetManager @ 143163060

FWinHttpHttpManager * __cdecl FWinHttpHttpManager::GetManager(void)

{
  return GWinHttpManager;
}

