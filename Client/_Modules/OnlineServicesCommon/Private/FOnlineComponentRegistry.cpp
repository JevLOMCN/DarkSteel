// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// Get<FOnlineComponentTest> @ 14edc1840

FOnlineComponentTest * __thiscall
UE::Online::FOnlineComponentRegistry::Get<FOnlineComponentTest>(FOnlineComponentRegistry *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong lVar3;
  FOnlineComponentTest *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Components).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->Components).ArrayNum * 8;
  while( true ) {
    if (pFVar5 == pFVar1) {
      return (FOnlineComponentTest *)0x0;
    }
    cVar2 = (**(code **)(**(longlong **)pFVar5 + 0x18))();
    if (cVar2 != '\0') break;
    pFVar5 = pFVar5 + 8;
  }
  lVar3 = (**(code **)(**(longlong **)pFVar5 + 8))();
  pFVar4 = (FOnlineComponentTest *)(lVar3 + -8);
  if (lVar3 == 0) {
    pFVar4 = (FOnlineComponentTest *)0x0;
  }
  return pFVar4;
}

