// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitPrimitiveResource @ 1484df070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDynamicPrimitiveResource::InitPrimitiveResource(FDynamicPrimitiveResource *this)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)*this;
  bVar1 = IsInRenderingThread();
  if (!bVar1) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001484df0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0x154be5ed0);
  return;
}

