// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ConsumePerInstanceDataFromGameThread @ 1490d66e0

void __thiscall
FNiagaraDataInterfaceProxyTexture2DArray::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyTexture2DArray *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface2DArrayTexture.cpp"
                     ,0x2d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14911ad10

int __thiscall
FNiagaraDataInterfaceProxyTexture2DArray::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyTexture2DArray *this)

{
  return 0;
}

// PostSimulate @ 1491245b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyTexture2DArray::PostSimulate
          (FNiagaraDataInterfaceProxyTexture2DArray *this,FNDIGpuComputePostSimulateContext *param_1
          )

{
  FNDITexture2DArrayInstanceData_RenderThread *pFVar1;
  
  if (param_1->bFinalPostSimulate != false) {
    pFVar1 = TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
             ::Find((TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
                     *)&this->InstanceData_RT,param_1->SystemInstanceID);
    if (pFVar1 != (FNDITexture2DArrayInstanceData_RenderThread *)0x0) {
      pFVar1->TransientRDGTexture = (FRDGTexture *)0x0;
    }
  }
  return;
}

