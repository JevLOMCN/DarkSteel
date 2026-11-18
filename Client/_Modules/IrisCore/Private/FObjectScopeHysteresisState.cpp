// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// ClearFromHysteresis @ 144233350

void __thiscall
UE::Net::Private::FReplicationFiltering::FObjectScopeHysteresisState::ClearFromHysteresis
          (FObjectScopeHysteresisState *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->ObjectsToClear).Storage.AllocatorInstance.Data;
  if ((this->ObjectsToClear).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = pFVar1 + (ulonglong)(param_1 >> 5) * 4;
  *(uint *)pFVar1 = *(uint *)pFVar1 | 1 << (param_1 & 0x1f);
  this->ObjectsToClearCount = this->ObjectsToClearCount + 1;
  return;
}

