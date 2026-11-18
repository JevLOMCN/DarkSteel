// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 20

// FMixerSourceSubmixOutputBuffer @ 14653ca40

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceSubmixOutputBuffer * __thiscall
Audio::FMixerSourceSubmixOutputBuffer::FMixerSourceSubmixOutputBuffer
          (FMixerSourceSubmixOutputBuffer *this,FMixerDevice *param_1,uint param_2,uint param_3,
          uint param_4)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  double dVar5;
  int iVar6;
  
  (this->ReverbPluginOutputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReverbPluginOutputBuffer).ArrayNum = 0;
  (this->ReverbPluginOutputBuffer).ArrayMax = 0;
  iVar6 = param_2 * param_3 * 4;
  this->PreAttenuationSourceBuffer = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  this->PostAttenuationSourceBuffer = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  (this->SourceChannelMap).CopySize = iVar6;
  (this->SourceChannelMap).bIsInit = false;
  memset(&this->SourceChannelMap,0,(longlong)iVar6);
  this->NumSourceChannels = param_2;
  pTVar1 = &this->PreAttenuationOutputBuffer;
  (this->PreAttenuationOutputBuffer).ArrayNum = 0;
  (this->PreAttenuationOutputBuffer).ArrayMax = 0;
  piVar4 = &(this->PreAttenuationOutputBuffer).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PostAttenuationOutputBuffer).ArrayNum;
  (this->PostAttenuationOutputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->PostAttenuationOutputBuffer).ArrayMax;
  *piVar2 = 0;
  *piVar3 = 0;
  this->NumFrames = param_4;
  this->NumOutputChannels = param_3;
  this->MixerDevice = param_1;
  this->bIsInitialDownmix = true;
  this->bIs3D = false;
  this->bIsVorbis = false;
  (this->SoundfieldPositionalData).NumChannels = 0;
  (this->SoundfieldPositionalData).ChannelPositions =
       (TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *)0x0;
  dVar5 = UE::Math::TQuat<double>::Identity.Y;
  (this->SoundfieldPositionalData).Rotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->SoundfieldPositionalData).Rotation.Y = dVar5;
  dVar5 = UE::Math::TQuat<double>::Identity.W;
  (this->SoundfieldPositionalData).Rotation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->SoundfieldPositionalData).Rotation.W = dVar5;
  *(undefined8 *)&this->EncodedSoundfieldDownmixes = 0;
  *(undefined8 *)&(this->EncodedSoundfieldDownmixes).field_0x8 = 0;
  *(undefined8 *)&(this->EncodedSoundfieldDownmixes).field_0x20 = 0;
  *(undefined4 *)&(this->EncodedSoundfieldDownmixes).field_0x28 = 0;
  *(undefined4 *)&(this->EncodedSoundfieldDownmixes).field_0x2c = 0x80;
  *(undefined4 *)&(this->EncodedSoundfieldDownmixes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EncodedSoundfieldDownmixes).field_0x34 = 0;
  *(undefined8 *)&(this->EncodedSoundfieldDownmixes).field_0x40 = 0;
  *(undefined4 *)&(this->EncodedSoundfieldDownmixes).field_0x48 = 0;
  (this->InputChannelPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputChannelPositions).ArrayNum = 0;
  (this->InputChannelPositions).ArrayMax = 0;
  (this->SoundfieldDecoder).Ptr = (ISoundfieldDecoderStream *)0x0;
  (this->PreAttenuationOutputBuffer).ArrayNum = 0;
  if (*piVar4 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar4);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_3 * param_4,&pTVar1->AllocatorInstance,
             &(this->PreAttenuationOutputBuffer).ArrayNum,
             &(this->PreAttenuationOutputBuffer).ArrayMax);
  *piVar2 = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->PostAttenuationOutputBuffer).AllocatorInstance,0,piVar3);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_3 * param_4,&(this->PostAttenuationOutputBuffer).AllocatorInstance,piVar2,
             piVar3);
  return this;
}

// ~FMixerSourceSubmixOutputBuffer @ 1465405d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::~FMixerSourceSubmixOutputBuffer
          (FMixerSourceSubmixOutputBuffer *this)

{
  ISoundfieldDecoderStream *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  pIVar1 = (this->SoundfieldDecoder).Ptr;
  if (pIVar1 != (ISoundfieldDecoderStream *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->InputChannelPositions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->EncodedSoundfieldDownmixes).field_0x48 = 0;
  pvVar3 = *(void **)&(this->EncodedSoundfieldDownmixes).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EncodedSoundfieldDownmixes);
  pFVar2 = (this->PostAttenuationOutputBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PreAttenuationOutputBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ReverbPluginOutputBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ComputeOutput2D @ 14654aaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::ComputeOutput2D
          (FMixerSourceSubmixOutputBuffer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  uint uVar1;
  FMixerDevice *this_00;
  ISoundfieldDecoderStream *pIVar2;
  FScriptContainerElement *pFVar3;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *local_res8;
  undefined ***local_a8;
  FSoundfieldSpeakerPositionalData *local_a0;
  uint local_98;
  float local_94;
  undefined **local_88;
  TArray<float,TAlignedHeapAllocator<16>_> local_80;
  uint local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  dStack_30 = UE::Math::TQuat<double>::Identity.W;
  local_38 = UE::Math::TQuat<double>::Identity.Z;
  dStack_40 = UE::Math::TQuat<double>::Identity.Y;
  local_48 = UE::Math::TQuat<double>::Identity.X;
  if ((this->SoundfieldDecoder).Ptr == (ISoundfieldDecoderStream *)0x0) {
    uVar1 = this->NumSourceChannels;
    if (uVar1 == 1) {
      uVar1 = this->NumOutputChannels;
      if (uVar1 == 2) {
        MixMonoTo2ChannelsFast(param_1,param_2,(this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 4) {
        MixMonoTo4ChannelsFast(param_1,param_2,(this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 6) {
        MixMonoTo6ChannelsFast(param_1,param_2,(this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 8) {
        MixMonoTo8ChannelsFast(param_1,param_2,(this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
    }
    else {
      if (uVar1 != 2) {
        DownmixBuffer(uVar1,this->NumOutputChannels,param_1,param_2,
                      (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      uVar1 = this->NumOutputChannels;
      if (uVar1 == 2) {
        Mix2ChannelsTo2ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 4) {
        Mix2ChannelsTo4ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 6) {
        Mix2ChannelsTo6ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 8) {
        Mix2ChannelsTo8ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
    }
  }
  else {
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88 = &___7FAmbisonicsSoundfieldBuffer__6B_;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    if (&local_80 != param_1) {
      local_80.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = param_1->ArrayNum;
      local_80.ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
    }
    local_70 = this->NumSourceChannels;
    uVar1 = this->NumOutputChannels;
    local_68 = (this->SoundSourceRotation).X;
    dStack_60 = (this->SoundSourceRotation).Y;
    local_58 = (this->SoundSourceRotation).Z;
    dStack_50 = (this->SoundSourceRotation).W;
    this_00 = this->MixerDevice;
    (this->SoundfieldPositionalData).NumChannels = uVar1;
    pTVar4 = FMixerDevice::GetDefaultPositionMap(this_00,uVar1);
    pIVar2 = (this->SoundfieldDecoder).Ptr;
    (this->SoundfieldPositionalData).ChannelPositions = pTVar4;
    local_a8 = &local_88;
    local_98 = (uint)param_1->ArrayNum / this->NumSourceChannels;
    local_94 = (float)*(int *)&this->MixerDevice->field_0x84;
    local_res8 = param_2;
    local_a0 = &this->SoundfieldPositionalData;
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_a8,&local_res8);
    if (param_1 != &local_80) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_1->AllocatorInstance).Data = local_80.AllocatorInstance.Data;
      param_1->ArrayNum = local_80.ArrayNum;
      param_1->ArrayMax = local_80.ArrayMax;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 0;
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_88 = &___7FAmbisonicsSoundfieldBuffer__6B_;
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  return;
}

// ComputeOutput2D @ 14654adf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::ComputeOutput2D(FMixerSourceSubmixOutputBuffer *this)

{
  if (this->PreAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    ComputeOutput2D(this,this->PreAttenuationSourceBuffer,&this->PreAttenuationOutputBuffer);
  }
  if (this->PostAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    ComputeOutput2D(this,this->PostAttenuationSourceBuffer,&this->PostAttenuationOutputBuffer);
    return;
  }
  return;
}

// ComputeOutput3D @ 14654ae40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::ComputeOutput3D
          (FMixerSourceSubmixOutputBuffer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  uint uVar1;
  FMixerDevice *this_00;
  ISoundfieldDecoderStream *pIVar2;
  FScriptContainerElement *pFVar3;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *local_res8;
  undefined ***local_a8;
  FSoundfieldSpeakerPositionalData *local_a0;
  uint local_98;
  float local_94;
  undefined **local_88;
  TArray<float,TAlignedHeapAllocator<16>_> local_80;
  uint local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  dStack_30 = UE::Math::TQuat<double>::Identity.W;
  local_38 = UE::Math::TQuat<double>::Identity.Z;
  dStack_40 = UE::Math::TQuat<double>::Identity.Y;
  local_48 = UE::Math::TQuat<double>::Identity.X;
  if ((this->SoundfieldDecoder).Ptr == (ISoundfieldDecoderStream *)0x0) {
    uVar1 = this->NumSourceChannels;
    if (uVar1 == 1) {
      uVar1 = this->NumOutputChannels;
      if (uVar1 == 2) {
        MixMonoTo2ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelStartGains,
                   (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 4) {
        MixMonoTo4ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelStartGains,
                   (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 6) {
        MixMonoTo6ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelStartGains,
                   (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 8) {
        MixMonoTo8ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelStartGains,
                   (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
    }
    else {
      if (uVar1 != 2) {
        DownmixBuffer(uVar1,this->NumOutputChannels,param_1,param_2,
                      (this->SourceChannelMap).ChannelStartGains,
                      (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      uVar1 = this->NumOutputChannels;
      if (uVar1 == 2) {
        Mix2ChannelsTo2ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelStartGains,
                   (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 4) {
        Mix2ChannelsTo4ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelStartGains,
                   (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 6) {
        Mix2ChannelsTo6ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelStartGains,
                   (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
      if (uVar1 == 8) {
        Mix2ChannelsTo8ChannelsFast
                  (param_1,param_2,(this->SourceChannelMap).ChannelStartGains,
                   (this->SourceChannelMap).ChannelDestinationGains);
        return;
      }
    }
  }
  else {
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88 = &___7FAmbisonicsSoundfieldBuffer__6B_;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    if (&local_80 != param_1) {
      local_80.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = param_1->ArrayNum;
      local_80.ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
    }
    local_70 = this->NumSourceChannels;
    uVar1 = this->NumOutputChannels;
    local_68 = (this->SoundSourceRotation).X;
    dStack_60 = (this->SoundSourceRotation).Y;
    local_58 = (this->SoundSourceRotation).Z;
    dStack_50 = (this->SoundSourceRotation).W;
    this_00 = this->MixerDevice;
    (this->SoundfieldPositionalData).NumChannels = uVar1;
    pTVar4 = FMixerDevice::GetDefaultPositionMap(this_00,uVar1);
    pIVar2 = (this->SoundfieldDecoder).Ptr;
    (this->SoundfieldPositionalData).ChannelPositions = pTVar4;
    local_a8 = &local_88;
    local_98 = (uint)param_1->ArrayNum / this->NumSourceChannels;
    local_94 = (float)*(int *)&this->MixerDevice->field_0x84;
    local_res8 = param_2;
    local_a0 = &this->SoundfieldPositionalData;
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_a8,&local_res8);
    if (param_1 != &local_80) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_1->AllocatorInstance).Data = local_80.AllocatorInstance.Data;
      param_1->ArrayNum = local_80.ArrayNum;
      param_1->ArrayMax = local_80.ArrayMax;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 0;
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_88 = &___7FAmbisonicsSoundfieldBuffer__6B_;
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  return;
}

// ComputeOutput3D @ 14654b170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::ComputeOutput3D(FMixerSourceSubmixOutputBuffer *this)

{
  if (this->PreAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    ComputeOutput3D(this,this->PreAttenuationSourceBuffer,&this->PreAttenuationOutputBuffer);
  }
  if (this->PostAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    ComputeOutput3D(this,this->PostAttenuationSourceBuffer,&this->PostAttenuationOutputBuffer);
  }
  memcpy(&this->SourceChannelMap,(this->SourceChannelMap).ChannelDestinationGains,
         (longlong)(this->SourceChannelMap).CopySize);
  return;
}

// ComputeOutput @ 14654b1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::ComputeOutput
          (FMixerSourceSubmixOutputBuffer *this,FSpatializationParams *param_1)

{
  bool bVar1;
  double dVar2;
  
  if ((this->PostAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) ||
     (this->PreAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0)) {
    bVar1 = this->bIs3D;
    dVar2 = (param_1->ListenerOrientation).Y;
    (this->SoundfieldPositionalData).Rotation.X = (param_1->ListenerOrientation).X;
    (this->SoundfieldPositionalData).Rotation.Y = dVar2;
    dVar2 = (param_1->ListenerOrientation).W;
    (this->SoundfieldPositionalData).Rotation.Z = (param_1->ListenerOrientation).Z;
    (this->SoundfieldPositionalData).Rotation.W = dVar2;
    dVar2 = (param_1->EmitterWorldRotation).Y;
    (this->SoundSourceRotation).X = (param_1->EmitterWorldRotation).X;
    (this->SoundSourceRotation).Y = dVar2;
    dVar2 = (param_1->EmitterWorldRotation).W;
    (this->SoundSourceRotation).Z = (param_1->EmitterWorldRotation).Z;
    (this->SoundSourceRotation).W = dVar2;
    if ((bVar1 == false) || (this->bIsInitialDownmix != false)) {
      if (this->PreAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
        ComputeOutput2D(this,this->PreAttenuationSourceBuffer,&this->PreAttenuationOutputBuffer);
      }
      if (this->PostAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
        ComputeOutput2D(this,this->PostAttenuationSourceBuffer,&this->PostAttenuationOutputBuffer);
      }
      this->bIsInitialDownmix = false;
    }
    else {
      if (this->PreAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
        ComputeOutput3D(this,this->PreAttenuationSourceBuffer,&this->PreAttenuationOutputBuffer);
      }
      if (this->PostAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
        ComputeOutput3D(this,this->PostAttenuationSourceBuffer,&this->PostAttenuationOutputBuffer);
      }
      memcpy(&this->SourceChannelMap,(this->SourceChannelMap).ChannelDestinationGains,
             (longlong)(this->SourceChannelMap).CopySize);
    }
    if (*(int *)&(this->EncodedSoundfieldDownmixes).field_0x8 !=
        *(int *)&(this->EncodedSoundfieldDownmixes).field_0x34) {
      EncodeToSoundfieldFormats(this,param_1);
    }
  }
  return;
}

// CopyReverbPluginOutputData @ 14654c1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::CopyReverbPluginOutputData
          (FMixerSourceSubmixOutputBuffer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  piVar1 = &(this->ReverbPluginOutputBuffer).ArrayMax;
  piVar2 = &(this->ReverbPluginOutputBuffer).ArrayNum;
  *piVar2 = 0;
  if ((this->ReverbPluginOutputBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (this == (FMixerSourceSubmixOutputBuffer *)param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar3,(ForAnyElementType *)this,piVar2,piVar1);
    memcpy((this->ReverbPluginOutputBuffer).AllocatorInstance.Data + (longlong)iVar6 * 4,
           (param_1->AllocatorInstance).Data,(longlong)iVar3 << 2);
  }
  return;
}

// EncodeSoundfield @ 146552d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::EncodeSoundfield
          (FMixerSourceSubmixOutputBuffer *this,FSoundfieldData *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  ISoundfieldTranscodeStream *pIVar1;
  ISoundfieldEncodingSettingsProxy *pIVar2;
  ISoundfieldAudioPacket *pIVar3;
  FScriptContainerElement *pFVar4;
  ISoundfieldEncoderStream *pIVar5;
  code *pcVar6;
  ISoundfieldAudioPacket IVar7;
  bool bVar8;
  ISoundfieldEncodingSettingsProxy *pIVar9;
  TArray<float,TAlignedHeapAllocator<16>_> *local_a8;
  uint local_a0;
  ISoundfieldEncodingSettingsProxy *local_98;
  FSoundfieldSpeakerPositionalData *local_90;
  undefined **local_88;
  TArray<float,TAlignedHeapAllocator<16>_> local_80;
  uint local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  if (((param_1->EncoderSettings).Ptr == (ISoundfieldEncodingSettingsProxy *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSoundfieldData.EncoderSettings.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceOutputBuffer.cpp"
                         ,0x1c2,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_1->EncodedPacket).Ptr == (ISoundfieldAudioPacket *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSoundfieldData.EncodedPacket.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceOutputBuffer.cpp"
                         ,0x1c3,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)((longlong)*(param_1->EncodedPacket).Ptr + 0x18))();
  dStack_30 = UE::Math::TQuat<double>::Identity.W;
  local_38 = UE::Math::TQuat<double>::Identity.Z;
  dStack_40 = UE::Math::TQuat<double>::Identity.Y;
  local_48 = UE::Math::TQuat<double>::Identity.X;
  if ((param_1->SoundfieldTranscoder).Ptr == (ISoundfieldTranscodeStream *)0x0) {
    pIVar5 = (param_1->SoundfieldEncoder).Ptr;
    if (pIVar5 == (ISoundfieldEncoderStream *)0x0) {
      if (param_1->bIsUnrealAmbisonicsSubmix != false) {
        pIVar3 = (param_1->EncodedPacket).Ptr;
        if ((pIVar3 == (ISoundfieldAudioPacket *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("&InRef != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                               ,0x5c,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<float,TAlignedHeapAllocator<16>_>::operator=
                  ((TArray<float,TAlignedHeapAllocator<16>_> *)(pIVar3 + 1),param_2);
        *(uint *)(pIVar3 + 3) = this->NumSourceChannels;
        pIVar3[8] = pIVar3[4];
        pIVar3[9] = pIVar3[5];
        pIVar3[10] = pIVar3[6];
        pIVar3[0xb] = pIVar3[7];
        IVar7 = (ISoundfieldAudioPacket)(this->SoundSourceRotation).Y;
        pIVar3[4] = (ISoundfieldAudioPacket)(this->SoundSourceRotation).X;
        pIVar3[5] = IVar7;
        IVar7 = (ISoundfieldAudioPacket)(this->SoundSourceRotation).W;
        pIVar3[6] = (ISoundfieldAudioPacket)(this->SoundSourceRotation).Z;
        pIVar3[7] = IVar7;
      }
    }
    else {
      local_a0 = this->NumSourceChannels;
      local_98 = (param_1->EncoderSettings).Ptr;
      local_90 = &this->SoundfieldPositionalData;
      local_a8 = param_2;
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_a8,(param_1->EncodedPacket).Ptr);
    }
  }
  else {
    local_88 = &___7FAmbisonicsSoundfieldBuffer__6B_;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    if (&local_80 != param_2) {
      local_80.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = param_2->ArrayNum;
      local_80.ArrayMax = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
    }
    local_70 = this->NumSourceChannels;
    pIVar1 = (param_1->SoundfieldTranscoder).Ptr;
    pIVar2 = (param_1->EncoderSettings).Ptr;
    pIVar3 = (param_1->EncodedPacket).Ptr;
    local_68 = (this->SoundSourceRotation).X;
    dStack_60 = (this->SoundSourceRotation).Y;
    local_58 = (this->SoundSourceRotation).Z;
    dStack_50 = (this->SoundSourceRotation).W;
    pcVar6 = *(code **)((longlong)*pIVar1 + 8);
    pIVar9 = GetAmbisonicsSourceDefaultSettings();
    (*pcVar6)(pIVar1,&local_88,pIVar9,pIVar3,pIVar2);
    if (param_2 != &local_80) {
      pFVar4 = (param_2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_2->AllocatorInstance).Data = local_80.AllocatorInstance.Data;
      param_2->ArrayNum = local_80.ArrayNum;
      param_2->ArrayMax = local_80.ArrayMax;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 0;
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_88 = &___7FAmbisonicsSoundfieldBuffer__6B_;
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  return;
}

// EncodeToSoundfieldFormats @ 146552fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::EncodeToSoundfieldFormats
          (FMixerSourceSubmixOutputBuffer *this,FSpatializationParams *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
  *pTVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  TMap<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
  *pTVar11;
  bool bVar12;
  int iVar13;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uVar26;
  uint uVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined1 local_res8 [8];
  int local_res10;
  ulonglong local_res18;
  undefined4 local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  TMap<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
  *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined4 local_7c;
  
  if ((this->MixerDevice == (FMixerDevice *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MixerDevice",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceOutputBuffer.cpp"
                          ,0x181,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar14 = &this->InputChannelPositions;
  (this->SoundfieldPositionalData).NumChannels = this->NumSourceChannels;
  piVar1 = &(this->InputChannelPositions).ArrayMax;
  dVar5 = (param_1->EmitterWorldRotation).Y;
  iVar16 = 0;
  (this->SoundfieldPositionalData).Rotation.X = (param_1->EmitterWorldRotation).X;
  (this->SoundfieldPositionalData).Rotation.Y = dVar5;
  dVar5 = (param_1->EmitterWorldRotation).W;
  (this->SoundfieldPositionalData).Rotation.Z = (param_1->EmitterWorldRotation).Z;
  (this->SoundfieldPositionalData).Rotation.W = dVar5;
  (this->InputChannelPositions).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar14->AllocatorInstance,0,piVar1);
  }
  uVar26 = __xmm_80000000000000008000000000000000._4_4_;
  uVar20 = (uint)__xmm_80000000000000008000000000000000;
  local_res18 = 1;
  if (this->bIs3D != false) {
    if (this->NumSourceChannels == 1) {
      uVar22 = *(undefined8 *)((longlong)&(param_1->EmitterPosition).field0_0x0 + 0x10);
      fVar29 = (float)(double)CONCAT44((uint)((ulonglong)uVar22 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       (uint)uVar22 ^ (uint)__xmm_80000000000000008000000000000000);
      local_118 = 2;
      uVar22 = *(undefined8 *)((longlong)&(param_1->EmitterPosition).field0_0x0 + 8);
      uVar20 = (uint)uVar22 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar26 = (uint)((ulonglong)uVar22 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      fVar30 = (float)(param_1->EmitterPosition).field0_0x0._s_0.X;
      fStack_110 = FGenericPlatformMath::Atan2(fVar30,fVar29);
      fStack_114 = FGenericPlatformMath::Atan2
                             (SQRT(fVar30 * fVar30 + fVar29 * fVar29),
                              (float)(double)CONCAT44(uVar26,uVar20));
      pFVar8 = (pTVar14->AllocatorInstance).Data;
      fStack_10c = param_1->Distance;
      if (((pFVar8 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar13 = (this->InputChannelPositions).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar14->AllocatorInstance,piVar1);
      }
      uVar22 = CONCAT44(fStack_114,local_118);
      uVar28 = CONCAT44(fStack_10c,fStack_110);
    }
    else {
      if (this->NumSourceChannels != 2) goto LAB_146553488;
      uVar22 = *(undefined8 *)((longlong)&(param_1->LeftChannelPosition).field0_0x0 + 0x10);
      local_128 = 0;
      fVar29 = (float)(double)CONCAT44((uint)((ulonglong)uVar22 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       (uint)uVar22 ^ (uint)__xmm_80000000000000008000000000000000);
      uVar22 = *(undefined8 *)((longlong)&(param_1->LeftChannelPosition).field0_0x0 + 8);
      uVar21 = (uint)uVar22 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar27 = (uint)((ulonglong)uVar22 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      fVar30 = (float)(param_1->LeftChannelPosition).field0_0x0._s_0.X;
      fStack_120 = FGenericPlatformMath::Atan2(fVar30,fVar29);
      fStack_124 = FGenericPlatformMath::Atan2
                             (SQRT(fVar30 * fVar30 + fVar29 * fVar29),
                              (float)(double)CONCAT44(uVar27,uVar21));
      dVar5 = (param_1->LeftChannelPosition).field0_0x0._s_0.Y;
      dVar6 = (param_1->LeftChannelPosition).field0_0x0._s_0.Z;
      pFVar8 = (pTVar14->AllocatorInstance).Data;
      dVar7 = (param_1->LeftChannelPosition).field0_0x0._s_0.X;
      auVar23._0_8_ = dVar7 * dVar7;
      auVar23._8_8_ = 0;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar5 * dVar5 + auVar23._0_8_ + dVar6 * dVar6;
      auVar24 = sqrtpd(auVar23,auVar24);
      fStack_11c = (float)auVar24._0_8_;
      if (((pFVar8 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar13 = (this->InputChannelPositions).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar14->AllocatorInstance,piVar1);
      }
      (this->InputChannelPositions).ArrayNum = iVar13 + 1;
      pFVar8 = (pTVar14->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(ulonglong *)pFVar8 = CONCAT44(fStack_124,local_128);
      *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_11c,fStack_120);
      local_108 = 0;
      uVar22 = *(undefined8 *)((longlong)&(param_1->RightChannelPosition).field0_0x0 + 0x10);
      fVar29 = (float)(double)CONCAT44((uint)((ulonglong)uVar22 >> 0x20) ^ uVar26,
                                       (uint)uVar22 ^ uVar20);
      local_128 = 1;
      uVar22 = *(undefined8 *)((longlong)&(param_1->RightChannelPosition).field0_0x0 + 8);
      fVar30 = (float)(param_1->RightChannelPosition).field0_0x0._s_0.X;
      fStack_100 = FGenericPlatformMath::Atan2(fVar30,fVar29);
      fStack_104 = FGenericPlatformMath::Atan2
                             (SQRT(fVar30 * fVar30 + fVar29 * fVar29),
                              (float)(double)CONCAT44((uint)((ulonglong)uVar22 >> 0x20) ^ uVar26,
                                                      (uint)uVar22 ^ uVar20));
      dVar5 = (param_1->RightChannelPosition).field0_0x0._s_0.Y;
      dVar6 = (param_1->RightChannelPosition).field0_0x0._s_0.Z;
      pFVar8 = (pTVar14->AllocatorInstance).Data;
      dVar7 = (param_1->RightChannelPosition).field0_0x0._s_0.X;
      auVar25._0_8_ = dVar7 * dVar7;
      auVar25._8_8_ = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar5 * dVar5 + auVar25._0_8_ + dVar6 * dVar6;
      auVar24 = sqrtpd(auVar25,auVar10);
      fStack_fc = (float)auVar24._0_8_;
      if (((pFVar8 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar13 = (this->InputChannelPositions).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar14->AllocatorInstance,piVar1);
      }
      uVar22 = CONCAT44(fStack_104,local_108);
      uVar28 = CONCAT44(fStack_fc,fStack_100);
    }
    (this->InputChannelPositions).ArrayNum = iVar13 + 1;
    pFVar8 = (pTVar14->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar8 = uVar22;
    *(undefined8 *)(pFVar8 + 8) = uVar28;
    (this->SoundfieldPositionalData).ChannelPositions = pTVar14;
  }
LAB_146553488:
  if ((this->InputChannelPositions).ArrayNum == 0) {
    pTVar14 = FMixerDevice::GetDefaultPositionMap(this->MixerDevice,this->NumSourceChannels);
    (this->SoundfieldPositionalData).ChannelPositions = pTVar14;
  }
  puVar2 = &(this->EncodedSoundfieldDownmixes).field_0x10;
  iVar13 = *(int *)&(this->EncodedSoundfieldDownmixes).field_0x28;
  pTVar3 = &this->EncodedSoundfieldDownmixes;
  local_d8 = 0;
  iStack_dc = 0;
  if (iVar13 != 0) {
    puVar19 = *(uint **)&(this->EncodedSoundfieldDownmixes).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar20 = *puVar19;
    local_d8 = 0;
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar16;
      local_d8 = local_d8 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_dc = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_146553535;
      uVar20 = puVar19[lVar15 + 1];
    }
    local_res18 = (ulonglong)(-uVar20 & uVar20);
    uVar4 = local_res18 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iStack_dc = local_res10 + -1 + local_d8;
    if (iVar13 < iStack_dc) {
      iStack_dc = iVar13;
    }
  }
LAB_146553535:
  uVar20 = *(uint *)&(this->EncodedSoundfieldDownmixes).field_0x28;
  uStack_ec = (undefined4)local_res18;
  uVar26 = uVar20 & 0xffffffe0;
  uStack_d4 = local_7c;
  iStack_d0 = *(int *)&(this->EncodedSoundfieldDownmixes).field_0x8 -
              *(int *)&(this->EncodedSoundfieldDownmixes).field_0x34;
  uStack_e0 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_ec,iVar16);
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_c0._28_4_ = local_7c;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = pTVar3;
  iStack_f0 = iVar16;
  local_e8 = puVar2;
  local_c8 = pTVar3;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || (iVar13 < (int)uVar20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar21 = *(uint *)&(this->EncodedSoundfieldDownmixes).field_0x28;
  if (uVar20 != uVar21) {
    puVar18 = *(undefined1 **)&(this->EncodedSoundfieldDownmixes).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar17;
      uVar26 = uVar26 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_146553650;
      uVar20 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar20 = (int)lVar15 + -1 + uVar26;
    if ((int)uVar21 < (int)uVar20) {
      uVar20 = uVar21;
    }
  }
LAB_146553650:
  while( true ) {
    pTVar11 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c0.CurrentBitIndex == uVar20) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar11 == pTVar3))
    break;
    lVar15 = *(longlong *)pTVar11 + (longlong)TStack_c0.CurrentBitIndex * 0x40;
    if (this->PreAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      EncodeSoundfield(this,(FSoundfieldData *)(lVar15 + 0x10),this->PreAttenuationSourceBuffer);
    }
    if (this->PostAttenuationSourceBuffer != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      EncodeSoundfield(this,(FSoundfieldData *)(lVar15 + 0x10),this->PostAttenuationSourceBuffer);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  return;
}

// GetListenerRotation @ 146558b80

/* WARNING: Enum "Type": Some values do not have unique names */

TQuat<double> * __thiscall
Audio::FMixerSourceSubmixOutputBuffer::GetListenerRotation
          (FMixerSourceSubmixOutputBuffer *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->SoundfieldPositionalData).Rotation.Y;
  dVar2 = (this->SoundfieldPositionalData).Rotation.Z;
  dVar3 = (this->SoundfieldPositionalData).Rotation.W;
  __return_storage_ptr__->X = (this->SoundfieldPositionalData).Rotation.X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetReverbPluginOutputData @ 14655a780

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall
Audio::FMixerSourceSubmixOutputBuffer::GetReverbPluginOutputData
          (FMixerSourceSubmixOutputBuffer *this)

{
  return (float *)(this->ReverbPluginOutputBuffer).AllocatorInstance.Data;
}

// GetSoundFieldPacket @ 14655add0

/* WARNING: Enum "Type": Some values do not have unique names */

ISoundfieldAudioPacket * __thiscall
Audio::FMixerSourceSubmixOutputBuffer::GetSoundFieldPacket
          (FMixerSourceSubmixOutputBuffer *this,FSoundfieldEncodingKey *param_1)

{
  FSoundfieldData *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_1->SoundfieldFormat).Number;
  uVar4 = param_1->EncodingSettingsID - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  pFVar1 = TMapBase<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
           ::FindOrAddImpl<FSoundfieldEncodingKey_const_&>
                     ((TMapBase<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
                       *)&this->EncodedSoundfieldDownmixes,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,
                      param_1);
  return (pFVar1->EncodedPacket).Ptr;
}

// GetSoundfieldPacket @ 14655b200

/* WARNING: Enum "Type": Some values do not have unique names */

ISoundfieldAudioPacket * __thiscall
Audio::FMixerSourceSubmixOutputBuffer::GetSoundfieldPacket
          (FMixerSourceSubmixOutputBuffer *this,FSoundfieldEncodingKey *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData> *pTVar5;
  ISoundfieldAudioPacket *pIVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar8 = (param_1->SoundfieldFormat).Number;
  uVar10 = param_1->EncodingSettingsID - uVar8 ^ uVar8 >> 0xd;
  uVar7 = (-0x61c88647 - uVar10) - uVar8 ^ uVar10 << 8;
  uVar12 = (uVar8 - uVar10) - uVar7 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 >> 0xc;
  uVar8 = (uVar7 - uVar10) - uVar12 ^ uVar10 << 0x10;
  uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar7 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 3;
  uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 10;
  if (*(int *)&(this->EncodedSoundfieldDownmixes).field_0x8 !=
      *(int *)&(this->EncodedSoundfieldDownmixes).field_0x34) {
    puVar9 = *(undefined1 **)&(this->EncodedSoundfieldDownmixes).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->EncodedSoundfieldDownmixes).field_0x38;
    }
    iVar11 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(this->EncodedSoundfieldDownmixes).field_0x48 - 1U &
                               ((uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xf)) * 4);
    if (iVar11 != -1) {
      lVar1 = *(longlong *)&(this->EncodedSoundfieldDownmixes).field_0x0;
      do {
        lVar4 = (longlong)iVar11 * 0x40;
        if ((*(FName *)(lVar4 + lVar1) == param_1->SoundfieldFormat) &&
           (*(int *)(lVar4 + 8 + lVar1) == param_1->EncodingSettingsID)) {
          if (iVar11 == -1) {
            return (ISoundfieldAudioPacket *)0x0;
          }
          pTVar5 = TSet<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>,FDefaultSetAllocator>
                           *)&this->EncodedSoundfieldDownmixes,param_1);
          if ((pTVar5 == (TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>
                          *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pIVar6 = (ISoundfieldAudioPacket *)(*pcVar2)();
            return pIVar6;
          }
          return *(ISoundfieldAudioPacket **)&pTVar5->field_0x28;
        }
        iVar11 = *(int *)(lVar4 + 0x38 + lVar1);
      } while (iVar11 != -1);
    }
  }
  return (ISoundfieldAudioPacket *)0x0;
}

// MixOutput @ 146562900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::MixOutput
          (FMixerSourceSubmixOutputBuffer *this,float param_1,EMixerSourceSubmixSendStage param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  TArrayView<float,int> *pTVar1;
  TArrayView<float_const_,int> *pTVar2;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28 [2];
  
  if (param_2 == PostDistanceAttenuation) {
    pTVar1 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_38,param_3);
    local_58.DataPtr = pTVar1->DataPtr;
    local_58.ArrayNum = pTVar1->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    pTVar2 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_const_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (local_28,&this->PostAttenuationOutputBuffer);
    local_48.DataPtr = pTVar2->DataPtr;
    local_48.ArrayNum = pTVar2->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
    ArrayMixIn(&local_48,&local_58,param_1);
    return;
  }
  pTVar1 = TArrayView<float,int>::
           TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                     ((TArrayView<float,int> *)local_28,param_3);
  local_48.DataPtr = pTVar1->DataPtr;
  local_48.ArrayNum = pTVar1->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
  pTVar2 = TArrayView<float_const_,int>::
           TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_const_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                     ((TArrayView<float_const_,int> *)&local_38,&this->PreAttenuationOutputBuffer);
  local_58.DataPtr = pTVar2->DataPtr;
  local_58.ArrayNum = pTVar2->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
  ArrayMixIn((TArrayView<float_const_,int> *)&local_58,(TArrayView<float,int> *)&local_48,param_1);
  return;
}

// Reset @ 14656f350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::Reset
          (FMixerSourceSubmixOutputBuffer *this,FMixerSourceSubmixOutputBufferSettings *param_1)

{
  TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
  *pTVar1;
  TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> *pTVar5;
  ISoundfieldDecoderStream *pIVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ISoundfieldTranscodeStream *pIVar10;
  ISoundfieldEncoderStream *pIVar11;
  ISoundfieldAudioPacket *pIVar12;
  code *pcVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  char cVar16;
  TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> TVar17;
  ulonglong uVar18;
  FSoundfieldData *pFVar19;
  undefined8 *puVar20;
  FName FVar21;
  longlong *plVar22;
  ISoundfieldEncodingSettingsProxy *pIVar23;
  ISoundfieldEncodingSettingsProxy *pIVar24;
  FSoundfieldData *pFVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *pTVar31;
  TMap<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
  *this_00;
  float fVar32;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  TMap<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
  *local_e0;
  FSoundfieldEncodingKey local_d8;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  FScriptContainerElement *local_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [16];
  undefined1 local_70 [48];
  
  this->bIs3D = param_1->bIs3D;
  this->bIsVorbis = param_1->bIsVorbis;
  uVar26 = param_1->NumOutputChannels;
  this->NumOutputChannels = uVar26;
  uVar28 = param_1->NumSourceChannels;
  this->NumSourceChannels = uVar28;
  iVar27 = uVar28 * uVar26 * 4;
  (this->SourceChannelMap).CopySize = iVar27;
  memset(&this->SourceChannelMap,0,(longlong)iVar27);
  memset((this->SourceChannelMap).ChannelDestinationGains,0,
         (longlong)(this->SourceChannelMap).CopySize);
  (this->SourceChannelMap).bIsInit = false;
  piVar3 = &(this->PreAttenuationOutputBuffer).ArrayMax;
  piVar4 = &(this->PreAttenuationOutputBuffer).ArrayNum;
  *piVar4 = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->PreAttenuationOutputBuffer).AllocatorInstance,0,piVar3);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumFrames * this->NumOutputChannels,
             &(this->PreAttenuationOutputBuffer).AllocatorInstance,piVar4,piVar3);
  piVar3 = &(this->PostAttenuationOutputBuffer).ArrayMax;
  piVar4 = &(this->PostAttenuationOutputBuffer).ArrayNum;
  *piVar4 = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->PostAttenuationOutputBuffer).AllocatorInstance,0,piVar3);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumOutputChannels * this->NumFrames,
             &(this->PostAttenuationOutputBuffer).AllocatorInstance,piVar4,piVar3);
  this_00 = &this->EncodedSoundfieldDownmixes;
  this->PostAttenuationSourceBuffer = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  this->PreAttenuationSourceBuffer = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  local_e0 = this_00;
  TSet<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>,FDefaultSetAllocator>
           *)this_00);
  pTVar5 = &this->SoundfieldDecoder;
  pIVar6 = pTVar5->Ptr;
  if (pIVar6 != (ISoundfieldDecoderStream *)0x0) {
    pTVar5->Ptr = (ISoundfieldDecoderStream *)0x0;
    (**(code **)*pIVar6)(pIVar6,1);
  }
  this->bIsInitialDownmix = true;
  if (param_1->bIsSoundfield != false) {
    TVar17 = CreateDefaultSourceAmbisonicsDecoder((FMixerDevice *)&local_c8);
    if ((ISoundfieldDecoderStream *)pTVar5 != TVar17.Ptr) {
      pIVar6 = pTVar5->Ptr;
      pTVar5->Ptr = (ISoundfieldDecoderStream *)*TVar17.Ptr;
      *TVar17.Ptr = (ISoundfieldDecoderStream)0x0;
      if (pIVar6 != (ISoundfieldDecoderStream *)0x0) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
    }
    if (local_c8 != (undefined8 *)0x0) {
      (**(code **)*local_c8)(local_c8,1);
    }
  }
  local_res20 = (param_1->SoundfieldSubmixSends).ArrayNum;
  uVar18 = (ulonglong)(int)local_res20;
  pFVar30 = (param_1->SoundfieldSubmixSends).AllocatorInstance.Data;
  local_a0 = pFVar30 + uVar18 * 0x10;
  while( true ) {
    pFVar14 = local_a0;
    if ((param_1->SoundfieldSubmixSends).ArrayNum != (int)uVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar30 == pFVar14) {
      return;
    }
    if ((*(longlong *)pFVar30 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    lVar7 = *(longlong *)pFVar30;
    if (((*(longlong *)(lVar7 + 0x170) == 0) || (*(longlong *)(lVar7 + 0x1d0) == 0)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSoundfieldSubmix() && SoundfieldStreams.Settings.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                            ,0xaa3,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    plVar8 = *(longlong **)(lVar7 + 0x170);
    plVar22 = *(longlong **)(lVar7 + 0x1d0);
    if (plVar8 == (longlong *)0x0) {
      local_d8.SoundfieldFormat = ISoundfieldFactory::GetFormatNameForNoEncoding();
    }
    else {
      local_d8.SoundfieldFormat = (FName)(**(code **)(*plVar8 + 8))(plVar8,local_98);
    }
    local_d8.SoundfieldFormat = *(FName *)local_d8.SoundfieldFormat;
    local_d8.EncodingSettingsID = (**(code **)(*plVar22 + 8))(plVar22);
    uVar29 = local_d8.EncodingSettingsID - local_d8.SoundfieldFormat.Number ^
             local_d8.SoundfieldFormat.Number >> 0xd;
    uVar28 = (-0x61c88647 - uVar29) - local_d8.SoundfieldFormat.Number ^ uVar29 << 8;
    uVar26 = (local_d8.SoundfieldFormat.Number - uVar28) - uVar29 ^ uVar28 >> 0xd;
    uVar29 = (uVar29 - uVar26) - uVar28 ^ uVar26 >> 0xc;
    uVar28 = (uVar28 - uVar26) - uVar29 ^ uVar29 << 0x10;
    uVar26 = (uVar26 - uVar28) - uVar29 ^ uVar28 >> 5;
    uVar29 = (uVar29 - uVar26) - uVar28 ^ uVar26 >> 3;
    uVar28 = (uVar28 - uVar29) - uVar26 ^ uVar29 << 10;
    pFVar19 = TMapBase<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
              ::FindOrAddImpl<FSoundfieldEncodingKey_const_&>
                        ((TMapBase<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
                          *)this_00,(uVar26 - uVar28) - uVar29 ^ uVar28 >> 0xf,&local_d8);
    if ((*(longlong *)pFVar30 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    plVar8 = *(longlong **)(*(longlong *)pFVar30 + 0x170);
    if ((plVar8 == (longlong *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Factory",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceOutputBuffer.cpp"
                            ,0x60,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((*(longlong *)pFVar30 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) break;
    lVar7 = *(longlong *)pFVar30;
    uStack_ec = 0;
    local_e8 = *(undefined8 *)(lVar7 + 0xb8);
    if (*(longlong *)(lVar7 + 0xb8) != 0) {
      uStack_ec = *(undefined4 *)(*(longlong *)(lVar7 + 0xb8) + 0x8c);
    }
    if (*(longlong *)(lVar7 + 0xb8) == 0) {
      fVar32 = 0.0;
    }
    else {
      fVar32 = (float)*(int *)(*(longlong *)(lVar7 + 0xb8) + 0x84);
    }
    _local_f0 = CONCAT44(uStack_ec,(int)(longlong)fVar32);
    _local_f8 = CONCAT44(this->NumSourceChannels,1);
    if ((lVar7 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    lVar7 = *(longlong *)pFVar30;
    if ((*(longlong *)(lVar7 + 0x170) == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSoundfieldSubmix()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                            ,0x45a,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((*(longlong *)(lVar7 + 0x1d0) == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("SoundfieldStreams.Settings.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                            ,0x45b,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    puVar20 = (undefined8 *)
              (**(code **)(**(longlong **)(lVar7 + 0x1d0) + 0x10))
                        (*(longlong **)(lVar7 + 0x1d0),&local_c0);
    pTVar1 = &pFVar19->EncoderSettings;
    if (pTVar1 != (TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
                   *)puVar20) {
      pIVar23 = pTVar1->Ptr;
      pTVar1->Ptr = (ISoundfieldEncodingSettingsProxy *)*puVar20;
      *puVar20 = 0;
      if (pIVar23 != (ISoundfieldEncodingSettingsProxy *)0x0) {
        (**(code **)*pIVar23)(pIVar23,1);
      }
    }
    if (local_c0 != (undefined8 *)0x0) {
      (**(code **)*local_c0)(local_c0,1);
    }
    if (param_1->bIsSoundfield == false) {
      if ((pTVar1->Ptr == (ISoundfieldEncodingSettingsProxy *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("SoundfieldData.EncoderSettings.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceOutputBuffer.cpp"
                              ,0x75,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar25 = (FSoundfieldData *)
                (**(code **)(*plVar8 + 0x10))
                          (plVar8,&local_b0,&local_f8,(pFVar19->EncoderSettings).Ptr);
      if (pFVar19 != pFVar25) {
        pIVar11 = (pFVar19->SoundfieldEncoder).Ptr;
        (pFVar19->SoundfieldEncoder).Ptr = (pFVar25->SoundfieldEncoder).Ptr;
        (pFVar25->SoundfieldEncoder).Ptr = (ISoundfieldEncoderStream *)0x0;
        if (pIVar11 != (ISoundfieldEncoderStream *)0x0) {
          (**(code **)*pIVar11)(pIVar11,1);
        }
      }
      if (local_b0 != (undefined8 *)0x0) {
        (**(code **)*local_b0)(local_b0,1);
      }
    }
    else {
      FVar21 = GetUnrealAmbisonicsFormatName();
      plVar22 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_80);
      if (*plVar22 == *(longlong *)FVar21) {
        pFVar19->bIsUnrealAmbisonicsSubmix = true;
      }
      else {
        pcVar13 = *(code **)(*plVar8 + 0x40);
        pIVar23 = GetAmbisonicsSourceDefaultSettings();
        FVar21 = GetUnrealAmbisonicsFormatName();
        cVar16 = (*pcVar13)(plVar8,*(undefined8 *)FVar21,pIVar23);
        if (cVar16 != '\0') {
          lVar7 = *plVar8;
          pIVar23 = (pFVar19->EncoderSettings).Ptr;
          puVar20 = (undefined8 *)(**(code **)(lVar7 + 8))(plVar8,local_70);
          uVar9 = *puVar20;
          pIVar24 = GetAmbisonicsSourceDefaultSettings();
          FVar21 = GetUnrealAmbisonicsFormatName();
          puVar20 = (undefined8 *)
                    (**(code **)(lVar7 + 0x20))
                              (plVar8,&local_b8,*(undefined8 *)FVar21,pIVar24,uVar9,pIVar23,
                               &local_f8);
          pTVar2 = &pFVar19->SoundfieldTranscoder;
          if (pTVar2 != (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>
                         *)puVar20) {
            pIVar10 = pTVar2->Ptr;
            pTVar2->Ptr = (ISoundfieldTranscodeStream *)*puVar20;
            *puVar20 = 0;
            if (pIVar10 != (ISoundfieldTranscodeStream *)0x0) {
              (**(code **)*pIVar10)(pIVar10,1);
            }
          }
          this_00 = local_e0;
          if (local_b8 != (undefined8 *)0x0) {
            (**(code **)*local_b8)(local_b8,1);
            this_00 = local_e0;
          }
        }
      }
    }
    puVar20 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,&local_a8);
    pTVar31 = &pFVar19->EncodedPacket;
    if (pTVar31 !=
        (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *)puVar20) {
      pIVar12 = pTVar31->Ptr;
      pTVar31->Ptr = (ISoundfieldAudioPacket *)*puVar20;
      *puVar20 = 0;
      if (pIVar12 != (ISoundfieldAudioPacket *)0x0) {
        (**(code **)*pIVar12)(pIVar12,1);
      }
    }
    if (local_a8 != (undefined8 *)0x0) {
      (**(code **)*local_a8)(local_a8,1);
    }
    pFVar30 = pFVar30 + 0x10;
    uVar18 = (ulonglong)local_res20;
  }
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

// SetChannelMap @ 146572a70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerSourceSubmixOutputBuffer::SetChannelMap
          (FMixerSourceSubmixOutputBuffer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  size_t _Size;
  bool bVar4;
  TArray<float,TAlignedHeapAllocator<16>_> local_18;
  
  bVar4 = false;
  _Size = (size_t)(this->SourceChannelMap).CopySize;
  uVar3 = _Size >> 2;
  iVar2 = (int)uVar3;
  if (param_1->ArrayNum == iVar2) {
    _Src = (param_1->AllocatorInstance).Data;
    memcpy((this->SourceChannelMap).ChannelDestinationGains,_Src,_Size);
    if ((this->SourceChannelMap).bIsInit == false) {
      memcpy(&this->SourceChannelMap,_Src,(longlong)(this->SourceChannelMap).CopySize);
      (this->SourceChannelMap).bIsInit = true;
    }
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    bVar4 = this->bIs3D == false;
    if (bVar4) {
      FMixerDevice::Get2DChannelMap
                (this->bIsVorbis,this->NumSourceChannels,
                 (int)((uVar3 & 0xffffffff) / (ulonglong)this->NumSourceChannels),param_2,&local_18)
      ;
    }
    else {
      iVar1 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar2,&local_18.AllocatorInstance,&local_18.ArrayNum,&local_18.ArrayMax
                        );
      memset(local_18.AllocatorInstance.Data + (longlong)iVar1 * 4,0,(longlong)iVar2 << 2);
    }
    _Src_00.Data = local_18.AllocatorInstance.Data;
    bVar4 = !bVar4;
    memcpy((this->SourceChannelMap).ChannelDestinationGains,local_18.AllocatorInstance.Data,
           (longlong)(this->SourceChannelMap).CopySize);
    if ((this->SourceChannelMap).bIsInit == false) {
      memcpy(&this->SourceChannelMap,_Src_00.Data,(longlong)(this->SourceChannelMap).CopySize);
      (this->SourceChannelMap).bIsInit = true;
    }
    if (_Src_00.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src_00.Data);
      return bVar4;
    }
  }
  return bVar4;
}

// SetNumOutputChannels @ 1465734a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::SetNumOutputChannels
          (FMixerSourceSubmixOutputBuffer *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  this->NumOutputChannels = param_1;
  iVar3 = param_1 * this->NumSourceChannels * 4;
  (this->SourceChannelMap).CopySize = iVar3;
  memset(&this->SourceChannelMap,0,(longlong)iVar3);
  memset((this->SourceChannelMap).ChannelDestinationGains,0,
         (longlong)(this->SourceChannelMap).CopySize);
  (this->SourceChannelMap).bIsInit = false;
  piVar1 = &(this->PreAttenuationOutputBuffer).ArrayMax;
  piVar2 = &(this->PreAttenuationOutputBuffer).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->PreAttenuationOutputBuffer).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumOutputChannels * this->NumFrames,
             &(this->PreAttenuationOutputBuffer).AllocatorInstance,piVar2,piVar1);
  piVar1 = &(this->PostAttenuationOutputBuffer).ArrayMax;
  piVar2 = &(this->PostAttenuationOutputBuffer).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->PostAttenuationOutputBuffer).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumFrames * this->NumOutputChannels,
             &(this->PostAttenuationOutputBuffer).AllocatorInstance,piVar2,piVar1);
  return;
}

// SetPostAttenuationSourceBuffer @ 1465742a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::SetPostAttenuationSourceBuffer
          (FMixerSourceSubmixOutputBuffer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  this->PostAttenuationSourceBuffer = param_1;
  return;
}

// SetPreAttenuationSourceBuffer @ 1465742b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::SetPreAttenuationSourceBuffer
          (FMixerSourceSubmixOutputBuffer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  this->PreAttenuationSourceBuffer = param_1;
  return;
}

