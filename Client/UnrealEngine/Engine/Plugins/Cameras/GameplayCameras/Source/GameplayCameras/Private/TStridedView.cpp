// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// TStridedView<float,int><float> @ 14d64bad0

TStridedView<float,int> * __thiscall
TStridedView<float,int>::TStridedView<float,int><float>
          (TStridedView<float,int> *this,int param_1,float *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<float,int> *pTVar3;
  
  this->FirstElementPtr = param_2;
  this->BytesBetweenElements = param_1;
  this->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->BytesBetweenElements < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->BytesBetweenElements & 3) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<float,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

