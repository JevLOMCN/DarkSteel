// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 44

// FMixerSourceVoice @ 14653cc50

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceVoice * __thiscall Audio::FMixerSourceVoice::FMixerSourceVoice(FMixerSourceVoice *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = &(this->SubmixSends).field_0xc;
  *(undefined8 *)&this->SubmixSends = 0;
  *(undefined4 *)&(this->SubmixSends).field_0x8 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&(this->SubmixSends).field_0x20 = 0;
  *(undefined4 *)&(this->SubmixSends).field_0x28 = 0;
  *(undefined4 *)&(this->SubmixSends).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubmixSends).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubmixSends).field_0x34 = 0;
  *(undefined8 *)&(this->SubmixSends).field_0x40 = 0;
  *(undefined4 *)&(this->SubmixSends).field_0x48 = 0;
  (this->DeviceChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceChannelMap).ArrayNum = 0;
  (this->DeviceChannelMap).ArrayMax = 0;
  this->bStopFadedOut = (FThreadSafeBool)0x0;
  this->bIsPlaying = 0;
  this->bEnableSubmixSends = 0;
  this->bEnableBaseSubmix = 0;
  this->bEnableBusSends = 0;
  this->bIsBus = 0;
  this->bIsActive = 0;
  this->bIsPaused = 0;
  this->MixerDevice = (FMixerDevice *)0x0;
  this->SourceManager = (FMixerSourceManager *)0x0;
  this->Pitch = -1.0;
  this->Volume = -1.0;
  this->DistanceAttenuation = -1.0;
  this->Distance = -1.0;
  this->LPFFrequency = -1.0;
  this->HPFFrequency = -1.0;
  this->SourceId = -1;
  LOCK();
  this->bStopFadedOut = (FThreadSafeBool)0x0;
  UNLOCK();
  this->PitchModBase = 3.4028235e+38;
  this->VolumeModBase = 3.4028235e+38;
  this->LPFFrequencyModBase = 3.4028235e+38;
  this->HPFFrequencyModBase = 3.4028235e+38;
  if (*(int *)&(this->SubmixSends).field_0x8 != *(int *)&(this->SubmixSends).field_0x34) {
    TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
                      *)&this->SubmixSends);
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&this->SubmixSends,0,*(int *)&(this->SubmixSends).field_0x8);
    *(undefined4 *)&(this->SubmixSends).field_0x8 = 0;
    if (*(int *)puVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)&this->SubmixSends,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->SubmixSends).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->SubmixSends).field_0x34 = 0;
    *(undefined4 *)&(this->SubmixSends).field_0x28 = 0;
  }
  return this;
}

// ~FMixerSourceVoice @ 146540670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::~FMixerSourceVoice(FMixerSourceVoice *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->DeviceChannelMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SubmixSends).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SubmixSends).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubmixSends);
  return;
}

// ClearSubmixSendInfo @ 146549b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::ClearSubmixSendInfo
          (FMixerSourceVoice *this,TWeakPtr<Audio::FMixerSubmix,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  atomic<int> aVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMixerSourceSubmixSend *pFVar9;
  bool bVar10;
  uint local_res8 [2];
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  pTVar8 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146549bb2;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar3 = param_1->Object;
    if ((pFVar3 != (FMixerSubmix *)0x0) &&
       (*(int *)&(this->SubmixSends).field_0x8 != *(int *)&(this->SubmixSends).field_0x34)) {
      puVar7 = *(undefined1 **)&(this->SubmixSends).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->SubmixSends).field_0x38;
      }
      uVar5 = *(uint *)(puVar7 + (ulonglong)
                                 (*(int *)&(this->SubmixSends).field_0x48 - 1U & pFVar3->Id) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar6 = (uint *)((longlong)(int)uVar5 * 0x38 + *(longlong *)&this->SubmixSends);
          if (*puVar6 == pFVar3->Id) {
            pFVar9 = (FMixerSourceSubmixSend *)(puVar6 + 2);
            if (puVar6 == (uint *)0x0) {
              pFVar9 = (FMixerSourceSubmixSend *)0x0;
            }
            if (pFVar9 != (FMixerSourceSubmixSend *)0x0) {
              FMixerSourceManager::ClearSubmixSendInfo(this->SourceManager,this->SourceId,pFVar9);
              local_res8[0] = pFVar3->Id;
              if (*(int *)&(this->SubmixSends).field_0x8 != *(int *)&(this->SubmixSends).field_0x34)
              {
                TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_int>
                          ((TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
                            *)&this->SubmixSends,local_res8[0],local_res8);
              }
            }
            break;
          }
          uVar5 = puVar6[0xc];
        } while (uVar5 != 0xffffffff);
      }
    }
  }
LAB_146549bb2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000146549bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      return;
    }
  }
  return;
}

// GetCPUCoreUtilization @ 146555830

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall Audio::FMixerSourceVoice::GetCPUCoreUtilization(FMixerSourceVoice *this)

{
  double dVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  dVar1 = FMixerSourceManager::GetCPUCoreUtilization(this->SourceManager,this->SourceId);
  return dVar1;
}

// GetDistance @ 146557570

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FMixerSourceVoice::GetDistance(FMixerSourceVoice *this)

{
  return this->Distance;
}

// GetDistanceAttenuation @ 146557580

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FMixerSourceVoice::GetDistanceAttenuation(FMixerSourceVoice *this)

{
  return this->DistanceAttenuation;
}

// GetEncodedOutput @ 1465578d0

/* WARNING: Enum "Type": Some values do not have unique names */

ISoundfieldAudioPacket * __thiscall
Audio::FMixerSourceVoice::GetEncodedOutput(FMixerSourceVoice *this,FSoundfieldEncodingKey *param_1)

{
  ISoundfieldAudioPacket *pIVar1;
  
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  if (this->bEnableBaseSubmix != 0 || this->bEnableSubmixSends != 0) {
    pIVar1 = FMixerSourceManager::GetEncodedOutput(this->SourceManager,this->SourceId,param_1);
    return pIVar1;
  }
  return (ISoundfieldAudioPacket *)0x0;
}

// GetEnvelopeValue @ 146557920

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FMixerSourceVoice::GetEnvelopeValue(FMixerSourceVoice *this)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetEnvelopeValue(this->SourceManager,this->SourceId);
  return fVar1;
}

// GetListenerRotationForVoice @ 146558ba0

/* WARNING: Enum "Type": Some values do not have unique names */

TQuat<double> * __thiscall
Audio::FMixerSourceVoice::GetListenerRotationForVoice
          (FMixerSourceVoice *this,TQuat<double> *__return_storage_ptr__)

{
  FMixerSourceManager::GetListenerRotation
            (this->SourceManager,__return_storage_ptr__,this->SourceId);
  return __return_storage_ptr__;
}

// GetNumFramesPlayed @ 146559320

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall Audio::FMixerSourceVoice::GetNumFramesPlayed(FMixerSourceVoice *this)

{
  long64 lVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  lVar1 = FMixerSourceManager::GetNumFramesPlayed(this->SourceManager,this->SourceId);
  return lVar1;
}

// GetRelativeRenderCost @ 14655a730

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FMixerSourceVoice::GetRelativeRenderCost(FMixerSourceVoice *this)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetRelativeRenderCost(this->SourceManager,this->SourceId);
  return fVar1;
}

// GetSourceId @ 14655b3d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FMixerSourceVoice::GetSourceId(FMixerSourceVoice *this)

{
  return this->SourceId;
}

// GetVolumeModulationValue @ 14655c2f0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FMixerSourceVoice::GetVolumeModulationValue(FMixerSourceVoice *this)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetVolumeModulationValue(this->SourceManager,this->SourceId);
  return fVar1;
}

// Init @ 14655c6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FMixerSourceVoice::Init(FMixerSourceVoice *this,FMixerSourceVoiceInitParams *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  atomic<int> aVar8;
  bool bVar9;
  undefined1 uVar10;
  ushort uVar11;
  uint uVar12;
  atomic<int> aVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  undefined4 local_res18 [4];
  undefined4 *local_50;
  FScriptContainerElement *local_48;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  bVar9 = FMixerSourceManager::GetFreeSourceId(this->SourceManager,&this->SourceId);
  if (!bVar9) {
    return false;
  }
  if ((param_1->SourceListener == (ISourceListener *)0x0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7765216371981418429>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceVoice.cpp"
                         ,0x43,"InitParams.SourceListener != nullptr"), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((param_1->NumInputChannels < 1) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7765216371981418428>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceVoice.cpp"
                         ,0x44,"InitParams.NumInputChannels > 0"), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  bVar9 = param_1->bEnableBusSends;
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  puVar1 = &this->field_0xa0;
  uVar4 = *(ushort *)puVar1;
  this->bEnableBusSends = bVar9;
  bVar2 = param_1->bEnableBaseSubmix;
  this->bEnableBaseSubmix = bVar2;
  bVar3 = param_1->bEnableSubmixSends;
  uVar11 = 0;
  this->bEnableSubmixSends = bVar3;
  if (param_1->AudioBusId != 0xffffffff) {
    uVar11 = 8;
  }
  *(ushort *)&this->field_0xa0 =
       uVar11 | (ushort)(bVar3 & 1) << 6 |
                (ushort)(bVar2 & 1) << 5 | (ushort)(bVar9 & 1) << 4 | uVar4 & 0xff87;
  pTVar16 = pTVar17;
  pTVar18 = pTVar17;
  if (0 < (param_1->SubmixSends).ArrayNum) {
    do {
      uVar15 = (uint)pTVar16;
      uVar12 = 0;
      if ((int)uVar15 < (param_1->SubmixSends).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pFVar5 = (param_1->SubmixSends).AllocatorInstance.Data;
      pTVar16 = *(TReferenceControllerBase<1> **)
                 (pFVar5 + (longlong)&(pTVar18->SharedReferenceCount).field_0x0);
      pTVar14 = pTVar16;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        aVar8 = pTVar16->SharedReferenceCount;
        do {
          pTVar14 = pTVar17;
          if (aVar8 == (atomic<int>)0x0) goto LAB_14655c8d1;
          LOCK();
          aVar13 = pTVar16->SharedReferenceCount;
          bVar9 = aVar8 == aVar13;
          if (bVar9) {
            pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar13 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar13;
        } while (!bVar9);
        lVar6 = *(longlong *)((longlong)&pTVar18->_padding_ + (longlong)pFVar5);
        pTVar14 = pTVar16;
        if (lVar6 != 0) {
          uVar12 = 0;
          if ((int)uVar15 < (param_1->SubmixSends).ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          local_res18[0] = *(undefined4 *)(lVar6 + 0x30);
          local_48 = (FScriptContainerElement *)
                     ((longlong)&pTVar18->_padding_ +
                     (longlong)(param_1->SubmixSends).AllocatorInstance.Data);
          local_50 = local_res18;
          TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_&&,Audio::FMixerSourceSubmixSend_const_&>_>
                    ((TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
                      *)&this->SubmixSends,
                     (TPairInitializer<unsigned_int_&&,Audio::FMixerSourceSubmixSend_const_&> *)
                     (local_res18 + 2),(bool *)&local_50);
        }
      }
LAB_14655c8d1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      pTVar16 = (TReferenceControllerBase<1> *)(ulonglong)(uVar15 + 1);
      pTVar18 = (TReferenceControllerBase<1> *)&pTVar18[2].SharedReferenceCount;
    } while ((int)(uVar15 + 1) < (param_1->SubmixSends).ArrayNum);
  }
  LOCK();
  this->bStopFadedOut = (FThreadSafeBool)0x0;
  UNLOCK();
  FMixerSourceManager::InitSource(this->SourceManager,this->SourceId,param_1);
  return true;
}

// IsActive @ 146560c50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceVoice::IsActive(FMixerSourceVoice *this)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  return this->bIsActive;
}

// IsPaused @ 146561300

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceVoice::IsPaused(FMixerSourceVoice *this)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  return this->bIsPaused;
}

// IsPlaying @ 146561330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceVoice::IsPlaying(FMixerSourceVoice *this)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  return this->bIsPlaying;
}

// IsRenderingToSubmixes @ 1465617d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceVoice::IsRenderingToSubmixes(FMixerSourceVoice *this)

{
  return this->bEnableBaseSubmix != 0 || this->bEnableSubmixSends != 0;
}

// IsUsingHRTFSpatializer @ 146561df0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerSourceVoice::IsUsingHRTFSpatializer(FMixerSourceVoice *this,bool param_1)

{
  bool bVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  if (this->SourceId != -1) {
    bVar1 = FMixerSourceManager::IsUsingHRTFSpatializer(this->SourceManager,this->SourceId);
    return bVar1;
  }
  return param_1;
}

// MixOutputBuffers @ 1465629b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::MixOutputBuffers
          (FMixerSourceVoice *this,int param_1,float param_2,EMixerSourceSubmixSendStage param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  if (this->bEnableBaseSubmix != 0 || this->bEnableSubmixSends != 0) {
    FMixerSourceManager::MixOutputBuffers
              (this->SourceManager,this->SourceId,param_1,param_2,param_3,param_4);
  }
  return;
}

// NeedsSpeakerMap @ 146562a20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceVoice::NeedsSpeakerMap(FMixerSourceVoice *this)

{
  bool bVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  bVar1 = FMixerSourceManager::NeedsSpeakerMap(this->SourceManager,this->SourceId);
  return bVar1;
}

// Pause @ 146566230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::Pause(FMixerSourceVoice *this)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  this->bIsPaused = 1;
  this->bIsActive = 0;
  FMixerSourceManager::Pause(this->SourceManager,this->SourceId);
  return;
}

// Play @ 146566550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::Play(FMixerSourceVoice *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  puVar2 = &this->field_0xa0;
  this->bIsPlaying = 1;
  this->bIsActive = 1;
  this->bIsPaused = 0;
  FMixerSourceManager::Play(this->SourceManager,this->SourceId);
  return;
}

// Release @ 14656c500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::Release(FMixerSourceVoice *this)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  FMixerSourceManager::ReleaseSourceId(this->SourceManager,this->SourceId);
  return;
}

// Reset @ 14656fa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::Reset(FMixerSourceVoice *this,FMixerDevice *param_1)

{
  undefined1 *puVar1;
  FMixerSourceManager *pFVar2;
  
  pFVar2 = (FMixerSourceManager *)0x0;
  if (param_1 == (FMixerDevice *)0x0) {
    this->MixerDevice = (FMixerDevice *)0x0;
  }
  else {
    this->MixerDevice = param_1;
    pFVar2 = FMixerDevice::GetSourceManager(param_1);
  }
  this->SourceManager = pFVar2;
  this->Pitch = -1.0;
  this->bIsPlaying = 0;
  this->bEnableSubmixSends = 0;
  this->bEnableBaseSubmix = 0;
  this->bEnableBusSends = 0;
  this->bIsBus = 0;
  this->bIsActive = 0;
  this->bIsPaused = 0;
  this->Volume = -1.0;
  this->DistanceAttenuation = -1.0;
  this->Distance = -1.0;
  this->LPFFrequency = -1.0;
  this->HPFFrequency = -1.0;
  this->SourceId = -1;
  LOCK();
  this->bStopFadedOut = (FThreadSafeBool)0x0;
  UNLOCK();
  this->PitchModBase = 3.4028235e+38;
  this->VolumeModBase = 3.4028235e+38;
  this->LPFFrequencyModBase = 3.4028235e+38;
  this->HPFFrequencyModBase = 3.4028235e+38;
  TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
           *)&this->SubmixSends);
  return;
}

// SetAudioBusSendInfo @ 1465727f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::SetAudioBusSendInfo
          (FMixerSourceVoice *this,EBusSendType param_1,uint param_2,float param_3,FString *param_4)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  if (this->bEnableBusSends == 0) {
    param_3 = 0.0;
  }
  FMixerSourceManager::SetBusSendInfo
            (this->SourceManager,this->SourceId,param_1,param_2,param_3,param_4);
  return;
}

// SetChannelMap @ 146572bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::SetChannelMap
          (FMixerSourceVoice *this,uint param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          bool param_3,bool param_4)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  FMixerSourceManager::SetChannelMap
            (this->SourceManager,this->SourceId,param_1,param_2,param_3,param_4);
  return;
}

// SetDistanceAttenuation @ 146572c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::SetDistanceAttenuation(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->DistanceAttenuation - param_1) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->DistanceAttenuation = param_1;
    FMixerSourceManager::SetDistanceAttenuation(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// SetEnablement @ 146572cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::SetEnablement
          (FMixerSourceVoice *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  
  this->bEnableBusSends = 0;
  this->bEnableBaseSubmix = 0;
  *(ushort *)&this->field_0xa0 =
       ((ushort)param_1 | (ushort)param_3 << 2) << 4 |
       (ushort)param_2 << 5 | *(ushort *)&this->field_0xa0 & 0xffbf;
  return;
}

// SetHPFFrequency @ 146572f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetHPFFrequency(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->HPFFrequency - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
     ) {
    this->HPFFrequency = param_1;
    FMixerSourceManager::SetHPFFrequency(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// SetLPFFrequency @ 1465730c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetLPFFrequency(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->LPFFrequency - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
     ) {
    this->LPFFrequency = param_1;
    FMixerSourceManager::SetLPFFrequency(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// SetModHPFFrequency @ 146573260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetModHPFFrequency(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->HPFFrequencyModBase - param_1) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->HPFFrequencyModBase = param_1;
    FMixerSourceManager::SetModHPFFrequency(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// SetModLPFFrequency @ 1465732d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetModLPFFrequency(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->LPFFrequencyModBase - param_1) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->LPFFrequencyModBase = param_1;
    FMixerSourceManager::SetModLPFFrequency(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// SetModPitch @ 146573340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetModPitch(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->PitchModBase - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
     ) {
    this->PitchModBase = param_1;
    FMixerSourceManager::SetModPitch(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// SetModVolume @ 1465733b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetModVolume(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->VolumeModBase - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff
                     )) {
    this->VolumeModBase = param_1;
    FMixerSourceManager::SetModVolume(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// SetModulationRouting @ 146573440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::SetModulationRouting
          (FMixerSourceVoice *this,FSoundModulationDefaultRoutingSettings *param_1)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  FMixerSourceManager::SetModulationRouting
            (this->SourceManager,this->SourceId,(FSoundModulationDefaultSettings *)param_1);
  return;
}

// SetOutputToBusOnly @ 1465735f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetOutputToBusOnly(FMixerSourceVoice *this,bool param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &this->field_0xa0;
  if (param_1) {
    this->bEnableBusSends = 1;
  }
  this->bEnableBaseSubmix = 0;
  *(ushort *)puVar1 = *(ushort *)puVar1 | (ushort)!param_1 << 5;
  this->bEnableSubmixSends = !param_1;
  return;
}

// SetPitch @ 1465740e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetPitch(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->Pitch - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->Pitch = param_1;
    FMixerSourceManager::SetPitch(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// SetSourceBufferListener @ 1465747a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::SetSourceBufferListener
          (FMixerSourceVoice *this,TSharedPtr<ISourceBufferListener,1> *param_1,bool param_2)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  FMixerSourceManager::SetSourceBufferListener(this->SourceManager,this->SourceId,param_1,param_2);
  return;
}

// SetSpatializationParams @ 146574830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::SetSpatializationParams
          (FMixerSourceVoice *this,FSpatializationParams *param_1)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  FMixerSourceManager::SetSpatializationParams(this->SourceManager,this->SourceId,param_1);
  return;
}

// SetSubmixSendInfo @ 146574b60

/* WARNING: Removing unreachable block (ram,0x000146574d01) */
/* WARNING: Removing unreachable block (ram,0x000146574d0d) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoice::SetSubmixSendInfo
          (FMixerSourceVoice *this,TWeakPtr<Audio::FMixerSubmix,1> *param_1,float param_2,
          EMixerSourceSubmixSendStage param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  FMixerSourceSubmixSend *pFVar6;
  undefined1 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMixerSourceSubmixSend *pFVar9;
  FMixerSourceSubmixSend *pFVar10;
  bool bVar11;
  float fVar12;
  uint local_res8 [4];
  uint *local_88;
  FMixerSourceSubmixSend *local_80;
  FMixerSourceSubmixSend local_78;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  pTVar8 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146574bca;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pFVar3 = param_1->Object;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      pFVar10 = (FMixerSourceSubmixSend *)0x0;
      pFVar6 = pFVar10;
      if (*(int *)&(this->SubmixSends).field_0x8 != *(int *)&(this->SubmixSends).field_0x34) {
        puVar7 = *(undefined1 **)&(this->SubmixSends).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this->SubmixSends).field_0x38;
        }
        iVar5 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(this->SubmixSends).field_0x48 - 1U & pFVar3->Id) * 4);
        if (iVar5 != -1) {
          do {
            pFVar6 = (FMixerSourceSubmixSend *)
                     ((longlong)iVar5 * 0x38 + *(longlong *)&this->SubmixSends);
            if (*(uint *)&(pFVar6->Submix).Object == pFVar3->Id) break;
            iVar5 = *(int *)&pFVar6[1].Submix.WeakReferenceCount.ReferenceController;
            pFVar6 = pFVar10;
          } while (iVar5 != -1);
        }
      }
      pFVar9 = (FMixerSourceSubmixSend *)&(pFVar6->Submix).WeakReferenceCount;
      if (pFVar6 == (FMixerSourceSubmixSend *)0x0) {
        pFVar9 = pFVar10;
      }
      if (pFVar9 == (FMixerSourceSubmixSend *)0x0) {
        local_78.Submix.WeakReferenceCount.ReferenceController =
             (param_1->WeakReferenceCount).ReferenceController;
        if (local_78.Submix.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_78.Submix.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_78.Submix.WeakReferenceCount.ReferenceController)->WeakReferenceCount +
               1);
          UNLOCK();
        }
        local_78.Submix.Object._4_4_ = (undefined4)((ulonglong)pFVar3 >> 0x20);
        local_78.Submix.Object._0_4_ = SUB84(pFVar3,0);
        local_78.SoundfieldFactory = (ISoundfieldFactory *)0x0;
        local_78.bIsMainSend = false;
        local_res8[0] = pFVar3->Id;
        local_88 = local_res8;
        local_80 = &local_78;
        local_78.SendLevel = param_2;
        local_78.SubmixSendStage = param_3;
        TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_&&,Audio::FMixerSourceSubmixSend_const_&>_>
                  ((TSet<TTuple<unsigned_int,Audio::FMixerSourceSubmixSend>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerSourceSubmixSend,0>,FDefaultSetAllocator>
                    *)&this->SubmixSends,
                   (TPairInitializer<unsigned_int_&&,Audio::FMixerSourceSubmixSend_const_&> *)
                   (local_res8 + 2),(bool *)&local_88);
        FMixerSourceManager::SetSubmixSendInfo(this->SourceManager,this->SourceId,&local_78);
        if (local_78.Submix.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_78.Submix.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_78.Submix.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_78.Submix.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
      else {
        fVar12 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
        if ((fVar12 < (float)((uint)(pFVar9->SendLevel - param_2) &
                             __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
           (pFVar9->SubmixSendStage != param_3)) {
          pFVar9->SendLevel = param_2;
          pFVar9->SubmixSendStage = param_3;
          FMixerSourceManager::SetSubmixSendInfo(this->SourceManager,this->SourceId,pFVar9);
        }
      }
    }
  }
LAB_146574bca:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  return;
}

// SetVolume @ 1465755b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::SetVolume(FMixerSourceVoice *this,float param_1)

{
  float fVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  fVar1 = FMixerSourceManager::GetFloatCompareTolerance(this->SourceManager);
  if (fVar1 < (float)((uint)(this->Volume - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->Volume = param_1;
    FMixerSourceManager::SetVolume(this->SourceManager,this->SourceId,param_1);
  }
  return;
}

// Stop @ 146577a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::Stop(FMixerSourceVoice *this)

{
  undefined1 *puVar1;
  
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  this->bIsPlaying = 0;
  this->bIsActive = 0;
  this->bIsPaused = 0;
  LOCK();
  this->bStopFadedOut = (FThreadSafeBool)0x1;
  UNLOCK();
  FMixerSourceManager::Stop(this->SourceManager,this->SourceId);
  return;
}

// StopFade @ 146578040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceVoice::StopFade(FMixerSourceVoice *this,int param_1)

{
  FMixerDevice::CheckAudioThread(this->MixerDevice);
  this->bIsPaused = 0;
  FMixerSourceManager::StopFade(this->SourceManager,this->SourceId,param_1);
  return;
}

