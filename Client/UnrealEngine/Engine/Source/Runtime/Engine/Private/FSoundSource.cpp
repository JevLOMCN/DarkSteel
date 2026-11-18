// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// ~FSoundSource @ 1475aa2e0

void __thiscall FSoundSource::~FSoundSource(FSoundSource *this)

{
  this->_padding_ = (longlong)&___7FSoundSource__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DebugInfo).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1475acb20

void __thiscall `FSoundSource::NotifyPlaybackData'::__l8::<lambda_1>::operator()(void *this)

{
  int iVar1;
  bool bVar2;
  UAudioComponent *pUVar3;
  FReadAccessScope local_28;
  
  pUVar3 = UAudioComponent::GetAudioComponentFromID(*(ulong64 *)this);
  if (pUVar3 != (UAudioComponent *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->OnAudioPlaybackPercent,&local_28);
    iVar1 = *(int *)&(pUVar3->OnAudioPlaybackPercent).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      FOnAudioPlaybackPercent_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &pUVar3->OnAudioPlaybackPercent,*(USoundWave **)((longlong)this + 8),
                 *(float *)((longlong)this + 0x10));
    }
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnAudioPlaybackPercentNative);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
      ::Broadcast(&pUVar3->OnAudioPlaybackPercentNative,pUVar3,*(USoundWave **)((longlong)this + 8),
                  *(float *)((longlong)this + 0x10));
    }
  }
  return;
}

// operator() @ 1475ad670

void __thiscall `FSoundSource::NotifyPlaybackData'::__l11::<lambda_2>::operator()(void *this)

{
  int iVar1;
  bool bVar2;
  UAudioComponent *pUVar3;
  FReadAccessScope local_28;
  
  pUVar3 = UAudioComponent::GetAudioComponentFromID(*(ulong64 *)this);
  if (pUVar3 != (UAudioComponent *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->OnAudioSingleEnvelopeValue,&local_28);
    iVar1 = *(int *)&(pUVar3->OnAudioSingleEnvelopeValue).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      FOnAudioSingleEnvelopeValue_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &pUVar3->OnAudioSingleEnvelopeValue,*(USoundWave **)((longlong)this + 8),
                 *(float *)((longlong)this + 0x10));
    }
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnAudioSingleEnvelopeValueNative);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
      ::Broadcast(&pUVar3->OnAudioSingleEnvelopeValueNative,pUVar3,
                  *(USoundWave **)((longlong)this + 8),*(float *)((longlong)this + 0x10));
    }
  }
  return;
}

// Describe @ 1475beba0

FString * __thiscall
FSoundSource::Describe(FSoundSource *this,FString *__return_storage_ptr__,bool param_1)

{
  FActiveSound *this_00;
  USoundWave *this_01;
  bool bVar1;
  FString *pFVar2;
  bool bVar3;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  bVar1 = false;
  this_00 = this->WaveInstance->ActiveSound;
  if (this_00 != (FActiveSound *)0x0) {
    pFVar2 = FActiveSound::GetOwnerName(this_00,local_48);
    if ((pFVar2->Data).ArrayNum == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
  }
  this_01 = (this->WaveInstance->WaveData).field0_0x0.DebugPtr;
  bVar3 = !param_1;
  if (bVar3) {
    local_res8 = (FName)this_01->_padding_;
    ::FName::ToString(&local_res8,&local_68);
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_58,(UObject *)0x0);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Wave: %s, Volume: %6.2f, Owner: %s");
  if ((bVar3) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetChannelLocations @ 1475d3050

void __thiscall
FSoundSource::GetChannelLocations
          (FSoundSource *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (this->LeftChannelSourceLocation).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->LeftChannelSourceLocation).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = (this->LeftChannelSourceLocation).field0_0x0._s_0.Z;
  dVar1 = (this->RightChannelSourceLocation).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (this->RightChannelSourceLocation).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (this->RightChannelSourceLocation).field0_0x0._s_0.Z;
  return;
}

// GetDebugVolume @ 1475d3f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FSoundSource::GetDebugVolume(FSoundSource *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FString *pFVar1;
  USoundWave *pUVar2;
  FActiveSound *pFVar3;
  USoundBase *pUVar4;
  USoundClass *pUVar5;
  FScriptContainerElement *pFVar6;
  FAudioDeviceManager *pFVar7;
  FAudioDebugger *this_00;
  FDebugInfo *pFVar8;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  FName local_a8 [2];
  bool local_98 [8];
  FString local_90;
  undefined8 local_80;
  undefined4 local_78;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (GEngine == (UEngine *)0x0) {
    return param_1;
  }
  pFVar7 = UEngine::GetAudioDeviceManager(GEngine);
  if (pFVar7 == (FAudioDeviceManager *)0x0) {
    return param_1;
  }
  if (this->WaveInstance == (FWaveInstance *)0x0) {
    return param_1;
  }
  if ((this->DebugInfo).Object == (FDebugInfo *)0x0) {
    return param_1;
  }
  pFVar7 = UEngine::GetAudioDeviceManager(GEngine);
  this_00 = FAudioDeviceManager::GetDebugger(pFVar7);
  local_98[0] = false;
  local_98[1] = false;
  local_80 = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_78 = 0x3f800000;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  if (param_1 != 0.0) {
    pUVar2 = (this->WaveInstance->WaveData).field0_0x0.DebugPtr;
    if (pUVar2 == (USoundWave *)0x0) {
      ::FString::FString(&local_b8,L"Null");
    }
    else {
      local_a8[0] = (FName)pUVar2->_padding_;
      ::FName::ToString(local_a8,&local_b8);
    }
    Audio::FAudioDebugger::QuerySoloMuteSoundWave(this_00,&local_b8,local_98,local_98 + 1,&local_90)
    ;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_98[1] == false) {
      pFVar3 = this->WaveInstance->ActiveSound;
      if ((pFVar3 != (FActiveSound *)0x0) &&
         (pUVar4 = (pFVar3->Sound).field0_0x0.DebugPtr, pUVar4 != (USoundBase *)0x0)) {
        local_a8[0] = (FName)pUVar4->_padding_;
        ::FName::ToString(local_a8,&local_b8);
        Audio::FAudioDebugger::QuerySoloMuteSoundCue
                  (this_00,&local_b8,local_98,local_98 + 1,&local_90);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_98[1] != false) {
          param_1 = 0.0;
          goto LAB_1475d4128;
        }
      }
      pUVar5 = (this->WaveInstance->SoundClass).field0_0x0.DebugPtr;
      if (pUVar5 != (USoundClass *)0x0) {
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        local_a8[0] = (FName)pUVar5->_padding_;
        ::FName::ToString(local_a8,&local_b8);
        Audio::FAudioDebugger::QuerySoloMuteSoundClass
                  (this_00,&local_b8,local_98,local_98 + 1,&local_90);
        if (local_98[1] != false) {
          param_1 = 0.0;
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      param_1 = 0.0;
    }
  }
LAB_1475d4128:
  pFVar8 = TSharedPtr<FSoundSource::FDebugInfo,1>::operator->(&this->DebugInfo);
  lpCriticalSection = &pFVar8->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar8 = TSharedPtr<FSoundSource::FDebugInfo,1>::operator->(&this->DebugInfo);
    pFVar8->bIsMuted = local_98[1];
    pFVar8 = TSharedPtr<FSoundSource::FDebugInfo,1>::operator->(&this->DebugInfo);
    pFVar8->bIsSoloed = local_98[0];
    pFVar8 = TSharedPtr<FSoundSource::FDebugInfo,1>::operator->(&this->DebugInfo);
    pFVar1 = &pFVar8->MuteSoloReason;
    if (pFVar1 != &local_90) {
      pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->MuteSoloReason).Data.ArrayNum = local_90.Data.ArrayNum;
      (pFVar8->MuteSoloReason).Data.ArrayMax = local_90.Data.ArrayMax;
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DeleteCriticalSection(&local_70);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNumFramesPlayed @ 1475d6260

long64 __thiscall FSoundSource::GetNumFramesPlayed(FSoundSource *this)

{
  return (longlong)this->NumFramesPlayed;
}

// GetNumTotalFrames @ 1475d6330

int __thiscall FSoundSource::GetNumTotalFrames(FSoundSource *this)

{
  return this->NumTotalFrames;
}

// GetPlaybackPercent @ 1475d7480

float __thiscall FSoundSource::GetPlaybackPercent(FSoundSource *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(((this->WaveInstance->WaveData).field0_0x0.DebugPtr)->_padding_ +
                             0x2d8))();
  fVar1 = this->PlaybackTime / fVar1;
  if (this->WaveInstance->LoopingMode == LOOP_Never) {
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    return fVar1;
  }
  fVar1 = FGenericPlatformMath::Fmod(fVar1,__real_3f800000);
  return fVar1;
}

// GetSourceSampleRate @ 1475de1f0

float __thiscall FSoundSource::GetSourceSampleRate(FSoundSource *this)

{
  undefined1 uVar1;
  USoundWave *pUVar2;
  float fVar3;
  
  if (((this->WaveInstance == (FWaveInstance *)0x0) ||
      (pUVar2 = (this->WaveInstance->WaveData).field0_0x0.DebugPtr, pUVar2 == (USoundWave *)0x0)) ||
     (pUVar2->bIsSourceBus != '\0')) {
    return (float)this->AudioDevice->SampleRate;
  }
  if (pUVar2->bProcedural != 0) {
    if (0 < pUVar2->SampleRate) {
      return (float)pUVar2->SampleRate;
    }
    return __real_473b8000;
  }
  uVar1 = pUVar2->field_0x365;
  if (pUVar2->bCachedSampleRateFromPlatformSettings != '\0') {
    return pUVar2->CachedSampleRateOverride;
  }
  if (pUVar2->bSampleRateManuallyReset != '\0') {
    pUVar2->field_0x365 = uVar1 | 4;
    pUVar2->CachedSampleRateOverride = (float)pUVar2->SampleRate;
    return (float)pUVar2->SampleRate;
  }
  fVar3 = FPlatformCompressionUtilities::GetTargetSampleRateForPlatform(pUVar2->SampleRateQuality);
  pUVar2->CachedSampleRateOverride = fVar3;
  if ((fVar3 < 0.0) || ((float)pUVar2->SampleRate < fVar3)) {
    fVar3 = (float)pUVar2->SampleRate;
    pUVar2->CachedSampleRateOverride = fVar3;
  }
  pUVar2->bCachedSampleRateFromPlatformSettings = '\x01';
  return fVar3;
}

// GetSpatializationParams @ 1475de2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSpatializationParams * __thiscall
FSoundSource::GetSpatializationParams
          (FSoundSource *this,FSpatializationParams *__return_storage_ptr__)

{
  float fVar1;
  FWaveInstance *pFVar2;
  FActiveSound *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  TVector<double> *pTVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_e8 [32];
  TVector<double>_u_0 local_c8;
  TVector<double> local_a8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar11 = 0;
  (__return_storage_ptr__->ListenerPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->ListenerPosition).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->ListenerPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar4 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.Y._4_4_,
                           UE::Math::TQuat<double>::Identity.Y._0_4_);
  (__return_storage_ptr__->ListenerOrientation).X =
       (double)CONCAT44(UE::Math::TQuat<double>::Identity.X._4_4_,
                        UE::Math::TQuat<double>::Identity.X._0_4_);
  (__return_storage_ptr__->ListenerOrientation).Y = dVar4;
  dVar4 = UE::Math::TQuat<double>::Identity.W;
  (__return_storage_ptr__->ListenerOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (__return_storage_ptr__->ListenerOrientation).W = dVar4;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->EmitterWorldPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->EmitterWorldPosition).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->EmitterWorldPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar4 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.Y._4_4_,
                           UE::Math::TQuat<double>::Identity.Y._0_4_);
  (__return_storage_ptr__->EmitterWorldRotation).X =
       (double)CONCAT44(UE::Math::TQuat<double>::Identity.X._4_4_,
                        UE::Math::TQuat<double>::Identity.X._0_4_);
  (__return_storage_ptr__->EmitterWorldRotation).Y = dVar4;
  dVar4 = UE::Math::TQuat<double>::Identity.W;
  (__return_storage_ptr__->EmitterWorldRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (__return_storage_ptr__->EmitterWorldRotation).W = dVar4;
  uVar10 = UE::Math::TQuat<double>::Identity.Y._4_4_;
  uVar9 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uVar8 = UE::Math::TQuat<double>::Identity.X._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->LastEmitterWorldRotation).X =
       UE::Math::TQuat<double>::Identity.X._0_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->LastEmitterWorldRotation).X + 4) = uVar8;
  *(undefined4 *)&(__return_storage_ptr__->LastEmitterWorldRotation).Y = uVar9;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->LastEmitterWorldRotation).Y + 4) = uVar10;
  dVar4 = UE::Math::TQuat<double>::Identity.W;
  (__return_storage_ptr__->LastEmitterWorldRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (__return_storage_ptr__->LastEmitterWorldRotation).W = dVar4;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->LeftChannelPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->LeftChannelPosition).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->LeftChannelPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->RightChannelPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->RightChannelPosition).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->RightChannelPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  __return_storage_ptr__->Distance = 0.0;
  __return_storage_ptr__->AttenuationDistance = 0.0;
  __return_storage_ptr__->NormalizedOmniRadius = 0.0;
  __return_storage_ptr__->NonSpatializedAmount = 0.0;
  __return_storage_ptr__->AudioClock = 0.0;
  dVar4 = (double)(**(code **)(this->AudioDevice->_padding_ + 0x100))();
  __return_storage_ptr__->AudioClock = dVar4;
  if ((AllowAudioSpatializationCVar == 0) || (this->WaveInstance->bUseSpatialization == 0)) {
    __return_storage_ptr__->NormalizedOmniRadius = 0.0;
    __return_storage_ptr__->NonSpatializedAmount = 0.0;
    __return_storage_ptr__->Distance = 0.0;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.Y = (double)uVar7;
    (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    goto LAB_1475de560;
  }
  FAudioDevice::GetListenerTransformedDirection
            (this->AudioDevice,(TVector<double> *)&local_c8._s_0,&this->WaveInstance->Location,
             &__return_storage_ptr__->Distance);
  fVar13 = FAudioDevice::GetDistanceToNearestListener
                     (this->AudioDevice,&this->WaveInstance->Location);
  __return_storage_ptr__->AttenuationDistance = fVar13;
  fVar13 = this->WaveInstance->NonSpatializedRadiusStart;
  if (fVar13 <= 0.0) {
LAB_1475de4be:
    __return_storage_ptr__->NonSpatializedAmount = 0.0;
  }
  else {
    fVar1 = __return_storage_ptr__->Distance;
    fVar15 = this->WaveInstance->NonSpatializedRadiusEnd;
    if (fVar13 <= fVar15) {
      fVar15 = fVar13;
    }
    if (0.0 < fVar1) {
      if (fVar15 <= 0.0) {
        fVar15 = fVar13 / fVar1;
        if (__real_49742400 <= fVar13 / fVar1) {
          fVar15 = __real_49742400;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if (fVar15 <= __real_3f800000) goto LAB_1475de4be;
        __return_storage_ptr__->NonSpatializedAmount =
             __real_3f800000 - __real_3f800000 / (fVar15 * fVar15);
      }
      else if (fVar1 < fVar13) {
        fVar14 = fVar13 - fVar15;
        if (fVar13 - fVar15 <= __real_3f800000) {
          fVar14 = __real_3f800000;
        }
        fVar14 = (fVar13 - fVar1) / fVar14;
        if (__real_3f800000 <= fVar14) {
          fVar14 = __real_3f800000;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        __return_storage_ptr__->NonSpatializedAmount = fVar14;
      }
    }
  }
  (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.X = local_c8._s_0.X;
  (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.Y = local_c8._s_0.Y;
  (__return_storage_ptr__->EmitterPosition).field0_0x0._s_0.Z = local_c8._s_0.Z;
  if (this->NumChannels == 2) {
    pTVar12 = FAudioDevice::GetListenerTransformedDirection
                        (this->AudioDevice,&local_a8,&this->LeftChannelSourceLocation,(float *)0x0);
    dVar4 = (pTVar12->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->LeftChannelPosition).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    (__return_storage_ptr__->LeftChannelPosition).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->LeftChannelPosition).field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
    pTVar12 = FAudioDevice::GetListenerTransformedDirection
                        (this->AudioDevice,&local_a8,&this->RightChannelSourceLocation,(float *)0x0)
    ;
    dVar4 = (pTVar12->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->RightChannelPosition).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    (__return_storage_ptr__->RightChannelPosition).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->RightChannelPosition).field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  }
LAB_1475de560:
  pFVar2 = this->WaveInstance;
  dVar4 = (pFVar2->Location).field0_0x0._s_0.Y;
  (__return_storage_ptr__->EmitterWorldPosition).field0_0x0._s_0.X =
       (pFVar2->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->EmitterWorldPosition).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->EmitterWorldPosition).field0_0x0._s_0.Z =
       (pFVar2->Location).field0_0x0._s_0.Z;
  pFVar3 = this->WaveInstance->ActiveSound;
  if (pFVar3 == (FActiveSound *)0x0) {
    dVar4 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.Y._4_4_,
                             UE::Math::TQuat<double>::Identity.Y._0_4_);
    (__return_storage_ptr__->EmitterWorldRotation).X =
         (double)CONCAT44(UE::Math::TQuat<double>::Identity.X._4_4_,
                          UE::Math::TQuat<double>::Identity.X._0_4_);
    (__return_storage_ptr__->EmitterWorldRotation).Y = dVar4;
    dVar4 = UE::Math::TQuat<double>::Identity.W;
    (__return_storage_ptr__->EmitterWorldRotation).Z = UE::Math::TQuat<double>::Identity.Z;
    (__return_storage_ptr__->EmitterWorldRotation).W = dVar4;
  }
  else {
    dVar4 = (pFVar3->Transform).Rotation.XY.m128d_f64[1];
    dVar5 = (pFVar3->Transform).Rotation.ZW.m128d_f64[0];
    dVar6 = (pFVar3->Transform).Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->EmitterWorldRotation).X = (pFVar3->Transform).Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->EmitterWorldRotation).Y = dVar4;
    (__return_storage_ptr__->EmitterWorldRotation).Z = dVar5;
    (__return_storage_ptr__->EmitterWorldRotation).W = dVar6;
    iVar11 = FActiveSound::GetClosestListenerIndex(this->WaveInstance->ActiveSound);
  }
  local_88.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FAudioDevice::GetListenerTransform(this->AudioDevice,iVar11,&local_88);
  (__return_storage_ptr__->ListenerOrientation).X = local_88.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->ListenerOrientation).Y = local_88.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->ListenerOrientation).Z = local_88.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->ListenerOrientation).W = local_88.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->ListenerPosition).field0_0x0._s_0.X =
       local_88.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->ListenerPosition).field0_0x0._s_0.Y =
       local_88.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->ListenerPosition).field0_0x0._s_0.Z =
       local_88.Translation.ZW.m128d_f64[0];
  return __return_storage_ptr__;
}

// GetStartFrame @ 1475de6a0

int __thiscall FSoundSource::GetStartFrame(FSoundSource *this)

{
  return this->StartFrame;
}

// InitCommon @ 1475e02a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSoundSource::InitCommon(FSoundSource *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDebugInfo *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FDebugInfo *local_18;
  FSharedReferencer<1> FStack_10;
  
  this->bIsPausedByGame = '\0';
  this->bIsManuallyPaused = '\0';
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  this->PlaybackTime = 0.0;
  this->TickCount = 0;
  pTVar4 = ::operator_new(0x60);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_18 = ___xmm_00000000000000000000000000000010;
    pFVar5 = (FDebugInfo *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDebugInfo_FSoundSource___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar4[1]._padding_ + 2) = 0;
    *(undefined2 *)((longlong)&pTVar4[1]._padding_ + 6) = 0;
    *(undefined8 *)((longlong)&pTVar4[3]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[5]._padding_ + 4) = 0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[3]._padding_ = 0x3f800000;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar4[3].SharedReferenceCount,4000);
    pFVar5 = (FDebugInfo *)(pTVar4 + 1);
    if (pFVar5 == (FDebugInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar4;
    pTVar6 = pTVar4;
    local_18 = pFVar5;
  }
  if (&this->DebugInfo != (TSharedPtr<FSoundSource::FDebugInfo,1> *)&local_18) {
    (this->DebugInfo).Object = pFVar5;
    local_18 = (FDebugInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DebugInfo).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// IsGameOnly @ 1475e2280

bool __thiscall FSoundSource::IsGameOnly(FSoundSource *this)

{
  if ((this->WaveInstance != (FWaveInstance *)0x0) && (this->WaveInstance->bIsUISound == 0)) {
    return true;
  }
  return false;
}

// NotifyPlaybackData @ 1475e66e0

void __thiscall FSoundSource::NotifyPlaybackData(FSoundSource *this)

{
  FActiveSound *pFVar1;
  ulong64 uVar2;
  TObjectPtr<USoundWave>_u_0 TVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  pFVar1 = this->WaveInstance->ActiveSound;
  uVar2 = pFVar1->AudioComponentID;
  if (uVar2 != 0) {
    TVar3 = (this->WaveInstance->WaveData).field0_0x0;
    if (pFVar1->bUpdatePlayPercentage != '\0') {
      uVar4 = (**(code **)(this->_padding_ + 0x70))(this);
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      local_58 = CONCAT44((int)((ulonglong)local_58 >> 0x20),uVar4);
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::`8'::<lambda_1>,1,1>::
                   _vftable_;
      local_20[1] = uVar2;
      *(TObjectPtr<USoundWave>_u_0 *)(local_20 + 2) = TVar3;
      local_20[3] = local_58;
      if (local_20 + 1 != (ulong64 *)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FSoundSource::NotifyPlaybackData'::__l8::<lambda_1>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnGameThread
                ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
    }
    if (this->WaveInstance->ActiveSound->bUpdateSingleEnvelopeValue != '\0') {
      uVar4 = (**(code **)(this->_padding_ + 0x98))(this);
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::`11'::<lambda_2>,1,1>::
                   _vftable_;
      local_20[1] = uVar2;
      *(TObjectPtr<USoundWave>_u_0 *)(local_20 + 2) = TVar3;
      local_20[3] = CONCAT44((int)((ulonglong)local_58 >> 0x20),uVar4);
      if (local_20 + 1 != (ulong64 *)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FSoundSource::NotifyPlaybackData'::__l11::<lambda_2>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnGameThread
                ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
    }
    if (this->WaveInstance->ActiveSound->bUpdateMultiEnvelopeValue != '\0') {
      fVar5 = (float)(**(code **)(this->_padding_ + 0x98))(this);
      this->WaveInstance->EnvelopValue = fVar5;
    }
  }
  return;
}

// SetFilterFrequency @ 1475fbdf0

void __thiscall FSoundSource::SetFilterFrequency(FSoundSource *this)

{
  uchar uVar1;
  FWaveInstance *pFVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = (this->AudioDevice->DebugState).Value;
  fVar4 = __real_41a00000;
  if ((uVar1 != '\x03') && (fVar4 = __real_469c4000, uVar1 != '\x06')) {
    fVar4 = __real_3f800000;
    if ((OcclusionFilterScaleEnabledCVar == 1) &&
       (__real_322bcc77 <
        (float)((uint)(this->WaveInstance->OcclusionFilterFrequency - __real_469c4000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      fVar4 = __real_3e800000;
    }
    pFVar2 = this->WaveInstance;
    fVar4 = fVar4 * pFVar2->OcclusionFilterFrequency;
    this->LPFFrequency = fVar4;
    fVar3 = fVar4;
    if (pFVar2->bEnableLowPassFilter != 0) {
      fVar3 = pFVar2->LowPassFilterFrequency;
      if (fVar4 <= pFVar2->LowPassFilterFrequency) {
        fVar3 = fVar4;
      }
      this->LPFFrequency = fVar3;
    }
    fVar4 = pFVar2->AmbientZoneFilterFrequency;
    if (fVar3 <= pFVar2->AmbientZoneFilterFrequency) {
      fVar4 = fVar3;
    }
    this->LPFFrequency = fVar4;
    fVar3 = pFVar2->AttenuationLowpassFilterFrequency;
    if (fVar4 <= pFVar2->AttenuationLowpassFilterFrequency) {
      fVar3 = fVar4;
    }
    this->LPFFrequency = fVar3;
    fVar4 = pFVar2->SoundClassFilterFrequency;
    if (fVar3 <= pFVar2->SoundClassFilterFrequency) {
      fVar4 = fVar3;
    }
  }
  this->LPFFrequency = fVar4;
  uVar1 = (this->AudioDevice->DebugState).Value;
  if (uVar1 == '\x04') {
    this->HPFFrequency = 20000.0;
  }
  else {
    if (uVar1 == '\a') {
      this->HPFFrequency = 20.0;
      return;
    }
    pFVar2 = this->WaveInstance;
    fVar4 = pFVar2->AttenuationHighpassFilterFrequency;
    this->HPFFrequency = fVar4;
    if (pFVar2->bEnableHighPassFilter != 0) {
      fVar3 = pFVar2->HighPassFilterFrequency;
      if (pFVar2->HighPassFilterFrequency <= fVar4) {
        fVar3 = fVar4;
      }
      this->HPFFrequency = fVar3;
      return;
    }
  }
  return;
}

// SetLFEBleed @ 1475fbf20

float __thiscall FSoundSource::SetLFEBleed(FSoundSource *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = this->WaveInstance->LFEBleed;
  this->LFEBleed = fVar2;
  fVar1 = __real_41200000;
  if ((this->AudioDevice->DebugState).Value == '\x05') {
    this->LFEBleed = 10.0;
    fVar2 = fVar1;
  }
  return fVar2;
}

// SetPauseByGame @ 1475fd370

void __thiscall FSoundSource::SetPauseByGame(FSoundSource *this,bool param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = this->field_0x90;
  this->field_0x90 = uVar1 & 0xfd | param_1 * '\x02';
  if ((byte)(uVar1 & 0xc | param_1 * '\x02') == 8) {
                    /* WARNING: Could not recover jumptable at 0x0001475fd395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x30))();
    return;
  }
  if ((this->Paused == '\0') && (this->bIsManuallyPaused != '\0' || param_1)) {
                    /* WARNING: Could not recover jumptable at 0x0001475fd3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xa8))();
    return;
  }
  return;
}

// SetPauseManually @ 1475fd3c0

void __thiscall FSoundSource::SetPauseManually(FSoundSource *this,bool param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = this->field_0x90;
  this->field_0x90 = uVar1 & 0xfb | param_1 << 2;
  if ((byte)(uVar1 & 10 | param_1 << 2) == 8) {
                    /* WARNING: Could not recover jumptable at 0x0001475fd3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x30))();
    return;
  }
  if ((this->Paused == '\0') && (this->bIsPausedByGame != '\0' || param_1)) {
                    /* WARNING: Could not recover jumptable at 0x0001475fd3f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xa8))();
    return;
  }
  return;
}

// SetReverbApplied @ 1475fd6d0

bool __thiscall FSoundSource::SetReverbApplied(FSoundSource *this,bool param_1)

{
  byte bVar1;
  byte bVar2;
  
  if ((this->WaveInstance->bReverb == 0) || (!param_1)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  bVar1 = this->field_0x90 & 0xfe;
  this->bReverbApplied = bVar2;
  bVar2 = bVar1 | bVar2;
  if (this->WaveInstance->bIsMusic != 0) {
    this->field_0x90 = bVar1;
    bVar2 = bVar1;
  }
  return (bool)(bVar2 & 1);
}

// Stop @ 1475feec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSoundSource::Stop(FSoundSource *this)

{
  undefined1 *puVar1;
  FActiveSound *pFVar2;
  ulong64 uVar3;
  TObjectPtr<USoundWave>_u_0 TVar4;
  FAudioDevice *pFVar5;
  FWaveInstance *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  FWaveInstance *local_res8;
  FSoundSource *local_res10;
  undefined8 local_b8;
  undefined8 local_a0;
  code *local_98 [5];
  undefined8 *local_70;
  code *local_68 [5];
  undefined8 *local_40;
  
  if (this->WaveInstance != (FWaveInstance *)0x0) {
    this->WaveInstance->EnvelopValue = 0.0;
    pFVar2 = this->WaveInstance->ActiveSound;
    uVar3 = pFVar2->AudioComponentID;
    if (uVar3 != 0) {
      TVar4 = (this->WaveInstance->WaveData).field0_0x0;
      if (pFVar2->bUpdatePlayPercentage != '\0') {
        uVar13 = (**(code **)(this->_padding_ + 0x70))(this);
        local_98[0] = (code *)0x0;
        local_70 = FMemory::Malloc(0x20,8);
        *local_70 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::`8'::<lambda_1>,1,1>
                     ::_vftable_;
        local_70[1] = uVar3;
        *(TObjectPtr<USoundWave>_u_0 *)(local_70 + 2) = TVar4;
        local_70[3] = CONCAT44((int)((ulonglong)local_b8 >> 0x20),uVar13);
        if (local_70 + 1 != (ulong64 *)0x0) {
          local_98[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FSoundSource::NotifyPlaybackData'::__l8::<lambda_1>,void>
                        ::Call;
        }
        FAudioThread::RunCommandOnGameThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_98,(TStatId)0x154f11430);
      }
      if (this->WaveInstance->ActiveSound->bUpdateSingleEnvelopeValue != '\0') {
        uVar13 = (**(code **)(this->_padding_ + 0x98))(this);
        local_68[0] = (code *)0x0;
        local_40 = FMemory::Malloc(0x20,8);
        *local_40 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::`11'::<lambda_2>,1,1>
                     ::_vftable_;
        local_40[1] = uVar3;
        *(TObjectPtr<USoundWave>_u_0 *)(local_40 + 2) = TVar4;
        local_40[3] = CONCAT44((int)((ulonglong)local_a0 >> 0x20),uVar13);
        if (local_40 + 1 != (ulong64 *)0x0) {
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FSoundSource::NotifyPlaybackData'::__l11::<lambda_2>,void>
                        ::Call;
        }
        FAudioThread::RunCommandOnGameThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_68,(TStatId)0x154f11430);
      }
      if (this->WaveInstance->ActiveSound->bUpdateMultiEnvelopeValue != '\0') {
        fVar14 = (float)(**(code **)(this->_padding_ + 0x98))(this);
        this->WaveInstance->EnvelopValue = fVar14;
      }
    }
    if ((this->AudioDevice == (FAudioDevice *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDevice",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                           ,0x1e7,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = this->AudioDevice;
    local_res8 = this->WaveInstance;
    if (*(int *)&(pFVar5->WaveInstanceSourceMap).field_0x8 !=
        *(int *)&(pFVar5->WaveInstanceSourceMap).field_0x34) {
      uVar11 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4))
               * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      TSet<TTuple<FWaveInstance_*,FSoundSource_*>,TDefaultMapHashableKeyFuncs<FWaveInstance_*,FSoundSource_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FWaveInstance_const_*>
                ((TSet<TTuple<FWaveInstance_*,FSoundSource_*>,TDefaultMapHashableKeyFuncs<FWaveInstance_*,FSoundSource_*,0>,FDefaultSetAllocator>
                  *)&pFVar5->WaveInstanceSourceMap,uVar11 >> 0x10 ^ uVar11,&local_res8);
    }
    pFVar6 = this->WaveInstance;
    if (-1 < (char)(pFVar6->bAlreadyNotifiedHook << 7)) {
      if ((pFVar6->bIsStarted == 0) && (2 < (byte)LogAudio._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      pFVar6->bIsFinished = 1;
      pFVar6->bAlreadyNotifiedHook = 1;
      uVar11 = (pFVar6->NotifyBufferFinishedHooks).Notifies.ArrayNum - 1;
      if (-1 < (int)uVar11) {
        lVar12 = (longlong)(int)uVar11 << 4;
        do {
          uVar10 = 0;
          if ((int)uVar11 < (pFVar6->NotifyBufferFinishedHooks).Notifies.ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)
               ((pFVar6->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data + lVar12) != 0)
          {
            uVar10 = 0;
            if ((int)uVar11 < (pFVar6->NotifyBufferFinishedHooks).Notifies.ArrayNum) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            plVar7 = *(longlong **)
                      ((pFVar6->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data + lVar12)
            ;
            (**(code **)(*plVar7 + 0x2b0))(plVar7,pFVar6);
          }
          lVar12 = lVar12 + -0x10;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
    }
    this->WaveInstance = (FWaveInstance *)0x0;
  }
  local_res10 = this;
  TArray<FSoundSource_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoundSource_*>
            (&this->AudioDevice->FreeSources,&local_res10);
  return;
}

// UpdateCommon @ 147602a90

void __thiscall FSoundSource::UpdateCommon(FSoundSource *this)

{
  FAudioDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if (this->WaveInstance == (FWaveInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaveInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                       ,0x342,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar4 = this->WaveInstance->Pitch;
  this->Pitch = fVar4;
  if (this->WaveInstance->bIsUISound == 0) {
    pFVar1 = this->AudioDevice;
    bVar3 = IsInAudioThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                         ,0x76f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar4 = (pFVar1->GlobalPitchScale).CurrValue * this->Pitch;
    this->Pitch = fVar4;
  }
  fVar4 = FAudioDevice::ClampPitch(this->AudioDevice,fVar4);
  this->Pitch = fVar4;
  fVar4 = FAudioDevice::GetDeviceDeltaTime(this->AudioDevice);
  this->PlaybackTime = fVar4 * this->Pitch + this->PlaybackTime;
  return;
}

// UpdatePause @ 147602eb0

void __thiscall FSoundSource::UpdatePause(FSoundSource *this)

{
  undefined1 *puVar1;
  
  if (this->bIsPausedByGame == '\0' && (this->bIsManuallyPaused == '\0' && this->Paused == '\x01'))
  {
                    /* WARNING: Could not recover jumptable at 0x000147602ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x30))();
    return;
  }
  if ((this->Paused == '\0') && (this->bIsPausedByGame != '\0' || this->bIsManuallyPaused != '\0'))
  {
                    /* WARNING: Could not recover jumptable at 0x000147602ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xa8))();
    return;
  }
  return;
}

// UpdateStereoEmitterPositions @ 1476032a0

void __thiscall FSoundSource::UpdateStereoEmitterPositions(FSoundSource *this)

{
  FWaveInstance **ppFVar1;
  double dVar2;
  double dVar3;
  FActiveSound *this_00;
  FWaveInstance *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  double dVar10;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [4];
  
  ppFVar1 = &this->WaveInstance;
  if ((AllowAudioSpatializationCVar == 0) || ((*ppFVar1)->bUseSpatialization == 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaveInstance->GetUseSpatialization()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                       ,0x273,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->NumChannels != 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetNumChannels() == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                       ,0x274,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((DisableStereoSpreadCvar != 0) || ((*ppFVar1)->StereoSpread <= 0.0)) {
    pFVar4 = *ppFVar1;
    dVar2 = (pFVar4->Location).field0_0x0._s_0.Y;
    (this->LeftChannelSourceLocation).field0_0x0._s_0.X = (pFVar4->Location).field0_0x0._s_0.X;
    (this->LeftChannelSourceLocation).field0_0x0._s_0.Y = dVar2;
    (this->LeftChannelSourceLocation).field0_0x0._s_0.Z = (pFVar4->Location).field0_0x0._s_0.Z;
    dVar2 = (pFVar4->Location).field0_0x0._s_0.Y;
    (this->RightChannelSourceLocation).field0_0x0._s_0.X = (pFVar4->Location).field0_0x0._s_0.X;
    (this->RightChannelSourceLocation).field0_0x0._s_0.Y = dVar2;
    (this->RightChannelSourceLocation).field0_0x0._s_0.Z = (pFVar4->Location).field0_0x0._s_0.Z;
  }
  else {
    this_00 = (*ppFVar1)->ActiveSound;
    if (this_00 == (FActiveSound *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FActiveSound::GetClosestListenerIndex(this_00);
    }
    FAudioDevice::GetListenerPosition
              (this->AudioDevice,iVar9,(TVector<double> *)&local_a8._s_0,false);
    pFVar4 = *ppFVar1;
    local_90._s_0.X = (pFVar4->Location).field0_0x0._s_0.X - local_a8._s_0.X;
    dVar2 = (pFVar4->Location).field0_0x0._s_0.Y;
    dVar3 = (pFVar4->Location).field0_0x0._s_0.Z;
    local_90._s_0.Y = dVar2 - local_a8._s_0.Y;
    local_90._s_0.Z = dVar3 - local_a8._s_0.Z;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_90._s_0,(TVector<double> *)&local_78[0]._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    dVar10 = (double)(pFVar4->StereoSpread * __real_3f000000);
    dVar7 = ((double)local_78[0]._8_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
            (double)local_78[0]._16_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) *
            dVar10;
    dVar6 = ((double)local_78[0]._16_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
            (double)local_78[0]._0_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) *
            dVar10;
    dVar10 = ((double)local_78[0]._0_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
             (double)local_78[0]._8_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) *
             dVar10;
    (this->LeftChannelSourceLocation).field0_0x0._s_0.X =
         dVar7 + (pFVar4->Location).field0_0x0._s_0.X;
    (this->LeftChannelSourceLocation).field0_0x0._s_0.Y = dVar6 + dVar2;
    (this->LeftChannelSourceLocation).field0_0x0._s_0.Z = dVar10 + dVar3;
    dVar2 = (pFVar4->Location).field0_0x0._s_0.Y;
    dVar3 = (pFVar4->Location).field0_0x0._s_0.Z;
    (this->RightChannelSourceLocation).field0_0x0._s_0.X =
         (pFVar4->Location).field0_0x0._s_0.X - dVar7;
    (this->RightChannelSourceLocation).field0_0x0._s_0.Y = dVar2 - dVar6;
    (this->RightChannelSourceLocation).field0_0x0._s_0.Z = dVar3 - dVar10;
  }
  return;
}

