// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetDispatchArgs @ 1491c7ab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRenderTargetVolumeProxy::GetDispatchArgs
          (FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
    FNDIGpuComputeDispatchArgsGenContext::SetDirect(param_1,&pFVar1->Size,0xffffffff);
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1491d5370

int __thiscall
FNiagaraDataInterfaceProxyRenderTargetVolumeProxy::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *this)

{
  return 0;
}

// PostSimulate @ 1491d8280

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRenderTargetVolumeProxy::PostSimulate
          (FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
    if (pFVar1->bWroteThisFrame != false) {
      (**(code **)(*(longlong *)param_1->_padding_ + 0x130))
                ((longlong *)param_1->_padding_,param_1->_padding_,
                 (((pFVar1->RenderTarget).Reference)->RenderTargetItem).TargetableTexture.Reference,
                 pFVar1->bReadThisFrame,1);
    }
    pFVar1->TransientRDGTexture = (FRDGTexture *)0x0;
    pFVar1->TransientRDGSRV = (FRDGTextureSRV *)0x0;
    pFVar1->TransientRDGUAV = (FRDGTextureUAV *)0x0;
    pFVar1->bWroteThisFrame = false;
    pFVar1->bReadThisFrame = false;
  }
  return;
}

