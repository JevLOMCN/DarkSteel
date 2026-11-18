// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FAudioVirtualLoop @ 14761d230

FAudioVirtualLoop * __thiscall
FAudioVirtualLoop::FAudioVirtualLoop(FAudioVirtualLoop *this,FAudioVirtualLoop *param_1)

{
  TArray<Audio::FModulationDestination,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
  *pTVar3;
  TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
  *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *pTVar7;
  
  pTVar1 = &this->VolumeConcurrencyDestinations;
  this->TimeSinceLastUpdate = param_1->TimeSinceLastUpdate;
  this->TimeVirtualized = param_1->TimeVirtualized;
  this->UpdateInterval = param_1->UpdateInterval;
  this->IsVirtualizedPingTimeSec = param_1->IsVirtualizedPingTimeSec;
  this->ActiveSound = param_1->ActiveSound;
  piVar2 = &(this->VolumeConcurrencyDestinations).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->VolumeConcurrencyDestinations).ArrayNum;
  pFVar6 = (param_1->VolumeConcurrencyDestinations).AllocatorInstance.Data;
  (this->VolumeConcurrencyDestinations).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<Audio::FModulationDestination,Audio::FModulationDestination,int>
              ((pTVar1->AllocatorInstance).Data,(FModulationDestination *)pFVar6,iVar5);
  }
  pTVar3 = &this->EffectivePlaybackTimes;
  (pTVar3->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->EffectivePlaybackTimes).Pairs.ArrayMax;
  iVar5 = (param_1->EffectivePlaybackTimes).Pairs.ArrayNum;
  pFVar6 = (param_1->EffectivePlaybackTimes).Pairs.AllocatorInstance.Data;
  (this->EffectivePlaybackTimes).Pairs.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,(ForAnyElementType *)pTVar3,iVar5,piVar2);
    memcpy((pTVar3->Pairs).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 4);
  }
  pTVar4 = &this->WaveInstanceData;
  (pTVar4->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->WaveInstanceData).Pairs.ArrayMax;
  iVar5 = (param_1->WaveInstanceData).Pairs.ArrayNum;
  pTVar7 = (TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)
           (param_1->WaveInstanceData).Pairs.AllocatorInstance.Data;
  (this->WaveInstanceData).Pairs.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar5,0,(ForAnyElementType *)pTVar4,iVar5,piVar2);
    ConstructItems<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,int>
              ((pTVar4->Pairs).AllocatorInstance.Data,pTVar7,iVar5);
  }
  return this;
}

// FAudioVirtualLoop @ 147686640

FAudioVirtualLoop * __thiscall FAudioVirtualLoop::FAudioVirtualLoop(FAudioVirtualLoop *this)

{
  this->TimeSinceLastUpdate = 0.0;
  this->TimeVirtualized = 0.0;
  this->UpdateInterval = 0.0;
  this->IsVirtualizedPingTimeSec = 0.0;
  this->ActiveSound = (FActiveSound *)0x0;
  (this->VolumeConcurrencyDestinations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VolumeConcurrencyDestinations).ArrayNum = 0;
  (this->VolumeConcurrencyDestinations).ArrayMax = 0;
  (this->EffectivePlaybackTimes).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectivePlaybackTimes).Pairs.ArrayNum = 0;
  (this->EffectivePlaybackTimes).Pairs.ArrayMax = 0;
  (this->WaveInstanceData).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveInstanceData).Pairs.ArrayNum = 0;
  (this->WaveInstanceData).Pairs.ArrayMax = 0;
  return this;
}

// CalculateUpdateInterval @ 147697c70

void __thiscall FAudioVirtualLoop::CalculateUpdateInterval(FAudioVirtualLoop *this)

{
  FAudioDevice *this_00;
  FActiveSound *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  TVector<double>_u_0 local_28;
  
  if (this->ActiveSound == (FActiveSound *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveSound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                       ,0xc5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = this->ActiveSound->AudioDevice;
  if (this_00 == (FAudioDevice *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                       ,199,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->ActiveSound;
  local_28._s_0.X = (pFVar1->Transform).Translation.XY.m128d_f64[0];
  local_28._s_0.Y = (pFVar1->Transform).Translation.XY.m128d_f64[1];
  local_28._s_0.Z = (pFVar1->Transform).Translation.ZW.m128d_f64[0];
  fVar4 = FAudioDevice::GetDistanceToNearestListener(this_00,(TVector<double> *)&local_28._s_0);
  fVar5 = VirtualLoopsPerfDistanceCVar;
  if (VirtualLoopsPerfDistanceCVar <= __real_3f800000) {
    fVar5 = __real_3f800000;
  }
  fVar5 = (fVar4 - this->ActiveSound->MaxDistance) / fVar5;
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  this->UpdateInterval =
       fVar5 * (VirtualLoopsUpdateRateMaxCVar - VirtualLoopsUpdateRateMinCVar) +
       VirtualLoopsUpdateRateMinCVar;
  return;
}

// GetActiveSound @ 1476ad670

FActiveSound * __thiscall FAudioVirtualLoop::GetActiveSound(FAudioVirtualLoop *this)

{
  code *pcVar1;
  bool bVar2;
  FActiveSound *pFVar3;
  
  if (this->ActiveSound != (FActiveSound *)0x0) {
    return this->ActiveSound;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ActiveSound",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                     ,0xe0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FActiveSound *)(*pcVar1)();
    return pFVar3;
  }
  return this->ActiveSound;
}

// GetActiveSound @ 1476ad6c0

FActiveSound * __thiscall FAudioVirtualLoop::GetActiveSound(FAudioVirtualLoop *this)

{
  code *pcVar1;
  bool bVar2;
  FActiveSound *pFVar3;
  
  if (this->ActiveSound != (FActiveSound *)0x0) {
    return this->ActiveSound;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ActiveSound",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                     ,0xe6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FActiveSound *)(*pcVar1)();
    return pFVar3;
  }
  return this->ActiveSound;
}

// GetEffectivePlaybackTimes @ 1476b0cb0

TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_> *
__thiscall FAudioVirtualLoop::GetEffectivePlaybackTimes(FAudioVirtualLoop *this)

{
  return &this->EffectivePlaybackTimes;
}

// GetTimeVirtualized @ 1476b5880

float __thiscall FAudioVirtualLoop::GetTimeVirtualized(FAudioVirtualLoop *this)

{
  return this->TimeVirtualized;
}

// GetUpdateInterval @ 1476b6220

float __thiscall FAudioVirtualLoop::GetUpdateInterval(FAudioVirtualLoop *this)

{
  return this->UpdateInterval;
}

// IsEnabled @ 1476ba910

bool __cdecl FAudioVirtualLoop::IsEnabled(void)

{
  return bVirtualLoopsEnabledCVar != 0;
}

// IsInAudibleRange @ 1476baa30

bool __cdecl FAudioVirtualLoop::IsInAudibleRange(FActiveSound *param_1,FAudioDevice *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TVector<double>_u_0 local_28;
  
  if (param_1->bAllowSpatialization != '\0') {
    if (((param_2 == (FAudioDevice *)0x0) &&
        (param_2 = param_1->AudioDevice, param_2 == (FAudioDevice *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDevice",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                           ,0xfb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
    bVar2 = FActiveSound::IsPlayWhenSilent(param_1);
    if (!bVar2) {
      fVar3 = __real_3f800000;
      if (param_1->bHasAttenuationSettings != '\0') {
        if ((param_1->AttenuationSettings).bAttenuate == 0) {
          return true;
        }
        fVar3 = (param_1->FocusData).DistanceScale;
      }
      if (fVar3 <= __real_38d1b717) {
        fVar3 = __real_38d1b717;
      }
      local_28._s_0.X = (param_1->Transform).Translation.XY.m128d_f64[0];
      local_28._s_0.Y = (param_1->Transform).Translation.XY.m128d_f64[1];
      local_28._s_0.Z = (param_1->Transform).Translation.ZW.m128d_f64[0];
      bVar2 = FAudioDevice::LocationIsAudible
                        (param_2,(TVector<double> *)&local_28._s_0,param_1->MaxDistance / fVar3);
      return bVar2;
    }
  }
  return true;
}

// OnTraceStarted @ 1476bd9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAudioVirtualLoop::OnTraceStarted(FAudioVirtualLoop *this)

{
  USoundBase *this_00;
  FAudioDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool bVar5;
  wchar_t *pwVar6;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  FString local_50;
  uint *local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar5 = false;
  local_58.s.LowPart = 0;
  if ((-1 < AudioChannel->Enabled) && (this->ActiveSound != (FActiveSound *)0x0)) {
    pwVar6 = L"";
    this_00 = (this->ActiveSound->Sound).field0_0x0.DebugPtr;
    if ((this_00 == (USoundBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Sound",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                           ,0x1b4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = this->ActiveSound->AudioDevice;
    if ((pFVar1 != (FAudioDevice *)0x0) && (-1 < AudioChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FAudioVirtualLoopVirtualizeFields>
                ((TLogScope<1> *)&stack0xffffffffffffffc0);
      *local_40 = pFVar1->DeviceID;
      QueryPerformanceCounter(&local_58);
      *(ulonglong *)(local_40 + 1) = CONCAT44(local_58.s.HighPart,local_58.s.LowPart);
      local_40[3] = this->ActiveSound->PlayOrder;
      *(ulong64 *)(local_40 + 4) = this->ActiveSound->AudioComponentID;
      if (this_00 == (USoundBase *)0x0) {
        pwVar6 = (wchar_t *)&u_N_A;
      }
      else {
        pFVar4 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)this_00,&local_50,(UObject *)0x0);
        if ((pFVar4->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        bVar5 = true;
      }
      FAudioVirtualLoopVirtualizeFields::Name<wchar_t_const_*>
                ((FAudioVirtualLoopVirtualizeFields *)&stack0xffffffffffffffc0,pwVar6);
      UE::Trace::Private::TLogScope<1>::operator+=
                ((TLogScope<1> *)&stack0xffffffffffffffc0,(FLogScope *)&stack0xffffffffffffffc0);
      if ((bVar5) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ShouldListenerMoveForceUpdate @ 1476c9e00

bool __cdecl
FAudioVirtualLoop::ShouldListenerMoveForceUpdate
          (TTransform<double> *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_2->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar2 = (param_2->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar3 = (param_2->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  return VirtualLoopsForceUpdateListenerMoveDistanceCVar *
         VirtualLoopsForceUpdateListenerMoveDistanceCVar <
         (float)(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
}

// Update @ 1476cbe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall FAudioVirtualLoop::Update(FAudioVirtualLoop *this,float param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  FActiveSound *pFVar4;
  USoundClass *pUVar5;
  FAudioDevice *pFVar6;
  USoundBase *this_00;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined1 *puVar11;
  float fVar12;
  bool bVar13;
  undefined1 uVar14;
  FWaveInstanceData *pFVar15;
  float *pfVar16;
  FString *pFVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_288 [32];
  undefined1 local_250;
  char local_24f;
  undefined1 local_24e [6];
  LARGE_INTEGER local_248;
  LARGE_INTEGER local_240;
  TRotator<double> local_238;
  FString local_220;
  double local_210;
  double dStack_208;
  double local_200;
  TQuat<double> local_1f8;
  uint *local_1d8;
  longlong local_1d0;
  uint *local_1c8;
  longlong local_1c0;
  FAttenuationListenerData local_1b8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_24f = param_2;
  if ((this->ActiveSound == (FActiveSound *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveSound",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                          ,300,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  fVar2 = __real_3daaaaab;
  fVar24 = __real_40000000;
  fVar12 = __real_3f800000;
  pFVar4 = this->ActiveSound;
  fVar23 = param_1 * pFVar4->MinCurrentPitch;
  pFVar4->PlaybackTime = fVar23 + pFVar4->PlaybackTime;
  this->IsVirtualizedPingTimeSec = param_1 + this->IsVirtualizedPingTimeSec;
  this->TimeVirtualized = fVar23 + this->TimeVirtualized;
  iVar21 = (this->EffectivePlaybackTimes).Pairs.ArrayNum;
  pFVar20 = (this->EffectivePlaybackTimes).Pairs.AllocatorInstance.Data;
  pFVar22 = pFVar20 + (longlong)iVar21 * 0x10;
  while( true ) {
    if ((this->EffectivePlaybackTimes).Pairs.ArrayNum != iVar21) {
      local_250 = 0;
      `TCheckedPointerIterator<TTuple<unsigned___int64,float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_250);
    }
    if (pFVar20 == pFVar22) break;
    pFVar15 = TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
              ::FindChecked(&this->WaveInstanceData,*(ulong64 *)pFVar20);
    fVar23 = this->ActiveSound->PitchMultiplier;
    pUVar5 = pFVar15->SoundClass;
    pFVar15->EffectivePitch = fVar23;
    for (; pUVar5 != (USoundClass *)0x0; pUVar5 = (pUVar5->ParentClass).field0_0x0.DebugPtr) {
      fVar23 = fVar23 * (pUVar5->Properties).Pitch;
      pFVar15->EffectivePitch = fVar23;
    }
    bVar13 = Audio::FModulationDestination::IsActive(&pFVar15->PitchModulationDestination);
    fVar23 = fVar12;
    if (bVar13) {
      Audio::FModulationDestination::ProcessControl(&pFVar15->PitchModulationDestination,0.0,0);
      fVar1 = ((pFVar15->PitchModulationDestination).DestinationData.Object)->ValueTarget;
      if (fVar1 != 0.0) {
        fVar23 = powf(fVar24,fVar1 * fVar2);
      }
    }
    fVar1 = pFVar15->EffectivePitch;
    pfVar16 = TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
              ::FindChecked(&this->EffectivePlaybackTimes,*(ulong64 *)pFVar20);
    pFVar20 = pFVar20 + 0x10;
    *pfVar16 = param_1 * fVar1 * fVar23 + *pfVar16;
  }
  fVar24 = param_1 + this->TimeSinceLastUpdate;
  if (local_24f == '\0') {
    if (this->UpdateInterval <= 0.0) goto LAB_1476cc06d;
    this->TimeSinceLastUpdate = fVar24;
    if (fVar24 < this->UpdateInterval) {
      return false;
    }
  }
  this->TimeSinceLastUpdate = 0.0;
LAB_1476cc06d:
  iVar21 = (this->VolumeConcurrencyDestinations).ArrayNum;
  if (iVar21 != 0) {
    pFVar20 = (this->VolumeConcurrencyDestinations).AllocatorInstance.Data;
    pFVar22 = pFVar20 + (longlong)iVar21 * 0x10;
    fVar2 = 0.0;
    while( true ) {
      fVar23 = fVar2;
      if ((this->VolumeConcurrencyDestinations).ArrayNum != iVar21) {
        local_24e[0] = 0;
        `TCheckedPointerIterator<Audio::FModulationDestination,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_24e);
      }
      if (pFVar20 == pFVar22) break;
      Audio::FModulationDestination::ProcessControl((FModulationDestination *)pFVar20,0.0,0);
      puVar11 = &pFVar20->field_0x0;
      pFVar20 = pFVar20 + 0x10;
      fVar2 = *(float *)(*(longlong *)puVar11 + 4);
      if (fVar2 <= fVar23) {
        fVar2 = fVar23;
      }
    }
    this->ActiveSound->MaxSourceModulationValue = fVar23;
  }
  Audio::FAudioDebugger::DrawDebugInfo(this);
  if (-1 < AudioChannel->Enabled) {
    pFVar4 = this->ActiveSound;
    pFVar6 = pFVar4->AudioDevice;
    if (pFVar6 != (FAudioDevice *)0x0) {
      local_200 = (pFVar4->Transform).Translation.ZW.m128d_f64[0];
      dVar9 = (pFVar4->Transform).Translation.XY.m128d_f64[0];
      dVar10 = (pFVar4->Transform).Translation.XY.m128d_f64[1];
      local_1f8.X = (pFVar4->Transform).Rotation.XY.m128d_f64[0];
      local_1f8.Y = (pFVar4->Transform).Rotation.XY.m128d_f64[1];
      this_00 = (pFVar4->Sound).field0_0x0.DebugPtr;
      local_1f8.Z = (pFVar4->Transform).Rotation.ZW.m128d_f64[0];
      local_1f8.W = (pFVar4->Transform).Rotation.ZW.m128d_f64[1];
      local_210 = dVar9;
      dStack_208 = dVar10;
      UE::Math::TQuat<double>::Rotator(&local_1f8,&local_238);
      if (fVar12 < this->IsVirtualizedPingTimeSec || fVar12 == this->IsVirtualizedPingTimeSec) {
        if (-1 < AudioChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FAudioVirtualLoopIsVirtualizedPingFields>
                    ((TLogScope<1> *)&local_1d8);
          *local_1d8 = pFVar6->DeviceID;
          QueryPerformanceCounter(&local_248);
          *(LARGE_INTEGER *)(local_1d8 + 1) = local_248;
          local_1d8[3] = this->ActiveSound->PlayOrder;
          *(ulong64 *)(local_1d8 + 4) = this->ActiveSound->AudioComponentID;
          if (this_00 == (USoundBase *)0x0) {
            bVar13 = false;
            pwVar19 = (wchar_t *)&u_N_A;
          }
          else {
            pFVar17 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)this_00,&local_220,(UObject *)0x0);
            if ((pFVar17->Data).ArrayNum == 0) {
              pwVar19 = L"";
              bVar13 = true;
            }
            else {
              pwVar19 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
              bVar13 = true;
            }
          }
          iVar21 = 0;
          sVar3 = *pwVar19;
          pFVar20 = (FScriptContainerElement *)pwVar19;
          while (sVar3 != 0) {
            pFVar20 = pFVar20 + 2;
            iVar21 = iVar21 + 1;
            sVar3 = *(short *)pFVar20;
          }
          UE::Trace::Private::Field_WriteStringWide(4,pwVar19,iVar21);
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar7 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar7 = *(longlong *)(lVar7 + 0x20);
          **(undefined1 **)(lVar7 + 0x20) = 6;
          lVar18 = *(longlong *)(lVar7 + 0x20) + 1;
          *(longlong *)(lVar7 + 0x20) = lVar18;
          if (lVar7 != local_1d0) {
            *(longlong *)(lVar7 + 0x28) = lVar18;
          }
          *(undefined8 *)(local_1d0 + 0x28) = *(undefined8 *)(local_1d0 + 0x20);
          if ((bVar13) && (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
        }
        this->IsVirtualizedPingTimeSec = 0.0;
      }
      if (-1 < AudioChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FAudioVirtualLoopUpdateFields>
                  ((TLogScope<0> *)&local_1c8);
        *local_1c8 = pFVar6->DeviceID;
        QueryPerformanceCounter(&local_240);
        *(LARGE_INTEGER *)(local_1c8 + 1) = local_240;
        local_1c8[3] = this->ActiveSound->PlayOrder;
        local_1c8[4] = (uint)this->TimeVirtualized;
        local_1c8[5] = (uint)this->ActiveSound->PlaybackTime;
        local_1c8[6] = (uint)this->UpdateInterval;
        *(double *)(local_1c8 + 7) = dVar9;
        *(double *)(local_1c8 + 9) = dVar10;
        *(double *)(local_1c8 + 0xb) = local_200;
        *(double *)(local_1c8 + 0xd) = local_238.Pitch;
        *(double *)(local_1c8 + 0xf) = local_238.Yaw;
        *(double *)(local_1c8 + 0x11) = local_238.Roll;
        *(undefined8 *)(local_1c0 + 0x28) = *(undefined8 *)(local_1c0 + 0x20);
      }
    }
  }
  if ((this->ActiveSound == (FActiveSound *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveSound",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                          ,0x115,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  pFVar4 = this->ActiveSound;
  if ((pFVar4->bHasAttenuationSettings != '\0') && ((pFVar4->AttenuationSettings).bAttenuate != 0))
  {
    if ((pFVar4->AudioDevice == (FAudioDevice *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActiveSound->AudioDevice",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                            ,0x122,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    pFVar6 = this->ActiveSound->AudioDevice;
    iVar21 = FAudioDevice::FindClosestListenerIndex(pFVar6,&this->ActiveSound->Transform);
    FAttenuationListenerData::Create
              (&local_1b8,pFVar6,iVar21,&this->ActiveSound->Transform,
               &this->ActiveSound->AttenuationSettings);
    FActiveSound::UpdateFocusData(this->ActiveSound,fVar24,&local_1b8,(FAttenuationFocusData *)0x0);
  }
  bVar13 = IsInAudibleRange(this->ActiveSound,(FAudioDevice *)0x0);
  if (!bVar13) {
    CalculateUpdateInterval(this);
    return false;
  }
  return true;
}

// UpdateFocusData @ 1476cc870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAudioVirtualLoop::UpdateFocusData(FAudioVirtualLoop *this,float param_1)

{
  FActiveSound *pFVar1;
  FAudioDevice *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStackY_158 [32];
  FAttenuationListenerData local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (this->ActiveSound == (FActiveSound *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveSound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                       ,0x115,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->ActiveSound;
  if ((pFVar1->bHasAttenuationSettings != '\0') && ((pFVar1->AttenuationSettings).bAttenuate != 0))
  {
    if (pFVar1->AudioDevice == (FAudioDevice *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveSound->AudioDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                         ,0x122,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = this->ActiveSound->AudioDevice;
    iVar4 = FAudioDevice::FindClosestListenerIndex(this_00,&this->ActiveSound->Transform);
    FAttenuationListenerData::Create
              (&local_128,this_00,iVar4,&this->ActiveSound->Transform,
               &this->ActiveSound->AttenuationSettings);
    FActiveSound::UpdateFocusData(this->ActiveSound,param_1,&local_128,(FAttenuationFocusData *)0x0)
    ;
  }
  return;
}

// Virtualize @ 1476cd3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FAudioVirtualLoop::Virtualize
          (FActiveSound *param_1,FAudioDevice *param_2,bool param_3,FAudioVirtualLoop *param_4)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  USoundBase *pUVar4;
  FWaveInstance *this;
  USoundClass *pUVar5;
  FScriptContainerElement *pFVar6;
  FAudioDevice *pFVar7;
  code *pcVar8;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar9;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  EVirtualizationMode EVar13;
  char cVar14;
  int iVar15;
  FActiveSound *this_00;
  FScriptContainerElement *pFVar16;
  FString *pFVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  uint uVar25;
  undefined1 auStack_228 [32];
  undefined1 local_1d8 [4];
  float local_1d4;
  TArray<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  local_1d0;
  FAudioDevice *local_1c0;
  FActiveSound *local_1b8;
  int local_1b0;
  int local_1ac;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_1a8;
  FName local_1a0;
  FName local_198;
  LARGE_INTEGER local_190;
  USoundBase *local_188;
  FWaveInstanceData local_180;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FModulationDestination local_100;
  FString local_f0 [2];
  undefined4 local_c4;
  FLogScope local_c0;
  FSoundModulationDestinationSettings local_a8;
  char *local_48;
  
  local_48 = (char *)(__security_cookie.value ^ (ulonglong)auStack_228);
  local_1d4 = 0.0;
  local_188 = (param_1->Sound).field0_0x0.DebugPtr;
  local_1c0 = param_2;
  if ((local_188 == (USoundBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sound",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                          ,0x68,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  EVar13 = FActiveSound::GetVirtualizationMode(param_1);
  if (((((EVar13 == Disabled) || (bVirtualLoopsEnabledCVar == 0)) ||
       (param_1->bIsPreviewSound != '\0')) ||
      (((pUVar4 = (param_1->Sound).field0_0x0.DebugPtr, pUVar4 == (USoundBase *)0x0 ||
        (cVar14 = (**(code **)(pUVar4->_padding_ + 0x310))(), cVar14 == '\0')) ||
       ((param_1->FadeOut != None ||
        (((bool)param_1->bIsStopping ||
         (bVar11 = FAudioDevice::CanHaveMultipleActiveSounds(param_2,param_1->AudioComponentID),
         bVar11)))))))) || ((param_3 && (bVar11 = IsInAudibleRange(param_1,param_2), bVar11)))) {
    bVar11 = false;
  }
  else {
    this_00 = FActiveSound::CreateVirtualCopy(param_1,param_2);
    param_4->ActiveSound = this_00;
    local_1b8 = this_00;
    CalculateUpdateInterval(param_4);
    EVar13 = FActiveSound::GetVirtualizationMode(param_1);
    if (EVar13 == SeekRestart) {
      puVar1 = &(param_1->WaveInstances).field_0x10;
      iStack_158 = 0;
      iVar15 = *(int *)&(param_1->WaveInstances).field_0x28;
      local_1a8 = &param_1->WaveInstances;
      uStack_154 = 1;
      local_140 = 0;
      iStack_144 = 0;
      if (iVar15 != 0) {
        puVar24 = *(uint **)&(param_1->WaveInstances).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puVar1;
        }
        uVar22 = *puVar24;
        local_140 = 0;
        while (uVar22 == 0) {
          lVar19 = (longlong)iStack_158;
          local_140 = local_140 + 0x20;
          iStack_158 = iStack_158 + 1;
          iStack_144 = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158)
          goto LAB_1476cd56f;
          uVar22 = puVar24[lVar19 + 1];
        }
        uStack_154 = -uVar22 & uVar22;
        uVar3 = (ulonglong)uStack_154 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_1b0 = (int)lVar19;
        iStack_144 = local_140 + -1 + local_1b0;
        if (iVar15 < iStack_144) {
          iStack_144 = iVar15;
        }
      }
LAB_1476cd56f:
      uStack_13c = local_c4;
      iStack_138 = *(int *)&(param_1->WaveInstances).field_0x8 -
                   *(int *)&(param_1->WaveInstances).field_0x34;
      uVar22 = *(uint *)&(param_1->WaveInstances).field_0x28;
      uStack_148 = 0xffffffff;
      TStack_128._padding_ = CONCAT44(uStack_154,iStack_158);
      uVar21 = uVar22 & 0xffffffe0;
      TStack_128.CurrentBitIndex = iStack_144;
      TStack_128.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar22 >> 5;
      TStack_128._28_4_ = local_c4;
      TStack_128.BaseBitIndex = local_140;
      uStack_108 = CONCAT44(uStack_134,iStack_138);
      local_160 = local_1a8;
      local_150 = puVar1;
      local_130 = local_1a8;
      TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar22 < 0) || (iVar15 < (int)uVar22)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      pTVar9 = local_1a8;
      uVar25 = *(uint *)&(param_1->WaveInstances).field_0x28;
      if (uVar22 != uVar25) {
        puVar23 = *(undefined1 **)&(param_1->WaveInstances).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = puVar1;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
        while (uVar22 == 0) {
          lVar19 = (longlong)iVar20;
          uVar21 = uVar21 + 0x20;
          iVar20 = iVar20 + 1;
          uVar22 = uVar25;
          if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_1476cd680;
          uVar22 = *(uint *)(puVar23 + lVar19 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_1ac = (int)lVar19;
        uVar22 = local_1ac + -1 + uVar21;
        if ((int)uVar25 < (int)uVar22) {
          uVar22 = uVar25;
        }
      }
LAB_1476cd680:
      while( true ) {
        pTVar10 = local_130;
        if (*(int *)&local_130->field_0x8 - *(int *)&local_130->field_0x34 != (int)uStack_108) {
          local_1d8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
        }
        if (((TStack_128.CurrentBitIndex == uVar22) &&
            (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (this_00 = local_1b8, pTVar10 == pTVar9)) break;
        lVar19 = *(longlong *)pTVar10;
        this = *(FWaveInstance **)(lVar19 + 8 + (longlong)TStack_128.CurrentBitIndex * 0x18);
        puVar2 = (ulong64 *)(lVar19 + (longlong)TStack_128.CurrentBitIndex * 0x18);
        if (this != (FWaveInstance *)0x0) {
          Audio::FModulationDestination::FModulationDestination
                    (&local_180.PitchModulationDestination);
          pUVar5 = (this->SoundClass).field0_0x0.DebugPtr;
          local_180.EffectivePitch = this->Pitch;
          if (pUVar5 != (USoundClass *)0x0) {
            local_180.SoundClass = pUVar5;
          }
          FWaveInstance::GetEffectiveModulationSettings(this,&local_a8,Pitch);
          if (local_a8.Modulators.Elements._8_4_ != local_a8.Modulators.Elements._52_4_) {
            FLazyName::Resolve(&AudioVirtualLoopPrivate::PitchModulationParameterName);
            Audio::FModulationDestination::Init
                      (&local_180.PitchModulationDestination,local_1c0->DeviceID,local_1a0,false,
                       false);
            Audio::FModulationDestination::UpdateModulators
                      (&local_180.PitchModulationDestination,&local_a8.Modulators);
          }
          TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
          ::Emplace<unsigned___int64_const_&,FAudioVirtualLoop::FWaveInstanceData_const_&>
                    (&param_4->WaveInstanceData,puVar2,&local_180);
          local_1d4 = this->PlaybackPercent *
                      *(float *)((longlong)&((this->WaveData).field0_0x0.DebugPtr)->_padding_ + 4);
          TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
          ::Emplace<unsigned___int64_const_&,float>
                    (&param_4->EffectivePlaybackTimes,puVar2,&local_1d4);
          local_a8.Modulators.HashSize = 0;
          if (local_a8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_a8.Modulators.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_a8.Modulators.Elements);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_180.PitchModulationDestination.DestinationData.SharedReferenceCount.
                     ReferenceController);
        }
        TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      }
    }
    FActiveSound::GetEffectiveVolumeModulators(this_00,&local_1d0);
    uVar22 = 0;
    if (0 < local_1d0.ArrayNum) {
      do {
        local_100.DestinationData.Object = (FModulationDestinationData *)0x0;
        local_100.DestinationData.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar16 = (FScriptContainerElement *)
                  Audio::FModulationDestination::FModulationDestination(&local_100);
        pFVar6 = (param_4->VolumeConcurrencyDestinations).AllocatorInstance.Data;
        if (((pFVar6 <= pFVar16) &&
            (pFVar16 < pFVar6 + (longlong)(param_4->VolumeConcurrencyDestinations).ArrayMax * 0x10))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar15 = (param_4->VolumeConcurrencyDestinations).ArrayNum;
        if (iVar15 == (param_4->VolumeConcurrencyDestinations).ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(param_4->VolumeConcurrencyDestinations).AllocatorInstance,
                              &(param_4->VolumeConcurrencyDestinations).ArrayMax);
        }
        (param_4->VolumeConcurrencyDestinations).ArrayNum = iVar15 + 1;
        Audio::FModulationDestination::FModulationDestination
                  ((FModulationDestination *)
                   ((param_4->VolumeConcurrencyDestinations).AllocatorInstance.Data +
                   (longlong)iVar15 * 0x10),(FModulationDestination *)pFVar16);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100.DestinationData.SharedReferenceCount.ReferenceController);
        uVar25 = ~uVar22 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar22 < (param_4->VolumeConcurrencyDestinations).ArrayNum) {
          uVar21 = uVar25;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        pFVar6 = (param_4->VolumeConcurrencyDestinations).AllocatorInstance.Data;
        lVar19 = (longlong)(int)uVar22 * 0x10;
        FLazyName::Resolve(&AudioVirtualLoopPrivate::VolumeModulationParameterName);
        Audio::FModulationDestination::Init
                  ((FModulationDestination *)(pFVar6 + lVar19),local_1c0->DeviceID,local_198,false,
                   true);
        uVar21 = 0;
        if ((int)uVar22 < (param_4->VolumeConcurrencyDestinations).ArrayNum) {
          uVar21 = uVar25;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        pFVar6 = (param_4->VolumeConcurrencyDestinations).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar22 < local_1d0.ArrayNum) {
          uVar21 = uVar25;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        Audio::FModulationDestination::UpdateModulators
                  ((FModulationDestination *)(pFVar6 + lVar19),
                   (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                    *)(local_1d0.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x50));
        uVar22 = uVar22 + 1;
        this_00 = local_1b8;
      } while ((int)uVar22 < local_1d0.ArrayNum);
    }
    bVar11 = false;
    if (((-1 < AudioChannel->Enabled) &&
        (pFVar7 = this_00->AudioDevice, pFVar7 != (FAudioDevice *)0x0)) &&
       (-1 < AudioChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FAudioVirtualLoopVirtualizeFields>
                ((TLogScope<1> *)&local_c0);
      *(uint *)local_c0.Ptr = pFVar7->DeviceID;
      QueryPerformanceCounter(&local_190);
      *(LARGE_INTEGER *)((longlong)local_c0.Ptr + 4) = local_190;
      *(uint *)((longlong)local_c0.Ptr + 0xc) = this_00->PlayOrder;
      *(ulong64 *)((longlong)local_c0.Ptr + 0x10) = this_00->AudioComponentID;
      if (local_188 == (USoundBase *)0x0) {
        pwVar18 = (wchar_t *)&u_N_A;
      }
      else {
        pFVar17 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)local_188,local_f0,(UObject *)0x0);
        if ((pFVar17->Data).ArrayNum == 0) {
          pwVar18 = L"";
          bVar11 = true;
        }
        else {
          pwVar18 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
          bVar11 = true;
        }
      }
      FAudioVirtualLoopVirtualizeFields::Name<wchar_t_const_*>
                ((FAudioVirtualLoopVirtualizeFields *)&local_c0,pwVar18);
      UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_c0,&local_c0);
      if ((bVar11) && (local_f0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_f0[0].Data.AllocatorInstance.Data);
      }
    }
    DestructItems<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,int>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)local_1d0.AllocatorInstance.Data !=
        (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)0x0) {
      FMemory::Free(local_1d0.AllocatorInstance.Data);
    }
    bVar11 = true;
  }
  return bVar11;
}

// Virtualize @ 1476cdb30

bool __cdecl
FAudioVirtualLoop::Virtualize(FActiveSound *param_1,bool param_2,FAudioVirtualLoop *param_3)

{
  FAudioDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = param_1->AudioDevice;
  if (pFVar1 == (FAudioDevice *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVirtualLoop.cpp"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  bVar3 = Virtualize(param_1,pFVar1,param_2,param_3);
  return bVar3;
}

