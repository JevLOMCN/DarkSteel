// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// ConsumePerInstanceDataFromGameThread @ 1491733e0

void __thiscall
FNDIIntRenderTarget2DProxy::ConsumePerInstanceDataFromGameThread
          (FNDIIntRenderTarget2DProxy *this,void *param_1,ulong64 *param_2)

{
  return;
}

// GetDispatchArgs @ 14917dea0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIIntRenderTarget2DProxy::GetDispatchArgs
          (FNDIIntRenderTarget2DProxy *this,FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FNDIIntRenderTarget2DInstanceData_RenderThread *pFVar1;
  TIntVector3<int>_u_0 local_18;
  
  pFVar1 = TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FNDIIntRenderTarget2DInstanceData_RenderThread *)0x0) {
    local_18._s_0.X = (pFVar1->Size).field0_0x0._s_0.X;
    local_18._s_0.Y = (pFVar1->Size).field0_0x0._s_0.Y;
    local_18._s_0.Z = 1;
    FNDIGpuComputeDispatchArgsGenContext::SetDirect
              (param_1,(TIntVector3<int> *)&local_18._s_0,0xffffffff);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 149186700

int __thiscall
FNDIIntRenderTarget2DProxy::PerInstanceDataPassedToRenderThreadSize
          (FNDIIntRenderTarget2DProxy *this)

{
  return 0;
}

// PostSimulate @ 149188b10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNDIIntRenderTarget2DProxy::PostSimulate
          (FNDIIntRenderTarget2DProxy *this,FNDIGpuComputePostSimulateContext *param_1)

{
  FNDIIntRenderTarget2DInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
           ::FindChecked((TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
                          *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1->bWroteThisFrame != false) {
    (**(code **)(*(longlong *)param_1->_padding_ + 0x130))
              ((longlong *)param_1->_padding_,param_1->_padding_,(pFVar1->TextureRHI).Reference,
               pFVar1->bReadThisFrame,1);
  }
  pFVar1->bWroteThisFrame = true;
  pFVar1->bReadThisFrame = true;
  if (param_1->bFinalPostSimulate != false) {
    pFVar1->TransientRDGTexture = (FRDGTexture *)0x0;
    pFVar1->TransientRDGUAV = (FRDGTextureUAV *)0x0;
  }
  return;
}

