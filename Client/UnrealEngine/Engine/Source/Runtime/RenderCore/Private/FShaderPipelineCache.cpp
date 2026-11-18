// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 33

// <lambda_invoker_cdecl> @ 145e73d40

void __cdecl
`FShaderPipelineCache::BeginNextPrecompileCacheTask'::__l10::<lambda_1>::<lambda_invoker_cdecl>
          (void)

{
  FShaderPipelineCache::BeginNextPrecompileCacheTaskInternal
            (FShaderPipelineCache::ShaderPipelineCache);
  return;
}

// FShaderPipelineCache @ 145e82240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShaderPipelineCache * __thiscall
FShaderPipelineCache::FShaderPipelineCache(FShaderPipelineCache *this,EShaderPlatform param_1)

{
  FShaderStableKeyDebugInfoReader *this_00;
  LARGE_INTEGER LVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  double dVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<float> *pTVar8;
  FNameEntryId FVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ShaderPipelineTaskCount> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ShaderPipelineWaitingTaskCount> FVar16;
  FThreadSafeStaticStat<FStat_STAT_ShaderPipelineActiveTaskCount> FVar17;
  wchar_t *pwVar18;
  TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
  *this_01;
  int iVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  uchar auVar24 [8];
  uchar auVar25 [8];
  uint uVar26;
  uint *puVar27;
  longlong lVar28;
  LARGE_INTEGER local_res8;
  undefined1 local_a8 [8];
  FStatNameAndInfo local_a0;
  FString local_98;
  undefined1 local_88 [16];
  undefined4 local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FShaderStableKeyDebugInfoReader *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTickableObjectRenderThread__6B_;
  FTickableObjectRenderThread::Register((FTickableObjectRenderThread *)this);
  this->bPaused = false;
  this->_padding_ = (longlong)&___7FShaderPipelineCache__6B_;
  this->PausedCount = 0;
  this->LastAutoSaveTime = 0.0;
  QueryPerformanceCounter(&local_res8);
  this_00 = &this->ShaderHashToStableKey;
  puVar3 = &(this->ShaderHashToStableKey).ShaderHashesToSource.field_0xc;
  dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->LastAutoSaveNum = -1;
  *(undefined8 *)&(this->CompiledHashes).Elements = 0;
  *(undefined8 *)&(this->CompiledHashes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CompiledHashes).Elements.field_0x20 = 0;
  this->LastAutoSaveTimeLogBoundPSO = dVar4 + __real_4170000000000000;
  *(undefined4 *)&(this->CompiledHashes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CompiledHashes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CompiledHashes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompiledHashes).Elements.field_0x34 = 0;
  (this->CompiledHashes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CompiledHashes).HashSize = 0;
  *(undefined8 *)&this_00->ShaderHashesToSource = 0;
  *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x8 = 0;
  *(undefined4 *)puVar3 = 0;
  *(undefined8 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x20 = 0;
  *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x28 = 0;
  *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x2c = 0x80;
  *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x34 = 0;
  *(undefined8 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x40 = 0;
  *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x48 = 0;
  *(undefined8 *)&this->ShaderCacheTasks = 0;
  *(undefined8 *)&(this->ShaderCacheTasks).field_0x8 = 0;
  *(undefined8 *)&(this->ShaderCacheTasks).field_0x20 = 0;
  *(undefined4 *)&(this->ShaderCacheTasks).field_0x28 = 0;
  *(undefined4 *)&(this->ShaderCacheTasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShaderCacheTasks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShaderCacheTasks).field_0x34 = 0;
  *(undefined8 *)&(this->ShaderCacheTasks).field_0x40 = 0;
  *(undefined4 *)&(this->ShaderCacheTasks).field_0x48 = 0;
  (this->PendingPrecompilePSOCacheKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingPrecompilePSOCacheKeys).ArrayNum = 0;
  (this->PendingPrecompilePSOCacheKeys).ArrayMax = 0;
  (this->CurrentPrecompilingPSOFCKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentPrecompilingPSOFCKey).Data.ArrayNum = 0;
  (this->CurrentPrecompilingPSOFCKey).Data.ArrayMax = 0;
  this->bHasShaderPipelineTask = (atomic<bool>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Mutex,4000);
  (this->NextPrecompileCacheTask).Reference = (FBaseGraphTask *)0x0;
  *(undefined8 *)&this->BlendStateCache = 0;
  *(undefined8 *)&(this->BlendStateCache).field_0x8 = 0;
  *(undefined8 *)&(this->BlendStateCache).field_0x20 = 0;
  *(undefined4 *)&(this->BlendStateCache).field_0x28 = 0;
  *(undefined4 *)&(this->BlendStateCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlendStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlendStateCache).field_0x34 = 0;
  *(undefined8 *)&(this->BlendStateCache).field_0x40 = 0;
  *(undefined4 *)&(this->BlendStateCache).field_0x48 = 0;
  *(undefined8 *)&this->RasterizerStateCache = 0;
  *(undefined8 *)&(this->RasterizerStateCache).field_0x8 = 0;
  *(undefined8 *)&(this->RasterizerStateCache).field_0x20 = 0;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x28 = 0;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x34 = 0;
  *(undefined8 *)&(this->RasterizerStateCache).field_0x40 = 0;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x48 = 0;
  *(undefined8 *)&this->DepthStencilStateCache = 0;
  *(undefined8 *)&(this->DepthStencilStateCache).field_0x8 = 0;
  *(undefined8 *)&(this->DepthStencilStateCache).field_0x20 = 0;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x28 = 0;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x34 = 0;
  *(undefined8 *)&(this->DepthStencilStateCache).field_0x40 = 0;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x48 = 0;
  FVar13 = StatPtr_STAT_ShaderPipelineTaskCount;
  if (StatPtr_STAT_ShaderPipelineTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineTaskCount>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_res8.s,"STAT_ShaderPipelineTaskCount");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineTaskCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineTaskCount,*pFVar12,
                        L"Outstanding Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                        L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  LVar1 = *(LARGE_INTEGER *)FVar13;
  local_res8 = LVar1;
  if (((LVar1.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_a8[0] = '\0';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\0';
    local_a0 = (FStatNameAndInfo)(LVar1.QuadPart & 0xffff8fffffffffffU | 0x800000000000);
    local_res8 = LVar1;
    FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_a8);
    FStatsTrace::Set((FName *)&local_res8.s,0);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  FVar16 = StatPtr_STAT_ShaderPipelineWaitingTaskCount;
  if (StatPtr_STAT_ShaderPipelineWaitingTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineWaitingTaskCount>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_res8.s,"STAT_ShaderPipelineWaitingTaskCount");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineWaitingTaskCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineWaitingTaskCount,
                        *pFVar12,L"Waiting Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                        L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  LVar1 = *(LARGE_INTEGER *)FVar16;
  local_res8 = LVar1;
  if (((LVar1.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_a0 = (FStatNameAndInfo)(LVar1.QuadPart & 0xffff8fffffffffffU | 0x800000000000);
    local_a8[0] = '\0';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\0';
    local_res8 = LVar1;
    FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_a8);
    FStatsTrace::Set((FName *)&local_res8.s,0);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  FVar17 = StatPtr_STAT_ShaderPipelineActiveTaskCount;
  if (StatPtr_STAT_ShaderPipelineActiveTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineActiveTaskCount>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_res8.s,"STAT_ShaderPipelineActiveTaskCount");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineActiveTaskCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineActiveTaskCount,
                        *pFVar12,L"Active Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                        L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  LVar1 = *(LARGE_INTEGER *)FVar17;
  local_res8 = LVar1;
  if (((LVar1.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_a8[0] = '\0';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\0';
    local_a0 = (FStatNameAndInfo)(LVar1.QuadPart & 0xffff8fffffffffffU | 0x800000000000);
    local_res8 = LVar1;
    FThreadStats::AddStatMessage(pFVar14,(FStatMessage *)local_a8);
    FStatsTrace::Set((FName *)&local_res8.s,0);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  pTVar5 = CVarPSOFileCacheStartupMode.Ref;
  bVar10 = IsInParallelGameThread();
  if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
    lVar22 = 0;
  }
  else {
    lVar22 = 4;
  }
  pTVar7 = CVarPSOFileCacheBatchSize.Ref;
  pTVar6 = CVarPSOFileCacheBackgroundBatchSize.Ref;
  lVar28 = 0;
  iVar11 = *(int *)((longlong)pTVar5->ShadowedValue + lVar22);
  if (iVar11 == 0) {
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_145e8293a:
      lVar22 = lVar28;
    }
    else {
      bVar10 = IsInGameThread();
      lVar22 = 4;
      if (bVar10) goto LAB_145e8293a;
    }
    pTVar8 = CVarPSOFileCacheBatchTime.Ref;
    BatchSize = *(uint *)((longlong)pTVar7->ShadowedValue + lVar22);
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_145e82962:
      lVar22 = lVar28;
    }
    else {
      bVar10 = IsInGameThread();
      lVar22 = 4;
      if (bVar10) goto LAB_145e82962;
    }
    BatchTime = *(float *)((longlong)pTVar8->ShadowedValue + lVar22);
    this->PausedCount = 1;
    this->bPaused = true;
    if (3 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  else if ((iVar11 == 1) || (iVar11 != 2)) {
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_145e828e1:
      lVar22 = lVar28;
    }
    else {
      bVar10 = IsInGameThread();
      lVar22 = 4;
      if (bVar10) goto LAB_145e828e1;
    }
    pTVar8 = CVarPSOFileCacheBatchTime.Ref;
    BatchSize = *(uint *)((longlong)pTVar7->ShadowedValue + lVar22);
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_145e82909:
      lVar22 = lVar28;
    }
    else {
      bVar10 = IsInGameThread();
      lVar22 = 4;
      if (bVar10) goto LAB_145e82909;
    }
    BatchTime = *(float *)((longlong)pTVar8->ShadowedValue + lVar22);
  }
  else {
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_145e82888:
      lVar22 = lVar28;
    }
    else {
      bVar10 = IsInGameThread();
      lVar22 = 4;
      if (bVar10) goto LAB_145e82888;
    }
    pTVar8 = CVarPSOFileCacheBackgroundBatchTime.Ref;
    BatchSize = *(uint *)((longlong)pTVar6->ShadowedValue + lVar22);
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_145e828b0:
      lVar22 = lVar28;
    }
    else {
      bVar10 = IsInGameThread();
      lVar22 = 4;
      if (bVar10) goto LAB_145e828b0;
    }
    BatchTime = *(float *)((longlong)pTVar8->ShadowedValue + lVar22);
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pwVar18 = FCommandLine::Get();
  bVar10 = FParse::Value(pwVar18,L"-shkfile=",&local_98,true,(wchar_t **)0x0);
  if ((!bVar10) || (local_98.Data.ArrayNum < 2)) goto LAB_145e82c90;
  local_88._0_8_ = local_98.Data.AllocatorInstance.Data;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  iVar11 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  local_a0.Index.Value = 0;
  local_a0.Number = 0;
  local_88._8_4_ = iVar11;
  bVar10 = UE::PipelineCacheUtilities::LoadStableKeysFile
                     ((TStringView<wchar_t> *)local_88,
                      (TArray<FStableShaderKeyAndValue,TSizedDefaultAllocator<32>_> *)local_a8);
  if (bVar10) {
    bVar10 = 1 < *(int *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x48;
    if (!bVar10) {
      TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,
                      *(int *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x8);
    iVar11 = *(int *)puVar3;
    *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x8 = 0;
    if (iVar11 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
    }
    *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x34 = 0;
    puVar3 = &(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x10;
    *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x28 = 0;
    iVar11 = *(int *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x2c;
    if ((iVar11 < 0) || (0x80 < iVar11)) {
      *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,0);
    }
    if (bVar10) {
      *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x48 = 1;
      if ((*(longlong *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x40 != 0) &&
         (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)
                     &(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x40,0,0,4),
         *(longlong *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x40 != 0)) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)
                   &(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x40,0,0,4);
      }
      puVar2 = *(undefined4 **)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x40;
      puVar20 = (undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x38;
      if (puVar2 != (undefined4 *)0x0) {
        puVar20 = puVar2;
      }
      *puVar20 = 0xffffffff;
      if (*(int *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x48 != 0) {
        iVar11 = *(int *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x28;
        iVar19 = 0;
        local_88._0_8_ = &DAT_100000000;
        iStack_74 = 0;
        iStack_70 = 0;
        local_88._8_8_ = puVar3;
        if (iVar11 != 0) {
          puVar27 = *(uint **)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x20;
          if (puVar27 == (uint *)0x0) {
            puVar27 = (uint *)puVar3;
          }
          uVar26 = *puVar27;
          iStack_70 = iVar19;
          while (uVar26 == 0) {
            local_78 = 0xffffffff;
            iStack_70 = iStack_70 + 0x20;
            lVar22 = (longlong)iVar19;
            iVar19 = iVar19 + 1;
            local_88._4_4_ = (undefined4)((ulonglong)local_88._0_8_ >> 0x20);
            local_88._0_4_ = iVar19;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_145e82c17;
            uVar26 = puVar27[lVar22 + 1];
          }
          local_78 = 0xffffffff;
          local_88._4_4_ = -uVar26 & uVar26;
          uVar21 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iStack_74 = (int)lVar22 + -1 + iStack_70;
          if (iVar11 < iStack_74) goto LAB_145e82c17;
        }
        local_78 = 0xffffffff;
        local_60.CurrentBitIndex = iStack_74;
        local_60.UnvisitedBitMask = 0xffffffff;
        local_60._28_4_ = uStack_6c;
        local_60.BaseBitIndex = iStack_70;
        local_60._padding_ = local_88._0_8_;
        iVar19 = iStack_74;
        local_68 = this_00;
        local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
        if (iStack_74 < iVar11) {
          do {
            lVar22 = *(longlong *)&local_68->ShaderHashesToSource;
            lVar28 = (longlong)iVar19 * 0x70;
            uVar26 = *(int *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x48 - 1U &
                     *(uint *)(lVar28 + lVar22);
            *(uint *)(lVar28 + 0x6c + lVar22) = uVar26;
            puVar3 = *(undefined1 **)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x40;
            puVar23 = &(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar23 = puVar3;
            }
            uVar21 = (longlong)
                     *(int *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x48 - 1U &
                     (longlong)(int)uVar26;
            *(undefined4 *)(lVar28 + 0x68 + lVar22) = *(undefined4 *)(puVar23 + uVar21 * 4);
            *(int *)(puVar23 + uVar21 * 4) = iVar19;
            local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
            iVar19 = local_60.CurrentBitIndex;
          } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
        }
      }
    }
LAB_145e82c17:
    FVar9.Value = local_a0.Index.Value;
    auVar25 = (uchar  [8])((longlong)(int)local_a0.Index.Value * 0x108 + (longlong)local_a8);
    auVar24 = (uchar  [8])local_a8;
    while( true ) {
      if (local_a0.Index.Value != FVar9.Value) {
        `TCheckedPointerIterator<FStableShaderKeyAndValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (auVar24 == auVar25) break;
      this_01 = TMapBase<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<FSHAHash_const_&>
                          ((TMapBase<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>_>
                            *)this_00,*(uint *)((FSHAHash *)((longlong)auVar24 + 0xf0))->Hash,
                           (FSHAHash *)((longlong)auVar24 + 0xf0));
      TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
      ::Emplace<FStableShaderKeyAndValue_const_&>
                (this_01,(FStableShaderKeyAndValue *)&stack0x00000018,(bool *)auVar24);
      auVar24 = (uchar  [8])((longlong)auVar24 + 0x108);
    }
  }
  DestructItems<FStableShaderKeyAndValue,int>
            ((FStableShaderKeyAndValue *)local_a8,local_a0.Index.Value);
  if ((uchar  [8])local_a8 != (uchar  [8])0x0) {
    FMemory::Free((void *)local_a8);
  }
LAB_145e82c90:
  pTVar5 = CVarPSOFileCachePreCompileMask.Ref;
  bVar10 = IsInParallelGameThread();
  if ((bVar10) || (bVar10 = IsInGameThread(), lVar22 = 4, bVar10)) {
    lVar22 = 0;
  }
  FPipelineFileCacheManager::SetGameUsageMaskWithComparison
            ((longlong)*(int *)((longlong)pTVar5->ShadowedValue + lVar22),PreCompileMaskComparison);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillDeactivateDelegate,(_func___cdecl_void *)&local_res8);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FShaderPipelineCache @ 145e84ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

void __thiscall FShaderPipelineCache::~FShaderPipelineCache(FShaderPipelineCache *this)

{
  FAtomicFlags *pFVar1;
  TMap<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
  *pTVar2;
  TMap<FBlendStateInitializerRHI,FRHIBlendState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>_>
  *this_00;
  TMap<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>_>
  *this_01;
  TMap<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>_>
  *this_02;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  undefined4 uVar5;
  FBaseGraphTask *pFVar6;
  FRHIResource *pFVar7;
  undefined4 *puVar8;
  void *pvVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<FSetElementId> FVar11;
  code *pcVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 uVar14;
  TMap<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>_>
  *pTVar15;
  bool bVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar17;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  *pTVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  longlong lVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  FRasterizerStateInitializerRHI *pFVar26;
  FDepthStencilStateInitializerRHI *pFVar27;
  undefined1 *puVar28;
  uint *puVar29;
  uint uVar30;
  undefined1 auStackY_348 [32];
  undefined1 local_318;
  undefined1 local_317 [7];
  TMap<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
  *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  undefined8 local_2e8;
  int local_2e0;
  uint uStack_2dc;
  undefined1 *puStack_2d8;
  undefined4 local_2d0;
  int iStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  uint uStack_2bc;
  undefined1 *puStack_2b8;
  undefined4 local_2b0;
  int iStack_2ac;
  int iStack_2a8;
  undefined4 uStack_2a4;
  TRefCountPtr<FBaseGraphTask> local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  int local_218;
  int local_214;
  TMap<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>_>
  *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  TMap<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  undefined1 local_1c0 [12];
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined8 uStack_1a8;
  longlong local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [12];
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined8 uStack_178;
  longlong local_170;
  int iStack_168;
  undefined4 uStack_164;
  TMap<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>_>
  *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  TMap<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>_>
  *local_130;
  longlong lStack_128;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int local_108;
  undefined4 uStack_104;
  undefined1 local_100 [40];
  int local_d8;
  undefined4 uStack_d4;
  TRangedForIterator local_d0;
  TRangedForIterator local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_348;
  this->_padding_ = (longlong)&___7FShaderPipelineCache__6B_;
  if (&this->Mutex == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  pFVar6 = (this->NextPrecompileCacheTask).Reference;
  if ((pFVar6 != (FBaseGraphTask *)0x0) && (pFVar6->field_0xd0 == '\0')) {
    UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport
              ((FTaskBase *)(this->NextPrecompileCacheTask).Reference);
  }
  local_2a0.Reference = (FBaseGraphTask *)0x0;
  TRefCountPtr<FBaseGraphTask>::operator=(&this->NextPrecompileCacheTask,&local_2a0);
  if (local_2a0.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar28 = &(local_2a0.Reference)->field_0x30;
    iVar25 = *(int *)puVar28;
    *(int *)puVar28 = *(int *)puVar28 + -1;
    UNLOCK();
    if (iVar25 == 1) {
      (*(code *)**(undefined8 **)local_2a0.Reference)(local_2a0.Reference,1);
    }
  }
  CloseUserPipelineFileCache();
  puVar28 = &(this->ShaderCacheTasks).field_0x10;
  local_298._padding_._0_4_ = 0;
  pTVar2 = &this->ShaderCacheTasks;
  local_298._padding_._4_4_ = 1;
  local_298.UnvisitedBitMask = 0xffffffff;
  local_298.CurrentBitIndex = 0;
  local_298.BaseBitIndex = 0;
  local_298.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar28;
  if (*(int *)&(this->ShaderCacheTasks).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_298);
  }
  TStack_308._padding_ = CONCAT44(local_298._padding_._4_4_,(undefined4)local_298._padding_);
  TStack_308._16_8_ = CONCAT44(local_298.CurrentBitIndex,local_298.UnvisitedBitMask);
  TStack_308._24_8_ = CONCAT44(local_298._28_4_,local_298.BaseBitIndex);
  local_2e8._0_4_ =
       *(int *)&(this->ShaderCacheTasks).field_0x8 - *(int *)&(this->ShaderCacheTasks).field_0x34;
  TStack_308.Array = local_298.Array;
  local_1b0 = local_298.Array;
  uStack_194 = local_2e8._4_4_;
  local_310 = pTVar2;
  local_1c0._0_8_ = pTVar2;
  unique0x1000235e = TStack_308._padding_;
  uStack_1a8 = TStack_308._16_8_;
  local_1a0 = TStack_308._24_8_;
  iStack_198 = (int)local_2e8;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_70,(TBitArray<FDefaultBitArrayAllocator> *)puVar28,
                       *(int *)&(this->ShaderCacheTasks).field_0x28);
  TStack_308._padding_ = pTVar17->_padding_;
  TStack_308.Array = pTVar17->Array;
  TStack_308.UnvisitedBitMask = pTVar17->UnvisitedBitMask;
  TStack_308.CurrentBitIndex = pTVar17->CurrentBitIndex;
  TStack_308._24_8_ = *(undefined8 *)&pTVar17->BaseBitIndex;
  local_2e8._0_4_ =
       *(int *)&(this->ShaderCacheTasks).field_0x8 - *(int *)&(this->ShaderCacheTasks).field_0x34;
  local_d0.InitialNum = (int)local_2e8;
  local_d0._44_4_ = local_2e8._4_4_;
  local_310 = pTVar2;
  local_d0._padding_ = (longlong)pTVar2;
  local_d0._padding_ = TStack_308._padding_;
  local_d0._padding_ = (longlong)TStack_308.Array;
  local_d0._padding_ = TStack_308._16_8_;
  local_d0._padding_ = TStack_308._24_8_;
  bVar16 = TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_1c0,&local_d0);
  if (bVar16) {
    do {
      FShaderPipelineCacheTask::Close
                (*(FShaderPipelineCacheTask **)
                  ((longlong)uStack_1a8._4_4_ * 0x20 + 0x10 + *(longlong *)local_1c0._0_8_));
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8 & ~uStack_1b4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1c0 + 8));
      bVar16 = TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_1c0,&local_d0);
    } while (bVar16);
  }
  puVar28 = &(this->BlendStateCache).field_0x10;
  local_278._padding_._0_4_ = 0;
  this_00 = &this->BlendStateCache;
  local_278._padding_._4_4_ = 1;
  local_278.UnvisitedBitMask = 0xffffffff;
  local_278.CurrentBitIndex = 0;
  local_278.BaseBitIndex = 0;
  local_278.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar28;
  if (*(int *)&(this->BlendStateCache).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_278);
  }
  TStack_308._padding_ = CONCAT44(local_278._padding_._4_4_,(undefined4)local_278._padding_);
  TStack_308._16_8_ = CONCAT44(local_278.CurrentBitIndex,local_278.UnvisitedBitMask);
  TStack_308._24_8_ = CONCAT44(local_278._28_4_,local_278.BaseBitIndex);
  iStack_168 = *(int *)&(this->BlendStateCache).field_0x8 -
               *(int *)&(this->BlendStateCache).field_0x34;
  TStack_308.Array = local_278.Array;
  local_180 = local_278.Array;
  uStack_164 = local_2e8._4_4_;
  local_310 = (TMap<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
               *)this_00;
  local_190._0_8_ = this_00;
  unique0x1000237e = TStack_308._padding_;
  uStack_178 = TStack_308._16_8_;
  local_170 = TStack_308._24_8_;
  local_2e8._0_4_ = iStack_168;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_50,(TBitArray<FDefaultBitArrayAllocator> *)puVar28,
                       *(int *)&(this->BlendStateCache).field_0x28);
  TStack_308._padding_ = pTVar17->_padding_;
  TStack_308.Array = pTVar17->Array;
  TStack_308.UnvisitedBitMask = pTVar17->UnvisitedBitMask;
  TStack_308.CurrentBitIndex = pTVar17->CurrentBitIndex;
  TStack_308._24_8_ = *(undefined8 *)&pTVar17->BaseBitIndex;
  local_2e8._0_4_ =
       *(int *)&(this->BlendStateCache).field_0x8 - *(int *)&(this->BlendStateCache).field_0x34;
  local_a0.InitialNum = (int)local_2e8;
  local_a0._44_4_ = local_2e8._4_4_;
  local_310 = (TMap<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
               *)this_00;
  local_a0._padding_ = (longlong)this_00;
  local_a0._padding_ = TStack_308._padding_;
  local_a0._padding_ = (longlong)TStack_308.Array;
  local_a0._padding_ = TStack_308._16_8_;
  local_a0._padding_ = TStack_308._24_8_;
  bVar16 = TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_190,&local_a0);
  if (bVar16) {
    do {
      pFVar7 = *(FRHIResource **)
                (*(longlong *)(undefined1 *)local_190._0_8_ + 0x40 +
                (longlong)uStack_178._4_4_ * 0x50);
      LOCK();
      pFVar1 = &pFVar7->AtomicFlags;
      aVar3 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar3 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(OldPacked & DeletingBit) == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0xa2,L"Resource is being deleted."), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar24 = (uint)aVar3 & 0x3fffffff;
      if (uVar24 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumRefs >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0xa4,L"Reference count has underflowed.");
        if (bVar16) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewValue >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0x53,L"");
        if (bVar16) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else if (uVar24 == 1) {
        FRHIResource::MarkForDelete(pFVar7);
      }
      uStack_178 = CONCAT44(uStack_178._4_4_,(uint)uStack_178 & ~uStack_184);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_190 + 8));
      bVar16 = TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_190,&local_a0);
    } while (bVar16);
  }
  if (*(int *)&(this->BlendStateCache).field_0x48 < 2) {
    TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
                      *)this_00);
    TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0);
    *(undefined4 *)&(this->BlendStateCache).field_0x48 = 1;
    TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_258._padding_._4_4_ = 1;
  puVar28 = &(this->RasterizerStateCache).field_0x10;
  local_258._padding_._0_4_ = 0;
  this_01 = &this->RasterizerStateCache;
  local_258.UnvisitedBitMask = 0xffffffff;
  local_258.CurrentBitIndex = 0;
  local_258.BaseBitIndex = 0;
  local_258.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar28;
  if (*(int *)&(this->RasterizerStateCache).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_258);
  }
  TStack_158._padding_ = CONCAT44(local_258._padding_._4_4_,(undefined4)local_258._padding_);
  TStack_158.CurrentBitIndex = local_258.CurrentBitIndex;
  TStack_158.UnvisitedBitMask = local_258.UnvisitedBitMask;
  TStack_158._28_4_ = local_258._28_4_;
  TStack_158.BaseBitIndex = local_258.BaseBitIndex;
  local_d8 = *(int *)&(this->RasterizerStateCache).field_0x8 -
             *(int *)&(this->RasterizerStateCache).field_0x34;
  local_100._16_8_ = local_258.Array;
  uStack_138 = CONCAT44(uStack_d4,local_d8);
  TStack_158.Array = local_258.Array;
  local_160 = this_01;
  local_100._0_8_ = this_01;
  local_100._8_8_ = TStack_158._padding_;
  local_100._24_8_ = TStack_158._16_8_;
  local_100._32_8_ = TStack_158._24_8_;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_100,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar28,
                       *(int *)&(this->RasterizerStateCache).field_0x28);
  lStack_128 = pTVar17->_padding_;
  pTVar13 = pTVar17->Array;
  uVar14._0_4_ = pTVar17->UnvisitedBitMask;
  uVar14._4_4_ = pTVar17->CurrentBitIndex;
  uStack_110 = *(undefined8 *)&pTVar17->BaseBitIndex;
  pTStack_120 = pTVar13;
  uStack_118 = uVar14;
  while( true ) {
    pTVar15 = local_160;
    if (*(int *)(&local_160->field_0x0 + 8) - *(int *)(&local_160->field_0x0 + 0x34) !=
        (int)uStack_138) {
      local_318 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_318);
    }
    if (((TStack_158.CurrentBitIndex == uVar14._4_4_) && (TStack_158.Array == pTVar13)) &&
       (pTVar15 == this_01)) break;
    pFVar7 = *(FRHIResource **)
              ((longlong)TStack_158.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&pTVar15->field_0x0
              );
    LOCK();
    pFVar1 = &pFVar7->AtomicFlags;
    aVar3 = pFVar1->Packed;
    pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
    UNLOCK();
    if (((int)aVar3 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(OldPacked & DeletingBit) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0xa2,L"Resource is being deleted."), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar24 = (uint)aVar3 & 0x3fffffff;
    if (uVar24 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumRefs >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0xa4,L"Reference count has underflowed.");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewValue >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0x53,L"");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else if (uVar24 == 1) {
      FRHIResource::MarkForDelete(pFVar7);
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  }
  bVar16 = 1 < *(int *)&(this->RasterizerStateCache).field_0x48;
  if (!bVar16) {
    TSet<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar28 = &(this->RasterizerStateCache).field_0xc;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x8 = 0;
  if (*(int *)puVar28 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar28);
  }
  puVar28 = &(this->RasterizerStateCache).field_0x10;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x34 = 0;
  iVar25 = *(int *)&(this->RasterizerStateCache).field_0x2c;
  *(undefined4 *)&(this->RasterizerStateCache).field_0x28 = 0;
  if ((iVar25 < 0) || (0x80 < iVar25)) {
    *(undefined4 *)&(this->RasterizerStateCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar28,0)
    ;
  }
  if (bVar16) {
    *(undefined4 *)&(this->RasterizerStateCache).field_0x48 = 1;
    if ((*(longlong *)&(this->RasterizerStateCache).field_0x40 != 0) &&
       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->RasterizerStateCache).field_0x40,0,0,4),
       *(longlong *)&(this->RasterizerStateCache).field_0x40 != 0)) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->RasterizerStateCache).field_0x40,0,0,4);
    }
    puVar8 = *(undefined4 **)&(this->RasterizerStateCache).field_0x40;
    puVar20 = (undefined4 *)&(this->RasterizerStateCache).field_0x38;
    if (puVar8 != (undefined4 *)0x0) {
      puVar20 = puVar8;
    }
    *puVar20 = 0xffffffff;
    if (*(int *)&(this->RasterizerStateCache).field_0x48 != 0) {
      iVar25 = *(int *)&(this->RasterizerStateCache).field_0x28;
      local_2e0 = 0;
      uStack_2dc = 1;
      iStack_2cc = 0;
      iStack_2c8 = 0;
      if (iVar25 != 0) {
        puVar29 = *(uint **)&(this->RasterizerStateCache).field_0x20;
        if (puVar29 == (uint *)0x0) {
          puVar29 = (uint *)puVar28;
        }
        uVar24 = *puVar29;
        local_2e0 = 0;
        while (uVar24 == 0) {
          iStack_2c8 = iStack_2c8 + 0x20;
          lVar21 = (longlong)local_2e0;
          local_2e0 = local_2e0 + 1;
          if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2e0)
          goto LAB_145e85680;
          uVar24 = puVar29[lVar21 + 1];
        }
        uStack_2dc = -uVar24 & uVar24;
        uVar19 = (ulonglong)uStack_2dc * 2 + 1;
        lVar21 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_218 = (int)lVar21;
        iStack_2cc = local_218 + -1 + iStack_2c8;
        if (iVar25 < iStack_2cc) {
LAB_145e85680:
          iStack_2cc = iVar25;
        }
      }
      local_2d0 = 0xffffffff;
      local_208._padding_ = CONCAT44(uStack_2dc,local_2e0);
      local_208.CurrentBitIndex = iStack_2cc;
      local_208.UnvisitedBitMask = 0xffffffff;
      local_208._28_4_ = uStack_2c4;
      local_208.BaseBitIndex = iStack_2c8;
      iVar23 = iStack_2cc;
      puStack_2d8 = puVar28;
      local_210 = this_01;
      local_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar28;
      if (iStack_2cc < iVar25) {
        do {
          pFVar26 = (FRasterizerStateInitializerRHI *)
                    ((longlong)iVar23 * 0x20 + *(longlong *)&local_210->field_0x0);
          uVar24 = ::GetTypeHash(pFVar26);
          uVar24 = *(int *)&(this->RasterizerStateCache).field_0x48 - 1U & uVar24;
          pFVar26[1].DepthClipMode = (char)uVar24;
          pFVar26[1].bAllowMSAA = (bool)(char)(uVar24 >> 8);
          *(short *)&pFVar26[1].field_0xe = (short)(uVar24 >> 0x10);
          puVar28 = *(undefined1 **)&(this->RasterizerStateCache).field_0x40;
          puVar22 = &(this->RasterizerStateCache).field_0x38;
          if (puVar28 != (undefined1 *)0x0) {
            puVar22 = puVar28;
          }
          uVar19 = (longlong)*(int *)&(this->RasterizerStateCache).field_0x48 - 1U &
                   (longlong)(int)uVar24;
          pFVar26[1].SlopeScaleDepthBias = *(float *)(puVar22 + uVar19 * 4);
          *(int *)(puVar22 + uVar19 * 4) = iVar23;
          local_208.UnvisitedBitMask = local_208.UnvisitedBitMask & ~local_208._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
          iVar23 = local_208.CurrentBitIndex;
        } while (local_208.CurrentBitIndex < (local_208.Array)->NumBits);
      }
    }
  }
  local_238._padding_._4_4_ = 1;
  local_238.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->DepthStencilStateCache).field_0x10;
  local_238._padding_._0_4_ = 0;
  this_02 = &this->DepthStencilStateCache;
  local_238.UnvisitedBitMask = 0xffffffff;
  local_238.CurrentBitIndex = 0;
  local_238.BaseBitIndex = 0;
  if (*(int *)&(this->DepthStencilStateCache).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
  }
  uVar24 = *(uint *)&(this->DepthStencilStateCache).field_0x28;
  TStack_308._padding_ = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
  TStack_308.CurrentBitIndex = local_238.CurrentBitIndex;
  TStack_308.UnvisitedBitMask = local_238.UnvisitedBitMask;
  TStack_308._28_4_ = local_238._28_4_;
  TStack_308.BaseBitIndex = local_238.BaseBitIndex;
  local_108 = *(int *)&(this->DepthStencilStateCache).field_0x8 -
              *(int *)&(this->DepthStencilStateCache).field_0x34;
  pTStack_120 = local_238.Array;
  uVar30 = uVar24 & 0xffffffe0;
  iVar25 = (int)uVar24 >> 5;
  local_2e8 = CONCAT44(uStack_104,local_108);
  TStack_308.Array = local_238.Array;
  local_310 = (TMap<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
               *)this_02;
  local_130 = this_02;
  lStack_128 = TStack_308._padding_;
  uStack_118 = TStack_308._16_8_;
  uStack_110 = TStack_308._24_8_;
  if (((int)uVar24 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar4 = *(uint *)&(this->DepthStencilStateCache).field_0x28;
  if (uVar24 != uVar4) {
    puVar28 = *(undefined1 **)&(this->DepthStencilStateCache).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = &(this->DepthStencilStateCache).field_0x10;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar25 * 4);
    while (uVar24 == 0) {
      lVar21 = (longlong)iVar25;
      uVar30 = uVar30 + 0x20;
      iVar25 = iVar25 + 1;
      uVar24 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_145e8586f;
      uVar24 = *(uint *)(puVar28 + lVar21 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_214 = (int)lVar21;
    uVar24 = local_214 + -1 + uVar30;
    if ((int)uVar4 < (int)uVar24) {
      uVar24 = uVar4;
    }
  }
LAB_145e8586f:
  while( true ) {
    pTVar2 = local_310;
    if (*(int *)(&local_310->field_0x0 + 8) - *(int *)(&local_310->field_0x0 + 0x34) !=
        (int)local_2e8) {
      local_317[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_317);
    }
    if (((TStack_308.CurrentBitIndex == uVar24) &&
        (TStack_308.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->DepthStencilStateCache).field_0x10)) &&
       (pTVar2 == (TMap<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
                   *)this_02)) break;
    pFVar7 = *(FRHIResource **)
              ((longlong)TStack_308.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&pTVar2->field_0x0)
    ;
    LOCK();
    pFVar1 = &pFVar7->AtomicFlags;
    aVar3 = pFVar1->Packed;
    pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
    UNLOCK();
    if (((int)aVar3 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(OldPacked & DeletingBit) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0xa2,L"Resource is being deleted."), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar30 = (uint)aVar3 & 0x3fffffff;
    if (uVar30 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumRefs >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0xa4,L"Reference count has underflowed.");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewValue >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0x53,L"");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else if (uVar30 == 1) {
      FRHIResource::MarkForDelete(pFVar7);
    }
    TStack_308.UnvisitedBitMask = TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
  }
  bVar16 = 1 < *(int *)&(this->DepthStencilStateCache).field_0x48;
  if (!bVar16) {
    TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  puVar28 = &(this->DepthStencilStateCache).field_0xc;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x8 = 0;
  if (*(int *)puVar28 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_02,0,(int *)puVar28);
  }
  puVar28 = &(this->DepthStencilStateCache).field_0x10;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x34 = 0;
  iVar25 = *(int *)&(this->DepthStencilStateCache).field_0x2c;
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x28 = 0;
  if ((iVar25 < 0) || (0x80 < iVar25)) {
    *(undefined4 *)&(this->DepthStencilStateCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar28,0)
    ;
  }
  if (bVar16) {
    *(undefined4 *)&(this->DepthStencilStateCache).field_0x48 = 1;
    if ((*(longlong *)&(this->DepthStencilStateCache).field_0x40 != 0) &&
       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->DepthStencilStateCache).field_0x40,0,0,4),
       *(longlong *)&(this->DepthStencilStateCache).field_0x40 != 0)) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->DepthStencilStateCache).field_0x40,0,0,4);
    }
    puVar8 = *(undefined4 **)&(this->DepthStencilStateCache).field_0x40;
    puVar20 = (undefined4 *)&(this->DepthStencilStateCache).field_0x38;
    if (puVar8 != (undefined4 *)0x0) {
      puVar20 = puVar8;
    }
    *puVar20 = 0xffffffff;
    if (*(int *)&(this->DepthStencilStateCache).field_0x48 != 0) {
      iVar25 = *(int *)&(this->DepthStencilStateCache).field_0x28;
      local_2c0 = 0;
      uStack_2bc = 1;
      iStack_2ac = 0;
      iStack_2a8 = 0;
      if (iVar25 != 0) {
        puVar29 = *(uint **)&(this->DepthStencilStateCache).field_0x20;
        if (puVar29 == (uint *)0x0) {
          puVar29 = (uint *)puVar28;
        }
        uVar24 = *puVar29;
        iStack_2a8 = 0;
        local_2c0 = 0;
        while (uVar24 == 0) {
          iStack_2a8 = iStack_2a8 + 0x20;
          lVar21 = (longlong)local_2c0;
          local_2c0 = local_2c0 + 1;
          if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2c0)
          goto LAB_145e85ae7;
          uVar24 = puVar29[lVar21 + 1];
        }
        uStack_2bc = -uVar24 & uVar24;
        uVar19 = (ulonglong)uStack_2bc * 2 + 1;
        lVar21 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iStack_2ac = (int)lVar21 + -1 + iStack_2a8;
        if (iVar25 < iStack_2ac) {
LAB_145e85ae7:
          iStack_2ac = iVar25;
        }
      }
      local_2b0 = 0xffffffff;
      local_1e0._padding_ = CONCAT44(uStack_2bc,local_2c0);
      local_1e0.CurrentBitIndex = iStack_2ac;
      local_1e0.UnvisitedBitMask = 0xffffffff;
      local_1e0._28_4_ = uStack_2a4;
      local_1e0.BaseBitIndex = iStack_2a8;
      iVar23 = iStack_2ac;
      puStack_2b8 = puVar28;
      local_1e8 = this_02;
      local_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar28;
      if (iStack_2ac < iVar25) {
        do {
          pFVar27 = (FDepthStencilStateInitializerRHI *)
                    ((longlong)iVar23 * 0x20 + *(longlong *)&local_1e8->field_0x0);
          uVar24 = ::GetTypeHash(pFVar27);
          uVar24 = *(int *)&(this->DepthStencilStateCache).field_0x48 - 1U & uVar24;
          pFVar27[2].bEnableDepthWrite = (bool)(char)uVar24;
          pFVar27[2].DepthTest = (TEnumAsByte<ECompareFunction>)(char)(uVar24 >> 8);
          pFVar27[2].bEnableFrontFaceStencil = (bool)(char)(uVar24 >> 0x10);
          pFVar27[2].FrontFaceStencilTest = (TEnumAsByte<ECompareFunction>)(char)(uVar24 >> 0x18);
          puVar28 = *(undefined1 **)&(this->DepthStencilStateCache).field_0x40;
          puVar22 = &(this->DepthStencilStateCache).field_0x38;
          if (puVar28 != (undefined1 *)0x0) {
            puVar22 = puVar28;
          }
          uVar19 = (longlong)*(int *)&(this->DepthStencilStateCache).field_0x48 - 1U &
                   (longlong)(int)uVar24;
          uVar5 = *(undefined4 *)(puVar22 + uVar19 * 4);
          pFVar27[1].BackFaceDepthFailStencilOp = (TEnumAsByte<EStencilOp>)(char)uVar5;
          pFVar27[1].BackFacePassStencilOp = (TEnumAsByte<EStencilOp>)(char)((uint)uVar5 >> 8);
          pFVar27[1].StencilReadMask = (char)((uint)uVar5 >> 0x10);
          pFVar27[1].StencilWriteMask = (char)((uint)uVar5 >> 0x18);
          *(int *)(puVar22 + uVar19 * 4) = iVar23;
          local_1e0.UnvisitedBitMask = local_1e0.UnvisitedBitMask & ~local_1e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
          iVar23 = local_1e0.CurrentBitIndex;
        } while (local_1e0.CurrentBitIndex < (local_1e0.Array)->NumBits);
      }
    }
  }
  pTVar18 = UE::ShaderPipeline::FShutdownContainer::Get();
  UE::ShaderPipeline::FShutdownContainer::ShutdownAndWait(pTVar18->Ptr);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  *(undefined4 *)&(this->DepthStencilStateCache).field_0x48 = 0;
  pvVar9 = *(void **)&(this->DepthStencilStateCache).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_02);
  *(undefined4 *)&(this->RasterizerStateCache).field_0x48 = 0;
  pvVar9 = *(void **)&(this->RasterizerStateCache).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RasterizerStateCache);
  *(undefined4 *)&(this->BlendStateCache).field_0x48 = 0;
  pvVar9 = *(void **)&(this->BlendStateCache).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BlendStateCache);
  pFVar6 = (this->NextPrecompileCacheTask).Reference;
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar28 = &pFVar6->field_0x30;
    iVar25 = *(int *)puVar28;
    *(int *)puVar28 = *(int *)puVar28 + -1;
    UNLOCK();
    if (iVar25 == 1) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  pFVar10 = (this->CurrentPrecompilingPSOFCKey).Data.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  DestructItems<FString,int>
            ((FString *)(this->PendingPrecompilePSOCacheKeys).AllocatorInstance.Data,
             (this->PendingPrecompilePSOCacheKeys).ArrayNum);
  pFVar10 = (this->PendingPrecompilePSOCacheKeys).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  *(undefined4 *)&(this->ShaderCacheTasks).field_0x48 = 0;
  pvVar9 = *(void **)&(this->ShaderCacheTasks).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShaderCacheTasks);
  *(undefined4 *)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x48 = 0;
  pvVar9 = *(void **)&(this->ShaderHashToStableKey).ShaderHashesToSource.field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShaderHashToStableKey);
  (this->CompiledHashes).HashSize = 0;
  FVar11 = (this->CompiledHashes).Hash.SecondaryData;
  if (FVar11 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CompiledHashes).Elements);
  this->_padding_ = (longlong)&___7FTickableObjectRenderThread__6B_;
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)this);
  return;
}

// ApplyNewUsageMaskToAllTasks @ 145e8d250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FShaderPipelineCache::ApplyNewUsageMaskToAllTasks(FShaderPipelineCache *this,ulong64 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FShaderPipelineCache *pFVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *pTVar11;
  longlong lVar12;
  FShaderPipelineCacheTask *pFVar13;
  undefined1 *puVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  FShaderPipelineCacheTask *pFVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar21;
  FString *pFVar22;
  uint uVar23;
  uint uVar24;
  TMap<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
  *pTVar25;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  FShaderPipelineCacheTask *pFVar20;
  
  pFVar6 = ShaderPipelineCache;
  pFVar17 = (FShaderPipelineCacheTask *)0x0;
  if (1 < (ShaderPipelineCache->CurrentPrecompilingPSOFCKey).Data.ArrayNum) {
    pTVar11 = TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
              ::Find((TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
                      *)&ShaderPipelineCache->ShaderCacheTasks,
                     &ShaderPipelineCache->CurrentPrecompilingPSOFCKey);
    pFVar13 = pFVar17;
    if (pTVar11 !=
        (TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *)0x0) {
      pFVar13 = pTVar11->Ptr;
    }
    FShaderPipelineCacheTask::Flush(pFVar13);
    ::FString::Empty(&pFVar6->CurrentPrecompilingPSOFCKey);
  }
  piVar1 = &(pFVar6->PendingPrecompilePSOCacheKeys).ArrayMax;
  pFVar4 = (pFVar6->PendingPrecompilePSOCacheKeys).AllocatorInstance.Data;
  iVar16 = (pFVar6->PendingPrecompilePSOCacheKeys).ArrayNum;
  uVar18 = 0;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar4,iVar16);
    (pFVar6->PendingPrecompilePSOCacheKeys).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar6->PendingPrecompilePSOCacheKeys).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar4,iVar16);
    (pFVar6->PendingPrecompilePSOCacheKeys).ArrayNum = 0;
  }
  LOCK();
  pFVar6->bHasShaderPipelineTask = (atomic<bool>)0x0;
  pFVar6 = ShaderPipelineCache;
  UNLOCK();
  uVar8 = 1;
  pTVar25 = &ShaderPipelineCache->ShaderCacheTasks;
  uVar19 = 0;
  uVar23 = *(uint *)&(ShaderPipelineCache->ShaderCacheTasks).field_0x28;
  puVar2 = &(ShaderPipelineCache->ShaderCacheTasks).field_0x10;
  uVar9 = uVar19;
  if (uVar23 != 0) {
    puVar21 = *(uint **)&(ShaderPipelineCache->ShaderCacheTasks).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar2;
    }
    uVar9 = *puVar21;
    pFVar13 = pFVar17;
    pFVar20 = pFVar17;
    uVar19 = 0;
    uVar18 = 0;
    while (uVar9 == 0) {
      iVar16 = (int)pFVar13;
      uVar19 = (int)pFVar20 + 0x20;
      pFVar20 = (FShaderPipelineCacheTask *)(ulonglong)uVar19;
      uVar18 = iVar16 + 1;
      pFVar13 = (FShaderPipelineCacheTask *)(ulonglong)uVar18;
      uVar9 = uVar23;
      if ((int)(((int)(uVar23 - 1) >> 0x1f & 0x1fU) + (uVar23 - 1)) >> 5 < (int)uVar18)
      goto LAB_145e8d39e;
      uVar9 = puVar21[(longlong)iVar16 + 1];
    }
    uVar8 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar9 = (uVar19 - 1) + local_res20;
    if ((int)uVar23 < (int)uVar9) {
      uVar9 = uVar23;
    }
  }
LAB_145e8d39e:
  uVar10 = *(uint *)&(ShaderPipelineCache->ShaderCacheTasks).field_0x28;
  uVar24 = uVar10 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,uVar18);
  TStack_68.CurrentBitIndex = uVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar10 >> 5;
  TStack_68._28_4_ = uVar9;
  TStack_68.BaseBitIndex = uVar19;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(ShaderPipelineCache->ShaderCacheTasks).field_0x8 -
                       *(int *)&(ShaderPipelineCache->ShaderCacheTasks).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || ((int)uVar23 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar16 = (*pcVar5)();
    return iVar16;
  }
  uVar18 = *(uint *)&(pFVar6->ShaderCacheTasks).field_0x28;
  if (uVar10 != uVar18) {
    puVar14 = *(undefined1 **)&(pFVar6->ShaderCacheTasks).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    uVar23 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar23 == 0) {
      lVar12 = (longlong)iVar16;
      uVar24 = uVar24 + 0x20;
      iVar16 = iVar16 + 1;
      uVar10 = uVar18;
      if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iVar16)
      goto LAB_145e8d4b0;
      uVar23 = *(uint *)(puVar14 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar10 = (int)lVar12 + -1 + uVar24;
    if ((int)uVar18 < (int)uVar10) {
      uVar10 = uVar18;
    }
  }
LAB_145e8d4b0:
  do {
    if (*(int *)&(pFVar6->ShaderCacheTasks).field_0x8 -
        *(int *)&(pFVar6->ShaderCacheTasks).field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar10) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
      return (int)pFVar17;
    }
    pFVar22 = (FString *)((longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)pTVar25);
    pFVar4 = pFVar22[1].Data.AllocatorInstance.Data;
    if (*(int *)(pFVar4 + 0x80) != *(int *)(pFVar4 + 0xac)) {
      pFVar15 = pFVar4 + 0xb0;
      if (*(FScriptContainerElement **)(pFVar4 + 0xb8) != (FScriptContainerElement *)0x0) {
        pFVar15 = *(FScriptContainerElement **)(pFVar4 + 0xb8);
      }
      iVar16 = *(int *)(pFVar15 +
                       (ulonglong)
                       (*(int *)(pFVar4 + 0xc0) - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1)
                       * 4);
      if (iVar16 != -1) {
        do {
          if (*(ulong64 *)(*(longlong *)(pFVar4 + 0x78) + (longlong)iVar16 * 0x10) == param_1)
          goto LAB_145e8d56f;
          iVar16 = *(int *)(*(longlong *)(pFVar4 + 0x78) + 8 + (longlong)iVar16 * 0x10);
        } while (iVar16 != -1);
      }
    }
    pFVar4[0xe1] = (FScriptContainerElement)0x1;
    EnqueuePendingPrecompileTask(ShaderPipelineCache,pFVar22);
    pFVar17 = (FShaderPipelineCacheTask *)(ulonglong)((int)pFVar17 + 1);
LAB_145e8d56f:
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// BeginNextPrecompileCacheTask @ 145e8e890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FShaderPipelineCache::BeginNextPrecompileCacheTask(FShaderPipelineCache *this)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  FBaseGraphTask *pFVar6;
  bool bVar7;
  FTaskBase *pFVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  FTaskBase *this_00;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res10 [8];
  longlong local_58;
  longlong local_50;
  code *local_48;
  undefined **local_38;
  code *pcStack_30;
  FPipe *local_28;
  undefined ***local_20;
  
  pTVar3 = &this->NextPrecompileCacheTask;
  if ((pTVar3->Reference != (FBaseGraphTask *)0x0) && (pTVar3->Reference->field_0xd0 == '\0')) {
    return;
  }
  this_00 = (FTaskBase *)0x0;
  if (pTVar3 != (TRefCountPtr<FBaseGraphTask> *)&local_58) {
    pFVar6 = pTVar3->Reference;
    pTVar3->Reference = (FBaseGraphTask *)0x0;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar6->field_0x30;
      iVar4 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
    }
  }
  bVar7 = IsInGameThread();
  if (!bVar7) {
    local_38 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
    local_20 = (undefined ***)0x0;
    pcStack_30 = `FShaderPipelineCache::BeginNextPrecompileCacheTask'::__l10::<lambda_1>::
                 <lambda_invoker_cdecl>;
    local_48 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    pFVar8 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    if (pFVar8 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar8,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar8->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
      this_00 = pFVar8;
    }
    this_00[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    this_00[1]._padding_ = (longlong)local_48;
    *(undefined ****)&this_00[1].StateChangeEvent = local_20;
    this_00[1]._padding_ = (longlong)local_38;
    *(code **)&this_00[1].RefCount = pcStack_30;
    this_00[1].Pipe = local_28;
    if (this_00[1]._padding_ != 0) {
      local_48 = (code *)0x0;
    }
    this_00[1].ExecutingThreadId = (atomic<unsigned_int>)0x1;
    UE::Tasks::Private::TranslatePriority(GameThread,local_res10,local_res8);
    UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res10[0],local_res8[0],None);
    if (this_00 != (FTaskBase *)0x0) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x130);
    if (local_48 != (code *)0x0) {
      pppuVar10 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar10 = local_20;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    pTVar3 = &this->NextPrecompileCacheTask;
    if (pTVar3 == (TRefCountPtr<FBaseGraphTask> *)&local_50) {
      if (this_00 == (FTaskBase *)0x0) {
        return;
      }
      LOCK();
      paVar2 = &this_00->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 != (atomic<unsigned_int>)0x1) {
        return;
      }
      puVar9 = (undefined8 *)this_00->_padding_;
    }
    else {
      pFVar8 = (FTaskBase *)pTVar3->Reference;
      pTVar3->Reference = (FBaseGraphTask *)this_00;
      if (pFVar8 == (FTaskBase *)0x0) {
        return;
      }
      LOCK();
      paVar2 = &pFVar8->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 != (atomic<unsigned_int>)0x1) {
        return;
      }
      puVar9 = (undefined8 *)pFVar8->_padding_;
      this_00 = pFVar8;
    }
    (*(code *)*puVar9)(this_00,1);
    return;
  }
  BeginNextPrecompileCacheTaskInternal(ShaderPipelineCache);
  return;
}

// BeginNextPrecompileCacheTaskInternal @ 145e8eac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderPipelineCache::BeginNextPrecompileCacheTaskInternal(FShaderPipelineCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FString *this_00;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_01;
  FScriptContainerElement *pFVar1;
  FShaderPipelineCacheTask *this_02;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  int iVar9;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CurrentPrecompilingPSOFCKey).Data.ArrayNum < 2) {
    if ((this->PendingPrecompilePSOCacheKeys).ArrayNum != 0) {
      this_00 = &this->CurrentPrecompilingPSOFCKey;
      this_01 = &this->PendingPrecompilePSOCacheKeys;
      do {
        if (((this->PendingPrecompilePSOCacheKeys).ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this_01->AllocatorInstance).Data;
        iVar5 = *(int *)(pFVar1 + 8);
        iVar9 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar9 = 0;
        }
        ::FString::AssignRange(this_00,*(wchar_t **)pFVar1,iVar9);
        if (((this->PendingPrecompilePSOCacheKeys).ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_01,0);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_01->AllocatorInstance,(this->PendingPrecompilePSOCacheKeys).ArrayNum
                   ,&(this->PendingPrecompilePSOCacheKeys).ArrayMax);
        iVar5 = (this->CurrentPrecompilingPSOFCKey).Data.ArrayNum;
        if (iVar5 == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
          iVar5 = iVar5 + -1;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        iVar5 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                            *)&this->ShaderCacheTasks,uVar4,this_00);
        puVar7 = (undefined8 *)0x0;
        if (iVar5 != -1) {
          puVar7 = (undefined8 *)((longlong)iVar5 * 0x20 + *(longlong *)&this->ShaderCacheTasks);
        }
        puVar6 = puVar7 + 2;
        if (puVar7 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        this_02 = (FShaderPipelineCacheTask *)*puVar6;
        if ((this_02->bReady == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextPrecompileTask->bReady",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                               ,0x6d4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (4 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        FShaderPipelineCacheTask::BeginPrecompilingPipelineCache(this_02);
        if (this_02->bReady != false) {
          LOCK();
          this->bHasShaderPipelineTask = (atomic<bool>)0x1;
          UNLOCK();
          break;
        }
        if (2 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        ::FString::Empty(this_00);
      } while ((this->PendingPrecompilePSOCacheKeys).ArrayNum != 0);
      if ((this->PendingPrecompilePSOCacheKeys).ArrayNum != 0) goto LAB_145e8ed4d;
    }
    if ((this->CurrentPrecompilingPSOFCKey).Data.ArrayNum < 2) {
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      LOCK();
      this->bHasShaderPipelineTask = (atomic<bool>)0x0;
      UNLOCK();
    }
  }
LAB_145e8ed4d:
                    /* WARNING: Could not recover jumptable at 0x000145e8ed56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ClearPendingPrecompileTaskQueue @ 145e92090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderPipelineCache::ClearPendingPrecompileTaskQueue(FShaderPipelineCache *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *pTVar4;
  FShaderPipelineCacheTask *this_00;
  
  this_00 = (FShaderPipelineCacheTask *)0x0;
  if (1 < (this->CurrentPrecompilingPSOFCKey).Data.ArrayNum) {
    pTVar4 = TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
             ::Find((TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
                     *)&ShaderPipelineCache->ShaderCacheTasks,&this->CurrentPrecompilingPSOFCKey);
    if (pTVar4 != (TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *)
                  0x0) {
      this_00 = pTVar4->Ptr;
    }
    FShaderPipelineCacheTask::Flush(this_00);
    ::FString::Empty(&this->CurrentPrecompilingPSOFCKey);
  }
  piVar1 = &(this->PendingPrecompilePSOCacheKeys).ArrayMax;
  pFVar3 = (this->PendingPrecompilePSOCacheKeys).AllocatorInstance.Data;
  iVar2 = (this->PendingPrecompilePSOCacheKeys).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->PendingPrecompilePSOCacheKeys).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PendingPrecompilePSOCacheKeys).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->PendingPrecompilePSOCacheKeys).ArrayNum = 0;
  }
  LOCK();
  this->bHasShaderPipelineTask = (atomic<bool>)0x0;
  UNLOCK();
  return;
}

// CloseUserPipelineFileCache @ 145e923b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FShaderPipelineCache::CloseUserPipelineFileCache(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  FShaderPipelineCache *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    lpCriticalSection = &ShaderPipelineCache->Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar5 = GetShaderPipelineCacheSaveBoundPSOLog();
    if (bVar5) {
      SavePipelineFileCache(BoundPSOsOnly);
    }
    bVar5 = GetPSOFileCacheSaveUserCache();
    if (bVar5) {
      SavePipelineFileCache(Incremental);
    }
    pFVar4 = ShaderPipelineCache;
    pwVar10 = L"";
    if (UserCacheTaskKey.Data.ArrayNum != 0) {
      pwVar10 = (wchar_t *)UserCacheTaskKey.Data.AllocatorInstance.Data;
    }
    iVar7 = UserCacheTaskKey.Data.ArrayNum + -1;
    if (UserCacheTaskKey.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
    iVar7 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                        *)&pFVar4->ShaderCacheTasks,uVar6,&UserCacheTaskKey);
    if (iVar7 != -1) {
      lVar8 = (longlong)iVar7 * 0x20 + *(longlong *)&pFVar4->ShaderCacheTasks;
      puVar9 = (undefined8 *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         ((FShaderPipelineCacheTask *)*puVar9 != (FShaderPipelineCacheTask *)0x0)) {
        FShaderPipelineCacheTask::Close((FShaderPipelineCacheTask *)*puVar9);
        pFVar4 = ShaderPipelineCache;
        pFVar1 = (ShaderPipelineCache->PendingPrecompilePSOCacheKeys).AllocatorInstance.Data;
        if ((pFVar1 < (FScriptContainerElement *)0x155195599) &&
           ((&UserCacheTaskKey <
             pFVar1 + (longlong)(ShaderPipelineCache->PendingPrecompilePSOCacheKeys).ArrayMax * 0x10
            && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res8.Item = &UserCacheTaskKey;
        TArray<FString,TSizedDefaultAllocator<32>_>::
        RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                  (&pFVar4->PendingPrecompilePSOCacheKeys,&local_res8);
        pFVar4 = ShaderPipelineCache;
        if (*(int *)&(ShaderPipelineCache->ShaderCacheTasks).field_0x8 !=
            *(int *)&(ShaderPipelineCache->ShaderCacheTasks).field_0x34) {
          iVar7 = UserCacheTaskKey.Data.ArrayNum + -1;
          FVar3 = UserCacheTaskKey.Data.AllocatorInstance;
          if (UserCacheTaskKey.Data.ArrayNum == 0) {
            iVar7 = 0;
            FVar3.Data = (FScriptContainerElement *)L"";
          }
          uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar3.Data);
          TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FString>
                    ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                      *)&pFVar4->ShaderCacheTasks,uVar6,&UserCacheTaskKey);
        }
      }
    }
    FPipelineFileCacheManager::CloseUserPipelineFileCache();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// EnqueuePendingPrecompileTask @ 145e967a0

void __thiscall
FShaderPipelineCache::EnqueuePendingPrecompileTask(FShaderPipelineCache *this,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  
  pFVar8 = (this->PendingPrecompilePSOCacheKeys).AllocatorInstance.Data;
  piVar1 = &(param_1->Data).ArrayNum;
  pFVar9 = pFVar8 + (longlong)(this->PendingPrecompilePSOCacheKeys).ArrayNum * 0x10;
  do {
    if (pFVar8 == pFVar9) {
LAB_145e9683e:
      iVar3 = *piVar1;
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        pwVar7 = L"";
        iVar6 = 0;
      }
      else {
        pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
      iVar6 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                          *)&this->ShaderCacheTasks,uVar5,param_1);
      if ((iVar6 == -1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ShaderCacheTasks.Contains(PSOCacheKey)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                              ,0x6b9,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar2 = &this->PendingPrecompilePSOCacheKeys;
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar8 <= param_1) &&
          (param_1 < pFVar8 + (longlong)(this->PendingPrecompilePSOCacheKeys).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->PendingPrecompilePSOCacheKeys).ArrayNum;
      piVar1 = &(this->PendingPrecompilePSOCacheKeys).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->PendingPrecompilePSOCacheKeys).ArrayNum = iVar6 + 1;
      ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                         param_1);
      BeginNextPrecompileCacheTask(this);
      return;
    }
    iVar6 = *(int *)(pFVar8 + 8);
    iVar3 = *piVar1;
    if (iVar6 == iVar3) {
      if (1 < iVar6) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar8,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar10 = iVar6 == 0;
        goto LAB_145e96802;
      }
LAB_145e96814:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!PendingPrecompilePSOCacheKeys.Contains(PSOCacheKey)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                          ,0x6b8,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_145e9683e;
    }
    bVar10 = iVar6 + iVar3 == 1;
LAB_145e96802:
    if (bVar10) goto LAB_145e96814;
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// GetGameVersionForPSOFileCache @ 145e9d9a0

int __cdecl FShaderPipelineCache::GetGameVersionForPSOFileCache(void)

{
  FEngineVersion *this;
  wchar_t *pwVar1;
  uint local_res8 [8];
  FString local_18;
  
  this = FEngineVersion::Current();
  local_res8[0] = FEngineVersionBase::GetChangelist((FEngineVersionBase *)this);
  pwVar1 = L"";
  if (GGameIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GGameIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::GetInt
            (GConfig,FShaderPipelineCacheConstants::SectionHeading,
             FShaderPipelineCacheConstants::GameVersionKey,(int *)local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetOrCreateBlendState @ 145e9e100

FRHIBlendState * __thiscall
FShaderPipelineCache::GetOrCreateBlendState
          (FShaderPipelineCache *this,FBlendStateInitializerRHI *param_1)

{
  TMap<FBlendStateInitializerRHI,FRHIBlendState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>_>
  *this_00;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  FMemScope local_res20;
  FBlendStateInitializerRHI *local_18;
  FMemScope *local_10;
  
  this_00 = &this->BlendStateCache;
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FBlendStateInitializerRHI>
                    ((TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x50 + *(longlong *)&this_00->field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x40);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FRHIBlendState *)*puVar4;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1165,L"RHIMisc/CreateBlendState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1165,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`class_TRefCountPtr<FRHIBlendState>___cdecl_RHICreateBlendState(FBlendStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1165,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x60))(GDynamicRHI,&local_res18,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  FRHIResource::AddRef((FRHIResource *)local_res18);
  local_res20 = local_res18;
  local_10 = &local_res20;
  local_18 = param_1;
  TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FBlendStateInitializerRHI_const_&,FRHIBlendState_*_&&>_>
            ((TSet<TTuple<FBlendStateInitializerRHI,FRHIBlendState_*>,TDefaultMapHashableKeyFuncs<FBlendStateInitializerRHI,FRHIBlendState_*,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FBlendStateInitializerRHI_const_&,FRHIBlendState_*_&&> *)local_res8,
             (bool *)&local_18);
  if (local_res18 != (FMemScope)0x0) {
    FRHIResource::Release((FRHIResource *)local_res18);
  }
  return (FRHIBlendState *)local_res18;
}

// GetOrCreateDepthStencilState @ 145e9e280

/* WARNING: Enum "Type": Some values do not have unique names */

FRHIDepthStencilState * __thiscall
FShaderPipelineCache::GetOrCreateDepthStencilState
          (FShaderPipelineCache *this,FDepthStencilStateInitializerRHI *param_1)

{
  TMap<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>_>
  *this_00;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  FMemScope local_res20;
  FDepthStencilStateInitializerRHI *local_18;
  FMemScope *local_10;
  
  this_00 = &this->DepthStencilStateCache;
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDepthStencilStateInitializerRHI>
                    ((TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this_00->field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FRHIDepthStencilState *)*puVar4;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1159,L"RHIMisc/CreateDepthStencilState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1159,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1159,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x58))(GDynamicRHI,&local_res18,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  FRHIResource::AddRef((FRHIResource *)local_res18);
  local_res20 = local_res18;
  local_10 = &local_res20;
  local_18 = param_1;
  TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FDepthStencilStateInitializerRHI_const_&,FRHIDepthStencilState_*_&&>_>
            ((TSet<TTuple<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*>,TDefaultMapHashableKeyFuncs<FDepthStencilStateInitializerRHI,FRHIDepthStencilState_*,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FDepthStencilStateInitializerRHI_const_&,FRHIDepthStencilState_*_&&>
              *)local_res8,(bool *)&local_18);
  if (local_res18 != (FMemScope)0x0) {
    FRHIResource::Release((FRHIResource *)local_res18);
  }
  return (FRHIDepthStencilState *)local_res18;
}

// GetOrCreateRasterizerState @ 145e9e400

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

FRHIRasterizerState * __thiscall
FShaderPipelineCache::GetOrCreateRasterizerState
          (FShaderPipelineCache *this,FRasterizerStateInitializerRHI *param_1)

{
  TMap<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>_>
  *this_00;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  FMemScope local_res20;
  FRasterizerStateInitializerRHI *local_18;
  FMemScope *local_10;
  
  this_00 = &this->RasterizerStateCache;
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRasterizerStateInitializerRHI>
                    ((TSet<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this_00->field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FRHIRasterizerState *)*puVar4;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1153,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1153,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_res18,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  FRHIResource::AddRef((FRHIResource *)local_res18);
  local_res20 = local_res18;
  local_10 = &local_res20;
  local_18 = param_1;
  TSet<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRasterizerStateInitializerRHI_const_&,FRHIRasterizerState_*_&&>_>
            ((TSet<TTuple<FRasterizerStateInitializerRHI,FRHIRasterizerState_*>,TDefaultMapHashableKeyFuncs<FRasterizerStateInitializerRHI,FRHIRasterizerState_*,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FRasterizerStateInitializerRHI_const_&,FRHIRasterizerState_*_&&> *)
             local_res8,(bool *)&local_18);
  if (local_res18 != (FMemScope)0x0) {
    FRHIResource::Release((FRHIResource *)local_res18);
  }
  return (FRHIRasterizerState *)local_res18;
}

// GetStatId @ 145ea11e0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FShaderPipelineCache::GetStatId(FShaderPipelineCache *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FShaderPipelineCache::GetStatId(void)const_::_2_::FStat_FShaderPipelineBatchCompiler>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FShaderPipelineBatchCompiler ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FShaderPipelineCache::GetStatId(void)const_::_2_::FStat_FShaderPipelineBatchCompiler>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FShaderPipelineBatchCompiler");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FShaderPipelineBatchCompiler,*pFVar1,
                   L"FShaderPipelineBatchCompiler","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FShaderPipelineBatchCompiler;
  if (StatPtr_FShaderPipelineBatchCompiler ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FShaderPipelineCache::GetStatId(void)const_::_2_::FStat_FShaderPipelineBatchCompiler>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FShaderPipelineBatchCompiler");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FShaderPipelineCache::GetStatId(void)const_::_2_::FStat_FShaderPipelineBatchCompiler>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FShaderPipelineBatchCompiler,*pFVar1,
                         L"FShaderPipelineBatchCompiler","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// Initialize @ 145ea38d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FShaderPipelineCache::Initialize(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  FEngineVersion *this;
  FShaderPipelineCache *this_00;
  wchar_t *pwVar3;
  uint local_res10 [6];
  FString local_18;
  
  pwVar3 = L"";
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderPipelineCache == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                       ,0x2e0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FShaderCodeLibrary::IsEnabled();
  if (bVar2) {
    this = FEngineVersion::Current();
    local_res10[0] = FEngineVersionBase::GetChangelist((FEngineVersionBase *)this);
    if (GGameIni.Data.ArrayNum != 0) {
      pwVar3 = (wchar_t *)GGameIni.Data.AllocatorInstance;
    }
    ::FString::FString(&local_18,pwVar3);
    FConfigCacheIni::GetInt
              (GConfig,FShaderPipelineCacheConstants::SectionHeading,
               FShaderPipelineCacheConstants::GameVersionKey,(int *)local_res10,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FPipelineFileCacheManager::Initialize(local_res10[0]);
    this_00 = ::operator_new(0x268);
    if (this_00 != (FShaderPipelineCache *)0x0) {
      ShaderPipelineCache = FShaderPipelineCache(this_00,param_1);
      return;
    }
    ShaderPipelineCache = (FShaderPipelineCache *)0x0;
  }
  return;
}

// IsBatchingPaused @ 145ea5b70

bool __cdecl FShaderPipelineCache::IsBatchingPaused(void)

{
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    return ShaderPipelineCache->bPaused;
  }
  return true;
}

// IsPrecompiling @ 145ea5c00

bool __cdecl FShaderPipelineCache::IsPrecompiling(void)

{
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    return (bool)ShaderPipelineCache->bHasShaderPipelineTask;
  }
  return false;
}

// IsTickable @ 145ea5d90

bool __thiscall FShaderPipelineCache::IsTickable(FShaderPipelineCache *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  *pTVar4;
  
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                         ,0x6ef,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (this->bPaused != false) {
    return false;
  }
  if ((((this->bHasShaderPipelineTask == (atomic<bool>)0x0) &&
       (bVar2 = ReadyForAutoSave(this), !bVar2)) &&
      (bVar2 = GetShaderPipelineCacheSaveBoundPSOLog(), !bVar2)) &&
     ((bVar2 = GetPSOFileCacheSaveUserCache(), !bVar2 &&
      (pTVar4 = UE::ShaderPipeline::FShutdownContainer::Get(),
      (int)pTVar4->Ptr->TotalRemainingTasks < 1)))) {
    return false;
  }
  return true;
}

// NeedsRenderingResumedForRenderingThreadTick @ 145ea70f0

bool __thiscall
FShaderPipelineCache::NeedsRenderingResumedForRenderingThreadTick(FShaderPipelineCache *this)

{
  return true;
}

// NumPrecompilesRemaining @ 145ea7110

uint __cdecl FShaderPipelineCache::NumPrecompilesRemaining(void)

{
  TConsoleVariableData<float> *pTVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  atomic<bool> aVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  pTVar1 = CVarPSOFileCacheMaxPrecompileTime.Ref;
  iVar8 = 0;
  if (ShaderPipelineCache == (FShaderPipelineCache *)0x0) goto LAB_145ea71e3;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_145ea7155:
    lVar6 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar6 = 4;
    if (bVar3) goto LAB_145ea7155;
  }
  pTVar2 = CVarPSOFileCacheMaxPrecompileTime.Ref;
  if ((*(float *)((longlong)pTVar1->ShadowedValue + lVar6) <= 0.0) ||
     (FShaderPipelineCacheTask::TotalPrecompileTasks < 1)) {
    iVar4 = FShaderPipelineCacheTask::TotalWaitingTasks._0_4_;
    if ((longlong)FShaderPipelineCacheTask::TotalWaitingTasks < 0) {
      iVar4 = iVar8;
    }
    iVar8 = FShaderPipelineCacheTask::TotalActiveTasks._0_4_;
    if ((longlong)FShaderPipelineCacheTask::TotalActiveTasks < 0) {
      iVar8 = 0;
    }
    iVar8 = iVar8 + iVar4;
  }
  else {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), lVar6 = 4, bVar3)) {
      lVar6 = 0;
    }
    fVar10 = __real_3f800000 -
             FShaderPipelineCacheTask::TotalPrecompileWallTime /
             *(float *)((longlong)pTVar2->ShadowedValue + lVar6);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    iVar8 = (int)(longlong)(fVar10 * (float)FShaderPipelineCacheTask::TotalPrecompileTasks);
  }
LAB_145ea71e3:
  uVar5 = PipelineStateCache::NumActivePrecacheRequests();
  if (ShaderPipelineCache == (FShaderPipelineCache *)0x0) {
    aVar7 = (atomic<bool>)0x0;
  }
  else {
    aVar7 = ShaderPipelineCache->bHasShaderPipelineTask;
  }
  uVar9 = iVar8 + uVar5;
  if (iVar8 + uVar5 < (uint)(aVar7 != (atomic<bool>)0x0)) {
    uVar9 = (uint)(aVar7 != (atomic<bool>)0x0);
  }
  return uVar9;
}

// OpenPipelineFileCache @ 145ea7470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FShaderPipelineCache::OpenPipelineFileCache(EShaderPlatform param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  FString local_18;
  
  pTVar1 = CVarPSOFileCacheOnlyOpenUserCache.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_145ea749f;
    }
  }
  lVar3 = 0;
LAB_145ea749f:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    return false;
  }
  bVar2 = false;
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    lpCriticalSection = &ShaderPipelineCache->Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UE::ShaderPipeline::GetShaderPipelineBaseName(&local_18,false);
    bVar2 = OpenPipelineFileCacheInternal(ShaderPipelineCache,false,&local_18,&local_18,param_1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// OpenPipelineFileCacheInternal @ 145ea7560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FShaderPipelineCache::OpenPipelineFileCacheInternal
          (FShaderPipelineCache *this,bool param_1,FString *param_2,FString *param_3,
          EShaderPlatform param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FShaderPipelineCacheTask *this_00;
  FShaderPipelineCacheTask *this_01;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 local_res8 [8];
  FShaderPipelineCacheTask *local_res18 [2];
  FString *local_48;
  FShaderPipelineCacheTask **local_40;
  
  iVar4 = (param_2->Data).ArrayNum;
  pwVar8 = L"";
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  this_01 = (FShaderPipelineCacheTask *)0x0;
  iVar6 = 0;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = iVar6;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar4 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                      *)&this->ShaderCacheTasks,uVar3,param_2);
  if (iVar4 == -1) {
    this_00 = ::operator_new(0xf0);
    if (this_00 != (FShaderPipelineCacheTask *)0x0) {
      this_01 = FShaderPipelineCacheTask::FShaderPipelineCacheTask(this_00,this,param_1,param_4);
    }
    local_res18[0] = this_01;
    bVar2 = FShaderPipelineCacheTask::Open(this_01,param_2,param_3,param_4);
    if (bVar2) {
      iVar4 = (param_2->Data).ArrayNum;
      bVar1 = local_res18[0]->bReady;
      if (iVar4 != 0) {
        pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        iVar6 = iVar4 + -1;
      }
      uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
      iVar4 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                          *)&this->ShaderCacheTasks,uVar3,param_2);
      if ((iVar4 == -1) || ((longlong)iVar4 * 0x20 + *(longlong *)&this->ShaderCacheTasks == 0)) {
        local_40 = local_res18;
        local_48 = param_2;
        TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<FString_const_&,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_&&>_>
                  ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                    *)&this->ShaderCacheTasks,(uint)local_res8,
                   (TPairInitializer<FString_const_&,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_&&>
                    *)(ulonglong)uVar3,(bool *)&local_48);
      }
      if (bVar1 != false) {
        EnqueuePendingPrecompileTask(this,param_2);
      }
    }
    TDefaultDelete<FShaderPipelineCacheTask>::operator()
              ((TDefaultDelete<FShaderPipelineCacheTask> *)local_res18,local_res18[0]);
    return bVar2;
  }
  return false;
}

// OpenUserPipelineFileCache @ 145ea7700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FShaderPipelineCache::OpenUserPipelineFileCache(EShaderPlatform param_1)

{
  FShaderPipelineCache *pFVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  FWindowsRecursiveMutex *lpCriticalSection;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  if (ShaderPipelineCache == (FShaderPipelineCache *)0x0) {
    return false;
  }
  lpCriticalSection = &ShaderPipelineCache->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  UE::ShaderPipeline::GetShaderPipelineBaseName(&local_18,true);
  ::FString::ConcatFC(&local_28,&local_18,L"_usr");
  if (UserCacheTaskKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(UserCacheTaskKey.Data.AllocatorInstance.Data);
  }
  UserCacheTaskKey.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  UserCacheTaskKey.Data.ArrayNum = local_28.Data.ArrayNum;
  UserCacheTaskKey.Data.ArrayMax = local_28.Data.ArrayMax;
  bVar2 = GetShaderPipelineCacheSaveBoundPSOLog();
  if ((bVar2) || (bVar2 = GetPSOFileCacheSaveUserCache(), bVar2)) {
    pFVar1 = ShaderPipelineCache;
    pwVar8 = L"";
    if (UserCacheTaskKey.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)UserCacheTaskKey.Data.AllocatorInstance.Data;
    }
    iVar5 = UserCacheTaskKey.Data.ArrayNum + -1;
    if (UserCacheTaskKey.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
    iVar5 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                        *)&pFVar1->ShaderCacheTasks,uVar4,&UserCacheTaskKey);
    if (iVar5 != -1) {
      lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)&pFVar1->ShaderCacheTasks;
      plVar7 = (longlong *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        plVar7 = (longlong *)0x0;
      }
      if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) goto LAB_145ea7843;
    }
    bVar3 = OpenPipelineFileCacheInternal
                      (ShaderPipelineCache,true,&UserCacheTaskKey,&local_18,param_1);
  }
LAB_145ea7843:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// PauseBatching @ 145ea8d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FShaderPipelineCache::PauseBatching(void)

{
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    ShaderPipelineCache->PausedCount = ShaderPipelineCache->PausedCount + 1;
    if (3 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (0 < ShaderPipelineCache->PausedCount) {
      ShaderPipelineCache->bPaused = true;
    }
  }
  return;
}

// ReadyForAutoSave @ 145eac7a0

bool __thiscall FShaderPipelineCache::ReadyForAutoSave(FShaderPipelineCache *this)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  LARGE_INTEGER local_res8;
  
  pTVar4 = CVarPSOFileCacheSaveAfterPSOsLogged.Ref;
  bVar5 = IsInParallelGameThread();
  lVar8 = 4;
  if (bVar5) {
LAB_145eac7de:
    lVar7 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    if (bVar5) goto LAB_145eac7de;
    lVar7 = 4;
  }
  uVar2 = *(uint *)((longlong)pTVar4->ShadowedValue + lVar7);
  uVar6 = FPipelineFileCacheManager::NumPSOsLogged();
  QueryPerformanceCounter(&local_res8);
  pTVar4 = CVarPSOFileCacheAutoSaveTime.Ref;
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = this->LastAutoSaveTime;
  if (uVar2 == 0) {
LAB_145eac84e:
    bVar5 = false;
  }
  else {
    if (uVar6 < uVar2) {
      if (uVar6 == 0) goto LAB_145eac84e;
      bVar5 = IsInParallelGameThread();
      if (bVar5) {
LAB_145eac839:
        lVar8 = 0;
      }
      else {
        bVar5 = IsInGameThread();
        if (bVar5) goto LAB_145eac839;
      }
      if (dVar3 - dVar1 < (double)*(int *)((longlong)pTVar4->ShadowedValue + lVar8))
      goto LAB_145eac84e;
    }
    bVar5 = true;
  }
  return bVar5;
}

// ResumeBatching @ 145eb2ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FShaderPipelineCache::ResumeBatching(void)

{
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    ShaderPipelineCache->PausedCount = ShaderPipelineCache->PausedCount + -1;
    if (3 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (ShaderPipelineCache->PausedCount < 1) {
      if (3 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      ShaderPipelineCache->PausedCount = 0;
      ShaderPipelineCache->bPaused = false;
    }
  }
  return;
}

// SavePipelineFileCache @ 145eb2f90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FShaderPipelineCache::SavePipelineFileCache(SaveMode param_1)

{
  bool bVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  LARGE_INTEGER local_res10;
  
  if (ShaderPipelineCache == (FShaderPipelineCache *)0x0) {
    return false;
  }
  lpCriticalSection = &ShaderPipelineCache->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = FPipelineFileCacheManager::SavePipelineFileCache(param_1);
    if ((2 < (byte)LogRHI._0_1_) && (!bVar1)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    QueryPerformanceCounter(&local_res10);
    ShaderPipelineCache->LastAutoSaveTime =
         (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetBatchMode @ 145eb48e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FShaderPipelineCache::SetBatchMode(BatchMode param_1)

{
  uint uVar1;
  float fVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  TConsoleVariableData<float> *pTVar9;
  
  pTVar5 = CVarPSOFileCachePrecompileBatchSize.Ref;
  pTVar4 = CVarPSOFileCacheBatchSize.Ref;
  pTVar3 = CVarPSOFileCacheBackgroundBatchSize.Ref;
  fVar2 = BatchTime;
  uVar1 = BatchSize;
  if (ShaderPipelineCache == (FShaderPipelineCache *)0x0) {
    return;
  }
  if (param_1 == Background) {
LAB_145eb49bc:
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar8 = 0;
    }
    else {
      lVar8 = 4;
    }
    BatchSize = *(uint *)((longlong)pTVar3->ShadowedValue + lVar8);
    pTVar9 = CVarPSOFileCacheBackgroundBatchTime.Ref;
  }
  else {
    if (param_1 != Fast) {
      if (param_1 == Precompile) {
        bVar6 = IsInParallelGameThread();
        lVar8 = 4;
        if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
          lVar7 = 0;
        }
        else {
          lVar7 = 4;
        }
        pTVar9 = CVarPSOFileCachePrecompileBatchTime.Ref;
        BatchSize = *(uint *)((longlong)pTVar5->ShadowedValue + lVar7);
        bVar6 = IsInParallelGameThread();
        if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
          lVar8 = 0;
        }
        BatchTime = *(float *)((longlong)pTVar9->ShadowedValue + lVar8);
        goto LAB_145eb4a09;
      }
      goto LAB_145eb49bc;
    }
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      BatchSize = pTVar4->ShadowedValue[0];
      pTVar9 = CVarPSOFileCacheBatchTime.Ref;
    }
    else {
      BatchSize = pTVar4->ShadowedValue[1];
      pTVar9 = CVarPSOFileCacheBatchTime.Ref;
    }
  }
  lVar8 = 4;
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar8 = 0;
  }
  BatchTime = *(float *)((longlong)pTVar9->ShadowedValue + lVar8);
LAB_145eb4a09:
  if ((4 < (byte)LogRHI._0_1_) && ((uVar1 != BatchSize || (fVar2 != BatchTime)))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

// SetGameUsageMaskWithComparison @ 145eb4a80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FShaderPipelineCache::SetGameUsageMaskWithComparison
          (ulong64 param_1,_func___cdecl_bool_ulong64_ulong64 *param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  ulong64 uVar4;
  FWindowsRecursiveMutex *lpCriticalSection;
  
  pTVar1 = CVarPSOFileCacheGameFileMaskEnabled.Ref;
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
      lpCriticalSection = &ShaderPipelineCache->Mutex;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(ShaderPipelineCache->ShaderCacheTasks).field_0x8 ==
          *(int *)&(ShaderPipelineCache->ShaderCacheTasks).field_0x34) {
        uVar4 = FPipelineFileCacheManager::SetGameUsageMaskWithComparison(param_1,param_2);
        bVar2 = uVar4 != param_1;
        bMaskChanged = (bool)(bMaskChanged | bVar2);
        if (3 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else {
        uVar4 = FPipelineFileCacheManager::SetGameUsageMaskWithComparison(param_1,param_2);
        bVar2 = uVar4 != param_1;
        bMaskChanged = (bool)(bMaskChanged | bVar2);
        if (bMaskChanged == false) {
          if (3 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return bMaskChanged;
        }
        ApplyNewUsageMaskToAllTasks(ShaderPipelineCache,param_1);
        bMaskChanged = false;
        if (3 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return bVar2;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar2;
    }
  }
  if (3 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return bMaskChanged;
}

// ShaderLibraryStateChanged @ 145eb5e20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FShaderPipelineCache::ShaderLibraryStateChanged
          (ELibraryState param_1,EShaderPlatform param_2,FString *param_3,int param_4)

{
  FScriptContainerElement *_Src;
  FShaderPipelineCacheTask *this;
  code *pcVar1;
  FShaderPipelineCache *pFVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *pTVar8;
  ForAnyElementType FVar9;
  FWindowsRecursiveMutex *lpCriticalSection;
  wchar_t *pwVar10;
  int iVar11;
  FString local_38;
  
  if (ShaderPipelineCache == (FShaderPipelineCache *)0x0) {
    return;
  }
  iVar5 = (param_3->Data).ArrayNum;
  pwVar10 = L"";
  iVar11 = 0;
  if (param_4 == -1) {
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = iVar5;
    if (iVar5 == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)&local_38,iVar5,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar5 * 2);
    }
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s_Chunk%d");
  }
  lpCriticalSection = &ShaderPipelineCache->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = CVarPSOFileCacheOnlyOpenUserCache.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar7 = 4;
    if (!bVar4) goto LAB_145eb5f19;
  }
  lVar7 = 0;
LAB_145eb5f19:
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar7) == 0) {
    pTVar8 = TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
             ::Find((TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
                     *)&ShaderPipelineCache->ShaderCacheTasks,&local_38);
    if (pTVar8 == (TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *)
                  0x0) {
      bVar4 = OpenPipelineFileCacheInternal(ShaderPipelineCache,false,&local_38,&local_38,param_2);
      pFVar2 = ShaderPipelineCache;
      if (!bVar4) {
        iVar5 = (param_3->Data).ArrayNum;
        if (iVar5 != 0) {
          pwVar10 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
          iVar11 = iVar5 + -1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar10);
        iVar5 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                            *)&pFVar2->ShaderCacheTasks,uVar6,param_3);
        if (iVar5 == -1) {
          OpenPipelineFileCacheInternal(ShaderPipelineCache,false,param_3,param_3,param_2);
        }
      }
    }
    else {
      this = pTVar8->Ptr;
      if ((this->bIsUserCache != false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsUserCache",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                             ,0x877,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (param_1 == Opened) {
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar9.Data = local_38.Data.AllocatorInstance.Data;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,GInternalProjectName);
        if (((iVar5 == 0) && (param_2 == this->ShaderPlatform)) && (this->bOpened == false)) {
          FShaderPipelineCacheTask::Close(this);
        }
      }
      else if (((param_1 == OpenedComponent) && (param_4 == -1)) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ComponentID != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                                  ,0x87e,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_38.Data.ArrayNum < 2) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1964978397260019583>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                           ,0x881,"!Name.IsEmpty()");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        FShaderPipelineCacheTask::Open(this,&local_38,&local_38,param_2);
        if (3 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
    }
  }
  else {
    FPipelineFileCacheManager::LogNewPSOsToConsoleAndCSV = false;
  }
  OpenUserPipelineFileCache(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// Shutdown @ 145eb6420

void __cdecl FShaderPipelineCache::Shutdown(void)

{
  if (ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    (**(code **)ShaderPipelineCache->_padding_)(ShaderPipelineCache,1);
    ShaderPipelineCache = (FShaderPipelineCache *)0x0;
  }
  return;
}

// Tick @ 145eb7f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderPipelineCache::Tick(FShaderPipelineCache *this,float param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 8);
  bVar1 = IsInRenderingThread();
  if (!bVar1) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145eb7f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0x154be5ed0,param_1);
  return;
}

// Tick @ 145eb7fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderPipelineCache::Tick
          (FShaderPipelineCache *this,FRHICommandListImmediate *param_1,float param_2)

{
  float *pfVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  atomic<__int64> *paVar14;
  atomic<__int64> aVar15;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  *pTVar16;
  double dVar17;
  double dVar18;
  atomic<__int64> aVar19;
  uint uVar20;
  atomic<__int64> aVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_98;
  FMemScope local_90;
  FDestructionSentinel local_88 [3];
  
  dVar24 = 4.94065645841247e-324;
  dVar23 = 4.94065645841247e-324;
  FLLMScope::FLLMScope(local_res8,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_90,Shaders,true);
  if (&this->Mutex == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  aVar21 = (atomic<__int64>)0x0;
  cVar11 = '\0';
  aVar19 = aVar21;
  if ((this->CurrentPrecompilingPSOFCKey).Data.ArrayNum < 2) {
LAB_145eb804d:
    bVar10 = false;
    aVar15 = aVar19;
    if (aVar19 != (atomic<__int64>)0x0) goto LAB_145eb83a4;
  }
  else {
    paVar14 = (atomic<__int64> *)
              TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
              ::Find((TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
                      *)&this->ShaderCacheTasks,&this->CurrentPrecompilingPSOFCKey);
    aVar19 = *paVar14;
    if ((aVar19 == (atomic<__int64>)0x0) ||
       (iVar12 = PipelineStateCache::GetNumActivePipelinePrecompileTasks(), iVar12 != 0))
    goto LAB_145eb804d;
    aVar15 = FShaderPipelineCacheTask::TotalWaitingTasks;
    if ((longlong)FShaderPipelineCacheTask::TotalWaitingTasks < 0) {
      aVar15 = aVar21;
    }
    if (aVar15 != (atomic<__int64>)0x0) goto LAB_145eb804d;
    aVar15 = FShaderPipelineCacheTask::TotalActiveTasks;
    if ((longlong)FShaderPipelineCacheTask::TotalActiveTasks < 0) {
      aVar15 = aVar21;
    }
    if ((aVar15 != (atomic<__int64>)0x0) ||
       ((FShaderPipelineCacheTask::TotalPrecompileTasks != 0 &&
        (FShaderPipelineCacheTask::TotalCompleteTasks == (atomic<__int64>)0x0))))
    goto LAB_145eb804d;
    bVar10 = true;
  }
  pTVar6 = CVarPSOFileCacheMaxPrecompileTime.Ref;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_145eb807d:
    aVar15 = aVar21;
  }
  else {
    bVar9 = IsInGameThread();
    aVar15 = (atomic<__int64>)0x4;
    if (bVar9) goto LAB_145eb807d;
  }
  pTVar7 = CVarPSOFileCacheMaxPrecompileTime.Ref;
  if (0.0 < *(float *)((longlong)pTVar6->ShadowedValue + (longlong)aVar15)) {
    bVar9 = IsInParallelGameThread();
    if (bVar9) {
LAB_145eb80a5:
      aVar15 = aVar21;
    }
    else {
      bVar9 = IsInGameThread();
      aVar15 = (atomic<__int64>)0x4;
      if (bVar9) goto LAB_145eb80a5;
    }
    pfVar1 = (float *)((longlong)pTVar7->ShadowedValue + (longlong)aVar15);
    if ((*pfVar1 <= FShaderPipelineCacheTask::TotalPrecompileWallTime - __real_41a00000 &&
         FShaderPipelineCacheTask::TotalPrecompileWallTime - __real_41a00000 != *pfVar1) &&
       (0 < FShaderPipelineCacheTask::TotalPrecompileTasks)) {
      SetBatchMode(Background);
    }
  }
  aVar15 = aVar19;
  if (bVar10) {
    if (2 < (byte)LogRHI._0_1_) {
      dVar24 = (double)FShaderPipelineCacheTask::TotalPrecompileWallTime;
      dVar23 = (double)(ulonglong)FShaderPipelineCacheTask::TotalPrecompileTime *
               FGenericPlatformTime::SecondsPerCycle64;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    bVar10 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                        &OnPrecompilationComplete);
    if (bVar10) {
      dVar4 = (double)(ulonglong)FShaderPipelineCacheTask::TotalPrecompileTime *
              FGenericPlatformTime::SecondsPerCycle64;
      local_res20.s = (_struct_19)FShaderPipelineCacheTask::TotalCompleteTasks;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnPrecompilationComplete
                 ,(FWriteAccessScope *)local_88);
      LVar8 = local_res20;
      OnPrecompilationComplete._28_4_ = OnPrecompilationComplete._28_4_ + 1;
      uVar20 = OnPrecompilationComplete._16_4_ - 1;
      if (-1 < (int)uVar20) {
        dVar18 = (double)(longlong)(int)uVar20;
        lVar22 = (longlong)dVar18 << 4;
        do {
          dVar17 = (double)(longlong)(int)OnPrecompilationComplete._16_4_;
          uVar13 = 0;
          if ((int)uVar20 < (int)OnPrecompilationComplete._16_4_) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (dVar23 = dVar18,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             dVar24 = dVar17, bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar22 + 8 + OnPrecompilationComplete._8_8_) == 0) ||
              (plVar2 = *(longlong **)(lVar22 + OnPrecompilationComplete._8_8_),
              plVar2 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar2 + 0x68))
                                 (plVar2,LVar8.QuadPart & 0xffffffff,SUB84(dVar4,0),
                                  (longlong)aVar19 + 200,dVar23,dVar24), cVar11 == '\0')) {
            aVar21 = (atomic<__int64>)0x1;
          }
          cVar11 = aVar21._0_1_;
          dVar18 = (double)((longlong)dVar18 + -1);
          lVar22 = lVar22 + -0x10;
          uVar20 = uVar20 - 1;
        } while (-1 < (int)uVar20);
      }
      OnPrecompilationComplete._28_4_ = OnPrecompilationComplete._28_4_ + -1;
      if (cVar11 != '\0') {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnPrecompilationComplete,
                   false);
      }
      if (local_88[0].bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88[0].Accessor,local_88);
      }
    }
    aVar15 = (atomic<__int64>)0x0;
    FPipelineFileCacheManager::PreCompileComplete();
    PipelineStateCache::PreCompileComplete();
    FShaderPipelineCacheTask::TotalPrecompileTasks = 0;
    FShaderPipelineCacheTask::PrecompileStartTime = 0.0;
    LOCK();
    FShaderPipelineCacheTask::TotalCompleteTasks = (atomic<__int64>)0x0;
    UNLOCK();
    LOCK();
    FShaderPipelineCacheTask::TotalPrecompileTime = (atomic<__int64>)0x0;
    UNLOCK();
    *(undefined1 *)((longlong)aVar19 + 0xe0) = 0;
    ::FString::Empty(&this->CurrentPrecompilingPSOFCKey);
    BeginNextPrecompileCacheTask(this);
  }
LAB_145eb83a4:
  bVar10 = ReadyForAutoSave(this);
  if ((bVar10) && (bVar10 = GetPSOFileCacheSaveUserCache(), bVar10)) {
    SavePipelineFileCache(Incremental);
  }
  bVar10 = GetShaderPipelineCacheSaveBoundPSOLog();
  if ((bVar10) &&
     (uVar20 = FPipelineFileCacheManager::NumPSOsLogged(), this->LastAutoSaveNum < (int)uVar20)) {
    QueryPerformanceCounter(&local_res20);
    pTVar5 = CVarPSOFileCacheAutoSaveTimeBoundPSO.Ref;
    dVar4 = __real_4170000000000000;
    dVar24 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    dVar23 = this->LastAutoSaveTimeLogBoundPSO;
    bVar10 = IsInParallelGameThread();
    if ((bVar10) || (bVar10 = IsInGameThread(), lVar22 = 4, bVar10)) {
      lVar22 = 0;
    }
    if ((double)*(int *)((longlong)pTVar5->ShadowedValue + lVar22) <= dVar24 - dVar23) {
      SavePipelineFileCache(BoundPSOsOnly);
      QueryPerformanceCounter(&local_98);
      this->LastAutoSaveTimeLogBoundPSO =
           (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
      uVar20 = FPipelineFileCacheManager::NumPSOsLogged();
      this->LastAutoSaveNum = uVar20;
    }
  }
  pTVar16 = UE::ShaderPipeline::FShutdownContainer::Get();
  UE::ShaderPipeline::FShutdownContainer::Tick(pTVar16->Ptr);
  if (aVar15 != (atomic<__int64>)0x0) {
    FShaderPipelineCacheTask::Tick((FShaderPipelineCacheTask *)aVar15,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

