// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 163

// ResizeAllocation @ 14478cfb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPrimitiveSceneInfo_*>::ResizeAllocation
          (ForElementType<FPrimitiveSceneInfo_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FPrimitiveSceneInfo **_Src;
  FPrimitiveSceneInfo **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveSceneInfo **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FPrimitiveSceneInfo **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14478d880

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<`FSceneRenderer::RenderCustomDepthPass'::__l2::FTempViewParams>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14478d9b0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVisibleMeshDrawCommand>::ResizeAllocation
          (ForElementType<FVisibleMeshDrawCommand> *this,int param_1,int param_2,ulong64 param_3)

{
  FVisibleMeshDrawCommand *_Src;
  FVisibleMeshDrawCommand *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVisibleMeshDrawCommand *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVisibleMeshDrawCommand *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x44, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14482e530

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FDynamicPrimitiveResource_*>::ResizeAllocation
          (ForElementType<FDynamicPrimitiveResource_*> *this,int param_1,int param_2,ulong64 param_3
          )

{
  FDynamicPrimitiveResource **_Src;
  FDynamicPrimitiveResource **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FDynamicPrimitiveResource **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FDynamicPrimitiveResource **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14482e660

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRayTracingLocalShaderBindingWriter_*>::ResizeAllocation
          (ForElementType<FRayTracingLocalShaderBindingWriter_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FRayTracingLocalShaderBindingWriter **_Src;
  FRayTracingLocalShaderBindingWriter **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRayTracingLocalShaderBindingWriter **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRayTracingLocalShaderBindingWriter **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14482e700

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVisibleDecal_const_*>::ResizeAllocation
          (ForElementType<FVisibleDecal_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FVisibleDecal **_Src;
  FVisibleDecal **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVisibleDecal **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVisibleDecal **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14482e8e0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>
::ResizeAllocation(ForElementType<Nanite::FPackedView> *this,int param_1,int param_2,ulong64 param_3
                  )

{
  FPackedView *_Src;
  FPackedView *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPackedView *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FPackedView *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].SceneRendererPrimaryViewId, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14482ea10

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal>::
ResizeAllocation(ForElementType<FVisibleDecal> *this,int param_1,int param_2,ulong64 param_3)

{
  FVisibleDecal *_Src;
  FVisibleDecal *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVisibleDecal *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FVisibleDecal *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xdc, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14489d0c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>::
ResizeAllocation(ForElementType<int> *this,int param_1,int param_2,ulong64 param_3)

{
  int *_Src;
  int *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (int *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (int *)0x0) && (_Size = (ulonglong)(uint)_Src[-1], _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14492fa90

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  uint *_Src;
  uint *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (uint *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (uint *)0x0) && (_Size = (ulonglong)_Src[-1], _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14492fb30

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>::ResizeAllocation
          (ForElementType<FGPUScenePrimitiveCollector::FUploadData_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FUploadData **_Src;
  FUploadData **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FUploadData **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FUploadData **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14492fc90

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>::
ResizeAllocation(ForElementType<void_*> *this,int param_1,int param_2,ulong64 param_3)

{
  void **_Src;
  void **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (void **)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14492fdd0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceUploadBatch>
::ResizeAllocation(ForElementType<FInstanceUploadBatch> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FInstanceUploadBatch *_Src;
  FInstanceUploadBatch *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FInstanceUploadBatch *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FInstanceUploadBatch *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].NumItems, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14492ff20

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceUploadBatch::FItem>::ResizeAllocation
          (ForElementType<FInstanceUploadBatch::FItem> *this,int param_1,int param_2,ulong64 param_3
          )

{
  FItem *_Src;
  FItem *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FItem *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FItem *)0x0) && (_Size = (ulonglong)(uint)_Src[-1].NumInstances, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144930100

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>::ResizeAllocation
          (ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FPackedBatch *_Src;
  FPackedBatch *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPackedBatch *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPackedBatch *)0x0) &&
         (_Size = (ulonglong)_Src[-1].FirstItem_NumItems, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1449301a0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>::ResizeAllocation
          (ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FPackedItem *_Src;
  FPackedItem *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPackedItem *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPackedItem *)0x0) &&
         (_Size = (ulonglong)_Src[-1].Payload_BatchPrefixOffset, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1449302e0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceBatcher::FPrimitiveItemInfo>::ResizeAllocation
          (ForElementType<FInstanceBatcher::FPrimitiveItemInfo> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FPrimitiveItemInfo *_Src;
  FPrimitiveItemInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveItemInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPrimitiveItemInfo *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].InstancePayloadDataUploadOffset, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144930380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPrimitiveUploadInfoHeader>::ResizeAllocation
          (ForElementType<FPrimitiveUploadInfoHeader> *this,int param_1,int param_2,ulong64 param_3)

{
  FPrimitiveUploadInfoHeader *_Src;
  FPrimitiveUploadInfoHeader *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveUploadInfoHeader *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FPrimitiveUploadInfoHeader *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].PrimitiveSceneInfo + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1449fdfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FLightSceneInfo_const_*>::ResizeAllocation
          (ForElementType<FLightSceneInfo_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FLightSceneInfo **_Src;
  FLightSceneInfo **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLightSceneInfo **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FLightSceneInfo **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1449fe0f0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FHairStrandsDeepShadowData>::ResizeAllocation
          (ForElementType<FHairStrandsDeepShadowData> *this,int param_1,int param_2,ulong64 param_3)

{
  FHairStrandsDeepShadowData *_Src;
  FHairStrandsDeepShadowData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FHairStrandsDeepShadowData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FHairStrandsDeepShadowData *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Bounds.SphereRadius + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1449fe190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FHairStrandsMacroGroupData>::ResizeAllocation
          (ForElementType<FHairStrandsMacroGroupData> *this,int param_1,int param_2,ulong64 param_3)

{
  FHairStrandsMacroGroupData *_Src;
  FHairStrandsMacroGroupData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FHairStrandsMacroGroupData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FHairStrandsMacroGroupData *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x74, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1449fe230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo>::ResizeAllocation
          (ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo> *this,int param_1,int param_2,
          ulong64 param_3)

{
  PrimitiveInfo *_Src;
  PrimitiveInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (PrimitiveInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (PrimitiveInfo *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].PublicDataPtr + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144aad650

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation
          (ForElementType<UE::Math::TVector4<float>_> *this,int param_1,int param_2,ulong64 param_3)

{
  TVector4<float> *_Src;
  TVector4<float> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TVector4<float> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (TVector4<float> *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].field0_0x0._s_0.W, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144aad7d0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRefCountPtr<FRHIRayTracingGeometry> *_Src;
  TRefCountPtr<FRHIRayTracingGeometry> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TRefCountPtr<FRHIRayTracingGeometry> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TRefCountPtr<FRHIRayTracingGeometry> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Reference + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be03d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>::
ResizeAllocation(ForElementType<FRDGTexture_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGTexture **_Src;
  FRDGTexture **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRDGTexture **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRDGTexture **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPrimitiveSceneInfo_const_*>::ResizeAllocation
          (ForElementType<FPrimitiveSceneInfo_const_*> *this,int param_1,int param_2,ulong64 param_3
          )

{
  FPrimitiveSceneInfo **_Src;
  FPrimitiveSceneInfo **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveSceneInfo **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FPrimitiveSceneInfo **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0510

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::Math::TIntVector2<unsigned_int>_>::ResizeAllocation
          (ForElementType<UE::Math::TIntVector2<unsigned_int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TIntVector2<unsigned_int> *_Src;
  TIntVector2<unsigned_int> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TIntVector2<unsigned_int> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TIntVector2<unsigned_int> *)0x0) &&
         (_Size = (ulonglong)_Src[-1].field0_0x0._s_0.Y, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0820

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceCullingMergedContext::FBatchItem>::ResizeAllocation
          (ForElementType<FInstanceCullingMergedContext::FBatchItem> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FBatchItem *_Src;
  FBatchItem *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FBatchItem *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FBatchItem *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x14, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be08c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceCullingContext::FCompactionData>::ResizeAllocation
          (ForElementType<FInstanceCullingContext::FCompactionData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FCompactionData *_Src;
  FCompactionData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FCompactionData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FCompactionData *)0x0) &&
         (_Size = (ulonglong)_Src[-1].DestInstanceIdOffset, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0960

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>::ResizeAllocation
          (ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FContextBatchInfoPacked *_Src;
  FContextBatchInfoPacked *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FContextBatchInfoPacked *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FContextBatchInfoPacked *)0x0) &&
         (_Size = (ulonglong)_Src[-1].ItemDataOffset[1], _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0a00

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>::ResizeAllocation
          (ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo> *this,int param_1,
          int param_2,ulong64 param_3)

{
  undefined4 uVar1;
  FMeshDrawCommandInfo *_Src;
  FMeshDrawCommandInfo *_Dst;
  ulonglong uVar2;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMeshDrawCommandInfo *)0x0;
    uVar2 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar2 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar2,4);
      if ((_Src != (FMeshDrawCommandInfo *)0x0) &&
         (uVar1 = *(undefined4 *)&_Src[-1].field_0x8,
         ZPULL(uVar1,0,0xf) != 0 || _Src[-1].BatchDataStride != 0)) {
        _Size = (ulonglong)(uint)uVar1;
        if (uVar2 < (uint)uVar1) {
          _Size = uVar2;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0aa0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FInstanceCullingContext::FPayloadData>::ResizeAllocation
          (ForElementType<FInstanceCullingContext::FPayloadData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FPayloadData *_Src;
  FPayloadData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPayloadData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPayloadData *)0x0) &&
         (_Size = (ulonglong)_Src[-1].CompactionDataIndex, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0b40

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRHIDrawIndexedIndirectParameters>::ResizeAllocation
          (ForElementType<FRHIDrawIndexedIndirectParameters> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FRHIDrawIndexedIndirectParameters *_Src;
  FRHIDrawIndexedIndirectParameters *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRHIDrawIndexedIndirectParameters *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FRHIDrawIndexedIndirectParameters *)0x0) &&
         (_Size = (ulonglong)_Src[-1].StartInstanceLocation, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FSortedLightSceneInfo>::ResizeAllocation
          (ForElementType<FSortedLightSceneInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  FSortedLightSceneInfo *_Src;
  FSortedLightSceneInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSortedLightSceneInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSortedLightSceneInfo *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].bIsCompatibleWithLightFunctionAtlas, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0c80

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::ResizeAllocation(ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *_Src;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)
           0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    *)0x0) && (_Size = (ulonglong)(uint)_Src[-1].ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0d20

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::ResizeAllocation(ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *_Src;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    *)0x0) && (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x1c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144be0dc0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FForwardLightData>::
ResizeAllocation(ForElementType<FForwardLightData> *this,int param_1,int param_2,ulong64 param_3)

{
  FForwardLightData *_Src;
  FForwardLightData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FForwardLightData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FForwardLightData *)0x0) &&
         (_Size = (ulonglong)
                  (uint)_Src[-1].RectDataAndVirtualShadowMapIdOrPrevLocalLightIndex.field0_0x0._s_0.
                        W, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144c5c480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRDGScatterUploadBuilder::FPass>::ResizeAllocation
          (ForElementType<FRDGScatterUploadBuilder::FPass> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FPass *_Src;
  FPass *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPass *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FPass *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].Function.field_0x2c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d98c10

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualPageIndex>::
ResizeAllocation(ForElementType<FVirtualPageIndex> *this,int param_1,int param_2,ulong64 param_3)

{
  FVirtualPageIndex *_Src;
  FVirtualPageIndex *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVirtualPageIndex *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVirtualPageIndex *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d98d40

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<Nanite::FInstanceDraw>::ResizeAllocation
          (ForElementType<Nanite::FInstanceDraw> *this,int param_1,int param_2,ulong64 param_3)

{
  FInstanceDraw *_Src;
  FInstanceDraw *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FInstanceDraw *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FInstanceDraw *)0x0) && (_Size = (ulonglong)_Src[-1].ViewId, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d98de0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceRange>::
ResizeAllocation(ForElementType<FInstanceRange> *this,int param_1,int param_2,ulong64 param_3)

{
  FInstanceRange *_Src;
  FInstanceRange *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FInstanceRange *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FInstanceRange *)0x0) && (_Size = (ulonglong)(uint)_Src[-1].Num, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d98f20

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FLumenSurfaceCacheCullInstancesTask>::ResizeAllocation
          (ForElementType<FLumenSurfaceCacheCullInstancesTask> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FLumenSurfaceCacheCullInstancesTask *_Src;
  FLumenSurfaceCacheCullInstancesTask *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLumenSurfaceCacheCullInstancesTask *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FLumenSurfaceCacheCullInstancesTask *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xb4, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d98fc0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FLumenSurfaceCacheCullPrimitivesTask>::ResizeAllocation
          (ForElementType<FLumenSurfaceCacheCullPrimitivesTask> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FLumenSurfaceCacheCullPrimitivesTask *_Src;
  FLumenSurfaceCacheCullPrimitivesTask *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLumenSurfaceCacheCullPrimitivesTask *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FLumenSurfaceCacheCullPrimitivesTask *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xa4, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d99060

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask>::ResizeAllocation
          (ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FLumenSurfaceCacheUpdateMeshCardsTask *_Src;
  FLumenSurfaceCacheUpdateMeshCardsTask *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLumenSurfaceCacheUpdateMeshCardsTask *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FLumenSurfaceCacheUpdateMeshCardsTask *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].FarFieldCardTexelDensity, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d99100

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>::
ResizeAllocation(ForElementType<FMeshCardsAdd> *this,int param_1,int param_2,ulong64 param_3)

{
  FMeshCardsAdd *_Src;
  FMeshCardsAdd *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMeshCardsAdd *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FMeshCardsAdd *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].DistanceSquared, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d991a0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteShadingBin>::
ResizeAllocation(ForElementType<FNaniteShadingBin> *this,int param_1,int param_2,ulong64 param_3)

{
  FNaniteShadingBin *_Src;
  FNaniteShadingBin *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FNaniteShadingBin *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FNaniteShadingBin *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].BinIndex, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d994b0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FCardPageRenderData>
::ResizeAllocation(ForElementType<FCardPageRenderData> *this,int param_1,int param_2,ulong64 param_3
                  )

{
  FCardPageRenderData *_Src;
  FCardPageRenderData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FCardPageRenderData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FCardPageRenderData *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xa0c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144d995f0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSurfaceCacheRequest>
::ResizeAllocation(ForElementType<FSurfaceCacheRequest> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FSurfaceCacheRequest *_Src;
  FSurfaceCacheRequest *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSurfaceCacheRequest *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FSurfaceCacheRequest *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Distance, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa2d0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::Math::TIntPoint<int>_>::ResizeAllocation
          (ForElementType<UE::Math::TIntPoint<int>_> *this,int param_1,int param_2,ulong64 param_3)

{
  TIntPoint<int> *_Src;
  TIntPoint<int> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TIntPoint<int> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TIntPoint<int> *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].field0_0x0._s_0.Y, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCacheGenericCSMaterialBatch>::ResizeAllocation
          (ForElementType<FMaterialCacheGenericCSMaterialBatch> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FMaterialCacheGenericCSMaterialBatch *_Src;
  FMaterialCacheGenericCSMaterialBatch *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialCacheGenericCSMaterialBatch *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FMaterialCacheGenericCSMaterialBatch *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].PrimitiveBatches.ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCacheGenericCSPrimitiveBatch>::ResizeAllocation
          (ForElementType<FMaterialCacheGenericCSPrimitiveBatch> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FMaterialCacheGenericCSPrimitiveBatch *_Src;
  FMaterialCacheGenericCSPrimitiveBatch *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialCacheGenericCSPrimitiveBatch *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FMaterialCacheGenericCSPrimitiveBatch *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].ShadingCommand + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa550

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCacheLayerRenderData>::ResizeAllocation
          (ForElementType<FMaterialCacheLayerRenderData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FMaterialCacheLayerRenderData *_Src;
  FMaterialCacheLayerRenderData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialCacheLayerRenderData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FMaterialCacheLayerRenderData *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].VertexInvariant.GenericCSBatch.MaterialBatches.ArrayMax,
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa5f0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCachePageEntry>::ResizeAllocation
          (ForElementType<FMaterialCachePageEntry> *this,int param_1,int param_2,ulong64 param_3)

{
  FMaterialCachePageEntry *_Src;
  FMaterialCachePageEntry *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialCachePageEntry *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FMaterialCachePageEntry *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].UVRect.bIsValid, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa690

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCachePageInfo>::ResizeAllocation
          (ForElementType<FMaterialCachePageInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  FMaterialCachePageInfo *_Src;
  FMaterialCachePageInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialCachePageInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FMaterialCachePageInfo *)0x0) &&
         (_Size = (ulonglong)_Src[-1].SetupEntryIndex, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa730

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCachePendingEntry>::ResizeAllocation
          (ForElementType<FMaterialCachePendingEntry> *this,int param_1,int param_2,ulong64 param_3)

{
  FMaterialCachePendingEntry *_Src;
  FMaterialCachePendingEntry *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialCachePendingEntry *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FMaterialCachePendingEntry *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Pages.ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa7d0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCachePendingPageEntry>::ResizeAllocation
          (ForElementType<FMaterialCachePendingPageEntry> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FMaterialCachePendingPageEntry *_Src;
  FMaterialCachePendingPageEntry *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialCachePendingPageEntry *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FMaterialCachePendingPageEntry *)0x0) &&
         (_Size = (ulonglong)_Src[-1].ABufferPageIndex, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa910

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCacheStaticMeshCommand>::ResizeAllocation
          (ForElementType<FMaterialCacheStaticMeshCommand> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FMaterialCacheStaticMeshCommand *_Src;
  FMaterialCacheStaticMeshCommand *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialCacheStaticMeshCommand *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FMaterialCacheStaticMeshCommand *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].UnwrapMinAndInvSize.field0_0x0._s_0.W, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaa9b0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialCacheTagProvider::FTagSceneListener>::ResizeAllocation
          (ForElementType<FMaterialCacheTagProvider::FTagSceneListener> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FTagSceneListener *_Src;
  FTagSceneListener *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FTagSceneListener *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FTagSceneListener *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Baton + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144eaaaf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMegaLightsViewContext>::ResizeAllocation
          (ForElementType<FMegaLightsViewContext> *this,int param_1,int param_2,ulong64 param_3)

{
  FMegaLightsViewContext *_Src;
  FMegaLightsViewContext *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMegaLightsViewContext *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FMegaLightsViewContext *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src[-1].TranslucencyVolumeVisibleLightHash + 0xc),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144fe3690

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteRasterBinMeta>
::ResizeAllocation(ForElementType<FNaniteRasterBinMeta> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FNaniteRasterBinMeta *_Src;
  FNaniteRasterBinMeta *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FNaniteRasterBinMeta *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FNaniteRasterBinMeta *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].MaterialDisplacementParams.FadeSizeStop, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144fe3730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<Nanite::FRasterizerPass>::ResizeAllocation
          (ForElementType<Nanite::FRasterizerPass> *this,int param_1,int param_2,ulong64 param_3)

{
  FRasterizerPass *_Src;
  FRasterizerPass *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRasterizerPass *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRasterizerPass *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xbc, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 144fe37d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRenderViewContext>::
ResizeAllocation(ForElementType<FRenderViewContext> *this,int param_1,int param_2,ulong64 param_3)

{
  uint uVar1;
  FRenderViewContext *_Src;
  FRenderViewContext *_Dst;
  ulonglong uVar2;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRenderViewContext *)0x0;
    uVar2 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar2 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar2,8);
      if ((_Src != (FRenderViewContext *)0x0) &&
         (uVar1._0_1_ = _Src[-1].bIsFirstView, uVar1._1_1_ = _Src[-1].bIsLastView,
         uVar1._2_2_ = *(undefined2 *)&_Src[-1].field_0xe, _Size = (ulonglong)uVar1, _Size != 0)) {
        if (uVar2 < _Size) {
          _Size = uVar2;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145076220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRHIBatchedShaderParametersAllocator_*>::ResizeAllocation
          (ForElementType<FRHIBatchedShaderParametersAllocator_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FRHIBatchedShaderParametersAllocator **_Src;
  FRHIBatchedShaderParametersAllocator **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRHIBatchedShaderParametersAllocator **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRHIBatchedShaderParametersAllocator **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1450762c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *_Src;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145076360

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::Math::TIntVector4<unsigned_int>_>::ResizeAllocation
          (ForElementType<UE::Math::TIntVector4<unsigned_int>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TIntVector4<unsigned_int> *_Src;
  TIntVector4<unsigned_int> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TIntVector4<unsigned_int> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TIntVector4<unsigned_int> *)0x0) &&
         (_Size = (ulonglong)_Src[-1].field0_0x0._s_0.W, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145076400

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>::
ResizeAllocation(ForElementType<FConvexVolume> *this,int param_1,int param_2,ulong64 param_3)

{
  FConvexVolume *_Src;
  FConvexVolume *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FConvexVolume *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FConvexVolume *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].PermutedPlanes.field_0x11c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145076530

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<`DispatchLumenMeshCapturePass'::__l2::FLumenCapturePass>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145076820

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>::
ResizeAllocation(ForElementType<TAtomic<bool>_> *this,int param_1,int param_2,ulong64 param_3)

{
  TAtomic<bool> *_Src;
  TAtomic<bool> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TAtomic<bool> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,1);
      if ((_Src != (TAtomic<bool> *)0x0) && (_Size = (ulonglong)*(uint *)(_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1450768c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  FSetElementId *_Src;
  FSetElementId *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSetElementId *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FSetElementId *)0x0) && (_Size = (ulonglong)(uint)_Src[-1].Index, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145076ae0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
          (ForElementType<UE::Tasks::Private::FTaskHandle> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FTaskHandle *_Src;
  FTaskHandle *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FTaskHandle *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FTaskHandle *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Pimpl.Reference + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1450ee700

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneCaptureViewInfo>::
ResizeAllocation(ForElementType<FSceneCaptureViewInfo> *this,int param_1,int param_2,ulong64 param_3
                )

{
  FSceneCaptureViewInfo *_Src;
  FSceneCaptureViewInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSceneCaptureViewInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FSceneCaptureViewInfo *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x19c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1452d2850

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<``FPrimitiveSceneInfo::CacheMeshDrawCommands'::__l2::<lambda_1>::operator()'::__l2::FMeshInfoAndIndex>
::ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14533adc0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
::ResizeAllocation(ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  **_Src;
  TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    **)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14533ae60

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_*>::
ResizeAllocation(ForElementType<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_*>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> **_Src;
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> **)0x0)
         && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14533b0c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::HLSL::FRayTracingDecal>::ResizeAllocation
          (ForElementType<UE::HLSL::FRayTracingDecal> *this,int param_1,int param_2,ulong64 param_3)

{
  FRayTracingDecal *_Src;
  FRayTracingDecal *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRayTracingDecal *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FRayTracingDecal *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].TranslatedWorldToDecal.M[3][3], _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14533b160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<RayTracing::FRayTracingMeshBatchTaskData>::ResizeAllocation
          (ForElementType<RayTracing::FRayTracingMeshBatchTaskData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FRayTracingMeshBatchTaskData *_Src;
  FRayTracingMeshBatchTaskData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRayTracingMeshBatchTaskData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRayTracingMeshBatchTaskData *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x14, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14533b200

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRayTracingShaderBindingData>::ResizeAllocation
          (ForElementType<FRayTracingShaderBindingData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FRayTracingShaderBindingData *_Src;
  FRayTracingShaderBindingData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRayTracingShaderBindingData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRayTracingShaderBindingData *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x1c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPrimitiveSceneProxy_*>::ResizeAllocation
          (ForElementType<FPrimitiveSceneProxy_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FPrimitiveSceneProxy **_Src;
  FPrimitiveSceneProxy **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveSceneProxy **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FPrimitiveSceneProxy **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e300

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *_Src;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e3a0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *_Src;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e440

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<`FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>'::__l2::FCreateCommand>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e4e0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<`FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>'::__l2::FCreateCommand>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e580

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<`FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>'::__l2::FDetachCommand>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e620

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<`FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>'::__l2::FDetachCommand>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e6c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPersistentPrimitiveIndex>::ResizeAllocation
          (ForElementType<FPersistentPrimitiveIndex> *this,int param_1,int param_2,ulong64 param_3)

{
  FPersistentPrimitiveIndex *_Src;
  FPersistentPrimitiveIndex *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPersistentPrimitiveIndex *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPersistentPrimitiveIndex *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Index, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14544e760

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentViewId>::
ResizeAllocation(ForElementType<FPersistentViewId> *this,int param_1,int param_2,ulong64 param_3)

{
  FPersistentViewId *_Src;
  FPersistentViewId *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPersistentViewId *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPersistentViewId *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Index, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7230

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIRenderQuery_*>::
ResizeAllocation(ForElementType<FRHIRenderQuery_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRHIRenderQuery **_Src;
  FRHIRenderQuery **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRHIRenderQuery **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRHIRenderQuery **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b72d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>::
ResizeAllocation(ForElementType<FSceneRenderer_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FSceneRenderer **_Src;
  FSceneRenderer **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSceneRenderer **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSceneRenderer **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewFamilyInfo_*>::
ResizeAllocation(ForElementType<FViewFamilyInfo_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FViewFamilyInfo **_Src;
  FViewFamilyInfo **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FViewFamilyInfo **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FViewFamilyInfo **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>::
ResizeAllocation(ForElementType<FViewInfo_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FViewInfo **_Src;
  FViewInfo **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FViewInfo **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FViewInfo **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b74b0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPlanarReflectionSceneProxy_const_*>::ResizeAllocation
          (ForElementType<FPlanarReflectionSceneProxy_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FPlanarReflectionSceneProxy **_Src;
  FPlanarReflectionSceneProxy **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPlanarReflectionSceneProxy **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FPlanarReflectionSceneProxy **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FProjectedShadowInfo_const_*>::ResizeAllocation
          (ForElementType<FProjectedShadowInfo_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FProjectedShadowInfo **_Src;
  FProjectedShadowInfo **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FProjectedShadowInfo **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FProjectedShadowInfo **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b75f0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *_Src;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7690

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::Math::TIntVector2<int>_>::ResizeAllocation
          (ForElementType<UE::Math::TIntVector2<int>_> *this,int param_1,int param_2,ulong64 param_3
          )

{
  TIntVector2<int> *_Src;
  TIntVector2<int> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TIntVector2<int> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TIntVector2<int> *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].field0_0x0._s_0.Y, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7730

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::HLSL::FCellChunkDraw>::ResizeAllocation
          (ForElementType<UE::HLSL::FCellChunkDraw> *this,int param_1,int param_2,ulong64 param_3)

{
  FCellChunkDraw *_Src;
  FCellChunkDraw *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FCellChunkDraw *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FCellChunkDraw *)0x0) && (_Size = (ulonglong)_Src[-1].ViewGroupId, _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b77d0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FSceneInstanceCullingQuery::FCullingJob>::ResizeAllocation
          (ForElementType<FSceneInstanceCullingQuery::FCullingJob> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FCullingJob *_Src;
  FCullingJob *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FCullingJob *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FCullingJob *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x24c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7900

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>::ResizeAllocation
          (ForElementType<FOcclusionQueryBatcher::FOcclusionBatch> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FOcclusionBatch *_Src;
  FOcclusionBatch *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FOcclusionBatch *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FOcclusionBatch *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].VertexAllocation.field_0x14, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b79a0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionPrimitive>
::ResizeAllocation(ForElementType<FOcclusionPrimitive> *this,int param_1,int param_2,ulong64 param_3
                  )

{
  FOcclusionPrimitive *_Src;
  FOcclusionPrimitive *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FOcclusionPrimitive *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FOcclusionPrimitive *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Extent.field0_0x0 + 0x14), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7a40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderProcessor::FOp>
::ResizeAllocation(ForElementType<FSceneRenderProcessor::FOp> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FOp *_Src;
  FOp *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FOp *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FOp *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].field1_0x8 + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7ae0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FGPUWorkGroupLoadBalancer::FPackedItem>::ResizeAllocation
          (ForElementType<FGPUWorkGroupLoadBalancer::FPackedItem> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FPackedItem *_Src;
  FPackedItem *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPackedItem *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPackedItem *)0x0) && (_Size = (ulonglong)_Src[-1].Packed, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7b80

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FSceneCullingBuilder::FTempCell>::ResizeAllocation
          (ForElementType<FSceneCullingBuilder::FTempCell> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FTempCell *_Src;
  FTempCell *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FTempCell *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FTempCell *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Builders[1].PackedChunkIds.ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7c20

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::HLSL::FViewDrawGroup>::ResizeAllocation
          (ForElementType<UE::HLSL::FViewDrawGroup> *this,int param_1,int param_2,ulong64 param_3)

{
  FViewDrawGroup *_Src;
  FViewDrawGroup *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FViewDrawGroup *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FViewDrawGroup *)0x0) && (_Size = (ulonglong)_Src[-1].NumViews, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FViewOcclusionQueries>::ResizeAllocation
          (ForElementType<FViewOcclusionQueries> *this,int param_1,int param_2,ulong64 param_3)

{
  FViewOcclusionQueries *_Src;
  FViewOcclusionQueries *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FViewOcclusionQueries *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FViewOcclusionQueries *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x84, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1454b7e10

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo>::ResizeAllocation
          (ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FWorkGroupInfo *_Src;
  FWorkGroupInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FWorkGroupInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FWorkGroupInfo *)0x0) && (_Size = (ulonglong)_Src[-1].Payload, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145504990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRHICommandListImmediate::FQueuedCommandList>::ResizeAllocation
          (ForElementType<FRHICommandListImmediate::FQueuedCommandList> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FQueuedCommandList *_Src;
  FQueuedCommandList *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FQueuedCommandList *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FQueuedCommandList *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].CmdList + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14554f9e0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FThrottledOcclusionQuery_*>::ResizeAllocation
          (ForElementType<FThrottledOcclusionQuery_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FThrottledOcclusionQuery **_Src;
  FThrottledOcclusionQuery **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FThrottledOcclusionQuery **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FThrottledOcclusionQuery **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14554fa80

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FGPUOcclusionParallelPacket_*>::ResizeAllocation
          (ForElementType<FGPUOcclusionParallelPacket_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FGPUOcclusionParallelPacket **_Src;
  FGPUOcclusionParallelPacket **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FGPUOcclusionParallelPacket **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FGPUOcclusionParallelPacket **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14554fb20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket_*>::
ResizeAllocation(ForElementType<FRelevancePacket_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRelevancePacket **_Src;
  FRelevancePacket **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRelevancePacket **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRelevancePacket **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14554fbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FLightSceneProxy_const_*>::ResizeAllocation
          (ForElementType<FLightSceneProxy_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FLightSceneProxy **_Src;
  FLightSceneProxy **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLightSceneProxy **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FLightSceneProxy **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14554fcf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FStaticMeshBatch_const_*>::ResizeAllocation
          (ForElementType<FStaticMeshBatch_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FStaticMeshBatch **_Src;
  FStaticMeshBatch **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FStaticMeshBatch **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FStaticMeshBatch **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14554fe20

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TTuple<UE::Math::TBox<double>,FColor>_>::ResizeAllocation
          (ForElementType<TTuple<UE::Math::TBox<double>,FColor>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TTuple<UE::Math::TBox<double>,FColor> *_Src;
  TTuple<UE::Math::TBox<double>,FColor> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TTuple<UE::Math::TBox<double>,FColor> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TTuple<UE::Math::TBox<double>,FColor> *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x3c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14554fec0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>::
ResizeAllocation(ForElementType<FDynamicPrimitive> *this,int param_1,int param_2,ulong64 param_3)

{
  FDynamicPrimitive *_Src;
  FDynamicPrimitive *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FDynamicPrimitive *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FDynamicPrimitive *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].EndElementIndex, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14554ff60

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FDynamicPrimitiveIndex>::ResizeAllocation
          (ForElementType<FDynamicPrimitiveIndex> *this,int param_1,int param_2,ulong64 param_3)

{
  FDynamicPrimitiveIndex *_Src;
  FDynamicPrimitiveIndex *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FDynamicPrimitiveIndex *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FDynamicPrimitiveIndex *)0x0) && (_Size = (ulonglong)(uint)_Src[-1], _Size != 0)
         ) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550000

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FDynamicPrimitiveIndexList>::ResizeAllocation
          (ForElementType<FDynamicPrimitiveIndexList> *this,int param_1,int param_2,ulong64 param_3)

{
  FDynamicPrimitiveIndexList *_Src;
  FDynamicPrimitiveIndexList *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FDynamicPrimitiveIndexList *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FDynamicPrimitiveIndexList *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Primitives.ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1455500a0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHZBBound>::
ResizeAllocation(ForElementType<FHZBBound> *this,int param_1,int param_2,ulong64 param_3)

{
  FHZBBound *_Src;
  FHZBBound *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FHZBBound *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FHZBBound *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].BoundsExtent.field0_0x0 + 0x14),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550140

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>::
ResizeAllocation(ForElementType<FLODMask> *this,int param_1,int param_2,ulong64 param_3)

{
  FLODMask *_Src;
  FLODMask *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLODMask *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,2);
      if ((_Src != (FLODMask *)0x0) && (_Size = (ulonglong)*(uint *)(_Src + -2), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1455501e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMeshBatchAndRelevance>::ResizeAllocation
          (ForElementType<FMeshBatchAndRelevance> *this,int param_1,int param_2,ulong64 param_3)

{
  FMeshBatchAndRelevance *_Src;
  FMeshBatchAndRelevance *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMeshBatchAndRelevance *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FMeshBatchAndRelevance *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x14, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550280

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FOcclusionFeedbackEntry>::ResizeAllocation
          (ForElementType<FOcclusionFeedbackEntry> *this,int param_1,int param_2,ulong64 param_3)

{
  FOcclusionFeedbackEntry *_Src;
  FOcclusionFeedbackEntry *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FOcclusionFeedbackEntry *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FOcclusionFeedbackEntry *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Bounds.Extent.field0_0x0 + 0x14),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550320

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQuery>::
ResizeAllocation(ForElementType<FOcclusionQuery> *this,int param_1,int param_2,ulong64 param_3)

{
  FOcclusionQuery *_Src;
  FOcclusionQuery *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FOcclusionQuery *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FOcclusionQuery *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x3c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1455503c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPrimitiveInstanceRange>::ResizeAllocation
          (ForElementType<FPrimitiveInstanceRange> *this,int param_1,int param_2,ulong64 param_3)

{
  FPrimitiveInstanceRange *_Src;
  FPrimitiveInstanceRange *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveInstanceRange *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPrimitiveInstanceRange *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].NumInstances, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550460

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRelevancePacket::FPrimitiveLODMask>::ResizeAllocation
          (ForElementType<FRelevancePacket::FPrimitiveLODMask> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FPrimitiveLODMask *_Src;
  FPrimitiveLODMask *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveLODMask *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPrimitiveLODMask *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].LODMask, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550500

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveRange>::
ResizeAllocation(ForElementType<FPrimitiveRange> *this,int param_1,int param_2,ulong64 param_3)

{
  FPrimitiveRange *_Src;
  FPrimitiveRange *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveRange *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPrimitiveRange *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].EndIndex, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1455505a0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPrimitiveViewRelevance>::ResizeAllocation
          (ForElementType<FPrimitiveViewRelevance> *this,int param_1,int param_2,ulong64 param_3)

{
  FPrimitiveViewRelevance *_Src;
  FPrimitiveViewRelevance *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPrimitiveViewRelevance *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FPrimitiveViewRelevance *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xc, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FRHICommandListImmediate::FQueuedCommandList>::ResizeAllocation
          (ForElementType<FRHICommandListImmediate::FQueuedCommandList> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FQueuedCommandList *_Src;
  FQueuedCommandList *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FQueuedCommandList *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FQueuedCommandList *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].CmdList + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550780

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FThrottledOcclusionQuery>::ResizeAllocation
          (ForElementType<FThrottledOcclusionQuery> *this,int param_1,int param_2,ulong64 param_3)

{
  FThrottledOcclusionQuery *_Src;
  FThrottledOcclusionQuery *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FThrottledOcclusionQuery *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FThrottledOcclusionQuery *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x3c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550820

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>::ResizeAllocation
          (ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FView *_Src;
  FView *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FView *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FView *)0x0) && (_Size = (ulonglong)_Src[-1].MaxQueriesPerTask, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550aa0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
ResizeAllocation(ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *_Src;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)
                   0x0) && (_Size = (ulonglong)(uint)_Src[-1].ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550b40

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>::
ResizeAllocation(ForElementType<FMeshPassMask> *this,int param_1,int param_2,ulong64 param_3)

{
  FMeshPassMask *_Src;
  FMeshPassMask *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMeshPassMask *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FMeshPassMask *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Data + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550dc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVisibilityViewPacket>::ResizeAllocation
          (ForElementType<FVisibilityViewPacket> *this,int param_1,int param_2,ulong64 param_3)

{
  FVisibilityViewPacket *_Src;
  FVisibilityViewPacket *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVisibilityViewPacket *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FVisibilityViewPacket *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x22c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVisibleLightViewInfo>::ResizeAllocation
          (ForElementType<FVisibleLightViewInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  FVisibleLightViewInfo *_Src;
  FVisibleLightViewInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVisibleLightViewInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVisibleLightViewInfo *)0x0) &&
         (_Size = (ulonglong)
                  (uint)_Src[-1].MobileCSMSubjectPrimitives.ShadowSubjectPrimitives.ArrayMax,
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145550f00

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,1);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1455c8fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FProjectedShadowInfo_*>::ResizeAllocation
          (ForElementType<FProjectedShadowInfo_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FProjectedShadowInfo **_Src;
  FProjectedShadowInfo **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FProjectedShadowInfo **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FProjectedShadowInfo **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145642710

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FGatherShadowPrimitivesPacket_*>::ResizeAllocation
          (ForElementType<FGatherShadowPrimitivesPacket_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FGatherShadowPrimitivesPacket **_Src;
  FGatherShadowPrimitivesPacket **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FGatherShadowPrimitivesPacket **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FGatherShadowPrimitivesPacket **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1456427b0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<IPooledRenderTarget_*>::ResizeAllocation
          (ForElementType<IPooledRenderTarget_*> *this,int param_1,int param_2,ulong64 param_3)

{
  IPooledRenderTarget **_Src;
  IPooledRenderTarget **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (IPooledRenderTarget **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (IPooledRenderTarget **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145642850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FParallelMeshDrawCommandPass_*>::ResizeAllocation
          (ForElementType<FParallelMeshDrawCommandPass_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FParallelMeshDrawCommandPass **_Src;
  FParallelMeshDrawCommandPass **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FParallelMeshDrawCommandPass **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FParallelMeshDrawCommandPass **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1456429a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FShadowMeshCollector_*>::ResizeAllocation
          (ForElementType<FShadowMeshCollector_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FShadowMeshCollector **_Src;
  FShadowMeshCollector **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FShadowMeshCollector **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FShadowMeshCollector **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145642cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>::ResizeAllocation
          (ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup> *this,int param_1
          ,int param_2,ulong64 param_3)

{
  FDirectionalLightShadowFrameSetup *_Src;
  FDirectionalLightShadowFrameSetup *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FDirectionalLightShadowFrameSetup *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FDirectionalLightShadowFrameSetup *)0x0) &&
         (_Size = (ulonglong)
                  *(uint *)((longlong)&_Src[-1].ClipmapInfos.Elements[1].ProjectedShadowInfo + 4),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145642de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FDrawDebugShadowFrustumOp>::ResizeAllocation
          (ForElementType<FDrawDebugShadowFrustumOp> *this,int param_1,int param_2,ulong64 param_3)

{
  FDrawDebugShadowFrustumOp *_Src;
  FDrawDebugShadowFrustumOp *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FDrawDebugShadowFrustumOp *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FDrawDebugShadowFrustumOp *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].ProjectedShadowInfo + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145642e80

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::HLSL::FInstanceCullingGroupWork>::ResizeAllocation
          (ForElementType<UE::HLSL::FInstanceCullingGroupWork> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FInstanceCullingGroupWork *_Src;
  FInstanceCullingGroupWork *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FInstanceCullingGroupWork *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FInstanceCullingGroupWork *)0x0) &&
         (_Size = (ulonglong)_Src[-1].ActiveViewMask, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145642f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FLayoutAndAssignedShadows>::ResizeAllocation
          (ForElementType<FLayoutAndAssignedShadows> *this,int param_1,int param_2,ulong64 param_3)

{
  FLayoutAndAssignedShadows *_Src;
  FLayoutAndAssignedShadows *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLayoutAndAssignedShadows *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FLayoutAndAssignedShadows *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Shadows.ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145642fc0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>::ResizeAllocation
          (ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FLightCommonFrameSetup *pFVar1;
  FLightCommonFrameSetup FVar2;
  FLightCommonFrameSetup *_Src;
  FLightCommonFrameSetup *_Dst;
  ulonglong uVar3;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLightCommonFrameSetup *)0x0;
    uVar3 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar3 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar3,4);
      if ((_Src != (FLightCommonFrameSetup *)0x0) &&
         (pFVar1 = _Src + -1, FVar2 = *pFVar1,
         pFVar1->bHasVirtualShadowMap != 0 ||
         (pFVar1->bIsDirectional != 0 || pFVar1->SetupIndex != 0))) {
        _Size = (ulonglong)(uint)FVar2;
        if (uVar3 < (uint)FVar2) {
          _Size = uVar3;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145643060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FShadowSceneRenderer::FLocalLightShadowFrameSetup>::ResizeAllocation
          (ForElementType<FShadowSceneRenderer::FLocalLightShadowFrameSetup> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FLocalLightShadowFrameSetup *_Src;
  FLocalLightShadowFrameSetup *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLocalLightShadowFrameSetup *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FLocalLightShadowFrameSetup *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].LightSceneInfo + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145643100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FNaniteVirtualShadowMapRenderPass>::ResizeAllocation
          (ForElementType<FNaniteVirtualShadowMapRenderPass> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FNaniteVirtualShadowMapRenderPass *_Src;
  FNaniteVirtualShadowMapRenderPass *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FNaniteVirtualShadowMapRenderPass *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FNaniteVirtualShadowMapRenderPass *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].ExplicitChunkDrawInfo + 4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1456431a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FSortedShadowMapAtlas>::ResizeAllocation
          (ForElementType<FSortedShadowMapAtlas> *this,int param_1,int param_2,ulong64 param_3)

{
  FSortedShadowMapAtlas *_Src;
  FSortedShadowMapAtlas *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSortedShadowMapAtlas *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSortedShadowMapAtlas *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Shadows.ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145643240

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FShadowSceneRenderer::FViewData>::ResizeAllocation
          (ForElementType<FShadowSceneRenderer::FViewData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FViewData *_Src;
  FViewData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FViewData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FViewData *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].ClipToViewSizeBias, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145643370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TRefCountPtr<FProjectedShadowInfo>_>::ResizeAllocation
          (ForElementType<TRefCountPtr<FProjectedShadowInfo>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TRefCountPtr<FProjectedShadowInfo> *_Src;
  TRefCountPtr<FProjectedShadowInfo> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TRefCountPtr<FProjectedShadowInfo> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TRefCountPtr<FProjectedShadowInfo> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Reference + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 145643410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_>::ResizeAllocation
          (ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TSharedPtr<FVirtualShadowMapClipmap,1> *_Src;
  TSharedPtr<FVirtualShadowMapClipmap,1> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TSharedPtr<FVirtualShadowMapClipmap,1> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSharedPtr<FVirtualShadowMapClipmap,1> *)0x0) &&
         (_Size = (ulonglong)
                  *(uint *)((longlong)&_Src[-1].SharedReferenceCount.ReferenceController + 4),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1456434b0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FString>::
ResizeAllocation(ForElementType<FString> *this,int param_1,int param_2,ulong64 param_3)

{
  FString *_Src;
  FString *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FString *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FString *)0x0) && (_Size = (ulonglong)(uint)_Src[-1].Data.ArrayMax, _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14569db40

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>
::ResizeAllocation(ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *_Src;
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
            *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                    *)0x0) && (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x14, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14578b4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FTranslucentLightInjectionCollector::FInjectionData>::ResizeAllocation
          (ForElementType<FTranslucentLightInjectionCollector::FInjectionData> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FInjectionData *_Src;
  FInjectionData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FInjectionData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FInjectionData *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].VolumeBounds[1].MaxZ, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14578b550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FTranslucentLightInjectionCollector::FPerViewData>::ResizeAllocation
          (ForElementType<FTranslucentLightInjectionCollector::FPerViewData> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FPerViewData *_Src;
  FPerViewData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FPerViewData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FPerViewData *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].bAnyBatchedLightsWithVirtualShadowMaps, _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14578b690

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightArray>::
ResizeAllocation(ForElementType<FSimpleLightArray> *this,int param_1,int param_2,ulong64 param_3)

{
  FSimpleLightArray *_Src;
  FSimpleLightArray *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSimpleLightArray *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSimpleLightArray *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].InstancePerViewDataIndices.ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14578b730

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightEntry>::
ResizeAllocation(ForElementType<FSimpleLightEntry> *this,int param_1,int param_2,ulong64 param_3)

{
  FSimpleLightEntry *_Src;
  FSimpleLightEntry *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSimpleLightEntry *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSimpleLightEntry *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].LightId._s_0.SourcePrimitiveId, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14578b7d0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FSimpleLightPerViewEntry>::ResizeAllocation
          (ForElementType<FSimpleLightPerViewEntry> *this,int param_1,int param_2,ulong64 param_3)

{
  FSimpleLightPerViewEntry *_Src;
  FSimpleLightPerViewEntry *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSimpleLightPerViewEntry *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSimpleLightPerViewEntry *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Position.field0_0x0 + 0x14), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14580ee30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGBuffer_*>::
ResizeAllocation(ForElementType<FRDGBuffer_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRDGBuffer **_Src;
  FRDGBuffer **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRDGBuffer **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRDGBuffer **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14580ef80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVirtualShadowDepthPassParameters_*>::ResizeAllocation
          (ForElementType<FVirtualShadowDepthPassParameters_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FVirtualShadowDepthPassParameters **_Src;
  FVirtualShadowDepthPassParameters **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVirtualShadowDepthPassParameters **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVirtualShadowDepthPassParameters **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14580f020

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVirtualShadowMapPerLightCacheEntry_const_*>::ResizeAllocation
          (ForElementType<FVirtualShadowMapPerLightCacheEntry_const_*> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  FVirtualShadowMapPerLightCacheEntry **_Src;
  FVirtualShadowMapPerLightCacheEntry **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVirtualShadowMapPerLightCacheEntry **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVirtualShadowMapPerLightCacheEntry **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14580f0c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FPerPageShaderDispatcher::FBuilder::FIdBinIndex>::ResizeAllocation
          (ForElementType<FPerPageShaderDispatcher::FBuilder::FIdBinIndex> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FIdBinIndex FVar1;
  FIdBinIndex *_Src;
  FIdBinIndex *_Dst;
  ulonglong uVar2;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FIdBinIndex *)0x0;
    uVar2 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar2 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar2,4);
      if ((_Src != (FIdBinIndex *)0x0) &&
         (FVar1 = _Src[-1], _Src[-1].VirtualShadowMapId != 0 || (_Src + -1)->BinIndex != 0)) {
        _Size = (ulonglong)(uint)FVar1;
        if (uVar2 < (uint)FVar1) {
          _Size = uVar2;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14580f200

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::HLSL::FNextVirtualShadowMapData>::ResizeAllocation
          (ForElementType<UE::HLSL::FNextVirtualShadowMapData> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FNextVirtualShadowMapData *_Src;
  FNextVirtualShadowMapData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FNextVirtualShadowMapData *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FNextVirtualShadowMapData *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].PageAddressOffset.field0_0x0._s_0.Y, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14580f2a0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::HLSL::FVSMCullingBatchInfo>::ResizeAllocation
          (ForElementType<UE::HLSL::FVSMCullingBatchInfo> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FVSMCullingBatchInfo *_Src;
  FVSMCullingBatchInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVSMCullingBatchInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FVSMCullingBatchInfo *)0x0) &&
         (_Size = (ulonglong)_Src[-1].NumPrimaryViews, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14580f340

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVisualizationDataLegendEntry>::ResizeAllocation
          (ForElementType<FVisualizationDataLegendEntry> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FVisualizationDataLegendEntry *_Src;
  FVisualizationDataLegendEntry *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FVisualizationDataLegendEntry *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVisualizationDataLegendEntry *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].Color.field0_0x0._s_0.A, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// MoveToEmpty @ 14593f340

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
MoveToEmpty(ForElementType<unsigned_int> *this,ForElementType<unsigned_int> *param_1)

{
  if (this->Data != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(this->Data);
  }
  this->Data = param_1->Data;
  param_1->Data = (uint *)0x0;
  return;
}

// MoveToEmpty @ 14593f380

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FVisibleMeshDrawCommand>::MoveToEmpty
          (ForElementType<FVisibleMeshDrawCommand> *this,
          ForElementType<FVisibleMeshDrawCommand> *param_1)

{
  if (this->Data != (FVisibleMeshDrawCommand *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(this->Data);
  }
  this->Data = param_1->Data;
  param_1->Data = (FVisibleMeshDrawCommand *)0x0;
  return;
}

