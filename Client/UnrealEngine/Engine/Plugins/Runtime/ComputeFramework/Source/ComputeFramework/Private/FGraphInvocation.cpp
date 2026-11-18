// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// ~FGraphInvocation @ 1494c5ad0

void __thiscall FComputeGraphTaskWorker::FGraphInvocation::~FGraphInvocation(FGraphInvocation *this)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->DataProviderRenderProxies).AllocatorInstance.Data;
  iVar1 = (this->DataProviderRenderProxies).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->DataProviderRenderProxies).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FComputeDataProviderRenderProxy_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar4 = pFVar4 + 8;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->FallbackDelegate);
  pFVar3 = (this->DataProviderRenderProxies).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

