// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 9

// FMessageSanitizerNull @ 14ed10bb0

FMessageSanitizerNull * __thiscall
FMessageSanitizerNull::FMessageSanitizerNull(FMessageSanitizerNull *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IMessageSanitizer__6B_;
  ::FString::FString((FString *)&this->_padding_,L"␞");
  this->RequestId = 0;
  this->_padding_ = (longlong)&___7FMessageSanitizerNull__6B_;
  *(undefined8 *)&this->RequestIdHandleMap = 0;
  *(undefined8 *)&(this->RequestIdHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->RequestIdHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->RequestIdHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->RequestIdHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestIdHandleMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestIdHandleMap).field_0x34 = 0;
  *(undefined8 *)&(this->RequestIdHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->RequestIdHandleMap).field_0x48 = 0;
  return this;
}

// ~FMessageSanitizerNull @ 14ed127b0

void __thiscall FMessageSanitizerNull::~FMessageSanitizerNull(FMessageSanitizerNull *this)

{
  undefined1 *puVar1;
  TMap<int,TWeakPtr<FTSTicker::FElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>_>
  *this_00;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  longlong *plVar7;
  code *pcVar8;
  TMap<int,TWeakPtr<FTSTicker::FElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  TMap<int,TWeakPtr<FTSTicker::FElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<int,TWeakPtr<FTSTicker::FElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  puVar1 = &(this->RequestIdHandleMap).field_0x10;
  this->_padding_ = (longlong)&___7FMessageSanitizerNull__6B_;
  iVar4 = *(int *)&(this->RequestIdHandleMap).field_0x28;
  this_00 = &this->RequestIdHandleMap;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->RequestIdHandleMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14ed1285d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_14ed1285d:
  uVar14 = *(uint *)&(this->RequestIdHandleMap).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&(this->RequestIdHandleMap).field_0x8 -
              *(int *)&(this->RequestIdHandleMap).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this_00;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->RequestIdHandleMap).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(this->RequestIdHandleMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ed12960;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_14ed12960:
  while( true ) {
    pTVar9 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00))
    break;
    lVar11 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar9;
    local_a8.Object = *(FElement **)(lVar11 + 8);
    local_a8.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar11 + 0x10);
    if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  *(undefined4 *)&(this->RequestIdHandleMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->RequestIdHandleMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  this->_padding_ = (longlong)&___7IMessageSanitizer__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// operator() @ 14ed15000

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_bool___cdecl__public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayName(FString_const_&,TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FMessageSanitizerNull_SanitizeDisplayName>
  FVar8;
  FString *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FString local_68;
  undefined1 local_58 [12];
  uint local_4c;
  
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayName ==
        (FThreadSafeStaticStat<_public:_bool___cdecl__public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayName(FString_const_&,TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FMessageSanitizerNull_SanitizeDisplayName>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_FMessageSanitizerNull_SanitizeDisplayName");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayName,*pFVar7,
                 L"STAT_FMessageSanitizerNull_SanitizeDisplayName","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayName;
  if (StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayName ==
      (FThreadSafeStaticStat<_public:_bool___cdecl__public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayName(FString_const_&,TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FMessageSanitizerNull_SanitizeDisplayName>
       )0x0) {
    pFVar7 = ::FName::FName(local_res18,"STAT_FMessageSanitizerNull_SanitizeDisplayName");
    FVar8 = (FThreadSafeStaticStat<_public:_bool___cdecl__public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayName(FString_const_&,TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FMessageSanitizerNull_SanitizeDisplayName>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayName,*pFVar7,
                         L"STAT_FMessageSanitizerNull_SanitizeDisplayName","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineMessageSanitizerNull.cpp"
                   ,0x1a);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_14ed1516c;
    }
  }
  bVar5 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_14ed1516c:
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar9 = ::FString::Replace((FString *)((longlong)this + 8),(FString *)local_58,L"dirty",L"d***y",
                              IgnoreCase);
  if (&local_68 != pFVar9) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
             (FReadAccessScope *)local_58);
  if ((*(int *)((longlong)this + 0x28) != 0) &&
     (plVar2 = *(longlong **)((longlong)this + 0x20), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_58);
  if (5 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl
              ((FString *)local_58,L"Completed MCP Test sanitize of string %s (result: %s)");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  lVar3 = *(longlong *)this;
  local_res8.s.LowPart = *(uint *)((longlong)this + 0x30);
  if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
    TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
                       *)(lVar3 + 0x30),local_res8.s.LowPart,(int *)&local_res8.QuadPart);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_4c = FVar12.Number & 0xffff6fff | 0x6000;
      local_58._8_4_ = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_58._0_8_ = ZEXT48(local_res8.s.LowPart);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return false;
}

// operator() @ 14ed15430

/* WARNING: Removing unreachable block (ram,0x00014ed1570a) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_bool___cdecl__public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayNames(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FMessageSanitizerNull_SanitizeDisplayNames>
  FVar12;
  FString *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FString *this_00;
  FString *pFVar18;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  uint local_res20 [2];
  FString local_b8;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FName local_98;
  FName local_90;
  FString local_80;
  FName local_70;
  FName local_68;
  FString local_60;
  FReadAccessScope local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayNames ==
        (FThreadSafeStaticStat<_public:_bool___cdecl__public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayNames(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FMessageSanitizerNull_SanitizeDisplayNames>
         )0x0) {
      pFVar11 = ::FName::FName(&local_70,"STAT_FMessageSanitizerNull_SanitizeDisplayNames");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayNames,*pFVar11,
                 L"STAT_FMessageSanitizerNull_SanitizeDisplayNames","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayNames;
  if (StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayNames ==
      (FThreadSafeStaticStat<_public:_bool___cdecl__public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayNames(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FMessageSanitizerNull_SanitizeDisplayNames>
       )0x0) {
    pFVar11 = ::FName::FName(&local_68,"STAT_FMessageSanitizerNull_SanitizeDisplayNames");
    FVar12 = (FThreadSafeStaticStat<_public:_bool___cdecl__public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayNames(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FMessageSanitizerNull_SanitizeDisplayNames>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FMessageSanitizerNull_SanitizeDisplayNames,*pFVar11,
                          L"STAT_FMessageSanitizerNull_SanitizeDisplayNames","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar16.Value;
        local_98.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineMessageSanitizerNull.cpp"
                   ,0x2d);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar16.Value;
      uStackX_c = uVar14;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_14ed1558d;
    }
  }
  bVar6 = false;
  FVar17 = local_90;
LAB_14ed1558d:
  iVar1 = *(int *)((longlong)this + 0x10);
  this_00 = *(FString **)((longlong)this + 8);
  pFVar18 = this_00 + iVar1;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar1) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (this_00 == pFVar18) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
                 &local_50);
      if ((*(int *)((longlong)this + 0x28) != 0) &&
         (plVar2 = *(longlong **)((longlong)this + 0x20), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x68))(plVar2,1,&local_a8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      if (5 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(&local_80,L"Completed MCP Test sanitize of %d strings.");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      lVar3 = *(longlong *)this;
      local_res20[0] = *(uint *)((longlong)this + 0x30);
      if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
        TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
                           *)(lVar3 + 0x30),local_res20[0],(int *)local_res20);
      }
      DestructItems<FString,int>((FString *)local_a8.Data,(int)local_a0);
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FThreadStats::AddMessage(FVar17,CycleScopeEnd);
      }
      return false;
    }
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    pFVar13 = ::FString::Replace(this_00,&local_60,L"dirty",L"d***y",IgnoreCase);
    if (&local_b8 != pFVar13) {
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      local_b8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_b8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (((local_a8.Data <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 < local_a8.Data + (longlong)local_a0._4_4_ * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    iVar10 = (int)local_a0;
    if ((int)local_a0 == local_a0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
    }
    local_a0 = CONCAT44(local_a0._4_4_,iVar10 + 1);
    pFVar15 = local_a8.Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar15 = 0;
    *(FScriptContainerElement **)pFVar15 = local_b8.Data.AllocatorInstance.Data;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar15 + 8) = local_b8.Data.ArrayNum;
    *(int *)(pFVar15 + 0xc) = local_b8.Data.ArrayMax;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    this_00 = this_00 + 1;
  }
  pcVar4 = (code *)swi(3);
  uVar9 = (*pcVar4)();
  return (bool)uVar9;
}

// PerformSanitize @ 14ed29bd0

void __thiscall
FMessageSanitizerNull::PerformSanitize
          (FMessageSanitizerNull *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::Replace(param_1,&local_18,L"dirty",L"d***y",IgnoreCase);
  if (param_2 != pFVar2) {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_2->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// QueryBlockedUser @ 14ed2a130

void __thiscall
FMessageSanitizerNull::QueryBlockedUser
          (FMessageSanitizerNull *this,int param_1,FString *param_2,FString *param_3,
          TDelegate<void___cdecl(FBlockedQueryResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  longlong *plVar2;
  ushort local_38 [4];
  FString local_30;
  FReadAccessScope local_20;
  
  local_38[0] = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  if (&local_30 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_30.Data.ArrayMax = 0;
    local_30.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_30,uVar1,&local_30.Data.ArrayMax);
      memcpy(local_30.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_38[0] = local_38[0] & 0xff00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_20);
  if ((*(int *)&param_4->field_0x10 != 0) &&
     (plVar2 = *(longlong **)&param_4->field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// ResetBlockedUserCache @ 14ed2e6b0

void __thiscall FMessageSanitizerNull::ResetBlockedUserCache(FMessageSanitizerNull *this)

{
  return;
}

// SanitizeDisplayName @ 14ed2e8c0

void __thiscall
FMessageSanitizerNull::SanitizeDisplayName
          (FMessageSanitizerNull *this,FString *param_1,
          TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  int local_res8 [2];
  undefined1 local_98 [8];
  FDelegateAllocation local_90;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  TWeakPtr<FTSTicker::FElement,1> local_60;
  FMessageSanitizerNull *local_50;
  FString local_48;
  TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> local_38;
  int local_20;
  
  local_res8[0] = this->RequestId;
  this->RequestId = local_res8[0] + 1;
  this_00 = FTSTicker::GetCoreTicker();
  local_50 = this;
  ::FString::FString(&local_48,param_1);
  TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>(&local_38,param_2);
  local_20 = local_res8[0];
  local_98 = (undefined1  [8])0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_80);
  local_68 = &local_90;
  puVar3 = UE::Core::Private::DelegateAllocate(0x50,&local_90);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = local_50;
    ::FString::FString((FString *)(puVar3 + 4),&local_48);
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 6),&local_38);
    *(int *)(puVar3 + 9) = local_20;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  FTSTicker::AddTicker
            (this_00,&local_60,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_98
             ,__real_40400000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_80);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_98 = (undefined1  [8])local_res8;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)&local_60;
  TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TWeakPtr<FTSTicker::FElement,1>_const_&>_>
            ((TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
              *)&this->RequestIdHandleMap,
             (TPairInitializer<int_const_&,TWeakPtr<FTSTicker::FElement,1>_const_&> *)
             &stack0x00000020,(bool *)local_98);
  if (local_60.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_60.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_60.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_60.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// SanitizeDisplayNames @ 14ed2eab0

void __thiscall
FMessageSanitizerNull::SanitizeDisplayNames
          (FMessageSanitizerNull *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  ForAnyElementType *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FTSTicker *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  int local_res8 [4];
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  FMessageSanitizerNull *local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  local_88;
  int local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  TWeakPtr<FTSTicker::FElement,1> local_48;
  
  local_res8[0] = this->RequestId;
  this->RequestId = local_res8[0] + 1;
  this_00 = FTSTicker::GetCoreTicker();
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_a0 = this;
  local_90 = iVar4;
  if (iVar4 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&local_98,iVar4,&local_8c);
    ConstructItems<FString,FString,int>(local_98.Data,(FString *)pFVar5,iVar4);
  }
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            (&local_88,param_2);
  local_70 = local_res8[0];
  local_b8 = (undefined1  [8])0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_68);
  local_50 = &local_b0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x50,&local_b0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    iVar4 = local_90;
    FVar6.Data = local_98.Data;
    puVar7[2] = uVar8;
    pFVar1 = (ForAnyElementType *)(puVar7 + 4);
    *puVar7 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_a0;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 5) = local_90;
    if (local_90 == 0) {
      *(int *)((longlong)puVar7 + 0x2c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_90,0,pFVar1,local_90,(int *)((longlong)puVar7 + 0x2c));
      ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)FVar6.Data,iVar4);
    }
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *)(puVar7 + 6),&local_88);
    *(int *)(puVar7 + 9) = local_70;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  FTSTicker::AddTicker
            (this_00,&local_48,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_b8
             ,__real_40400000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_68);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_88);
  DestructItems<FString,int>((FString *)local_98.Data,local_90);
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  local_b8 = (undefined1  [8])local_res8;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)&local_48;
  TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TWeakPtr<FTSTicker::FElement,1>_const_&>_>
            ((TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
              *)&this->RequestIdHandleMap,
             (TPairInitializer<int_const_&,TWeakPtr<FTSTicker::FElement,1>_const_&> *)
             (local_res8 + 2),(bool *)local_b8);
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

