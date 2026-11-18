// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 1

// GetElementPtr @ 14d770e30

FParameters * __thiscall
TStridedView<FOpenColorIOPixelShader::FParameters,int>::GetElementPtr
          (TStridedView<FOpenColorIOPixelShader::FParameters,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParameters *pFVar4;
  
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
      pFVar4 = (FParameters *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParameters *)
         (&this->FirstElementPtr->field_0x0 +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

