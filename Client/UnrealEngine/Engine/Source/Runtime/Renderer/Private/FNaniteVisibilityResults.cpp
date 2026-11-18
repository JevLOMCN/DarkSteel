// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// IsRasterBinVisible @ 14506c390

bool __thiscall
FNaniteVisibilityResults::IsRasterBinVisible(FNaniteVisibilityResults *this,ushort param_1)

{
  uint uVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  if (this->bRasterTestValid == false) {
    return true;
  }
  uVar1 = (this->BinIndexTranslator).RegularBinCount;
  uVar6 = ((short)uVar1 - param_1) - 2;
  if (param_1 < uVar1) {
    uVar6 = param_1;
  }
  if ((this->RasterBinVisibility).NumBits <= (int)(uint)uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar2 = (this->RasterBinVisibility).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (FNaniteVisibilityResults *)FVar2;
  }
  return (*(uint *)((longlong)this + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0;
}

// IsShadingBinVisible @ 14506c470

bool __thiscall
FNaniteVisibilityResults::IsShadingBinVisible(FNaniteVisibilityResults *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if (this->bShadingTestValid == false) {
    return true;
  }
  if ((this->ShadingBinVisibility).NumBits <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->ShadingBinVisibility).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->ShadingBinVisibility;
  }
  return (*(uint *)((longlong)FVar4 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
}

