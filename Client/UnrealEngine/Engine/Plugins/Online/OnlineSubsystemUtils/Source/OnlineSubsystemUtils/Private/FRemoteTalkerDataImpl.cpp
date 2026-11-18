// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 6

// FRemoteTalkerDataImpl @ 14ecd77f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRemoteTalkerDataImpl * __thiscall
FRemoteTalkerDataImpl::FRemoteTalkerDataImpl
          (FRemoteTalkerDataImpl *this,FRemoteTalkerDataImpl *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TSharedPtr<IVoiceDecoder,1> *pTVar2;
  TSharedPtr<IVoiceDecoder,1> *pTVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  FWeakObjectPtr FVar4;
  FScriptContainerElement *pFVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  (this->VoipSynthComponent).WeakPtr = (FWeakObjectPtr)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->QueueLock,4000);
  pTVar1 = &this->UncompressedDataQueue;
  pTVar2 = &this->VoiceDecoder;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UncompressedDataQueue).ArrayNum = 0;
  (this->UncompressedDataQueue).ArrayMax = 0;
  pTVar2->Object = (IVoiceDecoder *)0x0;
  (this->VoiceDecoder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->RemoteVoiceOutput).PendingOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteVoiceOutput).PendingOutputs.ArrayNum = 0;
  (this->RemoteVoiceOutput).PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->RemoteVoiceOutput).PendingOutputsCriticalSection,4000);
  (this->RemoteVoiceOutput).ConnectedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RemoteVoiceOutput).ConnectedOutputs.ArrayNum = 0;
  (this->RemoteVoiceOutput).ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->RemoteVoiceOutput).ConnectedOutputsCriticalSection,4000);
  this->LastSeen = param_1->LastSeen;
  param_1->LastSeen = 0.0;
  this->NumFramesStarved = param_1->NumFramesStarved;
  FVar4 = (param_1->VoipSynthComponent).WeakPtr;
  param_1->NumFramesStarved = 0;
  (this->VoipSynthComponent).WeakPtr = FVar4;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pTVar3 = &param_1->VoiceDecoder;
  (param_1->VoipSynthComponent).WeakPtr = local_res8;
  if (pTVar2 != pTVar3) {
    pTVar2->Object = pTVar3->Object;
    pTVar3->Object = (IVoiceDecoder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceDecoder).SharedReferenceCount,
               &(param_1->VoiceDecoder).SharedReferenceCount);
  }
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TSharedPtr<IVoiceDecoder,1> *)&local_38) {
    pTVar3->Object = (IVoiceDecoder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->VoiceDecoder).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  lpCriticalSection = &param_1->QueueLock;
  this->MaxUncompressedDataSize = param_1->MaxUncompressedDataSize;
  param_1->MaxUncompressedDataSize = 0;
  this->MaxUncompressedDataQueueSize = param_1->MaxUncompressedDataQueueSize;
  param_1->MaxUncompressedDataQueueSize = 0;
  this->CurrentUncompressedDataQueueSize = param_1->CurrentUncompressedDataQueueSize;
  param_1->CurrentUncompressedDataQueueSize = 0;
  this->MicrophoneAmplitude = param_1->MicrophoneAmplitude;
  param_1->MicrophoneAmplitude = 0.0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar6 = &param_1->UncompressedDataQueue;
    if (pTVar1 != pTVar6) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->UncompressedDataQueue).ArrayNum = (param_1->UncompressedDataQueue).ArrayNum;
      (this->UncompressedDataQueue).ArrayMax = (param_1->UncompressedDataQueue).ArrayMax;
      (param_1->UncompressedDataQueue).ArrayNum = 0;
      (param_1->UncompressedDataQueue).ArrayMax = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FRemoteTalkerDataImpl @ 14ecd79b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRemoteTalkerDataImpl * __thiscall
FRemoteTalkerDataImpl::FRemoteTalkerDataImpl
          (FRemoteTalkerDataImpl *this,FRemoteTalkerDataImpl *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IVoiceDecoder *pIVar5;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar6;
  
  (this->VoipSynthComponent).WeakPtr = (FWeakObjectPtr)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->QueueLock,4000);
  pTVar1 = &this->UncompressedDataQueue;
  piVar2 = &(this->UncompressedDataQueue).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  (this->UncompressedDataQueue).ArrayNum = 0;
  (this->VoiceDecoder).Object = (IVoiceDecoder *)0x0;
  (this->VoiceDecoder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->RemoteVoiceOutput).PendingOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteVoiceOutput).PendingOutputs.ArrayNum = 0;
  (this->RemoteVoiceOutput).PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->RemoteVoiceOutput).PendingOutputsCriticalSection,4000);
  (this->RemoteVoiceOutput).ConnectedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RemoteVoiceOutput).ConnectedOutputs.ArrayNum = 0;
  (this->RemoteVoiceOutput).ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->RemoteVoiceOutput).ConnectedOutputsCriticalSection,4000);
  this->LastSeen = param_1->LastSeen;
  this->NumFramesStarved = param_1->NumFramesStarved;
  (this->VoipSynthComponent).WeakPtr = (param_1->VoipSynthComponent).WeakPtr;
  pTVar4 = (param_1->VoiceDecoder).SharedReferenceCount.ReferenceController;
  pIVar5 = (param_1->VoiceDecoder).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->VoiceDecoder).SharedReferenceCount.ReferenceController;
  (this->VoiceDecoder).Object = pIVar5;
  (this->VoiceDecoder).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  lpCriticalSection = &param_1->QueueLock;
  this->MaxUncompressedDataSize = param_1->MaxUncompressedDataSize;
  this->MaxUncompressedDataQueueSize = param_1->MaxUncompressedDataQueueSize;
  this->CurrentUncompressedDataQueueSize = param_1->CurrentUncompressedDataQueueSize;
  this->MicrophoneAmplitude = param_1->MicrophoneAmplitude;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pTVar1 != &param_1->UncompressedDataQueue) {
    iVar3 = (param_1->UncompressedDataQueue).ArrayNum;
    _Src = (param_1->UncompressedDataQueue).AllocatorInstance.Data;
    (this->UncompressedDataQueue).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return this;
}

// FRemoteTalkerDataImpl @ 14ecd7b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRemoteTalkerDataImpl * __thiscall
FRemoteTalkerDataImpl::FRemoteTalkerDataImpl(FRemoteTalkerDataImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<IVoiceDecoder,1> *pTVar1;
  int *piVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  FModuleManager *this_00;
  IModuleInterface *pIVar10;
  undefined8 *puVar11;
  FRemoteTalkerDataImpl *pFVar12;
  undefined8 local_res8;
  FName local_res10;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  this->MaxUncompressedDataSize = 0;
  this->MaxUncompressedDataQueueSize = 0;
  this->CurrentUncompressedDataQueueSize = 0;
  this->LastSeen = 0.0;
  this->NumFramesStarved = 0;
  local_res8 = 0;
  (this->VoipSynthComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->VoipSynthComponent).WeakPtr,(FObjectPtr)&local_res8);
  lpCriticalSection = &this->QueueLock;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  pTVar1 = &this->VoiceDecoder;
  (this->UncompressedDataQueue).ArrayMax = 0;
  piVar2 = &(this->UncompressedDataQueue).ArrayMax;
  pTVar1->Object = (IVoiceDecoder *)0x0;
  (this->VoiceDecoder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->UncompressedDataQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UncompressedDataQueue).ArrayNum = 0;
  (this->RemoteVoiceOutput).PendingOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteVoiceOutput).PendingOutputs.ArrayNum = 0;
  (this->RemoteVoiceOutput).PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->RemoteVoiceOutput).PendingOutputsCriticalSection,4000);
  (this->RemoteVoiceOutput).ConnectedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RemoteVoiceOutput).ConnectedOutputs.ArrayNum = 0;
  (this->RemoteVoiceOutput).ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->RemoteVoiceOutput).ConnectedOutputsCriticalSection,4000);
  this->MicrophoneAmplitude = 0.0;
  iVar6 = UVOIPStatics::GetVoiceSampleRate();
  iVar7 = UVOIPStatics::GetVoiceNumChannels();
  pFVar9 = ::FName::FName(&local_res10,"Voice");
  FVar3 = *pFVar9;
  this_00 = FModuleManager::Get();
  pIVar10 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,local_48,iVar6,iVar7);
  if (pTVar1 != (TSharedPtr<IVoiceDecoder,1> *)puVar11) {
    pTVar1->Object = (IVoiceDecoder *)*puVar11;
    *puVar11 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceDecoder).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (pTVar1->Object == (IVoiceDecoder *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceDecoder.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                       ,0x32,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FRemoteTalkerDataImpl *)(*pcVar4)();
      return pFVar12;
    }
  }
  uVar8 = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
  this->MaxUncompressedDataSize = uVar8 * 2;
  this->MaxUncompressedDataQueueSize = uVar8 * 10;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar8 = this->MaxUncompressedDataQueueSize;
    if (-1 < (int)uVar8) {
      (this->UncompressedDataQueue).ArrayNum = 0;
      if (*piVar2 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar8,&(this->UncompressedDataQueue).AllocatorInstance,0,piVar2);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return this;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~FRemoteTalkerDataImpl @ 14ecdae30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRemoteTalkerDataImpl::~FRemoteTalkerDataImpl(FRemoteTalkerDataImpl *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VoiceDecoder != (TSharedPtr<IVoiceDecoder,1> *)&local_18) {
    (this->VoiceDecoder).Object = (IVoiceDecoder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceDecoder).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  Reset(this);
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)&(this->RemoteVoiceOutput).ConnectedOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->RemoteVoiceOutput).ConnectedOutputs.AllocatorInstance.Data,
             (this->RemoteVoiceOutput).ConnectedOutputs.ArrayNum);
  pFVar1 = (this->RemoteVoiceOutput).ConnectedOutputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)&(this->RemoteVoiceOutput).PendingOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->RemoteVoiceOutput).PendingOutputs.AllocatorInstance.Data,
             (this->RemoteVoiceOutput).PendingOutputs.ArrayNum);
  pFVar1 = (this->RemoteVoiceOutput).PendingOutputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceDecoder).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->UncompressedDataQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ecdaef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueueLock);
  return;
}

// Cleanup @ 14ecdded0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRemoteTalkerDataImpl::Cleanup(FRemoteTalkerDataImpl *this)

{
  bool bVar1;
  USynthComponent *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->VoipSynthComponent).WeakPtr);
  if (bVar1) {
    this_00 = (USynthComponent *)FWeakObjectPtr::Get(&(this->VoipSynthComponent).WeakPtr);
    USynthComponent::Stop(this_00);
    this->bIsActive = false;
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->VoipSynthComponent).WeakPtr = local_res8;
  return;
}

// Reset @ 14ecf9280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRemoteTalkerDataImpl::Reset(FRemoteTalkerDataImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  bool bVar2;
  USynthComponent *pUVar3;
  UAudioComponent *this_00;
  UObject *pUVar4;
  UActorComponent *this_01;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->LastSeen = 3.4028234663852886e+38;
  this->NumFramesStarved = 0;
  bVar2 = UObjectInitialized();
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->VoipSynthComponent).WeakPtr);
    if (bVar2) {
      pUVar3 = (USynthComponent *)FWeakObjectPtr::Get(&(this->VoipSynthComponent).WeakPtr);
      USynthComponent::Stop(pUVar3);
      pUVar3 = (USynthComponent *)FWeakObjectPtr::Get(&(this->VoipSynthComponent).WeakPtr);
      this_00 = USynthComponent::GetAudioComponent(pUVar3);
      if ((this_00 != (UAudioComponent *)0x0) && ((this_00->field_0x98 & 1) != 0)) {
        UActorComponent::UnregisterComponent((UActorComponent *)this_00);
      }
      bVar2 = UVOIPStatics::IsVOIPTalkerStillAlive(this->CachedTalkerPtr);
      if (bVar2) {
        (**(code **)(this->CachedTalkerPtr->_padding_ + 0x510))();
      }
      this->bIsActive = false;
      pUVar4 = FWeakObjectPtr::Get(&(this->VoipSynthComponent).WeakPtr);
      if ((pUVar4[3].field_0x20 & 1) != 0) {
        this_01 = (UActorComponent *)FWeakObjectPtr::Get(&(this->VoipSynthComponent).WeakPtr);
        UActorComponent::UnregisterComponent(this_01);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      (this->VoipSynthComponent).WeakPtr = local_res8;
    }
  }
  lpCriticalSection = &this->QueueLock;
  this->CurrentUncompressedDataQueueSize = 0;
  this->MicrophoneAmplitude = 0.0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->UncompressedDataQueue).ArrayMax;
    (this->UncompressedDataQueue).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->UncompressedDataQueue).AllocatorInstance,0,piVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ecf93b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

