// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// operator() @ 1485141b0

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

void __thiscall
`FShaderCompilerStats::RegisterFinishedJob'::__l2::<lambda_1>::operator()
          (void *this,FShaderCompileJob *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  ForAnyElementType FVar10;
  double dVar11;
  float fVar12;
  FString local_68;
  FString *local_58;
  float *local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  
  iVar4 = FShaderCode::GetShaderCodeSize(&(param_1->Output).ShaderCode);
  if ((*(char *)((longlong)this + 8) == '\0') && (0 < iVar4)) {
    iVar1 = *(int *)(*(longlong *)this + 0xe0);
    iVar7 = iVar4;
    if ((0 < iVar1) && (iVar1 < iVar4)) {
      iVar7 = iVar1;
    }
    *(int *)(*(longlong *)this + 0xe0) = iVar7;
    iVar1 = *(int *)(*(longlong *)this + 0xe4);
    iVar7 = iVar4;
    if ((0 < iVar1) && (iVar4 < iVar1)) {
      iVar7 = iVar1;
    }
    *(int *)(*(longlong *)this + 0xe4) = iVar7;
    *(longlong *)(*(longlong *)this + 0xe8) =
         *(longlong *)(*(longlong *)this + 0xe8) + (longlong)iVar4;
    *(longlong *)(*(longlong *)this + 0xf0) = *(longlong *)(*(longlong *)this + 0xf0) + 1;
  }
  if ((*(char *)((longlong)this + 8) != '\0') && ((param_1->Output).CompileTime != 0.0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bCompilationSkipped || SingleJob.Output.CompileTime == 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                       ,0x3c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((param_1->PreprocessOutput).bSucceeded != false) && ((param_1->Output).PreprocessTime <= 0.0)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SingleJob.PreprocessOutput.GetSucceeded() || SingleJob.Output.PreprocessTime > 0.0f"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                       ,0x3c4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FString::FString(&local_68,((param_1->Key).ShaderType)->Name);
  lVar8 = *(longlong *)this;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar10.Data = local_68.Data.AllocatorInstance.Data;
  }
  iVar4 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar10.Data);
  iVar4 = TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
                      *)(lVar8 + 0x180),uVar5,&local_68);
  if (iVar4 != -1) {
    lVar8 = (longlong)iVar4 * 0x30 + *(longlong *)(lVar8 + 0x180);
    pfVar9 = (float *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      pfVar9 = (float *)0x0;
    }
    if (pfVar9 != (float *)0x0) {
      pfVar9[3] = (float)((double)pfVar9[3] + (param_1->Output).PreprocessTime);
      if (*(char *)((longlong)this + 8) == '\0') {
        dVar11 = (param_1->Output).CompileTime;
        if (pfVar9[4] != 0.0) {
          fVar12 = (float)dVar11;
          if (*pfVar9 <= (float)dVar11) {
            fVar12 = *pfVar9;
          }
          dVar11 = (double)fVar12;
        }
        fVar6 = (float)((int)pfVar9[4] + 1);
        *pfVar9 = (float)dVar11;
        fVar12 = (float)(param_1->Output).CompileTime;
        if (fVar12 <= pfVar9[1]) {
          fVar12 = pfVar9[1];
        }
        pfVar9[1] = fVar12;
        dVar11 = (param_1->Output).CompileTime;
        pfVar9[4] = fVar6;
        fVar12 = (float)((double)pfVar9[2] + dVar11);
        pfVar9[2] = fVar12;
        pfVar9[5] = fVar12 / (float)(int)fVar6;
      }
      goto LAB_148514420;
    }
  }
  local_58 = &local_68;
  local_48 = (float)(param_1->Output).CompileTime;
  local_50 = &local_48;
  local_38 = (uint)(*(char *)((longlong)this + 8) == '\0');
  local_3c = (float)(param_1->Output).PreprocessTime;
  local_44 = local_48;
  local_40 = local_48;
  local_34 = local_48;
  TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FShaderTimings_const_&>_>
            ((TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x180),
             (TPairInitializer<FString_const_&,FShaderTimings_const_&> *)&stack0x00000008,
             (bool *)&local_58);
LAB_148514420:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// AddDDCHit @ 148515a40

void __thiscall FShaderCompilerStats::AddDDCHit(FShaderCompilerStats *this,uint param_1)

{
  uint *puVar1;
  
  puVar1 = &(this->Counters).ShaderMapDDCHits;
  *puVar1 = *puVar1 + param_1;
  return;
}

// AddDDCMiss @ 148515a50

void __thiscall FShaderCompilerStats::AddDDCMiss(FShaderCompilerStats *this,uint param_1)

{
  uint *puVar1;
  
  puVar1 = &(this->Counters).ShaderMapDDCMisses;
  *puVar1 = *puVar1 + param_1;
  return;
}

// Aggregate @ 148517320

void __thiscall
FShaderCompilerStats::Aggregate(FShaderCompilerStats *this,FShaderCompilerStats *param_1)

{
  long64 *plVar1;
  int *piVar2;
  ulong64 *puVar3;
  TArray<FShaderCompilerStats::FWorkerDiagnosticsInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *pTVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  undefined1 *puVar10;
  code *pcVar11;
  FShaderTimings *pFVar12;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  FSparseArrayAllocationInfo *pFVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  int *piVar19;
  float *pfVar20;
  uint uVar21;
  int iVar22;
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FString *pFVar23;
  TInterval<double> *pTVar24;
  uint uVar25;
  FShaderTimings *pFVar26;
  uint uVar27;
  undefined1 *puVar28;
  FString *pFVar29;
  TInterval<double> *pTVar30;
  float fVar31;
  int *piVar32;
  uint *puVar33;
  TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
  *this_01;
  TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
  *this_02;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1a8 [8];
  ulonglong local_1a0;
  FShaderTimings *local_198;
  int iStack_190;
  uint uStack_18c;
  int *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  TPairInitializer<FString_const_&,FShaderTimings_const_&> local_130;
  FShaderTimings *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FString *local_c0;
  FString *local_b8;
  undefined8 local_b0;
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_a8;
  FSparseArrayAllocationInfo local_a0 [2];
  undefined4 local_74;
  undefined4 local_54;
  
  if (param_1 == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  (this->Counters).AccumulatedLocalWorkerIdleTime =
       (param_1->Counters).AccumulatedLocalWorkerIdleTime +
       (this->Counters).AccumulatedLocalWorkerIdleTime;
  (this->Counters).TimesLocalWorkersWereIdle =
       (param_1->Counters).TimesLocalWorkersWereIdle + (this->Counters).TimesLocalWorkersWereIdle;
  plVar1 = &(this->Counters).JobsAssigned;
  *plVar1 = *plVar1 + (param_1->Counters).JobsAssigned;
  plVar1 = &(this->Counters).JobsCompleted;
  *plVar1 = *plVar1 + (param_1->Counters).JobsCompleted;
  (this->Counters).AccumulatedPendingTime =
       (param_1->Counters).AccumulatedPendingTime + (this->Counters).AccumulatedPendingTime;
  dVar7 = (param_1->Counters).MaxPendingTime;
  uVar34 = SUB84(dVar7,0);
  uVar35 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = (this->Counters).MaxPendingTime;
  if (dVar7 <= dVar8) {
    uVar34 = SUB84(dVar8,0);
    uVar35 = (undefined4)((ulonglong)dVar8 >> 0x20);
  }
  (this->Counters).MaxPendingTime = (double)CONCAT44(uVar35,uVar34);
  (this->Counters).AccumulatedJobExecutionTime =
       (param_1->Counters).AccumulatedJobExecutionTime +
       (this->Counters).AccumulatedJobExecutionTime;
  dVar7 = (param_1->Counters).MaxJobExecutionTime;
  uVar34 = SUB84(dVar7,0);
  uVar35 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = (this->Counters).MaxJobExecutionTime;
  if (dVar7 <= dVar8) {
    uVar34 = SUB84(dVar8,0);
    uVar35 = (undefined4)((ulonglong)dVar8 >> 0x20);
  }
  (this->Counters).MaxJobExecutionTime = (double)CONCAT44(uVar35,uVar34);
  (this->Counters).AccumulatedJobLifeTime =
       (param_1->Counters).AccumulatedJobLifeTime + (this->Counters).AccumulatedJobLifeTime;
  dVar7 = (param_1->Counters).MaxJobLifeTime;
  uVar34 = SUB84(dVar7,0);
  uVar35 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = (this->Counters).MaxJobLifeTime;
  if (dVar7 <= dVar8) {
    uVar34 = SUB84(dVar8,0);
    uVar35 = (undefined4)((ulonglong)dVar8 >> 0x20);
  }
  (this->Counters).MaxJobLifeTime = (double)CONCAT44(uVar35,uVar34);
  (this->Counters).AccumulatedTaskSubmitJobs =
       (param_1->Counters).AccumulatedTaskSubmitJobs + (this->Counters).AccumulatedTaskSubmitJobs;
  (this->Counters).AccumulatedTaskSubmitJobsStall =
       (param_1->Counters).AccumulatedTaskSubmitJobsStall +
       (this->Counters).AccumulatedTaskSubmitJobsStall;
  plVar1 = &(this->Counters).LocalJobBatchesSeen;
  *plVar1 = *plVar1 + (param_1->Counters).LocalJobBatchesSeen;
  plVar1 = &(this->Counters).TotalJobsReportedInLocalJobBatches;
  *plVar1 = *plVar1 + (param_1->Counters).TotalJobsReportedInLocalJobBatches;
  plVar1 = &(this->Counters).DistributedJobBatchesSeen;
  *plVar1 = *plVar1 + (param_1->Counters).DistributedJobBatchesSeen;
  plVar1 = &(this->Counters).TotalJobsReportedInDistributedJobBatches;
  *plVar1 = *plVar1 + (param_1->Counters).TotalJobsReportedInDistributedJobBatches;
  iVar22 = (param_1->Counters).MinShaderCodeSize;
  if (0 < iVar22) {
    iVar15 = (this->Counters).MinShaderCodeSize;
    if ((0 < iVar15) && (iVar15 < iVar22)) {
      iVar22 = iVar15;
    }
    (this->Counters).MinShaderCodeSize = iVar22;
  }
  iVar22 = (param_1->Counters).MaxShaderCodeSize;
  iVar15 = (this->Counters).MaxShaderCodeSize;
  if (iVar15 < iVar22) {
    iVar15 = iVar22;
  }
  (this->Counters).MaxShaderCodeSize = iVar15;
  puVar3 = &(this->Counters).AccumulatedShaderCodeSize;
  *puVar3 = *puVar3 + (param_1->Counters).AccumulatedShaderCodeSize;
  puVar3 = &(this->Counters).NumAccumulatedShaderCodes;
  *puVar3 = *puVar3 + (param_1->Counters).NumAccumulatedShaderCodes;
  puVar33 = &(this->Counters).ShaderMapDDCMisses;
  *puVar33 = *puVar33 + (param_1->Counters).ShaderMapDDCMisses;
  puVar33 = &(this->Counters).ShaderMapDDCHits;
  *puVar33 = *puVar33 + (param_1->Counters).ShaderMapDDCHits;
  puVar3 = &(this->Counters).TotalCacheSearchAttempts;
  *puVar3 = *puVar3 + (param_1->Counters).TotalCacheSearchAttempts;
  puVar3 = &(this->Counters).TotalCacheHits;
  *puVar3 = *puVar3 + (param_1->Counters).TotalCacheHits;
  puVar33 = &(this->Counters).TotalCacheDuplicates;
  *puVar33 = *puVar33 + (param_1->Counters).TotalCacheDuplicates;
  puVar33 = &(this->Counters).TotalCacheDDCQueries;
  *puVar33 = *puVar33 + (param_1->Counters).TotalCacheDDCQueries;
  puVar33 = &(this->Counters).TotalCacheDDCHits;
  *puVar33 = *puVar33 + (param_1->Counters).TotalCacheDDCHits;
  puVar3 = &(this->Counters).UniqueCacheInputHashes;
  *puVar3 = *puVar3 + (param_1->Counters).UniqueCacheInputHashes;
  puVar3 = &(this->Counters).UniqueCacheOutputs;
  *puVar3 = *puVar3 + (param_1->Counters).UniqueCacheOutputs;
  puVar3 = &(this->Counters).CacheMemUsed;
  *puVar3 = *puVar3 + (param_1->Counters).CacheMemUsed;
  puVar3 = &(this->Counters).CacheMemBudget;
  *puVar3 = *puVar3 + (param_1->Counters).CacheMemBudget;
  puVar33 = &(this->Counters).MaxRemoteAgents;
  *puVar33 = *puVar33 + (param_1->Counters).MaxRemoteAgents;
  puVar33 = &(this->Counters).MaxActiveAgentCores;
  *puVar33 = *puVar33 + (param_1->Counters).MaxActiveAgentCores;
  TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
  ::TConstIterator::TConstIterator((TConstIterator *)&local_168,&param_1->CompileStats);
  local_1a0 = CONCAT44(local_1a0._4_4_,1);
  if (local_160.CurrentBitIndex < (local_160.Array)->NumBits) {
LAB_148517619:
    iVar22 = local_160.CurrentBitIndex;
    this_01 = &this->CompileStats;
    if ((-1 < local_160.CurrentBitIndex) &&
       (local_160.CurrentBitIndex < *(int *)&(this->CompileStats).field_0x28)) {
      if ((*(int *)&(this->CompileStats).field_0x28 <= local_160.CurrentBitIndex) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar10 = *(undefined1 **)&(this->CompileStats).field_0x20;
      puVar28 = &(this->CompileStats).field_0x10;
      if (puVar10 != (undefined1 *)0x0) {
        puVar28 = puVar10;
      }
      uVar21 = iVar22;
      if (iVar22 < 0) {
        uVar21 = iVar22 + 0x1f;
      }
      if ((*(uint *)(puVar28 + (longlong)((int)uVar21 >> 5) * 4) >> (iVar22 & 0x1fU) & 1) != 0)
      goto LAB_14851777a;
    }
    if ((iVar22 < 0) || (*(int *)&(this->CompileStats).field_0x28 <= iVar22)) {
LAB_148517718:
      pFVar16 = TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                          ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this_01,local_a0,
                           iVar22);
      local_b0 = *(undefined8 *)pFVar16;
      pTStack_a8 = pFVar16->Pointer;
      this_00 = pFVar16->Pointer;
    }
    else {
      if ((*(int *)&(this->CompileStats).field_0x28 <= iVar22) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar10 = *(undefined1 **)&(this->CompileStats).field_0x20;
      puVar28 = &(this->CompileStats).field_0x10;
      if (puVar10 != (undefined1 *)0x0) {
        puVar28 = puVar10;
      }
      uVar21 = iVar22;
      if (iVar22 < 0) {
        uVar21 = iVar22 + 0x1f;
      }
      if ((*(uint *)(puVar28 + (longlong)((int)uVar21 >> 5) * 4) >> (iVar22 & 0x1fU) & 1) == 0)
      goto LAB_148517718;
      this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)((longlong)iVar22 * 0x50 + *(longlong *)&this_01->field_0x0);
      *(undefined4 *)&this_00[1].field_0x10 = 0;
      if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      pTStack_a8 = this_00;
    }
    if (this_00 !=
        (TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)0x0) {
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)&this_00->field_0x8 = 0;
      *(undefined8 *)&this_00->field_0x10 = 0;
      *(undefined8 *)&this_00->field_0x18 = 0;
      *(undefined8 *)&this_00->field_0x20 = 0;
      *(undefined8 *)&this_00->field_0x28 = 0;
      *(undefined8 *)&this_00->field_0x30 = 0;
      *(undefined8 *)(this_00 + 1) = 0;
      *(undefined8 *)&this_00[1].field_0x8 = 0;
      *(undefined8 *)&this_00[1].field_0x10 = 0;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)&this_00->field_0x8 = 0;
      *(undefined8 *)&this_00->field_0x20 = 0;
      *(undefined4 *)&this_00->field_0x28 = 0;
      *(undefined4 *)&this_00->field_0x2c = 0x80;
      *(undefined4 *)&this_00->field_0x30 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x34 = 0;
      *(undefined8 *)&this_00[1].field_0x8 = 0;
      *(undefined4 *)&this_00[1].field_0x10 = 0;
    }
LAB_14851777a:
    this_02 = (TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
               *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar22 * 0x50);
    pFVar26 = (FShaderTimings *)(*local_168 + (longlong)iVar22 * 0x50);
    iStack_190 = 0;
    iVar22 = pFVar26[1].NumCompiled;
    piVar2 = &pFVar26->NumCompiled;
    local_178 = 0;
    uStack_18c = (uint)local_1a0;
    iStack_17c = 0;
    if (iVar22 != 0) {
      piVar32 = piVar2;
      if (*(int **)&pFVar26[1].TotalCompileTime != (int *)0x0) {
        piVar32 = *(int **)&pFVar26[1].TotalCompileTime;
      }
      uVar21 = *piVar32;
      local_178 = 0;
      while (uVar21 == 0) {
        lVar17 = (longlong)iStack_190;
        local_178 = local_178 + 0x20;
        iStack_190 = iStack_190 + 1;
        iStack_17c = iVar22;
        if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
        goto LAB_14851781d;
        uVar21 = piVar32[lVar17 + 1];
      }
      uStack_18c = -uVar21 & uVar21;
      uVar5 = (ulonglong)uStack_18c * 2 + 1;
      lVar17 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_140 = (int)lVar17;
      iStack_17c = local_178 + -1 + local_140;
      if (iVar22 < iStack_17c) {
        iStack_17c = iVar22;
      }
    }
LAB_14851781d:
    uVar21 = pFVar26[1].NumCompiled;
    uStack_174 = local_74;
    iStack_170 = (int)pFVar26->TotalCompileTime - (int)pFVar26[2].MaxCompileTime;
    uVar25 = uVar21 & 0xffffffe0;
    TStack_118._padding_ = CONCAT44(uStack_18c,iStack_190);
    uStack_180 = 0xffffffff;
    TStack_118.CurrentBitIndex = iStack_17c;
    TStack_118.UnvisitedBitMask = 0xffffffff;
    iVar22 = (int)uVar21 >> 5;
    TStack_118._28_4_ = local_74;
    TStack_118.BaseBitIndex = local_178;
    uStack_f8 = CONCAT44(uStack_16c,iStack_170);
    local_198 = pFVar26;
    local_188 = piVar2;
    local_130.Value = pFVar26;
    local_120 = pFVar26;
    TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)piVar2;
    if (((int)uVar21 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar12 = local_130.Value;
    uVar27 = pFVar26[1].NumCompiled;
    if (uVar21 != uVar27) {
      piVar32 = piVar2;
      if (*(int **)&pFVar26[1].TotalCompileTime != (int *)0x0) {
        piVar32 = *(int **)&pFVar26[1].TotalCompileTime;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & piVar32[iVar22];
      while (uVar21 == 0) {
        lVar17 = (longlong)iVar22;
        uVar25 = uVar25 + 0x20;
        iVar22 = iVar22 + 1;
        uVar21 = uVar27;
        if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_148517930;
        uVar21 = piVar32[lVar17 + 1];
      }
      uVar5 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_13c = (int)lVar17;
      uVar21 = (uVar25 - 1) + local_13c;
      if ((int)uVar27 < (int)uVar21) {
        uVar21 = uVar27;
      }
    }
LAB_148517930:
    do {
      pFVar26 = local_120;
      if ((int)local_120->TotalCompileTime - (int)local_120[2].MaxCompileTime != (int)uStack_f8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_118.CurrentBitIndex == uVar21) &&
          (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)piVar2)) &&
         (pFVar26 == pFVar12)) goto LAB_148517acf;
      pFVar29 = (FString *)((longlong)TStack_118.CurrentBitIndex * 0x40 + *(longlong *)pFVar26);
      iVar15 = (pFVar29->Data).ArrayNum;
      iVar22 = iVar15 + -1;
      if (iVar15 == 0) {
        pwVar18 = L"";
        iVar22 = 0;
      }
      else {
        pwVar18 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
      }
      uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar22,pwVar18);
      iVar22 = TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>(this_02,uVar25,pFVar29);
      if (iVar22 == -1) {
LAB_148517aab:
        TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
        ::Emplace<FString_const_&,FShaderStats_const_&>
                  ((TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
                    *)this_02,pFVar29,(FShaderStats *)(pFVar29 + 1));
      }
      else {
        lVar17 = (longlong)iVar22 * 0x40 + *(longlong *)&this_02->Elements;
        pFVar23 = (FString *)(lVar17 + 0x10);
        if (lVar17 == 0) {
          pFVar23 = (FString *)0x0;
        }
        if (pFVar23 == (FString *)0x0) goto LAB_148517aab;
        iVar22 = *(int *)&pFVar29[2].Data.AllocatorInstance.Data;
        if (*(int *)&pFVar23[1].Data.AllocatorInstance.Data == 0) {
          *(int *)&pFVar23[1].Data.AllocatorInstance.Data = iVar22;
          piVar32 = (int *)(lVar17 + 0x28);
          if (lVar17 == 0) {
            piVar32 = (int *)&DAT_00000018;
          }
        }
        else {
          piVar32 = &pFVar23[1].Data.ArrayNum;
          *piVar32 = *piVar32 + iVar22;
          piVar32 = &pFVar23[1].Data.ArrayNum;
        }
        iVar22 = *(int *)((longlong)&pFVar29[2].Data.AllocatorInstance.Data + 4);
        if (*(int *)((longlong)&pFVar23[1].Data.AllocatorInstance.Data + 4) == 0) {
          *(int *)((longlong)&pFVar23[1].Data.AllocatorInstance.Data + 4) = iVar22;
          piVar19 = (int *)(lVar17 + 0x2c);
          if (lVar17 == 0) {
            piVar19 = (int *)&DAT_0000001c;
          }
        }
        else {
          piVar19 = &pFVar23[1].Data.ArrayMax;
          *piVar19 = *piVar19 + iVar22;
          piVar19 = &pFVar23[1].Data.ArrayMax;
        }
        *piVar32 = *piVar32 + pFVar29[2].Data.ArrayNum;
        *piVar19 = *piVar19 + pFVar29[2].Data.ArrayMax;
        *(float *)&pFVar23[2].Data.AllocatorInstance.Data =
             *(float *)&pFVar29[3].Data.AllocatorInstance.Data +
             *(float *)&pFVar23[2].Data.AllocatorInstance.Data;
        if ((pFVar23 == pFVar29 + 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar22 = pFVar29[1].Data.ArrayNum;
        if (iVar22 != 0) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x20,8,iVar22,(ForAnyElementType *)pFVar23,&(pFVar23->Data).ArrayNum,
                              &(pFVar23->Data).ArrayMax);
          memcpy((pFVar23->Data).AllocatorInstance.Data + (longlong)iVar15 * 0x20,
                 pFVar29[1].Data.AllocatorInstance.Data,(longlong)iVar22 << 5);
        }
      }
      TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
    } while( true );
  }
LAB_148517b0d:
  iVar22 = (param_1->JobLifeTimeIntervals).ArrayNum;
  pTVar24 = (TInterval<double> *)(param_1->JobLifeTimeIntervals).AllocatorInstance.Data;
  pTVar30 = pTVar24 + iVar22;
  while( true ) {
    if ((param_1->JobLifeTimeIntervals).ArrayNum != iVar22) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TInterval<double>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pTVar24 == pTVar30) break;
    AddToInterval(&this->JobLifeTimeIntervals,pTVar24);
    pTVar24 = pTVar24 + 1;
  }
  puVar10 = &(param_1->ShaderTimings).field_0x10;
  iVar22 = *(int *)&(param_1->ShaderTimings).field_0x28;
  pTVar6 = &param_1->ShaderTimings;
  iStack_190 = 0;
  local_178 = 0;
  iStack_17c = 0;
  if (iVar22 != 0) {
    puVar33 = *(uint **)&(param_1->ShaderTimings).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar10;
    }
    uVar21 = *puVar33;
    local_178 = 0;
    while (uVar21 == 0) {
      lVar17 = (longlong)iStack_190;
      local_178 = local_178 + 0x20;
      iStack_190 = iStack_190 + 1;
      iStack_17c = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190) goto LAB_148517bf0;
      uVar21 = puVar33[lVar17 + 1];
    }
    local_1a0 = (ulonglong)(-uVar21 & uVar21);
    uVar5 = local_1a0 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_138 = (int)lVar17;
    iStack_17c = local_178 + -1 + local_138;
    if (iVar22 < iStack_17c) {
      iStack_17c = iVar22;
    }
  }
LAB_148517bf0:
  uVar21 = *(uint *)&(param_1->ShaderTimings).field_0x28;
  uStack_18c = (uint)local_1a0;
  uVar27 = uVar21 & 0xffffffe0;
  uStack_174 = local_54;
  iStack_170 = *(int *)&(param_1->ShaderTimings).field_0x8 -
               *(int *)&(param_1->ShaderTimings).field_0x34;
  uStack_180 = 0xffffffff;
  uVar25 = -1 << ((byte)uVar21 & 0x1f);
  TStack_e8._padding_ = CONCAT44(uStack_18c,iStack_190);
  TStack_e8.CurrentBitIndex = iStack_17c;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar21 >> 5;
  local_1a0 = CONCAT44(local_1a0._4_4_,uVar25);
  TStack_e8._28_4_ = local_54;
  TStack_e8.BaseBitIndex = local_178;
  uStack_c8 = CONCAT44(uStack_16c,iStack_170);
  local_198 = (FShaderTimings *)pTVar6;
  local_188 = (int *)puVar10;
  local_f0 = pTVar6;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar10;
  if ((int)uVar21 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar14) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar25 = (uint)local_1a0;
  }
  uVar9 = *(uint *)&(param_1->ShaderTimings).field_0x28;
  if (uVar21 != uVar9) {
    puVar28 = *(undefined1 **)&(param_1->ShaderTimings).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar10;
    }
    uVar25 = uVar25 & *(uint *)(puVar28 + (longlong)iVar22 * 4);
    while (uVar25 == 0) {
      lVar17 = (longlong)iVar22;
      uVar27 = uVar27 + 0x20;
      iVar22 = iVar22 + 1;
      uVar21 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_148517d0f;
      uVar25 = *(uint *)(puVar28 + lVar17 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_134 = (int)lVar17;
    uVar21 = (uVar27 - 1) + local_134;
    if ((int)uVar9 < (int)uVar21) {
      uVar21 = uVar9;
    }
  }
LAB_148517d0f:
  do {
    pTVar13 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_1a8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (((TStack_e8.CurrentBitIndex == uVar21) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar10)) && (pTVar13 == pTVar6)
       ) {
      (this->MaterialCounters).NumMaterialsCooked =
           (this->MaterialCounters).NumMaterialsCooked +
           (param_1->MaterialCounters).NumMaterialsCooked;
      piVar2 = &(this->MaterialCounters).MaterialTranslateCalls;
      *piVar2 = *piVar2 + (param_1->MaterialCounters).MaterialTranslateCalls;
      (this->MaterialCounters).MaterialTranslateTotalTimeSec =
           (param_1->MaterialCounters).MaterialTranslateTotalTimeSec +
           (this->MaterialCounters).MaterialTranslateTotalTimeSec;
      (this->MaterialCounters).MaterialTranslateTranslationOnlyTimeSec =
           (param_1->MaterialCounters).MaterialTranslateTranslationOnlyTimeSec +
           (this->MaterialCounters).MaterialTranslateTranslationOnlyTimeSec;
      (this->MaterialCounters).MaterialTranslateSerializationOnlyTimeSec =
           (param_1->MaterialCounters).MaterialTranslateSerializationOnlyTimeSec +
           (this->MaterialCounters).MaterialTranslateSerializationOnlyTimeSec;
      piVar2 = &(this->MaterialCounters).MaterialCacheHits;
      *piVar2 = *piVar2 + (param_1->MaterialCounters).MaterialCacheHits;
      if (GShaderCompilerDumpWorkerDiagnostics != false) {
        pTVar4 = &this->WorkerDiagnostics;
        if ((pTVar4 == &param_1->WorkerDiagnostics) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar22 = (param_1->WorkerDiagnostics).ArrayNum;
        if (iVar22 != 0) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40,8,iVar22,&pTVar4->AllocatorInstance,
                              &(this->WorkerDiagnostics).ArrayNum,
                              &(this->WorkerDiagnostics).ArrayMax);
          ConstructItems<FShaderCompilerStats::FWorkerDiagnosticsInfo,FShaderCompilerStats::FWorkerDiagnosticsInfo,int>
                    ((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 0x40,
                     (FWorkerDiagnosticsInfo *)(param_1->WorkerDiagnostics).AllocatorInstance.Data,
                     iVar22);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000148517f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
      return;
    }
    pFVar29 = (FString *)(*(longlong *)pTVar13 + (longlong)TStack_e8.CurrentBitIndex * 0x30);
    iVar15 = (pFVar29->Data).ArrayNum;
    iVar22 = iVar15 + -1;
    if (iVar15 == 0) {
      pwVar18 = L"";
      iVar22 = 0;
    }
    else {
      pwVar18 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
    }
    uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar22,pwVar18);
    iVar22 = TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
                         *)&this->ShaderTimings,uVar25,pFVar29);
    if (iVar22 == -1) {
LAB_148517e1a:
      local_b8 = pFVar29 + 1;
      local_c0 = pFVar29;
      TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FShaderTimings_const_&>_>
                ((TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
                  *)&this->ShaderTimings,&local_130,(bool *)&local_c0);
    }
    else {
      lVar17 = (longlong)iVar22 * 0x30 + *(longlong *)&this->ShaderTimings;
      pfVar20 = (float *)(lVar17 + 0x10);
      if (lVar17 == 0) {
        pfVar20 = (float *)0x0;
      }
      if (pfVar20 == (float *)0x0) goto LAB_148517e1a;
      fVar31 = *(float *)&pFVar29[1].Data.AllocatorInstance.Data;
      if (*pfVar20 <= fVar31) {
        fVar31 = *pfVar20;
      }
      *pfVar20 = fVar31;
      fVar31 = *(float *)((longlong)&pFVar29[1].Data.AllocatorInstance.Data + 4);
      if (fVar31 <= pfVar20[1]) {
        fVar31 = pfVar20[1];
      }
      pfVar20[1] = fVar31;
      fVar36 = (float)pFVar29[1].Data.ArrayNum + pfVar20[2];
      pfVar20[2] = fVar36;
      pfVar20[3] = (float)pFVar29[1].Data.ArrayMax + pfVar20[3];
      fVar31 = (float)(*(int *)&pFVar29[2].Data.AllocatorInstance.Data + (int)pfVar20[4]);
      pfVar20[4] = fVar31;
      if (fVar31 != 0.0) {
        pfVar20[5] = fVar36 / (float)(int)fVar31;
      }
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  } while( true );
LAB_148517acf:
  local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
  if ((local_160.Array)->NumBits <= local_160.CurrentBitIndex) goto LAB_148517b0d;
  goto LAB_148517619;
}

// GatherAnalytics @ 148527440

void __thiscall
FShaderCompilerStats::GatherAnalytics
          (FShaderCompilerStats *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  longlong lVar12;
  FAnalyticsEventAttribute *pFVar13;
  uint *puVar14;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [12];
  uint uStack_bc;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  undefined4 uStack_7c;
  
  dVar4 = GetTimeShaderCompilationWasActive(this);
  if (this == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  ::FString::ConcatFC(&local_e8,param_1,L"ShadersCompiled");
  iVar9 = param_2->ArrayNum;
  if (iVar9 == param_2->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar9 + 1;
  local_d8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  pFVar13 = (FAnalyticsEventAttribute *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30)
  ;
  local_d8.Data.ArrayNum = local_e8.Data.ArrayNum;
  local_d8.Data.ArrayMax = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,&local_d8);
  (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&pFVar13->AttrValueString,L"%lld");
  pFVar13->AttrValueNumber = 0.0;
  pFVar13->AttrValueBool = false;
  pFVar13->AttrType = JsonFragment;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (*(int *)&(this->ShaderTimings).field_0x8 != *(int *)&(this->ShaderTimings).field_0x34) {
    local_b8 = &(this->ShaderTimings).field_0x10;
    iStack_98 = 0;
    iVar9 = *(int *)&(this->ShaderTimings).field_0x28;
    dVar7 = 0.0;
    dVar5 = 0.0;
    dVar8 = 0.0;
    dVar6 = 0.0;
    uStack_94 = 1;
    iVar10 = 0;
    local_80 = iStack_98;
    if (iVar9 != 0) {
      puVar14 = *(uint **)&(this->ShaderTimings).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_b8;
      }
      uVar2 = *puVar14;
      local_80 = 0;
      iStack_98 = 0;
      while (uVar2 == 0) {
        lVar12 = (longlong)iStack_98;
        local_80 = local_80 + 0x20;
        iStack_98 = iStack_98 + 1;
        iVar10 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14852762c;
        uVar2 = puVar14[lVar12 + 1];
      }
      uStack_94 = -uVar2 & uVar2;
      uVar1 = (ulonglong)uStack_94 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = (int)lVar12 + -1 + local_80;
      if (iVar9 < iVar10) {
        iVar10 = iVar9;
      }
    }
LAB_14852762c:
    local_c8._0_8_ = &this->ShaderTimings;
    uStack_88 = 0xffffffff;
    uStack_7c = uStack_b0._4_4_;
    uStack_bc = uStack_94;
    local_c8._8_4_ = iStack_98;
    local_a8 = CONCAT44(uStack_b0._4_4_,local_80);
    uStack_b0 = CONCAT44(iVar10,0xffffffff);
    local_a0 = (TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
                *)local_c8._0_8_;
    local_90 = local_b8;
    iStack_84 = iVar10;
    if (iVar10 < iVar9) {
      do {
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
        dVar5 = dVar7 + (double)*(float *)(*(longlong *)local_c8._0_8_ + 0x18 +
                                          (longlong)iVar10 * 0x30);
        dVar6 = dVar8 + (double)*(float *)(*(longlong *)local_c8._0_8_ + 0x1c +
                                          (longlong)iVar10 * 0x30);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_c8 + 8));
        bVar3 = uStack_b0._4_4_ < *(int *)(local_b8 + 0x18);
        iVar10 = uStack_b0._4_4_;
        dVar7 = dVar5;
        dVar8 = dVar6;
      } while (bVar3);
    }
    ::FString::ConcatFC(&local_e8,param_1,L"TotalThreadTime");
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_d8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_d8.Data.ArrayNum = local_e8.Data.ArrayNum;
    local_d8.Data.ArrayMax = local_e8.Data.ArrayMax;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,&local_d8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    AnalyticsConversionToString(&pFVar13->AttrValueString,dVar5);
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_e8,param_1,L"TotalThreadPreprocessTime");
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_d8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_d8.Data.ArrayNum = local_e8.Data.ArrayNum;
    local_d8.Data.ArrayMax = local_e8.Data.ArrayMax;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,&local_d8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    AnalyticsConversionToString(&pFVar13->AttrValueString,dVar6);
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (dVar4 <= 0.0) {
      dVar5 = 0.0;
    }
    else {
      dVar5 = dVar5 / dVar4;
    }
    ::FString::ConcatFC(&local_e8,param_1,L"EffectiveParallelization");
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_d8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_d8.Data.ArrayNum = local_e8.Data.ArrayNum;
    local_d8.Data.ArrayMax = local_e8.Data.ArrayMax;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,&local_d8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    AnalyticsConversionToString(&pFVar13->AttrValueString,dVar5);
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->Counters).TotalCacheSearchAttempts != 0) {
    ::FString::FString(&local_e8,L"JobCache_");
    ::FString::ConcatFF((FString *)local_c8,param_1,&local_e8);
    ::FString::ConcatFC(&local_d8,(FString *)local_c8,L"Queries");
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_c8._0_8_ = local_d8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_c8._8_4_ = local_d8.Data.ArrayNum;
    uStack_bc = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,(FString *)local_c8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&pFVar13->AttrValueString,L"%llu");
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF((FString *)local_c8,param_1,&local_e8);
    ::FString::ConcatFC(&local_d8,(FString *)local_c8,L"Hits");
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_c8._0_8_ = local_d8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_c8._8_4_ = local_d8.Data.ArrayNum;
    uStack_bc = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,(FString *)local_c8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&pFVar13->AttrValueString,L"%llu");
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF((FString *)local_c8,param_1,&local_e8);
    ::FString::ConcatFC(&local_d8,(FString *)local_c8,L"DDCHits");
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_c8._0_8_ = local_d8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_c8._8_4_ = local_d8.Data.ArrayNum;
    uStack_bc = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,(FString *)local_c8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&pFVar13->AttrValueString,L"%u");
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF((FString *)local_c8,param_1,&local_e8);
    ::FString::ConcatFC(&local_d8,(FString *)local_c8,L"NumInputs");
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_c8._0_8_ = local_d8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_c8._8_4_ = local_d8.Data.ArrayNum;
    uStack_bc = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,(FString *)local_c8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&pFVar13->AttrValueString,L"%llu");
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF((FString *)local_c8,param_1,&local_e8);
    ::FString::ConcatFC(&local_d8,(FString *)local_c8,L"NumOutputs");
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_c8._0_8_ = local_d8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_c8._8_4_ = local_d8.Data.ArrayNum;
    uStack_bc = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,(FString *)local_c8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&pFVar13->AttrValueString,L"%llu");
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF((FString *)local_c8,param_1,&local_e8);
    ::FString::ConcatFC(&local_d8,(FString *)local_c8,L"MemUsed");
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_c8._0_8_ = local_d8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_c8._8_4_ = local_d8.Data.ArrayNum;
    uStack_bc = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,(FString *)local_c8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&pFVar13->AttrValueString,L"%llu");
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF((FString *)local_c8,param_1,&local_e8);
    ::FString::ConcatFC(&local_d8,(FString *)local_c8,L"MemBudget");
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    local_c8._0_8_ = local_d8.Data.AllocatorInstance.Data;
    pFVar13 = (FAnalyticsEventAttribute *)
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_c8._8_4_ = local_d8.Data.ArrayNum;
    uStack_bc = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar13,(FString *)local_c8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&pFVar13->AttrValueString,L"%llu");
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = JsonFragment;
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  FShaderCompilerMaterialCounters::GatherAnalytics(&this->MaterialCounters,param_2);
                    /* WARNING: Could not recover jumptable at 0x000148528030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// GetDDCHits @ 148529660

uint __thiscall FShaderCompilerStats::GetDDCHits(FShaderCompilerStats *this)

{
  return (this->Counters).ShaderMapDDCHits;
}

// GetDDCMisses @ 148529670

uint __thiscall FShaderCompilerStats::GetDDCMisses(FShaderCompilerStats *this)

{
  return (this->Counters).ShaderMapDDCMisses;
}

// GetTimeShaderCompilationWasActive @ 14852ef50

double __thiscall
FShaderCompilerStats::GetTimeShaderCompilationWasActive(FShaderCompilerStats *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  if (this == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar9 = 0;
  dVar4 = 0.0;
  dVar5 = 0.0;
  if (0 < (this->JobLifeTimeIntervals).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->JobLifeTimeIntervals).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
      pFVar2 = (this->JobLifeTimeIntervals).AllocatorInstance.Data;
      uVar9 = uVar9 + 1;
      lVar6 = lVar10 + 8;
      pFVar1 = pFVar2 + lVar10;
      lVar10 = lVar10 + 0x10;
      dVar4 = dVar4 + (*(double *)(pFVar2 + lVar6) - *(double *)pFVar1);
      dVar5 = dVar4;
    } while ((int)uVar9 < (this->JobLifeTimeIntervals).ArrayNum);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return dVar5;
}

// GetTotalShadersCompiled @ 14852f030

uint __thiscall FShaderCompilerStats::GetTotalShadersCompiled(FShaderCompilerStats *this)

{
  longlong lVar1;
  uint uVar2;
  
  if (this != (FShaderCompilerStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    lVar1 = (this->Counters).JobsCompleted;
    uVar2 = (uint)lVar1;
    if (lVar1 < 0) {
      uVar2 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IncrementMaterialCacheHit @ 14852f720

void __thiscall FShaderCompilerStats::IncrementMaterialCacheHit(FShaderCompilerStats *this)

{
  int *piVar1;
  
  if (this != (FShaderCompilerStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    piVar1 = &(this->MaterialCounters).MaterialCacheHits;
    *piVar1 = *piVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x00014852f742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IncrementMaterialCook @ 14852f760

void __thiscall FShaderCompilerStats::IncrementMaterialCook(FShaderCompilerStats *this)

{
  if (this != (FShaderCompilerStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    (this->MaterialCounters).NumMaterialsCooked = (this->MaterialCounters).NumMaterialsCooked + 1;
                    /* WARNING: Could not recover jumptable at 0x00014852f782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IncrementMaterialTranslated @ 14852f7a0

void __thiscall
FShaderCompilerStats::IncrementMaterialTranslated
          (FShaderCompilerStats *this,double param_1,double param_2,double param_3)

{
  int *piVar1;
  
  if (this != (FShaderCompilerStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    piVar1 = &(this->MaterialCounters).MaterialTranslateCalls;
    *piVar1 = *piVar1 + 1;
    (this->MaterialCounters).MaterialTranslateTotalTimeSec =
         param_1 + (this->MaterialCounters).MaterialTranslateTotalTimeSec;
    (this->MaterialCounters).MaterialTranslateTranslationOnlyTimeSec =
         param_2 + (this->MaterialCounters).MaterialTranslateTranslationOnlyTimeSec;
    (this->MaterialCounters).MaterialTranslateSerializationOnlyTimeSec =
         param_3 + (this->MaterialCounters).MaterialTranslateSerializationOnlyTimeSec;
                    /* WARNING: Could not recover jumptable at 0x00014852f81e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReadFromCompactBinary @ 14853c8b0

void __thiscall
FShaderCompilerStats::ReadFromCompactBinary(FShaderCompilerStats *this,FCbObjectView *param_1)

{
  uint *puVar1;
  int *piVar2;
  TArray<TInterval<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined8 uVar9;
  void *pvVar10;
  bool bVar11;
  int iVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  TStringView<char8_t> *pTVar15;
  FString *pFVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *pTVar20;
  undefined1 *puVar21;
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *this_00;
  TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
  *this_01;
  longlong lVar22;
  float fVar23;
  TKeyInitializer<FString_&&> local_res18 [2];
  FString local_738;
  FString local_728;
  FCbObjectView local_718;
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *local_708;
  FCbObjectView local_700;
  TCbFieldIterator<FCbFieldView> local_6f0;
  FString *local_6d8 [2];
  TStringView<char8_t> local_6c8;
  TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
  *local_6b8;
  FCbFieldView local_6b0;
  undefined8 local_698;
  undefined8 uStack_690;
  FCbFieldView local_688;
  undefined8 local_678;
  undefined8 uStack_670;
  TCbFieldIterator<FCbFieldView> local_668;
  TCbFieldIterator<FCbFieldView> local_650;
  TCbFieldIterator<FCbFieldView> local_638;
  TCbFieldIterator<FCbFieldView> local_620;
  TMemoryView<void_const_> local_608;
  char *local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  char *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  FCbFieldView local_5d8;
  FCbFieldView local_5c8;
  char *local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  char *local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  FCbObjectView local_598;
  FCbFieldView local_588;
  char *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  char *local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  char *local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  char *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  char *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  char *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  FCbFieldView local_518;
  char *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  char *local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  char *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  char *local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  char *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  char *local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  FCbFieldView local_4a8;
  TMemoryView<void_const_> local_498;
  TMemoryView<void_const_> local_488;
  char *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  char *local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  FCbFieldView local_458;
  TMemoryView<void_const_> local_448;
  TMemoryView<void_const_> local_438;
  FString *local_428;
  void *local_420;
  char *local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  TMemoryView<void_const_> local_408;
  TMemoryView<void_const_> local_3f8;
  char *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  TMemoryView<void_const_> local_3d8;
  TCbFieldIterator<FCbFieldView> local_3c8;
  TCbFieldIterator<FCbFieldView> local_3b0;
  TCbFieldIterator<FCbFieldView> local_398;
  FSparseArrayAllocationInfo local_380;
  TStringView<char8_t> local_368;
  FCbFieldView local_358;
  TStringView<char8_t> local_348;
  FCbFieldView local_338;
  TStringView<char8_t> local_328;
  FString local_318;
  TStringView<char8_t> local_308;
  FCbFieldView local_2f8;
  TStringView<char8_t> local_2e8;
  FCbFieldView local_2d8;
  TStringView<char8_t> local_2c8;
  FCbFieldView local_2b8;
  TStringView<char8_t> local_2a8;
  FCbFieldView local_298;
  TStringView<char8_t> local_288;
  FCbFieldView local_278;
  TStringView<char8_t> local_268;
  FCbFieldView local_258;
  FCbFieldView local_248;
  TStringView<char8_t> local_238;
  FCbFieldView local_228;
  TStringView<char8_t> local_218;
  TStringView<char8_t> local_208;
  TStringView<char8_t> local_1f8;
  FCbFieldView local_1e8;
  FCbFieldView local_1d8;
  TStringView<char8_t> local_1c8;
  FCbFieldView local_1b8;
  TStringView<char8_t> local_1a8;
  FCbFieldView local_198;
  FCbFieldView local_188;
  TStringView<char8_t> local_178;
  FCbFieldView local_168;
  TStringView<char8_t> local_158;
  FCbFieldView local_148;
  FCbFieldView local_138;
  FString local_128;
  FCbFieldView local_118;
  TStringView<char8_t> local_108;
  FCbFieldView local_f8;
  TStringView<char8_t> local_e8;
  FCbFieldView local_d8;
  TStringView<char8_t> local_c8;
  FCbFieldView local_b8;
  TStringView<char8_t> local_a8;
  TStringView<char8_t> local_98;
  uchar *local_88;
  undefined8 uStack_80;
  TStringView<char8_t> local_78;
  uchar *local_68;
  undefined8 uStack_60;
  
  if (this == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uStack_410 = 8;
  local_418 = "Counters";
  local_208._12_4_ = uStack_40c;
  local_208.Size = 8;
  local_208.DataPtr = "Counters";
  FCbObjectView::FindView(param_1,&local_118,&local_208);
  local_408.Data = (void *)0x0;
  local_408.Size = 0;
  FCbFieldView::AsBinaryView(&local_118,&local_3f8,&local_408);
  if ((local_3f8.Size != 0xe8) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CountersMem.GetSize() == sizeof(FShaderCompilerCounters)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                          ,0x318,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uStack_3e0 = 0x10;
  dVar8 = *(double *)((longlong)local_3f8.Data + 8);
  (this->Counters).AccumulatedLocalWorkerIdleTime = *(double *)local_3f8.Data;
  (this->Counters).TimesLocalWorkersWereIdle = dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x18);
  (this->Counters).JobsAssigned = (long64)*(double *)((longlong)local_3f8.Data + 0x10);
  (this->Counters).JobsCompleted = (long64)dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x28);
  (this->Counters).AccumulatedPendingTime = *(double *)((longlong)local_3f8.Data + 0x20);
  (this->Counters).MaxPendingTime = dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x38);
  (this->Counters).AccumulatedJobExecutionTime = *(double *)((longlong)local_3f8.Data + 0x30);
  (this->Counters).MaxJobExecutionTime = dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x48);
  (this->Counters).AccumulatedJobLifeTime = *(double *)((longlong)local_3f8.Data + 0x40);
  (this->Counters).MaxJobLifeTime = dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x58);
  (this->Counters).AccumulatedTaskSubmitJobs = *(double *)((longlong)local_3f8.Data + 0x50);
  (this->Counters).AccumulatedTaskSubmitJobsStall = dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x68);
  (this->Counters).LocalJobBatchesSeen = (long64)*(double *)((longlong)local_3f8.Data + 0x60);
  (this->Counters).TotalJobsReportedInLocalJobBatches = (long64)dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x78);
  (this->Counters).DistributedJobBatchesSeen = (long64)*(double *)((longlong)local_3f8.Data + 0x70);
  (this->Counters).TotalJobsReportedInDistributedJobBatches = (long64)dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x88);
  *(double *)&(this->Counters).MinShaderCodeSize = *(double *)((longlong)local_3f8.Data + 0x80);
  (this->Counters).AccumulatedShaderCodeSize = (ulong64)dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0x98);
  (this->Counters).NumAccumulatedShaderCodes = (ulong64)*(double *)((longlong)local_3f8.Data + 0x90)
  ;
  *(double *)&(this->Counters).ShaderMapDDCMisses = dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0xa8);
  (this->Counters).TotalCacheSearchAttempts = (ulong64)*(double *)((longlong)local_3f8.Data + 0xa0);
  (this->Counters).TotalCacheHits = (ulong64)dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0xb8);
  *(double *)&(this->Counters).TotalCacheDuplicates = *(double *)((longlong)local_3f8.Data + 0xb0);
  *(double *)&(this->Counters).TotalCacheDDCHits = dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 200);
  (this->Counters).UniqueCacheInputHashes = (ulong64)*(double *)((longlong)local_3f8.Data + 0xc0);
  (this->Counters).UniqueCacheOutputs = (ulong64)dVar8;
  dVar8 = *(double *)((longlong)local_3f8.Data + 0xd8);
  (this->Counters).CacheMemUsed = (ulong64)*(double *)((longlong)local_3f8.Data + 0xd0);
  (this->Counters).CacheMemBudget = (ulong64)dVar8;
  *(double *)&(this->Counters).MaxRemoteAgents = *(double *)((longlong)local_3f8.Data + 0xe0);
  local_3e8 = "MaterialCounters";
  local_108._12_4_ = uStack_3dc;
  local_108.Size = 0x10;
  local_108.DataPtr = "MaterialCounters";
  FCbObjectView::FindView(param_1,&local_f8,&local_108);
  local_3d8.Data = (void *)0x0;
  local_3d8.Size = 0;
  FCbFieldView::AsBinaryView(&local_f8,&local_608,&local_3d8);
  if ((local_608.Size != 0x28) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaterialCountersMem.GetSize() == sizeof(FShaderCompilerMaterialCounters)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                          ,0x31c,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uStack_5f0 = 0x12;
  uVar9 = *(undefined8 *)local_608.Data;
  dVar8 = *(double *)((longlong)local_608.Data + 8);
  (this->MaterialCounters).NumMaterialsCooked = (int)uVar9;
  (this->MaterialCounters).MaterialTranslateCalls = (int)((ulonglong)uVar9 >> 0x20);
  (this->MaterialCounters).MaterialTranslateTotalTimeSec = dVar8;
  dVar8 = *(double *)((longlong)local_608.Data + 0x18);
  (this->MaterialCounters).MaterialTranslateTranslationOnlyTimeSec =
       *(double *)((longlong)local_608.Data + 0x10);
  (this->MaterialCounters).MaterialTranslateSerializationOnlyTimeSec = dVar8;
  local_5f8 = "CompileStatIndices";
  *(undefined8 *)&(this->MaterialCounters).MaterialCacheHits =
       *(undefined8 *)((longlong)local_608.Data + 0x20);
  local_e8._12_4_ = uStack_5ec;
  local_e8.Size = 0x12;
  local_e8.DataPtr = "CompileStatIndices";
  FCbObjectView::FindView(param_1,&local_d8,&local_e8);
  FCbFieldView::AsArrayView(&local_d8,(FCbArrayView *)&local_5d8);
  uStack_5e0 = 0xc;
  local_5e8 = "CompileStats";
  local_c8._12_4_ = uStack_5dc;
  local_c8.Size = 0xc;
  local_c8.DataPtr = "CompileStats";
  FCbObjectView::FindView(param_1,&local_b8,&local_c8);
  FCbFieldView::AsArrayView(&local_b8,(FCbArrayView *)&local_5c8);
  uVar13 = FCbArrayView::Num((FCbArrayView *)&local_5c8);
  uVar14 = FCbArrayView::Num((FCbArrayView *)&local_5d8);
  if ((uVar14 != uVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompileStatIndicesView.Num() == CompileStatsView.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                          ,0x321,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FCbFieldView::CreateViewIterator(&local_5d8,(FCbFieldViewIterator *)&local_6f0);
  FCbFieldView::CreateViewIterator(&local_5c8,(FCbFieldViewIterator *)&local_398);
  if (((byte)local_6f0._padding_ & 0x1f) != 0) {
    pTVar20 = (TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->CompileStats;
    do {
      if (((byte)local_398._padding_ & 0x1f) == 0) break;
      uVar13 = FCbFieldView::AsInteger((FCbFieldView *)&local_6f0,0,(FIntegerParams)0x40);
      uVar18 = (uint)uVar13;
      this_00 = (TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->CompileStats;
      if (((int)uVar18 < 0) ||
         (this_00 = pTVar20, *(int *)&(this->CompileStats).field_0x28 <= (int)uVar18)) {
LAB_14853ccb7:
        uVar13 = FCbFieldView::AsInteger((FCbFieldView *)&local_6f0,0,(FIntegerParams)0x40);
        TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                  (this_00,&local_380,(int)uVar13);
        if (local_380.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_380.Pointer = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x28) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x38) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x40) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x48) = 0;
          *(undefined8 *)local_380.Pointer = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x20) = 0;
          *(undefined4 *)((longlong)local_380.Pointer + 0x28) = 0;
          *(undefined4 *)((longlong)local_380.Pointer + 0x2c) = 0x80;
          *(undefined4 *)((longlong)local_380.Pointer + 0x30) = 0xffffffff;
          *(undefined4 *)((longlong)local_380.Pointer + 0x34) = 0;
          *(undefined8 *)((longlong)local_380.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_380.Pointer + 0x48) = 0;
        }
      }
      else {
        if ((*(int *)&(this->CompileStats).field_0x28 <= (int)uVar18) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar4 = *(undefined1 **)&(this->CompileStats).field_0x20;
        puVar21 = &(this->CompileStats).field_0x10;
        if (puVar4 != (undefined1 *)0x0) {
          puVar21 = puVar4;
        }
        uVar17 = uVar18 & 0x1f;
        if ((int)uVar18 < 0) {
          uVar18 = uVar18 + 0x1f;
        }
        if ((*(uint *)(puVar21 + (longlong)((int)uVar18 >> 5) * 4) >> uVar17 & 1) == 0) {
          this_00 = (TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->CompileStats;
          goto LAB_14853ccb7;
        }
      }
      uVar13 = FCbFieldView::AsInteger((FCbFieldView *)&local_6f0,0,(FIntegerParams)0x40);
      pTVar20 = (TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->CompileStats;
      this_01 = (TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
                 *)((longlong)(int)uVar13 * 0x50 +
                   *(longlong *)
                    &((TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
                       *)pTVar20)->field_0x0);
      local_708 = pTVar20;
      local_6b8 = this_01;
      FCbFieldView::AsObjectView((FCbFieldView *)&local_398,&local_598);
      uStack_5b0 = 0x10;
      local_5b8 = "CompileStatsKeys";
      local_368._12_4_ = uStack_5ac;
      local_368.Size = 0x10;
      local_368.DataPtr = "CompileStatsKeys";
      FCbObjectView::FindView(&local_598,&local_358,&local_368);
      FCbFieldView::AsArrayView(&local_358,(FCbArrayView *)&local_6b0);
      uStack_5a0 = 0x12;
      local_5a8 = "CompileStatsValues";
      local_348._12_4_ = uStack_59c;
      local_348.Size = 0x12;
      local_348.DataPtr = "CompileStatsValues";
      FCbObjectView::FindView(&local_598,&local_338,&local_348);
      FCbFieldView::AsArrayView(&local_338,(FCbArrayView *)&local_588);
      uVar13 = FCbArrayView::Num((FCbArrayView *)&local_588);
      uVar14 = FCbArrayView::Num((FCbArrayView *)&local_6b0);
      if ((uVar14 != uVar13) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StatsKeysView.Num() == StatsValuesView.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                              ,0x332,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = FCbArrayView::Num((FCbArrayView *)&local_6b0);
      TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
      ::Reserve(this_01,(int)uVar13);
      FCbFieldView::CreateViewIterator(&local_6b0,(FCbFieldViewIterator *)&local_650);
      FCbFieldView::CreateViewIterator(&local_588,(FCbFieldViewIterator *)&local_3b0);
      while ((((byte)local_650._padding_ & 0x1f) != 0 &&
             (pTVar20 = local_708, ((byte)local_3b0._padding_ & 0x1f) != 0))) {
        FCbFieldView::AsObjectView((FCbFieldView *)&local_3b0,&local_718);
        uStack_690 = 0;
        local_698 = 0;
        local_328.DataPtr = (uchar *)0x0;
        local_328.Size = 0;
        local_328._12_4_ = 0;
        pTVar15 = FCbFieldView::AsString((FCbFieldView *)&local_650,&local_98,&local_328);
        local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_738.Data.ArrayNum = 0;
        local_738.Data.ArrayMax = 0;
        local_88 = pTVar15->DataPtr;
        uStack_80 = *(undefined8 *)&pTVar15->Size;
        pFVar16 = ::FString::ConstructFromPtrSize
                            (&local_318,pTVar15->DataPtr,(int)*(undefined8 *)&pTVar15->Size);
        if (&local_738 != pFVar16) {
          if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_738.Data.AllocatorInstance.Data);
          }
          local_738.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_738.Data.ArrayNum = (pFVar16->Data).ArrayNum;
          local_738.Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
        }
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        local_6d8[0] = &local_738;
        TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FString_&&>_>(this_01,local_res18,(bool *)local_6d8);
        lVar19 = (longlong)(int)local_res18[0].Key * 0x40 + *(longlong *)&this_01->Elements;
        if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_738.Data.AllocatorInstance.Data);
        }
        uStack_570 = 8;
        local_578 = "Compiled";
        local_308._12_4_ = uStack_56c;
        local_308.Size = 8;
        local_308.DataPtr = "Compiled";
        FCbObjectView::FindView(&local_718,&local_2f8,&local_308);
        uVar13 = FCbFieldView::AsInteger(&local_2f8,0,(FIntegerParams)0x40);
        local_568 = "CompiledDouble";
        uStack_560 = 0xe;
        local_2e8._12_4_ = uStack_55c;
        local_2e8.Size = 0xe;
        local_2e8.DataPtr = "CompiledDouble";
        *(int *)(lVar19 + 0x20) = (int)uVar13;
        FCbObjectView::FindView(&local_718,&local_2d8,&local_2e8);
        uVar13 = FCbFieldView::AsInteger(&local_2d8,0,(FIntegerParams)0x40);
        *(int *)(lVar19 + 0x28) = (int)uVar13;
        uStack_550 = 0xb;
        local_558 = "CompileTime";
        local_2c8._12_4_ = uStack_54c;
        local_2c8.Size = 0xb;
        local_2c8.DataPtr = "CompileTime";
        FCbObjectView::FindView(&local_718,&local_2b8,&local_2c8);
        fVar23 = FCbFieldView::AsFloat(&local_2b8,0.0);
        *(float *)(lVar19 + 0x30) = fVar23;
        local_548 = "Cooked";
        uStack_540 = 6;
        local_2a8._12_4_ = uStack_53c;
        local_2a8.Size = 6;
        local_2a8.DataPtr = "Cooked";
        FCbObjectView::FindView(&local_718,&local_298,&local_2a8);
        uVar13 = FCbFieldView::AsInteger(&local_298,0,(FIntegerParams)0x40);
        local_538 = "CookedDouble";
        uStack_530 = 0xc;
        local_288._12_4_ = uStack_52c;
        local_288.Size = 0xc;
        local_288.DataPtr = "CookedDouble";
        *(int *)(lVar19 + 0x24) = (int)uVar13;
        FCbObjectView::FindView(&local_718,&local_278,&local_288);
        uVar13 = FCbFieldView::AsInteger(&local_278,0,(FIntegerParams)0x40);
        *(int *)(lVar19 + 0x2c) = (int)uVar13;
        uStack_520 = 0x17;
        local_528 = "PermutationCompilations";
        local_268._12_4_ = uStack_51c;
        local_268.Size = 0x17;
        local_268.DataPtr = "PermutationCompilations";
        FCbObjectView::FindView(&local_718,&local_258,&local_268);
        FCbFieldView::AsArrayView(&local_258,(FCbArrayView *)&local_518);
        uVar13 = FCbArrayView::Num((FCbArrayView *)&local_518);
        iVar12 = (int)uVar13;
        if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar13 & 0xffffffff);
        }
        puVar1 = (uint *)(lVar19 + 0x1c);
        *(undefined4 *)(lVar19 + 0x18) = 0;
        if (*(int *)(lVar19 + 0x1c) < iVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar12,(ForAnyElementType *)(lVar19 + 0x10),0,(int *)puVar1);
        }
        FCbFieldView::CreateViewIterator(&local_518,(FCbFieldViewIterator *)&local_668);
        while (((byte)local_668._padding_ & 0x1f) != 0) {
          FCbFieldView::AsObjectView(&local_248,&local_700);
          local_508 = "Cooked";
          uStack_500 = 6;
          local_238._12_4_ = uStack_4fc;
          local_238.Size = 6;
          local_238.DataPtr = "Cooked";
          FCbObjectView::FindView(&local_700,&local_228,&local_238);
          uVar13 = FCbFieldView::AsInteger(&local_228,0,(FIntegerParams)0x40);
          local_4f8 = "Compiled";
          uStack_4f0 = 8;
          local_218._12_4_ = uStack_4ec;
          local_218.Size = 8;
          local_218.DataPtr = "Compiled";
          FCbObjectView::FindView(&local_700,&local_138,&local_218);
          uVar14 = FCbFieldView::AsInteger(&local_138,0,(FIntegerParams)0x40);
          uStack_4e0 = 0xf;
          local_4e8 = "PermutationHash";
          local_1f8._12_4_ = uStack_4dc;
          local_1f8.Size = 0xf;
          local_1f8.DataPtr = "PermutationHash";
          FCbObjectView::FindView(&local_700,&local_1e8,&local_1f8);
          local_6c8.DataPtr = (uchar *)FCbFieldView::AsInteger(&local_1e8,0,(FIntegerParams)0x80);
          uVar18 = *(uint *)(lVar19 + 0x18);
          if (uVar18 == *puVar1) {
            uVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)(lVar19 + 0x10),(int *)puVar1);
          }
          *(uint *)(lVar19 + 0x18) = uVar18 + 1;
          lVar5 = *(longlong *)(lVar19 + 0x10);
          uStack_4d0 = 0xe;
          lVar22 = (longlong)(int)uVar18 * 0x20;
          *(uchar **)(lVar5 + lVar22) = local_6c8.DataPtr;
          *(undefined4 *)(lVar5 + 8 + lVar22) = 0;
          *(undefined8 *)(lVar5 + 0x14 + lVar22) = 0;
          local_4d8 = "CompiledDouble";
          local_6c8._12_4_ = uStack_4cc;
          local_6c8.Size = 0xe;
          *(int *)(lVar5 + 0xc + lVar22) = (int)uVar14;
          *(int *)(lVar5 + 0x10 + lVar22) = (int)uVar13;
          local_6c8.DataPtr = "CompiledDouble";
          FCbObjectView::FindView(&local_700,&local_1d8,&local_6c8);
          uVar13 = FCbFieldView::AsInteger(&local_1d8,0,(FIntegerParams)0x40);
          uVar17 = 0;
          if ((int)uVar18 < *(int *)(lVar19 + 0x18)) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uStack_4c0 = 0xc;
          *(int *)(lVar22 + 0x14 + *(longlong *)(lVar19 + 0x10)) = (int)uVar13;
          local_4c8 = "CookedDouble";
          local_1c8._12_4_ = uStack_4bc;
          local_1c8.Size = 0xc;
          local_1c8.DataPtr = "CookedDouble";
          FCbObjectView::FindView(&local_700,&local_1b8,&local_1c8);
          uVar13 = FCbFieldView::AsInteger(&local_1b8,0,(FIntegerParams)0x40);
          uVar17 = 0;
          if ((int)uVar18 < *(int *)(lVar19 + 0x18)) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)(lVar22 + 0x18 + *(longlong *)(lVar19 + 0x10)) = (int)uVar13;
          TCbFieldIterator<FCbFieldView>::operator++(&local_668);
          this_01 = local_6b8;
        }
        TCbFieldIterator<FCbFieldView>::operator++(&local_3b0);
        TCbFieldIterator<FCbFieldView>::operator++(&local_650);
        pTVar20 = local_708;
      }
      TCbFieldIterator<FCbFieldView>::operator++(&local_6f0);
      TCbFieldIterator<FCbFieldView>::operator++(&local_398);
    } while (((byte)local_6f0._padding_ & 0x1f) != 0);
  }
  uStack_4b0 = 0x14;
  local_4b8 = "JobLifeTimeIntervals";
  local_1a8._12_4_ = uStack_4ac;
  local_1a8.Size = 0x14;
  local_1a8.DataPtr = "JobLifeTimeIntervals";
  FCbObjectView::FindView(param_1,&local_198,&local_1a8);
  FCbFieldView::AsArrayView(&local_198,(FCbArrayView *)&local_4a8);
  pTVar3 = &this->JobLifeTimeIntervals;
  uVar13 = FCbArrayView::Num((FCbArrayView *)&local_4a8);
  iVar12 = (int)uVar13;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13 & 0xffffffff);
  }
  piVar2 = &(this->JobLifeTimeIntervals).ArrayMax;
  (this->JobLifeTimeIntervals).ArrayNum = 0;
  if ((this->JobLifeTimeIntervals).ArrayMax < iVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar12,&pTVar3->AllocatorInstance,0,piVar2);
  }
  FCbFieldView::CreateViewIterator(&local_4a8,(FCbFieldViewIterator *)&local_638);
  while( true ) {
    if (((byte)local_638._padding_ & 0x1f) == 0) {
      uStack_470 = 0x11;
      local_478 = "ShaderTimingsKeys";
      local_178._12_4_ = uStack_46c;
      local_178.Size = 0x11;
      local_178.DataPtr = "ShaderTimingsKeys";
      FCbObjectView::FindView(param_1,&local_168,&local_178);
      FCbFieldView::AsArrayView(&local_168,(FCbArrayView *)&local_688);
      uStack_460 = 0x13;
      local_468 = "ShaderTimingsValues";
      local_158._12_4_ = uStack_45c;
      local_158.Size = 0x13;
      local_158.DataPtr = "ShaderTimingsValues";
      FCbObjectView::FindView(param_1,&local_148,&local_158);
      FCbFieldView::AsArrayView(&local_148,(FCbArrayView *)&local_458);
      uVar13 = FCbArrayView::Num((FCbArrayView *)&local_458);
      uVar14 = FCbArrayView::Num((FCbArrayView *)&local_688);
      if ((uVar14 != uVar13) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TimingsKeysView.Num() == TimingsValuesView.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                              ,0x365,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = FCbArrayView::Num((FCbArrayView *)&local_688);
      TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
                 *)&this->ShaderTimings,(int)uVar13);
      FCbFieldView::CreateViewIterator(&local_688,(FCbFieldViewIterator *)&local_620);
      FCbFieldView::CreateViewIterator(&local_458,(FCbFieldViewIterator *)&local_3c8);
      while( true ) {
        if ((((byte)local_620._padding_ & 0x1f) == 0) || (((byte)local_3c8._padding_ & 0x1f) == 0))
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)this);
          return;
        }
        local_448.Data = (void *)0x0;
        local_448.Size = 0;
        FCbFieldView::AsBinaryView((FCbFieldView *)&local_3c8,&local_438,&local_448);
        if ((local_438.Size != 0x18) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TimingsValuesBinary.GetSize() == sizeof(FShaderTimings)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                                ,0x36f,L""), bVar11)) break;
        pvVar10 = local_438.Data;
        uStack_670 = 0;
        local_678 = 0;
        local_a8.DataPtr = (uchar *)0x0;
        local_a8.Size = 0;
        local_a8._12_4_ = 0;
        pTVar15 = FCbFieldView::AsString((FCbFieldView *)&local_620,&local_78,&local_a8);
        local_728.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_728.Data.ArrayNum = 0;
        local_728.Data.ArrayMax = 0;
        local_68 = pTVar15->DataPtr;
        uStack_60 = *(undefined8 *)&pTVar15->Size;
        pFVar16 = ::FString::ConstructFromPtrSize
                            (&local_128,pTVar15->DataPtr,(int)*(undefined8 *)&pTVar15->Size);
        if (&local_728 != pFVar16) {
          if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_728.Data.AllocatorInstance.Data);
          }
          local_728.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_728.Data.ArrayNum = (pFVar16->Data).ArrayNum;
          local_728.Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        local_428 = &local_728;
        local_420 = pvVar10;
        TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FShaderTimings_const_&>_>
                  ((TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
                    *)&this->ShaderTimings,
                   (TPairInitializer<FString_&&,FShaderTimings_const_&> *)(local_res18 + 1),
                   (bool *)&local_428);
        if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_728.Data.AllocatorInstance.Data);
        }
        TCbFieldIterator<FCbFieldView>::operator++(&local_620);
        TCbFieldIterator<FCbFieldView>::operator++(&local_3c8);
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_498.Data = (void *)0x0;
    local_498.Size = 0;
    FCbFieldView::AsBinaryView(&local_188,&local_488,&local_498);
    if ((local_488.Size != 0x10) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntervalObj.GetSize() == sizeof(TInterval<double>)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                            ,0x35f,L""), bVar11)) break;
    pvVar10 = local_488.Data;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar6 <= local_488.Data) &&
        (local_488.Data < pFVar6 + (longlong)(this->JobLifeTimeIntervals).ArrayMax * 0x10)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = (this->JobLifeTimeIntervals).ArrayNum;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->JobLifeTimeIntervals).ArrayNum = iVar12 + 1;
    uVar9 = *(undefined8 *)((longlong)pvVar10 + 8);
    pFVar6 = (pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(undefined8 *)pFVar6 = *(undefined8 *)pvVar10;
    *(undefined8 *)(pFVar6 + 8) = uVar9;
    TCbFieldIterator<FCbFieldView>::operator++(&local_638);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// RegisterAssignedJob @ 14853df20

void __thiscall
FShaderCompilerStats::RegisterAssignedJob
          (FShaderCompilerStats *this,FShaderCommonCompileJob *param_1)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  if (param_1->TimeAddedToPendingQueue == 0.0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8530813070090437514>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                       ,0x38a,"Job.TimeAddedToPendingQueue != 0.0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  QueryPerformanceCounter(&local_res8);
  param_1->TimeAssignedToExecution =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  if (this != (FShaderCompilerStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    plVar1 = &(this->Counters).JobsAssigned;
    *plVar1 = *plVar1 + 1;
    dVar5 = param_1->TimeAssignedToExecution - param_1->TimeAddedToPendingQueue;
    dVar4 = (this->Counters).MaxPendingTime;
    if (dVar4 <= dVar5) {
      dVar4 = dVar5;
    }
    (this->Counters).MaxPendingTime = dVar4;
    (this->Counters).AccumulatedPendingTime = dVar5 + (this->Counters).AccumulatedPendingTime;
                    /* WARNING: Could not recover jumptable at 0x00014853dfe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterCompiledShaders @ 14853e000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderCompilerStats::RegisterCompiledShaders
          (FShaderCompilerStats *this,uint param_1,EShaderPlatform param_2,FString *param_3,
          FString *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
  *pTVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FShaderStats *pFVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  FString *local_c0;
  FShaderCompilerStats *local_b8;
  FString *local_b0;
  FSparseArrayAllocationInfo local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c0 = param_4;
  local_b8 = this;
  local_b0 = param_3;
  if (this == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pwVar17 = L"";
  if ((int)(uint)param_2 < *(int *)&(this->CompileStats).field_0x28) {
    if ((*(int *)&(this->CompileStats).field_0x28 <= (int)(uint)param_2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar15 = *(undefined1 **)&(this->CompileStats).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->CompileStats).field_0x10;
    }
    if ((*(uint *)(puVar15 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & SP_METAL_MRT_TVOS) & 1) !=
        0) goto LAB_14853e1e0;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  pFVar6 = TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->CompileStats,
                      &local_a8,(uint)param_2);
  pTVar11 = pFVar6->Pointer;
  if (pTVar11 !=
      (TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
       *)0x0) {
    *(undefined8 *)&pTVar11->Elements = 0;
    *(undefined8 *)&(pTVar11->Elements).field_0x8 = 0;
    *(undefined8 *)&(pTVar11->Elements).field_0x20 = 0;
    *(undefined4 *)&(pTVar11->Elements).field_0x28 = 0;
    *(undefined4 *)&(pTVar11->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(pTVar11->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar11->Elements).field_0x34 = 0;
    (pTVar11->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar11->HashSize = 0;
    TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
    ::operator=(pTVar11,(TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
                         *)local_98);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  bVar3 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
LAB_14853e1e0:
  iVar5 = (param_3->Data).ArrayNum;
  pTVar11 = (TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
             *)((ulonglong)param_2 * 0x50 + *(longlong *)&this->CompileStats);
  if (iVar5 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  iVar8 = 0;
  iVar9 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar9 = iVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  iVar5 = TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar11,uVar4,param_3);
  if ((iVar5 == -1) ||
     (lVar13 = (longlong)iVar5 * 0x40 + *(longlong *)&pTVar11->Elements, lVar13 == 0)) {
    pFVar14 = TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
              ::EmplaceByHash<FString_const_&>
                        ((TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
                          *)pTVar11,uVar4,param_3);
  }
  else {
    pFVar14 = (FShaderStats *)(lVar13 + 0x10);
  }
  bVar3 = false;
  iVar5 = (local_c0->Data).ArrayNum;
  if (iVar5 != 0) {
    pwVar17 = (wchar_t *)(local_c0->Data).AllocatorInstance.Data;
    iVar8 = iVar5 + -1;
  }
  uVar7 = CityHash64((char *)pwVar17,iVar8 * 2);
  iVar5 = (pFVar14->PermutationCompilations).ArrayNum;
  pFVar12 = (pFVar14->PermutationCompilations).AllocatorInstance.Data;
  pFVar16 = pFVar12 + (longlong)iVar5 * 0x20;
  do {
    while( true ) {
      if ((pFVar14->PermutationCompilations).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FShaderCompilerSinglePermutationStat,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_c8);
      }
      if (pFVar12 == pFVar16) {
        if (!bVar3) {
          pFVar14->Compiled = pFVar14->Compiled + param_1;
          piVar1 = &(pFVar14->PermutationCompilations).ArrayMax;
          iVar5 = (pFVar14->PermutationCompilations).ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,(ForAnyElementType *)pFVar14,piVar1);
          }
          (pFVar14->PermutationCompilations).ArrayNum = iVar5 + 1;
          pFVar12 = (pFVar14->PermutationCompilations).AllocatorInstance.Data;
          lVar13 = (longlong)iVar5 * 0x20;
          *(ulong64 *)(pFVar12 + lVar13) = uVar7;
          *(undefined4 *)(pFVar12 + lVar13 + 8) = 0;
          *(uint *)(pFVar12 + lVar13 + 0xc) = param_1;
          *(undefined8 *)(pFVar12 + lVar13 + 0x10) = 0;
          *(undefined4 *)(pFVar12 + lVar13 + 0x18) = 0;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)local_b8);
        pFVar12 = (local_b0->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        pFVar12 = (local_c0->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        return;
      }
      if (uVar7 == *(ulong64 *)pFVar12) break;
LAB_14853e2b4:
      pFVar12 = pFVar12 + 0x20;
    }
    bVar3 = true;
    if (*(int *)(pFVar12 + 0xc) == 0) {
      *(uint *)(pFVar12 + 0xc) = param_1;
      pFVar14->Compiled = pFVar14->Compiled + param_1;
      goto LAB_14853e2b4;
    }
    *(uint *)(pFVar12 + 0x14) = *(int *)(pFVar12 + 0x14) + param_1;
    pFVar14->CompiledDouble = pFVar14->CompiledDouble + param_1;
    pFVar12 = pFVar12 + 0x20;
  } while( true );
}

// RegisterCookedShaders @ 14853e370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderCompilerStats::RegisterCookedShaders
          (FShaderCompilerStats *this,uint param_1,float param_2,EShaderPlatform param_3,
          FString *param_4,FString *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  ulong64 uVar7;
  int iVar8;
  wchar_t *pwVar9;
  TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FShaderStats *pFVar13;
  undefined1 *puVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  FString *local_d0;
  FShaderCompilerStats *local_c8;
  FString *local_c0;
  FSparseArrayAllocationInfo local_b8;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d0 = param_5;
  local_c0 = param_4;
  local_c8 = this;
  if (this == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pwVar15 = L"";
  if ((int)(uint)param_3 < *(int *)&(this->CompileStats).field_0x28) {
    if ((*(int *)&(this->CompileStats).field_0x28 <= (int)(uint)param_3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar14 = *(undefined1 **)&(this->CompileStats).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->CompileStats).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & SP_METAL_MRT_TVOS) & 1) !=
        0) goto LAB_14853e55a;
  }
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  pFVar6 = TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->CompileStats,
                      &local_b8,(uint)param_3);
  pTVar10 = pFVar6->Pointer;
  if (pTVar10 !=
      (TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
       *)0x0) {
    *(undefined8 *)&pTVar10->Elements = 0;
    *(undefined8 *)&(pTVar10->Elements).field_0x8 = 0;
    *(undefined8 *)&(pTVar10->Elements).field_0x20 = 0;
    *(undefined4 *)&(pTVar10->Elements).field_0x28 = 0;
    *(undefined4 *)&(pTVar10->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(pTVar10->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar10->Elements).field_0x34 = 0;
    (pTVar10->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar10->HashSize = 0;
    TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
    ::operator=(pTVar10,(TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
                         *)local_a8);
  }
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  bVar3 = local_a8._12_4_ != 0;
  local_a8._8_8_ = (ulonglong)(uint)local_a8._12_4_ << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
LAB_14853e55a:
  iVar8 = 0;
  iVar5 = (param_4->Data).ArrayNum;
  pTVar10 = (TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
             *)((ulonglong)param_3 * 0x50 + *(longlong *)&this->CompileStats);
  if (iVar5 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    iVar8 = iVar5 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  iVar5 = TSet<TTuple<FString,FShaderStats>,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar10,uVar4,param_4);
  if ((iVar5 == -1) ||
     (lVar12 = (longlong)iVar5 * 0x40 + *(longlong *)&pTVar10->Elements, lVar12 == 0)) {
    pFVar13 = TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
              ::EmplaceByHash<FString_const_&>
                        ((TMapBase<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>
                          *)pTVar10,uVar4,param_4);
  }
  else {
    pFVar13 = (FShaderStats *)(lVar12 + 0x10);
  }
  bVar3 = false;
  pFVar13->CompileTime = param_2 + pFVar13->CompileTime;
  iVar8 = (local_d0->Data).ArrayNum;
  iVar5 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar5 = 0;
  }
  else {
    pwVar15 = (wchar_t *)(local_d0->Data).AllocatorInstance.Data;
  }
  uVar7 = CityHash64((char *)pwVar15,iVar5 * 2);
  iVar5 = (pFVar13->PermutationCompilations).ArrayNum;
  pFVar11 = (pFVar13->PermutationCompilations).AllocatorInstance.Data;
  pFVar16 = pFVar11 + (longlong)iVar5 * 0x20;
  do {
    while( true ) {
      if ((pFVar13->PermutationCompilations).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FShaderCompilerSinglePermutationStat,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_d8);
      }
      if (pFVar11 == pFVar16) {
        if (!bVar3) {
          pFVar13->Cooked = pFVar13->Cooked + param_1;
          piVar1 = &(pFVar13->PermutationCompilations).ArrayMax;
          iVar5 = (pFVar13->PermutationCompilations).ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,(ForAnyElementType *)pFVar13,piVar1);
          }
          (pFVar13->PermutationCompilations).ArrayNum = iVar5 + 1;
          pFVar11 = (pFVar13->PermutationCompilations).AllocatorInstance.Data;
          lVar12 = (longlong)iVar5 * 0x20;
          *(ulong64 *)(pFVar11 + lVar12) = uVar7;
          *(undefined8 *)(pFVar11 + lVar12 + 8) = 0;
          *(uint *)(pFVar11 + lVar12 + 0x10) = param_1;
          *(undefined8 *)(pFVar11 + lVar12 + 0x14) = 0;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)local_c8);
        pFVar11 = (local_c0->Data).AllocatorInstance.Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        pFVar11 = (local_d0->Data).AllocatorInstance.Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        return;
      }
      if (uVar7 == *(ulong64 *)pFVar11) break;
LAB_14853e638:
      pFVar11 = pFVar11 + 0x20;
    }
    bVar3 = true;
    if (*(int *)(pFVar11 + 0x10) == 0) {
      *(uint *)(pFVar11 + 0x10) = param_1;
      pFVar13->Cooked = pFVar13->Cooked + param_1;
      goto LAB_14853e638;
    }
    *(uint *)(pFVar11 + 0x18) = *(int *)(pFVar11 + 0x18) + param_1;
    pFVar13->CookedDouble = pFVar13->CookedDouble + param_1;
    pFVar11 = pFVar11 + 0x20;
  } while( true );
}

// RegisterDistributedBuildStats @ 14853e700

void __thiscall
FShaderCompilerStats::RegisterDistributedBuildStats
          (FShaderCompilerStats *this,FDistributedBuildStats *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (this != (FShaderCompilerStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    uVar1 = (this->Counters).MaxRemoteAgents;
    uVar2 = param_1->MaxRemoteAgents;
    if (param_1->MaxRemoteAgents < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = (this->Counters).MaxActiveAgentCores;
    (this->Counters).MaxRemoteAgents = uVar2;
    uVar2 = param_1->MaxActiveAgentCores;
    if (param_1->MaxActiveAgentCores < uVar1) {
      uVar2 = uVar1;
    }
    (this->Counters).MaxActiveAgentCores = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00014853e74f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterFinishedJob @ 14853e970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FShaderCompilerStats::RegisterFinishedJob
          (FShaderCompilerStats *this,FShaderCommonCompileJob *param_1)

{
  long64 *plVar1;
  double dVar2;
  atomic<EShaderCompileJobStatus> aVar3;
  FShaderCompileJobStatus *pFVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  undefined ***pppuVar8;
  undefined1 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStackY_a8 [32];
  TInterval<double> local_78;
  LARGE_INTEGER local_68 [2];
  code *local_58 [2];
  undefined **local_48;
  FShaderCompilerStats *local_40;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (this == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (((param_1->JobStatusPtr).Object == (FShaderCompileJobStatus *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (param_1->JobStatusPtr).Object;
  aVar3 = pFVar4->Status;
  if (((pFVar4->IsDuplicate == (atomic<bool>)0x0) && (aVar3 != (atomic<EShaderCompileJobStatus>)0x2)
      ) && (1 < (byte)((char)aVar3 - 9U))) {
    uVar9 = 0;
    if ((param_1->TimeAssignedToExecution == 0.0) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8530813070090437532>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                           ,0x39c,"Job.TimeAssignedToExecution != 0.0"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    QueryPerformanceCounter(local_68);
    param_1->TimeExecutionCompleted =
         (double)local_68[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    __GTraceCounterShaders_Compiled.Value = __GTraceCounterShaders_Compiled.Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterShaders_Compiled.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterShaders_Compiled.CounterName,TraceCounterType_Int,
                           __GTraceCounterShaders_Compiled.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterShaders_Compiled.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterShaders_Compiled.CounterId._2_2_ = 0;
          __GTraceCounterShaders_Compiled.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterShaders_Compiled.CounterId._0_2_,
                 __GTraceCounterShaders_Compiled.Value);
    }
    plVar1 = &(this->Counters).JobsCompleted;
    *plVar1 = *plVar1 + 1;
    dVar10 = param_1->TimeExecutionCompleted - param_1->TimeAssignedToExecution;
    dVar2 = (this->Counters).MaxJobExecutionTime;
    dVar11 = dVar10;
    if (dVar10 <= dVar2) {
      dVar11 = dVar2;
    }
    (this->Counters).AccumulatedJobExecutionTime =
         dVar10 + (this->Counters).AccumulatedJobExecutionTime;
    (this->Counters).MaxJobExecutionTime = dVar11;
    dVar10 = param_1->TimeExecutionCompleted - param_1->TimeAddedToPendingQueue;
    dVar2 = (this->Counters).MaxJobLifeTime;
    dVar11 = dVar10;
    if (dVar10 <= dVar2) {
      dVar11 = dVar2;
    }
    (this->Counters).AccumulatedJobLifeTime = dVar10 + (this->Counters).AccumulatedJobLifeTime;
    (this->Counters).MaxJobLifeTime = dVar11;
    dVar2 = param_1->TimeAddedToPendingQueue;
    if (((dVar2 == 0.0) ||
        (param_1->TimeExecutionCompleted <= dVar2 && dVar2 != param_1->TimeExecutionCompleted)) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8530813070090437546>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                           ,0x3aa,
                           "Job.TimeAddedToPendingQueue != 0.0 && Job.TimeAddedToPendingQueue <= Job.TimeExecutionCompleted"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_78.Min = param_1->TimeAddedToPendingQueue;
    local_78.Max = param_1->TimeExecutionCompleted;
    AddToInterval(&this->JobLifeTimeIntervals,&local_78);
  }
  else {
    uVar9 = 1;
  }
  if (param_1->TimeTaskSubmitJobs != 0.0) {
    (this->Counters).AccumulatedTaskSubmitJobs =
         param_1->TimeTaskSubmitJobs + (this->Counters).AccumulatedTaskSubmitJobs;
    (this->Counters).AccumulatedTaskSubmitJobsStall =
         param_1->TimeTaskSubmitJobsStall + (this->Counters).AccumulatedTaskSubmitJobsStall;
  }
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FShaderCompilerStats::RegisterFinishedJob'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_37 = local_78.Max._1_4_;
  local_33 = local_78.Max._5_2_;
  local_31 = local_78.Max._7_1_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FShaderCompilerStats::RegisterFinishedJob'::__l2::<lambda_1>,void,FShaderCompileJob_&>
                ::Call;
  local_40 = this;
  local_38 = uVar9;
  FShaderCommonCompileJob::ForEachSingleShaderJob
            (param_1,(TFunction<void___cdecl(FShaderCompileJob_&)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar8 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar8 = local_30;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// RegisterJobBatch @ 14853ec90

void __thiscall
FShaderCompilerStats::RegisterJobBatch
          (FShaderCompilerStats *this,int param_1,EExecutionType param_2)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_2 == Local) {
    if (this != (FShaderCompilerStats *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      plVar1 = &(this->Counters).LocalJobBatchesSeen;
      *plVar1 = *plVar1 + 1;
      plVar1 = &(this->Counters).TotalJobsReportedInLocalJobBatches;
      *plVar1 = *plVar1 + (longlong)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014853eccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      return;
    }
  }
  else {
    if (param_2 != Distributed) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                         ,0x3fa,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
    if (this != (FShaderCompilerStats *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      plVar1 = &(this->Counters).DistributedJobBatchesSeen;
      *plVar1 = *plVar1 + 1;
      plVar1 = &(this->Counters).TotalJobsReportedInDistributedJobBatches;
      *plVar1 = *plVar1 + (longlong)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014853ed02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterLocalWorkerIdleTime @ 14853ed50

void __thiscall
FShaderCompilerStats::RegisterLocalWorkerIdleTime(FShaderCompilerStats *this,double param_1)

{
  if (this != (FShaderCompilerStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    (this->Counters).TimesLocalWorkersWereIdle =
         (this->Counters).TimesLocalWorkersWereIdle + __real_3ff0000000000000;
    (this->Counters).AccumulatedLocalWorkerIdleTime =
         param_1 + (this->Counters).AccumulatedLocalWorkerIdleTime;
                    /* WARNING: Could not recover jumptable at 0x00014853ed95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterNewPendingJob @ 14853edb0

void __thiscall
FShaderCompilerStats::RegisterNewPendingJob
          (FShaderCompilerStats *this,FShaderCommonCompileJob *param_1)

{
  ushort uVar1;
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  param_1->TimeAddedToPendingQueue =
       (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  __GTraceCounterShaders_Pending.Value = __GTraceCounterShaders_Pending.Value + 1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (__GTraceCounterShaders_Pending.CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = FCountersTrace::OutputInitCounter
                      (__GTraceCounterShaders_Pending.CounterName,TraceCounterType_Int,
                       __GTraceCounterShaders_Pending.CounterFlags & 0xf);
    LOCK();
    if (__GTraceCounterShaders_Pending.CounterId == (atomic<unsigned_int>)0x0) {
      __GTraceCounterShaders_Pending.CounterId._2_2_ = 0;
      __GTraceCounterShaders_Pending.CounterId._0_2_ = uVar1;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (__GTraceCounterShaders_Pending.CounterId._0_2_,__GTraceCounterShaders_Pending.Value);
  return;
}

// RegisterWorkerDiagnostics @ 14853ee60

void __thiscall
FShaderCompilerStats::RegisterWorkerDiagnostics
          (FShaderCompilerStats *this,FShaderCompileWorkerDiagnostics *param_1,FString *param_2,
          int param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != (FShaderCompilerStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    iVar4 = (this->WorkerDiagnostics).ArrayNum;
    piVar2 = &(this->WorkerDiagnostics).ArrayMax;
    if (iVar4 == *piVar2) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->WorkerDiagnostics).AllocatorInstance,piVar2);
    }
    (this->WorkerDiagnostics).ArrayNum = iVar4 + 1;
    pFVar5 = (this->WorkerDiagnostics).AllocatorInstance.Data + (longlong)iVar4 * 0x40;
    DefaultConstructItems<FShaderCompilerStats::FWorkerDiagnosticsInfo,int>(pFVar5,1);
    dVar3 = param_1->EntryPointTimestamp;
    pFVar1 = pFVar5 + 0x28;
    *(undefined8 *)pFVar5 = *(undefined8 *)param_1;
    *(double *)(pFVar5 + 8) = dVar3;
    dVar3 = param_1->BatchProcessTime;
    *(double *)(pFVar5 + 0x10) = param_1->BatchPreparationTime;
    *(double *)(pFVar5 + 0x18) = dVar3;
    *(undefined8 *)(pFVar5 + 0x20) = *(undefined8 *)&param_1->BatchIndex;
    if (pFVar1 != (FScriptContainerElement *)param_2) {
      if (*(void **)&pFVar1->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar1->field_0x0);
      }
      *(FScriptContainerElement **)&pFVar1->field_0x0 = (param_2->Data).AllocatorInstance.Data;
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar5 + 0x30) = (param_2->Data).ArrayNum;
      *(int *)(pFVar5 + 0x34) = (param_2->Data).ArrayMax;
      (param_2->Data).ArrayNum = 0;
      (param_2->Data).ArrayMax = 0;
    }
    *(uint *)(pFVar5 + 0x3c) = param_4;
    *(int *)(pFVar5 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014853ef4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ToJson @ 1485495a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FJsonObject,1> * __thiscall
FShaderCompilerStats::ToJson
          (FShaderCompilerStats *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<FJsonObject,1> *pTVar11;
  UPackage *pUVar12;
  FJsonObject *pFVar13;
  TSharedPtr<FJsonObject,1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  byte bVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  atomic<int> *paVar22;
  TReferenceControllerBase<1> *pTVar23;
  uint uVar24;
  atomic<int> *paVar25;
  undefined1 *puVar26;
  int iVar27;
  undefined1 *puVar28;
  uint *puVar29;
  longlong *plVar30;
  FString *pFVar31;
  TReferenceControllerBase<1> *pTVar32;
  undefined1 *puVar33;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_2c8;
  TReferenceControllerBase<1> *local_2b8;
  TSharedPtr<FJsonValue,1> local_2b0;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *local_2a0;
  undefined8 uStack_298;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  int local_278;
  undefined4 uStack_274;
  TBitArray<FDefaultBitArrayAllocator> *local_270;
  TSharedPtr<FJsonObject,1> local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  int local_1f0;
  int local_1ec;
  TSharedRef<FJsonObject,1> local_1e8;
  TSharedPtr<FJsonObject,1> local_1d8;
  TSharedRef<FJsonObject,1> local_1c8;
  TSharedPtr<FJsonObject,1> local_1b8;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FString local_148;
  TSharedPtr<FJsonObject,1> local_138;
  FString local_128;
  TSharedPtr<FJsonObject,1> local_118;
  TSharedPtr<FJsonObject,1> local_108;
  FString local_f8;
  FString local_e8;
  TSharedRef<FJsonObject,1> local_d8;
  TSharedRef<FJsonObject,1> local_c8;
  TSharedRef<FJsonObject,1> local_b8;
  TSharedRef<FJsonObject,1> local_a8;
  TSharedRef<FJsonObject,1> local_98;
  TSharedRef<FJsonObject,1> local_88 [2];
  undefined4 local_5c;
  
  pTVar11 = MakeShared<FJsonObject,1>(&local_d8);
  __return_storage_ptr__->Object = pTVar11->Object;
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  MakeShared<FJsonObject,1>(&local_c8);
  paVar22 = (atomic<int> *)&DAT_00000008;
  local_b8.Object = local_c8.Object;
  local_b8.SharedReferenceCount.ReferenceController =
       local_c8.SharedReferenceCount.ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar25 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar25 = &(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar25 = (atomic<int>)((int)*paVar25 + 1);
    UNLOCK();
  }
  if (Z_Registration_Info_UScriptStruct_FShaderCompilerCounters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar12 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FShaderCompilerCounters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderCompilerCounters,(UObject *)pUVar12,
                         L"ShaderCompilerCounters");
  }
  FJsonObjectConverter::UStructToJsonObject
            ((UStruct *)Z_Registration_Info_UScriptStruct_FShaderCompilerCounters.OuterSingleton,
             &this->Counters,&local_b8,0,0,
             (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
              *)0x0,SkipStandardizeCase);
  pFVar13 = TSharedPtr<FJsonObject,1>::operator->(__return_storage_ptr__);
  local_138.Object = local_c8.Object;
  local_138.SharedReferenceCount.ReferenceController =
       local_c8.SharedReferenceCount.ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar25 = (atomic<int>)((int)*paVar25 + 1);
    UNLOCK();
  }
  ::FString::FString(&local_148,"Counters");
  FJsonObject::SetObjectField(pFVar13,&local_148,&local_138);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  MakeShared<FJsonObject,1>(&local_a8);
  local_98.Object = local_a8.Object;
  local_98.SharedReferenceCount.ReferenceController =
       local_a8.SharedReferenceCount.ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    paVar22 = &(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar22 = (atomic<int>)((int)*paVar22 + 1);
    UNLOCK();
  }
  if (Z_Registration_Info_UScriptStruct_FShaderCompilerMaterialCounters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar12 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FShaderCompilerMaterialCounters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters,
                         (UObject *)pUVar12,L"ShaderCompilerMaterialCounters");
  }
  FJsonObjectConverter::UStructToJsonObject
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FShaderCompilerMaterialCounters.OuterSingleton,
             &this->MaterialCounters,&local_98,0,0,
             (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
              *)0x0,SkipStandardizeCase);
  pFVar13 = TSharedPtr<FJsonObject,1>::operator->(__return_storage_ptr__);
  local_118.Object = local_a8.Object;
  local_118.SharedReferenceCount.ReferenceController =
       local_a8.SharedReferenceCount.ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar22 = (atomic<int>)((int)*paVar22 + 1);
    UNLOCK();
  }
  ::FString::FString(&local_128,"MaterialCounters");
  FJsonObject::SetObjectField(pFVar13,&local_128,&local_118);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = 0;
  local_2c8.ArrayMax = 0;
  TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
  ::TConstIterator::TConstIterator((TConstIterator *)&local_218,&this->CompileStats);
  pTVar6 = _UNK_150651568;
  pTVar4 = ___xmm_00000000000000000000000000000010;
  if (local_210.CurrentBitIndex < (local_210.Array)->NumBits) {
    do {
      uVar20 = local_210.CurrentBitIndex;
      pTVar17 = (TReferenceControllerBase<1> *)0x0;
      if ((-1 < local_210.CurrentBitIndex) &&
         (local_210.CurrentBitIndex < *(int *)&(this->CompileStats).field_0x28)) {
        if ((*(int *)&(this->CompileStats).field_0x28 <= local_210.CurrentBitIndex) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
          return pTVar14;
        }
        puVar33 = *(undefined1 **)&(this->CompileStats).field_0x20;
        puVar26 = &(this->CompileStats).field_0x10;
        if (puVar33 != (undefined1 *)0x0) {
          puVar26 = puVar33;
        }
        uVar19 = uVar20 & 0x1f;
        if ((int)uVar20 < 0) {
          uVar20 = uVar20 + 0x1f;
        }
        if ((*(uint *)(puVar26 + (longlong)((int)uVar20 >> 5) * 4) >> uVar19 & 1) != 0) {
          pTVar15 = ::operator_new(0x60);
          if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
            local_2b8 = (TReferenceControllerBase<1> *)0x0;
            pTVar32 = (TReferenceControllerBase<1> *)&DAT_00000010;
          }
          else {
            pTVar15->SharedReferenceCount = (atomic<int>)0x1;
            pTVar15->WeakReferenceCount = (atomic<int>)0x1;
            pTVar15->_padding_ =
                 (longlong)
                 &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
            pTVar15[2]._padding_ = 0;
            pTVar15[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar15[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar15[4].SharedReferenceCount = (atomic<int>)0x0;
            pTVar15[4].WeakReferenceCount = (atomic<int>)0x0;
            pTVar15[5].SharedReferenceCount = (atomic<int>)0x0;
            pTVar15[5].WeakReferenceCount = (atomic<int>)0x0;
            pTVar15[1]._padding_ = 0;
            pTVar15[3]._padding_ = 0;
            pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
            pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
            pTVar15[3].SharedReferenceCount = (atomic<int>)0x0;
            pTVar15[3].WeakReferenceCount = (atomic<int>)0x80;
            *(undefined4 *)((longlong)&pTVar15[4]._padding_ + 4) = 0;
            *(undefined4 *)&pTVar15[4]._padding_ = 0xffffffff;
            pTVar15[5]._padding_ = 0;
            pTVar32 = pTVar15 + 1;
            local_2b8 = pTVar15;
            if ((pTVar32 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
              return pTVar14;
            }
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
            pTVar17 = pTVar15;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
          local_238._padding_._4_4_ = 1;
          local_238.UnvisitedBitMask = 0xffffffff;
          plVar30 = (longlong *)((longlong)local_210.CurrentBitIndex * 0x50 + *local_218);
          local_238._padding_._0_4_ = 0;
          local_238.CurrentBitIndex = 0;
          local_238.BaseBitIndex = 0;
          pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar30 + 2);
          local_238.Array = pTVar1;
          if ((int)plVar30[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
          }
          uVar20 = *(uint *)(plVar30 + 5);
          uStack_298 = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
          bVar16 = (byte)uVar20 & 0x1f;
          local_278 = (int)plVar30[1] - *(int *)((longlong)plVar30 + 0x34);
          uStack_288._4_4_ = local_238.CurrentBitIndex;
          uStack_288._0_4_ = local_238.UnvisitedBitMask;
          uStack_280._4_4_ = local_238._28_4_;
          uStack_280._0_4_ = local_238.BaseBitIndex;
          local_258._padding_._0_4_ = (int)uVar20 >> 5;
          local_258._padding_._4_4_ = 1 << bVar16;
          local_258.UnvisitedBitMask = -1 << bVar16;
          pTStack_290 = local_238.Array;
          local_258.BaseBitIndex = uVar20 & 0xffffffe0;
          uStack_180 = CONCAT44(uStack_274,local_278);
          TStack_1a0.Array = local_238.Array;
          local_2a0 = (TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
                       *)plVar30;
          local_258.Array = pTVar1;
          local_258.CurrentBitIndex = uVar20;
          local_1a8 = plVar30;
          TStack_1a0._padding_ = uStack_298;
          TStack_1a0._16_8_ = uStack_288;
          TStack_1a0._24_8_ = uStack_280;
          if (((int)uVar20 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
            return pTVar14;
          }
          if (uVar20 != *(uint *)(plVar30 + 5)) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_258);
          }
          iVar10 = local_258.CurrentBitIndex;
          uStack_298 = CONCAT44(local_258._padding_._4_4_,(int)local_258._padding_);
          uStack_288 = CONCAT44(local_258.CurrentBitIndex,local_258.UnvisitedBitMask);
          uStack_280 = CONCAT44(local_258._28_4_,local_258.BaseBitIndex);
          pTStack_290 = local_258.Array;
          local_270 = local_258.Array;
          while( true ) {
            plVar7 = local_1a8;
            if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
              local_res18[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (((TStack_1a0.CurrentBitIndex == iVar10) && (TStack_1a0.Array == local_270)) &&
               (plVar7 == plVar30)) break;
            pFVar31 = (FString *)((longlong)TStack_1a0.CurrentBitIndex * 0x40 + *plVar7);
            pTVar15 = ::operator_new(0x60);
            pTVar17 = (TReferenceControllerBase<1> *)0x0;
            if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
              pTVar23 = (TReferenceControllerBase<1> *)&DAT_00000010;
              local_1e8.Object = (FJsonObject *)pTVar4;
              local_1e8.SharedReferenceCount.ReferenceController = pTVar6;
            }
            else {
              pTVar15->SharedReferenceCount = (atomic<int>)0x1;
              pTVar23 = pTVar15 + 1;
              pTVar15->WeakReferenceCount = (atomic<int>)0x1;
              pTVar15->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_
              ;
              pTVar15[2]._padding_ = 0;
              pTVar15[2].SharedReferenceCount = (atomic<int>)0x0;
              pTVar15[2].WeakReferenceCount = (atomic<int>)0x0;
              pTVar15[4].SharedReferenceCount = (atomic<int>)0x0;
              pTVar15[4].WeakReferenceCount = (atomic<int>)0x0;
              pTVar15[5].SharedReferenceCount = (atomic<int>)0x0;
              pTVar15[5].WeakReferenceCount = (atomic<int>)0x0;
              pTVar15[1]._padding_ = 0;
              pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
              pTVar15[3]._padding_ = 0;
              pTVar15[3].SharedReferenceCount = (atomic<int>)0x0;
              pTVar15[3].WeakReferenceCount = (atomic<int>)0x80;
              *(undefined4 *)&pTVar15[4]._padding_ = 0xffffffff;
              *(undefined4 *)((longlong)&pTVar15[4]._padding_ + 4) = 0;
              pTVar15[5]._padding_ = 0;
              if ((pTVar23 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
                return pTVar14;
              }
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
              pTVar17 = pTVar15;
              local_1e8.Object = (FJsonObject *)pTVar23;
              local_1e8.SharedReferenceCount.ReferenceController = pTVar15;
            }
            if (Z_Registration_Info_UScriptStruct_FShaderStats.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar12 = Z_Construct_UPackage__Script_Engine();
              Z_Registration_Info_UScriptStruct_FShaderStats.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FShaderStats,(UObject *)pUVar12,
                                   L"ShaderStats");
            }
            FJsonObjectConverter::UStructToJsonObject
                      ((UStruct *)Z_Registration_Info_UScriptStruct_FShaderStats.OuterSingleton,
                       pFVar31 + 1,&local_1e8,0,0,
                       (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                        *)0x0,SkipStandardizeCase);
            if ((pTVar32 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
              return pTVar14;
            }
            if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1d8.Object = (FJsonObject *)pTVar23;
            local_1d8.SharedReferenceCount.ReferenceController = pTVar17;
            FJsonObject::SetObjectField((FJsonObject *)pTVar32,pFVar31,&local_1d8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1d8.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar17);
            TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
          }
          pTVar15 = ::operator_new(0x30);
          pTVar17 = local_2b8;
          if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
            pTVar15 = (TReferenceControllerBase<1> *)0x0;
            local_2b0.Object = (FJsonValue *)pTVar4;
            local_2b0.SharedReferenceCount.ReferenceController = pTVar6;
          }
          else {
            pTVar15->SharedReferenceCount = (atomic<int>)0x1;
            pTVar15->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
            ;
            pTVar15->WeakReferenceCount = (atomic<int>)0x1;
            local_108.SharedReferenceCount.ReferenceController = local_2b8;
            if (local_2b8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_2b8->SharedReferenceCount =
                   (atomic<int>)((int)local_2b8->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_108.Object = (FJsonObject *)pTVar32;
            FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar15 + 1),&local_108);
            if ((pTVar15 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
              return pTVar14;
            }
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
            local_2b0.Object = (FJsonValue *)(pTVar15 + 1);
            local_2b0.SharedReferenceCount.ReferenceController = pTVar15;
          }
          if (((local_2c8.AllocatorInstance.Data <= &local_2b0) &&
              (&local_2b0 <
               (TSharedPtr<FJsonValue,1> *)
               (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0x10))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
            return pTVar14;
          }
          iVar10 = local_2c8.ArrayNum;
          if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
          }
          local_2c8.ArrayNum = iVar10 + 1;
          *(FJsonValue **)&local_2c8.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 =
               local_2b0.Object;
          *(TReferenceControllerBase<1> **)
           (local_2c8.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) =
               local_2b0.SharedReferenceCount.ReferenceController;
          local_2b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_2b0.Object = (FJsonValue *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
        }
      }
      local_210.UnvisitedBitMask = local_210.UnvisitedBitMask & ~local_210._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
    } while (local_210.CurrentBitIndex < (local_210.Array)->NumBits);
  }
  iVar10 = 0;
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
    return pTVar14;
  }
  pFVar13 = __return_storage_ptr__->Object;
  ::FString::FString(&local_f8,"CompileStats");
  FJsonObject::SetArrayField(pFVar13,&local_f8,&local_2c8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pTVar11 = MakeShared<FJsonObject,1>(local_88);
  local_268.Object = pTVar11->Object;
  local_268.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88[0].SharedReferenceCount.ReferenceController);
  pTStack_290 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ShaderTimings).field_0x10;
  iVar27 = 0;
  iVar21 = *(int *)&(this->ShaderTimings).field_0x28;
  pTVar3 = &this->ShaderTimings;
  uVar20 = 1;
  uStack_288._4_4_ = 0;
  if (iVar21 != 0) {
    puVar29 = *(uint **)&(this->ShaderTimings).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)pTStack_290;
    }
    uVar19 = *puVar29;
    iVar10 = 0;
    iVar27 = 0;
    while (uVar19 == 0) {
      lVar18 = (longlong)iVar27;
      iVar10 = iVar10 + 0x20;
      iVar27 = iVar27 + 1;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_148549f46;
      uVar19 = puVar29[lVar18 + 1];
    }
    uVar20 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uVar20 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1f0 = (int)lVar18;
    uStack_288._4_4_ = local_1f0 + -1 + iVar10;
    if (iVar21 < uStack_288._4_4_) {
LAB_148549f46:
      uStack_288._4_4_ = iVar21;
    }
  }
  puVar33 = &(this->ShaderTimings).field_0x10;
  local_278 = *(int *)&(this->ShaderTimings).field_0x8 - *(int *)&(this->ShaderTimings).field_0x34;
  uVar19 = *(uint *)&(this->ShaderTimings).field_0x28;
  uVar24 = uVar19 & 0xffffffe0;
  uStack_288._0_4_ = 0xffffffff;
  uStack_298 = CONCAT44(uVar20,iVar27);
  uStack_280._4_4_ = local_5c;
  uStack_280._0_4_ = iVar10;
  TStack_170._padding_ = uStack_298;
  iVar21 = (int)uVar19 >> 5;
  uStack_150 = CONCAT44(uStack_274,local_278);
  TStack_170.UnvisitedBitMask = 0xffffffff;
  TStack_170.CurrentBitIndex = uStack_288._4_4_;
  TStack_170.BaseBitIndex = iVar10;
  TStack_170._28_4_ = local_5c;
  local_2a0 = pTVar3;
  local_178 = pTVar3;
  TStack_170.Array = pTStack_290;
  if (((int)uVar19 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
    return pTVar14;
  }
  uVar20 = *(uint *)&(this->ShaderTimings).field_0x28;
  if (uVar19 != uVar20) {
    puVar26 = *(undefined1 **)&(this->ShaderTimings).field_0x20;
    puVar28 = puVar33;
    if (puVar26 != (undefined1 *)0x0) {
      puVar28 = puVar26;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar21 * 4);
    while (uVar19 == 0) {
      lVar18 = (longlong)iVar21;
      uVar24 = uVar24 + 0x20;
      iVar21 = iVar21 + 1;
      uVar19 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14854a060;
      uVar19 = *(uint *)(puVar28 + lVar18 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1ec = (int)lVar18;
    uVar19 = local_1ec + -1 + uVar24;
    if ((int)uVar20 < (int)uVar19) {
      uVar19 = uVar20;
    }
  }
LAB_14854a060:
  while( true ) {
    pTVar8 = local_178;
    if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_170.CurrentBitIndex == uVar19) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar33)) && (pTVar8 == pTVar3)
       ) {
      if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
        return pTVar14;
      }
      pFVar13 = __return_storage_ptr__->Object;
      ::FString::FString(&local_e8,"ShaderTimings");
      FJsonObject::SetObjectField(pFVar13,&local_e8,&local_268);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_268.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_2c8.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_2c8.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pFVar31 = (FString *)((longlong)TStack_170.CurrentBitIndex * 0x30 + *(longlong *)pTVar8);
    pTVar15 = ::operator_new(0x60);
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      pTVar32 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_1c8.Object = (FJsonObject *)pTVar4;
      local_1c8.SharedReferenceCount.ReferenceController = pTVar6;
    }
    else {
      pTVar15->SharedReferenceCount = (atomic<int>)0x1;
      pTVar32 = pTVar15 + 1;
      pTVar15->WeakReferenceCount = (atomic<int>)0x1;
      pTVar15->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
      pTVar15[2]._padding_ = 0;
      pTVar15[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar15[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar15[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar15[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar15[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar15[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar15[1]._padding_ = 0;
      pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar15[3]._padding_ = 0;
      pTVar15[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar15[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar15[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar15[4]._padding_ + 4) = 0;
      pTVar15[5]._padding_ = 0;
      if ((pTVar32 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
        return pTVar14;
      }
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      pTVar17 = pTVar15;
      local_1c8.Object = (FJsonObject *)pTVar32;
      local_1c8.SharedReferenceCount.ReferenceController = pTVar15;
    }
    if (Z_Registration_Info_UScriptStruct_FShaderTimings.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar12 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FShaderTimings.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FShaderTimings,(UObject *)pUVar12,
                           L"ShaderTimings");
    }
    FJsonObjectConverter::UStructToJsonObject
              ((UStruct *)Z_Registration_Info_UScriptStruct_FShaderTimings.OuterSingleton,
               pFVar31 + 1,&local_1c8,0,0,
               (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                *)0x0,SkipStandardizeCase);
    if ((local_268.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) break;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1b8.Object = (FJsonObject *)pTVar32;
    local_1b8.SharedReferenceCount.ReferenceController = pTVar17;
    FJsonObject::SetObjectField(local_268.Object,pFVar31,&local_1b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  pcVar5 = (code *)swi(3);
  pTVar14 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
  return pTVar14;
}

// WriteStatSummary @ 14854e9f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderCompilerStats::WriteStatSummary(FShaderCompilerStats *this)

{
  undefined1 *puVar1;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  FText *pFVar15;
  FString *pFVar16;
  longlong lVar17;
  FNumberFormattingOptions *pFVar18;
  FSharedReferencer<1> FVar19;
  FStaticBasicLogRecord *pFVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  double dVar24;
  double dVar25;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  wchar_t *local_res18;
  FValueComparisonClass<_public:_void___cdecl_FShaderCompilerStats::WriteStatSummary(void)_::_405_::<lambda_1>_>
  local_res20;
  TSharedPtr<FCulture,1> local_158;
  undefined1 local_148 [12];
  uint uStack_13c;
  undefined1 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  TSharedPtr<FCulture,1> local_120;
  TSharedPtr<FCulture,1> local_110;
  FText local_100;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  uint local_d0;
  int iStack_cc;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4 [25];
  
  if (this == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  lVar17 = (this->Counters).JobsCompleted;
  uVar22 = (uint)lVar17;
  if (lVar17 < 0) {
    uVar22 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if (uVar22 == 0) {
    return;
  }
  if (3 < (byte)LogShaderCompilers._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  dVar13 = __real_4059000000000000;
  local_res18 = L"";
  if (this->bMultiProcessAggregated != false) {
    local_res18 = L" (aggregated across all cook processes)";
  }
  if ((this->Counters).TotalCacheSearchAttempts != 0) {
    if ((3 < (byte)LogShaderCompilers._0_1_) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
       3 < (byte)LogShaderCompilers._0_1_)) {
      FormatNumber<unsigned_int>((FString *)&local_100,(this->Counters).TotalCacheDuplicates);
      FormatNumber<unsigned_int>((FString *)&local_120,(this->Counters).TotalCacheDDCHits);
      FormatNumber<unsigned___int64>((FString *)&local_110,(this->Counters).TotalCacheHits);
      FormatNumber<unsigned___int64>
                ((FString *)&local_158,(this->Counters).TotalCacheSearchAttempts);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      if (local_158.Object != (FCulture *)0x0) {
        FMemory::Free(local_158.Object);
      }
      if (local_110.Object != (FCulture *)0x0) {
        FMemory::Free(local_110.Object);
      }
      if (local_120.Object != (FCulture *)0x0) {
        FMemory::Free(local_120.Object);
      }
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_100.TextData.Reference);
      }
      if (3 < (byte)LogShaderCompilers._0_1_) {
        FormatNumber<unsigned___int64>((FString *)&local_110,(this->Counters).UniqueCacheOutputs);
        FormatNumber<unsigned___int64>
                  ((FString *)&local_158,(this->Counters).UniqueCacheInputHashes);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        if (local_158.Object != (FCulture *)0x0) {
          FMemory::Free(local_158.Object);
        }
        if (local_110.Object != (FCulture *)0x0) {
          FMemory::Free(local_110.Object);
        }
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pFVar18 = FNumberFormattingOptions::FNumberFormattingOptions
                          ((FNumberFormattingOptions *)local_148);
      pFVar18->MinimumFractionalDigits = 2;
      pFVar18->MaximumFractionalDigits = 2;
      SizeFormattingOptions.AlwaysSign = pFVar18->AlwaysSign;
      SizeFormattingOptions.UseGrouping = pFVar18->UseGrouping;
      SizeFormattingOptions.IndicateNearlyInteger = pFVar18->IndicateNearlyInteger;
      SizeFormattingOptions._3_1_ = pFVar18->field_0x3;
      SizeFormattingOptions.RoundingMode = pFVar18->RoundingMode;
      SizeFormattingOptions.MinimumIntegralDigits = pFVar18->MinimumIntegralDigits;
      SizeFormattingOptions.MaximumIntegralDigits = pFVar18->MaximumIntegralDigits;
      SizeFormattingOptions.MinimumFractionalDigits = pFVar18->MinimumFractionalDigits;
      SizeFormattingOptions.MaximumFractionalDigits = pFVar18->MaximumFractionalDigits;
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = (this->Counters).CacheMemBudget;
    if (uVar6 == 0) {
      if (3 < (byte)LogShaderCompilers._0_1_) {
        local_110.Object = (FCulture *)0x0;
        local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar15 = FText::AsMemory((FText *)&local_158,(this->Counters).CacheMemUsed,
                                  &SizeFormattingOptions,&local_110,IEC);
        FText::ToString(pFVar15);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        FVar19.ReferenceController = local_110.SharedReferenceCount.ReferenceController;
        if (local_158.Object != (FCulture *)0x0) {
          (**(code **)((((local_158.Object)->Implementation).Ptr)->ICULocale).language)();
          FVar19.ReferenceController = local_110.SharedReferenceCount.ReferenceController;
        }
        goto LAB_14854ef9e;
      }
    }
    else if (3 < (byte)LogShaderCompilers._0_1_) {
      local_120.Object = (FCulture *)0x0;
      local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar15 = FText::AsMemory(&local_100,uVar6,&SizeFormattingOptions,&local_120,IEC);
      FText::ToString(pFVar15);
      local_110.Object = (FCulture *)0x0;
      local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar15 = FText::AsMemory((FText *)&local_158,(this->Counters).CacheMemUsed,
                                &SizeFormattingOptions,&local_110,IEC);
      FText::ToString(pFVar15);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      if (local_158.Object != (FCulture *)0x0) {
        (**(code **)((((local_158.Object)->Implementation).Ptr)->ICULocale).language)();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      FVar19.ReferenceController = local_120.SharedReferenceCount.ReferenceController;
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
        FVar19.ReferenceController = local_120.SharedReferenceCount.ReferenceController;
      }
LAB_14854ef9e:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar19.ReferenceController);
    }
  }
  dVar24 = GetTimeShaderCompilationWasActive(this);
  if ((3 < (byte)LogShaderCompilers._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
     3 < (byte)LogShaderCompilers._0_1_)) {
    FormatNumber<unsigned_int>((FString *)&local_158,uVar22);
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Shaders_Compile_151b0f1f8,
               (FLogCategoryBase *)&LogShaderCompilers);
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (3 < (byte)LogShaderCompilers._0_1_) {
    lVar17 = (this->Counters).JobsAssigned;
    if (lVar17 == 0) {
      ::FString::FString((FString *)&local_120,L"0%");
    }
    else if (lVar17 == (this->Counters).JobsCompleted) {
      ::FString::FString((FString *)&local_120,L"100%");
    }
    else {
      ::FString::PrintfImpl((FString *)&local_120,L"%.2f%%");
    }
    FormatNumber<__int64>((FString *)&local_110,(this->Counters).JobsCompleted);
    FormatNumber<__int64>((FString *)&local_158,(this->Counters).JobsAssigned);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    if (local_110.Object != (FCulture *)0x0) {
      FMemory::Free(local_110.Object);
    }
    if (local_120.Object != (FCulture *)0x0) {
      FMemory::Free(local_120.Object);
    }
  }
  if ((0.0 < (this->Counters).TimesLocalWorkersWereIdle) && (3 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  if ((0 < (this->Counters).JobsAssigned) && (3 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  if (((0 < (this->Counters).JobsCompleted) && (3 < (byte)LogShaderCompilers._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
     3 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  if ((this->Counters).NumAccumulatedShaderCodes != 0) {
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsMemory((FText *)local_148,(this->Counters).AccumulatedShaderCodeSize,
                              (FNumberFormattingOptions *)0x0,&local_158,IEC);
    pFVar16 = FText::ToString(pFVar15);
    local_120.Object = (FCulture *)0x0;
    iVar21 = (pFVar16->Data).ArrayNum;
    pFVar7 = (pFVar16->Data).AllocatorInstance.Data;
    local_120.SharedReferenceCount.ReferenceController._0_4_ = iVar21;
    if (iVar21 == 0) {
      local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar21,0,(ForAnyElementType *)&local_120,iVar21,
                 (int *)((longlong)&local_120.SharedReferenceCount.ReferenceController + 4));
      memcpy(local_120.Object,pFVar7,(longlong)iVar21 * 2);
    }
    if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    FormatNumber<unsigned___int64>((FString *)&local_110,(this->Counters).NumAccumulatedShaderCodes)
    ;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    dVar25 = (double)(this->Counters).AccumulatedShaderCodeSize /
             (double)(this->Counters).NumAccumulatedShaderCodes;
    lVar17 = 0;
    if ((__real_43e0000000000000 <= dVar25) &&
       (dVar25 = dVar25 - __real_43e0000000000000, dVar25 < __real_43e0000000000000)) {
      lVar17 = -0x8000000000000000;
    }
    pFVar15 = FText::AsMemory((FText *)local_148,(longlong)dVar25 + lVar17,
                              (FNumberFormattingOptions *)0x0,&local_158,IEC);
    pFVar16 = FText::ToString(pFVar15);
    local_100.TextData.Reference = (ITextData *)0x0;
    local_100.Flags = (pFVar16->Data).ArrayNum;
    lVar17 = (longlong)(int)local_100.Flags;
    pFVar7 = (pFVar16->Data).AllocatorInstance.Data;
    if (local_100.Flags == 0) {
      local_100._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Flags,0,(ForAnyElementType *)&local_100,local_100.Flags,
                 (int *)&local_100.field_0xc);
      memcpy(local_100.TextData.Reference,pFVar7,lVar17 * 2);
    }
    if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsMemory((FText *)local_148,(longlong)(this->Counters).MinShaderCodeSize,
                              (FNumberFormattingOptions *)0x0,&local_158,IEC);
    pFVar16 = FText::ToString(pFVar15);
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = (pFVar16->Data).ArrayNum;
    lVar17 = (longlong)local_a8;
    pFVar7 = (pFVar16->Data).AllocatorInstance.Data;
    if (local_a8 == 0) {
      local_a4[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8,0,&local_b0,local_a8,local_a4);
      memcpy(local_b0.Data,pFVar7,lVar17 * 2);
    }
    if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsMemory((FText *)local_148,(longlong)(this->Counters).MaxShaderCodeSize,
                              (FNumberFormattingOptions *)0x0,&local_158,IEC);
    pFVar16 = FText::ToString(pFVar15);
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = (pFVar16->Data).ArrayNum;
    lVar17 = (longlong)local_b8;
    pFVar7 = (pFVar16->Data).AllocatorInstance.Data;
    if (local_b8 == 0) {
      local_b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b8,0,&local_c0,local_b8,&local_b4);
      memcpy(local_c0.Data,pFVar7,lVar17 * 2);
    }
    if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (3 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_100.TextData.Reference);
    }
    if (local_110.Object != (FCulture *)0x0) {
      FMemory::Free(local_110.Object);
    }
    if (local_120.Object != (FCulture *)0x0) {
      FMemory::Free(local_120.Object);
    }
  }
  if (3 < (byte)LogShaderCompilers._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  if ((0.0 < (this->Counters).AccumulatedTaskSubmitJobs) && (3 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  lVar17 = (this->Counters).LocalJobBatchesSeen;
  lVar8 = (this->Counters).DistributedJobBatchesSeen;
  if (lVar17 < 1) {
    if ((lVar8 < 1) || ((byte)LogShaderCompilers._0_1_ < 4)) goto LAB_14854f7b0;
    pFVar16 = FormatNumber<__int64>((FString *)local_148,lVar8);
    if ((pFVar16->Data).ArrayNum == 0) {
      pFVar20 = &::LOG_Static;
    }
    else {
      pFVar20 = &::LOG_Static;
    }
  }
  else {
    if (0 < lVar8) {
      if (3 < (byte)LogShaderCompilers._0_1_) {
        FormatNumber<__int64>((FString *)&local_110,lVar8);
        FormatNumber<__int64>((FString *)&local_158,(this->Counters).LocalJobBatchesSeen);
        FormatNumber<__int64>((FString *)local_148,lVar17 + lVar8);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
          FMemory::Free((void *)local_148._0_8_);
        }
        if (local_158.Object != (FCulture *)0x0) {
          FMemory::Free(local_158.Object);
        }
        if (local_110.Object != (FCulture *)0x0) {
          FMemory::Free(local_110.Object);
        }
      }
      goto LAB_14854f7b0;
    }
    if ((byte)LogShaderCompilers._0_1_ < 4) goto LAB_14854f7b0;
    FormatNumber<__int64>((FString *)local_148,lVar17);
    pFVar20 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar20,(FLogCategoryBase *)&LogShaderCompilers);
  if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
LAB_14854f7b0:
  iVar21 = 0;
  uVar22 = 0;
  if ((0.0 < dVar24) && (3 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  if (*(int *)&(this->ShaderTimings).field_0x8 != *(int *)&(this->ShaderTimings).field_0x34) {
    pTVar2 = &this->ShaderTimings;
    iVar4 = *(int *)&(this->ShaderTimings).field_0x28;
    puVar1 = &(this->ShaderTimings).field_0x10;
    local_res10 = 1;
    dVar11 = 0.0;
    dVar10 = 0.0;
    dVar12 = 0.0;
    dVar25 = 0.0;
    uStack_e4 = 1;
    uStack_e8 = uVar22;
    local_d0 = uVar22;
    iStack_d4 = iVar21;
    if (iVar4 != 0) {
      puVar23 = *(uint **)&(this->ShaderTimings).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uStack_e4 = *puVar23;
      while (uStack_e4 == 0) {
        lVar17 = (longlong)(int)uStack_e8;
        local_d0 = local_d0 + 0x20;
        uStack_e8 = uStack_e8 + 1;
        uStack_e4 = 1;
        iStack_d4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_e8)
        goto LAB_14854f88a;
        uStack_e4 = puVar23[lVar17 + 1];
      }
      uStack_e4 = -uStack_e4 & uStack_e4;
      uVar3 = (ulonglong)uStack_e4 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iStack_d4 = (local_d0 - 1) + (int)lVar17;
      if (iVar4 < iStack_d4) {
        iStack_d4 = iVar4;
      }
    }
LAB_14854f88a:
    uStack_d8 = 0xffffffff;
    iStack_cc = uStack_130._4_4_;
    uStack_130._0_4_ = 0xffffffff;
    local_128 = CONCAT44(uStack_130._4_4_,local_d0);
    local_148._0_8_ = pTVar2;
    local_138 = puVar1;
    local_f0 = pTVar2;
    local_e0 = puVar1;
    local_148._8_4_ = uStack_e8;
    uStack_13c = uStack_e4;
    uStack_130._4_4_ = iStack_d4;
    if (iStack_d4 < iVar4) {
      do {
        uStack_130._0_4_ = (uint)uStack_130 & ~uStack_13c;
        dVar10 = dVar11 + (double)*(float *)((longlong)*(ITextData *)local_148._0_8_ + 0x18 +
                                            (longlong)uStack_130._4_4_ * 0x30);
        dVar25 = dVar12 + (double)*(float *)((longlong)*(ITextData *)local_148._0_8_ + 0x1c +
                                            (longlong)uStack_130._4_4_ * 0x30);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_148 + 8));
        dVar11 = dVar10;
        dVar12 = dVar25;
      } while (uStack_130._4_4_ < *(int *)(local_138 + 0x18));
    }
    if (3 < (byte)LogShaderCompilers._0_1_) {
      FormatNumber<double>((FString *)local_148,dVar10);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
        FMemory::Free((void *)local_148._0_8_);
      }
      if (3 < (byte)LogShaderCompilers._0_1_) {
        FormatNumber<double>((FString *)local_148,dVar25);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
          FMemory::Free((void *)local_148._0_8_);
        }
        if (3 < (byte)LogShaderCompilers._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
      }
    }
    if (((this->Counters).MaxRemoteAgents != 0) && (3 < (byte)LogShaderCompilers._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    if (0.0 < dVar24) {
      if ((this->Counters).DistributedJobBatchesSeen == 0) {
        if (3 < (byte)LogShaderCompilers._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
      }
      else if (3 < (byte)LogShaderCompilers._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      }
    }
    local_res20.Predicate.Predicate =
         (TDereferenceWrapper<FShaderTimings,_public:_void___cdecl_FShaderCompilerStats::WriteStatSummary(void)_::_405_::<lambda_1>_>
          )local_res8;
    TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>::FValueComparisonClass<_FShaderCompilerStats::WriteStatSummary_::__l405::<lambda_1>_>_>
              ((TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
                *)pTVar2,&local_res20);
    iVar14 = *(int *)&(this->ShaderTimings).field_0x8 - *(int *)&(this->ShaderTimings).field_0x34;
    iVar4 = GMaxShaderStatsToLog;
    if (iVar14 < GMaxShaderStatsToLog) {
      iVar4 = iVar14;
    }
    if (3 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    iVar14 = *(int *)&(this->ShaderTimings).field_0x28;
    uStack_e8 = uVar22;
    local_d0 = uVar22;
    iStack_d4 = iVar21;
    uStack_e4 = 1;
    if (iVar14 != 0) {
      puVar23 = *(uint **)&(this->ShaderTimings).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar5 = *puVar23;
      while (uVar5 == 0) {
        lVar17 = (longlong)(int)uStack_e8;
        local_d0 = local_d0 + 0x20;
        uStack_e8 = uStack_e8 + 1;
        iStack_d4 = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_e8)
        goto LAB_14854fc7d;
        uVar5 = puVar23[lVar17 + 1];
      }
      uStack_e4 = -uVar5 & uVar5;
      uVar3 = (ulonglong)uStack_e4 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iStack_d4 = (local_d0 - 1) + (int)lVar17;
      if (iVar14 < iStack_d4) {
        iStack_d4 = iVar14;
      }
    }
LAB_14854fc7d:
    pTVar2 = &this->ShaderTimings;
    uStack_13c = uStack_e4;
    local_148._8_4_ = uStack_e8;
    uStack_d8 = 0xffffffff;
    uStack_130._0_4_ = 0xffffffff;
    iStack_cc = uStack_130._4_4_;
    local_128 = CONCAT44(uStack_130._4_4_,local_d0);
    local_148._0_8_ = pTVar2;
    local_138 = puVar1;
    local_f0 = pTVar2;
    local_e0 = puVar1;
    iVar14 = iVar21;
    uStack_130._4_4_ = iStack_d4;
    if (iStack_d4 < *(int *)&(this->ShaderTimings).field_0x28) {
      do {
        if (3 < (byte)LogShaderCompilers._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
        iVar14 = iVar14 + 1;
        if (iVar4 <= iVar14) break;
        uStack_130._0_4_ = (uint)uStack_130 & ~uStack_13c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_148 + 8));
      } while (uStack_130._4_4_ < *(int *)(local_138 + 0x18));
    }
    if (GDumpShaderTimeStats != false) {
      DumpShaderTimingsToCSVFile(L"ShaderTimings.SortedByAverageTime.csv",pTVar2);
    }
    local_res20.Predicate.Predicate =
         (TDereferenceWrapper<FShaderTimings,_public:_void___cdecl_FShaderCompilerStats::WriteStatSummary(void)_::_405_::<lambda_1>_>
          )local_res8;
    TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>::FValueComparisonClass<_FShaderCompilerStats::WriteStatSummary_::__l405::<lambda_2>_>_>
              ((TSet<TTuple<FString,FShaderTimings>,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>,FDefaultSetAllocator>
                *)pTVar2,
               (FValueComparisonClass<_public:_void___cdecl_FShaderCompilerStats::WriteStatSummary(void)_::_405_::<lambda_2>_>
                *)&local_res20);
    if (3 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    iVar14 = *(int *)&(this->ShaderTimings).field_0x28;
    local_d0 = uVar22;
    iStack_d4 = iVar21;
    if (iVar14 == 0) {
LAB_14854fe3d:
      uStack_e4 = (uint)local_res10;
    }
    else {
      puVar23 = *(uint **)&(this->ShaderTimings).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uStack_e4 = *puVar23;
      while (uStack_e4 == 0) {
        lVar17 = (longlong)(int)uVar22;
        local_d0 = local_d0 + 0x20;
        uVar22 = uVar22 + 1;
        iStack_d4 = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
        goto LAB_14854fe3d;
        uStack_e4 = puVar23[lVar17 + 1];
      }
      uStack_e4 = -uStack_e4 & uStack_e4;
      uVar3 = (ulonglong)uStack_e4 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iStack_d4 = (int)lVar17 + -1 + local_d0;
      if (iVar14 < iStack_d4) {
        iStack_d4 = iVar14;
      }
    }
    pTVar2 = &this->ShaderTimings;
    uStack_13c = uStack_e4;
    local_148._8_4_ = uVar22;
    uStack_d8 = 0xffffffff;
    iStack_cc = uStack_130._4_4_;
    local_128 = CONCAT44(uStack_130._4_4_,local_d0);
    local_148._0_8_ = pTVar2;
    local_138 = puVar1;
    uStack_130 = CONCAT44(iStack_d4,0xffffffff);
    local_f0 = pTVar2;
    uStack_e8 = uVar22;
    local_e0 = puVar1;
    if (iStack_d4 < *(int *)&(this->ShaderTimings).field_0x28) {
      do {
        if (3 < (byte)LogShaderCompilers._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
        iVar21 = iVar21 + 1;
        if (iVar4 <= iVar21) break;
        uStack_130 = CONCAT44(uStack_130._4_4_,(uint)uStack_130 & ~uStack_13c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_148 + 8));
        bVar9 = uStack_130._4_4_ < *(int *)(local_138 + 0x18);
      } while (bVar9);
    }
    if (GDumpShaderTimeStats != false) {
      DumpShaderTimingsToCSVFile(L"ShaderTimings.SortedByTotalTime.csv",pTVar2);
    }
  }
  if (((this->WorkerDiagnostics).ArrayNum != 0) && (GShaderCompilerDumpWorkerDiagnostics != false))
  {
    DumpShaderWorkerDiagnosticsToCSVFile
              (L"ShaderCompileWorker.Diagnostics.csv",&this->WorkerDiagnostics);
  }
  if (3 < (byte)LogShaderCompilers._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  if (((3 < (byte)LogShaderCompilers._0_1_) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
      3 < (byte)LogShaderCompilers._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
     3 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  dVar24 = __real_3eb0c6f7a0b5ed8d;
  if (3 < (byte)LogShaderCompilers._0_1_) {
    dVar25 = (this->MaterialCounters).MaterialTranslateTotalTimeSec;
    if (dVar25 <= __real_3eb0c6f7a0b5ed8d) {
      dVar25 = __real_3eb0c6f7a0b5ed8d;
    }
    round(((this->MaterialCounters).MaterialTranslateTranslationOnlyTimeSec / dVar25) * dVar13);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    if (3 < (byte)LogShaderCompilers._0_1_) {
      dVar25 = (this->MaterialCounters).MaterialTranslateTotalTimeSec;
      if (dVar25 <= dVar24) {
        dVar25 = dVar24;
      }
      round(((this->MaterialCounters).MaterialTranslateSerializationOnlyTimeSec / dVar25) * dVar13);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
  }
  iVar21 = (this->MaterialCounters).MaterialTranslateCalls;
  if (iVar21 != 0) {
    roundf(((float)(this->MaterialCounters).MaterialCacheHits / (float)iVar21) * __real_42c80000);
  }
  if ((3 < (byte)LogShaderCompilers._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
     3 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// WriteStats @ 148550230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderCompilerStats::WriteStats(FShaderCompilerStats *this,FOutputDevice *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  undefined1 *puVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FDateTime this_00;
  FString *pFVar11;
  size_t sVar12;
  IFileManager *pIVar13;
  FArchive *pFVar14;
  FEngineVersion *this_01;
  ulonglong uVar15;
  FString *pFVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  int iVar21;
  undefined1 *puVar22;
  uint uVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  longlong *plVar25;
  FString *pFVar26;
  uint uVar27;
  undefined1 auStackY_328 [32];
  undefined1 local_2d8;
  undefined1 local_2d7 [7];
  FDiagnosticTableWriterCSV local_2d0;
  FString local_2b8;
  FString local_2a8;
  FString *local_298;
  ulonglong local_290;
  longlong local_288;
  FString local_280;
  FString local_270;
  FString local_260;
  int local_250;
  int local_24c;
  FShaderCompilerStats *local_248;
  FArchive *local_240;
  FOutputDevice *local_238;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  longlong *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  TStringView<wchar_t> local_170;
  FScriptContainerElement *local_160;
  int local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_118 [2];
  undefined4 local_ec;
  TStringView<wchar_t> local_e8;
  wchar_t *local_d8;
  undefined4 local_d0;
  FScriptContainerElement *local_c8;
  int local_c0;
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  undefined4 local_a0;
  FScriptContainerElement *local_98;
  int local_90;
  FScriptContainerElement *local_88;
  int local_80;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  FScriptContainerElement *local_58;
  undefined4 local_50;
  FScriptContainerElement *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_248 = this;
  local_238 = param_1;
  FlushRenderingCommands();
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,local_118);
  ::FString::PrintfImpl(&local_230,L"MaterialStats/Stats-%s.csv");
  pFVar11 = FPaths::ProjectSavedDir();
  if ((pFVar11->Data).ArrayNum == 0) {
    local_170.DataPtr = L"";
  }
  else {
    local_170.DataPtr = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  uVar27 = 0;
  local_170.Size = 0;
  if ((FScriptContainerElement *)local_170.DataPtr != (FScriptContainerElement *)0x0) {
    sVar12 = wcslen(local_170.DataPtr);
    local_170.Size = (int)sVar12;
  }
  local_160 = local_230.Data.AllocatorInstance.Data;
  local_158 = local_230.Data.ArrayNum + -1;
  if (local_230.Data.ArrayNum == 0) {
    local_158 = 0;
  }
  FPaths::CombineInternal(&local_270,&local_170,2);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_118[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118[0].Data.AllocatorInstance.Data);
  }
  pIVar13 = IFileManager::Get();
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_270.Data.ArrayNum != 0) {
    FVar18.Data = local_270.Data.AllocatorInstance.Data;
  }
  pFVar14 = (FArchive *)(**(code **)((longlong)*pIVar13 + 0x20))(pIVar13,FVar18.Data,0);
  local_2d0.CurrentRow.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.CurrentRow.Data.ArrayNum = 0;
  local_2d0.CurrentRow.Data.ArrayMax = 0;
  local_2d0.OutputStream = pFVar14;
  local_240 = pFVar14;
  FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"Path");
  FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"Platform");
  FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"Compiled");
  FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"Cooked");
  FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"Permutations");
  FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"Compiletime");
  FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"CompiledDouble");
  FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"CookedDouble");
  if ((local_2d0.OutputStream == (FArchive *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                         ,0x47,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FArchive::LogfImpl(local_2d0.OutputStream,L"%s");
  ::FString::Empty(&local_2d0.CurrentRow);
  if (0 < *(int *)&(this->CompileStats).field_0x8) {
    local_288 = 0;
    do {
      if ((-1 < (int)uVar27) && ((int)uVar27 < *(int *)&(this->CompileStats).field_0x28)) {
        if ((*(int *)&(this->CompileStats).field_0x28 <= (int)uVar27) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined1 **)&(this->CompileStats).field_0x20;
        puVar22 = &(this->CompileStats).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar22 = puVar3;
        }
        uVar7 = uVar27;
        if ((int)uVar27 < 0) {
          uVar7 = uVar27 + 0x1f;
        }
        if ((*(uint *)(puVar22 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar27 & 0x1f) & 1) != 0) {
          iStack_1c8 = 0;
          plVar25 = (longlong *)(*(longlong *)&this->CompileStats + local_288);
          uStack_1c4 = 1;
          iVar21 = (int)plVar25[5];
          pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar25 + 2);
          iStack_1b4 = iStack_1c8;
          local_1b0 = iStack_1c8;
          if (iVar21 != 0) {
            pTVar24 = pTVar1;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
            }
            uVar7 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
            local_1b0 = 0;
            iStack_1c8 = 0;
            while (uVar7 == 0) {
              lVar17 = (longlong)iStack_1c8;
              local_1b0 = local_1b0 + 0x20;
              iStack_1c8 = iStack_1c8 + 1;
              iStack_1b4 = iVar21;
              if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c8)
              goto LAB_14855057d;
              uVar7 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar17 * 4 + 4);
            }
            uStack_1c4 = -uVar7 & uVar7;
            uVar15 = (ulonglong)uStack_1c4 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_250 = (int)lVar17;
            iStack_1b4 = local_1b0 + -1 + local_250;
            if (iVar21 < iStack_1b4) {
              iStack_1b4 = iVar21;
            }
          }
LAB_14855057d:
          uVar7 = *(uint *)(plVar25 + 5);
          uStack_1ac = local_ec;
          uVar23 = uVar7 & 0xffffffe0;
          iStack_1a8 = (int)plVar25[1] - *(int *)((longlong)plVar25 + 0x34);
          TStack_198._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
          uStack_1b8 = 0xffffffff;
          TStack_198.CurrentBitIndex = iStack_1b4;
          TStack_198.UnvisitedBitMask = 0xffffffff;
          iVar21 = (int)uVar7 >> 5;
          TStack_198._28_4_ = local_ec;
          TStack_198.BaseBitIndex = local_1b0;
          uStack_178 = CONCAT44(uStack_1a4,iStack_1a8);
          local_1d0 = plVar25;
          local_1c0 = pTVar1;
          local_1a0 = plVar25;
          TStack_198.Array = pTVar1;
          if (((int)uVar7 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(uint *)(plVar25 + 5);
          if (uVar7 != uVar2) {
            pTVar24 = pTVar1;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
            }
            uVar7 = -1 << ((byte)uVar7 & 0x1f) &
                    *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
            while (uVar7 == 0) {
              lVar17 = (longlong)iVar21;
              uVar23 = uVar23 + 0x20;
              iVar21 = iVar21 + 1;
              uVar7 = uVar2;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
              goto LAB_148550690;
              uVar7 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar17 * 4 + 4);
            }
            uVar15 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_24c = (int)lVar17;
            uVar7 = (uVar23 - 1) + local_24c;
            if ((int)uVar2 < (int)uVar7) {
              uVar7 = uVar2;
            }
          }
LAB_148550690:
          while( true ) {
            plVar5 = local_1a0;
            if ((int)local_1a0[1] - *(int *)((longlong)local_1a0 + 0x34) != (int)uStack_178) {
              local_2d8 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
            }
            if (((TStack_198.CurrentBitIndex == uVar7) && (TStack_198.Array == pTVar1)) &&
               (this = local_248, plVar5 == plVar25)) break;
            lVar17 = *plVar5;
            if (*(int *)((longlong)TStack_198.CurrentBitIndex * 0x40 + 8 + lVar17) == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = *(wchar_t **)((longlong)TStack_198.CurrentBitIndex * 0x40 + lVar17);
            }
            FDiagnosticTableWriterCSV::AddColumn(&local_2d0,pwVar19);
            FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"%u");
            FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"%u");
            FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"%u");
            FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"%u");
            FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"%f");
            FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"%u");
            FDiagnosticTableWriterCSV::AddColumn(&local_2d0,L"%u");
            if ((local_2d0.OutputStream == (FArchive *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OutputStream",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                                   ,0x47,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FArchive::LogfImpl(local_2d0.OutputStream,L"%s");
            ::FString::Empty(&local_2d0.CurrentRow);
            if ((GLogShaderCompilerStats != 0) && (4 < (byte)LogShaderCompilers._0_1_)) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
            }
            TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
          }
        }
      }
      local_288 = local_288 + 0x50;
      uVar27 = uVar27 + 1;
      pFVar14 = local_240;
      param_1 = local_238;
    } while ((int)uVar27 < *(int *)&(this->CompileStats).field_0x8);
  }
  (**(code **)(*(longlong *)pFVar14 + 0x210))(pFVar14);
  FPaths::ConvertRelativePathToFull(&local_260,&local_270);
  if (param_1 == (FOutputDevice *)0x0) {
    if (4 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
  }
  else {
    FOutputDevice::LogfImpl(param_1,L"Wrote shader compile stats to file \'%s\'.");
  }
  pwVar19 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar19,L"mirrorshaderstats");
  if (bVar6) {
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = 0;
    local_2b8.Data.ArrayMax = 0;
    FConfigCacheIni::GetString
              (GConfig,L"/Script/Engine.ShaderCompilerStats",L"MaterialStatsLocation",&local_2b8,
               &GGameIni);
    pwVar19 = FCommandLine::Get();
    FParse::Value(pwVar19,L"MaterialStatsMirror=",&local_2b8,true,(wchar_t **)0x0);
    if (1 < local_2b8.Data.ArrayNum) {
      ::FString::FString(&local_280,L"Default");
      pwVar19 = FCommandLine::Get();
      FParse::Value(pwVar19,L"target=",&local_280,true,(wchar_t **)0x0);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_280.Data.ArrayNum != 0) {
        FVar18.Data = local_280.Data.AllocatorInstance.Data;
      }
      iVar21 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"Default");
      if (iVar21 == 0) {
        pwVar19 = FCommandLine::Get();
        FParse::Value(pwVar19,L"targetplatform=",&local_280,true,(wchar_t **)0x0);
      }
      this_01 = FEngineVersion::Current();
      FEngineVersionBase::GetChangelist((FEngineVersionBase *)this_01);
      ::FString::PrintfImpl(&local_220,L"Stats-Latest-%d(%s).csv");
      pFVar11 = FApp::GetBranchName(&local_150);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      iVar21 = 0;
      local_b8.DataPtr = L"";
      if (local_2b8.Data.ArrayNum != 0) {
        local_b8.DataPtr = (wchar_t *)local_2b8.Data.AllocatorInstance.Data;
      }
      local_b8.Size = iVar21;
      if ((FScriptContainerElement *)local_b8.DataPtr != (FScriptContainerElement *)0x0) {
        sVar12 = wcslen(local_b8.DataPtr);
        local_b8.Size = (int)sVar12;
      }
      local_a8 = GInternalProjectName;
      sVar12 = wcslen(GInternalProjectName);
      local_a0 = (undefined4)sVar12;
      local_90 = iVar21;
      local_98 = (FScriptContainerElement *)pwVar19;
      if ((FScriptContainerElement *)pwVar19 != (FScriptContainerElement *)0x0) {
        sVar12 = wcslen(pwVar19);
        local_90 = (int)sVar12;
      }
      local_88 = local_220.Data.AllocatorInstance.Data;
      local_80 = local_220.Data.ArrayNum + -1;
      if (local_220.Data.ArrayNum == 0) {
        local_80 = iVar21;
      }
      FPaths::CombineInternal(&local_1e0,&local_b8,4);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      local_298 = (FString *)0x0;
      local_290 = 0;
      pIVar13 = IFileManager::Get();
      pcVar4 = *(code **)((longlong)*pIVar13 + 0x78);
      pFVar11 = FApp::GetBranchName(&local_140);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      local_e8.DataPtr = L"";
      if (local_2b8.Data.ArrayNum != 0) {
        local_e8.DataPtr = (wchar_t *)local_2b8.Data.AllocatorInstance.Data;
      }
      local_e8.Size = iVar21;
      if ((FScriptContainerElement *)local_e8.DataPtr != (FScriptContainerElement *)0x0) {
        sVar12 = wcslen(local_e8.DataPtr);
        local_e8.Size = (int)sVar12;
      }
      local_d8 = GInternalProjectName;
      sVar12 = wcslen(GInternalProjectName);
      local_d0 = (undefined4)sVar12;
      local_c8 = (FScriptContainerElement *)pwVar19;
      if ((FScriptContainerElement *)pwVar19 != (FScriptContainerElement *)0x0) {
        sVar12 = wcslen(pwVar19);
        iVar21 = (int)sVar12;
      }
      local_c0 = iVar21;
      FPaths::CombineInternal(&local_210,&local_e8,3);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_210.Data.ArrayNum != 0) {
        FVar18.Data = local_210.Data.AllocatorInstance.Data;
      }
      (*pcVar4)(pIVar13,&local_298,FVar18.Data);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      iVar21 = (int)local_290;
      uVar15 = (ulonglong)(int)local_290;
      pFVar26 = local_298 + uVar15;
      pFVar11 = local_298;
      while( true ) {
        if ((int)uVar15 != iVar21) {
          local_2d7[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2d7);
        }
        if (pFVar11 == pFVar26) break;
        local_2a8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        lVar17 = (longlong)local_2a8.Data.ArrayNum;
        _Src = (pFVar11->Data).AllocatorInstance.Data;
        local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_2a8.Data.ArrayNum == 0) {
          local_2a8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_2a8.Data.ArrayNum,0,(ForAnyElementType *)&local_2a8,
                     local_2a8.Data.ArrayNum,&local_2a8.Data.ArrayMax);
          memcpy(local_2a8.Data.AllocatorInstance.Data,_Src,lVar17 * 2);
        }
        ::FString::PrintfImpl(&local_200,L"(%s)");
        if (local_200.Data.ArrayNum == 0) {
          pwVar19 = L"";
LAB_148550cb3:
          sVar12 = wcslen(pwVar19);
          iVar8 = ::FString::Find(&local_2a8,pwVar19,(int)sVar12,IgnoreCase,FromStart,-1);
        }
        else {
          pwVar19 = (wchar_t *)local_200.Data.AllocatorInstance.Data;
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_148550cb3;
          iVar8 = -1;
        }
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        if (iVar8 != -1) {
          pIVar13 = IFileManager::Get();
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_2a8.Data.ArrayNum != 0) {
            FVar18.Data = local_2a8.Data.AllocatorInstance.Data;
          }
          pcVar4 = *(code **)((longlong)*pIVar13 + 0x38);
          pFVar16 = FApp::GetBranchName(&local_130);
          if ((pFVar16->Data).ArrayNum == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
          local_78.DataPtr = L"";
          if (local_2b8.Data.ArrayNum != 0) {
            local_78.DataPtr = (wchar_t *)local_2b8.Data.AllocatorInstance.Data;
          }
          iVar8 = 0;
          if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
            sVar12 = wcslen(local_78.DataPtr);
            iVar8 = (int)sVar12;
          }
          local_68 = GInternalProjectName;
          local_78.Size = iVar8;
          sVar12 = wcslen(GInternalProjectName);
          local_60 = (undefined4)sVar12;
          uVar9 = 0;
          local_58 = (FScriptContainerElement *)pwVar19;
          if ((FScriptContainerElement *)pwVar19 != (FScriptContainerElement *)0x0) {
            sVar12 = wcslen(pwVar19);
            uVar9 = (undefined4)sVar12;
          }
          uVar10 = 0;
          local_50 = uVar9;
          local_48 = FVar18.Data;
          if (FVar18.Data != (FScriptContainerElement *)0x0) {
            sVar12 = wcslen((wchar_t *)FVar18.Data);
            uVar10 = (undefined4)sVar12;
          }
          local_40 = uVar10;
          FPaths::CombineInternal(&local_1f0,&local_78,4);
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_1f0.Data.ArrayNum != 0) {
            FVar18.Data = local_1f0.Data.AllocatorInstance.Data;
          }
          (*pcVar4)(pIVar13,FVar18.Data,0);
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        uVar15 = local_290 & 0xffffffff;
        pFVar11 = pFVar11 + 1;
      }
      pIVar13 = IFileManager::Get();
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_270.Data.ArrayNum != 0) {
        FVar18.Data = local_270.Data.AllocatorInstance.Data;
      }
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_1e0.Data.ArrayNum != 0) {
        FVar20.Data = local_1e0.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar13 + 0x40))(pIVar13,FVar20.Data,FVar18.Data,1);
      DestructItems<FString,int>(local_298,(int)local_290);
      if (local_298 != (FString *)0x0) {
        FMemory::Free(local_298);
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
    }
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  iVar21 = local_2d0.CurrentRow.Data.ArrayNum + -1;
  if (local_2d0.CurrentRow.Data.ArrayNum == 0) {
    iVar21 = 0;
  }
  if ((iVar21 != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentRow.Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                         ,0x25,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_2d0.OutputStream != (FArchive *)0x0) {
    (**(code **)(*(longlong *)local_2d0.OutputStream + 0x210))();
    local_2d0.OutputStream = (FArchive *)0x0;
  }
  if (local_2d0.CurrentRow.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.CurrentRow.Data.AllocatorInstance.Data);
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteToCompactBinary @ 148550f90

void __thiscall
FShaderCompilerStats::WriteToCompactBinary(FShaderCompilerStats *this,FCbWriter *param_1)

{
  ulonglong uVar1;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *pTVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *pTVar7;
  bool bVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FString *pFVar14;
  ulong64 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 *puVar22;
  uint *puVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  ulong64 *puVar27;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_518;
  undefined1 local_517;
  undefined1 local_516;
  undefined1 local_515;
  uint local_514;
  ulonglong local_510;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *local_508;
  int iStack_500;
  uint uStack_4fc;
  TBitArray<FDefaultBitArrayAllocator> *local_4f8;
  undefined4 uStack_4f0;
  int iStack_4ec;
  int local_4e8;
  undefined4 uStack_4e4;
  int iStack_4e0;
  undefined4 uStack_4dc;
  longlong *local_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4d0;
  undefined8 local_4b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4a8;
  longlong *local_488;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_480;
  int local_460;
  int local_45c;
  int local_458;
  int local_454;
  int local_450;
  TBitArray<FDefaultBitArrayAllocator> *local_448;
  longlong *local_440;
  undefined1 local_438 [12];
  uint local_42c;
  longlong local_428;
  uint local_420;
  uint local_41c;
  longlong *local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_408;
  undefined8 uStack_3e8;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d8;
  undefined8 uStack_3b8;
  TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
  *local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  char *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  char *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  char *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  char *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  char *local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  char *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  char *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  char *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  char *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  char *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  char *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  char *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  char *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  char *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  char *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  char *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  char *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  char *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  char *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  char *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  TStringView<char8_t> local_238;
  TStringView<char8_t> local_228;
  TStringView<char8_t> local_218;
  TStringView<char8_t> local_208;
  TStringView<char8_t> local_1f8;
  TStringView<char8_t> local_1e8;
  TStringView<char8_t> local_1d8;
  TStringView<char8_t> local_1c8;
  TStringView<char8_t> local_1b8;
  TStringView<char8_t> local_1a8;
  TStringView<char8_t> local_198;
  TStringView<char8_t> local_188;
  TStringView<char8_t> local_178;
  TStringView<char8_t> local_168;
  TStringView<char8_t> local_158;
  TStringView<char8_t> local_148;
  TStringView<char8_t> local_138;
  TStringView<char8_t> local_128;
  TStringView<char8_t> local_118;
  TStringView<char8_t> local_108;
  FString local_f8;
  FShaderStats local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  undefined4 local_84;
  undefined4 local_64;
  undefined4 local_44;
  
  if (this == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uStack_370 = 8;
  local_378 = "Counters";
  local_178._12_4_ = uStack_36c;
  local_178.Size = 8;
  local_178.DataPtr = "Counters";
  FCbWriter::SetName(param_1,&local_178);
  FCbWriter::AddBinary(param_1,&this->Counters,0xe8);
  uStack_360 = 0x10;
  local_368 = "MaterialCounters";
  local_168._12_4_ = uStack_35c;
  local_168.Size = 0x10;
  local_168.DataPtr = "MaterialCounters";
  FCbWriter::SetName(param_1,&local_168);
  FCbWriter::AddBinary(param_1,&this->MaterialCounters,0x28);
  uStack_260 = 0x12;
  local_268 = "CompileStatIndices";
  local_158._12_4_ = uStack_25c;
  local_158.Size = 0x12;
  local_158.DataPtr = "CompileStatIndices";
  FCbWriter::SetName(param_1,&local_158);
  FCbWriter::BeginArray(param_1);
  TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
  ::TConstIterator::TConstIterator((TConstIterator *)local_438,&this->CompileStats);
  if ((int)local_41c < *(int *)(local_428 + 0x18)) {
    do {
      uVar12 = local_41c;
      if ((-1 < (int)local_41c) && ((int)local_41c < *(int *)&(this->CompileStats).field_0x28)) {
        if ((*(int *)&(this->CompileStats).field_0x28 <= (int)local_41c) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar26 = *(undefined1 **)&(this->CompileStats).field_0x20;
        puVar17 = &(this->CompileStats).field_0x10;
        if (puVar26 != (undefined1 *)0x0) {
          puVar17 = puVar26;
        }
        uVar11 = uVar12;
        if ((int)uVar12 < 0) {
          uVar11 = uVar12 + 0x1f;
        }
        if ((*(uint *)(puVar17 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
          FCbWriter::AddInteger(param_1,uVar12);
        }
      }
      local_420 = local_420 & ~local_42c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_438 + 8));
    } while ((int)local_41c < *(int *)(local_428 + 0x18));
  }
  FCbWriter::EndArray(param_1);
  uStack_280 = 0xc;
  local_288 = "CompileStats";
  local_148._12_4_ = uStack_27c;
  local_148.Size = 0xc;
  local_148.DataPtr = "CompileStats";
  FCbWriter::SetName(param_1,&local_148);
  FCbWriter::BeginArray(param_1);
  TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
  ::TConstIterator::TConstIterator((TConstIterator *)&local_488,&this->CompileStats);
  local_510 = CONCAT44(local_510._4_4_,1);
  if (local_480.CurrentBitIndex < (local_480.Array)->NumBits) {
    do {
      iVar13 = local_480.CurrentBitIndex;
      if ((-1 < local_480.CurrentBitIndex) &&
         (local_480.CurrentBitIndex < *(int *)&(this->CompileStats).field_0x28)) {
        if ((*(int *)&(this->CompileStats).field_0x28 <= local_480.CurrentBitIndex) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar26 = *(undefined1 **)&(this->CompileStats).field_0x20;
        puVar17 = &(this->CompileStats).field_0x10;
        if (puVar26 != (undefined1 *)0x0) {
          puVar17 = puVar26;
        }
        uVar12 = iVar13;
        if (iVar13 < 0) {
          uVar12 = iVar13 + 0x1f;
        }
        if ((*(uint *)(puVar17 + (longlong)((int)uVar12 >> 5) * 4) >> (iVar13 & 0x1fU) & 1) != 0) {
          FCbWriter::BeginObject(param_1);
          local_298 = "CompileStatsKeys";
          uStack_290 = 0x10;
          local_138._12_4_ = uStack_28c;
          local_138.Size = 0x10;
          local_138.DataPtr = "CompileStatsKeys";
          FCbWriter::SetName(param_1,&local_138);
          FCbWriter::BeginArray(param_1);
          plVar25 = local_488;
          local_4a8._padding_._0_4_ = 0;
          local_4a8._padding_._4_4_ = (undefined4)local_510;
          local_4a8.UnvisitedBitMask = 0xffffffff;
          local_4a8.CurrentBitIndex = 0;
          local_4a8.BaseBitIndex = 0;
          plVar18 = (longlong *)((longlong)iVar13 * 0x50 + *local_488);
          pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar18 + 2);
          local_4a8.Array = pTVar24;
          if ((int)plVar18[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4a8);
          }
          TStack_4d0._padding_ = CONCAT44(local_4a8._padding_._4_4_,(undefined4)local_4a8._padding_)
          ;
          TStack_4d0.CurrentBitIndex = local_4a8.CurrentBitIndex;
          TStack_4d0.UnvisitedBitMask = local_4a8.UnvisitedBitMask;
          TStack_4d0._28_4_ = local_4a8._28_4_;
          TStack_4d0.BaseBitIndex = local_4a8.BaseBitIndex;
          TStack_4d0.Array = local_4a8.Array;
          local_4b0 = CONCAT44(local_4b0._4_4_,(int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34))
          ;
          TStack_408.Array = local_4a8.Array;
          uStack_3e8 = local_4b0;
          local_4d8 = plVar18;
          local_410 = plVar18;
          TStack_408._padding_ = TStack_4d0._padding_;
          TStack_408._16_8_ = TStack_4d0._16_8_;
          TStack_408._24_8_ = TStack_4d0._24_8_;
          pTVar9 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                   TConstSetBitIterator<FDefaultBitArrayAllocator>
                             (&local_c0,pTVar24,(int)plVar18[5]);
          TStack_4d0._padding_ = pTVar9->_padding_;
          pTVar24 = pTVar9->Array;
          uVar5._0_4_ = pTVar9->UnvisitedBitMask;
          uVar5._4_4_ = pTVar9->CurrentBitIndex;
          TStack_4d0.BaseBitIndex = pTVar9->BaseBitIndex;
          TStack_4d0._28_4_ = *(undefined4 *)&pTVar9->field_0x1c;
          TStack_4d0.Array = pTVar24;
          TStack_4d0._16_8_ = uVar5;
          while( true ) {
            plVar6 = local_410;
            if ((int)local_410[1] - *(int *)((longlong)local_410 + 0x34) != (int)uStack_3e8) {
              local_res18[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (((TStack_408.CurrentBitIndex == uVar5._4_4_) && (TStack_408.Array == pTVar24)) &&
               (plVar6 == plVar18)) break;
            pFVar14 = (FString *)(*plVar6 + (longlong)TStack_408.CurrentBitIndex * 0x40);
            ::FString::FString(&local_f8,pFVar14);
            FShaderStats::FShaderStats(&local_e8,(FShaderStats *)(pFVar14 + 1));
            FCbWriter::operator<<(param_1,&local_f8);
            if (local_e8.PermutationCompilations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.PermutationCompilations.AllocatorInstance.Data);
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            TStack_408.UnvisitedBitMask = TStack_408.UnvisitedBitMask & ~TStack_408._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_408);
          }
          FCbWriter::EndArray(param_1);
          uStack_2a0 = 0x12;
          local_2a8 = "CompileStatsValues";
          local_128._12_4_ = uStack_29c;
          local_128.Size = 0x12;
          local_128.DataPtr = "CompileStatsValues";
          FCbWriter::SetName(param_1,&local_128);
          FCbWriter::BeginArray(param_1);
          local_4e8 = 0;
          plVar25 = (longlong *)((longlong)iVar13 * 0x50 + *plVar25);
          iStack_500 = 0;
          iVar13 = (int)plVar25[5];
          local_4f8 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar25 + 2);
          uStack_4fc = (uint)local_510;
          iStack_4ec = 0;
          if (iVar13 != 0) {
            pTVar24 = local_4f8;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
            }
            uVar12 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
            while (uVar12 == 0) {
              lVar10 = (longlong)iStack_500;
              local_4e8 = local_4e8 + 0x20;
              iStack_500 = iStack_500 + 1;
              iStack_4ec = iVar13;
              if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_500)
              goto LAB_1485514df;
              uVar12 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar10 * 4 + 4);
            }
            uStack_4fc = -uVar12 & uVar12;
            uVar1 = (ulonglong)uStack_4fc * 2 + 1;
            lVar10 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            local_460 = (int)lVar10;
            iStack_4ec = local_4e8 + -1 + local_460;
            if (iVar13 < iStack_4ec) {
              iStack_4ec = iVar13;
            }
          }
LAB_1485514df:
          uVar12 = *(uint *)(plVar25 + 5);
          pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar25 + 2);
          uStack_4e4 = local_84;
          iStack_4e0 = (int)plVar25[1] - *(int *)((longlong)plVar25 + 0x34);
          uVar11 = uVar12 & 0xffffffe0;
          TStack_4d0._padding_ = CONCAT44(uStack_4fc,iStack_500);
          uStack_4f0 = 0xffffffff;
          TStack_4d0.CurrentBitIndex = iStack_4ec;
          TStack_4d0.UnvisitedBitMask = 0xffffffff;
          iVar13 = (int)uVar12 >> 5;
          TStack_4d0._28_4_ = local_84;
          TStack_4d0.BaseBitIndex = local_4e8;
          local_4b0 = CONCAT44(uStack_4dc,iStack_4e0);
          local_514 = uVar12;
          local_508 = (TMap<FString,FShaderTimings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderTimings,0>_>
                       *)plVar25;
          local_4d8 = plVar25;
          TStack_4d0.Array = local_4f8;
          local_448 = pTVar24;
          local_440 = plVar25;
          if (((int)uVar12 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(uint *)(plVar25 + 5);
          if (uVar12 != uVar3) {
            pTVar21 = pTVar24;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
            }
            uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                     *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
            while (uVar12 == 0) {
              lVar10 = (longlong)iVar13;
              uVar11 = uVar11 + 0x20;
              iVar13 = iVar13 + 1;
              uVar12 = uVar3;
              local_514 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
              goto LAB_148551610;
              uVar12 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar10 * 4 + 4);
            }
            uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
            lVar10 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            local_45c = (int)lVar10;
            uVar12 = local_45c + -1 + uVar11;
            local_514 = uVar12;
            if ((int)uVar3 < (int)uVar12) {
              uVar12 = uVar3;
              local_514 = uVar3;
            }
          }
LAB_148551610:
          while( true ) {
            plVar18 = local_4d8;
            if ((int)local_4d8[1] - *(int *)((longlong)local_4d8 + 0x34) != (int)local_4b0) {
              local_res20[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,FShaderStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if (((TStack_4d0.CurrentBitIndex == uVar12) && (TStack_4d0.Array == pTVar24)) &&
               (plVar18 == plVar25)) break;
            lVar10 = *plVar18;
            lVar19 = (longlong)TStack_4d0.CurrentBitIndex * 0x40;
            FCbWriter::BeginObject(param_1);
            uStack_2b0 = 8;
            local_2b8 = "Compiled";
            local_118._12_4_ = uStack_2ac;
            local_118.Size = 8;
            local_118.DataPtr = "Compiled";
            FCbWriter::SetNameOrAddString(param_1,&local_118);
            FCbWriter::AddInteger(param_1,*(uint *)(lVar19 + 0x20 + lVar10));
            uStack_240 = 0xe;
            local_248 = "CompiledDouble";
            local_108._12_4_ = uStack_23c;
            local_108.Size = 0xe;
            local_108.DataPtr = "CompiledDouble";
            FCbWriter::SetNameOrAddString(param_1,&local_108);
            FCbWriter::AddInteger(param_1,*(uint *)(lVar19 + 0x28 + lVar10));
            uStack_270 = 0xb;
            local_278 = "CompileTime";
            local_238._12_4_ = uStack_26c;
            local_238.Size = 0xb;
            local_238.DataPtr = "CompileTime";
            FCbWriter::SetNameOrAddString(param_1,&local_238);
            FCbWriter::AddFloat(param_1,*(float *)(lVar19 + 0x30 + lVar10));
            uStack_250 = 6;
            local_258 = "Cooked";
            local_228._12_4_ = uStack_24c;
            local_228.Size = 6;
            local_228.DataPtr = "Cooked";
            FCbWriter::SetNameOrAddString(param_1,&local_228);
            FCbWriter::AddInteger(param_1,*(uint *)(lVar19 + 0x24 + lVar10));
            uStack_350 = 0xc;
            local_358 = "CookedDouble";
            local_218._12_4_ = uStack_34c;
            local_218.Size = 0xc;
            local_218.DataPtr = "CookedDouble";
            FCbWriter::SetNameOrAddString(param_1,&local_218);
            FCbWriter::AddInteger(param_1,*(uint *)(lVar19 + 0x2c + lVar10));
            uStack_340 = 0x17;
            local_348 = "PermutationCompilations";
            local_208._12_4_ = uStack_33c;
            local_208.Size = 0x17;
            local_208.DataPtr = "PermutationCompilations";
            FCbWriter::SetName(param_1,&local_208);
            FCbWriter::BeginArray(param_1);
            iVar13 = *(int *)(lVar19 + 0x18 + lVar10);
            puVar15 = *(ulong64 **)(lVar19 + 0x10 + lVar10);
            puVar27 = puVar15 + (longlong)iVar13 * 4;
            while( true ) {
              if (*(int *)(lVar19 + 0x18 + lVar10) != iVar13) {
                local_518 = 0;
                `TCheckedPointerIterator<FShaderCompilerSinglePermutationStat_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_518);
              }
              if (puVar15 == puVar27) break;
              FCbWriter::BeginObject(param_1);
              local_338 = "Compiled";
              uStack_330 = 8;
              local_1f8._12_4_ = uStack_32c;
              local_1f8.Size = 8;
              local_1f8.DataPtr = "Compiled";
              FCbWriter::SetNameOrAddString(param_1,&local_1f8);
              FCbWriter::AddInteger(param_1,*(uint *)((longlong)puVar15 + 0xc));
              uStack_320 = 0xe;
              local_328 = "CompiledDouble";
              local_1e8._12_4_ = uStack_31c;
              local_1e8.Size = 0xe;
              local_1e8.DataPtr = "CompiledDouble";
              FCbWriter::SetNameOrAddString(param_1,&local_1e8);
              FCbWriter::AddInteger(param_1,*(uint *)((longlong)puVar15 + 0x14));
              uStack_310 = 6;
              local_318 = "Cooked";
              local_1d8._12_4_ = uStack_30c;
              local_1d8.Size = 6;
              local_1d8.DataPtr = "Cooked";
              FCbWriter::SetNameOrAddString(param_1,&local_1d8);
              FCbWriter::AddInteger(param_1,(uint)puVar15[2]);
              uStack_300 = 0xc;
              local_308 = "CookedDouble";
              local_1c8._12_4_ = uStack_2fc;
              local_1c8.Size = 0xc;
              local_1c8.DataPtr = "CookedDouble";
              FCbWriter::SetNameOrAddString(param_1,&local_1c8);
              FCbWriter::AddInteger(param_1,(uint)puVar15[3]);
              uStack_2f0 = 0xf;
              local_2f8 = "PermutationHash";
              local_1b8._12_4_ = uStack_2ec;
              local_1b8.Size = 0xf;
              local_1b8.DataPtr = "PermutationHash";
              FCbWriter::SetNameOrAddString(param_1,&local_1b8);
              FCbWriter::AddInteger(param_1,*puVar15);
              FCbWriter::EndObject(param_1);
              puVar15 = puVar15 + 4;
            }
            FCbWriter::EndArray(param_1);
            FCbWriter::EndObject(param_1);
            TStack_4d0.UnvisitedBitMask = TStack_4d0.UnvisitedBitMask & ~TStack_4d0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4d0);
            plVar25 = local_440;
            pTVar24 = local_448;
            uVar12 = local_514;
          }
          FCbWriter::EndArray(param_1);
          FCbWriter::EndObject(param_1);
        }
      }
      local_480.UnvisitedBitMask = local_480.UnvisitedBitMask & ~local_480._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_480);
    } while (local_480.CurrentBitIndex < (local_480.Array)->NumBits);
  }
  FCbWriter::EndArray(param_1);
  uStack_2e0 = 0x14;
  local_2e8 = "JobLifeTimeIntervals";
  local_1a8._12_4_ = uStack_2dc;
  local_1a8.Size = 0x14;
  local_1a8.DataPtr = "JobLifeTimeIntervals";
  FCbWriter::SetName(param_1,&local_1a8);
  FCbWriter::BeginArray(param_1);
  iVar13 = (this->JobLifeTimeIntervals).ArrayNum;
  pFVar16 = (this->JobLifeTimeIntervals).AllocatorInstance.Data;
  pFVar20 = pFVar16 + (longlong)iVar13 * 0x10;
  while( true ) {
    if ((this->JobLifeTimeIntervals).ArrayNum != iVar13) {
      local_517 = 0;
      `TCheckedPointerIterator<TInterval<double>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_517);
    }
    if (pFVar16 == pFVar20) break;
    FCbWriter::AddBinary(param_1,pFVar16,0x10);
    pFVar16 = pFVar16 + 0x10;
  }
  FCbWriter::EndArray(param_1);
  uStack_2d0 = 0x11;
  local_2d8 = "ShaderTimingsKeys";
  local_198._12_4_ = uStack_2cc;
  local_198.Size = 0x11;
  local_198.DataPtr = "ShaderTimingsKeys";
  FCbWriter::SetName(param_1,&local_198);
  FCbWriter::BeginArray(param_1);
  local_4f8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ShaderTimings).field_0x10;
  iVar13 = *(int *)&(this->ShaderTimings).field_0x28;
  pTVar2 = &this->ShaderTimings;
  iStack_500 = 0;
  local_4e8 = 0;
  uStack_4fc = (uint)local_510;
  iStack_4ec = 0;
  if (iVar13 != 0) {
    puVar23 = *(uint **)&(this->ShaderTimings).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)local_4f8;
    }
    uVar12 = *puVar23;
    iStack_500 = 0;
    local_4e8 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_500;
      local_4e8 = local_4e8 + 0x20;
      iStack_500 = iStack_500 + 1;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_500) goto LAB_148551b65;
      uVar12 = puVar23[lVar10 + 1];
    }
    uStack_4fc = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_4fc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_458 = (int)lVar10;
    iStack_4ec = local_4e8 + -1 + local_458;
    if (iVar13 < iStack_4ec) {
LAB_148551b65:
      iStack_4ec = iVar13;
    }
  }
  puVar26 = &(this->ShaderTimings).field_0x10;
  uStack_4e4 = local_64;
  iStack_4e0 = *(int *)&(this->ShaderTimings).field_0x8 - *(int *)&(this->ShaderTimings).field_0x34;
  uVar12 = *(uint *)&(this->ShaderTimings).field_0x28;
  TStack_3d8._padding_ = CONCAT44(uStack_4fc,iStack_500);
  uVar11 = uVar12 & 0xffffffe0;
  uStack_4f0 = 0xffffffff;
  TStack_3d8.CurrentBitIndex = iStack_4ec;
  TStack_3d8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_3d8._28_4_ = local_64;
  TStack_3d8.BaseBitIndex = local_4e8;
  uStack_3b8 = CONCAT44(uStack_4dc,iStack_4e0);
  local_508 = pTVar2;
  local_3e0 = pTVar2;
  TStack_3d8.Array = local_4f8;
  if (((int)uVar12 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->ShaderTimings).field_0x28;
  if (uVar12 != uVar3) {
    puVar17 = *(undefined1 **)&(this->ShaderTimings).field_0x20;
    puVar22 = puVar26;
    if (puVar17 != (undefined1 *)0x0) {
      puVar22 = puVar17;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148551c80;
      uVar12 = *(uint *)(puVar22 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_454 = (int)lVar10;
    uVar12 = local_454 + -1 + uVar11;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_148551c80:
  while( true ) {
    pTVar7 = local_3e0;
    if (*(int *)&local_3e0->field_0x8 - *(int *)&local_3e0->field_0x34 != (int)uStack_3b8) {
      local_516 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_516);
    }
    if (((TStack_3d8.CurrentBitIndex == uVar12) &&
        (TStack_3d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) && (pTVar7 == pTVar2)
       ) break;
    FCbWriter::operator<<
              (param_1,(FString *)
                       ((longlong)TStack_3d8.CurrentBitIndex * 0x30 + *(longlong *)pTVar7));
    TStack_3d8.UnvisitedBitMask = TStack_3d8.UnvisitedBitMask & ~TStack_3d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d8);
  }
  FCbWriter::EndArray(param_1);
  uStack_2c0 = 0x13;
  local_2c8 = "ShaderTimingsValues";
  local_188._12_4_ = uStack_2bc;
  local_188.Size = 0x13;
  local_188.DataPtr = "ShaderTimingsValues";
  FCbWriter::SetName(param_1,&local_188);
  FCbWriter::BeginArray(param_1);
  iStack_500 = 0;
  local_4f8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ShaderTimings).field_0x10;
  iVar13 = *(int *)&(this->ShaderTimings).field_0x28;
  pTVar2 = &this->ShaderTimings;
  iStack_4ec = iStack_500;
  local_4e8 = iStack_500;
  if (iVar13 != 0) {
    puVar23 = *(uint **)&(this->ShaderTimings).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)local_4f8;
    }
    uVar12 = *puVar23;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_500;
      local_4e8 = local_4e8 + 0x20;
      iStack_500 = iStack_500 + 1;
      iStack_4ec = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_500) goto LAB_148551dc0;
      uVar12 = puVar23[lVar10 + 1];
    }
    local_510 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = local_510 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_450 = (int)lVar10;
    iStack_4ec = local_4e8 + -1 + local_450;
    if (iVar13 < iStack_4ec) {
      iStack_4ec = iVar13;
    }
  }
LAB_148551dc0:
  puVar26 = &(this->ShaderTimings).field_0x10;
  uStack_4fc = (uint)local_510;
  uStack_4e4 = local_44;
  iStack_4e0 = *(int *)&(this->ShaderTimings).field_0x8 - *(int *)&(this->ShaderTimings).field_0x34;
  uVar12 = *(uint *)&(this->ShaderTimings).field_0x28;
  uStack_4f0 = 0xffffffff;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_3a8._padding_ = CONCAT44(uStack_4fc,iStack_500);
  TStack_3a8.CurrentBitIndex = iStack_4ec;
  TStack_3a8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_3a8._28_4_ = local_44;
  TStack_3a8.BaseBitIndex = local_4e8;
  uStack_388 = CONCAT44(uStack_4dc,iStack_4e0);
  local_508 = pTVar2;
  local_3b0 = pTVar2;
  TStack_3a8.Array = local_4f8;
  if (((int)uVar12 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->ShaderTimings).field_0x28;
  if (uVar12 != uVar3) {
    puVar17 = *(undefined1 **)&(this->ShaderTimings).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar26;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148551f00;
      uVar12 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_148551f00:
  while( true ) {
    pTVar7 = local_3b0;
    if (*(int *)&local_3b0->field_0x8 - *(int *)&local_3b0->field_0x34 != (int)uStack_388) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_515);
    }
    if (((TStack_3a8.CurrentBitIndex == uVar12) &&
        (TStack_3a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) && (pTVar7 == pTVar2)
       ) break;
    FCbWriter::AddBinary
              (param_1,(void *)(*(longlong *)pTVar7 + 0x10 +
                               (longlong)TStack_3a8.CurrentBitIndex * 0x30),0x18);
    TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
  }
  FCbWriter::EndArray(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148551faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

