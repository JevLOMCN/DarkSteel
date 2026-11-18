// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 22

// FShaderCodeArchive @ 145dee7b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderCodeArchive * __thiscall
FShaderCodeArchive::FShaderCodeArchive
          (FShaderCodeArchive *this,EShaderPlatform param_1,FString *param_2,FString *param_3)

{
  FRHIShaderLibrary::FRHIShaderLibrary((FRHIShaderLibrary *)this,param_1,param_3);
  this->_padding_ = (longlong)&___7FShaderCodeArchive__6B_;
  ::FString::FString(&this->LibraryDir,param_2);
  this->LibraryCodeOffset = 0;
  this->FileCacheHandle = (IFileCacheHandle *)0x0;
  (this->SerializedShaders).ShaderMapHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedShaders).ShaderMapHashes.ArrayNum = 0;
  (this->SerializedShaders).ShaderMapHashes.ArrayMax = 0;
  (this->SerializedShaders).ShaderHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedShaders).ShaderHashes.ArrayNum = 0;
  (this->SerializedShaders).ShaderHashes.ArrayMax = 0;
  (this->SerializedShaders).ShaderMapEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SerializedShaders).ShaderMapEntries.ArrayNum = 0;
  (this->SerializedShaders).ShaderMapEntries.ArrayMax = 0;
  (this->SerializedShaders).ShaderEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedShaders).ShaderEntries.ArrayNum = 0;
  (this->SerializedShaders).ShaderEntries.ArrayMax = 0;
  (this->SerializedShaders).PreloadEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedShaders).PreloadEntries.ArrayNum = 0;
  (this->SerializedShaders).PreloadEntries.ArrayMax = 0;
  (this->SerializedShaders).ShaderIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedShaders).ShaderIndices.ArrayNum = 0;
  (this->SerializedShaders).ShaderIndices.ArrayMax = 0;
  FHashTable::FHashTable(&(this->SerializedShaders).ShaderMapHashTable,0x400,0);
  FHashTable::FHashTable(&(this->SerializedShaders).ShaderHashTable,0x400,0);
  (this->ShaderPreloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderPreloads).ArrayNum = 0;
  (this->ShaderPreloads).ArrayMax = 0;
  (this->ShaderPreloadLock).Mutex.Mutex.Ptr = (void *)0x0;
  FShaderUsageVisualizer::FShaderUsageVisualizer(&this->DebugVisualizer);
  return this;
}

// ~FShaderCodeArchive @ 145df1970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderCodeArchive::~FShaderCodeArchive(FShaderCodeArchive *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  uchar auVar9 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7FShaderCodeArchive__6B_;
  uVar8 = ((this->SerializedShaders).ShaderHashes.ArrayMax +
          (this->SerializedShaders).ShaderMapHashes.ArrayMax + 0x20) * 5 +
          ((this->SerializedShaders).PreloadEntries.ArrayMax +
          (this->SerializedShaders).ShaderMapEntries.ArrayMax) * 4 +
          ((this->SerializedShaders).ShaderEntries.ArrayMax + (this->ShaderPreloads).ArrayMax) * 6 +
          (this->SerializedShaders).ShaderIndices.ArrayMax;
  auVar9[4] = '\0';
  auVar9[5] = '\0';
  auVar9[6] = '\0';
  auVar9[7] = '\0';
  auVar9._0_4_ = uVar8 * 4;
  if ((uVar8 & 0x3fffffff) != 0) {
    FVar7 = StatPtr_STAT_Shaders_ShaderResourceMemory;
    if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res10,"STAT_Shaders_ShaderResourceMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,
                         *pFVar6,L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                         L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar9);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  Teardown(this);
  FShaderUsageVisualizer::~FShaderUsageVisualizer(&this->DebugVisualizer);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ShaderPreloadLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ShaderPreloadLock);
  }
  DestructItems<FShaderCodeArchive::FShaderPreloadEntry,int>
            ((FShaderPreloadEntry *)(this->ShaderPreloads).AllocatorInstance.Data,
             (this->ShaderPreloads).ArrayNum);
  pFVar2 = (this->ShaderPreloads).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FSerializedShaderArchive::~FSerializedShaderArchive(&this->SerializedShaders);
  pFVar2 = (this->LibraryDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FRHIShaderLibrary__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// Create @ 145dffb00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShaderCodeArchive * __cdecl
FShaderCodeArchive::Create
          (EShaderPlatform param_1,FArchive *param_2,FString *param_3,FString *param_4,
          FString *param_5)

{
  FShaderUsageVisualizer *lpCriticalSection;
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FShaderCodeArchive *pFVar6;
  long64 lVar7;
  IFileCacheHandle *pIVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  wchar_t *pwVar11;
  uchar auVar12 [8];
  FName local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  pFVar6 = ::operator_new(0x280);
  if (pFVar6 == (FShaderCodeArchive *)0x0) {
    pFVar6 = (FShaderCodeArchive *)0x0;
  }
  else {
    FRHIShaderLibrary::FRHIShaderLibrary((FRHIShaderLibrary *)pFVar6,param_1,param_5);
    pFVar6->_padding_ = (longlong)&___7FShaderCodeArchive__6B_;
    ::FString::FString(&pFVar6->LibraryDir,param_4);
    pFVar6->LibraryCodeOffset = 0;
    pFVar6->FileCacheHandle = (IFileCacheHandle *)0x0;
    (pFVar6->SerializedShaders).ShaderMapHashes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar6->SerializedShaders).ShaderMapHashes.ArrayNum = 0;
    (pFVar6->SerializedShaders).ShaderMapHashes.ArrayMax = 0;
    (pFVar6->SerializedShaders).ShaderHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (pFVar6->SerializedShaders).ShaderHashes.ArrayNum = 0;
    (pFVar6->SerializedShaders).ShaderHashes.ArrayMax = 0;
    (pFVar6->SerializedShaders).ShaderMapEntries.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar6->SerializedShaders).ShaderMapEntries.ArrayNum = 0;
    (pFVar6->SerializedShaders).ShaderMapEntries.ArrayMax = 0;
    (pFVar6->SerializedShaders).ShaderEntries.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar6->SerializedShaders).ShaderEntries.ArrayNum = 0;
    (pFVar6->SerializedShaders).ShaderEntries.ArrayMax = 0;
    (pFVar6->SerializedShaders).PreloadEntries.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar6->SerializedShaders).PreloadEntries.ArrayNum = 0;
    (pFVar6->SerializedShaders).PreloadEntries.ArrayMax = 0;
    (pFVar6->SerializedShaders).ShaderIndices.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar6->SerializedShaders).ShaderIndices.ArrayNum = 0;
    (pFVar6->SerializedShaders).ShaderIndices.ArrayMax = 0;
    FHashTable::FHashTable(&(pFVar6->SerializedShaders).ShaderMapHashTable,0x400,0);
    FHashTable::FHashTable(&(pFVar6->SerializedShaders).ShaderHashTable,0x400,0);
    (pFVar6->ShaderPreloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->ShaderPreloads).ArrayNum = 0;
    (pFVar6->ShaderPreloads).ArrayMax = 0;
    (pFVar6->ShaderPreloadLock).Mutex.Mutex.Ptr = (void *)0x0;
    FShaderUsageVisualizer::FShaderUsageVisualizer(&pFVar6->DebugVisualizer);
  }
  FSerializedShaderArchive::Serialize(&pFVar6->SerializedShaders,param_2);
  TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar6->ShaderPreloads,(pFVar6->SerializedShaders).ShaderEntries.ArrayNum,Default);
  lVar7 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
  pFVar6->LibraryCodeOffset = lVar7;
  if ((param_3->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  pIVar8 = IFileCacheHandle::CreateFileCacheHandle(pwVar11,0);
  pFVar6->FileCacheHandle = pIVar8;
  lpCriticalSection = &pFVar6->DebugVisualizer;
  iVar1 = (pFVar6->SerializedShaders).ShaderEntries.ArrayNum;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FShaderCodeArchive *)(*pcVar3)();
    return pFVar6;
  }
  if (lpCriticalSection == (FShaderUsageVisualizer *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (pFVar6->DebugVisualizer).NumShaders = iVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (3 < (byte)LogShaderLibrary._0_1_) {
    if (((pFVar6->SerializedShaders).ShaderEntries.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderCodeArchive *)(*pcVar3)();
      return pFVar6;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
  }
  pcVar3 = *(code **)(pFVar6->_padding_ + 0x40);
  if (pcVar3 == GetSizeBytes) {
    uVar5 = GetSizeBytes(pFVar6);
  }
  else {
    uVar5 = (*pcVar3)();
  }
  auVar12[4] = '\0';
  auVar12[5] = '\0';
  auVar12[6] = '\0';
  auVar12[7] = '\0';
  auVar12[0] = (char)uVar5;
  auVar12[1] = (char)(uVar5 >> 8);
  auVar12[2] = (char)(uVar5 >> 0x10);
  auVar12[3] = (char)(uVar5 >> 0x18);
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_Shaders_ShaderResourceMemory;
    if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_res18,"STAT_Shaders_ShaderResourceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,
                          *pFVar9,L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res10 = FVar2;
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res10 = FVar2;
      local_28.StatData.Pad = auVar12;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_28);
      FStatsTrace::Add(&local_res10,(long64)auVar12);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return pFVar6;
}

// CreateShader @ 145e02db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIShader> __thiscall
FShaderCodeArchive::CreateShader(FShaderCodeArchive *this,int param_1,bool param_2)

{
  FMemStackBase *this_00;
  FShaderUsageVisualizer *lpCriticalSection;
  FShaderPreloadEntry *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  FRHIResource *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint *puVar13;
  FTlsAutoCleanup *pFVar14;
  TRefCountPtr<FRHIShader> TVar15;
  FShaderCodeEntry *pFVar16;
  FName FVar17;
  FSHAHash *pFVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated> FVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCsvProfiler *this_03;
  TCsvPersistentCustomStat<int> *pTVar21;
  TRefCountPtr<FBaseGraphTask> *pTVar22;
  undefined4 in_register_00000014;
  FRHIShader *pFVar23;
  uint uVar24;
  undefined7 in_register_00000081;
  ulonglong uVar25;
  undefined1 auStackY_2e8 [32];
  undefined1 local_288;
  undefined1 local_287 [15];
  FName local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  FLLMScope local_268;
  FLLMScope local_264;
  FLLMScope local_260;
  FLLMScope local_25c;
  FLLMScope local_258;
  FLLMScope local_254;
  FLLMScope local_250;
  FLLMScope local_24c;
  FLLMScope local_248 [2];
  uint local_240 [2];
  FRHIResource *local_238;
  FRHIResource *local_230;
  FRHIResource *local_228;
  FRHIResource *local_220;
  FRHIResource *local_218;
  FRHIResource *local_210;
  FRHIResource *local_208;
  FRHIResource *local_200;
  FRHIResource *local_1f8;
  FMemMark local_1f0;
  LARGE_INTEGER local_1c8;
  LARGE_INTEGER local_1c0;
  FMemScope local_1b8;
  FMemScope local_1b0;
  FMemScope local_1a8;
  FMemScope local_1a0;
  FMemScope local_198;
  FMemScope local_190;
  FMemScope local_188;
  FMemScope local_180;
  FName local_178;
  FMemScope local_170;
  FStatMessage local_168;
  int local_158 [2];
  code *local_150;
  undefined1 *local_148;
  TArrayView<FShaderCodeEntry_const_,int> local_140;
  TArrayView<FSHAHash_const_,int> local_130;
  FName local_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  FName local_88;
  TRefCountPtr<FBaseGraphTask> local_80 [4];
  TRefCountPtr<FBaseGraphTask> *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  uVar25 = CONCAT71(in_register_00000081,param_2);
  pFVar23 = (FRHIShader *)CONCAT44(in_register_00000014,param_1);
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar24 = (uint)uVar25;
  FLLMScope::FLLMScope(local_248,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_170,Shaders,true);
  pFVar23->_padding_ = 0;
  puVar13 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_148 = local_287;
  local_150 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar14 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_150,puVar13);
  this_00 = (FMemStackBase *)(pFVar14 + 2);
  local_1f0.Top = this_00->Top;
  local_1f0.SavedChunk = *(FTaggedMemory **)(pFVar14 + 4);
  local_1f0.bPopped = false;
  local_1f0.NextTopmostMark = *(FMemMark **)(pFVar14 + 5);
  pFVar14[5] = (FTlsAutoCleanup)&local_1f0;
  *(int *)(pFVar14 + 6) = *(int *)(pFVar14 + 6) + 1;
  local_140.DataPtr =
       (FShaderCodeEntry *)(this->SerializedShaders).ShaderEntries.AllocatorInstance.Data;
  local_140.ArrayNum = (this->SerializedShaders).ShaderEntries.ArrayNum;
  local_1f0.Mem = this_00;
  if ((local_140.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    TVar15.Reference = (FRHIShader *)(*pcVar7)();
    return (TRefCountPtr<FRHIShader>)TVar15.Reference;
  }
  pFVar16 = TArrayView<FShaderCodeEntry_const_,int>::operator[](&local_140,uVar24);
  uVar12 = 0;
  if ((int)uVar24 < (this->ShaderPreloads).ArrayNum) {
    uVar12 = ~uVar24 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    TVar15.Reference = (FRHIShader *)(*pcVar7)();
    return (TRefCountPtr<FRHIShader>)TVar15.Reference;
  }
  pFVar3 = (this->ShaderPreloads).AllocatorInstance.Data;
  pFVar1 = (FShaderPreloadEntry *)(pFVar3 + (longlong)(int)uVar24 * 0x18);
  if ((*(int *)(pFVar3 + (longlong)(int)uVar24 * 0x18 + 0x14) < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ShaderPreloadEntry.bNeverToBePreloaded",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                          ,0x586,
                          L"We are creating a shader that shouldn\'t be preloaded in this run (e.g. raytracing shader on D3D11)."
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    TVar15.Reference = (FRHIShader *)(*pcVar7)();
    return (TRefCountPtr<FRHIShader>)TVar15.Reference;
  }
  local_54 = 4;
  local_60 = (TRefCountPtr<FBaseGraphTask> *)0x0;
  local_58 = 0;
  (**(code **)(this->_padding_ + 0x78))(this,uVar25 & 0xffffffff,local_80);
  pTVar22 = local_80;
  if (local_60 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar22 = local_60;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar22,local_58);
  if (local_60 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    FMemory::Free(local_60);
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1422,"BlockingShaderLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
               ,0x58e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1422);
  }
  QueryPerformanceCounter(&local_1c8);
  dVar8 = (double)local_1c8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  bVar11 = WaitForPreload(this,pFVar1);
  if (((bVar11) &&
      (QueryPerformanceCounter(&local_1c0),
      (double)GShaderCodeLibraryMaxShaderPreloadWaitTime <
      (double)local_1c0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar8)) &&
     (2 < (byte)LogShaderLibrary._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar4 = (FName)pFVar1->Code;
  FVar17 = FVar4;
  if (pFVar16->UncompressedSize != pFVar16->Size) {
    FVar17 = (FName)FMemStackBase::Alloc(this_00,(ulonglong)pFVar16->UncompressedSize,0x10);
    ShaderCodeArchive::DecompressShaderWithOodle
              ((uchar *)FVar17,(ulonglong)pFVar16->UncompressedSize,(uchar *)FVar4,
               (ulonglong)pFVar16->Size);
  }
  bVar10 = IsInRenderingThread();
  if ((!bVar10) && (GRHIGlobals.SupportsMultithreadedShaderCreation == false)) {
    local_288 = bVar10;
    `FShaderCodeArchive::CreateShader'::__l2::<lambda_1>::operator()(&local_288);
  }
  uStack_270 = pFVar16->UncompressedSize;
  local_278 = FVar17;
  if (((int)uStack_270 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    TVar15.Reference = (FRHIShader *)(*pcVar7)();
    return (TRefCountPtr<FRHIShader>)TVar15.Reference;
  }
  local_130.DataPtr = (FSHAHash *)(this->SerializedShaders).ShaderHashes.AllocatorInstance.Data;
  iVar2 = (this->SerializedShaders).ShaderHashes.ArrayNum;
  if ((iVar2 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    TVar15.Reference = (FRHIShader *)(*pcVar7)();
    return (TRefCountPtr<FRHIShader>)TVar15.Reference;
  }
  local_130.ArrayNum = iVar2;
  pFVar18 = TArrayView<FSHAHash_const_,int>::operator[](&local_130,uVar24);
  switch(pFVar16->Frequency) {
  case '\0':
    FLLMScope::FLLMScope(&local_268,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1b8,Shaders,true);
    local_118 = local_278.ComparisonIndex.Value;
    uStack_114 = local_278.Number;
    uStack_110 = uStack_270;
    uStack_10c = uStack_26c;
    (**(code **)(GDynamicRHI->_padding_ + 0x78))(GDynamicRHI,&local_238);
    FMemScope::~FMemScope(&local_1b8);
    FLLMScope::~FLLMScope(&local_268);
    pFVar5 = (FRHIResource *)pFVar23->_padding_;
    pFVar23->_padding_ = (longlong)local_238;
    local_238 = (FRHIResource *)0x0;
    if ((pFVar5 != (FRHIResource *)0x0) &&
       (FRHIResource::Release(pFVar5), local_238 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_238);
    }
    break;
  case '\x01':
    FLLMScope::FLLMScope(&local_264,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1b0,Shaders,true);
    local_108 = local_278.ComparisonIndex.Value;
    uStack_104 = local_278.Number;
    uStack_100 = uStack_270;
    uStack_fc = uStack_26c;
    (**(code **)(GDynamicRHI->_padding_ + 0x88))(GDynamicRHI,&local_230);
    FMemScope::~FMemScope(&local_1b0);
    FLLMScope::~FLLMScope(&local_264);
    pFVar5 = (FRHIResource *)pFVar23->_padding_;
    pFVar23->_padding_ = (longlong)local_230;
    local_230 = (FRHIResource *)0x0;
    if ((pFVar5 != (FRHIResource *)0x0) &&
       (FRHIResource::Release(pFVar5), local_230 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_230);
    }
    break;
  case '\x02':
    FLLMScope::FLLMScope(&local_260,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1a8,Shaders,true);
    local_f8 = local_278.ComparisonIndex.Value;
    uStack_f4 = local_278.Number;
    uStack_f0 = uStack_270;
    uStack_ec = uStack_26c;
    (**(code **)(GDynamicRHI->_padding_ + 0x90))(GDynamicRHI,&local_228);
    FMemScope::~FMemScope(&local_1a8);
    FLLMScope::~FLLMScope(&local_260);
    pFVar5 = (FRHIResource *)pFVar23->_padding_;
    pFVar23->_padding_ = (longlong)local_228;
    local_228 = (FRHIResource *)0x0;
    if ((pFVar5 != (FRHIResource *)0x0) &&
       (FRHIResource::Release(pFVar5), local_228 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_228);
    }
    break;
  case '\x03':
    FLLMScope::FLLMScope(&local_25c,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1a0,Shaders,true);
    local_e8 = local_278.ComparisonIndex.Value;
    uStack_e4 = local_278.Number;
    uStack_e0 = uStack_270;
    uStack_dc = uStack_26c;
    (**(code **)(GDynamicRHI->_padding_ + 0x70))(GDynamicRHI,&local_220);
    FMemScope::~FMemScope(&local_1a0);
    FLLMScope::~FLLMScope(&local_25c);
    pFVar5 = (FRHIResource *)pFVar23->_padding_;
    pFVar23->_padding_ = (longlong)local_220;
    local_220 = (FRHIResource *)0x0;
    if ((pFVar5 != (FRHIResource *)0x0) &&
       (FRHIResource::Release(pFVar5), local_220 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_220);
    }
    break;
  case '\x04':
    FLLMScope::FLLMScope(&local_258,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_198,Shaders,true);
    local_d8 = local_278.ComparisonIndex.Value;
    uStack_d4 = local_278.Number;
    uStack_d0 = uStack_270;
    uStack_cc = uStack_26c;
    (**(code **)(GDynamicRHI->_padding_ + 0x80))(GDynamicRHI,&local_218);
    FMemScope::~FMemScope(&local_198);
    FLLMScope::~FLLMScope(&local_258);
    pFVar5 = (FRHIResource *)pFVar23->_padding_;
    pFVar23->_padding_ = (longlong)local_218;
    local_218 = (FRHIResource *)0x0;
    if ((pFVar5 != (FRHIResource *)0x0) &&
       (FRHIResource::Release(pFVar5), local_218 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_218);
    }
    break;
  case '\x05':
    FLLMScope::FLLMScope(&local_254,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_190,Shaders,true);
    local_c8 = local_278.ComparisonIndex.Value;
    uStack_c4 = local_278.Number;
    uStack_c0 = uStack_270;
    uStack_bc = uStack_26c;
    (**(code **)(GDynamicRHI->_padding_ + 0xa0))(GDynamicRHI,&local_210);
    FMemScope::~FMemScope(&local_190);
    FLLMScope::~FLLMScope(&local_254);
    pFVar5 = (FRHIResource *)pFVar23->_padding_;
    pFVar23->_padding_ = (longlong)local_210;
    local_210 = (FRHIResource *)0x0;
    if ((pFVar5 != (FRHIResource *)0x0) &&
       (FRHIResource::Release(pFVar5), local_210 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_210);
    }
    break;
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
    if ((GRHIGlobals.RayTracing.Supported != false) &&
       (GRHIGlobals.RayTracing.SupportsShaders != false)) {
      local_98 = local_278.ComparisonIndex.Value;
      uStack_94 = local_278.Number;
      uStack_90 = uStack_270;
      uStack_8c = uStack_26c;
      (**(code **)(GDynamicRHI->_padding_ + 0x4a0))(GDynamicRHI,&local_1f8);
      pFVar5 = (FRHIResource *)pFVar23->_padding_;
      pFVar23->_padding_ = (longlong)local_1f8;
      local_1f8 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_1f8 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_1f8);
      }
    }
    break;
  case '\n':
    FLLMScope::FLLMScope(&local_250,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_188,Shaders,true);
    local_b8 = local_278.ComparisonIndex.Value;
    uStack_b4 = local_278.Number;
    uStack_b0 = uStack_270;
    uStack_ac = uStack_26c;
    (**(code **)(GDynamicRHI->_padding_ + 0xa8))(GDynamicRHI,&local_208);
    FMemScope::~FMemScope(&local_188);
    FLLMScope::~FLLMScope(&local_250);
    pFVar5 = (FRHIResource *)pFVar23->_padding_;
    pFVar23->_padding_ = (longlong)local_208;
    local_208 = (FRHIResource *)0x0;
    if ((pFVar5 != (FRHIResource *)0x0) &&
       (FRHIResource::Release(pFVar5), local_208 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_208);
    }
    break;
  case '\v':
    FLLMScope::FLLMScope(&local_24c,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_180,Shaders,true);
    local_a8 = local_278.ComparisonIndex.Value;
    uStack_a4 = local_278.Number;
    uStack_a0 = uStack_270;
    uStack_9c = uStack_26c;
    (**(code **)(GDynamicRHI->_padding_ + 0xa8))(GDynamicRHI,&local_200);
    FMemScope::~FMemScope(&local_180);
    FLLMScope::~FLLMScope(&local_24c);
    pFVar5 = (FRHIResource *)pFVar23->_padding_;
    pFVar23->_padding_ = (longlong)local_200;
    local_200 = (FRHIResource *)0x0;
    if ((pFVar5 != (FRHIResource *)0x0) &&
       (FRHIResource::Release(pFVar5), local_200 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_200);
    }
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                        ,0x5bc,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      TVar15.Reference = (FRHIShader *)(*pcVar7)();
      return (TRefCountPtr<FRHIShader>)TVar15.Reference;
    }
  }
  lpCriticalSection = &this->DebugVisualizer;
  local_240[0] = uVar24;
  if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
    if (lpCriticalSection == (FShaderUsageVisualizer *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&(this->DebugVisualizer).CreatedShaders,local_158,(bool *)local_240);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  (**(code **)(this->_padding_ + 0x90))(this,uVar25 & 0xffffffff);
  if (pFVar23->_padding_ != 0) {
    FVar20 = StatPtr_STAT_Shaders_NumShadersCreated;
    if (StatPtr_STAT_Shaders_NumShadersCreated ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)0x0) {
      pFVar19 = ::FName::FName(&local_120,"STAT_Shaders_NumShadersCreated");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersCreated,
                          *pFVar19,L"Num Shaders Created","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar4 = *(FName *)FVar20;
    local_278 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_168.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_168.StatData.Pad[0] = '\x01';
      local_168.StatData.Pad[1] = '\0';
      local_168.StatData.Pad[2] = '\0';
      local_168.StatData.Pad[3] = '\0';
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_178 = FVar4;
      local_168.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_168);
      FStatsTrace::Add(&local_178,1);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
    this_03 = FCsvProfiler::Get();
    uVar24 = _GCsvCategory_Shaders.Index;
    pFVar19 = ::FName::FName(&local_88,L"NumShadersCreated");
    pTVar21 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(this_03,*pFVar19,uVar24,false);
    LOCK();
    pTVar21->Value = (atomic<int>)((int)pTVar21->Value + 1);
    UNLOCK();
    lVar6 = pFVar23->_padding_;
    uVar9 = *(undefined8 *)(pFVar18->Hash + 8);
    *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)pFVar18->Hash;
    *(undefined8 *)(lVar6 + 0xf8) = uVar9;
    *(undefined4 *)(lVar6 + 0x100) = *(undefined4 *)(pFVar18->Hash + 0x10);
  }
  if (local_1f0.bPopped == false) {
    if (((local_1f0.Mem)->TopMark != &local_1f0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      TVar15.Reference = (FRHIShader *)(*pcVar7)();
      return (TRefCountPtr<FRHIShader>)TVar15.Reference;
    }
    local_1f0.bPopped = true;
    (local_1f0.Mem)->NumMarks = (local_1f0.Mem)->NumMarks + -1;
    if (local_1f0.SavedChunk != (local_1f0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_1f0.Mem,local_1f0.SavedChunk);
    }
    (local_1f0.Mem)->Top = local_1f0.Top;
    (local_1f0.Mem)->TopMark = local_1f0.NextTopmostMark;
    local_1f0.Top = (uchar *)0x0;
  }
  FMemScope::~FMemScope(&local_170);
  FLLMScope::~FLLMScope(local_248);
  return (TRefCountPtr<FRHIShader>)pFVar23;
}

// FindShaderIndex @ 145e0a3d0

int __thiscall FShaderCodeArchive::FindShaderIndex(FShaderCodeArchive *this,FSHAHash *param_1)

{
  int iVar1;
  
  iVar1 = FSerializedShaderArchive::FindShaderWithKey
                    (&this->SerializedShaders,param_1,*(uint *)param_1->Hash);
  return iVar1;
}

// FindShaderMapIndex @ 145e0a500

int __thiscall FShaderCodeArchive::FindShaderMapIndex(FShaderCodeArchive *this,FSHAHash *param_1)

{
  int iVar1;
  
  iVar1 = FSerializedShaderArchive::FindShaderMapWithKey
                    (&this->SerializedShaders,param_1,*(uint *)param_1->Hash);
  return iVar1;
}

// GetAllShaderIndices @ 145e0eb30

void __thiscall
FShaderCodeArchive::GetAllShaderIndices
          (FShaderCodeArchive *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FShaderMapEntry *pFVar5;
  uint uVar6;
  uint uVar7;
  TArrayView<FShaderMapEntry_const_,int> local_18;
  
  local_18.DataPtr =
       (FShaderMapEntry *)(this->SerializedShaders).ShaderMapEntries.AllocatorInstance.Data;
  iVar1 = (this->SerializedShaders).ShaderMapEntries.ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar5 = TArrayView<FShaderMapEntry_const_,int>::operator[](&local_18,param_1);
  uVar6 = 0;
  if (pFVar5->NumShaders != 0) {
    do {
      uVar7 = pFVar5->ShaderIndicesOffset + uVar6;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (param_2,(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < pFVar5->NumShaders);
  }
  return;
}

// GetNumShaderMaps @ 145e0fb70

int __thiscall FShaderCodeArchive::GetNumShaderMaps(FShaderCodeArchive *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (this->SerializedShaders).ShaderMapEntries.ArrayNum;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// GetNumShaders @ 145e0fbd0

int __thiscall FShaderCodeArchive::GetNumShaders(FShaderCodeArchive *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (this->SerializedShaders).ShaderEntries.ArrayNum;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// GetNumShadersForShaderMap @ 145e0fca0

int __thiscall FShaderCodeArchive::GetNumShadersForShaderMap(FShaderCodeArchive *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderMapEntry *pFVar4;
  TArrayView<FShaderMapEntry_const_,int> local_18;
  
  local_18.DataPtr =
       (FShaderMapEntry *)(this->SerializedShaders).ShaderMapEntries.AllocatorInstance.Data;
  iVar3 = (this->SerializedShaders).ShaderMapEntries.ArrayNum;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_18.ArrayNum = iVar3;
  pFVar4 = TArrayView<FShaderMapEntry_const_,int>::operator[](&local_18,param_1);
  return pFVar4->NumShaders;
}

// GetShaderHash @ 145e106d0

FSHAHash * __thiscall
FShaderCodeArchive::GetShaderHash
          (FShaderCodeArchive *this,FSHAHash *__return_storage_ptr__,int param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FSHAHash *pFVar6;
  TArrayView<FSHAHash_const_,int> local_18;
  
  local_18.DataPtr = (FSHAHash *)(this->SerializedShaders).ShaderHashes.AllocatorInstance.Data;
  iVar5 = (this->SerializedShaders).ShaderHashes.ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSHAHash *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_18.ArrayNum = iVar5;
  iVar5 = (**(code **)(this->_padding_ + 0x30))(this,param_1,param_2);
  pFVar6 = TArrayView<FSHAHash_const_,int>::operator[](&local_18,iVar5);
  uVar3 = *(undefined8 *)(pFVar6->Hash + 8);
  uVar1 = *(undefined4 *)(pFVar6->Hash + 0x10);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar6->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar3;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = uVar1;
  return __return_storage_ptr__;
}

// GetShaderIndex @ 145e10870

int __thiscall FShaderCodeArchive::GetShaderIndex(FShaderCodeArchive *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderMapEntry *pFVar4;
  uint *puVar5;
  TArrayView<FShaderMapEntry_const_,int> local_28;
  TArrayView<unsigned_int_const_,int> local_18;
  
  local_28.DataPtr =
       (FShaderMapEntry *)(this->SerializedShaders).ShaderMapEntries.AllocatorInstance.Data;
  iVar3 = (this->SerializedShaders).ShaderMapEntries.ArrayNum;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_28.ArrayNum = iVar3;
  pFVar4 = TArrayView<FShaderMapEntry_const_,int>::operator[](&local_28,param_1);
  local_18.DataPtr = (uint *)(this->SerializedShaders).ShaderIndices.AllocatorInstance.Data;
  local_18.ArrayNum = (this->SerializedShaders).ShaderIndices.ArrayNum;
  if (local_18.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  puVar5 = TArrayView<unsigned_int_const_,int>::operator[]
                     (&local_18,pFVar4->ShaderIndicesOffset + param_2);
  return *puVar5;
}

// GetShaderMapHash @ 145e109f0

FSHAHash * __thiscall
FShaderCodeArchive::GetShaderMapHash
          (FShaderCodeArchive *this,FSHAHash *__return_storage_ptr__,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FSHAHash *pFVar6;
  TArrayView<FSHAHash_const_,int> local_18;
  
  local_18.DataPtr = (FSHAHash *)(this->SerializedShaders).ShaderMapHashes.AllocatorInstance.Data;
  iVar1 = (this->SerializedShaders).ShaderMapHashes.ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSHAHash *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar6 = TArrayView<FSHAHash_const_,int>::operator[](&local_18,param_1);
  uVar4 = *(undefined8 *)(pFVar6->Hash + 8);
  uVar2 = *(undefined4 *)(pFVar6->Hash + 0x10);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar6->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar4;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = uVar2;
  return __return_storage_ptr__;
}

// GetSizeBytes @ 145e11600

uint __thiscall FShaderCodeArchive::GetSizeBytes(FShaderCodeArchive *this)

{
  return (((this->SerializedShaders).PreloadEntries.ArrayMax +
          (this->SerializedShaders).ShaderMapEntries.ArrayMax) * 4 +
          ((this->ShaderPreloads).ArrayMax + (this->SerializedShaders).ShaderEntries.ArrayMax) * 6 +
          ((this->SerializedShaders).ShaderHashes.ArrayMax +
          (this->SerializedShaders).ShaderMapHashes.ArrayMax + 0x20) * 5 +
         (this->SerializedShaders).ShaderIndices.ArrayMax) * 4;
}

// IsNativeLibrary @ 145e19b80

bool __thiscall FShaderCodeArchive::IsNativeLibrary(FShaderCodeArchive *this)

{
  return false;
}

// OnShaderPreloadFinished @ 145e1dd70

void __thiscall
FShaderCodeArchive::OnShaderPreloadFinished
          (FShaderCodeArchive *this,int param_1,TRefCountPtr<IMemoryReadStream> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FShaderCodeEntry *pFVar8;
  TArrayView<FShaderCodeEntry_const_,int> local_18;
  
  local_18.DataPtr =
       (FShaderCodeEntry *)(this->SerializedShaders).ShaderEntries.AllocatorInstance.Data;
  iVar3 = (this->SerializedShaders).ShaderEntries.ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18.ArrayNum = iVar3;
  pFVar8 = TArrayView<FShaderCodeEntry_const_,int>::operator[](&local_18,param_1);
  (**(code **)(param_2->Reference->_padding_ + 0x18))();
  AcquireSRWLockExclusive((PSRWLOCK)&this->ShaderPreloadLock);
  uVar7 = 0;
  if (param_1 < (this->ShaderPreloads).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (this->ShaderPreloads).AllocatorInstance.Data + (longlong)param_1 * 0x18;
  (**(code **)(param_2->Reference->_padding_ + 0x10))
            (param_2->Reference,*(longlong *)(pFVar2 + 8),0,pFVar8->Size);
  puVar4 = *(undefined8 **)pFVar2;
  if (puVar4 != (undefined8 *)0x0) {
    *(longlong *)pFVar2 = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145e1deac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ShaderPreloadLock);
  return;
}

// PreloadShader @ 145e1e300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FShaderCodeArchive::PreloadShader
          (FShaderCodeArchive *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  atomic<unsigned_int> *paVar1;
  uint *puVar2;
  longlong *plVar3;
  FShaderUsageVisualizer *lpCriticalSection;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  atomic<unsigned_int> aVar5;
  atomic<float> aVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  code *pcVar9;
  longlong lVar10;
  uchar auVar11 [8];
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  atomic<float> aVar15;
  int iVar16;
  void *pvVar17;
  FTaskBase *this_00;
  undefined8 *puVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCsvProfiler *this_03;
  TCsvPersistentCustomStat<float> *pTVar21;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar22;
  FTaskBase *pFVar23;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar24;
  FNameEntryId FVar25;
  float fVar26;
  undefined1 auStackY_158 [32];
  EExtendedTaskPriority local_f8;
  ETaskPriority local_f7 [7];
  FShaderCodeEntry *local_f0;
  FLLMScope local_e8 [2];
  int local_e0 [2];
  uint local_d8;
  uint uStack_d4;
  longlong *local_d0;
  int local_c8 [2];
  uchar local_c0 [8];
  FName local_b8;
  FMemScope local_b0;
  FStatMessage local_a8;
  TArrayView<FShaderCodeEntry_const_,int> local_98;
  undefined1 local_88 [8];
  FName local_80;
  FName local_78;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FLLMScope::FLLMScope(local_e8,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_b0,Shaders,true);
  AcquireSRWLockExclusive((PSRWLOCK)&this->ShaderPreloadLock);
  uVar14 = 0;
  if (param_1 < (this->ShaderPreloads).ArrayNum) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return (bool)uVar13;
  }
  pFVar7 = (this->ShaderPreloads).AllocatorInstance.Data;
  FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
          ((longlong)pFVar7 + (longlong)param_1 * 0x18);
  if ((*(int *)(pFVar7 + (longlong)param_1 * 0x18 + 0x14) < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ShaderPreloadEntry.bNeverToBePreloaded",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                          ,0x4e9,
                          L"We are preloading a shader that shouldn\'t be preloaded in this run (e.g. raytracing shader on D3D11)."
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return (bool)uVar13;
  }
  uVar14 = *(uint *)((longlong)FVar4 + 0x14);
  *(uint *)((longlong)FVar4 + 0x14) = (uVar14 + 1 ^ uVar14) & 0x7fffffff ^ uVar14;
  if ((uVar14 & 0x7fffffff) != 0) goto LAB_145e1e85a;
  if ((*(longlong *)FVar4 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ShaderPreloadEntry.PreloadEvent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                          ,0x4ed,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return (bool)uVar13;
  }
  local_98.DataPtr =
       (FShaderCodeEntry *)(this->SerializedShaders).ShaderEntries.AllocatorInstance.Data;
  iVar16 = (this->SerializedShaders).ShaderEntries.ArrayNum;
  if ((iVar16 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return (bool)uVar13;
  }
  local_98.ArrayNum = iVar16;
  local_f0 = TArrayView<FShaderCodeEntry_const_,int>::operator[](&local_98,param_1);
  pvVar17 = FMemory::Malloc((ulonglong)local_f0->Size,0);
  *(void **)((longlong)FVar4 + 8) = pvVar17;
  lpCriticalSection = &this->DebugVisualizer;
  *(uint *)((longlong)FVar4 + 0x10) = GFrameNumber;
  local_e0[0] = param_1;
  if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
    if (lpCriticalSection == (FShaderUsageVisualizer *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&(this->DebugVisualizer).ExplicitlyPreloadedShaders,local_c8,(bool *)local_e0);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  local_70.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 4;
  (**(code **)((longlong)*this->FileCacheHandle + 8))
            (this->FileCacheHandle,&local_d0,&local_70,this->LibraryCodeOffset + local_f0->Offset);
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,&local_70);
    this_00->_padding_ = (longlong)&___7__TGraphTask_UFPreloadShaderTask____6B_;
  }
  this_00[1]._padding_ = (longlong)this;
  this_00[1]._padding_ = 0;
  this_00[1]._padding_ = (longlong)local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  *(int *)&this_00[1]._padding_ = param_1;
  UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_f7,&local_f8);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_f7[0],local_f8,None);
  TaskTrace::Created((ulong64)this_00->TraceId,0xf0);
  LOCK();
  this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
  UNLOCK();
  if (FVar4 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_88) {
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      puVar18 = (undefined8 *)this_00->_padding_;
      pFVar23 = this_00;
LAB_145e1e62d:
      (*(code *)*puVar18)(pFVar23);
    }
  }
  else {
    pFVar23 = *(FTaskBase **)FVar4;
    *(FTaskBase **)FVar4 = this_00;
    if (pFVar23 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar23->RefCount;
      aVar5 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        puVar18 = (undefined8 *)pFVar23->_padding_;
        goto LAB_145e1e62d;
      }
    }
  }
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  local_c0[4] = '\0';
  local_c0[5] = '\0';
  local_c0[6] = '\0';
  local_c0[7] = '\0';
  local_c0._0_4_ = local_f0->Size;
  if (local_c0 != (uchar  [8])0x0) {
    FVar20 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
    if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
      pFVar19 = ::FName::FName(&local_80,"STAT_Shaders_ShaderPreloadMemory");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderPreloadMemory,
                          *pFVar19,L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar8 = *(FName *)FVar20;
    FVar25 = FVar8.ComparisonIndex.Value;
    uVar14 = FVar8.Number;
    local_d8 = FVar25.Value;
    uStack_d4 = uVar14;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      auVar11 = local_c0;
      local_a8.NameAndInfo.Number = uVar14 & 0xffffafff | 0xa000;
      local_a8.StatData.Pad[0] = local_c0[0];
      local_a8.StatData.Pad[1] = local_c0[1];
      local_a8.StatData.Pad[2] = local_c0[2];
      local_a8.StatData.Pad[3] = local_c0[3];
      local_a8.StatData.Pad[4] = local_c0[4];
      local_a8.StatData.Pad[5] = local_c0[5];
      local_a8.StatData.Pad[6] = local_c0[6];
      local_a8.StatData.Pad[7] = local_c0[7];
      local_b8 = FVar8;
      local_a8.NameAndInfo.Index.Value = FVar25.Value;
      FThreadStats::AddStatMessage(this_01,&local_a8);
      FStatsTrace::Add(&local_b8,(long64)auVar11);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  this_03 = FCsvProfiler::Get();
  uVar14 = _GCsvCategory_Shaders.Index;
  pFVar19 = ::FName::FName(&local_78,L"PreloadedShaderMB");
  pTVar21 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat(this_03,*pFVar19,uVar14,false);
  puVar2 = &local_f0->Size;
  aVar15 = pTVar21->Value;
  local_f0 = (FShaderCodeEntry *)CONCAT44(local_f0._4_4_,aVar15);
  fVar26 = (float)*puVar2 * __real_35800000;
  do {
    LOCK();
    aVar6 = pTVar21->Value;
    bVar12 = aVar15 == aVar6;
    if (bVar12) {
      pTVar21->Value = (atomic<float>)((float)aVar15 + fVar26);
      aVar6 = aVar15;
    }
    aVar15 = aVar6;
    UNLOCK();
  } while (!bVar12);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d0 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar10 == 1) && (local_d0 != (longlong *)0x0)) {
      (**(code **)(*local_d0 + 0x20))(local_d0,1);
    }
  }
  FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar24 = local_70.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar24,local_70.ArrayNum);
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
LAB_145e1e85a:
  if (*(longlong *)FVar4 != 0) {
    FVar24 = (param_2->AllocatorInstance).SecondaryData;
    FVar22 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
    if (FVar24 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar22 = FVar24;
    }
    if ((ulonglong)FVar22 <= (ulonglong)FVar4) {
      FVar22 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
      if (FVar24 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar22 = FVar24;
      }
      if (((ulonglong)FVar4 < (ulonglong)((longlong)FVar22 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
    }
    iVar16 = param_2->ArrayNum;
    if (iVar16 == param_2->ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar16 + 1;
    FVar24 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar24 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_2 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar24;
    }
    *(undefined8 *)((longlong)param_2 + (longlong)iVar16 * 8) = 0;
    lVar10 = *(longlong *)FVar4;
    *(longlong *)((longlong)param_2 + (longlong)iVar16 * 8) = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
      UNLOCK();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ShaderPreloadLock);
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_e8);
  return true;
}

// PreloadShaderMap @ 145e1f5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FShaderCodeArchive::PreloadShaderMap
          (FShaderCodeArchive *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  longlong *plVar3;
  FPlatformRWLock *SRWLock;
  FShaderUsageVisualizer *lpCriticalSection;
  atomic<unsigned_int> aVar4;
  atomic<float> aVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  FName FVar7;
  code *pcVar8;
  longlong *plVar9;
  FShaderCodeArchive *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  atomic<float> aVar14;
  FShaderMapEntry *pFVar15;
  void *pvVar16;
  FTaskBase *this_00;
  undefined8 *puVar17;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCsvProfiler *this_03;
  TCsvPersistentCustomStat<float> *pTVar21;
  FTaskBase *pFVar22;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  uint uVar27;
  uchar auVar28 [8];
  FNameEntryId FVar29;
  float fVar30;
  undefined1 auStackY_188 [32];
  EExtendedTaskPriority local_128;
  ETaskPriority local_127 [3];
  int local_124;
  uint local_120;
  atomic<float> local_118;
  uint local_110;
  uint uStack_10c;
  uint local_108;
  FShaderCodeArchive *local_100;
  FLLMScope local_f8;
  uint local_f4;
  uint local_f0 [2];
  FScriptContainerElement *local_e8;
  int local_e0 [2];
  FShaderMapEntry *local_d8;
  FScriptContainerElement *local_d0;
  FName local_c8;
  FMemScope local_c0;
  FStatMessage local_b8;
  TArrayView<FShaderMapEntry_const_,int> local_a8;
  undefined1 local_98 [8];
  FName local_90;
  FName local_88;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_100 = this;
  FLLMScope::FLLMScope(&local_f8,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,Shaders,true);
  local_a8.DataPtr =
       (FShaderMapEntry *)(this->SerializedShaders).ShaderMapEntries.AllocatorInstance.Data;
  local_a8.ArrayNum = (this->SerializedShaders).ShaderMapEntries.ArrayNum;
  if ((local_a8.ArrayNum < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  pFVar15 = TArrayView<FShaderMapEntry_const_,int>::operator[](&local_a8,param_1);
  SRWLock = &this->ShaderPreloadLock;
  local_118 = (atomic<float>)GShaderCodeLibraryAsyncLoadingPriority;
  local_f4 = GFrameNumber;
  local_120 = 0;
  local_d8 = pFVar15;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  local_124 = (this->SerializedShaders).ShaderIndices.ArrayNum;
  pFVar25 = (this->SerializedShaders).ShaderIndices.AllocatorInstance.Data;
  local_d0 = pFVar25;
  if ((local_124 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  local_108 = 0;
  uVar27 = 0;
  if (pFVar15->NumShaders != 0) {
    do {
      uVar24 = pFVar15->ShaderIndicesOffset + local_108;
      uVar27 = 0;
      if ((int)uVar24 < local_124) {
        uVar27 = ~uVar24 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      uVar27 = *(uint *)(pFVar25 + (longlong)(int)uVar24 * 4);
      lVar26 = (longlong)(int)uVar27;
      uVar24 = 0;
      if ((int)uVar27 < (this->ShaderPreloads).ArrayNum) {
        uVar24 = ~uVar27 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      FVar23 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
               ((longlong)(this->ShaderPreloads).AllocatorInstance.Data + lVar26 * 0x18);
      iVar13 = (local_100->SerializedShaders).ShaderEntries.ArrayNum;
      local_e8 = (local_100->SerializedShaders).ShaderEntries.AllocatorInstance.Data;
      if ((iVar13 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      uVar24 = 0;
      if ((int)uVar27 < iVar13) {
        uVar24 = ~uVar27 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      if ((GRHIGlobals.IsRHIInitialized == false) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("GRHIGlobals.IsRHIInitialized",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderUtils.cpp"
                              ,0x6fd,
                              L"IsRayTracingAllowed() may only be called once RHI is initialized."),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      if ((GRayTracingMode != Disabled) ||
         (bVar11 = ::`anonymous_namespace'::IsCreateShadersOnLoadEnabled(), bVar11)) {
switchD_145e1f85b_caseD_0:
        pFVar25 = local_e8;
        uVar24 = *(uint *)((longlong)FVar23 + 0x14);
        *(uint *)((longlong)FVar23 + 0x14) = (uVar24 + 1 ^ uVar24) & 0x7fffffff ^ uVar24;
        if ((uVar24 & 0x7fffffff) == 0) {
          if ((*(longlong *)FVar23 != 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ShaderPreloadEntry.PreloadEvent",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                                  ,0x52a,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          pvVar16 = FMemory::Malloc((ulonglong)*(uint *)(pFVar25 + lVar26 * 0x18 + 8),0);
          pFVar10 = local_100;
          *(void **)((longlong)FVar23 + 8) = pvVar16;
          *(uint *)((longlong)FVar23 + 0x10) = local_f4;
          lpCriticalSection = &local_100->DebugVisualizer;
          local_f0[0] = uVar27;
          if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
            if (lpCriticalSection == (FShaderUsageVisualizer *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&(pFVar10->DebugVisualizer).ExplicitlyPreloadedShaders,local_e0,
                       (bool *)local_f0);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
          local_120 = local_120 + *(int *)(pFVar25 + lVar26 * 0x18 + 8);
          local_80.AllocatorInstance.SecondaryData =
               (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_80.ArrayNum = 0;
          local_80.ArrayMax = 4;
          (**(code **)((longlong)*local_100->FileCacheHandle + 8))
                    (local_100->FileCacheHandle,&local_110,&local_80,
                     local_100->LibraryCodeOffset + *(longlong *)(pFVar25 + lVar26 * 0x18));
          this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
          if (this_00 == (FTaskBase *)0x0) {
            this_00 = (FTaskBase *)0x0;
          }
          else {
            FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,&local_80);
            this_00->_padding_ = (longlong)&___7__TGraphTask_UFPreloadShaderTask____6B_;
          }
          this_00[1]._padding_ = (longlong)local_100;
          this_00[1]._padding_ = 0;
          this_00[1]._padding_ = CONCAT44(uStack_10c,local_110);
          if (CONCAT44(uStack_10c,local_110) != 0) {
            LOCK();
            piVar1 = (int *)(CONCAT44(uStack_10c,local_110) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *(uint *)&this_00[1]._padding_ = uVar27;
          UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_127,&local_128);
          UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_127[0],local_128,None);
          TaskTrace::Created((ulong64)this_00->TraceId,0xf0);
          LOCK();
          this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
          UNLOCK();
          if (FVar23 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_98) {
            LOCK();
            paVar2 = &this_00->RefCount;
            aVar4 = *paVar2;
            *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar4 == (atomic<unsigned_int>)0x1) {
              puVar17 = (undefined8 *)this_00->_padding_;
              pFVar22 = this_00;
LAB_145e1fa5d:
              (*(code *)*puVar17)(pFVar22);
            }
          }
          else {
            pFVar22 = *(FTaskBase **)FVar23;
            *(FTaskBase **)FVar23 = this_00;
            if (pFVar22 != (FTaskBase *)0x0) {
              LOCK();
              paVar2 = &pFVar22->RefCount;
              aVar4 = *paVar2;
              *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar4 == (atomic<unsigned_int>)0x1) {
                puVar17 = (undefined8 *)pFVar22->_padding_;
                goto LAB_145e1fa5d;
              }
            }
          }
          if (this_00->ExtendedPriority == TaskEvent) {
            LOCK();
            this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
            UNLOCK();
          }
          UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
          FVar6 = (param_2->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
          if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = FVar6;
          }
          if ((ulonglong)FVar18 <= (ulonglong)FVar23) {
            FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
            if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar18 = FVar6;
            }
            if (((ulonglong)FVar23 < (ulonglong)((longlong)FVar18 + (longlong)param_2->ArrayMax * 8)
                ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
              pcVar8 = (code *)swi(3);
              uVar12 = (*pcVar8)();
              return (bool)uVar12;
            }
          }
          iVar13 = param_2->ArrayNum;
          if (iVar13 == param_2->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar13 + 1;
          FVar6 = (param_2->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
          if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = FVar6;
          }
          *(undefined8 *)((longlong)FVar18 + (longlong)iVar13 * 8) = 0;
          lVar26 = *(longlong *)FVar23;
          *(longlong *)((longlong)FVar18 + (longlong)iVar13 * 8) = lVar26;
          if (lVar26 != 0) {
            LOCK();
            *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
            UNLOCK();
          }
          plVar9 = (longlong *)CONCAT44(uStack_10c,local_110);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar9 + 1;
            lVar26 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if (((int)lVar26 == 1) && (plVar9 != (longlong *)0x0)) {
              (**(code **)(*plVar9 + 0x20))(plVar9,1);
            }
          }
          FVar23 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_80;
          if (local_80.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar23 = local_80.AllocatorInstance.SecondaryData;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar23,local_80.ArrayNum);
          if (local_80.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
          }
        }
        else if (*(longlong *)FVar23 != 0) {
          FVar6 = (param_2->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
          if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = FVar6;
          }
          if ((ulonglong)FVar18 <= (ulonglong)FVar23) {
            FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
            if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar18 = FVar6;
            }
            if (((ulonglong)FVar23 < (ulonglong)((longlong)FVar18 + (longlong)param_2->ArrayMax * 8)
                ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
              pcVar8 = (code *)swi(3);
              uVar12 = (*pcVar8)();
              return (bool)uVar12;
            }
          }
          iVar13 = param_2->ArrayNum;
          if (iVar13 == param_2->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar13 + 1;
          FVar6 = (param_2->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
          if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = FVar6;
          }
          *(undefined8 *)((longlong)FVar18 + (longlong)iVar13 * 8) = 0;
          lVar26 = *(longlong *)FVar23;
          *(longlong *)((longlong)FVar18 + (longlong)iVar13 * 8) = lVar26;
          if (lVar26 != 0) {
            LOCK();
            *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
            UNLOCK();
          }
        }
      }
      else {
        switch(local_e8[lVar26 * 0x18 + 0x10]) {
        default:
          goto switchD_145e1f85b_caseD_0;
        case (FScriptContainerElement)0x6:
        case (FScriptContainerElement)0x7:
        case (FScriptContainerElement)0x8:
        case (FScriptContainerElement)0x9:
          *(uint *)((longlong)FVar23 + 0x14U) = *(uint *)((longlong)FVar23 + 0x14U) | 0x80000000;
        }
      }
      local_108 = local_108 + 1;
      pFVar15 = local_d8;
      pFVar25 = local_d0;
      this = local_100;
      uVar27 = local_120;
    } while (local_108 < local_d8->NumShaders);
  }
  auVar28[4] = '\0';
  auVar28[5] = '\0';
  auVar28[6] = '\0';
  auVar28[7] = '\0';
  auVar28[0] = (char)uVar27;
  auVar28[1] = (char)(uVar27 >> 8);
  auVar28[2] = (char)(uVar27 >> 0x10);
  auVar28[3] = (char)(uVar27 >> 0x18);
  if (uVar27 != 0) {
    FVar20 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
    if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
      pFVar19 = ::FName::FName(&local_90,"STAT_Shaders_ShaderPreloadMemory");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderPreloadMemory,
                          *pFVar19,L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar7 = *(FName *)FVar20;
    FVar29 = FVar7.ComparisonIndex.Value;
    uVar24 = FVar7.Number;
    local_110 = FVar29.Value;
    uStack_10c = uVar24;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_b8.NameAndInfo.Number = uVar24 & 0xffffafff | 0xa000;
      local_c8 = FVar7;
      local_b8.StatData.Pad = auVar28;
      local_b8.NameAndInfo.Index.Value = FVar29.Value;
      FThreadStats::AddStatMessage(this_01,&local_b8);
      FStatsTrace::Add(&local_c8,(long64)auVar28);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  this_03 = FCsvProfiler::Get();
  uVar24 = _GCsvCategory_Shaders.Index;
  pFVar19 = ::FName::FName(&local_88,L"PreloadedShaderMB");
  fVar30 = (float)uVar27 * __real_35800000;
  pTVar21 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat(this_03,*pFVar19,uVar24,false);
  local_118 = pTVar21->Value;
  aVar14 = local_118;
  do {
    LOCK();
    aVar5 = pTVar21->Value;
    bVar11 = aVar14 == aVar5;
    if (bVar11) {
      pTVar21->Value = (atomic<float>)((float)aVar14 + fVar30);
      aVar5 = aVar14;
    }
    aVar14 = aVar5;
    UNLOCK();
  } while (!bVar11);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(&local_f8);
  return true;
}

// ReleasePreloadedShader @ 145e21140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderCodeArchive::ReleasePreloadedShader(FShaderCodeArchive *this,int param_1)

{
  undefined1 *puVar1;
  FShaderPreloadEntry *pFVar2;
  int iVar3;
  atomic<float> aVar4;
  FScriptContainerElement *pFVar5;
  FBaseGraphTask *pFVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  atomic<float> aVar11;
  FShaderCodeEntry *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCsvProfiler *this_02;
  TCsvPersistentCustomStat<float> *pTVar15;
  uchar auVar16 [8];
  float fVar17;
  FName local_res8;
  atomic<float> local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_58;
  TArrayView<FShaderCodeEntry_const_,int> local_48;
  
  uVar10 = 0;
  if (param_1 < (this->ShaderPreloads).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = (this->ShaderPreloads).AllocatorInstance.Data;
  pFVar2 = (FShaderPreloadEntry *)(pFVar5 + (longlong)param_1 * 0x18);
  if (-1 < *(int *)(pFVar5 + (longlong)param_1 * 0x18 + 0x14)) {
    WaitForPreload(this,pFVar2);
    AcquireSRWLockExclusive((PSRWLOCK)&this->ShaderPreloadLock);
    pFVar6 = (pFVar2->PreloadEvent).Reference;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      (pFVar2->PreloadEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar6->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
    }
    puVar1 = &pFVar2->field_0x14;
    uVar10 = ZPULL(*(undefined4 *)puVar1,0,0x1f);
    *(uint *)&pFVar2->field_0x14 =
         (pFVar2->NumRefs - 1 ^ pFVar2->NumRefs) & 0x7fffffff ^ *(undefined4 *)puVar1;
    if ((pFVar2->Code == (void *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderPreloadEntry.Code",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                           ,0x56a,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderNumRefs > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0x56b,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (uVar10 == 1) {
      FMemory::Free(pFVar2->Code);
      pFVar2->Code = (void *)0x0;
      local_48.DataPtr =
           (FShaderCodeEntry *)(this->SerializedShaders).ShaderEntries.AllocatorInstance.Data;
      local_48.ArrayNum = (this->SerializedShaders).ShaderEntries.ArrayNum;
      if ((local_48.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar12 = TArrayView<FShaderCodeEntry_const_,int>::operator[](&local_48,param_1);
      auVar16[4] = '\0';
      auVar16[5] = '\0';
      auVar16[6] = '\0';
      auVar16[7] = '\0';
      auVar16._0_4_ = pFVar12->Size;
      if (auVar16 != (uchar  [8])0x0) {
        FVar14 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
        if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
          pFVar13 = ::FName::FName(&local_res18,"STAT_Shaders_ShaderPreloadMemory");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderPreloadMemory
                              ,*pFVar13,L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced"
                              ,L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar7 = *(FName *)FVar14;
        local_res8 = FVar7;
        if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_58.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
          local_res8 = FVar7;
          local_58.StatData.Pad = auVar16;
          local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,&local_58);
          FStatsTrace::Add(&local_res8,-(longlong)auVar16);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      this_02 = FCsvProfiler::Get();
      uVar10 = _GCsvCategory_Shaders.Index;
      pFVar13 = ::FName::FName(&local_res20,L"PreloadedShaderMB");
      pTVar15 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat(this_02,*pFVar13,uVar10,false);
      local_res10 = pTVar15->Value;
      fVar17 = (float)pFVar12->Size * __real_b5800000;
      aVar11 = local_res10;
      do {
        LOCK();
        aVar4 = pTVar15->Value;
        bVar9 = aVar11 == aVar4;
        if (bVar9) {
          pTVar15->Value = (atomic<float>)((float)aVar11 + fVar17);
          aVar4 = aVar11;
        }
        aVar11 = aVar4;
        UNLOCK();
      } while (!bVar9);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ShaderPreloadLock);
  }
  return;
}

// Teardown @ 145e34d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderCodeArchive::Teardown(FShaderCodeArchive *this)

{
  atomic<float> aVar1;
  int iVar2;
  IFileCacheHandle *pIVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  atomic<float> aVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCsvProfiler *this_02;
  TCsvPersistentCustomStat<float> *pTVar14;
  uchar auVar15 [8];
  longlong lVar16;
  uint uVar17;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FStatMessage local_70 [3];
  
  pIVar3 = this->FileCacheHandle;
  if (pIVar3 != (IFileCacheHandle *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
    this->FileCacheHandle = (IFileCacheHandle *)0x0;
  }
  fVar8 = __real_b5800000;
  uVar17 = 0;
  if (0 < (this->SerializedShaders).ShaderEntries.ArrayNum) {
    lVar16 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar17 < (this->ShaderPreloads).ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this->ShaderPreloads).AllocatorInstance.Data;
      if (*(longlong *)(pFVar4 + lVar16 + 8) != 0) {
        iVar2 = (this->SerializedShaders).ShaderEntries.ArrayNum;
        pFVar5 = (this->SerializedShaders).ShaderEntries.AllocatorInstance.Data;
        if ((iVar2 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar17 < iVar2) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FMemory::Free(*(void **)(pFVar4 + lVar16 + 8));
        *(undefined8 *)(pFVar4 + lVar16 + 8) = 0;
        auVar15[4] = '\0';
        auVar15[5] = '\0';
        auVar15[6] = '\0';
        auVar15[7] = '\0';
        auVar15._0_4_ = *(uint *)(pFVar5 + lVar16 + 8);
        if (auVar15 != (uchar  [8])0x0) {
          FVar13 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
          if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
              (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
            pFVar12 = ::FName::FName(&local_res20,"STAT_Shaders_ShaderPreloadMemory");
            FVar13 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_Shaders_ShaderPreloadMemory,*pFVar12,
                                L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",
                                L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar6 = *(FName *)FVar13;
          if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            local_70[0].NameAndInfo.Number = FVar6.Number & 0xffffbfff | 0xb000;
            local_res18 = FVar6;
            local_70[0].StatData.Pad = auVar15;
            local_70[0].NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this_00,local_70);
            FStatsTrace::Add(&local_res18,-(longlong)auVar15);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
        this_02 = FCsvProfiler::Get();
        uVar10 = _GCsvCategory_Shaders.Index;
        pFVar12 = ::FName::FName(&local_78,L"PreloadedShaderMB");
        pTVar14 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat(this_02,*pFVar12,uVar10,false);
        uVar10 = *(uint *)(pFVar5 + lVar16 + 8);
        aVar11 = pTVar14->Value;
        do {
          LOCK();
          aVar1 = pTVar14->Value;
          bVar9 = aVar11 == aVar1;
          if (bVar9) {
            pTVar14->Value = (atomic<float>)((float)aVar11 + (float)uVar10 * fVar8);
            aVar1 = aVar11;
          }
          aVar11 = aVar1;
          UNLOCK();
        } while (!bVar9);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x18;
    } while ((int)uVar17 < (this->SerializedShaders).ShaderEntries.ArrayNum);
  }
  FShaderUsageVisualizer::SaveShaderUsageBitmap
            (&this->DebugVisualizer,(FString *)&this->_padding_,(EShaderPlatform)this->_padding_);
  return;
}

// WaitForPreload @ 145e38670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FShaderCodeArchive::WaitForPreload(FShaderCodeArchive *this,FShaderPreloadEntry *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FTaskGraphInterface *this_00;
  FBaseGraphTask *pFVar7;
  TRefCountPtr<FBaseGraphTask> local_res8;
  
  local_res8.Reference = (FBaseGraphTask *)0x0;
  AcquireSRWLockShared((PSRWLOCK)&this->ShaderPreloadLock);
  pFVar7 = (FBaseGraphTask *)0x0;
  if (param_1->NumRefs == 0) {
    if ((param_1->PreloadEvent).Reference != (FBaseGraphTask *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShaderPreloadEntry.PreloadEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0x552,L"");
      pFVar7 = (FBaseGraphTask *)0x0;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  else {
    pFVar3 = (param_1->PreloadEvent).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar3->field_0x30 = *(int *)&pFVar3->field_0x30 + 1;
      UNLOCK();
      pFVar7 = pFVar3;
      local_res8.Reference = pFVar3;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ShaderPreloadLock);
  if ((pFVar7 == (FBaseGraphTask *)0x0) || (pFVar7->field_0xd0 != '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(this_00,&local_res8,AnyNormalThreadNormalTask);
  }
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar7->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
    }
  }
  return bVar5;
}

// operator() @ 1504dd060

bool __thiscall `FShaderCodeArchive::CreateShader'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<889625449422914981>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<889625449422914981>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

