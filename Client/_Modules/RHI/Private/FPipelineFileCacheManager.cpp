// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 38

// operator() @ 145c4bef0

void __thiscall
`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::__l8::<lambda_1>::operator()(void *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FPipelineFileCacheManager::PSOLoggedEvent,&local_50);
  uVar4 = FPipelineFileCacheManager::PSOLoggedEvent._16_4_;
  uVar8 = (ulonglong)(int)FPipelineFileCacheManager::PSOLoggedEvent._16_4_;
  plVar11 = (longlong *)(uVar8 * 0x10 + FPipelineFileCacheManager::PSOLoggedEvent._8_8_);
  plVar10 = (longlong *)FPipelineFileCacheManager::PSOLoggedEvent._8_8_;
  while( true ) {
    if ((int)uVar8 != uVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      uVar8 = (ulonglong)(uint)FPipelineFileCacheManager::PSOLoggedEvent._16_4_;
    }
    if (plVar10 == plVar11) break;
    if (((int)plVar10[1] != 0) && (*plVar10 != 0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      iVar1 = *(int *)((longlong)this + 8);
      lVar13 = *(longlong *)this;
      lVar14 = (longlong)iVar1 * 0x2c8 + lVar13;
      while( true ) {
        if (*(int *)((longlong)this + 8) != iVar1) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FPipelineCacheFileFormatPSO_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (lVar13 == lVar14) break;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FPipelineFileCacheManager::PSOLoggedEvent,(FWriteAccessScope *)&local_68);
        bVar3 = false;
        FPipelineFileCacheManager::PSOLoggedEvent._28_4_ =
             FPipelineFileCacheManager::PSOLoggedEvent._28_4_ + 1;
        uVar9 = FPipelineFileCacheManager::PSOLoggedEvent._16_4_ - 1;
        if (-1 < (int)uVar9) {
          lVar12 = (longlong)(int)uVar9 << 4;
          bVar3 = false;
          do {
            uVar7 = 0;
            if ((int)uVar9 < (int)FPipelineFileCacheManager::PSOLoggedEvent._16_4_) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (((*(int *)(lVar12 + 8 + FPipelineFileCacheManager::PSOLoggedEvent._8_8_) == 0) ||
                (*(longlong **)(lVar12 + FPipelineFileCacheManager::PSOLoggedEvent._8_8_) ==
                 (longlong *)0x0)) ||
               (cVar6 = (**(code **)(**(longlong **)
                                       (lVar12 + FPipelineFileCacheManager::PSOLoggedEvent._8_8_) +
                                    0x68))(), cVar6 == '\0')) {
              bVar3 = true;
            }
            lVar12 = lVar12 + -0x10;
            uVar9 = uVar9 - 1;
          } while (-1 < (int)uVar9);
        }
        FPipelineFileCacheManager::PSOLoggedEvent._28_4_ =
             FPipelineFileCacheManager::PSOLoggedEvent._28_4_ + -1;
        if (bVar3) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FPipelineFileCacheManager::PSOLoggedEvent,false);
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
        lVar13 = lVar13 + 0x2c8;
      }
      return;
    }
    plVar10 = plVar10 + 2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  return;
}

// BroadcastNewPSOsDelegate @ 145c50bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl FPipelineFileCacheManager::BroadcastNewPSOsDelegate(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> aVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  FTSTicker *this;
  undefined ***pppuVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  char *pcVar17;
  undefined1 auStackY_918 [32];
  ForAnyElementType local_8e8;
  undefined8 local_8e0;
  TWeakPtr<FTSTicker::FElement,1> local_8d8;
  FPipelineCacheFileFormatPSO local_8c8;
  char local_600 [8];
  FPipelineCacheFileFormatPSO local_5f8;
  char local_330 [8];
  code *local_328 [2];
  undefined **local_318;
  FPipelineCacheFileFormatPSO *local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined ***local_300;
  FPipelineCacheFileFormatPSO local_2f8;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  local_8e8.Data = (FScriptContainerElement *)0x0;
  local_8e0 = 0;
  local_2f8.ComputeDesc.ComputeShader.Hash[0] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[1] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[2] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[3] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[4] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[5] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[6] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[7] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[8] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[9] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[10] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0xb] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0xc] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0xd] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0xe] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0xf] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0x10] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0x11] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0x12] = '\0';
  local_2f8.ComputeDesc.ComputeShader.Hash[0x13] = '\0';
  FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor(&local_2f8.GraphicsDesc);
  FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::FPipelineFileCacheRayTracingDesc
            (&local_2f8.RayTracingDesc);
  lVar16 = 8;
  while (aVar5 = (NewPSOsToReport.Tail)->Next,
        aVar5 != (atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>)0x0) {
    FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO
              (&local_8c8,(FPipelineCacheFileFormatPSO *)((longlong)aVar5 + 8));
    local_600[0] = '\x01';
    lVar14 = (longlong)aVar5 + 0x2d0;
    lVar13 = 8;
    do {
      lVar6 = lVar14 + -0x18;
      lVar14 = lVar14 + -0x18;
      lVar13 = lVar13 + -1;
      if (*(void **)lVar6 != (void *)0x0) {
        FMemory::Free(*(void **)lVar6);
      }
    } while (lVar13 != 0);
    FMemory::Free(NewPSOsToReport.Tail);
    local_330[0] = local_600[0];
    NewPSOsToReport.Tail = (FNode *)aVar5;
    if (local_600[0] == '\0') break;
    FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO(&local_5f8,&local_8c8);
    if (local_600[0] != '\0') {
      pcVar17 = local_600;
      lVar14 = 8;
      do {
        pcVar1 = pcVar17 + -0x18;
        pcVar17 = pcVar17 + -0x18;
        lVar14 = lVar14 + -1;
        if (*(void **)pcVar1 != (void *)0x0) {
          FMemory::Free(*(void **)pcVar1);
        }
      } while (lVar14 != 0);
    }
    if (local_330[0] == '\0') break;
    FPipelineCacheFileFormatPSO::operator=(&local_2f8,&local_5f8);
    if (local_330[0] != '\0') {
      pcVar17 = local_330;
      lVar14 = 8;
      do {
        pcVar1 = pcVar17 + -0x18;
        pcVar17 = pcVar17 + -0x18;
        lVar14 = lVar14 + -1;
        if (*(void **)pcVar1 != (void *)0x0) {
          FMemory::Free(*(void **)pcVar1);
        }
      } while (lVar14 != 0);
    }
    iVar11 = (int)local_8e0;
    if ((int)local_8e0 == local_8e0._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x2c8,8,&local_8e8,(int *)((longlong)&local_8e0 + 4));
    }
    local_8e0 = CONCAT44(local_8e0._4_4_,iVar11 + 1);
    FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO
              ((FPipelineCacheFileFormatPSO *)(local_8e8.Data + (longlong)iVar11 * 0x2c8),&local_2f8
              );
  }
  puVar15 = local_30;
  do {
    puVar2 = (undefined8 *)(puVar15 + -0x18);
    puVar15 = puVar15 + -0x18;
    lVar16 = lVar16 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar16 != 0);
  if ((int)local_8e0 != 0) {
    bVar10 = ReportNewPSOs();
    FVar7.Data = local_8e8.Data;
    if (bVar10) {
      uVar8 = (int)local_8e0;
      uVar9 = local_8e0._4_4_;
      local_8e8.Data = (FScriptContainerElement *)0x0;
      local_8e0 = 0;
      this = FTSTicker::GetCoreTicker();
      local_300 = (undefined ***)0x0;
      local_318 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`ExecuteOnGameThread<`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                   ::_vftable_;
      local_310 = (FPipelineCacheFileFormatPSO *)FVar7.Data;
      local_328[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`ExecuteOnGameThread<`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                     ::Call;
      local_308 = uVar8;
      local_304 = uVar9;
      FTSTicker::AddTicker
                (this,&local_8d8,L"OnPipelineStateLoggedBroadcastGT",0.0,
                 (TUniqueFunction<bool___cdecl(float)> *)local_328);
      if (local_8d8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar3 = &(local_8d8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)((local_8d8.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
        }
      }
      if (local_328[0] != (code *)0x0) {
        pppuVar12 = &local_318;
        if (local_300 != (undefined ***)0x0) {
          pppuVar12 = local_300;
        }
        (*(code *)(*pppuVar12)[2])();
      }
      DestructItems<FPipelineCacheFileFormatPSO,int>((FPipelineCacheFileFormatPSO *)0x0,0);
      DestructItems<FPipelineCacheFileFormatPSO,int>((FPipelineCacheFileFormatPSO *)0x0,0);
    }
  }
  DestructItems<FPipelineCacheFileFormatPSO,int>
            ((FPipelineCacheFileFormatPSO *)local_8e8.Data,(int)local_8e0);
  if ((FPipelineCacheFileFormatPSO *)local_8e8.Data != (FPipelineCacheFileFormatPSO *)0x0) {
    FMemory::Free(local_8e8.Data);
  }
  return;
}

// CacheComputePSO @ 145c50ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::CacheComputePSO
          (uint param_1,FRHIComputeShader *param_2,bool param_3,FPipelineStateStats **param_4)

{
  undefined8 *puVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory> FVar8;
  FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount> FVar9;
  FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount> FVar10;
  atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> aVar11;
  FPSOUsageData *pFVar12;
  FPipelineStateStats *pFVar13;
  uint *puVar14;
  FPSOUsageData *pFVar15;
  FPSOUsageData *pFVar16;
  ForElementType<FSetElementId> FVar17;
  undefined1 *puVar18;
  longlong lVar19;
  undefined1 auStackY_13f8 [32];
  FPSOUsageData local_1398;
  FPSOUsageData local_1388;
  uint local_1378 [2];
  undefined1 local_1370 [8];
  FString local_1368;
  FRWScopeLock local_1358;
  TPairInitializer<unsigned_int_const_&,FPSOUsageData_const_&> local_1348;
  FPSOUsageData *local_1338;
  FName local_1330;
  FName local_1328;
  FName local_1320;
  FPipelineCacheFileFormatPSO local_1318;
  undefined1 local_1050 [8];
  uchar local_1048 [4096];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_13f8;
  local_1398.UsageMask._0_4_ = param_1;
  bVar5 = IsPipelineFileCacheEnabled();
  if (!bVar5) {
    return;
  }
  bVar5 = LogPSOtoFileCache();
  if ((!bVar5) && (bVar5 = ReportNewPSOs(), !bVar5)) {
    return;
  }
  pFVar12 = (FPSOUsageData *)0x0;
  local_1358.LockObject = &FileCacheLock;
  local_1358.LockType = SLT_ReadOnly;
  AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
  if (RunTimeToPSOUsage._8_4_ != RunTimeToPSOUsage._52_4_) {
    lVar19 = 0x154be5be8;
    if (RunTimeToPSOUsage._64_8_ != 0) {
      lVar19 = RunTimeToPSOUsage._64_8_;
    }
    uVar6 = *(uint *)(lVar19 + (ulonglong)
                               (RunTimeToPSOUsage._72_4_ - 1 & (uint)local_1398.UsageMask) * 4);
    while (uVar6 != 0xffffffff) {
      puVar14 = (uint *)((longlong)(int)uVar6 * 0x20 + RunTimeToPSOUsage._0_8_);
      if (*puVar14 == (uint)local_1398.UsageMask) {
        pFVar15 = (FPSOUsageData *)(puVar14 + 2);
        if (puVar14 == (uint *)0x0) {
          pFVar15 = pFVar12;
        }
        if ((pFVar15 != (FPSOUsageData *)0x0) &&
           ((pFVar15->UsageMask & GameUsageMask) == GameUsageMask)) goto LAB_145c51634;
        break;
      }
      uVar6 = puVar14[6];
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
  AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  local_1358.LockType = SLT_Write;
  pFVar15 = pFVar12;
  if (RunTimeToPSOUsage._8_4_ != RunTimeToPSOUsage._52_4_) {
    lVar19 = 0x154be5be8;
    if (RunTimeToPSOUsage._64_8_ != 0) {
      lVar19 = RunTimeToPSOUsage._64_8_;
    }
    uVar6 = *(uint *)(lVar19 + (ulonglong)
                               (RunTimeToPSOUsage._72_4_ - 1 & (uint)local_1398.UsageMask) * 4);
    while ((pFVar15 = pFVar12, uVar6 != 0xffffffff &&
           (pFVar15 = (FPSOUsageData *)((longlong)(int)uVar6 * 0x20 + RunTimeToPSOUsage._0_8_),
           (uint)pFVar15->UsageMask != (uint)local_1398.UsageMask))) {
      uVar6 = pFVar15[1].PSOHash;
    }
  }
  pFVar16 = (FPSOUsageData *)&pFVar15->PSOHash;
  if (pFVar15 == (FPSOUsageData *)0x0) {
    pFVar16 = pFVar12;
  }
  if (pFVar16 != (FPSOUsageData *)0x0) {
    if ((pFVar16->UsageMask & GameUsageMask) != GameUsageMask) {
      pFVar16->UsageMask = pFVar16->UsageMask | GameUsageMask;
      RegisterPSOUsageDataUpdateForNextSave(pFVar16);
    }
    goto LAB_145c51634;
  }
  local_1318.ComputeDesc.ComputeShader.Hash[0] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[1] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[2] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[3] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[4] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[5] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[6] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[7] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[8] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[9] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[10] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0xb] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0xc] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0xd] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0xe] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0xf] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0x10] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0x11] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0x12] = '\0';
  local_1318.ComputeDesc.ComputeShader.Hash[0x13] = '\0';
  FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor(&local_1318.GraphicsDesc);
  FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::FPipelineFileCacheRayTracingDesc
            (&local_1318.RayTracingDesc);
  if ((param_2 == (FRHIComputeShader *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Init",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x587,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1318.ComputeDesc.ComputeShader.Hash._0_8_ = param_2->_padding_;
  local_1318.ComputeDesc.ComputeShader.Hash._8_8_ = param_2->_padding_;
  local_1318.ComputeDesc.ComputeShader.Hash._16_4_ = *(undefined4 *)&param_2->_padding_;
  local_1318.Type = Compute;
  bVar5 = FPipelineCacheFileFormatPSO::Verify(&local_1318);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bOK",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0xe43,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = ::GetTypeHash(&local_1318);
  local_1388.UsageMask = 0;
  local_1388.EngineFlags = 0;
  local_1388.PSOHash = uVar6;
  local_1378[0] = uVar6;
  bVar5 = IsPSOEntryCached(&local_1318,&local_1388);
  lVar19 = 8;
  if (!bVar5) {
    if (NewPSOHashes.Elements._8_4_ != NewPSOHashes.Elements._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)0x154be5d28;
      if (NewPSOHashes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar17 = NewPSOHashes.Hash.SecondaryData;
      }
      for (iVar2 = *(int *)((longlong)FVar17 + (ulonglong)(NewPSOHashes.HashSize - 1U & uVar6) * 4);
          iVar2 != -1; iVar2 = *(int *)(NewPSOHashes.Elements._0_8_ + 4 + (longlong)iVar2 * 0xc)) {
        if (*(uint *)(NewPSOHashes.Elements._0_8_ + (longlong)iVar2 * 0xc) == uVar6) {
          bVar5 = iVar2 == -1;
          if (bVar5) goto LAB_145c511de;
          goto LAB_145c51337;
        }
      }
    }
    bVar5 = true;
LAB_145c511de:
    if (LogNewPSOsToConsoleAndCSV == false) {
      if (param_3) goto LAB_145c5132c;
    }
    else if (param_3) {
      if (5 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
LAB_145c5132c:
      bVar5 = GPSOExcludePrecachePSOsInFileCache == 0;
    }
    else {
      FCsvProfiler::RecordEventfInternal(_GCsvCategory_PSO.Index,L"Encountered new compute PSO");
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint3488 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint3488,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                     ,0xda0,L"PSO/Encountered new compute PSO");
          __BookmarkPoint3488 = true;
        }
        uVar6 = CallstackTrace_GetCurrentId();
        local_1048[0] = '\0';
        FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint3488,uVar6,1,local_1048);
      }
      if (3 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((0 < GPSOFileCachePrintNewPSODescriptors) && (3 < (byte)LogRHI._0_1_)) {
        local_1368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1368.Data.ArrayNum = 0;
        local_1368.Data.ArrayMax = 0;
        BytesToHex((uchar *)&local_1318.ComputeDesc,0x14,&local_1368);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_1368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1368.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_145c51337:
    if (bVar5) {
      bVar5 = LogPSOtoFileCache();
      if (bVar5) {
        TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
        ::Emplace<FPipelineCacheFileFormatPSO_const_&>
                  (&NewPSOs,(FPipelineCacheFileFormatPSO *)local_1370,(bool *)&local_1318);
        FVar8 = StatPtr_STAT_NewCachedPSOMemory;
        if (StatPtr_STAT_NewCachedPSOMemory ==
            (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)0x0) {
          pFVar7 = ::FName::FName(&local_1330,"STAT_NewCachedPSOMemory");
          FVar8 = (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewCachedPSOMemory,*pFVar7,
                             L"New Cached PSO","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                             L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar3 = *(FName *)FVar8;
        local_1370._0_4_ = FVar3.ComparisonIndex.Value;
        local_1370._4_4_ = FVar3.Number;
        FThreadStats::AddMessage<__int64>(FVar3,Add,0x2d0,false);
      }
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>(&NewPSOHashes,&local_1398.PSOHash,(bool *)local_1378);
      NumNewPSOs = NumNewPSOs + 1;
      FVar9 = StatPtr_STAT_NewComputePipelineStateCount;
      if (StatPtr_STAT_NewComputePipelineStateCount ==
          (FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount>)0x0) {
        pFVar7 = ::FName::FName(&local_1328,"STAT_NewComputePipelineStateCount");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewComputePipelineStateCount,
                           *pFVar7,L"New Compute Pipeline State Count",
                           "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                           true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar9;
      local_1398.PSOHash = (uint)FVar3.ComparisonIndex.Value;
      local_1398._12_4_ = FVar3.Number;
      FThreadStats::AddMessage<__int64>(FVar3,Add,1,false);
      FVar10 = StatPtr_STAT_TotalComputePipelineStateCount;
      if (StatPtr_STAT_TotalComputePipelineStateCount ==
          (FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount>)0x0) {
        pFVar7 = ::FName::FName(&local_1320,"STAT_TotalComputePipelineStateCount");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_TotalComputePipelineStateCount,*pFVar7,
                            L"Total Compute Pipeline State Count","STATGROUP_PipelineStateCache",
                            "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar10;
      local_1398.PSOHash = (uint)FVar3.ComparisonIndex.Value;
      local_1398._12_4_ = FVar3.Number;
      FThreadStats::AddMessage<__int64>(FVar3,Add,1,false);
      bVar5 = ReportNewPSOs();
      if (bVar5) {
        aVar11 = (atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>)
                 FMemory::Malloc(0x2d0,8);
        *(undefined8 *)aVar11 = 0;
        FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO
                  ((FPipelineCacheFileFormatPSO *)((longlong)aVar11 + 8),&local_1318);
        LOCK();
        UNLOCK();
        *(atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> *)NewPSOsToReport.Head =
             aVar11;
        NewPSOsToReport.Head = aVar11;
      }
    }
  }
  if ((GameUsageMask & local_1388.UsageMask) != GameUsageMask) {
    local_1388.UsageMask = local_1388.UsageMask | GameUsageMask;
    pFVar12 = TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
              ::FindOrAddImpl<unsigned_int_const_&>
                        ((TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
                          *)&NewPSOUsage,local_1388.PSOHash,&local_1388.PSOHash);
    pFVar12->PSOHash = local_1388.PSOHash;
    pFVar12->UsageMask = pFVar12->UsageMask | local_1388.UsageMask;
    pFVar12->EngineFlags = pFVar12->EngineFlags | local_1388.EngineFlags;
  }
  local_1348.Value = &local_1398;
  local_1338 = &local_1388;
  TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FPSOUsageData_const_&>_>
            ((TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
              *)&RunTimeToPSOUsage,&local_1348,(bool *)&local_1348.Value);
  puVar18 = local_1050;
  do {
    puVar1 = (undefined8 *)(puVar18 + -0x18);
    puVar18 = puVar18 + -0x18;
    lVar19 = lVar19 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar19 != 0);
LAB_145c51634:
  if (param_4 != (FPipelineStateStats **)0x0) {
    pFVar13 = RegisterPSOStatsInternal(&local_1358,(uint)local_1398.UsageMask);
    *param_4 = pFVar13;
  }
  if (local_1358.LockType == SLT_ReadOnly) {
    ReleaseSRWLockShared((PSRWLOCK)local_1358.LockObject);
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)local_1358.LockObject);
  }
  return;
}

// CacheGraphicsPSO @ 145c516a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::CacheGraphicsPSO
          (uint param_1,FGraphicsPipelineStateInitializer *param_2,bool param_3,
          FPipelineStateStats **param_4)

{
  undefined8 *puVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory> FVar10;
  FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount> FVar11;
  FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount> FVar12;
  atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> aVar13;
  FPSOUsageData *pFVar14;
  FPipelineStateStats *pFVar15;
  uint *puVar16;
  FPSOUsageData *pFVar17;
  FPSOUsageData *pFVar18;
  ForElementType<FSetElementId> FVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStackY_1478 [32];
  uint local_1418 [2];
  uint local_1410 [2];
  uint local_1408;
  uint uStack_1404;
  FPSOUsageData local_1400;
  undefined1 local_13f0 [8];
  FRWScopeLock local_13e8;
  TPairInitializer<unsigned_int_const_&,FPSOUsageData_const_&> local_13d8;
  longlong *local_13c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_13c0;
  TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
  *pTStack_13a0;
  TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
  *local_1398;
  uchar local_1390 [8];
  uint *local_1388;
  FPSOUsageData *local_1380;
  FName local_1378;
  FName local_1370;
  FName local_1368;
  FString local_1360;
  TIterator local_1350;
  undefined1 local_1318 [12];
  TTypeCompatibleBytes<FVertexElement> TStack_130c;
  uchar local_1304 [4];
  GraphicsDescriptor local_1300;
  FPipelineFileCacheRayTracingDesc local_1140;
  undefined1 local_1050 [8];
  uchar local_1048 [4096];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1478;
  local_1418[0] = param_1;
  bVar5 = IsPipelineFileCacheEnabled();
  if (!bVar5) {
    return;
  }
  bVar5 = LogPSOtoFileCache();
  if ((!bVar5) && (bVar5 = ReportNewPSOs(), !bVar5)) {
    return;
  }
  pFVar14 = (FPSOUsageData *)0x0;
  local_13e8.LockObject = &FileCacheLock;
  local_13e8.LockType = SLT_ReadOnly;
  AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
  if (RunTimeToPSOUsage._8_4_ != RunTimeToPSOUsage._52_4_) {
    lVar22 = 0x154be5be8;
    if (RunTimeToPSOUsage._64_8_ != 0) {
      lVar22 = RunTimeToPSOUsage._64_8_;
    }
    uVar6 = *(uint *)(lVar22 + (ulonglong)(RunTimeToPSOUsage._72_4_ - 1 & local_1418[0]) * 4);
    while (uVar6 != 0xffffffff) {
      puVar16 = (uint *)((longlong)(int)uVar6 * 0x20 + RunTimeToPSOUsage._0_8_);
      if (*puVar16 == local_1418[0]) {
        pFVar17 = (FPSOUsageData *)(puVar16 + 2);
        if (puVar16 == (uint *)0x0) {
          pFVar17 = pFVar14;
        }
        if ((pFVar17 != (FPSOUsageData *)0x0) &&
           ((pFVar17->UsageMask & GameUsageMask) == GameUsageMask)) goto LAB_145c51f84;
        break;
      }
      uVar6 = puVar16[6];
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
  AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  local_13e8.LockType = SLT_Write;
  pFVar17 = pFVar14;
  if (RunTimeToPSOUsage._8_4_ != RunTimeToPSOUsage._52_4_) {
    lVar22 = 0x154be5be8;
    if (RunTimeToPSOUsage._64_8_ != 0) {
      lVar22 = RunTimeToPSOUsage._64_8_;
    }
    uVar6 = *(uint *)(lVar22 + (ulonglong)(RunTimeToPSOUsage._72_4_ - 1 & local_1418[0]) * 4);
    while ((pFVar17 = pFVar14, uVar6 != 0xffffffff &&
           (pFVar17 = (FPSOUsageData *)((longlong)(int)uVar6 * 0x20 + RunTimeToPSOUsage._0_8_),
           (uint)pFVar17->UsageMask != local_1418[0]))) {
      uVar6 = pFVar17[1].PSOHash;
    }
  }
  pFVar18 = (FPSOUsageData *)&pFVar17->PSOHash;
  if (pFVar17 == (FPSOUsageData *)0x0) {
    pFVar18 = pFVar14;
  }
  if (pFVar18 != (FPSOUsageData *)0x0) {
    if ((pFVar18->UsageMask & GameUsageMask) != GameUsageMask) {
      pFVar18->UsageMask = pFVar18->UsageMask | GameUsageMask;
      RegisterPSOUsageDataUpdateForNextSave(pFVar18);
    }
    goto LAB_145c51f84;
  }
  local_1318[4] = '\0';
  local_1318[5] = '\0';
  local_1318[6] = '\0';
  local_1318[7] = '\0';
  local_1318[8] = '\0';
  local_1318[9] = '\0';
  local_1318[10] = '\0';
  local_1318[0xb] = '\0';
  TStack_130c.Pad[0] = '\0';
  TStack_130c.Pad[1] = '\0';
  TStack_130c.Pad[2] = '\0';
  TStack_130c.Pad[3] = '\0';
  TStack_130c.Pad[4] = '\0';
  TStack_130c.Pad[5] = '\0';
  TStack_130c.Pad[6] = '\0';
  TStack_130c.Pad[7] = '\0';
  local_1304[0] = '\0';
  local_1304[1] = '\0';
  local_1304[2] = '\0';
  local_1304[3] = '\0';
  FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor(&local_1300);
  FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::FPipelineFileCacheRayTracingDesc
            (&local_1140);
  bVar5 = FPipelineCacheFileFormatPSO::Init((FPipelineCacheFileFormatPSO *)local_1318,param_2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bOK",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0xde7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = ::GetTypeHash((FPipelineCacheFileFormatPSO *)local_1318);
  local_1400.UsageMask = 0;
  local_1400.EngineFlags = 0;
  local_1410[0] = uVar6;
  local_1400.PSOHash = uVar6;
  bVar5 = IsPSOEntryCached((FPipelineCacheFileFormatPSO *)local_1318,&local_1400);
  lVar22 = 8;
  if (!bVar5) {
    if (NewPSOHashes.Elements._8_4_ != NewPSOHashes.Elements._52_4_) {
      FVar19 = (ForElementType<FSetElementId>)0x154be5d28;
      if (NewPSOHashes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar19 = NewPSOHashes.Hash.SecondaryData;
      }
      for (iVar7 = *(int *)((longlong)FVar19 + (ulonglong)(NewPSOHashes.HashSize - 1U & uVar6) * 4);
          iVar7 != -1; iVar7 = *(int *)(NewPSOHashes.Elements._0_8_ + 4 + (longlong)iVar7 * 0xc)) {
        if (*(uint *)(NewPSOHashes.Elements._0_8_ + (longlong)iVar7 * 0xc) == uVar6)
        goto LAB_145c5194c;
      }
    }
    iVar7 = -1;
LAB_145c5194c:
    if (((param_2->field25_0xd2).Flags & 0x1000) == 0) {
      if (iVar7 == -1) {
        uVar21 = (ulonglong)GMaxRHIShaderPlatform;
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar21].bContainsValidPlatformInfo == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,0xc1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar21].Language == LANGUAGE_OpenGL) {
          bVar5 = IsPSOEntryCached((FPipelineCacheFileFormatPSO *)local_1318,(FPSOUsageData *)0x0);
          if ((bVar5) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsPSOEntryCached(NewEntry)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                 ,0xbe0,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar5 = false;
          TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    (&local_1350,
                     (TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                      *)&FileCacheMap);
          local_1398 = (TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                        *)&FileCacheMap;
          local_1390[0] = '\0';
          local_1390[1] = '\0';
          local_13c8 = (longlong *)local_1350._padding_;
          TStack_13c0._padding_ = local_1350._padding_;
          TStack_13c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1350._padding_;
          TStack_13c0.UnvisitedBitMask = (undefined4)local_1350._padding_;
          TStack_13c0.CurrentBitIndex = local_1350._padding_._4_4_;
          TStack_13c0._24_8_ = local_1350._padding_;
          pTStack_13a0 = local_1350.Set;
          do {
            if ((TStack_13c0.Array)->NumBits <= TStack_13c0.CurrentBitIndex) break;
            bVar5 = FPipelineCacheFile::IsBSSEquivalentPSOEntryCachedInternal
                              (*(FPipelineCacheFile **)
                                ((longlong)TStack_13c0.CurrentBitIndex * 0x20 + 0x10 + *local_13c8),
                               (FPipelineCacheFileFormatPSO *)local_1318);
            TStack_13c0.UnvisitedBitMask =
                 TStack_13c0.UnvisitedBitMask & ~TStack_13c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_13c0);
          } while (!bVar5);
          if ((local_1390[0] != '\0') && (local_1390[1] != '\0')) {
            uVar6 = *(int *)&(local_1398->Elements).field_0x8 -
                    *(int *)&(local_1398->Elements).field_0x34;
            if (uVar6 < 4) {
              iVar7 = 1;
            }
            else {
              uVar21 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              iVar7 = 1 << ((byte)lVar3 & 0x1f);
            }
            if (((0 < (int)uVar6) && (local_1398->HashSize < iVar7)) ||
               (iVar7 < local_1398->HashSize)) {
              local_1398->HashSize = iVar7;
              TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
              ::Rehash(local_1398);
            }
          }
          if (bVar5 != false) goto LAB_145c51eb6;
        }
        if (LogNewPSOsToConsoleAndCSV == false) {
          if (param_3) goto LAB_145c51c7f;
        }
        else if (param_3) {
          if (5 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
LAB_145c51c7f:
          if (GPSOExcludePrecachePSOsInFileCache != 0) goto LAB_145c51eb6;
        }
        else {
          FCsvProfiler::RecordEventfInternal
                    (_GCsvCategory_PSO.Index,L"Encountered new graphics PSO");
          if (-1 < BookmarkChannel->Enabled) {
            if (__BookmarkPoint3460 == false) {
              FMiscTrace::OutputBookmarkSpec
                        (&__BookmarkPoint3460,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0xd84,L"PSO/Encountered new graphics PSO");
              __BookmarkPoint3460 = true;
            }
            uVar6 = CallstackTrace_GetCurrentId();
            local_1048[0] = '\0';
            FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint3460,uVar6,1,local_1048);
          }
          if (3 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          if (bOnce == false) {
            bOnce = true;
            pwVar8 = FCommandLine::Get();
            bCmdLineOption = FParse::Param(pwVar8,L"logpsodetails");
          }
          iVar7 = GPSOFileCachePrintNewPSODescriptors;
          if (bCmdLineOption != false) {
            iVar7 = 2;
          }
          if (0 < iVar7) {
            if (3 < (byte)LogRHI._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
            }
            if ((1 < iVar7) && (3 < (byte)LogRHI._0_1_)) {
              FPipelineCacheFileFormatPSO::ToStringReadable
                        ((FPipelineCacheFileFormatPSO *)local_1318,&local_1360);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
              if (local_1360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1360.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        bVar5 = LogPSOtoFileCache();
        if (bVar5) {
          TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
          ::Emplace<FPipelineCacheFileFormatPSO_const_&>
                    (&NewPSOs,(FPipelineCacheFileFormatPSO *)local_13f0,(bool *)local_1318);
          FVar10 = StatPtr_STAT_NewCachedPSOMemory;
          if (StatPtr_STAT_NewCachedPSOMemory ==
              (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)0x0) {
            pFVar9 = ::FName::FName(&local_1378,"STAT_NewCachedPSOMemory");
            FVar10 = (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewCachedPSOMemory,
                                *pFVar9,L"New Cached PSO","STATGROUP_PipelineStateCache",
                                "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,
                                false,MCR_Physical);
          }
          FVar2 = *(FName *)FVar10;
          local_13f0._0_4_ = FVar2.ComparisonIndex.Value;
          local_13f0._4_4_ = FVar2.Number;
          FThreadStats::AddMessage<__int64>(FVar2,Add,0x2d0,false);
        }
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int_const_&>(&NewPSOHashes,&local_1408,(bool *)local_1410);
        NumNewPSOs = NumNewPSOs + 1;
        FVar11 = StatPtr_STAT_NewGraphicsPipelineStateCount;
        if (StatPtr_STAT_NewGraphicsPipelineStateCount ==
            (FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount>)0x0) {
          pFVar9 = ::FName::FName(&local_1370,"STAT_NewGraphicsPipelineStateCount");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_NewGraphicsPipelineStateCount,*pFVar9,
                              L"New Graphics Pipeline State Count","STATGROUP_PipelineStateCache",
                              "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar11;
        local_1408 = (uint)FVar2.ComparisonIndex.Value;
        uStack_1404 = FVar2.Number;
        FThreadStats::AddMessage<__int64>(FVar2,Add,1,false);
        FVar12 = StatPtr_STAT_TotalGraphicsPipelineStateCount;
        if (StatPtr_STAT_TotalGraphicsPipelineStateCount ==
            (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)0x0) {
          pFVar9 = ::FName::FName(&local_1368,"STAT_TotalGraphicsPipelineStateCount");
          FVar12 = (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_TotalGraphicsPipelineStateCount,*pFVar9,
                              L"Total Graphics Pipeline State Count","STATGROUP_PipelineStateCache",
                              "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar12;
        local_1408 = (uint)FVar2.ComparisonIndex.Value;
        uStack_1404 = FVar2.Number;
        FThreadStats::AddMessage<__int64>(FVar2,Add,1,false);
        bVar5 = ReportNewPSOs();
        if (bVar5) {
          aVar13 = (atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>)
                   FMemory::Malloc(0x2d0,8);
          *(undefined8 *)aVar13 = 0;
          FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO
                    ((FPipelineCacheFileFormatPSO *)((longlong)aVar13 + 8),
                     (FPipelineCacheFileFormatPSO *)local_1318);
          LOCK();
          UNLOCK();
          *(atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> *)NewPSOsToReport.Head
               = aVar13;
          NewPSOsToReport.Head = aVar13;
        }
      }
    }
    else if (2 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
LAB_145c51eb6:
  if ((GameUsageMask & local_1400.UsageMask) != GameUsageMask) {
    local_1400.UsageMask = local_1400.UsageMask | GameUsageMask;
    pFVar14 = TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
              ::FindOrAddImpl<unsigned_int_const_&>
                        ((TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
                          *)&NewPSOUsage,local_1400.PSOHash,&local_1400.PSOHash);
    pFVar14->PSOHash = local_1400.PSOHash;
    pFVar14->UsageMask = pFVar14->UsageMask | local_1400.UsageMask;
    pFVar14->EngineFlags = pFVar14->EngineFlags | local_1400.EngineFlags;
  }
  local_1388 = local_1418;
  local_1380 = &local_1400;
  TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FPSOUsageData_const_&>_>
            ((TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
              *)&RunTimeToPSOUsage,&local_13d8,(bool *)&local_1388);
  puVar20 = local_1050;
  do {
    puVar1 = (undefined8 *)(puVar20 + -0x18);
    puVar20 = puVar20 + -0x18;
    lVar22 = lVar22 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar22 != 0);
LAB_145c51f84:
  if (param_4 != (FPipelineStateStats **)0x0) {
    pFVar15 = RegisterPSOStatsInternal(&local_13e8,local_1418[0]);
    *param_4 = pFVar15;
  }
  if (local_13e8.LockType == SLT_ReadOnly) {
    ReleaseSRWLockShared((PSRWLOCK)local_13e8.LockObject);
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)local_13e8.LockObject);
  }
  return;
}

// CacheRayTracingPSO @ 145c51ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145c521d0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::CacheRayTracingPSO
          (FRayTracingPipelineStateInitializer *param_1,ERayTracingPipelineCacheFlags param_2)

{
  undefined8 *puVar1;
  FRHIRayTracingShader **ppFVar2;
  FName FVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount> FVar12;
  FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount> FVar13;
  atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> aVar14;
  FPSOUsageData *pFVar15;
  uint *puVar16;
  FThreadSafeStaticStat<FStat_STAT_PSOStatMemory> FVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  longlong lVar21;
  FNameEntryId FVar22;
  ulonglong *puVar23;
  undefined1 *puVar24;
  FPipelineCacheFileFormatPSO *pFVar25;
  int iVar26;
  FRHIRayTracingShader **ppFVar27;
  undefined1 auStackY_598 [32];
  uint local_534;
  uint *local_530;
  FName local_528;
  uint local_520 [2];
  FPSOUsageData local_518;
  uint local_508;
  uint uStack_504;
  uint local_500;
  uint uStack_4fc;
  uint local_4f8;
  uint uStack_4f4;
  uint local_4f0;
  uint uStack_4ec;
  FRayTracingPipelineStateInitializer *local_4e8;
  FRHIRayTracingShader ***local_4e0;
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [16];
  uint local_4c0;
  uint local_4bc;
  FStatMessage local_4b8;
  FStatMessage local_4a8;
  FStatMessage local_498;
  uint *local_488;
  FPSOUsageData *local_480;
  uint *local_478;
  uint **local_470;
  FName local_468;
  FName local_460;
  FName local_458;
  FName local_450;
  FString local_448;
  FRHIRayTracingShader **local_438;
  TTypeCompatibleBytes<FVertexElement> TStack_430;
  FRHIRayTracingShader **local_428;
  TTypeCompatibleBytes<FVertexElement> TStack_420;
  uchar local_418 [4];
  uchar auStack_414 [4];
  int iStack_410;
  uchar auStack_40c [4];
  uchar local_408 [4];
  uchar auStack_404 [4];
  int iStack_400;
  uchar auStack_3fc [4];
  FRHIUniformBufferShaderBindingLayout_u_16 local_3f8 [2];
  uchar auStack_3f0 [8];
  uchar local_3e8 [4];
  uint local_3e4;
  EShaderFrequency local_3e0;
  uint local_3d8;
  EShaderBindingLayoutFlags local_3d4;
  uint local_3d0;
  FRHIUniformBufferShaderBindingLayout_u_16 local_3c8 [48];
  FPipelineCacheFileFormatPSO local_308;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_598;
  local_4e8 = param_1;
  bVar5 = IsPipelineFileCacheEnabled();
  if ((bVar5) && ((bVar5 = LogPSOtoFileCache(), bVar5 || (bVar5 = ReportNewPSOs(), bVar5)))) {
    local_438 = (param_1->RayGenTable).DataPtr;
    TStack_430.Pad = *(uchar (*) [8])&(param_1->RayGenTable).ArrayNum;
    local_428 = (param_1->MissTable).DataPtr;
    TStack_420.Pad = *(uchar (*) [8])&(param_1->MissTable).ArrayNum;
    local_418 = *(uchar (*) [4])&(param_1->HitGroupTable).DataPtr;
    auStack_414 = *(uchar (*) [4])((longlong)&(param_1->HitGroupTable).DataPtr + 4);
    iStack_410 = (param_1->HitGroupTable).ArrayNum;
    auStack_40c[0] = (param_1->HitGroupTable).field_0xc;
    auStack_40c[1] = (param_1->HitGroupTable).field_0xd;
    auStack_40c[2] = (param_1->HitGroupTable).field_0xe;
    auStack_40c[3] = (param_1->HitGroupTable).field_0xf;
    bVar5 = false;
    local_408 = *(uchar (*) [4])&(param_1->CallableTable).DataPtr;
    auStack_404 = *(uchar (*) [4])((longlong)&(param_1->CallableTable).DataPtr + 4);
    iStack_400 = (param_1->CallableTable).ArrayNum;
    auStack_3fc[0] = (param_1->CallableTable).field_0xc;
    auStack_3fc[1] = (param_1->CallableTable).field_0xd;
    auStack_3fc[2] = (param_1->CallableTable).field_0xe;
    auStack_3fc[3] = (param_1->CallableTable).field_0xf;
    AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
    local_4e0 = &local_438;
    do {
      ppFVar27 = *local_4e0;
      ppFVar2 = ppFVar27 + *(int *)(local_4e0 + 1);
      for (; ppFVar27 != ppFVar2; ppFVar27 = ppFVar27 + 1) {
        FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
        FPipelineFileCacheRayTracingDesc
                  ((FPipelineFileCacheRayTracingDesc *)&local_3f8[0]._s_0,param_1,*ppFVar27);
        local_520[0] = (local_3f8[0].Flags >> 2) + 0x9e3779b9 +
                       ((uint)local_3e0 * 0x40 + local_3d8 + (local_3e0 >> 2) + 0x9e3779b9 ^
                       (uint)local_3e0) + local_3f8[0].Flags * 0x40 ^ local_3f8[0].Flags;
        iVar26 = RunTimeToPSOUsage._52_4_;
        iVar20 = RunTimeToPSOUsage._8_4_;
        if (iVar20 != iVar26) {
          lVar21 = 0x154be5be8;
          if (RunTimeToPSOUsage._64_8_ != 0) {
            lVar21 = RunTimeToPSOUsage._64_8_;
          }
          uVar7 = *(uint *)(lVar21 + (ulonglong)(RunTimeToPSOUsage._72_4_ - 1 & local_520[0]) * 4);
          while (uVar7 != 0xffffffff) {
            puVar18 = (uint *)((longlong)(int)uVar7 * 0x20 + RunTimeToPSOUsage._0_8_);
            if (*puVar18 == local_520[0]) {
              puVar23 = (ulonglong *)(puVar18 + 2);
              if (puVar18 == (uint *)0x0) {
                puVar23 = (ulonglong *)0x0;
              }
              if ((puVar23 != (ulonglong *)0x0) && ((*puVar23 & GameUsageMask) == GameUsageMask))
              goto LAB_145c52afa;
              break;
            }
            uVar7 = puVar18[6];
          }
        }
        if (!bVar5) {
          ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
          AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
          bVar5 = true;
          iVar26 = RunTimeToPSOUsage._52_4_;
          iVar20 = RunTimeToPSOUsage._8_4_;
        }
        if (iVar20 != iVar26) {
          lVar21 = 0x154be5be8;
          if (RunTimeToPSOUsage._64_8_ != 0) {
            lVar21 = RunTimeToPSOUsage._64_8_;
          }
          uVar7 = *(uint *)(lVar21 + (ulonglong)(RunTimeToPSOUsage._72_4_ - 1 & local_520[0]) * 4);
          while (uVar7 != 0xffffffff) {
            puVar18 = (uint *)((longlong)(int)uVar7 * 0x20 + RunTimeToPSOUsage._0_8_);
            if (*puVar18 == local_520[0]) goto LAB_145c522a0;
            uVar7 = puVar18[6];
          }
        }
        puVar18 = (uint *)0x0;
LAB_145c522a0:
        puVar16 = (uint *)0x0;
        puVar19 = puVar18 + 2;
        if (puVar18 == (uint *)0x0) {
          puVar19 = puVar16;
        }
        if (puVar19 == (uint *)0x0) {
          local_308.ComputeDesc.ComputeShader.Hash[0] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[1] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[2] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[3] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[4] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[5] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[6] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[7] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[8] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[9] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[10] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0xb] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0xc] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0xd] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0xe] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0xf] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0x10] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0x11] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0x12] = '\0';
          local_308.ComputeDesc.ComputeShader.Hash[0x13] = '\0';
          FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor
                    (&local_308.GraphicsDesc);
          FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
          FPipelineFileCacheRayTracingDesc(&local_308.RayTracingDesc);
          local_308.RayTracingDesc.ShaderHash.Hash[0x10] = local_3e8[0];
          local_308.RayTracingDesc.ShaderHash.Hash[0x11] = local_3e8[1];
          local_308.RayTracingDesc.ShaderHash.Hash[0x12] = local_3e8[2];
          local_308.RayTracingDesc.ShaderHash.Hash[0x13] = local_3e8[3];
          local_308.RayTracingDesc.DeprecatedMaxPayloadSizeInBytes = local_3e4;
          local_308.RayTracingDesc.Frequency = local_3e0;
          local_308.RayTracingDesc.ShaderBindingLayout.Hash = local_3d8;
          local_308.RayTracingDesc.ShaderBindingLayout.Flags = local_3d4;
          local_308.RayTracingDesc.ShaderBindingLayout.NumUniformBufferEntries = local_3d0;
          local_308.Type = RayTracing;
          local_308.RayTracingDesc.ShaderHash.Hash[8] = auStack_3f0[0];
          local_308.RayTracingDesc.ShaderHash.Hash[9] = auStack_3f0[1];
          local_308.RayTracingDesc.ShaderHash.Hash[10] = auStack_3f0[2];
          local_308.RayTracingDesc.ShaderHash.Hash[0xb] = auStack_3f0[3];
          local_308.RayTracingDesc.ShaderHash.Hash[0xc] = auStack_3f0[4];
          local_308.RayTracingDesc.ShaderHash.Hash[0xd] = auStack_3f0[5];
          local_308.RayTracingDesc.ShaderHash.Hash[0xe] = auStack_3f0[6];
          local_308.RayTracingDesc.ShaderHash.Hash[0xf] = auStack_3f0[7];
          TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator=
                    (&local_308.RayTracingDesc.ShaderBindingLayout.UniformBufferEntries,
                     (TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *)
                     &local_3c8[0]._s_0);
          local_534 = ::GetTypeHash(&local_308);
          local_518.UsageMask = 0;
          local_518.EngineFlags = 0;
          local_518.PSOHash = local_534;
          bVar6 = IsPSOEntryCached(&local_308,&local_518);
          if (!bVar6) {
            if ((LogNewPSOsToConsoleAndCSV != false) && ((param_2 & NonBlocking) != Default)) {
              if (3 < (byte)LogRHI._0_1_) {
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
              }
              if ((0 < GPSOFileCachePrintNewPSODescriptors) && (3 < (byte)LogRHI._0_1_)) {
                FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::ToString
                          (&local_308.RayTracingDesc,&local_448);
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
                if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_448.Data.AllocatorInstance.Data);
                }
              }
            }
            bVar6 = LogPSOtoFileCache();
            if (bVar6) {
              TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
              ::Emplace<FPipelineCacheFileFormatPSO_const_&>
                        (&NewPSOs,(FPipelineCacheFileFormatPSO *)local_4d8,(bool *)&local_308);
              FVar9 = StatPtr_STAT_NewCachedPSOMemory;
              if (StatPtr_STAT_NewCachedPSOMemory ==
                  (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)0x0) {
                pFVar8 = ::FName::FName(&local_468,"STAT_NewCachedPSOMemory");
                FVar9 = (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)
                        FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewCachedPSOMemory,
                                   *pFVar8,L"New Cached PSO","STATGROUP_PipelineStateCache",
                                   "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,
                                   false,false,MCR_Physical);
              }
              FVar3 = *(FName *)FVar9;
              FVar22 = FVar3.ComparisonIndex.Value;
              uVar7 = FVar3.Number;
              local_508 = FVar22.Value;
              uStack_504 = uVar7;
              if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar10 == (FThreadStats *)0x0) {
                  pFVar11 = FThreadStatsPool::Get();
                  pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
                }
                local_4bc = uVar7 & 0xffffafff | 0xa000;
                local_4d0._8_8_ = (FPipelineStateStats **)0x2d0;
                local_528 = FVar3;
                local_4c0 = FVar22.Value;
                FThreadStats::AddStatMessage(pFVar10,(FStatMessage *)(local_4d0 + 8));
                FStatsTrace::Add(&local_528,0x2d0);
                if (pFVar10->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar10,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar10,false,false);
                }
              }
            }
            NumNewPSOs = NumNewPSOs + 1;
            FVar12 = StatPtr_STAT_NewRayTracingPipelineStateCount;
            if (StatPtr_STAT_NewRayTracingPipelineStateCount ==
                (FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount>)0x0) {
              pFVar8 = ::FName::FName(&local_460,"STAT_NewRayTracingPipelineStateCount");
              FVar12 = (FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_NewRayTracingPipelineStateCount,*pFVar8,
                                  L"New RayTracing Pipeline State Count",
                                  "STATGROUP_PipelineStateCache","STATCAT_Advanced",
                                  L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
                                 );
            }
            FVar3 = *(FName *)FVar12;
            FVar22 = FVar3.ComparisonIndex.Value;
            uVar7 = FVar3.Number;
            local_500 = FVar22.Value;
            uStack_4fc = uVar7;
            if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar10 == (FThreadStats *)0x0) {
                pFVar11 = FThreadStatsPool::Get();
                pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
              }
              local_4b8.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
              local_4b8.StatData.Pad[0] = '\x01';
              local_4b8.StatData.Pad[1] = '\0';
              local_4b8.StatData.Pad[2] = '\0';
              local_4b8.StatData.Pad[3] = '\0';
              local_4b8.StatData.Pad[4] = '\0';
              local_4b8.StatData.Pad[5] = '\0';
              local_4b8.StatData.Pad[6] = '\0';
              local_4b8.StatData.Pad[7] = '\0';
              local_528 = FVar3;
              local_4b8.NameAndInfo.Index.Value = FVar22.Value;
              FThreadStats::AddStatMessage(pFVar10,&local_4b8);
              FStatsTrace::Add(&local_528,1);
              if (pFVar10->ScopeCount == 0) {
                FThreadStats::Flush(pFVar10,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar10,false,false);
              }
            }
            FVar13 = StatPtr_STAT_TotalRayTracingPipelineStateCount;
            if (StatPtr_STAT_TotalRayTracingPipelineStateCount ==
                (FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount>)0x0) {
              pFVar8 = ::FName::FName(&local_458,"STAT_TotalRayTracingPipelineStateCount");
              FVar13 = (FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_TotalRayTracingPipelineStateCount,*pFVar8,
                                  L"Total RayTracing Pipeline State Count",
                                  "STATGROUP_PipelineStateCache","STATCAT_Advanced",
                                  L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
                                 );
            }
            FVar3 = *(FName *)FVar13;
            FVar22 = FVar3.ComparisonIndex.Value;
            uVar7 = FVar3.Number;
            local_4f8 = FVar22.Value;
            uStack_4f4 = uVar7;
            if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar10 == (FThreadStats *)0x0) {
                pFVar11 = FThreadStatsPool::Get();
                pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
              }
              local_4a8.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
              local_4a8.StatData.Pad[0] = '\x01';
              local_4a8.StatData.Pad[1] = '\0';
              local_4a8.StatData.Pad[2] = '\0';
              local_4a8.StatData.Pad[3] = '\0';
              local_4a8.StatData.Pad[4] = '\0';
              local_4a8.StatData.Pad[5] = '\0';
              local_4a8.StatData.Pad[6] = '\0';
              local_4a8.StatData.Pad[7] = '\0';
              local_528 = FVar3;
              local_4a8.NameAndInfo.Index.Value = FVar22.Value;
              FThreadStats::AddStatMessage(pFVar10,&local_4a8);
              FStatsTrace::Add(&local_528,1);
              if (pFVar10->ScopeCount == 0) {
                FThreadStats::Flush(pFVar10,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar10,false,false);
              }
            }
            bVar6 = ReportNewPSOs();
            if (bVar6) {
              aVar14 = (atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>)
                       FMemory::Malloc(0x2d0,8);
              *(undefined8 *)aVar14 = 0;
              FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO
                        ((FPipelineCacheFileFormatPSO *)((longlong)aVar14 + 8),&local_308);
              LOCK();
              UNLOCK();
              *(atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> *)
               NewPSOsToReport.Head = aVar14;
              NewPSOsToReport.Head = aVar14;
            }
          }
          if ((local_518.UsageMask & GameUsageMask) != GameUsageMask) {
            local_518.UsageMask = local_518.UsageMask | GameUsageMask;
            pFVar15 = TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
                      ::FindOrAddImpl<unsigned_int_const_&>
                                ((TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
                                  *)&NewPSOUsage,local_518.PSOHash,&local_518.PSOHash);
            pFVar15->PSOHash = local_518.PSOHash;
            pFVar15->UsageMask = pFVar15->UsageMask | local_518.UsageMask;
            pFVar15->EngineFlags = pFVar15->EngineFlags | local_518.EngineFlags;
          }
          local_488 = local_520;
          local_480 = &local_518;
          TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,FPSOUsageData_const_&>_>
                    ((TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
                      *)&RunTimeToPSOUsage,
                     (TPairInitializer<unsigned_int_const_&,FPSOUsageData_const_&> *)(local_4d8 + 4)
                     ,(bool *)&local_488);
          if (Stats._8_4_ != Stats._52_4_) {
            lVar21 = 0x154be5c88;
            if (Stats._64_8_ != 0) {
              lVar21 = Stats._64_8_;
            }
            iVar20 = *(int *)(lVar21 + (ulonglong)(Stats._72_4_ - 1 & local_534) * 4);
            while (iVar20 != -1) {
              lVar21 = Stats._0_8_ + (longlong)iVar20 * 0x18;
              if (*(uint *)(Stats._0_8_ + (longlong)iVar20 * 0x18) == local_534) {
                if ((lVar21 != 0) && (local_530 = *(uint **)(lVar21 + 8), local_530 != (uint *)0x0))
                goto LAB_145c52ad4;
                break;
              }
              iVar20 = *(int *)(lVar21 + 0x10);
            }
          }
          local_530 = (uint *)0x0;
          puVar18 = ::operator_new(0x28);
          if (puVar18 != (uint *)0x0) {
            puVar18[2] = 0xffffffff;
            puVar18[3] = 0xffffffff;
            puVar18[4] = 0;
            puVar18[5] = 0;
            puVar18[6] = 0;
            puVar18[7] = 0;
            puVar18[8] = 0;
            puVar16 = puVar18;
          }
          puVar16[0] = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          puVar16[4] = 1;
          puVar16[5] = 0;
          puVar16[6] = 1;
          puVar16[7] = 0;
          puVar16[8] = local_534;
          local_478 = &local_534;
          local_470 = &local_530;
          local_530 = puVar16;
          TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,FPipelineStateStats_*_const_&>_>
                    ((TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
                      *)&Stats,
                     (TPairInitializer<unsigned_int_const_&,FPipelineStateStats_*_const_&> *)
                     local_4d0,(bool *)&local_478);
          FVar17 = StatPtr_STAT_PSOStatMemory;
          if (StatPtr_STAT_PSOStatMemory == (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)0x0) {
            pFVar8 = ::FName::FName(&local_450,"STAT_PSOStatMemory");
            FVar17 = (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOStatMemory,*pFVar8,
                                L"PSO Stat","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                                L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical)
            ;
          }
          FVar3 = *(FName *)FVar17;
          FVar22 = FVar3.ComparisonIndex.Value;
          uVar7 = FVar3.Number;
          local_4f0 = FVar22.Value;
          uStack_4ec = uVar7;
          if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar10 == (FThreadStats *)0x0) {
              pFVar11 = FThreadStatsPool::Get();
              pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
            }
            local_498.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
            local_498.StatData.Pad[0] = ',';
            local_498.StatData.Pad[1] = '\0';
            local_498.StatData.Pad[2] = '\0';
            local_498.StatData.Pad[3] = '\0';
            local_498.StatData.Pad[4] = '\0';
            local_498.StatData.Pad[5] = '\0';
            local_498.StatData.Pad[6] = '\0';
            local_498.StatData.Pad[7] = '\0';
            local_528 = FVar3;
            local_498.NameAndInfo.Index.Value = FVar22.Value;
            FThreadStats::AddStatMessage(pFVar10,&local_498);
            FStatsTrace::Add(&local_528,0x2c);
            if (pFVar10->ScopeCount == 0) {
              FThreadStats::Flush(pFVar10,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar10,false,false);
            }
          }
LAB_145c52ad4:
          puVar24 = local_40;
          lVar21 = 8;
          do {
            puVar1 = (undefined8 *)(puVar24 + -0x18);
            puVar24 = puVar24 + -0x18;
            lVar21 = lVar21 + -1;
            if ((void *)*puVar1 != (void *)0x0) {
              FMemory::Free((void *)*puVar1);
            }
          } while (lVar21 != 0);
        }
LAB_145c52afa:
        pFVar25 = &local_308;
        lVar21 = 8;
        do {
          FVar4.Data = (((FRHIUniformBufferShaderBindingLayout *)
                        ((longlong)
                         pFVar25[-1].RayTracingDesc.ShaderBindingLayout.UniformBufferEntries.
                         Elements + 0xa8))->LayoutName).Data.AllocatorInstance.Data;
          pFVar25 = (FPipelineCacheFileFormatPSO *)
                    ((longlong)
                     pFVar25[-1].RayTracingDesc.ShaderBindingLayout.UniformBufferEntries.Elements +
                    0xa8);
          lVar21 = lVar21 + -1;
          if (FVar4.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar4.Data);
          }
        } while (lVar21 != 0);
        param_1 = local_4e8;
      }
      local_4e0 = local_4e0 + 2;
    } while ((FRHIUniformBufferShaderBindingLayout_u_16 *)local_4e0 != local_3f8);
    if (bVar5) {
      ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
    }
  }
  return;
}

// ClearOSPipelineCache @ 145c530f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPipelineFileCacheManager::ClearOSPipelineCache(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (3 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  pwVar2 = FCommandLine::Get();
  FParse::Param(pwVar2,L"skippsoclear");
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    IsInGameThread();
    return;
  }
  return;
}

// CloseUserPipelineFileCache @ 145c531b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPipelineFileCacheManager::CloseUserPipelineFileCache(void)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  FPipelineCacheFile *pFVar8;
  ulong64 uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SerializedGraphicsPipelineStateCount> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_SerializedComputePipelineStateCount> FVar14;
  FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount> FVar15;
  FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount> FVar16;
  FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount> FVar17;
  FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount> FVar18;
  FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount> FVar19;
  FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount> FVar20;
  FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory> FVar21;
  byte bVar22;
  int iVar23;
  FNameEntryId FVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  uint local_res8;
  uint uStackX_c;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  undefined8 uStack_1a8;
  int local_1a0;
  undefined4 uStack_19c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FStatMessage local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  FStatMessage local_118;
  FStatMessage local_108;
  FStatMessage local_f8;
  FStatMessage local_e8;
  FStatMessage local_d8;
  FStatMessage local_c8;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  bVar6 = IsPipelineFileCacheEnabled();
  if (bVar6) {
    AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    pFVar8 = GetPipelineCacheFileFromKey(&UserCacheKey);
    if (pFVar8 != (FPipelineCacheFile *)0x0) {
      pFVar8 = GetPipelineCacheFileFromKey(&UserCacheKey);
      if (GameGuidToCacheKey._8_4_ != GameGuidToCacheKey._52_4_) {
        uVar9 = CityHash64((char *)&pFVar8->FileGuid,0x10);
        TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
                             *)&GameGuidToCacheKey,(uint)uVar9,&pFVar8->FileGuid);
      }
      if (FileCacheMap._8_4_ != FileCacheMap._52_4_) {
        iVar23 = UserCacheKey.Data.ArrayNum + -1;
        FVar4.Data = UserCacheKey.Data.AllocatorInstance.Data;
        if (UserCacheKey.Data.ArrayNum == 0) {
          iVar23 = 0;
          FVar4.Data = (FScriptContainerElement *)L"";
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,(wchar_t *)FVar4.Data);
        TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                    *)&FileCacheMap,uVar7,&UserCacheKey);
      }
    }
    local_198._padding_._0_4_ = 0;
    local_198._padding_._4_4_ = 1;
    local_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)&Stats.field_0x10;
    local_198.UnvisitedBitMask = 0xffffffff;
    local_198.CurrentBitIndex = 0;
    local_198.BaseBitIndex = 0;
    if (Stats._40_4_ != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
    }
    iVar23 = Stats._40_4_;
    TStack_b0._padding_ = CONCAT44(local_198._padding_._4_4_,(undefined4)local_198._padding_);
    local_1a0 = Stats._8_4_ - Stats._52_4_;
    TStack_b0.CurrentBitIndex = local_198.CurrentBitIndex;
    TStack_b0.UnvisitedBitMask = local_198.UnvisitedBitMask;
    uStack_1a8._4_4_ = local_198._28_4_;
    uStack_1a8._0_4_ = local_198.BaseBitIndex;
    bVar22 = Stats._40_1_ & 0x1f;
    local_1c8._padding_ = CONCAT44(1 << bVar22,(int)Stats._40_4_ >> 5);
    local_1c8.UnvisitedBitMask = -1 << bVar22;
    local_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&Stats.field_0x10;
    local_1c8.CurrentBitIndex = Stats._40_4_;
    local_1c8._24_8_ = CONCAT44(local_198.CurrentBitIndex,Stats._40_4_) & 0xffffffffffffffe0;
    local_b8 = &Stats;
    uStack_90 = CONCAT44(uStack_19c,local_1a0);
    TStack_b0.Array = local_198.Array;
    TStack_b0._24_8_ = uStack_1a8;
    if (((int)Stats._40_4_ < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)&Stats.field_0x10;
    if (iVar23 != Stats._40_4_) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
      pTVar25 = local_1c8.Array;
      iVar23 = local_1c8.CurrentBitIndex;
    }
    while( true ) {
      pTVar5 = local_b8;
      if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineStateStats_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (((TStack_b0.CurrentBitIndex == iVar23) && (TStack_b0.Array == pTVar25)) &&
         (pTVar5 == &Stats)) break;
      lVar1 = *(longlong *)pTVar5 + (longlong)TStack_b0.CurrentBitIndex * 0x18;
      LOCK();
      *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x18) = 0xffffffffffffffff;
      UNLOCK();
      LOCK();
      **(undefined8 **)(lVar1 + 8) = 0xffffffffffffffff;
      UNLOCK();
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      LOCK();
      *(undefined8 *)(*(longlong *)(lVar1 + 8) + 8) = 0xffffffffffffffff;
      UNLOCK();
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
    FVar11 = StatPtr_STAT_SerializedGraphicsPipelineStateCount;
    if (StatPtr_STAT_SerializedGraphicsPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_SerializedGraphicsPipelineStateCount>)0x0) {
      pFVar10 = ::FName::FName(&local_88,"STAT_SerializedGraphicsPipelineStateCount");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_SerializedGraphicsPipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SerializedGraphicsPipelineStateCount,*pFVar10,
                          L"Serialized Graphics Pipeline State Count","STATGROUP_PipelineStateCache"
                          ,"STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false
                          ,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar11;
    FVar24 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_148.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_148.StatData.Pad[0] = '\0';
      local_148.StatData.Pad[1] = '\0';
      local_148.StatData.Pad[2] = '\0';
      local_148.StatData.Pad[3] = '\0';
      local_148.StatData.Pad[4] = '\0';
      local_148.StatData.Pad[5] = '\0';
      local_148.StatData.Pad[6] = '\0';
      local_148.StatData.Pad[7] = '\0';
      local_res10 = FVar2;
      local_148.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_148);
      FStatsTrace::Set(&local_res10,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    FVar14 = StatPtr_STAT_SerializedComputePipelineStateCount;
    if (StatPtr_STAT_SerializedComputePipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_SerializedComputePipelineStateCount>)0x0) {
      pFVar10 = ::FName::FName(&local_80,"STAT_SerializedComputePipelineStateCount");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_SerializedComputePipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SerializedComputePipelineStateCount,*pFVar10,
                          L"Serialized Compute Pipeline State Count","STATGROUP_PipelineStateCache",
                          "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar14;
    FVar24 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_138.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_138.StatData.Pad[0] = '\0';
      local_138.StatData.Pad[1] = '\0';
      local_138.StatData.Pad[2] = '\0';
      local_138.StatData.Pad[3] = '\0';
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_res18 = FVar2;
      local_138.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_138);
      FStatsTrace::Set(&local_res18,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    FVar15 = StatPtr_STAT_TotalGraphicsPipelineStateCount;
    if (StatPtr_STAT_TotalGraphicsPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)0x0) {
      pFVar10 = ::FName::FName(&local_78,"STAT_TotalGraphicsPipelineStateCount");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalGraphicsPipelineStateCount
                          ,*pFVar10,L"Total Graphics Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar15;
    FVar24 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_128.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_128.StatData.Pad[0] = '\0';
      local_128.StatData.Pad[1] = '\0';
      local_128.StatData.Pad[2] = '\0';
      local_128.StatData.Pad[3] = '\0';
      local_128.StatData.Pad[4] = '\0';
      local_128.StatData.Pad[5] = '\0';
      local_128.StatData.Pad[6] = '\0';
      local_128.StatData.Pad[7] = '\0';
      local_res20 = FVar2;
      local_128.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_128);
      FStatsTrace::Set(&local_res20,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    FVar16 = StatPtr_STAT_TotalComputePipelineStateCount;
    if (StatPtr_STAT_TotalComputePipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount>)0x0) {
      pFVar10 = ::FName::FName(&local_70,"STAT_TotalComputePipelineStateCount");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalComputePipelineStateCount,
                          *pFVar10,L"Total Compute Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar16;
    FVar24 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_118.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_118.StatData.Pad[0] = '\0';
      local_118.StatData.Pad[1] = '\0';
      local_118.StatData.Pad[2] = '\0';
      local_118.StatData.Pad[3] = '\0';
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_178 = FVar2;
      local_118.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_118);
      FStatsTrace::Set(&local_178,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    FVar17 = StatPtr_STAT_TotalRayTracingPipelineStateCount;
    if (StatPtr_STAT_TotalRayTracingPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount>)0x0) {
      pFVar10 = ::FName::FName(&local_68,"STAT_TotalRayTracingPipelineStateCount");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_TotalRayTracingPipelineStateCount,*pFVar10,
                          L"Total RayTracing Pipeline State Count","STATGROUP_PipelineStateCache",
                          "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar17;
    FVar24 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_108.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_108.StatData.Pad[0] = '\0';
      local_108.StatData.Pad[1] = '\0';
      local_108.StatData.Pad[2] = '\0';
      local_108.StatData.Pad[3] = '\0';
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_170 = FVar2;
      local_108.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_108);
      FStatsTrace::Set(&local_170,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    FVar18 = StatPtr_STAT_NewGraphicsPipelineStateCount;
    if (StatPtr_STAT_NewGraphicsPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount>)0x0) {
      pFVar10 = ::FName::FName(&local_60,"STAT_NewGraphicsPipelineStateCount");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewGraphicsPipelineStateCount,
                          *pFVar10,L"New Graphics Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar18;
    FVar24 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_f8.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_f8.StatData.Pad[0] = '\0';
      local_f8.StatData.Pad[1] = '\0';
      local_f8.StatData.Pad[2] = '\0';
      local_f8.StatData.Pad[3] = '\0';
      local_f8.StatData.Pad[4] = '\0';
      local_f8.StatData.Pad[5] = '\0';
      local_f8.StatData.Pad[6] = '\0';
      local_f8.StatData.Pad[7] = '\0';
      local_168 = FVar2;
      local_f8.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_f8);
      FStatsTrace::Set(&local_168,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    FVar19 = StatPtr_STAT_NewComputePipelineStateCount;
    if (StatPtr_STAT_NewComputePipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount>)0x0) {
      pFVar10 = ::FName::FName(&local_58,"STAT_NewComputePipelineStateCount");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewComputePipelineStateCount,
                          *pFVar10,L"New Compute Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar19;
    FVar24 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_e8.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_e8.StatData.Pad[0] = '\0';
      local_e8.StatData.Pad[1] = '\0';
      local_e8.StatData.Pad[2] = '\0';
      local_e8.StatData.Pad[3] = '\0';
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_160 = FVar2;
      local_e8.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_e8);
      FStatsTrace::Set(&local_160,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    FVar20 = StatPtr_STAT_NewRayTracingPipelineStateCount;
    if (StatPtr_STAT_NewRayTracingPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount>)0x0) {
      pFVar10 = ::FName::FName(&local_50,"STAT_NewRayTracingPipelineStateCount");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewRayTracingPipelineStateCount
                          ,*pFVar10,L"New RayTracing Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar20;
    FVar24 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_d8.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_d8.StatData.Pad[0] = '\0';
      local_d8.StatData.Pad[1] = '\0';
      local_d8.StatData.Pad[2] = '\0';
      local_d8.StatData.Pad[3] = '\0';
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_158 = FVar2;
      local_d8.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_d8);
      FStatsTrace::Set(&local_158,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    bVar6 = 1 < (int)RunTimeToPSOUsage._72_4_;
    if (!bVar6) {
      TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
                        *)&RunTimeToPSOUsage);
    }
    RunTimeToPSOUsage._8_4_ = 0;
    if (RunTimeToPSOUsage._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&RunTimeToPSOUsage,0,
                 (int *)&RunTimeToPSOUsage.field_0xc);
    }
    RunTimeToPSOUsage._48_4_ = 0xffffffff;
    RunTimeToPSOUsage._52_4_ = 0;
    RunTimeToPSOUsage._40_4_ = 0;
    if (0x80 < (uint)RunTimeToPSOUsage._44_4_) {
      RunTimeToPSOUsage._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&RunTimeToPSOUsage.field_0x10,0);
    }
    if (bVar6) {
      RunTimeToPSOUsage._72_4_ = 1;
      TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
                *)&RunTimeToPSOUsage);
    }
    bVar6 = 1 < (int)NewPSOUsage._72_4_;
    if (!bVar6) {
      TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
                        *)&NewPSOUsage);
    }
    NewPSOUsage._8_4_ = 0;
    if (NewPSOUsage._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&NewPSOUsage,0,(int *)&NewPSOUsage.field_0xc);
    }
    NewPSOUsage._48_4_ = 0xffffffff;
    NewPSOUsage._52_4_ = 0;
    NewPSOUsage._40_4_ = 0;
    if (0x80 < (uint)NewPSOUsage._44_4_) {
      NewPSOUsage._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&NewPSOUsage.field_0x10,0);
    }
    if (bVar6) {
      NewPSOUsage._72_4_ = 1;
      TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
                *)&NewPSOUsage);
    }
    bVar6 = 1 < NewPSOs.HashSize;
    if (!bVar6) {
      TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
      ::UnhashElements(&NewPSOs);
    }
    TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&NewPSOs.Elements,0,NewPSOs.Elements._8_4_);
    NewPSOs.Elements._8_4_ = 0;
    if (NewPSOs.Elements._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2d0,8,0,(ForAnyElementType *)&NewPSOs,0,(int *)&NewPSOs.Elements.field_0xc);
    }
    NewPSOs.Elements._48_4_ = 0xffffffff;
    NewPSOs.Elements._52_4_ = 0;
    NewPSOs.Elements._40_4_ = 0;
    if (0x80 < (uint)NewPSOs.Elements._44_4_) {
      NewPSOs.Elements._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&NewPSOs.Elements.field_0x10,0);
    }
    if (bVar6) {
      NewPSOs.HashSize = 1;
      TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
      ::Rehash(&NewPSOs);
    }
    bVar6 = 1 < NewPSOHashes.HashSize;
    if (!bVar6) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
                (&NewPSOHashes);
    }
    NewPSOHashes.Elements._8_4_ = 0;
    if (NewPSOHashes.Elements._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&NewPSOHashes,0,
                 (int *)&NewPSOHashes.Elements.field_0xc);
    }
    NewPSOHashes.Elements._48_4_ = 0xffffffff;
    NewPSOHashes.Elements._52_4_ = 0;
    NewPSOHashes.Elements._40_4_ = 0;
    if (0x80 < (uint)NewPSOHashes.Elements._44_4_) {
      NewPSOHashes.Elements._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&NewPSOHashes.Elements.field_0x10,0);
    }
    if (bVar6) {
      NewPSOHashes.HashSize = 1;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(&NewPSOHashes)
      ;
    }
    NumNewPSOs = 0;
    FVar21 = StatPtr_STAT_NewCachedPSOMemory;
    if (StatPtr_STAT_NewCachedPSOMemory == (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)0x0
       ) {
      pFVar10 = ::FName::FName(local_48,"STAT_NewCachedPSOMemory");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewCachedPSOMemory,*pFVar10,
                          L"New Cached PSO","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                          L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar21;
    uVar7 = FVar2.Number;
    FVar24 = FVar2.ComparisonIndex.Value;
    local_res8 = FVar24.Value;
    uStackX_c = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_c8.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_c8.StatData.Pad[0] = '\0';
      local_c8.StatData.Pad[1] = '\0';
      local_c8.StatData.Pad[2] = '\0';
      local_c8.StatData.Pad[3] = '\0';
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_150 = FVar2;
      local_c8.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_c8);
      FStatsTrace::Set(&local_150,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  }
  return;
}

// FetchPSODescriptors @ 145c574f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::FetchPSODescriptors
          (FString *param_1,TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *param_2)

{
  bool bVar1;
  FPipelineCacheFile *this;
  
  bVar1 = IsPipelineFileCacheEnabled();
  if (bVar1) {
    AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
    this = GetPipelineCacheFileFromKey(param_1);
    if (this != (FPipelineCacheFile *)0x0) {
      FPipelineCacheFile::FetchPSODescriptors(this,param_2);
    }
    ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
  }
  return;
}

// GetOrderedPSOHashes @ 145c5b430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::GetOrderedPSOHashes
          (FString *param_1,TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_> *param_2,
          PSOOrder param_3,long64 param_4,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_5)

{
  bool bVar1;
  FPipelineCacheFile *this;
  
  bVar1 = IsPipelineFileCacheEnabled();
  if (bVar1) {
    AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    RequestedOrder = param_3;
    this = GetPipelineCacheFileFromKey(param_1);
    if (this != (FPipelineCacheFile *)0x0) {
      FPipelineCacheFile::GetOrderedPSOHashes(this,param_2,param_3,param_4,param_5);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  }
  return;
}

// GetPipelineCacheFileFromKey @ 145c5b4c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPipelineCacheFile * __cdecl
FPipelineFileCacheManager::GetPipelineCacheFileFromKey(FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar6);
  iVar2 = TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                      *)&FileCacheMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + FileCacheMap._0_8_;
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      return (FPipelineCacheFile *)*puVar5;
    }
  }
  return (FPipelineCacheFile *)0x0;
}

// GetTotalPSOCount @ 145c5c610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl FPipelineFileCacheManager::GetTotalPSOCount(FString *param_1)

{
  bool bVar1;
  FPipelineCacheFile *pFVar2;
  int iVar3;
  
  iVar3 = 0;
  bVar1 = IsPipelineFileCacheEnabled();
  if (bVar1) {
    AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
    pFVar2 = GetPipelineCacheFileFromKey(param_1);
    if (pFVar2 != (FPipelineCacheFile *)0x0) {
      iVar3 = *(int *)&(pFVar2->TOC).MetaData.field_0x8 - *(int *)&(pFVar2->TOC).MetaData.field_0x34
      ;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
  }
  return iVar3;
}

// HasPipelineFileCache @ 145c5d070

bool __cdecl FPipelineFileCacheManager::HasPipelineFileCache(FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                      *)&FileCacheMap,uVar2,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
  return iVar3 != -1;
}

// Initialize @ 145c5f7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FPipelineFileCacheManager::Initialize(uint param_1)

{
  FName FVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FEngineVersion *this;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_PSOStatMemory> FVar8;
  FName local_res10;
  FStatMessage local_28;
  
  if (3 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  pwVar3 = FCommandLine::Get();
  FParse::Param(pwVar3,L"skippsoclear");
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    IsInGameThread();
  }
  FileCacheEnabled = GRHIGlobals.SupportsPipelineFileCache != false;
  FPipelineCacheFile::GameVersion = param_1;
  if (param_1 == 0) {
    this = FEngineVersion::Current();
    FPipelineCacheFile::GameVersion = FEngineVersionBase::GetChangelist((FEngineVersionBase *)this);
  }
  FVar5 = StatPtr_STAT_NewCachedPSOMemory;
  if (StatPtr_STAT_NewCachedPSOMemory == (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)0x0)
  {
    pFVar4 = ::FName::FName(&local_res10,"STAT_NewCachedPSOMemory");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewCachedPSOMemory,*pFVar4,
                       L"New Cached PSO","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                       L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar5;
  local_res10 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_28.StatData.Pad[0] = '\0';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res10 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,&local_28);
    FStatsTrace::Set(&local_res10,0);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar8 = StatPtr_STAT_PSOStatMemory;
  if (StatPtr_STAT_PSOStatMemory == (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_PSOStatMemory");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOStatMemory,*pFVar4,L"PSO Stat",
                       "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",true
                       ,false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar8;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res10 = FVar1;
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_28.StatData.Pad[0] = '\0';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res10 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,&local_28);
    FStatsTrace::Set(&local_res10,0);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
      return;
    }
    if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  return;
}

// IsBSSEquivalentPSOEntryCached @ 145c5fe40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FPipelineFileCacheManager::IsBSSEquivalentPSOEntryCached(FPipelineCacheFileFormatPSO *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  TIterator local_78;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  bVar4 = IsPSOEntryCached(param_1,(FPSOUsageData *)0x0);
  if (bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPSOEntryCached(NewEntry)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0xbe0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = false;
  TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_78,
             (TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
              *)&FileCacheMap);
  local_18 = (TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
              *)&FileCacheMap;
  local_10 = 0;
  local_48 = (longlong *)local_78._padding_;
  TStack_40._padding_ = local_78._padding_;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78._padding_;
  TStack_40.UnvisitedBitMask = (undefined4)local_78._padding_;
  TStack_40.CurrentBitIndex = local_78._padding_._4_4_;
  TStack_40._24_8_ = local_78._padding_;
  pTStack_20 = local_78.Set;
  do {
    if ((TStack_40.Array)->NumBits <= TStack_40.CurrentBitIndex) break;
    bVar4 = FPipelineCacheFile::IsBSSEquivalentPSOEntryCachedInternal
                      (*(FPipelineCacheFile **)
                        ((longlong)TStack_40.CurrentBitIndex * 0x20 + 0x10 + *local_48),param_1);
    TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
  } while (!bVar4);
  if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
    uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
    if (uVar7 < 4) {
      iVar6 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((0 < (int)uVar7) && (local_18->HashSize < iVar6)) || (iVar6 < local_18->HashSize)) {
      local_18->HashSize = iVar6;
      TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
      ::Rehash(local_18);
    }
  }
  return bVar4;
}

// IsPSOEntryCached @ 145c60900

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
FPipelineFileCacheManager::IsPSOEntryCached
          (FPipelineCacheFileFormatPSO *param_1,FPSOUsageData *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  TIterator local_88;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_88,
             (TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
              *)&FileCacheMap);
  local_28 = (TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
              *)&FileCacheMap;
  local_20 = 0;
  local_58 = (longlong *)local_88._padding_;
  TStack_50._padding_ = local_88._padding_;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88._padding_;
  TStack_50.UnvisitedBitMask = (undefined4)local_88._padding_;
  TStack_50.CurrentBitIndex = local_88._padding_._4_4_;
  TStack_50._24_8_ = local_88._padding_;
  pTStack_30 = local_88.Set;
  bVar4 = false;
LAB_145c60961:
  do {
    if ((TStack_50.Array)->NumBits <= TStack_50.CurrentBitIndex) {
LAB_145c60a87:
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar6 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar6 < 4) {
          iVar8 = 1;
        }
        else {
          uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar6) && (local_28->HashSize < iVar8)) || (iVar8 < local_28->HashSize)) {
          local_28->HashSize = iVar8;
          TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
      return bVar4;
    }
    lVar2 = *(longlong *)((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 + *local_58);
    uVar6 = ::GetTypeHash(param_1);
    if (((param_2 != (FPSOUsageData *)0x0) && (param_2->PSOHash != uVar6)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EntryData || EntryData->PSOHash == PSOHash",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0xb0a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100)) {
      lVar10 = lVar2 + 0x68;
      if (*(longlong *)(lVar2 + 0x70) != 0) {
        lVar10 = *(longlong *)(lVar2 + 0x70);
      }
      uVar7 = *(uint *)(lVar10 + (ulonglong)(*(int *)(lVar2 + 0x78) - 1U & uVar6) * 4);
      if (uVar7 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar7 * 0xc0 + *(longlong *)(lVar2 + 0x30));
          if (*puVar9 == uVar6) {
            puVar11 = puVar9 + 2;
            if (puVar9 == (uint *)0x0) {
              puVar11 = (uint *)0x0;
            }
            if ((puVar11 == (uint *)0x0) || (param_2 == (FPSOUsageData *)0x0)) {
              bVar4 = puVar11 != (uint *)0x0;
              TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
              if (puVar11 != (uint *)0x0) goto LAB_145c60a87;
              goto LAB_145c60961;
            }
            param_2->UsageMask = *(ulong64 *)(puVar11 + 0x26);
            param_2->EngineFlags = (ushort)puVar11[0x2a];
            TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
            bVar4 = true;
            goto LAB_145c60a87;
          }
          uVar7 = puVar9[0x2e];
        } while (uVar7 != 0xffffffff);
      }
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    bVar4 = false;
  } while( true );
}

// IsPipelineFileCacheEnabled @ 145c60b10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FPipelineFileCacheManager::IsPipelineFileCacheEnabled(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  
  if (!bOnce) {
    bOnce = true;
    pwVar3 = FCommandLine::Get();
    bCmdLineForce = FParse::Param(pwVar3,L"psocache");
    if ((2 < (byte)LogRHI._0_1_) && (bCmdLineForce)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  pTVar1 = CVarPSOFileCacheEnabled.Ref;
  if (FileCacheEnabled == false) {
    return false;
  }
  if (bCmdLineForce != false) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 1) {
    return false;
  }
  return true;
}

// LoadPipelineFileCacheInto @ 145c60ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
FPipelineFileCacheManager::LoadPipelineFileCacheInto
          (FString *param_1,
          TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
          *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  byte bVar7;
  ForElementType<unsigned_int> FVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  longlong *local_190;
  int iStack_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  uint uStack_174;
  int local_170;
  uint uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  undefined1 local_15c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  int aiStack_130 [2];
  undefined1 local_128 [64];
  int local_e8;
  TBitArray<FDefaultBitArrayAllocator> local_e0;
  int local_bc;
  TTypeCompatibleBytes<FVertexElement> local_b0;
  uchar local_a8 [16];
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  FRenderTarget local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  FPipelineCacheFileData::Open((FPipelineCacheFileData *)local_128,param_1);
  uVar10 = local_e0.NumBits;
  iStack_188 = 0;
  local_170 = 0;
  bVar11 = false;
  uStack_184 = 1;
  uStack_174 = 0;
  if (local_e0.NumBits != 0) {
    FVar8 = (ForElementType<unsigned_int>)&local_e0;
    if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar8 = local_e0.AllocatorInstance.SecondaryData;
    }
    uVar12 = *(uint *)FVar8;
    while (uVar12 == 0) {
      lVar6 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      uStack_174 = local_e0.NumBits;
      if ((int)(((int)(local_e0.NumBits - 1U) >> 0x1f & 0x1fU) + (local_e0.NumBits - 1U)) >> 5 <
          iStack_188) goto LAB_145c60da1;
      uVar12 = *(uint *)((uchar *)((longlong)FVar8 + 4) + lVar6 * 4);
    }
    uStack_184 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_184 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_160 = (int)lVar6;
    uStack_174 = local_170 + -1 + local_160;
    if (local_e0.NumBits < (int)uStack_174) {
      uStack_174 = local_e0.NumBits;
    }
  }
LAB_145c60da1:
  local_190 = (longlong *)(local_128 + 0x38);
  local_180 = &local_e0;
  uVar12 = local_e0.NumBits & 0xffffffe0;
  iStack_168 = local_e8 - local_bc;
  uStack_178 = 0xffffffff;
  TStack_150.CurrentBitIndex._0_1_ = (char)uStack_174;
  TStack_150.CurrentBitIndex._1_1_ = (char)(uStack_174 >> 8);
  TStack_150.CurrentBitIndex._2_1_ = (char)(uStack_174 >> 0x10);
  TStack_150.CurrentBitIndex._3_1_ = (char)(uStack_174 >> 0x18);
  TStack_150.UnvisitedBitMask._0_1_ = 0xff;
  TStack_150.UnvisitedBitMask._1_1_ = 0xff;
  TStack_150.UnvisitedBitMask._2_1_ = 0xff;
  TStack_150.UnvisitedBitMask._3_1_ = 0xff;
  TStack_150._padding_ = CONCAT44(uStack_184,iStack_188);
  iVar9 = local_e0.NumBits >> 5;
  TStack_150._28_1_ = (char)uStack_174;
  TStack_150._29_1_ = (char)(uStack_174 >> 8);
  TStack_150._30_1_ = (char)(uStack_174 >> 0x10);
  TStack_150._31_1_ = (char)(uStack_174 >> 0x18);
  TStack_150.BaseBitIndex._0_1_ = (char)local_170;
  TStack_150.BaseBitIndex._1_1_ = (char)((uint)local_170 >> 8);
  TStack_150.BaseBitIndex._2_1_ = (char)((uint)local_170 >> 0x10);
  TStack_150.BaseBitIndex._3_1_ = (char)((uint)local_170 >> 0x18);
  aiStack_130[1]._0_1_ = (undefined1)uStack_164;
  aiStack_130[1]._1_1_ = uStack_164._1_1_;
  aiStack_130[1]._2_1_ = uStack_164._2_1_;
  aiStack_130[1]._3_1_ = uStack_164._3_1_;
  aiStack_130[0] = iStack_168;
  bVar7 = (byte)local_e0.NumBits;
  uStack_16c = uStack_174;
  local_15c._4_8_ = local_190;
  TStack_150.Array = local_180;
  if ((local_e0.NumBits < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (uVar10 != local_e0.NumBits) {
    FVar8 = (ForElementType<unsigned_int>)&local_e0;
    if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar8 = local_e0.AllocatorInstance.SecondaryData;
    }
    uVar10 = -1 << (bVar7 & 0x1f) & *(uint *)((longlong)FVar8 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar6 = (longlong)iVar9;
      uVar12 = uVar12 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = local_e0.NumBits;
      if ((int)(((int)(local_e0.NumBits - 1U) >> 0x1f & 0x1fU) + (local_e0.NumBits - 1U)) >> 5 <
          iVar9) goto LAB_145c60eab;
      uVar10 = *(uint *)((uchar *)((longlong)FVar8 + 4) + lVar6 * 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar10 = (int)lVar6 + -1 + uVar12;
    if (local_e0.NumBits < (int)uVar10) {
      uVar10 = local_e0.NumBits;
    }
  }
LAB_145c60eab:
  while( true ) {
    uVar3 = local_15c._4_8_;
    if ((int)*(longlong *)(local_15c._4_8_ + 8) - *(int *)(local_15c._4_8_ + 0x34) != aiStack_130[0]
       ) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (((TStack_150.CurrentBitIndex == uVar10) && (TStack_150.Array == &local_e0)) &&
       ((undefined1 *)uVar3 == local_128 + 0x38)) break;
    TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
    ::Emplace<FPipelineCacheFileFormatPSO_const_&>
              (param_2,(FPipelineCacheFileFormatPSO *)local_15c,
               (bool *)(*(longlong *)uVar3 + (longlong)TStack_150.CurrentBitIndex * 0x2d8 + 8));
    bVar11 = true;
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  local_50.ColorBlendOp.Value = '\0';
  local_50.ColorSrcBlend.Value = '\0';
  local_50.ColorDestBlend.Value = '\0';
  local_50.AlphaBlendOp.Value = '\0';
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  if (local_b0.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_b0.Pad);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_128 + 0x38));
  return bVar11;
}

// LogNewComputePSOToConsoleAndCSV @ 145c610a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::LogNewComputePSOToConsoleAndCSV
          (FPipelineCacheFileFormatPSO *param_1,uint param_2,bool param_3)

{
  uint uVar1;
  undefined1 auStack_1048 [32];
  FString local_1028;
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x145c610b0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1048;
  if (LogNewPSOsToConsoleAndCSV) {
    if (param_3) {
      if (5 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    else {
      FCsvProfiler::RecordEventfInternal(_GCsvCategory_PSO.Index,L"Encountered new compute PSO");
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint3488 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint3488,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                     ,0xda0,L"PSO/Encountered new compute PSO");
          __BookmarkPoint3488 = true;
        }
        uVar1 = CallstackTrace_GetCurrentId();
        local_1018[0] = '\0';
        FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint3488,uVar1,1,local_1018);
      }
      if (3 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((0 < GPSOFileCachePrintNewPSODescriptors) && (3 < (byte)LogRHI._0_1_)) {
        local_1028.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1028.Data.ArrayNum = 0;
        local_1028.Data.ArrayMax = 0;
        BytesToHex((uchar *)&param_1->ComputeDesc,0x14,&local_1028);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_1028.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1028.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// LogNewGraphicsPSOToConsoleAndCSV @ 145c61230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::LogNewGraphicsPSOToConsoleAndCSV
          (FPipelineCacheFileFormatPSO *param_1,uint param_2,bool param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined1 auStack_1048 [32];
  FString local_1028;
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x145c61240;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1048;
  if (LogNewPSOsToConsoleAndCSV) {
    if (param_3) {
      if (5 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    else {
      FCsvProfiler::RecordEventfInternal(_GCsvCategory_PSO.Index,L"Encountered new graphics PSO");
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint3460 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint3460,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                     ,0xd84,L"PSO/Encountered new graphics PSO");
          __BookmarkPoint3460 = true;
        }
        uVar1 = CallstackTrace_GetCurrentId();
        local_1018[0] = '\0';
        FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint3460,uVar1,1,local_1018);
      }
      if (3 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (bOnce == false) {
        bOnce = true;
        pwVar2 = FCommandLine::Get();
        bCmdLineOption = FParse::Param(pwVar2,L"logpsodetails");
      }
      iVar3 = GPSOFileCachePrintNewPSODescriptors;
      if (bCmdLineOption != false) {
        iVar3 = 2;
      }
      if (0 < iVar3) {
        if (3 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        if ((1 < iVar3) && (3 < (byte)LogRHI._0_1_)) {
          FPipelineCacheFileFormatPSO::ToStringReadable(param_1,&local_1028);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          if (local_1028.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1028.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// LogNewRaytracingPSOToConsole @ 145c61420

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::LogNewRaytracingPSOToConsole
          (FPipelineCacheFileFormatPSO *param_1,uint param_2,bool param_3)

{
  FString local_18;
  
  if ((LogNewPSOsToConsoleAndCSV) && (!param_3)) {
    if (3 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((0 < GPSOFileCachePrintNewPSODescriptors) && (3 < (byte)LogRHI._0_1_)) {
      FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::ToString
                (&param_1->RayTracingDesc,&local_18);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogPSODetails @ 145c614d0

bool __cdecl FPipelineFileCacheManager::LogPSODetails(void)

{
  wchar_t *pwVar1;
  
  if (!bOnce) {
    bOnce = true;
    pwVar1 = FCommandLine::Get();
    bCmdLineOption = FParse::Param(pwVar1,L"logpsodetails");
    return bCmdLineOption;
  }
  return bCmdLineOption;
}

// LogPSOtoFileCache @ 145c61520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FPipelineFileCacheManager::LogPSOtoFileCache(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  
  if (!bOnce) {
    bOnce = true;
    pwVar3 = FCommandLine::Get();
    bCmdLineForce = FParse::Param(pwVar3,L"logpso");
    if ((2 < (byte)LogRHI._0_1_) && (bCmdLineForce)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  pTVar1 = CVarPSOFileCacheLogPSO.Ref;
  if (bCmdLineForce != false) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 1) {
    return true;
  }
  return false;
}

// MergePipelineFileCaches @ 145c623c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FPipelineFileCacheManager::MergePipelineFileCaches
          (FString *param_1,FString *param_2,PSOOrder param_3,FString *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  FGuid *pFVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar13;
  TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *pTVar14;
  ulonglong uVar15;
  IFileManager *pIVar16;
  FArchive *pFVar17;
  FPipelineCacheFileFormatPSO *pFVar18;
  FName FVar19;
  ForAnyElementType FVar20;
  undefined1 *puVar21;
  uint *puVar22;
  wchar_t *pwVar23;
  int iVar24;
  longlong lVar25;
  ulong64 uVar26;
  uint uVar27;
  bool *pbVar28;
  uint uVar29;
  undefined1 *puVar30;
  ulonglong uVar31;
  ForElementType<unsigned_int> FVar32;
  undefined1 auStack_a28 [32];
  undefined8 local_a08;
  undefined1 local_9f8;
  undefined1 local_9f7;
  FIdentityFunctor local_9f6;
  FIdentityFunctor local_9f5;
  undefined1 local_9f4 [4];
  longlong *local_9f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_9e8;
  undefined8 local_9c8;
  ulong64 local_9c0;
  longlong *local_9b8;
  undefined8 uStack_9b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  int local_990;
  undefined4 uStack_98c;
  uint local_988;
  uint uStack_984;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_980;
  undefined4 local_978;
  uint uStack_974;
  uint uStack_970;
  undefined4 uStack_96c;
  uint local_968;
  uint uStack_964;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_960;
  undefined4 local_958;
  uint uStack_954;
  uint uStack_950;
  undefined4 uStack_94c;
  undefined8 local_948;
  FString *local_940;
  void *local_938;
  undefined8 local_930;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_928;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_908;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8e8;
  int local_8c8;
  uint local_8c4;
  int local_8c0;
  int local_8bc;
  FIdentityFunctor *local_8b8;
  FIdentityFunctor **local_8b0;
  FIdentityFunctor *local_8a8;
  FIdentityFunctor **local_8a0;
  longlong *local_898;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_890;
  longlong *local_870;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_868;
  undefined1 local_848 [12];
  uint uStack_83c;
  TBitArray<FDefaultBitArrayAllocator> *local_838;
  undefined8 uStack_830;
  longlong local_828;
  int iStack_820;
  undefined4 uStack_81c;
  longlong *local_818;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_810;
  undefined8 uStack_7f0;
  longlong *local_7e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_7e0;
  undefined8 uStack_7c0;
  FArchiveState local_7b8;
  undefined8 local_728;
  void **local_720;
  undefined8 local_718;
  undefined1 local_708 [8];
  undefined1 local_700 [8];
  FString local_6f8;
  FString local_6e8;
  TRangedForIterator local_6d8;
  FGuid local_6a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_698;
  undefined4 local_65c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_658;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_638;
  undefined1 local_618 [120];
  void *local_5a0;
  undefined4 local_598;
  undefined1 local_590 [8];
  undefined1 local_588 [32];
  ForElementType<unsigned_int> local_568;
  uint local_560;
  int local_554;
  undefined1 local_550 [8];
  ForAnyElementType local_548;
  uint local_540;
  undefined1 local_538 [32];
  uint *local_518;
  uint local_510;
  undefined4 local_50c;
  undefined4 local_508;
  int local_504;
  ForElementType<FSetElementId> local_4f8;
  int local_4f0;
  undefined1 local_4e8 [64];
  int local_4a8;
  int local_47c;
  undefined1 local_478 [8];
  undefined1 *local_470;
  int local_468;
  undefined1 local_458 [40];
  int local_430;
  int local_424;
  void *local_418;
  undefined4 local_410;
  undefined1 local_408 [56];
  TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
  local_3d0;
  undefined1 local_378 [40];
  int local_350;
  int local_344;
  void *local_338;
  undefined4 local_330;
  FPipelineCacheFileFormatPSO local_328;
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_a28;
  bVar9 = false;
  local_940 = param_4;
  FPipelineCacheFileData::Open((FPipelineCacheFileData *)local_4e8,param_1);
  FPipelineCacheFileData::Open((FPipelineCacheFileData *)local_408,param_2);
  puVar21 = (undefined1 *)0x0;
  if ((local_4e8._0_8_ == 0x5049504543414348) && (local_408._0_8_ == 0x5049504543414348)) {
    if (local_4e8._12_4_ == local_408._12_4_) {
      if (((local_4e8[0x10] != local_408[0x10]) || (local_4e8._8_4_ != 0x1d)) ||
         (local_408._8_4_ != 0x1d)) goto LAB_145c635ed;
      FPipelineCacheFileData::FPipelineCacheFileData((FPipelineCacheFileData *)local_618);
      local_618._12_4_ = local_4e8._12_4_;
      local_618[0x10] = local_4e8[0x10];
      local_618._0_8_ = 0x5049504543414348;
      local_618._8_4_ = 0x1d;
      local_618._40_8_ = 0;
      pFVar12 = FGuid::NewGuid(&local_6a8);
      local_928._padding_._0_4_ = 0;
      local_928._padding_._4_4_ = 1;
      local_928.UnvisitedBitMask = 0xffffffff;
      local_928.CurrentBitIndex = 0;
      local_928.BaseBitIndex = 0;
      local_618._20_4_ = pFVar12->A;
      local_618._24_4_ = pFVar12->B;
      local_618._28_4_ = pFVar12->C;
      local_618._32_4_ = pFVar12->D;
      local_928.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_458 + 0x10);
      if (local_430 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_928);
      }
      TStack_9e8._padding_ = CONCAT44(local_928._padding_._4_4_,(undefined4)local_928._padding_);
      local_9f0 = (longlong *)local_458;
      TStack_9e8._16_8_ = CONCAT44(local_928.CurrentBitIndex,local_928.UnvisitedBitMask);
      TStack_9e8._24_8_ = CONCAT44(local_928._28_4_,local_928.BaseBitIndex);
      TStack_9e8.Array = local_928.Array;
      local_9c8._0_4_ = local_458._8_4_ - local_424;
      local_838 = local_928.Array;
      iStack_820 = local_458._8_4_ - local_424;
      uStack_81c = local_9c8._4_4_;
      local_848._0_8_ = local_9f0;
      unique0x10001ee1 = TStack_9e8._padding_;
      uStack_830 = TStack_9e8._16_8_;
      local_828 = TStack_9e8._24_8_;
      pTVar13 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_658,(TBitArray<FDefaultBitArrayAllocator> *)(local_458 + 0x10),
                           local_430);
      local_9f0 = (longlong *)local_458;
      TStack_9e8._padding_ = pTVar13->_padding_;
      TStack_9e8.Array = pTVar13->Array;
      TStack_9e8.UnvisitedBitMask = pTVar13->UnvisitedBitMask;
      TStack_9e8.CurrentBitIndex = pTVar13->CurrentBitIndex;
      TStack_9e8._24_8_ = *(undefined8 *)&pTVar13->BaseBitIndex;
      local_9c8._0_4_ = local_458._8_4_ - local_424;
      local_6d8.InitialNum = local_458._8_4_ - local_424;
      local_6d8._44_4_ = local_9c8._4_4_;
      local_6d8._padding_ = (longlong)local_9f0;
      local_6d8._padding_ = TStack_9e8._padding_;
      local_6d8._padding_ = (longlong)TStack_9e8.Array;
      local_6d8._padding_ = TStack_9e8._16_8_;
      local_6d8._padding_ = TStack_9e8._24_8_;
      bVar7 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_848,&local_6d8);
      if (bVar7) {
        do {
          puVar22 = (uint *)((longlong)uStack_830._4_4_ * 0xc0 + *(longlong *)local_848._0_8_);
          if ((puVar22[0x2c] & 1) == 0) {
            TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
            ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>
                      ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                        *)local_588,puVar22,(FPipelineCacheFileFormatPSOMetaData *)(puVar22 + 2));
          }
          uStack_830 = CONCAT44(uStack_830._4_4_,(uint)uStack_830 & ~uStack_83c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_848 + 8));
          bVar7 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!=((TRangedForIterator *)local_848,&local_6d8);
        } while (bVar7);
      }
      local_908.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_378 + 0x10);
      local_908._padding_._0_4_ = 0;
      local_908._padding_._4_4_ = 1;
      local_908.UnvisitedBitMask = 0xffffffff;
      local_908.CurrentBitIndex = 0;
      local_908.BaseBitIndex = 0;
      if (local_350 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_908);
      }
      TStack_9e8._padding_ = CONCAT44(local_908._padding_._4_4_,(undefined4)local_908._padding_);
      local_9f0 = (longlong *)local_378;
      TStack_9e8.CurrentBitIndex = local_908.CurrentBitIndex;
      TStack_9e8.UnvisitedBitMask = local_908.UnvisitedBitMask;
      TStack_9e8._28_4_ = local_908._28_4_;
      TStack_9e8.BaseBitIndex = local_908.BaseBitIndex;
      TStack_9e8.Array = local_908.Array;
      local_9c8 = CONCAT44(local_9c8._4_4_,local_378._8_4_ - local_344);
      TStack_810.Array = local_908.Array;
      uStack_7f0 = local_9c8;
      local_818 = local_9f0;
      TStack_810._padding_ = TStack_9e8._padding_;
      TStack_810._16_8_ = TStack_9e8._16_8_;
      TStack_810._24_8_ = TStack_9e8._24_8_;
      pTVar13 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_638,(TBitArray<FDefaultBitArrayAllocator> *)(local_378 + 0x10),
                           local_350);
      TStack_9e8._padding_ = pTVar13->_padding_;
      pTVar3 = pTVar13->Array;
      uVar4._0_4_ = pTVar13->UnvisitedBitMask;
      uVar4._4_4_ = pTVar13->CurrentBitIndex;
      TStack_9e8.BaseBitIndex = pTVar13->BaseBitIndex;
      TStack_9e8._28_4_ = *(undefined4 *)&pTVar13->field_0x1c;
      TStack_9e8.Array = pTVar3;
      TStack_9e8._16_8_ = uVar4;
      while( true ) {
        plVar6 = local_818;
        if ((int)local_818[1] - *(int *)((longlong)local_818 + 0x34) != (int)uStack_7f0) {
          local_9f8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_9f8);
        }
        if (((TStack_810.CurrentBitIndex == uVar4._4_4_) && (TStack_810.Array == pTVar3)) &&
           (plVar6 == (longlong *)local_378)) break;
        puVar22 = (uint *)(*plVar6 + (longlong)TStack_810.CurrentBitIndex * 0xc0);
        if ((puVar22[0x2c] & 1) == 0) {
          pTVar14 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                            *)local_588,*puVar22);
          puVar30 = &pTVar14->field_0x8;
          if (pTVar14 == (TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *)0x0) {
            puVar30 = puVar21;
          }
          if (puVar30 == (undefined1 *)0x0) {
            TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
            ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>
                      ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                        *)local_588,puVar22,(FPipelineCacheFileFormatPSOMetaData *)(puVar22 + 2));
          }
          else {
            *(ulonglong *)(puVar30 + 0x98) =
                 *(ulonglong *)(puVar30 + 0x98) | *(ulonglong *)(puVar22 + 0x28);
            *(ushort *)(puVar30 + 0xa8) = *(ushort *)(puVar30 + 0xa8) | (ushort)puVar22[0x2c];
          }
        }
        TStack_810.UnvisitedBitMask = TStack_810.UnvisitedBitMask & ~TStack_810._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_810);
      }
      if (param_3 == FirstToLatestUsed) {
        local_8a8 = &local_9f5;
        local_8a0 = &local_8a8;
        if (0 < local_588._8_4_ - local_554) {
          TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Compact((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_588);
          uVar4 = local_588._0_8_;
          iVar24 = local_588._8_4_ - local_554;
          if ((iVar24 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          AlgoImpl::
          IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>
                    ((TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)uVar4,iVar24,
                     local_9f5,
                     (FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>_>
                      *)&local_8a0);
        }
        uVar29 = local_540;
        uVar31 = (ulonglong)local_540;
        if ((ForElementType<FSetElementId>)local_548.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_548,0,0,4);
        }
        if (uVar29 != 0) {
          uVar11 = uVar29;
          if (uVar29 < 2) {
            if ((ForElementType<FSetElementId>)local_548.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar11 = 0;
              goto LAB_145c62b6d;
            }
          }
          else {
LAB_145c62b6d:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_548,0,uVar11,4);
          }
          if (0 < (int)uVar29) {
            puVar30 = puVar21;
            do {
              FVar20.Data = (FScriptContainerElement *)local_550;
              if ((ForElementType<FSetElementId>)local_548.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar20.Data = local_548.Data;
              }
              uVar15 = (ulonglong)puVar30 & (longlong)(int)uVar29 - 1U;
              puVar30 = puVar30 + 1;
              *(undefined4 *)((longlong)FVar20.Data + uVar15 * 4) = 0xffffffff;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
        }
        if (local_540 != 0) {
          pTStack_980 = (TBitArray<FDefaultBitArrayAllocator> *)(local_588 + 0x10);
          local_988 = 0;
          uStack_984 = 1;
          uStack_974 = 0;
          uStack_970 = 0;
          if (local_560 != 0) {
            FVar32 = (ForElementType<unsigned_int>)((longlong)local_588 + 0x10);
            if (local_568 != (ForElementType<unsigned_int>)0x0) {
              FVar32 = local_568;
            }
            uVar29 = *(uint *)FVar32;
            puVar30 = puVar21;
            while (uVar29 == 0) {
              uStack_970 = (int)puVar30 + 0x20;
              puVar30 = (undefined1 *)(ulonglong)uStack_970;
              iVar24 = (int)puVar21;
              local_988 = iVar24 + 1;
              puVar21 = (undefined1 *)(ulonglong)local_988;
              if ((int)((local_560 - 1) + ((int)(local_560 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_988) goto LAB_145c62c79;
              uVar29 = ((uint *)((longlong)FVar32 + 4))[iVar24];
            }
            uStack_984 = -uVar29 & uVar29;
            uVar31 = (ulonglong)uStack_984 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_8c8 = (int)lVar25;
            uStack_974 = (uStack_970 - 1) + local_8c8;
            puVar21 = (undefined1 *)(ulonglong)uStack_974;
            if ((int)local_560 < (int)uStack_974) {
LAB_145c62c79:
              puVar21 = (undefined1 *)(ulonglong)local_560;
              uStack_974 = local_560;
            }
          }
          local_978 = 0xffffffff;
          local_870 = (longlong *)local_588;
          local_868._padding_ = CONCAT44(uStack_984,local_988);
          local_868.CurrentBitIndex = uStack_974;
          local_868.UnvisitedBitMask = 0xffffffff;
          local_868._28_4_ = uStack_96c;
          local_868.BaseBitIndex = uStack_970;
          local_868.Array = pTStack_980;
          if ((int)puVar21 < (int)local_560) {
            do {
              puVar22 = (uint *)((longlong)(int)puVar21 * 0xc0 + *local_870);
              uVar29 = local_540 - 1 & *puVar22;
              puVar22[0x2f] = uVar29;
              FVar20.Data = (FScriptContainerElement *)local_550;
              if ((ForElementType<FSetElementId>)local_548.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar20.Data = local_548.Data;
              }
              uVar31 = (longlong)(int)local_540 - 1U & (longlong)(int)uVar29;
              puVar22[0x2e] = *(uint *)((longlong)FVar20.Data + uVar31 * 4);
              *(int *)((longlong)FVar20.Data + uVar31 * 4) = (int)puVar21;
              local_868.UnvisitedBitMask = local_868.UnvisitedBitMask & ~local_868._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_868);
              puVar21 = (undefined1 *)(ulonglong)(uint)local_868.CurrentBitIndex;
            } while (local_868.CurrentBitIndex < (local_868.Array)->NumBits);
          }
        }
      }
      else if (param_3 == MostToLeastUsed) {
        local_8b8 = &local_9f6;
        local_8b0 = &local_8b8;
        if (0 < local_588._8_4_ - local_554) {
          TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Compact((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_588);
          uVar4 = local_588._0_8_;
          iVar24 = local_588._8_4_ - local_554;
          if ((iVar24 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          AlgoImpl::
          IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>_>_>
                    ((TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)uVar4,iVar24,
                     local_9f6,
                     (FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>_>
                      *)&local_8b0);
        }
        uVar29 = local_540;
        uVar31 = (ulonglong)local_540;
        if ((ForElementType<FSetElementId>)local_548.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_548,0,0,4);
        }
        if (uVar29 != 0) {
          uVar11 = uVar29;
          if (uVar29 < 2) {
            if ((ForElementType<FSetElementId>)local_548.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar11 = 0;
              goto LAB_145c628d7;
            }
          }
          else {
LAB_145c628d7:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_548,0,uVar11,4);
          }
          if (0 < (int)uVar29) {
            puVar30 = puVar21;
            do {
              FVar20.Data = (FScriptContainerElement *)local_550;
              if ((ForElementType<FSetElementId>)local_548.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar20.Data = local_548.Data;
              }
              uVar15 = (ulonglong)puVar30 & (longlong)(int)uVar29 - 1U;
              puVar30 = puVar30 + 1;
              *(undefined4 *)((longlong)FVar20.Data + uVar15 * 4) = 0xffffffff;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
        }
        if (local_540 != 0) {
          pTStack_960 = (TBitArray<FDefaultBitArrayAllocator> *)(local_588 + 0x10);
          local_968 = 0;
          uStack_964 = 1;
          uStack_954 = 0;
          uStack_950 = 0;
          if (local_560 != 0) {
            FVar32 = (ForElementType<unsigned_int>)((longlong)local_588 + 0x10);
            if (local_568 != (ForElementType<unsigned_int>)0x0) {
              FVar32 = local_568;
            }
            uVar29 = *(uint *)FVar32;
            puVar30 = puVar21;
            while (uVar29 == 0) {
              uStack_950 = (int)puVar30 + 0x20;
              puVar30 = (undefined1 *)(ulonglong)uStack_950;
              iVar24 = (int)puVar21;
              local_968 = iVar24 + 1;
              puVar21 = (undefined1 *)(ulonglong)local_968;
              if ((int)((local_560 - 1) + ((int)(local_560 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_968) goto LAB_145c629db;
              uVar29 = ((uint *)((longlong)FVar32 + 4))[iVar24];
            }
            uStack_964 = -uVar29 & uVar29;
            uVar31 = (ulonglong)uStack_964 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_8bc = (int)lVar25;
            uStack_954 = (uStack_950 - 1) + local_8bc;
            puVar21 = (undefined1 *)(ulonglong)uStack_954;
            if ((int)local_560 < (int)uStack_954) {
LAB_145c629db:
              puVar21 = (undefined1 *)(ulonglong)local_560;
              uStack_954 = local_560;
            }
          }
          local_958 = 0xffffffff;
          local_898 = (longlong *)local_588;
          local_890._padding_ = CONCAT44(uStack_964,local_968);
          local_890.CurrentBitIndex = uStack_954;
          local_890.UnvisitedBitMask = 0xffffffff;
          local_890._28_4_ = uStack_94c;
          local_890.BaseBitIndex = uStack_950;
          local_890.Array = pTStack_960;
          if ((int)puVar21 < (int)local_560) {
            do {
              puVar22 = (uint *)((longlong)(int)puVar21 * 0xc0 + *local_898);
              uVar29 = local_540 - 1 & *puVar22;
              puVar22[0x2f] = uVar29;
              FVar20.Data = (FScriptContainerElement *)local_550;
              if ((ForElementType<FSetElementId>)local_548.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar20.Data = local_548.Data;
              }
              uVar31 = (longlong)(int)local_540 - 1U & (longlong)(int)uVar29;
              puVar22[0x2e] = *(uint *)((longlong)FVar20.Data + uVar31 * 4);
              *(int *)((longlong)FVar20.Data + uVar31 * 4) = (int)puVar21;
              local_890.UnvisitedBitMask = local_890.UnvisitedBitMask & ~local_890._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_890);
              puVar21 = (undefined1 *)(ulonglong)(uint)local_890.CurrentBitIndex;
            } while (local_890.CurrentBitIndex < (local_890.Array)->NumBits);
          }
        }
      }
      local_590._0_4_ = param_3;
      pIVar16 = IFileManager::Get();
      if ((local_940->Data).ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(local_940->Data).AllocatorInstance.Data;
      }
      pFVar17 = (FArchive *)(**(code **)((longlong)*pIVar16 + 0x20))(pIVar16,pwVar23,0);
      if (pFVar17 == (FArchive *)0x0) {
        if (1 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else {
        (**(code **)(*(longlong *)pFVar17 + 0x130))(pFVar17,0x1d);
        (**(code **)(*(longlong *)pFVar17 + 0x1b8))(pFVar17,0);
        ::operator<<(pFVar17,(FPipelineCacheFileFormatHeader *)local_618);
        local_9c0 = (**(code **)(*(longlong *)pFVar17 + 0x28))(pFVar17);
        local_8e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_588 + 0x10);
        local_538._0_8_ = 0;
        local_538._8_8_ = 0;
        local_518 = (uint *)0x0;
        local_510 = 0;
        local_50c = 0x80;
        local_508 = 0xffffffff;
        local_504 = 0;
        local_4f8 = (ForElementType<FSetElementId>)0x0;
        local_4f0 = 0;
        local_8e8._padding_._0_4_ = 0;
        local_8e8._padding_._4_4_ = 1;
        local_8e8.UnvisitedBitMask = 0xffffffff;
        local_8e8.CurrentBitIndex = 0;
        local_8e8.BaseBitIndex = 0;
        if (local_560 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8e8);
        }
        uStack_9b0 = CONCAT44(local_8e8._padding_._4_4_,(undefined4)local_8e8._padding_);
        local_9b8 = (longlong *)local_588;
        uStack_9a0._4_4_ = local_8e8.CurrentBitIndex;
        uStack_9a0._0_4_ = local_8e8.UnvisitedBitMask;
        uStack_998._4_4_ = local_8e8._28_4_;
        uStack_998._0_4_ = local_8e8.BaseBitIndex;
        local_990 = local_588._8_4_ - local_554;
        pTStack_9a8 = local_8e8.Array;
        uStack_7c0 = CONCAT44(uStack_98c,local_990);
        TStack_7e0.Array = local_8e8.Array;
        local_7e8 = local_9b8;
        TStack_7e0._padding_ = uStack_9b0;
        TStack_7e0._16_8_ = uStack_9a0;
        TStack_7e0._24_8_ = uStack_998;
        pTVar13 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_698,(TBitArray<FDefaultBitArrayAllocator> *)(local_588 + 0x10),
                             local_560);
        uStack_9b0 = pTVar13->_padding_;
        pTVar3 = pTVar13->Array;
        uVar5._0_4_ = pTVar13->UnvisitedBitMask;
        uVar5._4_4_ = pTVar13->CurrentBitIndex;
        uStack_998 = *(undefined8 *)&pTVar13->BaseBitIndex;
        uVar26 = local_9c0;
        pTStack_9a8 = pTVar3;
        uStack_9a0 = uVar5;
        while( true ) {
          plVar6 = local_7e8;
          if ((int)local_7e8[1] - *(int *)((longlong)local_7e8 + 0x34) != (int)uStack_7c0) {
            local_9f7 = 0;
            `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_9f7);
          }
          uVar29 = local_510;
          if (((TStack_7e0.CurrentBitIndex == uVar5._4_4_) && (TStack_7e0.Array == pTVar3)) &&
             (plVar6 == (longlong *)local_588)) break;
          pbVar28 = (bool *)((longlong)TStack_7e0.CurrentBitIndex * 0xc0 + *plVar6);
          local_328.ComputeDesc.ComputeShader.Hash[0] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[1] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[2] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[3] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[4] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[5] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[6] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[7] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[8] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[9] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[10] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0xb] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0xc] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0xd] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0xe] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0xf] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0x10] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0x11] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0x12] = '\0';
          local_328.ComputeDesc.ComputeShader.Hash[0x13] = '\0';
          FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor
                    (&local_328.GraphicsDesc);
          FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
          FPipelineFileCacheRayTracingDesc(&local_328.RayTracingDesc);
          if (((*(uint *)(pbVar28 + 0x24) == local_4e8._32_4_ &&
               *(uint *)(pbVar28 + 0x20) == local_4e8._28_4_) &&
              *(uint *)(pbVar28 + 0x1c) == local_4e8._24_4_) &&
              *(uint *)(pbVar28 + 0x18) == local_4e8._20_4_) {
            if (local_4a8 != local_47c) {
              puVar21 = local_478;
              if (local_470 != (undefined1 *)0x0) {
                puVar21 = local_470;
              }
              uVar29 = *(uint *)(puVar21 + (ulonglong)(local_468 - 1U & *(uint *)pbVar28) * 4);
              while (uVar29 != 0xffffffff) {
                puVar22 = (uint *)((longlong)(int)uVar29 * 0x2d8 + local_4e8._56_8_);
                if (*puVar22 == *(uint *)pbVar28) {
                  if (puVar22 != (uint *)0x0) goto LAB_145c62ff0;
                  goto LAB_145c62fce;
                }
                uVar29 = puVar22[0xb4];
              }
            }
            puVar22 = (uint *)0x0;
LAB_145c62fce:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar9) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
LAB_145c62ff0:
            pFVar18 = (FPipelineCacheFileFormatPSO *)(puVar22 + 2);
LAB_145c63035:
            FPipelineCacheFileFormatPSO::operator=(&local_328,pFVar18);
            *(ulong64 *)(pbVar28 + 8) = uVar26;
            local_938 = (void *)0x0;
            local_930 = 0;
            *(undefined8 *)(pbVar28 + 0x18) = local_618._20_8_;
            *(undefined8 *)(pbVar28 + 0x20) = local_618._28_8_;
            local_948 = 0;
            local_7b8._padding_ = 0;
            local_7b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
            local_7b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
            local_7b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
            local_7b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
            local_7b8._40_8_ = 0;
            local_7b8.ArSerializingDefaults = 0;
            local_7b8.ArPortFlags = 0;
            local_7b8.ArMaxSerializeSize = 0;
            local_7b8.ArUEVer.FileVersionUE4 = 0;
            local_7b8.ArUEVer.FileVersionUE5 = 0;
            local_7b8.ArLicenseeUEVer = 0;
            local_7b8.ArEngineVer.Major = 0;
            local_7b8.ArEngineVer.Minor = 0;
            local_7b8.ArEngineVer.Patch = 0;
            local_7b8.ArEngineVer._6_2_ = 0;
            local_7b8.ArEngineVer.Changelist = 0;
            local_7b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
            local_7b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
            local_7b8.SavePackageData = (FArchiveSavePackageData *)0x0;
            local_7b8.SerializedProperty = (FProperty *)0x0;
            local_7b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
            local_7b8.bCustomVersionsAreReset = false;
            local_7b8._129_7_ = 0;
            local_7b8.NextProxy = (FArchiveState *)0x0;
            FArchiveState::FArchiveState(&local_7b8);
            local_728 = 0;
            local_7b8._padding_ =
                 (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
            local_720 = &local_938;
            local_718 = 0;
            FArchiveState::SetIsSaving(&local_7b8,true);
            (**(code **)(local_7b8._padding_ + 0x108))(&local_7b8,0);
            local_7b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
            FArchiveState::SetGameNetVer(&local_7b8,0x1d);
            ::operator<<((FArchive *)&local_7b8,&local_328);
            (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17);
            iVar24 = *(int *)(local_720 + 1);
            *(longlong *)(pbVar28 + 0x10) = (longlong)iVar24;
            uVar26 = uVar26 + (longlong)iVar24;
            FArchive::~FArchive((FArchive *)&local_7b8);
            if (local_938 != (void *)0x0) {
              FMemory::Free(local_938);
            }
            puVar21 = local_60;
            lVar25 = 8;
            do {
              puVar1 = (undefined8 *)(puVar21 + -0x18);
              puVar21 = puVar21 + -0x18;
              lVar25 = lVar25 + -1;
              if ((void *)*puVar1 != (void *)0x0) {
                FMemory::Free((void *)*puVar1);
              }
            } while (lVar25 != 0);
          }
          else {
            if (((*(uint *)(pbVar28 + 0x24) == local_408._32_4_ &&
                 *(uint *)(pbVar28 + 0x20) == local_408._28_4_) &&
                *(uint *)(pbVar28 + 0x1c) == local_408._24_4_) &&
                *(uint *)(pbVar28 + 0x18) == local_408._20_4_) {
              pFVar18 = TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                        ::FindChecked(&local_3d0,*(uint *)pbVar28);
              goto LAB_145c63035;
            }
            TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
            Emplace<unsigned_int_const_&>
                      ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                       local_538,&local_8c4,pbVar28);
            FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
            ~FPipelineFileCacheRayTracingDesc(&local_328.RayTracingDesc);
          }
          TStack_7e0.UnvisitedBitMask = TStack_7e0.UnvisitedBitMask & ~TStack_7e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_7e0);
        }
        iVar24 = 0;
        uStack_998._0_4_ = 0;
        uVar11 = 1;
        uStack_9a0._4_4_ = 0;
        if (local_510 != 0) {
          puVar22 = (uint *)(local_538 + 0x10);
          if (local_518 != (uint *)0x0) {
            puVar22 = local_518;
          }
          uVar27 = *puVar22;
          while (uVar27 == 0) {
            lVar25 = (longlong)iVar24;
            uStack_998._0_4_ = (int)uStack_998 + 0x20;
            iVar24 = iVar24 + 1;
            uStack_9a0._4_4_ = local_510;
            if ((int)((local_510 - 1) + ((int)(local_510 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
            goto LAB_145c63280;
            uVar27 = (puVar22 + 1)[lVar25];
          }
          uVar11 = -uVar27 & uVar27;
          uVar31 = (ulonglong)uVar11 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_8c0 = (int)lVar25;
          uStack_9a0._4_4_ = (int)uStack_998 + -1 + local_8c0;
          if ((int)local_510 < (int)uStack_9a0._4_4_) {
            uStack_9a0._4_4_ = local_510;
          }
        }
LAB_145c63280:
        local_9f0 = (longlong *)local_538;
        TStack_9e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_538 + 0x10);
        uVar27 = local_510 & 0xffffffe0;
        local_990 = local_538._8_4_ - local_504;
        uStack_9a0._0_4_ = 0xffffffff;
        uStack_9b0 = CONCAT44(uVar11,iVar24);
        uStack_998._4_4_ = local_65c;
        TStack_9e8._padding_ = uStack_9b0;
        iVar24 = (int)local_510 >> 5;
        local_9c8 = CONCAT44(uStack_98c,local_990);
        bVar10 = (byte)local_510;
        TStack_9e8.UnvisitedBitMask = 0xffffffff;
        TStack_9e8.CurrentBitIndex = uStack_9a0._4_4_;
        TStack_9e8.BaseBitIndex = (int)uStack_998;
        TStack_9e8._28_4_ = local_65c;
        local_9c0 = uVar26;
        local_9b8 = local_9f0;
        pTStack_9a8 = TStack_9e8.Array;
        if (((int)local_510 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        if (uVar29 != local_510) {
          puVar22 = (uint *)(local_538 + 0x10);
          if (local_518 != (uint *)0x0) {
            puVar22 = local_518;
          }
          uVar29 = -1 << (bVar10 & 0x1f) & puVar22[iVar24];
          while (uVar29 == 0) {
            lVar25 = (longlong)iVar24;
            uVar27 = uVar27 + 0x20;
            iVar24 = iVar24 + 1;
            uVar29 = local_510;
            if ((int)((local_510 - 1) + ((int)(local_510 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
            goto LAB_145c633a0;
            uVar29 = (puVar22 + 1)[lVar25];
          }
          uVar31 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
          lVar25 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          uVar29 = (uVar27 - 1) + (int)lVar25;
          if ((int)local_510 < (int)uVar29) {
            uVar29 = local_510;
          }
        }
LAB_145c633a0:
        while( true ) {
          plVar6 = local_9f0;
          if ((int)local_9f0[1] - *(int *)((longlong)local_9f0 + 0x34) != (int)local_9c8) {
            `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_9f4);
          }
          if (((TStack_9e8.CurrentBitIndex == uVar29) &&
              (TStack_9e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_538 + 0x10))) &&
             (plVar6 == (longlong *)local_538)) break;
          uVar11 = *(uint *)(*plVar6 + (longlong)TStack_9e8.CurrentBitIndex * 0xc);
          if (local_588._8_4_ != local_554) {
            FVar20.Data = (FScriptContainerElement *)local_550;
            if ((ForElementType<FSetElementId>)local_548.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar20.Data = local_548.Data;
            }
            for (iVar24 = *(int *)((longlong)FVar20.Data +
                                  (longlong)(int)(local_540 - 1 & uVar11) * 4); iVar24 != -1;
                iVar24 = *(int *)(local_588._0_8_ + (longlong)iVar24 * 0xc0 + 0xb8)) {
              if (*(uint *)&((FScriptContainerElement *)(local_588._0_8_ + (longlong)iVar24 * 0xc0))
                            ->field_0x0 == uVar11) {
                TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                                 *)local_588,iVar24);
                break;
              }
            }
          }
          TStack_9e8.UnvisitedBitMask = TStack_9e8.UnvisitedBitMask & ~TStack_9e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_9e8);
        }
        (**(code **)(*(longlong *)pFVar17 + 0x1b8))(pFVar17,0);
        uVar26 = local_9c0;
        local_618._40_8_ = local_9c0;
        ::operator<<(pFVar17,(FPipelineCacheFileFormatHeader *)local_618);
        (**(code **)(*(longlong *)pFVar17 + 0x1b8))(pFVar17,uVar26);
        ::operator<<(pFVar17,(FPipelineCacheFileFormatTOC *)local_590);
        (**(code **)(*(longlong *)pFVar17 + 0x208))(pFVar17);
        bVar10 = pFVar17->field_0x29 & 2;
        bVar9 = bVar10 == 0;
        if ((1 < (byte)LogRHI._0_1_) && (bVar10 != 0)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        (**(code **)(*(longlong *)pFVar17 + 0x210))(pFVar17);
        (*(code *)**(undefined8 **)pFVar17)(pFVar17,1);
        local_4f0 = 0;
        if (local_4f8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_4f8);
        }
        TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_538);
      }
      local_540 = 0;
      if ((ForElementType<FSetElementId>)local_548.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_548.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_588);
      local_598 = 0;
      if (local_5a0 != (void *)0x0) {
        FMemory::Free(local_5a0);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_618 + 0x38));
      goto LAB_145c63717;
    }
  }
  else {
LAB_145c635ed:
    if (local_4e8._12_4_ == local_408._12_4_) {
      if (local_4e8[0x10] == local_408[0x10]) {
        if (local_4e8._8_4_ == local_408._8_4_) {
          if (1 < (byte)LogRHI._0_1_) {
            local_a08 = 0x5049504543414348;
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
        }
        else if (1 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Incompatible_fi_1511031a8,
                     (FLogCategoryBase *)&LogRHI);
        }
      }
      else if (1 < (byte)LogRHI._0_1_) {
        FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_700);
        ::FName::ToString((FName *)FVar19,&local_6e8);
        FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_708);
        ::FName::ToString((FName *)FVar19,&local_6f8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_145c63717;
    }
  }
  if (1 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
LAB_145c63717:
  local_330 = 0;
  if (local_338 != (void *)0x0) {
    FMemory::Free(local_338);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_378);
  local_3d0.Pairs.HashSize = 0;
  if (local_3d0.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3d0.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_3d0);
  local_410 = 0;
  if (local_418 != (void *)0x0) {
    FMemory::Free(local_418);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_458);
  local_468 = 0;
  if (local_470 != (undefined1 *)0x0) {
    FMemory::Free(local_470);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_4e8 + 0x38));
  return bVar9;
}

// NumPSOsLogged @ 145c637f0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

uint __cdecl FPipelineFileCacheManager::NumPSOsLogged(void)

{
  code *pcVar1;
  byte bVar2;
  TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  *pTVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  uint uStack_11c;
  undefined4 uStack_10c;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  uVar6 = 0;
  bVar4 = IsPipelineFileCacheEnabled();
  if (!bVar4) {
    return 0;
  }
  bVar4 = LogPSOtoFileCache();
  if (!bVar4) {
    return 0;
  }
  AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
  if (0 < (int)(NewPSOUsage._8_4_ - NewPSOUsage._52_4_)) {
    iVar12 = 0;
    iVar13 = 0;
    uVar10 = NewPSOUsage._40_4_;
    uVar5 = 1;
    uStack_11c = 0;
    if (uVar10 != 0) {
      puVar14 = (uint *)&NewPSOUsage.field_0x10;
      if (NewPSOUsage._32_8_ != 0) {
        puVar14 = (uint *)NewPSOUsage._32_8_;
      }
      uVar5 = *puVar14;
      while (uVar5 == 0) {
        lVar7 = (longlong)iVar12;
        iVar13 = iVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar5 = 1;
        uStack_11c = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_145c638ff;
        uVar5 = puVar14[lVar7 + 1];
      }
      uVar5 = -uVar5 & uVar5;
      uVar9 = (ulonglong)uVar5 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res18 = (int)lVar7;
      uStack_11c = iVar13 + -1 + local_res18;
      if ((int)uVar10 < (int)uStack_11c) {
        uStack_11c = uVar10;
      }
    }
LAB_145c638ff:
    bVar2 = NewPSOUsage._40_1_;
    uVar15 = uVar10 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uVar5,iVar12);
    TStack_c0.CurrentBitIndex = uStack_11c;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._28_4_ = local_4c;
    TStack_c0.BaseBitIndex = iVar13;
    uStack_a0 = CONCAT44(uStack_10c,NewPSOUsage._8_4_ - NewPSOUsage._52_4_);
    iVar13 = (int)uVar10 >> 5;
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&NewPSOUsage.field_0x10;
    uVar5 = uVar10;
    if ((int)uVar10 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar5 = NewPSOUsage._40_4_;
    }
    if (uVar10 != uVar5) {
      lVar7 = 0x154be5c10;
      if (NewPSOUsage._32_8_ != 0) {
        lVar7 = NewPSOUsage._32_8_;
      }
      uVar10 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar13 * 4);
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar10 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_145c63a30;
        uVar10 = *(uint *)(lVar7 + 4 + lVar8 * 4);
      }
      uVar9 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res20 = (int)lVar7;
      uVar10 = local_res20 + -1 + uVar15;
      if ((int)uVar5 < (int)uVar10) {
        uVar10 = uVar5;
      }
    }
LAB_145c63a30:
    while( true ) {
      if (NewPSOUsage._8_4_ - NewPSOUsage._52_4_ != (int)uStack_a0) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPSOUsageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_c0.CurrentBitIndex == uVar10) &&
         (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&NewPSOUsage.field_0x10))
      break;
      puVar14 = (uint *)((longlong)TStack_c0.CurrentBitIndex * 0x20 + NewPSOUsage._0_8_);
      uVar5 = *puVar14;
      if (Stats._8_4_ != Stats._52_4_) {
        lVar7 = 0x154be5c88;
        if (Stats._64_8_ != 0) {
          lVar7 = Stats._64_8_;
        }
        iVar13 = *(int *)(lVar7 + (ulonglong)(Stats._72_4_ - 1 & uVar5) * 4);
        while (iVar13 != -1) {
          lVar7 = Stats._0_8_ + (longlong)iVar13 * 0x18;
          if (*(uint *)(Stats._0_8_ + (longlong)iVar13 * 0x18) == uVar5) {
            if (((lVar7 != 0) && (*(longlong *)(lVar7 + 8) != 0)) &&
               (0 < *(longlong *)(*(longlong *)(lVar7 + 8) + 0x18))) goto LAB_145c63ae6;
            break;
          }
          iVar13 = *(int *)(lVar7 + 0x10);
        }
      }
      if ((puVar14[5] & 1) != 0) {
LAB_145c63ae6:
        uVar6 = uVar6 + 1;
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    if (uVar6 != 0) goto LAB_145c63d78;
  }
  iVar13 = 0;
  uVar5 = 1;
  if (NumNewPSOs != 0) {
    iVar12 = 0;
    uVar15 = NewPSOs.Elements._40_4_;
    uVar10 = 0;
    if (uVar15 != 0) {
      puVar14 = (uint *)&NewPSOs.Elements.field_0x10;
      if (NewPSOs.Elements._32_8_ != 0) {
        puVar14 = (uint *)NewPSOs.Elements._32_8_;
      }
      uVar10 = *puVar14;
      iVar12 = 0;
      while (uVar10 == 0) {
        lVar7 = (longlong)iVar13;
        iVar12 = iVar12 + 0x20;
        iVar13 = iVar13 + 1;
        uVar10 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_145c63b9e;
        uVar10 = puVar14[lVar7 + 1];
      }
      uVar5 = -uVar10 & uVar10;
      uVar9 = (ulonglong)uVar5 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar10 = iVar12 + -1 + (int)lVar7;
      if ((int)uVar15 < (int)uVar10) {
        uVar10 = uVar15;
      }
    }
LAB_145c63b9e:
    bVar2 = NewPSOs.Elements._40_1_;
    uVar11 = uVar15 & 0xffffffe0;
    uVar9 = NewPSOs.Elements._40_8_ & 0xffffffff;
    TStack_90._padding_ = CONCAT44(uVar5,iVar13);
    TStack_90.CurrentBitIndex = uVar10;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    local_98 = &NewPSOs;
    TStack_90._28_4_ = uStack_11c;
    TStack_90.BaseBitIndex = iVar12;
    uStack_70 = CONCAT44(uStack_cc,NewPSOs.Elements._8_4_ - NewPSOs.Elements._52_4_);
    iVar13 = (int)uVar15 >> 5;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&NewPSOs.Elements.field_0x10;
    if (((int)uVar15 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    uVar5 = NewPSOs.Elements._40_4_;
    if (uVar15 != uVar5) {
      uVar9 = NewPSOs.Elements._40_8_ & 0xffffffff;
      lVar7 = 0x154be5cb0;
      if (NewPSOs.Elements._32_8_ != 0) {
        lVar7 = NewPSOs.Elements._32_8_;
      }
      uVar10 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar13 * 4);
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar13;
        uVar11 = uVar11 + 0x20;
        iVar13 = iVar13 + 1;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_145c63cb0;
        uVar10 = *(uint *)(lVar7 + 4 + lVar8 * 4);
      }
      uVar9 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar11 = (int)lVar7 + -1 + uVar11;
      if ((int)uVar5 < (int)uVar11) {
        uVar11 = uVar5;
      }
      uVar9 = (ulonglong)uVar11;
    }
LAB_145c63cb0:
    while( true ) {
      pTVar3 = local_98;
      if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
          (int)uStack_70) {
        `TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_90.CurrentBitIndex == (int)uVar9) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&NewPSOs.Elements.field_0x10))
         && (pTVar3 == &NewPSOs)) break;
      uVar5 = ::GetTypeHash((FPipelineCacheFileFormatPSO *)
                            ((longlong)TStack_90.CurrentBitIndex * 0x2d0 +
                            *(longlong *)&pTVar3->Elements));
      if (Stats._8_4_ != Stats._52_4_) {
        lVar7 = 0x154be5c88;
        if (Stats._64_8_ != 0) {
          lVar7 = Stats._64_8_;
        }
        iVar13 = *(int *)(lVar7 + (ulonglong)(Stats._72_4_ - 1 & uVar5) * 4);
        while (iVar13 != -1) {
          lVar7 = Stats._0_8_ + (longlong)iVar13 * 0x18;
          if (*(uint *)(Stats._0_8_ + (longlong)iVar13 * 0x18) == uVar5) {
            if (((lVar7 != 0) && (*(longlong *)(lVar7 + 8) != 0)) &&
               (0 < *(longlong *)(*(longlong *)(lVar7 + 8) + 0x18))) {
              uVar6 = uVar6 + 1;
            }
            break;
          }
          iVar13 = *(int *)(lVar7 + 0x10);
        }
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
LAB_145c63d78:
  ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
  return uVar6;
}

// OnPipelineStateLogged @ 145c63dd0

TMulticastDelegate<void___cdecl(FPipelineCacheFileFormatPSO_const_&),FDefaultDelegateUserPolicy> *
__cdecl FPipelineFileCacheManager::OnPipelineStateLogged(void)

{
  return &PSOLoggedEvent;
}

// OpenPipelineFileCache @ 145c659b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPipelineFileCacheManager::OpenPipelineFileCache
          (FString *param_1,FString *param_2,EShaderPlatform param_3,FGuid *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FPipelineCacheFile *pFVar7;
  FPipelineCacheFile *pFVar8;
  ulong64 uVar9;
  int iVar10;
  wchar_t *pwVar11;
  undefined1 local_78 [8];
  FPipelineCacheFile *local_70;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  FString *local_48;
  FPipelineCacheFile **local_40;
  FGuid *local_38;
  FString *local_30;
  
  pFVar8 = (FPipelineCacheFile *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  bVar3 = false;
  param_4->A = 0;
  param_4->B = 0;
  param_4->C = 0;
  param_4->D = 0;
  bVar2 = IsPipelineFileCacheEnabled();
  if (bVar2) {
    AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    iVar6 = (param_1->Data).ArrayNum;
    if (iVar6 == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar10 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar10 = 0;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
    iVar6 = TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                        *)&FileCacheMap,uVar5,param_1);
    if (iVar6 == -1) {
      pFVar7 = ::operator_new(200);
      if (pFVar7 != (FPipelineCacheFile *)0x0) {
        (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->Name).Data.ArrayNum = 0;
        (pFVar7->Name).Data.ArrayMax = 0;
        (pFVar7->PlatformName).ComparisonIndex = 0;
        (pFVar7->PlatformName).Number = 0;
        (pFVar7->TOC).SortedOrder = MostToLeastUsed;
        *(undefined8 *)&(pFVar7->TOC).MetaData = 0;
        *(undefined8 *)&(pFVar7->TOC).MetaData.field_0x8 = 0;
        *(undefined8 *)&(pFVar7->TOC).MetaData.field_0x20 = 0;
        pFVar7->TOCOffset = 0;
        *(undefined4 *)&(pFVar7->TOC).MetaData.field_0x28 = 0;
        *(undefined4 *)&(pFVar7->TOC).MetaData.field_0x2c = 0x80;
        *(undefined4 *)&(pFVar7->TOC).MetaData.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar7->TOC).MetaData.field_0x34 = 0;
        *(undefined8 *)&(pFVar7->TOC).MetaData.field_0x40 = 0;
        *(undefined4 *)&(pFVar7->TOC).MetaData.field_0x48 = 0;
        (pFVar7->FileGuid).A = 0;
        (pFVar7->FileGuid).B = 0;
        (pFVar7->FileGuid).C = 0;
        (pFVar7->FileGuid).D = 0;
        (pFVar7->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->FilePath).Data.ArrayNum = 0;
        (pFVar7->FilePath).Data.ArrayMax = 0;
        (pFVar7->AsyncFileHandle).Object = (IAsyncReadFileHandle *)0x0;
        (pFVar7->AsyncFileHandle).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar7->RecordingFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->RecordingFilename).Data.ArrayNum = 0;
        (pFVar7->RecordingFilename).Data.ArrayMax = 0;
        pFVar7->CacheStatus = Unknown;
        pFVar8 = pFVar7;
      }
      local_70 = pFVar8;
      bVar3 = FPipelineCacheFile::OpenPipelineFileCache(pFVar8,param_2,param_3,param_4);
      pFVar8 = local_70;
      if (bVar3) {
        if (3 < (byte)LogRHI._0_1_) {
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          FGuid::AppendString(&local_70->FileGuid,&local_68,Digits);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        local_40 = &local_70;
        local_48 = param_1;
        TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_&&>_>
                  ((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                    *)&FileCacheMap,
                   (TPairInitializer<FString_const_&,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_&&>
                    *)&stack0x00000020,(bool *)&local_48);
        uVar9 = CityHash64((char *)param_4,0x10);
        iVar6 = TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FGuid>
                          ((TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
                            *)&GameGuidToCacheKey,(uint)uVar9,param_4);
        if ((iVar6 != -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GameGuidToCacheKey.Contains(OutGameFileGuid)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                               ,0xd07,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        local_38 = param_4;
        local_30 = param_1;
        TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FGuid_const_&,FString_const_&>_>
                  ((TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
                    *)&GameGuidToCacheKey,
                   (TPairInitializer<FGuid_const_&,FString_const_&> *)local_78,(bool *)&local_38);
      }
      else {
        local_70 = (FPipelineCacheFile *)0x0;
        TDefaultDelete<FPipelineCacheFile>::operator()
                  ((TDefaultDelete<FPipelineCacheFile> *)&local_70,pFVar8);
      }
      TDefaultDelete<FPipelineCacheFile>::operator()
                ((TDefaultDelete<FPipelineCacheFile> *)&local_70,local_70);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  }
  return bVar3;
}

// OpenUserPipelineFileCache @ 145c66c90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPipelineFileCacheManager::OpenUserPipelineFileCache
          (FString *param_1,FString *param_2,EShaderPlatform param_3,FGuid *param_4)

{
  FGuid *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FPipelineCacheFile *pFVar10;
  ulong64 uVar11;
  FPipelineCacheFile *this;
  undefined1 local_58 [8];
  FPipelineCacheFile *local_50;
  FString local_48;
  FString *local_38;
  FPipelineCacheFile **local_30;
  FGuid *local_28;
  FString *local_20;
  
  CloseUserPipelineFileCache();
  bVar8 = false;
  bVar6 = IsPipelineFileCacheEnabled();
  if (bVar6) {
    AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    ::FString::operator=(&UserCacheKey,param_1);
    pFVar10 = GetPipelineCacheFileFromKey(&UserCacheKey);
    this = (FPipelineCacheFile *)0x0;
    if (pFVar10 == (FPipelineCacheFile *)0x0) {
      pFVar10 = ::operator_new(200);
      if (pFVar10 != (FPipelineCacheFile *)0x0) {
        (pFVar10->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar10->Name).Data.ArrayNum = 0;
        (pFVar10->Name).Data.ArrayMax = 0;
        (pFVar10->PlatformName).ComparisonIndex = 0;
        (pFVar10->PlatformName).Number = 0;
        (pFVar10->TOC).SortedOrder = MostToLeastUsed;
        *(undefined8 *)&(pFVar10->TOC).MetaData = 0;
        *(undefined8 *)&(pFVar10->TOC).MetaData.field_0x8 = 0;
        *(undefined8 *)&(pFVar10->TOC).MetaData.field_0x20 = 0;
        pFVar10->TOCOffset = 0;
        *(undefined4 *)&(pFVar10->TOC).MetaData.field_0x28 = 0;
        *(undefined4 *)&(pFVar10->TOC).MetaData.field_0x2c = 0x80;
        *(undefined4 *)&(pFVar10->TOC).MetaData.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar10->TOC).MetaData.field_0x34 = 0;
        *(undefined8 *)&(pFVar10->TOC).MetaData.field_0x40 = 0;
        *(undefined4 *)&(pFVar10->TOC).MetaData.field_0x48 = 0;
        (pFVar10->FileGuid).A = 0;
        (pFVar10->FileGuid).B = 0;
        (pFVar10->FileGuid).C = 0;
        (pFVar10->FileGuid).D = 0;
        (pFVar10->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar10->FilePath).Data.ArrayNum = 0;
        (pFVar10->FilePath).Data.ArrayMax = 0;
        (pFVar10->AsyncFileHandle).Object = (IAsyncReadFileHandle *)0x0;
        (pFVar10->AsyncFileHandle).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar10->RecordingFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar10->RecordingFilename).Data.ArrayNum = 0;
        (pFVar10->RecordingFilename).Data.ArrayMax = 0;
        pFVar10->CacheStatus = Unknown;
        this = pFVar10;
      }
      local_50 = this;
      bVar8 = FPipelineCacheFile::OpenUserPipelineFileCache(this,param_2,param_3);
      local_38 = &UserCacheKey;
      local_30 = &local_50;
      TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_&&>_>
                ((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                  *)&FileCacheMap,
                 (TPairInitializer<FString_const_&,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_&&>
                  *)local_58,(bool *)&local_38);
      pFVar1 = &this->FileGuid;
      uVar11 = CityHash64((char *)pFVar1,0x10);
      iVar9 = TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
                          *)&GameGuidToCacheKey,(uint)uVar11,pFVar1);
      if ((iVar9 != -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GameGuidToCacheKey.Contains(FileCache->GetFileGuid())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                             ,0xd24,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      local_20 = &UserCacheKey;
      local_28 = pFVar1;
      TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FString_const_&>_>
                ((TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
                  *)&GameGuidToCacheKey,
                 (TPairInitializer<FGuid_const_&,FString_const_&> *)(local_58 + 4),(bool *)&local_28
                );
      TDefaultDelete<FPipelineCacheFile>::operator()
                ((TDefaultDelete<FPipelineCacheFile> *)&local_50,local_50);
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3608245241330528996>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0xd1c,"!FileCache");
      this = pFVar10;
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    pFVar1 = &this->FileGuid;
    uVar3 = pFVar1->B;
    uVar4 = (this->FileGuid).C;
    uVar5 = (this->FileGuid).D;
    param_4->A = pFVar1->A;
    param_4->B = uVar3;
    param_4->C = uVar4;
    param_4->D = uVar5;
    if (3 < (byte)LogRHI._0_1_) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar1,&local_48,Digits);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if ((NewPSOs.Elements._8_4_ != NewPSOs.Elements._52_4_) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewPSOs.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0xd2b,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if ((NewPSOHashes.Elements._8_4_ != NewPSOHashes.Elements._52_4_) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewPSOHashes.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0xd2c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if ((RunTimeToPSOUsage._8_4_ != RunTimeToPSOUsage._52_4_) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RunTimeToPSOUsage.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0xd2d,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  }
  return bVar8;
}

// PreCompileComplete @ 145c6c430

void __cdecl FPipelineFileCacheManager::PreCompileComplete(void)

{
  return;
}

// RegisterPSOCompileFailure @ 145c71d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
FPipelineFileCacheManager::RegisterPSOCompileFailure
          (uint param_1,FGraphicsPipelineStateInitializer *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FPSOUsageData *pFVar5;
  uint *puVar6;
  FPSOUsageData *pFVar7;
  FPSOUsageData *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 auStack_348 [32];
  undefined1 local_328 [16];
  uint local_318;
  ushort local_314;
  TPairInitializer<unsigned_int_const_&,FPSOUsageData_const_&> local_310;
  undefined1 *local_300;
  FPipelineCacheFileFormatPSO local_2f8;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_328._0_4_ = param_1;
  bVar4 = IsPipelineFileCacheEnabled();
  if ((bVar4) &&
     (((bVar4 = LogPSOtoFileCache(), bVar4 || (bVar4 = ReportNewPSOs(), bVar4)) &&
      (((param_2->field25_0xd2).Flags & 0x1000) != 0)))) {
    AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
    pFVar5 = (FPSOUsageData *)0x0;
    if (RunTimeToPSOUsage._8_4_ != RunTimeToPSOUsage._52_4_) {
      lVar9 = 0x154be5be8;
      if (RunTimeToPSOUsage._64_8_ != 0) {
        lVar9 = RunTimeToPSOUsage._64_8_;
      }
      uVar2 = *(uint *)(lVar9 + (ulonglong)(RunTimeToPSOUsage._72_4_ - 1 & local_328._0_4_) * 4);
      while (uVar2 != 0xffffffff) {
        puVar6 = (uint *)((longlong)(int)uVar2 * 0x20 + RunTimeToPSOUsage._0_8_);
        if (*puVar6 == local_328._0_4_) {
          pFVar7 = (FPSOUsageData *)(puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            pFVar7 = pFVar5;
          }
          if ((pFVar7 != (FPSOUsageData *)0x0) && ((pFVar7->EngineFlags & 1) != 0)) {
            ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
            return;
          }
          break;
        }
        uVar2 = puVar6[6];
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&FileCacheLock);
    AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    pFVar7 = pFVar5;
    if (RunTimeToPSOUsage._8_4_ != RunTimeToPSOUsage._52_4_) {
      lVar9 = 0x154be5be8;
      if (RunTimeToPSOUsage._64_8_ != 0) {
        lVar9 = RunTimeToPSOUsage._64_8_;
      }
      uVar2 = *(uint *)(lVar9 + (ulonglong)(RunTimeToPSOUsage._72_4_ - 1 & local_328._0_4_) * 4);
      while ((pFVar7 = pFVar5, uVar2 != 0xffffffff &&
             (pFVar7 = (FPSOUsageData *)((longlong)(int)uVar2 * 0x20 + RunTimeToPSOUsage._0_8_),
             (uint)pFVar7->UsageMask != local_328._0_4_))) {
        uVar2 = pFVar7[1].PSOHash;
      }
    }
    pFVar8 = (FPSOUsageData *)&pFVar7->PSOHash;
    if (pFVar7 == (FPSOUsageData *)0x0) {
      pFVar8 = pFVar5;
    }
    if (pFVar8 == (FPSOUsageData *)0x0) {
      local_2f8.ComputeDesc.ComputeShader.Hash[0] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[1] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[2] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[3] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[4] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[5] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[6] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[7] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[8] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[9] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[10] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0xb] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0xc] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0xd] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0xe] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0xf] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0x10] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0x11] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0x12] = '\0';
      local_2f8.ComputeDesc.ComputeShader.Hash[0x13] = '\0';
      FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor(&local_2f8.GraphicsDesc);
      FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
      FPipelineFileCacheRayTracingDesc(&local_2f8.RayTracingDesc);
      bVar4 = FPipelineCacheFileFormatPSO::Init(&local_2f8,param_2);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bOK",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                             ,0xef2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_318 = ::GetTypeHash(&local_2f8);
      local_328._8_8_ = 0;
      local_314 = 0;
      bVar4 = IsPSOEntryCached(&local_2f8,(FPSOUsageData *)(local_328 + 8));
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bCached",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                             ,0xef8,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_314 = local_314 | 1;
      pFVar5 = TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
               ::FindOrAddImpl<unsigned_int_const_&>
                         ((TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
                           *)&NewPSOUsage,local_318,&local_318);
      pFVar5->PSOHash = local_318;
      pFVar5->UsageMask = pFVar5->UsageMask | local_328._8_8_;
      pFVar5->EngineFlags = pFVar5->EngineFlags | local_314;
      local_310.Value = (FPSOUsageData *)local_328;
      local_300 = local_328 + 8;
      TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FPSOUsageData_const_&>_>
                ((TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
                  *)&RunTimeToPSOUsage,&local_310,(bool *)&local_310.Value);
      if (2 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      puVar10 = local_30;
      lVar9 = 8;
      do {
        puVar1 = (undefined8 *)(puVar10 + -0x18);
        puVar10 = puVar10 + -0x18;
        lVar9 = lVar9 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar9 != 0);
    }
    else if ((pFVar8->EngineFlags & 1) == 0) {
      pFVar8->EngineFlags = pFVar8->EngineFlags | 1;
      RegisterPSOUsageDataUpdateForNextSave(pFVar8);
      if (2 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  }
  return;
}

// RegisterPSOStats @ 145c72080

FPipelineStateStats * __cdecl FPipelineFileCacheManager::RegisterPSOStats(uint param_1)

{
  bool bVar1;
  FPipelineStateStats *pFVar2;
  FRWScopeLock local_18;
  
  bVar1 = IsPipelineFileCacheEnabled();
  if (bVar1) {
    bVar1 = LogPSOtoFileCache();
    if (bVar1) {
      local_18.LockType = SLT_ReadOnly;
      local_18.LockObject = &FileCacheLock;
      AcquireSRWLockShared((PSRWLOCK)&FileCacheLock);
      pFVar2 = RegisterPSOStatsInternal(&local_18,param_1);
      if (local_18.LockType == SLT_ReadOnly) {
        ReleaseSRWLockShared((PSRWLOCK)local_18.LockObject);
        return pFVar2;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)local_18.LockObject);
      return pFVar2;
    }
  }
  return (FPipelineStateStats *)0x0;
}

// RegisterPSOStatsInternal @ 145c72100

/* WARNING: Enum "Type": Some values do not have unique names */

FPipelineStateStats * __cdecl
FPipelineFileCacheManager::RegisterPSOStatsInternal(FRWScopeLock *param_1,uint param_2)

{
  uint uVar1;
  FName FVar2;
  int iVar3;
  FPipelineStateStats *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PSOStatMemory> FVar6;
  uint *puVar7;
  FPipelineStateStats *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint local_res10 [2];
  TPairInitializer<unsigned_int_const_&,FPipelineStateStats_*_const_&> local_res18;
  uint *local_38;
  FPipelineStateStats ***local_30;
  
  if (RunTimeToPSOUsage._8_4_ != RunTimeToPSOUsage._52_4_) {
    lVar9 = 0x154be5be8;
    if (RunTimeToPSOUsage._64_8_ != 0) {
      lVar9 = RunTimeToPSOUsage._64_8_;
    }
    uVar1 = *(uint *)(lVar9 + (ulonglong)(RunTimeToPSOUsage._72_4_ - 1 & param_2) * 4);
    while (uVar1 != 0xffffffff) {
      puVar7 = (uint *)((longlong)(int)uVar1 * 0x20 + RunTimeToPSOUsage._0_8_);
      if (*puVar7 == param_2) {
        pFVar8 = (FPipelineStateStats *)0x0;
        pFVar4 = (FPipelineStateStats *)(puVar7 + 2);
        if (puVar7 == (uint *)0x0) {
          pFVar4 = pFVar8;
        }
        if (pFVar4 != (FPipelineStateStats *)0x0) {
          local_res10[0] = (uint)pFVar4->LastFrameUsed;
          iVar10 = Stats._52_4_;
          iVar11 = Stats._8_4_;
          if (iVar11 == iVar10) goto LAB_145c72244;
          lVar9 = 0x154be5c88;
          if (Stats._64_8_ != 0) {
            lVar9 = Stats._64_8_;
          }
          iVar3 = *(int *)(lVar9 + (ulonglong)(Stats._72_4_ - 1 & local_res10[0]) * 4);
          if (iVar3 == -1) goto LAB_145c72244;
          goto LAB_145c72210;
        }
        break;
      }
      uVar1 = puVar7[6];
    }
  }
  if (3 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return (FPipelineStateStats *)0x0;
  while (iVar3 = *(int *)(lVar9 + 0x10), iVar3 != -1) {
LAB_145c72210:
    lVar9 = Stats._0_8_ + (longlong)iVar3 * 0x18;
    if (*(uint *)(Stats._0_8_ + (longlong)iVar3 * 0x18) == local_res10[0]) {
      if ((lVar9 != 0) &&
         (local_res18.Value = *(FPipelineStateStats ***)(lVar9 + 8),
         (FPipelineStateStats *)local_res18.Value != (FPipelineStateStats *)0x0))
      goto LAB_145c72410;
      break;
    }
  }
LAB_145c72244:
  if (param_1->LockType == SLT_ReadOnly) {
    ReleaseSRWLockShared((PSRWLOCK)param_1->LockObject);
    AcquireSRWLockExclusive((PSRWLOCK)param_1->LockObject);
    param_1->LockType = SLT_Write;
    iVar10 = Stats._52_4_;
    iVar11 = Stats._8_4_;
  }
  if (iVar11 != iVar10) {
    lVar9 = 0x154be5c88;
    if (Stats._64_8_ != 0) {
      lVar9 = Stats._64_8_;
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)(Stats._72_4_ - 1 & local_res10[0]) * 4);
    while (iVar10 != -1) {
      lVar9 = Stats._0_8_ + (longlong)iVar10 * 0x18;
      if (*(uint *)(Stats._0_8_ + (longlong)iVar10 * 0x18) == local_res10[0]) {
        if ((lVar9 != 0) &&
           (local_res18.Value = *(FPipelineStateStats ***)(lVar9 + 8),
           (FPipelineStateStats *)local_res18.Value != (FPipelineStateStats *)0x0))
        goto LAB_145c72410;
        break;
      }
      iVar10 = *(int *)(lVar9 + 0x10);
    }
  }
  pFVar4 = ::operator_new(0x28);
  if (pFVar4 != (FPipelineStateStats *)0x0) {
    pFVar4->FirstFrameUsed = -1;
    pFVar4->LastFrameUsed = -1;
    pFVar4->CreateCount = 0;
    pFVar4->TotalBindCount = 0;
    pFVar4->PSOHash = 0;
    pFVar8 = pFVar4;
  }
  pFVar8->PSOHash = local_res10[0];
  local_38 = local_res10;
  local_30 = &local_res18.Value;
  local_res18.Value = (FPipelineStateStats **)pFVar8;
  TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FPipelineStateStats_*_const_&>_>
            ((TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
              *)&Stats,&local_res18,(bool *)&local_38);
  FVar6 = StatPtr_STAT_PSOStatMemory;
  if (StatPtr_STAT_PSOStatMemory == (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_res18,"STAT_PSOStatMemory");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOStatMemory,*pFVar5,L"PSO Stat",
                       "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",true
                       ,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar6;
  local_res18.Key._0_4_ = FVar2.ComparisonIndex.Value;
  local_res18.Key._4_4_ = FVar2.Number;
  FThreadStats::AddMessage<__int64>(FVar2,Add,0x2c,false);
LAB_145c72410:
  *(ulong64 *)((longlong)local_res18.Value + 0x10) =
       *(ulong64 *)((longlong)local_res18.Value + 0x10) + 1;
  return (FPipelineStateStats *)local_res18.Value;
}

// RegisterPSOUsageDataUpdateForNextSave @ 145c72440

void __cdecl
FPipelineFileCacheManager::RegisterPSOUsageDataUpdateForNextSave(FPSOUsageData *param_1)

{
  FPSOUsageData *pFVar1;
  
  pFVar1 = TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
                       *)&NewPSOUsage,param_1->PSOHash,&param_1->PSOHash);
  pFVar1->PSOHash = param_1->PSOHash;
  pFVar1->UsageMask = pFVar1->UsageMask | param_1->UsageMask;
  pFVar1->EngineFlags = pFVar1->EngineFlags | param_1->EngineFlags;
  return;
}

// ReportNewPSOs @ 145c75370

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FPipelineFileCacheManager::ReportNewPSOs(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  
  if (!bOnce) {
    bOnce = true;
    pwVar3 = FCommandLine::Get();
    bCmdLineForce = FParse::Param(pwVar3,L"reportpso");
    if ((2 < (byte)LogRHI._0_1_) && (bCmdLineForce)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  pTVar1 = CVarPSOFileCacheReportPSO.Ref;
  if (bCmdLineForce != false) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 1) {
    return true;
  }
  return false;
}

// SavePipelineFileCache @ 145c77cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FPipelineFileCacheManager::SavePipelineFileCache(SaveMode param_1)

{
  FName FVar1;
  bool bVar2;
  uint uVar3;
  FPipelineCacheFile *this;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory> FVar5;
  undefined1 auStackY_1088 [32];
  FName local_1028 [2];
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x145c77cbc;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1088;
  bVar2 = IsPipelineFileCacheEnabled();
  if ((!bVar2) || (bVar2 = LogPSOtoFileCache(), !bVar2)) {
    return false;
  }
  FCsvProfiler::RecordEventfInternal(_GCsvCategory_PSO.Index,L"Saving PSO cache");
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint3427 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint3427,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                 ,0xd63,L"PSO/Saving PSO cache");
      __BookmarkPoint3427 = true;
    }
    uVar3 = CallstackTrace_GetCurrentId();
    local_1018[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint3427,uVar3,1,local_1018);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  this = GetPipelineCacheFileFromKey(&UserCacheKey);
  if ((this != (FPipelineCacheFile *)0x0) &&
     (bVar2 = FPipelineCacheFile::SavePipelineFileCache
                        (this,param_1,&Stats,&NewPSOs,RequestedOrder,&NewPSOUsage), bVar2)) {
    NumNewPSOs = NewPSOs.Elements._8_4_ - NewPSOs.Elements._52_4_;
    FVar5 = StatPtr_STAT_NewCachedPSOMemory;
    if (StatPtr_STAT_NewCachedPSOMemory == (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)0x0
       ) {
      pFVar4 = ::FName::FName(local_1028,"STAT_NewCachedPSOMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewCachedPSOMemory,*pFVar4,
                         L"New Cached PSO","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                         L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_1028[0].ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_1028[0].Number = FVar1.Number;
    FThreadStats::AddMessage<__int64>(FVar1,Set,(ulonglong)NumNewPSOs * 0x2d0,false);
    ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    return true;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  return false;
}

// SavePipelineFileCacheFrom @ 145c77ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPipelineFileCacheManager::SavePipelineFileCacheFrom
          (uint param_1,EShaderPlatform param_2,FString *param_3,
          TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
          *param_4)

{
  undefined1 *puVar1;
  FSHAHash *pFVar2;
  DescriptorType DVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long64 lVar8;
  long64 lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  *pTVar12;
  void *pvVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  FGuid *pFVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  TStatId TVar20;
  ulonglong uVar21;
  IFileManager *pIVar22;
  FArchive *pFVar23;
  ulong64 uVar24;
  byte bVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  ForElementType<unsigned_int> FVar28;
  wchar_t *pwVar29;
  ForElementType<FSetElementId> FVar30;
  uint uVar31;
  longlong lVar32;
  TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_> *pTVar33;
  TSparseSetElement<FSHAHash> *pTVar34;
  uint *puVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint *puVar39;
  FPipelineCacheFileFormatPSO *pFVar40;
  undefined1 auStackY_548 [32];
  undefined1 local_518;
  undefined1 local_517 [3];
  int local_514;
  int local_510 [2];
  int local_508;
  uint uStack_504;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_500;
  undefined4 local_4f8;
  int iStack_4f4;
  int iStack_4f0;
  undefined4 uStack_4ec;
  TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  *local_4e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e0;
  undefined8 local_4c0;
  uint local_4b8;
  uint uStack_4b4;
  TBitArray<FDefaultBitArrayAllocator> *local_4b0;
  undefined8 local_4a8;
  void *local_4a0;
  undefined8 local_498;
  uint local_490;
  uint uStack_48c;
  uint local_488;
  uint uStack_484;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_480;
  undefined1 local_460 [8];
  FSHAHash local_458;
  FString *local_440;
  TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  *local_438;
  int iStack_430;
  uint uStack_42c;
  TBitArray<FDefaultBitArrayAllocator> *local_428;
  undefined4 uStack_420;
  uint uStack_41c;
  int local_418;
  undefined4 uStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  undefined1 local_408 [8];
  longlong *local_400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f8;
  undefined1 local_3d8 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c8;
  undefined8 uStack_3a8;
  FSparseArrayAllocationInfo local_3a0;
  FSparseArrayAllocationInfo local_390;
  FArchiveState local_378;
  undefined8 local_2e8;
  void **local_2e0;
  undefined8 local_2d8;
  FGuid local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a0;
  undefined4 local_264;
  undefined1 local_258 [72];
  undefined1 local_210 [32];
  ForElementType<unsigned_int> local_1f0;
  int local_1e8;
  int iStack_1e0;
  int iStack_1dc;
  undefined1 local_1d8 [8];
  ForAnyElementType local_1d0;
  uint local_1c8;
  ulong64 local_1c0;
  long64 local_1b8;
  ushort local_1b0;
  FPipelineCacheFileFormatHeader local_1a8;
  TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
  local_170;
  undefined1 local_120 [8];
  undefined1 local_118 [32];
  ForElementType<unsigned_int> local_f8;
  uint local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  uVar11 = _UNK_150631d98;
  uVar10 = ___xmm_00000000ffffffff0000008000000000;
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_548;
  local_170.Pairs.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_170.Pairs.Elements._48_8_ = _UNK_150631d98;
  local_1a8.Guid.A = 0;
  local_1a8.Guid.B = 0;
  local_1a8.Guid.C = 0;
  local_1a8.Guid.D = 0;
  local_170.Pairs.Elements._0_8_ = 0;
  local_170.Pairs.Elements._8_8_ = 0;
  local_170.Pairs.Elements._32_8_ = 0;
  local_170.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_170.Pairs.HashSize = 0;
  local_120._0_4_ = MostToLeastUsed;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (ForElementType<unsigned_int>)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = -1;
  local_e4 = 0;
  local_d8 = (ForElementType<FSetElementId>)0x0;
  local_d0 = 0;
  local_1a8.Magic = 0x5049504543414348;
  local_1a8.Version = 0x1d;
  local_1a8.Platform.Value = (uchar)param_2;
  local_1a8.TableOffset = 0;
  local_440 = param_3;
  local_1a8.GameVersion = param_1;
  pFVar18 = FGuid::NewGuid(&local_2b0);
  local_1a8.Guid.A = pFVar18->A;
  local_1a8.Guid.B = pFVar18->B;
  local_1a8.Guid.C = pFVar18->C;
  local_1a8.Guid.D = pFVar18->D;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
             *)local_118,
            *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34);
  puVar1 = &(param_4->Elements).field_0x10;
  local_480.UnvisitedBitMask = 0xffffffff;
  local_480._padding_._0_4_ = 0;
  local_480._padding_._4_4_ = 1;
  local_480.CurrentBitIndex = 0;
  local_480.BaseBitIndex = 0;
  local_480.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_4->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_480);
  }
  TStack_4e0._padding_ = CONCAT44(local_480._padding_._4_4_,(undefined4)local_480._padding_);
  TStack_4e0.CurrentBitIndex = local_480.CurrentBitIndex;
  TStack_4e0.UnvisitedBitMask = local_480.UnvisitedBitMask;
  TStack_4e0._28_4_ = local_480._28_4_;
  TStack_4e0.BaseBitIndex = local_480.BaseBitIndex;
  TStack_4e0.Array = local_480.Array;
  local_4c0 = CONCAT44(local_4c0._4_4_,
                       *(int *)&(param_4->Elements).field_0x8 -
                       *(int *)&(param_4->Elements).field_0x34);
  TStack_3c8.Array = local_480.Array;
  uStack_3a8 = local_4c0;
  local_4e8 = param_4;
  local_3d8._8_8_ = param_4;
  TStack_3c8._padding_ = TStack_4e0._padding_;
  TStack_3c8._16_8_ = TStack_4e0._16_8_;
  TStack_3c8._24_8_ = TStack_4e0._24_8_;
  pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_2a0,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_4->Elements).field_0x28);
  lVar9 = _UNK_15060db28;
  lVar8 = ___xmm_ffffffffffffffffffffffffffffffff;
  TStack_4e0._padding_ = pTVar19->_padding_;
  TStack_4e0.Array = pTVar19->Array;
  uVar6._0_4_ = pTVar19->UnvisitedBitMask;
  uVar6._4_4_ = pTVar19->CurrentBitIndex;
  TStack_4e0.BaseBitIndex = pTVar19->BaseBitIndex;
  TStack_4e0._28_4_ = *(undefined4 *)&pTVar19->field_0x1c;
  TStack_4e0._16_8_ = uVar6;
  local_4b0 = TStack_4e0.Array;
  while( true ) {
    uVar7 = local_3d8._8_8_;
    pTVar34 = (TSparseSetElement<FSHAHash> *)0x0;
    if (*(int *)&((TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_3d8._8_8_)->field_0x8 -
        *(int *)&((TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_3d8._8_8_)->field_0x34 != (int)uStack_3a8) {
      local_518 = 0;
      `TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_518);
    }
    if (((TStack_3c8.CurrentBitIndex == uVar6._4_4_) && (TStack_3c8.Array == local_4b0)) &&
       ((TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
         *)uVar7 == param_4)) break;
    local_258._32_8_ = lVar8;
    local_258._40_8_ = lVar9;
    local_258._48_8_ = 0;
    local_258._56_8_ = 0;
    _local_1e8 = uVar10;
    _iStack_1e0 = uVar11;
    local_258._0_8_ = 0;
    pFVar40 = (FPipelineCacheFileFormatPSO *)
              ((longlong)TStack_3c8.CurrentBitIndex * 0x2d0 +
              *(longlong *)
               (TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)uVar7);
    local_258._16_4_ = 0;
    local_258._20_4_ = 0;
    local_258._24_4_ = 0;
    local_258._28_4_ = 0;
    local_258._64_4_ = 0;
    local_210._0_8_ = (FScriptContainerElement *)0x0;
    local_210._8_8_ = 0;
    local_1f0 = (ForElementType<unsigned_int>)0x0;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_258._64_4_ = ::GetTypeHash(pFVar40);
    DVar3 = pFVar40->Type;
    local_258._16_4_ = local_1a8.Guid.A;
    local_258._20_4_ = local_1a8.Guid.B;
    local_258._24_4_ = local_1a8.Guid.C;
    local_258._28_4_ = local_1a8.Guid.D;
    local_258._8_8_ = 0;
    if (DVar3 == Compute) {
      TVar20 = FThreadSafeStaticStatInner<FStat_STAT_SerializedComputePipelineStateCount,1>::
               GetStatId((FThreadSafeStaticStatInner<FStat_STAT_SerializedComputePipelineStateCount,1>
                          *)&StatPtr_STAT_SerializedComputePipelineStateCount);
      FVar4 = *(FName *)(TVar20.StatIdPtr)->Name;
      local_4b8 = (uint)FVar4.ComparisonIndex.Value;
      uStack_4b4 = FVar4.Number;
      FThreadStats::AddMessage<__int64>(FVar4,Add,1,false);
      if (iStack_1dc == 0) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1c,4,1,(ForAnyElementType *)local_210,(int *)(local_210 + 8),
                            (int *)(local_210 + 0xc));
        iVar17 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_210 + 0x10),1);
        FVar28 = (ForElementType<unsigned_int>)((longlong)local_210 + 0x10);
        if (local_1f0 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_1f0;
        }
        bVar25 = (byte)iVar17 & 0x1f;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 0x1f;
          bVar25 = bVar25 - 0x20;
        }
        puVar39 = (uint *)((longlong)FVar28 + (longlong)(iVar17 >> 5) * 4);
        *puVar39 = *puVar39 & ~(1 << (bVar25 & 0x1f));
      }
      else {
        iVar16 = iStack_1e0;
        lVar32 = (longlong)iStack_1e0;
        iStack_1dc = iStack_1dc + -1;
        iStack_1e0 = *(int *)(local_210._0_8_ + lVar32 * 0x1c + 4);
        if (iStack_1dc != 0) {
          *(undefined4 *)
           (local_210._0_8_ + (longlong)*(int *)(local_210._0_8_ + lVar32 * 0x1c + 4) * 0x1c) =
               0xffffffff;
        }
      }
      TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_210,&local_3a0,iVar16);
      if (local_3a0.Pointer != (TSparseSetElement<FSHAHash> *)0x0) {
        uVar7 = *(undefined8 *)((pFVar40->ComputeDesc).ComputeShader.Hash + 8);
        *(undefined8 *)local_3a0.Pointer = *(undefined8 *)(pFVar40->ComputeDesc).ComputeShader.Hash;
        *(undefined8 *)((longlong)local_3a0.Pointer + 8) = uVar7;
        *(undefined4 *)((longlong)local_3a0.Pointer + 0x10) =
             *(undefined4 *)((pFVar40->ComputeDesc).ComputeShader.Hash + 0x10);
        *(undefined4 *)((longlong)local_3a0.Pointer + 0x14) = 0xffffffff;
        pTVar34 = local_3a0.Pointer;
      }
      uVar36 = *(uint *)pTVar34;
      local_514 = local_3a0.Index;
      bVar14 = TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::TryReplaceExisting
                         ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                          local_210,uVar36,pTVar34,&local_514,(bool *)0x0);
      if (!bVar14) {
        uVar31 = 1;
        uVar27 = local_210._8_4_ - iStack_1dc;
        if (3 < uVar27) {
          uVar37 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
          lVar32 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          local_458.Hash._4_4_ = SUB84(lVar32,0);
          uVar31 = 1 << ((byte)lVar32 & 0x1f);
        }
        if (((int)uVar27 < 1) || ((int)uVar31 <= (int)local_1c8)) {
          uVar36 = local_1c8 - 1 & uVar36;
          *(uint *)&pTVar34->field_0x18 = uVar36;
          FVar26.Data = (FScriptContainerElement *)local_1d8;
          if ((ForElementType<FSetElementId>)local_1d0.Data != (ForElementType<FSetElementId>)0x0) {
            FVar26.Data = local_1d0.Data;
          }
          uVar37 = (longlong)(int)local_1c8 - 1U & (longlong)(int)uVar36;
          *(undefined4 *)&pTVar34->field_0x14 = *(undefined4 *)((longlong)FVar26.Data + uVar37 * 4);
          *(int *)((longlong)FVar26.Data + uVar37 * 4) = local_514;
        }
        else {
          local_1c8 = uVar31;
          if ((ForElementType<FSetElementId>)local_1d0.Data != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d0,0,0,4);
          }
          if (uVar31 != 0) {
            uVar36 = uVar31;
            if (uVar31 < 2) {
              if ((ForElementType<FSetElementId>)local_1d0.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                uVar36 = 0;
                goto LAB_145c785e7;
              }
            }
            else {
LAB_145c785e7:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_1d0,0,uVar36,4);
            }
            if (0 < (int)uVar31) {
              uVar38 = (ulonglong)uVar31;
              uVar37 = 0;
              do {
                FVar26.Data = (FScriptContainerElement *)local_1d8;
                if ((ForElementType<FSetElementId>)local_1d0.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar26.Data = local_1d0.Data;
                }
                uVar21 = uVar37 & (longlong)(int)uVar31 - 1U;
                uVar37 = uVar37 + 1;
                *(undefined4 *)((longlong)FVar26.Data + uVar21 * 4) = 0xffffffff;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
          }
          if (local_1c8 != 0) {
            pTStack_500 = (TBitArray<FDefaultBitArrayAllocator> *)(local_210 + 0x10);
            local_508 = 0;
            uStack_504 = 1;
            iStack_4f4 = 0;
            iStack_4f0 = 0;
            if (local_1e8 != 0) {
              FVar28 = (ForElementType<unsigned_int>)((longlong)local_210 + 0x10);
              if (local_1f0 != (ForElementType<unsigned_int>)0x0) {
                FVar28 = local_1f0;
              }
              uVar36 = *(uint *)FVar28;
              while (uVar36 == 0) {
                iStack_4f0 = iStack_4f0 + 0x20;
                lVar32 = (longlong)local_508;
                local_508 = local_508 + 1;
                if ((int)(local_1e8 + -1 + (local_1e8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_508)
                goto LAB_145c7870f;
                uVar36 = ((uint *)((longlong)FVar28 + 4))[lVar32];
              }
              uStack_504 = -uVar36 & uVar36;
              uVar37 = (ulonglong)uStack_504 * 2 + 1;
              lVar32 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                }
              }
              local_458.Hash._8_4_ = SUB84(lVar32,0);
              iStack_4f4 = local_458.Hash._8_4_ + -1 + iStack_4f0;
              if (local_1e8 < iStack_4f4) {
LAB_145c7870f:
                iStack_4f4 = local_1e8;
              }
            }
            local_4f8 = 0xffffffff;
            local_400 = (longlong *)local_210;
            local_3f8._padding_ = CONCAT44(uStack_504,local_508);
            local_3f8.CurrentBitIndex = iStack_4f4;
            local_3f8.UnvisitedBitMask = 0xffffffff;
            local_3f8._28_4_ = uStack_4ec;
            local_3f8.BaseBitIndex = iStack_4f0;
            local_3f8.Array = pTStack_500;
            iVar16 = iStack_4f4;
            if (iStack_4f4 < local_1e8) {
              do {
                puVar39 = (uint *)((longlong)iVar16 * 0x1c + *local_400);
                uVar36 = local_1c8 - 1 & *puVar39;
                puVar39[6] = uVar36;
                FVar26.Data = (FScriptContainerElement *)local_1d8;
                if ((ForElementType<FSetElementId>)local_1d0.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar26.Data = local_1d0.Data;
                }
                uVar37 = (longlong)(int)local_1c8 - 1U & (longlong)(int)uVar36;
                puVar39[5] = *(uint *)((longlong)FVar26.Data + uVar37 * 4);
                *(int *)((longlong)FVar26.Data + uVar37 * 4) = iVar16;
                local_3f8.UnvisitedBitMask = local_3f8.UnvisitedBitMask & ~local_3f8._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f8);
                iVar16 = local_3f8.CurrentBitIndex;
              } while (local_3f8.CurrentBitIndex < (local_3f8.Array)->NumBits);
            }
          }
        }
      }
    }
    else if (DVar3 == Graphics) {
      TVar20 = FThreadSafeStaticStatInner<FStat_STAT_SerializedGraphicsPipelineStateCount,1>::
               GetStatId((FThreadSafeStaticStatInner<FStat_STAT_SerializedGraphicsPipelineStateCount,1>
                          *)&StatPtr_STAT_SerializedGraphicsPipelineStateCount);
      FVar4 = *(FName *)(TVar20.StatIdPtr)->Name;
      local_488 = (uint)FVar4.ComparisonIndex.Value;
      uStack_484 = FVar4.Number;
      FThreadStats::AddMessage<__int64>(FVar4,Add,1,false);
      local_b8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      if (((*(longlong *)(pFVar40->GraphicsDesc).VertexShader.Hash != 0) ||
          (*(longlong *)((pFVar40->GraphicsDesc).VertexShader.Hash + 8) != 0)) ||
         (*(int *)((pFVar40->GraphicsDesc).VertexShader.Hash + 0x10) != 0)) {
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                  ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_210,
                   (FSHAHash *)(local_408 + 4),(bool *)&pFVar40->GraphicsDesc);
      }
      pFVar2 = &(pFVar40->GraphicsDesc).FragmentShader;
      local_b4 = 0;
      uStack_ac = 0;
      local_a4 = 0;
      if (((*(longlong *)pFVar2->Hash != 0) ||
          (*(longlong *)((pFVar40->GraphicsDesc).FragmentShader.Hash + 8) != 0)) ||
         (*(int *)((pFVar40->GraphicsDesc).FragmentShader.Hash + 0x10) != 0)) {
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                  ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_210,
                   (FSHAHash *)local_3d8,(bool *)pFVar2);
      }
      pFVar2 = &(pFVar40->GraphicsDesc).GeometryShader;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      if (((*(longlong *)pFVar2->Hash != 0) ||
          (*(longlong *)((pFVar40->GraphicsDesc).GeometryShader.Hash + 8) != 0)) ||
         (*(int *)((pFVar40->GraphicsDesc).GeometryShader.Hash + 0x10) != 0)) {
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                  ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_210,
                   (FSHAHash *)local_460,(bool *)pFVar2);
      }
      pFVar2 = &(pFVar40->GraphicsDesc).MeshShader;
      local_8c = 0;
      uStack_84 = 0;
      local_7c = 0;
      if (((*(longlong *)pFVar2->Hash != 0) ||
          (*(longlong *)((pFVar40->GraphicsDesc).MeshShader.Hash + 8) != 0)) ||
         (*(int *)((pFVar40->GraphicsDesc).MeshShader.Hash + 0x10) != 0)) {
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                  ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_210,
                   (FSHAHash *)(local_460 + 4),(bool *)pFVar2);
      }
      pFVar2 = &(pFVar40->GraphicsDesc).AmplificationShader;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      if (((*(longlong *)pFVar2->Hash != 0) ||
          (*(longlong *)((pFVar40->GraphicsDesc).AmplificationShader.Hash + 8) != 0)) ||
         (*(int *)((pFVar40->GraphicsDesc).AmplificationShader.Hash + 0x10) != 0)) {
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                  ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_210,
                   &local_458,(bool *)pFVar2);
      }
    }
    else if (DVar3 == RayTracing) {
      TVar20 = FThreadSafeStaticStatInner<FStat_STAT_SerializedRayTracingPipelineStateCount,1>::
               GetStatId((FThreadSafeStaticStatInner<FStat_STAT_SerializedRayTracingPipelineStateCount,1>
                          *)&StatPtr_STAT_SerializedRayTracingPipelineStateCount);
      FVar4 = *(FName *)(TVar20.StatIdPtr)->Name;
      local_490 = (uint)FVar4.ComparisonIndex.Value;
      uStack_48c = FVar4.Number;
      FThreadStats::AddMessage<__int64>(FVar4,Add,1,false);
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_210,
                 (FSHAHash *)local_408,(bool *)&pFVar40->RayTracingDesc);
    }
    else {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                          ,0x104a,L"");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
    }
    pTVar33 = (TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_> *)0x0;
    if ((((local_258._28_4_ == 0 && local_258._24_4_ == 0) && local_258._20_4_ == 0) &&
         local_258._16_4_ == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Meta.FileGuid != FGuid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                            ,0x104f,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AddUninitialized((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_118,&local_390);
    pvVar13 = local_390.Pointer;
    if (local_390.Pointer !=
        (TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_> *)0x0) {
      *(undefined4 *)local_390.Pointer = local_258._64_4_;
      FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData
                ((FPipelineCacheFileFormatPSOMetaData *)((longlong)local_390.Pointer + 8),
                 (FPipelineCacheFileFormatPSOMetaData *)local_258);
      *(undefined4 *)((longlong)pvVar13 + 0xb8) = 0xffffffff;
      pTVar33 = pvVar13;
    }
    uVar36 = *(uint *)pTVar33;
    local_510[0] = local_390.Index;
    bVar14 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
             ::TryReplaceExisting
                       ((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                         *)local_118,uVar36,pTVar33,local_510,(bool *)0x0);
    if (!bVar14) {
      TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                      *)local_118,uVar36,pTVar33,local_510[0]);
    }
    TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
    ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSO_const_&>
              (&local_170,(uint *)(local_258 + 0x40),pFVar40);
    local_1c8 = 0;
    if ((ForElementType<FSetElementId>)local_1d0.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_210);
    TStack_3c8.UnvisitedBitMask = TStack_3c8.UnvisitedBitMask & ~TStack_3c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c8);
  }
  pIVar22 = IFileManager::Get();
  if ((local_440->Data).ArrayNum == 0) {
    pwVar29 = L"";
  }
  else {
    pwVar29 = (wchar_t *)(local_440->Data).AllocatorInstance.Data;
  }
  pFVar23 = (FArchive *)(**(code **)((longlong)*pIVar22 + 0x20))(pIVar22,pwVar29);
  if (pFVar23 == (FArchive *)0x0) {
    bVar14 = false;
  }
  else {
    (**(code **)(*(longlong *)pFVar23 + 0x130))(pFVar23,0x1d);
    ::operator<<(pFVar23,&local_1a8);
    uVar24 = (**(code **)(*(longlong *)pFVar23 + 0x28))();
    uVar36 = local_f0;
    iStack_430 = 0;
    local_418 = 0;
    uStack_42c = 1;
    uStack_41c = 0;
    if (local_f0 != 0) {
      FVar28 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
      if (local_f8 != (ForElementType<unsigned_int>)0x0) {
        FVar28 = local_f8;
      }
      uVar27 = *(uint *)FVar28;
      while (uVar27 == 0) {
        lVar32 = (longlong)iStack_430;
        local_418 = local_418 + 0x20;
        iStack_430 = iStack_430 + 1;
        uStack_41c = local_f0;
        if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_430)
        goto LAB_145c78a0f;
        uVar27 = ((uint *)((longlong)FVar28 + 4))[lVar32];
      }
      uStack_42c = -uVar27 & uVar27;
      uVar37 = (ulonglong)uStack_42c * 2 + 1;
      lVar32 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      local_458.Hash._12_4_ = SUB84(lVar32,0);
      uStack_41c = local_458.Hash._12_4_ + -1 + local_418;
      if ((int)local_f0 < (int)uStack_41c) {
        uStack_41c = local_f0;
      }
    }
LAB_145c78a0f:
    local_4e8 = (TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
                 *)local_118;
    TStack_4e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
    uStack_414 = local_264;
    uVar27 = local_f0 & 0xffffffe0;
    iStack_410 = local_118._8_4_ - local_e4;
    uStack_420 = 0xffffffff;
    TStack_4e0.CurrentBitIndex = uStack_41c;
    TStack_4e0.UnvisitedBitMask = 0xffffffff;
    TStack_4e0._padding_ = CONCAT44(uStack_42c,iStack_430);
    iVar16 = (int)local_f0 >> 5;
    TStack_4e0._28_4_ = local_264;
    TStack_4e0.BaseBitIndex = local_418;
    local_4c0 = CONCAT44(uStack_40c,iStack_410);
    bVar25 = (byte)local_f0;
    local_438 = local_4e8;
    local_428 = TStack_4e0.Array;
    if (((int)local_f0 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    if (uVar36 != local_f0) {
      FVar28 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
      if (local_f8 != (ForElementType<unsigned_int>)0x0) {
        FVar28 = local_f8;
      }
      uVar36 = -1 << (bVar25 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar16 * 4);
      while (uVar36 == 0) {
        lVar32 = (longlong)iVar16;
        uVar27 = uVar27 + 0x20;
        iVar16 = iVar16 + 1;
        uVar36 = local_f0;
        if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_145c78b23;
        uVar36 = ((uint *)((longlong)FVar28 + 4))[lVar32];
      }
      uVar37 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
      lVar32 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      local_458.Hash._16_4_ = SUB84(lVar32,0);
      uVar36 = (uVar27 - 1) + local_458.Hash._16_4_;
      if ((int)local_f0 < (int)uVar36) {
        uVar36 = local_f0;
      }
    }
LAB_145c78b23:
    while( true ) {
      pTVar12 = local_4e8;
      if (*(int *)&(local_4e8->Elements).field_0x8 - *(int *)&(local_4e8->Elements).field_0x34 !=
          (int)local_4c0) {
        local_517[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_517);
      }
      if (((TStack_4e0.CurrentBitIndex == uVar36) &&
          (TStack_4e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10))) &&
         (pTVar12 ==
          (TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
           *)local_118)) break;
      puVar35 = (uint *)((longlong)TStack_4e0.CurrentBitIndex * 0xc0 +
                        *(longlong *)&pTVar12->Elements);
      puVar39 = (uint *)0x0;
      if (local_170.Pairs.Elements._8_4_ != local_170.Pairs.Elements._52_4_) {
        FVar30 = (ForElementType<FSetElementId>)&local_170.Pairs.Hash;
        if (local_170.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar30 = local_170.Pairs.Hash.SecondaryData;
        }
        uVar27 = *(uint *)((longlong)FVar30 +
                          (ulonglong)(local_170.Pairs.HashSize - 1U & *puVar35) * 4);
        while (puVar39 = (uint *)0x0, uVar27 != 0xffffffff) {
          puVar39 = (uint *)((longlong)(int)uVar27 * 0x2d8 + local_170.Pairs.Elements._0_8_);
          if (*puVar39 == *puVar35) {
            if (puVar39 != (uint *)0x0) goto LAB_145c78c09;
            break;
          }
          uVar27 = puVar39[0xb4];
        }
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
LAB_145c78c09:
      *(ulong64 *)(puVar35 + 2) = uVar24;
      local_4a0 = (void *)0x0;
      local_498 = 0;
      puVar35[6] = local_1a8.Guid.A;
      puVar35[7] = local_1a8.Guid.B;
      puVar35[8] = local_1a8.Guid.C;
      puVar35[9] = local_1a8.Guid.D;
      local_4a8 = 0;
      local_378._padding_ = 0;
      local_378.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_378.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_378.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_378.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_378._40_8_ = 0;
      local_378.ArSerializingDefaults = 0;
      local_378.ArPortFlags = 0;
      local_378.ArMaxSerializeSize = 0;
      local_378.ArUEVer.FileVersionUE4 = 0;
      local_378.ArUEVer.FileVersionUE5 = 0;
      local_378.ArLicenseeUEVer = 0;
      local_378.ArEngineVer.Major = 0;
      local_378.ArEngineVer.Minor = 0;
      local_378.ArEngineVer.Patch = 0;
      local_378.ArEngineVer._6_2_ = 0;
      local_378.ArEngineVer.Changelist = 0;
      local_378.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_378.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_378.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_378.SerializedProperty = (FProperty *)0x0;
      local_378.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_378.bCustomVersionsAreReset = false;
      local_378._129_7_ = 0;
      local_378.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_378);
      local_2e8 = 0;
      local_378._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      local_2e0 = &local_4a0;
      local_2d8 = 0;
      FArchiveState::SetIsSaving(&local_378,true);
      (**(code **)(local_378._padding_ + 0x108))(&local_378,0);
      local_378._padding_ = (longlong)&___7FMemoryWriter__6B_;
      FArchiveState::SetGameNetVer(&local_378,0x1d);
      ::operator<<((FArchive *)&local_378,(FPipelineCacheFileFormatPSO *)(puVar39 + 2));
      (**(code **)(*(longlong *)pFVar23 + 0x188))
                (pFVar23,local_4a0,(longlong)*(int *)(local_2e0 + 1));
      iVar16 = *(int *)(local_2e0 + 1);
      *(longlong *)(puVar35 + 4) = (longlong)iVar16;
      uVar24 = uVar24 + (longlong)iVar16;
      FArchive::~FArchive((FArchive *)&local_378);
      if (local_4a0 != (void *)0x0) {
        FMemory::Free(local_4a0);
      }
      TStack_4e0.UnvisitedBitMask = TStack_4e0.UnvisitedBitMask & ~TStack_4e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e0);
    }
    (**(code **)(*(longlong *)pFVar23 + 0x1b8))(pFVar23,0);
    local_1a8.TableOffset = uVar24;
    ::operator<<(pFVar23,&local_1a8);
    (**(code **)(*(longlong *)pFVar23 + 0x1b8))(pFVar23,uVar24);
    ::operator<<(pFVar23,(FPipelineCacheFileFormatTOC *)local_120);
    (**(code **)(*(longlong *)pFVar23 + 0x208))(pFVar23);
    bVar14 = (bool)(~((byte)pFVar23->field_0x29 >> 1) & 1);
    (**(code **)(*(longlong *)pFVar23 + 0x210))(pFVar23);
    (*(code *)**(undefined8 **)pFVar23)(pFVar23,1);
  }
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  local_170.Pairs.HashSize = 0;
  if (local_170.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_170.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_170);
  return bVar14;
}

// SetGameUsageMaskWithComparison @ 145c78ec0

ulong64 __cdecl
FPipelineFileCacheManager::SetGameUsageMaskWithComparison
          (ulong64 param_1,_func___cdecl_bool_ulong64_ulong64 *param_2)

{
  ulong64 uVar1;
  bool bVar2;
  code *pcVar3;
  
  bVar2 = IsPipelineFileCacheEnabled();
  if (bVar2) {
    AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    uVar1 = GameUsageMask;
    pcVar3 = DefaultPSOMaskComparisonFunction;
    GameUsageMaskSet = true;
    if (param_2 != (_func___cdecl_bool_ulong64_ulong64 *)0x0) {
      pcVar3 = param_2;
    }
    MaskComparisonFn = pcVar3;
    GameUsageMask = param_1;
    ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    return uVar1;
  }
  return 0;
}

// ShouldEnableFileCache @ 145c795c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FPipelineFileCacheManager::ShouldEnableFileCache(void)

{
  return GRHIGlobals.SupportsPipelineFileCache;
}

// Shutdown @ 145c797a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPipelineFileCacheManager::Shutdown(void)

{
  ulonglong uVar1;
  void *pvVar2;
  FName FVar3;
  code *pcVar4;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_PSOStatMemory> FVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  FNameEntryId FVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  uint local_res8;
  uint uStackX_c;
  int local_res10;
  FName local_res18;
  FName local_res20;
  undefined4 uStack_ac;
  FStatMessage local_a8;
  FStatMessage local_98;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FName local_58;
  FName local_50 [2];
  
  bVar6 = IsPipelineFileCacheEnabled();
  if (bVar6) {
    AcquireSRWLockExclusive((PSRWLOCK)&FileCacheLock);
    iVar9 = Stats._40_4_;
    iVar20 = 0;
    uVar7 = 1;
    iVar21 = 0;
    iVar8 = iVar21;
    if (Stats._40_4_ != 0) {
      puVar22 = (uint *)&Stats.field_0x10;
      if (Stats._32_8_ != 0) {
        puVar22 = (uint *)Stats._32_8_;
      }
      uVar18 = *puVar22;
      iVar21 = 0;
      while (uVar18 == 0) {
        lVar16 = (longlong)iVar20;
        iVar21 = iVar21 + 0x20;
        iVar20 = iVar20 + 1;
        iVar8 = Stats._40_4_;
        if ((int)(Stats._40_4_ + -1 + (Stats._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_145c7988d;
        uVar18 = puVar22[lVar16 + 1];
      }
      uVar7 = -uVar18 & uVar18;
      uVar1 = (ulonglong)uVar7 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_res10 = (int)lVar16;
      iVar8 = iVar21 + -1 + local_res10;
      if ((int)Stats._40_4_ < iVar8) {
        iVar8 = Stats._40_4_;
      }
    }
LAB_145c7988d:
    uVar18 = Stats._40_4_ & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uVar7,iVar20);
    local_88 = &Stats;
    TStack_80.CurrentBitIndex = iVar8;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    TStack_80._28_4_ = iVar8;
    TStack_80.BaseBitIndex = iVar21;
    uStack_60 = CONCAT44(uStack_ac,Stats._8_4_ - Stats._52_4_);
    iVar21 = (int)Stats._40_4_ >> 5;
    bVar15 = Stats._40_1_;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&Stats.field_0x10;
    if (((int)Stats._40_4_ < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iVar9 != Stats._40_4_) {
      lVar16 = 0x154be5c60;
      if (Stats._32_8_ != 0) {
        lVar16 = Stats._32_8_;
      }
      uVar7 = -1 << (bVar15 & 0x1f) & *(uint *)(lVar16 + (longlong)iVar21 * 4);
      while (uVar7 == 0) {
        lVar17 = (longlong)iVar21;
        uVar18 = uVar18 + 0x20;
        iVar21 = iVar21 + 1;
        iVar9 = Stats._40_4_;
        if ((int)(Stats._40_4_ + -1 + (Stats._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_145c799a0;
        uVar7 = *(uint *)(lVar16 + 4 + lVar17 * 4);
      }
      uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar9 = (int)lVar16 + -1 + uVar18;
      if ((int)Stats._40_4_ < iVar9) {
        iVar9 = Stats._40_4_;
      }
    }
LAB_145c799a0:
    while( true ) {
      pTVar5 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineStateStats_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (((TStack_80.CurrentBitIndex == iVar9) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)&Stats.field_0x10)) &&
         (pTVar5 == &Stats)) break;
      pvVar2 = *(void **)(*(longlong *)pTVar5 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x18);
      if (pvVar2 != (void *)0x0) {
        ::operator_delete(pvVar2,0x28);
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    bVar6 = 1 < (int)Stats._72_4_;
    if (!bVar6) {
      TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
                        *)&Stats);
    }
    Stats._8_4_ = 0;
    if (Stats._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&Stats,0,(int *)&Stats.field_0xc);
    }
    Stats._48_4_ = 0xffffffff;
    Stats._52_4_ = 0;
    Stats._40_4_ = 0;
    if (0x80 < (uint)Stats._44_4_) {
      Stats._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&Stats.field_0x10,0);
    }
    if (bVar6) {
      Stats._72_4_ = 1;
      TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
                *)&Stats);
    }
    bVar6 = 1 < NewPSOs.HashSize;
    if (!bVar6) {
      TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
      ::UnhashElements(&NewPSOs);
    }
    TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&NewPSOs.Elements,0,NewPSOs.Elements._8_4_);
    NewPSOs.Elements._8_4_ = 0;
    if (NewPSOs.Elements._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2d0,8,0,(ForAnyElementType *)&NewPSOs,0,(int *)&NewPSOs.Elements.field_0xc);
    }
    NewPSOs.Elements._48_4_ = 0xffffffff;
    NewPSOs.Elements._52_4_ = 0;
    NewPSOs.Elements._40_4_ = 0;
    if (0x80 < (uint)NewPSOs.Elements._44_4_) {
      NewPSOs.Elements._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&NewPSOs.Elements.field_0x10,0);
    }
    if (bVar6) {
      NewPSOs.HashSize = 1;
      TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
      ::Rehash(&NewPSOs);
    }
    bVar6 = 1 < NewPSOHashes.HashSize;
    if (!bVar6) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
                (&NewPSOHashes);
    }
    NewPSOHashes.Elements._8_4_ = 0;
    if (NewPSOHashes.Elements._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&NewPSOHashes,0,
                 (int *)&NewPSOHashes.Elements.field_0xc);
    }
    NewPSOHashes.Elements._48_4_ = 0xffffffff;
    NewPSOHashes.Elements._52_4_ = 0;
    NewPSOHashes.Elements._40_4_ = 0;
    if (0x80 < (uint)NewPSOHashes.Elements._44_4_) {
      NewPSOHashes.Elements._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&NewPSOHashes.Elements.field_0x10,0);
    }
    if (bVar6) {
      NewPSOHashes.HashSize = 1;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(&NewPSOHashes)
      ;
    }
    NumNewPSOs = 0;
    bVar6 = 1 < (int)FileCacheMap._72_4_;
    if (!bVar6) {
      TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                        *)&FileCacheMap);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&FileCacheMap,0,FileCacheMap._8_4_);
    FileCacheMap._8_4_ = 0;
    if (FileCacheMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&FileCacheMap,0,(int *)&FileCacheMap.field_0xc);
    }
    FileCacheMap._48_4_ = 0xffffffff;
    FileCacheMap._52_4_ = 0;
    FileCacheMap._40_4_ = 0;
    if (0x80 < (uint)FileCacheMap._44_4_) {
      FileCacheMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&FileCacheMap.field_0x10,0);
    }
    if (bVar6) {
      FileCacheMap._72_4_ = 1;
      TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                *)&FileCacheMap);
    }
    FileCacheEnabled = false;
    FVar11 = StatPtr_STAT_NewCachedPSOMemory;
    if (StatPtr_STAT_NewCachedPSOMemory == (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)0x0
       ) {
      pFVar10 = ::FName::FName(&local_58,"STAT_NewCachedPSOMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewCachedPSOMemory,*pFVar10,
                          L"New Cached PSO","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                          L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar11;
    FVar19 = FVar3.ComparisonIndex.Value;
    uVar7 = FVar3.Number;
    local_res8 = FVar19.Value;
    uStackX_c = uVar7;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_a8.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_a8.StatData.Pad[0] = '\0';
      local_a8.StatData.Pad[1] = '\0';
      local_a8.StatData.Pad[2] = '\0';
      local_a8.StatData.Pad[3] = '\0';
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_res18 = FVar3;
      local_a8.NameAndInfo.Index.Value = FVar19.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_a8);
      FStatsTrace::Set(&local_res18,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    FVar14 = StatPtr_STAT_PSOStatMemory;
    if (StatPtr_STAT_PSOStatMemory == (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)0x0) {
      pFVar10 = ::FName::FName(local_50,"STAT_PSOStatMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOStatMemory,*pFVar10,
                          L"PSO Stat","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                          L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar14;
    uVar7 = FVar3.Number;
    FVar19 = FVar3.ComparisonIndex.Value;
    local_res8 = FVar19.Value;
    uStackX_c = uVar7;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_98.NameAndInfo.Number = uVar7 & 0xffff8fff | 0x8000;
      local_98.StatData.Pad[0] = '\0';
      local_98.StatData.Pad[1] = '\0';
      local_98.StatData.Pad[2] = '\0';
      local_98.StatData.Pad[3] = '\0';
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_res20 = FVar3;
      local_98.NameAndInfo.Index.Value = FVar19.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_98);
      FStatsTrace::Set(&local_res20,0);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FileCacheLock);
  }
  return;
}

