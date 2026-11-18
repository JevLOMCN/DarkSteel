// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 56

// FVoiceEngineImpl @ 14ecd91b0

FVoiceEngineImpl * __thiscall
FVoiceEngineImpl::FVoiceEngineImpl(FVoiceEngineImpl *this,IOnlineSubsystem *param_1)

{
  FName *pFVar1;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7IVoiceEngine__6B_;
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__IVoiceEngine__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IDeviceChangedListener__;
  (this->OnlineInstanceName).ComparisonIndex = 0;
  (this->OnlineInstanceName).Number = 0;
  this->PlayerVoiceData[0].VoiceRemainderSize = 0;
  this->PlayerVoiceData[0].VoiceRemainder.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PlayerVoiceData[0].VoiceRemainder.ArrayNum = 0;
  this->PlayerVoiceData[0].VoiceRemainder.ArrayMax = 0;
  this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.ArrayNum = 0;
  this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputsCriticalSection,4000);
  this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.ArrayNum = 0;
  this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputsCriticalSection,4000);
  (this->VoiceCapture).Object = (IVoiceCapture *)0x0;
  (this->VoiceCapture).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->VoiceEncoder).Object = (IVoiceEncoder *)0x0;
  (this->VoiceEncoder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->CompressedVoiceBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedVoiceBuffer).ArrayNum = 0;
  (this->CompressedVoiceBuffer).ArrayMax = 0;
  *(undefined8 *)&this->RemoteTalkerBuffers = 0;
  *(undefined8 *)&(this->RemoteTalkerBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->RemoteTalkerBuffers).field_0x20 = 0;
  this->OwningUserIndex = -1;
  this->UncompressedBytesAvailable = 0;
  this->CompressedBytesAvailable = 0;
  this->AvailableVoiceResult = UnInitialized;
  this->bPendingFinalCapture = false;
  this->bIsCapturing = false;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->RemoteTalkerBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x48 = 0;
  (this->DecompressedVoiceBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecompressedVoiceBuffer).ArrayNum = 0;
  (this->DecompressedVoiceBuffer).ArrayMax = 0;
  this->SerializeHelper = (FVoiceSerializeHelper *)0x0;
  *(undefined8 *)&this->VoiceAmplitudes = 0;
  *(undefined8 *)&(this->VoiceAmplitudes).field_0x8 = 0;
  *(undefined8 *)&(this->VoiceAmplitudes).field_0x20 = 0;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x28 = 0;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x2c = 0x80;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x34 = 0;
  *(undefined8 *)&(this->VoiceAmplitudes).field_0x40 = 0;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x48 = 0;
  Audio::FPatchMixerSplitter::FPatchMixerSplitter(&this->AllRemoteTalkerAudio);
  (this->ExternalEndpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalEndpoints).ArrayNum = 0;
  (this->ExternalEndpoints).ArrayMax = 0;
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
  AddRaw<FVoiceEngineImpl>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,(FVoiceEngineImpl *)local_res8,
             (pmf_d8d716c1 *)this);
  if (param_1 != (IOnlineSubsystem *)0x0) {
    pFVar1 = (FName *)(**(code **)(param_1->_padding_ + 0x18))(param_1,local_res8);
    this->OnlineInstanceName = *pFVar1;
  }
  return this;
}

// FVoiceEngineImpl @ 14ecd93a0

FVoiceEngineImpl * __thiscall FVoiceEngineImpl::FVoiceEngineImpl(FVoiceEngineImpl *this)

{
  this->_padding_ = (longlong)&___7IVoiceEngine__6B_;
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__IVoiceEngine__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IDeviceChangedListener__;
  (this->OnlineInstanceName).ComparisonIndex = 0;
  (this->OnlineInstanceName).Number = 0;
  this->PlayerVoiceData[0].VoiceRemainderSize = 0;
  this->PlayerVoiceData[0].VoiceRemainder.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PlayerVoiceData[0].VoiceRemainder.ArrayNum = 0;
  this->PlayerVoiceData[0].VoiceRemainder.ArrayMax = 0;
  this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.ArrayNum = 0;
  this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputsCriticalSection,4000);
  this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.ArrayNum = 0;
  this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputsCriticalSection,4000);
  (this->VoiceCapture).Object = (IVoiceCapture *)0x0;
  (this->VoiceCapture).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->VoiceEncoder).Object = (IVoiceEncoder *)0x0;
  (this->VoiceEncoder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->CompressedVoiceBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedVoiceBuffer).ArrayNum = 0;
  (this->CompressedVoiceBuffer).ArrayMax = 0;
  *(undefined8 *)&this->RemoteTalkerBuffers = 0;
  *(undefined8 *)&(this->RemoteTalkerBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->RemoteTalkerBuffers).field_0x20 = 0;
  this->OwningUserIndex = -1;
  this->UncompressedBytesAvailable = 0;
  this->CompressedBytesAvailable = 0;
  this->AvailableVoiceResult = UnInitialized;
  this->bPendingFinalCapture = false;
  this->bIsCapturing = false;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->RemoteTalkerBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x48 = 0;
  (this->DecompressedVoiceBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecompressedVoiceBuffer).ArrayNum = 0;
  (this->DecompressedVoiceBuffer).ArrayMax = 0;
  this->SerializeHelper = (FVoiceSerializeHelper *)0x0;
  *(undefined8 *)&this->VoiceAmplitudes = 0;
  *(undefined8 *)&(this->VoiceAmplitudes).field_0x8 = 0;
  *(undefined8 *)&(this->VoiceAmplitudes).field_0x20 = 0;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x28 = 0;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x2c = 0x80;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x34 = 0;
  *(undefined8 *)&(this->VoiceAmplitudes).field_0x40 = 0;
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x48 = 0;
  Audio::FPatchMixerSplitter::FPatchMixerSplitter(&this->AllRemoteTalkerAudio);
  (this->ExternalEndpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalEndpoints).ArrayNum = 0;
  (this->ExternalEndpoints).ArrayMax = 0;
  return this;
}

// ~FVoiceEngineImpl @ 14ecdba50

void __thiscall FVoiceEngineImpl::~FVoiceEngineImpl(FVoiceEngineImpl *this)

{
  TSharedPtr<IVoiceCapture,1> *pTVar1;
  FVoiceSerializeHelper *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__IVoiceEngine__;
  pTVar1 = &this->VoiceCapture;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IDeviceChangedListener__;
  if (this->bIsCapturing != false) {
    if (pTVar1->Object == (IVoiceCapture *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x20))();
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,this);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<IVoiceCapture,1> *)&local_28) {
    pTVar1->Object = (IVoiceCapture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceCapture).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VoiceEncoder != (TSharedPtr<IVoiceEncoder,1> *)&local_18) {
    (this->VoiceEncoder).Object = (IVoiceEncoder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceEncoder).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pFVar2 = this->SerializeHelper;
  if (pFVar2 != (FVoiceSerializeHelper *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  DestructItems<TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_>,int>
            ((TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_> *)
             (this->ExternalEndpoints).AllocatorInstance.Data,(this->ExternalEndpoints).ArrayNum);
  pFVar3 = (this->ExternalEndpoints).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  Audio::FPatchMixerSplitter::~FPatchMixerSplitter(&this->AllRemoteTalkerAudio);
  *(undefined4 *)&(this->VoiceAmplitudes).field_0x48 = 0;
  pvVar4 = *(void **)&(this->VoiceAmplitudes).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VoiceAmplitudes);
  pFVar3 = (this->DecompressedVoiceBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->RemoteTalkerBuffers).field_0x48 = 0;
  pvVar4 = *(void **)&(this->RemoteTalkerBuffers).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RemoteTalkerBuffers);
  pFVar3 = (this->CompressedVoiceBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceEncoder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceCapture).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)
             this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.AllocatorInstance.Data,
             this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.ArrayNum);
  pFVar3 = this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)
             this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.AllocatorInstance.Data,
             this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.ArrayNum);
  pFVar3 = this->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = this->PlayerVoiceData[0].VoiceRemainder.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&___7IVoiceEngine__6B_;
  return;
}

// CreateSerializeHelper @ 14ece1680

void __thiscall FVoiceEngineImpl::CreateSerializeHelper(FVoiceEngineImpl *this)

{
  FVoiceSerializeHelper *this_00;
  
  if (this->SerializeHelper == (FVoiceSerializeHelper *)0x0) {
    this_00 = ::operator_new(0x18);
    if (this_00 != (FVoiceSerializeHelper *)0x0) {
      *(undefined2 *)&this_00->_padding_ = 0;
      this_00->_padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::RegisterGCObject((FGCObject *)this_00);
      this_00->VoiceEngine = this;
      this_00->_padding_ = (longlong)&___7FVoiceSerializeHelper_FVoiceEngineImpl__6B_;
      this->SerializeHelper = this_00;
      return;
    }
    this->SerializeHelper = (FVoiceSerializeHelper *)0x0;
  }
  return;
}

// DisconnectAllEndpoints @ 14ece2210

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::DisconnectAllEndpoints(FVoiceEngineImpl *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  IConsoleManager *pIVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar6 = IConsoleManager::Get();
      MuteAudioEngineOutputCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"voice.MuteAudioEngineOutput",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (MuteAudioEngineOutputCVar == (IConsoleVariable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MuteAudioEngineOutputCVar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                       ,0x388,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  IConsoleVariable::Set<int>(MuteAudioEngineOutputCVar,0,ECVF_SetByGameSetting,(FName)0x0);
  piVar1 = &(this->ExternalEndpoints).ArrayMax;
  pFVar3 = (this->ExternalEndpoints).AllocatorInstance.Data;
  iVar2 = (this->ExternalEndpoints).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_>,int>
              ((TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_> *)pFVar3,iVar2);
    (this->ExternalEndpoints).ArrayNum = 0;
    return;
  }
  DestructItems<TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_>,int>
            ((TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_> *)pFVar3,iVar2);
  (this->ExternalEndpoints).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ExternalEndpoints).AllocatorInstance,0,piVar1);
  }
  return;
}

// Exec_Runtime @ 14ece48e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FVoiceEngineImpl::Exec_Runtime
          (FVoiceEngineImpl *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FSharedReferencer<1> *pFVar1;
  TSharedPtr<IVoiceCapture,1> *this_00;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  IVoiceEncoder *pIVar9;
  IVoiceCapture *pIVar10;
  ForAnyElementType _Str;
  FStaticBasicLogRecord *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  wchar_t *local_res18 [2];
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  local_res18[0] = param_2;
  bVar6 = FParse::Command(local_res18,L"vcvbr",true);
  if (bVar6) {
    FParse::Token(&local_88,local_res18,false);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      _Str.Data = local_88.Data.AllocatorInstance.Data;
    }
    iVar8 = _wtoi((wchar_t *)_Str.Data);
    pTVar3 = (this->VoiceCapture).SharedReferenceCount.ReferenceController;
    if (((pTVar3 == (TReferenceControllerBase<1> *)0x0) ||
        (cVar7 = (**(code **)(pTVar3->_padding_ + 0x20))(pTVar3,iVar8 != 0), cVar7 != '\0')) ||
       ((byte)LogVoice._0_1_ < 3)) goto LAB_14ece4a86;
    pFVar11 = &::LOG_Static;
  }
  else {
    bVar6 = FParse::Command(local_res18,L"vcbitrate",true);
    if (bVar6) {
      FParse::Token(&local_88,local_res18,false);
      if (local_88.Data.ArrayNum < 2) {
        iVar8 = 0;
      }
      else {
        iVar8 = _wtoi((wchar_t *)local_88.Data.AllocatorInstance.Data);
      }
      pTVar3 = (this->VoiceCapture).SharedReferenceCount.ReferenceController;
      if ((((pTVar3 == (TReferenceControllerBase<1> *)0x0) || (iVar8 < 1)) ||
          (cVar7 = (**(code **)(pTVar3->_padding_ + 0x18))(pTVar3,iVar8), cVar7 != '\0')) ||
         ((byte)LogVoice._0_1_ < 3)) goto LAB_14ece4a86;
      pFVar11 = &::LOG_Static;
    }
    else {
      bVar6 = FParse::Command(local_res18,L"vccomplexity",true);
      if (!bVar6) {
        bVar6 = FParse::Command(local_res18,L"vcdump",true);
        if (!bVar6) {
          return false;
        }
        this_00 = (TSharedPtr<IVoiceCapture,1> *)
                  (this->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputsCriticalSection.
                   CriticalSection.Opaque3 + 2);
        if (this_00->Object != (IVoiceCapture *)0x0) {
          pIVar10 = TSharedPtr<IVoiceCapture,1>::operator->(this_00);
          (**(code **)(pIVar10->_padding_ + 0x58))(pIVar10);
        }
        pFVar1 = &(this->VoiceCapture).SharedReferenceCount;
        if (pFVar1->ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          pIVar9 = TSharedPtr<IVoiceEncoder,1>::operator->((TSharedPtr<IVoiceEncoder,1> *)pFVar1);
          (**(code **)(*(longlong *)pIVar9 + 0x40))(pIVar9);
        }
        piVar2 = &(this->CompressedVoiceBuffer).ArrayNum;
        TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_78,
                   (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
                    *)piVar2);
        local_10 = 0;
        stack0xffffffffffffffc8 = local_78._16_16_;
        local_48 = (longlong *)local_78._0_8_;
        auStack_40._0_8_ = local_78._8_8_;
        local_28 = local_58;
        pTStack_20 = pTStack_50;
        uVar12 = local_78._24_8_ >> 0x20;
        local_18 = (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
                    *)piVar2;
        if (*(int *)(local_78._16_8_ + 0x18) <= local_78._28_4_) {
          return true;
        }
        do {
          plVar4 = *(longlong **)((longlong)(int)uVar12 * 0x120 + 0x90 + *local_48);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x28))();
          }
          uStack_30 = uStack_30 & ~auStack_40._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
          uVar12 = (ulonglong)uStack_2c;
        } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
        if ((char)local_10 == '\0') {
          return true;
        }
        if (local_10._1_1_ == '\0') {
          return true;
        }
        uVar13 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar13 < 4) {
          iVar8 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar5 & 0x1f);
        }
        if ((((int)uVar13 < 1) || (iVar8 <= local_18->HashSize)) && (local_18->HashSize <= iVar8)) {
          return true;
        }
        local_18->HashSize = iVar8;
        TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
        return true;
      }
      FParse::Token(&local_88,local_res18,false);
      if (local_88.Data.ArrayNum < 2) {
        iVar8 = -1;
      }
      else {
        iVar8 = _wtoi((wchar_t *)local_88.Data.AllocatorInstance.Data);
      }
      pFVar1 = &(this->VoiceCapture).SharedReferenceCount;
      if ((pFVar1->ReferenceController == (TReferenceControllerBase<1> *)0x0) || (iVar8 < 0))
      goto LAB_14ece4a86;
      pIVar9 = TSharedPtr<IVoiceEncoder,1>::operator->((TSharedPtr<IVoiceEncoder,1> *)pFVar1);
      cVar7 = (**(code **)(*(longlong *)pIVar9 + 0x28))(pIVar9,iVar8);
      if ((cVar7 != '\0') || ((byte)LogVoice._0_1_ < 3)) goto LAB_14ece4a86;
      pFVar11 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogVoice);
LAB_14ece4a86:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return true;
}

// GenerateVoiceData @ 14ece72c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVoiceEngineImpl::GenerateVoiceData
          (FVoiceEngineImpl *this,USoundWaveProcedural *param_1,int param_2,FUniqueNetId *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  FString local_a8;
  FString local_98;
  TSharedRef<FUniqueNetId_const_,1> local_88;
  FUniqueNetIdWrapper local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_3->field_0x8,&local_88);
  local_78._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_78.Variant._padding_ = (longlong)pTVar6->Object;
  local_78.Variant._padding_ = (longlong)(pTVar6->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_78.Variant._padding_ !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_78.Variant._padding_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_78.Variant._padding_)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  local_78.Variant.TypeIndex = 0;
  uVar3 = ::GetTypeHash(&local_78);
  iVar4 = TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>
                    ((TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
                      *)&this->RemoteTalkerBuffers,uVar3,&local_78);
  lVar7 = 0;
  if (iVar4 != -1) {
    lVar7 = (longlong)iVar4 * 0x120 + *(longlong *)&(this->RemoteTalkerBuffers).field_0x0;
  }
  uVar10 = (ulonglong)local_78.Variant.TypeIndex;
  lVar8 = lVar7 + 0x20;
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  if ((1 < local_78.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.Variant._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_78.Variant);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (lVar8 != 0) {
    iVar4 = UVOIPStatics::GetVoiceNumChannels();
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar8 + 0x38);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 0x68);
    iVar5 = *(int *)(lVar8 + 0x68) / (iVar4 * 2);
    if (iVar5 < param_2) {
      if (5 < (byte)LogVoiceEngine._0_1_) {
        ::FString::PrintfImpl(&local_98,L"Voice underflow");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (5 < (byte)LogVoiceEngine._0_1_) {
        ::FString::PrintfImpl(&local_a8,L"GenerateVoiceData %d / %d");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      uVar9 = iVar5 * iVar4 * 2;
      USoundWaveProcedural::QueueAudio(param_1,*(uchar **)(lVar8 + 0x60),uVar9);
      uVar3 = 0;
      if ((int)uVar9 <= *(int *)(lVar8 + 0x68)) {
        uVar3 = ~uVar9 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_c0 = (longlong)(int)uVar9;
        local_c8 = 0;
        local_b8 = (longlong)*(int *)(lVar8 + 0x68);
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (uVar9 != 0) {
        iVar4 = *(int *)(lVar8 + 0x68) - uVar9;
        if (iVar4 != 0) {
          memmove(*(void **)(lVar8 + 0x60),
                  (void *)((longlong)(int)uVar9 + (longlong)*(void **)(lVar8 + 0x60)),
                  (longlong)iVar4);
        }
        *(int *)(lVar8 + 0x68) = *(int *)(lVar8 + 0x68) - uVar9;
      }
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) - uVar9;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// GetCompressedVoiceBuffer @ 14ece7910

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FVoiceEngineImpl::GetCompressedVoiceBuffer(FVoiceEngineImpl *this)

{
  return &this->CompressedVoiceBuffer;
}

// GetDecompressedVoiceBuffer @ 14ece7920

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FVoiceEngineImpl::GetDecompressedVoiceBuffer(FVoiceEngineImpl *this)

{
  return &this->DecompressedVoiceBuffer;
}

// GetIncomingAudioAmplitude @ 14ece7a90

float __thiscall
FVoiceEngineImpl::GetIncomingAudioAmplitude(FVoiceEngineImpl *this,FUniqueNetIdWrapper *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  LARGE_INTEGER local_res8;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>
                    ((TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
                      *)&this->VoiceAmplitudes,uVar3,param_1);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x38 + *(longlong *)&(this->VoiceAmplitudes).field_0x0;
    pfVar6 = (float *)(lVar5 + 0x20);
    if (lVar5 == 0) {
      pfVar6 = (float *)0x0;
    }
    if (pfVar6 != (float *)0x0) {
      QueryPerformanceCounter(&local_res8);
      dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      dVar1 = *(double *)(pfVar6 + 2);
      fVar7 = UVOIPStatics::GetRemoteTalkerTimeoutDuration();
      if ((double)fVar7 < dVar2 - dVar1) {
        return 0.0;
      }
      return *pfVar6;
    }
  }
  return __real_bf800000;
}

// GetLocalPlayerVoiceData @ 14ece7e30

FLocalVoiceData * __thiscall FVoiceEngineImpl::GetLocalPlayerVoiceData(FVoiceEngineImpl *this)

{
  return this->PlayerVoiceData;
}

// GetMaxVoiceRemainderSize @ 14ece7e40

int __thiscall FVoiceEngineImpl::GetMaxVoiceRemainderSize(FVoiceEngineImpl *this)

{
  return 0x1000;
}

// GetMicrophoneAmplitude @ 14ece7e50

float __thiscall FVoiceEngineImpl::GetMicrophoneAmplitude(FVoiceEngineImpl *this,int param_1)

{
  IVoiceCapture *pIVar1;
  float fVar2;
  
  pIVar1 = (this->VoiceCapture).Object;
  if (pIVar1 != (IVoiceCapture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ece7e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pIVar1->_padding_ + 0x60))();
    return fVar2;
  }
  return 0.0;
}

// GetMicrophoneOutput @ 14ece7ec0

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
FVoiceEngineImpl::GetMicrophoneOutput
          (FVoiceEngineImpl *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__)

{
  IVoiceCapture *pIVar1;
  
  pIVar1 = (this->VoiceCapture).Object;
  if (pIVar1 != (IVoiceCapture *)0x0) {
    Audio::FPatchSplitter::AddNewPatch
              (&pIVar1->MicrophoneOutput,__return_storage_ptr__,0x2000,__real_3f800000);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FPatchOutput *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetOnlineSubSystem @ 14ece8380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IOnlineSubsystem * __thiscall FVoiceEngineImpl::GetOnlineSubSystem(FVoiceEngineImpl *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UWorld *pUVar1;
  FOnlineSubsystemModule *pFVar2;
  IOnlineSubsystem *pIVar3;
  
  pUVar1 = GetWorldForOnline(this->OnlineInstanceName);
  if (pUVar1 != (UWorld *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                        ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
        _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar2 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                       (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                        ::__l2::OnlineSubsystemModuleName);
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00014ece83db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar3 = (IOnlineSubsystem *)(*UNRECOVERED_JUMPTABLE)(pFVar2,0,UNRECOVERED_JUMPTABLE);
    return pIVar3;
  }
  return (IOnlineSubsystem *)0x0;
}

// GetRemoteTalkerBuffers @ 14ece8800

TMap<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>_>
* __thiscall FVoiceEngineImpl::GetRemoteTalkerBuffers(FVoiceEngineImpl *this)

{
  return &this->RemoteTalkerBuffers;
}

// GetRemoteTalkerOutput @ 14ece8850

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
FVoiceEngineImpl::GetRemoteTalkerOutput
          (FVoiceEngineImpl *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__)

{
  Audio::FPatchMixerSplitter::AddNewOutput
            (&this->AllRemoteTalkerAudio,__return_storage_ptr__,0x2000,__real_3f800000);
  return __return_storage_ptr__;
}

// GetVoiceCapture @ 14ece8ba0

TSharedPtr<IVoiceCapture,1> * __thiscall FVoiceEngineImpl::GetVoiceCapture(FVoiceEngineImpl *this)

{
  return &this->VoiceCapture;
}

// GetVoiceCapture @ 14ece8bb0

TSharedPtr<IVoiceCapture,1> * __thiscall FVoiceEngineImpl::GetVoiceCapture(FVoiceEngineImpl *this)

{
  return &this->VoiceCapture;
}

// GetVoiceDataReadyFlags @ 14ece8bc0

uint __thiscall FVoiceEngineImpl::GetVoiceDataReadyFlags(FVoiceEngineImpl *this)

{
  char cVar1;
  
  VoiceCaptureUpdate(this);
  if (this->OwningUserIndex != -1) {
    cVar1 = (**(code **)(this->_padding_ + 0x108))(this);
    if (((cVar1 != '\0') && (this->AvailableVoiceResult == Ok)) &&
       (this->UncompressedBytesAvailable != 0)) {
      return 1 << ((byte)this->OwningUserIndex & 0x1f);
    }
  }
  return 0;
}

// GetVoiceDebugState @ 14ece92c0

FString * __thiscall
FVoiceEngineImpl::GetVoiceDebugState(FVoiceEngineImpl *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  EVoiceCaptureState::ToString(this->AvailableVoiceResult);
  (**(code **)(this->_padding_ + 0x68))(this);
  (**(code **)(this->_padding_ + 0x108))(this);
  ::FString::PrintfImpl
            (&local_38,
             L"IsRecording: %d\n DataReady: 0x%08x State:%s\n UncompressedBytes: %d\n CompressedBytes: %d\n"
            );
  if (__return_storage_ptr__ != &local_38) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Remainder[%d] %d\n");
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVoiceEncoder @ 14ece9410

TSharedPtr<IVoiceEncoder,1> * __thiscall FVoiceEngineImpl::GetVoiceEncoder(FVoiceEngineImpl *this)

{
  return &this->VoiceEncoder;
}

// GetVoiceEncoder @ 14ece9420

TSharedPtr<IVoiceEncoder,1> * __thiscall FVoiceEngineImpl::GetVoiceEncoder(FVoiceEngineImpl *this)

{
  return &this->VoiceEncoder;
}

// GetVoiceSettingsOverride @ 14ece9430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FVoiceEngineImpl::GetVoiceSettingsOverride
          (FVoiceEngineImpl *this,FUniqueNetIdWrapper *param_1,FVoiceSettings *param_2)

{
  return;
}

// Init @ 14ece9c10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FVoiceEngineImpl::Init(FVoiceEngineImpl *this,int param_1,int param_2)

{
  TSharedPtr<IVoiceEncoder,1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  FLocalVoiceData *pFVar4;
  char cVar5;
  EAudioEncodeHint EVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  FName *pFVar11;
  FModuleManager *this_00;
  IModuleInterface *pIVar12;
  undefined8 *puVar13;
  undefined4 in_register_00000014;
  int *piVar14;
  ulonglong uVar15;
  undefined4 in_register_00000084;
  bool bVar16;
  FName local_res8;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  uVar15 = (ulonglong)(uint)param_1;
  plVar10 = (longlong *)
            (**(code **)(this->_padding_ + 0x118))
                      (this,CONCAT44(in_register_00000014,param_1),
                       CONCAT44(in_register_00000084,param_2));
  if ((plVar10 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar10 + 0x120))(plVar10), cVar5 == '\0')) {
    pFVar11 = ::FName::FName(&local_res8,"Voice");
    FVar2 = *pFVar11;
    this_00 = FModuleManager::Get();
    pIVar12 = FModuleManager::LoadModuleChecked(this_00,FVar2);
    if (*(char *)(pIVar12 + 1) == '\0') {
      if (4 < (byte)LogVoice._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
      }
      bVar16 = false;
    }
    else {
      pcVar3 = *(code **)((longlong)*pIVar12 + 0x48);
      EVar6 = UVOIPStatics::GetAudioEncodingHint();
      iVar7 = UVOIPStatics::GetVoiceNumChannels();
      iVar8 = UVOIPStatics::GetVoiceSampleRate();
      puVar13 = (undefined8 *)(*pcVar3)(pIVar12,local_38,iVar8,iVar7,EVar6);
      pTVar1 = &this->VoiceEncoder;
      if (pTVar1 != (TSharedPtr<IVoiceEncoder,1> *)puVar13) {
        pTVar1->Object = (IVoiceEncoder *)*puVar13;
        *puVar13 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->VoiceEncoder).SharedReferenceCount,(FSharedReferencer<1> *)(puVar13 + 1))
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      bVar16 = pTVar1->Object != (IVoiceEncoder *)0x0;
      if (pTVar1->Object == (IVoiceEncoder *)0x0) {
        if (2 < (byte)LogVoice._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
        }
      }
      else {
        uVar9 = UVOIPStatics::GetMaxCompressedVoiceDataSize();
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Empty(&this->CompressedVoiceBuffer,uVar9)
        ;
        uVar9 = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Empty
                  (&this->DecompressedVoiceBuffer,uVar9);
        if (0 < param_1) {
          piVar14 = &this->PlayerVoiceData[0].VoiceRemainder.ArrayMax;
          pFVar4 = this->PlayerVoiceData;
          do {
            piVar14[-5] = 0;
            piVar14[-1] = 0;
            if (*piVar14 != 0x1000) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x1000,&(pFVar4->VoiceRemainder).AllocatorInstance,0,piVar14);
            }
            pFVar4 = (FLocalVoiceData *)(&pFVar4->VoiceRemainder + 8);
            piVar14 = piVar14 + 0x22;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
    }
    return bVar16;
  }
  return false;
}

// IsHeadsetPresent @ 14ecea5e0

bool __thiscall FVoiceEngineImpl::IsHeadsetPresent(FVoiceEngineImpl *this,uint param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0xe8))();
  return cVar1 != '\0';
}

// IsLocalPlayerTalking @ 14ecea650

bool __thiscall FVoiceEngineImpl::IsLocalPlayerTalking(FVoiceEngineImpl *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x68))();
  return (param_1 * 2 & uVar1) != 0;
}

// IsOwningUser @ 14ecea7a0

bool __thiscall FVoiceEngineImpl::IsOwningUser(FVoiceEngineImpl *this,uint param_1)

{
  if ((param_1 == 0) && (this->OwningUserIndex == 0)) {
    return true;
  }
  return false;
}

// IsRecording @ 14ecea7c0

bool __thiscall FVoiceEngineImpl::IsRecording(FVoiceEngineImpl *this)

{
  if ((this->bIsCapturing == false) && (this->bPendingFinalCapture == false)) {
    return false;
  }
  return true;
}

// IsRemotePlayerTalking @ 14ecea820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FVoiceEngineImpl::IsRemotePlayerTalking(FVoiceEngineImpl *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  TSharedRef<FUniqueNetId_const_,1> local_48;
  FUniqueNetIdWrapper local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_48);
  local_38._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_38.Variant._padding_ = (longlong)pTVar6->Object;
  local_38.Variant._padding_ = (longlong)(pTVar6->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_38.Variant._padding_ !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38.Variant._padding_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38.Variant._padding_)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  local_38.Variant.TypeIndex = 0;
  uVar4 = ::GetTypeHash(&local_38);
  iVar5 = TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>
                    ((TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
                      *)&this->RemoteTalkerBuffers,uVar4,&local_38);
  lVar8 = 0;
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5 * 0x120 + *(longlong *)&(this->RemoteTalkerBuffers).field_0x0;
  }
  uVar9 = (ulonglong)local_38.Variant.TypeIndex;
  lVar7 = lVar8 + 0x20;
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  if ((1 < local_38.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38.Variant._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_38.Variant);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return lVar7 != 0;
}

// OnAudioFinished @ 14eceb290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::OnAudioFinished(FVoiceEngineImpl *this)

{
  TMap<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>_>
  *pTVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  USynthComponent *this_00;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  FString local_a8;
  longlong *local_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_70;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *local_68;
  undefined2 local_60;
  FString local_58;
  undefined1 local_48 [32];
  longlong local_28;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_20;
  
  pTVar1 = &this->RemoteTalkerBuffers;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_48,
             (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_60 = 0;
  stack0xffffffffffffff78 = local_48._16_16_;
  local_98 = (longlong *)local_48._0_8_;
  auStack_90._0_8_ = local_48._8_8_;
  local_78 = local_28;
  pTStack_70 = pTStack_20;
  uVar6 = local_48._24_8_ >> 0x20;
  uVar8 = local_48._28_4_;
  local_68 = (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (*(int *)(local_48._16_8_ + 0x18) <= (int)uVar8) {
LAB_14eceb488:
    if (5 < (byte)LogVoiceEngine._0_1_) {
      ::FString::PrintfImpl(&local_a8,L"Audio Finished");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
LAB_14eceb320:
  plVar2 = local_98;
  lVar7 = (longlong)(int)uVar6 * 0x120 + *local_98;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar7 + 0x3c));
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar7 + 0x3c));
    if ((*(longlong *)&pUVar5[0x38].field_0x18 == 0) ||
       (*(int *)(*(longlong *)&pUVar5[0x38].field_0x18 + 0x14) != 0)) {
      if (4 < (byte)LogVoiceEngine._0_1_) {
        FUniqueNetIdWrapper::ToDebugString
                  ((FUniqueNetIdWrapper *)((longlong)(int)uVar8 * 0x120 + *plVar2),&local_58);
        ::FString::PrintfImpl(&local_a8,L"Removing VOIP AudioComponent for Id: %s");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      this_00 = (USynthComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar7 + 0x3c));
      USynthComponent::Stop(this_00);
      *(undefined1 *)(lVar7 + 0x51) = 0;
LAB_14eceb416:
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        uVar8 = *(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34;
        if (uVar8 < 4) {
          iVar4 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar7 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_68->HashSize < iVar4)) || (iVar4 < local_68->HashSize)) {
          local_68->HashSize = iVar4;
          TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
          ::Rehash(local_68);
        }
      }
      goto LAB_14eceb488;
    }
  }
  uStack_80 = uStack_80 & ~auStack_90._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
  if (*(int *)(auStack_90._8_8_ + 0x18) <= (int)uStack_7c) goto LAB_14eceb416;
  uVar6 = (ulonglong)uStack_7c;
  uVar8 = uStack_7c;
  goto LAB_14eceb320;
}

// OnDefaultDeviceChanged @ 14eceba80

void __thiscall FVoiceEngineImpl::OnDefaultDeviceChanged(FVoiceEngineImpl *this)

{
  return;
}

// OnDeviceRemoved @ 14ecebd30

void __thiscall FVoiceEngineImpl::OnDeviceRemoved(FVoiceEngineImpl *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// OnPostLoadMap @ 14ecee140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::OnPostLoadMap(FVoiceEngineImpl *this,UWorld *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)&this->RemoteTalkerBuffers);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)&this->RemoteTalkerBuffers;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      FRemoteTalkerDataImpl::Reset
                ((FRemoteTalkerDataImpl *)(*local_48 + 0x20 + (longlong)(int)uVar3 * 0x120));
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// PatchLocalTalkerOutputToEndpoint @ 14ecf3cb0

bool __thiscall
FVoiceEngineImpl::PatchLocalTalkerOutputToEndpoint(FVoiceEngineImpl *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FVoiceEndpoint *pFVar7;
  TSharedPtr<Audio::FPatchOutput,1> local_18;
  
  pFVar7 = ::operator_new(0xe8);
  if (pFVar7 == (FVoiceEndpoint *)0x0) {
    pFVar7 = (FVoiceEndpoint *)0x0;
  }
  else {
    iVar6 = UVOIPStatics::GetVoiceSampleRate();
    pFVar7 = FVoiceEndpoint::FVoiceEndpoint(pFVar7,param_1,(float)iVar6,1);
  }
  iVar6 = (this->ExternalEndpoints).ArrayNum;
  piVar1 = &(this->ExternalEndpoints).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ExternalEndpoints).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->ExternalEndpoints).AllocatorInstance.Data;
  (this->ExternalEndpoints).ArrayNum = iVar6 + 1;
  *(FVoiceEndpoint **)(pFVar2 + (longlong)iVar6 * 8) = pFVar7;
  if ((this->VoiceCapture).Object == (IVoiceCapture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  Audio::FPatchSplitter::AddNewPatch
            (&((this->VoiceCapture).Object)->MicrophoneOutput,&local_18,0x2000,__real_3f800000);
  FVoiceEndpoint::PatchInOutput(*(FVoiceEndpoint **)(pFVar2 + (longlong)iVar6 * 8),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// PatchRemoteTalkerOutputToEndpoint @ 14ecf3e10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall
FVoiceEngineImpl::PatchRemoteTalkerOutputToEndpoint
          (FVoiceEngineImpl *this,FString *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FVoiceEndpoint *this_00;
  FVoiceEndpoint *pFVar9;
  IConsoleManager *pIVar10;
  TSharedPtr<Audio::FPatchOutput,1> local_28;
  
  pFVar9 = (FVoiceEndpoint *)0x0;
  if (param_2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar10 = IConsoleManager::Get();
        MuteAudioEngineOutputCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"voice.MuteAudioEngineOutput",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (MuteAudioEngineOutputCVar == (IConsoleVariable *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MuteAudioEngineOutputCVar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                         ,0x372,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    IConsoleVariable::Set<int>(MuteAudioEngineOutputCVar,1,ECVF_SetByGameSetting,(FName)0x0);
  }
  this_00 = ::operator_new(0xe8);
  if (this_00 != (FVoiceEndpoint *)0x0) {
    iVar7 = UVOIPStatics::GetVoiceNumChannels();
    iVar8 = UVOIPStatics::GetVoiceSampleRate();
    pFVar9 = FVoiceEndpoint::FVoiceEndpoint(this_00,param_1,(float)iVar8,iVar7);
  }
  iVar7 = (this->ExternalEndpoints).ArrayNum;
  piVar1 = &(this->ExternalEndpoints).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ExternalEndpoints).AllocatorInstance,piVar1);
  }
  fVar4 = __real_3f800000;
  pFVar2 = (this->ExternalEndpoints).AllocatorInstance.Data;
  (this->ExternalEndpoints).ArrayNum = iVar7 + 1;
  *(FVoiceEndpoint **)(pFVar2 + (longlong)iVar7 * 8) = pFVar9;
  Audio::FPatchMixerSplitter::AddNewOutput(&this->AllRemoteTalkerAudio,&local_28,0x2000,fVar4);
  FVoiceEndpoint::PatchInOutput(*(FVoiceEndpoint **)(pFVar2 + (longlong)iVar7 * 8),&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return true;
}

// ReadLocalVoiceData @ 14ecf69e0

uint __thiscall
FVoiceEngineImpl::ReadLocalVoiceData
          (FVoiceEngineImpl *this,uint param_1,uchar *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x78))();
  return uVar1;
}

// ReadLocalVoiceData @ 14ecf6a00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FVoiceEngineImpl::ReadLocalVoiceData
          (FVoiceEngineImpl *this,uint param_1,uchar *param_2,uint *param_3,ulong64 *param_4)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  IVoiceCapture *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  Type TVar10;
  uint uVar11;
  IVoiceEncoder *pIVar12;
  int iVar13;
  int local_res8 [2];
  int local_c8;
  int local_c4;
  ulong64 local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  if ((*param_3 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                         ,0x1a8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return uVar9;
  }
  VoiceCaptureUpdate(this);
  cVar8 = (**(code **)(this->_padding_ + 0xe8))(this);
  if (cVar8 == '\0') {
    return 0xffffffff;
  }
  cVar8 = (**(code **)(this->_padding_ + 0x108))(this);
  if (cVar8 == '\0') {
    return 0xffffffff;
  }
  pTVar3 = &this->DecompressedVoiceBuffer;
  uVar9 = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(this->DecompressedVoiceBuffer).ArrayMax;
  (this->DecompressedVoiceBuffer).ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar9,&pTVar3->AllocatorInstance,0,piVar1);
  }
  this_00 = &this->CompressedVoiceBuffer;
  uVar9 = UVOIPStatics::GetMaxCompressedVoiceDataSize();
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar2 = &(this->CompressedVoiceBuffer).ArrayMax;
  (this->CompressedVoiceBuffer).ArrayNum = 0;
  if (*piVar2 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar9,&this_00->AllocatorInstance,0,piVar2);
  }
  local_res8[0] = 0;
  if (((this->VoiceCapture).Object == (IVoiceCapture *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return uVar9;
  }
  pIVar4 = (this->VoiceCapture).Object;
  TVar10 = (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4,local_res8);
  if (TVar10 - Ok < 2) {
    if (local_res8[0] == 0) {
      if (6 < (byte)LogVoiceEngine._0_1_) {
        EVoiceCaptureState::ToString(TVar10);
        ::FString::PrintfImpl(&local_a8,L"ReadLocalVoiceData: No Data: VoiceResult: %s");
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      *param_3 = 0;
      return 0;
    }
    uVar11 = this->PlayerVoiceData[param_1].VoiceRemainderSize + local_res8[0];
    uVar9 = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
    if (uVar9 < uVar11) {
      if (2 < (byte)LogVoiceEngine._0_1_) {
        ::FString::PrintfImpl(&local_98,L"Exceeded uncompressed voice buffer size, clamping");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      uVar11 = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar11,&pTVar3->AllocatorInstance,&(this->DecompressedVoiceBuffer).ArrayNum,
               piVar1);
    uVar9 = this->PlayerVoiceData[param_1].VoiceRemainderSize;
    if (uVar9 != 0) {
      memcpy((pTVar3->AllocatorInstance).Data,
             this->PlayerVoiceData[param_1].VoiceRemainder.AllocatorInstance.Data,(ulonglong)uVar9);
    }
    uVar9 = this->PlayerVoiceData[param_1].VoiceRemainderSize;
    iVar13 = (this->DecompressedVoiceBuffer).ArrayNum;
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    local_c8 = 0;
    local_c0 = 0;
    if (((this->VoiceCapture).Object == (IVoiceCapture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return uVar9;
    }
    pIVar4 = (this->VoiceCapture).Object;
    TVar10 = (**(code **)(pIVar4->_padding_ + 0x40))
                       (pIVar4,pFVar5 + uVar9,iVar13 - uVar9,&local_c8,&local_c0);
    iVar13 = local_c8 + this->PlayerVoiceData[param_1].VoiceRemainderSize;
    if (1 < TVar10 - Ok) {
      return 0xffffffff;
    }
    if (iVar13 == 0) {
      return 0xffffffff;
    }
    if (param_4 != (ulong64 *)0x0) {
      *param_4 = local_c0;
    }
    local_c4 = iVar13;
    uVar9 = UVOIPStatics::GetMaxCompressedVoiceDataSize();
    this->CompressedBytesAvailable = uVar9;
    uVar9 = UVOIPStatics::GetMaxCompressedVoiceDataSize();
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar9,&this_00->AllocatorInstance,&(this->CompressedVoiceBuffer).ArrayNum,
               &(this->CompressedVoiceBuffer).ArrayMax);
    uVar9 = UVOIPStatics::GetMaxCompressedVoiceDataSize();
    if ((uVar9 < (uint)(this->CompressedVoiceBuffer).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("((uint32) CompressedVoiceBuffer.Num()) <= UVOIPStatics::GetMaxCompressedVoiceDataSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceEngineImpl.cpp"
                           ,0x1eb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return uVar9;
    }
    pIVar12 = TSharedPtr<IVoiceEncoder,1>::operator->(&this->VoiceEncoder);
    uVar9 = (**(code **)(*(longlong *)pIVar12 + 0x10))
                      (pIVar12,(pTVar3->AllocatorInstance).Data,iVar13,
                       (this_00->AllocatorInstance).Data,&this->CompressedBytesAvailable);
    this->PlayerVoiceData[param_1].VoiceRemainderSize = uVar9;
    if (uVar9 != 0) {
      if (0x1000 < uVar9) {
        if (2 < (byte)LogVoiceEngine._0_1_) {
          ::FString::PrintfImpl(&local_88,L"Exceeded voice remainder buffer size, clamping");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        this->PlayerVoiceData[param_1].VoiceRemainderSize = 0x1000;
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x1000,&this->PlayerVoiceData[param_1].VoiceRemainder.AllocatorInstance,
                 &this->PlayerVoiceData[param_1].VoiceRemainder.ArrayNum,
                 &this->PlayerVoiceData[param_1].VoiceRemainder.ArrayMax);
      uVar9 = this->PlayerVoiceData[param_1].VoiceRemainderSize;
      memcpy(this->PlayerVoiceData[param_1].VoiceRemainder.AllocatorInstance.Data,
             (pTVar3->AllocatorInstance).Data + (local_c4 - uVar9),(ulonglong)uVar9);
    }
    LastGetVoiceCallTime = FWindowsPlatformTime::Seconds();
    if (4 < (byte)LogVoiceEngine._0_1_) {
      EVoiceCaptureState::ToString(TVar10);
      ::FString::PrintfImpl
                (&local_78,
                 L"ReadLocalVoiceData: GetVoice: Result: %s, Available: %i, LastCall: %0.3f ms");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    uVar9 = this->CompressedBytesAvailable;
    if (uVar9 != 0) {
      if ((int)*param_3 < (int)uVar9) {
        uVar9 = *param_3;
      }
      *param_3 = uVar9;
      memcpy(param_2,(this_00->AllocatorInstance).Data,(ulonglong)uVar9);
      if (6 < (byte)LogVoiceEngine._0_1_) {
        ::FString::PrintfImpl(&local_68,L"ReadLocalVoiceData: Size: %d");
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u__s_s_153091f60,
                   (FLogCategoryBase *)&LogVoiceEngine);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      return 0;
    }
    *param_3 = 0;
    uVar9 = UVOIPStatics::GetMaxCompressedVoiceDataSize();
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Empty(this_00,uVar9);
    if ((byte)LogVoiceEngine._0_1_ < 3) {
      return 0xffffffff;
    }
    EVoiceCaptureState::ToString(TVar10);
    ::FString::PrintfImpl(local_58,L"ReadLocalVoiceData: GetVoice failure: VoiceResult: %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
    local_b8.Data.AllocatorInstance.Data = local_58[0].Data.AllocatorInstance.Data;
  }
  else {
    if ((byte)LogVoiceEngine._0_1_ < 3) {
      return 0xffffffff;
    }
    EVoiceCaptureState::ToString(TVar10);
    ::FString::PrintfImpl
              (&local_b8,L"ReadLocalVoiceData: GetAvailableVoice failure: VoiceResult: %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return 0xffffffff;
}

// RegisterLocalTalker @ 14ecf78a0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FVoiceEngineImpl::RegisterLocalTalker(FVoiceEngineImpl *this,uint param_1)

{
  TSharedPtr<IVoiceCapture,1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  undefined8 *puVar8;
  FName local_res8;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  pTVar1 = &this->VoiceCapture;
  if (pTVar1->Object == (IVoiceCapture *)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"Voice");
    FVar2 = *pFVar6;
    this_00 = FModuleManager::Get();
    pIVar7 = FModuleManager::LoadModuleChecked(this_00,FVar2);
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x40);
    iVar4 = UVOIPStatics::GetVoiceNumChannels();
    iVar5 = UVOIPStatics::GetVoiceSampleRate();
    ::FString::FString(&local_48,"");
    puVar8 = (undefined8 *)(*pcVar3)(pIVar7,local_38,&local_48,iVar5,iVar4);
    if (pTVar1 != (TSharedPtr<IVoiceCapture,1> *)puVar8) {
      pTVar1->Object = (IVoiceCapture *)*puVar8;
      *puVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VoiceCapture).SharedReferenceCount,(FSharedReferencer<1> *)(puVar8 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (pTVar1->Object == (IVoiceCapture *)0x0) {
      if ((byte)LogVoiceEngine._0_1_ < 2) {
        return 0xffffffff;
      }
      ::FString::PrintfImpl
                (&local_48,L"RegisterLocalTalker: Failed to create a Voice Capture Device");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
      if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return 0xffffffff;
      }
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return 0xffffffff;
    }
  }
  if (this->OwningUserIndex != -1) {
    return 0xffffffff;
  }
  this->OwningUserIndex = param_1;
  return 0;
}

// RegisterRemoteTalker @ 14ecf7e40

uint __thiscall FVoiceEngineImpl::RegisterRemoteTalker(FVoiceEngineImpl *this,FUniqueNetId *param_1)

{
  return 0;
}

// SetPlaybackPriority @ 14ecf9c60

uint __thiscall
FVoiceEngineImpl::SetPlaybackPriority
          (FVoiceEngineImpl *this,uint param_1,FUniqueNetId *param_2,uint param_3)

{
  return 0;
}

// SetRemoteVoiceAmplitude @ 14ecf9c70

uint __thiscall
FVoiceEngineImpl::SetRemoteVoiceAmplitude
          (FVoiceEngineImpl *this,FUniqueNetIdWrapper *param_1,float param_2)

{
  uint uVar1;
  FVoiceAmplitudeData *pFVar2;
  LARGE_INTEGER local_res8;
  
  uVar1 = ::GetTypeHash(param_1);
  pFVar2 = TMapBase<FUniqueNetIdWrapper,FVoiceAmplitudeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>_>
           ::FindOrAddImpl<FUniqueNetIdWrapper_const_&>
                     ((TMapBase<FUniqueNetIdWrapper,FVoiceAmplitudeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>_>
                       *)&this->VoiceAmplitudes,uVar1,param_1);
  pFVar2->Amplitude = param_2;
  QueryPerformanceCounter(&local_res8);
  pFVar2->LastSeen =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  return 0;
}

// StartLocalVoiceProcessing @ 14ecfa390

uint __thiscall FVoiceEngineImpl::StartLocalVoiceProcessing(FVoiceEngineImpl *this,uint param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0xe8))();
  if (cVar1 != '\0') {
    if (this->bIsCapturing == false) {
      VoiceCaptureUpdate(this);
      cVar1 = (**(code **)(this->_padding_ + 0x108))(this);
      if (cVar1 == '\0') {
        (**(code **)(this->_padding_ + 0xf0))(this);
      }
      this->bIsCapturing = true;
    }
    return 0;
  }
  return 0xffffffff;
}

// StartRecording @ 14ecfb610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::StartRecording(FVoiceEngineImpl *this)

{
  IVoiceCapture *pIVar1;
  char cVar2;
  FString local_18;
  
  if (6 < (byte)LogVoiceEngine._0_1_) {
    ::FString::PrintfImpl(&local_18,L"VOIP StartRecording");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pIVar1 = (this->VoiceCapture).Object;
  if (((pIVar1 != (IVoiceCapture *)0x0) &&
      (cVar2 = (**(code **)(pIVar1->_padding_ + 0x18))(), cVar2 == '\0')) &&
     (2 < (byte)LogVoiceEngine._0_1_)) {
    ::FString::PrintfImpl(&local_18,L"Failed to start voice recording");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StartRemoteVoiceProcessing @ 14ecfb6f0

uint __thiscall
FVoiceEngineImpl::StartRemoteVoiceProcessing(FVoiceEngineImpl *this,FUniqueNetId *param_1)

{
  return 0;
}

// StopLocalVoiceProcessing @ 14ecfb780

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FVoiceEngineImpl::StopLocalVoiceProcessing(FVoiceEngineImpl *this,uint param_1)

{
  IVoiceCapture *pIVar1;
  char cVar2;
  int iVar3;
  undefined4 in_register_00000014;
  undefined1 local_res8 [32];
  FString local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0xe8))(this,CONCAT44(in_register_00000014,param_1));
  if (cVar2 == '\0') {
    return 0xffffffff;
  }
  if (this->bIsCapturing != false) {
    this->bPendingFinalCapture = true;
    this->bIsCapturing = false;
    (**(code **)(this->_padding_ + 0xf8))(this);
    if (((this->bPendingFinalCapture != false) &&
        (pIVar1 = (this->VoiceCapture).Object, pIVar1 != (IVoiceCapture *)0x0)) &&
       (iVar3 = (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,local_res8), iVar3 == 1)) {
      if (4 < (byte)LogVoiceEngine._0_1_) {
        ::FString::PrintfImpl(&local_18,L"Internal voice capture complete.");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      this->bPendingFinalCapture = false;
      if (this->bIsCapturing != false) {
        (**(code **)(this->_padding_ + 0xf0))();
        return 0;
      }
      (**(code **)(this->_padding_ + 0x100))(this);
    }
  }
  return 0;
}

// StopRecording @ 14ecfba30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::StopRecording(FVoiceEngineImpl *this)

{
  IVoiceCapture *pIVar1;
  FString local_18;
  
  if (6 < (byte)LogVoiceEngine._0_1_) {
    ::FString::PrintfImpl(&local_18,L"VOIP StopRecording");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pIVar1 = (this->VoiceCapture).Object;
  if (pIVar1 != (IVoiceCapture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecfbaa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x20))();
    return;
  }
  return;
}

// StopRemoteVoiceProcessing @ 14ecfbac0

uint __thiscall
FVoiceEngineImpl::StopRemoteVoiceProcessing(FVoiceEngineImpl *this,FUniqueNetId *param_1)

{
  return 0;
}

// StoppedRecording @ 14ecfbad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::StoppedRecording(FVoiceEngineImpl *this)

{
  FString local_18;
  
  if (6 < (byte)LogVoiceEngine._0_1_) {
    ::FString::PrintfImpl(&local_18,L"VOIP StoppedRecording");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SubmitRemoteVoiceData @ 14ecfbba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
FVoiceEngineImpl::SubmitRemoteVoiceData
          (FVoiceEngineImpl *this,FUniqueNetIdWrapper *param_1,uchar *param_2,uint *param_3,
          ulong64 *param_4)

{
  int *piVar1;
  IVoiceDecoder *pIVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong64 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FRemoteTalkerDataImpl *pFVar12;
  USynthComponent *pUVar13;
  UVoipListenerSynthComponent *pUVar14;
  longlong lVar15;
  longlong *plVar16;
  FName *pFVar17;
  UWorld *pUVar18;
  UObject *pUVar19;
  FPatchInput *pFVar20;
  UVOIPTalker *pUVar21;
  undefined8 *puVar22;
  UAudioComponent *pUVar23;
  int *piVar24;
  float fVar25;
  uint local_res8 [2];
  FString local_c8;
  LARGE_INTEGER local_b8;
  UVoipListenerSynthComponent *local_b0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_a8;
  TObjectPtr<USceneComponent>_u_0 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  code *local_68;
  longlong lStack_60;
  FPatchInput local_58 [2];
  
  if (6 < (byte)LogVoiceEngine._0_1_) {
    FUniqueNetIdWrapper::ToDebugString(param_1,(FString *)(local_80 + 8));
    ::FString::PrintfImpl(&local_c8,L"SubmitRemoteVoiceData(%s) Size: %d received!");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
  }
  uVar9 = ::GetTypeHash(param_1);
  pFVar12 = TMapBase<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>_>
            ::FindOrAddImpl<FUniqueNetIdWrapper_const_&>
                      ((TMapBase<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>_>
                        *)&this->RemoteTalkerBuffers,uVar9,param_1);
  QueryPerformanceCounter(&local_b8);
  pFVar12->LastSeen =
       (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  local_res8[0] = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
  local_a8 = &this->DecompressedVoiceBuffer;
  uVar9 = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
  if (-1 < (int)uVar9) {
    piVar1 = &(this->DecompressedVoiceBuffer).ArrayNum;
    piVar24 = &(this->DecompressedVoiceBuffer).ArrayMax;
    *piVar1 = 0;
    if (*piVar24 != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar9,&(this->DecompressedVoiceBuffer).AllocatorInstance,0,piVar24);
    }
    uVar9 = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar9,&(this->DecompressedVoiceBuffer).AllocatorInstance,piVar1,piVar24);
    if (((pFVar12->VoiceDecoder).Object == (IVoiceDecoder *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return uVar9;
    }
    pIVar2 = (pFVar12->VoiceDecoder).Object;
    (**(code **)(*(longlong *)pIVar2 + 0x10))
              (pIVar2,param_2,*param_3,(this->DecompressedVoiceBuffer).AllocatorInstance.Data,
               local_res8);
    if (local_res8[0] == 0) {
      *param_3 = 0;
    }
    else {
      bVar8 = FWeakObjectPtr::IsValid(&(pFVar12->VoipSynthComponent).WeakPtr);
      if (!bVar8) {
        (**(code **)(this->_padding_ + 0x168))(this);
        bVar8 = FWeakObjectPtr::IsValid(&(pFVar12->VoipSynthComponent).WeakPtr);
        if (bVar8) {
          pUVar13 = (USynthComponent *)FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
          USynthComponent::Stop(pUVar13);
          pUVar14 = (UVoipListenerSynthComponent *)
                    FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
          UVoipListenerSynthComponent::ClosePacketStream(pUVar14);
        }
        lVar15 = (**(code **)(this->_padding_ + 0x118))(this);
        if (lVar15 != 0) {
          plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x118))(this);
          pFVar17 = (FName *)(**(code **)(*plVar16 + 0x18))(plVar16,local_88);
          pUVar18 = GetWorldForOnline(*pFVar17);
          if (pUVar18 != (UWorld *)0x0) {
            uVar9 = UVOIPStatics::GetVoiceSampleRate();
            local_b0 = CreateVoiceSynthComponent(pUVar18,uVar9);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_b0 != (UVoipListenerSynthComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_b0);
            }
            FWeakObjectPtr::operator=(&(pFVar12->VoipSynthComponent).WeakPtr,(FObjectPtr)&local_b0);
          }
        }
        bVar8 = FWeakObjectPtr::IsValid(&(pFVar12->VoipSynthComponent).WeakPtr);
        if (bVar8) {
          pFVar12->bIsActive = false;
          pUVar14 = (UVoipListenerSynthComponent *)
                    FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
          fVar25 = UVOIPStatics::GetBufferingDelay();
          iVar10 = UVOIPStatics::GetNumBufferedPackets();
          UVoipListenerSynthComponent::OpenPacketStream(pUVar14,*param_4,iVar10,fVar25);
          pFVar12->bIsEnvelopeBound = false;
          pUVar19 = FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
          pFVar20 = Audio::FPatchMixerSplitter::AddNewInput
                              (&this->AllRemoteTalkerAudio,local_58,DefaultPatchBufferSizeCVar,
                               DefaultPatchGainCVar);
          Audio::FPatchInput::operator=((FPatchInput *)(pUVar19 + 0x38),pFVar20);
          Audio::FPatchInput::~FPatchInput(local_58);
        }
      }
      bVar8 = FWeakObjectPtr::IsValid(&(pFVar12->VoipSynthComponent).WeakPtr);
      if (bVar8) {
        if (pFVar12->bIsActive == false) {
          pFVar12->bIsActive = true;
          local_90 = 0;
          local_a0.DebugPtr = (USceneComponent *)0x0;
          uStack_98 = 0;
          pUVar21 = UVOIPStatics::GetVOIPTalkerForPlayer
                              (param_1,(FVoiceSettings *)&local_a0.ObjectPtr,(UWorld *)0x0,
                               (APlayerState **)0x0);
          (**(code **)(this->_padding_ + 0x110))(this,param_1,&local_a0);
          pUVar14 = (UVoipListenerSynthComponent *)
                    FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
          ApplyVoiceSettings(pUVar14,(FVoiceSettings *)&local_a0.ObjectPtr);
          pUVar19 = FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
          fVar25 = UVOIPStatics::GetBufferingDelay();
          puVar3 = *(undefined8 **)&pUVar19[0x38].field_0x18;
          uVar7 = *param_4;
          if (puVar3 != (undefined8 *)0x0) {
            while (lVar15 = *(longlong *)puVar3[7], lVar15 != 0) {
              pvVar4 = (void *)puVar3[7];
              puVar3[7] = lVar15;
              *(undefined4 *)(lVar15 + 8) = 0;
              ::operator_delete(pvVar4,0x10);
            }
            uVar9 = 0;
            if (0 < *(int *)(puVar3 + 5)) {
              lVar15 = 0;
              do {
                uVar11 = 0;
                if ((int)uVar9 < *(int *)(puVar3 + 5)) {
                  uVar11 = ~uVar9 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return uVar9;
                }
                *(undefined8 *)(puVar3[4] + 0x18 + lVar15) = 0;
                puVar22 = ::operator_new(0x10);
                if (puVar22 != (undefined8 *)0x0) {
                  *puVar22 = 0;
                  *(uint *)(puVar22 + 1) = uVar9;
                  puVar5 = (undefined8 *)puVar3[6];
                  puVar3[6] = puVar22;
                  *puVar5 = puVar22;
                }
                uVar9 = uVar9 + 1;
                lVar15 = lVar15 + 0x30;
              } while ((int)uVar9 < *(int *)(puVar3 + 5));
            }
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 2) = 0;
            LOCK();
            *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
            UNLOCK();
            puVar3[1] = (longlong)(int)uVar7;
            *(int *)&pUVar19[0x39].field_0x24 = (int)(fVar25 * *(float *)&pUVar19[0x39].field_0x20);
          }
          pUVar13 = (USynthComponent *)FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
          USynthComponent::Start(pUVar13);
          pFVar12->CachedTalkerPtr = pUVar21;
          if (pUVar21 != (UVOIPTalker *)0x0) {
            if (pFVar12->bIsEnvelopeBound == false) {
              local_c8.Data.ArrayNum = 0;
              local_c8.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)UVOIPTalker::OnAudioComponentEnvelopeValue;
              lStack_60 = (ulonglong)(uint)local_c8.Data.ArrayMax << 0x20;
              local_68 = UVOIPTalker::OnAudioComponentEnvelopeValue;
              pUVar19 = FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
              TMulticastDelegateRegistration<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
              ::AddUObject<UVOIPTalker>
                        ((TMulticastDelegateRegistration<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
                          *)&pUVar19[0x35].field_0x18,(UVOIPTalker *)local_80,
                         (pmf_b558a7fa *)pUVar21);
              pFVar12->bIsEnvelopeBound = true;
            }
            pcVar6 = *(code **)(pUVar21->_padding_ + 0x508);
            pUVar13 = (USynthComponent *)FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr)
            ;
            pUVar23 = USynthComponent::GetAudioComponent(pUVar13);
            (*pcVar6)(pUVar21,pUVar23);
          }
        }
        pUVar19 = FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
        if (*(FVoicePacketBuffer **)&pUVar19[0x38].field_0x18 == (FVoicePacketBuffer *)0x0) {
          if (1 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
        }
        else {
          StartSample = StartSample + ((ulonglong)(longlong)(int)local_res8[0] >> 1);
          FVoicePacketBuffer::PushPacket
                    (*(FVoicePacketBuffer **)&pUVar19[0x38].field_0x18,
                     (local_a8->AllocatorInstance).Data,local_res8[0],StartSample,Int16);
        }
        pUVar13 = (USynthComponent *)FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
        bVar8 = USynthComponent::IsPlaying(pUVar13);
        if (!bVar8) {
          pUVar13 = (USynthComponent *)FWeakObjectPtr::Get(&(pFVar12->VoipSynthComponent).WeakPtr);
          USynthComponent::Start(pUVar13);
        }
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
}

// SubmitRemoteVoiceData @ 14ecfc1b0

uint __thiscall
FVoiceEngineImpl::SubmitRemoteVoiceData
          (FVoiceEngineImpl *this,FUniqueNetId *param_1,uchar *param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Public\\VoiceEngineImpl.h"
                     ,0x148,
                     L"Please use the following function signature instead: SubmitRemoteVoiceData(const FUniqueNetIdWrapper& RemoteTalkerId, uint8* Data, uint32* Size, uint64& InSampleCount)"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// Tick @ 14ed072e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::Tick(FVoiceEngineImpl *this,float param_1)

{
  TMap<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>_>
  *pTVar1;
  double dVar2;
  IVoiceCapture *pIVar3;
  double dVar4;
  bool bVar5;
  Type TVar6;
  int iVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  LARGE_INTEGER local_res8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  pIVar3 = (this->VoiceCapture).Object;
  if (pIVar3 != (IVoiceCapture *)0x0) {
    TVar6 = (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3,&this->UncompressedBytesAvailable);
    this->AvailableVoiceResult = TVar6;
  }
  QueryPerformanceCounter(&local_res8);
  pTVar1 = &this->RemoteTalkerBuffers;
  dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar9 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      lVar10 = (longlong)(int)uVar9 * 0x120 + *local_68;
      dVar2 = *(double *)(lVar10 + 0x30);
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar10 + 0x3c));
      if (bVar5) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar10 + 0x3c));
        if (((*(longlong *)&pUVar8[0x38].field_0x18 != 0) &&
            (*(int *)(*(longlong *)&pUVar8[0x38].field_0x18 + 0x14) == 0)) ||
           (*(char *)(lVar10 + 0x51) == '\0')) goto LAB_14ed0740b;
LAB_14ed0741d:
        FRemoteTalkerDataImpl::Reset((FRemoteTalkerDataImpl *)(lVar10 + 0x20));
      }
      else {
LAB_14ed0740b:
        fVar12 = UVOIPStatics::GetRemoteTalkerTimeoutDuration();
        if ((double)fVar12 <= dVar4 - dVar2) goto LAB_14ed0741d;
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar9 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar7 = 1;
      }
      else {
        uVar9 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  Audio::FPatchMixerSplitter::ProcessAudio(&this->AllRemoteTalkerAudio);
  return;
}

// TickTalkers @ 14ed074f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::TickTalkers(FVoiceEngineImpl *this,float param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  LARGE_INTEGER local_res8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  QueryPerformanceCounter(&local_res8);
  dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)&this->RemoteTalkerBuffers);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar6 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
              *)&this->RemoteTalkerBuffers;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      lVar7 = (longlong)(int)uVar6 * 0x120 + *local_68;
      dVar1 = *(double *)(lVar7 + 0x30);
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar7 + 0x3c));
      if (bVar3) {
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar7 + 0x3c));
        if (((*(longlong *)&pUVar5[0x38].field_0x18 != 0) &&
            (*(int *)(*(longlong *)&pUVar5[0x38].field_0x18 + 0x14) == 0)) ||
           (*(char *)(lVar7 + 0x51) == '\0')) goto LAB_14ed075eb;
LAB_14ed075fd:
        FRemoteTalkerDataImpl::Reset((FRemoteTalkerDataImpl *)(lVar7 + 0x20));
      }
      else {
LAB_14ed075eb:
        fVar9 = UVOIPStatics::GetRemoteTalkerTimeoutDuration();
        if ((double)fVar9 <= dVar2 - dVar1) goto LAB_14ed075fd;
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar6 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
        local_38->HashSize = iVar4;
        TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// UnregisterLocalTalker @ 14ed08850

uint __thiscall FVoiceEngineImpl::UnregisterLocalTalker(FVoiceEngineImpl *this,uint param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0xe8))();
  if (cVar1 != '\0') {
    this->OwningUserIndex = -1;
    return 0;
  }
  return 0xffffffff;
}

// UnregisterRemoteTalker @ 14ed08ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
FVoiceEngineImpl::UnregisterRemoteTalker(FVoiceEngineImpl *this,FUniqueNetId *param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  USynthComponent *this_01;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_108 [32];
  FWeakObjectPtr local_e8;
  undefined8 local_e0;
  TSharedRef<FUniqueNetId_const_,1> local_d8;
  TSharedRef<FUniqueNetId_const_,1> local_c8;
  TSharedRef<FUniqueNetId_const_,1> local_b8;
  FUniqueNetIdWrapper local_a8;
  FUniqueNetIdWrapper local_88;
  FUniqueNetIdWrapper local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  this_00 = &param_1->field_0x8;
  pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)this_00,&local_d8);
  local_a8._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a8.Variant._padding_ = (longlong)pTVar6->Object;
  local_a8.Variant._padding_ = (longlong)(pTVar6->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_a8.Variant._padding_ !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_a8.Variant._padding_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_a8.Variant._padding_)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  local_a8.Variant.TypeIndex = 0;
  uVar4 = ::GetTypeHash(&local_a8);
  iVar5 = TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>
                    ((TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
                      *)&this->RemoteTalkerBuffers,uVar4,&local_a8);
  lVar7 = 0;
  if (iVar5 != -1) {
    lVar7 = (longlong)iVar5 * 0x120 + *(longlong *)&this->RemoteTalkerBuffers;
  }
  uVar9 = (ulonglong)local_a8.Variant.TypeIndex;
  lVar8 = lVar7 + 0x20;
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  if ((1 < local_a8.Variant.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a8.Variant._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_a8.Variant);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  if (lVar8 != 0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar8 + 0x1c));
    if (bVar3) {
      this_01 = (USynthComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar8 + 0x1c));
      USynthComponent::Stop(this_01);
      *(undefined1 *)(lVar8 + 0x31) = 0;
    }
    local_e8.ObjectIndex = 0;
    local_e8.ObjectSerialNumber = 0;
    local_e0 = 0;
    FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_e0);
    *(FWeakObjectPtr *)(lVar8 + 0x1c) = local_e8;
    pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                       ((TSharedFromThis<FUniqueNetId,1> *)this_00,&local_c8);
    local_88._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_88.Variant._padding_ = (longlong)pTVar6->Object;
    local_88.Variant._padding_ = (longlong)(pTVar6->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_88.Variant._padding_ !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_88.Variant._padding_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_88.Variant._padding_)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    local_88.Variant.TypeIndex = 0;
    if (*(int *)&(this->RemoteTalkerBuffers).field_0x8 !=
        *(int *)&(this->RemoteTalkerBuffers).field_0x34) {
      uVar4 = ::GetTypeHash(&local_88);
      TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
      ::RemoveImpl<FUniqueNetIdWrapper>
                ((TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
                  *)&this->RemoteTalkerBuffers,uVar4,&local_88);
    }
    uVar2 = local_88.Variant.TypeIndex;
    if ((1 < local_88.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar2] ==
        UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_88.Variant._padding_);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar2])(&local_88.Variant);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                       ((TSharedFromThis<FUniqueNetId,1> *)this_00,&local_b8);
    local_68._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_68.Variant._padding_ = (longlong)pTVar6->Object;
    local_68.Variant._padding_ = (longlong)(pTVar6->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_68.Variant._padding_ !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_68.Variant._padding_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_68.Variant._padding_)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    local_68.Variant.TypeIndex = 0;
    if (*(int *)&(this->VoiceAmplitudes).field_0x8 != *(int *)&(this->VoiceAmplitudes).field_0x34) {
      uVar4 = ::GetTypeHash(&local_68);
      TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
      ::RemoveImpl<FUniqueNetIdWrapper>
                ((TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
                  *)&this->VoiceAmplitudes,uVar4,&local_68);
    }
    uVar2 = local_68.Variant.TypeIndex;
    if ((1 < local_68.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar2] ==
        UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_68.Variant._padding_);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar2])(&local_68.Variant);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  return 0;
}

// VoiceCaptureUpdate @ 14ed095f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceEngineImpl::VoiceCaptureUpdate(FVoiceEngineImpl *this)

{
  IVoiceCapture *pIVar1;
  int iVar2;
  undefined1 local_res8 [32];
  FString local_18;
  
  if (((this->bPendingFinalCapture != false) &&
      (pIVar1 = (this->VoiceCapture).Object, pIVar1 != (IVoiceCapture *)0x0)) &&
     (iVar2 = (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,local_res8), iVar2 == 1)) {
    if (4 < (byte)LogVoiceEngine._0_1_) {
      ::FString::PrintfImpl(&local_18,L"Internal voice capture complete.");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this->bPendingFinalCapture = false;
    if (this->bIsCapturing != false) {
      (**(code **)(this->_padding_ + 0xf0))();
      return;
    }
    (**(code **)(this->_padding_ + 0x100))(this);
  }
  return;
}

