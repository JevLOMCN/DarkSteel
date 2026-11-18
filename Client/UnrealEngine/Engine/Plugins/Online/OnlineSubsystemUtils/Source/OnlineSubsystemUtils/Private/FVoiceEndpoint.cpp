// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 5

// FVoiceEndpoint @ 14ecd8da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVoiceEndpoint * __thiscall
FVoiceEndpoint::FVoiceEndpoint(FVoiceEndpoint *this,FString *param_1,float param_2,int param_3)

{
  FAudioPlatformDeviceInfo *this_00;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  FString *this_01;
  int *piVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  IAudioMixerPlatformInterface *pIVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  FAudioDeviceManager *pFVar13;
  FVoiceEndpoint *pFVar14;
  IAudioDeviceModule *pIVar15;
  IAudioMixerPlatformInterface *pIVar16;
  undefined8 *puVar17;
  void *local_88 [2];
  void *local_78;
  void *local_58;
  
  this_00 = &this->PlatformDeviceInfo;
  *(undefined1 *)&this->_padding_ = 0;
  pTVar1 = &(this->PlatformDeviceInfo).OutputChannelArray;
  this->NumChannelsComingIn = param_3;
  (this->DownmixBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FVoiceEndpoint__6B_;
  (this->DownmixBuffer).ArrayNum = 0;
  (this->DownmixBuffer).ArrayMax = 0;
  (this->PlatformEndpoint).Ptr = (IAudioMixerPlatformInterface *)0x0;
  this_01 = &(this->PlatformDeviceInfo).DeviceId;
  (this->OpenParams).OutputDeviceIndex = 0xffffffff;
  piVar2 = &(this->PlatformDeviceInfo).OutputChannelArray.ArrayMax;
  (this->OpenParams).NumFrames = 0x400;
  (this->OpenParams).NumBuffers = 1;
  (this->OpenParams).AudioMixer = (IAudioMixer *)0x0;
  (this->OpenParams).SampleRate = 0xac44;
  (this->OpenParams).MaxSources = 0;
  (this->OpenParams).bRestoreIfRemoved = false;
  (this->OpenParams).bUseSystemAudioDevice = true;
  (this->OpenParams).AudioDeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenParams).AudioDeviceId.Data.ArrayNum = 0;
  (this->OpenParams).AudioDeviceId.Data.ArrayMax = 0;
  *piVar2 = 0;
  (this_00->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDeviceInfo).Name.Data.ArrayNum = 0;
  (this->PlatformDeviceInfo).Name.Data.ArrayMax = 0;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDeviceInfo).DeviceId.Data.ArrayNum = 0;
  (this->PlatformDeviceInfo).DeviceId.Data.ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PlatformDeviceInfo).OutputChannelArray.ArrayNum = 0;
  ::FString::operator=(&this_00->Name,L"Unknown");
  ::FString::operator=(this_01,L"Unknown");
  (this->PlatformDeviceInfo).NumChannels = 0;
  (this->PlatformDeviceInfo).NumDirectOutChannels = 0;
  (this->PlatformDeviceInfo).SampleRate = 0;
  (this->PlatformDeviceInfo).Format = Unknown;
  iVar5 = *piVar2;
  (this->PlatformDeviceInfo).OutputChannelArray.ArrayNum = 0;
  if (iVar5 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  (this->PlatformDeviceInfo).bIsSystemDefault = '\0';
  (this->OutputPatch).Object = (FPatchOutput *)0x0;
  (this->OutputPatch).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OutputPatchCriticalSection,4000);
  if (((GEngine == (UEngine *)0x0) ||
      (pFVar13 = UEngine::GetAudioDeviceManager(GEngine), pFVar13 == (FAudioDeviceManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine && GEngine->GetAudioDeviceManager()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                         ,0x3a8,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FVoiceEndpoint *)(*pcVar8)();
    return pFVar14;
  }
  pFVar13 = UEngine::GetAudioDeviceManager(GEngine);
  pIVar15 = FAudioDeviceManager::GetAudioDeviceModule(pFVar13);
  if ((pIVar15 == (IAudioDeviceModule *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioModule",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                         ,0x3ab,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FVoiceEndpoint *)(*pcVar8)();
    return pFVar14;
  }
  pIVar16 = (IAudioMixerPlatformInterface *)(**(code **)((longlong)*pIVar15 + 0x58))(pIVar15);
  pIVar6 = (this->PlatformEndpoint).Ptr;
  if ((pIVar6 != pIVar16) &&
     ((this->PlatformEndpoint).Ptr = pIVar16, pIVar6 != (IAudioMixerPlatformInterface *)0x0)) {
    (**(code **)(pIVar6->_padding_ + 0x28))(pIVar6,1);
  }
  pIVar6 = (this->PlatformEndpoint).Ptr;
  if (pIVar6 != (IAudioMixerPlatformInterface *)0x0) {
    cVar10 = (**(code **)(pIVar6->_padding_ + 0x38))();
    if ((cVar10 == '\0') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                           ,0x3b3,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FVoiceEndpoint *)(*pcVar8)();
      return pFVar14;
    }
    pIVar6 = (this->PlatformEndpoint).Ptr;
    uVar11 = (**(code **)(pIVar6->_padding_ + 0x78))(pIVar6,param_1);
    if (uVar11 == 0xffffffff) {
      if (2 < (byte)LogVoice._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
      }
      uVar11 = 0xffffffff;
    }
    pIVar6 = (this->PlatformEndpoint).Ptr;
    uVar12 = (**(code **)(pIVar6->_padding_ + 0xe0))(pIVar6,0x400);
    pIVar6 = (this->PlatformEndpoint).Ptr;
    (this->OpenParams).NumFrames = uVar12;
    (this->OpenParams).NumBuffers = 3;
    (this->OpenParams).OutputDeviceIndex = uVar11;
    (this->OpenParams).AudioMixer = (IAudioMixer *)this;
    (this->OpenParams).MaxSources = 0;
    (this->OpenParams).SampleRate = (uint)(longlong)param_2;
    cVar10 = (**(code **)(pIVar6->_padding_ + 0x90))(pIVar6,&this->OpenParams);
    if ((cVar10 == '\0') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                           ,0x3c8,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FVoiceEndpoint *)(*pcVar8)();
      return pFVar14;
    }
    Audio::IAudioMixerPlatformInterface::PostInitializeHardware((this->PlatformEndpoint).Ptr);
    pIVar6 = (this->PlatformEndpoint).Ptr;
    puVar17 = (undefined8 *)(**(code **)(pIVar6->_padding_ + 200))(pIVar6,local_88);
    if (this_00 != (FAudioPlatformDeviceInfo *)puVar17) {
      pFVar7 = (this_00->Name).Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (this_00->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar17;
      *puVar17 = 0;
      (this->PlatformDeviceInfo).Name.Data.ArrayNum = *(int *)(puVar17 + 1);
      (this->PlatformDeviceInfo).Name.Data.ArrayMax = *(int *)((longlong)puVar17 + 0xc);
      puVar17[1] = 0;
    }
    puVar4 = puVar17 + 2;
    if (this_01 != (FString *)puVar4) {
      pFVar7 = (this_01->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar4;
      *puVar4 = 0;
      (this->PlatformDeviceInfo).DeviceId.Data.ArrayNum = *(int *)(puVar17 + 3);
      (this->PlatformDeviceInfo).DeviceId.Data.ArrayMax = *(int *)((longlong)puVar17 + 0x1c);
      puVar17[3] = 0;
    }
    puVar4 = puVar17 + 6;
    (this->PlatformDeviceInfo).NumChannels = *(int *)(puVar17 + 4);
    (this->PlatformDeviceInfo).NumDirectOutChannels = *(int *)((longlong)puVar17 + 0x24);
    (this->PlatformDeviceInfo).SampleRate = *(int *)(puVar17 + 5);
    (this->PlatformDeviceInfo).Format = *(Type *)((longlong)puVar17 + 0x2c);
    if (pTVar1 != (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)puVar4) {
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*puVar4;
      *puVar4 = 0;
      (this->PlatformDeviceInfo).OutputChannelArray.ArrayNum = *(int *)(puVar17 + 7);
      *piVar2 = *(int *)((longlong)puVar17 + 0x3c);
      puVar17[7] = 0;
    }
    puVar3 = &(this->PlatformDeviceInfo).field_0x40;
    *puVar3 = *puVar3 ^ ((this->PlatformDeviceInfo).bIsSystemDefault ^ *(byte *)(puVar17 + 8)) & 1;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    (**(code **)(((this->PlatformEndpoint).Ptr)->_padding_ + 0xa0))();
    (**(code **)(((this->PlatformEndpoint).Ptr)->_padding_ + 0x138))();
  }
  return this;
}

// ~FVoiceEndpoint @ 14ecdb990

void __thiscall FVoiceEndpoint::~FVoiceEndpoint(FVoiceEndpoint *this)

{
  IAudioMixerPlatformInterface *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FVoiceEndpoint__6B_;
  pIVar1 = (this->PlatformEndpoint).Ptr;
  if (pIVar1 != (IAudioMixerPlatformInterface *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0xa8))();
    (**(code **)(((this->PlatformEndpoint).Ptr)->_padding_ + 0x98))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OutputPatchCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputPatch).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->PlatformDeviceInfo).OutputChannelArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlatformDeviceInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlatformDeviceInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OpenParams).AudioDeviceId.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar1 = (this->PlatformEndpoint).Ptr;
  if (pIVar1 != (IAudioMixerPlatformInterface *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,1);
  }
  pFVar2 = (this->DownmixBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// OnAudioStreamShutdown @ 14eceb4f0

void __thiscall FVoiceEndpoint::OnAudioStreamShutdown(FVoiceEndpoint *this)

{
  return;
}

// OnProcessAudioStream @ 14ecef9b0

bool __thiscall
FVoiceEndpoint::OnProcessAudioStream
          (FVoiceEndpoint *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FPatchOutput *pFVar3;
  int iVar4;
  int iVar5;
  
  lpCriticalSection = &this->OutputPatchCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = (this->OutputPatch).Object;
  iVar5 = param_1->ArrayNum / (this->PlatformDeviceInfo).NumChannels;
  if (pFVar3 != (FPatchOutput *)0x0) {
    iVar2 = Audio::FPatchOutput::GetNumSamplesAvailable(pFVar3);
    if (this->NumChannelsComingIn * iVar5 <= iVar2) {
      if ((this->PlatformDeviceInfo).NumChannels == this->NumChannelsComingIn) {
        pFVar3 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&this->OutputPatch);
        Audio::FPatchOutput::PopAudio
                  (pFVar3,(float *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,false);
      }
      else {
        piVar1 = &(this->DownmixBuffer).ArrayMax;
        (this->DownmixBuffer).ArrayNum = 0;
        if ((this->DownmixBuffer).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&(this->DownmixBuffer).AllocatorInstance,0,piVar1);
        }
        iVar4 = iVar5 * this->NumChannelsComingIn;
        iVar2 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                          (4,4,iVar4,&(this->DownmixBuffer).AllocatorInstance,
                           &(this->DownmixBuffer).ArrayNum,piVar1);
        memset((this->DownmixBuffer).AllocatorInstance.Data + (longlong)iVar2 * 4,0,
               (longlong)iVar4 << 2);
        pFVar3 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&this->OutputPatch);
        Audio::FPatchOutput::PopAudio
                  (pFVar3,(float *)(this->DownmixBuffer).AllocatorInstance.Data,
                   iVar5 * this->NumChannelsComingIn,false);
        VoiceEngineUtilities::DownmixBuffer
                  ((float *)(this->DownmixBuffer).AllocatorInstance.Data,
                   (float *)(param_1->AllocatorInstance).Data,iVar5,this->NumChannelsComingIn,
                   (this->PlatformDeviceInfo).NumChannels);
      }
      goto LAB_14ecefb22;
    }
  }
  memset((param_1->AllocatorInstance).Data,0,(longlong)param_1->ArrayNum << 2);
LAB_14ecefb22:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// PatchInOutput @ 14ecf3c00

void __thiscall
FVoiceEndpoint::PatchInOutput(FVoiceEndpoint *this,TSharedPtr<Audio::FPatchOutput,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FPatchOutput *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  lpCriticalSection = &this->OutputPatchCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->OutputPatch).SharedReferenceCount.ReferenceController;
    (this->OutputPatch).Object = pFVar2;
    (this->OutputPatch).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
                    /* WARNING: Could not recover jumptable at 0x00014ecf3c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

