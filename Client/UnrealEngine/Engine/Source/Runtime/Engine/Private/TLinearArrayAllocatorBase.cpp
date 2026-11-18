// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// ResizeAllocation @ 1473560c0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>::ResizeAllocation
          (ForElementType<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *_Src;
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].WeakPtr.ObjectSerialNumber, _Size != 0)) {
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

// ResizeAllocation @ 1478613e0

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
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UPrimitiveComponent_*>::
ResizeAllocation(ForElementType<UPrimitiveComponent_*> *this,int param_1,int param_2,ulong64 param_3
                )

{
  UPrimitiveComponent **_Src;
  UPrimitiveComponent **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (UPrimitiveComponent **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (UPrimitiveComponent **)0x0) &&
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

// ResizeAllocation @ 147d251e0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<UE::Math::TVector<double>_>::ResizeAllocation
          (ForElementType<UE::Math::TVector<double>_> *this,int param_1,int param_2,ulong64 param_3)

{
  TVector<double> *_Src;
  TVector<double> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TVector<double> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TVector<double> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].field0_0x0 + 0x14), _Size != 0)) {
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

// ResizeAllocation @ 147f85940

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FUniformExpressionCacheAsyncUpdater::FItem>::ResizeAllocation
          (ForElementType<FUniformExpressionCacheAsyncUpdater::FItem> *this,int param_1,int param_2,
          ulong64 param_3)

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
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FItem *)0x0) && (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x3c, _Size != 0))
      {
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

// ResizeAllocation @ 1484f1c80

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_short>::
ResizeAllocation(ForElementType<unsigned_short> *this,int param_1,int param_2,ulong64 param_3)

{
  ushort *_Src;
  ushort *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (ushort *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,2);
      if ((_Src != (ushort *)0x0) && (_Size = (ulonglong)*(uint *)(_Src + -2), _Size != 0)) {
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

// ResizeAllocation @ 1484f1e80

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
ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
::ResizeAllocation(ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  **_Src;
  TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
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

// ResizeAllocation @ 1484f1fd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FGPUScenePrimitiveCollector_*>::ResizeAllocation
          (ForElementType<FGPUScenePrimitiveCollector_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FGPUScenePrimitiveCollector **_Src;
  FGPUScenePrimitiveCollector **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FGPUScenePrimitiveCollector **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FGPUScenePrimitiveCollector **)0x0) &&
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

// ResizeAllocation @ 1484f2120

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialRenderProxy_*>::ResizeAllocation
          (ForElementType<FMaterialRenderProxy_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FMaterialRenderProxy **_Src;
  FMaterialRenderProxy **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialRenderProxy **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FMaterialRenderProxy **)0x0) &&
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

// ResizeAllocation @ 1484f21c0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FSimpleElementCollector_*>::ResizeAllocation
          (ForElementType<FSimpleElementCollector_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FSimpleElementCollector **_Src;
  FSimpleElementCollector **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSimpleElementCollector **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSimpleElementCollector **)0x0) &&
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

// ResizeAllocation @ 1484f2310

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FMaterialRenderProxy_const_*>::ResizeAllocation
          (ForElementType<FMaterialRenderProxy_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FMaterialRenderProxy **_Src;
  FMaterialRenderProxy **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FMaterialRenderProxy **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FMaterialRenderProxy **)0x0) &&
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

// ResizeAllocation @ 1484f23b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneView_const_*>::
ResizeAllocation(ForElementType<FSceneView_const_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FSceneView **_Src;
  FSceneView **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSceneView **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSceneView **)0x0) &&
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

// ResizeAllocation @ 1484f2500

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*>_>::ResizeAllocation
          (ForElementType<TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *_Src;
  TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *)0x0) &&
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

// ResizeAllocation @ 1484f25a0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TTuple<FMaterialRenderProxy_*,bool>_>::ResizeAllocation
          (ForElementType<TTuple<FMaterialRenderProxy_*,bool>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TTuple<FMaterialRenderProxy_*,bool> *_Src;
  TTuple<FMaterialRenderProxy_*,bool> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TTuple<FMaterialRenderProxy_*,bool> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TTuple<FMaterialRenderProxy_*,bool> *)0x0) &&
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

// ResizeAllocation @ 1484f2640

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest>::
ResizeAllocation(ForElementType<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  FRayTracingDynamicGeometryUpdateRequest *_Src;
  FRayTracingDynamicGeometryUpdateRequest *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRayTracingDynamicGeometryUpdateRequest *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FRayTracingDynamicGeometryUpdateRequest *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x9c, _Size != 0)) {
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

// ResizeAllocation @ 1484f26e0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex>::ResizeAllocation
          (ForElementType<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex> *this,
          int param_1,int param_2,ulong64 param_3)

{
  FRayTracingInstanceAndViewIndex *_Src;
  FRayTracingInstanceAndViewIndex *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRayTracingInstanceAndViewIndex *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRayTracingInstanceAndViewIndex *)0x0) &&
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

// ResizeAllocation @ 1484f2780

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>_>
::ResizeAllocation(ForElementType<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *_Src;
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)
           0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                    *)0x0) && (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x4c, _Size != 0)) {
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

// ResizeAllocation @ 148660f50

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FDynamicSkelMeshObjectDataGPUSkin_*>::ResizeAllocation
          (ForElementType<FDynamicSkelMeshObjectDataGPUSkin_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FDynamicSkelMeshObjectDataGPUSkin **_Src;
  FDynamicSkelMeshObjectDataGPUSkin **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FDynamicSkelMeshObjectDataGPUSkin **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FDynamicSkelMeshObjectDataGPUSkin **)0x0) &&
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

// ResizeAllocation @ 148660ff0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FSkeletalMeshObjectGPUSkin_*>::ResizeAllocation
          (ForElementType<FSkeletalMeshObjectGPUSkin_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FSkeletalMeshObjectGPUSkin **_Src;
  FSkeletalMeshObjectGPUSkin **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSkeletalMeshObjectGPUSkin **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSkeletalMeshObjectGPUSkin **)0x0) &&
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

// ResizeAllocation @ 148661090

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>
::ResizeAllocation(ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
  *_Src;
  TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
  *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
            *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
                    *)0x0) && (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xc, _Size != 0)) {
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

// ResizeAllocation @ 148661130

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FSkeletalMeshUpdatePacketGPUSkin::FCommand>::ResizeAllocation
          (ForElementType<FSkeletalMeshUpdatePacketGPUSkin::FCommand> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FCommand *_Src;
  FCommand *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FCommand *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FCommand *)0x0) && (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xc, _Size != 0)
         ) {
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

// ResizeAllocation @ 148661270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FSkeletalMeshUpdateChannel::FOp>::ResizeAllocation
          (ForElementType<FSkeletalMeshUpdateChannel::FOp> *this,int param_1,int param_2,
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
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].field2_0x8 + 4), _Size != 0)) {
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

// ResizeAllocation @ 1486613b0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<`FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData'::__l2::FSkinCacheEntryThrottled>
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
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 148661450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>::
ResizeAllocation(ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> *_Src;
  TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>
                    *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Ptr + 4), _Size != 0)) {
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

// ResizeAllocation @ 1486ea540

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshObjectNanite_*>
::ResizeAllocation(ForElementType<FSkeletalMeshObjectNanite_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FSkeletalMeshObjectNanite **_Src;
  FSkeletalMeshObjectNanite **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSkeletalMeshObjectNanite **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSkeletalMeshObjectNanite **)0x0) &&
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

// ResizeAllocation @ 1486ea5e0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FSkeletalMeshUpdatePacketNanite::FDynamicDataEntry>::ResizeAllocation
          (ForElementType<FSkeletalMeshUpdatePacketNanite::FDynamicDataEntry> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FDynamicDataEntry *_Src;
  FDynamicDataEntry *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FDynamicDataEntry *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FDynamicDataEntry *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Previous + 4), _Size != 0)) {
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

// ResizeAllocation @ 1486ea680

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled>::ResizeAllocation
          (ForElementType<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled> *this,
          int param_1,int param_2,ulong64 param_3)

{
  FSkinCacheEntryThrottled *_Src;
  FSkinCacheEntryThrottled *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSkinCacheEntryThrottled *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSkinCacheEntryThrottled *)0x0) &&
         (_Size = (ulonglong)_Src[-1].BoneFrameNumber, _Size != 0)) {
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

