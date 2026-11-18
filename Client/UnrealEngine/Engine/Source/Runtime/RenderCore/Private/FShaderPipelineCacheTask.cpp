// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 13

// FShaderPipelineCacheTask @ 145e82d10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderPipelineCacheTask * __thiscall
FShaderPipelineCacheTask::FShaderPipelineCacheTask
          (FShaderPipelineCacheTask *this,FShaderPipelineCache *param_1,bool param_2,
          EShaderPlatform param_3)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  
  this->ShaderPlatform = param_3;
  (this->PSOCacheKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PSOCacheKey).Data.ArrayNum = 0;
  (this->PSOCacheKey).Data.ArrayMax = 0;
  (this->ReadTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadTasks).ArrayNum = 0;
  (this->ReadTasks).ArrayMax = 0;
  (this->CompileTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompileTasks).ArrayNum = 0;
  (this->CompileTasks).ArrayMax = 0;
  (this->OrderedCompileTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrderedCompileTasks).ArrayNum = 0;
  (this->OrderedCompileTasks).ArrayMax = 0;
  (this->FetchTasks)._padding_ =
       (longlong)&___7__TDoubleLinkedList_PEAUFPipelineCacheFileFormatPSORead____6B_;
  (this->FetchTasks).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->FetchTasks).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->FetchTasks).ListSize = 0;
  (this->CacheFileGuid).A = 0;
  (this->CacheFileGuid).B = 0;
  (this->CacheFileGuid).C = 0;
  (this->CacheFileGuid).D = 0;
  *(undefined8 *)&(this->CompletedMasks).Elements = 0;
  *(undefined8 *)&(this->CompletedMasks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CompletedMasks).Elements.field_0x20 = 0;
  this->TotalPSOsCompiled = 0;
  *(undefined4 *)&(this->CompletedMasks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CompletedMasks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CompletedMasks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompletedMasks).Elements.field_0x34 = 0;
  (this->CompletedMasks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CompletedMasks).HashSize = 0;
  (this->PrecompileContext).bSlowPrecompileTask = false;
  (this->PrecompileContext).CacheName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecompileContext).CacheName.Data.ArrayNum = 0;
  (this->PrecompileContext).CacheName.Data.ArrayMax = 0;
  this->bPreOptimizing = false;
  this->bReady = false;
  this->bOpened = false;
  this->bIsUserCache = param_2;
  this->Cache = param_1;
  pTVar1 = CVarPSOFileCacheGameFileMaskEnabled.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (!bVar3) goto LAB_145e82e01;
  }
  lVar4 = 0;
LAB_145e82e01:
  pTVar2 = CVarPSOFileCachePreOptimizeEnabled.Ref;
  if ((*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0) &&
     (FPipelineFileCacheManager::GameUsageMaskSet == false)) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), lVar4 = 4, bVar3)) {
      lVar4 = 0;
    }
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar4) == 0) {
      this->bReady = false;
      return this;
    }
  }
  this->bReady = true;
  return this;
}

// operator() @ 145e879e0

bool __thiscall
`FShaderPipelineCacheTask::BeginPrecompilingPipelineCache'::__l36::<lambda_1>::operator()
          (void *this,FPipelineCachePSOHeader *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  byte bVar12;
  uint uVar13;
  FSHAHash *pFVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Shaders).Elements.field_0x28;
  puVar1 = &(param_1->Shaders).Elements.field_0x10;
  iVar15 = 0;
  iVar16 = 0;
  bVar12 = 1;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_1->Shaders).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar15) goto LAB_145e87a7e;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = local_res18 + -1 + iVar16;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145e87a7e:
  uVar13 = *(uint *)&(param_1->Shaders).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar15);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Shaders).Elements.field_0x8 -
                       *(int *)&(param_1->Shaders).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(param_1->Shaders).Elements.field_0x28;
  if (uVar13 != uVar8) {
    puVar11 = *(undefined1 **)&(param_1->Shaders).Elements.field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar15) goto LAB_145e87b80;
      uVar13 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar18;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_145e87b80:
  do {
    if (*(int *)&(param_1->Shaders).Elements.field_0x8 -
        *(int *)&(param_1->Shaders).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      if (bVar12 == 0) {
        **(int **)this = **(int **)this + 1;
      }
      return (bool)(bVar12 ^ 1);
    }
    pFVar14 = (FSHAHash *)
              ((longlong)TStack_60.CurrentBitIndex * 0x1c +
              *(longlong *)&(param_1->Shaders).Elements);
    bVar6 = PipelineStateCache::IsPSOPrecachingEnabled();
    pTVar5 = CVarPSOGlobalShadersOnlyWhenPSOPrecaching.Ref;
    if (bVar6) {
      bVar6 = IsInParallelGameThread();
      if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
        lVar10 = 0;
      }
      else {
        lVar10 = 4;
      }
      if (*(int *)((longlong)pTVar5->ShadowedValue + lVar10) < 1) goto LAB_145e87bf2;
      bVar6 = FShaderCodeLibrary::ContainsShaderCode(pFVar14,(FString *)((longlong)this + 8));
    }
    else {
LAB_145e87bf2:
      bVar6 = FShaderCodeLibrary::ContainsShaderCode(pFVar14);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    bVar12 = bVar12 & bVar6;
  } while( true );
}

// BeginPrecompilingPipelineCache @ 145e8edb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderPipelineCacheTask::BeginPrecompilingPipelineCache(FShaderPipelineCacheTask *this)

{
  TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  EShaderPlatform EVar3;
  longlong *plVar4;
  code *pcVar5;
  long64 lVar6;
  TConsoleVariableData<int> *pTVar7;
  undefined8 uVar8;
  ForAnyElementType _Src;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  wchar_t *pwVar13;
  uint uVar14;
  int iVar15;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar16;
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *pTVar17;
  FPipelineCachePSOHeader *_Dst;
  uint uVar18;
  longlong lVar19;
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *pTVar20;
  PSOOrder local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_> local_f8;
  <lambda_1> local_e8;
  longlong local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  
  Flush(this);
  TotalPrecompileWallTime = 0.0;
  TotalPrecompileTasks = 0;
  PrecompileStartTime = 0.0;
  if ((TotalActiveTasks != (atomic<__int64>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FShaderPipelineCacheTask::TotalActiveTasks == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                         ,0x80e,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((TotalWaitingTasks != (atomic<__int64>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FShaderPipelineCacheTask::TotalWaitingTasks == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                         ,0x80f,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((TotalCompleteTasks != (atomic<__int64>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FShaderPipelineCacheTask::TotalCompleteTasks == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                         ,0x810,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((TotalPrecompileTime != (atomic<__int64>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FShaderPipelineCacheTask::TotalPrecompileTime == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                         ,0x811,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FShaderPipelineCache::OnCachePreOpen);
  if (bVar9) {
    EVar3 = this->ShaderPlatform;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FShaderPipelineCache::OnCachePreOpen,(FWriteAccessScope *)&local_98);
    bVar9 = false;
    uVar14 = FShaderPipelineCache::OnCachePreOpen._16_4_ - 1;
    if (-1 < (int)uVar14) {
      lVar19 = (longlong)(int)uVar14 << 4;
      FShaderPipelineCache::OnCachePreOpen._28_4_ = FShaderPipelineCache::OnCachePreOpen._28_4_ + 1;
      do {
        uVar18 = 0;
        if ((int)uVar14 < (int)FShaderPipelineCache::OnCachePreOpen._16_4_) {
          uVar18 = ~uVar14 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((*(int *)(FShaderPipelineCache::OnCachePreOpen._8_8_ + 8 + lVar19) == 0) ||
            (plVar4 = *(longlong **)(FShaderPipelineCache::OnCachePreOpen._8_8_ + lVar19),
            plVar4 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar4 + 0x68))(plVar4,this,EVar3,&this->bReady), cVar11 == '\0')
           ) {
          bVar9 = true;
        }
        lVar19 = lVar19 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
      FShaderPipelineCache::OnCachePreOpen._28_4_ = FShaderPipelineCache::OnCachePreOpen._28_4_ + -1
      ;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FShaderPipelineCache::OnCachePreOpen,false);
      }
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
  }
  if (this->bReady == false) {
    if ((byte)LogRHI._0_1_ < 4) {
      return;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    return;
  }
  pwVar13 = L"";
  local_res10[0] = Default;
  if (GGameUserSettingsIni.Data.ArrayNum != 0) {
    pwVar13 = (wchar_t *)GGameUserSettingsIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_b8,pwVar13);
  bVar9 = FConfigCacheIni::GetInt
                    (GConfig,FShaderPipelineCacheConstants::SectionHeading,
                     FShaderPipelineCacheConstants::SortOrderKey,(int *)local_res10,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (!bVar9) {
    pwVar13 = L"";
    if (GGameIni.Data.ArrayNum != 0) {
      pwVar13 = (wchar_t *)GGameIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_a8,pwVar13);
    FConfigCacheIni::GetInt
              (GConfig,FShaderPipelineCacheConstants::SectionHeading,
               FShaderPipelineCacheConstants::SortOrderKey,(int *)local_res10,&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pTVar7 = CVarPSOFileCacheMinBindCount.Ref;
  pTVar16 = &FShaderPipelineCache::ShaderPipelineCache->CompiledHashes;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_145e8f0e4:
    lVar19 = 0;
  }
  else {
    bVar9 = IsInGameThread();
    lVar19 = 4;
    if (bVar9) goto LAB_145e8f0e4;
  }
  FPipelineFileCacheManager::GetOrderedPSOHashes
            (&this->PSOCacheKey,&local_f8,local_res10[0],
             (longlong)*(int *)((longlong)pTVar7->ShadowedValue + lVar19),pTVar16);
  local_d0 = (longlong)local_f8.ArrayNum;
  ::FString::FString(&local_c8,L"Global");
  _Src.Data = local_c8.Data.AllocatorInstance.Data;
  local_e8.MissingShaders = local_res18;
  local_res18[0] = 0;
  local_e8.LibraryName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.LibraryName.Data.ArrayNum = local_c8.Data.ArrayNum;
  if (local_c8.Data.ArrayNum == 0) {
    local_e8.LibraryName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8.LibraryName,
               local_c8.Data.ArrayNum,&local_e8.LibraryName.Data.ArrayMax);
    memcpy(local_e8.LibraryName.Data.AllocatorInstance.Data,_Src.Data,
           (longlong)local_c8.Data.ArrayNum * 2);
  }
  uVar14 = Algo::
           StableRemoveIf<TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_>_&,_FShaderPipelineCacheTask::BeginPrecompilingPipelineCache_::__l36::<lambda_1>_>
                     (&local_f8,&local_e8);
  if (local_f8.ArrayNum < (int)uVar14) {
    iVar15 = uVar14 - local_f8.ArrayNum;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x58,8,iVar15,&local_f8.AllocatorInstance,&local_f8.ArrayNum,
                        &local_f8.ArrayMax);
    DefaultConstructItems<FPipelineCachePSOHeader,int>
              (local_f8.AllocatorInstance.Data + (longlong)iVar12 * 0x58,iVar15);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    iVar12 = local_f8.ArrayNum;
    if (local_f8.ArrayNum <= (int)uVar14) goto LAB_145e8f2aa;
    uVar18 = local_f8.ArrayNum - uVar14;
    if ((int)(uVar18 | uVar14) < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = local_f8.ArrayNum;
    }
    if (uVar18 == 0) goto LAB_145e8f2aa;
    _Dst = (FPipelineCachePSOHeader *)
           (local_f8.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x58);
    DestructItems<FPipelineCachePSOHeader,int>(_Dst,uVar18);
    iVar12 = (local_f8.ArrayNum - uVar18) - uVar14;
    if (iVar12 != 0) {
      memmove(_Dst,_Dst + (int)uVar18,(longlong)iVar12 * 0x58);
    }
    iVar12 = local_f8.ArrayNum - uVar18;
    local_f8.ArrayNum = iVar12;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,&local_f8.AllocatorInstance,iVar12,&local_f8.ArrayMax);
  }
  iVar12 = local_f8.ArrayNum;
LAB_145e8f2aa:
  TotalWaitingTasks = (atomic<__int64>)(longlong)iVar12;
  LOCK();
  UNLOCK();
  bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FShaderPipelineCache::OnCachedOpened);
  uVar8 = local_f8._8_8_;
  if (bVar9) {
    EVar3 = this->ShaderPlatform;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FShaderPipelineCache::OnCachedOpened,(FWriteAccessScope *)&local_80);
    bVar9 = false;
    FShaderPipelineCache::OnCachedOpened._28_4_ = FShaderPipelineCache::OnCachedOpened._28_4_ + 1;
    uVar14 = FShaderPipelineCache::OnCachedOpened._16_4_ - 1;
    if (-1 < (int)uVar14) {
      lVar19 = (longlong)(int)uVar14 << 4;
      bVar9 = false;
      do {
        uVar18 = 0;
        if ((int)uVar14 < (int)FShaderPipelineCache::OnCachedOpened._16_4_) {
          uVar18 = ~uVar14 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((*(int *)(FShaderPipelineCache::OnCachedOpened._8_8_ + 8 + lVar19) == 0) ||
            (plVar4 = *(longlong **)(FShaderPipelineCache::OnCachedOpened._8_8_ + lVar19),
            plVar4 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar4 + 0x68))
                               (plVar4,this,EVar3,uVar8 & 0xffffffff,&this->CacheFileGuid,
                                &this->PrecompileContext), cVar11 == '\0')) {
          bVar9 = true;
        }
        lVar19 = lVar19 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    FShaderPipelineCache::OnCachedOpened._28_4_ = FShaderPipelineCache::OnCachedOpened._28_4_ + -1;
    if (bVar9) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FShaderPipelineCache::OnCachedOpened,false);
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
  }
  if (((this->OrderedCompileTasks).ArrayNum != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OrderedCompileTasks.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                         ,0x84a,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = local_f8.ArrayNum;
  pTVar1 = &this->OrderedCompileTasks;
  if (local_f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_f8._8_8_ & 0xffffffff);
  }
  piVar2 = &(this->OrderedCompileTasks).ArrayMax;
  if ((this->OrderedCompileTasks).ArrayMax < local_f8.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_f8.ArrayNum,&pTVar1->AllocatorInstance,
               (this->OrderedCompileTasks).ArrayNum,piVar2);
  }
  uVar14 = iVar12 - 1;
  if (-1 < (int)uVar14) {
    lVar19 = (longlong)(int)uVar14 * 0x58;
    iVar12 = local_f8.ArrayNum;
    while( true ) {
      uVar18 = 0;
      if ((int)uVar14 < iVar12) {
        uVar18 = ~uVar14 >> 0x1f;
      }
      local_res20 = lVar19;
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar17 = (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                (pTVar1->AllocatorInstance).Data;
      pTVar20 = (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                (local_f8.AllocatorInstance.Data + lVar19);
      if (((pTVar17 <= pTVar20) &&
          (pTVar20 < (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                     ((longlong)pTVar17 + (longlong)*piVar2 * 0x58))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (this->OrderedCompileTasks).ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&pTVar1->AllocatorInstance,piVar2);
        (this->OrderedCompileTasks).ArrayNum = iVar12;
      }
      (this->OrderedCompileTasks).ArrayNum = iVar12 + 1;
      pTVar17 = (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x58);
      *(undefined8 *)&pTVar17->Elements = 0;
      *(undefined8 *)&(pTVar17->Elements).field_0x8 = 0;
      *(undefined8 *)&(pTVar17->Elements).field_0x20 = 0;
      *(undefined4 *)&(pTVar17->Elements).field_0x28 = 0;
      *(undefined4 *)&(pTVar17->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar17->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar17->Elements).field_0x34 = 0;
      (pTVar17->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      pTVar17->HashSize = 0;
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=(pTVar17,pTVar20);
      *(undefined4 *)&pTVar17[1].Elements = *(undefined4 *)&pTVar20[1].Elements;
      lVar19 = local_res20 + -0x58;
      uVar14 = uVar14 - 1;
      local_res20 = lVar19;
      if ((int)uVar14 < 0) break;
      iVar12 = local_f8.ArrayNum;
    }
  }
  TotalPrecompileTasks = (long64)(this->OrderedCompileTasks).ArrayNum;
  this->bPreOptimizing = 0 < TotalPrecompileTasks;
  FPipelineFileCacheManager::GetTotalPSOCount(&this->PSOCacheKey);
  if (3 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FShaderPipelineCache::OnPrecompilationBegin);
  lVar6 = TotalPrecompileTasks;
  if (bVar9) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FShaderPipelineCache::OnPrecompilationBegin,(FWriteAccessScope *)&local_68);
    bVar9 = false;
    FShaderPipelineCache::OnPrecompilationBegin._28_4_ =
         FShaderPipelineCache::OnPrecompilationBegin._28_4_ + 1;
    uVar14 = FShaderPipelineCache::OnPrecompilationBegin._16_4_ - 1;
    if (-1 < (int)uVar14) {
      lVar19 = (longlong)(int)uVar14 << 4;
      bVar9 = false;
      do {
        uVar18 = 0;
        if ((int)uVar14 < (int)FShaderPipelineCache::OnPrecompilationBegin._16_4_) {
          uVar18 = ~uVar14 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((*(int *)(FShaderPipelineCache::OnPrecompilationBegin._8_8_ + 8 + lVar19) == 0) ||
            (plVar4 = *(longlong **)(FShaderPipelineCache::OnPrecompilationBegin._8_8_ + lVar19),
            plVar4 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar4 + 0x68))
                               (plVar4,lVar6 & 0xffffffff,&this->PrecompileContext), cVar11 == '\0')
           ) {
          bVar9 = true;
        }
        lVar19 = lVar19 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    FShaderPipelineCache::OnPrecompilationBegin._28_4_ =
         FShaderPipelineCache::OnPrecompilationBegin._28_4_ + -1;
    if (bVar9) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FShaderPipelineCache::OnPrecompilationBegin,false);
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<FPipelineCachePSOHeader,int>
            ((FPipelineCachePSOHeader *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FPipelineCachePSOHeader *)local_f8.AllocatorInstance.Data != (FPipelineCachePSOHeader *)0x0)
  {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// Close @ 145e92240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderPipelineCacheTask::Close(FShaderPipelineCacheTask *this)

{
  EShaderPlatform EVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  Flush(this);
  bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FShaderPipelineCache::OnCachedClosed);
  if (bVar4) {
    EVar1 = this->ShaderPlatform;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FShaderPipelineCache::OnCachedClosed,(FWriteAccessScope *)&local_38);
    bVar4 = false;
    FShaderPipelineCache::OnCachedClosed._28_4_ = FShaderPipelineCache::OnCachedClosed._28_4_ + 1;
    uVar8 = FShaderPipelineCache::OnCachedClosed._16_4_ - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar4 = false;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (int)FShaderPipelineCache::OnCachedClosed._16_4_) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)(lVar9 + 8 + FShaderPipelineCache::OnCachedClosed._8_8_) == 0) ||
            (plVar2 = *(longlong **)(lVar9 + FShaderPipelineCache::OnCachedClosed._8_8_),
            plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,this,EVar1), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    FShaderPipelineCache::OnCachedClosed._28_4_ = FShaderPipelineCache::OnCachedClosed._28_4_ + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FShaderPipelineCache::OnCachedClosed,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  this->bOpened = false;
  FPipelineFileCacheManager::CloseUserPipelineFileCache();
  return;
}

// Flush @ 145e9b9d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FShaderPipelineCacheTask::Flush(FShaderPipelineCacheTask *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TDoubleLinkedListNode *pTVar5;
  FShutdownContainer *pFVar6;
  FPipelineCacheFileFormatPSORead *pFVar7;
  IAsyncReadRequest *pIVar8;
  TDoubleLinkedListNode *pTVar9;
  code *pcVar10;
  bool bVar11;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  *pTVar12;
  TDoubleLinkedListNode *pTVar13;
  
  DestructItems<FPipelineCachePSOHeader,int>
            ((FPipelineCachePSOHeader *)(this->OrderedCompileTasks).AllocatorInstance.Data,
             (this->OrderedCompileTasks).ArrayNum);
  piVar1 = &(this->OrderedCompileTasks).ArrayMax;
  (this->OrderedCompileTasks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&(this->OrderedCompileTasks).AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->FetchTasks).ListSize;
  iVar3 = (this->ReadTasks).ArrayNum;
  iVar4 = (this->CompileTasks).ArrayNum;
  pTVar12 = UE::ShaderPipeline::FShutdownContainer::Get();
  UE::ShaderPipeline::FShutdownContainer::AbandonCompileJobs(pTVar12->Ptr,&this->ReadTasks);
  pTVar12 = UE::ShaderPipeline::FShutdownContainer::Get();
  UE::ShaderPipeline::FShutdownContainer::AbandonCompileJobs(pTVar12->Ptr,&this->CompileTasks);
  pTVar12 = UE::ShaderPipeline::FShutdownContainer::Get();
  pTVar5 = (this->FetchTasks).HeadNode;
  pFVar6 = pTVar12->Ptr;
  do {
    if (pTVar5 == (TDoubleLinkedListNode *)0x0) {
      LOCK();
      TotalActiveTasks =
           (atomic<__int64>)((longlong)TotalActiveTasks - (longlong)(iVar2 + iVar3 + iVar4));
      UNLOCK();
      DestructItems<UE::ShaderPipeline::CompileJob,int>
                ((CompileJob *)(this->ReadTasks).AllocatorInstance.Data,(this->ReadTasks).ArrayNum);
      piVar1 = &(this->ReadTasks).ArrayMax;
      (this->ReadTasks).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2d8,8,0,&(this->ReadTasks).AllocatorInstance,0,piVar1);
      }
      DestructItems<UE::ShaderPipeline::CompileJob,int>
                ((CompileJob *)(this->CompileTasks).AllocatorInstance.Data,
                 (this->CompileTasks).ArrayNum);
      piVar1 = &(this->CompileTasks).ArrayMax;
      (this->CompileTasks).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2d8,8,0,&(this->CompileTasks).AllocatorInstance,0,piVar1);
      }
      pTVar5 = (this->FetchTasks).HeadNode;
      while (pTVar5 != (TDoubleLinkedListNode *)0x0) {
        pTVar13 = pTVar5->NextNode;
        ::operator_delete(pTVar5,0x18);
        (this->FetchTasks).HeadNode = pTVar13;
        pTVar5 = pTVar13;
      }
      (this->FetchTasks).TailNode = (TDoubleLinkedListNode *)0x0;
      (this->FetchTasks).HeadNode = (TDoubleLinkedListNode *)0x0;
      (**(code **)((this->FetchTasks)._padding_ + 8))(&this->FetchTasks,0);
      LOCK();
      TotalWaitingTasks = (atomic<__int64>)0x0;
      UNLOCK();
      TotalPrecompileTasks = 0;
      LOCK();
      TotalCompleteTasks = (atomic<__int64>)0x0;
      UNLOCK();
      LOCK();
      TotalPrecompileTime = (atomic<__int64>)0x0;
      UNLOCK();
      return;
    }
    pFVar7 = pTVar5->Value;
    if ((pFVar7->ReadRequest).Object == (IAsyncReadRequest *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Entry->ReadRequest.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                          ,0x209,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (((pFVar7->ReadRequest).Object == (IAsyncReadRequest *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pIVar8 = (pFVar7->ReadRequest).Object;
    if (pIVar8->bCanceled == false) {
      pIVar8->bCanceled = true;
      pIVar8->bDataIsReady = true;
      if (pIVar8->bCompleteAndCallbackCalled == false) {
        (**(code **)(*(longlong *)pIVar8 + 0x18))();
      }
    }
    pTVar13 = ::operator_new(0x18);
    if (pTVar13 != (TDoubleLinkedListNode *)0x0) {
      pTVar13->Value = pFVar7;
      pTVar13->NextNode = (TDoubleLinkedListNode *)0x0;
      pTVar13->PrevNode = (TDoubleLinkedListNode *)0x0;
      pTVar9 = (pFVar6->ShutdownFetchTasks).TailNode;
      if (pTVar9 == (TDoubleLinkedListNode *)0x0) {
        (pFVar6->ShutdownFetchTasks).HeadNode = pTVar13;
      }
      else {
        pTVar9->NextNode = pTVar13;
        pTVar13->PrevNode = (pFVar6->ShutdownFetchTasks).TailNode;
      }
      (pFVar6->ShutdownFetchTasks).TailNode = pTVar13;
      (**(code **)((pFVar6->ShutdownFetchTasks)._padding_ + 8))
                (&pFVar6->ShutdownFetchTasks,(pFVar6->ShutdownFetchTasks).ListSize + 1);
    }
    LOCK();
    pFVar6->TotalRemainingTasks = (atomic<int>)((int)pFVar6->TotalRemainingTasks + 1);
    UNLOCK();
    pTVar5 = pTVar5->NextNode;
  } while( true );
}

// OnShaderLibraryStateChanged @ 145ea7220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FShaderPipelineCacheTask::OnShaderLibraryStateChanged
          (FShaderPipelineCacheTask *this,ELibraryState param_1,EShaderPlatform param_2,
          FString *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  if ((this->bIsUserCache != false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsUserCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                         ,0x877,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (param_1 == Opened) {
    if ((param_3->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,GInternalProjectName);
    if (((iVar4 == 0) && (param_2 == this->ShaderPlatform)) && (this->bOpened == false)) {
      Close(this);
    }
  }
  else if (((param_1 == OpenedComponent) && (param_4 == -1)) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("ComponentID != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                              ,0x87e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_3->Data).ArrayNum < 2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1964978397260019583>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                       ,0x881,"!Name.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = false;
  }
  else {
    bVar2 = Open(this,param_3,param_3,param_2);
    if (3 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  return bVar2;
}

// Open @ 145ea7380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FShaderPipelineCacheTask::Open
          (FShaderPipelineCacheTask *this,FString *param_1,FString *param_2,EShaderPlatform param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FString local_20;
  
  ::FString::operator=(&this->PSOCacheKey,param_1);
  this->ShaderPlatform = param_3;
  ::FString::FString(&local_20,param_2);
  pFVar1 = &(this->PrecompileContext).CacheName;
  (this->PrecompileContext).bSlowPrecompileTask = false;
  if (pFVar1 != &local_20) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
    (this->PrecompileContext).CacheName.Data.ArrayNum = local_20.Data.ArrayNum;
    (this->PrecompileContext).CacheName.Data.ArrayMax = local_20.Data.ArrayMax;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (this->bIsUserCache == false) {
    bVar3 = FPipelineFileCacheManager::OpenPipelineFileCache
                      (param_1,param_2,param_3,&this->CacheFileGuid);
  }
  else {
    bVar3 = FPipelineFileCacheManager::OpenUserPipelineFileCache
                      (param_1,param_2,param_3,&this->CacheFileGuid);
  }
  return bVar3;
}

// Precompile @ 145ea9260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FShaderPipelineCacheTask::Precompile
          (FShaderPipelineCacheTask *this,FRHICommandListImmediate *param_1,EShaderPlatform param_2,
          FPipelineCacheFileFormatPSO *param_3)

{
  int *piVar1;
  FBlendStateInitializerRHI *pFVar2;
  FDepthStencilStateInitializerRHI *pFVar3;
  EShaderFrequency EVar4;
  DescriptorType DVar5;
  FRHIDepthStencilState **ppFVar6;
  FShaderPipelineCache *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  FRHIPixelShader *pFVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_PreCompileShadersTotal> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_PreCompileShadersNum> FVar21;
  FThreadSafeStaticStat<_public:_bool___cdecl_FShaderPipelineCacheTask::Precompile(FRHICommandListImmediate_&,EShaderPlatform,FPipelineCacheFileFormatPSO_const_&)_::_17_::FStat_STAT_FShaderPipelineCache_PrepareInitializer>
  FVar22;
  TRefCountPtr<FRHIVertexShader> TVar23;
  TRefCountPtr<FRHIGeometryShader> TVar24;
  TRefCountPtr<FRHIPixelShader> TVar25;
  longlong lVar26;
  FRHIVertexShader *pFVar27;
  FThreadSafeStaticStat<_public:_bool___cdecl_FShaderPipelineCacheTask::Precompile(FRHICommandListImmediate_&,EShaderPlatform,FPipelineCacheFileFormatPSO_const_&)_::_43_::FStat_STAT_FShaderPipelineCache_SetGraphicsPipelineState>
  FVar28;
  FComputePipelineState *pFVar29;
  FRayTracingPipelineState *pFVar30;
  FNameEntryId FVar31;
  FName FVar32;
  uint uVar33;
  FRHIVertexShader *pFVar34;
  int iVar35;
  undefined1 *puVar36;
  TMap<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>_>
  *this_00;
  FShaderStableKeyDebugInfoReader *this_01;
  FRHIVertexShader *pFVar37;
  bool bVar38;
  undefined1 auStackY_4e8 [32];
  FLLMScope local_484;
  uint local_480;
  uint uStack_47c;
  ulonglong local_478;
  FString local_470;
  FName local_460;
  FName local_458;
  FLLMScope local_450;
  FLLMScope local_44c;
  undefined1 local_448 [8];
  FRHICommandListImmediate *local_440;
  FRasterizerStateInitializerRHI local_438;
  FDepthStencilStateInitializerRHI *local_428;
  undefined8 *puStack_420;
  FColor_u_0 local_418 [2];
  FRHIResource *local_410;
  LARGE_INTEGER local_408;
  FRHIMeshShader *local_400;
  FRHIResource *local_3f8;
  FName local_3f0;
  FRHIComputeShader *local_3e0;
  FName local_3d8;
  LARGE_INTEGER local_3c8;
  FRHIResource *local_3c0;
  FRHIResource *local_3b8;
  FRHIAmplificationShader *local_3b0;
  FRHIResource *local_3a8;
  FMemScope local_3a0;
  FRHIResource *local_398;
  FMemScope local_390;
  FRHIResource *local_388;
  FMemScope local_380;
  undefined8 local_378;
  LARGE_INTEGER local_370;
  LARGE_INTEGER local_368;
  undefined1 local_360 [8];
  TPairInitializer<FDepthStencilStateInitializerRHI_const_&,FRHIDepthStencilState_*_&&> local_358;
  FStatMessage local_348;
  FStatMessage local_338;
  FStatMessage local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FName local_2a8 [2];
  undefined1 local_298 [112];
  undefined1 local_228 [16];
  FRasterizerStateInitializerRHI *local_218;
  FRHIResource **local_210;
  FRHIRayTracingShader **local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  FRHIRayTracingShader **local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  FBlendStateInitializerRHI *local_1e8;
  FRHIResource **local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FName local_148 [2];
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  pFVar37 = (FRHIVertexShader *)0x0;
  FVar18 = StatPtr_STAT_PreCompileShadersTotal;
  local_484._0_2_ = param_2;
  local_440 = param_1;
  local_408 = (LARGE_INTEGER)this;
  if (StatPtr_STAT_PreCompileShadersTotal ==
      (FThreadSafeStaticStat<FStat_STAT_PreCompileShadersTotal>)0x0) {
    pFVar17 = ::FName::FName(&local_1a8,"STAT_PreCompileShadersTotal");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_PreCompileShadersTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileShadersTotal,*pFVar17,
                        L"Total Pipelines Pre-Compiled","STATGROUP_PipelineStateCache",
                        "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  ppFVar6 = *(FRHIDepthStencilState ***)FVar18;
  uVar33 = (uint)ppFVar6;
  uVar15 = (uint)((ulonglong)ppFVar6 >> 0x20);
  local_480 = uVar33;
  uStack_47c = uVar15;
  if (((ppFVar6 != (FRHIDepthStencilState **)0x0) && (FThreadStats::bPrimaryDisableForever == false)
      ) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    local_348.NameAndInfo.Number = uVar15 & 0xffffafff | 0xa000;
    local_348.StatData.Pad[0] = '\x01';
    local_348.StatData.Pad[1] = '\0';
    local_348.StatData.Pad[2] = '\0';
    local_348.StatData.Pad[3] = '\0';
    local_348.StatData.Pad[4] = '\0';
    local_348.StatData.Pad[5] = '\0';
    local_348.StatData.Pad[6] = '\0';
    local_348.StatData.Pad[7] = '\0';
    local_358.Value = ppFVar6;
    local_348.NameAndInfo.Index.Value = uVar33;
    FThreadStats::AddStatMessage(pFVar19,&local_348);
    FStatsTrace::Add((FName *)&local_358.Value,1);
    if (pFVar19->ScopeCount == 0) {
      FThreadStats::Flush(pFVar19,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar19,false,false);
    }
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar21 = StatPtr_STAT_PreCompileShadersNum;
    if (StatPtr_STAT_PreCompileShadersNum ==
        (FThreadSafeStaticStat<FStat_STAT_PreCompileShadersNum>)0x0) {
      pFVar17 = ::FName::FName(&local_1b0,"STAT_PreCompileShadersNum");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_PreCompileShadersNum>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileShadersNum,*pFVar17,
                          L"# Pipelines Pre-Compiled","STATGROUP_PipelineStateCache",
                          "STATCAT_Advanced",L"ShaderPipelineCache",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar32 = *(FName *)FVar21;
    FVar31 = FVar32.ComparisonIndex.Value;
    uVar15 = FVar32.Number;
    local_480 = FVar31.Value;
    uStack_47c = uVar15;
    if (((FVar32 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      local_338.NameAndInfo.Number = uVar15 & 0xffffafff | 0xa000;
      local_338.StatData.Pad[0] = '\x01';
      local_338.StatData.Pad[1] = '\0';
      local_338.StatData.Pad[2] = '\0';
      local_338.StatData.Pad[3] = '\0';
      local_338.StatData.Pad[4] = '\0';
      local_338.StatData.Pad[5] = '\0';
      local_338.StatData.Pad[6] = '\0';
      local_338.StatData.Pad[7] = '\0';
      local_338.NameAndInfo.Index.Value = FVar31.Value;
      local_2a8[0] = FVar32;
      FThreadStats::AddStatMessage(pFVar19,&local_338);
      FStatsTrace::Add(local_2a8,1);
      if (pFVar19->ScopeCount == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  QueryPerformanceCounter(&local_3c8);
  local_368 = local_3c8;
  bVar38 = false;
  bVar12 = FPipelineCacheFileFormatPSO::Verify(param_3);
  uVar14 = bVar38;
  if (!bVar12) {
    if (2 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    goto LAB_145eaa972;
  }
  DVar5 = param_3->Type;
  if (DVar5 != Graphics) {
    if (DVar5 == Compute) {
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1122,"FShaderPipelineCache::PrecompileCompute",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                   ,0x462);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1122);
      }
      if (GShaderPipelineCacheDoNotPrecompileComputePSO == 0) {
        FShaderCodeLibrary::CreateComputeShader
                  ((EShaderPlatform)&local_3e0,(FSHAHash *)(ulonglong)param_2);
        if (local_3e0 != (FRHIComputeShader *)0x0) {
          pFVar29 = PipelineStateCache::GetAndOrCreateComputePipelineState
                              ((FRHIComputeCommandList *)param_1,local_3e0,true);
          bVar38 = pFVar29 != (FComputePipelineState *)0x0;
          if (local_3e0 != (FRHIComputeShader *)0x0) {
            FRHIResource::Release((FRHIResource *)local_3e0);
          }
        }
      }
      else {
        bVar38 = true;
      }
      uVar14 = bVar38;
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else if (DVar5 == RayTracing) {
      uVar14 = GShaderPipelineCacheDoNotPrecompileRayTracingPSO;
      if (((GShaderPipelineCacheDoNotPrecompileRayTracingPSO == false) &&
          (bVar12 = IsRayTracingEnabled(), uVar14 = GShaderPipelineCacheDoNotPrecompileRayTracingPSO
          , bVar12)) &&
         (FShaderCodeLibrary::CreateRayTracingShader
                    ((EShaderPlatform)&local_440,(FSHAHash *)(ulonglong)param_2,(char)param_3 - 0x28
                    ), uVar14 = bVar38, local_440 != (FRHICommandListImmediate *)0x0)) {
        local_298._0_4_ = 8;
        local_298._8_8_ = 0;
        local_298._16_8_ = 0;
        local_298._24_8_ = 0;
        local_298._32_8_ = 0;
        local_298[0x28] = true;
        local_298[0x29] = false;
        local_298._48_8_ = (FRHIRayTracingPipelineState *)0x0;
        local_298._64_8_ = (FRHIRayTracingShader **)0x0;
        local_298._72_8_ = local_298._72_8_ & 0xffffffff00000000;
        local_298._80_8_ = (FRHIRayTracingShader **)0x0;
        local_298._88_8_ = local_298._88_8_ & 0xffffffff00000000;
        local_298._96_8_ = (FDepthStencilStateInitializerRHI *)0x0;
        local_298._104_8_ = local_298._104_8_ & 0xffffffff00000000;
        local_228._0_8_ = (FDepthStencilStateInitializerRHI *)0x0;
        local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
        local_298._4_4_ = *(undefined4 *)&local_440->field_0x10c;
        local_298._56_8_ = pFVar37;
        if ((param_3->RayTracingDesc).ShaderBindingLayout.NumUniformBufferEntries != 0) {
          local_298._56_8_ = &(param_3->RayTracingDesc).ShaderBindingLayout;
        }
        local_448 = (undefined1  [8])local_440;
        EVar4 = (param_3->RayTracingDesc).Frequency;
        if (EVar4 == SF_NumStandardFrequencies) {
          uStack_1f0 = 1;
          local_298._64_8_ = local_448;
          local_298._72_8_ = CONCAT44(uStack_1ec,1);
          if (local_440 != (FRHICommandListImmediate *)0x0) {
            pFVar37 = *(FRHIVertexShader **)&local_440->field_0xf0;
          }
          local_298._8_8_ = (ulonglong)&pFVar37[-0x2492aad7e3fa23].field_0x20 ^ 0x4f1a08f64cae0c3d;
          local_1f8 = (FRHIRayTracingShader **)local_298._64_8_;
        }
        else if (EVar4 == SF_RayMiss) {
          uStack_200 = 1;
          local_298._80_8_ = local_448;
          local_298._88_8_ = CONCAT44(uStack_1fc,1);
          if (local_440 != (FRHICommandListImmediate *)0x0) {
            pFVar37 = *(FRHIVertexShader **)&local_440->field_0xf0;
          }
          local_298._16_8_ = (ulonglong)&pFVar37[-0x2492aad7e3fa23].field_0x20 ^ 0x4f1a08f64cae0c3d;
          local_208 = (FRHIRayTracingShader **)local_298._80_8_;
        }
        else if (EVar4 == SF_RayHitGroup) {
          local_428 = (FDepthStencilStateInitializerRHI *)local_448;
          puStack_420 = (undefined8 *)CONCAT44(puStack_420._4_4_,1);
          local_298._104_8_ = puStack_420;
          local_298._96_8_ = local_428;
          local_298._24_8_ =
               ComputeShaderTableHash<FRHIRayTracingShader>
                         ((TArrayView<FRHIRayTracingShader_*,int> *)(local_298 + 0x60),
                          0x4f1a08f64cae0c3d);
        }
        else if (EVar4 == SF_RayCallable) {
          local_428 = (FDepthStencilStateInitializerRHI *)local_448;
          puStack_420 = (undefined8 *)CONCAT44(puStack_420._4_4_,1);
          local_228._8_8_ = puStack_420;
          local_228._0_8_ = local_428;
          local_298._32_8_ =
               ComputeShaderTableHash<FRHIRayTracingShader>
                         ((TArrayView<FRHIRayTracingShader_*,int> *)local_228,0x4f1a08f64cae0c3d);
        }
        else {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                              ,0x496,L"");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
        }
        pFVar30 = PipelineStateCache::GetAndOrCreateRayTracingPipelineState
                            ((FRHICommandList *)param_1,
                             (FRayTracingPipelineStateInitializer *)local_298,Default);
        if ((FRHIRayTracingPipelineState *)local_298._48_8_ != (FRHIRayTracingPipelineState *)0x0) {
          FRHIResource::Release((FRHIResource *)local_298._48_8_);
        }
        uVar14 = pFVar30 != (FRayTracingPipelineState *)0x0;
        if (local_440 != (FRHICommandListImmediate *)0x0) {
          FRHIResource::Release((FRHIResource *)local_440);
        }
      }
    }
    else {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                          ,0x4a4,L"");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
    }
    goto LAB_145eaa972;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1010,"FShaderPipelineCache::PrecompileGraphics",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
               ,0x3f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1010);
  }
  local_138.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_138.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_138.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_138.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_478 = *(ulonglong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_138.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_138.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_138.DepthStencilAccess.Value = DepthNop;
  local_138.ConservativeRasterization = Disabled;
  local_138.bAllowVariableRateShading = true;
  local_138.ShadingRate = VRSSR_1x1;
  local_138.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_138.StatePrecachePSOHash = 0;
  if ((*(int *)(local_478 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FShaderPipelineCache_PrepareInitializer ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_FShaderPipelineCacheTask::Precompile(FRHICommandListImmediate_&,EShaderPlatform,FPipelineCacheFileFormatPSO_const_&)_::_17_::FStat_STAT_FShaderPipelineCache_PrepareInitializer>
         )0x0) {
      pFVar17 = ::FName::FName(&local_1a0,"STAT_FShaderPipelineCache_PrepareInitializer");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FShaderPipelineCache_PrepareInitializer,
                 *pFVar17,L"STAT_FShaderPipelineCache_PrepareInitializer","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_FShaderPipelineCache_PrepareInitializer;
  if (StatPtr_STAT_FShaderPipelineCache_PrepareInitializer ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FShaderPipelineCacheTask::Precompile(FRHICommandListImmediate_&,EShaderPlatform,FPipelineCacheFileFormatPSO_const_&)_::_17_::FStat_STAT_FShaderPipelineCache_PrepareInitializer>
       )0x0) {
    pFVar17 = ::FName::FName(local_148,"STAT_FShaderPipelineCache_PrepareInitializer");
    FVar22 = (FThreadSafeStaticStat<_public:_bool___cdecl_FShaderPipelineCacheTask::Precompile(FRHICommandListImmediate_&,EShaderPlatform,FPipelineCacheFileFormatPSO_const_&)_::_17_::FStat_STAT_FShaderPipelineCache_PrepareInitializer>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FShaderPipelineCache_PrepareInitializer,*pFVar17,
                          L"STAT_FShaderPipelineCache_PrepareInitializer","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar22;
  bVar38 = false;
  bVar9 = false;
  local_3f0.ComparisonIndex.Value = 0;
  local_3f0.Number = 0;
  FVar31 = FVar32.ComparisonIndex.Value;
  uVar15 = FVar32.Number;
  if ((FVar31.Value == 0) && (uVar15 == 0)) {
LAB_145ea9771:
    bVar10 = bVar9;
    bVar9 = false;
    FVar32 = local_3f0;
    FVar31.Value = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      bVar13 = false;
      bVar10 = false;
    }
    else {
      local_418[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_418[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar38 = false;
      bVar9 = true;
      if (CpuChannel->Enabled < 0) {
        bVar13 = false;
        bVar10 = true;
      }
      else {
        local_460.ComparisonIndex.Value = FVar31.Value;
        local_460.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_460,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                   ,0x3f6);
        bVar13 = true;
        bVar10 = true;
        bVar38 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ea9771;
    local_460.ComparisonIndex.Value = FVar31.Value;
    local_460.Number = uVar15;
    local_3f0 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar9 = true;
    FVar31.Value = local_3f0.ComparisonIndex.Value;
    bVar38 = bVar13;
  }
  if (((*(longlong *)(param_3->GraphicsDesc).MeshShader.Hash == 0) &&
      (*(longlong *)((param_3->GraphicsDesc).MeshShader.Hash + 8) == 0)) &&
     (*(int *)((param_3->GraphicsDesc).MeshShader.Hash + 0x10) == 0)) {
    local_138.BoundShaderState.VertexDeclarationRHI =
         PipelineStateCache::GetOrCreateVertexDeclaration(&(param_3->GraphicsDesc).VertexDescriptor)
    ;
    pFVar34 = pFVar37;
    if (((*(longlong *)(param_3->GraphicsDesc).VertexShader.Hash != 0) ||
        (*(longlong *)((param_3->GraphicsDesc).VertexShader.Hash + 8) != 0)) ||
       (pFVar27 = local_138.BoundShaderState.VertexShaderRHI,
       *(int *)((param_3->GraphicsDesc).VertexShader.Hash + 0x10) != 0)) {
      TVar23 = FShaderCodeLibrary::CreateVertexShader
                         ((EShaderPlatform)&local_3c0,(FSHAHash *)(ulonglong)(ushort)local_484._0_2_
                         );
      if ((FRHIVertexShader *)local_1d8 != TVar23.Reference) {
                    /* WARNING: Load size is inaccurate */
        pFVar34 = *TVar23.Reference;
        *(undefined8 *)TVar23.Reference = 0;
      }
      pFVar27 = pFVar34;
      if (local_3c0 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_3c0);
      }
    }
    local_138.BoundShaderState.VertexShaderRHI = pFVar27;
    if (((*(longlong *)(param_3->GraphicsDesc).GeometryShader.Hash != 0) ||
        (*(longlong *)((param_3->GraphicsDesc).GeometryShader.Hash + 8) != 0)) ||
       (*(int *)((param_3->GraphicsDesc).GeometryShader.Hash + 0x10) != 0)) {
      TVar24 = FShaderCodeLibrary::CreateGeometryShader
                         ((EShaderPlatform)&local_3b8,(FSHAHash *)(ulonglong)(ushort)local_484._0_2_
                         );
      pFVar27 = pFVar37;
      if ((FRHIGeometryShader *)(local_1d8 + 8) != TVar24.Reference) {
        pFVar27 = *(FRHIVertexShader **)TVar24.Reference;
        *(undefined8 *)TVar24.Reference = 0;
      }
      if (local_3b8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_3b8);
      }
      local_138.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)pFVar27;
      if (pFVar27 != (FRHIVertexShader *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar27);
      }
    }
    if (pFVar34 != (FRHIVertexShader *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar34);
    }
  }
  else {
    if (GRHIGlobals.SupportsMeshShadersTier0 == false) {
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar38) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar9) && (FVar32 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar19 == (FThreadStats *)0x0) {
          pFVar20 = FThreadStatsPool::Get();
          pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
        }
        if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
          local_328.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
          local_328.NameAndInfo.Index.Value = FVar31.Value;
          QueryPerformanceCounter(&local_408);
          local_328.StatData.Pad = (uchar  [8])(local_408.QuadPart & 0xffffffff);
          FThreadStats::AddStatMessage(pFVar19,&local_328);
          piVar1 = &pFVar19->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return false;
    }
    FShaderCodeLibrary::CreateMeshShader((EShaderPlatform)&local_400,(FSHAHash *)(ulonglong)param_2)
    ;
    local_138.BoundShaderState.MeshShaderRHI = local_400;
    if (((*(longlong *)(param_3->GraphicsDesc).AmplificationShader.Hash != 0) ||
        (*(longlong *)((param_3->GraphicsDesc).AmplificationShader.Hash + 8) != 0)) ||
       (*(int *)((param_3->GraphicsDesc).AmplificationShader.Hash + 0x10) != 0)) {
      FShaderCodeLibrary::CreateAmplificationShader
                ((EShaderPlatform)&local_3b0,(FSHAHash *)(ulonglong)param_2);
      local_138.BoundShaderState.AmplificationShaderRHI = local_3b0;
      if (local_3b0 != (FRHIAmplificationShader *)0x0) {
        FRHIResource::Release((FRHIResource *)local_3b0);
      }
    }
    if (local_400 != (FRHIMeshShader *)0x0) {
      FRHIResource::Release((FRHIResource *)local_400);
    }
  }
  pFVar34 = pFVar37;
  if (((*(longlong *)(param_3->GraphicsDesc).FragmentShader.Hash != 0) ||
      (*(longlong *)((param_3->GraphicsDesc).FragmentShader.Hash + 8) != 0)) ||
     (pFVar11 = local_138.BoundShaderState.PixelShaderRHI,
     *(int *)((param_3->GraphicsDesc).FragmentShader.Hash + 0x10) != 0)) {
    TVar25 = FShaderCodeLibrary::CreatePixelShader
                       ((EShaderPlatform)&local_3a8,(FSHAHash *)(ulonglong)(ushort)local_484._0_2_);
    if ((FRHIPixelShader *)local_1c8 != TVar25.Reference) {
      pFVar34 = *(FRHIVertexShader **)TVar25.Reference;
      *(undefined8 *)TVar25.Reference = 0;
    }
    pFVar11 = (FRHIPixelShader *)pFVar34;
    if (local_3a8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_3a8);
    }
  }
  local_138.BoundShaderState.PixelShaderRHI = pFVar11;
  pFVar7 = FShaderPipelineCache::ShaderPipelineCache;
  pFVar2 = &(param_3->GraphicsDesc).BlendState;
  uVar15 = ::GetTypeHash(pFVar2);
  iVar16 = TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FBlendStateInitializerRHI>
                     ((TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
                       *)&pFVar7->BlendStateCache,uVar15,pFVar2);
  if (iVar16 == -1) {
LAB_145ea9acb:
    if ((*(int *)(local_478 + 0x9d4c) <
         `class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1165,L"RHIMisc/CreateBlendState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&local_484,
               `class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1165,false,None,Default,true);
    FMemScope::FMemScope
              (&local_3a0,
               &`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1165,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x60))(GDynamicRHI,&local_3f8,pFVar2);
    FMemScope::~FMemScope(&local_3a0);
    FLLMScope::~FLLMScope(&local_484);
    FRHIResource::AddRef(local_3f8);
    local_398 = local_3f8;
    local_1e0 = &local_398;
    local_1e8 = pFVar2;
    TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FBlendStateInitializerRHI_const_&,FRHIBlendState_*_&&>_>
              ((TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
                *)&pFVar7->BlendStateCache,
               (TPairInitializer<FBlendStateInitializerRHI_const_&,FRHIBlendState_*_&&> *)
               (local_360 + 4),(bool *)&local_1e8);
    if (local_3f8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_3f8);
    }
  }
  else {
    lVar26 = (longlong)iVar16 * 0x50 + *(longlong *)&pFVar7->BlendStateCache;
    pFVar27 = (FRHIVertexShader *)(lVar26 + 0x40);
    if (lVar26 == 0) {
      pFVar27 = pFVar37;
    }
    if (pFVar27 == (FRHIVertexShader *)0x0) goto LAB_145ea9acb;
    local_3f8 = *(FRHIResource **)pFVar27;
  }
  pFVar7 = FShaderPipelineCache::ShaderPipelineCache;
  local_438.FillMode.Value = (param_3->GraphicsDesc).RasterizerState.FillMode.Value;
  local_438.DepthBias = (param_3->GraphicsDesc).RasterizerState.DepthBias;
  local_438.SlopeScaleDepthBias = (param_3->GraphicsDesc).RasterizerState.SlopeScaleDepthBias;
  this_00 = &FShaderPipelineCache::ShaderPipelineCache->RasterizerStateCache;
  local_438.CullMode.Value = (param_3->GraphicsDesc).RasterizerState.CullMode.Value;
  local_438.DepthClipMode = (param_3->GraphicsDesc).RasterizerState.DepthClipMode;
  local_438.bAllowMSAA = (param_3->GraphicsDesc).RasterizerState.bAllowMSAA;
  local_138.BlendState = (FRHIBlendState *)local_3f8;
  uVar15 = ::GetTypeHash(&local_438);
  if (*(int *)&(pFVar7->RasterizerStateCache).field_0x8 !=
      *(int *)&(pFVar7->RasterizerStateCache).field_0x34) {
    puVar36 = *(undefined1 **)&(pFVar7->RasterizerStateCache).field_0x40;
    if (puVar36 == (undefined1 *)0x0) {
      puVar36 = &(pFVar7->RasterizerStateCache).field_0x38;
    }
    iVar16 = *(int *)(puVar36 +
                     (ulonglong)(*(int *)&(pFVar7->RasterizerStateCache).field_0x48 - 1U & uVar15) *
                     4);
    while (iVar16 != -1) {
      lVar26 = (longlong)iVar16 * 0x20;
      bVar13 = ::operator==((FRasterizerStateInitializerRHI *)
                            (*(longlong *)&this_00->field_0x0 + lVar26),&local_438);
      if (bVar13) {
        lVar26 = *(longlong *)&this_00->field_0x0 + lVar26;
        pFVar27 = (FRHIVertexShader *)(lVar26 + 0x10);
        if (lVar26 == 0) {
          pFVar27 = pFVar37;
        }
        if (pFVar27 != (FRHIVertexShader *)0x0) {
          local_410 = *(FRHIResource **)pFVar27;
          goto LAB_145ea9d20;
        }
        break;
      }
      iVar16 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x18 + lVar26);
    }
  }
  if ((*(int *)(local_478 + 0x9d4c) <
       `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
    _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (&local_450,
             `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1153,false,None,Default,true);
  FMemScope::FMemScope
            (&local_390,
             &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1153,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_410,&local_438);
  FMemScope::~FMemScope(&local_390);
  FLLMScope::~FLLMScope(&local_450);
  FRHIResource::AddRef(local_410);
  local_388 = local_410;
  local_218 = &local_438;
  local_210 = &local_388;
  TSet<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRasterizerStateInitializerRHI_const_&,FRHIRasterizerState_*_&&>_>
            ((TSet<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FRasterizerStateInitializerRHI_const_&,FRHIRasterizerState_*_&&> *)
             local_360,(bool *)&local_218);
  if (local_410 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_410);
  }
LAB_145ea9d20:
  pFVar7 = FShaderPipelineCache::ShaderPipelineCache;
  pFVar3 = &(param_3->GraphicsDesc).DepthStencilState;
  local_138.RasterizerState = (FRHIRasterizerState *)local_410;
  uVar15 = ::GetTypeHash(pFVar3);
  iVar16 = TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FDepthStencilStateInitializerRHI>
                     ((TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
                       *)&pFVar7->DepthStencilStateCache,uVar15,pFVar3);
  if (iVar16 == -1) {
LAB_145ea9d90:
    if ((*(int *)(local_478 + 0x9d4c) <
         `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1159,L"RHIMisc/CreateDepthStencilState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&local_44c,
               `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1159,false,None,Default,true);
    FMemScope::FMemScope
              (&local_380,
               &`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1159,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x58))(GDynamicRHI,&local_480,pFVar3);
    FMemScope::~FMemScope(&local_380);
    FLLMScope::~FLLMScope(&local_44c);
    FRHIResource::AddRef((FRHIResource *)CONCAT44(uStack_47c,local_480));
    local_378 = CONCAT44(uStack_47c,local_480);
    puStack_420 = &local_378;
    local_428 = pFVar3;
    TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FDepthStencilStateInitializerRHI_const_&,FRHIDepthStencilState_*_&&>_>
              ((TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
                *)&pFVar7->DepthStencilStateCache,&local_358,(bool *)&local_428);
    local_138.DepthStencilState = (FRHIDepthStencilState *)CONCAT44(uStack_47c,local_480);
    if (local_138.DepthStencilState != (FRHIDepthStencilState *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138.DepthStencilState);
    }
  }
  else {
    lVar26 = (longlong)iVar16 * 0x20 + *(longlong *)&pFVar7->DepthStencilStateCache;
    pFVar27 = (FRHIVertexShader *)(lVar26 + 0x10);
    if (lVar26 == 0) {
      pFVar27 = pFVar37;
    }
    if (pFVar27 == (FRHIVertexShader *)0x0) goto LAB_145ea9d90;
    local_138.DepthStencilState = *(FRHIDepthStencilState **)pFVar27;
  }
  local_138.RenderTargetFormats.Elements[0] = (param_3->GraphicsDesc).RenderTargetFormats[0];
  local_138.RenderTargetFlags.Elements[0] = (param_3->GraphicsDesc).RenderTargetFlags[0];
  local_138.RenderTargetFormats.Elements[1] = (param_3->GraphicsDesc).RenderTargetFormats[1];
  local_138.RenderTargetFlags.Elements[1] = (param_3->GraphicsDesc).RenderTargetFlags[1];
  local_138.RenderTargetFormats.Elements[2] = (param_3->GraphicsDesc).RenderTargetFormats[2];
  pFVar7 = *(FShaderPipelineCache **)(local_408.QuadPart + 0xe8);
  local_138.RenderTargetFlags.Elements[2] = (param_3->GraphicsDesc).RenderTargetFlags[2];
  local_138.RenderTargetFormats.Elements[3] = (param_3->GraphicsDesc).RenderTargetFormats[3];
  local_138.RenderTargetFlags.Elements[3] = (param_3->GraphicsDesc).RenderTargetFlags[3];
  local_138.RenderTargetFormats.Elements[4] = (param_3->GraphicsDesc).RenderTargetFormats[4];
  local_138.RenderTargetFlags.Elements[4] = (param_3->GraphicsDesc).RenderTargetFlags[4];
  local_138.RenderTargetFormats.Elements[5] = (param_3->GraphicsDesc).RenderTargetFormats[5];
  local_138.RenderTargetFlags.Elements[5] = (param_3->GraphicsDesc).RenderTargetFlags[5];
  local_138.RenderTargetFormats.Elements[6] = (param_3->GraphicsDesc).RenderTargetFormats[6];
  local_138.RenderTargetFlags.Elements[6] = (param_3->GraphicsDesc).RenderTargetFlags[6];
  local_138.RenderTargetFormats.Elements[7] = (param_3->GraphicsDesc).RenderTargetFormats[7];
  local_138.RenderTargetFlags.Elements[7] = (param_3->GraphicsDesc).RenderTargetFlags[7];
  local_138.RenderTargetsEnabled = (param_3->GraphicsDesc).RenderTargetsActive;
  local_138.NumSamples = (ushort)(param_3->GraphicsDesc).MSAASamples;
  local_138.SubpassHint = (param_3->GraphicsDesc).SubpassHint;
  local_138.SubpassIndex = (param_3->GraphicsDesc).SubpassIndex;
  local_138.MultiViewCount = (param_3->GraphicsDesc).MultiViewCount;
  local_138.bHasFragmentDensityAttachment = (param_3->GraphicsDesc).bHasFragmentDensityAttachment;
  local_138.bDepthBounds = (param_3->GraphicsDesc).bDepthBounds;
  local_138.DepthStencilTargetFormat = (param_3->GraphicsDesc).DepthStencilFormat;
  local_138.DepthStencilTargetFlag = (param_3->GraphicsDesc).DepthStencilFlags;
  local_138.DepthTargetLoadAction = (param_3->GraphicsDesc).DepthLoad;
  local_138.StencilTargetLoadAction = (param_3->GraphicsDesc).StencilLoad;
  local_138.DepthTargetStoreAction = (param_3->GraphicsDesc).DepthStore;
  local_138.StencilTargetStoreAction = (param_3->GraphicsDesc).StencilStore;
  local_138.PrimitiveType = (param_3->GraphicsDesc).PrimitiveType;
  local_138._208_4_ = local_138._208_4_ & 0xfffffff | 0x50000000;
  if (((pFVar7 != (FShaderPipelineCache *)0x0) &&
      (this_01 = &pFVar7->ShaderHashToStableKey,
      *(int *)&(pFVar7->ShaderHashToStableKey).ShaderHashesToSource.field_0x8 !=
      *(int *)&(pFVar7->ShaderHashToStableKey).ShaderHashesToSource.field_0x34)) &&
     (4 < (byte)LogInit._0_1_)) {
    local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_470.Data.ArrayNum = 0;
    local_470.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_318,L"---- begin FGraphicsPipelineStateInitializer -----\n");
    uVar15 = local_318.Data.ArrayNum - 1;
    if (local_318.Data.ArrayNum == 0) {
      uVar15 = 0;
    }
    ::FString::AppendChars(&local_470,(wchar_t *)local_318.Data.AllocatorInstance.Data,uVar15);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    iVar16 = 0;
    if (local_138.BoundShaderState.VertexShaderRHI != (FRHIVertexShader *)0x0) {
      UE::ShaderUtils::FShaderStableKeyDebugInfoReader::GetShaderStableNameOptions
                (this_01,&local_198,
                 (FSHAHash *)&(local_138.BoundShaderState.VertexShaderRHI)->field_0xf0,0x10);
      ::FString::PrintfImpl(&local_308,L"%s: %s");
      iVar35 = local_308.Data.ArrayNum + -1;
      if (local_308.Data.ArrayNum == 0) {
        iVar35 = iVar16;
      }
      ::FString::AppendChars(&local_470,(wchar_t *)local_308.Data.AllocatorInstance.Data,iVar35);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
    }
    if (local_138.BoundShaderState.MeshShaderRHI != (FRHIMeshShader *)0x0) {
      UE::ShaderUtils::FShaderStableKeyDebugInfoReader::GetShaderStableNameOptions
                (this_01,&local_188,
                 (FSHAHash *)&(local_138.BoundShaderState.MeshShaderRHI)->field_0xf0,0x10);
      ::FString::PrintfImpl(&local_2f8,L"%s: %s");
      iVar35 = local_2f8.Data.ArrayNum + -1;
      if (local_2f8.Data.ArrayNum == 0) {
        iVar35 = iVar16;
      }
      ::FString::AppendChars(&local_470,(wchar_t *)local_2f8.Data.AllocatorInstance.Data,iVar35);
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    if (local_138.BoundShaderState.AmplificationShaderRHI != (FRHIAmplificationShader *)0x0) {
      UE::ShaderUtils::FShaderStableKeyDebugInfoReader::GetShaderStableNameOptions
                (this_01,&local_178,
                 (FSHAHash *)&(local_138.BoundShaderState.AmplificationShaderRHI)->field_0xf0,0x10);
      ::FString::PrintfImpl(&local_2e8,L"%s: %s");
      iVar35 = local_2e8.Data.ArrayNum + -1;
      if (local_2e8.Data.ArrayNum == 0) {
        iVar35 = iVar16;
      }
      ::FString::AppendChars(&local_470,(wchar_t *)local_2e8.Data.AllocatorInstance.Data,iVar35);
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    if (local_138.BoundShaderState.PixelShaderRHI != (FRHIPixelShader *)0x0) {
      UE::ShaderUtils::FShaderStableKeyDebugInfoReader::GetShaderStableNameOptions
                (this_01,&local_168,
                 (FSHAHash *)&(local_138.BoundShaderState.PixelShaderRHI)->field_0xf0,0x10);
      ::FString::PrintfImpl(&local_2d8,L"%s: %s");
      iVar35 = local_2d8.Data.ArrayNum + -1;
      if (local_2d8.Data.ArrayNum == 0) {
        iVar35 = iVar16;
      }
      ::FString::AppendChars(&local_470,(wchar_t *)local_2d8.Data.AllocatorInstance.Data,iVar35);
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    if (local_138.BoundShaderState.GeometryShaderRHI != (FRHIGeometryShader *)0x0) {
      UE::ShaderUtils::FShaderStableKeyDebugInfoReader::GetShaderStableNameOptions
                (this_01,&local_158,
                 (FSHAHash *)&(local_138.BoundShaderState.GeometryShaderRHI)->field_0xf0,0x10);
      ::FString::PrintfImpl(&local_2c8,L"%s: %s");
      iVar35 = local_2c8.Data.ArrayNum + -1;
      if (local_2c8.Data.ArrayNum == 0) {
        iVar35 = iVar16;
      }
      ::FString::AppendChars(&local_470,(wchar_t *)local_2c8.Data.AllocatorInstance.Data,iVar35);
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_2b8,L"----- end -----\n");
    iVar35 = local_2b8.Data.ArrayNum + -1;
    if (local_2b8.Data.ArrayNum == 0) {
      iVar35 = iVar16;
    }
    ::FString::AppendChars(&local_470,(wchar_t *)local_2b8.Data.AllocatorInstance.Data,iVar35);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
  }
  if (pFVar34 != (FRHIVertexShader *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar34);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  if ((*(int *)(local_478 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_FShaderPipelineCache_SetGraphicsPipelineState ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_FShaderPipelineCacheTask::Precompile(FRHICommandListImmediate_&,EShaderPlatform,FPipelineCacheFileFormatPSO_const_&)_::_43_::FStat_STAT_FShaderPipelineCache_SetGraphicsPipelineState>
         )0x0) {
      pFVar17 = ::FName::FName((FName *)(local_1c8 + 8),
                               "STAT_FShaderPipelineCache_SetGraphicsPipelineState");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FShaderPipelineCache_SetGraphicsPipelineState,*pFVar17,
                 L"STAT_FShaderPipelineCache_SetGraphicsPipelineState","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    else {
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVar28 = StatPtr_STAT_FShaderPipelineCache_SetGraphicsPipelineState;
  if (StatPtr_STAT_FShaderPipelineCache_SetGraphicsPipelineState ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FShaderPipelineCacheTask::Precompile(FRHICommandListImmediate_&,EShaderPlatform,FPipelineCacheFileFormatPSO_const_&)_::_43_::FStat_STAT_FShaderPipelineCache_SetGraphicsPipelineState>
       )0x0) {
    pFVar17 = ::FName::FName(&local_1b8,"STAT_FShaderPipelineCache_SetGraphicsPipelineState");
    FVar28 = (FThreadSafeStaticStat<_public:_bool___cdecl_FShaderPipelineCacheTask::Precompile(FRHICommandListImmediate_&,EShaderPlatform,FPipelineCacheFileFormatPSO_const_&)_::_43_::FStat_STAT_FShaderPipelineCache_SetGraphicsPipelineState>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FShaderPipelineCache_SetGraphicsPipelineState,*pFVar17,
                          L"STAT_FShaderPipelineCache_SetGraphicsPipelineState","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar28;
  bVar38 = false;
  bVar9 = false;
  local_3d8.ComparisonIndex.Value = 0;
  local_3d8.Number = 0;
  FVar31 = FVar32.ComparisonIndex.Value;
  uVar15 = FVar32.Number;
  if ((FVar31.Value == 0) && (uVar15 == 0)) {
LAB_145eaa593:
    bVar13 = false;
    FVar32 = local_3d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_478 = local_478 & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_478,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar38 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_458.ComparisonIndex.Value = FVar31.Value;
        local_458.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_458,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                   ,0x45b);
        bVar38 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145eaa593;
    local_458.ComparisonIndex.Value = FVar31.Value;
    local_458.Number = uVar15;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar13 = true;
  }
  SetGraphicsPipelineState((FRHICommandList *)local_440,&local_138,0,DoNothing,false);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  uVar14 = 1;
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_145eaa972:
  QueryPerformanceCounter(&local_370);
  LOCK();
  TotalCompleteTasks = (atomic<__int64>)((longlong)TotalCompleteTasks + 1);
  UNLOCK();
  LOCK();
  TotalPrecompileTime =
       (atomic<__int64>)((longlong)TotalPrecompileTime + (local_370.QuadPart - (longlong)local_368))
  ;
  UNLOCK();
  return (bool)uVar14;
}

// PrecompilePipelineBatch @ 145eaabd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FShaderPipelineCacheTask::PrecompilePipelineBatch(FShaderPipelineCacheTask *this)

{
  DescriptorType DVar1;
  FName FVar2;
  FShaderPipelineCacheArchive *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FShaderPipelineCache *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_PreCompileBatchTotal> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_PreCompileBatchNum> FVar13;
  FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount> FVar14;
  FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount> FVar15;
  FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount> FVar16;
  ForAnyElementType FVar17;
  FNameEntryId FVar18;
  CompileJob *this_01;
  uint uVar19;
  uint uVar20;
  uint local_res8;
  uint uStackX_c;
  uint local_res10 [2];
  uint local_res18;
  uint uStackX_1c;
  uint local_res20;
  uint uStackX_24;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FStatMessage local_c8;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  uVar20 = 0;
  uVar19 = 0;
  FVar10 = StatPtr_STAT_PreCompileBatchTotal;
  if (StatPtr_STAT_PreCompileBatchTotal ==
      (FThreadSafeStaticStat<FStat_STAT_PreCompileBatchTotal>)0x0) {
    pFVar9 = ::FName::FName(&local_78,"STAT_PreCompileBatchTotal");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_PreCompileBatchTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileBatchTotal,*pFVar9,
                        L"Total Batches Pre-Compiled","STATGROUP_PipelineStateCache",
                        "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar2 = *(FName *)FVar10;
  FVar18 = FVar2.ComparisonIndex.Value;
  uVar7 = FVar2.Number;
  local_res8 = FVar18.Value;
  uStackX_c = uVar7;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_c8.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
    local_c8.StatData.Pad[0] = '\x01';
    local_c8.StatData.Pad[1] = '\0';
    local_c8.StatData.Pad[2] = '\0';
    local_c8.StatData.Pad[3] = '\0';
    local_c8.StatData.Pad[4] = '\0';
    local_c8.StatData.Pad[5] = '\0';
    local_c8.StatData.Pad[6] = '\0';
    local_c8.StatData.Pad[7] = '\0';
    local_f0 = FVar2;
    local_c8.NameAndInfo.Index.Value = FVar18.Value;
    FThreadStats::AddStatMessage(pFVar11,&local_c8);
    FStatsTrace::Add(&local_f0,1);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar13 = StatPtr_STAT_PreCompileBatchNum;
    if (StatPtr_STAT_PreCompileBatchNum == (FThreadSafeStaticStat<FStat_STAT_PreCompileBatchNum>)0x0
       ) {
      pFVar9 = ::FName::FName(&local_70,"STAT_PreCompileBatchNum");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_PreCompileBatchNum>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileBatchNum,*pFVar9,
                          L"# Batches Pre-Compiled","STATGROUP_PipelineStateCache",
                          "STATCAT_Advanced",L"ShaderPipelineCache",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar13;
    FVar18 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar18.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_b8.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
      local_b8.StatData.Pad[0] = '\x01';
      local_b8.StatData.Pad[1] = '\0';
      local_b8.StatData.Pad[2] = '\0';
      local_b8.StatData.Pad[3] = '\0';
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_e8 = FVar2;
      local_b8.NameAndInfo.Index.Value = FVar18.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_b8);
      FStatsTrace::Add(&local_e8,1);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  pFVar5 = FShaderPipelineCache::ShaderPipelineCache;
  uVar7 = FShaderPipelineCache::BatchSize;
  if ((this->CompileTasks).ArrayNum < (int)FShaderPipelineCache::BatchSize) {
    uVar7 = (this->CompileTasks).ArrayNum;
  }
  if (FShaderPipelineCache::UserCacheTaskKey.Data.ArrayNum == 0) {
    FVar17.Data = (FScriptContainerElement *)L"";
    uVar8 = uVar19;
  }
  else {
    FVar17.Data = FShaderPipelineCache::UserCacheTaskKey.Data.AllocatorInstance.Data;
    uVar8 = FShaderPipelineCache::UserCacheTaskKey.Data.ArrayNum - 1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar8,(wchar_t *)FVar17.Data);
  TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
  ::FindIndexByHash<FString>
            ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
              *)&pFVar5->ShaderCacheTasks,uVar8,&FShaderPipelineCache::UserCacheTaskKey);
  if (uVar7 != 0) {
    do {
      uVar8 = uVar19;
      if ((int)uVar20 < (this->CompileTasks).ArrayNum) {
        uVar8 = ~uVar20 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = (CompileJob *)
                ((this->CompileTasks).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x2d8);
      if (((this_01->ReadRequests == (FShaderPipelineCacheArchive *)0x0) ||
          (bVar6 = FShaderPipelineCacheArchive::PollExternalReadDependencies(this_01->ReadRequests),
          !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CompileTask.ReadRequests && CompileTask.ReadRequests->PollExternalReadDependencies()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                             ,0x5db,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res8 = ::GetTypeHash((FPipelineCacheFileFormatPSO *)this_01);
      if (5 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      Precompile(this,&GRHICommandList.CommandListImmediate,GMaxRHIShaderPlatform,
                 (FPipelineCacheFileFormatPSO *)this_01);
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>
                (&FShaderPipelineCache::ShaderPipelineCache->CompiledHashes,local_res10,
                 (bool *)&local_res8);
      UE::ShaderPipeline::CompileJob::ReleasePreloadedShaders(this_01);
      this_00 = this_01->ReadRequests;
      if (this_00 != (FShaderPipelineCacheArchive *)0x0) {
        this_00->_padding_ = (longlong)&___7FShaderPipelineCacheArchive__6B_;
        DestructItems<TFunction<bool___cdecl(double)>,int>
                  ((TFunction<bool___cdecl(double)> *)
                   (this_00->ExternalReadDependencies).AllocatorInstance.Data,
                   (this_00->ExternalReadDependencies).ArrayNum);
        pFVar3 = (this_00->ExternalReadDependencies).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        FArchive::~FArchive((FArchive *)this_00);
        ::operator_delete(this_00,0xa0);
      }
      DVar1 = (this_01->PSO).Type;
      this_01->ReadRequests = (FShaderPipelineCacheArchive *)0x0;
      if (DVar1 == Compute) {
        FVar16 = StatPtr_STAT_TotalComputePipelineStateCount;
        if (StatPtr_STAT_TotalComputePipelineStateCount ==
            (FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount>)0x0) {
          pFVar9 = ::FName::FName(local_58,"STAT_TotalComputePipelineStateCount");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_TotalComputePipelineStateCount,*pFVar9,
                              L"Total Compute Pipeline State Count","STATGROUP_PipelineStateCache",
                              "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar16;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar11 == (FThreadStats *)0x0) {
            pFVar12 = FThreadStatsPool::Get();
            pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
          }
          local_88.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
          local_88.StatData.Pad[0] = '\x01';
          local_88.StatData.Pad[1] = '\0';
          local_88.StatData.Pad[2] = '\0';
          local_88.StatData.Pad[3] = '\0';
          local_88.StatData.Pad[4] = '\0';
          local_88.StatData.Pad[5] = '\0';
          local_88.StatData.Pad[6] = '\0';
          local_88.StatData.Pad[7] = '\0';
          local_d0 = FVar2;
          local_88.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar11,&local_88);
          pFVar9 = &local_d0;
LAB_145eab385:
          FStatsTrace::Add(pFVar9,1);
          if (pFVar11->ScopeCount == 0) {
            FThreadStats::Flush(pFVar11,false,false);
          }
          else {
LAB_145eab3a4:
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar11,false,false);
            }
          }
        }
      }
      else if (DVar1 == Graphics) {
        FVar15 = StatPtr_STAT_TotalGraphicsPipelineStateCount;
        if (StatPtr_STAT_TotalGraphicsPipelineStateCount ==
            (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)0x0) {
          pFVar9 = ::FName::FName(&local_60,"STAT_TotalGraphicsPipelineStateCount");
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_TotalGraphicsPipelineStateCount,*pFVar9,
                              L"Total Graphics Pipeline State Count","STATGROUP_PipelineStateCache",
                              "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar15;
        FVar18 = FVar2.ComparisonIndex.Value;
        uVar8 = FVar2.Number;
        local_res20 = FVar18.Value;
        uStackX_24 = uVar8;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar11 == (FThreadStats *)0x0) {
            pFVar12 = FThreadStatsPool::Get();
            pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
          }
          local_98.NameAndInfo.Number = uVar8 & 0xffffafff | 0xa000;
          local_98.StatData.Pad[0] = '\x01';
          local_98.StatData.Pad[1] = '\0';
          local_98.StatData.Pad[2] = '\0';
          local_98.StatData.Pad[3] = '\0';
          local_98.StatData.Pad[4] = '\0';
          local_98.StatData.Pad[5] = '\0';
          local_98.StatData.Pad[6] = '\0';
          local_98.StatData.Pad[7] = '\0';
          local_d8 = FVar2;
          local_98.NameAndInfo.Index.Value = FVar18.Value;
          FThreadStats::AddStatMessage(pFVar11,&local_98);
          FStatsTrace::Add(&local_d8,1);
          if (pFVar11->ScopeCount != 0) goto LAB_145eab3a4;
          FThreadStats::Flush(pFVar11,false,false);
        }
      }
      else if (DVar1 == RayTracing) {
        FVar14 = StatPtr_STAT_TotalRayTracingPipelineStateCount;
        if (StatPtr_STAT_TotalRayTracingPipelineStateCount ==
            (FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount>)0x0) {
          pFVar9 = ::FName::FName(&local_68,"STAT_TotalRayTracingPipelineStateCount");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_TotalRayTracingPipelineStateCount,*pFVar9,
                              L"Total RayTracing Pipeline State Count",
                              "STATGROUP_PipelineStateCache","STATCAT_Advanced",
                              L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar14;
        FVar18 = FVar2.ComparisonIndex.Value;
        uVar8 = FVar2.Number;
        local_res18 = FVar18.Value;
        uStackX_1c = uVar8;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar11 == (FThreadStats *)0x0) {
            pFVar12 = FThreadStatsPool::Get();
            pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
          }
          local_a8.NameAndInfo.Number = uVar8 & 0xffffafff | 0xa000;
          local_a8.StatData.Pad[0] = '\x01';
          local_a8.StatData.Pad[1] = '\0';
          local_a8.StatData.Pad[2] = '\0';
          local_a8.StatData.Pad[3] = '\0';
          local_a8.StatData.Pad[4] = '\0';
          local_a8.StatData.Pad[5] = '\0';
          local_a8.StatData.Pad[6] = '\0';
          local_a8.StatData.Pad[7] = '\0';
          local_e0 = FVar2;
          local_a8.NameAndInfo.Index.Value = FVar18.Value;
          FThreadStats::AddStatMessage(pFVar11,&local_a8);
          pFVar9 = &local_e0;
          goto LAB_145eab385;
        }
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                           ,0x5fc,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar7);
  }
  this->TotalPSOsCompiled = this->TotalPSOsCompiled + uVar7;
  LOCK();
  TotalActiveTasks = (atomic<__int64>)((longlong)TotalActiveTasks - (longlong)(int)uVar7);
  UNLOCK();
  if ((int)uVar7 <= (this->CompileTasks).ArrayNum) {
    uVar19 = ~uVar7 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar7 != 0) {
    TArray<UE::ShaderPipeline::CompileJob,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->CompileTasks,0,uVar7);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2d8,8,&(this->CompileTasks).AllocatorInstance,(this->CompileTasks).ArrayNum,
               &(this->CompileTasks).ArrayMax);
  }
  return;
}

// PreparePipelineBatch @ 145eaba90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderPipelineCacheTask::PreparePipelineBatch
          (FShaderPipelineCacheTask *this,
          TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *param_1)

{
  int *piVar1;
  TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *this_00;
  FPipelineCacheFileFormatPSORead *pFVar2;
  CompileJob *pCVar3;
  FScriptContainerElement *pFVar4;
  FArchive *pFVar5;
  TDoubleLinkedListNode *pTVar6;
  code *pcVar7;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  TVar8;
  bool bVar9;
  int iVar10;
  FShaderPipelineCacheArchive *pFVar11;
  ForAnyElementType _Dst;
  FShutdownContainer *pFVar12;
  uint uVar13;
  undefined1 *_Dst_00;
  ForElementType<FSetElementId> _Src;
  undefined1 *_Src_00;
  FPipelineCacheFileFormatPSO *pFVar14;
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *this_01;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  TVar15;
  longlong lVar16;
  TDoubleLinkedListNode *pTVar17;
  TDoubleLinkedListNode *pTVar18;
  undefined1 auStackY_7b8 [32];
  bool local_768 [16];
  FArchiveState local_758;
  undefined8 local_6c8;
  FPipelineCacheFileFormatPSORead *local_6c0;
  undefined8 local_6b8;
  CompileJob local_6a8;
  undefined1 local_3c8 [32];
  undefined1 *local_3a8;
  int local_3a0;
  uint local_39c;
  undefined4 local_398;
  int local_394;
  FScriptContainerElement local_390 [8];
  ForAnyElementType local_388;
  uint local_380;
  uint local_378;
  undefined1 local_368 [32];
  undefined1 *local_348;
  int local_340;
  uint local_33c;
  undefined4 local_338;
  int local_334;
  undefined1 local_330 [8];
  ForElementType<FSetElementId> local_328;
  uint local_320;
  FPipelineCacheFileFormatPSO local_318;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  if (param_1->HeadNode != (TDoubleLinkedListNode *)0x0) {
    pTVar17 = param_1->HeadNode;
    do {
      pFVar2 = pTVar17->Value;
      if ((pFVar2 == (FPipelineCacheFileFormatPSORead *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PSORead",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                             ,0x55f,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar11 = (FShaderPipelineCacheArchive *)pFVar2->Ar;
      if ((pFVar11 == (FShaderPipelineCacheArchive *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Archive",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                             ,0x561,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pFVar2->bValid == false) {
LAB_145eac349:
        if (1 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        LOCK();
        TotalActiveTasks = (atomic<__int64>)((longlong)TotalActiveTasks + -1);
        UNLOCK();
LAB_145eac371:
        pTVar18 = pTVar17->NextNode;
        if (pFVar2 != (FPipelineCacheFileFormatPSORead *)0x0) {
          pFVar5 = pFVar2->Ar;
          if (pFVar5 != (FArchive *)0x0) {
            (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
            pFVar2->Ar = (FArchive *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar2->ReadRequest).SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar2->ParentFileHandle).SharedReferenceCount.ReferenceController);
          pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          ::operator_delete(pFVar2,0x40);
        }
        if (pTVar17 != (TDoubleLinkedListNode *)0x0) {
          if (param_1->ListSize == 1) {
            TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::Empty(param_1);
          }
          else {
            if (pTVar17 == param_1->HeadNode) {
              pTVar6 = param_1->HeadNode->NextNode;
              param_1->HeadNode = pTVar6;
              pTVar6->PrevNode = (TDoubleLinkedListNode *)0x0;
            }
            else if (pTVar17 == param_1->TailNode) {
              pTVar6 = param_1->TailNode->PrevNode;
              param_1->TailNode = pTVar6;
              pTVar6->NextNode = (TDoubleLinkedListNode *)0x0;
            }
            else {
              pTVar17->NextNode->PrevNode = pTVar17->PrevNode;
              pTVar17->PrevNode->NextNode = pTVar17->NextNode;
            }
            ::operator_delete(pTVar17,0x18);
            (**(code **)(param_1->_padding_ + 8))(param_1,param_1->ListSize + -1);
          }
        }
      }
      else {
        if (pFVar2->bReadCompleted != false) {
LAB_145eabb8f:
          FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO(&local_318);
          local_758._padding_ = 0;
          local_758.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          local_758.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          local_758.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
          local_758.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
          local_758._40_8_ = 0;
          local_758.ArSerializingDefaults = 0;
          local_758.ArPortFlags = 0;
          local_758.ArMaxSerializeSize = 0;
          local_758.ArUEVer.FileVersionUE4 = 0;
          local_758.ArUEVer.FileVersionUE5 = 0;
          local_758.ArLicenseeUEVer = 0;
          local_758.ArEngineVer.Major = 0;
          local_758.ArEngineVer.Minor = 0;
          local_758.ArEngineVer.Patch = 0;
          local_758.ArEngineVer._6_2_ = 0;
          local_758.ArEngineVer.Changelist = 0;
          local_758.CustomVersionContainer = (FCustomVersionContainer *)0x0;
          local_758.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          local_758.SavePackageData = (FArchiveSavePackageData *)0x0;
          local_758.SerializedProperty = (FProperty *)0x0;
          local_758.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          local_758.bCustomVersionsAreReset = false;
          local_758._129_7_ = 0;
          local_758.NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(&local_758);
          local_6c8 = 0;
          local_758._padding_ = (longlong)&___7FMemoryReader__6B_;
          local_6b8 = 0x7fffffffffffffff;
          local_6c0 = pFVar2;
          FArchiveState::SetIsLoading(&local_758,true);
          (**(code **)(local_758._padding_ + 0x108))(&local_758,0);
          (**(code **)(local_758._padding_ + 0x130))
                    (&local_758,FPipelineCacheFileFormatCurrentVersion);
          ::operator<<((FArchive *)&local_758,&local_318);
          local_768[0] = true;
          local_368._0_8_ = (FScriptContainerElement *)0x0;
          local_368._8_8_ = 0;
          local_348 = (undefined1 *)0x0;
          local_340 = 0;
          local_33c = 0x80;
          local_338 = 0xffffffff;
          local_334 = 0;
          local_328 = (ForElementType<FSetElementId>)0x0;
          local_320 = 0;
          FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO(&local_6a8.PSO);
          local_6a8.bShadersPreloaded = false;
          FPipelineCacheFileFormatPSO::operator=(&local_6a8.PSO,&local_318);
          pFVar11 = ::operator_new(0xa0);
          if (pFVar11 == (FShaderPipelineCacheArchive *)0x0) {
            local_6a8.ReadRequests = (FShaderPipelineCacheArchive *)0x0;
          }
          else {
            FArchiveState::FArchiveState((FArchiveState *)pFVar11);
            pFVar11->_padding_ = (longlong)&___7FShaderPipelineCacheArchive__6B_;
            (pFVar11->ExternalReadDependencies).AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pFVar11->ExternalReadDependencies).ArrayNum = 0;
            (pFVar11->ExternalReadDependencies).ArrayMax = 0;
            local_6a8.ReadRequests = pFVar11;
          }
          bVar9 = UE::ShaderPipeline::CompileJob::PreloadShaders
                            (&local_6a8,
                             (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                             local_368,local_768);
          uVar13 = local_320;
          if ((bVar9) && (local_768[0] != false)) {
            pCVar3 = (CompileJob *)(this->ReadTasks).AllocatorInstance.Data;
            if (((pCVar3 <= &local_6a8) && (&local_6a8 < pCVar3 + (this->ReadTasks).ArrayMax)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar10 = (this->ReadTasks).ArrayNum;
            piVar1 = &(this->ReadTasks).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x2d8,8,&(this->ReadTasks).AllocatorInstance,piVar1);
            }
            pFVar4 = (this->ReadTasks).AllocatorInstance.Data;
            (this->ReadTasks).ArrayNum = iVar10 + 1;
            pFVar14 = (FPipelineCacheFileFormatPSO *)(pFVar4 + (longlong)iVar10 * 0x2d8);
            FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO(pFVar14,&local_6a8.PSO);
            *(FShaderPipelineCacheArchive **)(pFVar14 + 1) = local_6a8.ReadRequests;
            pFVar14[1].ComputeDesc.ComputeShader.Hash[4] = local_6a8.bShadersPreloaded;
          }
          else {
            if (local_368._8_4_ == local_334) {
              if ((local_768[0] != false) && (1 < (byte)LogRHI._0_1_)) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
              }
            }
            else {
              lVar16 = (longlong)(int)local_320;
              local_378 = pFVar2->Hash;
              local_3c8._0_8_ = (FScriptContainerElement *)0x0;
              local_3c8._8_8_ = 0;
              local_3a8 = (undefined1 *)0x0;
              local_3a0 = 0;
              local_39c = 0x80;
              local_398 = 0xffffffff;
              local_394 = 0;
              local_388.Data = (FScriptContainerElement *)0x0;
              local_380 = 0;
              if (1 < local_320) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_388,0,local_320,4);
              }
              _Src = (ForElementType<FSetElementId>)local_330;
              if (local_328 != (ForElementType<FSetElementId>)0x0) {
                _Src = local_328;
              }
              _Dst.Data = local_390;
              if (local_388.Data != (FScriptContainerElement *)0x0) {
                _Dst.Data = local_388.Data;
              }
              iVar10 = local_368._8_4_;
              if (uVar13 != 0) {
                memcpy(_Dst.Data,(void *)_Src,lVar16 << 2);
                iVar10 = local_368._8_4_;
              }
              local_380 = uVar13;
              TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Empty((TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_3c8,iVar10);
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1c,4,iVar10,(ForAnyElementType *)local_3c8,(int *)(local_3c8 + 8),
                         (int *)(local_3c8 + 0xc));
              local_398 = local_338;
              local_394 = local_334;
              local_3a0 = 0;
              uVar13 = local_340 + 0x1fU & 0xffffffe0;
              if (((int)local_39c < (int)uVar13) || (0x80 < (int)local_39c)) {
                local_39c = 0x80;
                if (0x80 < (int)uVar13) {
                  local_39c = uVar13;
                }
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_3c8 + 0x10),0);
              }
              local_3a0 = local_340;
              if (local_340 != 0) {
                _Src_00 = local_368 + 0x10;
                if (local_348 != (undefined1 *)0x0) {
                  _Src_00 = local_348;
                }
                _Dst_00 = local_3c8 + 0x10;
                if (local_3a8 != (undefined1 *)0x0) {
                  _Dst_00 = local_3a8;
                }
                memcpy(_Dst_00,_Src_00,(ulonglong)(local_340 + 0x1fU >> 5) << 2);
              }
              if (iVar10 != 0) {
                memcpy((void *)local_3c8._0_8_,(void *)local_368._0_8_,(longlong)iVar10 * 0x1c);
              }
              pFVar4 = (this->OrderedCompileTasks).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)local_3c8) &&
                  ((FScriptContainerElement *)local_3c8 <
                   pFVar4 + (longlong)(this->OrderedCompileTasks).ArrayMax * 0x58)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar10 = (this->OrderedCompileTasks).ArrayNum;
              piVar1 = &(this->OrderedCompileTasks).ArrayMax;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x858,&(this->OrderedCompileTasks).AllocatorInstance,piVar1);
              }
              pFVar4 = (this->OrderedCompileTasks).AllocatorInstance.Data;
              (this->OrderedCompileTasks).ArrayNum = iVar10 + 1;
              this_01 = (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                        (pFVar4 + (longlong)iVar10 * 0x58);
              *(undefined8 *)&this_01->Elements = 0;
              *(undefined8 *)&(this_01->Elements).field_0x8 = 0;
              *(undefined8 *)&(this_01->Elements).field_0x20 = 0;
              *(undefined4 *)&(this_01->Elements).field_0x28 = 0;
              *(undefined4 *)&(this_01->Elements).field_0x2c = 0x80;
              *(undefined4 *)&(this_01->Elements).field_0x30 = 0xffffffff;
              *(undefined4 *)&(this_01->Elements).field_0x34 = 0;
              (this_01->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
              this_01->HashSize = 0;
              TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=
                        (this_01,(TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                                 local_3c8);
              *(uint *)&this_01[1].Elements = local_378;
              local_380 = 0;
              if (local_388.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_388.Data);
              }
              iVar10 = SUB84(local_3c8._8_8_,4);
              local_3c8._8_8_ = local_3c8._8_8_ & 0xffffffff00000000;
              if (iVar10 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1c,4,0,(ForAnyElementType *)local_3c8,0,(int *)(local_3c8 + 0xc));
              }
              local_398 = 0xffffffff;
              local_394 = 0;
              local_3a0 = 0;
              if (0x80 < local_39c) {
                local_39c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_3c8 + 0x10),0);
              }
              if (local_3a8 != (undefined1 *)0x0) {
                FMemory::Free(local_3a8);
              }
              if ((FScriptContainerElement *)local_3c8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_3c8._0_8_);
              }
            }
            TVar15.Ptr = UE::ShaderPipeline::FShutdownContainer::Instance.Ptr;
            if (UE::ShaderPipeline::FShutdownContainer::Instance.Ptr == (FShutdownContainer *)0x0) {
              pFVar12 = ::operator_new(0x38);
              TVar15.Ptr = (FShutdownContainer *)0x0;
              if (pFVar12 != (FShutdownContainer *)0x0) {
                *(undefined8 *)pFVar12 = 0;
                *(undefined4 *)&(pFVar12->ShutdownFetchTasks).field_0x1c = 0;
                (pFVar12->ShutdownReadCompileTasks).AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                (pFVar12->ShutdownReadCompileTasks).ArrayNum = 0;
                (pFVar12->ShutdownReadCompileTasks).ArrayMax = 0;
                (pFVar12->ShutdownFetchTasks)._padding_ =
                     (longlong)&___7__TDoubleLinkedList_PEAUFPipelineCacheFileFormatPSORead____6B_;
                (pFVar12->ShutdownFetchTasks).HeadNode = (TDoubleLinkedListNode *)0x0;
                (pFVar12->ShutdownFetchTasks).TailNode = (TDoubleLinkedListNode *)0x0;
                (pFVar12->ShutdownFetchTasks).ListSize = 0;
                TVar15.Ptr = pFVar12;
              }
              TVar8.Ptr = UE::ShaderPipeline::FShutdownContainer::Instance.Ptr;
              if (UE::ShaderPipeline::FShutdownContainer::Instance.Ptr != (FShutdownContainer *)0x0)
              {
                this_00 = &(UE::ShaderPipeline::FShutdownContainer::Instance.Ptr)->
                           ShutdownFetchTasks;
                UE::ShaderPipeline::FShutdownContainer::Instance.Ptr = TVar15.Ptr;
                TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::
                ~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>(this_00);
                DestructItems<UE::ShaderPipeline::CompileJob,int>
                          ((CompileJob *)
                           ((TVar8.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data,
                           ((TVar8.Ptr)->ShutdownReadCompileTasks).ArrayNum);
                pFVar4 = ((TVar8.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data;
                if (pFVar4 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar4);
                }
                ::operator_delete(TVar8.Ptr,0x38);
                TVar15 = UE::ShaderPipeline::FShutdownContainer::Instance;
              }
            }
            UE::ShaderPipeline::FShutdownContainer::Instance.Ptr = TVar15.Ptr;
            TVar15.Ptr = UE::ShaderPipeline::FShutdownContainer::Instance.Ptr;
            iVar10 = ((UE::ShaderPipeline::FShutdownContainer::Instance.Ptr)->
                     ShutdownReadCompileTasks).ArrayNum;
            piVar1 = &((UE::ShaderPipeline::FShutdownContainer::Instance.Ptr)->
                      ShutdownReadCompileTasks).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x2d8,8,&((UE::ShaderPipeline::FShutdownContainer::Instance.Ptr)->
                                           ShutdownReadCompileTasks).AllocatorInstance,piVar1);
            }
            pFVar4 = ((TVar15.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data;
            ((TVar15.Ptr)->ShutdownReadCompileTasks).ArrayNum = iVar10 + 1;
            pFVar14 = (FPipelineCacheFileFormatPSO *)(pFVar4 + (longlong)iVar10 * 0x2d8);
            FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO(pFVar14,&local_6a8.PSO);
            *(FShaderPipelineCacheArchive **)(pFVar14 + 1) = local_6a8.ReadRequests;
            pFVar14[1].ComputeDesc.ComputeShader.Hash[4] = local_6a8.bShadersPreloaded;
            LOCK();
            (TVar15.Ptr)->TotalRemainingTasks =
                 (atomic<int>)((int)(TVar15.Ptr)->TotalRemainingTasks + 1);
            UNLOCK();
            LOCK();
            TotalActiveTasks = (atomic<__int64>)((longlong)TotalActiveTasks + -1);
            UNLOCK();
          }
          FPipelineCacheFileFormatPSO::~FPipelineCacheFileFormatPSO(&local_6a8.PSO);
          local_320 = 0;
          if (local_328 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_328);
          }
          iVar10 = SUB84(local_368._8_8_,4);
          local_368._8_8_ = local_368._8_8_ & 0xffffffff00000000;
          if (iVar10 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,0,(ForAnyElementType *)local_368,0,(int *)(local_368 + 0xc));
          }
          local_338 = 0xffffffff;
          local_334 = 0;
          local_340 = 0;
          if (0x80 < local_33c) {
            local_33c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_368 + 0x10),0);
          }
          if (local_348 != (undefined1 *)0x0) {
            FMemory::Free(local_348);
          }
          if ((FScriptContainerElement *)local_368._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_368._0_8_);
          }
          FArchive::~FArchive((FArchive *)&local_758);
          FPipelineCacheFileFormatPSO::~FPipelineCacheFileFormatPSO(&local_318);
          goto LAB_145eac371;
        }
        bVar9 = FShaderPipelineCacheArchive::PollExternalReadDependencies(pFVar11);
        if (bVar9) {
          if ((pFVar2->bReadCompleted == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PSORead->bReadCompleted",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                                 ,0x568,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          goto LAB_145eabb8f;
        }
        if (pFVar2->bValid == false) goto LAB_145eac349;
        pTVar18 = pTVar17->NextNode;
      }
      pTVar17 = pTVar18;
    } while (pTVar18 != (TDoubleLinkedListNode *)0x0);
  }
  return;
}

// ReadyForNextBatch @ 145eac870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FShaderPipelineCacheTask::ReadyForNextBatch(FShaderPipelineCacheTask *this)

{
  return (this->ReadTasks).ArrayNum == 0;
}

// ReadyForPrecompile @ 145eac880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall FShaderPipelineCacheTask::ReadyForPrecompile(FShaderPipelineCacheTask *this)

{
  TArray<UE::ShaderPipeline::CompileJob,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FPipelineCacheFileFormatPSO *pFVar12;
  uint uVar13;
  FPipelineCacheFileFormatPSO *pFVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar13 = 0;
  if ((this->ReadTasks).ArrayNum != 0) {
    pTVar1 = &this->ReadTasks;
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar13 < (this->ReadTasks).ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      lVar16 = (longlong)(int)uVar13 * 0x2d8;
      if ((*(longlong *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x2c8) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReadTasks[i].ReadRequests",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                             ,0x5be,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      uVar10 = 0;
      if ((int)uVar13 < (this->ReadTasks).ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      bVar8 = FShaderPipelineCacheArchive::PollExternalReadDependencies
                        (*(FShaderPipelineCacheArchive **)
                          ((pTVar1->AllocatorInstance).Data + lVar16 + 0x2c8));
      if (bVar8) {
        uVar10 = 0;
        if ((int)uVar13 < (this->ReadTasks).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        pFVar14 = (FPipelineCacheFileFormatPSO *)(this->CompileTasks).AllocatorInstance.Data;
        pFVar12 = (FPipelineCacheFileFormatPSO *)((pTVar1->AllocatorInstance).Data + lVar16);
        if (((pFVar14 <= pFVar12) &&
            (pFVar12 < (FPipelineCacheFileFormatPSO *)
                       ((longlong)pFVar14 + (longlong)(this->CompileTasks).ArrayMax * 0x2d8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        iVar11 = (this->CompileTasks).ArrayNum;
        piVar2 = &(this->CompileTasks).ArrayMax;
        if (iVar11 == *piVar2) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x2d8,8,&(this->CompileTasks).AllocatorInstance,piVar2);
        }
        (this->CompileTasks).ArrayNum = iVar11 + 1;
        pFVar14 = (FPipelineCacheFileFormatPSO *)
                  ((this->CompileTasks).AllocatorInstance.Data + (longlong)iVar11 * 0x2d8);
        FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO(pFVar14,pFVar12);
        uVar4 = pFVar12[1].ComputeDesc.ComputeShader.Hash[0];
        uVar5 = pFVar12[1].ComputeDesc.ComputeShader.Hash[1];
        uVar6 = pFVar12[1].ComputeDesc.ComputeShader.Hash[2];
        uVar7 = pFVar12[1].ComputeDesc.ComputeShader.Hash[3];
        pFVar14[1].Type = pFVar12[1].Type;
        pFVar14[1].ComputeDesc.ComputeShader.Hash[0] = uVar4;
        pFVar14[1].ComputeDesc.ComputeShader.Hash[1] = uVar5;
        pFVar14[1].ComputeDesc.ComputeShader.Hash[2] = uVar6;
        pFVar14[1].ComputeDesc.ComputeShader.Hash[3] = uVar7;
        pFVar14[1].ComputeDesc.ComputeShader.Hash[4] = pFVar12[1].ComputeDesc.ComputeShader.Hash[4];
        uVar10 = 0;
        if ((int)uVar13 < (this->ReadTasks).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        pFVar14 = (FPipelineCacheFileFormatPSO *)((pTVar1->AllocatorInstance).Data + lVar16);
        FPipelineCacheFileFormatPSO::~FPipelineCacheFileFormatPSO(pFVar14);
        iVar11 = (this->ReadTasks).ArrayNum + ~uVar13;
        if (iVar11 != 0) {
          memmove(pFVar14,pFVar14[1].ComputeDesc.ComputeShader.Hash + 0xc,(longlong)iVar11 * 0x2d8);
        }
        piVar2 = &(this->ReadTasks).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2d8,8,&pTVar1->AllocatorInstance,(this->ReadTasks).ArrayNum,
                   &(this->ReadTasks).ArrayMax);
      }
      else {
        uVar13 = uVar13 + 1;
      }
    } while (uVar13 < (uint)(this->ReadTasks).ArrayNum);
  }
  if (((this->CompileTasks).ArrayNum != 0) &&
     (iVar11 = PipelineStateCache::GetNumActivePipelinePrecompileTasks(),
     iVar11 < GMinPipelinePrecompileTasksInFlightThreshold)) {
    return true;
  }
  return false;
}

// Tick @ 145eb8510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderPipelineCacheTask::Tick(FShaderPipelineCacheTask *this,float param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  TDoubleLinkedListNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  atomic<__int64> aVar9;
  TConsoleVariableData<int> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_PreCompileTime> FVar15;
  atomic<__int64> aVar16;
  atomic<__int64> aVar17;
  atomic<__int64> aVar18;
  FThreadSafeStaticStat<FStat_STAT_ShaderPipelineTaskCount> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_ShaderPipelineWaitingTaskCount> FVar22;
  FThreadSafeStaticStat<FStat_STAT_ShaderPipelineActiveTaskCount> FVar23;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  *pTVar24;
  FThreadSafeStaticStat<FStat_STAT_PreCompileMemory> FVar25;
  int iVar26;
  FName FVar27;
  longlong lVar28;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  atomic<__int64> aVar33;
  uchar auVar34 [8];
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  FScriptContainerElement *pFVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  undefined1 local_218 [4];
  int local_214;
  FColor_u_0 local_210 [2];
  atomic<__int64> local_208;
  longlong local_200;
  FName local_1f8;
  FName local_1f0;
  int local_1e0;
  undefined1 local_1dc [4];
  LARGE_INTEGER local_1d8;
  LARGE_INTEGER local_1d0;
  LARGE_INTEGER local_1c8;
  LARGE_INTEGER local_1c0;
  LARGE_INTEGER local_1b8;
  FScriptContainerElement *local_1b0;
  ulong64 local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  int local_180;
  FStatMessage local_178;
  FStatMessage local_168;
  FStatMessage local_158;
  FStatMessage local_148;
  FScriptContainerElement *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> local_d8;
  FSimpleScopeSecondsStat local_b8;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70 [4];
  undefined4 local_4c;
  
  if (0.0 < PrecompileStartTime) {
    QueryPerformanceCounter(&local_1d8);
    TotalPrecompileWallTime =
         (float)(((double)local_1d8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000) - PrecompileStartTime);
  }
  if ((PrecompileStartTime == 0.0) &&
     (((this->FetchTasks).ListSize != 0 || ((this->OrderedCompileTasks).ArrayNum != 0)))) {
    QueryPerformanceCounter(&local_1d0);
    PrecompileStartTime =
         (double)local_1d0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  bVar13 = ReadyForPrecompile(this);
  aVar33 = (atomic<__int64>)0x0;
  uVar31 = 0;
  uVar32 = 0;
  if (bVar13) {
    local_b8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PreCompileTotalTime;
    if (StatPtr_STAT_PreCompileTotalTime ==
        (FThreadSafeStaticStat<FStat_STAT_PreCompileTotalTime>)0x0) {
      pFVar14 = ::FName::FName(&local_98,"STAT_PreCompileTotalTime");
      local_b8.StatId.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileTotalTime,*pFVar14,
                      L"Total Pre-Compile Time","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                      L"ShaderPipelineCache",true,false,NumBits,false,false,MCR_Invalid);
    }
    local_b8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
    QueryPerformanceCounter(&local_1c8);
    local_b8.StartTime =
         (double)local_1c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    local_b8.Scale = __real_3ff0000000000000;
    FVar15 = StatPtr_STAT_PreCompileTime;
    if (StatPtr_STAT_PreCompileTime == (FThreadSafeStaticStat<FStat_STAT_PreCompileTime>)0x0) {
      pFVar14 = ::FName::FName(&local_90,"STAT_PreCompileTime");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_PreCompileTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileTime,*pFVar14,
                          L"Pre-Compile Time","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                          L"ShaderPipelineCache",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar27 = *(FName *)FVar15;
    bVar13 = false;
    bVar8 = false;
    local_1f0.ComparisonIndex.Value = 0;
    local_1f0.Number = 0;
    if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_145eb87b0:
      bVar7 = false;
      FVar27 = local_1f0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_210[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_210[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
        bVar13 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1f8.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
          local_1f8.Number = FVar27.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                     ,0x75f);
          bVar13 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145eb87b0;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar7 = true;
    }
    QueryPerformanceCounter(&local_1b8);
    PrecompilePipelineBatch(this);
    QueryPerformanceCounter(&local_1c0);
    if (0.0 < FShaderPipelineCache::BatchTime) {
      fVar39 = (float)((double)(local_1c0.s.LowPart - local_1b8._0_4_) *
                      FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000);
      if (FShaderPipelineCache::BatchTime <= fVar39) {
        if (FShaderPipelineCache::BatchTime < fVar39) {
          if (FShaderPipelineCache::BatchSize < 2) {
            if (2 < (byte)LogRHI._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
            }
          }
          else {
            FShaderPipelineCache::BatchSize = FShaderPipelineCache::BatchSize - 1;
          }
        }
      }
      else {
        FShaderPipelineCache::BatchSize = FShaderPipelineCache::BatchSize + 1;
      }
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FThreadStats::AddMessage(FVar27,CycleScopeEnd);
    }
    FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_b8);
  }
  if ((this->ReadTasks).ArrayNum == 0) {
    uVar38 = (this->OrderedCompileTasks).ArrayNum;
    piVar1 = &(this->FetchTasks).ListSize;
    if ((uVar38 != 0) || (*piVar1 != 0)) {
      uVar30 = *piVar1;
      aVar18._0_4_ = uVar32;
      if (uVar30 < FShaderPipelineCache::BatchSize) {
        aVar18._0_4_ = FShaderPipelineCache::BatchSize - uVar30;
      }
      aVar16._0_4_ = uVar38;
      if (aVar18._0_4_ < uVar38) {
        aVar16._0_4_ = aVar18._0_4_;
      }
      if ((int)uVar30 < (int)aVar16._0_4_) {
        local_214 = aVar16._0_4_ - uVar30;
        local_d8.ListSize = 0;
        uVar38 = uVar38 - 1;
        local_d8._padding_ =
             (longlong)&___7__TDoubleLinkedList_PEAUFPipelineCacheFileFormatPSORead____6B_;
        local_d8.HeadNode = (TDoubleLinkedListNode *)0x0;
        local_d8.TailNode = (TDoubleLinkedListNode *)0x0;
        if (-1 < (int)uVar38) {
          lVar28 = (longlong)(int)uVar38 * 0x58;
          do {
            local_200 = lVar28;
            if (local_214 == 0) break;
            uVar30 = uVar32;
            if ((int)uVar38 < (this->OrderedCompileTasks).ArrayNum) {
              uVar30 = ~uVar38 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar36 = (this->OrderedCompileTasks).AllocatorInstance.Data + lVar28;
            uStack_12c = 1;
            uVar30 = *(uint *)(pFVar36 + 0x28);
            local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar36 + 0x10);
            uStack_11c = uVar32;
            aVar16._0_4_ = uVar32;
            aVar18._0_4_ = uVar32;
            if (uVar30 != 0) {
              pTVar35 = local_128;
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar36 + 0x20) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar35 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar36 + 0x20);
              }
              uVar37 = *(uint *)(pTVar35->AllocatorInstance).InlineData;
              aVar17 = aVar33;
              aVar9 = aVar33;
              aVar18._0_4_ = uVar31;
              aVar16._0_4_ = uVar31;
              while (uVar37 == 0) {
                aVar18._0_4_ = aVar9._0_4_ + 0x20;
                aVar18._4_4_ = 0;
                aVar16._0_4_ = aVar17._0_4_ + 1;
                aVar16._4_4_ = 0;
                uStack_11c = uVar30;
                if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)aVar16._0_4_) goto LAB_145eb89ff;
                uVar37 = *(uint *)((pTVar35->AllocatorInstance).InlineData +
                                  (longlong)aVar17._0_4_ * 4 + 4);
                aVar17 = aVar16;
                aVar9 = aVar18;
              }
              uStack_12c = -uVar37 & uVar37;
              uVar2 = (ulonglong)uStack_12c * 2 + 1;
              lVar28 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                }
              }
              local_180 = (int)lVar28;
              uStack_11c = local_180 + -1 + aVar18._0_4_;
              if ((int)uVar30 < (int)uStack_11c) {
                uStack_11c = uVar30;
              }
            }
LAB_145eb89ff:
            uVar30 = *(uint *)(pFVar36 + 0x28);
            uStack_114 = local_4c;
            iStack_110 = *(int *)(pFVar36 + 8) - *(int *)(pFVar36 + 0x34);
            uVar37 = uVar30 & 0xffffffe0;
            TStack_100._padding_ = CONCAT44(uStack_12c,aVar16._0_4_);
            uStack_120 = 0xffffffff;
            TStack_100.CurrentBitIndex = uStack_11c;
            TStack_100.UnvisitedBitMask = 0xffffffff;
            iVar26 = (int)uVar30 >> 5;
            TStack_100._28_4_ = local_4c;
            TStack_100.BaseBitIndex = aVar18._0_4_;
            uStack_e0 = CONCAT44(uStack_10c,iStack_110);
            local_1b0 = pFVar36;
            local_138 = pFVar36;
            uStack_130 = aVar16._0_4_;
            local_118 = aVar18._0_4_;
            local_108 = pFVar36;
            TStack_100.Array = local_128;
            if (((int)uVar30 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar11 = local_1b0;
            aVar18._0_4_ = *(uint *)(pFVar36 + 0x28);
            if (uVar30 != aVar18._0_4_) {
              pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar36 + 0x10);
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar36 + 0x20) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar35 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar36 + 0x20);
              }
              uVar30 = -1 << ((byte)uVar30 & 0x1f) &
                       *(uint *)((pTVar35->AllocatorInstance).InlineData + (longlong)iVar26 * 4);
              while (uVar30 == 0) {
                lVar28 = (longlong)iVar26;
                uVar37 = uVar37 + 0x20;
                iVar26 = iVar26 + 1;
                uVar30 = aVar18._0_4_;
                if ((int)((aVar18._0_4_ - 1) + ((int)(aVar18._0_4_ - 1) >> 0x1f & 0x1fU)) >> 5 <
                    iVar26) goto LAB_145eb8b0f;
                uVar30 = *(uint *)((pTVar35->AllocatorInstance).InlineData + lVar28 * 4 + 4);
              }
              uVar2 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
              lVar28 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                }
              }
              local_1e0 = (int)lVar28;
              uVar30 = local_1e0 + -1 + uVar37;
              if ((int)aVar18._0_4_ < (int)uVar30) {
                uVar30 = aVar18._0_4_;
              }
            }
LAB_145eb8b0f:
            bVar29 = 1;
            while( true ) {
              pFVar12 = local_108;
              if (*(int *)(local_108 + 8) - *(int *)(local_108 + 0x34) != (int)uStack_e0) {
                local_218[0] = 0;
                `TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_218);
              }
              if (((TStack_100.CurrentBitIndex == uVar30) &&
                  (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar36 + 0x10))) &&
                 (pFVar12 == pFVar11)) break;
              bVar13 = FShaderCodeLibrary::ContainsShaderCode
                                 ((FSHAHash *)
                                  ((longlong)TStack_100.CurrentBitIndex * 0x1c +
                                  *(longlong *)pFVar12));
              bVar29 = bVar29 & bVar13;
              TStack_100.UnvisitedBitMask =
                   TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
            }
            if (bVar29 != 0) {
              aVar16 = (atomic<__int64>)::operator_new(0x40);
              aVar18 = aVar33;
              if (aVar16 != (atomic<__int64>)0x0) {
                *(undefined8 *)aVar16 = 0;
                *(undefined8 *)((longlong)aVar16 + 8) = 0;
                *(undefined8 *)((longlong)aVar16 + 0x10) = 0;
                *(undefined4 *)((longlong)aVar16 + 0x18) = 0;
                *(undefined2 *)((longlong)aVar16 + 0x1c) = 0;
                *(undefined8 *)((longlong)aVar16 + 0x20) = 0;
                *(undefined8 *)((longlong)aVar16 + 0x28) = 0;
                *(undefined8 *)((longlong)aVar16 + 0x30) = 0;
                *(undefined8 *)((longlong)aVar16 + 0x38) = 0;
                aVar18 = aVar16;
              }
              uVar30 = uVar32;
              if ((int)uVar38 < (this->OrderedCompileTasks).ArrayNum) {
                uVar30 = ~uVar38 >> 0x1f;
              }
              local_208 = aVar18;
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(undefined4 *)((longlong)aVar18 + 0x18) =
                   *(undefined4 *)
                    ((this->OrderedCompileTasks).AllocatorInstance.Data + local_200 + 0x50);
              aVar17 = (atomic<__int64>)::operator_new(0xa0);
              aVar16 = aVar33;
              if (aVar17 != (atomic<__int64>)0x0) {
                FArchiveState::FArchiveState((FArchiveState *)aVar17);
                *(undefined ***)aVar17 = &___7FShaderPipelineCacheArchive__6B_;
                *(undefined8 *)((longlong)aVar17 + 0x90) = 0;
                *(undefined8 *)((longlong)aVar17 + 0x98) = 0;
                aVar16 = aVar17;
              }
              *(atomic<__int64> *)((longlong)aVar18 + 0x10) = aVar16;
              TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::AddTail
                        (&local_d8,(FPipelineCacheFileFormatPSORead **)&local_208);
              TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::AddTail
                        (&this->FetchTasks,(FPipelineCacheFileFormatPSORead **)&local_208);
              uVar30 = uVar31;
              if ((int)uVar38 < (this->OrderedCompileTasks).ArrayNum) {
                uVar30 = ~uVar38 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                        (&this->OrderedCompileTasks,uVar38);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,8,&(this->OrderedCompileTasks).AllocatorInstance,
                         (this->OrderedCompileTasks).ArrayNum,&(this->OrderedCompileTasks).ArrayMax)
              ;
              LOCK();
              TotalActiveTasks = (atomic<__int64>)((longlong)TotalActiveTasks + 1);
              UNLOCK();
              LOCK();
              TotalWaitingTasks = (atomic<__int64>)((longlong)TotalWaitingTasks + -1);
              UNLOCK();
              local_214 = local_214 + -1;
            }
            lVar28 = local_200 + -0x58;
            uVar38 = uVar38 - 1;
            local_200 = lVar28;
          } while (-1 < (int)uVar38);
        }
        FPipelineFileCacheManager::FetchPSODescriptors(&this->PSOCacheKey,&local_d8);
        TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::
        ~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>(&local_d8);
      }
      if ((FShaderPipelineCache::BatchSize < (uint)(this->FetchTasks).ListSize) &&
         (2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      PreparePipelineBatch(this,&this->FetchTasks);
    }
  }
  pTVar10 = CVarPSOFileCacheGameFileMaskEnabled.Ref;
  bVar13 = IsInParallelGameThread();
  if (!bVar13) {
    bVar13 = IsInGameThread();
    aVar18 = (atomic<__int64>)0x4;
    if (!bVar13) goto LAB_145eb8dc0;
  }
  aVar18 = aVar33;
LAB_145eb8dc0:
  if ((*(int *)((longlong)pTVar10->ShadowedValue + (longlong)aVar18) != 0) &&
     ((longlong)TotalActiveTasks + (longlong)TotalWaitingTasks == 0)) {
    local_1a8 = FPipelineFileCacheManager::GameUsageMask;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(&this->CompletedMasks,(ulong64 *)local_1dc,(bool *)&local_1a8)
    ;
    if (3 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  aVar18 = TotalActiveTasks;
  if ((longlong)TotalActiveTasks < 0) {
    aVar18 = aVar33;
  }
  aVar16 = TotalWaitingTasks;
  if ((longlong)TotalWaitingTasks < 0) {
    aVar16 = aVar33;
  }
  FVar19 = StatPtr_STAT_ShaderPipelineTaskCount;
  if (StatPtr_STAT_ShaderPipelineTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineTaskCount>)0x0) {
    pFVar14 = ::FName::FName(&local_88,"STAT_ShaderPipelineTaskCount");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineTaskCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineTaskCount,*pFVar14,
                        L"Outstanding Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                        L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar19;
  if (((FVar27 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_178.NameAndInfo.Number = FVar27.Number & 0xffff8fff | 0x8000;
    local_1a0 = FVar27;
    local_178.StatData.Pad = (uchar  [8])((longlong)aVar16 + (longlong)aVar18);
    local_178.NameAndInfo.Index.Value = FVar27.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_178);
    FStatsTrace::Set(&local_1a0,(longlong)aVar16 + (longlong)aVar18);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar22 = StatPtr_STAT_ShaderPipelineWaitingTaskCount;
  if (StatPtr_STAT_ShaderPipelineWaitingTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineWaitingTaskCount>)0x0) {
    pFVar14 = ::FName::FName(&local_80,"STAT_ShaderPipelineWaitingTaskCount");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineWaitingTaskCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineWaitingTaskCount,
                        *pFVar14,L"Waiting Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                        L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar22;
  if (((FVar27 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_168.NameAndInfo.Number = FVar27.Number & 0xffff8fff | 0x8000;
    local_198 = FVar27;
    local_168.StatData.Pad = (uchar  [8])aVar16;
    local_168.NameAndInfo.Index.Value = FVar27.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_168);
    FStatsTrace::Set(&local_198,(long64)aVar16);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar23 = StatPtr_STAT_ShaderPipelineActiveTaskCount;
  if (StatPtr_STAT_ShaderPipelineActiveTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineActiveTaskCount>)0x0) {
    pFVar14 = ::FName::FName(&local_78,"STAT_ShaderPipelineActiveTaskCount");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineActiveTaskCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineActiveTaskCount,
                        *pFVar14,L"Active Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                        L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar23;
  if (((FVar27 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_158.NameAndInfo.Number = FVar27.Number & 0xffff8fff | 0x8000;
    local_190 = FVar27;
    local_158.StatData.Pad = (uchar  [8])aVar18;
    local_158.NameAndInfo.Index.Value = FVar27.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_158);
    FStatsTrace::Set(&local_190,(long64)aVar18);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  iVar26 = (this->CompileTasks).ArrayMax;
  iVar3 = (this->ReadTasks).ArrayMax;
  iVar4 = (this->OrderedCompileTasks).ArrayMax;
  pTVar24 = UE::ShaderPipeline::FShutdownContainer::Get();
  uVar31 = (FShaderPipelineCache::ShaderPipelineCache->CompiledHashes).HashSize;
  if (1 < uVar31) {
    aVar33 = (atomic<__int64>)((longlong)(int)uVar31 << 2);
  }
  auVar34 = (uchar  [8])
            ((longlong)aVar33 +
             (ulonglong)
             ((*(int *)&(FShaderPipelineCache::ShaderPipelineCache->CompiledHashes).Elements.
                        field_0x2c + 0x1fU >> 5) << 2) +
             (longlong)
             *(int *)&(FShaderPipelineCache::ShaderPipelineCache->CompiledHashes).Elements.field_0xc
             * 0xc + (longlong)(pTVar24->Ptr->ShutdownReadCompileTasks).ArrayMax * 0x2d8 +
             (longlong)iVar4 * 0x58 + (longlong)iVar3 * 0x2d8 + (longlong)iVar26 * 0x2d8);
  if (0 < (longlong)aVar16 + (longlong)aVar18) {
    iVar26 = (this->CompileTasks).ArrayNum;
    pTVar24 = UE::ShaderPipeline::FShutdownContainer::Get();
    iVar3 = (pTVar24->Ptr->ShutdownReadCompileTasks).ArrayNum;
    iVar4 = (this->ReadTasks).ArrayNum;
    pTVar24 = UE::ShaderPipeline::FShutdownContainer::Get();
    auVar34 = (uchar  [8])
              ((longlong)((pTVar24->Ptr->ShutdownFetchTasks).ListSize + (this->FetchTasks).ListSize)
               * 0x40 + (longlong)(iVar3 + iVar4 + iVar26) * 0xa0 + (longlong)auVar34);
    for (pTVar5 = (this->FetchTasks).HeadNode; pTVar5 != (TDoubleLinkedListNode *)0x0;
        pTVar5 = pTVar5->NextNode) {
      auVar34 = (uchar  [8])((longlong)auVar34 + (longlong)(pTVar5->Value->Data).ArrayNum);
    }
    pTVar24 = UE::ShaderPipeline::FShutdownContainer::Get();
    for (pTVar5 = (pTVar24->Ptr->ShutdownFetchTasks).HeadNode;
        pTVar5 != (TDoubleLinkedListNode *)0x0; pTVar5 = pTVar5->NextNode) {
      auVar34 = (uchar  [8])((longlong)auVar34 + (longlong)(pTVar5->Value->Data).ArrayNum);
    }
  }
  FVar25 = StatPtr_STAT_PreCompileMemory;
  if (StatPtr_STAT_PreCompileMemory == (FThreadSafeStaticStat<FStat_STAT_PreCompileMemory>)0x0) {
    pFVar14 = ::FName::FName(local_70,"STAT_PreCompileMemory");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_PreCompileMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileMemory,*pFVar14,
                        L"Pre-Compile Memory","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                        L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar27 = *(FName *)FVar25;
  if (((FVar27 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_148.NameAndInfo.Number = FVar27.Number & 0xffff8fff | 0x8000;
    local_188 = FVar27;
    local_148.StatData.Pad = auVar34;
    local_148.NameAndInfo.Index.Value = FVar27.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_148);
    FStatsTrace::Set(&local_188,(long64)auVar34);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  return;
}

