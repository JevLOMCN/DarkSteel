// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// GetElementPtr @ 145f2e440

FHeightmapTexel * __thiscall
TStridedView<UE::Landscape::FHeightmapTexel,int>::GetElementPtr
          (TStridedView<UE::Landscape::FHeightmapTexel,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHeightmapTexel *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHeightmapTexel *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FHeightmapTexel *)
         ((longlong)&this->FirstElementPtr->field0_0x0 +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

