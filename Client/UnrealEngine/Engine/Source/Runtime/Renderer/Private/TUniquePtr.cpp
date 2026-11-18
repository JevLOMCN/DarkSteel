// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// operator= @ 1447f91d0

TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> * __thiscall
TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>::operator=
          (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> *this,
          TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> *param_1)

{
  FVirtualTextureUpdater *pFVar1;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FVirtualTextureUpdater *)0x0;
    TDefaultDelete<FVirtualTextureUpdater>::operator()
              ((TDefaultDelete<FVirtualTextureUpdater> *)this,pFVar1);
  }
  return this;
}

// operator= @ 1448eece0

TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> * __thiscall
TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>::operator=
          (TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *this,
          TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *param_1)

{
  FRHIGPUBufferReadback *pFVar1;
  FRHIStagingBuffer *this_00;
  longlong lVar2;
  FRHIGPUBufferReadback *pFVar3;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FRHIGPUBufferReadback *)0x0;
    if (pFVar1 != (FRHIGPUBufferReadback *)0x0) {
      lVar2 = 8;
      pFVar3 = pFVar1 + 1;
      do {
        this_00 = pFVar3[-1].DestinationStagingBuffers[7].Reference;
        pFVar3 = (FRHIGPUBufferReadback *)(pFVar3[-1].DestinationStagingBuffers + 7);
        lVar2 = lVar2 + -1;
        if (this_00 != (FRHIStagingBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      } while (lVar2 != 0);
      pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
      }
      ::operator_delete(pFVar1,0x58);
    }
    return this;
  }
  return this;
}

// TUniquePtr<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray>_> @ 1453f9320

TUniquePtr<TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId>::FBasePayloadArray>_>
* __thiscall
TUniquePtr<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray>_>
::
TUniquePtr<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray>_>
          (void *this,
          TUniquePtr<TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId>::FBasePayloadArray>_>
          *param_1)

{
  *(FBasePayloadArray **)this = param_1->Ptr;
  param_1->Ptr = (FBasePayloadArray *)0x0;
  return this;
}

// TUniquePtr<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray>_> @ 1453f9340

TUniquePtr<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FBasePayloadArray>_>
* __thiscall
TUniquePtr<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray>_>
::
TUniquePtr<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray>_>
          (void *this,
          TUniquePtr<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FBasePayloadArray>_>
          *param_1)

{
  *(FBasePayloadArray **)this = param_1->Ptr;
  param_1->Ptr = (FBasePayloadArray *)0x0;
  return this;
}

// ~TUniquePtr<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray>_> @ 145404db0

void __thiscall
TUniquePtr<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray>_>
::
~TUniquePtr<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FBasePayloadArray>_>
          (void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145404dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// ~TUniquePtr<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray>_> @ 145404dd0

void __thiscall
TUniquePtr<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray>_>
::
~TUniquePtr<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray,TDefaultDelete<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FBasePayloadArray>_>
          (void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145404de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Reset @ 1454b6e00

void __thiscall
TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::Reset
          (TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_> *this,
          FRHIGPUTextureReadback *param_1)

{
  FRHIGPUTextureReadback *pFVar1;
  FRHITexture *this_00;
  longlong lVar2;
  FRHIGPUTextureReadback *pFVar3;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FRHIGPUTextureReadback *)0x0)) {
    lVar2 = 8;
    pFVar3 = pFVar1 + 1;
    do {
      this_00 = pFVar3[-1].DestinationStagingTextures[7].Reference;
      pFVar3 = (FRHIGPUTextureReadback *)(pFVar3[-1].DestinationStagingTextures + 7);
      lVar2 = lVar2 + -1;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar2 != 0);
    pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x58);
    return;
  }
  return;
}

