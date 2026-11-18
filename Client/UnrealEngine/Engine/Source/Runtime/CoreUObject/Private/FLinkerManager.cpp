// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// FLinkerManager @ 1420a2610

FLinkerManager * __thiscall FLinkerManager::FLinkerManager(FLinkerManager *this)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)this);
  this->_padding_ = (longlong)&___7FLinkerManager__6B_;
  *(undefined8 *)&(this->ObjectLoaders).Elements = 0;
  *(undefined8 *)&(this->ObjectLoaders).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ObjectLoaders).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ObjectLoaders).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ObjectLoaders).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectLoaders).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectLoaders).Elements.field_0x34 = 0;
  (this->ObjectLoaders).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectLoaders).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ObjectLoadersCritical,4000);
  *(undefined8 *)&(this->LoadersWithNewImports).Elements = 0;
  *(undefined8 *)&(this->LoadersWithNewImports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LoadersWithNewImports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LoadersWithNewImports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LoadersWithNewImports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadersWithNewImports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadersWithNewImports).Elements.field_0x34 = 0;
  (this->LoadersWithNewImports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LoadersWithNewImports).HashSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->LoadersWithNewImportsCritical,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LiveLinkersCritical,4000);
  *(undefined8 *)&(this->LiveLinkers).Elements = 0;
  *(undefined8 *)&(this->LiveLinkers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LiveLinkers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LiveLinkers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LiveLinkers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LiveLinkers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LiveLinkers).Elements.field_0x34 = 0;
  (this->LiveLinkers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LiveLinkers).HashSize = 0;
  *(undefined8 *)&(this->LoadersWithForcedExports).Elements = 0;
  *(undefined8 *)&(this->LoadersWithForcedExports).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LoadersWithForcedExports).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LoadersWithForcedExports).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LoadersWithForcedExports).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadersWithForcedExports).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadersWithForcedExports).Elements.field_0x34 = 0;
  (this->LoadersWithForcedExports).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LoadersWithForcedExports).HashSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->LoadersWithForcedExportsCritical,4000);
  *(undefined8 *)&(this->PendingCleanupList).Elements = 0;
  *(undefined8 *)&(this->PendingCleanupList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingCleanupList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x34 = 0;
  (this->PendingCleanupList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingCleanupList).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PendingCleanupListCritical,4000);
  this->bHasPendingCleanup = (FThreadSafeBool)0x0;
  return this;
}

// ~FLinkerManager @ 1420a4ab0

void __thiscall FLinkerManager::~FLinkerManager(FLinkerManager *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FLinkerManager__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingCleanupListCritical);
  (this->PendingCleanupList).HashSize = 0;
  FVar1 = (this->PendingCleanupList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingCleanupList).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LoadersWithForcedExportsCritical);
  (this->LoadersWithForcedExports).HashSize = 0;
  FVar1 = (this->LoadersWithForcedExports).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadersWithForcedExports).Elements);
  (this->LiveLinkers).HashSize = 0;
  FVar1 = (this->LiveLinkers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LiveLinkers).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LiveLinkersCritical);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LoadersWithNewImportsCritical);
  (this->LoadersWithNewImports).HashSize = 0;
  FVar1 = (this->LoadersWithNewImports).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadersWithNewImports).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectLoadersCritical);
  (this->ObjectLoaders).HashSize = 0;
  FVar1 = (this->ObjectLoaders).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ObjectLoaders).Elements);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  return;
}

// DeleteLinkers @ 1420b1870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLinkerManager::DeleteLinkers(FLinkerManager *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  FLinkerLoad *this_01;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_void___cdecl_FLinkerManager::DeleteLinkers(void)_::_12_::FStat_STAT_FLinkerManager_DeleteLinkers>
  FVar9;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FName local_res20;
  FName local_98;
  FName local_90;
  code *local_80;
  undefined1 *local_78;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> local_70;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerManager.cpp"
                         ,0x142,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->bHasPendingCleanup == (FThreadSafeBool)0x0) {
    return;
  }
  uVar14 = (ulonglong)_tls_index;
  pFVar19 = (FScriptContainerElement *)0x0;
  iVar18 = 0;
  LOCK();
  this->bHasPendingCleanup = (FThreadSafeBool)0x0;
  UNLOCK();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FLinkerManager_DeleteLinkers ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FLinkerManager::DeleteLinkers(void)_::_12_::FStat_STAT_FLinkerManager_DeleteLinkers>
         )0x0) {
      pFVar8 = ::FName::FName(&local_res20,"STAT_FLinkerManager_DeleteLinkers");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FLinkerManager_DeleteLinkers,*pFVar8,
                 L"STAT_FLinkerManager_DeleteLinkers","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_FLinkerManager_DeleteLinkers;
  if (StatPtr_STAT_FLinkerManager_DeleteLinkers ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FLinkerManager::DeleteLinkers(void)_::_12_::FStat_STAT_FLinkerManager_DeleteLinkers>
       )0x0) {
    pFVar8 = ::FName::FName(&local_98,"STAT_FLinkerManager_DeleteLinkers");
    FVar9 = (FThreadSafeStaticStat<_public:_void___cdecl_FLinkerManager::DeleteLinkers(void)_::_12_::FStat_STAT_FLinkerManager_DeleteLinkers>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FLinkerManager_DeleteLinkers,
                         *pFVar8,L"STAT_FLinkerManager_DeleteLinkers","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar9;
  bVar7 = false;
  bVar6 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerManager.cpp"
                   ,0x148);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar15.Bits;
      uStackX_14 = uVar13;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      goto LAB_1420b1a60;
    }
  }
  bVar5 = false;
  FVar16 = local_90;
LAB_1420b1a60:
  if (__CsvProfilerStat329 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("DeleteLinkers");
    __CsvProfilerStat329 = true;
  }
  FCsvProfiler::BeginExclusiveStat("DeleteLinkers","CSV_DeleteLinkers");
  lpCriticalSection = &this->PendingCleanupListCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->PendingCleanupList;
    pTVar10 = TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Array
                        (this_00,&local_70);
    if (local_60 != pTVar10) {
      pFVar19 = (pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar18 = pTVar10->ArrayNum;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    bVar3 = 1 < (this->PendingCleanupList).HashSize;
    if (!bVar3) {
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::UnhashElements
                (this_00);
    }
    puVar1 = &(this->PendingCleanupList).Elements.field_0xc;
    *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x34 = 0;
    iVar2 = *(int *)&(this->PendingCleanupList).Elements.field_0x2c;
    *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PendingCleanupList).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PendingCleanupList).Elements.field_0x10,0);
    }
    if (bVar3) {
      (this->PendingCleanupList).HashSize = 1;
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_78 = local_res8;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar12 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,puVar11);
    pFVar12[4].field_0x1 = 1;
    for (pFVar17 = pFVar19; pFVar17 != pFVar19 + (longlong)iVar18 * 8; pFVar17 = pFVar17 + 8) {
      this_01 = *(FLinkerLoad **)pFVar17;
      if (this_01 != (FLinkerLoad *)0x0) {
        FLinkerLoad::~FLinkerLoad(this_01);
        ::operator_delete(this_01,0x4f0);
      }
    }
    pFVar12[4].field_0x1 = 0;
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar19);
    }
    FCsvProfiler::EndExclusiveStat("DeleteLinkers");
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar5) {
      FThreadStats::AddMessage(FVar16,CycleScopeEnd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DissociateImportsAndForcedExports @ 1420b3350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLinkerManager::DissociateImportsAndForcedExports(FLinkerManager *this)

{
  FWindowsRecursiveMutex *pFVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  FLinkerManager *pFVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  FUObjectItem *pFVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  byte bVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  FObjectExport *this_00;
  uint uVar17;
  FObjectExport *pFVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_238 [32];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [4];
  uint local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  int local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  FLinkerManager *local_1b0;
  longlong *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  int local_188;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  code *local_118;
  undefined1 *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined4 local_dc;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  pFVar1 = &this->LoadersWithNewImportsCritical;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_1b0 = this;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
            ((TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *)local_d8,
             &this->LoadersWithNewImports);
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  uVar19 = local_b0;
  local_1f8 = 1;
  local_1d0 = 0;
  uStack_1e4 = 1;
  uStack_1d4 = 0;
  iStack_1e8 = 0;
  if (local_b0 != 0) {
    puVar11 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar11 = local_b8;
    }
    uStack_1e4 = *puVar11;
    local_1d0 = 0;
    while (uStack_1e4 == 0) {
      lVar14 = (longlong)iStack_1e8;
      local_1d0 = local_1d0 + 0x20;
      iStack_1e8 = iStack_1e8 + 1;
      uStack_1e4 = 1;
      uStack_1d4 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
      goto LAB_1420b3491;
      uStack_1e4 = puVar11[lVar14 + 1];
    }
    uStack_1e4 = -uStack_1e4 & uStack_1e4;
    uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1c0 = (int)lVar14;
    uStack_1d4 = local_1d0 + -1 + local_1c0;
    if ((int)local_b0 < (int)uStack_1d4) {
      uStack_1d4 = local_b0;
    }
  }
LAB_1420b3491:
  local_1f0 = (longlong *)local_d8;
  uStack_1cc = local_dc;
  local_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  iStack_1c8 = local_d8._8_4_ - local_a4;
  uVar17 = local_b0 & 0xffffffe0;
  TStack_170._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
  uStack_1d8 = 0xffffffff;
  TStack_170.CurrentBitIndex = uStack_1d4;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_b0 >> 5;
  TStack_170._28_4_ = local_dc;
  TStack_170.BaseBitIndex = local_1d0;
  uStack_150 = CONCAT44(uStack_1c4,iStack_1c8);
  bVar13 = (byte)local_b0;
  local_200 = local_b0;
  local_178 = local_1f0;
  TStack_170.Array = local_1e0;
  if (((int)local_b0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = local_200;
  if (uVar19 != local_b0) {
    puVar11 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar11 = local_b8;
    }
    uVar19 = -1 << (bVar13 & 0x1f) & puVar11[iVar15];
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
        local_200 = local_b0;
        uVar5 = local_b0;
        goto LAB_1420b35c0;
      }
      uVar19 = puVar11[lVar14 + 1];
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1bc = (int)lVar14;
    local_200 = local_1bc + -1 + uVar17;
    uVar5 = local_200;
    if ((int)local_b0 < (int)local_200) {
      local_200 = local_b0;
      uVar5 = local_b0;
    }
  }
LAB_1420b35c0:
  while( true ) {
    plVar7 = local_178;
    if ((int)local_178[1] - *(int *)((longlong)local_178 + 0x34) != (int)uStack_150) {
      local_208 = 0;
      `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
    }
    if (((TStack_170.CurrentBitIndex == uVar5) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar7 == (longlong *)local_d8)) break;
    uVar19 = 0;
    lVar14 = *(longlong *)(*plVar7 + (longlong)TStack_170.CurrentBitIndex * 0x10);
    if (0 < *(int *)(lVar14 + 0x10)) {
      lVar20 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar19 < *(int *)(lVar14 + 0x10)) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar16 = *(longlong *)(lVar14 + 8) + lVar20;
        lVar3 = *(longlong *)(lVar16 + 0x30);
        if (lVar3 == 0) {
LAB_1420b36db:
          if ((*(longlong *)(lVar16 + 0x28) != 0) &&
             (pFVar10 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,*(int *)(*(longlong *)(lVar16 + 0x28) + 0xc)),
             ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0))
          goto LAB_1420b3700;
        }
        else {
          uVar17 = *(uint *)(lVar16 + 0x1c);
          if (uVar17 == 0xffffffff) goto LAB_1420b36db;
          uVar9 = 0;
          if ((int)uVar17 < *(int *)(lVar3 + 0x20)) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)((longlong)(int)uVar17 * 0x68 + 0x40 + *(longlong *)(lVar3 + 0x18)) ==
              *(longlong *)(lVar16 + 0x28)) goto LAB_1420b36db;
LAB_1420b3700:
          *(undefined8 *)(lVar16 + 0x28) = 0;
        }
        uVar19 = uVar19 + 1;
        *(undefined8 *)(lVar16 + 0x30) = 0;
        lVar20 = lVar20 + 0x38;
        *(undefined4 *)(lVar16 + 0x1c) = 0xffffffff;
      } while ((int)uVar19 < *(int *)(lVar14 + 0x10));
    }
    puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_110 = &local_207;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar12 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_118,puVar11);
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    *(undefined4 *)((longlong)pFVar12[0x2f] + 4) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  pFVar6 = local_1b0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  pFVar1 = &local_1b0->LoadersWithForcedExportsCritical;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
            ((TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *)local_88,
             &pFVar6->LoadersWithForcedExports);
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  uVar19 = local_60;
  iStack_1a0 = 0;
  local_188 = 0;
  uStack_18c = 0;
  if (local_60 != 0) {
    puVar11 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar11 = local_68;
    }
    uVar17 = *puVar11;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_1a0;
      local_188 = local_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      uStack_18c = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
      goto LAB_1420b38d3;
      uVar17 = puVar11[lVar14 + 1];
    }
    local_1f8 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = local_1f8 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1b8 = (int)lVar14;
    uStack_18c = local_188 + -1 + local_1b8;
    if ((int)local_60 < (int)uStack_18c) {
      uStack_18c = local_60;
    }
  }
LAB_1420b38d3:
  local_1a8 = (longlong *)local_88;
  uStack_19c = (undefined4)local_1f8;
  uVar17 = local_60 & 0xffffffe0;
  uStack_184 = uStack_1d4;
  local_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_180 = local_88._8_4_ - local_54;
  uStack_190 = 0xffffffff;
  TStack_140.CurrentBitIndex = uStack_18c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  iVar15 = (int)local_60 >> 5;
  TStack_140._28_4_ = uStack_1d4;
  TStack_140.BaseBitIndex = local_188;
  uStack_120 = CONCAT44(uStack_17c,iStack_180);
  bVar13 = (byte)local_60;
  local_148 = local_1a8;
  TStack_140.Array = local_198;
  if (((int)local_60 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar19 != local_60) {
    puVar11 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar11 = local_68;
    }
    uVar19 = -1 << (bVar13 & 0x1f) & puVar11[iVar15];
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar19 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_1420b39f0;
      uVar19 = puVar11[lVar14 + 1];
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar19 = (int)lVar14 + -1 + uVar17;
    if ((int)local_60 < (int)uVar19) {
      uVar19 = local_60;
    }
  }
LAB_1420b39f0:
  while( true ) {
    plVar7 = local_148;
    if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
      `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_206);
    }
    if (((TStack_140.CurrentBitIndex == uVar19) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar7 == (longlong *)local_88)) break;
    lVar14 = *(longlong *)(*plVar7 + (longlong)TStack_140.CurrentBitIndex * 0x10);
    iVar15 = *(int *)(lVar14 + 0x20);
    this_00 = *(FObjectExport **)(lVar14 + 0x18);
    pFVar18 = this_00 + iVar15;
    while( true ) {
      if (*(int *)(lVar14 + 0x20) != iVar15) {
        `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_205);
      }
      if (this_00 == pFVar18) break;
      if ((this_00->Object != (UObject *)0x0) && (this_00->bForcedExport)) {
        UObject::SetLinker(this_00->Object,(FLinkerLoad *)0x0,-1,true,false);
        FObjectExport::ResetObject(this_00);
      }
      this_00 = this_00 + 1;
    }
    puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_100 = local_204;
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar12 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_108,puVar11);
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    *(undefined4 *)((longlong)pFVar12[0x2f] + 8) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// EnsureLoadingComplete @ 1420b42f0

void __thiscall FLinkerManager::EnsureLoadingComplete(FLinkerManager *this,UPackage *param_1)

{
  return;
}

// Exec_Dev @ 1420b4310

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FLinkerManager::Exec_Dev
          (FLinkerManager *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FNameEntryId FVar1;
  code *pcVar2;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  FNameEntry *this_00;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *pTVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  ulonglong uVar20;
  wchar_t *local_res18;
  FOutputDevice *local_res20;
  uint local_278;
  undefined1 local_274;
  undefined1 local_273;
  undefined1 local_272 [2];
  ulonglong local_270;
  undefined1 local_268 [8];
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_258;
  int iStack_250;
  uint uStack_24c;
  undefined1 *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint local_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  int local_224;
  int local_220;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_218;
  int iStack_210;
  uint uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  int local_178;
  int local_174;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0 [2];
  undefined4 local_84;
  undefined4 local_64;
  undefined4 local_44;
  
  local_res18 = param_2;
  local_res20 = param_3;
  bVar4 = FParse::Command(&local_res18,L"LinkerLoadList",true);
  if (bVar4) {
    if (3 < (byte)LogLinker._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
    }
    iVar8 = *(int *)&(this->ObjectLoaders).Elements.field_0x28;
    local_208 = &(this->ObjectLoaders).Elements.field_0x10;
    iVar19 = 0;
    local_218 = &this->ObjectLoaders;
    iStack_210 = 0;
    local_270 = 1;
    uStack_20c = 1;
    local_1f8 = 0;
    iStack_1fc = 0;
    if (iVar8 != 0) {
      puVar14 = *(uint **)&(this->ObjectLoaders).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_208;
      }
      uStack_20c = *puVar14;
      local_1f8 = 0;
      while (uStack_20c == 0) {
        lVar6 = (longlong)iStack_210;
        local_1f8 = local_1f8 + 0x20;
        iStack_210 = iStack_210 + 1;
        uStack_20c = 1;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_1420b4415;
        uStack_20c = puVar14[lVar6 + 1];
      }
      uStack_20c = -uStack_20c & uStack_20c;
      uVar9 = (ulonglong)uStack_20c * 2 + 1;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_178 = (int)lVar6;
      iStack_1fc = local_178 + -1 + local_1f8;
      if (iVar8 < iStack_1fc) {
LAB_1420b4415:
        iStack_1fc = iVar8;
      }
    }
    puVar13 = &(this->ObjectLoaders).Elements.field_0x10;
    uStack_1f4 = local_44;
    iStack_1f0 = *(int *)&(this->ObjectLoaders).Elements.field_0x8 -
                 *(int *)&(this->ObjectLoaders).Elements.field_0x34;
    local_278 = *(uint *)&(this->ObjectLoaders).Elements.field_0x28;
    TStack_168._padding_ = CONCAT44(uStack_20c,iStack_210);
    uStack_200 = 0xffffffff;
    uVar15 = local_278 & 0xffffffe0;
    TStack_168.CurrentBitIndex = iStack_1fc;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    iVar7 = (int)local_278 >> 5;
    TStack_168._28_4_ = local_44;
    TStack_168.BaseBitIndex = local_1f8;
    uStack_148 = CONCAT44(uStack_1ec,iStack_1f0);
    local_170 = local_218;
    TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_208;
    if ((((int)local_278 < 0) || (iVar8 < (int)local_278)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar10 = *(uint *)&(this->ObjectLoaders).Elements.field_0x28;
    if (local_278 != uVar10) {
      puVar12 = *(undefined1 **)&(this->ObjectLoaders).Elements.field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar13;
      }
      uVar17 = -1 << ((byte)local_278 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar7 * 4);
      while (uVar17 == 0) {
        lVar6 = (longlong)iVar7;
        uVar15 = uVar15 + 0x20;
        iVar7 = iVar7 + 1;
        local_278 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_1420b4535;
        uVar17 = *(uint *)(puVar12 + lVar6 * 4 + 4);
      }
      uVar9 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_174 = (int)lVar6;
      local_278 = local_174 + -1 + uVar15;
      if ((int)uVar10 < (int)local_278) {
        local_278 = uVar10;
      }
    }
LAB_1420b4535:
    while( true ) {
      pTVar16 = local_170;
      if (*(int *)&(local_170->Elements).field_0x8 - *(int *)&(local_170->Elements).field_0x34 !=
          (int)uStack_148) {
        local_274 = 0;
        `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_274);
      }
      if (((TStack_168.CurrentBitIndex == local_278) &&
          (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) &&
         (pTVar16 == &this->ObjectLoaders)) break;
      if (3 < (byte)LogLinker._0_1_) {
        FPackagePath::GetDebugName
                  ((FPackagePath *)
                   (*(longlong *)
                     (*(longlong *)&pTVar16->Elements + (longlong)TStack_168.CurrentBitIndex * 0x10)
                   + 0x3a0),&local_1b8);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
      }
      TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
    }
    if (3 < (byte)LogLinker._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
    }
    local_248 = &(this->LoadersWithNewImports).Elements.field_0x10;
    iVar8 = *(int *)&(this->LoadersWithNewImports).Elements.field_0x28;
    local_258 = &this->LoadersWithNewImports;
    iStack_250 = 0;
    local_238 = 0;
    uStack_24c = (uint)local_270;
    uStack_23c = 0;
    if (iVar8 != 0) {
      puVar14 = *(uint **)&(this->LoadersWithNewImports).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_248;
      }
      uVar15 = *puVar14;
      while (uVar15 == 0) {
        lVar6 = (longlong)iStack_250;
        local_238 = local_238 + 0x20;
        iStack_250 = iStack_250 + 1;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_250) goto LAB_1420b46b6;
        uVar15 = puVar14[lVar6 + 1];
      }
      uStack_24c = -uVar15 & uVar15;
      uVar9 = (ulonglong)uStack_24c * 2 + 1;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1e8 = (int)lVar6;
      uStack_23c = local_238 + -1 + local_1e8;
      if (iVar8 < (int)uStack_23c) {
LAB_1420b46b6:
        uStack_23c = iVar8;
      }
    }
    puVar13 = &(this->LoadersWithNewImports).Elements.field_0x10;
    uStack_234 = local_84;
    iStack_230 = *(int *)&(this->LoadersWithNewImports).Elements.field_0x8 -
                 *(int *)&(this->LoadersWithNewImports).Elements.field_0x34;
    local_278 = *(uint *)&(this->LoadersWithNewImports).Elements.field_0x28;
    TStack_138._padding_ = CONCAT44(uStack_24c,iStack_250);
    uStack_240 = 0xffffffff;
    uVar15 = local_278 & 0xffffffe0;
    TStack_138.CurrentBitIndex = uStack_23c;
    TStack_138.UnvisitedBitMask = 0xffffffff;
    iVar7 = (int)local_278 >> 5;
    TStack_138._28_4_ = local_84;
    TStack_138.BaseBitIndex = local_238;
    uStack_118 = CONCAT44(uStack_22c,iStack_230);
    local_140 = local_258;
    TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_248;
    if ((((int)local_278 < 0) || (iVar8 < (int)local_278)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar10 = *(uint *)&(this->LoadersWithNewImports).Elements.field_0x28;
    if (local_278 != uVar10) {
      puVar12 = *(undefined1 **)&(this->LoadersWithNewImports).Elements.field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar13;
      }
      uVar17 = -1 << ((byte)local_278 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar7 * 4);
      while (uVar17 == 0) {
        lVar6 = (longlong)iVar7;
        uVar15 = uVar15 + 0x20;
        iVar7 = iVar7 + 1;
        local_278 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_1420b47d3;
        uVar17 = *(uint *)(puVar12 + lVar6 * 4 + 4);
      }
      uVar9 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1e4 = (int)lVar6;
      local_278 = (uVar15 - 1) + local_1e4;
      if ((int)uVar10 < (int)local_278) {
        local_278 = uVar10;
      }
    }
LAB_1420b47d3:
    while( true ) {
      pTVar16 = local_140;
      if (*(int *)&(local_140->Elements).field_0x8 - *(int *)&(local_140->Elements).field_0x34 !=
          (int)uStack_118) {
        local_273 = 0;
        `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_273);
      }
      if (((TStack_138.CurrentBitIndex == local_278) &&
          (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) &&
         (pTVar16 == &this->LoadersWithNewImports)) break;
      if (3 < (byte)LogLinker._0_1_) {
        FPackagePath::GetDebugName
                  ((FPackagePath *)
                   (*(longlong *)
                     (*(longlong *)&pTVar16->Elements + (longlong)TStack_138.CurrentBitIndex * 0x10)
                   + 0x3a0),&local_1a8);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
    }
    if (3 < (byte)LogLinker._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
    }
    local_248 = &(this->LiveLinkers).Elements.field_0x10;
    iVar8 = *(int *)&(this->LiveLinkers).Elements.field_0x28;
    pTVar16 = &this->LiveLinkers;
    local_238 = 0;
    uStack_23c = 0;
    if (iVar8 != 0) {
      puVar14 = *(uint **)&(this->LiveLinkers).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_248;
      }
      uVar15 = *puVar14;
      while (uVar15 == 0) {
        lVar6 = (longlong)iVar19;
        local_238 = local_238 + 0x20;
        iVar19 = iVar19 + 1;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1420b4957;
        uVar15 = puVar14[lVar6 + 1];
      }
      local_270 = (ulonglong)(-uVar15 & uVar15);
      uVar9 = local_270 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1e0 = (int)lVar6;
      uStack_23c = local_238 + -1 + local_1e0;
      if (iVar8 < (int)uStack_23c) {
LAB_1420b4957:
        uStack_23c = iVar8;
      }
    }
    puVar13 = &(this->LiveLinkers).Elements.field_0x10;
    uStack_234 = local_64;
    iStack_230 = *(int *)&(this->LiveLinkers).Elements.field_0x8 -
                 *(int *)&(this->LiveLinkers).Elements.field_0x34;
    uStack_24c = (uint)local_270;
    uVar15 = *(uint *)&(this->LiveLinkers).Elements.field_0x28;
    uStack_240 = 0xffffffff;
    TStack_108._padding_ = CONCAT44(uStack_24c,iVar19);
    uVar10 = uVar15 & 0xffffffe0;
    TStack_108.CurrentBitIndex = uStack_23c;
    TStack_108.UnvisitedBitMask = 0xffffffff;
    iVar7 = (int)uVar15 >> 5;
    TStack_108._28_4_ = local_64;
    TStack_108.BaseBitIndex = local_238;
    uStack_e8 = CONCAT44(uStack_22c,iStack_230);
    local_258 = pTVar16;
    iStack_250 = iVar19;
    local_110 = pTVar16;
    TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_248;
    if ((((int)uVar15 < 0) || (iVar8 < (int)uVar15)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar17 = *(uint *)&(this->LiveLinkers).Elements.field_0x28;
    if (uVar15 != uVar17) {
      puVar12 = *(undefined1 **)&(this->LiveLinkers).Elements.field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar13;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar7 * 4);
      while (uVar15 == 0) {
        lVar6 = (longlong)iVar7;
        uVar10 = uVar10 + 0x20;
        iVar7 = iVar7 + 1;
        uVar15 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_1420b4a70;
        uVar15 = *(uint *)(puVar12 + lVar6 * 4 + 4);
      }
      uVar9 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar15 = (uVar10 - 1) + (int)lVar6;
      if ((int)uVar17 < (int)uVar15) {
        uVar15 = uVar17;
      }
    }
LAB_1420b4a70:
    while( true ) {
      pTVar3 = local_110;
      if (*(int *)&(local_110->Elements).field_0x8 - *(int *)&(local_110->Elements).field_0x34 !=
          (int)uStack_e8) {
        `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
      }
      if (((TStack_108.CurrentBitIndex == uVar15) &&
          (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) &&
         (pTVar3 == pTVar16)) break;
      if (3 < (byte)LogLinker._0_1_) {
        FPackagePath::GetDebugName
                  ((FPackagePath *)
                   (*(longlong *)
                     (*(longlong *)&pTVar3->Elements + (longlong)TStack_108.CurrentBitIndex * 0x10)
                   + 0x3a0),&local_198);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    }
  }
  else {
    bVar4 = FParse::Command(&local_res18,L"LINKERS",true);
    if (!bVar4) {
      return false;
    }
    FOutputDevice::Log(param_3,L"Linkers:");
    uVar15 = *(uint *)&(this->ObjectLoaders).Elements.field_0x28;
    local_248 = &(this->ObjectLoaders).Elements.field_0x10;
    uVar20 = 0;
    local_270 = CONCAT44(local_270._4_4_,1);
    pTVar16 = &this->ObjectLoaders;
    local_238 = 0;
    uVar9 = uVar20;
    uStack_23c = local_238;
    if (uVar15 != 0) {
      puVar14 = *(uint **)&(this->ObjectLoaders).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_248;
      }
      uVar10 = *puVar14;
      uVar11 = uVar20;
      local_238 = 0;
      while (uVar10 == 0) {
        iVar8 = (int)uVar9;
        local_238 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)local_238;
        uVar10 = iVar8 + 1;
        uVar9 = (ulonglong)uVar10;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_1420b4bf7;
        uVar10 = puVar14[(longlong)iVar8 + 1];
      }
      local_270 = CONCAT44(local_270._4_4_,-uVar10 & uVar10);
      uVar11 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1dc = (int)lVar6;
      uStack_23c = local_1dc + -1 + local_238;
      if ((int)uVar15 < (int)uStack_23c) {
LAB_1420b4bf7:
        uStack_23c = uVar15;
      }
    }
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectLoaders).Elements.field_0x10;
    local_278 = *(uint *)&(this->ObjectLoaders).Elements.field_0x28;
    uStack_234 = iStack_1fc;
    iStack_230 = *(int *)&(this->ObjectLoaders).Elements.field_0x8 -
                 *(int *)&(this->ObjectLoaders).Elements.field_0x34;
    uVar10 = local_278 & 0xffffffe0;
    uStack_24c = (uint)local_270;
    uStack_240 = 0xffffffff;
    TStack_d8.CurrentBitIndex = uStack_23c;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    iStack_250 = (int)uVar9;
    TStack_d8._padding_ = CONCAT44(uStack_24c,iStack_250);
    iVar8 = (int)local_278 >> 5;
    TStack_d8._28_4_ = iStack_1fc;
    TStack_d8.BaseBitIndex = local_238;
    uStack_b8 = CONCAT44(uStack_22c,iStack_230);
    local_260 = pTVar18;
    local_258 = pTVar16;
    local_1c0 = pTVar16;
    local_e0 = pTVar16;
    TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_248;
    if ((((int)local_278 < 0) || ((int)uVar15 < (int)local_278)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar15 = *(uint *)&(this->ObjectLoaders).Elements.field_0x28;
    if (local_278 != uVar15) {
      puVar13 = *(undefined1 **)&(this->ObjectLoaders).Elements.field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = (undefined1 *)pTVar18;
      }
      uVar17 = -1 << ((byte)local_278 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar8 * 4);
      while (uVar17 == 0) {
        lVar6 = (longlong)iVar8;
        uVar10 = uVar10 + 0x20;
        iVar8 = iVar8 + 1;
        local_278 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_1420b4d10;
        uVar17 = *(uint *)(puVar13 + lVar6 * 4 + 4);
      }
      uVar9 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1d8 = (int)lVar6;
      local_278 = local_1d8 + -1 + uVar10;
      if ((int)uVar15 < (int)local_278) {
        local_278 = uVar15;
      }
    }
LAB_1420b4d10:
    while( true ) {
      pTVar3 = local_e0;
      if (*(int *)&(local_e0->Elements).field_0x8 - *(int *)&(local_e0->Elements).field_0x34 !=
          (int)uStack_b8) {
        local_272[0] = 0;
        `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_272);
      }
      if (((TStack_d8.CurrentBitIndex == local_278) && (TStack_d8.Array == pTVar18)) &&
         (pTVar3 == pTVar16)) break;
      lVar6 = *(longlong *)
               (*(longlong *)&pTVar3->Elements + (longlong)TStack_d8.CurrentBitIndex * 0x10);
      uVar9 = uVar20;
      uVar11 = uVar20;
      if (0 < *(int *)(lVar6 + 0x228)) {
        do {
          uVar10 = (uint)uVar9;
          uVar15 = 0;
          if ((int)uVar10 < *(int *)(lVar6 + 0x228)) {
            uVar15 = ~uVar10 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          FVar1.Value = *(uint *)(uVar11 + *(longlong *)(lVar6 + 0x220));
          if (FVar1.Value != 0) {
            this_00 = ::FName::GetEntry(FVar1);
            FNameEntry::GetSizeInBytes(this_00);
          }
          uVar9 = (ulonglong)(uVar10 + 1);
          uVar11 = uVar11 + 4;
        } while ((int)(uVar10 + 1) < *(int *)(lVar6 + 0x228));
      }
      local_228 = *(undefined4 *)(lVar6 + 0x188);
      local_224 = *(int *)(lVar6 + 0x20);
      local_1d0 = (ulonglong)((longlong)local_224 * 0x68) >> 10;
      local_220 = *(int *)(lVar6 + 0x10);
      local_1c8 = (ulonglong)((longlong)local_220 * 0x38) >> 10;
      local_270 = CONCAT44(local_270._4_4_,*(undefined4 *)(lVar6 + 0x248));
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)(lVar6 + 0xc0),local_b0,(UObject *)0x0,None);
      FPackagePath::GetDebugName((FPackagePath *)(lVar6 + 0x3a0),&local_188);
      FOutputDevice::LogfImpl
                (local_res20,
                 L"%s (%s): Names=%i (%iK/%iK) Text=%i (%iK) Imports=%i (%iK) Exports=%i (%iK) Gen=%i Bulk=%i"
                );
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (local_b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0[0].Data.AllocatorInstance.Data);
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      pTVar16 = local_1c0;
      pTVar18 = local_260;
    }
  }
  return true;
}

// Get @ 1420c5bd0

FLinkerManager * __cdecl FLinkerManager::Get(void)

{
  FLinkerManager *this;
  FLinkerManager *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = ::operator_new(0x268);
      pFVar1 = (FLinkerManager *)0x0;
      if (this != (FLinkerManager *)0x0) {
        pFVar1 = FLinkerManager(this);
      }
      ::Singleton.Ptr = pFVar1;
      atexit(`FLinkerManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return ::Singleton.Ptr;
    }
  }
  return ::Singleton.Ptr;
}

// RemoveLinker @ 1420d17e0

void __thiscall FLinkerManager::RemoveLinker(FLinkerManager *this,FLinkerLoad *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  FLinkerLoad *local_res8;
  FLinkerLoad *local_res10;
  
  lpCriticalSection = &this->PendingCleanupListCritical;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 != (FLinkerLoad *)0x0) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    if (*(int *)&(this->PendingCleanupList).Elements.field_0x8 !=
        *(int *)&(this->PendingCleanupList).Elements.field_0x34) {
      FVar4 = (this->PendingCleanupList).Hash.SecondaryData;
      if (FVar4 == (ForElementType<FSetElementId>)0x0) {
        FVar4 = (ForElementType<FSetElementId>)&(this->PendingCleanupList).Hash;
      }
      iVar2 = *(int *)((longlong)FVar4 +
                      (ulonglong)
                      ((this->PendingCleanupList).HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      if (iVar2 != -1) {
        lVar1 = *(longlong *)&(this->PendingCleanupList).Elements;
        do {
          if (*(FLinkerLoad **)(lVar1 + (longlong)iVar2 * 0x10) == param_1) goto LAB_1420d18b4;
          iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
    Emplace<FLinkerLoad_*_const_&>(&this->PendingCleanupList,&local_res8,(bool *)&local_res10);
    LOCK();
    this->bHasPendingCleanup = (FThreadSafeBool)0x1;
    UNLOCK();
  }
LAB_1420d18b4:
                    /* WARNING: Could not recover jumptable at 0x0001420d18c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ResetLinkerExports @ 1420d1c00

void __thiscall FLinkerManager::ResetLinkerExports(FLinkerManager *this,UPackage *param_1)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *this_00;
  
  if (((param_1 != (UPackage *)0x0) &&
      (pFVar1 = (param_1->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) &&
     (this_00 = pFVar1->LinkerLoad, this_00 != (FLinkerLoad *)0x0)) {
    if (this_00->OwnerThread != GGameThreadId) {
      FlushAsyncLoading(-1);
    }
    FLinkerLoad::DetachExports(this_00);
    return;
  }
  return;
}

// ResetLoaders @ 1420d2310

void __thiscall
FLinkerManager::ResetLoaders
          (FLinkerManager *this,
          TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  undefined1 *puVar2;
  ForElementType<FSetElementId> FVar3;
  ulonglong uVar4;
  code *pcVar5;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  <lambda_1> local_res8;
  undefined1 local_res20 [8];
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  uint local_1a4;
  ForElementType<unsigned_int> local_1a0;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_198;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> local_190;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  LPCRITICAL_SECTION local_140;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *local_138;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TArrayView<std::nullptr_t,int> local_a0;
  code *local_90;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> **local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  TArrayView<FLinkerLoad_*_const,int> local_68 [2];
  undefined4 local_3c;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId192,"FLinkerManager::ResetLoaders_Set",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerManager.cpp"
               ,0xc0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId192);
  }
  local_140 = (LPCRITICAL_SECTION)&this->ObjectLoadersCritical;
  if (local_140 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(local_140);
    iVar11 = *(int *)&(this->ObjectLoaders).Elements.field_0x28;
    local_1a0 = (ForElementType<unsigned_int>)&(this->ObjectLoaders).Elements.field_0x10;
    iVar13 = 0;
    local_198 = &this->ObjectLoaders;
    uStack_174 = 1;
    iVar18 = 0;
    iStack_164 = iVar18;
    iStack_178 = iVar18;
    local_160 = iVar18;
    if (iVar11 != 0) {
      puVar16 = *(uint **)&(this->ObjectLoaders).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)local_1a0;
      }
      uVar20 = *puVar16;
      local_160 = 0;
      iStack_178 = 0;
      while (uVar20 == 0) {
        lVar9 = (longlong)iStack_178;
        local_160 = local_160 + 0x20;
        iStack_178 = iStack_178 + 1;
        iStack_164 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178)
        goto LAB_1420d244f;
        uVar20 = puVar16[lVar9 + 1];
      }
      uStack_174 = -uVar20 & uVar20;
      uVar1 = (ulonglong)uStack_174 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_150 = (int)lVar9;
      iStack_164 = local_160 + -1 + local_150;
      if (iVar11 < iStack_164) {
        iStack_164 = iVar11;
      }
    }
LAB_1420d244f:
    uStack_15c = local_3c;
    iStack_158 = *(int *)&(this->ObjectLoaders).Elements.field_0x8 -
                 *(int *)&(this->ObjectLoaders).Elements.field_0x34;
    local_1a4 = *(uint *)&(this->ObjectLoaders).Elements.field_0x28;
    uVar20 = local_1a4 & 0xffffffe0;
    uStack_168 = 0xffffffff;
    TStack_f8.CurrentBitIndex = iStack_164;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    TStack_f8._padding_ = CONCAT44(uStack_174,iStack_178);
    iVar12 = (int)local_1a4 >> 5;
    TStack_f8._28_4_ = local_3c;
    TStack_f8.BaseBitIndex = local_160;
    uStack_d8 = CONCAT44(uStack_154,iStack_158);
    bVar8 = (byte)local_1a4;
    local_180 = local_198;
    local_170 = (undefined1 *)local_1a0;
    local_100 = local_198;
    TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1a0;
    if ((((int)local_1a4 < 0) || (iVar11 < (int)local_1a4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar17 = *(int *)((longlong)local_1a0 + 0x18);
    uVar19 = local_1a4;
    if (local_1a4 != uVar17) {
      FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_1a0 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_1a0 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_1a0;
      }
      uVar19 = -1 << (bVar8 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar12 * 4);
      while (uVar19 == 0) {
        lVar9 = (longlong)iVar12;
        uVar20 = uVar20 + 0x20;
        iVar12 = iVar12 + 1;
        local_1a4 = uVar17;
        uVar19 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1420d2590;
        uVar19 = *(uint *)((undefined1 *)((longlong)FVar14 + 4) + lVar9 * 4);
      }
      uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_14c = (int)lVar9;
      local_1a4 = local_14c + -1 + uVar20;
      uVar19 = local_1a4;
      if ((int)uVar17 < (int)local_1a4) {
        local_1a4 = uVar17;
        uVar19 = uVar17;
      }
    }
LAB_1420d2590:
    while( true ) {
      pTVar6 = local_100;
      if (*(int *)&(local_100->Elements).field_0x8 - *(int *)&(local_100->Elements).field_0x34 !=
          (int)uStack_d8) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_f8.CurrentBitIndex == uVar19) &&
          ((ForElementType<unsigned_int>)TStack_f8.Array == local_1a0)) && (pTVar6 == local_198))
      break;
      uVar1 = *(ulonglong *)
               (*(longlong *)&pTVar6->Elements + (longlong)TStack_f8.CurrentBitIndex * 0x10);
      uVar20 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar3 = (param_1->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar3;
        }
        iVar11 = *(int *)((longlong)FVar10 +
                         (ulonglong)(param_1->HashSize - 1U & (uVar20 >> 0x10 ^ uVar20)) * 4);
        if (iVar11 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&param_1->Elements + (longlong)iVar11 * 0x10) == uVar1)
            goto LAB_1420d2725;
            iVar11 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar11 * 0x10);
          } while (iVar11 != -1);
        }
      }
      iVar11 = *(int *)(uVar1 + 0x10);
      lVar9 = *(longlong *)(uVar1 + 8);
      lVar21 = (longlong)iVar11 * 0x38 + lVar9;
      while( true ) {
        if (*(int *)(uVar1 + 0x10) != iVar11) {
          local_1a8 = 0;
          `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1a8);
        }
        if (lVar9 == lVar21) break;
        uVar4 = *(ulonglong *)(lVar9 + 0x30);
        if ((uVar4 == 0) ||
           (uVar20 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595,
           uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb,
           *(int *)&(param_1->Elements).field_0x8 == *(int *)&(param_1->Elements).field_0x34)) {
LAB_1420d271c:
          lVar9 = lVar9 + 0x38;
        }
        else {
          FVar3 = (param_1->Hash).SecondaryData;
          FVar10 = (ForElementType<FSetElementId>)&param_1->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar10 = FVar3;
          }
          iVar12 = *(int *)((longlong)FVar10 +
                           (ulonglong)(param_1->HashSize - 1U & (uVar20 >> 0x10 ^ uVar20)) * 4);
          if (iVar12 == -1) goto LAB_1420d271c;
          do {
            if (*(ulonglong *)(*(longlong *)&param_1->Elements + (longlong)iVar12 * 0x10) == uVar4)
            {
              *(undefined8 *)(lVar9 + 0x30) = 0;
              *(undefined4 *)(lVar9 + 0x1c) = 0xffffffff;
              goto LAB_1420d271c;
            }
            iVar12 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
          lVar9 = lVar9 + 0x38;
        }
      }
LAB_1420d2725:
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    }
    LeaveCriticalSection(local_140);
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Array
              (param_1,&local_190);
    local_138 = &local_190;
    local_a0.DataPtr = (void **)0x0;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLinkerManager::ResetLoaders'::__l2::<lambda_1>,void,int>::Call;
    local_88 = &local_138;
    local_a0.ArrayNum = 0;
    uVar20 = 1;
    local_res8 = SUB81(this,0);
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_190.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_90
               ,local_res8,Unbalanced,&local_a0);
    iVar11 = *(int *)&(param_1->Elements).field_0x28;
    puVar2 = &(param_1->Elements).field_0x10;
    iStack_114 = iVar13;
    if (iVar11 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar2;
      }
      uVar17 = *puVar16;
      iVar18 = iVar13;
      while (uVar17 == 0) {
        lVar9 = (longlong)iVar18;
        iVar13 = iVar13 + 0x20;
        iVar18 = iVar18 + 1;
        iStack_114 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1420d2830;
        uVar17 = puVar16[lVar9 + 1];
      }
      uVar20 = -uVar17 & uVar17;
      uVar1 = (ulonglong)uVar20 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_148 = (int)lVar9;
      iStack_114 = iVar13 + -1 + local_148;
      if (iVar11 < iStack_114) {
        iStack_114 = iVar11;
      }
    }
LAB_1420d2830:
    uVar17 = *(uint *)&(param_1->Elements).field_0x28;
    iStack_10c = iStack_164;
    uVar19 = uVar17 & 0xffffffe0;
    iStack_108 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uStack_118 = 0xffffffff;
    TStack_c8._padding_ = CONCAT44(uVar20,iVar18);
    TStack_c8.CurrentBitIndex = iStack_114;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar17 >> 5;
    TStack_c8._28_4_ = iStack_164;
    TStack_c8.BaseBitIndex = iVar13;
    uStack_a8 = CONCAT44(uStack_104,iStack_108);
    local_130 = param_1;
    iStack_128 = iVar18;
    uStack_124 = uVar20;
    local_120 = puVar2;
    local_110 = iVar13;
    local_d0 = param_1;
    TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (((int)uVar17 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar20 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar17 != uVar20) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar2;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
      while (uVar17 == 0) {
        lVar9 = (longlong)iVar11;
        uVar19 = uVar19 + 0x20;
        iVar11 = iVar11 + 1;
        uVar17 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1420d2941;
        uVar17 = *(uint *)(puVar15 + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_144 = (int)lVar9;
      uVar17 = local_144 + -1 + uVar19;
      if ((int)uVar20 < (int)uVar17) {
        uVar17 = uVar20;
      }
    }
LAB_1420d2941:
    while( true ) {
      pTVar6 = local_d0;
      if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
          (int)uStack_a8) {
        local_1a7[0] = 0;
        `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a7);
      }
      if (((TStack_c8.CurrentBitIndex == uVar17) &&
          (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar6 == param_1)) break;
      FLinkerLoad::Detach(*(FLinkerLoad **)
                           (*(longlong *)&pTVar6->Elements +
                           (longlong)TStack_c8.CurrentBitIndex * 0x10));
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
    lpCriticalSection = &this->PendingCleanupListCritical;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_78 = local_190.AllocatorInstance.Data;
      if ((local_190.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_70 = local_190.ArrayNum;
      local_68[0].DataPtr = (FLinkerLoad **)local_78;
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Append
                (&this->PendingCleanupList,local_68);
      LOCK();
      this->bHasPendingCleanup = (FThreadSafeBool)0x1;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.AllocatorInstance.Data);
      }
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResetLoaders @ 1420d2a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLinkerManager::ResetLoaders(FLinkerManager *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  FAdditionalInfo *pFVar2;
  FLinkerLoad *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FLinkerManager *this_00;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *pTVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  byte bVar10;
  wchar_t *pwVar11;
  uint uVar12;
  longlong *plVar13;
  char cVar14;
  wchar_t *pwVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  uint uVar19;
  FLinkerLoad *pFVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_1d8 [32];
  char local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6 [2];
  uint local_1b4;
  undefined1 local_1b0 [8];
  ForElementType<unsigned_int> local_1a8;
  FLinkerLoad *local_1a0;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_198;
  uint uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_168;
  FLinkerManager *local_160;
  int local_158;
  int local_154;
  int local_150;
  UPackage *local_148;
  LPCRITICAL_SECTION local_140;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FString local_d8;
  FString local_c8 [2];
  uint local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  bVar22 = CpuChannel->Enabled < 0;
  local_160 = this;
  if (bVar22) {
    local_1b8 = '\0';
  }
  else {
    local_1b8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId113,"FLinkerManager::ResetLoaders",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerManager.cpp"
               ,0x71);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId113);
  }
  cVar14 = !bVar22;
  if ((param_1 == (UObject *)0x0) ||
     (pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1), local_148 = pUVar7,
     pUVar7 == (UPackage *)0x0)) {
    local_6c = 0x80;
    lpCriticalSection = &this->ObjectLoadersCritical;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar16 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
              ((TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *)local_98
               ,&this->ObjectLoaders);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar19 = local_70;
    uStack_18c = 1;
    local_178 = 0;
    uStack_17c = uVar16;
    if (local_70 != 0) {
      puVar18 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar18 = local_78;
      }
      uVar12 = *puVar18;
      uVar16 = 0;
      local_178 = 0;
      while (uVar12 == 0) {
        uVar16 = uVar16 + 1;
        local_178 = local_178 + 0x20;
        uStack_17c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_1420d2f70;
        uVar12 = puVar18[(int)uVar16];
      }
      uStack_18c = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_18c * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_150 = (int)lVar4;
      uStack_17c = local_150 + -1 + local_178;
      if ((int)local_70 < (int)uStack_17c) {
        uStack_17c = local_70;
      }
    }
LAB_1420d2f70:
    local_198 = (TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *)
                local_98;
    local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_170 = local_98._8_4_ - local_64;
    uVar12 = local_70 & 0xffffffe0;
    uStack_180 = 0xffffffff;
    TStack_100.CurrentBitIndex = uStack_17c;
    TStack_100.UnvisitedBitMask = 0xffffffff;
    TStack_100._padding_ = CONCAT44(uStack_18c,uVar16);
    iVar21 = (int)local_70 >> 5;
    TStack_100._28_4_ = uStack_17c;
    TStack_100.BaseBitIndex = local_178;
    uStack_e0 = CONCAT44(uStack_16c,iStack_170);
    bVar10 = (byte)local_70;
    uStack_190 = uVar16;
    uStack_174 = uStack_17c;
    local_108 = local_198;
    TStack_100.Array = local_188;
    if (((int)local_70 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar22)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = local_160;
    if (uVar19 != local_70) {
      puVar18 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar18 = local_78;
      }
      uVar16 = -1 << (bVar10 & 0x1f) & puVar18[iVar21];
      while (uVar16 == 0) {
        iVar21 = iVar21 + 1;
        uVar12 = uVar12 + 0x20;
        uVar19 = local_70;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar21)
        goto LAB_1420d3080;
        uVar16 = puVar18[iVar21];
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar19 = (int)lVar4 + -1 + uVar12;
      if ((int)local_70 < (int)uVar19) {
        uVar19 = local_70;
      }
    }
LAB_1420d3080:
    while( true ) {
      pTVar6 = local_108;
      if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
          (int)uStack_e0) {
        `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b0);
      }
      if (((TStack_100.CurrentBitIndex == uVar19) &&
          (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (pTVar6 == (TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *)
                    local_98)) break;
      pFVar20 = *(FLinkerLoad **)
                 (*(longlong *)&pTVar6->Elements + (longlong)TStack_100.CurrentBitIndex * 0x10);
      FLinkerLoad::Detach(pFVar20);
      RemoveLinker(this_00,pFVar20);
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  else {
    pUVar8 = Z_Construct_UClass_UPackage_NoRegister();
    iVar21 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar21) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar21 * 8)
        != &pUVar8->_padding_)) {
      pFVar9 = GetTypeName<UPackage>(&local_d8);
      pwVar15 = L"";
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pFVar9 = GetFullNameForCastLogError<UObject>(local_c8,(UObject *)pUVar7);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar15,pwVar11);
    }
    pFVar2 = (pUVar7->AdditionalInfo).Ptr;
    if ((pFVar2 != (FAdditionalInfo *)0x0) &&
       (pFVar20 = pFVar2->LinkerLoad, pFVar20 != (FLinkerLoad *)0x0)) {
      local_140 = (LPCRITICAL_SECTION)&this->ObjectLoadersCritical;
      if (local_140 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(local_140);
      local_198 = &this->ObjectLoaders;
      local_178 = 0;
      uVar16 = *(uint *)&(this->ObjectLoaders).Elements.field_0x28;
      local_1a8 = (ForElementType<unsigned_int>)&(this->ObjectLoaders).Elements.field_0x10;
      uStack_18c = 1;
      uStack_17c = local_178;
      uStack_190 = local_178;
      if (uVar16 != 0) {
        puVar18 = *(uint **)&(this->ObjectLoaders).Elements.field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)local_1a8;
        }
        uVar19 = *puVar18;
        uStack_190 = 0;
        local_178 = 0;
        while (uVar19 == 0) {
          uStack_190 = uStack_190 + 1;
          local_178 = local_178 + 0x20;
          uStack_17c = uVar16;
          if ((int)(((int)(uVar16 - 1) >> 0x1f & 0x1fU) + (uVar16 - 1)) >> 5 < (int)uStack_190)
          goto LAB_1420d2c39;
          uVar19 = puVar18[(int)uStack_190];
        }
        uStack_18c = -uVar19 & uVar19;
        uVar1 = (ulonglong)uStack_18c * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_158 = (int)lVar4;
        uStack_17c = local_158 + -1 + local_178;
        if ((int)uVar16 < (int)uStack_17c) {
          uStack_17c = uVar16;
        }
      }
LAB_1420d2c39:
      uStack_174 = local_9c;
      iStack_170 = *(int *)&(this->ObjectLoaders).Elements.field_0x8 -
                   *(int *)&(this->ObjectLoaders).Elements.field_0x34;
      local_1b4 = *(uint *)&(this->ObjectLoaders).Elements.field_0x28;
      uStack_180 = 0xffffffff;
      TStack_130._padding_ = CONCAT44(uStack_18c,uStack_190);
      uVar19 = local_1b4 & 0xffffffe0;
      TStack_130.CurrentBitIndex = uStack_17c;
      TStack_130.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)local_1b4 >> 5;
      bVar10 = (byte)local_1b4;
      TStack_130._28_4_ = local_9c;
      TStack_130.BaseBitIndex = local_178;
      uStack_110 = CONCAT44(uStack_16c,iStack_170);
      local_1a0 = pFVar20;
      local_188 = (TBitArray<FDefaultBitArrayAllocator> *)local_1a8;
      local_168 = local_198;
      local_138 = local_198;
      TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1a8;
      if ((((int)local_1b4 < 0) || ((int)uVar16 < (int)local_1b4)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar16 = *(int *)((longlong)local_1a8 + 0x18);
      uVar12 = local_1b4;
      if (local_1b4 != uVar16) {
        FVar17 = local_1a8;
        if (*(ForElementType<unsigned_int> *)((longlong)local_1a8 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_1a8 + 0x10);
        }
        uVar12 = -1 << (bVar10 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar21 * 4);
        while (uVar12 == 0) {
          iVar21 = iVar21 + 1;
          uVar19 = uVar19 + 0x20;
          local_1b4 = uVar16;
          uVar12 = uVar16;
          if ((int)(((int)(uVar16 - 1) >> 0x1f & 0x1fU) + (uVar16 - 1)) >> 5 < iVar21)
          goto LAB_1420d2d70;
          uVar12 = *(uint *)((longlong)FVar17 + (longlong)iVar21 * 4);
        }
        uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_154 = (int)lVar4;
        local_1b4 = (uVar19 - 1) + local_154;
        uVar12 = local_1b4;
        if ((int)uVar16 < (int)local_1b4) {
          local_1b4 = uVar16;
          uVar12 = uVar16;
        }
      }
LAB_1420d2d70:
      while( true ) {
        pTVar6 = local_138;
        if (*(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34 !=
            (int)uStack_110) {
          local_1b7 = 0;
          `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b7);
        }
        if (((TStack_130.CurrentBitIndex == uVar12) &&
            ((ForElementType<unsigned_int>)TStack_130.Array == local_1a8)) && (pTVar6 == local_168))
        break;
        pFVar3 = *(FLinkerLoad **)
                  (*(longlong *)&pTVar6->Elements + (longlong)TStack_130.CurrentBitIndex * 0x10);
        if ((UPackage *)pFVar3->_padding_ == local_148) {
          if ((pFVar3 != pFVar20) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Linker == LinkerToReset",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerManager.cpp"
                                  ,0x9d,L""), bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          lVar4 = pFVar3->_padding_;
          iVar21 = (int)pFVar3->_padding_;
          plVar13 = (longlong *)(lVar4 + 0x30);
          while( true ) {
            if ((int)pFVar3->_padding_ != iVar21) {
              local_1b6[0] = 0;
              `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_1b6);
            }
            pFVar20 = local_1a0;
            if (plVar13 + -6 == (longlong *)((longlong)iVar21 * 0x38 + lVar4)) break;
            if (((FLinkerLoad *)*plVar13 != (FLinkerLoad *)0x0) &&
               ((FLinkerLoad *)*plVar13 == local_1a0)) {
              *plVar13 = 0;
              *(undefined4 *)((longlong)plVar13 + -0x14) = 0xffffffff;
            }
            plVar13 = plVar13 + 7;
          }
        }
        TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
      }
      LeaveCriticalSection(local_140);
      FLinkerLoad::Detach(pFVar20);
      RemoveLinker(local_160,pFVar20);
      cVar14 = local_1b8;
    }
  }
  if (cVar14 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ResetLoaders @ 1420d31b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FLinkerManager::ResetLoaders(FLinkerManager *this,TArrayView<FLinkerLoad_*_const,int> *param_1)

{
  FLinkerLoad **ppFVar1;
  uint *puVar2;
  longlong lVar3;
  ForElementType<unsigned_int> *pFVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  ForElementType<unsigned_int> FVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong *puVar19;
  FLinkerLoad **ppFVar20;
  bool bVar21;
  undefined1 auStackY_148 [32];
  undefined8 local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  FSparseArrayAllocationInfo local_f0;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar16 = *(ulonglong *)&param_1->ArrayNum;
  uVar12 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar9 = (uint)uVar16;
  TStack_110.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(TStack_110.Array._4_4_,TStack_110.Array._0_4_);
  if (uVar9 == 0) goto LAB_1420d3456;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar9);
  uVar14 = 1;
  if (3 < uVar9) {
    uVar16 = (ulonglong)(((uint)(uVar16 >> 1) & 0x7fffffff) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_50 != 0) &&
     (TStack_110.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(TStack_110.Array._4_4_,TStack_110.Array._0_4_), (int)uVar14 <= (int)local_50))
  goto LAB_1420d3456;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_1420d328b;
      }
    }
    else {
LAB_1420d328b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar16 = uVar12;
      do {
        FVar10.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar7 = uVar16 & (longlong)(int)uVar14 - 1U;
        uVar16 = uVar16 + 1;
        *(undefined4 *)(FVar10.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  TStack_110.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(TStack_110.Array._4_4_,TStack_110.Array._0_4_);
  if (local_50 != 0) {
    local_f0.Pointer = local_98 + 0x10;
    local_f0.Index = 0;
    local_f0._4_4_ = 1;
    uStack_dc = 0;
    uStack_d8 = 0;
    if (local_70 != 0) {
      FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78;
      }
      uVar14 = *(uint *)FVar11;
      uVar16 = uVar12;
      while (uVar14 == 0) {
        uStack_d8 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_d8;
        iVar5 = (int)uVar12;
        local_f0.Index = iVar5 + 1;
        uVar12 = (ulonglong)(uint)local_f0.Index;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f0.Index)
        goto LAB_1420d338e;
        uVar14 = ((uint *)((longlong)FVar11 + 4))[iVar5];
      }
      local_f0._4_4_ = -uVar14 & uVar14;
      uVar16 = (ulonglong)(uint)local_f0._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_dc = (int)lVar3 + -1 + uStack_d8;
      uVar12 = (ulonglong)uStack_dc;
      if ((int)local_70 < (int)uStack_dc) {
LAB_1420d338e:
        uVar12 = (ulonglong)local_70;
        uStack_dc = local_70;
      }
    }
    local_e0 = 0xffffffff;
    TStack_110._padding_ = CONCAT44(local_f0._4_4_,local_f0.Index);
    TStack_110._28_4_ = uStack_d4;
    TStack_110.BaseBitIndex = uStack_d8;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    TStack_110.CurrentBitIndex = uStack_dc;
    TStack_110.Array = local_f0.Pointer;
    if ((int)uVar12 < (int)local_70) {
      do {
        pFVar18 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar12 * 0x10);
        uVar14 = ((uint)(*(ulonglong *)pFVar18 >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)pFVar18 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = (uVar14 >> 0x10 ^ uVar14) & local_50 - 1;
        *(uint *)(pFVar18 + 0xc) = uVar14;
        FVar10.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(FVar10.Data + uVar16 * 4);
        *(int *)(FVar10.Data + uVar16 * 4) = (int)uVar12;
        TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
        uVar12 = (ulonglong)(uint)TStack_110.CurrentBitIndex;
      } while (TStack_110.CurrentBitIndex < (TStack_110.Array)->NumBits);
    }
  }
LAB_1420d3456:
  ppFVar20 = param_1->DataPtr;
  ppFVar1 = ppFVar20 + (int)uVar9;
  iVar5 = local_68;
  do {
    local_68 = iVar5;
    if (ppFVar20 == ppFVar1) {
      ResetLoaders(this,(TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *
                        )local_98);
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      bVar21 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar21) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = -1;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return;
    }
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    if (local_64 == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78;
      }
      bVar8 = (byte)iVar6 & 0x1f;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
        bVar8 = bVar8 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar11 + (longlong)(iVar6 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar8 & 0x1f));
    }
    else {
      local_68 = *(int *)(local_98._0_8_ + (longlong)iVar5 * 0x10 + 4);
      local_64 = local_64 + -1;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)local_68 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_f0,iVar5);
    if (local_f0.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      *(FLinkerLoad **)(local_f0.Pointer)->InlineData = *ppFVar20;
      pFVar4 = local_f0.Pointer;
      pFVar4->InlineData[8] = 0xff;
      pFVar4->InlineData[9] = 0xff;
      pFVar4->InlineData[10] = 0xff;
      pFVar4->InlineData[0xb] = 0xff;
      pTVar15 = local_f0.Pointer;
    }
    uVar16 = *(ulonglong *)(pTVar15->AllocatorInstance).InlineData;
    uVar9 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar10.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_58.Data;
      }
      for (iVar5 = *(int *)(FVar10.Data + (ulonglong)(local_50 - 1 & uVar9) * 4); iVar5 != -1;
          iVar5 = *(int *)(local_98._0_8_ + (longlong)iVar5 * 0x10 + 8)) {
        if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar5 * 0x10) == uVar16) {
          if (iVar5 != -1) {
            *(ulonglong *)(local_98._0_8_ + (longlong)iVar5 * 0x10) = uVar16;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_f0.Index,1);
            pTVar15 = TStack_110.Array;
            goto LAB_1420d3861;
          }
          break;
        }
      }
    }
    uVar16 = 0;
    uVar14 = local_98._8_4_ - local_64;
    uVar13 = 1;
    if (3 < uVar14) {
      uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar13 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar14 < 1) || ((int)uVar13 <= (int)local_50)) {
      uVar9 = local_50 - 1 & uVar9;
      *(uint *)((pTVar15->AllocatorInstance).InlineData + 0xc) = uVar9;
      FVar10.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((pTVar15->AllocatorInstance).InlineData + 8) =
           *(undefined4 *)(FVar10.Data + uVar16 * 4);
      *(int *)(FVar10.Data + uVar16 * 4) = local_f0.Index;
      pTVar15 = TStack_110.Array;
    }
    else {
      local_50 = uVar13;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar13 != 0) {
        uVar9 = uVar13;
        if (uVar13 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_1420d366f;
          }
        }
        else {
LAB_1420d366f:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,4);
        }
        if (0 < (int)uVar13) {
          uVar17 = (ulonglong)uVar13;
          uVar12 = uVar16;
          do {
            FVar10.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_58.Data;
            }
            uVar7 = uVar12 & (longlong)(int)uVar13 - 1U;
            uVar12 = uVar12 + 1;
            *(undefined4 *)(FVar10.Data + uVar7 * 4) = 0xffffffff;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      pTVar15 = TStack_110.Array;
      if (local_50 != 0) {
        TStack_110._padding_ = (longlong)(local_98 + 0x10);
        local_118 = 0x100000000;
        TStack_110.Array._4_4_ = 0;
        TStack_110.UnvisitedBitMask = 0;
        if (local_70 != 0) {
          FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_78;
          }
          uVar9 = *(uint *)FVar11;
          uVar12 = uVar16;
          while (uVar9 == 0) {
            TStack_110.UnvisitedBitMask = (int)uVar12 + 0x20;
            uVar12 = (ulonglong)TStack_110.UnvisitedBitMask;
            iVar5 = (int)uVar16;
            uVar9 = iVar5 + 1;
            uVar16 = (ulonglong)uVar9;
            uVar17 = (ulonglong)local_118 >> 0x20;
            local_118 = CONCAT44((int)uVar17,uVar9);
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar9)
            goto LAB_1420d376e;
            uVar9 = ((uint *)((longlong)FVar11 + 4))[iVar5];
          }
          local_118 = CONCAT44(-uVar9 & uVar9,(undefined4)local_118);
          uVar16 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          TStack_110.Array._4_4_ = (int)lVar3 + -1 + (int)uVar12;
          uVar16 = (ulonglong)TStack_110.Array._4_4_;
          if ((int)local_70 < (int)TStack_110.Array._4_4_) {
LAB_1420d376e:
            uVar16 = (ulonglong)local_70;
            TStack_110.Array._4_4_ = local_70;
          }
        }
        TStack_110.Array._0_4_ = 0xffffffff;
        local_c8 = (longlong *)local_98;
        local_c0.CurrentBitIndex = TStack_110.Array._4_4_;
        local_c0.UnvisitedBitMask = 0xffffffff;
        local_c0._28_4_ = TStack_110.CurrentBitIndex;
        local_c0.BaseBitIndex = TStack_110.UnvisitedBitMask;
        local_c0._padding_ = local_118;
        local_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)TStack_110._padding_;
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)
                  CONCAT44(TStack_110.Array._4_4_,0xffffffff);
        if ((int)uVar16 < (int)local_70) {
          do {
            puVar19 = (ulonglong *)((longlong)(int)uVar16 * 0x10 + *local_c8);
            uVar9 = ((uint)(*puVar19 >> 0x14) & 0xffff ^ (uint)(*puVar19 >> 4)) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_50 - 1;
            *(uint *)((longlong)puVar19 + 0xc) = uVar9;
            FVar10.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_58.Data;
            }
            uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
            *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(FVar10.Data + uVar12 * 4);
            *(int *)(FVar10.Data + uVar12 * 4) = (int)uVar16;
            local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
            uVar16 = (ulonglong)(uint)local_c0.CurrentBitIndex;
            pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)
                      CONCAT44(TStack_110.Array._4_4_,TStack_110.Array._0_4_);
          } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
        }
      }
    }
LAB_1420d3861:
    ppFVar20 = ppFVar20 + 1;
    iVar5 = local_68;
    TStack_110.Array = pTVar15;
  } while( true );
}

