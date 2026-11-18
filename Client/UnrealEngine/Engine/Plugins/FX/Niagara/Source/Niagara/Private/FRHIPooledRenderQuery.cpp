// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ReleaseQuery @ 149303220

void __thiscall FRHIPooledRenderQuery::ReleaseQuery(FRHIPooledRenderQuery *this)

{
  FRHIRenderQueryPool *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this->QueryPool;
  if (pFVar1 != (FRHIRenderQueryPool *)0x0) {
    if ((this->Query).Reference == (FRHIRenderQuery *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,this);
    this->QueryPool = (FRHIRenderQueryPool *)0x0;
  }
  if (((this->Query).Reference != (FRHIRenderQuery *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Query.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x9c9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

