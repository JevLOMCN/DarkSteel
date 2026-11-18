// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ConsumePerInstanceDataFromGameThread @ 1492224f0

void __thiscall
FNiagaraDataInterfaceProxyTexture::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyTexture *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceTexture.cpp"
                     ,0x3e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1492446e0

int __thiscall
FNiagaraDataInterfaceProxyTexture::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyTexture *this)

{
  return 0;
}

// PostSimulate @ 149247040

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyTexture::PostSimulate
          (FNiagaraDataInterfaceProxyTexture *this,FNDIGpuComputePostSimulateContext *param_1)

{
  FNDITextureInstanceData_RenderThread *pFVar1;
  
  if (param_1->bFinalPostSimulate != false) {
    pFVar1 = TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
             ::Find((TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
                     *)&this->InstanceData_RT,param_1->SystemInstanceID);
    if (pFVar1 != (FNDITextureInstanceData_RenderThread *)0x0) {
      pFVar1->TransientRDGTexture = (FRDGTexture *)0x0;
    }
  }
  return;
}

