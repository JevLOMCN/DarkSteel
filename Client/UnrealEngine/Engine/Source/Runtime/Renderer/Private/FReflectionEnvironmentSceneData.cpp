// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// operator() @ 145365c50

void __thiscall
`FReflectionEnvironmentSceneData::Reset'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FRHIResource *pFVar1;
  longlong lVar2;
  
  **(undefined1 **)this = 1;
  *(undefined1 *)(*(longlong *)this + 1) = 0;
  pFVar1 = *(FRHIResource **)(*(longlong *)this + 0x130);
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x130) = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = *(FRHIResource **)(*(longlong *)this + 0x138);
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x138) = 0;
    FRHIResource::Release(pFVar1);
  }
  lVar2 = *(longlong *)this;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  if (*(int *)(lVar2 + 0x14) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar2 + 8),0,(int *)(lVar2 + 0x14));
  }
  lVar2 = *(longlong *)this;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  if (*(int *)(lVar2 + 0x24) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)(lVar2 + 0x18),0,(int *)(lVar2 + 0x24));
  }
  lVar2 = *(longlong *)this;
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x48) = 0;
  FReflectionCaptureCache::Empty((FReflectionCaptureCache *)(*(longlong *)this + 0x58));
  lVar2 = *(longlong *)this;
  *(undefined4 *)(lVar2 + 0x110) = 0;
  if ((*(int *)(lVar2 + 0x114) < 0) || (0x80 < *(int *)(lVar2 + 0x114))) {
    *(undefined4 *)(lVar2 + 0x114) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar2 + 0xf8),0);
  }
  lVar2 = *(longlong *)this;
  *(undefined4 *)(lVar2 + 0x120) = 0;
  if (*(int *)(lVar2 + 0x124) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,(ForAnyElementType *)(lVar2 + 0x118),0,(int *)(lVar2 + 0x124));
  }
  *(undefined4 *)(*(longlong *)this + 0x128) = 0;
  *(undefined4 *)(*(longlong *)this + 300) = 0;
  return;
}

// DoesAllocatedDataNeedUpdate @ 14537c910

bool __thiscall
FReflectionEnvironmentSceneData::DoesAllocatedDataNeedUpdate
          (FReflectionEnvironmentSceneData *this,int param_1,int param_2)

{
  if (param_1 == this->MaxAllocatedReflectionCubemapsGameThread) {
    return param_2 != this->ReflectionCaptureSizeGameThread;
  }
  return true;
}

// Reset @ 1453a63f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FReflectionEnvironmentSceneData::Reset(FReflectionEnvironmentSceneData *this,FScene *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStackY_f8 [32];
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  code *local_98 [2];
  undefined **local_88;
  FReflectionEnvironmentSceneData *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FReflectionEnvironmentSceneData *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSparseArray<UReflectionCaptureComponent_*,FDefaultSparseArrayAllocator>::TIterator::TIterator
            ((TIterator *)&local_c8,&this->AllocatedReflectionCapturesGameThread);
  if (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits) {
    do {
      if (*(longlong *)(*local_c8 + (longlong)local_c0.CurrentBitIndex * 8) != 0) {
        (**(code **)(*(longlong *)param_1 + 0x160))(param_1);
      }
      local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
    } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
  }
  puVar1 = &(this->AllocatedReflectionCapturesGameThread).field_0xc;
  *(undefined4 *)&(this->AllocatedReflectionCapturesGameThread).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->AllocatedReflectionCapturesGameThread,0,
               (int *)puVar1);
  }
  *(undefined4 *)&(this->AllocatedReflectionCapturesGameThread).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllocatedReflectionCapturesGameThread).field_0x34 = 0;
  iVar2 = *(int *)&(this->AllocatedReflectionCapturesGameThread).field_0x2c;
  *(undefined4 *)&(this->AllocatedReflectionCapturesGameThread).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AllocatedReflectionCapturesGameThread).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->AllocatedReflectionCapturesGameThread).field_0x10,0);
  }
  this->MaxAllocatedReflectionCubemapsGameThread = 0;
  this->ReflectionCaptureSizeGameThread = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FReflectionEnvironmentSceneData::Reset'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FReflectionEnvironmentSceneData::Reset'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this->DesiredReflectionCaptureSizeGameThread = 0;
  local_70 = (undefined ***)0x0;
  pFStack_80 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FReflectionEnvironmentSceneData::Reset_::__l2::TSTR_ReflectionEnvironmentSceneDataReset512>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FReflectionEnvironmentSceneData::Reset'::__l2::TSTR_ReflectionEnvironmentSceneDataReset512>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar5);
    uVar7 = (ulonglong)local_38;
    if (2 < uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar6 = local_40;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar6 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar6 = local_70;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// ResizeCubemapArrayGPU @ 1453a7000

void __thiscall
FReflectionEnvironmentSceneData::ResizeCubemapArrayGPU
          (FReflectionEnvironmentSceneData *this,uint param_1,int param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TMap<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
  *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong64 uVar7;
  uint *puVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FGuid *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  int local_68;
  undefined4 local_64;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_50;
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                         ,0x1b4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)(this->CubemapArray)._padding_ == -1) {
    uVar13 = param_1 + 0x1f >> 5;
    pTVar1 = &this->CubemapArraySlotsUsed;
    (this->CubemapArraySlotsUsed).NumBits = param_1;
    if (param_1 + 0x1f >> 5 != 0) {
      if ((this->CubemapArraySlotsUsed).MaxBits + 0x1fU >> 5 < uVar13) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar13,4);
        (this->CubemapArraySlotsUsed).MaxBits = uVar13 << 5;
      }
      FVar9 = (this->CubemapArraySlotsUsed).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      memset((void *)FVar9,0,(ulonglong)uVar13 << 2);
      iVar5 = (this->CubemapArraySlotsUsed).NumBits;
      uVar11 = iVar5 >> 0x1f & 0x1f;
      uVar13 = iVar5 + uVar11;
      iVar5 = (uVar13 & 0x1f) - uVar11;
      if (iVar5 != 0) {
        FVar9 = (this->CubemapArraySlotsUsed).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)pTVar1;
        }
        puVar8 = (uint *)((longlong)FVar9 + (longlong)((int)uVar13 >> 5) * 4);
        *puVar8 = *puVar8 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
      }
    }
    FReflectionEnvironmentCubemapArray::UpdateMaxCubemaps(&this->CubemapArray,param_1,param_2);
  }
  else {
    uVar11 = 0;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    local_68 = 0;
    uVar13 = uVar11;
    if (0 < (int)(this->CubemapArray).MaxCubemaps) {
      do {
        if ((int)uVar13 < (this->CubemapArraySlotsUsed).NumBits) {
          if (((int)uVar13 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar9 = (this->CubemapArraySlotsUsed).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<unsigned_int>)&this->CubemapArraySlotsUsed;
          if (FVar9 != (ForElementType<unsigned_int>)0x0) {
            FVar10 = FVar9;
          }
          uVar12 = uVar13;
          if ((int)uVar13 < 0) {
            uVar12 = uVar13 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar13 & 0x1f) & 1
              ) == 0) goto LAB_1453a725e;
          if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 <
               local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_60.ArrayNum == local_60.ArrayMax) {
            local_60.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
          }
          *(int *)(local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 4) = local_68;
          local_68 = local_68 + 1;
        }
        else {
LAB_1453a725e:
          local_64 = 0xffffffff;
          if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_64) &&
              ((FScriptContainerElement *)&local_64 <
               local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_60.ArrayNum == local_60.ArrayMax) {
            local_60.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
          }
          *(undefined4 *)(local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 4) =
               local_64;
        }
        local_60.ArrayNum = local_60.ArrayNum + 1;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)(this->CubemapArray).MaxCubemaps);
    }
    pTVar1 = &this->CubemapArraySlotsUsed;
    (this->CubemapArraySlotsUsed).NumBits = param_1;
    uVar13 = param_1 + 0x1f >> 5;
    if (param_1 + 0x1f >> 5 != 0) {
      if ((this->CubemapArraySlotsUsed).MaxBits + 0x1fU >> 5 < uVar13) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar13,4);
        (this->CubemapArraySlotsUsed).MaxBits = uVar13 << 5;
      }
      FVar9 = (this->CubemapArraySlotsUsed).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      memset((void *)FVar9,0,(ulonglong)uVar13 << 2);
      iVar5 = (this->CubemapArraySlotsUsed).NumBits;
      uVar12 = iVar5 >> 0x1f & 0x1f;
      uVar13 = iVar5 + uVar12;
      iVar5 = (uVar13 & 0x1f) - uVar12;
      if (iVar5 != 0) {
        FVar9 = (this->CubemapArraySlotsUsed).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)pTVar1;
        }
        puVar8 = (uint *)((longlong)FVar9 + (longlong)((int)uVar13 >> 5) * 4);
        *puVar8 = *puVar8 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
      }
    }
    this_00 = &(this->AllocatedReflectionCaptureState).CaptureData;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
                *)this_00,&local_50);
    uVar13 = 0;
    if (0 < local_50.ArrayNum) {
      uVar12 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar13 < local_50.ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (FGuid *)(local_50.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10);
        uVar7 = CityHash64((char *)pFVar14,0x10);
        iVar5 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FGuid>
                          ((TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
                            *)this_00,(uint)uVar7,pFVar14);
        if (iVar5 == -1) {
LAB_1453a7477:
          puVar17 = (uint *)0x0;
        }
        else {
          lVar2 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x24;
          puVar8 = (uint *)(lVar2 + 0x10);
          if (lVar2 == 0) {
            puVar8 = (uint *)0x0;
          }
          puVar17 = puVar8 + 1;
          if (puVar8 == (uint *)0x0) goto LAB_1453a7477;
        }
        if ((local_60.ArrayNum <= (int)*puVar17) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ComponentStatePtr->CubemapIndex < IndexRemapping.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                               ,0x1d9,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = *puVar17;
        uVar6 = 0;
        if ((int)uVar11 < local_60.ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = *(uint *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
        if ((((int)uVar11 < 0) || ((this->CubemapArraySlotsUsed).NumBits <= (int)uVar11)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar9 = (this->CubemapArraySlotsUsed).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&this->CubemapArraySlotsUsed;
        if (FVar9 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar9;
        }
        uVar6 = uVar11;
        if ((int)uVar11 < 0) {
          uVar6 = uVar11 + 0x1f;
        }
        puVar8 = (uint *)((longlong)FVar10 + (longlong)((int)uVar6 >> 5) * 4);
        *puVar8 = *puVar8 | 1 << ((byte)uVar11 & 0x1f);
        *puVar17 = uVar11;
        if ((0x7fffffff < uVar11) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ComponentStatePtr->CubemapIndex > -1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                               ,0x1dd,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = *puVar17 + 1;
        if ((int)(*puVar17 + 1) < (int)uVar12) {
          uVar11 = uVar12;
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar11;
      } while ((int)uVar13 < local_50.ArrayNum);
    }
    uVar15 = 0;
    uVar16 = uVar15;
    iVar5 = local_60.ArrayNum;
    if (0 < local_60.ArrayNum) {
      do {
        uVar12 = (uint)uVar15;
        uVar13 = 0;
        if ((int)uVar12 < iVar5) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar5 = local_60.ArrayNum, bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((int)uVar11 <= *(int *)(local_60.AllocatorInstance.Data + uVar16)) {
          uVar13 = 0;
          if ((int)uVar12 < iVar5) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)(local_60.AllocatorInstance.Data + uVar16) = 0xffffffff;
          iVar5 = local_60.ArrayNum;
        }
        uVar15 = (ulonglong)(uVar12 + 1);
        uVar16 = uVar16 + 4;
      } while ((int)(uVar12 + 1) < iVar5);
    }
    FReflectionEnvironmentCubemapArray::ResizeCubemapArrayGPU
              (&this->CubemapArray,param_1,param_2,&local_60);
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  return;
}

// SetGameThreadTrackingData @ 1453a76d0

void __thiscall
FReflectionEnvironmentSceneData::SetGameThreadTrackingData
          (FReflectionEnvironmentSceneData *this,int param_1,int param_2,int param_3)

{
  this->MaxAllocatedReflectionCubemapsGameThread = param_1;
  this->ReflectionCaptureSizeGameThread = param_2;
  this->DesiredReflectionCaptureSizeGameThread = param_3;
  return;
}

// ~FReflectionEnvironmentSceneData @ 145405c80

void __thiscall
FReflectionEnvironmentSceneData::~FReflectionEnvironmentSceneData
          (FReflectionEnvironmentSceneData *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  void *pvVar3;
  IPooledRenderTarget *pIVar4;
  
  TSparseArray<UReflectionCaptureComponent_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UReflectionCaptureComponent_*,FDefaultSparseArrayAllocator>
            (&this->AllocatedReflectionCapturesGameThread);
  if (this->MobileReflectionCaptureUniformBuffer !=
      (TUniformBufferRef<FMobileReflectionCaptureShaderData>)0x0) {
    FRHIResource::Release((FRHIResource *)this->MobileReflectionCaptureUniformBuffer);
  }
  if (this->ReflectionCaptureUniformBuffer != (TUniformBufferRef<FReflectionCaptureShaderData>)0x0)
  {
    FRHIResource::Release((FRHIResource *)this->ReflectionCaptureUniformBuffer);
  }
  pFVar1 = (this->SortedCaptures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->CubemapArraySlotsUsed).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  *(undefined4 *)&(this->AllocatedReflectionCaptureState).CaptureData.field_0x48 = 0;
  pvVar3 = *(void **)&(this->AllocatedReflectionCaptureState).CaptureData.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AllocatedReflectionCaptureState).CaptureData);
  *(undefined4 *)
   &(this->AllocatedReflectionCaptureState).RegisteredComponentMapBuildDataIds.field_0x48 = 0;
  pvVar3 = *(void **)&(this->AllocatedReflectionCaptureState).RegisteredComponentMapBuildDataIds.
                      field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UReflectionCaptureComponent_const_*,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UReflectionCaptureComponent_const_*,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UReflectionCaptureComponent_const_*,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllocatedReflectionCaptureState);
  pIVar4 = (this->CubemapArray).ReflectionEnvs.Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)&this->CubemapArray);
  pFVar1 = (this->RegisteredReflectionCapturePositionAndRadius).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RegisteredReflectionCaptures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

