// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// operator= @ 1494c6010

TRefCountPtr<FComputeKernelShaderMap> * __thiscall
TRefCountPtr<FComputeKernelShaderMap>::operator=
          (TRefCountPtr<FComputeKernelShaderMap> *this,FComputeKernelShaderMap *param_1)

{
  FComputeKernelShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FComputeKernelShaderMap> *pTVar3;
  
  this_00 = this->Reference;
  if (this_00 != param_1) {
    this->Reference = param_1;
    if (param_1 != (FComputeKernelShaderMap *)0x0) {
      if (param_1->bDeletedThroughDeferredCleanup != false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bDeletedThroughDeferredCleanup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                           ,0x26f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TRefCountPtr<FComputeKernelShaderMap> *)(*pcVar1)();
          return pTVar3;
        }
      }
      LOCK();
      param_1->NumRefs = param_1->NumRefs + 1;
      UNLOCK();
    }
    if (this_00 != (FComputeKernelShaderMap *)0x0) {
      FComputeKernelShaderMap::Release(this_00);
    }
  }
  return this;
}

