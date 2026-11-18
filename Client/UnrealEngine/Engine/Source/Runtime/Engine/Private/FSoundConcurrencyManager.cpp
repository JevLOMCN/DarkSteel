// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FSoundConcurrencyManager @ 1486953e0

FSoundConcurrencyManager * __thiscall
FSoundConcurrencyManager::FSoundConcurrencyManager
          (FSoundConcurrencyManager *this,FAudioDevice *param_1)

{
  this->AudioDevice = param_1;
  *(undefined8 *)&this->ConcurrencyMap = 0;
  *(undefined8 *)&(this->ConcurrencyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencyMap).field_0x34 = 0;
  *(undefined4 *)&(this->ConcurrencyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConcurrencyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConcurrencyMap).field_0x48 = 0;
  *(undefined8 *)&this->OwnerConcurrencyMap = 0;
  *(undefined8 *)&(this->OwnerConcurrencyMap).field_0x8 = 0;
  *(undefined8 *)&(this->OwnerConcurrencyMap).field_0x20 = 0;
  *(undefined4 *)&(this->OwnerConcurrencyMap).field_0x28 = 0;
  *(undefined4 *)&(this->OwnerConcurrencyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OwnerConcurrencyMap).field_0x34 = 0;
  *(undefined4 *)&(this->OwnerConcurrencyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OwnerConcurrencyMap).field_0x40 = 0;
  *(undefined4 *)&(this->OwnerConcurrencyMap).field_0x48 = 0;
  *(undefined8 *)&this->OwnerPerSoundConcurrencyMap = 0;
  *(undefined8 *)&(this->OwnerPerSoundConcurrencyMap).field_0x8 = 0;
  *(undefined8 *)&(this->OwnerPerSoundConcurrencyMap).field_0x20 = 0;
  *(undefined4 *)&(this->OwnerPerSoundConcurrencyMap).field_0x28 = 0;
  *(undefined4 *)&(this->OwnerPerSoundConcurrencyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OwnerPerSoundConcurrencyMap).field_0x34 = 0;
  *(undefined4 *)&(this->OwnerPerSoundConcurrencyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OwnerPerSoundConcurrencyMap).field_0x40 = 0;
  *(undefined4 *)&(this->OwnerPerSoundConcurrencyMap).field_0x48 = 0;
  *(undefined8 *)&this->SoundObjectToConcurrencyGroup = 0;
  *(undefined8 *)&(this->SoundObjectToConcurrencyGroup).field_0x8 = 0;
  *(undefined8 *)&(this->SoundObjectToConcurrencyGroup).field_0x20 = 0;
  *(undefined4 *)&(this->SoundObjectToConcurrencyGroup).field_0x28 = 0;
  *(undefined4 *)&(this->SoundObjectToConcurrencyGroup).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundObjectToConcurrencyGroup).field_0x34 = 0;
  *(undefined4 *)&(this->SoundObjectToConcurrencyGroup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SoundObjectToConcurrencyGroup).field_0x40 = 0;
  *(undefined4 *)&(this->SoundObjectToConcurrencyGroup).field_0x48 = 0;
  *(undefined8 *)&this->ConcurrencyGroups = 0;
  *(undefined8 *)&(this->ConcurrencyGroups).field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencyGroups).field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencyGroups).field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencyGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencyGroups).field_0x34 = 0;
  *(undefined4 *)&(this->ConcurrencyGroups).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConcurrencyGroups).field_0x40 = 0;
  *(undefined4 *)&(this->ConcurrencyGroups).field_0x48 = 0;
  return this;
}

// ~FSoundConcurrencyManager @ 14869acd0

void __thiscall FSoundConcurrencyManager::~FSoundConcurrencyManager(FSoundConcurrencyManager *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ConcurrencyGroups).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConcurrencyGroups).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencyGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencyGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencyGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConcurrencyGroups);
  *(undefined4 *)&(this->SoundObjectToConcurrencyGroup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SoundObjectToConcurrencyGroup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoundObjectToConcurrencyGroup);
  *(undefined4 *)&(this->OwnerPerSoundConcurrencyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OwnerPerSoundConcurrencyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSoundInstanceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSoundInstanceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSoundInstanceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OwnerPerSoundConcurrencyMap);
  *(undefined4 *)&(this->OwnerConcurrencyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OwnerConcurrencyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OwnerConcurrencyMap);
  *(undefined4 *)&(this->ConcurrencyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConcurrencyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConcurrencyMap);
  return;
}

// CanPlaySound @ 1486a8020

/* WARNING: Enum "Type": Some values do not have unique names */

FConcurrencyGroup * __thiscall
FSoundConcurrencyManager::CanPlaySound
          (FSoundConcurrencyManager *this,FActiveSound *param_1,uint param_2,
          TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  longlong lVar1;
  float fVar2;
  uchar uVar3;
  USoundBase *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FConcurrencyGroup *pFVar7;
  undefined1 *puVar8;
  LARGE_INTEGER local_res8;
  FActiveSound *local_58;
  FString local_50;
  FString local_40;
  
  if ((param_2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupID != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x290,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FConcurrencyGroup *)(*pcVar4)();
    return pFVar7;
  }
  if (*(int *)&(this->ConcurrencyGroups).field_0x8 != *(int *)&(this->ConcurrencyGroups).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->ConcurrencyGroups).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ConcurrencyGroups).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ConcurrencyGroups).field_0x48 - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->ConcurrencyGroups + (longlong)iVar6 * 0x18;
        if (*(uint *)(*(longlong *)&this->ConcurrencyGroups + (longlong)iVar6 * 0x18) == param_2) {
          if ((lVar1 != 0) &&
             (pFVar7 = *(FConcurrencyGroup **)(lVar1 + 8), pFVar7 != (FConcurrencyGroup *)0x0)) {
            QueryPerformanceCounter(&local_res8);
            fVar2 = (pFVar7->Settings).RetriggerTime;
            if ((0.0 < fVar2) &&
               ((float)((double)(ulonglong)local_res8.QuadPart *
                       FGenericPlatformTime::SecondsPerCycle64) - pFVar7->LastTimePlayed < fVar2)) {
              if ((byte)LogAudioConcurrency._0_1_ < 7) {
                return (FConcurrencyGroup *)0x0;
              }
              UE::Logging::Private::BasicLog<7>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
              return (FConcurrencyGroup *)0x0;
            }
            uVar3 = (pFVar7->Settings).ResolutionRule.Value;
            pFVar7->LastTimePlayed =
                 (float)((double)(ulonglong)local_res8.QuadPart *
                        FGenericPlatformTime::SecondsPerCycle64);
            switch(uVar3) {
            default:
              if ((pFVar7->Settings).bEnableMaxCountPlatformScaling == '\0') {
                iVar6 = (pFVar7->Settings).MaxCount;
              }
              else {
                iVar6 = (pFVar7->Settings).PlatformMaxCount.Default;
              }
              if (iVar6 < 1) {
                iVar6 = 0x10;
              }
              if (iVar6 <= (pFVar7->ActiveSounds).ArrayNum) {
                local_58 = GetEvictableSound(this,param_1,pFVar7,param_4);
                if (local_58 == (FActiveSound *)0x0) {
                  return (FConcurrencyGroup *)0x0;
                }
                TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FActiveSound_*_const_&>(param_3,&local_58);
              }
              break;
            case '\x04':
            case '\x05':
            case '\x06':
              break;
            }
            return pFVar7;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  if (2 < (byte)LogAudioConcurrency._0_1_) {
    FActiveSound::GetOwnerName(param_1,&local_40);
    this_00 = (param_1->Sound).field0_0x0.DebugPtr;
    if (this_00 != (USoundBase *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_50,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
    if ((this_00 != (USoundBase *)0x0) &&
       (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return (FConcurrencyGroup *)0x0;
}

// CreateAndEvictActiveSounds @ 1486abfc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FActiveSound * __thiscall
FSoundConcurrencyManager::CreateAndEvictActiveSounds
          (FSoundConcurrencyManager *this,FActiveSound *param_1,
          TArray<FConcurrencyGroup_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FAudioDevice *pFVar2;
  FConcurrencyGroup *this_00;
  undefined1 *puVar3;
  USoundBase *pUVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float _X;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  FActiveSound *pFVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  byte bVar18;
  uint unaff_EDI;
  uint uVar19;
  float fVar20;
  float fVar21;
  float _X_00;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176 [2];
  float local_174;
  uint local_170;
  uint local_16c;
  FActiveSound *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FAudioVirtualLoop local_118 [3];
  
  pFVar12 = ::operator_new(0x990);
  if (pFVar12 == (FActiveSound *)0x0) {
    pFVar12 = (FActiveSound *)0x0;
  }
  else {
    pFVar12 = FActiveSound::FActiveSound(pFVar12,param_1);
  }
  pFVar2 = this->AudioDevice;
  pFVar12->AudioDevice = pFVar2;
  local_168 = pFVar12;
  if ((this->AudioDevice != pFVar2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AudioDevice == ActiveSound->AudioDevice",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                          ,0x38a,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FActiveSound *)(*pcVar5)();
    return pFVar12;
  }
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  _X = __real_41200000;
  fVar8 = __real_3f800000;
  fVar7 = __real_3d4ccccd;
  fVar6 = __real_322bcc77;
  local_16c = param_2->ArrayNum;
  uVar13 = (ulonglong)(int)local_16c;
  local_170 = unaff_EDI & 0xffffff00;
  pFVar16 = (param_2->AllocatorInstance).Data;
  local_158 = pFVar16 + uVar13 * 8;
  uVar19 = local_170;
  do {
    pFVar17 = local_158;
    bVar18 = (byte)uVar19;
    local_160 = pFVar16;
    if (param_2->ArrayNum != (int)uVar13) {
      local_178 = 0;
      `TCheckedPointerIterator<FConcurrencyGroup_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_178);
    }
    if (pFVar16 == pFVar17) {
      if (bVar18 == 0) {
        pFVar12->VolumeConcurrency = -1.0;
      }
      pFVar17 = (param_3->AllocatorInstance).Data;
      iVar1 = param_3->ArrayNum;
      pFVar16 = pFVar17 + (longlong)iVar1 * 8;
      while( true ) {
        if (param_3->ArrayNum != iVar1) {
          local_176[0] = 0;
          `TCheckedPointerIterator<FActiveSound_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_176);
        }
        if (pFVar17 == pFVar16) {
          return local_168;
        }
        pFVar12 = *(FActiveSound **)pFVar17;
        if ((pFVar12 == (FActiveSound *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SoundToEvict",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                                ,0x3c3,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FActiveSound *)(*pcVar5)();
          return pFVar12;
        }
        if ((this->AudioDevice != pFVar12->AudioDevice) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("AudioDevice == SoundToEvict->AudioDevice",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                                ,0x3c4,L""), bVar10)) break;
        RemoveActiveSound(this,pFVar12);
        if ((pFVar12->FadeOut != Concurrency) &&
           (bVar10 = FAudioDevice::IsPendingStop(this->AudioDevice,pFVar12), !bVar10)) {
          pUVar4 = (pFVar12->Sound).field0_0x0.DebugPtr;
          if ((pUVar4 != (USoundBase *)0x0) && (6 < (byte)LogAudioConcurrency._0_1_)) {
            local_150 = (FName)pUVar4->_padding_;
            ::FName::ToString(&local_150,&local_140);
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
          }
          if ((pFVar12->AudioDevice == (FAudioDevice *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ActiveSound.AudioDevice",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                                  ,0x42c,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pFVar12 = (FActiveSound *)(*pcVar5)();
            return pFVar12;
          }
          local_174 = 0.0;
          bVar10 = FActiveSound::GetConcurrencyFadeDuration(pFVar12,&local_174);
          if (bVar10) {
            FAudioDevice::UnlinkActiveSoundFromComponent(pFVar12->AudioDevice,pFVar12);
          }
          else {
            Audio::Trace::EventLog::SendActiveSoundEvent
                      (pFVar12,&Audio::Trace::EventLog::ID::StopRequestConcurrency);
            FAudioDevice::AddSoundToStop(pFVar12->AudioDevice,pFVar12);
          }
          FAudioVirtualLoop::FAudioVirtualLoop(local_118);
          bVar11 = FAudioVirtualLoop::Virtualize(pFVar12,false,local_118);
          if (bVar11) {
            FActiveSound::ClearAudioComponent(pFVar12);
            pUVar4 = (pFVar12->Sound).field0_0x0.DebugPtr;
            if ((pUVar4 != (USoundBase *)0x0) && (5 < (byte)LogAudioConcurrency._0_1_)) {
              local_148 = (FName)pUVar4->_padding_;
              ::FName::ToString(&local_148,&local_130);
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
              if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_130.Data.AllocatorInstance.Data);
              }
            }
            FAudioDevice::AddVirtualLoop(pFVar12->AudioDevice,local_118);
          }
          if (bVar10) {
            pFVar12->FadeOut = Concurrency;
            Audio::FVolumeFader::StartFade(&pFVar12->ComponentVolumeFader,0.0,local_174,Logarithmic)
            ;
            Audio::FVolumeFader::SetActiveDuration(&pFVar12->ComponentVolumeFader,local_174);
          }
          DestructItems<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,int>
                    ((TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)
                     local_118[0].WaveInstanceData.Pairs.AllocatorInstance.Data,
                     local_118[0].WaveInstanceData.Pairs.ArrayNum);
          if ((TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)
              local_118[0].WaveInstanceData.Pairs.AllocatorInstance.Data !=
              (TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)0x0) {
            FMemory::Free(local_118[0].WaveInstanceData.Pairs.AllocatorInstance.Data);
          }
          if (local_118[0].EffectivePlaybackTimes.Pairs.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118[0].EffectivePlaybackTimes.Pairs.AllocatorInstance.Data);
          }
          DestructItems<Audio::FModulationDestination,int>
                    ((FModulationDestination *)
                     local_118[0].VolumeConcurrencyDestinations.AllocatorInstance.Data,
                     local_118[0].VolumeConcurrencyDestinations.ArrayNum);
          if (local_118[0].VolumeConcurrencyDestinations.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118[0].VolumeConcurrencyDestinations.AllocatorInstance.Data);
          }
        }
        pFVar17 = pFVar17 + 8;
      }
      pcVar5 = (code *)swi(3);
      pFVar12 = (FActiveSound *)(*pcVar5)();
      return pFVar12;
    }
    this_00 = *(FConcurrencyGroup **)pFVar16;
    if ((this_00 == (FConcurrencyGroup *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ConcurrencyGroup",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                            ,0x38f,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FActiveSound *)(*pcVar5)();
      return pFVar12;
    }
    if ((this_00->Settings).VolumeScaleMode == Default) {
      _X_00 = (this_00->Settings).VolumeScale;
      if (fVar8 <= _X_00) {
        _X_00 = fVar8;
      }
      if (_X_00 <= 0.0) {
        _X_00 = 0.0;
      }
      if (fVar6 < (float)((uint)(_X_00 - fVar8) & uVar9)) {
        if ((_X_00 < 0.0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Volume >= 0.0f",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                                ,0x397,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FActiveSound *)(*pcVar5)();
          return pFVar12;
        }
        iVar1 = (this_00->ActiveSounds).ArrayNum;
        pFVar17 = (this_00->ActiveSounds).AllocatorInstance.Data;
        pFVar16 = pFVar17 + (longlong)iVar1 * 8;
        while( true ) {
          if ((this_00->ActiveSounds).ArrayNum != iVar1) {
            local_177 = 0;
            `TCheckedPointerIterator<FActiveSound_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_177);
          }
          if (pFVar17 == pFVar16) break;
          pFVar12 = *(FActiveSound **)pFVar17;
          if ((pFVar12 == (FActiveSound *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OtherSound",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                                  ,0x39f,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pFVar12 = (FActiveSound *)(*pcVar5)();
            return pFVar12;
          }
          if (*(int *)&(pFVar12->ConcurrencyGroupData).field_0x8 !=
              *(int *)&(pFVar12->ConcurrencyGroupData).field_0x34) {
            puVar3 = *(undefined1 **)&(pFVar12->ConcurrencyGroupData).field_0x40;
            puVar14 = &(pFVar12->ConcurrencyGroupData).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar14 = puVar3;
            }
            uVar19 = *(uint *)(puVar14 +
                              (ulonglong)
                              (*(int *)&(pFVar12->ConcurrencyGroupData).field_0x48 - 1U &
                              this_00->GroupID) * 4);
            if (uVar19 != 0xffffffff) {
              do {
                puVar15 = (uint *)((longlong)(int)uVar19 * 0x20 +
                                  *(longlong *)&pFVar12->ConcurrencyGroupData);
                if (*puVar15 == this_00->GroupID) {
                  if (puVar15 != (uint *)0x0) goto LAB_1486ac253;
                  goto LAB_1486ac22d;
                }
                uVar19 = puVar15[6];
              } while (uVar19 != 0xffffffff);
            }
          }
          puVar15 = (uint *)0x0;
LAB_1486ac22d:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pFVar12 = (FActiveSound *)(*pcVar5)();
            return pFVar12;
          }
LAB_1486ac253:
          fVar20 = powf(_X_00,(float)iVar1 - (float)(int)puVar15[1]);
          if ((this_00->Settings).bVolumeScaleCanRelease == '\0') {
LAB_1486ac2b3:
            SoundConcurrencyPrivate::SetSoundDataTarget
                      (pFVar12,(FConcurrencySoundData *)(puVar15 + 1),fVar20,
                       (this_00->Settings).VolumeScaleAttackTime);
          }
          else {
            fVar21 = powf(_X,(float)puVar15[4] * fVar7);
            if ((fVar21 < ConcurrencyMinVolumeScaleCVar) ||
               ((float)((uint)(fVar21 - ConcurrencyMinVolumeScaleCVar) & uVar9) <= fVar6)) {
              fVar21 = 0.0;
            }
            if (fVar20 <= fVar21) goto LAB_1486ac2b3;
          }
          pFVar17 = pFVar17 + 8;
        }
        bVar18 = (byte)local_170;
        pFVar16 = local_160;
        pFVar12 = local_168;
      }
    }
    uVar19 = (uint)bVar18;
    if ((this_00->Settings).ResolutionRule.Value == '\x05') {
      uVar19 = 1;
    }
    local_170 = uVar19;
    FConcurrencyGroup::AddActiveSound(this_00,pFVar12);
    uVar13 = (ulonglong)local_16c;
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// CreateNewActiveSound @ 1486adcf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FActiveSound * __thiscall
FSoundConcurrencyManager::CreateNewActiveSound
          (FSoundConcurrencyManager *this,FActiveSound *param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FActiveSound *pFVar4;
  ulonglong uVar5;
  FActiveSound *this_00;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>_> local_28;
  
  if ((param_1->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewActiveSound.GetSound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                       ,0x26b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FActiveSound *)(*pcVar1)();
      return pFVar4;
    }
  }
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FActiveSound *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FActiveSound *)0x0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FActiveSound::GetConcurrencyHandles(param_1,&local_28);
  iVar2 = local_28.ArrayNum;
  uVar5 = (ulonglong)local_28.ArrayNum;
  if (local_28.ArrayNum == 0) {
    this_00 = ::operator_new(0x990);
    if (this_00 == (FActiveSound *)0x0) {
      uRam00000000000001bc = 0;
      _DAT_00000060 = this->AudioDevice;
    }
    else {
      pFVar4 = FActiveSound::FActiveSound(this_00,param_1);
      pFVar4->PlaybackTimeNonVirtualized = 0.0;
      pFVar4->AudioDevice = this->AudioDevice;
    }
  }
  else {
    pFVar7 = local_28.AllocatorInstance.Data + uVar5 * 0x10;
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar2) {
        `TCheckedPointerIterator<FConcurrencyHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        uVar5 = local_28._8_8_ & 0xffffffff;
      }
      if (FVar6.Data == pFVar7) break;
      FVar6.Data = FVar6.Data + 0x10;
    }
    pFVar4 = EvaluateConcurrency(this,param_1,&local_28,param_2);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return pFVar4;
}

// CreateNewConcurrencyGroup @ 1486ade60

FConcurrencyGroup * __thiscall
FSoundConcurrencyManager::CreateNewConcurrencyGroup
          (FSoundConcurrencyManager *this,FConcurrencyHandle *param_1)

{
  longlong lVar1;
  FSoundConcurrencySettings *pFVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  EConcurrencyVolumeScaleMode EVar6;
  float fVar7;
  int iVar8;
  undefined1 *puVar9;
  uint local_res8 [4];
  LARGE_INTEGER local_res18;
  FConcurrencyGroup **local_res20;
  uint *local_28;
  FConcurrencyGroup ***local_20;
  
  ConcurrencyGroupIDs = ConcurrencyGroupIDs + 1;
  local_res8[0] = ConcurrencyGroupIDs;
  local_res20 = ::operator_new(0x40);
  if (local_res20 == (FConcurrencyGroup **)0x0) {
    local_res20 = (FConcurrencyGroup **)0x0;
  }
  else {
    *local_res20 = (FConcurrencyGroup *)0x0;
    local_res20[1] = (FConcurrencyGroup *)0x0;
    *(uint *)(local_res20 + 2) = local_res8[0];
    *(uint *)((longlong)local_res20 + 0x14) = param_1->ObjectID;
    pFVar2 = param_1->Settings;
    uVar4 = *(undefined4 *)&pFVar2->field_0x4;
    fVar5 = pFVar2->RetriggerTime;
    iVar8 = (pFVar2->PlatformMaxCount).Default;
    *(int *)(local_res20 + 3) = pFVar2->MaxCount;
    *(undefined4 *)((longlong)local_res20 + 0x1c) = uVar4;
    *(float *)(local_res20 + 4) = fVar5;
    *(int *)((longlong)local_res20 + 0x24) = iVar8;
    EVar6 = pFVar2->VolumeScaleMode;
    fVar5 = pFVar2->VolumeScaleAttackTime;
    fVar7 = pFVar2->VolumeScaleReleaseTime;
    *(float *)(local_res20 + 5) = pFVar2->VolumeScale;
    *(EConcurrencyVolumeScaleMode *)((longlong)local_res20 + 0x2c) = EVar6;
    *(float *)(local_res20 + 6) = fVar5;
    *(float *)((longlong)local_res20 + 0x34) = fVar7;
    *(float *)(local_res20 + 7) = pFVar2->VoiceStealReleaseTime;
    QueryPerformanceCounter(&local_res18);
    *(float *)((longlong)local_res20 + 0x3c) =
         (float)((double)(ulonglong)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle64);
  }
  local_28 = local_res8;
  local_20 = &local_res20;
  TSet<TTuple<unsigned_int,FConcurrencyGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencyGroup_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FConcurrencyGroup_*_&&>_>
            ((TSet<TTuple<unsigned_int,FConcurrencyGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencyGroup_*,0>,FDefaultSetAllocator>
              *)&this->ConcurrencyGroups,
             (TPairInitializer<unsigned_int_&,FConcurrencyGroup_*_&&> *)&local_res18.s,
             (bool *)&local_28);
  if (*(int *)&(this->ConcurrencyGroups).field_0x8 != *(int *)&(this->ConcurrencyGroups).field_0x34)
  {
    puVar9 = *(undefined1 **)&(this->ConcurrencyGroups).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ConcurrencyGroups).field_0x38;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ConcurrencyGroups).field_0x48 - 1U & local_res8[0]) *
                              4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->ConcurrencyGroups).field_0x0;
      do {
        lVar1 = lVar3 + (longlong)iVar8 * 0x18;
        if (*(uint *)(lVar3 + (longlong)iVar8 * 0x18) == local_res8[0]) {
          if (lVar1 == 0) {
            return (FConcurrencyGroup *)0x0;
          }
          return *(FConcurrencyGroup **)(lVar1 + 8);
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  return (FConcurrencyGroup *)0x0;
}

// CreateNewGroupsFromHandles @ 1486adfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSoundConcurrencyManager::CreateNewGroupsFromHandles
          (FSoundConcurrencyManager *this,FActiveSound *param_1,
          TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FConcurrencyGroup_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  USoundBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FConcurrencyGroup *pFVar7;
  uint *puVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  ForElementType<FSetElementId> this_00;
  FConcurrencyHandle *pFVar13;
  FConcurrencyHandle *pFVar14;
  undefined1 auStackY_268 [32];
  undefined1 local_218 [4];
  uint local_214;
  FConcurrencyGroup *local_210;
  FConcurrencyGroup *local_208;
  FConcurrencyGroup *local_200;
  FConcurrencyGroup *local_1f8;
  FConcurrencyGroup *local_1f0;
  FConcurrencyGroup *local_1e8;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8 [2];
  uint local_1d0 [2];
  uint local_1c8 [2];
  uint local_1c0;
  uint local_1bc;
  uint local_1b8 [2];
  uint local_1b0 [2];
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  undefined1 local_19c [8];
  undefined1 local_194 [8];
  undefined1 local_18c [8];
  undefined1 local_184 [12];
  TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>_> *local_178;
  uint *local_170;
  uint *local_168;
  uint *local_160;
  uint *local_158;
  uint *local_150;
  uint *local_148;
  uint *local_140;
  undefined1 *local_138;
  uint *local_130;
  uint *local_128;
  uint *local_120;
  uint *local_118;
  uint *local_110;
  undefined1 *local_108;
  uint *local_100;
  uint *local_f8;
  undefined1 local_e8 [32];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  ForElementType<FSetElementId> local_98;
  undefined8 local_90;
  ForElementType<FSetElementId> local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pFVar14 = (FConcurrencyHandle *)(param_2->AllocatorInstance).Data;
  local_1a0 = param_2->ArrayNum;
  uVar9 = (ulonglong)(int)local_1a0;
  pFVar13 = pFVar14 + uVar9;
  this_00 = (ForElementType<FSetElementId>)0x0;
  local_178 = param_2;
LAB_1486ae01a:
  do {
    while( true ) {
      while( true ) {
        if (local_178->ArrayNum != (int)uVar9) {
          local_218[0] = 0;
          `TCheckedPointerIterator<FConcurrencyHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_218);
        }
        if (pFVar14 == pFVar13) {
          return;
        }
        if ((pFVar14->Settings->bLimitToOwner == 0) || (param_1->OwnerID == 0)) {
          iVar5 = this_00._0_4_;
          if (pFVar14->ObjectID == 0) {
            iVar5 = 3;
          }
        }
        else if ((pFVar14->bIsOverride == false) ||
                ((param_1->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = 2;
        }
        if (iVar5 != 0) break;
        if (*(int *)&(this->ConcurrencyMap).field_0x8 != *(int *)&(this->ConcurrencyMap).field_0x34)
        {
          puVar1 = *(undefined1 **)&(this->ConcurrencyMap).field_0x40;
          puVar11 = &(this->ConcurrencyMap).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar11 = puVar1;
          }
          iVar5 = *(int *)(puVar11 +
                          (ulonglong)
                          (*(int *)&(this->ConcurrencyMap).field_0x48 - 1U & pFVar14->ObjectID) * 4)
          ;
          if (iVar5 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this->ConcurrencyMap + (longlong)iVar5 * 0x10) ==
                  pFVar14->ObjectID) goto LAB_1486ae550;
              iVar5 = *(int *)(*(longlong *)&this->ConcurrencyMap + 8 + (longlong)iVar5 * 0x10);
            } while (iVar5 != -1);
          }
        }
        pFVar7 = CreateNewConcurrencyGroup(this,pFVar14);
        local_1a4 = pFVar7->GroupID;
        local_f8 = &local_1a4;
        local_100 = &pFVar14->ObjectID;
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                  ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                    *)&this->ConcurrencyMap,
                   (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(local_19c + 4),
                   (bool *)&local_100);
        pFVar10 = (param_3->AllocatorInstance).Data;
        local_1e8 = pFVar7;
        if ((pFVar10 <= (FScriptContainerElement *)&local_1e8) &&
           ((FScriptContainerElement *)&local_1e8 < pFVar10 + (longlong)param_3->ArrayMax * 8)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = param_3->ArrayNum;
        if (iVar5 == param_3->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        pFVar14 = pFVar14 + 1;
        param_3->ArrayNum = iVar5 + 1;
        *(FConcurrencyGroup **)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_1e8
        ;
        uVar9 = (ulonglong)local_1a0;
      }
      if (iVar5 != 1) break;
      local_1a8 = param_1->OwnerID;
      if (*(int *)&(this->OwnerConcurrencyMap).field_0x8 !=
          *(int *)&(this->OwnerConcurrencyMap).field_0x34) {
        puVar1 = *(undefined1 **)&(this->OwnerConcurrencyMap).field_0x40;
        puVar11 = &(this->OwnerConcurrencyMap).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar11 = puVar1;
        }
        uVar6 = *(uint *)(puVar11 +
                         (ulonglong)
                         (*(int *)&(this->OwnerConcurrencyMap).field_0x48 - 1U & local_1a8) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar8 = (uint *)((longlong)(int)uVar6 * 0x60 + *(longlong *)&this->OwnerConcurrencyMap)
            ;
            if (*puVar8 == local_1a8) {
              this_00 = (ForElementType<FSetElementId>)(puVar8 + 2);
              if (puVar8 == (uint *)0x0) {
                this_00 = (ForElementType<FSetElementId>)0x0;
              }
              if (this_00 != (ForElementType<FSetElementId>)0x0) {
                if (*(int *)((longlong)this_00 + 8) == *(int *)((longlong)this_00 + 0x34))
                goto LAB_1486ae828;
                FVar12 = (ForElementType<FSetElementId>)((longlong)this_00 + 0x38);
                if (*(ForElementType<FSetElementId> *)((longlong)this_00 + 0x40) !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar12 = *(ForElementType<FSetElementId> *)((longlong)this_00 + 0x40);
                }
                iVar5 = *(int *)((longlong)FVar12 +
                                (ulonglong)
                                (*(int *)((longlong)this_00 + 0x48) - 1U & pFVar14->ObjectID) * 4);
                if (iVar5 == -1) goto LAB_1486ae828;
                goto LAB_1486ae810;
              }
              break;
            }
            uVar6 = puVar8[0x16];
          } while (uVar6 != 0xffffffff);
        }
      }
      pFVar7 = CreateNewConcurrencyGroup(this,pFVar14);
      local_e8._8_8_ = 0;
      local_1b0[0] = pFVar7->GroupID;
      local_120 = local_1b8;
      local_1b8[0] = pFVar14->ObjectID;
      local_118 = local_1b0;
      iVar5 = this_00._0_4_;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_e8._0_8_ = this_00;
      local_c8 = this_00;
      local_c0 = iVar5;
      local_b4 = iVar5;
      local_a8 = this_00;
      local_a0 = iVar5;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_e8,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)(local_184 + 4),
                 (bool *)&local_120);
      local_110 = &local_1a8;
      local_108 = local_e8;
      TSet<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FOwnerConcurrencyMapEntry,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FOwnerConcurrencyMapEntry_&&>_>
                ((TSet<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FOwnerConcurrencyMapEntry,0>,FDefaultSetAllocator>
                  *)&this->OwnerConcurrencyMap,
                 (TPairInitializer<unsigned_int_const_&,FOwnerConcurrencyMapEntry_&&> *)local_19c,
                 (bool *)&local_110);
      local_a0 = iVar5;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      local_e8._8_4_ = iVar5;
      if (local_e8._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_e8,iVar5,(int *)(local_e8 + 0xc));
      }
      local_b8 = 0xffffffff;
      local_c0 = iVar5;
      local_b4 = iVar5;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      if (local_c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c8);
      }
      if ((ForElementType<FSetElementId>)local_e8._0_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      local_1f0 = pFVar7;
      if ((pFVar10 <= (FScriptContainerElement *)&local_1f0) &&
         ((FScriptContainerElement *)&local_1f0 < pFVar10 + (longlong)param_3->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      pFVar14 = pFVar14 + 1;
      param_3->ArrayNum = iVar5 + 1;
      *(FConcurrencyGroup **)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_1f0;
      uVar9 = (ulonglong)local_1a0;
    }
    if (iVar5 == 2) goto LAB_1486ae1f1;
    if (iVar5 != 3) goto LAB_1486ae550;
    local_1e0 = *(uint *)((longlong)&((param_1->Sound).field0_0x0.DebugPtr)->_padding_ + 4);
    if (*(int *)&(this->SoundObjectToConcurrencyGroup).field_0x8 !=
        *(int *)&(this->SoundObjectToConcurrencyGroup).field_0x34) {
      puVar1 = *(undefined1 **)&(this->SoundObjectToConcurrencyGroup).field_0x40;
      puVar11 = &(this->SoundObjectToConcurrencyGroup).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = *(int *)(puVar11 +
                      (ulonglong)
                      (*(int *)&(this->SoundObjectToConcurrencyGroup).field_0x48 - 1U & local_1e0) *
                      4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->SoundObjectToConcurrencyGroup + (longlong)iVar5 * 0x10)
              == local_1e0) goto LAB_1486ae550;
          iVar5 = *(int *)(*(longlong *)&this->SoundObjectToConcurrencyGroup + 8 +
                          (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    pFVar7 = CreateNewConcurrencyGroup(this,pFVar14);
    local_1dc = pFVar7->GroupID;
    local_170 = &local_1e0;
    local_168 = &local_1dc;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->SoundObjectToConcurrencyGroup,
               (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_194,
               (bool *)&local_170);
    pFVar10 = (param_3->AllocatorInstance).Data;
    local_210 = pFVar7;
    if ((pFVar10 <= (FScriptContainerElement *)&local_210) &&
       ((FScriptContainerElement *)&local_210 < pFVar10 + (longlong)param_3->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    pFVar14 = pFVar14 + 1;
    param_3->ArrayNum = iVar5 + 1;
    *(FConcurrencyGroup **)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_210;
    uVar9 = (ulonglong)local_1a0;
  } while( true );
  while (iVar5 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar5 * 0x10), iVar5 != -1) {
LAB_1486ae810:
    if (*(uint *)(*(longlong *)this_00 + (longlong)iVar5 * 0x10) == pFVar14->ObjectID)
    goto LAB_1486ae54e;
  }
LAB_1486ae828:
  pFVar7 = CreateNewConcurrencyGroup(this,pFVar14);
  local_1bc = pFVar7->GroupID;
  local_128 = &local_1bc;
  local_130 = &pFVar14->ObjectID;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_184,
             (bool *)&local_130);
  pFVar10 = (param_3->AllocatorInstance).Data;
  local_1f8 = pFVar7;
  if ((pFVar10 <= (FScriptContainerElement *)&local_1f8) &&
     ((FScriptContainerElement *)&local_1f8 < pFVar10 + (longlong)param_3->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_3->ArrayNum;
  if (iVar5 == param_3->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar5 + 1;
  pFVar10 = (param_3->AllocatorInstance).Data;
  pFVar7 = local_1f8;
  goto LAB_1486ae54a;
LAB_1486ae1f1:
  pUVar2 = (param_1->Sound).field0_0x0.DebugPtr;
  if (pUVar2 == (USoundBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                       ,0x243,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_214 = *(uint *)((longlong)&pUVar2->_padding_ + 4);
  local_1c0 = param_1->OwnerID;
  if (*(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x8 !=
      *(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x34) {
    puVar1 = *(undefined1 **)&(this->OwnerPerSoundConcurrencyMap).field_0x40;
    puVar11 = &(this->OwnerPerSoundConcurrencyMap).field_0x38;
    if (puVar1 != (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = *(uint *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x48 - 1U & local_1c0) * 4)
    ;
    if (uVar6 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar6 * 0x60 +
                         *(longlong *)&this->OwnerPerSoundConcurrencyMap);
        if (*puVar8 == local_1c0) {
          this_00 = (ForElementType<FSetElementId>)(puVar8 + 2);
          if (puVar8 == (uint *)0x0) {
            this_00 = (ForElementType<FSetElementId>)0x0;
          }
          if (this_00 != (ForElementType<FSetElementId>)0x0) {
            if (*(int *)((longlong)this_00 + 8) == *(int *)((longlong)this_00 + 0x34))
            goto LAB_1486ae478;
            FVar12 = (ForElementType<FSetElementId>)((longlong)this_00 + 0x38);
            if (*(ForElementType<FSetElementId> *)((longlong)this_00 + 0x40) !=
                (ForElementType<FSetElementId>)0x0) {
              FVar12 = *(ForElementType<FSetElementId> *)((longlong)this_00 + 0x40);
            }
            iVar5 = *(int *)((longlong)FVar12 +
                            (ulonglong)(*(int *)((longlong)this_00 + 0x48) - 1U & local_214) * 4);
            if (iVar5 == -1) goto LAB_1486ae478;
            goto LAB_1486ae460;
          }
          break;
        }
        uVar6 = puVar8[0x16];
      } while (uVar6 != 0xffffffff);
    }
  }
  pFVar7 = CreateNewConcurrencyGroup(this,pFVar14);
  local_90 = 0;
  local_1c8[0] = pFVar7->GroupID;
  local_150 = local_1d0;
  local_148 = local_1c8;
  local_1d0[0] = local_214;
  iVar5 = this_00._0_4_;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_98 = this_00;
  local_78 = this_00;
  local_70 = iVar5;
  local_64 = iVar5;
  local_58 = this_00;
  local_50 = iVar5;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&local_98,(TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)local_18c,
             (bool *)&local_150);
  local_140 = &local_1c0;
  local_138 = (undefined1 *)&local_98;
  TSet<TTuple<unsigned_int,FSoundInstanceEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FSoundInstanceEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FSoundInstanceEntry_&&>_>
            ((TSet<TTuple<unsigned_int,FSoundInstanceEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FSoundInstanceEntry,0>,FDefaultSetAllocator>
              *)&this->OwnerPerSoundConcurrencyMap,
             (TPairInitializer<unsigned_int_const_&,FSoundInstanceEntry_&&> *)(local_18c + 4),
             (bool *)&local_140);
  local_50 = iVar5;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  pFVar10 = (param_3->AllocatorInstance).Data;
  local_200 = pFVar7;
  if ((pFVar10 <= (FScriptContainerElement *)&local_200) &&
     ((FScriptContainerElement *)&local_200 < pFVar10 + (longlong)param_3->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_3->ArrayNum;
  if (iVar5 == param_3->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  pFVar14 = pFVar14 + 1;
  param_3->ArrayNum = iVar5 + 1;
  *(FConcurrencyGroup **)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_200;
  uVar9 = (ulonglong)local_1a0;
  goto LAB_1486ae01a;
  while (iVar5 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar5 * 0x10), iVar5 != -1) {
LAB_1486ae460:
    if (*(uint *)(*(longlong *)this_00 + (longlong)iVar5 * 0x10) == local_214) goto LAB_1486ae54e;
  }
LAB_1486ae478:
  pFVar7 = CreateNewConcurrencyGroup(this,pFVar14);
  local_1d8[0] = pFVar7->GroupID;
  local_160 = &local_214;
  local_158 = local_1d8;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(local_194 + 4),
             (bool *)&local_160);
  pFVar10 = (param_3->AllocatorInstance).Data;
  local_208 = pFVar7;
  if ((pFVar10 <= (FScriptContainerElement *)&local_208) &&
     ((FScriptContainerElement *)&local_208 < pFVar10 + (longlong)param_3->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_3->ArrayNum;
  if (iVar5 == param_3->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar5 + 1;
  pFVar10 = (param_3->AllocatorInstance).Data;
  pFVar7 = local_208;
LAB_1486ae54a:
  *(FConcurrencyGroup **)(pFVar10 + (longlong)iVar5 * 8) = pFVar7;
LAB_1486ae54e:
  this_00 = (ForElementType<FSetElementId>)0x0;
LAB_1486ae550:
  pFVar14 = pFVar14 + 1;
  uVar9 = (ulonglong)local_1a0;
  goto LAB_1486ae01a;
}

// EvaluateConcurrency @ 1486b2d10

FActiveSound * __thiscall
FSoundConcurrencyManager::EvaluateConcurrency
          (FSoundConcurrencyManager *this,FActiveSound *param_1,
          TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  USoundBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FActiveSound *pFVar9;
  ulonglong uVar10;
  FActiveSound *pFVar11;
  uint *puVar12;
  undefined1 *puVar13;
  FName *pFVar14;
  FActiveSound *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res10 [8];
  TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>_> *local_res18;
  FConcurrencyGroup *local_78;
  FConcurrencyGroup *local_70;
  FConcurrencyGroup *local_68;
  FConcurrencyGroup *local_60;
  TArray<FConcurrencyGroup_*,TSizedDefaultAllocator<32>_> local_58;
  TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> local_48;
  
  local_res18 = param_2;
  if (((param_1->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewActiveSound.GetSound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x334,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FActiveSound *)(*pcVar4)();
    return pFVar9;
  }
  uVar1 = param_2->ArrayNum;
  uVar10 = (ulonglong)(int)uVar1;
  pFVar9 = (FActiveSound *)0x0;
  pFVar17 = (param_2->AllocatorInstance).Data;
  pFVar16 = pFVar17 + uVar10 * 0x10;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
LAB_1486b2d96:
  if (param_2->ArrayNum != (int)uVar10) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FConcurrencyHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (pFVar17 == pFVar16) {
    CreateNewGroupsFromHandles(this,param_1,param_2,&local_58);
    pFVar11 = CreateAndEvictActiveSounds(this,param_1,&local_58,&local_48);
LAB_1486b349b:
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return pFVar11;
  }
  iVar7 = 0;
  if (((*(byte *)(*(longlong *)pFVar17 + 4) & 1) == 0) || (param_1->OwnerID == 0)) {
    if (*(int *)(pFVar17 + 8) == 0) {
      iVar7 = 3;
    }
  }
  else if ((pFVar17[0xc] == (FScriptContainerElement)0x0) ||
          ((param_1->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0)) {
    iVar7 = 1;
  }
  else {
    iVar7 = 2;
  }
  if (iVar7 == 0) {
    if (*(int *)&(this->ConcurrencyMap).field_0x8 == *(int *)&(this->ConcurrencyMap).field_0x34)
    goto LAB_1486b307f;
    puVar2 = *(undefined1 **)&(this->ConcurrencyMap).field_0x40;
    puVar13 = &(this->ConcurrencyMap).field_0x38;
    if (puVar2 != (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = *(uint *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->ConcurrencyMap).field_0x48 - 1U & *(uint *)(pFVar17 + 8)) * 4)
    ;
    if (uVar8 == 0xffffffff) goto LAB_1486b307f;
    do {
      puVar12 = (uint *)((longlong)(int)uVar8 * 0x10 + *(longlong *)&this->ConcurrencyMap);
      if (*puVar12 == *(uint *)(pFVar17 + 8)) {
        pFVar11 = (FActiveSound *)(puVar12 + 1);
        if (puVar12 == (uint *)0x0) {
          pFVar11 = pFVar9;
        }
        if (pFVar11 == (FActiveSound *)0x0) goto LAB_1486b307f;
        local_60 = CanPlaySound(this,param_1,*(uint *)pFVar11,&local_48,param_3);
        pFVar11 = (FActiveSound *)0x0;
        if (local_60 == (FConcurrencyGroup *)0x0) goto LAB_1486b349b;
        if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_60) &&
            ((FScriptContainerElement *)&local_60 <
             local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FActiveSound *)(*pcVar4)();
          return pFVar9;
        }
        iVar7 = local_58.ArrayNum;
        if (local_58.ArrayNum == local_58.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
        }
        pFVar17 = pFVar17 + 0x10;
        local_58.ArrayNum = iVar7 + 1;
        *(FConcurrencyGroup **)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_60;
        uVar10 = (ulonglong)uVar1;
        goto LAB_1486b2d96;
      }
      uVar8 = puVar12[2];
    } while (uVar8 != 0xffffffff);
    uVar10 = (ulonglong)uVar1;
    pFVar17 = pFVar17 + 0x10;
    goto LAB_1486b2d96;
  }
  pFVar11 = pFVar9;
  if (iVar7 == 1) {
    uVar8 = param_1->OwnerID;
    if (*(int *)&(this->OwnerConcurrencyMap).field_0x8 !=
        *(int *)&(this->OwnerConcurrencyMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->OwnerConcurrencyMap).field_0x40;
      puVar13 = &(this->OwnerConcurrencyMap).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar13 = puVar2;
      }
      uVar6 = *(uint *)(puVar13 +
                       (ulonglong)(*(int *)&(this->OwnerConcurrencyMap).field_0x48 - 1U & uVar8) * 4
                       );
      if (uVar6 != 0xffffffff) {
        do {
          puVar12 = (uint *)((longlong)(int)uVar6 * 0x60 + *(longlong *)&this->OwnerConcurrencyMap);
          if (*puVar12 == uVar8) {
            pFVar15 = (FActiveSound *)(puVar12 + 2);
            if (puVar12 == (uint *)0x0) {
              pFVar15 = pFVar9;
            }
            if ((pFVar15 == (FActiveSound *)0x0) ||
               ((pFVar15->World).WeakPtr.ObjectIndex ==
                *(int *)((longlong)&pFVar15->AudioComponentID + 4))) goto LAB_1486b307f;
            pFVar14 = &pFVar15->AudioComponentUserID;
            if (*(FName **)&pFVar15->OwnerID != (FName *)0x0) {
              pFVar14 = *(FName **)&pFVar15->OwnerID;
            }
            uVar8 = (&pFVar14->ComparisonIndex)
                    [(pFVar15->AudioComponentName).Number - 1 & *(uint *)(pFVar17 + 8)].Value;
            if (uVar8 == 0xffffffff) goto LAB_1486b307f;
            goto LAB_1486b3230;
          }
          uVar6 = puVar12[0x16];
        } while (uVar6 != 0xffffffff);
        uVar10 = (ulonglong)uVar1;
        pFVar17 = pFVar17 + 0x10;
        goto LAB_1486b2d96;
      }
    }
  }
  else if (iVar7 == 2) {
    uVar8 = param_1->OwnerID;
    if (*(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x8 !=
        *(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->OwnerPerSoundConcurrencyMap).field_0x40;
      puVar13 = &(this->OwnerPerSoundConcurrencyMap).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar13 = puVar2;
      }
      uVar6 = *(uint *)(puVar13 +
                       (ulonglong)
                       (*(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x48 - 1U & uVar8) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar12 = (uint *)((longlong)(int)uVar6 * 0x60 +
                            *(longlong *)&this->OwnerPerSoundConcurrencyMap);
          if (*puVar12 == uVar8) {
            pFVar15 = (FActiveSound *)(puVar12 + 2);
            if (puVar12 == (uint *)0x0) {
              pFVar15 = pFVar9;
            }
            param_2 = local_res18;
            if (pFVar15 == (FActiveSound *)0x0) goto LAB_1486b307f;
            pUVar3 = (param_1->Sound).field0_0x0.DebugPtr;
            if ((pUVar3 == (USoundBase *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Sound",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                                   ,0x362,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FActiveSound *)(*pcVar4)();
              return pFVar9;
            }
            uVar8 = *(uint *)((longlong)&pUVar3->_padding_ + 4);
            param_2 = local_res18;
            if ((pFVar15->World).WeakPtr.ObjectIndex ==
                *(int *)((longlong)&pFVar15->AudioComponentID + 4)) goto LAB_1486b307f;
            pFVar14 = &pFVar15->AudioComponentUserID;
            if (*(FName **)&pFVar15->OwnerID != (FName *)0x0) {
              pFVar14 = *(FName **)&pFVar15->OwnerID;
            }
            uVar6 = (&pFVar14->ComparisonIndex)[(pFVar15->AudioComponentName).Number - 1 & uVar8].
                    Value;
            if (uVar6 == 0xffffffff) goto LAB_1486b307f;
            goto LAB_1486b3060;
          }
          uVar6 = puVar12[0x16];
        } while (uVar6 != 0xffffffff);
        uVar10 = (ulonglong)uVar1;
        pFVar17 = pFVar17 + 0x10;
        goto LAB_1486b2d96;
      }
    }
  }
  else if ((iVar7 == 3) &&
          (uVar8 = *(uint *)((longlong)&((param_1->Sound).field0_0x0.DebugPtr)->_padding_ + 4),
          *(int *)&(this->SoundObjectToConcurrencyGroup).field_0x8 !=
          *(int *)&(this->SoundObjectToConcurrencyGroup).field_0x34)) {
    puVar2 = *(undefined1 **)&(this->SoundObjectToConcurrencyGroup).field_0x40;
    puVar13 = &(this->SoundObjectToConcurrencyGroup).field_0x38;
    if (puVar2 != (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar6 = *(uint *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->SoundObjectToConcurrencyGroup).field_0x48 - 1U & uVar8) * 4);
    if (uVar6 == 0xffffffff) goto LAB_1486b307f;
    do {
      puVar12 = (uint *)((longlong)(int)uVar6 * 0x10 +
                        *(longlong *)&this->SoundObjectToConcurrencyGroup);
      if (*puVar12 == uVar8) {
        pFVar15 = (FActiveSound *)(puVar12 + 1);
        if (puVar12 == (uint *)0x0) {
          pFVar15 = pFVar9;
        }
        if (pFVar15 == (FActiveSound *)0x0) goto LAB_1486b307f;
        local_78 = CanPlaySound(this,param_1,*(uint *)pFVar15,&local_48,param_3);
        if (local_78 == (FConcurrencyGroup *)0x0) goto LAB_1486b349b;
        if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FActiveSound *)(*pcVar4)();
          return pFVar9;
        }
        iVar7 = local_58.ArrayNum;
        if (local_58.ArrayNum == local_58.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
        }
        pFVar17 = pFVar17 + 0x10;
        local_58.ArrayNum = iVar7 + 1;
        *(FConcurrencyGroup **)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_78;
        uVar10 = (ulonglong)uVar1;
        goto LAB_1486b2d96;
      }
      uVar6 = puVar12[2];
    } while (uVar6 != 0xffffffff);
    uVar10 = (ulonglong)uVar1;
    pFVar17 = pFVar17 + 0x10;
    goto LAB_1486b2d96;
  }
LAB_1486b307f:
  uVar10 = (ulonglong)uVar1;
  pFVar17 = pFVar17 + 0x10;
  goto LAB_1486b2d96;
  while (uVar8 = puVar12[2], uVar8 != 0xffffffff) {
LAB_1486b3230:
    puVar12 = (uint *)((longlong)(int)uVar8 * 0x10 + *(longlong *)pFVar15);
    if (*puVar12 == *(uint *)(pFVar17 + 8)) {
      pFVar15 = (FActiveSound *)(puVar12 + 1);
      if (puVar12 == (uint *)0x0) {
        pFVar15 = pFVar9;
      }
      if (pFVar15 == (FActiveSound *)0x0) goto LAB_1486b307f;
      local_68 = CanPlaySound(this,param_1,*(uint *)pFVar15,&local_48,param_3);
      if (local_68 == (FConcurrencyGroup *)0x0) goto LAB_1486b349b;
      if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FActiveSound *)(*pcVar4)();
        return pFVar9;
      }
      iVar7 = local_58.ArrayNum;
      if (local_58.ArrayNum == local_58.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
      }
      pFVar17 = pFVar17 + 0x10;
      local_58.ArrayNum = iVar7 + 1;
      *(FConcurrencyGroup **)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_68;
      uVar10 = (ulonglong)uVar1;
      goto LAB_1486b2d96;
    }
  }
  uVar10 = (ulonglong)uVar1;
  pFVar17 = pFVar17 + 0x10;
  goto LAB_1486b2d96;
  while (uVar6 = puVar12[2], uVar6 != 0xffffffff) {
LAB_1486b3060:
    puVar12 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)pFVar15);
    if (*puVar12 == uVar8) {
      pFVar15 = (FActiveSound *)(puVar12 + 1);
      if (puVar12 == (uint *)0x0) {
        pFVar15 = pFVar9;
      }
      if (pFVar15 != (FActiveSound *)0x0) {
        local_70 = CanPlaySound(this,param_1,*(uint *)pFVar15,&local_48,param_3);
        if (local_70 == (FConcurrencyGroup *)0x0) goto LAB_1486b349b;
        if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_70) &&
            ((FScriptContainerElement *)&local_70 <
             local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FActiveSound *)(*pcVar4)();
          return pFVar9;
        }
        iVar7 = local_58.ArrayNum;
        if (local_58.ArrayNum == local_58.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
        }
        pFVar17 = pFVar17 + 0x10;
        local_58.ArrayNum = iVar7 + 1;
        *(FConcurrencyGroup **)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_70;
        uVar10 = (ulonglong)uVar1;
        param_2 = local_res18;
        goto LAB_1486b2d96;
      }
      break;
    }
  }
  goto LAB_1486b307f;
}

// GetEvictableSound @ 1486be1f0

FActiveSound * __thiscall
FSoundConcurrencyManager::GetEvictableSound
          (FSoundConcurrencyManager *this,FActiveSound *param_1,FConcurrencyGroup *param_2,
          bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uchar uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FActiveSound *pFVar8;
  FScriptContainerElement *pFVar9;
  FActiveSound *pFVar10;
  float fVar11;
  undefined1 local_res18 [8];
  char local_res20;
  undefined1 local_98 [4];
  float local_94;
  float local_90 [2];
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [2];
  
  if ((param_2->Settings).bEnableMaxCountPlatformScaling == '\0') {
    iVar7 = (param_2->Settings).MaxCount;
  }
  else {
    iVar7 = (param_2->Settings).PlatformMaxCount.Default;
  }
  if (iVar7 < 1) {
    iVar7 = 0x10;
  }
  piVar1 = &(param_2->ActiveSounds).ArrayNum;
  local_res20 = param_3;
  if ((*piVar1 < iVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConcurrencyGroup.IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x2bd,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FActiveSound *)(*pcVar4)();
    return pFVar8;
  }
  uVar3 = (param_2->Settings).ResolutionRule.Value;
  switch(uVar3) {
  default:
    pFVar8 = (FActiveSound *)0x0;
    break;
  case '\x01':
    pFVar9 = (param_2->ActiveSounds).AllocatorInstance.Data;
    iVar7 = *piVar1;
    pFVar2 = pFVar9 + (longlong)iVar7 * 8;
    pFVar10 = (FActiveSound *)0x0;
    while( true ) {
      if (*piVar1 != iVar7) {
        `TCheckedPointerIterator<FActiveSound_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_98);
      }
      if (pFVar9 == pFVar2) break;
      if ((pFVar10 == (FActiveSound *)0x0) ||
         (pFVar10->PlaybackTime < (*(FActiveSound **)pFVar9)->PlaybackTime)) {
        pFVar10 = *(FActiveSound **)pFVar9;
      }
      pFVar9 = pFVar9 + 8;
    }
    if (((!param_3) || (pFVar10 == (FActiveSound *)0x0)) ||
       (pFVar8 = (FActiveSound *)0x0, param_1->PlaybackTime <= pFVar10->PlaybackTime)) {
      pFVar8 = pFVar10;
    }
    break;
  case '\x02':
  case '\x03':
    fVar11 = ConcurrencyMinDistanceDeltaCVar;
    if (ConcurrencyMinDistanceDeltaCVar <= 0.0) {
      fVar11 = 0.0;
    }
    if ((this->AudioDevice == (FAudioDevice *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDevice",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                           ,0x304,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FActiveSound *)(*pcVar4)();
      return pFVar8;
    }
    local_88._s_0.X = (param_1->Transform).Translation.XY.m128d_f64[0];
    local_88._s_0.Y = (param_1->Transform).Translation.XY.m128d_f64[1];
    local_88._s_0.Z = (param_1->Transform).Translation.ZW.m128d_f64[0];
    local_94 = 0.0;
    FAudioDevice::FindClosestListenerIndex
              (this->AudioDevice,(TVector<double> *)&local_88._s_0,&local_94,true);
    uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    pFVar9 = (param_2->ActiveSounds).AllocatorInstance.Data;
    pFVar8 = (FActiveSound *)0x0;
    iVar7 = *piVar1;
    pFVar2 = pFVar9 + (longlong)iVar7 * 8;
    while( true ) {
      if (*piVar1 != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FActiveSound_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar9 == pFVar2) break;
      pFVar10 = *(FActiveSound **)pFVar9;
      if ((pFVar10 == (FActiveSound *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActiveSound",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                             ,0x30d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FActiveSound *)(*pcVar4)();
        return pFVar8;
      }
      local_70[0]._0_8_ = (pFVar10->Transform).Translation.XY.m128d_f64[0];
      local_70[0]._8_8_ = (pFVar10->Transform).Translation.XY.m128d_f64[1];
      local_70[0]._16_8_ = (pFVar10->Transform).Translation.ZW.m128d_f64[0];
      FAudioDevice::FindClosestListenerIndex
                (this->AudioDevice,(TVector<double> *)&local_70[0]._s_0,local_90,true);
      if ((local_94 + fVar11 * fVar11 < local_90[0]) ||
         ((((uVar3 == '\x03' && ((float)((uint)(local_90[0] - local_94) & uVar5) <= fVar11 * fVar11)
            ) && ((pFVar8 == (FActiveSound *)0x0 || (pFVar8->PlaybackTime < pFVar10->PlaybackTime)))
           ) && ((local_res20 == '\0' || (param_1->PlaybackTime < pFVar10->PlaybackTime)))))) {
        local_94 = local_90[0];
        pFVar8 = pFVar10;
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return pFVar8;
}

// GetEvictableSoundStopFarthest @ 1486be4e0

FActiveSound * __thiscall
FSoundConcurrencyManager::GetEvictableSoundStopFarthest
          (FSoundConcurrencyManager *this,FActiveSound *param_1,FConcurrencyGroup *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FActiveSound *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FActiveSound *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  undefined1 local_res10 [8];
  uchar local_res18;
  float local_98;
  float local_94;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [2];
  
  local_res18 = (param_2->Settings).ResolutionRule.Value;
  fVar9 = ConcurrencyMinDistanceDeltaCVar;
  if (ConcurrencyMinDistanceDeltaCVar <= 0.0) {
    fVar9 = 0.0;
  }
  if (this->AudioDevice == (FAudioDevice *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                       ,0x304,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FActiveSound *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_90._s_0.X = (param_1->Transform).Translation.XY.m128d_f64[0];
  local_90._s_0.Y = (param_1->Transform).Translation.XY.m128d_f64[1];
  local_90._s_0.Z = (param_1->Transform).Translation.ZW.m128d_f64[0];
  local_98 = 0.0;
  FAudioDevice::FindClosestListenerIndex
            (this->AudioDevice,(TVector<double> *)&local_90._s_0,&local_98,true);
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pFVar8 = (param_2->ActiveSounds).AllocatorInstance.Data;
  pFVar7 = (FActiveSound *)0x0;
  iVar2 = (param_2->ActiveSounds).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_2->ActiveSounds).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FActiveSound_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar1) break;
    pFVar3 = *(FActiveSound **)pFVar8;
    if (pFVar3 == (FActiveSound *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveSound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x30d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FActiveSound *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_78[0]._0_8_ = (pFVar3->Transform).Translation.XY.m128d_f64[0];
    local_78[0]._8_8_ = (pFVar3->Transform).Translation.XY.m128d_f64[1];
    local_78[0]._16_8_ = (pFVar3->Transform).Translation.ZW.m128d_f64[0];
    FAudioDevice::FindClosestListenerIndex
              (this->AudioDevice,(TVector<double> *)&local_78[0]._s_0,&local_94,true);
    if ((local_98 + fVar9 * fVar9 < local_94) ||
       ((((local_res18 == '\x03' && ((float)((uint)(local_94 - local_98) & uVar5) <= fVar9 * fVar9))
         && ((pFVar7 == (FActiveSound *)0x0 || (pFVar7->PlaybackTime < pFVar3->PlaybackTime)))) &&
        ((!param_3 || (param_1->PlaybackTime < pFVar3->PlaybackTime)))))) {
      local_98 = local_94;
      pFVar7 = pFVar3;
    }
    pFVar8 = pFVar8 + 8;
  }
  return pFVar7;
}

// GetEvictableSoundStopOldest @ 1486be6e0

FActiveSound * __thiscall
FSoundConcurrencyManager::GetEvictableSoundStopOldest
          (FSoundConcurrencyManager *this,FActiveSound *param_1,FConcurrencyGroup *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FActiveSound *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res20 [8];
  
  pFVar4 = (param_2->ActiveSounds).AllocatorInstance.Data;
  iVar2 = (param_2->ActiveSounds).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  pFVar3 = (FActiveSound *)0x0;
  while( true ) {
    if ((param_2->ActiveSounds).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FActiveSound_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar4 == pFVar1) break;
    if ((pFVar3 == (FActiveSound *)0x0) ||
       (pFVar3->PlaybackTime < (*(FActiveSound **)pFVar4)->PlaybackTime)) {
      pFVar3 = *(FActiveSound **)pFVar4;
    }
    pFVar4 = pFVar4 + 8;
  }
  if (((param_3) && (pFVar3 != (FActiveSound *)0x0)) &&
     (pFVar3->PlaybackTime < param_1->PlaybackTime)) {
    pFVar3 = (FActiveSound *)0x0;
  }
  return pFVar3;
}

// RemoveActiveSound @ 1486e7330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSoundConcurrencyManager::RemoveActiveSound(FSoundConcurrencyManager *this,FActiveSound *param_1)

{
  ulonglong uVar1;
  USoundBase *pUVar2;
  FConcurrencyGroup *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TMap<unsigned_int,FConcurrencySoundData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  *pTVar14;
  uint uVar15;
  undefined1 *puVar16;
  bool bVar17;
  uint local_res18 [2];
  uint local_res20;
  uint local_108 [2];
  uint local_100 [2];
  uint local_f8 [2];
  int local_f0;
  int local_ec;
  FName local_e8;
  FString local_e0;
  TMap<unsigned_int,FConcurrencySoundData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<unsigned_int,FConcurrencySoundData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  bVar17 = false;
  local_res18[0] = 0;
  bVar6 = IsInAudioThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x3e1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_d0 = &param_1->ConcurrencyGroupData;
  iStack_c8 = 0;
  iVar8 = *(int *)&(param_1->ConcurrencyGroupData).field_0x28;
  local_c0 = &(param_1->ConcurrencyGroupData).field_0x10;
  local_b0 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  if (iVar8 != 0) {
    puVar9 = *(uint **)&(param_1->ConcurrencyGroupData).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_c0;
    }
    uVar15 = *puVar9;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1486e741f;
      uVar15 = puVar9[lVar10 + 1];
    }
    uStack_c4 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_c4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f0 = (int)lVar10;
    iStack_b4 = local_b0 + -1 + local_f0;
    if (iVar8 < iStack_b4) {
      iStack_b4 = iVar8;
    }
  }
LAB_1486e741f:
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(param_1->ConcurrencyGroupData).field_0x8 -
              *(int *)&(param_1->ConcurrencyGroupData).field_0x34;
  uVar15 = *(uint *)&(param_1->ConcurrencyGroupData).field_0x28;
  uStack_b8 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uVar13 = uVar15 & 0xffffffe0;
  iVar12 = (int)uVar15 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_res20 = uVar15;
  local_a0 = local_d0;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if ((((int)uVar15 < 0) || (iVar8 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(param_1->ConcurrencyGroupData).field_0x28;
  if (uVar15 != uVar7) {
    puVar16 = *(undefined1 **)&(param_1->ConcurrencyGroupData).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(param_1->ConcurrencyGroupData).field_0x10;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar7;
      local_res20 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1486e7540;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_ec = (int)lVar10;
    uVar15 = local_ec + -1 + uVar13;
    local_res20 = uVar15;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
      local_res20 = uVar7;
    }
  }
LAB_1486e7540:
  pTVar5 = local_a0;
  if (*(int *)(&local_a0->field_0x0 + 8) - *(int *)(&local_a0->field_0x0 + 0x34) != (int)uStack_78)
  {
    local_res18[0] = local_res18[0] & 0xffffff00;
    `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencySoundData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
  }
  if (((TStack_98.CurrentBitIndex == uVar15) &&
      (TStack_98.Array ==
       (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->ConcurrencyGroupData).field_0x10)) &&
     (pTVar5 == &param_1->ConcurrencyGroupData)) {
    TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
             *)&param_1->ConcurrencyGroupData);
    return;
  }
  uVar13 = *(uint *)((longlong)TStack_98.CurrentBitIndex * 0x20 + *(longlong *)&pTVar5->field_0x0);
  if (*(int *)&(this->ConcurrencyGroups).field_0x8 != *(int *)&(this->ConcurrencyGroups).field_0x34)
  {
    puVar16 = *(undefined1 **)&(this->ConcurrencyGroups).field_0x40;
    puVar11 = &(this->ConcurrencyGroups).field_0x38;
    if (puVar16 != (undefined1 *)0x0) {
      puVar11 = puVar16;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->ConcurrencyGroups).field_0x48 - 1U & uVar13) * 4);
    if (iVar8 != -1) {
      do {
        lVar10 = *(longlong *)&this->ConcurrencyGroups + (longlong)iVar8 * 0x18;
        if (*(uint *)(*(longlong *)&this->ConcurrencyGroups + (longlong)iVar8 * 0x18) == uVar13) {
          if ((lVar10 != 0) &&
             (this_00 = *(FConcurrencyGroup **)(lVar10 + 8), this_00 != (FConcurrencyGroup *)0x0)) {
            if (((this_00->ActiveSounds).ArrayNum == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!ConcurrencyGroup->IsEmpty()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                                   ,0x3ef,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FConcurrencyGroup::RemoveActiveSound(this_00,param_1);
            if (((this_00->ActiveSounds).ArrayNum != 0) || (0.0 < (this_00->Settings).RetriggerTime)
               ) goto LAB_1486e789e;
            uVar15 = this_00->ObjectID;
            local_108[0] = uVar13;
            if (*(int *)&(this->ConcurrencyGroups).field_0x8 !=
                *(int *)&(this->ConcurrencyGroups).field_0x34) {
              TSet<TTuple<unsigned_int,FConcurrencyGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencyGroup_*,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned_int>
                        ((TSet<TTuple<unsigned_int,FConcurrencyGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencyGroup_*,0>,FDefaultSetAllocator>
                          *)&this->ConcurrencyGroups,uVar13,local_108);
            }
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Remove((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->ConcurrencyMap,uVar15);
            pUVar2 = (param_1->Sound).field0_0x0.DebugPtr;
            if (pUVar2 != (USoundBase *)0x0) {
              TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              ::Remove((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->SoundObjectToConcurrencyGroup,
                       *(uint *)((longlong)&pUVar2->_padding_ + 4));
            }
            uVar13 = param_1->OwnerID;
            if (*(int *)&(this->OwnerConcurrencyMap).field_0x8 ==
                *(int *)&(this->OwnerConcurrencyMap).field_0x34) goto LAB_1486e778c;
            puVar16 = *(undefined1 **)&(this->OwnerConcurrencyMap).field_0x40;
            puVar11 = &(this->OwnerConcurrencyMap).field_0x38;
            if (puVar16 != (undefined1 *)0x0) {
              puVar11 = puVar16;
            }
            uVar7 = *(uint *)(puVar11 +
                             (ulonglong)
                             (*(int *)&(this->OwnerConcurrencyMap).field_0x48 - 1U & uVar13) * 4);
            if (uVar7 == 0xffffffff) goto LAB_1486e778c;
            goto LAB_1486e7720;
          }
          break;
        }
        iVar8 = *(int *)(lVar10 + 0x10);
      } while (iVar8 != -1);
    }
  }
  if (1 < (byte)LogAudioConcurrency._0_1_) {
    pUVar2 = (param_1->Sound).field0_0x0.DebugPtr;
    if (pUVar2 != (USoundBase *)0x0) {
      local_e8 = (FName)pUVar2->_padding_;
      bVar17 = true;
      ::FName::ToString(&local_e8,&local_e0);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
    if ((bVar17) &&
       (bVar17 = false, local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_1486e789e;
  while (uVar7 = puVar9[0x16], uVar7 != 0xffffffff) {
LAB_1486e7720:
    puVar9 = (uint *)((longlong)(int)uVar7 * 0x60 + *(longlong *)&this->OwnerConcurrencyMap);
    if (*puVar9 == uVar13) {
      pTVar14 = (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                 *)(puVar9 + 2);
      if (puVar9 == (uint *)0x0) {
        pTVar14 = (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                   *)0x0;
      }
      if ((((pTVar14 !=
             (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)0x0) &&
           (iVar8 = TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                    ::Remove(pTVar14,uVar15), iVar8 != 0)) &&
          (*(int *)&(pTVar14->Elements).field_0x8 == *(int *)&(pTVar14->Elements).field_0x34)) &&
         (local_100[0] = uVar13,
         *(int *)&(this->OwnerConcurrencyMap).field_0x8 !=
         *(int *)&(this->OwnerConcurrencyMap).field_0x34)) {
        TSet<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FOwnerConcurrencyMapEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned_int>
                  ((TSet<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FOwnerConcurrencyMapEntry,0>,FDefaultSetAllocator>
                    *)&this->OwnerConcurrencyMap,uVar13,local_100);
      }
      break;
    }
  }
LAB_1486e778c:
  if (*(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x8 !=
      *(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x34) {
    puVar16 = *(undefined1 **)&(this->OwnerPerSoundConcurrencyMap).field_0x40;
    puVar11 = &(this->OwnerPerSoundConcurrencyMap).field_0x38;
    if (puVar16 != (undefined1 *)0x0) {
      puVar11 = puVar16;
    }
    uVar15 = *(uint *)(puVar11 +
                      (ulonglong)
                      (*(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x48 - 1U & uVar13) * 4);
    if (uVar15 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar15 * 0x60 +
                         *(longlong *)&this->OwnerPerSoundConcurrencyMap);
        if (*puVar9 == uVar13) {
          pTVar14 = (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                     *)(puVar9 + 2);
          if (puVar9 == (uint *)0x0) {
            pTVar14 = (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                       *)0x0;
          }
          if (((pTVar14 !=
                (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                 *)0x0) &&
              (pUVar2 = (param_1->Sound).field0_0x0.DebugPtr, pUVar2 != (USoundBase *)0x0)) &&
             ((iVar8 = TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                       ::Remove(pTVar14,*(uint *)((longlong)&pUVar2->_padding_ + 4)), iVar8 != 0 &&
              ((*(int *)&(pTVar14->Elements).field_0x8 == *(int *)&(pTVar14->Elements).field_0x34 &&
               (local_f8[0] = uVar13,
               *(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x8 !=
               *(int *)&(this->OwnerPerSoundConcurrencyMap).field_0x34)))))) {
            TSet<TTuple<unsigned_int,FSoundInstanceEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FSoundInstanceEntry,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,FSoundInstanceEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FSoundInstanceEntry,0>,FDefaultSetAllocator>
                        *)&this->OwnerPerSoundConcurrencyMap,uVar13,local_f8);
          }
          break;
        }
        uVar15 = puVar9[0x16];
      } while (uVar15 != 0xffffffff);
    }
  }
  pFVar3 = (this_00->ActiveSounds).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  ::operator_delete(this_00,0x40);
  uVar15 = local_res20;
LAB_1486e789e:
  TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  goto LAB_1486e7540;
}

// StopDueToVoiceStealing @ 1486f1b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSoundConcurrencyManager::StopDueToVoiceStealing
          (FSoundConcurrencyManager *this,FActiveSound *param_1)

{
  USoundBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float local_res10 [2];
  FName local_res18;
  FString local_68;
  FAudioVirtualLoop local_58;
  
  if ((param_1->AudioDevice == (FAudioDevice *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveSound.AudioDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x42c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10[0] = 0.0;
  bVar3 = FActiveSound::GetConcurrencyFadeDuration(param_1,local_res10);
  if (bVar3) {
    FAudioDevice::UnlinkActiveSoundFromComponent(param_1->AudioDevice,param_1);
  }
  else {
    Audio::Trace::EventLog::SendActiveSoundEvent
              (param_1,&Audio::Trace::EventLog::ID::StopRequestConcurrency);
    FAudioDevice::AddSoundToStop(param_1->AudioDevice,param_1);
  }
  FAudioVirtualLoop::FAudioVirtualLoop(&local_58);
  bVar4 = FAudioVirtualLoop::Virtualize(param_1,false,&local_58);
  if (bVar4) {
    FActiveSound::ClearAudioComponent(param_1);
    pUVar1 = (param_1->Sound).field0_0x0.DebugPtr;
    if ((pUVar1 != (USoundBase *)0x0) && (5 < (byte)LogAudioConcurrency._0_1_)) {
      local_res18 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res18,&local_68);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    FAudioDevice::AddVirtualLoop(param_1->AudioDevice,&local_58);
  }
  if (bVar3) {
    param_1->FadeOut = Concurrency;
    Audio::FVolumeFader::StartFade(&param_1->ComponentVolumeFader,0.0,local_res10[0],Logarithmic);
    Audio::FVolumeFader::SetActiveDuration(&param_1->ComponentVolumeFader,local_res10[0]);
  }
  DestructItems<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,int>
            ((TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)
             local_58.WaveInstanceData.Pairs.AllocatorInstance.Data,
             local_58.WaveInstanceData.Pairs.ArrayNum);
  if ((TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)
      local_58.WaveInstanceData.Pairs.AllocatorInstance.Data !=
      (TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *)0x0) {
    FMemory::Free(local_58.WaveInstanceData.Pairs.AllocatorInstance.Data);
  }
  if (local_58.EffectivePlaybackTimes.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_58.EffectivePlaybackTimes.Pairs.AllocatorInstance.Data);
  }
  DestructItems<Audio::FModulationDestination,int>
            ((FModulationDestination *)local_58.VolumeConcurrencyDestinations.AllocatorInstance.Data
             ,local_58.VolumeConcurrencyDestinations.ArrayNum);
  if (local_58.VolumeConcurrencyDestinations.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.VolumeConcurrencyDestinations.AllocatorInstance.Data);
  }
  return;
}

// UpdateSoundsToCull @ 1486f6590

void __thiscall FSoundConcurrencyManager::UpdateSoundsToCull(FSoundConcurrencyManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x45e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = 0;
  puVar1 = &(this->ConcurrencyGroups).field_0x10;
  iVar3 = *(int *)&(this->ConcurrencyGroups).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ConcurrencyGroups).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1486f666d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1486f666d:
  uVar10 = *(uint *)&(this->ConcurrencyGroups).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ConcurrencyGroups).field_0x8 -
                       *(int *)&(this->ConcurrencyGroups).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ConcurrencyGroups).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ConcurrencyGroups).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1486f6770;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1486f6770:
  while( true ) {
    if (*(int *)&(this->ConcurrencyGroups).field_0x8 - *(int *)&(this->ConcurrencyGroups).field_0x34
        != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencyGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FConcurrencyGroup::CullSoundsDueToMaxConcurrency
              (*(FConcurrencyGroup **)
                (*(longlong *)&this->ConcurrencyGroups + 8 +
                (longlong)TStack_50.CurrentBitIndex * 0x18));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// UpdateVolumeScaleGenerations @ 1486f7830

void __thiscall
FSoundConcurrencyManager::UpdateVolumeScaleGenerations(FSoundConcurrencyManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x454,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = 0;
  puVar1 = &(this->ConcurrencyGroups).field_0x10;
  iVar3 = *(int *)&(this->ConcurrencyGroups).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ConcurrencyGroups).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1486f790d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1486f790d:
  uVar10 = *(uint *)&(this->ConcurrencyGroups).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ConcurrencyGroups).field_0x8 -
                       *(int *)&(this->ConcurrencyGroups).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ConcurrencyGroups).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ConcurrencyGroups).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1486f7a10;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1486f7a10:
  while( true ) {
    if (*(int *)&(this->ConcurrencyGroups).field_0x8 - *(int *)&(this->ConcurrencyGroups).field_0x34
        != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencyGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FConcurrencyGroup::UpdateGeneration
              (*(FConcurrencyGroup **)
                (*(longlong *)&this->ConcurrencyGroups + 8 +
                (longlong)TStack_50.CurrentBitIndex * 0x18),(FActiveSound *)0x0);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

