// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 13

// FSubmixEffectMultibandCompressor @ 14f0b8b50

FSubmixEffectMultibandCompressor * __thiscall
FSubmixEffectMultibandCompressor::FSubmixEffectMultibandCompressor
          (FSubmixEffectMultibandCompressor *this)

{
  int *piVar1;
  int *piVar2;
  FDelegateHandle FVar3;
  
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->field_0x70 = 0xffffffff;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &___7FSubmixEffectMultibandCompressor__6B_;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined4 *)&this->field_0x84 = 0xffffffff;
  (this->AudioExternal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioExternal).ArrayNum = 0;
  (this->AudioExternal).ArrayMax = 0;
  (this->KeySource).Type = Default;
  (this->KeySource).NumChannels = 0;
  (this->KeySource).ObjectId = 0xffffffff;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->KeySource).MutateSourceCritSection,4000);
  (this->KeySource).Patch.Object = (FPatchOutput *)0x0;
  (this->KeySource).Patch.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  piVar1 = &(this->ScratchBuffer).ArrayNum;
  piVar2 = &(this->ScratchBuffer).ArrayMax;
  *piVar1 = 0;
  (this->DeviceCreatedHandle).ID = 0;
  (this->DeviceDestroyedHandle).ID = 0;
  (this->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  (this->DynamicsProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicsProcessors).ArrayNum = 0;
  (this->DynamicsProcessors).ArrayMax = 0;
  (this->KeyBandSplitter).FilterOrder = FourPole;
  (this->KeyBandSplitter).NumBands = 1;
  (this->KeyBandSplitter).NumChannels = 2;
  (this->KeyBandSplitter).SampleRate = 48000.0;
  (this->KeyBandSplitter).SharedBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyBandSplitter).SharedBuffer.ArrayNum = 0;
  (this->KeyBandSplitter).SharedBuffer.ArrayMax = 0;
  (this->KeyBandSplitter).BandWorkBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyBandSplitter).BandWorkBuffer.ArrayNum = 0;
  (this->KeyBandSplitter).BandWorkBuffer.ArrayMax = 0;
  (this->KeyBandSplitter).SharedAlignedBuffer.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->KeyBandSplitter).SharedAlignedBuffer.ArrayNum = 0;
  (this->KeyBandSplitter).SharedAlignedBuffer.ArrayMax = 0;
  (this->KeyBandSplitter).BandAlignedBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyBandSplitter).BandAlignedBuffer.ArrayNum = 0;
  (this->KeyBandSplitter).BandAlignedBuffer.ArrayMax = 0;
  (this->KeyBandSplitter).BandFilters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyBandSplitter).BandFilters.ArrayNum = 0;
  (this->KeyBandSplitter).BandFilters.ArrayMax = 0;
  (this->KeyBandSplitter).Crossovers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyBandSplitter).Crossovers.ArrayNum = 0;
  (this->KeyBandSplitter).Crossovers.ArrayMax = 0;
  (this->KeyMultiBandBuffer).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyMultiBandBuffer).Buffer.ArrayNum = 0;
  (this->KeyMultiBandBuffer).Buffer.ArrayMax = 0;
  (this->KeyMultiBandBuffer).NumBands = 0;
  (this->KeyMultiBandBuffer).NumSamples = 0;
  (this->BandSplitter).FilterOrder = FourPole;
  (this->BandSplitter).NumBands = 1;
  (this->BandSplitter).NumChannels = 2;
  (this->BandSplitter).SampleRate = 48000.0;
  (this->BandSplitter).SharedBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BandSplitter).SharedBuffer.ArrayNum = 0;
  (this->BandSplitter).SharedBuffer.ArrayMax = 0;
  (this->BandSplitter).BandWorkBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BandSplitter).BandWorkBuffer.ArrayNum = 0;
  (this->BandSplitter).BandWorkBuffer.ArrayMax = 0;
  (this->BandSplitter).SharedAlignedBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BandSplitter).SharedAlignedBuffer.ArrayNum = 0;
  (this->BandSplitter).SharedAlignedBuffer.ArrayMax = 0;
  (this->BandSplitter).BandAlignedBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BandSplitter).BandAlignedBuffer.ArrayNum = 0;
  (this->BandSplitter).BandAlignedBuffer.ArrayMax = 0;
  (this->BandSplitter).BandFilters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BandSplitter).BandFilters.ArrayNum = 0;
  (this->BandSplitter).BandFilters.ArrayMax = 0;
  (this->BandSplitter).Crossovers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BandSplitter).Crossovers.ArrayNum = 0;
  (this->BandSplitter).Crossovers.ArrayMax = 0;
  (this->MultiBandBuffer).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffer).Buffer.ArrayNum = 0;
  (this->MultiBandBuffer).Buffer.ArrayMax = 0;
  (this->MultiBandBuffer).NumBands = 0;
  (this->MultiBandBuffer).NumSamples = 0;
  this->PrevNumBands = 0;
  (this->PrevCrossovers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevCrossovers).ArrayNum = 0;
  (this->PrevCrossovers).ArrayMax = 0;
  this->bPrevFourPole = true;
  this->NumChannels = 0;
  this->FrameSize = 0;
  this->SampleRate = 48000.0;
  this->bInitialized = false;
  this->bBypass = false;
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,0x2000,&(this->ScratchBuffer).AllocatorInstance,piVar1,piVar2);
  FVar3 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
          AddRaw<FSubmixEffectMultibandCompressor>
                    ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                      *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
                     (FSubmixEffectMultibandCompressor *)&stack0x00000008,(pmf_249ef0ee)this);
                    /* WARNING: Load size is inaccurate */
  (this->DeviceCreatedHandle).ID = *FVar3.ID;
  FVar3 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
          AddRaw<FSubmixEffectMultibandCompressor>
                    ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                      *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
                     (FSubmixEffectMultibandCompressor *)&stack0x00000008,(pmf_249ef0ee)this);
                    /* WARNING: Load size is inaccurate */
  (this->DeviceDestroyedHandle).ID = *FVar3.ID;
  return this;
}

// ~FSubmixEffectMultibandCompressor @ 14f0bf610

void __thiscall
FSubmixEffectMultibandCompressor::~FSubmixEffectMultibandCompressor
          (FSubmixEffectMultibandCompressor *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FSubmixEffectMultibandCompressor__6B_;
  ResetKey(this);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
             (FDelegateHandle)(this->DeviceCreatedHandle).ID);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
             (FDelegateHandle)(this->DeviceDestroyedHandle).ID);
  pFVar1 = (this->PrevCrossovers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MultiBandBuffer).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FLinkwitzRileyBandSplitter::~FLinkwitzRileyBandSplitter(&this->BandSplitter);
  pFVar1 = (this->KeyMultiBandBuffer).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FLinkwitzRileyBandSplitter::~FLinkwitzRileyBandSplitter(&this->KeyBandSplitter);
  DestructItems<Audio::FDynamicsProcessor,int>
            ((FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data,
             (this->DynamicsProcessors).ArrayNum);
  pFVar1 = (this->DynamicsProcessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeySource).Patch.SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->KeySource).MutateSourceCritSection);
  pFVar1 = (this->AudioExternal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// GetDeviceId @ 14f0d92d0

uint __thiscall
FSubmixEffectMultibandCompressor::GetDeviceId(FSubmixEffectMultibandCompressor *this)

{
  return this->DeviceId;
}

// GetMixerDevice @ 14f0d9d60

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerDevice * __thiscall
FSubmixEffectMultibandCompressor::GetMixerDevice(FSubmixEffectMultibandCompressor *this)

{
  FAudioDeviceManager *this_00;
  FMixerDevice *pFVar1;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    pFVar1 = (FMixerDevice *)FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->DeviceId);
    return pFVar1;
  }
  return (FMixerDevice *)0x0;
}

// Init @ 14f0e5360

void __thiscall
FSubmixEffectMultibandCompressor::Init
          (FSubmixEffectMultibandCompressor *this,FSoundEffectSubmixInitData *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ESubmixEffectDynamicsKeySource EVar3;
  longlong lVar4;
  int iVar5;
  
  this->NumChannels = 0;
  this->SampleRate = param_1->SampleRate;
  Audio::FMultibandBuffer::Init(&this->MultiBandBuffer,4,0x800);
  Audio::FMultibandBuffer::Init(&this->KeyMultiBandBuffer,4,0x800);
  this->DeviceId = param_1->DeviceID;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar1 != (UObject *)0x0) {
    pUVar2 = USubmixEffectMultibandCompressorPreset::StaticClass();
    iVar5 = (int)pUVar2->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar2->_padding_)) {
      if (pUVar1[5].field_0xb == '\x01') {
        lVar4 = *(longlong *)&pUVar1[5].field_0x10;
        if (lVar4 == 0) {
          return;
        }
        EVar3 = AudioBus;
        iVar5 = *(byte *)(lVar4 + 0x30) + 1;
      }
      else {
        if (pUVar1[5].field_0xb != '\x02') {
          return;
        }
        lVar4 = *(longlong *)&pUVar1[5].field_0x18;
        if (lVar4 == 0) {
          return;
        }
        iVar5 = 0;
        EVar3 = Submix;
      }
      FKeySource::Update(&this->KeySource,EVar3,*(uint *)(lVar4 + 0xc),iVar5);
    }
  }
  return;
}

// Initialize @ 14f0e6de0

void __thiscall
FSubmixEffectMultibandCompressor::Initialize
          (FSubmixEffectMultibandCompressor *this,FSubmixEffectMultibandCompressorSettings *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Audio::FDynamicsProcessor,TSizedDefaultAllocator<32>_> *this_00;
  int iVar3;
  FDynamicsProcessor *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  iVar3 = (param_1->Bands).ArrayNum;
  if (iVar3 < 1) {
    this->bInitialized = false;
    piVar1 = &(this->DynamicsProcessors).ArrayMax;
    pFVar4 = (FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data;
    iVar3 = (this->DynamicsProcessors).ArrayNum;
    if ((this->DynamicsProcessors).ArrayMax < 0) {
      DestructItems<Audio::FDynamicsProcessor,int>(pFVar4,iVar3);
      (this->DynamicsProcessors).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf8,8,0,&(this->DynamicsProcessors).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<Audio::FDynamicsProcessor,int>(pFVar4,iVar3);
      (this->DynamicsProcessors).ArrayNum = 0;
    }
    (this->PrevCrossovers).ArrayNum = 0;
    if ((this->PrevCrossovers).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->PrevCrossovers).AllocatorInstance,0,&(this->PrevCrossovers).ArrayMax)
      ;
      return;
    }
  }
  else {
    pTVar2 = &this->PrevCrossovers;
    uVar9 = iVar3 - 1;
    this->FrameSize = this->NumChannels << 2;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    uVar12 = 0;
    piVar1 = &(this->PrevCrossovers).ArrayMax;
    (this->PrevCrossovers).ArrayNum = 0;
    if ((this->PrevCrossovers).ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar9,&pTVar2->AllocatorInstance,0,piVar1);
    }
    uVar13 = uVar12;
    uVar15 = uVar12;
    if (0 < (int)uVar9) {
      do {
        uVar14 = (uint)uVar15;
        uVar10 = 0;
        if ((int)uVar14 < (param_1->Bands).ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        pFVar11 = (param_1->Bands).AllocatorInstance.Data + uVar13;
        if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (this->PrevCrossovers).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PrevCrossovers).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             *(undefined4 *)pFVar11;
        uVar13 = uVar13 + 0x20;
        uVar15 = (ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < (int)uVar9);
    }
    bVar7 = param_1->bFourPole != false;
    Audio::FLinkwitzRileyBandSplitter::Init
              (&this->BandSplitter,this->NumChannels,this->SampleRate,bVar7 + TwoPole,true,pTVar2);
    Audio::FLinkwitzRileyBandSplitter::Init
              (&this->KeyBandSplitter,this->NumChannels,this->SampleRate,bVar7 + TwoPole,false,
               pTVar2);
    (this->MultiBandBuffer).NumBands = iVar3;
    Audio::FMultibandBuffer::Reset(&this->MultiBandBuffer);
    (this->KeyMultiBandBuffer).NumBands = iVar3;
    Audio::FMultibandBuffer::Reset(&this->KeyMultiBandBuffer);
    this_00 = &this->DynamicsProcessors;
    TArray<Audio::FDynamicsProcessor,TSizedDefaultAllocator<32>_>::Reset(this_00,iVar3);
    piVar1 = &(this->DynamicsProcessors).ArrayNum;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf8,8,iVar3,&this_00->AllocatorInstance,piVar1,
                       &(this->DynamicsProcessors).ArrayMax);
    DefaultConstructItems<Audio::FDynamicsProcessor,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0xf8,iVar3);
    uVar13 = uVar12;
    do {
      uVar10 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      Audio::FDynamicsProcessor::Init
                ((FDynamicsProcessor *)((this_00->AllocatorInstance).Data + uVar13),this->SampleRate
                 ,this->NumChannels);
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0xf8;
    } while ((int)(uVar10 + 1) < iVar3);
    this->PrevNumBands = (param_1->Bands).ArrayNum;
    this->bPrevFourPole = param_1->bFourPole;
    this->bInitialized = true;
  }
  return;
}

// OnDeviceCreated @ 14f0e9250

void __thiscall
FSubmixEffectMultibandCompressor::OnDeviceCreated
          (FSubmixEffectMultibandCompressor *this,uint param_1)

{
  int iVar1;
  USubmixEffectMultibandCompressorPreset *this_00;
  UClass *pUVar2;
  FSubmixEffectMultibandCompressorSettings *pFVar3;
  int iVar4;
  uint uVar5;
  FSubmixEffectMultibandCompressorSettings local_b8;
  FSubmixEffectMultibandCompressorSettings local_80;
  FSubmixEffectMultibandCompressorSettings local_48;
  
  iVar4 = 0;
  if (param_1 != this->DeviceId) {
    return;
  }
  this_00 = (USubmixEffectMultibandCompressorPreset *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (this_00 == (USubmixEffectMultibandCompressorPreset *)0x0) {
LAB_14f0e92b0:
    this_00 = (USubmixEffectMultibandCompressorPreset *)0x0;
  }
  else {
    pUVar2 = USubmixEffectMultibandCompressorPreset::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_14f0e92b0;
  }
  if (this_00 == (USubmixEffectMultibandCompressorPreset *)0x0) {
    local_b8.DynamicsProcessorType = Compressor;
    local_b8.PeakMode = RootMeanSquared;
    local_b8.LinkMode = Average;
    local_b8._3_1_ = 0;
    local_b8.bAnalogMode = true;
    local_b8.bFourPole = true;
    local_b8.bBypass = false;
    local_b8.KeySource = Default;
    local_b8._12_4_ = 0;
    local_b8._37_2_ = 0;
    local_b8.ExternalAudioBus.field0_0x0.DebugPtr = (TObjectPtr<UAudioBus>_u_0)0x0;
    local_b8.ExternalSubmix.field0_0x0.DebugPtr = (TObjectPtr<USoundSubmix>_u_0)0x0;
    local_b8._39_1_ = 0;
    local_b8.LookAheadMsec = 3.0;
    local_b8.KeyGainDb = 0.0;
    local_b8.bKeyAudition = false;
    local_b8.Bands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Bands.ArrayNum = 0;
    local_b8.Bands.ArrayMax = 0;
    FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings
              (&local_80,&local_b8);
    local_48.Bands.AllocatorInstance.Data = local_b8.Bands.AllocatorInstance.Data;
  }
  else {
    pFVar3 = USubmixEffectMultibandCompressorPreset::GetSettings(this_00,&local_48);
    FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings
              (&local_80,pFVar3);
  }
  if (local_48.Bands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Bands.AllocatorInstance.Data);
  }
  uVar5 = 0xffffffff;
  if (local_80.KeySource == AudioBus) {
    if (local_80.ExternalAudioBus.field0_0x0.DebugPtr == (TObjectPtr<UAudioBus>_u_0)0x0)
    goto LAB_14f0e9360;
    iVar1 = *(EAudioBusChannels *)((longlong)local_80.ExternalAudioBus.field0_0x0 + 0x30) + 1;
  }
  else if ((local_80.KeySource != Submix) ||
          (local_80.ExternalAudioBus.field0_0x0 = (TObjectPtr<UAudioBus>_u_0)local_80.ExternalSubmix
          , iVar1 = 0, local_80.ExternalSubmix.field0_0x0 == (TObjectPtr<USoundSubmix>_u_0)0x0))
  goto LAB_14f0e9360;
  iVar4 = iVar1;
  uVar5 = *(uint *)((longlong)&((UAudioBus *)local_80.ExternalAudioBus.field0_0x0)->_padding_ + 4);
LAB_14f0e9360:
  FKeySource::Update(&this->KeySource,local_80.KeySource,uVar5,iVar4);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
             (FDelegateHandle)(this->DeviceCreatedHandle).ID);
  if (local_80.Bands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Bands.AllocatorInstance.Data);
  }
  return;
}

// OnDeviceDestroyed @ 14f0e93b0

void __thiscall
FSubmixEffectMultibandCompressor::OnDeviceDestroyed
          (FSubmixEffectMultibandCompressor *this,uint param_1)

{
  if (param_1 == this->DeviceId) {
    ResetKey(this);
    TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
               (FDelegateHandle)(this->DeviceDestroyedHandle).ID);
    return;
  }
  return;
}

// OnPresetChanged @ 14f0ef0c0

void __thiscall
FSubmixEffectMultibandCompressor::OnPresetChanged(FSubmixEffectMultibandCompressor *this)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  USubmixEffectMultibandCompressorPreset *pUVar10;
  UClass *pUVar11;
  FSubmixEffectMultibandCompressorSettings *pFVar12;
  TObjectPtr<UAudioBus>_u_0 TVar13;
  uint uVar14;
  uint uVar15;
  USubmixEffectMultibandCompressorPreset *pUVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  FDynamicsProcessor *this_00;
  USubmixEffectMultibandCompressorPreset *pUVar23;
  Type local_res8;
  Type local_res10;
  FSubmixEffectMultibandCompressorSettings local_f8;
  FSubmixEffectMultibandCompressorSettings local_c0;
  FSubmixEffectMultibandCompressorSettings local_88;
  
  pUVar16 = (USubmixEffectMultibandCompressorPreset *)0x0;
  pUVar10 = (USubmixEffectMultibandCompressorPreset *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar10 == (USubmixEffectMultibandCompressorPreset *)0x0) {
LAB_14f0ef112:
    pUVar10 = pUVar16;
  }
  else {
    pUVar11 = USubmixEffectMultibandCompressorPreset::StaticClass();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) goto LAB_14f0ef112;
  }
  if (pUVar10 == (USubmixEffectMultibandCompressorPreset *)0x0) {
    local_c0.DynamicsProcessorType = Compressor;
    local_c0.PeakMode = RootMeanSquared;
    local_c0.LinkMode = Average;
    local_c0._3_1_ = 0;
    local_c0.bAnalogMode = true;
    local_c0.bFourPole = true;
    local_c0.bBypass = false;
    local_c0.KeySource = Default;
    local_c0._12_4_ = 0;
    local_c0._37_2_ = 0;
    local_c0.ExternalAudioBus.field0_0x0.DebugPtr = (TObjectPtr<UAudioBus>_u_0)0x0;
    local_c0.ExternalSubmix.field0_0x0.DebugPtr = (TObjectPtr<USoundSubmix>_u_0)0x0;
    local_c0._39_1_ = 0;
    local_c0.LookAheadMsec = 3.0;
    local_c0.KeyGainDb = 0.0;
    local_c0.bKeyAudition = false;
    local_c0.Bands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Bands.ArrayNum = 0;
    local_c0.Bands.ArrayMax = 0;
    FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings
              (&local_f8,&local_c0);
    local_88.Bands.AllocatorInstance.Data = local_c0.Bands.AllocatorInstance.Data;
  }
  else {
    pFVar12 = USubmixEffectMultibandCompressorPreset::GetSettings(pUVar10,&local_88);
    FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings
              (&local_f8,pFVar12);
  }
  if (local_88.Bands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Bands.AllocatorInstance.Data);
  }
  iVar9 = local_f8.Bands.ArrayNum;
  if ((local_f8.Bands.ArrayNum == 0) || (this->NumChannels == 0)) goto LAB_14f0ef86d;
  if ((this->bInitialized == false) ||
     (((local_f8.Bands.ArrayNum != this->PrevNumBands ||
       (local_f8.Bands.ArrayNum - 1U != (this->PrevCrossovers).ArrayNum)) ||
      (bVar8 = false, local_f8.bFourPole != this->bPrevFourPole)))) {
    bVar8 = true;
  }
  bVar7 = false;
  uVar19 = iVar9;
  if (0 < (this->PrevCrossovers).ArrayNum) {
    pTVar2 = &this->PrevCrossovers;
    pUVar10 = pUVar16;
    pUVar23 = pUVar16;
LAB_14f0ef220:
    uVar14 = (uint)pUVar16;
    uVar19 = 0;
    if ((int)uVar14 < iVar9) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar3 = *(float *)(local_f8.Bands.AllocatorInstance.Data +
                      (longlong)(&pUVar10->SettingsCritSect + -3) + 0x10);
    uVar19 = 0;
    if ((int)uVar14 < (this->PrevCrossovers).ArrayNum) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar19 = local_f8.Bands.ArrayNum;
    if (fVar3 == *(float *)((pTVar2->AllocatorInstance).Data +
                           (longlong)(&pUVar23->SettingsCritSect + -3) + 0x10))
    goto code_r0x00014f0ef2cd;
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)iVar9);
    }
    piVar1 = &(this->PrevCrossovers).ArrayMax;
    uVar14 = 0;
    (this->PrevCrossovers).ArrayNum = 0;
    if ((this->PrevCrossovers).ArrayMax < local_f8.Bands.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_f8.Bands.ArrayNum,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar19) {
      lVar20 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar14 < (int)uVar19) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        pFVar22 = local_f8.Bands.AllocatorInstance.Data + lVar20;
        if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->PrevCrossovers).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PrevCrossovers).ArrayNum = iVar9 + 1;
        uVar14 = uVar14 + 1;
        lVar20 = lVar20 + 0x20;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) =
             *(undefined4 *)pFVar22;
      } while ((int)uVar14 < (int)uVar19);
    }
    bVar7 = true;
  }
  goto LAB_14f0ef433;
code_r0x00014f0ef2cd:
  pUVar16 = (USubmixEffectMultibandCompressorPreset *)(ulonglong)(uVar14 + 1);
  pUVar10 = (USubmixEffectMultibandCompressorPreset *)&pUVar10->_padding_;
  pUVar23 = (USubmixEffectMultibandCompressorPreset *)((longlong)&pUVar23->_padding_ + 4);
  if ((this->PrevCrossovers).ArrayNum <= (int)(uVar14 + 1)) goto code_r0x00014f0ef2e4;
  goto LAB_14f0ef220;
code_r0x00014f0ef2e4:
  bVar7 = false;
  uVar19 = iVar9;
LAB_14f0ef433:
  uVar18 = 0;
  if (bVar8) {
    Initialize(this,&local_f8);
    uVar19 = local_f8.Bands.ArrayNum;
  }
  else if (bVar7) {
    Audio::FLinkwitzRileyBandSplitter::SetCrossovers(&this->BandSplitter,&this->PrevCrossovers);
    Audio::FLinkwitzRileyBandSplitter::SetCrossovers(&this->KeyBandSplitter,&this->PrevCrossovers);
  }
  this->bBypass = local_f8.bBypass;
  local_res10 = Peak;
  if (local_f8.DynamicsProcessorType == Compressor) {
LAB_14f0ef4b8:
    local_res8 = Compressor;
  }
  else if (local_f8.DynamicsProcessorType == Limiter) {
    local_res8 = Limiter;
  }
  else if (local_f8.DynamicsProcessorType == Expander) {
    local_res8 = Expander;
  }
  else {
    if (local_f8.DynamicsProcessorType != Gate) goto LAB_14f0ef4b8;
    local_res8 = Gate;
  }
  if (local_f8.PeakMode == MeanSquared) {
LAB_14f0ef4d3:
    local_res10 = MeanSquared;
  }
  else if (local_f8.PeakMode == RootMeanSquared) {
    local_res10 = RootMeanSquared;
  }
  else if (local_f8.PeakMode != Peak) goto LAB_14f0ef4d3;
  uVar21 = uVar18;
  if (0 < (this->DynamicsProcessors).ArrayNum) {
    do {
      uVar17 = (uint)uVar18;
      uVar15 = ~uVar17 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar17 < (this->DynamicsProcessors).ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (FDynamicsProcessor *)
                ((this->DynamicsProcessors).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xf8);
      Audio::FDynamicsProcessor::SetChannelLinkMode(this_00,local_f8.LinkMode);
      Audio::FDynamicsProcessor::SetLookaheadMsec(this_00,local_f8.LookAheadMsec);
      Audio::FDynamicsProcessor::SetAnalogMode(this_00,local_f8.bAnalogMode);
      uVar14 = 0;
      if ((int)uVar17 < (int)uVar19) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FDynamicsProcessor::SetAttackTime
                (this_00,*(float *)(local_f8.Bands.AllocatorInstance.Data + uVar21 + 4));
      uVar14 = 0;
      if ((int)uVar17 < (int)uVar19) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FDynamicsProcessor::SetReleaseTime
                (this_00,*(float *)(local_f8.Bands.AllocatorInstance.Data + uVar21 + 8));
      uVar14 = 0;
      if ((int)uVar17 < (int)uVar19) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FDynamicsProcessor::SetThreshold
                (this_00,*(float *)(local_f8.Bands.AllocatorInstance.Data + uVar21 + 0xc));
      uVar14 = 0;
      if ((int)uVar17 < (int)uVar19) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FDynamicsProcessor::SetRatio
                (this_00,*(float *)(local_f8.Bands.AllocatorInstance.Data + uVar21 + 0x10));
      uVar14 = 0;
      if ((int)uVar17 < (int)uVar19) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FDynamicsProcessor::SetKneeBandwidth
                (this_00,*(float *)(local_f8.Bands.AllocatorInstance.Data + uVar21 + 0x14));
      uVar14 = 0;
      if ((int)uVar17 < (int)uVar19) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FDynamicsProcessor::SetInputGain
                (this_00,*(float *)(local_f8.Bands.AllocatorInstance.Data + uVar21 + 0x18));
      uVar14 = 0;
      if ((int)uVar17 < (int)uVar19) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FDynamicsProcessor::SetOutputGain
                (this_00,*(float *)(local_f8.Bands.AllocatorInstance.Data + uVar21 + 0x1c));
      Audio::FDynamicsProcessor::SetProcessingMode(this_00,local_res8);
      Audio::FDynamicsProcessor::SetPeakMode(this_00,local_res10);
      Audio::FDynamicsProcessor::SetKeyAudition(this_00,local_f8.bKeyAudition);
      Audio::FDynamicsProcessor::SetKeyGain(this_00,local_f8.KeyGainDb);
      uVar14 = 0xffffffff;
      iVar9 = 0;
      if (local_f8.KeySource == AudioBus) {
        if (local_f8.ExternalAudioBus.field0_0x0.DebugPtr != (TObjectPtr<UAudioBus>_u_0)0x0) {
          TVar13 = local_f8.ExternalAudioBus.field0_0x0;
          iVar6 = *(EAudioBusChannels *)((longlong)local_f8.ExternalAudioBus.field0_0x0 + 0x30) + 1;
          goto LAB_14f0ef845;
        }
      }
      else if ((local_f8.KeySource == Submix) &&
              (TVar13 = (TObjectPtr<UAudioBus>_u_0)local_f8.ExternalSubmix, iVar6 = 0,
              local_f8.ExternalSubmix.field0_0x0 != (TObjectPtr<USoundSubmix>_u_0)0x0)) {
LAB_14f0ef845:
        iVar9 = iVar6;
        uVar14 = *(uint *)((longlong)&(TVar13.DebugPtr)->_padding_ + 4);
      }
      FKeySource::Update(&this->KeySource,local_f8.KeySource,uVar14,iVar9);
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar21 = uVar21 + 0x20;
    } while ((int)(uVar17 + 1) < (this->DynamicsProcessors).ArrayNum);
  }
LAB_14f0ef86d:
  if (local_f8.Bands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Bands.AllocatorInstance.Data);
  }
  return;
}

// OnProcessAudio @ 14f0f0580

void __thiscall
FSubmixEffectMultibandCompressor::OnProcessAudio
          (FSubmixEffectMultibandCompressor *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar9;
  bool bVar10;
  ESubmixEffectDynamicsKeySource EVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  USubmixEffectMultibandCompressorPreset *this_00;
  UClass *pUVar15;
  FSubmixEffectMultibandCompressorSettings *pFVar16;
  FPatchOutput *this_01;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FDynamicsProcessor *pFVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  FDynamicsProcessor *pFVar25;
  int iVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_188;
  uint local_184;
  FSubmixEffectMultibandCompressorSettings local_168;
  FScriptContainerElement *local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  TArray<float,TAlignedHeapAllocator<16>_> *local_118;
  FScriptContainerElement *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  TArrayView<float,int> local_f8;
  TArrayView<float_const_,int> local_e8;
  FSubmixEffectMultibandCompressorSettings local_d8;
  FSubmixEffectMultibandCompressorSettings local_a0;
  
  if (this->NumChannels == param_1->NumChannels) goto LAB_14f0f0690;
  this_00 = (USubmixEffectMultibandCompressorPreset *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (this_00 == (USubmixEffectMultibandCompressorPreset *)0x0) {
LAB_14f0f05e7:
    this_00 = (USubmixEffectMultibandCompressorPreset *)0x0;
  }
  else {
    pUVar15 = USubmixEffectMultibandCompressorPreset::StaticClass();
    iVar26 = (int)pUVar15->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar26) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar26 * 8) !=
        &pUVar15->_padding_)) goto LAB_14f0f05e7;
  }
  if (this_00 == (USubmixEffectMultibandCompressorPreset *)0x0) {
    local_168.DynamicsProcessorType = Compressor;
    local_168.PeakMode = RootMeanSquared;
    local_168.LinkMode = Average;
    local_168._3_1_ = 0;
    local_168.bAnalogMode = true;
    local_168.bFourPole = true;
    local_168.bBypass = false;
    local_168.KeySource = Default;
    local_168._12_4_ = 0;
    local_168._37_2_ = 0;
    local_168.ExternalAudioBus.field0_0x0.DebugPtr = (TObjectPtr<UAudioBus>_u_0)0x0;
    local_168.ExternalSubmix.field0_0x0.DebugPtr = (TObjectPtr<USoundSubmix>_u_0)0x0;
    local_168._39_1_ = 0;
    local_168.LookAheadMsec = 3.0;
    local_168.KeyGainDb = 0.0;
    local_168.bKeyAudition = false;
    local_168.Bands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Bands.ArrayNum = 0;
    local_168.Bands.ArrayMax = 0;
    FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings
              (&local_d8,&local_168);
    local_a0.Bands.AllocatorInstance.Data = local_168.Bands.AllocatorInstance.Data;
  }
  else {
    pFVar16 = USubmixEffectMultibandCompressorPreset::GetSettings(this_00,&local_a0);
    FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings
              (&local_d8,pFVar16);
  }
  if (local_a0.Bands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Bands.AllocatorInstance.Data);
  }
  this->NumChannels = param_1->NumChannels;
  Initialize(this,&local_d8);
  (**(code **)(*(longlong *)this + 8))(this);
  if (local_d8.Bands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Bands.AllocatorInstance.Data);
  }
LAB_14f0f0690:
  uVar17 = param_1->NumFrames * this->NumChannels;
  local_118 = param_1->AudioBuffer;
  pTVar3 = param_2->AudioBuffer;
  if (((this->bBypass != false) || (this->bInitialized == false)) ||
     ((this->DynamicsProcessors).ArrayNum == 0)) {
    memcpy((pTVar3->AllocatorInstance).Data,(local_118->AllocatorInstance).Data,
           (longlong)(param_1->NumFrames * this->FrameSize));
    return;
  }
  if (((this->DynamicsProcessors).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_188 = Audio::FDynamicsProcessor::GetKeyNumChannels
                        ((FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data);
  iVar26 = local_188 * param_1->NumFrames;
  TArray<float,TAlignedHeapAllocator<16>_>::Reset(&this->AudioExternal,iVar26);
  EVar11 = FKeySource::GetType(&this->KeySource);
  if (EVar11 == Default) {
    iVar19 = param_1->NumChannels;
    if (iVar19 != local_188) {
      iVar13 = (this->DynamicsProcessors).ArrayNum;
      iVar26 = iVar19 * param_1->NumFrames;
      pFVar21 = (FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data;
      pFVar25 = pFVar21 + iVar13;
      while( true ) {
        if ((this->DynamicsProcessors).ArrayNum != iVar13) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<Audio::FDynamicsProcessor,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        local_188 = iVar19;
        if (pFVar21 == pFVar25) break;
        Audio::FDynamicsProcessor::SetKeyNumChannels(pFVar21,iVar19);
        pFVar21 = pFVar21 + 1;
      }
    }
  }
  else {
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->AudioExternal,iVar26);
  }
  bVar10 = UpdateKeySourcePatch(this);
  if (bVar10) {
    this_01 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&(this->KeySource).Patch);
    Audio::FPatchOutput::PopAudio
              (this_01,(float *)(this->AudioExternal).AllocatorInstance.Data,iVar26,true);
  }
  if (((this->DynamicsProcessors).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = param_1->NumChannels;
  iVar13 = Audio::FDynamicsProcessor::GetNumChannels
                     ((FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data);
  if (iVar19 != iVar13) {
    iVar19 = (this->DynamicsProcessors).ArrayNum;
    pFVar21 = (FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data;
    pFVar25 = pFVar21 + iVar19;
    while( true ) {
      if ((this->DynamicsProcessors).ArrayNum != iVar19) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Audio::FDynamicsProcessor,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar21 == pFVar25) break;
      Audio::FDynamicsProcessor::SetNumChannels(pFVar21,param_1->NumChannels);
      pFVar21 = pFVar21 + 1;
    }
  }
  memset((pTVar3->AllocatorInstance).Data,0,(longlong)(this->FrameSize * param_1->NumFrames));
  uVar24 = uVar17;
  if (0x2000 < (int)uVar17) {
    uVar24 = 0x2000;
  }
  if ((this->MultiBandBuffer).NumSamples < (int)uVar24) {
    (this->MultiBandBuffer).NumSamples = uVar17;
    Audio::FMultibandBuffer::Reset(&this->MultiBandBuffer);
    if (bVar10) {
      (this->KeyMultiBandBuffer).NumSamples = iVar26;
      Audio::FMultibandBuffer::Reset(&this->KeyMultiBandBuffer);
    }
  }
  local_184 = 0;
  if (0 < (int)uVar17) {
    piVar1 = &(this->ScratchBuffer).ArrayNum;
    do {
      pTVar9 = local_118;
      uVar18 = 0;
      if ((int)local_184 < local_118->ArrayNum) {
        uVar18 = ~local_184 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar22 = (pTVar9->AllocatorInstance).Data;
      uVar18 = 0;
      if ((int)local_184 < pTVar3->ArrayNum) {
        uVar18 = ~local_184 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (pTVar3->AllocatorInstance).Data + (longlong)(int)local_184 * 4;
      pFVar23 = (FScriptContainerElement *)0x0;
      iVar26 = (int)uVar24 / this->NumChannels;
      if (bVar10) {
        uVar18 = ((int)local_184 / this->NumChannels) * local_188;
        if (((this->AudioExternal).ArrayNum <= (int)uVar18) &&
           (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<403399567711666596>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixEffectMultiBandCompressor.cpp"
                                ,0x1a4,"KeySampleIdx < AudioExternal.Num()"), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = 0;
        if ((int)uVar18 < (this->AudioExternal).ArrayNum) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar23 = (this->AudioExternal).AllocatorInstance.Data + (longlong)(int)uVar18 * 4;
      }
      iVar19 = *piVar1;
      if (iVar19 < (int)uVar24) {
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,uVar24 - iVar19,&(this->ScratchBuffer).AllocatorInstance,piVar1,
                   &(this->ScratchBuffer).ArrayMax);
      }
      else {
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
        }
        if ((int)uVar24 < iVar19) {
          iVar19 = iVar19 - uVar24;
          if (iVar19 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if (iVar19 == 0) goto LAB_14f0f0b7f;
          pFVar4 = (this->ScratchBuffer).AllocatorInstance.Data + (longlong)(int)uVar24 * 4;
          iVar13 = (*piVar1 - iVar19) - uVar24;
          if (iVar13 != 0) {
            memmove(pFVar4,pFVar4 + (longlong)iVar19 * 4,(longlong)iVar13 << 2);
          }
          *piVar1 = *piVar1 - iVar19;
        }
      }
LAB_14f0f0b7f:
      Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer
                (&this->BandSplitter,(float *)(pFVar22 + (longlong)(int)local_184 * 4),
                 &this->MultiBandBuffer,iVar26);
      if (bVar10) {
        Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer
                  (&this->KeyBandSplitter,(float *)pFVar23,&this->KeyMultiBandBuffer,iVar26);
      }
      else {
        iVar26 = (this->DynamicsProcessors).ArrayNum;
        pFVar22 = (this->DynamicsProcessors).AllocatorInstance.Data;
        pFVar23 = pFVar22 + (longlong)iVar26 * 0xf8;
        while( true ) {
          if ((this->DynamicsProcessors).ArrayNum != iVar26) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<Audio::FDynamicsProcessor,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res20);
          }
          if (pFVar22 == pFVar23) break;
          pFVar22 = pFVar22 + 0xf8;
        }
      }
      local_108 = (this->ScratchBuffer).AllocatorInstance.Data;
      uStack_100 = uVar24;
      if (((int)uVar24 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_128 = pFVar2;
      uStack_120 = uVar24;
      if (((int)uVar24 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = local_108;
      pFVar22 = local_128;
      uVar18 = 0;
      if (0 < (this->DynamicsProcessors).ArrayNum) {
        uVar8._4_4_ = uStack_fc;
        uVar8._0_4_ = uStack_100;
        uVar7._4_4_ = uStack_11c;
        uVar7._0_4_ = uStack_120;
        do {
          pFVar23 = (FScriptContainerElement *)0x0;
          uVar14 = 0;
          if ((int)uVar18 < (this->DynamicsProcessors).ArrayNum) {
            uVar14 = ~uVar18 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->DynamicsProcessors).AllocatorInstance.Data;
          if (bVar10) {
            uVar20 = uVar18 * (this->KeyMultiBandBuffer).NumSamples;
            uVar14 = 0;
            if ((int)uVar20 < (this->KeyMultiBandBuffer).Buffer.ArrayNum) {
              uVar14 = ~uVar20 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar23 = (this->KeyMultiBandBuffer).Buffer.AllocatorInstance.Data +
                      (longlong)(int)uVar20 * 4;
          }
          pFVar5 = (this->ScratchBuffer).AllocatorInstance.Data;
          uVar20 = uVar18 * (this->MultiBandBuffer).NumSamples;
          uVar14 = 0;
          if ((int)uVar20 < (this->MultiBandBuffer).Buffer.ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          Audio::FDynamicsProcessor::ProcessAudio
                    ((FDynamicsProcessor *)(pFVar4 + (longlong)(int)uVar18 * 0xf8),
                     (float *)((this->MultiBandBuffer).Buffer.AllocatorInstance.Data +
                              (longlong)(int)uVar20 * 4),uVar24,(float *)pFVar5,(float *)pFVar23,
                     (float *)0x0);
          local_f8.DataPtr = (float *)pFVar22;
          local_e8.DataPtr = (float *)pFVar2;
          local_f8._8_8_ = uVar7;
          local_e8._8_8_ = uVar8;
          Audio::ArrayMixIn(&local_e8,&local_f8);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (this->DynamicsProcessors).ArrayNum);
      }
      local_184 = local_184 + uVar24;
    } while ((int)local_184 < (int)uVar17);
  }
  return;
}

// ResetKey @ 14f0f7f90

void __thiscall FSubmixEffectMultibandCompressor::ResetKey(FSubmixEffectMultibandCompressor *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &(this->KeySource).Patch;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<Audio::FPatchOutput,1> *)&local_18) {
    pTVar1->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->KeySource).Patch.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  lpCriticalSection = &(this->KeySource).MutateSourceCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->KeySource).NumChannels = 0;
    (this->KeySource).ObjectId = 0xffffffff;
    (this->KeySource).Type = Default;
                    /* WARNING: Could not recover jumptable at 0x00014f0f8013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateKeyFromSettings @ 14f107860

void __thiscall
FSubmixEffectMultibandCompressor::UpdateKeyFromSettings
          (FSubmixEffectMultibandCompressor *this,FSubmixEffectMultibandCompressorSettings *param_1)

{
  ESubmixEffectDynamicsKeySource EVar1;
  USoundSubmix *pUVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  EVar1 = param_1->KeySource;
  iVar3 = 0;
  uVar5 = 0xffffffff;
  if (EVar1 == AudioBus) {
    pUVar2 = (USoundSubmix *)(param_1->ExternalAudioBus).field0_0x0.DebugPtr;
    iVar4 = 0;
    if (pUVar2 == (USoundSubmix *)0x0) goto LAB_14f10789d;
    iVar3 = (byte)pUVar2->_padding_ + 1;
  }
  else {
    iVar4 = iVar3;
    if ((EVar1 != Submix) ||
       (pUVar2 = (param_1->ExternalSubmix).field0_0x0.DebugPtr, iVar4 = 0,
       pUVar2 == (USoundSubmix *)0x0)) goto LAB_14f10789d;
  }
  uVar5 = *(uint *)((longlong)&pUVar2->_padding_ + 4);
  iVar4 = iVar3;
LAB_14f10789d:
  FKeySource::Update(&this->KeySource,EVar1,uVar5,iVar4);
  return;
}

// UpdateKeySourcePatch @ 14f1078c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
FSubmixEffectMultibandCompressor::UpdateKeySourcePatch(FSubmixEffectMultibandCompressor *this)

{
  FWindowsRecursiveMutex *pFVar1;
  FKeySource *this_00;
  ESubmixEffectDynamicsKeySource EVar2;
  code *pcVar3;
  FAudioBusKey FVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FAudioDeviceManager *pFVar10;
  FMixerDevice *this_01;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar11;
  FAudioDevice *this_02;
  UAudioBusSubsystem *this_03;
  FDynamicsProcessor *pFVar12;
  FDynamicsProcessor *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TSharedPtr<Audio::FMixerSubmix,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<Audio::FPatchOutput,1> local_38;
  
  this_00 = &this->KeySource;
  pFVar1 = &(this->KeySource).MutateSourceCritSection;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_14f107bf6:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  EVar2 = this_00->Type;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  if (EVar2 != Default) {
    if ((this->KeySource).Patch.Object != (FPatchOutput *)0x0) {
      return true;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    EVar2 = this_00->Type;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (EVar2 == AudioBus) {
      pFVar10 = FAudioDeviceManager::Get();
      if (((pFVar10 != (FAudioDeviceManager *)0x0) &&
          (this_02 = FAudioDeviceManager::GetAudioDeviceRaw(pFVar10,this->DeviceId),
          this_02 != (FAudioDevice *)0x0)) &&
         (uVar7 = FKeySource::GetObjectId(this_00), uVar7 != 0xffffffff)) {
        this_03 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_02);
        if ((this_03 == (UAudioBusSubsystem *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("AudioBusSubsystem",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixEffectMultiBandCompressor.cpp"
                               ,0xe7,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = FKeySource::GetNumChannels(this_00);
        uStackX_1c = 0xffffffff;
        FVar4.InstanceId = 0xffffffff;
        FVar4.ObjectId = uVar7;
        local_res18 = uVar7;
        pTVar11 = UAudioBusSubsystem::AddPatchOutputForAudioBus
                            (this_03,&local_38,FVar4,
                             (this_02->PlatformSettings).CallbackBufferFrameSize,iVar9,
                             __real_3f800000);
        TSharedPtr<Audio::FPatchOutput,1>::operator=(&(this->KeySource).Patch,pTVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if ((this->KeySource).Patch.Object != (FPatchOutput *)0x0) {
          iVar9 = (this->DynamicsProcessors).ArrayNum;
          pFVar12 = (FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data;
          pFVar13 = pFVar12 + iVar9;
          while( true ) {
            if ((this->DynamicsProcessors).ArrayNum != iVar9) {
              `TCheckedPointerIterator<Audio::FDynamicsProcessor,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar12 == pFVar13) {
              return true;
            }
            pFVar1 = &(this->KeySource).MutateSourceCritSection;
            if (pFVar1 == (FWindowsRecursiveMutex *)0x0) break;
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            iVar8 = (this->KeySource).NumChannels;
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
            Audio::FDynamicsProcessor::SetKeyNumChannels(pFVar12,iVar8);
            pFVar12 = pFVar12 + 1;
          }
          goto LAB_14f107bf6;
        }
      }
    }
    else if (((EVar2 == Submix) &&
             (pFVar10 = FAudioDeviceManager::Get(), pFVar10 != (FAudioDeviceManager *)0x0)) &&
            ((this_01 = (FMixerDevice *)
                        FAudioDeviceManager::GetAudioDeviceRaw(pFVar10,this->DeviceId),
             this_01 != (FMixerDevice *)0x0 &&
             (uVar7 = FKeySource::GetObjectId(this_00), uVar7 != 0xffffffff)))) {
      pTVar11 = (TSharedPtr<Audio::FPatchOutput,1> *)
                (**(code **)(*(longlong *)this_01 + 0xb0))(this_01,local_48,uVar7,__real_3f800000);
      TSharedPtr<Audio::FPatchOutput,1>::operator=(&(this->KeySource).Patch,pTVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      if ((this->KeySource).Patch.Object != (FPatchOutput *)0x0) {
        uVar7 = FKeySource::GetObjectId(this_00);
        Audio::FMixerDevice::FindSubmixInstanceByObjectId(this_01,&local_58,uVar7);
        if (local_58.Object != (FMixerSubmix *)0x0) {
          if ((local_58.Object == (FMixerSubmix *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar8 = Audio::FMixerSubmix::GetNumOutputChannels(local_58.Object);
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          (this->KeySource).NumChannels = iVar8;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          iVar9 = (this->DynamicsProcessors).ArrayNum;
          pFVar12 = (FDynamicsProcessor *)(this->DynamicsProcessors).AllocatorInstance.Data;
          pFVar13 = pFVar12 + iVar9;
          while( true ) {
            if ((this->DynamicsProcessors).ArrayNum != iVar9) {
              `TCheckedPointerIterator<Audio::FDynamicsProcessor,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pFVar12 == pFVar13) break;
            Audio::FDynamicsProcessor::SetKeyNumChannels(pFVar12,iVar8);
            pFVar12 = pFVar12 + 1;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          return true;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return false;
}

