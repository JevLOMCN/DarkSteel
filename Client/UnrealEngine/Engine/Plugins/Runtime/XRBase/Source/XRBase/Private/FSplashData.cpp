// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// FSplashData @ 14cf7d960

FSplashData * __thiscall FSplashData::FSplashData(FSplashData *this,FSplashDesc *param_1)

{
  IXRLoadingScreen::FSplashDesc::FSplashDesc(&this->Desc,param_1);
  this->LayerId = 0;
  return this;
}

