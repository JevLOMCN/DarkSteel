// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 6

// FProxyMutator_Reverb @ 14d99f020

FProxyMutator_Reverb * __thiscall
FProxyMutator_Reverb::FProxyMutator_Reverb(FProxyMutator_Reverb *this)

{
  FName local_res8;
  
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FProxyVolumeMutator__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  ::FName::FName(&local_res8,L"MutatorBase");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  this->_padding_ = (longlong)&___7FProxyMutator_Reverb__6B_;
  (this->ReverbSettings).bApplyReverb = true;
  (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr = (USoundEffectSubmixPreset *)0x0;
  (this->ReverbSettings).Volume = 0.5;
  (this->ReverbSettings).FadeTime = 2.0;
  ::FName::FName(&local_res8,L"Reverb");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  return this;
}

// ~FProxyMutator_Reverb @ 14d9a01c0

void __thiscall FProxyMutator_Reverb::~FProxyMutator_Reverb(FProxyMutator_Reverb *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a01e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14d9a0d10

void __thiscall `FProxyMutator_Reverb::Apply'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FAudioDeviceHandle::IsValid(this);
  if (bVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&NAME_AGVReverb,L"AGVReverb");
        _Init_thread_footer(&::_TSS0);
      }
    }
    bVar2 = FAudioDeviceHandle::IsValid(this);
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
              (*(FAudioDevice **)((longlong)this + 8),*(UReverbEffect **)((longlong)this + 0x20),
               NAME_AGVReverb,*(float *)((longlong)this + 0x38),*(float *)((longlong)this + 0x30),
               *(float *)((longlong)this + 0x34));
  }
  return;
}

// operator() @ 14d9a0df0

void __thiscall `FProxyMutator_Reverb::Remove'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FAudioDeviceHandle::IsValid(this);
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
  bVar2 = FAudioDeviceHandle::IsValid(this);
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
  FAudioDevice::DeactivateReverbEffect(*(FAudioDevice **)((longlong)this + 8),NAME_AGVReverb);
  return;
}

// Apply @ 14d9a2500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProxyMutator_Reverb::Apply(FProxyMutator_Reverb *this,FAudioGameplayVolumeListener *param_1)

{
  float fVar1;
  float fVar2;
  UReverbEffect *pUVar3;
  USoundEffectSubmixPreset *pUVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FAudioDeviceManager *this_00;
  FName *pFVar8;
  TStatId TVar9;
  undefined8 *puVar10;
  FName local_res10;
  FName local_res18;
  FAudioDeviceHandle local_e8;
  undefined1 local_d0;
  UReverbEffect *local_c8;
  USoundEffectSubmixPreset *local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  FAudioDeviceHandle local_a8;
  code *local_88 [5];
  undefined8 *local_60;
  
  bVar7 = IsInAudioThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\ReverbVolumeComponent.cpp"
                       ,0x12,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = FAudioDeviceManager::Get();
  FAudioDeviceManager::GetAudioDevice(this_00,&local_a8,param_1->OwningDeviceId);
  bVar7 = FAudioDeviceHandle::IsValid(&local_a8);
  if (bVar7) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AGVActivateReverb ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FProxyMutator_Reverb::Apply(FAudioGameplayVolumeListener_&)const_::_12_::FStat_STAT_AGVActivateReverb>
             )0x0) {
          pFVar8 = ::FName::FName(&local_res10,"STAT_AGVActivateReverb");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AGVActivateReverb,*pFVar8,
                     L"FAudioThreadTask.AGVActivateReverb","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    lVar6 = this->_padding_;
    bVar7 = (this->ReverbSettings).bApplyReverb;
    pUVar3 = (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UReverbEffect *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (USoundEffectSubmixPreset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    fVar1 = (this->ReverbSettings).Volume;
    fVar2 = (this->ReverbSettings).FadeTime;
    TVar9.StatIdPtr = (TStatIdData *)StatPtr_STAT_AGVActivateReverb;
    if (StatPtr_STAT_AGVActivateReverb ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FProxyMutator_Reverb::Apply(FAudioGameplayVolumeListener_&)const_::_12_::FStat_STAT_AGVActivateReverb>
         )0x0) {
      pFVar8 = ::FName::FName(&local_res18,"STAT_AGVActivateReverb");
      TVar9.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AGVActivateReverb,*pFVar8,
                      L"FAudioThreadTask.AGVActivateReverb","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    FAudioDeviceHandle::FAudioDeviceHandle(&local_e8,&local_a8);
    local_d0 = bVar7;
    local_c8 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UReverbEffect *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_c0 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (USoundEffectSubmixPreset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_88[0] = (code *)0x0;
    local_b8 = fVar1;
    local_b4 = fVar2;
    local_b0 = (float)(int)lVar6;
    puVar10 = FMemory::Malloc(0x48,8);
    *puVar10 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FProxyMutator_Reverb::Apply'::`12'::<lambda_1>,1,1>::
                _vftable_;
    local_60 = puVar10;
    FAudioDeviceHandle::FAudioDeviceHandle((FAudioDeviceHandle *)(puVar10 + 1),&local_e8);
    *(undefined1 *)(puVar10 + 4) = local_d0;
    puVar10[5] = local_c8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UReverbEffect *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_c8);
    }
    puVar10[6] = local_c0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_c0 != (USoundEffectSubmixPreset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c0);
    }
    *(float *)(puVar10 + 7) = local_b8;
    *(float *)((longlong)puVar10 + 0x3c) = local_b4;
    *(float *)(puVar10 + 8) = local_b0;
    if ((FAudioDeviceHandle *)(puVar10 + 1) != (FAudioDeviceHandle *)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FProxyMutator_Reverb::Apply'::__l12::<lambda_1>,void>::Call;
    }
    FAudioThread::RunCommandOnGameThread((TUniqueFunction<void___cdecl(void)> *)local_88,TVar9);
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_e8);
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_a8);
  return;
}

// Remove @ 14d9a88f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProxyMutator_Reverb::Remove(FProxyMutator_Reverb *this,FAudioGameplayVolumeListener *param_1)

{
  FAudioDeviceHandle *this_00;
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this_01;
  FName *pFVar3;
  TStatId TVar4;
  FName local_res10;
  FName local_res18 [2];
  FAudioDeviceHandle local_78;
  FAudioDeviceHandle local_60;
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\ReverbVolumeComponent.cpp"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_01 = FAudioDeviceManager::Get();
  FAudioDeviceManager::GetAudioDevice(this_01,&local_78,param_1->OwningDeviceId);
  bVar2 = FAudioDeviceHandle::IsValid(&local_78);
  if (bVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AGVDeactivateReverb ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FProxyMutator_Reverb::Remove(FAudioGameplayVolumeListener_&)const_::_12_::FStat_STAT_AGVDeactivateReverb>
             )0x0) {
          pFVar3 = ::FName::FName(&local_res10,"STAT_AGVDeactivateReverb");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AGVDeactivateReverb,*pFVar3,
                     L"FAudioThreadTask.AGVDeativateReverb","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AGVDeactivateReverb;
    if (StatPtr_STAT_AGVDeactivateReverb ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FProxyMutator_Reverb::Remove(FAudioGameplayVolumeListener_&)const_::_12_::FStat_STAT_AGVDeactivateReverb>
         )0x0) {
      pFVar3 = ::FName::FName(local_res18,"STAT_AGVDeactivateReverb");
      TVar4.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AGVDeactivateReverb,*pFVar3,
                      L"FAudioThreadTask.AGVDeativateReverb","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    FAudioDeviceHandle::FAudioDeviceHandle(&local_60,&local_78);
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x20,8);
    this_00 = (FAudioDeviceHandle *)(local_20 + 1);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FProxyMutator_Reverb::Remove'::`12'::<lambda_1>,1,1>::
                 _vftable_;
    FAudioDeviceHandle::FAudioDeviceHandle(this_00,&local_60);
    if (this_00 != (FAudioDeviceHandle *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FProxyMutator_Reverb::Remove'::__l12::<lambda_1>,void>::Call
      ;
    }
    FAudioThread::RunCommandOnGameThread((TUniqueFunction<void___cdecl(void)> *)local_48,TVar4);
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_60);
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_78);
  return;
}

