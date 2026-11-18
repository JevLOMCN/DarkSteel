// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 28

// StaticClass @ 14d998790

UClass * __cdecl UAudioGameplayVolumeSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeSubsystem",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeSubsystem,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioGameplayVolumeSubsystem>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton;
}

// UAudioGameplayVolumeSubsystem @ 14d99f7e0

UAudioGameplayVolumeSubsystem * __thiscall
UAudioGameplayVolumeSubsystem::UAudioGameplayVolumeSubsystem
          (UAudioGameplayVolumeSubsystem *this,FVTableHelper *param_1)

{
  UAudioEngineSubsystem::UAudioEngineSubsystem((UAudioEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UAudioEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IActiveSoundUpdateInterface__;
  (this->TransientProxyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientProxyList).ArrayNum = 0;
  (this->TransientProxyList).ArrayMax = 0;
  *(undefined8 *)&this->AGVComponents = 0;
  *(undefined8 *)&(this->AGVComponents).field_0x8 = 0;
  *(undefined8 *)&(this->AGVComponents).field_0x20 = 0;
  *(undefined4 *)&(this->AGVComponents).field_0x28 = 0;
  *(undefined4 *)&(this->AGVComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->AGVComponents).field_0x34 = 0;
  *(undefined4 *)&(this->AGVComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AGVComponents).field_0x40 = 0;
  *(undefined4 *)&(this->AGVComponents).field_0x48 = 0;
  (this->KnownProxyIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownProxyIDs).ArrayNum = 0;
  (this->KnownProxyIDs).ArrayMax = 0;
  (this->AGVListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AGVListeners).ArrayNum = 0;
  (this->AGVListeners).ArrayMax = 0;
  *(undefined8 *)&this->ActiveSoundData = 0;
  *(undefined8 *)&(this->ActiveSoundData).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveSoundData).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveSoundData).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveSoundData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveSoundData).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveSoundData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveSoundData).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveSoundData).field_0x48 = 0;
  *(undefined8 *)&this->WorldProxyLists = 0;
  *(undefined8 *)&(this->WorldProxyLists).field_0x8 = 0;
  *(undefined8 *)&(this->WorldProxyLists).field_0x20 = 0;
  *(undefined4 *)&(this->WorldProxyLists).field_0x28 = 0;
  *(undefined4 *)&(this->WorldProxyLists).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldProxyLists).field_0x34 = 0;
  *(undefined4 *)&(this->WorldProxyLists).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldProxyLists).field_0x40 = 0;
  *(undefined4 *)&(this->WorldProxyLists).field_0x48 = 0;
  this->TimeSinceUpdate = 0.0;
  this->NextUpdateDeltaTime = 0.0;
  this->PreviousProxyCount = 0;
  this->bHasStaleProxy = false;
  return this;
}

// UAudioGameplayVolumeSubsystem @ 14d99f900

UAudioGameplayVolumeSubsystem * __thiscall
UAudioGameplayVolumeSubsystem::UAudioGameplayVolumeSubsystem(UAudioGameplayVolumeSubsystem *this)

{
  UAudioEngineSubsystem::UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UAudioEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IActiveSoundUpdateInterface__;
  (this->TransientProxyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientProxyList).ArrayNum = 0;
  (this->TransientProxyList).ArrayMax = 0;
  *(undefined8 *)&this->AGVComponents = 0;
  *(undefined8 *)&(this->AGVComponents).field_0x8 = 0;
  *(undefined8 *)&(this->AGVComponents).field_0x20 = 0;
  *(undefined4 *)&(this->AGVComponents).field_0x28 = 0;
  *(undefined4 *)&(this->AGVComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->AGVComponents).field_0x34 = 0;
  *(undefined4 *)&(this->AGVComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AGVComponents).field_0x40 = 0;
  *(undefined4 *)&(this->AGVComponents).field_0x48 = 0;
  (this->KnownProxyIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownProxyIDs).ArrayNum = 0;
  (this->KnownProxyIDs).ArrayMax = 0;
  (this->AGVListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AGVListeners).ArrayNum = 0;
  (this->AGVListeners).ArrayMax = 0;
  *(undefined8 *)&this->ActiveSoundData = 0;
  *(undefined8 *)&(this->ActiveSoundData).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveSoundData).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveSoundData).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveSoundData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveSoundData).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveSoundData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveSoundData).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveSoundData).field_0x48 = 0;
  *(undefined8 *)&this->WorldProxyLists = 0;
  *(undefined8 *)&(this->WorldProxyLists).field_0x8 = 0;
  *(undefined8 *)&(this->WorldProxyLists).field_0x20 = 0;
  *(undefined4 *)&(this->WorldProxyLists).field_0x28 = 0;
  *(undefined4 *)&(this->WorldProxyLists).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldProxyLists).field_0x34 = 0;
  *(undefined4 *)&(this->WorldProxyLists).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldProxyLists).field_0x40 = 0;
  *(undefined4 *)&(this->WorldProxyLists).field_0x48 = 0;
  this->TimeSinceUpdate = 0.0;
  this->NextUpdateDeltaTime = 0.0;
  this->PreviousProxyCount = 0;
  this->bHasStaleProxy = false;
  return this;
}

// ~UAudioGameplayVolumeSubsystem @ 14d9a0470

void __thiscall
UAudioGameplayVolumeSubsystem::~UAudioGameplayVolumeSubsystem(UAudioGameplayVolumeSubsystem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->WorldProxyLists).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldProxyLists).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldProxyLists);
  *(undefined4 *)&(this->ActiveSoundData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveSoundData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveSoundData);
  DestructItems<FAudioGameplayVolumeListener,int>
            ((FAudioGameplayVolumeListener *)(this->AGVListeners).AllocatorInstance.Data,
             (this->AGVListeners).ArrayNum);
  pFVar2 = (this->AGVListeners).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->KnownProxyIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AGVComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AGVComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AGVComponents);
  pFVar2 = (this->TransientProxyList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IActiveSoundUpdateInterface__6B_;
  UAudioEngineSubsystem::~UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  return;
}

// operator() @ 14d9a07c0

void __thiscall
`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FAudioDeviceManager *this_00;
  UAudioGameplayVolumeSubsystem *pUVar5;
  FScriptContainerElement *pFVar6;
  FAudioDeviceHandle local_28;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    FAudioDeviceManager::GetAudioDevice(this_00,&local_28,*(uint *)this);
    bVar4 = FAudioDeviceHandle::IsValid(&local_28);
    if (bVar4) {
      bVar4 = FAudioDeviceHandle::IsValid(&local_28);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                             ,0x60,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar5 = FAudioDevice::GetSubsystem<UAudioGameplayVolumeSubsystem>(local_28.Device);
      if (pUVar5 != (UAudioGameplayVolumeSubsystem *)0x0) {
        iVar2 = *(int *)((longlong)this + 4);
        bVar4 = IsInAudioThread();
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInAudioThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                               ,0x200,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = (pUVar5->KnownProxyIDs).AllocatorInstance.Data;
        pFVar1 = pFVar6 + (longlong)(pUVar5->KnownProxyIDs).ArrayNum * 4;
        for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
          if (*(int *)pFVar6 == iVar2) {
            pUVar5->bHasStaleProxy = true;
            break;
          }
        }
      }
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  }
  return;
}

// operator() @ 14d9a08d0

void __thiscall
`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::__l29::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this_00;
  UAudioGameplayVolumeSubsystem *this_01;
  FAudioDeviceHandle local_28;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    FAudioDeviceManager::GetAudioDevice(this_00,&local_28,*(uint *)this);
    bVar2 = FAudioDeviceHandle::IsValid(&local_28);
    if (bVar2) {
      bVar2 = FAudioDeviceHandle::IsValid(&local_28);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                           ,0x60,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_01 = FAudioDevice::GetSubsystem<UAudioGameplayVolumeSubsystem>(local_28.Device);
      if (this_01 != (UAudioGameplayVolumeSubsystem *)0x0) {
        UAudioGameplayVolumeSubsystem::AddProxy
                  (this_01,*(uint *)((longlong)this + 4),*(uint *)((longlong)this + 8));
      }
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  }
  return;
}

// operator() @ 14d9a0970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::__l40::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UAudioGameplayVolumeSubsystem::UpdateFromListeners(void)_::_40_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioCommand_UpdateComponentsFromProxyInfo>
  FVar7;
  UAudioGameplayVolumeSubsystem *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FAudioGameplayProxyUpdateResult *pFVar11;
  FAudioGameplayProxyUpdateResult *pFVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AudioCommand_UpdateComponentsFromProxyInfo ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UAudioGameplayVolumeSubsystem::UpdateFromListeners(void)_::_40_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioCommand_UpdateComponentsFromProxyInfo>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_AudioCommand_UpdateComponentsFromProxyInfo");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_AudioCommand_UpdateComponentsFromProxyInfo,*pFVar6,
                 L"STAT_AudioCommand_UpdateComponentsFromProxyInfo","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_AudioCommand_UpdateComponentsFromProxyInfo;
  if (StatPtr_STAT_AudioCommand_UpdateComponentsFromProxyInfo ==
      (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UAudioGameplayVolumeSubsystem::UpdateFromListeners(void)_::_40_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioCommand_UpdateComponentsFromProxyInfo>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_AudioCommand_UpdateComponentsFromProxyInfo");
    FVar7 = (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UAudioGameplayVolumeSubsystem::UpdateFromListeners(void)_::_40_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioCommand_UpdateComponentsFromProxyInfo>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AudioCommand_UpdateComponentsFromProxyInfo,*pFVar6,
                         L"STAT_AudioCommand_UpdateComponentsFromProxyInfo","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                   ,0x2a9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar13.Value = FVar9.Value;
      goto LAB_14d9a0aff;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14d9a0aff:
  this_00 = (UAudioGameplayVolumeSubsystem *)FWeakObjectPtr::Get(this);
  if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
    pFVar12 = *(FAudioGameplayProxyUpdateResult **)((longlong)this + 8);
    iVar2 = *(int *)((longlong)this + 0x10);
    pFVar11 = pFVar12 + iVar2;
    while( true ) {
      if (*(int *)((longlong)this + 0x10) != iVar2) {
        `TCheckedPointerIterator<FAudioGameplayProxyUpdateResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar12 == pFVar11) break;
      UAudioGameplayVolumeSubsystem::UpdateComponentsFromProxyInfo(this_00,pFVar12);
      pFVar12 = pFVar12 + 1;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// operator() @ 14d9a0ec0

void __thiscall
`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l49::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this_00;
  UAudioGameplayVolumeSubsystem *this_01;
  FAudioDeviceHandle local_28;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    FAudioDeviceManager::GetAudioDevice(this_00,&local_28,*(uint *)this);
    bVar2 = FAudioDeviceHandle::IsValid(&local_28);
    if (bVar2) {
      bVar2 = FAudioDeviceHandle::IsValid(&local_28);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                           ,0x60,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_01 = FAudioDevice::GetSubsystem<UAudioGameplayVolumeSubsystem>(local_28.Device);
      if (this_01 != (UAudioGameplayVolumeSubsystem *)0x0) {
        UAudioGameplayVolumeSubsystem::RemoveProxy(this_01,*(uint *)((longlong)this + 4));
      }
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  }
  return;
}

// AddProxy @ 14d9a1f70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAudioGameplayVolumeSubsystem::AddProxy
          (UAudioGameplayVolumeSubsystem *this,uint param_1,uint param_2)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  TObjectPtr<UAudioGameplayVolumeComponent_const_>_u_0 *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  uint local_res10 [2];
  uint local_res18 [4];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                         ,0x1e2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (*(int *)&(this->AGVComponents).field_0x8 != *(int *)&(this->AGVComponents).field_0x34) {
    puVar10 = *(undefined1 **)&(this->AGVComponents).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->AGVComponents).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->AGVComponents).field_0x48 - 1U & local_res10[0]) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->AGVComponents + (longlong)iVar7 * 0x18) == local_res10[0])
        {
          pTVar8 = &TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
                    ::FindChecked((TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
                                   *)&this->AGVComponents,local_res10[0])->field0_0x0;
          if (pTVar8->DebugPtr == (UAudioGameplayVolumeComponent *)0x0) {
            return false;
          }
          pTVar8 = &TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
                    ::FindChecked((TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
                                   *)&this->AGVComponents,local_res10[0])->field0_0x0;
          if (*(longlong *)((longlong)pTVar8->DebugPtr + 0xf8) == 0) {
            return false;
          }
          pTVar2 = &this->KnownProxyIDs;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)(this->KnownProxyIDs).ArrayNum * 4;
              pFVar9 = pFVar9 + 4) {
            if (*(uint *)pFVar9 == local_res10[0]) {
              if ((byte)AudioGameplayVolumeLog._0_1_ < 7) {
                return false;
              }
              UE::Logging::Private::BasicLog<7>
                        (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
              return false;
            }
          }
          if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
              ((FScriptContainerElement *)local_res10 <
               pFVar3 + (longlong)(this->KnownProxyIDs).ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar7 = (this->KnownProxyIDs).ArrayNum;
          piVar1 = &(this->KnownProxyIDs).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->KnownProxyIDs).ArrayNum = iVar7 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_res10[0];
          TMapBase<unsigned_int,FAudioGameplayVolumeProxyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>_>
          ::FindOrAddImpl<unsigned_int_const_&>
                    ((TMapBase<unsigned_int,FAudioGameplayVolumeProxyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>_>
                      *)&this->WorldProxyLists,local_res18[0],local_res18);
          this->bHasStaleProxy = true;
          if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
          }
          return true;
        }
        iVar7 = *(int *)(*(longlong *)&this->AGVComponents + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  return false;
}

// AddVolumeComponent @ 14d9a2190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAudioGameplayVolumeSubsystem::AddVolumeComponent
          (UAudioGameplayVolumeSubsystem *this,UAudioGameplayVolumeComponent *param_1)

{
  uchar uVar1;
  uint uVar2;
  UAudioGameplayVolumeProxy *pUVar3;
  int iVar4;
  UWorld *pUVar5;
  undefined1 *puVar6;
  UAudioGameplayVolumeComponent *local_res10;
  uint local_res18 [2];
  FName local_res20;
  undefined1 local_58 [16];
  code *local_48 [2];
  undefined **local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined8 local_20;
  
  local_res10 = param_1;
  if (param_1 == (UAudioGameplayVolumeComponent *)0x0) {
    if (5 < (byte)AudioGameplayVolumeLog._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
      return;
    }
  }
  else {
    pUVar5 = (UWorld *)param_1->_padding_;
    if (((pUVar5 != (UWorld *)0x0) ||
        (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
        pUVar5 != (UWorld *)0x0)) &&
       ((uVar1 = (pUVar5->WorldType).Value, uVar1 == '\x01' || (uVar1 == '\x03')))) {
      local_res18[0] = *(uint *)((longlong)&local_res10->_padding_ + 4);
      pUVar3 = (local_res10->Proxy).field0_0x0.DebugPtr;
      if (pUVar3 != (UAudioGameplayVolumeProxy *)0x0) {
        if (*(int *)&(this->AGVComponents).field_0x8 != *(int *)&(this->AGVComponents).field_0x34) {
          puVar6 = *(undefined1 **)&(this->AGVComponents).field_0x40;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &(this->AGVComponents).field_0x38;
          }
          iVar4 = *(int *)(puVar6 + (ulonglong)
                                    (*(int *)&(this->AGVComponents).field_0x48 - 1U & local_res18[0]
                                    ) * 4);
          if (iVar4 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this->AGVComponents + (longlong)iVar4 * 0x18) ==
                  local_res18[0]) {
                return;
              }
              iVar4 = *(int *)(*(longlong *)&this->AGVComponents + 0x10 + (longlong)iVar4 * 0x18);
            } while (iVar4 != -1);
          }
        }
        (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3,local_res10);
        local_58._0_8_ = local_res18;
        local_58._8_8_ = &local_res10;
        TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,UAudioGameplayVolumeComponent_const_*_&>_>
                  ((TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
                    *)&this->AGVComponents,
                   (TPairInitializer<unsigned_int_const_&,UAudioGameplayVolumeComponent_const_*_&> *
                   )&local_res20,(bool *)local_58);
        uVar2 = pUVar3->WorldID;
        if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
          local_res20 = (FName)local_res10->_padding_;
          ::FName::ToString(&local_res20,(FString *)local_58);
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
          if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_58._0_8_);
          }
        }
        local_20 = 0;
        local_38 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::`29'::<lambda_1>,1,0>
                    ::_vftable_;
        local_30 = UAudioEngineSubsystem::GetAudioDeviceId((UAudioEngineSubsystem *)this);
        local_2c = local_res18[0];
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::__l29::<lambda_1>,void>
                      ::Call;
        local_28 = uVar2;
        FAudioThread::RunCommandOnAudioThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
      }
    }
  }
  return;
}

// ApplyInteriorSettings @ 14d9a2f50

void __thiscall
UAudioGameplayVolumeSubsystem::ApplyInteriorSettings
          (UAudioGameplayVolumeSubsystem *this,FActiveSound *param_1,FSoundParseParameters *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  FAudioGameplayVolumeListener *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  uint *puVar16;
  FSoundSubmixSendInfo *pFVar17;
  FAudioGameplayActiveSoundInfo *this_00;
  uint uVar18;
  uint local_res20 [2];
  undefined1 local_78;
  undefined1 local_77 [7];
  FAudioGameplayActiveSoundInfo *local_70;
  FAudioProxyActiveSoundParams local_68;
  
  if (AudioGameplayVolumeConsoleVariables::bEnabled != 0) {
    bVar5 = IsInAudioThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInAudioThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                           ,0x104,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = FActiveSound::GetClosestListenerIndex(param_1);
    if ((int)uVar6 < *(int *)&(this->AGVComponents).field_0x38) {
      uVar18 = 0;
      if ((int)uVar6 < *(int *)&(this->AGVComponents).field_0x38) {
        uVar18 = ~uVar6 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (FAudioGameplayVolumeListener *)
                ((longlong)(int)uVar6 * 0x138 + *(longlong *)&(this->AGVComponents).field_0x30);
      if (((param_1->AudioVolumeID == 0) && (pFVar12->bAffectedByLegacySystem == false)) &&
         (*(int *)&(this->AGVComponents).field_0x48 != *(int *)&(this->ActiveSoundData).field_0x4))
      {
        puVar10 = *(undefined1 **)&(this->ActiveSoundData).field_0x10;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this->ActiveSoundData).field_0x8;
        }
        uVar6 = *(uint *)(puVar10 +
                         (ulonglong)
                         (*(int *)&(this->ActiveSoundData).field_0x18 - 1U & param_1->PlayOrder) * 4
                         );
        if (uVar6 != 0xffffffff) {
          do {
            puVar7 = (uint *)((longlong)(int)uVar6 * 0x98 +
                             *(longlong *)&(this->AGVComponents).field_0x40);
            if (*puVar7 == param_1->PlayOrder) {
              this_00 = (FAudioGameplayActiveSoundInfo *)(puVar7 + 2);
              if (puVar7 == (uint *)0x0) {
                this_00 = (FAudioGameplayActiveSoundInfo *)0x0;
              }
              if (this_00 == (FAudioGameplayActiveSoundInfo *)0x0) {
                return;
              }
              dVar1 = this_00->LastUpdateTime;
              dVar2 = (pFVar12->InteriorSettings).InteriorStartTime;
              uVar6 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar18 = (uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              if ((double)CONCAT44(uVar18,uVar6) < __real_3e45798ee2308c3a ||
                  (double)CONCAT44(uVar18,uVar6) == __real_3e45798ee2308c3a) {
                (this_00->InteriorSettings).InteriorStartTime = dVar2;
              }
              if ((dVar1 < dVar2) || (dVar1 < (this_00->InteriorSettings).InteriorStartTime)) {
                this_00->SourceInteriorVolume = this_00->CurrentInteriorVolume;
                this_00->SourceInteriorLPF = this_00->CurrentInteriorLPF;
                this_00->LastUpdateTime = (double)FApp::CurrentTime;
              }
              local_70 = this_00;
              FInterpolatedInteriorSettings::UpdateInteriorValues(&this_00->InteriorSettings);
              local_68.SourceInteriorVolume = this_00->SourceInteriorVolume;
              uVar6 = param_1->WorldID;
              local_68.SourceInteriorLPF = this_00->SourceInteriorLPF;
              local_68.bUsingWorldSettings =
                   (this_00->InteriorSettings).InteriorSettings.bIsWorldSettings;
              local_68.bAllowSpatialization = param_1->bAllowSpatialization;
              local_68.bListenerInVolume = false;
              local_68.bAffectedByAttenuation = false;
              local_68.bAffectedByFilter = false;
              local_68.SoundSubmixSends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_68.SoundSubmixSends.ArrayNum = 0;
              local_68.SoundSubmixSends.ArrayMax = 0;
              iVar3 = (this_00->CurrentMutators).ArrayNum;
              pFVar13 = (this_00->CurrentMutators).AllocatorInstance.Data;
              pFVar14 = pFVar13 + (longlong)iVar3 * 0x10;
              local_68.Listener = pFVar12;
              local_68.Sound = this_00;
              goto LAB_14d9a3190;
            }
            uVar6 = puVar7[0x24];
          } while (uVar6 != 0xffffffff);
        }
      }
    }
  }
  return;
LAB_14d9a3190:
  if ((this_00->CurrentMutators).ArrayNum != iVar3) {
    local_res20[0] = local_res20[0] & 0xffffff00;
    `TCheckedPointerIterator<TSharedPtr<FProxyVolumeMutator,1>,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(local_res20);
  }
  if (pFVar13 == pFVar14) {
    FAudioProxyActiveSoundParams::UpdateInteriorValues(&local_68);
    this_00->CurrentInteriorVolume = local_68.SourceInteriorVolume;
    this_00->CurrentInteriorLPF = local_68.SourceInteriorLPF;
    if (AudioGameplayVolumeConsoleVariables::bPreventDuplicateSubmixSends == 0) {
      TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>::
      Append<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>
                (&param_2->SoundSubmixSends,&local_68.SoundSubmixSends);
    }
    else {
      uVar9 = (ulonglong)local_68.SoundSubmixSends.ArrayNum;
      bVar5 = false;
      local_res20[0] = local_68.SoundSubmixSends.ArrayNum;
      pFVar17 = (FSoundSubmixSendInfo *)
                (local_68.SoundSubmixSends.AllocatorInstance.Data + uVar9 * 0xb8);
      FVar15.Data = local_68.SoundSubmixSends.AllocatorInstance.Data;
      while( true ) {
        if (local_68.SoundSubmixSends.ArrayNum != (int)uVar9) {
          `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_78);
        }
        if ((FSoundSubmixSendInfo *)FVar15.Data == pFVar17) break;
        iVar3 = (param_2->SoundSubmixSends).ArrayNum;
        pFVar13 = (param_2->SoundSubmixSends).AllocatorInstance.Data;
        pFVar14 = pFVar13 + (longlong)iVar3 * 0xb8;
        while( true ) {
          if ((param_2->SoundSubmixSends).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_77);
          }
          if (pFVar13 == pFVar14) goto LAB_14d9a336d;
          if (((FSoundSubmixSendInfo *)FVar15.Data)->_padding_ == *(longlong *)(pFVar13 + 8)) break;
          pFVar13 = pFVar13 + 0xb8;
        }
        bVar5 = true;
LAB_14d9a336d:
        uVar9 = (ulonglong)local_res20[0];
        FVar15.Data = FVar15.Data + 0xb8;
      }
      this_00 = local_70;
      if (!bVar5) {
        TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>::
        Append<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>
                  (&param_2->SoundSubmixSends,&local_68.SoundSubmixSends);
        this_00 = local_70;
      }
    }
    param_2->InteriorVolumeMultiplier = this_00->CurrentInteriorVolume;
    param_2->AmbientZoneFilterFrequency = this_00->CurrentInteriorLPF;
    DestructItems<FSoundSubmixSendInfo,int>
              ((FSoundSubmixSendInfo *)local_68.SoundSubmixSends.AllocatorInstance.Data,
               local_68.SoundSubmixSends.ArrayNum);
    if ((FSoundSubmixSendInfo *)local_68.SoundSubmixSends.AllocatorInstance.Data ==
        (FSoundSubmixSendInfo *)0x0) {
      return;
    }
    FMemory::Free(local_68.SoundSubmixSends.AllocatorInstance.Data);
    return;
  }
  if (*(longlong *)pFVar13 != 0) {
    uVar18 = *(uint *)(*(longlong *)pFVar13 + 0x1c);
    if (*(int *)&(this->ActiveSoundData).field_0x28 != *(int *)&(this->WorldProxyLists).field_0x4) {
      puVar10 = *(undefined1 **)&(this->WorldProxyLists).field_0x10;
      puVar11 = &(this->WorldProxyLists).field_0x8;
      if (puVar10 != (undefined1 *)0x0) {
        puVar11 = puVar10;
      }
      uVar8 = *(uint *)(puVar11 +
                       (ulonglong)(*(int *)&(this->WorldProxyLists).field_0x18 - 1U & uVar6) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar8 * 0xc0 +
                           *(longlong *)&(this->ActiveSoundData).field_0x20);
          if (*puVar7 == uVar6) {
            puVar16 = puVar7 + 2;
            if (puVar7 == (uint *)0x0) {
              puVar16 = (uint *)0x0;
            }
            if (puVar16 != (uint *)0x0) {
              if (puVar16[2] == puVar16[0xd]) goto LAB_14d9a32b7;
              puVar7 = puVar16 + 0xe;
              if (*(uint **)(puVar16 + 0x10) != (uint *)0x0) {
                puVar7 = *(uint **)(puVar16 + 0x10);
              }
              uVar8 = puVar7[puVar16[0x12] - 1 & uVar18];
              if (uVar8 == 0xffffffff) goto LAB_14d9a32b7;
              goto LAB_14d9a32a0;
            }
            break;
          }
          uVar8 = puVar7[0x2e];
        } while (uVar8 != 0xffffffff);
      }
    }
    bVar5 = false;
    goto LAB_14d9a321f;
  }
  goto LAB_14d9a325a;
  while (uVar8 = *(uint *)(*(longlong *)puVar16 + 4 + (longlong)(int)uVar8 * 0xc),
        uVar8 != 0xffffffff) {
LAB_14d9a32a0:
    if (*(uint *)(*(longlong *)puVar16 + (longlong)(int)uVar8 * 0xc) == uVar18) goto LAB_14d9a32bc;
  }
LAB_14d9a32b7:
  uVar8 = 0xffffffff;
LAB_14d9a32bc:
  bVar5 = uVar8 != 0xffffffff;
LAB_14d9a321f:
  local_68.bListenerInVolume = bVar5;
  if ((*(longlong *)pFVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(**(longlong **)pFVar13 + 0x20))(*(longlong **)pFVar13,&local_68);
LAB_14d9a325a:
  pFVar13 = pFVar13 + 0x10;
  goto LAB_14d9a3190;
}

// Deinitialize @ 14d9a40d0

void __thiscall UAudioGameplayVolumeSubsystem::Deinitialize(UAudioGameplayVolumeSubsystem *this)

{
  TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
           *)&this->AGVComponents);
  return;
}

// DoesSupportWorld @ 14d9a4c70

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
UAudioGameplayVolumeSubsystem::DoesSupportWorld(UAudioGameplayVolumeSubsystem *this,UWorld *param_1)

{
  uchar uVar1;
  
  if (param_1 == (UWorld *)0x0) {
    return false;
  }
  uVar1 = (param_1->WorldType).Value;
  if (uVar1 != '\x01') {
    return uVar1 == '\x03';
  }
  return true;
}

// GatherInteriorData @ 14d9a5d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAudioGameplayVolumeSubsystem::GatherInteriorData
          (UAudioGameplayVolumeSubsystem *this,FActiveSound *param_1,FSoundParseParameters *param_2)

{
  TArray<TSharedPtr<FProxyVolumeMutator,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAudioDeviceHandle *pFVar6;
  FAudioGameplayActiveSoundInfo *this_00;
  undefined1 auStackY_198 [32];
  uint local_168 [4];
  FAudioProxyMutatorSearchObject local_158;
  FAudioDeviceHandle local_108;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  bool local_88;
  TObjectPtr<UReverbEffect>_u_0 local_80;
  TObjectPtr<USoundEffectSubmixPreset>_u_0 local_78;
  float local_70;
  float local_6c;
  FInteriorSettings local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (AudioGameplayVolumeConsoleVariables::bEnabled != 0) {
    bVar5 = IsInAudioThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                         ,0xe7,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_158.WorldID = 0xffffffff;
    local_158.PayloadType = AGCP_None;
    local_158.Location.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_158.Location.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_158.Location.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FAudioDeviceHandle::FAudioDeviceHandle(&local_158.AudioDeviceHandle);
    local_158.Location.field0_0x0._s_0.X = (param_2->Transform).Translation.XY.m128d_f64[0];
    local_158.Location.field0_0x0._s_0.Y = (param_2->Transform).Translation.XY.m128d_f64[1];
    local_158.Location.field0_0x0._s_0.Z = (param_2->Transform).Translation.ZW.m128d_f64[0];
    local_158.WorldID = param_1->WorldID;
    local_158.bAffectedByLegacySystem = false;
    local_158.bFilterPayload = true;
    local_158.bCollectMutators = true;
    local_158.bGetDefaultAudioSettings = true;
    local_158.PayloadType = AGCP_ActiveSound;
    pFVar6 = UAudioEngineSubsystem::GetAudioDeviceHandle
                       ((UAudioEngineSubsystem *)&this[-1].WorldProxyLists.field_0x30,&local_108);
    FAudioDeviceHandle::operator=(&local_158.AudioDeviceHandle,pFVar6);
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_108);
    local_158.bAffectedByLegacySystem = param_1->AudioVolumeID != 0;
    GenerateVolumeProxyList((UAudioGameplayVolumeSubsystem *)&this[-1].WorldProxyLists.field_0x30);
    local_bc = 0x80;
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b4 = 0;
    local_a8 = (ForElementType<FSetElementId>)0x0;
    local_a0 = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90._0_4_ = 0;
    local_90._4_4_ = 0;
    local_80.DebugPtr = (UReverbEffect *)0x0;
    local_78.DebugPtr = (USoundEffectSubmixPreset *)0x0;
    local_b8 = 0xffffffff;
    local_88 = true;
    local_70 = 0.5;
    local_6c = 2.0;
    FInteriorSettings::FInteriorSettings(&local_68);
    FAudioProxyMutatorSearchObject::SearchVolumes
              (&local_158,
               (TArray<UAudioGameplayVolumeProxy_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (FAudioProxyMutatorSearchResult *)local_e8);
    local_168[0] = param_1->PlayOrder;
    this_00 = TMapBase<unsigned_int,FAudioGameplayActiveSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>_>
              ::FindOrAddImpl<unsigned_int>
                        ((TMapBase<unsigned_int,FAudioGameplayActiveSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>_>
                          *)&(this->AGVComponents).field_0x40,local_168[0],local_168);
    pTVar1 = &this_00->CurrentMutators;
    if (pTVar1 != (TArray<TSharedPtr<FProxyVolumeMutator,1>,TSizedDefaultAllocator<32>_> *)&local_98
       ) {
      DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
                ((TSharedPtr<FProxyVolumeMutator,1> *)(pTVar1->AllocatorInstance).Data,
                 (this_00->CurrentMutators).ArrayNum);
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar1->AllocatorInstance).Data = local_98.Data;
      local_98.Data = (FScriptContainerElement *)0x0;
      (this_00->CurrentMutators).ArrayNum = (int)local_90;
      (this_00->CurrentMutators).ArrayMax = local_90._4_4_;
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
    }
    FInterpolatedInteriorSettings::Apply(&this_00->InteriorSettings,&local_68);
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->_padding_,0,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
              ((TSharedPtr<FProxyVolumeMutator,1> *)local_98.Data,(int)local_90);
    if ((TSharedPtr<FProxyVolumeMutator,1> *)local_98.Data !=
        (TSharedPtr<FProxyVolumeMutator,1> *)0x0) {
      FMemory::Free(local_98.Data);
    }
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    iVar2 = SUB84(local_e8._8_8_,4);
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
    }
    local_b4 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_158.AudioDeviceHandle);
  }
  return;
}

// GenerateVolumeProxyList @ 14d9a61c0

void __thiscall
UAudioGameplayVolumeSubsystem::GenerateVolumeProxyList(UAudioGameplayVolumeSubsystem *this)

{
  <lambda_1> local_res8;
  
  (this->TransientProxyList).ArrayNum = 0;
  if ((this->TransientProxyList).ArrayMax < 0x100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x100,&(this->TransientProxyList).AllocatorInstance,0,
               &(this->TransientProxyList).ArrayMax);
  }
  Algo::
  Transform<TMap<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>,TArray<TObjectPtr<UAudioGameplayVolumeProxy>,TSizedDefaultAllocator<32>_>_&,_UAudioGameplayVolumeSubsystem::GenerateVolumeProxyList_::__l2::<lambda_1>_>
            (&this->AGVComponents,&this->TransientProxyList,local_res8);
  return;
}

// GetPrivateStaticClass @ 14d9a6980

UClass * __cdecl UAudioGameplayVolumeSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeSubsystem",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeSubsystem,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioGameplayVolumeSubsystem>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton;
}

// IsAnyListenerInVolume @ 14d9a7880

bool __thiscall
UAudioGameplayVolumeSubsystem::IsAnyListenerInVolume
          (UAudioGameplayVolumeSubsystem *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->WorldProxyLists).field_0x8 != *(int *)&(this->WorldProxyLists).field_0x34) {
    puVar4 = *(undefined1 **)&(this->WorldProxyLists).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->WorldProxyLists).field_0x38;
    }
    uVar2 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->WorldProxyLists).field_0x48 - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)(int)uVar2 * 0xc0 + *(longlong *)&this->WorldProxyLists);
        if (*puVar1 == param_1) {
          puVar3 = puVar1 + 2;
          if (puVar1 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return false;
          }
          if (puVar3[2] == puVar3[0xd]) goto LAB_14d9a7957;
          puVar1 = *(uint **)(puVar3 + 0x10);
          if (*(uint **)(puVar3 + 0x10) == (uint *)0x0) {
            puVar1 = puVar3 + 0xe;
          }
          uVar2 = puVar1[puVar3[0x12] - 1 & param_2];
          if (uVar2 == 0xffffffff) goto LAB_14d9a7957;
          goto LAB_14d9a7940;
        }
        uVar2 = puVar1[0x2e];
      } while (uVar2 != 0xffffffff);
    }
  }
  return false;
  while (uVar2 = *(uint *)(*(longlong *)puVar3 + 4 + (longlong)(int)uVar2 * 0xc),
        uVar2 != 0xffffffff) {
LAB_14d9a7940:
    if (*(uint *)(*(longlong *)puVar3 + (longlong)(int)uVar2 * 0xc) == param_2) goto LAB_14d9a795c;
  }
LAB_14d9a7957:
  uVar2 = 0xffffffff;
LAB_14d9a795c:
  return uVar2 != 0xffffffff;
}

// NotifyActiveSoundDeleting @ 14d9a7af0

void __thiscall
UAudioGameplayVolumeSubsystem::NotifyActiveSoundDeleting
          (UAudioGameplayVolumeSubsystem *this,FActiveSound *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint local_res10 [6];
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                       ,0x154,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->bApplyInteriorVolumes != '\0') &&
     (0 < *(int *)&(this->AGVComponents).field_0x48 - *(int *)&(this->ActiveSoundData).field_0x4)) {
    local_res10[0] = param_1->PlayOrder;
    TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
                *)&(this->AGVComponents).field_0x40,local_res10[0],local_res10);
  }
  return;
}

// RemoveProxy @ 14d9a8da0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAudioGameplayVolumeSubsystem::RemoveProxy(UAudioGameplayVolumeSubsystem *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_res10 [2];
  
  local_res10[0] = param_1;
  bVar4 = IsInAudioThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                         ,0x20d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->KnownProxyIDs).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar2 + (longlong)(this->KnownProxyIDs).ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = (this->KnownProxyIDs).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->KnownProxyIDs).AllocatorInstance.Data;
    iVar10 = 0;
    bVar4 = *(uint *)pFVar2 != local_res10[0];
    lVar6 = 0;
    uVar9 = local_res10[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(uint *)(pFVar2 + lVar6 * 4) != uVar9));
      if (bVar4 != false) {
        if (iVar10 != iVar7) {
          memmove(pFVar2 + (longlong)iVar10 * 4,pFVar2 + (longlong)iVar7 * 4,
                  (longlong)(iVar8 - iVar7) << 2);
          uVar9 = local_res10[0];
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->KnownProxyIDs).ArrayNum = iVar10;
    if (0 < iVar1 - iVar10) {
      this->bHasStaleProxy = true;
      if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog)
        ;
      }
      return true;
    }
  }
  return false;
}

// RemoveVolumeComponent @ 14d9a8fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAudioGameplayVolumeSubsystem::RemoveVolumeComponent
          (UAudioGameplayVolumeSubsystem *this,UAudioGameplayVolumeComponent *param_1)

{
  FNameEntryId FVar1;
  int iVar2;
  UWorld *pUVar3;
  undefined1 *puVar4;
  FName local_res10;
  UAudioGameplayVolumeSubsystem *local_res18;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FName local_20;
  uint local_18;
  undefined8 local_10;
  
  if ((param_1 == (UAudioGameplayVolumeComponent *)0x0) ||
     ((param_1->_padding_ == 0 &&
      (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
      pUVar3 == (UWorld *)0x0)))) {
    if (5 < (byte)AudioGameplayVolumeLog._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
      return;
    }
  }
  else {
    FVar1.Value = *(uint *)((longlong)&param_1->_padding_ + 4);
    if (*(int *)&(this->AGVComponents).field_0x8 != *(int *)&(this->AGVComponents).field_0x34) {
      puVar4 = *(undefined1 **)&(this->AGVComponents).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->AGVComponents).field_0x38;
      }
      iVar2 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->AGVComponents).field_0x48 - 1U & FVar1.Value) * 4);
      if (iVar2 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->AGVComponents + (longlong)iVar2 * 0x18) == FVar1.Value)
          {
            local_res10.ComparisonIndex.Value = FVar1.Value;
            TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
                        *)&this->AGVComponents,FVar1.Value,(uint *)&local_res10);
            if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
              local_res10 = (FName)param_1->_padding_;
              ::FName::ToString(&local_res10,&local_48);
              UE::Logging::Private::BasicLog<7>
                        (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            break;
          }
          iVar2 = *(int *)(*(longlong *)&this->AGVComponents + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
    }
    if (AudioGameplayVolumeConsoleVariables::bAudioThreadCmdRollback == 0) {
      local_res10.ComparisonIndex.Value =
           UAudioEngineSubsystem::GetAudioDeviceId((UAudioEngineSubsystem *)this);
      local_res10.Number = FVar1.Value;
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::`49'::<lambda_2>,1,0>
                  ::_vftable_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l49::<lambda_2>,void>
                    ::Call;
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UAudioGameplayVolumeSubsystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      local_res18 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UAudioGameplayVolumeSubsystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)&local_res18);
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::`47'::<lambda_1>,1,0>
                  ::_vftable_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l47::<lambda_1>,void>
                    ::Call;
      local_18 = FVar1.Value;
    }
    local_10 = 0;
    local_20 = local_res10;
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// ShouldCreateSubsystem @ 14d9a9a30

bool __thiscall
UAudioGameplayVolumeSubsystem::ShouldCreateSubsystem
          (UAudioGameplayVolumeSubsystem *this,UObject *param_1)

{
  return true;
}

// StaticRegisterNativesUAudioGameplayVolumeSubsystem @ 14d9a9b50

void __cdecl UAudioGameplayVolumeSubsystem::StaticRegisterNativesUAudioGameplayVolumeSubsystem(void)

{
  return;
}

// Update @ 14d9aa6b0

void __thiscall UAudioGameplayVolumeSubsystem::Update(UAudioGameplayVolumeSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  FAudioDeviceHandle local_38 [2];
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                       ,0xba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((AudioGameplayVolumeConsoleVariables::bEnabled != 0) &&
     ((((this->KnownProxyIDs).ArrayNum != 0 || (this->PreviousProxyCount != 0)) &&
      (fVar5 = (float)(double)FApp::DeltaTime + this->TimeSinceUpdate, this->TimeSinceUpdate = fVar5
      , fVar4 = AudioGameplayVolumeConsoleVariables::UpdateRateJitterDelta,
      this->NextUpdateDeltaTime <= fVar5)))) {
    uVar3 = rand();
    fVar4 = (float)(uVar3 & 0x7fff) * __real_38000100 * fVar4 +
            AudioGameplayVolumeConsoleVariables::UpdateRate;
    if (fVar4 <= AudioGameplayVolumeConsoleVariables::MinUpdateRate) {
      fVar4 = AudioGameplayVolumeConsoleVariables::MinUpdateRate;
    }
    this->TimeSinceUpdate = 0.0;
    this->NextUpdateDeltaTime = fVar4;
    if (this->bHasStaleProxy != false) {
      UAudioEngineSubsystem::GetAudioDeviceHandle((UAudioEngineSubsystem *)this,local_38);
      bVar2 = FAudioDeviceHandle::IsValid(local_38);
      if (bVar2) {
        bVar2 = FAudioDeviceHandle::IsValid(local_38);
        if (!bVar2) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                             ,0x60,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        FAudioDevice::InvalidateCachedInteriorVolumes(local_38[0].Device);
        this->bHasStaleProxy = false;
      }
      FAudioDeviceHandle::~FAudioDeviceHandle(local_38);
    }
    if (AudioGameplayVolumeConsoleVariables::bUpdateListeners != 0) {
      UpdateFromListeners(this);
    }
    this->PreviousProxyCount = (this->KnownProxyIDs).ArrayNum;
  }
  return;
}

// UpdateComponentsFromProxyInfo @ 14d9aa830

void __thiscall
UAudioGameplayVolumeSubsystem::UpdateComponentsFromProxyInfo
          (UAudioGameplayVolumeSubsystem *this,FAudioGameplayProxyUpdateResult *param_1)

{
  undefined1 *puVar1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  code *pcVar4;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TObjectPtr<UAudioGameplayVolumeComponent_const_>_u_0 *pTVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_10c;
  uint local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                         ,0x22f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = *(int *)&(param_1->EnteredProxies).Elements.field_0x28;
  puVar1 = &(param_1->EnteredProxies).Elements.field_0x10;
  local_108 = 1;
  iVar15 = 0;
  iVar17 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&(param_1->EnteredProxies).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar7 = *puVar18;
    iVar17 = 0;
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar7 = 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d9aa90e;
      uVar7 = puVar18[lVar11 + 1];
    }
    uVar7 = -uVar7 & uVar7;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = iVar17 + -1 + (int)lVar11;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14d9aa90e:
  uVar14 = *(uint *)&(param_1->EnteredProxies).Elements.field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uVar7,iVar15);
  TStack_e8.CurrentBitIndex = iVar8;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_e8._28_4_ = local_74;
  TStack_e8.BaseBitIndex = iVar17;
  uStack_c8 = CONCAT44(uStack_10c,
                       *(int *)&(param_1->EnteredProxies).Elements.field_0x8 -
                       *(int *)&(param_1->EnteredProxies).Elements.field_0x34);
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(param_1->EnteredProxies).Elements.field_0x28;
  if (uVar14 != uVar7) {
    puVar16 = *(undefined1 **)&(param_1->EnteredProxies).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d9aaa30;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar7 < (int)uVar14) {
      uVar14 = uVar7;
    }
  }
LAB_14d9aaa30:
  while( true ) {
    if (*(int *)&(param_1->EnteredProxies).Elements.field_0x8 -
        *(int *)&(param_1->EnteredProxies).Elements.field_0x34 != (int)uStack_c8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_e8.CurrentBitIndex == uVar14) &&
       (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar7 = *(uint *)(*(longlong *)&(param_1->EnteredProxies).Elements +
                     (longlong)TStack_e8.CurrentBitIndex * 0xc);
    if (*(int *)&(this->AGVComponents).field_0x8 != *(int *)&(this->AGVComponents).field_0x34) {
      puVar16 = *(undefined1 **)&(this->AGVComponents).field_0x40;
      puVar12 = &(this->AGVComponents).field_0x38;
      if (puVar16 != (undefined1 *)0x0) {
        puVar12 = puVar16;
      }
      iVar9 = *(int *)(puVar12 +
                      (ulonglong)(*(int *)&(this->AGVComponents).field_0x48 - 1U & uVar7) * 4);
      if (iVar9 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->AGVComponents + (longlong)iVar9 * 0x18) == uVar7) {
            pTVar10 = &TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
                       ::FindChecked((TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
                                      *)&this->AGVComponents,uVar7)->field0_0x0;
            if (pTVar10->DebugPtr != (UAudioGameplayVolumeComponent *)0x0) {
              UAudioGameplayVolumeComponent::EnterProxy(pTVar10->DebugPtr);
            }
            break;
          }
          iVar9 = *(int *)(*(longlong *)&this->AGVComponents + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  iVar9 = *(int *)&(param_1->ExitedProxies).Elements.field_0x28;
  puVar1 = &(param_1->ExitedProxies).Elements.field_0x10;
  iVar15 = 0;
  pTVar2 = &param_1->ExitedProxies;
  iVar17 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&(param_1->ExitedProxies).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar7 = *puVar18;
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d9aab83;
      uVar7 = puVar18[lVar11 + 1];
    }
    local_108 = -uVar7 & uVar7;
    uVar3 = (ulonglong)local_108 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = iVar17 + -1 + (int)lVar11;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14d9aab83:
  uVar7 = *(uint *)&(param_1->ExitedProxies).Elements.field_0x28;
  uVar14 = uVar7 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(local_108,iVar15);
  TStack_b8.CurrentBitIndex = iVar8;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar7 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = iVar17;
  uStack_98 = CONCAT44(uStack_10c,
                       *(int *)&(param_1->ExitedProxies).Elements.field_0x8 -
                       *(int *)&(param_1->ExitedProxies).Elements.field_0x34);
  local_c0 = pTVar2;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || (iVar9 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar13 = *(uint *)&(param_1->ExitedProxies).Elements.field_0x28;
  if (uVar7 != uVar13) {
    puVar16 = *(undefined1 **)&(param_1->ExitedProxies).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar7 == 0) {
      lVar11 = (longlong)iVar15;
      uVar14 = uVar14 + 0x20;
      iVar15 = iVar15 + 1;
      uVar7 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14d9aac90;
      uVar7 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar7 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar13 < (int)uVar7) {
      uVar7 = uVar13;
    }
  }
LAB_14d9aac90:
  do {
    pTVar5 = local_c0;
    if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
        (int)uStack_98) {
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_b8.CurrentBitIndex == uVar7) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar2))
    {
      return;
    }
    uVar14 = *(uint *)(*(longlong *)&pTVar5->Elements + (longlong)TStack_b8.CurrentBitIndex * 0xc);
    if (*(int *)&(this->AGVComponents).field_0x8 != *(int *)&(this->AGVComponents).field_0x34) {
      puVar16 = *(undefined1 **)&(this->AGVComponents).field_0x40;
      puVar12 = &(this->AGVComponents).field_0x38;
      if (puVar16 != (undefined1 *)0x0) {
        puVar12 = puVar16;
      }
      iVar9 = *(int *)(puVar12 +
                      (ulonglong)(*(int *)&(this->AGVComponents).field_0x48 - 1U & uVar14) * 4);
      if (iVar9 != -1) {
        lVar11 = *(longlong *)&this->AGVComponents;
        do {
          if (*(uint *)(lVar11 + (longlong)iVar9 * 0x18) == uVar14) {
            pTVar10 = &TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
                       ::FindChecked((TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
                                      *)&this->AGVComponents,uVar14)->field0_0x0;
            if (pTVar10->DebugPtr != (UAudioGameplayVolumeComponent *)0x0) {
              UAudioGameplayVolumeComponent::ExitProxy(pTVar10->DebugPtr);
            }
            break;
          }
          iVar9 = *(int *)(lVar11 + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// UpdateFromListeners @ 14d9aad60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UAudioGameplayVolumeSubsystem::UpdateFromListeners(UAudioGameplayVolumeSubsystem *this)

{
  TArray<FAudioGameplayVolumeListener,TSizedDefaultAllocator<32>_> *this_00;
  TMap<unsigned_int,FAudioGameplayVolumeProxyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>_>
  *pTVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  double dVar19;
  ForAnyElementType FVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  FAudioDevice *pFVar23;
  FWeakObjectPtr FVar24;
  TMap<unsigned_int,FAudioGameplayVolumeProxyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>_>
  *pTVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ForElementType<FSetElementId> FVar35;
  bool bVar36;
  bool bVar37;
  int iVar38;
  int iVar39;
  undefined7 extraout_var;
  uint *puVar40;
  FInteriorSettings *pFVar41;
  uint uVar42;
  uint uVar43;
  FAudioDevice *pFVar44;
  longlong lVar45;
  undefined1 *puVar46;
  uint uVar47;
  uint *puVar48;
  ulonglong uVar49;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_01;
  undefined1 *puVar50;
  uint uVar51;
  ulonglong uVar52;
  longlong lVar53;
  int *piVar54;
  longlong lVar55;
  undefined1 auStackY_478 [32];
  <lambda_1> local_427 [3];
  uint local_424;
  ForAnyElementType local_420;
  undefined8 local_418;
  longlong local_410;
  FAudioDeviceHandle local_408;
  longlong local_3f0;
  FWeakObjectPtr local_3e8 [2];
  FAudioProxyMutatorSearchObject local_3d8;
  int local_388;
  int local_384;
  FAudioDevice *local_380;
  longlong local_378;
  int *local_370;
  UAudioGameplayVolumeSubsystem *local_368;
  TMap<unsigned_int,FAudioGameplayVolumeProxyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>_>
  *local_360;
  int iStack_358;
  uint uStack_354;
  undefined1 *local_350;
  undefined4 uStack_348;
  int iStack_344;
  int local_340;
  undefined4 uStack_33c;
  int iStack_338;
  undefined4 uStack_334;
  TMap<unsigned_int,FAudioGameplayVolumeProxyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>_>
  *local_330;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_328;
  undefined8 uStack_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  code *local_2e8 [5];
  undefined8 *local_2c0;
  undefined4 local_29c;
  FInteriorSettings local_298;
  FAudioProxyMutatorSearchResult local_268;
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1b8;
  ForElementType<FSetElementId> FStack_180;
  undefined8 uStack_170;
  FAudioGameplayProxyUpdateResult local_168;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_478;
  bVar36 = IsInAudioThread();
  if ((!bVar36) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                          ,0x24d,L""), bVar36)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"UAudioGameplayVolumeSubsystem_UpdateFromListeners");
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId590,"UAudioGameplayVolumeSubsystem_UpdateFromListeners",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
               ,0x24e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId590);
  }
  UAudioEngineSubsystem::GetAudioDeviceHandle((UAudioEngineSubsystem *)this,&local_408);
  bVar37 = FAudioDeviceHandle::IsValid(&local_408);
  if ((!bVar37) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("DeviceHandle.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                          ,0x251,L""), bVar37)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_424 = FAudioDeviceHandle::GetDeviceID(&local_408);
  bVar37 = FAudioDeviceHandle::IsValid(&local_408);
  if ((!bVar37) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                          ,0x60,L""), bVar37)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar23 = local_408.Device;
  bVar37 = IsInAudioThread();
  if ((!bVar37) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                          ,0x2b4,L""), bVar37)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar51 = (pFVar23->Listeners).ArrayNum;
  this_00 = &this->AGVListeners;
  iVar39 = (this->AGVListeners).ArrayNum;
  if (iVar39 < (int)uVar51) {
    iVar38 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x138,8,uVar51 - iVar39,&this_00->AllocatorInstance,
                        &(this->AGVListeners).ArrayNum,&(this->AGVListeners).ArrayMax);
    DefaultConstructItems<FAudioGameplayVolumeListener,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar38 * 0x138,uVar51 - iVar39);
  }
  else {
    if ((int)uVar51 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar51);
    }
    if ((int)uVar51 < iVar39) {
      uVar47 = iVar39 - uVar51;
      if (((int)(uVar47 | uVar51) < 0) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar37)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar47 != 0) {
        TArray<FAudioGameplayVolumeListener,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar51,uVar47);
      }
    }
  }
  local_3d8.Location.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_3d8.Location.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_3d8.WorldID = 0xffffffff;
  local_3d8.Location.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_3d8.PayloadType = AGCP_None;
  FAudioDeviceHandle::FAudioDeviceHandle(&local_3d8.AudioDeviceHandle);
  local_3d8.bAffectedByLegacySystem = false;
  local_3d8.bFilterPayload = true;
  local_3d8.bCollectMutators = true;
  local_3d8.bGetDefaultAudioSettings = true;
  FAudioDeviceHandle::operator=(&local_3d8.AudioDeviceHandle,&local_408);
  uVar49 = 0;
  local_3d8.PayloadType = AGCP_Listener;
  local_268.VolumeSet.Elements._0_8_ = 0;
  local_268.VolumeSet.Elements._8_8_ = 0;
  local_268.VolumeSet.Elements._32_8_ = 0;
  local_268.VolumeSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_268.VolumeSet._72_8_ = (ulonglong)(uint)local_268.VolumeSet._76_4_ << 0x20;
  local_268.MatchingMutators.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.MatchingMutators.ArrayNum = 0;
  local_268.MatchingMutators.ArrayMax = 0;
  local_268.ReverbSettings.ReverbEffect.field0_0x0.DebugPtr = (TObjectPtr<UReverbEffect>_u_0)0x0;
  local_268.ReverbSettings.ReverbPluginEffect.field0_0x0.DebugPtr =
       (TObjectPtr<USoundEffectSubmixPreset>_u_0)0x0;
  local_268.VolumeSet.Elements._40_8_ = 0x8000000000;
  local_268.VolumeSet.Elements._48_8_ = 0xffffffff;
  local_268.ReverbSettings.bApplyReverb = true;
  local_268.ReverbSettings.Volume = 0.5;
  local_268.ReverbSettings.FadeTime = 2.0;
  FInteriorSettings::FInteriorSettings(&local_268.InteriorSettings);
  piVar54 = &(this->TransientProxyList).ArrayMax;
  local_1b8._0_8_ = 0;
  local_1b8._8_8_ = 0;
  local_1b8._32_8_ = 0;
  local_1b8._40_8_ = 0x8000000000;
  local_1b8._48_8_ = 0xffffffff;
  FStack_180.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
  local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  (this->TransientProxyList).ArrayNum = 0;
  local_370 = piVar54;
  if (*piVar54 < 0x100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x100,&(this->TransientProxyList).AllocatorInstance,0,piVar54);
  }
  Algo::
  Transform<TMap<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>,TArray<TObjectPtr<UAudioGameplayVolumeProxy>,TSizedDefaultAllocator<32>_>_&,_UAudioGameplayVolumeSubsystem::GenerateVolumeProxyList_::__l2::<lambda_1>_>
            (&this->AGVComponents,&this->TransientProxyList,local_427[0]);
  bVar37 = FAudioDeviceHandle::IsValid(&local_408);
  if ((!bVar37) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                          ,0x60,L""), bVar37)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_380 = local_408.Device;
  bVar37 = IsInAudioThread();
  if ((!bVar37) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                          ,0x2b4,L""), bVar37)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar23 = local_380;
  dVar19 = __real_3f1a36e2e0000000;
  uVar18 = _UNK_15061cc8c;
  uVar17 = _UNK_15061cc88;
  uVar2 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar47 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_378 = (longlong)(int)uVar51;
  if (0 < (int)uVar51) {
    local_3f0 = 0;
    local_410 = 0;
    uVar52 = uVar49;
    do {
      lVar53 = local_3f0;
      lVar45 = local_410;
      bVar37 = FAudioDeviceHandle::IsValid(&local_408);
      if ((!bVar37) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                              ,0x60,L""), bVar37)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar51 = (uint)uVar49;
      pFVar44 = local_408.Device;
      bVar37 = FAudioDevice::GetListenerTransform(local_408.Device,uVar51,&local_c8);
      if (bVar37) {
        dVar11 = local_c8.Translation.ZW.m128d_f64[0] -
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        dVar12 = local_c8.Translation.ZW.m128d_f64[1] -
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_300 = dVar19;
        lVar55 = -(ulonglong)
                  (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar18,
                                             SUB84(dVar12,0) & uVar17));
        dVar12 = local_c8.Translation.XY.m128d_f64[0] -
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        dVar13 = local_c8.Translation.XY.m128d_f64[1] -
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        auVar6._8_4_ = (int)lVar55;
        auVar6._0_8_ = -(ulonglong)
                        (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar2,
                                                   SUB84(dVar11,0) & uVar47));
        auVar6._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
        uVar42 = movmskpd((int)pFVar44,auVar6);
        lVar55 = -(ulonglong)
                  (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar18,
                                             SUB84(dVar13,0) & uVar17));
        auVar14._8_4_ = (int)lVar55;
        auVar14._0_8_ =
             -(ulonglong)
              (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar2,
                                         SUB84(dVar12,0) & uVar47));
        auVar14._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
        iVar39 = movmskpd((int)CONCAT71(extraout_var,bVar37),auVar14);
        if ((uVar42 & 0x3fffffff) == 0 && iVar39 == 0) {
          local_2f8 = dVar19;
          lVar55 = -(ulonglong)
                    (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_c8.Rotation.ZW.m128d_f64[1] -
                                                      UE::Math::TTransform<double>::Identity.
                                                      Rotation.ZW.m128d_f64[1]) >> 0x20) & uVar18,
                                               SUB84(local_c8.Rotation.ZW.m128d_f64[1] -
                                                     UE::Math::TTransform<double>::Identity.Rotation
                                                     .ZW.m128d_f64[1],0) & uVar17));
          auVar7._8_4_ = (int)lVar55;
          auVar7._0_8_ = -(ulonglong)
                          (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                                            (local_c8.Rotation.ZW.m128d_f64[0] -
                                                            UE::Math::TTransform<double>::Identity.
                                                            Rotation.ZW.m128d_f64[0]) >> 0x20) &
                                                     uVar2,SUB84(local_c8.Rotation.ZW.m128d_f64[0] -
                                                                 UE::Math::TTransform<double>::
                                                                 Identity.Rotation.ZW.m128d_f64[0],0
                                                                ) & uVar47));
          auVar7._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
          iVar38 = movmskpd(0,auVar7);
          lVar55 = -(ulonglong)
                    (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_c8.Rotation.XY.m128d_f64[1] -
                                                      UE::Math::TTransform<double>::Identity.
                                                      Rotation.XY.m128d_f64[1]) >> 0x20) & uVar18,
                                               SUB84(local_c8.Rotation.XY.m128d_f64[1] -
                                                     UE::Math::TTransform<double>::Identity.Rotation
                                                     .XY.m128d_f64[1],0) & uVar17));
          auVar8._8_4_ = (int)lVar55;
          auVar8._0_8_ = -(ulonglong)
                          (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                                            (local_c8.Rotation.XY.m128d_f64[0] -
                                                            UE::Math::TTransform<double>::Identity.
                                                            Rotation.XY.m128d_f64[0]) >> 0x20) &
                                                     uVar2,SUB84(local_c8.Rotation.XY.m128d_f64[0] -
                                                                 UE::Math::TTransform<double>::
                                                                 Identity.Rotation.XY.m128d_f64[0],0
                                                                ) & uVar47));
          auVar8._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
          uVar42 = movmskpd(iVar39,auVar8);
          uVar43 = iVar38 << 2 | uVar42;
          if (uVar43 != 0) {
            lVar55 = -(ulonglong)
                      (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                                        (local_c8.Rotation.ZW.m128d_f64[1] +
                                                        UE::Math::TTransform<double>::Identity.
                                                        Rotation.ZW.m128d_f64[1]) >> 0x20) & uVar18,
                                                 SUB84(local_c8.Rotation.ZW.m128d_f64[1] +
                                                       UE::Math::TTransform<double>::Identity.
                                                       Rotation.ZW.m128d_f64[1],0) & uVar17));
            auVar9._8_4_ = (int)lVar55;
            auVar9._0_8_ = -(ulonglong)
                            (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                                              (local_c8.Rotation.ZW.m128d_f64[0] +
                                                              UE::Math::TTransform<double>::Identity
                                                              .Rotation.ZW.m128d_f64[0]) >> 0x20) &
                                                       uVar2,SUB84(local_c8.Rotation.ZW.m128d_f64[0]
                                                                   + UE::Math::TTransform<double>::
                                                                     Identity.Rotation.ZW.m128d_f64
                                                                     [0],0) & uVar47));
            auVar9._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
            uVar43 = movmskpd(uVar43,auVar9);
            lVar55 = -(ulonglong)
                      (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                                        (local_c8.Rotation.XY.m128d_f64[1] +
                                                        UE::Math::TTransform<double>::Identity.
                                                        Rotation.XY.m128d_f64[1]) >> 0x20) & uVar18,
                                                 SUB84(local_c8.Rotation.XY.m128d_f64[1] +
                                                       UE::Math::TTransform<double>::Identity.
                                                       Rotation.XY.m128d_f64[1],0) & uVar17));
            auVar16._8_4_ = (int)lVar55;
            auVar16._0_8_ =
                 -(ulonglong)
                  (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                                    (local_c8.Rotation.XY.m128d_f64[0] +
                                                    UE::Math::TTransform<double>::Identity.Rotation.
                                                    XY.m128d_f64[0]) >> 0x20) & uVar2,
                                             SUB84(local_c8.Rotation.XY.m128d_f64[0] +
                                                   UE::Math::TTransform<double>::Identity.Rotation.
                                                   XY.m128d_f64[0],0) & uVar47));
            auVar16._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
            uVar42 = movmskpd(uVar42,auVar16);
            if ((uVar43 & 0x3fffffff) != 0 || uVar42 != 0) goto LAB_14d9ab3a5;
          }
          dVar11 = local_c8.Scale3D.ZW.m128d_f64[0] -
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          dVar12 = local_c8.Scale3D.ZW.m128d_f64[1] -
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_2f0 = dVar19;
          lVar55 = -(ulonglong)
                    (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar18,
                                               SUB84(dVar12,0) & uVar17));
          dVar12 = local_c8.Scale3D.XY.m128d_f64[0] -
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          dVar13 = local_c8.Scale3D.XY.m128d_f64[1] -
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          auVar10._8_4_ = (int)lVar55;
          auVar10._0_8_ =
               -(ulonglong)
                (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar2,
                                           SUB84(dVar11,0) & uVar47));
          auVar10._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
          uVar43 = movmskpd(0,auVar10);
          lVar55 = -(ulonglong)
                    (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar18,
                                               SUB84(dVar13,0) & uVar17));
          auVar15._8_4_ = (int)lVar55;
          auVar15._0_8_ =
               -(ulonglong)
                (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar2,
                                           SUB84(dVar12,0) & uVar47));
          auVar15._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
          iVar39 = movmskpd(uVar42,auVar15);
          if ((uVar43 & 0x3fffffff) == 0 && iVar39 == 0) goto LAB_14d9abc10;
        }
LAB_14d9ab3a5:
        bVar37 = FAudioDeviceHandle::IsValid(&local_408);
        if ((!bVar37) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                                ,0x60,L""), bVar37)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar37 = FAudioDevice::GetListenerWorldID(local_408.Device,uVar51,&local_3d8.WorldID);
        if (!bVar37) goto LAB_14d9abc10;
        bVar37 = FAudioDeviceHandle::IsValid(&local_408);
        if ((!bVar37) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                                ,0x60,L""), bVar37)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar37 = FAudioDevice::GetListenerPosition(local_408.Device,uVar51,&local_3d8.Location,true)
        ;
        if (!bVar37) goto LAB_14d9abc10;
        local_3d8._64_3_ = local_3d8._64_3_ & 0xff;
        local_3d8.bGetDefaultAudioSettings = false;
        FAudioProxyMutatorSearchObject::SearchVolumes
                  (&local_3d8,
                   (TArray<UAudioGameplayVolumeProxy_*,TSizedDefaultAllocator<32>_> *)
                   &this->TransientProxyList,&local_268);
        uVar49 = uStack_170;
        FVar35 = FStack_180.SecondaryData;
        uVar33 = FStack_180._0_8_;
        uVar32 = local_1b8._48_8_;
        uVar31 = local_1b8._40_8_;
        uVar30 = local_1b8._32_8_;
        uVar29 = local_1b8._24_8_;
        uVar28 = local_1b8._16_8_;
        uVar27 = local_1b8._8_8_;
        uVar26 = local_1b8._0_8_;
        local_1b8._0_8_ = local_268.VolumeSet.Elements._0_8_;
        local_1b8._8_8_ = local_268.VolumeSet.Elements._8_8_;
        local_1b8._32_8_ = local_268.VolumeSet.Elements._32_8_;
        local_1b8._40_8_ = local_268.VolumeSet.Elements._40_8_;
        local_1b8._16_8_ = local_268.VolumeSet.Elements._16_8_;
        local_1b8._24_8_ = local_268.VolumeSet.Elements._24_8_;
        FStack_180.SecondaryData = local_268.VolumeSet.Hash.SecondaryData;
        uStack_170 = local_268.VolumeSet._72_8_;
        local_1b8._48_8_ = local_268.VolumeSet.Elements._48_8_;
        FStack_180.InlineData[0] = local_268.VolumeSet.Hash.InlineData[0];
        FStack_180.InlineData[1] = local_268.VolumeSet.Hash.InlineData[1];
        FStack_180.InlineData[2] = local_268.VolumeSet.Hash.InlineData[2];
        FStack_180.InlineData[3] = local_268.VolumeSet.Hash.InlineData[3];
        FStack_180._padding_ = local_268.VolumeSet.Hash._padding_;
        uVar34 = FStack_180._0_8_;
        local_268.VolumeSet.Elements._0_8_ = uVar26;
        local_268.VolumeSet.Elements._8_8_ = uVar27;
        local_268.VolumeSet.Elements._16_8_ = uVar28;
        local_268.VolumeSet.Elements._24_8_ = uVar29;
        local_268.VolumeSet.Elements._32_8_ = uVar30;
        local_268.VolumeSet.Elements._40_8_ = uVar31;
        local_268.VolumeSet.Elements._48_8_ = uVar32;
        FStack_180.InlineData[0] = (uchar)uVar33;
        FStack_180.InlineData[1] = SUB81(uVar33,1);
        FStack_180.InlineData[2] = SUB81(uVar33,2);
        FStack_180.InlineData[3] = SUB81(uVar33,3);
        FStack_180._padding_ = SUB84(uVar33,4);
        local_268.VolumeSet.Hash.InlineData[0] = FStack_180.InlineData[0];
        local_268.VolumeSet.Hash.InlineData[1] = FStack_180.InlineData[1];
        local_268.VolumeSet.Hash.InlineData[2] = FStack_180.InlineData[2];
        local_268.VolumeSet.Hash.InlineData[3] = FStack_180.InlineData[3];
        local_268.VolumeSet.Hash._padding_ = FStack_180._padding_;
        local_268.VolumeSet.Hash.SecondaryData = FVar35;
        local_268.VolumeSet._72_8_ = uVar49;
        local_3d8.bFilterPayload = true;
        local_3d8.bCollectMutators = true;
        local_3d8.bGetDefaultAudioSettings = true;
        FStack_180._0_8_ = uVar34;
        FAudioProxyMutatorSearchObject::SearchVolumes
                  (&local_3d8,
                   (TArray<UAudioGameplayVolumeProxy_*,TSizedDefaultAllocator<32>_> *)
                   &this->TransientProxyList,&local_268);
        if ((int)uVar51 < (pFVar23->Listeners).ArrayNum) {
          uVar42 = 0;
          if ((int)uVar51 < (this->AGVListeners).ArrayNum) {
            uVar42 = ~uVar51 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this_00->AllocatorInstance).Data;
          uVar42 = 0;
          if ((int)uVar51 < (pFVar23->Listeners).ArrayNum) {
            uVar42 = ~uVar51 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3[local_410 + 0x80] =
               (FScriptContainerElement)
               (*(int *)((pFVar23->Listeners).AllocatorInstance.Data + local_3f0 + 0xb8) != 0);
          lVar45 = local_410;
          lVar53 = local_3f0;
        }
        uVar49 = uStack_170;
        FVar35 = FStack_180.SecondaryData;
        uVar33 = FStack_180._0_8_;
        uVar32 = local_1b8._48_8_;
        uVar31 = local_1b8._40_8_;
        uVar30 = local_1b8._32_8_;
        uVar29 = local_1b8._24_8_;
        uVar28 = local_1b8._16_8_;
        uVar27 = local_1b8._8_8_;
        uVar26 = local_1b8._0_8_;
        local_1b8._0_8_ = local_268.VolumeSet.Elements._0_8_;
        local_1b8._8_8_ = local_268.VolumeSet.Elements._8_8_;
        uVar42 = 0;
        if ((int)uVar51 < (this->AGVListeners).ArrayNum) {
          uVar42 = ~uVar51 >> 0x1f;
        }
        local_1b8._16_8_ = local_268.VolumeSet.Elements._16_8_;
        local_1b8._24_8_ = local_268.VolumeSet.Elements._24_8_;
        local_1b8._32_8_ = local_268.VolumeSet.Elements._32_8_;
        local_1b8._40_8_ = local_268.VolumeSet.Elements._40_8_;
        local_1b8._48_8_ = local_268.VolumeSet.Elements._48_8_;
        FStack_180.InlineData[0] = local_268.VolumeSet.Hash.InlineData[0];
        FStack_180.InlineData[1] = local_268.VolumeSet.Hash.InlineData[1];
        FStack_180.InlineData[2] = local_268.VolumeSet.Hash.InlineData[2];
        FStack_180.InlineData[3] = local_268.VolumeSet.Hash.InlineData[3];
        FStack_180._padding_ = local_268.VolumeSet.Hash._padding_;
        uVar34 = FStack_180._0_8_;
        FStack_180.SecondaryData = local_268.VolumeSet.Hash.SecondaryData;
        uStack_170 = local_268.VolumeSet._72_8_;
        local_268.VolumeSet.Elements._0_8_ = uVar26;
        local_268.VolumeSet.Elements._8_8_ = uVar27;
        local_268.VolumeSet.Elements._16_8_ = uVar28;
        local_268.VolumeSet.Elements._24_8_ = uVar29;
        local_268.VolumeSet.Elements._32_8_ = uVar30;
        local_268.VolumeSet.Elements._40_8_ = uVar31;
        local_268.VolumeSet.Elements._48_8_ = uVar32;
        FStack_180.InlineData[0] = (uchar)uVar33;
        FStack_180.InlineData[1] = SUB81(uVar33,1);
        FStack_180.InlineData[2] = SUB81(uVar33,2);
        FStack_180.InlineData[3] = SUB81(uVar33,3);
        FStack_180._padding_ = SUB84(uVar33,4);
        local_268.VolumeSet.Hash.InlineData[0] = FStack_180.InlineData[0];
        local_268.VolumeSet.Hash.InlineData[1] = FStack_180.InlineData[1];
        local_268.VolumeSet.Hash.InlineData[2] = FStack_180.InlineData[2];
        local_268.VolumeSet.Hash.InlineData[3] = FStack_180.InlineData[3];
        local_268.VolumeSet.Hash._padding_ = FStack_180._padding_;
        local_268.VolumeSet.Hash.SecondaryData = FVar35;
        local_268.VolumeSet._72_8_ = uVar49;
        FStack_180._0_8_ = uVar34;
        if ((uVar42 == 0) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar37)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FAudioGameplayVolumeListener::Update
                  ((FAudioGameplayVolumeListener *)
                   ((this_00->AllocatorInstance).Data + (longlong)(int)uVar51 * 0x138),&local_268,
                   &local_3d8.Location,local_424);
        if (*(int *)&(this->WorldProxyLists).field_0x8 !=
            *(int *)&(this->WorldProxyLists).field_0x34) {
          puVar4 = *(undefined1 **)&(this->WorldProxyLists).field_0x40;
          puVar46 = &(this->WorldProxyLists).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar46 = puVar4;
          }
          uVar42 = *(uint *)(puVar46 +
                            (ulonglong)
                            (*(int *)&(this->WorldProxyLists).field_0x48 - 1U & local_3d8.WorldID) *
                            4);
          if (uVar42 != 0xffffffff) {
            do {
              puVar40 = (uint *)((longlong)(int)uVar42 * 0xc0 + *(longlong *)&this->WorldProxyLists)
              ;
              if (*puVar40 == local_3d8.WorldID) {
                puVar48 = puVar40 + 2;
                if (puVar40 == (uint *)0x0) {
                  puVar48 = (uint *)0x0;
                }
                lVar45 = local_410;
                if (puVar48 != (uint *)0x0) {
                  uVar42 = puVar48[0x2a];
                  if (uVar42 == puVar48[0x2b]) {
                    uVar42 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)(puVar48 + 0x28),
                                        (int *)(puVar48 + 0x2b));
                  }
                  puVar48[0x2a] = uVar42 + 1;
                  *(uint *)(*(longlong *)(puVar48 + 0x28) + (longlong)(int)uVar42 * 4) = uVar51;
                  lVar45 = local_410;
                }
                break;
              }
              uVar42 = puVar40[0x2e];
            } while (uVar42 != 0xffffffff);
          }
        }
      }
      else {
LAB_14d9abc10:
        if (local_268.VolumeSet.Elements._8_4_ != local_268.VolumeSet.Elements._52_4_) {
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
                    (&local_268.VolumeSet);
          if ((longlong)local_268.VolumeSet.Elements._8_8_ < 0) {
            local_268.VolumeSet.Elements._8_8_ =
                 (ulonglong)(uint)local_268.VolumeSet.Elements._12_4_ << 0x20;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)&local_268,0,
                       (int *)&local_268.VolumeSet.Elements.field_0xc);
          }
          else {
            local_268.VolumeSet.Elements._8_8_ =
                 (ulonglong)(uint)local_268.VolumeSet.Elements._12_4_ << 0x20;
          }
          local_268.VolumeSet.Elements._48_8_ = 0xffffffff;
          local_268.VolumeSet.Elements._40_8_ =
               local_268.VolumeSet.Elements._40_8_ & 0xffffffff00000000;
        }
        DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
                  ((TSharedPtr<FProxyVolumeMutator,1> *)
                   local_268.MatchingMutators.AllocatorInstance.Data,
                   local_268.MatchingMutators.ArrayNum);
        iVar39 = local_268.MatchingMutators.ArrayMax;
        local_268.MatchingMutators._8_8_ = local_268.MatchingMutators._8_8_ & 0xffffffff00000000;
        if (iVar39 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_268.MatchingMutators.AllocatorInstance,0,
                     &local_268.MatchingMutators.ArrayMax);
        }
        local_268.ReverbSettings.ReverbEffect.field0_0x0.DebugPtr =
             (TObjectPtr<UReverbEffect>_u_0)0x0;
        local_268.ReverbSettings.ReverbPluginEffect.field0_0x0.DebugPtr =
             (TObjectPtr<USoundEffectSubmixPreset>_u_0)0x0;
        local_268.ReverbSettings.bApplyReverb = true;
        local_268.ReverbSettings.Volume = 0.5;
        local_268.ReverbSettings.FadeTime = 2.0;
        pFVar41 = FInteriorSettings::FInteriorSettings(&local_298);
        local_268.InteriorSettings.bIsWorldSettings = pFVar41->bIsWorldSettings;
        local_268.InteriorSettings._1_3_ = *(undefined3 *)&pFVar41->field_0x1;
        local_268.InteriorSettings.ExteriorVolume = pFVar41->ExteriorVolume;
        local_268.InteriorSettings.ExteriorTime = pFVar41->ExteriorTime;
        local_268.InteriorSettings.ExteriorLPF = pFVar41->ExteriorLPF;
        local_268.InteriorSettings.ExteriorLPFTime = pFVar41->ExteriorLPFTime;
        local_268.InteriorSettings.InteriorVolume = pFVar41->InteriorVolume;
        local_268.InteriorSettings.InteriorTime = pFVar41->InteriorTime;
        local_268.InteriorSettings.InteriorLPF = pFVar41->InteriorLPF;
        local_268.InteriorSettings.InteriorLPFTime = pFVar41->InteriorLPFTime;
        uVar42 = 0;
        if ((int)uVar51 < (this->AGVListeners).ArrayNum) {
          uVar42 = ~uVar51 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar37)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FAudioGameplayVolumeListener::Update
                  ((FAudioGameplayVolumeListener *)
                   ((this_00->AllocatorInstance).Data + (longlong)(int)uVar51 * 0x138),&local_268,
                   &UE::Math::TVector<double>::ZeroVector,local_424);
      }
      local_410 = lVar45 + 0x138;
      local_3f0 = lVar53 + 0x110;
      uVar49 = (ulonglong)(uVar51 + 1);
      uVar52 = uVar52 + 1;
      piVar54 = local_370;
    } while ((longlong)uVar52 < local_378);
  }
  (this->TransientProxyList).ArrayNum = 0;
  if ((this->TransientProxyList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TransientProxyList).AllocatorInstance,0,piVar54);
  }
  local_168.EnteredProxies.Elements._0_8_ = 0;
  local_168.EnteredProxies.Elements._32_8_ = 0;
  local_350 = &(this->WorldProxyLists).field_0x10;
  local_168.EnteredProxies.Elements._40_4_ = 0;
  iStack_358 = 0;
  local_168.EnteredProxies.Elements._52_4_ = 0;
  uStack_354 = 1;
  local_168.EnteredProxies.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_168.EnteredProxies.HashSize = 0;
  local_340 = 0;
  local_168.ExitedProxies.Elements._0_8_ = 0;
  local_168.ExitedProxies.Elements._32_8_ = 0;
  local_168.ExitedProxies.Elements._40_4_ = 0;
  local_168.ExitedProxies.Elements._52_4_ = 0;
  local_168.ExitedProxies.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_168.ExitedProxies.HashSize = 0;
  local_420.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->WorldProxyLists;
  local_168.EnteredProxies.Elements._8_8_ = 0;
  local_168.EnteredProxies.Elements._44_4_ = 0x80;
  local_168.EnteredProxies.Elements._48_4_ = 0xffffffff;
  local_168.ExitedProxies.Elements._8_8_ = 0;
  local_168.ExitedProxies.Elements._44_4_ = 0x80;
  local_168.ExitedProxies.Elements._48_4_ = 0xffffffff;
  local_418 = 0;
  iVar39 = *(int *)&(this->WorldProxyLists).field_0x28;
  iStack_344 = 0;
  if (iVar39 != 0) {
    puVar40 = *(uint **)&(this->WorldProxyLists).field_0x20;
    if (puVar40 == (uint *)0x0) {
      puVar40 = (uint *)local_350;
    }
    uVar51 = *puVar40;
    local_340 = 0;
    while (uVar51 == 0) {
      lVar45 = (longlong)iStack_358;
      local_340 = local_340 + 0x20;
      iStack_358 = iStack_358 + 1;
      iStack_344 = iVar39;
      if ((int)(iVar39 + -1 + (iVar39 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_358) goto LAB_14d9ab91f;
      uVar51 = puVar40[lVar45 + 1];
    }
    uStack_354 = -uVar51 & uVar51;
    uVar49 = (ulonglong)uStack_354 * 2 + 1;
    lVar45 = 0x3f;
    if (uVar49 != 0) {
      for (; uVar49 >> lVar45 == 0; lVar45 = lVar45 + -1) {
      }
    }
    local_388 = (int)lVar45;
    iStack_344 = local_340 + -1 + local_388;
    if (iVar39 < iStack_344) {
      iStack_344 = iVar39;
    }
  }
LAB_14d9ab91f:
  puVar4 = &(this->WorldProxyLists).field_0x10;
  uStack_33c = local_29c;
  iStack_338 = *(int *)&(this->WorldProxyLists).field_0x8 -
               *(int *)&(this->WorldProxyLists).field_0x34;
  uVar51 = *(uint *)&(this->WorldProxyLists).field_0x28;
  uStack_348 = 0xffffffff;
  TStack_328.CurrentBitIndex = iStack_344;
  TStack_328.UnvisitedBitMask = 0xffffffff;
  local_424 = -1 << ((byte)uVar51 & 0x1f);
  uVar47 = uVar51 & 0xffffffe0;
  TStack_328._padding_ = CONCAT44(uStack_354,iStack_358);
  iVar38 = (int)uVar51 >> 5;
  TStack_328._28_4_ = local_29c;
  TStack_328.BaseBitIndex = local_340;
  uStack_308 = CONCAT44(uStack_334,iStack_338);
  local_360 = pTVar1;
  local_330 = pTVar1;
  TStack_328.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_350;
  if ((((int)uVar51 < 0) || (iVar39 < (int)uVar51)) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar37)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&(this->WorldProxyLists).field_0x28;
  if (uVar51 != uVar2) {
    puVar46 = *(undefined1 **)&(this->WorldProxyLists).field_0x20;
    puVar50 = puVar4;
    if (puVar46 != (undefined1 *)0x0) {
      puVar50 = puVar46;
    }
    uVar51 = local_424 & *(uint *)(puVar50 + (longlong)iVar38 * 4);
    while (uVar51 == 0) {
      lVar45 = (longlong)iVar38;
      uVar47 = uVar47 + 0x20;
      iVar38 = iVar38 + 1;
      uVar51 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar38) goto LAB_14d9aba50;
      uVar51 = *(uint *)(puVar50 + lVar45 * 4 + 4);
    }
    uVar49 = (ulonglong)(-uVar51 & uVar51) * 2 + 1;
    lVar45 = 0x3f;
    if (uVar49 != 0) {
      for (; uVar49 >> lVar45 == 0; lVar45 = lVar45 + -1) {
      }
    }
    local_384 = (int)lVar45;
    uVar51 = local_384 + -1 + uVar47;
    if ((int)uVar2 < (int)uVar51) {
      uVar51 = uVar2;
    }
  }
LAB_14d9aba50:
  while( true ) {
    pTVar25 = local_330;
    if (*(int *)&local_330->field_0x8 - *(int *)&local_330->field_0x34 != (int)uStack_308) {
      local_427[0] = (<lambda_1>)0x0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_427);
    }
    if (((TStack_328.CurrentBitIndex == uVar51) &&
        (TStack_328.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar25 == pTVar1)
       ) break;
    FAudioGameplayVolumeProxyInfo::Update
              ((FAudioGameplayVolumeProxyInfo *)
               ((longlong)TStack_328.CurrentBitIndex * 0xc0 + *(longlong *)pTVar25 + 8),
               &this->AGVListeners,&local_168);
    if ((local_168.EnteredProxies.Elements._8_4_ != local_168.EnteredProxies.Elements._52_4_) ||
       (local_168.ExitedProxies.Elements._8_4_ != local_168.ExitedProxies.Elements._52_4_)) {
      if ((local_420.Data <= &local_168) &&
         ((&local_168 <
           (FAudioGameplayProxyUpdateResult *)(local_420.Data + (longlong)local_418._4_4_ * 0xa0) &&
          (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar37)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar39 = (int)local_418;
      if ((int)local_418 == local_418._4_4_) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a0,&local_420,(int *)((longlong)&local_418 + 4));
      }
      local_418 = CONCAT44(local_418._4_4_,iVar39 + 1);
      this_01 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                (local_420.Data + (longlong)iVar39 * 0xa0);
      *(undefined8 *)&this_01->Elements = 0;
      *(undefined8 *)&(this_01->Elements).field_0x8 = 0;
      *(undefined8 *)&(this_01->Elements).field_0x20 = 0;
      *(undefined4 *)&(this_01->Elements).field_0x28 = 0;
      *(undefined4 *)&(this_01->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(this_01->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_01->Elements).field_0x34 = 0;
      (this_01->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      this_01->HashSize = 0;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
                (this_01,&local_168.EnteredProxies);
      *(undefined8 *)&this_01[1].Elements = 0;
      *(undefined8 *)&this_01[1].Elements.field_0x8 = 0;
      *(undefined8 *)&this_01[1].Elements.field_0x20 = 0;
      *(undefined4 *)&this_01[1].Elements.field_0x28 = 0;
      *(undefined4 *)&this_01[1].Elements.field_0x2c = 0x80;
      *(undefined4 *)&this_01[1].Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&this_01[1].Elements.field_0x34 = 0;
      this_01[1].Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      this_01[1].HashSize = 0;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
                (this_01 + 1,&local_168.ExitedProxies);
    }
    TStack_328.UnvisitedBitMask = TStack_328.UnvisitedBitMask & ~TStack_328._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_328);
  }
  if ((int)local_418 != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAudioGameplayVolumeSubsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_3e8[0].ObjectIndex = 0;
    local_3e8[0].ObjectSerialNumber = 0;
    local_368 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAudioGameplayVolumeSubsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(local_3e8,(FObjectPtr)&local_368);
    FVar24 = local_3e8[0];
    FVar20.Data = local_420.Data;
    uVar21 = (int)local_418;
    uVar22 = local_418._4_4_;
    local_420.Data = (FScriptContainerElement *)0x0;
    local_418 = 0;
    local_2e8[0] = (code *)0x0;
    local_2c0 = FMemory::Malloc(0x20,8);
    *local_2c0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::`40'::<lambda_1>,1,1>
                  ::_vftable_;
    *(FWeakObjectPtr *)(local_2c0 + 1) = FVar24;
    local_2c0[2] = FVar20.Data;
    *(undefined4 *)(local_2c0 + 3) = uVar21;
    *(undefined4 *)((longlong)local_2c0 + 0x1c) = uVar22;
    if ((FWeakObjectPtr *)(local_2c0 + 1) != (FWeakObjectPtr *)0x0) {
      local_2e8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::__l40::<lambda_1>,void>
                     ::Call;
    }
    FAudioThread::RunCommandOnGameThread
              ((TUniqueFunction<void___cdecl(void)> *)local_2e8,(TStatId)0x154f11430);
    DestructItems<FAudioGameplayProxyUpdateResult,int>((FAudioGameplayProxyUpdateResult *)0x0,0);
  }
  DestructItems<FAudioGameplayProxyUpdateResult,int>
            ((FAudioGameplayProxyUpdateResult *)local_420.Data,(int)local_418);
  if ((FAudioGameplayProxyUpdateResult *)local_420.Data != (FAudioGameplayProxyUpdateResult *)0x0) {
    FMemory::Free(local_420.Data);
  }
  local_168.ExitedProxies.HashSize = 0;
  if (local_168.ExitedProxies.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_168.ExitedProxies.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_168.ExitedProxies.Elements);
  local_168.EnteredProxies.HashSize = 0;
  if (local_168.EnteredProxies.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_168.EnteredProxies.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_168);
  uStack_170 = uStack_170 & 0xffffffff00000000;
  if (FStack_180.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_180.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1b8);
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
            ((TSharedPtr<FProxyVolumeMutator,1> *)local_268.MatchingMutators.AllocatorInstance.Data,
             local_268.MatchingMutators.ArrayNum);
  if ((TSharedPtr<FProxyVolumeMutator,1> *)local_268.MatchingMutators.AllocatorInstance.Data !=
      (TSharedPtr<FProxyVolumeMutator,1> *)0x0) {
    FMemory::Free(local_268.MatchingMutators.AllocatorInstance.Data);
  }
  local_268.VolumeSet._72_8_ = local_268.VolumeSet._72_8_ & 0xffffffff00000000;
  if (local_268.VolumeSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_268.VolumeSet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_268);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_3d8.AudioDeviceHandle);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_408);
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UpdateProxy @ 14d9ac4f0

bool __thiscall
UAudioGameplayVolumeSubsystem::UpdateProxy(UAudioGameplayVolumeSubsystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  
  bVar3 = IsInAudioThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                         ,0x200,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar5 = (this->KnownProxyIDs).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->KnownProxyIDs).ArrayNum * 4;
  while( true ) {
    if (pFVar5 == pFVar1) {
      return false;
    }
    if (*(uint *)pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 4;
  }
  this->bHasStaleProxy = true;
  return true;
}

// UpdateVolumeComponent @ 14d9ac580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAudioGameplayVolumeSubsystem::UpdateVolumeComponent
          (UAudioGameplayVolumeSubsystem *this,UAudioGameplayVolumeComponent *param_1)

{
  uint uVar1;
  UAudioGameplayVolumeProxy *pUVar2;
  int iVar3;
  UWorld *pUVar4;
  undefined1 *puVar5;
  FName local_res10;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FName local_20;
  undefined8 local_10;
  
  if ((param_1 == (UAudioGameplayVolumeComponent *)0x0) ||
     ((param_1->_padding_ == 0 &&
      (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
      pUVar4 == (UWorld *)0x0)))) {
    if (5 < (byte)AudioGameplayVolumeLog._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
      return;
    }
  }
  else {
    pUVar2 = (param_1->Proxy).field0_0x0.DebugPtr;
    uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
    if ((pUVar2 != (UAudioGameplayVolumeProxy *)0x0) &&
       (*(int *)&(this->AGVComponents).field_0x8 != *(int *)&(this->AGVComponents).field_0x34)) {
      puVar5 = *(undefined1 **)&(this->AGVComponents).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->AGVComponents).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->AGVComponents).field_0x48 - 1U & uVar1)
                                * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->AGVComponents + (longlong)iVar3 * 0x18) == uVar1) {
            (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,param_1);
            if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
              local_res10 = (FName)param_1->_padding_;
              ::FName::ToString(&local_res10,&local_48);
              UE::Logging::Private::BasicLog<7>
                        (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            local_res10.ComparisonIndex.Value =
                 UAudioEngineSubsystem::GetAudioDeviceId((UAudioEngineSubsystem *)this);
            local_res10.Number = uVar1;
            local_28 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::`26'::<lambda_1>,1,0>
                        ::_vftable_;
            local_20 = local_res10;
            local_38[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,void>
                          ::Call;
            local_10 = 0;
            FAudioThread::RunCommandOnAudioThread
                      ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
            return;
          }
          iVar3 = *(int *)(*(longlong *)&this->AGVComponents + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
  }
  return;
}

// _getUObject @ 14d9ad0a0

UObject * __thiscall UAudioGameplayVolumeSubsystem::_getUObject(UAudioGameplayVolumeSubsystem *this)

{
  return (UObject *)&this[-1].WorldProxyLists.field_0x30;
}

