// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Media
// Functions: 27

// GetPlatformName @ 146bec110

FName __thiscall FMediaModule::GetPlatformName(FMediaModule *this,FGuid *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar7;
  FName FVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *in_R8;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res20 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  pTVar7 = FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos();
  iVar13 = *(int *)&pTVar7->field_0x28;
  iVar18 = 0;
  iVar16 = 0;
  puVar1 = &pTVar7->field_0x10;
  uVar5 = 1;
  iVar11 = 0;
  iVar6 = 0;
  if (iVar13 != 0) {
    puVar19 = *(uint **)&pTVar7->field_0x20;
    if (*(uint **)&pTVar7->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar18;
      iVar16 = iVar16 + 0x20;
      iVar18 = iVar18 + 1;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) {
        iVar11 = *(int *)&pTVar7->field_0x28;
        iVar6 = iVar13;
        goto LAB_146bec1c4;
      }
      uVar15 = puVar19[lVar10 + 1];
    }
    iVar11 = *(int *)&pTVar7->field_0x28;
    uVar5 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (int)lVar10 + -1 + iVar16;
    if (iVar11 < iVar6) {
      iVar6 = iVar13;
    }
  }
LAB_146bec1c4:
  uVar15 = *(uint *)&pTVar7->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar5,iVar18);
  TStack_50.CurrentBitIndex = iVar6;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_50._28_4_ = iVar6;
  TStack_50.BaseBitIndex = iVar16;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar11 < (int)uVar15)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar8 = (FName)(*pcVar3)();
    return FVar8;
  }
  uVar5 = *(uint *)&pTVar7->field_0x28;
  if (uVar15 != uVar5) {
    puVar17 = *(undefined1 **)&pTVar7->field_0x20;
    if (*(undefined1 **)&pTVar7->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146bec2c0;
      uVar15 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_146bec2c0:
  do {
    if (*(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_50.CurrentBitIndex == uVar15) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      uVar9 = 0;
      goto LAB_146bec33d;
    }
    puVar12 = (undefined8 *)((longlong)TStack_50.CurrentBitIndex * 0xa0 + *(longlong *)pTVar7);
    if (((*(int *)((longlong)puVar12 + 0x54) == in_R8[3] && *(int *)(puVar12 + 10) == in_R8[2]) &&
        *(int *)((longlong)puVar12 + 0x4c) == in_R8[1]) && *(int *)(puVar12 + 9) == *in_R8) {
      uVar9 = *puVar12;
LAB_146bec33d:
      param_1->A = (int)uVar9;
      param_1->B = (int)((ulonglong)uVar9 >> 0x20);
      return (FName)param_1;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  } while( true );
}

// GetPlatformGuid @ 146bec370

FGuid * __thiscall
FMediaModule::GetPlatformGuid(FMediaModule *this,FGuid *__return_storage_ptr__,FName *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FDataDrivenPlatformInfo *pFVar4;
  
  pFVar4 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(*param_1);
  uVar1 = (pFVar4->GlobalIdentifier).B;
  uVar2 = (pFVar4->GlobalIdentifier).C;
  uVar3 = (pFVar4->GlobalIdentifier).D;
  __return_storage_ptr__->A = (pFVar4->GlobalIdentifier).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetCaptureSupports @ 146bec3a0

TArray<IMediaCaptureSupport_*,TSizedDefaultAllocator<32>_> * __thiscall
FMediaModule::GetCaptureSupports(FMediaModule *this)

{
  return &this->CaptureSupports;
}

// GetClock @ 146bec3b0

IMediaClock * __thiscall FMediaModule::GetClock(FMediaModule *this)

{
  return (IMediaClock *)&this->Clock;
}

// GetPlayerFactories @ 146bec3c0

TArray<IMediaPlayerFactory_*,TSizedDefaultAllocator<32>_> * __thiscall
FMediaModule::GetPlayerFactories(FMediaModule *this)

{
  return &this->PlayerFactories;
}

// GetPlayerFactory @ 146bec3d0

IMediaPlayerFactory * __thiscall FMediaModule::GetPlayerFactory(FMediaModule *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IMediaPlayerFactory *pIVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  pFVar5 = (this->PlayerFactories).AllocatorInstance.Data;
  iVar2 = (this->PlayerFactories).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PlayerFactories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IMediaPlayerFactory_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pIVar3 = *(IMediaPlayerFactory **)pFVar5;
    pFVar4 = (FName *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,local_res18);
    if (*pFVar4 == *param_1) {
      return pIVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (IMediaPlayerFactory *)0x0;
}

// GetPlayerFactory @ 146bec470

IMediaPlayerFactory * __thiscall FMediaModule::GetPlayerFactory(FMediaModule *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IMediaPlayerFactory *pIVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_28 [16];
  
  pFVar5 = (this->PlayerFactories).AllocatorInstance.Data;
  iVar2 = (this->PlayerFactories).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PlayerFactories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IMediaPlayerFactory_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pIVar3 = *(IMediaPlayerFactory **)pFVar5;
    puVar4 = (uint *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,local_28);
    if (((puVar4[3] == param_1->D && puVar4[2] == param_1->C) && puVar4[1] == param_1->B) &&
        *puVar4 == param_1->A) {
      return pIVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (IMediaPlayerFactory *)0x0;
}

// GetTicker @ 146bec520

IMediaTicker * __thiscall FMediaModule::GetTicker(FMediaModule *this)

{
  return (IMediaTicker *)&(this->Ticker)._padding_;
}

// GetOnTickPreEngineCompleted @ 146bec530

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FMediaModule::GetOnTickPreEngineCompleted(FMediaModule *this)

{
  return &this->OnTickPreEngineCompleted;
}

// LockToTimecode @ 146bec540

void __thiscall FMediaModule::LockToTimecode(FMediaModule *this,bool param_1)

{
  this->TimecodeLocked = param_1;
  return;
}

// RegisterCaptureSupport @ 146bec550

void __thiscall
FMediaModule::RegisterCaptureSupport(FMediaModule *this,IMediaCaptureSupport *param_1)

{
  IMediaCaptureSupport *local_res8 [4];
  
  local_res8[0] = param_1;
  TArray<IMediaCaptureSupport_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<IMediaCaptureSupport_*>
            (&this->CaptureSupports,local_res8);
  return;
}

// RegisterPlayerFactory @ 146bec580

void __thiscall FMediaModule::RegisterPlayerFactory(FMediaModule *this,IMediaPlayerFactory *param_1)

{
  IMediaPlayerFactory *local_res8 [4];
  
  local_res8[0] = param_1;
  TArray<IMediaPlayerFactory_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<IMediaPlayerFactory_*>
            (&this->PlayerFactories,local_res8);
  return;
}

// SetPlayerLifecycleManagerDelegate @ 146bec5b0

void __thiscall
FMediaModule::SetPlayerLifecycleManagerDelegate
          (FMediaModule *this,IMediaPlayerLifecycleManagerDelegate *param_1)

{
  this->PlayerLifecycleManagerDelegate = param_1;
  return;
}

// GetPlayerLifecycleManagerDelegate @ 146bec5c0

IMediaPlayerLifecycleManagerDelegate * __thiscall
FMediaModule::GetPlayerLifecycleManagerDelegate(FMediaModule *this)

{
  return this->PlayerLifecycleManagerDelegate;
}

// CreateMediaPlayerInstanceID @ 146bec5d0

ulong64 __thiscall FMediaModule::CreateMediaPlayerInstanceID(FMediaModule *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  bool bVar4;
  
  uVar2 = this->NextMediaPlayerInstanceID;
  do {
    uVar1 = uVar2;
    uVar3 = uVar2 + 1;
    bVar4 = uVar2 == 0xffffffffffffffff;
    uVar2 = uVar3;
  } while (bVar4);
  this->NextMediaPlayerInstanceID = uVar3;
  return uVar1;
}

// SetTimeSource @ 146bec600

void __thiscall
FMediaModule::SetTimeSource(FMediaModule *this,TSharedPtr<IMediaTimeSource,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaTimeSource *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->TimeSource).SharedReferenceCount.ReferenceController;
  (this->TimeSource).Object = pIVar2;
  (this->TimeSource).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetTimeSource @ 146bec640

TSharedPtr<IMediaTimeSource,1> * __thiscall
FMediaModule::GetTimeSource
          (FMediaModule *this,TSharedPtr<IMediaTimeSource,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->TimeSource).Object;
  pTVar1 = (this->TimeSource).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// TickPostEngine @ 146bec670

/* WARNING: Removing unreachable block (ram,0x000146becaf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaModule::TickPostEngine(FMediaModule *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  bool bVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_res18;
  FStatMessage local_48;
  
  local_res10 = (FName)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
  ;
  FVar12.Value = 0;
  if ((*(int *)local_res10 <
       `public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::__l3::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'
                           ::__l3::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::__l3::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Media_TickFetch = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_Media_TickFetch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::__l3::
                StatPtr_STAT_Media_TickFetch,*pFVar5,L"STAT_Media_TickFetch","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::
                         __l3::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_Media_TickFetch;
  if (_StatPtr_STAT_Media_TickFetch == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_Media_TickFetch");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::
                         __l3::StatPtr_STAT_Media_TickFetch,*pFVar5,L"STAT_Media_TickFetch",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar3 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar4 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar4 == 0)) {
    FMediaClock::TickFetch(&this->Clock);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar4;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Media\\Private\\MediaModule.cpp"
                   ,0x94);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar13 = FThreadStats::bPrimaryEnable == false;
    if (bVar13) {
      FVar10.ComparisonIndex.Value = 0;
      FVar10.Number = 0;
      FVar9.Value = FVar12.Value;
    }
    else {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar4;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
    }
    FMediaClock::TickFetch(&this->Clock);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar13) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      if (pFVar7->bWaitForExplicitFlush < pFVar7->ScopeCount) {
        local_48.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
        local_48.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar7,&local_48);
        piVar1 = &pFVar7->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
  }
  if ((*(int *)local_res10 <
       `public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::__l4::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'
                           ::__l4::_thread_safe_static_guard_1__),
     `public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::__l4::
     _thread_safe_static_guard_1__ == -1)) {
    _StatPtr_STAT_Media_TickRender = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_Media_TickRender");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::__l4::
                StatPtr_STAT_Media_TickRender,*pFVar5,L"STAT_Media_TickRender","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::
                         __l4::_thread_safe_static_guard_1__);
  }
  pTVar6 = _StatPtr_STAT_Media_TickRender;
  if (_StatPtr_STAT_Media_TickRender == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_Media_TickRender");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_FMediaModule::TickPostEngine(void)___ptr64'::
                         __l4::StatPtr_STAT_Media_TickRender,*pFVar5,L"STAT_Media_TickRender",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar3 = false;
  FVar9 = FVar11.ComparisonIndex.Value;
  uVar4 = FVar11.Number;
  if ((FVar9.Value == 0) && (uVar4 == 0)) {
    FMediaClock::TickRender(&this->Clock);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar4;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Media\\Private\\MediaModule.cpp"
                   ,0x99);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar13 = FThreadStats::bPrimaryEnable == false;
    if (bVar13) {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar4;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      FVar12.Value = FVar9.Value;
    }
    FMediaClock::TickRender(&this->Clock);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar13) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      if (pFVar7->bWaitForExplicitFlush < pFVar7->ScopeCount) {
        local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_48.NameAndInfo.Index.Value = FVar12.Value;
        QueryPerformanceCounter(&local_res8);
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar7,&local_48);
        piVar1 = &pFVar7->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
  }
  return;
}

// TickPostRender @ 146becc60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaModule::TickPostRender(FMediaModule *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  TStatIdData *pTVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FMediaModule::TickPostRender(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FMediaModule::TickPostRender(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FMediaModule::TickPostRender(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Media_TickOutput = (TStatIdData *)0x0;
    pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_Media_TickOutput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FMediaModule::TickPostRender(void)___ptr64'::__l2::
                StatPtr_STAT_Media_TickOutput,*pFVar4,L"STAT_Media_TickOutput","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FMediaModule::TickPostRender(void)___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
  }
  pTVar5 = _StatPtr_STAT_Media_TickOutput;
  if (_StatPtr_STAT_Media_TickOutput == (TStatIdData *)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_Media_TickOutput");
    pTVar5 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_FMediaModule::TickPostRender(void)___ptr64'::
                         __l2::StatPtr_STAT_Media_TickOutput,*pFVar4,L"STAT_Media_TickOutput",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar8 = *(FName *)&pTVar5->Name;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FMediaClock::TickOutput(&this->Clock);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar5->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar5->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Media\\Private\\MediaModule.cpp"
                   ,0xa0);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FMediaClock::TickOutput(&this->Clock);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return;
}

// TickPreEngine @ 146becf90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaModule::TickPreEngine(FMediaModule *this)

{
  int *piVar1;
  bool bVar2;
  IMediaTimeSource *pIVar3;
  longlong lVar4;
  longlong lVar5;
  FName FVar6;
  bool bVar7;
  longlong *plVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  long64 lVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  bool bVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  undefined1 local_68 [8];
  FName local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  QueryPerformanceCounter(&local_res18);
  pIVar3 = (this->TimeSource).Object;
  this->FrameStartTime =
       (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  FVar15.Value = 0;
  if (pIVar3 != (IMediaTimeSource *)0x0) {
    bVar2 = this->TimecodeLocked;
    plVar8 = (longlong *)(**(code **)*pIVar3)(pIVar3,local_68);
    lVar4 = (this->Clock).Timecode.Ticks;
    lVar5 = *plVar8;
    lVar12 = 0;
    if (lVar4 != -0x8000000000000000) {
      lVar12 = lVar5 - lVar4;
    }
    (this->Clock).DeltaTime.Ticks = lVar12;
    (this->Clock).Timecode.Ticks = lVar5;
    (this->Clock).TimecodeLocked = bVar2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FMediaModule::TickPreEngine(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FMediaModule::TickPreEngine(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FMediaModule::TickPreEngine(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Media_TickInput = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_60,"STAT_Media_TickInput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FMediaModule::TickPreEngine(void)___ptr64'::__l2::
                StatPtr_STAT_Media_TickInput,*pFVar9,L"STAT_Media_TickInput","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FMediaModule::TickPreEngine(void)___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_Media_TickInput;
  if (_StatPtr_STAT_Media_TickInput == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_58,"STAT_Media_TickInput");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FMediaModule::TickPreEngine(void)___ptr64'::
                          __l2::StatPtr_STAT_Media_TickInput,*pFVar9,L"STAT_Media_TickInput",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar6 = *(FName *)&pTVar10->Name;
  bVar2 = false;
  bVar7 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar13.Bits = (uint)FVar6.ComparisonIndex.Value;
  uVar11 = FVar6.Number;
  if ((FVar13.Bits == 0) && (uVar11 == 0)) {
    FMediaClock::TickInput(&this->Clock);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnTickPreEngineCompleted
              );
    return;
  }
  if (GCycleStatsShouldEmitNamedEvents != 0) {
    local_res8.Bits = 0;
    FGenericPlatformMisc::BeginNamedEvent
              ((FColor *)&local_res8._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
    bVar2 = false;
    bVar7 = true;
    if (-1 < CpuChannel->Enabled) {
      local_res10.Bits = FVar13.Bits;
      local_res14 = uVar11;
      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                ((FName *)&local_res10._s_0,(pTVar10->StatDescriptionWide).Ptr,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Media\\Private\\MediaModule.cpp"
                 ,0xad);
      bVar2 = true;
      bVar7 = true;
    }
  }
  bVar16 = FThreadStats::bPrimaryEnable != false;
  FVar14 = local_50;
  if (bVar16) {
    local_res8.Bits = FVar13.Bits;
    uStackX_c = uVar11;
    local_50 = FVar6;
    FThreadStats::AddMessage(FVar6,CycleScopeStart);
    FVar14 = FVar6;
    FVar15.Value = local_50.ComparisonIndex.Value;
  }
  FMediaClock::TickInput(&this->Clock);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnTickPreEngineCompleted);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_40.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res20);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// TickPreSlate @ 146bed370

void __thiscall FMediaModule::TickPreSlate(FMediaModule *this)

{
  return;
}

// UnregisterCaptureSupport @ 146bed380

void __thiscall
FMediaModule::UnregisterCaptureSupport(FMediaModule *this,IMediaCaptureSupport *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  IMediaCaptureSupport *pIVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  IMediaCaptureSupport *local_38 [2];
  
  pFVar2 = (this->CaptureSupports).AllocatorInstance.Data;
  local_38[0] = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->CaptureSupports).ArrayMax * 8
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->CaptureSupports).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->CaptureSupports).AllocatorInstance.Data;
    bVar4 = *(IMediaCaptureSupport **)pFVar2 != local_38[0];
    lVar6 = 0;
    pIVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(IMediaCaptureSupport **)(pFVar2 + lVar6 * 8) != pIVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pIVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->CaptureSupports).ArrayNum = iVar9;
  }
  return;
}

// UnregisterPlayerFactory @ 146bed4f0

void __thiscall
FMediaModule::UnregisterPlayerFactory(FMediaModule *this,IMediaPlayerFactory *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  IMediaPlayerFactory *pIVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  IMediaPlayerFactory *local_38 [2];
  
  pFVar2 = (this->PlayerFactories).AllocatorInstance.Data;
  local_38[0] = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->PlayerFactories).ArrayMax * 8
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->PlayerFactories).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->PlayerFactories).AllocatorInstance.Data;
    bVar4 = *(IMediaPlayerFactory **)pFVar2 != local_38[0];
    lVar6 = 0;
    pIVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(IMediaPlayerFactory **)(pFVar2 + lVar6 * 8) != pIVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pIVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->PlayerFactories).ArrayNum = iVar9;
  }
  return;
}

// GetFrameStartTime @ 146bed680

double __thiscall FMediaModule::GetFrameStartTime(FMediaModule *this)

{
  return this->FrameStartTime;
}

// StartupModule @ 146bed690

void __thiscall FMediaModule::StartupModule(FMediaModule *this)

{
  FRunnableThread *pFVar1;
  
  pFVar1 = FRunnableThread::Create
                     ((FRunnable *)&this->Ticker,L"FMediaTicker",0,TPri_Normal,0xffffffffffffffff,
                      None);
  this->TickerThread = pFVar1;
  return;
}

// ShutdownModule @ 146bed6e0

void __thiscall FMediaModule::ShutdownModule(FMediaModule *this)

{
  FRunnableThread *pFVar1;
  
  pFVar1 = this->TickerThread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = this->TickerThread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->TickerThread = (FRunnableThread *)0x0;
  }
  (this->CaptureSupports).ArrayNum = 0;
  if ((this->CaptureSupports).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CaptureSupports).AllocatorInstance,0,&(this->CaptureSupports).ArrayMax)
    ;
  }
  (this->PlayerFactories).ArrayNum = 0;
  if ((this->PlayerFactories).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PlayerFactories).AllocatorInstance,0,&(this->PlayerFactories).ArrayMax)
    ;
  }
  return;
}

// SupportsDynamicReloading @ 146bed790

bool __thiscall FMediaModule::SupportsDynamicReloading(FMediaModule *this)

{
  return false;
}

