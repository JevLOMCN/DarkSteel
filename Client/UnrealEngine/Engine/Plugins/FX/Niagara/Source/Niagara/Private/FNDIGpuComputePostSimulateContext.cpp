// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// GetInstanceCountManager @ 149105c10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FNiagaraGPUInstanceCountManager * __thiscall
FNDIGpuComputePostSimulateContext::GetInstanceCountManager(FNDIGpuComputePostSimulateContext *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraGPUInstanceCountManager *pFVar4;
  
  lVar1 = this->_padding_;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraGPUInstanceCountManager *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48);
}

