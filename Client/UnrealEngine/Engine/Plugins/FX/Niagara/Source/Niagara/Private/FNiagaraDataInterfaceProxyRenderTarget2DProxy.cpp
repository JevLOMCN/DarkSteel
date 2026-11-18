// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// ConsumePerInstanceDataFromGameThread @ 1491b7860

void __thiscall
FNiagaraDataInterfaceProxyRenderTarget2DProxy::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyRenderTarget2DProxy *this,void *param_1,ulong64 *param_2)

{
  return;
}

// GetDispatchArgs @ 1491c7a10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRenderTarget2DProxy::GetDispatchArgs
          (FNiagaraDataInterfaceProxyRenderTarget2DProxy *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FRenderTarget2DRWInstanceData_RenderThread *pFVar1;
  TIntVector3<int>_u_0 local_18;
  
  pFVar1 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) {
    local_18._s_0.X = (pFVar1->Size).field0_0x0._s_0.X;
    local_18._s_0.Y = (pFVar1->Size).field0_0x0._s_0.Y;
    local_18._s_0.Z = 1;
    FNDIGpuComputeDispatchArgsGenContext::SetDirect
              (param_1,(TIntVector3<int> *)&local_18._s_0,0xffffffff);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1491d5350

int __thiscall
FNiagaraDataInterfaceProxyRenderTarget2DProxy::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyRenderTarget2DProxy *this)

{
  return 0;
}

// PostSimulate @ 1491d8160

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRenderTarget2DProxy::PostSimulate
          (FNiagaraDataInterfaceProxyRenderTarget2DProxy *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  FRenderTarget2DRWInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) {
    if ((pFVar1->bRebuildMips != false) && (pFVar1->MipMapGeneration == PostSimulate)) {
      NiagaraGenerateMips::GenerateMips
                ((FRDGBuilder *)param_1->_padding_,pFVar1->TransientRDGTexture,
                 pFVar1->MipMapGenerationType);
    }
    if ((pFVar1->bWroteThisFrame != false) && (pFVar1->TransientRDGTexture != (FRDGTexture *)0x0)) {
      (**(code **)(*(longlong *)param_1->_padding_ + 0x130))
                ((longlong *)param_1->_padding_,param_1->_padding_,(pFVar1->TextureRHI).Reference,
                 pFVar1->bReadThisFrame,1);
    }
    pFVar1->bRebuildMips = false;
    pFVar1->bReadThisFrame = false;
    pFVar1->TransientRDGTexture = (FRDGTexture *)0x0;
    pFVar1->TransientRDGSRV = (FRDGTextureSRV *)0x0;
    pFVar1->TransientRDGUAV = (FRDGTextureUAV *)0x0;
    pFVar1->bWroteThisFrame = false;
  }
  return;
}

// PostStage @ 1491d8300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRenderTarget2DProxy::PostStage
          (FNiagaraDataInterfaceProxyRenderTarget2DProxy *this,
          FNDIGpuComputePostStageContext *param_1)

{
  ulong64 uVar1;
  FRenderTarget2DRWInstanceData_RenderThread *pFVar2;
  
  uVar1 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar2 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,uVar1);
  if (((pFVar2 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) &&
      (pFVar2->bRebuildMips != false)) && (pFVar2->MipMapGeneration == PostStage)) {
    pFVar2->bRebuildMips = false;
    if (pFVar2->TransientRDGTexture != (FRDGTexture *)0x0) {
      NiagaraGenerateMips::GenerateMips
                (*(FRDGBuilder **)param_1,pFVar2->TransientRDGTexture,pFVar2->MipMapGenerationType);
    }
  }
  return;
}

