// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 8

// FOperatorCacheStatTracker @ 14b2a6e40

FOperatorCacheStatTracker * __thiscall
Metasound::Engine::FOperatorCacheStatTracker::FOperatorCacheStatTracker
          (FOperatorCacheStatTracker *this)

{
  FCsvProfiler *pFVar1;
  FDelegateHandle FVar2;
  
  *(undefined8 *)&this->StatEntries = 0;
  *(undefined8 *)&(this->StatEntries).field_0x8 = 0;
  *(undefined8 *)&(this->StatEntries).field_0x20 = 0;
  *(undefined4 *)&(this->StatEntries).field_0x28 = 0;
  *(undefined4 *)&(this->StatEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatEntries).field_0x34 = 0;
  *(undefined8 *)&(this->StatEntries).field_0x40 = 0;
  *(undefined4 *)&(this->StatEntries).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->CsvEndFrameDelegateHandle).ID = 0;
  this->NumInCache = 0;
  pFVar1 = FCsvProfiler::Get();
  FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<Metasound::Engine::FOperatorCacheStatTracker>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&pFVar1->OnCSVProfileEndFrameDelegate,
                     (FOperatorCacheStatTracker *)&stack0x00000008,(pmf_f4793102)this);
                    /* WARNING: Load size is inaccurate */
  (this->CsvEndFrameDelegateHandle).ID = *FVar2.ID;
  return this;
}

// ~FOperatorCacheStatTracker @ 14b2a85c0

void __thiscall
Metasound::Engine::FOperatorCacheStatTracker::~FOperatorCacheStatTracker
          (FOperatorCacheStatTracker *this)

{
  void *pvVar1;
  FCsvProfiler *pFVar2;
  
  pFVar2 = FCsvProfiler::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar2->OnCSVProfileEndFrameDelegate,
             (FDelegateHandle)(this->CsvEndFrameDelegateHandle).ID);
  (this->CsvEndFrameDelegateHandle).ID = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->StatEntries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StatEntries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// OnCsvProfileEndFrame @ 14b2b2ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FOperatorCacheStatTracker::OnCsvProfileEndFrame(FOperatorCacheStatTracker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_Metasound::Engine::FOperatorCacheStatTracker::OnCsvProfileEndFrame(void)_::_2_::FStat_OperatorCacheStatTracker_RecordStats>
  FVar8;
  UPackage *pUVar9;
  ulonglong uVar10;
  FName FVar11;
  longlong lVar12;
  uint uVar13;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
  *pTStack_a0;
  FOperatorCacheStatTracker *local_98;
  char local_90;
  char cStack_8f;
  FName local_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  if (!Engine::Private::bMetasoundOperatorPoolCsvStatsEnabled) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_OperatorCacheStatTracker_RecordStats ==
        (FThreadSafeStaticStat<_private:_void___cdecl_Metasound::Engine::FOperatorCacheStatTracker::OnCsvProfileEndFrame(void)_::_2_::FStat_OperatorCacheStatTracker_RecordStats>
         )0x0) {
      pFVar7 = ::FName::FName(&local_res10,"OperatorCacheStatTracker_RecordStats");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_OperatorCacheStatTracker_RecordStats,*pFVar7,
                 L"OperatorCacheStatTracker_RecordStats","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_OperatorCacheStatTracker_RecordStats;
  if (StatPtr_OperatorCacheStatTracker_RecordStats ==
      (FThreadSafeStaticStat<_private:_void___cdecl_Metasound::Engine::FOperatorCacheStatTracker::OnCsvProfileEndFrame(void)_::_2_::FStat_OperatorCacheStatTracker_RecordStats>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res18,"OperatorCacheStatTracker_RecordStats");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_Metasound::Engine::FOperatorCacheStatTracker::OnCsvProfileEndFrame(void)_::_2_::FStat_OperatorCacheStatTracker_RecordStats>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_OperatorCacheStatTracker_RecordStats,
                         *pFVar7,L"OperatorCacheStatTracker_RecordStats","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10 = FVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                   ,0xeb);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14b2b2c58;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14b2b2c58:
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (__CsvProfilerStat239 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("TotalCachedOperators",_GCsvCategory_MetaSound_OperatorPool.Index);
      __CsvProfilerStat239 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("TotalCachedOperators",_GCsvCategory_MetaSound_OperatorPool.Index,this->NumInCache,
               Set);
    TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_80,
               (TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                *)this);
    local_90 = '\0';
    cStack_8f = '\0';
    stack0xffffffffffffff48 = local_80._16_16_;
    auStack_c0._0_8_ = local_80._8_8_;
    local_a8 = local_60;
    pTStack_a0 = pTStack_58;
    uVar10 = local_80._24_8_ >> 0x20;
    local_98 = this;
    if (local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
      do {
        uVar13 = _GCsvCategory_MetaSound_AvailableCachedOperators.Index;
        lVar12 = (longlong)(int)uVar10 * 0x44;
        lVar2 = *(longlong *)local_80._0_8_;
        if (*(int *)(lVar12 + 0x34 + lVar2) < 1) {
          TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_a0,(int)uVar10);
          local_90 = '\x01';
        }
        else {
          iVar6 = *(int *)(lVar12 + 0x38 + lVar2);
          pUVar9 = GetTransientPackage();
          if ((pUVar9 == (UPackage *)0x0) ||
             (*(longlong *)(lVar12 + 0x20 + lVar2) != pUVar9->_padding_)) {
            FCsvProfiler::Get();
            local_res18 = *(FName *)(lVar12 + 0x20 + lVar2);
            pFVar7 = &local_res18;
          }
          else {
            FCsvProfiler::Get();
            local_res10 = *(FName *)(lVar12 + 0x28 + lVar2);
            pFVar7 = &local_res10;
          }
          FCsvProfiler::RecordCustomStat(pFVar7,uVar13,iVar6,Set);
          uVar13 = _GCsvCategory_MetaSound_OperatorCacheUtilization.Index;
          iVar6 = *(int *)(lVar12 + 0x34 + lVar2);
          iVar1 = *(int *)(lVar12 + 0x38 + lVar2);
          pUVar9 = GetTransientPackage();
          if ((pUVar9 == (UPackage *)0x0) ||
             (*(longlong *)(lVar12 + 0x20 + lVar2) != pUVar9->_padding_)) {
            FCsvProfiler::Get();
            local_88 = *(FName *)(lVar12 + 0x20 + lVar2);
            pFVar7 = &local_88;
          }
          else {
            FCsvProfiler::Get();
            local_res20 = *(FName *)(lVar12 + 0x28 + lVar2);
            pFVar7 = &local_res20;
          }
          FCsvProfiler::RecordCustomStat(pFVar7,uVar13,(float)(iVar6 - iVar1) / (float)iVar6,Set);
        }
        uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
        uVar10 = (ulonglong)uStack_ac;
      } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
      if ((local_90 != '\0') && (cStack_8f != '\0')) {
        uVar13 = *(int *)&(local_98->StatEntries).field_0x8 -
                 *(int *)&(local_98->StatEntries).field_0x34;
        if (uVar13 < 4) {
          iVar6 = 1;
        }
        else {
          uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar13) && (*(int *)&(local_98->StatEntries).field_0x48 < iVar6)) ||
           (iVar6 < *(int *)&(local_98->StatEntries).field_0x48)) {
          *(int *)&(local_98->StatEntries).field_0x48 = iVar6;
          TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                    *)local_98);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar4) {
      FThreadStats::AddMessage(FVar11,CycleScopeEnd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnOperatorAdded @ 14b2b42e0

void __thiscall
Metasound::Engine::FOperatorCacheStatTracker::OnOperatorAdded
          (FOperatorCacheStatTracker *this,FOperatorPoolEntryID *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
  *pTVar1;
  undefined1 *puVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                     *)this,param_1);
    puVar2 = &pTVar1->field_0x20;
    if (pTVar1 == (TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
                   *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(int *)(puVar2 + 0x18) = *(int *)(puVar2 + 0x18) + 1;
    }
    this->NumInCache = this->NumInCache + 1;
                    /* WARNING: Could not recover jumptable at 0x00014b2b433f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnOperatorRemoved @ 14b2b4360

void __thiscall
Metasound::Engine::FOperatorCacheStatTracker::OnOperatorRemoved
          (FOperatorCacheStatTracker *this,FOperatorPoolEntryID *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
  *pTVar6;
  ulong64 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar6 = TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar8 = &pTVar6->field_0x20;
  if (pTVar6 == (TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
                 *)0x0) {
    puVar8 = (undefined1 *)0x0;
  }
  if (puVar8 != (undefined1 *)0x0) {
    this->NumInCache = this->NumInCache - *(int *)(puVar8 + 0x18);
  }
  if (*(int *)&(this->StatEntries).field_0x8 != *(int *)&(this->StatEntries).field_0x34) {
    uVar1 = (param_1->OperatorSettings).SampleRate;
    iVar2 = (param_1->OperatorSettings).NumFramesPerBlock;
    uVar7 = CityHash64((char *)param_1,0x10);
    puVar8 = *(undefined1 **)&(this->StatEntries).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->StatEntries).field_0x38;
    }
    iVar2 = *(int *)(puVar8 + (((longlong)
                                (int)((int)uVar7 * 0x40 +
                                     ((uint)(uVar7 >> 2) & 0x3fffffff) +
                                     (iVar2 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1)) -
                                0x61c88647U ^ (longlong)(int)uVar7) &
                              (longlong)*(int *)&(this->StatEntries).field_0x48 - 1U) * 4);
    while (iVar2 != -1) {
      lVar3 = *(longlong *)&this->StatEntries;
      lVar9 = (longlong)iVar2 * 0x44;
      if ((((*(uint *)(lVar9 + 8 + lVar3) == (param_1->OperatorID).C &&
            *(uint *)(lVar9 + 4 + lVar3) == (param_1->OperatorID).B) &&
           *(uint *)(lVar9 + 0xc + lVar3) == (param_1->OperatorID).D) &&
           *(uint *)(lVar9 + lVar3) == (param_1->OperatorID).A) &&
         (bVar5 = Metasound::operator==
                            ((FOperatorSettings *)(lVar3 + 0x10 + lVar9),&param_1->OperatorSettings)
         , bVar5)) {
        TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                         *)this,iVar2);
        break;
      }
      iVar2 = *(int *)(lVar9 + 0x3c + lVar3);
    }
  }
  if ((this->NumInCache < 0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5823954633806053152>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                         ,0xe0,"NumInCache >= 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b2b44f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnOperatorTrimmed @ 14b2b4510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FOperatorCacheStatTracker::OnOperatorTrimmed
          (FOperatorCacheStatTracker *this,FOperatorPoolEntryID *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
  *pTVar5;
  FTopLevelAssetPath *this_00;
  FString local_28;
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar5 = TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                   *)this,param_1);
  this_00 = (FTopLevelAssetPath *)&pTVar5->field_0x20;
  if (pTVar5 == (TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
                 *)0x0) {
    this_00 = (FTopLevelAssetPath *)0x0;
  }
  if (this_00 != (FTopLevelAssetPath *)0x0) {
    puVar1 = &this_00[1].PackageName.Number;
    *puVar1 = *puVar1 - 1;
    this_00[1].AssetName.ComparisonIndex.Value = this_00[1].AssetName.ComparisonIndex.Value - 1;
    if (((int)this_00[1].PackageName.Number < 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5823954633806053183>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                           ,0xc1,"StatEntry->NumCacheSlots >= 0"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((int)this_00[1].AssetName.ComparisonIndex.Value < 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5823954633806053182>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                           ,0xc2,"StatEntry->NumAvailableInCache >= 0"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (this_00[1].PackageName.Number == 0) {
      if ((byte)LogMetasoundGenerator._0_1_ < 5) goto LAB_14b2b466a;
      FTopLevelAssetPath::ToString(this_00,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
    }
    else {
      if ((byte)LogMetasoundGenerator._0_1_ < 5) goto LAB_14b2b466a;
      FTopLevelAssetPath::ToString(this_00,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
      local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
LAB_14b2b466a:
  piVar2 = &this->NumInCache;
  *piVar2 = *piVar2 + -1;
  if ((*piVar2 < 0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5823954633806053166>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                         ,0xd2,"NumInCache >= 0"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b2b46b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RecordCacheEvent @ 14b2b4e30

void __thiscall
Metasound::Engine::FOperatorCacheStatTracker::RecordCacheEvent
          (FOperatorCacheStatTracker *this,FOperatorPoolEntryID *param_1,bool param_2,
          FOperatorContext *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
  *pTVar5;
  undefined1 *puVar6;
  
  if (param_2) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                     *)this,param_1);
    puVar6 = &pTVar5->field_0x20;
    if (pTVar5 == (TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
                   *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    if (puVar6 != (undefined1 *)0x0) {
      piVar1 = (int *)(puVar6 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5823954633806053210>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                           ,0xa6,"StatEntry->NumAvailableInCache >= 0");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    piVar1 = &this->NumInCache;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5823954633806053206>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                         ,0xaa,"NumInCache >= 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else if (Engine::Private::bMetasoundOperatorPoolCsvStatsEnabled) {
    cVar3 = (**(code **)(*(longlong *)Engine::Private::CVarCacheMissCsvStatsEnabled._padding_ + 0xc0
                        ))();
    if ((cVar3 != '\0') && ((param_3->GraphAssetPath).PackageName != (FName)0x0)) {
      RecordOperatorStat(&param_3->GraphAssetPath,_GCsvCategory_Metasound_OperatorCacheMiss.Index,1,
                         Accumulate);
      return;
    }
  }
  return;
}

// RecordPreCacheRequest @ 14b2b50f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Engine::FOperatorCacheStatTracker::RecordPreCacheRequest
          (FOperatorCacheStatTracker *this,FOperatorBuildData *param_1,int param_2,int param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FTopLevelAssetPath *this_00;
  uint uVar9;
  longlong lVar10;
  FTopLevelAssetPath *pFVar11;
  int iVar12;
  TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry_&&>
  local_res10;
  int local_res20;
  FOperatorPoolEntryID local_e8;
  FOperatorPoolEntryID *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1->NumInstances < 1) {
    return;
  }
  local_res20 = param_3;
  if (((param_1->InitParams).Graph.Object == (IGraph *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = (uint *)(**(code **)((longlong)*(param_1->InitParams).Graph.Object + 0x10))();
  local_e8.OperatorSettings.SampleRate = (param_1->InitParams).OperatorSettings.SampleRate;
  local_e8.OperatorSettings.TargetBlockRate = (param_1->InitParams).OperatorSettings.TargetBlockRate
  ;
  local_e8.OperatorSettings.ActualBlockRate = (param_1->InitParams).OperatorSettings.ActualBlockRate
  ;
  local_e8.OperatorSettings.NumFramesPerBlock =
       (param_1->InitParams).OperatorSettings.NumFramesPerBlock;
  lpCriticalSection = &this->CriticalSection;
  local_e8.OperatorID.A = *puVar5;
  local_e8.OperatorID.B = puVar5[1];
  local_e8.OperatorID.C = puVar5[2];
  local_e8.OperatorID.D = puVar5[3];
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar9 = local_e8.OperatorSettings.SampleRate * 0x40 + local_e8.OperatorSettings.NumFramesPerBlock
          + ((uint)(CONCAT44(local_e8.OperatorSettings.TargetBlockRate,
                             local_e8.OperatorSettings.SampleRate) >> 2) & 0x3fffffff) + 0x9e3779b9
          ^ local_e8.OperatorSettings.SampleRate;
  uVar6 = CityHash64((char *)&local_e8,0x10);
  iVar3 = TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::FOperatorPoolEntryID>
                    ((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                      *)this,((uint)(uVar6 >> 2) & 0x3fffffff) +
                             (uint)uVar6 * 0x40 + uVar9 + 0x9e3779b9 ^ (uint)uVar6,&local_e8);
  if (iVar3 == -1) {
LAB_14b2b5293:
    if (((param_1->InitParams).Graph.Object == (IGraph *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar7 = (undefined8 *)(**(code **)((longlong)*(param_1->InitParams).Graph.Object + 0x50))();
    local_b8 = *puVar7;
    uStack_b0 = puVar7[1];
    local_c8 = &local_e8;
    local_c0 = &local_b8;
    local_a0 = 0;
    local_a8 = param_2;
    local_a4 = param_2;
    TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry_&&>_>
              ((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                *)this,&local_res10,(bool *)&local_c8);
    pFVar11 = &(param_1->InitParams).AssetPath;
    this_00 = (FTopLevelAssetPath *)
              ((longlong)(int)local_res10.Key * 0x44 + 0x20 + *(longlong *)&this->StatEntries);
    if ((this_00->PackageName == pFVar11->PackageName) &&
       (this_00->AssetName == (param_1->InitParams).AssetPath.AssetName)) {
      if (4 < (byte)LogMetasoundGenerator._0_1_) {
        FTopLevelAssetPath::ToString(pFVar11,&local_78);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14b2b5404;
    }
    if ((byte)LogMetasoundGenerator._0_1_ < 5) goto LAB_14b2b5404;
    FTopLevelAssetPath::ToString(this_00,&local_58);
    FTopLevelAssetPath::ToString(pFVar11,&local_68);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else {
    lVar10 = (longlong)iVar3 * 0x44 + *(longlong *)&this->StatEntries;
    pFVar11 = (FTopLevelAssetPath *)(lVar10 + 0x20);
    if (lVar10 == 0) {
      pFVar11 = (FTopLevelAssetPath *)0x0;
    }
    if (pFVar11 == (FTopLevelAssetPath *)0x0) goto LAB_14b2b5293;
    pFVar11[1].PackageName.Number = pFVar11[1].PackageName.Number + param_2;
    if ((byte)LogMetasoundGenerator._0_1_ < 5) goto LAB_14b2b5404;
    FTopLevelAssetPath::ToString(pFVar11,&local_88);
    FTopLevelAssetPath::ToString(&(param_1->InitParams).AssetPath,&local_98);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
    local_58.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      local_58.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14b2b5404:
  lVar10 = 0;
  uVar9 = local_e8.OperatorSettings.SampleRate * 0x40 + local_e8.OperatorSettings.NumFramesPerBlock
          + ((uint)(CONCAT44(local_e8.OperatorSettings.TargetBlockRate,
                             local_e8.OperatorSettings.SampleRate) >> 2) & 0x3fffffff) + 0x9e3779b9
          ^ local_e8.OperatorSettings.SampleRate;
  uVar6 = CityHash64((char *)&local_e8,0x10);
  iVar3 = TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::FOperatorPoolEntryID>
                    ((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                      *)this,((uint)(uVar6 >> 2) & 0x3fffffff) +
                             (uint)uVar6 * 0x40 + uVar9 + 0x9e3779b9 ^ (uint)uVar6,&local_e8);
  if (((iVar3 == -1) ||
      (lVar10 = (longlong)iVar3 * 0x44 + *(longlong *)&this->StatEntries, lVar10 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = local_res20 + param_2;
  if (*(int *)(lVar10 + 0x34) < iVar3) {
    iVar12 = iVar3 - *(int *)(lVar10 + 0x34);
    if (4 < (byte)LogMetasoundGenerator._0_1_) {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(lVar10 + 0x20),&local_48);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    *(int *)(lVar10 + 0x34) = iVar3;
    if (0 < iVar12) {
      iVar3 = 0;
      do {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar9 = local_e8.OperatorSettings.SampleRate * 0x40 +
                local_e8.OperatorSettings.NumFramesPerBlock +
                ((uint)(CONCAT44(local_e8.OperatorSettings.TargetBlockRate,
                                 local_e8.OperatorSettings.SampleRate) >> 2) & 0x3fffffff) +
                0x9e3779b9 ^ local_e8.OperatorSettings.SampleRate;
        uVar6 = CityHash64((char *)&local_e8,0x10);
        iVar4 = TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                ::FindIndexByHash<Metasound::FOperatorPoolEntryID>
                          ((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                            *)this,((uint)(uVar6 >> 2) & 0x3fffffff) +
                                   (uint)uVar6 * 0x40 + uVar9 + 0x9e3779b9 ^ (uint)uVar6,&local_e8);
        if (iVar4 != -1) {
          lVar8 = (longlong)iVar4 * 0x44 + *(longlong *)&this->StatEntries;
          lVar10 = lVar8 + 0x20;
          if (lVar8 == 0) {
            lVar10 = 0;
          }
          if (lVar10 != 0) {
            *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
          }
        }
        this->NumInCache = this->NumInCache + 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar12);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

