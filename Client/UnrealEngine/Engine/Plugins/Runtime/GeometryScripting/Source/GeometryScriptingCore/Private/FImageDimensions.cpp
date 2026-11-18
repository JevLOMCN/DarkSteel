// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// FImageDimensions @ 14cda55e0

FImageDimensions * __thiscall
UE::Geometry::FImageDimensions::FImageDimensions(FImageDimensions *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FImageDimensions *pFVar3;
  
  this->Width = 0;
  this->Height = 0;
  if ((param_1 < 0) || (param_2 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidthIn >= 0 && HeightIn >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageDimensions.h"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FImageDimensions *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->Width = param_1;
  this->Height = param_2;
  return this;
}

