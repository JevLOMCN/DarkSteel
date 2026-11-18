// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FVirtualTextureChunkStreamingManager @ 1489b4a30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVirtualTextureChunkStreamingManager * __thiscall
FVirtualTextureChunkStreamingManager::FVirtualTextureChunkStreamingManager
          (FVirtualTextureChunkStreamingManager *this)

{
  FVirtualTextureUploadCache *pFVar1;
  int *piVar2;
  int *piVar3;
  FVirtualTextureTranscodeCache *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  int iVar9;
  FVirtualTextureChunkStreamingManager *pFVar10;
  FRenderResource *this_00;
  
  pFVar1 = &this->UploadCache;
  this->_padding_ = (longlong)&___7FVirtualTextureChunkStreamingManager__6B_;
  this_00 = (FRenderResource *)&(this->UploadCache)._padding_;
  this->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7IVirtualTextureFinalizer__6B_;
  FRenderResource::FRenderResource(this_00);
  pFVar1->_padding_ =
       (longlong)&FVirtualTextureUploadCache::_vftable__for__IVirtualTextureFinalizer__;
  *(undefined ***)this_00 = &FVirtualTextureUploadCache::_vftable__for__FRenderResource__;
  (this->UploadCache).Pools.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UploadCache).Pools.ArrayNum = 0;
  (this->UploadCache).Pools.ArrayMax = 0;
  (this->UploadCache).TileAllocator.Mutex.State = (atomic<unsigned_char>)0x0;
  (this->UploadCache).TileAllocator.FormatDescs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UploadCache).TileAllocator.FormatDescs.ArrayNum = 0;
  (this->UploadCache).TileAllocator.FormatDescs.ArrayMax = 0;
  (this->UploadCache).TileAllocator.FormatBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UploadCache).TileAllocator.FormatBuffers.ArrayNum = 0;
  (this->UploadCache).TileAllocator.FormatBuffers.ArrayMax = 0;
  (this->UploadCache).TileAllocator.NumAllocatedBytes = 0;
  *(undefined8 *)&(this->UploadCache).PendingUpload = 0;
  *(undefined8 *)&(this->UploadCache).PendingUpload.field_0x8 = 0;
  *(undefined8 *)&(this->UploadCache).PendingUpload.field_0x20 = 0;
  *(undefined4 *)&(this->UploadCache).PendingUpload.field_0x28 = 0;
  *(undefined4 *)&(this->UploadCache).PendingUpload.field_0x2c = 0x80;
  *(undefined4 *)&(this->UploadCache).PendingUpload.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UploadCache).PendingUpload.field_0x34 = 0;
  *(undefined8 *)&(this->UploadCache).PendingRelease = 0;
  *(undefined8 *)&(this->UploadCache).PendingRelease.field_0x8 = 0;
  *(undefined8 *)&(this->UploadCache).PendingRelease.field_0x20 = 0;
  *(undefined4 *)&(this->UploadCache).PendingRelease.field_0x28 = 0;
  *(undefined4 *)&(this->UploadCache).PendingRelease.field_0x2c = 0x80;
  *(undefined4 *)&(this->UploadCache).PendingRelease.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UploadCache).PendingRelease.field_0x34 = 0;
  pTVar7 = CVarVTUploadUseLegacyPath.Ref;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FVirtualTextureChunkStreamingManager *)(*pcVar6)();
        return pFVar10;
      }
    }
  }
  if (pTVar7->ShadowedValue[0] == 0) {
    if ((GRHIGlobals.SupportsDirectGPUMemoryLock == false) ||
       (GRHIGlobals.SupportsUpdateFromBufferTexture == false)) {
      (this->UploadCache).UploadType = StagingCopy;
    }
    else {
      (this->UploadCache).UploadType = PersistentBuffer;
    }
  }
  else {
    (this->UploadCache).UploadType = StagingTexture;
  }
  pFVar4 = &this->TranscodeCache;
  piVar2 = &(this->TranscodeCache).Tasks.ArrayNum;
  piVar3 = &(this->TranscodeCache).Tasks.ArrayMax;
  *piVar2 = 0;
  *piVar3 = 0;
  (pFVar4->Tasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FHashTable::FHashTable(&(this->TranscodeCache).TileIDToTaskIndex,0x400,0);
  FHashTable::FHashTable(&(this->TranscodeCache).ProducerToTaskIndex,0x400,0);
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,2,(ForAnyElementType *)pFVar4,piVar2,piVar3);
  DefaultConstructItems<FVirtualTextureTranscodeCache::FTaskEntry,int>
            ((pFVar4->Tasks).AllocatorInstance.Data + (longlong)iVar9 * 0x40,2);
  if (*piVar2 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FVirtualTextureChunkStreamingManager *)(*pcVar6)();
      return pFVar10;
    }
  }
  pFVar5 = (pFVar4->Tasks).AllocatorInstance.Data;
  *(undefined2 *)(pFVar5 + 0x38) = 0;
  *(undefined4 *)(pFVar5 + 0x3c) = 0;
  if (*piVar2 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FVirtualTextureChunkStreamingManager *)(*pcVar6)();
      return pFVar10;
    }
  }
  pFVar5 = (pFVar4->Tasks).AllocatorInstance.Data;
  if (pFVar1 == (FVirtualTextureUploadCache *)0x0) {
    this_00 = (FRenderResource *)0x0;
  }
  *(undefined2 *)(pFVar5 + 0x78) = 0;
  *(undefined4 *)(pFVar5 + 0x7c) = 0x10001;
  BeginInitResource(this_00,(FRenderCommandPipe *)0x0);
  return this;
}

// ~FVirtualTextureChunkStreamingManager @ 1489b9d10

void __thiscall
FVirtualTextureChunkStreamingManager::~FVirtualTextureChunkStreamingManager
          (FVirtualTextureChunkStreamingManager *this)

{
  this->_padding_ = (longlong)&___7FVirtualTextureChunkStreamingManager__6B_;
  (**(code **)((this->UploadCache)._padding_ + 0x20))(&(this->UploadCache)._padding_);
  FVirtualTextureTranscodeCache::~FVirtualTextureTranscodeCache(&this->TranscodeCache);
  FVirtualTextureUploadCache::~FVirtualTextureUploadCache(&this->UploadCache);
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// AddLevel @ 1489c5070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FVirtualTextureChunkStreamingManager::AddLevel
          (FVirtualTextureChunkStreamingManager *this,ULevel *param_1)

{
  return;
}

// BlockTillAllRequestsFinished @ 1489ccf90

int __thiscall
FVirtualTextureChunkStreamingManager::BlockTillAllRequestsFinished
          (FVirtualTextureChunkStreamingManager *this,float param_1,bool param_2)

{
  return 0;
}

// CancelForcedResources @ 1489cecc0

void __thiscall
FVirtualTextureChunkStreamingManager::CancelForcedResources
          (FVirtualTextureChunkStreamingManager *this)

{
  return;
}

// GatherProducePageDataTasks @ 1489e4790

void __thiscall
FVirtualTextureChunkStreamingManager::GatherProducePageDataTasks
          (FVirtualTextureChunkStreamingManager *this,FVirtualTextureProducerHandle *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FVirtualTextureTranscodeCache::GatherProducePageDataTasks(&this->TranscodeCache,param_1,param_2);
  return;
}

// GatherProducePageDataTasks @ 1489e47b0

void __thiscall
FVirtualTextureChunkStreamingManager::GatherProducePageDataTasks
          (FVirtualTextureChunkStreamingManager *this,ulong64 param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uStackX_14;
  
  uVar8 = (uint)param_1;
  if (uVar8 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskIndex >= LIST_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x13f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = 0;
  if ((int)uVar8 < (this->TranscodeCache).Tasks.ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (this->TranscodeCache).Tasks.AllocatorInstance.Data;
  uStackX_14 = (uint)(param_1 >> 0x20);
  if (*(ushort *)(pFVar1 + (longlong)(int)uVar8 * 0x40 + 0x38) != uStackX_14) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskEntry.Magic == InHandle.Magic",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x141,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)(pFVar1 + (longlong)(int)uVar8 * 0x40 + 8);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
    UNLOCK();
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_2 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar3;
    }
    *(longlong *)((longlong)param_2 + (longlong)iVar7 * 8) = lVar2;
  }
  return;
}

// NotifyLevelChange @ 148a00780

void __thiscall
FVirtualTextureChunkStreamingManager::NotifyLevelChange(FVirtualTextureChunkStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 148a00790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FVirtualTextureChunkStreamingManager::NotifyLevelOffset
          (FVirtualTextureChunkStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  return;
}

// ProduceTile @ 148a034c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
FVirtualTextureChunkStreamingManager::ProduceTile
          (FVirtualTextureChunkStreamingManager *this,FRHICommandListBase *param_1,uint param_2,
          uchar param_3,uchar param_4,ulong64 param_5,FVTProduceTargetLayer *param_6)

{
  FVirtualTextureUploadCache *this_00;
  int *piVar1;
  uint uVar2;
  FVTProduceTargetLayer *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VTP_ProduceTile> FVar5;
  FVTUploadTileHandle *pFVar6;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 uVar11;
  FName local_res8;
  FRHICommandListBase *local_res10;
  uint local_res18;
  FColor_u_0 local_res20 [2];
  FStatMessage local_68;
  FName local_58;
  
  uVar9 = 0;
  FVar5 = StatPtr_STAT_VTP_ProduceTile;
  local_res10 = param_1;
  local_res18 = param_2;
  if (StatPtr_STAT_VTP_ProduceTile == (FThreadSafeStaticStat<FStat_STAT_VTP_ProduceTile>)0x0) {
    pFVar4 = ::FName::FName((FName *)&local_68,"STAT_VTP_ProduceTile");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_VTP_ProduceTile>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VTP_ProduceTile,*pFVar4,
                       L"ProduceTile","STATGROUP_VTP","STATCAT_Advanced",L"Virtual Texturing Paging"
                       ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar5;
  uVar11 = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_res20[0].Bits = local_res20[0].Bits & 0xffffff00;
  if ((FVar7.ComparisonIndex.Value.Value != 0) || (FVar7.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar5 + 0x10));
      uVar11 = 1;
      local_res20[0]._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = FVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureChunkManager.cpp"
                   ,0x8f);
        uVar11 = 3;
        local_res20[0]._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar7;
      local_58 = FVar7;
      FThreadStats::AddMessage(FVar7,CycleScopeStart);
      local_res20[0].Bits = CONCAT31(local_res20[0].Bits._1_3_,uVar11) | 4;
      uVar11 = uVar11 | 4;
      goto LAB_148a0365a;
    }
  }
  local_res8 = local_58;
  FVar7 = local_58;
LAB_148a0365a:
  pFVar6 = FVirtualTextureTranscodeCache::AcquireTaskResult
                     (&this->TranscodeCache,(FVTTranscodeTileHandle)param_5);
  pFVar3 = param_6;
  uVar2 = local_res18;
  this_00 = &this->UploadCache;
  if (param_3 != '\0') {
    uVar10 = 1;
    do {
      if ((param_4 & uVar10) != 0) {
        FVirtualTextureUploadCache::SubmitTile
                  (this_00,local_res10,pFVar6 + uVar9,pFVar3 + uVar9,uVar2);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    } while (uVar8 < param_3);
    FVar7 = local_res8;
    uVar11 = local_res20[0]._s_0.B;
  }
  if ((uVar11 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar11 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((((uVar11 & 4) != 0) && (FVar7 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_68.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar7.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_5);
      local_68.StatData.Pad = (uchar  [8])(param_5 & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_68);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return (IVirtualTextureFinalizer *)this_00;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (IVirtualTextureFinalizer *)this_00;
}

// RemoveLevel @ 148a0ab60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FVirtualTextureChunkStreamingManager::RemoveLevel
          (FVirtualTextureChunkStreamingManager *this,ULevel *param_1)

{
  return;
}

// RequestTile @ 148a0e7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTRequestPageResult * __thiscall
FVirtualTextureChunkStreamingManager::RequestTile
          (FVirtualTextureChunkStreamingManager *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FUploadingVirtualTexture *param_2,
          FVirtualTextureProducerHandle *param_3,uchar param_4,uchar param_5,uint param_6,
          EVTRequestPagePriority param_7)

{
  FThreadSafeCounter *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FVirtualTextureBuiltData *this_00;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TConsoleVariableData<int> *pTVar11;
  TConsoleVariableData<int> *pTVar12;
  bool bVar13;
  ushort uVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_VTP_RequestTile> FVar17;
  FThreadStats *this_01;
  FThreadStatsPool *pFVar18;
  FVTRequestPageResult *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_VTP_NumTranscodeDropped> FVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  FStatMessage *pFVar27;
  FNameEntryId FVar28;
  FName FVar30;
  EVTRequestPageStatus EVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auStackY_258 [32];
  undefined8 local_1d8;
  undefined6 uStack_1ce;
  FColor_u_0 local_1c8 [2];
  FUploadingVirtualTexture *local_1c0;
  FName local_1b8;
  FVirtualTextureProducerHandle *local_1b0;
  FName local_1a8;
  FVTDataAndStatus local_198;
  LARGE_INTEGER local_188;
  LARGE_INTEGER local_180;
  LARGE_INTEGER local_178;
  FRHICommandListBase *local_170;
  undefined1 local_168 [32];
  FStatMessage local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  FStatMessage local_118;
  FStatMessage local_108;
  FStatMessage local_f8;
  IMemoryReadStream *local_e8;
  FRHIParallelRenderPassInfo *local_e0;
  FSharedReferencer<1> local_d8;
  FName local_d0;
  uint local_c8;
  uint local_c4;
  uchar local_c0;
  uchar local_bf;
  FVTCodecAndStatus local_b8;
  FRHIBatchedShaderParameters *local_a8;
  FRHIBatchedShaderParametersAllocator *pFStack_a0;
  FName local_98;
  FName local_90;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_58;
  uint uVar29;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1b0 = param_3;
  FVar17 = StatPtr_STAT_VTP_RequestTile;
  local_1c0 = param_2;
  local_170 = param_1;
  if (StatPtr_STAT_VTP_RequestTile == (FThreadSafeStaticStat<FStat_STAT_VTP_RequestTile>)0x0) {
    pFVar16 = ::FName::FName(&local_98,"STAT_VTP_RequestTile");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_VTP_RequestTile>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VTP_RequestTile,*pFVar16,
                        L"RequestTile","STATGROUP_VTP","STATCAT_Advanced",
                        L"Virtual Texturing Paging",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  bVar8 = false;
  bVar10 = false;
  FVar30 = *(FName *)FVar17;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_148a0e978:
    bVar9 = false;
    FVar30 = local_1a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureChunkManager.cpp"
                   ,0x42);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148a0e978;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar9 = true;
  }
  this_00 = param_2->Data;
  uVar15 = FVirtualTextureBuiltData::GetTileOffset(this_00,(uint)param_5,param_6,0);
  FVar28 = FVar30.ComparisonIndex.Value;
  uVar29 = FVar30.Number;
  if (uVar15 == 0xffffffff) {
    if (5 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    __return_storage_ptr__->Handle = 0;
    __return_storage_ptr__->Status = Invalid;
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar9) {
      return __return_storage_ptr__;
    }
    if (FVar30 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_148.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
    local_148.NameAndInfo.Index.Value = FVar28.Value;
    QueryPerformanceCounter((LARGE_INTEGER *)(local_168 + 0x10));
    local_148.StatData.Pad[4] = '\0';
    local_148.StatData.Pad[5] = '\0';
    local_148.StatData.Pad[6] = '\0';
    local_148.StatData.Pad[7] = '\0';
    local_148.StatData.Pad[0] = local_168[0x10];
    local_148.StatData.Pad[1] = local_168[0x11];
    local_148.StatData.Pad[2] = local_168[0x12];
    local_148.StatData.Pad[3] = local_168[0x13];
    pFVar27 = &local_148;
    goto LAB_148a0f38a;
  }
  uVar15 = FVirtualTextureBuiltData::GetChunkIndex(this_00,param_5);
  if (((int)uVar15 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChunkIndex >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureChunkManager.cpp"
                          ,0x4e,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar19 = (FVTRequestPageResult *)(*pcVar7)();
    return pFVar19;
  }
  uVar21 = ((uint)param_4 << 4 | param_5 & 0xf) << 0x18 | param_6 & 0xffffff;
  local_1d8 = (FRHIBatchedShaderParameters *)CONCAT44(uVar21,local_1b0->PackedValue);
  uVar23 = ((ulonglong)(uVar21 >> 1) ^ (ulonglong)local_1d8) * -0xae502812aa7333;
  uVar23 = (uVar23 >> 0x21 ^ uVar23) * -0x3b314601e57a13ad;
  uVar14 = (ushort)(uVar23 >> 0x21) ^ (ushort)uVar23;
  pFStack_a0 = (FRHIBatchedShaderParametersAllocator *)CONCAT62(uStack_1ce,uVar14);
  local_a8 = local_1d8;
  for (uVar21 = (this->TranscodeCache).TileIDToTaskIndex.Hash
                [(ulonglong)(this->TranscodeCache).TileIDToTaskIndex.HashMask & (ulonglong)uVar14];
      uVar21 != 0xffffffff; uVar21 = (this->TranscodeCache).TileIDToTaskIndex.NextIndex[uVar21]) {
    uVar22 = 0;
    if ((int)uVar21 < (this->TranscodeCache).Tasks.ArrayNum) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      pFVar19 = (FVTRequestPageResult *)(*pcVar7)();
      return pFVar19;
    }
    pFVar26 = (this->TranscodeCache).Tasks.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x40;
    if (*(FRHIBatchedShaderParameters **)pFVar26 == local_a8) {
      if ((*(longlong *)(pFVar26 + 8) == 0) ||
         (EVar31 = Pending, *(char *)(*(longlong *)(pFVar26 + 8) + 0xd0) != '\0')) {
        EVar31 = Available;
      }
      if ((ulonglong)CONCAT24(*(undefined2 *)(pFVar26 + 0x38),uVar21) != 0) {
        __return_storage_ptr__->Handle = (ulonglong)CONCAT24(*(undefined2 *)(pFVar26 + 0x38),uVar21)
        ;
        __return_storage_ptr__->Status = EVar31;
        if (bVar10) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar9) {
          return __return_storage_ptr__;
        }
        if (FVar30 == (FName)0x0) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return __return_storage_ptr__;
        }
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          pFVar18 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(pFVar18);
        }
        if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
          return __return_storage_ptr__;
        }
        local_138.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
        local_138.NameAndInfo.Index.Value = FVar28.Value;
        QueryPerformanceCounter((LARGE_INTEGER *)(local_168 + 0x18));
        local_138.StatData.Pad[4] = '\0';
        local_138.StatData.Pad[5] = '\0';
        local_138.StatData.Pad[6] = '\0';
        local_138.StatData.Pad[7] = '\0';
        local_138.StatData.Pad[0] = local_168[0x18];
        local_138.StatData.Pad[1] = local_168[0x19];
        local_138.StatData.Pad[2] = local_168[0x1a];
        local_138.StatData.Pad[3] = local_168[0x1b];
        pFVar27 = &local_138;
        goto LAB_148a0f38a;
      }
      break;
    }
  }
  pTVar12 = CVarMaxUploadRequests.Ref;
  iVar3 = *(int *)&(this->UploadCache).PendingUpload.field_0x8;
  iVar4 = *(int *)&(this->UploadCache).PendingRelease.field_0x8;
  iVar5 = *(int *)&(this->UploadCache).PendingUpload.field_0x34;
  iVar6 = *(int *)&(this->UploadCache).PendingRelease.field_0x34;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar19 = (FVTRequestPageResult *)(*pcVar7)();
    return pFVar19;
  }
  pTVar11 = CVarVTMaxUploadMemory.Ref;
  if (pTVar12->ShadowedValue[1] < (iVar4 - iVar6) + (iVar3 - iVar5)) {
LAB_148a0ee87:
    if (param_7 != High) {
      if (FThreadStats::bPrimaryEnable != false) {
        FVar20 = StatPtr_STAT_VTP_NumTranscodeDropped;
        if (StatPtr_STAT_VTP_NumTranscodeDropped ==
            (FThreadSafeStaticStat<FStat_STAT_VTP_NumTranscodeDropped>)0x0) {
          pFVar16 = ::FName::FName(&local_90,"STAT_VTP_NumTranscodeDropped");
          FVar20 = (FThreadSafeStaticStat<FStat_STAT_VTP_NumTranscodeDropped>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VTP_NumTranscodeDropped,
                              *pFVar16,L"Num transcodes dropped","STATGROUP_VTP","STATCAT_Advanced",
                              L"Virtual Texturing Paging",true,true,ST_int64,false,false,MCR_Invalid
                             );
        }
        FThreadStats::AddMessage<__int64>(*(FName *)FVar20,Add,1,false);
      }
      __return_storage_ptr__->Handle = 0;
      __return_storage_ptr__->Status = Saturated;
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar9) {
        return __return_storage_ptr__;
      }
      if (FVar30 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_128.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
      local_128.NameAndInfo.Index.Value = FVar28.Value;
      QueryPerformanceCounter(&local_188);
      local_128.StatData.Pad[4] = '\0';
      local_128.StatData.Pad[5] = '\0';
      local_128.StatData.Pad[6] = '\0';
      local_128.StatData.Pad[7] = '\0';
      local_128.StatData.Pad[0] = local_188.s.LowPart._0_1_;
      local_128.StatData.Pad[1] = local_188.s.LowPart._1_1_;
      local_128.StatData.Pad[2] = local_188.s.LowPart._2_1_;
      local_128.StatData.Pad[3] = local_188.s.LowPart._3_1_;
      pFVar27 = &local_128;
      goto LAB_148a0f38a;
    }
  }
  else {
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar7 = (code *)swi(3);
      pFVar19 = (FVTRequestPageResult *)(*pcVar7)();
      return pFVar19;
    }
    if ((ulonglong)((longlong)pTVar11->ShadowedValue[1] * 0x100000) <
        (this->UploadCache).TileAllocator.NumAllocatedBytes) goto LAB_148a0ee87;
  }
  uVar22 = 0;
  local_88.ArrayMax = 4;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  uVar21 = 0;
  local_88.ArrayNum = 0;
  FUploadingVirtualTexture::GetCodecForChunk(local_1c0,&local_b8,&local_88,uVar15,param_7);
  if (local_b8.Status - Pending < 2) {
    uVar33 = 0xffffffff;
    if (this_00->NumLayers != 0) {
      uVar25 = 1;
      uVar34 = uVar22;
      do {
        uVar32 = param_4 & uVar25;
        uVar21 = uVar33;
        if ((uVar32 != 0) && (uVar21 = uVar22, uVar33 < uVar22)) {
          uVar21 = uVar33;
        }
        uVar33 = uVar21;
        uVar21 = uVar22;
        if (uVar32 == 0) {
          uVar21 = uVar34;
        }
        uVar22 = uVar22 + 1;
        uVar25 = uVar25 << 1 | (uint)((int)uVar25 < 0);
        uVar34 = uVar21;
      } while (uVar22 < this_00->NumLayers);
    }
    uVar22 = FVirtualTextureBuiltData::GetTileOffset(this_00,(uint)param_5,param_6,uVar33);
    uVar21 = FVirtualTextureBuiltData::GetTileOffset(this_00,(uint)param_5,param_6,uVar21 + 1);
    FUploadingVirtualTexture::ReadData
              (local_1c0,&local_198,&local_88,uVar15,(ulonglong)uVar22,(ulonglong)(uVar21 - uVar22),
               param_7);
    if (local_198.Status - Pending < 2) {
      if ((local_198.Data.Reference == (IMemoryReadStream *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TileDataResult.Data",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureChunkManager.cpp"
                              ,0x7e,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FVTRequestPageResult *)(*pcVar7)();
        return pFVar19;
      }
      local_e8 = (IMemoryReadStream *)0x0;
      if (local_198.Data.Reference != (IMemoryReadStream *)0x0) {
        local_e8 = local_198.Data.Reference;
        LOCK();
        ((local_198.Data.Reference)->NumRefs).Counter =
             ((local_198.Data.Reference)->NumRefs).Counter + 1;
        UNLOCK();
      }
      local_c4 = param_6;
      local_c0 = param_5;
      local_bf = param_4;
      local_e0 = (FRHIParallelRenderPassInfo *)local_b8.Codec;
      local_d0 = local_1c0->Name;
      local_d8.ReferenceController = (TReferenceControllerBase<1> *)this_00;
      local_c8 = uVar15;
      FVirtualTextureTranscodeCache::SubmitTask
                (&this->TranscodeCache,(FRHICommandListBase *)local_168,
                 (FVirtualTextureUploadCache *)local_170,(FVTTranscodeKey *)&this->UploadCache,
                 (FVirtualTextureProducerHandle *)&local_a8,(FVTTranscodeParams *)&local_1b0->_s_1,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&local_e8);
      __return_storage_ptr__->Handle = local_168._0_8_;
      __return_storage_ptr__->Status = Pending;
      if (local_e8 != (IMemoryReadStream *)0x0) {
        LOCK();
        pFVar1 = &local_e8->NumRefs;
        iVar3 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(local_e8->_padding_ + 0x20))(local_e8,1);
        }
      }
      if (local_198.Data.Reference != (IMemoryReadStream *)0x0) {
        LOCK();
        pFVar1 = &(local_198.Data.Reference)->NumRefs;
        iVar3 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)((local_198.Data.Reference)->_padding_ + 0x20))(local_198.Data.Reference,1);
        }
      }
      FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar24 = local_88.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar24,local_88.ArrayNum);
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar9) {
        return __return_storage_ptr__;
      }
      if (FVar30 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_f8.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
      local_f8.NameAndInfo.Index.Value = FVar28.Value;
      QueryPerformanceCounter((LARGE_INTEGER *)(local_168 + 8));
      local_f8.StatData.Pad[4] = '\0';
      local_f8.StatData.Pad[5] = '\0';
      local_f8.StatData.Pad[6] = '\0';
      local_f8.StatData.Pad[7] = '\0';
      local_f8.StatData.Pad[0] = local_168[8];
      local_f8.StatData.Pad[1] = local_168[9];
      local_f8.StatData.Pad[2] = local_168[10];
      local_f8.StatData.Pad[3] = local_168[0xb];
      pFVar27 = &local_f8;
    }
    else {
      __return_storage_ptr__->Status = local_198.Status;
      __return_storage_ptr__->Handle = 0;
      if (local_198.Data.Reference != (IMemoryReadStream *)0x0) {
        LOCK();
        pFVar1 = &(local_198.Data.Reference)->NumRefs;
        iVar3 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)((local_198.Data.Reference)->_padding_ + 0x20))(local_198.Data.Reference,1);
        }
      }
      FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar24 = local_88.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar24,local_88.ArrayNum);
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar9) {
        return __return_storage_ptr__;
      }
      if (FVar30 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_108.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
      local_108.NameAndInfo.Index.Value = FVar28.Value;
      QueryPerformanceCounter(&local_178);
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_108.StatData.Pad[0] = local_178.s.LowPart._0_1_;
      local_108.StatData.Pad[1] = local_178.s.LowPart._1_1_;
      local_108.StatData.Pad[2] = local_178.s.LowPart._2_1_;
      local_108.StatData.Pad[3] = local_178.s.LowPart._3_1_;
      pFVar27 = &local_108;
    }
  }
  else {
    __return_storage_ptr__->Status = local_b8.Status;
    FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar24 = local_88.AllocatorInstance.SecondaryData;
    }
    __return_storage_ptr__->Handle = 0;
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar24,local_88.ArrayNum);
    if (local_88.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar9) {
      return __return_storage_ptr__;
    }
    if (FVar30 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_118.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
    local_118.NameAndInfo.Index.Value = FVar28.Value;
    QueryPerformanceCounter(&local_180);
    local_118.StatData.Pad[4] = '\0';
    local_118.StatData.Pad[5] = '\0';
    local_118.StatData.Pad[6] = '\0';
    local_118.StatData.Pad[7] = '\0';
    local_118.StatData.Pad[0] = local_180.s.LowPart._0_1_;
    local_118.StatData.Pad[1] = local_180.s.LowPart._1_1_;
    local_118.StatData.Pad[2] = local_180.s.LowPart._2_1_;
    local_118.StatData.Pad[3] = local_180.s.LowPart._3_1_;
    pFVar27 = &local_118;
  }
LAB_148a0f38a:
  FThreadStats::AddStatMessage(this_01,pFVar27);
  piVar2 = &this_01->ScopeCount;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FThreadStats::Flush(this_01,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_01,false,false);
  }
  return __return_storage_ptr__;
}

// SetDisregardWorldResourcesForFrames @ 148a14870

void __thiscall
FVirtualTextureChunkStreamingManager::SetDisregardWorldResourcesForFrames
          (FVirtualTextureChunkStreamingManager *this,int param_1)

{
  return;
}

// UpdateResourceStreaming @ 148a1fc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVirtualTextureChunkStreamingManager::UpdateResourceStreaming
          (FVirtualTextureChunkStreamingManager *this,float param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FVirtualTextureChunkStreamingManager *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FVirtualTextureChunkStreamingManager *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = UseVirtualTexturing((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  if (bVar2) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FVirtualTextureChunkStreamingManager::UpdateResourceStreaming'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVirtualTextureChunkStreamingManager::UpdateResourceStreaming'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FVirtualTextureChunkStreamingManager::UpdateResourceStreaming_::__l5::TSTR_UpdateVirtualTextureStreaming40>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FVirtualTextureChunkStreamingManager::UpdateResourceStreaming'::__l5::TSTR_UpdateVirtualTextureStreaming40>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

