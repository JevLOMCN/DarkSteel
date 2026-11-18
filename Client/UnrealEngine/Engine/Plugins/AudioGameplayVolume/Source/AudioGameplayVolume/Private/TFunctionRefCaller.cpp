// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 7

// Call @ 14d9a3410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,void>::
Call(void *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FAudioDeviceManager *this;
  UAudioGameplayVolumeSubsystem *pUVar5;
  FScriptContainerElement *pFVar6;
  FAudioDeviceHandle FStack_28;
  
  this = FAudioDeviceManager::Get();
  if (this != (FAudioDeviceManager *)0x0) {
    FAudioDeviceManager::GetAudioDevice(this,&FStack_28,*(uint *)param_1);
    bVar4 = FAudioDeviceHandle::IsValid(&FStack_28);
    if (bVar4) {
      bVar4 = FAudioDeviceHandle::IsValid(&FStack_28);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                             ,0x60,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar5 = FAudioDevice::GetSubsystem<UAudioGameplayVolumeSubsystem>(FStack_28.Device);
      if (pUVar5 != (UAudioGameplayVolumeSubsystem *)0x0) {
        iVar2 = *(int *)((longlong)param_1 + 4);
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
    FAudioDeviceHandle::~FAudioDeviceHandle(&FStack_28);
  }
  return;
}

// Call @ 14d9a3420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::__l29::<lambda_1>,void>::
Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this;
  UAudioGameplayVolumeSubsystem *this_00;
  FAudioDeviceHandle FStack_28;
  
  this = FAudioDeviceManager::Get();
  if (this != (FAudioDeviceManager *)0x0) {
    FAudioDeviceManager::GetAudioDevice(this,&FStack_28,*(uint *)param_1);
    bVar2 = FAudioDeviceHandle::IsValid(&FStack_28);
    if (bVar2) {
      bVar2 = FAudioDeviceHandle::IsValid(&FStack_28);
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
      this_00 = FAudioDevice::GetSubsystem<UAudioGameplayVolumeSubsystem>(FStack_28.Device);
      if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
        UAudioGameplayVolumeSubsystem::AddProxy
                  (this_00,*(uint *)((longlong)param_1 + 4),*(uint *)((longlong)param_1 + 8));
      }
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&FStack_28);
  }
  return;
}

// Call @ 14d9a3430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::__l40::<lambda_1>,void>::
Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UAudioGameplayVolumeSubsystem::UpdateFromListeners(void)_::_40_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioCommand_UpdateComponentsFromProxyInfo>
  FVar7;
  UAudioGameplayVolumeSubsystem *this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FAudioGameplayProxyUpdateResult *pFVar11;
  FAudioGameplayProxyUpdateResult *pFVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  FStatMessage FStack_48;
  
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AudioCommand_UpdateComponentsFromProxyInfo ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UAudioGameplayVolumeSubsystem::UpdateFromListeners(void)_::_40_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioCommand_UpdateComponentsFromProxyInfo>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&LStackX_8.s,
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
    pFVar6 = ::FName::FName(&FStackX_10,"STAT_AudioCommand_UpdateComponentsFromProxyInfo");
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
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar9.Value;
        LStackX_8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                   ,0x2a9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar9.Value;
      LStackX_8.s.HighPart = uVar8;
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
  this = (UAudioGameplayVolumeSubsystem *)FWeakObjectPtr::Get(param_1);
  if (this != (UAudioGameplayVolumeSubsystem *)0x0) {
    pFVar12 = *(FAudioGameplayProxyUpdateResult **)((longlong)param_1 + 8);
    iVar2 = *(int *)((longlong)param_1 + 0x10);
    pFVar11 = pFVar12 + iVar2;
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x10) != iVar2) {
        `TCheckedPointerIterator<FAudioGameplayProxyUpdateResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&LStackX_8);
      }
      if (pFVar12 == pFVar11) break;
      UAudioGameplayVolumeSubsystem::UpdateComponentsFromProxyInfo(this,pFVar12);
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
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_48.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      FStack_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_48.StatData.Pad[4] = '\0';
      FStack_48.StatData.Pad[5] = '\0';
      FStack_48.StatData.Pad[6] = '\0';
      FStack_48.StatData.Pad[7] = '\0';
      FStack_48.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_48.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_48.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_48.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_48);
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

// Call @ 14d9a3440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l47::<lambda_1>,void>::
Call(void *param_1)

{
  bool bVar1;
  UAudioGameplayVolumeSubsystem *this;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if (bVar1) {
    this = (UAudioGameplayVolumeSubsystem *)FWeakObjectPtr::Get(param_1);
    UAudioGameplayVolumeSubsystem::RemoveProxy(this,*(uint *)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Call @ 14d9a3480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FProxyMutator_Reverb::Apply'::__l12::<lambda_1>,void>::Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FAudioDeviceHandle::IsValid(param_1);
  if (bVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&NAME_AGVReverb,L"AGVReverb");
        _Init_thread_footer(&::_TSS0);
      }
    }
    bVar2 = FAudioDeviceHandle::IsValid(param_1);
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
    FAudioDevice::ActivateReverbEffect
              (*(FAudioDevice **)((longlong)param_1 + 8),
               *(UReverbEffect **)((longlong)param_1 + 0x20),NAME_AGVReverb,
               *(float *)((longlong)param_1 + 0x38),*(float *)((longlong)param_1 + 0x30),
               *(float *)((longlong)param_1 + 0x34));
  }
  return;
}

// Call @ 14d9a3490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FProxyMutator_Reverb::Remove'::__l12::<lambda_1>,void>::Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FAudioDeviceHandle::IsValid(param_1);
  if (!bVar2) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_AGVReverb,L"AGVReverb");
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar2 = FAudioDeviceHandle::IsValid(param_1);
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
  FAudioDevice::DeactivateReverbEffect(*(FAudioDevice **)((longlong)param_1 + 8),NAME_AGVReverb);
  return;
}

// Call @ 14d9a34a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l49::<lambda_2>,void>::
Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this;
  UAudioGameplayVolumeSubsystem *this_00;
  FAudioDeviceHandle FStack_28;
  
  this = FAudioDeviceManager::Get();
  if (this != (FAudioDeviceManager *)0x0) {
    FAudioDeviceManager::GetAudioDevice(this,&FStack_28,*(uint *)param_1);
    bVar2 = FAudioDeviceHandle::IsValid(&FStack_28);
    if (bVar2) {
      bVar2 = FAudioDeviceHandle::IsValid(&FStack_28);
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
      this_00 = FAudioDevice::GetSubsystem<UAudioGameplayVolumeSubsystem>(FStack_28.Device);
      if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
        UAudioGameplayVolumeSubsystem::RemoveProxy(this_00,*(uint *)((longlong)param_1 + 4));
      }
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&FStack_28);
  }
  return;
}

