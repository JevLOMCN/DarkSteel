// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetDispatchArgs @ 1491c7a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRenderTargetCubeProxy::GetDispatchArgs
          (FNiagaraDataInterfaceProxyRenderTargetCubeProxy *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FRenderTargetCubeRWInstanceData_RenderThread *pFVar1;
  TIntVector3<int>_u_0 local_18;
  
  pFVar1 = TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FRenderTargetCubeRWInstanceData_RenderThread *)0x0) {
    local_18._s_0.X = pFVar1->Size;
    local_18._s_0.Z = 6;
    local_18._s_0.Y = local_18._s_0.X;
    FNDIGpuComputeDispatchArgsGenContext::SetDirect
              (param_1,(TIntVector3<int> *)&local_18._s_0,0xffffffff);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1491d5360

int __thiscall
FNiagaraDataInterfaceProxyRenderTargetCubeProxy::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyRenderTargetCubeProxy *this)

{
  return 0;
}

// PostSimulate @ 1491d8200

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRenderTargetCubeProxy::PostSimulate
          (FNiagaraDataInterfaceProxyRenderTargetCubeProxy *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  FRenderTargetCubeRWInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FRenderTargetCubeRWInstanceData_RenderThread *)0x0) {
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

