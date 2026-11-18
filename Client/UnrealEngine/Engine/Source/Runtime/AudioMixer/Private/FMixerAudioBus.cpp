// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 21

// FMixerAudioBus @ 1464d7ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerAudioBus * __thiscall
Audio::FMixerAudioBus::FMixerAudioBus
          (FMixerAudioBus *this,FMixerSourceManager *param_1,bool param_2,int param_3,
          FAudioBusKey param_4)

{
  int *piVar1;
  int *piVar2;
  FAudioRenderScheduler *this_00;
  int iVar3;
  FAudioRenderStepId FVar4;
  int iVar5;
  
  (this->InstanceIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &this->MixedSourceData[0].ArrayNum;
  (this->InstanceIds).ArrayNum = 0;
  (this->InstanceIds).ArrayMax = 0;
  piVar2 = &this->MixedSourceData[0].ArrayMax;
  this->_padding_ = (longlong)&___7FMixerAudioBus_Audio__6B_;
  this->AudioBusSends[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->AudioBusSends[0].ArrayNum = 0;
  this->AudioBusSends[0].ArrayMax = 0;
  this->AudioBusSends[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->AudioBusSends[1].ArrayNum = 0;
  this->AudioBusSends[1].ArrayMax = 0;
  this->MixedSourceData[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->MixedSourceData[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MixedSourceData[1].ArrayNum = 0;
  this->MixedSourceData[1].ArrayMax = 0;
  this->NumChannels = param_3;
  this->CurrentBufferIndex = 1;
  iVar5 = param_1->NumOutputFrames;
  this->SourceManager = param_1;
  this->NumFrames = iVar5;
  (this->PatchMixer).PendingNewInputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchMixer).PendingNewInputs.ArrayNum = 0;
  (this->PatchMixer).PendingNewInputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->PatchMixer).PendingNewInputsCriticalSection,4000);
  (this->PatchMixer).DisconnectedInputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchMixer).DisconnectedInputs.ArrayNum = 0;
  (this->PatchMixer).DisconnectedInputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->PatchMixer).InputDeletionCriticalSection,4000);
  (this->PatchMixer).CurrentInputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchMixer).CurrentInputs.ArrayNum = 0;
  (this->PatchMixer).CurrentInputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->PatchMixer).CurrentPatchesCriticalSection,4000);
  (this->PatchSplitter).PendingOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchSplitter).PendingOutputs.ArrayNum = 0;
  (this->PatchSplitter).PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->PatchSplitter).PendingOutputsCriticalSection,4000);
  (this->PatchSplitter).ConnectedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchSplitter).ConnectedOutputs.ArrayNum = 0;
  (this->PatchSplitter).ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->PatchSplitter).ConnectedOutputsCriticalSection,4000);
  this->BusKey = param_4;
  (this->BusName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BusName).Data.ArrayNum = 0;
  (this->BusName).Data.ArrayMax = 0;
  this->bIsAutomatic = param_2;
  FEnvelopeFollower::FEnvelopeFollower(&this->EnvelopeFollower);
  iVar5 = this->NumChannels * this->NumFrames;
  this->EnvelopeNumChannels = 0;
  this->bIsEnvelopeFollowing = false;
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&this->MixedSourceData[0].AllocatorInstance,0,piVar2);
  }
  iVar3 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar5,&this->MixedSourceData[0].AllocatorInstance,piVar1,piVar2);
  memset(this->MixedSourceData[0].AllocatorInstance.Data + (longlong)iVar3 * 4,0,
         (longlong)iVar5 << 2);
  iVar3 = this->MixedSourceData[1].ArrayMax;
  piVar1 = &this->MixedSourceData[1].ArrayMax;
  this->MixedSourceData[1].ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&this->MixedSourceData[1].AllocatorInstance,0,piVar1);
  }
  iVar3 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar5,&this->MixedSourceData[1].AllocatorInstance,
                     &this->MixedSourceData[1].ArrayNum,piVar1);
  memset(this->MixedSourceData[1].AllocatorInstance.Data + (longlong)iVar3 * 4,0,
         (longlong)iVar5 << 2);
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    this_00 = (this->SourceManager->MixerDevice->RenderScheduler).Ptr;
    FVar4 = FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&param_4);
                    /* WARNING: Load size is inaccurate */
    FAudioRenderScheduler::AddStep
              (this_00,(FAudioRenderStepId)*FVar4.Value,(IAudioMixerRenderStep *)this);
  }
  return this;
}

// ~FMixerAudioBus @ 1464dbfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::~FMixerAudioBus(FMixerAudioBus *this)

{
  FAudioRenderScheduler *this_00;
  FScriptContainerElement *pFVar1;
  FAudioRenderStepId FVar2;
  longlong lVar3;
  longlong lVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FMixerAudioBus_Audio__6B_;
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    this_00 = (this->SourceManager->MixerDevice->RenderScheduler).Ptr;
    FVar2 = FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)local_res8);
                    /* WARNING: Load size is inaccurate */
    FAudioRenderScheduler::RemoveStep(this_00,(FAudioRenderStepId)*FVar2.Value);
  }
  pFVar1 = (this->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BusName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->PatchSplitter).ConnectedOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->PatchSplitter).ConnectedOutputs.AllocatorInstance.Data,
             (this->PatchSplitter).ConnectedOutputs.ArrayNum);
  pFVar1 = (this->PatchSplitter).ConnectedOutputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->PatchSplitter).PendingOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->PatchSplitter).PendingOutputs.AllocatorInstance.Data,
             (this->PatchSplitter).PendingOutputs.ArrayNum);
  pFVar1 = (this->PatchSplitter).PendingOutputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPatchMixer::~FPatchMixer(&this->PatchMixer);
  lVar3 = 2;
  pTVar5 = (TArray<float,TAlignedHeapAllocator<16>_> *)&this->CurrentBufferIndex;
  lVar4 = 2;
  do {
    pFVar1 = pTVar5[-1].AllocatorInstance.Data;
    pTVar5 = pTVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pTVar5 = this->MixedSourceData;
  do {
    pFVar1 = (((TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_> *)(pTVar5 + -1))->
             AllocatorInstance).Data;
    pTVar5 = pTVar5 + -1;
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar3 != 0);
  pFVar1 = (this->InstanceIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddInstanceId @ 1464ebab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerAudioBus::AddInstanceId(FMixerAudioBus *this,int param_1,ulong64 param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAudioRenderStepId local_res8;
  int local_res10 [2];
  FAudioRenderStepId local_18;
  
  pFVar2 = (this->InstanceIds).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->InstanceIds).ArrayMax * 4))
  {
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
  iVar5 = (this->InstanceIds).ArrayNum;
  piVar1 = &(this->InstanceIds).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->InstanceIds).AllocatorInstance,piVar1);
  }
  (this->InstanceIds).ArrayNum = iVar5 + 1;
  *(int *)((this->InstanceIds).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res10[0];
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    FAudioRenderStepId::FromTransmitterID((ulong64)&local_res8);
    FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&local_18);
    FAudioRenderScheduler::AddDependency
              ((this->SourceManager->MixerDevice->RenderScheduler).Ptr,local_18,local_res8);
  }
  return;
}

// AddNewPatchInput @ 1464ebec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::AddNewPatchInput(FMixerAudioBus *this,FPatchInput *param_1)

{
  FPatchMixer::AddNewInput(&this->PatchMixer,param_1);
  return;
}

// AddNewPatchOutput @ 1464ebed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerAudioBus::AddNewPatchOutput
          (FMixerAudioBus *this,TSharedPtr<Audio::FPatchOutput,1> *param_1)

{
  FPatchSplitter::AddNewPatch(&this->PatchSplitter,param_1);
  return;
}

// AddSend @ 1464ed180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerAudioBus::AddSend(FMixerAudioBus *this,EBusSendType param_1,FAudioBusSend *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FAudioBusSend *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FAudioRenderStepId local_res8;
  undefined1 local_res10 [8];
  FAudioRenderStepId local_res20;
  
  iVar7 = this->AudioBusSends[param_1].ArrayNum;
  pFVar8 = this->AudioBusSends[param_1].AllocatorInstance.Data;
  pFVar2 = pFVar8 + (longlong)iVar7 * 0x18;
  while( true ) {
    if (this->AudioBusSends[param_1].ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Audio::FAudioBusSend,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar2) break;
    if (*(int *)pFVar8 == param_2->SourceId) {
      *(float *)(pFVar8 + 0x10) = param_2->SendLevel;
      return;
    }
    pFVar8 = pFVar8 + 0x18;
  }
  pFVar3 = (FAudioBusSend *)this->AudioBusSends[param_1].AllocatorInstance.Data;
  if (((pFVar3 <= param_2) && (param_2 < pFVar3 + this->AudioBusSends[param_1].ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = this->AudioBusSends[param_1].ArrayNum;
  piVar1 = &this->AudioBusSends[param_1].ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&this->AudioBusSends[param_1].AllocatorInstance,piVar1);
  }
  this->AudioBusSends[param_1].ArrayNum = iVar7 + 1;
  uVar5 = param_2->TransmitterID;
  pFVar8 = this->AudioBusSends[param_1].AllocatorInstance.Data;
  pFVar2 = pFVar8 + (longlong)iVar7 * 0x18;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_2;
  *(ulong64 *)(pFVar2 + 8) = uVar5;
  *(undefined8 *)(pFVar8 + (longlong)iVar7 * 0x18 + 0x10) = *(undefined8 *)&param_2->SendLevel;
  if (AudioMixerCVars::UseRenderScheduler == 0) {
    return;
  }
  FAudioRenderStepId::FromTransmitterID((ulong64)&local_res20);
  FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&local_res8);
  FAudioRenderScheduler::AddDependency
            ((this->SourceManager->MixerDevice->RenderScheduler).Ptr,local_res20,local_res8);
  return;
}

// CopyCurrentBuffer @ 1464f78e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerAudioBus::CopyCurrentBuffer
          (FMixerAudioBus *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->NumChannels == param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumChannels != InNumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBus.cpp"
                       ,0xd3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DownmixAndSumIntoBuffer
            (this->NumChannels,param_2,this->MixedSourceData + this->CurrentBufferIndex,param_3,
             (float *)(param_1->AllocatorInstance).Data);
  return;
}

// CopyCurrentBuffer @ 1464f7970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerAudioBus::CopyCurrentBuffer
          (FMixerAudioBus *this,int param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          int param_3)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  
  _Src = this->MixedSourceData[this->CurrentBufferIndex].AllocatorInstance.Data;
  if (this->NumChannels != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumChannels == InNumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBus.cpp"
                       ,0xdb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)param_1 * (longlong)param_3 * 4);
  return;
}

// DoRenderStep @ 1464fbee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::DoRenderStep(FMixerAudioBus *this)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FMixerSourceManager *pFVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar15;
  uint *puVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  TReferenceControllerBase<1> *pTVar19;
  float *pfVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  int iStackX_18;
  longlong lStackX_20;
  TArray<float,TAlignedHeapAllocator<16>_> TStack_c8;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *pFStack_a8;
  longlong lStack_a0;
  FScriptContainerElement *pFStack_98;
  FScriptContainerElement *pFStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<float,int> TStack_78;
  TArrayView<float_const_,int> TStack_68;
  TArrayView<float,int> TStack_58;
  
  iStackX_18 = this->NumFrames * this->NumChannels;
  iVar2 = this->SourceManager->NumOutputFrames;
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    this->CurrentBufferIndex = 1 - this->CurrentBufferIndex;
  }
  pFVar22 = this->MixedSourceData[this->CurrentBufferIndex].AllocatorInstance.Data;
  pFStack_a8 = pFVar22;
  FPatchMixer::PopAudio(&this->PatchMixer,(float *)pFVar22,iStackX_18,false);
  lStackX_20 = 0;
  do {
    lStack_a0 = lStackX_20 * 0x10;
    uStackX_10 = this->AudioBusSends[lStackX_20].ArrayNum;
    uVar23 = (ulonglong)(int)uStackX_10;
    pFVar25 = this->AudioBusSends[lStackX_20].AllocatorInstance.Data;
    pFStack_98 = pFVar25 + uVar23 * 0x18;
    lVar24 = lStackX_20;
    while( true ) {
      pFVar7 = pFStack_98;
      if (*(int *)((longlong)&this->AudioBusSends[0].ArrayNum + lStack_a0) != (int)uVar23) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<Audio::FAudioBusSend,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (pFVar25 == pFVar7) break;
      if (AudioMixerCVars::UseRenderScheduler == 0) {
        uVar3 = *(uint *)pFVar25;
        pFVar5 = this->SourceManager;
        uVar13 = 0;
        if ((int)uVar3 < (pFVar5->SourceInfos).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)((pFVar5->SourceInfos).AllocatorInstance.Data +
                    (longlong)(int)uVar3 * 0x5d0 + 0xe0) == -1) goto LAB_146511c61;
        pFVar5 = this->SourceManager;
        uVar3 = *(uint *)pFVar25;
        if ((pFVar5->SourceInfos).ArrayNum <= (int)uVar3) goto LAB_146511d2f;
        if (((int)uVar3 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar3 = *(uint *)((pFVar5->SourceInfos).AllocatorInstance.Data +
                         (longlong)(int)uVar3 * 0x5d0 + 0xe0);
        if (*(int *)&(pFVar5->AudioBuses).field_0x8 != *(int *)&(pFVar5->AudioBuses).field_0x34) {
          puVar6 = *(undefined1 **)&(pFVar5->AudioBuses).field_0x40;
          puVar18 = &(pFVar5->AudioBuses).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar18 = puVar6;
          }
          uVar13 = *(uint *)(puVar18 +
                            (ulonglong)
                            (*(int *)&(pFVar5->AudioBuses).field_0x48 - 1U &
                            ((uVar3 >> 2) + 0x9e3779b8 + uVar3 * 0x40 ^ uVar3)) * 4);
          if (uVar13 != 0xffffffff) {
            do {
              puVar16 = (uint *)((longlong)(int)uVar13 * 0x20 + *(longlong *)&pFVar5->AudioBuses);
              if ((*puVar16 == uVar3) && (puVar16[1] == 0xffffffff)) {
                if ((uVar13 != 0xffffffff) && (puVar16 != (uint *)0x0)) {
                  pTVar19 = *(TReferenceControllerBase<1> **)(puVar16 + 4);
                  lVar21 = *(longlong *)(puVar16 + 2);
                  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar19->SharedReferenceCount =
                         (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  if (lVar21 == 0) goto LAB_146511c11;
                  pfVar20 = *(float **)
                             (lVar21 + 0x38 + (longlong)(1 - *(int *)(lVar21 + 0x58)) * 0x10);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar19);
                  goto LAB_146511d31;
                }
                break;
              }
              uVar13 = puVar16[6];
            } while (uVar13 != 0xffffffff);
          }
        }
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
LAB_146511c11:
        pfVar20 = (float *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
      }
      else {
LAB_146511c61:
        uVar3 = *(uint *)pFVar25;
        pFVar5 = this->SourceManager;
        iVar14 = (pFVar5->SourceInfos).ArrayNum;
        if (lVar24 == 1) {
          uVar13 = 0;
          if ((int)uVar3 < iVar14) {
            uVar13 = ~uVar3 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (pFVar5->SourceInfos).AllocatorInstance.Data;
          lVar21 = (longlong)(int)uVar3 * 0x5d0;
          if (((byte)pFVar7[lVar21 + 0x520] & 0x30) == 0) {
            pfVar20 = *(float **)(pFVar7 + lVar21 + 0x58);
          }
          else {
LAB_146511d2f:
            pfVar20 = (float *)0x0;
          }
        }
        else {
          uVar13 = 0;
          if ((int)uVar3 < iVar14) {
            uVar13 = ~uVar3 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (pFVar5->SourceInfos).AllocatorInstance.Data;
          lVar21 = (longlong)(int)uVar3 * 0x5d0;
          if (((byte)pFVar7[lVar21 + 0x520] & 0x30) != 0) goto LAB_146511d2f;
          pfVar20 = *(float **)(pFVar7 + lVar21 + 0x48);
        }
      }
LAB_146511d31:
      if (pfVar20 != (float *)0x0) {
        uVar3 = *(uint *)pFVar25;
        pFVar5 = this->SourceManager;
        uVar13 = 0;
        if ((int)uVar3 < (pFVar5->SourceInfos).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = this->NumChannels;
        iVar4 = *(int *)((pFVar5->SourceInfos).AllocatorInstance.Data +
                        (longlong)(int)uVar3 * 0x5d0 + 0x524);
        if (iVar4 == iVar14) {
          iStack_b0 = iVar14 * iVar2;
          uStack_b8 = pfVar20;
          if ((iStack_b0 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iStack_80 = iVar2 * this->NumChannels;
          pFStack_88 = pFVar22;
          if ((iStack_80 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TStack_78._12_4_ = uStack_7c;
          TStack_78.ArrayNum = iStack_80;
          TStack_78.DataPtr = (float *)pFStack_88;
          TStack_68.DataPtr._0_4_ = (undefined4)uStack_b8;
          TStack_68.DataPtr._4_4_ = uStack_b8._4_4_;
          TStack_68.ArrayNum = iStack_b0;
          TStack_68._12_4_ = uStack_ac;
          ArrayMixIn(&TStack_68,&TStack_78,*(float *)(pFVar25 + 0x10));
          lVar24 = lStackX_20;
        }
        else {
          uVar3 = *(uint *)pFVar25;
          pFVar5 = this->SourceManager;
          TStack_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_c8.ArrayNum = 0;
          TStack_c8.ArrayMax = 0;
          uVar13 = 0;
          if ((int)uVar3 < (pFVar5->SourceInfos).ArrayNum) {
            uVar13 = ~uVar3 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar22 = (pFVar5->SourceInfos).AllocatorInstance.Data;
          lVar24 = (longlong)(int)uVar3 * 0x5d0;
          FMixerDevice::Get2DChannelMap
                    ((bool)((byte)pFVar22[lVar24 + 0x522] >> 3 & 1),
                     *(int *)(pFVar22 + lVar24 + 0x524),iVar14,
                     (bool)((byte)pFVar22[lVar24 + 0x520] >> 1 & 1),&TStack_c8);
          pFVar22 = pFStack_a8;
          FVar11.Data = TStack_c8.AllocatorInstance.Data;
          fVar1 = *(float *)(pFVar25 + 0x10);
          for (FVar17.Data = TStack_c8.AllocatorInstance.Data;
              FVar17.Data != TStack_c8.AllocatorInstance.Data + (longlong)TStack_c8.ArrayNum * 4;
              FVar17.Data = FVar17.Data + 4) {
            *(float *)FVar17.Data = fVar1 * *(float *)FVar17.Data;
          }
          DownmixAndSumIntoBuffer
                    (iVar4,this->NumChannels,pfVar20,(float *)pFStack_a8,iVar2,
                     (float *)TStack_c8.AllocatorInstance.Data);
          lVar24 = lStackX_20;
          if (FVar11.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar11.Data);
            lVar24 = lStackX_20;
          }
        }
      }
      pFVar25 = pFVar25 + 0x18;
      uVar23 = (ulonglong)uStackX_10;
    }
    lStackX_20 = lVar24 + 1;
    if (1 < lStackX_20) {
      FPatchSplitter::PushAudio(&this->PatchSplitter,(float *)pFVar22,iStackX_18);
      uVar10 = _UNK_1512d75b8;
      uVar9 = ___xmm_20202020202020202020202020202020;
      if (this->bIsEnvelopeFollowing != false) {
        pfVar20 = this->EnvelopeValues;
        *(undefined8 *)pfVar20 = ___xmm_20202020202020202020202020202020;
        *(undefined8 *)(this->EnvelopeValues + 2) = uVar10;
        *(undefined8 *)(this->EnvelopeValues + 4) = uVar9;
        *(undefined8 *)(this->EnvelopeValues + 6) = uVar10;
        iVar2 = this->NumChannels;
        if (0 < iVar2) {
          iVar14 = FEnvelopeFollower::GetNumChannels(&this->EnvelopeFollower);
          if (iVar14 != iVar2) {
            FEnvelopeFollower::SetNumChannels(&this->EnvelopeFollower,this->NumChannels);
          }
          FEnvelopeFollower::ProcessAudio(&this->EnvelopeFollower,(float *)pFVar22,this->NumFrames);
          pTVar15 = FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
          if ((pTVar15->ArrayNum != this->NumChannels) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EnvValues.Num() == NumChannels",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBus.cpp"
                                  ,0x130,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          memcpy(pfVar20,(pTVar15->AllocatorInstance).Data,(longlong)this->NumChannels << 2);
          iStack_b0 = this->NumChannels;
          uStack_b8 = pfVar20;
          if ((iStack_b0 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TStack_58._12_4_ = uStack_ac;
          TStack_58.ArrayNum = iStack_b0;
          TStack_58.DataPtr = uStack_b8;
          ArrayClampInPlace(&TStack_58,0.0,__real_3f800000);
        }
        this->EnvelopeNumChannels = this->NumChannels;
      }
      return;
    }
  } while( true );
}

// GetCurrentBusBuffer @ 146501a40

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall Audio::FMixerAudioBus::GetCurrentBusBuffer(FMixerAudioBus *this)

{
  return (float *)this->MixedSourceData[this->CurrentBufferIndex].AllocatorInstance.Data;
}

// GetPreviousBusBuffer @ 146504de0

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall Audio::FMixerAudioBus::GetPreviousBusBuffer(FMixerAudioBus *this)

{
  return (float *)this->MixedSourceData[1 - this->CurrentBufferIndex].AllocatorInstance.Data;
}

// GetRenderStepName @ 1465052a0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall Audio::FMixerAudioBus::GetRenderStepName(FMixerAudioBus *this)

{
  return L"FMixerAudioBus mixing";
}

// MixBuffer @ 1465119f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::MixBuffer(FMixerAudioBus *this)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FMixerSourceManager *pFVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar15;
  uint *puVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  TReferenceControllerBase<1> *pTVar19;
  float *pfVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  longlong local_res20;
  TArray<float,TAlignedHeapAllocator<16>_> local_c8;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  longlong local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  
  local_res18 = this->NumFrames * this->NumChannels;
  iVar2 = this->SourceManager->NumOutputFrames;
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    this->CurrentBufferIndex = 1 - this->CurrentBufferIndex;
  }
  pFVar22 = this->MixedSourceData[this->CurrentBufferIndex].AllocatorInstance.Data;
  local_a8 = pFVar22;
  FPatchMixer::PopAudio(&this->PatchMixer,(float *)pFVar22,local_res18,false);
  local_res20 = 0;
  do {
    local_a0 = local_res20 * 0x10;
    local_res10 = this->AudioBusSends[local_res20].ArrayNum;
    uVar23 = (ulonglong)(int)local_res10;
    pFVar25 = this->AudioBusSends[local_res20].AllocatorInstance.Data;
    local_98 = pFVar25 + uVar23 * 0x18;
    lVar24 = local_res20;
    while( true ) {
      pFVar7 = local_98;
      if (*(int *)((longlong)&this->AudioBusSends[0].ArrayNum + local_a0) != (int)uVar23) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Audio::FAudioBusSend,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar25 == pFVar7) break;
      if (AudioMixerCVars::UseRenderScheduler == 0) {
        uVar3 = *(uint *)pFVar25;
        pFVar5 = this->SourceManager;
        uVar13 = 0;
        if ((int)uVar3 < (pFVar5->SourceInfos).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)((pFVar5->SourceInfos).AllocatorInstance.Data +
                    (longlong)(int)uVar3 * 0x5d0 + 0xe0) == -1) goto LAB_146511c61;
        pFVar5 = this->SourceManager;
        uVar3 = *(uint *)pFVar25;
        if ((pFVar5->SourceInfos).ArrayNum <= (int)uVar3) goto LAB_146511d2f;
        if (((int)uVar3 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar3 = *(uint *)((pFVar5->SourceInfos).AllocatorInstance.Data +
                         (longlong)(int)uVar3 * 0x5d0 + 0xe0);
        if (*(int *)&(pFVar5->AudioBuses).field_0x8 != *(int *)&(pFVar5->AudioBuses).field_0x34) {
          puVar6 = *(undefined1 **)&(pFVar5->AudioBuses).field_0x40;
          puVar18 = &(pFVar5->AudioBuses).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar18 = puVar6;
          }
          uVar13 = *(uint *)(puVar18 +
                            (ulonglong)
                            (*(int *)&(pFVar5->AudioBuses).field_0x48 - 1U &
                            ((uVar3 >> 2) + 0x9e3779b8 + uVar3 * 0x40 ^ uVar3)) * 4);
          if (uVar13 != 0xffffffff) {
            do {
              puVar16 = (uint *)((longlong)(int)uVar13 * 0x20 + *(longlong *)&pFVar5->AudioBuses);
              if ((*puVar16 == uVar3) && (puVar16[1] == 0xffffffff)) {
                if ((uVar13 != 0xffffffff) && (puVar16 != (uint *)0x0)) {
                  pTVar19 = *(TReferenceControllerBase<1> **)(puVar16 + 4);
                  lVar21 = *(longlong *)(puVar16 + 2);
                  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar19->SharedReferenceCount =
                         (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  if (lVar21 == 0) goto LAB_146511c11;
                  pfVar20 = *(float **)
                             (lVar21 + 0x38 + (longlong)(1 - *(int *)(lVar21 + 0x58)) * 0x10);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar19);
                  goto LAB_146511d31;
                }
                break;
              }
              uVar13 = puVar16[6];
            } while (uVar13 != 0xffffffff);
          }
        }
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
LAB_146511c11:
        pfVar20 = (float *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
      }
      else {
LAB_146511c61:
        uVar3 = *(uint *)pFVar25;
        pFVar5 = this->SourceManager;
        iVar14 = (pFVar5->SourceInfos).ArrayNum;
        if (lVar24 == 1) {
          uVar13 = 0;
          if ((int)uVar3 < iVar14) {
            uVar13 = ~uVar3 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (pFVar5->SourceInfos).AllocatorInstance.Data;
          lVar21 = (longlong)(int)uVar3 * 0x5d0;
          if (((byte)pFVar7[lVar21 + 0x520] & 0x30) == 0) {
            pfVar20 = *(float **)(pFVar7 + lVar21 + 0x58);
          }
          else {
LAB_146511d2f:
            pfVar20 = (float *)0x0;
          }
        }
        else {
          uVar13 = 0;
          if ((int)uVar3 < iVar14) {
            uVar13 = ~uVar3 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (pFVar5->SourceInfos).AllocatorInstance.Data;
          lVar21 = (longlong)(int)uVar3 * 0x5d0;
          if (((byte)pFVar7[lVar21 + 0x520] & 0x30) != 0) goto LAB_146511d2f;
          pfVar20 = *(float **)(pFVar7 + lVar21 + 0x48);
        }
      }
LAB_146511d31:
      if (pfVar20 != (float *)0x0) {
        uVar3 = *(uint *)pFVar25;
        pFVar5 = this->SourceManager;
        uVar13 = 0;
        if ((int)uVar3 < (pFVar5->SourceInfos).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = this->NumChannels;
        iVar4 = *(int *)((pFVar5->SourceInfos).AllocatorInstance.Data +
                        (longlong)(int)uVar3 * 0x5d0 + 0x524);
        if (iVar4 == iVar14) {
          iStack_b0 = iVar14 * iVar2;
          local_b8 = pfVar20;
          if ((iStack_b0 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iStack_80 = iVar2 * this->NumChannels;
          local_88 = pFVar22;
          if ((iStack_80 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_78._12_4_ = uStack_7c;
          local_78.ArrayNum = iStack_80;
          local_78.DataPtr = (float *)local_88;
          local_68.DataPtr._0_4_ = (undefined4)local_b8;
          local_68.DataPtr._4_4_ = local_b8._4_4_;
          local_68.ArrayNum = iStack_b0;
          local_68._12_4_ = uStack_ac;
          ArrayMixIn(&local_68,&local_78,*(float *)(pFVar25 + 0x10));
          lVar24 = local_res20;
        }
        else {
          uVar3 = *(uint *)pFVar25;
          pFVar5 = this->SourceManager;
          local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.ArrayNum = 0;
          local_c8.ArrayMax = 0;
          uVar13 = 0;
          if ((int)uVar3 < (pFVar5->SourceInfos).ArrayNum) {
            uVar13 = ~uVar3 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar22 = (pFVar5->SourceInfos).AllocatorInstance.Data;
          lVar24 = (longlong)(int)uVar3 * 0x5d0;
          FMixerDevice::Get2DChannelMap
                    ((bool)((byte)pFVar22[lVar24 + 0x522] >> 3 & 1),
                     *(int *)(pFVar22 + lVar24 + 0x524),iVar14,
                     (bool)((byte)pFVar22[lVar24 + 0x520] >> 1 & 1),&local_c8);
          pFVar22 = local_a8;
          FVar11.Data = local_c8.AllocatorInstance.Data;
          fVar1 = *(float *)(pFVar25 + 0x10);
          for (FVar17.Data = local_c8.AllocatorInstance.Data;
              FVar17.Data != local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 4;
              FVar17.Data = FVar17.Data + 4) {
            *(float *)FVar17.Data = fVar1 * *(float *)FVar17.Data;
          }
          DownmixAndSumIntoBuffer
                    (iVar4,this->NumChannels,pfVar20,(float *)local_a8,iVar2,
                     (float *)local_c8.AllocatorInstance.Data);
          lVar24 = local_res20;
          if (FVar11.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar11.Data);
            lVar24 = local_res20;
          }
        }
      }
      pFVar25 = pFVar25 + 0x18;
      uVar23 = (ulonglong)local_res10;
    }
    local_res20 = lVar24 + 1;
    if (1 < local_res20) {
      FPatchSplitter::PushAudio(&this->PatchSplitter,(float *)pFVar22,local_res18);
      uVar10 = _UNK_1512d75b8;
      uVar9 = ___xmm_20202020202020202020202020202020;
      if (this->bIsEnvelopeFollowing != false) {
        pfVar20 = this->EnvelopeValues;
        *(undefined8 *)pfVar20 = ___xmm_20202020202020202020202020202020;
        *(undefined8 *)(this->EnvelopeValues + 2) = uVar10;
        *(undefined8 *)(this->EnvelopeValues + 4) = uVar9;
        *(undefined8 *)(this->EnvelopeValues + 6) = uVar10;
        iVar2 = this->NumChannels;
        if (0 < iVar2) {
          iVar14 = FEnvelopeFollower::GetNumChannels(&this->EnvelopeFollower);
          if (iVar14 != iVar2) {
            FEnvelopeFollower::SetNumChannels(&this->EnvelopeFollower,this->NumChannels);
          }
          FEnvelopeFollower::ProcessAudio(&this->EnvelopeFollower,(float *)pFVar22,this->NumFrames);
          pTVar15 = FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
          if ((pTVar15->ArrayNum != this->NumChannels) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EnvValues.Num() == NumChannels",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBus.cpp"
                                  ,0x130,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          memcpy(pfVar20,(pTVar15->AllocatorInstance).Data,(longlong)this->NumChannels << 2);
          iStack_b0 = this->NumChannels;
          local_b8 = pfVar20;
          if ((iStack_b0 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_58._12_4_ = uStack_ac;
          local_58.ArrayNum = iStack_b0;
          local_58.DataPtr = local_b8;
          ArrayClampInPlace(&local_58,0.0,__real_3f800000);
        }
        this->EnvelopeNumChannels = this->NumChannels;
      }
      return;
    }
  } while( true );
}

// ProcessEnvelopeFollower @ 146515a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::ProcessEnvelopeFollower(FMixerAudioBus *this,float *param_1)

{
  float *_Dst;
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined4 uStack_1c;
  TArrayView<float,int> local_18;
  
  uVar4 = _UNK_1512d75b8;
  uVar3 = ___xmm_20202020202020202020202020202020;
  _Dst = this->EnvelopeValues;
  *(undefined8 *)_Dst = ___xmm_20202020202020202020202020202020;
  *(undefined8 *)(this->EnvelopeValues + 2) = uVar4;
  *(undefined8 *)(this->EnvelopeValues + 4) = uVar3;
  *(undefined8 *)(this->EnvelopeValues + 6) = uVar4;
  iVar1 = this->NumChannels;
  if (iVar1 < 1) {
    this->EnvelopeNumChannels = iVar1;
  }
  else {
    iVar6 = FEnvelopeFollower::GetNumChannels(&this->EnvelopeFollower);
    if (iVar6 != iVar1) {
      FEnvelopeFollower::SetNumChannels(&this->EnvelopeFollower,this->NumChannels);
    }
    FEnvelopeFollower::ProcessAudio(&this->EnvelopeFollower,param_1,this->NumFrames);
    pTVar7 = FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
    if (pTVar7->ArrayNum != this->NumChannels) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnvValues.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBus.cpp"
                         ,0x130,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memcpy(_Dst,(pTVar7->AllocatorInstance).Data,(longlong)this->NumChannels << 2);
    iVar1 = this->NumChannels;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar1;
    local_18.DataPtr = _Dst;
    ArrayClampInPlace(&local_18,0.0,__real_3f800000);
    this->EnvelopeNumChannels = this->NumChannels;
  }
  return;
}

// RemoveInstanceId @ 14651cf50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerAudioBus::RemoveInstanceId(FMixerAudioBus *this,int param_1,ulong64 param_2)

{
  int iVar1;
  FAudioRenderStepId local_res8;
  int local_res10 [2];
  FAudioRenderStepId local_res20;
  
  local_res10[0] = param_1;
  iVar1 = TArray<int,TSizedDefaultAllocator<32>_>::Remove(&this->InstanceIds,local_res10);
  if ((0 < iVar1) && (AudioMixerCVars::UseRenderScheduler != 0)) {
    FAudioRenderStepId::FromTransmitterID((ulong64)&local_res8);
    FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&local_res20);
    FAudioRenderScheduler::RemoveDependency
              ((this->SourceManager->MixerDevice->RenderScheduler).Ptr,local_res20,local_res8);
  }
  if ((((this->bIsAutomatic != false) && ((this->InstanceIds).ArrayNum == 0)) &&
      (this->AudioBusSends[0].ArrayNum == 0)) && (this->AudioBusSends[1].ArrayNum == 0)) {
    return true;
  }
  return false;
}

// RemovePatchInput @ 14651d130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::RemovePatchInput(FMixerAudioBus *this,FPatchInput *param_1)

{
  FPatchMixer::RemovePatch(&this->PatchMixer,param_1);
  return;
}

// RemoveSend @ 14651d140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerAudioBus::RemoveSend(FMixerAudioBus *this,EBusSendType param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FAudioRenderStepId local_res8;
  FAudioRenderStepId local_res20;
  
  uVar9 = this->AudioBusSends[param_1].ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar11 = (longlong)(int)uVar9 * 0x18;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < this->AudioBusSends[param_1].ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)(this->AudioBusSends[param_1].AllocatorInstance.Data + lVar11) == param_2) {
        if (AudioMixerCVars::UseRenderScheduler != 0) {
          uVar7 = 0;
          if ((int)uVar9 < this->AudioBusSends[param_1].ArrayNum) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FAudioRenderStepId::FromTransmitterID((ulong64)&local_res20);
          FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&local_res8);
          FAudioRenderScheduler::RemoveDependency
                    ((this->SourceManager->MixerDevice->RenderScheduler).Ptr,local_res20,local_res8)
          ;
        }
        uVar7 = 0;
        if ((int)uVar9 < this->AudioBusSends[param_1].ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar2 = this->AudioBusSends[param_1].ArrayNum;
        pFVar3 = this->AudioBusSends[param_1].AllocatorInstance.Data;
        iVar8 = ~uVar9 + iVar2;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar3 + (ulonglong)uVar9 * 0x18,pFVar3 + (longlong)(iVar2 - iVar8) * 0x18,
                  (longlong)iVar8 * 0x18);
        }
        piVar1 = &this->AudioBusSends[param_1].ArrayNum;
        *piVar1 = *piVar1 + -1;
        break;
      }
      lVar11 = lVar11 + -0x18;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  if ((((this->bIsAutomatic != false) && ((this->InstanceIds).ArrayNum == 0)) &&
      (this->AudioBusSends[0].ArrayNum == 0)) && (this->AudioBusSends[1].ArrayNum == 0)) {
    return true;
  }
  return false;
}

// SetNumOutputChannels @ 146520900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::SetNumOutputChannels(FMixerAudioBus *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  this->NumChannels = param_1;
  piVar1 = &this->MixedSourceData[0].ArrayMax;
  piVar2 = &this->MixedSourceData[0].ArrayNum;
  iVar4 = param_1 * this->NumFrames;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&this->MixedSourceData[0].AllocatorInstance,0,piVar1);
  }
  iVar3 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar4,&this->MixedSourceData[0].AllocatorInstance,piVar2,piVar1);
  memset(this->MixedSourceData[0].AllocatorInstance.Data + (longlong)iVar3 * 4,0,
         (longlong)iVar4 << 2);
  iVar3 = this->MixedSourceData[1].ArrayMax;
  piVar1 = &this->MixedSourceData[1].ArrayMax;
  this->MixedSourceData[1].ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&this->MixedSourceData[1].AllocatorInstance,0,piVar1);
  }
  iVar3 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar4,&this->MixedSourceData[1].AllocatorInstance,
                     &this->MixedSourceData[1].ArrayNum,piVar1);
  memset(this->MixedSourceData[1].AllocatorInstance.Data + (longlong)iVar3 * 4,0,
         (longlong)iVar4 << 2);
  return;
}

// StartEnvelopeFollower @ 146523f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerAudioBus::StartEnvelopeFollower
          (FMixerAudioBus *this,float param_1,float param_2,float param_3)

{
  FEnvelopeFollowerInitParams local_28;
  
  if (this->bIsEnvelopeFollowing == false) {
    local_28.NumChannels = this->NumChannels;
    local_28.Mode = Peak;
    local_28.bIsAnalog = true;
    local_28.AnalysisWindowMsec = 5.0;
    local_28.SampleRate = param_3;
    local_28.AttackTimeMsec = param_1;
    local_28.ReleaseTimeMsec = param_2;
    FEnvelopeFollower::Init(&this->EnvelopeFollower,&local_28);
    this->EnvelopeValues[0] = 0.0;
    this->EnvelopeValues[1] = 0.0;
    this->EnvelopeValues[2] = 0.0;
    this->EnvelopeValues[3] = 0.0;
    this->EnvelopeValues[4] = 0.0;
    this->EnvelopeValues[5] = 0.0;
    this->EnvelopeValues[6] = 0.0;
    this->EnvelopeValues[7] = 0.0;
    this->bIsEnvelopeFollowing = true;
  }
  return;
}

// StopEnvelopeFollower @ 146525750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::StopEnvelopeFollower(FMixerAudioBus *this)

{
  this->bIsEnvelopeFollowing = false;
  return;
}

// Update @ 146529d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerAudioBus::Update(FMixerAudioBus *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AudioMixerCVars::UseRenderScheduler",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBus.cpp"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentBufferIndex = 1 - this->CurrentBufferIndex;
  return;
}

