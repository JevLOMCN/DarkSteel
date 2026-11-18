// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FNaniteVisibility @ 1450370d0

FNaniteVisibility * __thiscall FNaniteVisibility::FNaniteVisibility(FNaniteVisibility *this)

{
  (this->VisibilityQueries).AllocatorInstance.SecondaryData =
       (ForElementType<FNaniteVisibilityQuery_*>)0x0;
  (this->VisibilityQueries).ArrayNum = 0;
  (this->VisibilityQueries).ArrayMax = 0x20;
  (this->ActiveEvents).AllocatorInstance.Data = (FTaskHandle *)0x0;
  (this->ActiveEvents).ArrayNum = 0;
  (this->ActiveEvents).ArrayMax = 0;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
              *)&this->PrimitiveReferences);
  this->bCalledBegin = '\0';
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  return this;
}

// BeginVisibilityFrame @ 14504b6b0

void __thiscall FNaniteVisibility::BeginVisibilityFrame(FNaniteVisibility *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->VisibilityQueries).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VisibilityQueries.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteVisibility.cpp"
                       ,0x148,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bCalledBegin != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bCalledBegin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteVisibility.cpp"
                       ,0x149,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bCalledBegin = '\x01';
  return;
}

// BeginVisibilityQuery @ 14504b730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FNaniteVisibilityQuery * __thiscall
FNaniteVisibility::BeginVisibilityQuery
          (FNaniteVisibility *this,
          TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *param_1,
          FScene *param_2,TArrayView<FConvexVolume_const_,int> *param_3,
          FNaniteRasterPipelines *param_4,FNaniteShadingPipelines *param_5,FTaskHandle *param_6)

{
  ForElementType<unsigned_int> *pFVar1;
  int *piVar2;
  FMutex *this_00;
  atomic<unsigned_char> aVar3;
  byte bVar4;
  FConvexVolume *pFVar5;
  undefined8 *puVar6;
  FTaskHandle *pFVar7;
  FTaskBase *pFVar8;
  code *pcVar9;
  FNaniteRasterPipelines *pFVar10;
  bool bVar11;
  int iVar12;
  FNaniteVisibilityQuery *pFVar13;
  FNaniteRasterPipelines *this_01;
  ForElementType<FNaniteVisibilityQuery_*> FVar14;
  longlong lVar15;
  undefined1 *puVar16;
  bool bVar17;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> local_48;
  FTaskHandle local_38;
  FTaskBase *local_30;
  
  pFVar10 = param_4;
  if ((param_4 == (FNaniteRasterPipelines *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RasterPipelines",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteVisibility.cpp"
                          ,0x164,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar13 = (FNaniteVisibilityQuery *)(*pcVar9)();
    return pFVar13;
  }
  if (((this->bCalledBegin != 0) && (param_3->ArrayNum != 0)) && (GNaniteMaterialVisibility != 0)) {
    bVar11 = GNaniteMaterialVisibilityAsync == 0;
    pFVar13 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
              Create<FNaniteVisibilityQuery>(param_1);
    DestructItems<FConvexVolume,int>
              ((pFVar13->Views).AllocatorInstance.Data,(pFVar13->Views).ArrayNum);
    iVar12 = param_3->ArrayNum;
    piVar2 = &(pFVar13->Views).ArrayMax;
    pFVar5 = param_3->DataPtr;
    (pFVar13->Views).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_>
                (0x200,0x10,iVar12,*piVar2,&(pFVar13->Views).AllocatorInstance,iVar12,piVar2);
      ConstructItems<FConvexVolume,FConvexVolume,int>
                ((pFVar13->Views).AllocatorInstance.Data,pFVar5,iVar12);
    }
    pFVar13->bCullRasterBins = (byte)-(GNaniteMaterialVisibilityRasterBins != 0) >> 1;
    bVar17 = GNaniteMaterialVisibilityShadingBins != 0;
    pFVar13->bFinished = '\0';
    pFVar13->bCullShadingBins = (byte)-bVar17 >> 2;
    local_38.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
         (param_2->CacheNaniteMaterialBinsTask).Pimpl.Reference;
    if (local_38.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_38.Pimpl.Reference)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_38.Pimpl.Reference)->RefCount + 1);
      UNLOCK();
    }
    local_30 = (param_6->Pimpl).Reference;
    if (local_30 != (FTaskBase *)0x0) {
      LOCK();
      local_30->RefCount = (atomic<unsigned_int>)((int)local_30->RefCount + 1);
      UNLOCK();
    }
    local_48.DataPtr = &local_38;
    lVar15 = 2;
    local_48.ArrayNum = 2;
    this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_01 == (FNaniteRasterPipelines *)0x0) {
      this_01 = (FNaniteRasterPipelines *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_01,2,true);
      *(undefined ***)(this_01->PipelineBins).AllocatorInstance.InlineData =
           &UE::Tasks::Private::
            TExecutableTaskBase<`FNaniteVisibility::BeginVisibilityQuery'::`2'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                ((FTaskBase *)this_01,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteVisibility.cpp(375)"
                 ,Default,bVar11,None);
      *(FNaniteVisibility **)(this_01->FixedFunctionBins).AllocatorInstance.InlineData = this;
      *(FNaniteVisibilityQuery **)((this_01->FixedFunctionBins).AllocatorInstance.InlineData + 8) =
           pFVar13;
      *(FNaniteRasterPipelines **)((this_01->FixedFunctionBins).AllocatorInstance.InlineData + 0x10)
           = pFVar10;
      *(FNaniteShadingPipelines **)
       ((this_01->FixedFunctionBins).AllocatorInstance.InlineData + 0x18) = param_5;
      *(undefined ***)(this_01->PipelineBins).AllocatorInstance.InlineData =
           &UE::Tasks::Private::
            TExecutableTask<`FNaniteVisibility::BeginVisibilityQuery'::`2'::<lambda_1>_>::_vftable_;
    }
    UE::Tasks::Private::FTaskBase::
    AddPrerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>,0>
              ((FTaskBase *)this_01,&local_48,true);
    param_4 = this_01;
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x100);
    UE::Tasks::Private::FTaskHandle::operator=(&pFVar13->CompletedEvent,(FTaskHandle *)&param_4);
    if (param_4 != (FNaniteRasterPipelines *)0x0) {
      LOCK();
      pFVar1 = &(param_4->PerPixelEvalPipelineBins).AllocatorInstance.SecondaryData;
      iVar12 = *(int *)pFVar1;
      *(int *)pFVar1 = *(int *)pFVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (*(code *)**(undefined8 **)(param_4->PipelineBins).AllocatorInstance.InlineData)(param_4,1);
      }
    }
    puVar16 = &stack0xffffffffffffffd8;
    do {
      puVar6 = *(undefined8 **)(puVar16 + -8);
      puVar16 = puVar16 + -8;
      lVar15 = lVar15 + -1;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar6 + 6);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    } while (lVar15 != 0);
    this_00 = &this->Mutex;
    LOCK();
    bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar11) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar11) {
      UE::FMutex::LockSlow(this_00);
    }
    iVar12 = (this->VisibilityQueries).ArrayNum;
    piVar2 = &(this->VisibilityQueries).ArrayMax;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibilityQuery_*>_>
                         (0x808,&(this->VisibilityQueries).AllocatorInstance,piVar2);
    }
    (this->VisibilityQueries).ArrayNum = iVar12 + 1;
    FVar14 = (this->VisibilityQueries).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<FNaniteVisibilityQuery_*>)0x0) {
      FVar14 = (ForElementType<FNaniteVisibilityQuery_*>)&this->VisibilityQueries;
    }
    *(FNaniteVisibilityQuery **)((longlong)FVar14 + (longlong)iVar12 * 8) = pFVar13;
    if ((pFVar13->CompletedEvent).Pimpl.Reference != (FTaskBase *)0x0) {
      iVar12 = (this->ActiveEvents).ArrayNum;
      piVar2 = &(this->ActiveEvents).ArrayMax;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                           (0x808,&(this->ActiveEvents).AllocatorInstance,piVar2);
      }
      (this->ActiveEvents).ArrayNum = iVar12 + 1;
      pFVar7 = (this->ActiveEvents).AllocatorInstance.Data;
      pFVar7[iVar12].Pimpl.Reference = (FTaskBase *)0x0;
      pFVar8 = (pFVar13->CompletedEvent).Pimpl.Reference;
      pFVar7[iVar12].Pimpl.Reference = pFVar8;
      if (pFVar8 != (FTaskBase *)0x0) {
        LOCK();
        pFVar8->RefCount = (atomic<unsigned_int>)((int)pFVar8->RefCount + 1);
        UNLOCK();
      }
    }
    LOCK();
    aVar3 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
    return pFVar13;
  }
  return (FNaniteVisibilityQuery *)0x0;
}

// FindOrAddPrimitiveReferences @ 145060de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveReferences * __thiscall
FNaniteVisibility::FindOrAddPrimitiveReferences
          (FNaniteVisibility *this,FPrimitiveSceneInfo *param_1)

{
  bool bVar1;
  FPrimitiveReferences *pFVar2;
  TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences> *pTVar3;
  uint uVar4;
  undefined1 auStackY_98 [32];
  uint local_64;
  undefined1 local_60 [24];
  void *local_48;
  uchar local_40 [4];
  int local_3c;
  void *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar2 = (FPrimitiveReferences *)0x0;
  if (GNaniteMaterialVisibility != 0) {
    local_60[8] = '\0';
    local_60[9] = '\0';
    local_60[10] = '\0';
    local_60[0xb] = '\0';
    local_60._12_4_ = 0;
    local_48 = (void *)0x0;
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_3c = 1;
    local_30 = (void *)0x0;
    local_28._0_1_ = false;
    local_28._1_3_ = 0;
    local_20 = 0;
    local_24 = 1;
    uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    local_60._0_8_ = param_1;
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
    ::
    FindOrUpdateIdByHashInternal<0,FPrimitiveSceneInfo_const_*_const_&,FNaniteVisibility::FPrimitiveReferences>
              ((TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
                *)&this->PrimitiveReferences,(FHashType)(uint)&local_64,
               (FPrimitiveSceneInfo **)(ulonglong)((uVar4 >> 0x10 ^ uVar4) & 0x7fffffff),
               (FPrimitiveReferences *)local_60,(bool *)(local_60 + 8));
    pTVar3 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)&this->PrimitiveReferences,local_64);
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if (*(FPrimitiveSceneProxy **)(local_60._0_8_ + 8) != (FPrimitiveSceneProxy *)0x0) {
      bVar1 = FPrimitiveSceneProxy::ShouldRenderCustomDepth
                        (*(FPrimitiveSceneProxy **)(local_60._0_8_ + 8));
      if (bVar1) {
        (pTVar3->Pair).field_0x40 = 1;
      }
    }
    pFVar2 = (FPrimitiveReferences *)&(pTVar3->Pair).field_0x8;
  }
  return pFVar2;
}

// FinishVisibilityFrame @ 145061870

void __thiscall FNaniteVisibility::FinishVisibilityFrame(FNaniteVisibility *this)

{
  int *piVar1;
  TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->bCalledBegin == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bCalledBegin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteVisibility.cpp"
                       ,0x14f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2 = &this->ActiveEvents;
  if ((this->ActiveEvents).ArrayNum != 0) {
    UE::Tasks::
    Wait<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              (pTVar2,(FTimespan)0x7fffffffffffffff);
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((pTVar2->AllocatorInstance).Data,(this->ActiveEvents).ArrayNum);
    piVar1 = &(this->ActiveEvents).ArrayMax;
    (this->ActiveEvents).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  piVar1 = &(this->VisibilityQueries).ArrayMax;
  (this->VisibilityQueries).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibilityQuery_*>_>
              (8,8,0,&(this->VisibilityQueries).AllocatorInstance,0,piVar1);
  }
  this->bCalledBegin = '\0';
  return;
}

// GetRasterBinReferences @ 1450640f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<FNaniteVisibility::FRasterBin,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FNaniteVisibility::GetRasterBinReferences(FNaniteVisibility *this,FPrimitiveSceneInfo *param_1)

{
  FPrimitiveReferences *pFVar1;
  
  if (GNaniteMaterialVisibility == 0) {
    return (TArray<FNaniteVisibility::FRasterBin,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  }
  pFVar1 = FindOrAddPrimitiveReferences(this,param_1);
  pFVar1->SceneInfo = param_1;
  return &pFVar1->RasterBins;
}

// GetShadingBinReferences @ 145064210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<FNaniteVisibility::FShadingBin,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FNaniteVisibility::GetShadingBinReferences(FNaniteVisibility *this,FPrimitiveSceneInfo *param_1)

{
  FPrimitiveReferences *pFVar1;
  
  if (GNaniteMaterialVisibility == 0) {
    return (TArray<FNaniteVisibility::FShadingBin,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  }
  pFVar1 = FindOrAddPrimitiveReferences(this,param_1);
  pFVar1->SceneInfo = param_1;
  return &pFVar1->ShadingBins;
}

// RemoveReferences @ 1450748a0

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
FNaniteVisibility::RemoveReferences(FNaniteVisibility *this,FPrimitiveSceneInfo *param_1)

{
  uint uVar1;
  FPrimitiveSceneInfo *local_res10 [3];
  
  uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_res10[0] = param_1;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
  ::RemoveByHash((TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
                  *)&this->PrimitiveReferences,(FHashType)((uVar1 >> 0x10 ^ uVar1) & 0x7fffffff),
                 local_res10);
  return;
}

// ~FNaniteVisibility @ 145405550

void __thiscall FNaniteVisibility::~FNaniteVisibility(FNaniteVisibility *this)

{
  TRobinHoodHashMap<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
  *this_00;
  void *pvVar1;
  FTaskHandle *pFVar2;
  ForElementType<FNaniteVisibilityQuery_*> FVar3;
  
  this_00 = &this->PrimitiveReferences;
  pvVar1 = *(void **)&(this->PrimitiveReferences).field_0x60;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->PrimitiveReferences).field_0x48;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)this_00);
  pvVar1 = *(void **)&(this->PrimitiveReferences).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->PrimitiveReferences).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences>,int>
            (*(TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences> **)
              &this_00->field_0x0,*(int *)&(this->PrimitiveReferences).field_0x8);
  if (*(void **)&this_00->field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&this_00->field_0x0);
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((this->ActiveEvents).AllocatorInstance.Data,(this->ActiveEvents).ArrayNum);
  pFVar2 = (this->ActiveEvents).AllocatorInstance.Data;
  if (pFVar2 != (FTaskHandle *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  FVar3 = (this->VisibilityQueries).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FNaniteVisibilityQuery_*>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  return;
}

