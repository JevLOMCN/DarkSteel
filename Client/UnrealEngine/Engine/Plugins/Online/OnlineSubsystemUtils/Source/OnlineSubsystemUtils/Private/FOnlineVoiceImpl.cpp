// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 40

// FOnlineVoiceImpl @ 14ecd75e0

FOnlineVoiceImpl * __thiscall
FOnlineVoiceImpl::FOnlineVoiceImpl(FOnlineVoiceImpl *this,IOnlineSubsystem *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  piVar3 = &(this->VoiceData).LocalPackets[0].Buffer.ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOnlineVoiceImpl__6B_;
  (this->VoiceEngine).Object = (IVoiceEngine *)0x0;
  lVar4 = 1;
  (this->VoiceEngine).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LocalTalkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalTalkers).ArrayNum = 0;
  (this->LocalTalkers).ArrayMax = 0;
  (this->RemoteTalkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteTalkers).ArrayNum = 0;
  (this->RemoteTalkers).ArrayMax = 0;
  (this->SystemMuteList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemMuteList).ArrayNum = 0;
  (this->SystemMuteList).ArrayMax = 0;
  (this->MuteList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MuteList).ArrayNum = 0;
  (this->MuteList).ArrayMax = 0;
  this->OnlineSubsystem = param_1;
  do {
    piVar1 = piVar3 + -1;
    lVar4 = lVar4 + -1;
    *piVar1 = 0;
    *(undefined ***)(piVar3 + -9) = &___7FVoicePacketImpl__6B_;
    (piVar3 + -7)[0] = 0;
    (piVar3 + -7)[1] = 0;
    (piVar3 + -5)[0] = 0;
    (piVar3 + -5)[1] = 0;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(piVar3 + -3))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *piVar3 = 0;
    *(undefined2 *)(piVar3 + 1) = 0;
    *(undefined2 *)(piVar3 + 5) = 0;
    uVar2 = UVOIPStatics::GetMaxVoiceDataSize();
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    *piVar1 = 0;
    if (*piVar3 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,(ForAnyElementType *)(piVar3 + -3),0,piVar3);
    }
    uVar2 = UVOIPStatics::GetMaxVoiceDataSize();
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar2,(ForAnyElementType *)(piVar3 + -3),piVar1,piVar3);
    piVar3 = piVar3 + 0x10;
  } while (lVar4 != 0);
  (this->VoiceData).RemotePackets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoiceData).RemotePackets.ArrayNum = 0;
  (this->VoiceData).RemotePackets.ArrayMax = 0;
  return this;
}

// ~FOnlineVoiceImpl @ 14ecdab60

void __thiscall FOnlineVoiceImpl::~FOnlineVoiceImpl(FOnlineVoiceImpl *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FOnlineVoiceImpl__6B_;
  piVar1 = &(this->LocalTalkers).ArrayMax;
  (this->LocalTalkers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->LocalTalkers).AllocatorInstance,0,piVar1);
  }
  DestructItems<FRemoteTalker,int>
            ((FRemoteTalker *)(this->RemoteTalkers).AllocatorInstance.Data,
             (this->RemoteTalkers).ArrayNum);
  piVar1 = &(this->RemoteTalkers).ArrayMax;
  (this->RemoteTalkers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->RemoteTalkers).AllocatorInstance,0,piVar1);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VoiceEngine != (TSharedPtr<IVoiceEngine,1> *)&local_18) {
    (this->VoiceEngine).Object = (IVoiceEngine *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceEngine).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<TSharedPtr<FVoicePacket,1>,int>
            ((TSharedPtr<FVoicePacket,1> *)(this->VoiceData).RemotePackets.AllocatorInstance.Data,
             (this->VoiceData).RemotePackets.ArrayNum);
  pFVar2 = (this->VoiceData).RemotePackets.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->VoiceData).LocalPackets[0]._padding_ = (longlong)&___7FVoicePacketImpl__6B_;
  pFVar2 = (this->VoiceData).LocalPackets[0].Buffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceData).LocalPackets[0].Sender.SharedReferenceCount.ReferenceController);
  (this->VoiceData).LocalPackets[0]._padding_ = (longlong)&___7FVoicePacket__6B_;
  DestructItems<FUniqueNetIdWrapper,int>
            ((FUniqueNetIdWrapper *)(this->MuteList).AllocatorInstance.Data,
             (this->MuteList).ArrayNum);
  pFVar2 = (this->MuteList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FUniqueNetIdWrapper,int>
            ((FUniqueNetIdWrapper *)(this->SystemMuteList).AllocatorInstance.Data,
             (this->SystemMuteList).ArrayNum);
  pFVar2 = (this->SystemMuteList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRemoteTalker,int>
            ((FRemoteTalker *)(this->RemoteTalkers).AllocatorInstance.Data,
             (this->RemoteTalkers).ArrayNum);
  pFVar2 = (this->RemoteTalkers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LocalTalkers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceEngine).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IOnlineVoice__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// ClearVoicePackets @ 14ecde370

void __thiscall FOnlineVoiceImpl::ClearVoicePackets(FOnlineVoiceImpl *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ecde37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->VoiceData).LocalPackets[0]._padding_ + 0x38))();
  return;
}

// CreateVoiceEngine @ 14ece1700

TSharedPtr<IVoiceEngine,1> * __thiscall
FOnlineVoiceImpl::CreateVoiceEngine
          (FOnlineVoiceImpl *this,TSharedPtr<IVoiceEngine,1> *__return_storage_ptr__)

{
  IOnlineSubsystem *pIVar1;
  FVoiceEngineImpl *pFVar2;
  FName *pFVar3;
  TRawPtrProxy<FVoiceEngineImpl> local_res10;
  
  pFVar2 = ::operator_new(0x2e0);
  if (pFVar2 == (FVoiceEngineImpl *)0x0) {
    pFVar2 = (FVoiceEngineImpl *)0x0;
  }
  else {
    pIVar1 = this->OnlineSubsystem;
    pFVar2->_padding_ = (longlong)&___7IVoiceEngine__6B_;
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&pFVar2->_padding_);
    pFVar2->_padding_ = (longlong)&FVoiceEngineImpl::_vftable__for__IVoiceEngine__;
    pFVar2->_padding_ = (longlong)&FVoiceEngineImpl::_vftable__for__FSelfRegisteringExec__;
    pFVar2->_padding_ = (longlong)&FVoiceEngineImpl::_vftable__for__IDeviceChangedListener__;
    (pFVar2->OnlineInstanceName).ComparisonIndex = 0;
    (pFVar2->OnlineInstanceName).Number = 0;
    pFVar2->PlayerVoiceData[0].VoiceRemainderSize = 0;
    pFVar2->PlayerVoiceData[0].VoiceRemainder.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pFVar2->PlayerVoiceData[0].VoiceRemainder.ArrayNum = 0;
    pFVar2->PlayerVoiceData[0].VoiceRemainder.ArrayMax = 0;
    pFVar2->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pFVar2->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.ArrayNum = 0;
    pFVar2->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputs.ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &pFVar2->PlayerVoiceData[0].LocalVoiceOutput.PendingOutputsCriticalSection,4000);
    pFVar2->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pFVar2->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.ArrayNum = 0;
    pFVar2->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputs.ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &pFVar2->PlayerVoiceData[0].LocalVoiceOutput.ConnectedOutputsCriticalSection,4000);
    (pFVar2->VoiceCapture).Object = (IVoiceCapture *)0x0;
    (pFVar2->VoiceCapture).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar2->VoiceEncoder).Object = (IVoiceEncoder *)0x0;
    (pFVar2->VoiceEncoder).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar2->CompressedVoiceBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->CompressedVoiceBuffer).ArrayNum = 0;
    (pFVar2->CompressedVoiceBuffer).ArrayMax = 0;
    *(undefined8 *)&pFVar2->RemoteTalkerBuffers = 0;
    *(undefined8 *)&(pFVar2->RemoteTalkerBuffers).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->RemoteTalkerBuffers).field_0x20 = 0;
    pFVar2->OwningUserIndex = -1;
    pFVar2->UncompressedBytesAvailable = 0;
    pFVar2->CompressedBytesAvailable = 0;
    pFVar2->AvailableVoiceResult = UnInitialized;
    pFVar2->bPendingFinalCapture = false;
    pFVar2->bIsCapturing = false;
    *(undefined4 *)&(pFVar2->RemoteTalkerBuffers).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->RemoteTalkerBuffers).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->RemoteTalkerBuffers).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->RemoteTalkerBuffers).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->RemoteTalkerBuffers).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->RemoteTalkerBuffers).field_0x48 = 0;
    (pFVar2->DecompressedVoiceBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DecompressedVoiceBuffer).ArrayNum = 0;
    (pFVar2->DecompressedVoiceBuffer).ArrayMax = 0;
    pFVar2->SerializeHelper = (FVoiceSerializeHelper *)0x0;
    *(undefined8 *)&pFVar2->VoiceAmplitudes = 0;
    *(undefined8 *)&(pFVar2->VoiceAmplitudes).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->VoiceAmplitudes).field_0x20 = 0;
    *(undefined4 *)&(pFVar2->VoiceAmplitudes).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->VoiceAmplitudes).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->VoiceAmplitudes).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->VoiceAmplitudes).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->VoiceAmplitudes).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->VoiceAmplitudes).field_0x48 = 0;
    Audio::FPatchMixerSplitter::FPatchMixerSplitter(&pFVar2->AllRemoteTalkerAudio);
    (pFVar2->ExternalEndpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->ExternalEndpoints).ArrayNum = 0;
    (pFVar2->ExternalEndpoints).ArrayMax = 0;
    TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
    AddRaw<FVoiceEngineImpl>
              ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::PostLoadMapWithWorld,(FVoiceEngineImpl *)&local_res10,
               (pmf_d8d716c1 *)pFVar2);
    if (pIVar1 != (IOnlineSubsystem *)0x0) {
      pFVar3 = (FName *)(**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,&local_res10);
      pFVar2->OnlineInstanceName = *pFVar3;
    }
  }
  local_res10.Object = pFVar2;
  TSharedPtr<IVoiceEngine,1>::TSharedPtr<IVoiceEngine,1><FVoiceEngineImpl>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// DisconnectAllEndpoints @ 14ece21f0

void __thiscall FOnlineVoiceImpl::DisconnectAllEndpoints(FOnlineVoiceImpl *this)

{
  IVoiceEngine *pIVar1;
  
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 != (IVoiceEngine *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ece21fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0xe0))();
    return;
  }
  return;
}

// FindRemoteTalker @ 14ece67b0

FRemoteTalker * __thiscall
FOnlineVoiceImpl::FindRemoteTalker(FOnlineVoiceImpl *this,FUniqueNetId *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FRemoteTalker *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < (this->RemoteTalkers).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < (this->RemoteTalkers).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRemoteTalker *)(*pcVar3)();
        return pFVar7;
      }
      pFVar1 = (this->RemoteTalkers).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + uVar10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRemoteTalker *)(*pcVar3)();
        return pFVar7;
      }
      puVar2 = *(undefined8 **)(pFVar1 + uVar10);
      cVar5 = (**(code **)*puVar2)(puVar2,param_1);
      if (cVar5 != '\0') {
        uVar6 = 0;
        if ((int)uVar8 < (this->RemoteTalkers).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FRemoteTalker *)(*pcVar3)();
          return pFVar7;
        }
        return (FRemoteTalker *)
               ((this->RemoteTalkers).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x18;
    } while ((int)(uVar8 + 1) < (this->RemoteTalkers).ArrayNum);
  }
  return (FRemoteTalker *)0x0;
}

// GetAmplitudeOfRemoteTalker @ 14ece75b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
FOnlineVoiceImpl::GetAmplitudeOfRemoteTalker(FOnlineVoiceImpl *this,FUniqueNetId *param_1)

{
  IVoiceEngine *pIVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FUniqueNetId_const_,1> *pTVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auStack_78 [32];
  TSharedRef<FUniqueNetId_const_,1> local_58;
  undefined **local_48;
  FUniqueNetId *local_40;
  TReferenceControllerBase<1> *local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 == (IVoiceEngine *)0x0) {
    return 0.0;
  }
  pcVar2 = *(code **)((longlong)*pIVar1 + 200);
  pTVar4 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_58);
  local_48 = &___7FUniqueNetIdWrapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_40 = pTVar4->Object;
  local_38 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = 0;
  fVar6 = (float)(*pcVar2)(pIVar1,&local_48);
  uVar5 = (ulonglong)local_30;
  if (1 < local_30) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return fVar6;
}

// GetLocalPacket @ 14ece7da0

TSharedPtr<FVoicePacket,1> * __thiscall
FOnlineVoiceImpl::GetLocalPacket
          (FOnlineVoiceImpl *this,TSharedPtr<FVoicePacket,1> *__return_storage_ptr__,uint param_1)

{
  short sVar1;
  FVoicePacketImpl *this_00;
  TRawPtrProxy<FVoicePacketImpl> local_res20;
  
  if (param_1 == 0) {
    sVar1 = (**(code **)((this->VoiceData).LocalPackets[0]._padding_ + 0x10))(&this->VoiceData);
    if (sVar1 != 0) {
      this_00 = ::operator_new(0x40);
      local_res20.Object = (FVoicePacketImpl *)0x0;
      if (this_00 != (FVoicePacketImpl *)0x0) {
        local_res20.Object =
             FVoicePacketImpl::FVoicePacketImpl(this_00,(this->VoiceData).LocalPackets);
      }
      TSharedPtr<FVoicePacket,1>::TSharedPtr<FVoicePacket,1><FVoicePacketImpl>
                (__return_storage_ptr__,&local_res20);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FVoicePacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetMicrophoneOutput @ 14ece7e80

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
FOnlineVoiceImpl::GetMicrophoneOutput
          (FOnlineVoiceImpl *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__)

{
  IVoiceEngine *pIVar1;
  
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 != (IVoiceEngine *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xb0))();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FPatchOutput *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetNumLocalTalkers @ 14ece8170

int __thiscall FOnlineVoiceImpl::GetNumLocalTalkers(FOnlineVoiceImpl *this)

{
  return (this->LocalTalkers).ArrayNum;
}

// GetRemoteTalkerOutput @ 14ece8810

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
FOnlineVoiceImpl::GetRemoteTalkerOutput
          (FOnlineVoiceImpl *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__)

{
  IVoiceEngine *pIVar1;
  
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 != (IVoiceEngine *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xb8))();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FPatchOutput *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetVoiceDebugState @ 14ece8c20

FString * __thiscall
FOnlineVoiceImpl::GetVoiceDebugState(FOnlineVoiceImpl *this,FString *__return_storage_ptr__)

{
  IVoiceEngine *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  longlong **pplVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong *local_108;
  FSharedReferencer<1> FStack_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  void *local_a8 [2];
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  void *local_88 [2];
  void *local_78 [2];
  FString local_68;
  FString local_58 [2];
  
  uVar8 = 0;
  local_108 = (longlong *)0x0;
  FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(__return_storage_ptr__,L"Voice state\n");
  pIVar1 = (this->VoiceEngine).Object;
  bVar15 = pIVar1 == (IVoiceEngine *)0x0;
  if (bVar15) {
    pFVar6 = ::FString::FString(&local_b8,L"No Voice Engine!");
  }
  else {
    pFVar6 = (FString *)(**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,local_a8);
  }
  iVar12 = (pFVar6->Data).ArrayNum;
  iVar11 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar11 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar11);
  if ((bVar15) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((!bVar15) && (local_a8[0] != (void *)0x0)) {
    FMemory::Free(local_a8[0]);
  }
  bVar15 = false;
  ::FString::AppendChars(__return_storage_ptr__,L"\nLocal Talkers:\n",0x10);
  plVar13 = local_108;
  if (0 < (this->LocalTalkers).ArrayNum) {
    do {
      pplVar7 = (longlong **)
                (**(code **)(this->IdentityInt->_padding_ + 0x110))
                          (this->IdentityInt,local_98,uVar8);
      if (&local_108 != pplVar7) {
        local_108 = *pplVar7;
        *pplVar7 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_100,(FSharedReferencer<1> *)(pplVar7 + 1));
        plVar13 = local_108;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      uVar9 = 0;
      if ((int)uVar8 < (this->LocalTalkers).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      if (plVar13 != (longlong *)0x0) {
        if ((plVar13 == (longlong *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
        bVar15 = true;
        (**(code **)(*plVar13 + 0x38))(plVar13,local_88);
      }
      ::FString::PrintfImpl
                (&local_f8,
                 L"[%d]: %s\n Registered: %d\n Networked: %d\n Talking: %d\n WasTalking: %d\n Last:%0.2f\n"
                );
      iVar12 = local_f8.Data.ArrayNum + -1;
      if (local_f8.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar12);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if ((bVar15) && (bVar15 = false, local_88[0] != (void *)0x0)) {
        FMemory::Free(local_88[0]);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->LocalTalkers).ArrayNum);
  }
  uVar10 = 0;
  ::FString::AppendChars(__return_storage_ptr__,L"\nRemote Talkers:\n",0x11);
  uVar14 = uVar10;
  if (0 < (this->RemoteTalkers).ArrayNum) {
    do {
      uVar9 = (uint)uVar14;
      uVar8 = 0;
      if ((int)uVar9 < (this->RemoteTalkers).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar2 = (this->RemoteTalkers).AllocatorInstance.Data;
      pcVar3 = *(code **)(this->_padding_ + 0x128);
      if ((*(longlong *)(pFVar2 + uVar10) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      (*pcVar3)(this,*(undefined8 *)(pFVar2 + uVar10));
      if ((*(longlong *)(pFVar2 + uVar10) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      (**(code **)(**(longlong **)(pFVar2 + uVar10) + 0x38))
                (*(longlong **)(pFVar2 + uVar10),local_78);
      ::FString::PrintfImpl
                (&local_e8,L"[%d]: %s\n Talking: %d\n WasTalking: %d\n Muted: %s\n Last:%0.2f\n");
      iVar12 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar12);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_78[0] != (void *)0x0) {
        FMemory::Free(local_78[0]);
      }
      uVar10 = uVar10 + 0x18;
      uVar14 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < (this->RemoteTalkers).ArrayNum);
  }
  uVar9 = 0;
  ::FString::AppendChars(__return_storage_ptr__,L"\nRaw SystemMutelist:\n",0x15);
  uVar8 = uVar9;
  if (0 < (this->SystemMuteList).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->SystemMuteList).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      FUniqueNetIdWrapper::ToString
                ((FUniqueNetIdWrapper *)
                 ((this->SystemMuteList).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20),
                 &local_68);
      ::FString::PrintfImpl(&local_d8,L"[%d]=%s\n");
      iVar12 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar12);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->SystemMuteList).ArrayNum);
  }
  ::FString::AppendChars(__return_storage_ptr__,L"\nRaw Mutelist:\n",0xf);
  if (0 < (this->MuteList).ArrayNum) {
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->MuteList).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      FUniqueNetIdWrapper::ToString
                ((FUniqueNetIdWrapper *)
                 ((this->MuteList).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20),local_58);
      ::FString::PrintfImpl(&local_c8,L"[%d]=%s\n");
      iVar12 = local_c8.Data.ArrayNum + -1;
      if (local_c8.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar12);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->MuteList).ArrayNum);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_100.ReferenceController);
  return __return_storage_ptr__;
}

// Init @ 14ece9660

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineVoiceImpl::Init(FOnlineVoiceImpl *this)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  IOnlineSubsystem *pIVar4;
  IVoiceEngine *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  TSharedPtr<IVoiceEngine,1> *pTVar14;
  ulonglong uVar15;
  bool local_res8 [8];
  undefined2 local_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  cVar11 = '\0';
  bVar8 = FConfigCacheIni::GetInt
                    (GConfig,L"OnlineSubsystem",L"MaxLocalTalkers",&this->MaxLocalTalkers,
                     &GEngineIni);
  if ((!bVar8) && (this->MaxLocalTalkers = 1, 2 < (byte)LogOnlineVoice._0_1_)) {
    ::FString::PrintfImpl
              (&local_a8,L"Missing MaxLocalTalkers key in OnlineSubsystem of DefaultEngine.ini");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  bVar8 = FConfigCacheIni::GetInt
                    (GConfig,L"OnlineSubsystem",L"MaxRemoteTalkers",&this->MaxRemoteTalkers,
                     &GEngineIni);
  if ((!bVar8) && (this->MaxRemoteTalkers = 0x10, 2 < (byte)LogOnlineVoice._0_1_)) {
    ::FString::PrintfImpl
              (&local_98,L"Missing MaxRemoteTalkers key in OnlineSubsystem of DefaultEngine.ini");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  bVar8 = FConfigCacheIni::GetFloat
                    (GConfig,L"OnlineSubsystem",L"VoiceNotificationDelta",
                     &this->VoiceNotificationDelta,&GEngineIni);
  if ((!bVar8) && (this->VoiceNotificationDelta = 0.2, 2 < (byte)LogOnlineVoice._0_1_)) {
    ::FString::PrintfImpl
              (&local_88,
               L"Missing VoiceNotificationDelta key in OnlineSubsystem of DefaultEngine.ini");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  local_res8[0] = false;
  bVar8 = FConfigCacheIni::GetBool
                    (GConfig,L"OnlineSubsystem",L"bHasVoiceEnabled",local_res8,&GEngineIni);
  if ((bVar8) && (local_res8[0] != false)) {
    pIVar4 = this->OnlineSubsystem;
    if (pIVar4 != (IOnlineSubsystem *)0x0) {
      puVar13 = (undefined8 *)(**(code **)(pIVar4->_padding_ + 0x20))(pIVar4,local_58);
      this->SessionInt = (IOnlineSession *)*puVar13;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      puVar13 = (undefined8 *)
                (**(code **)(this->OnlineSubsystem->_padding_ + 0x80))
                          (this->OnlineSubsystem,local_48);
      this->IdentityInt = (IOnlineIdentity *)*puVar13;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      if ((this->SessionInt != (IOnlineSession *)0x0) &&
         (this->IdentityInt != (IOnlineIdentity *)0x0)) {
        cVar11 = '\x01';
        cVar9 = (**(code **)(this->OnlineSubsystem->_padding_ + 0x120))();
        if ((cVar9 == '\0') && (GIsBuildMachine == false)) {
          pTVar14 = (TSharedPtr<IVoiceEngine,1> *)(**(code **)this->_padding_)(this,local_38);
          TSharedPtr<IVoiceEngine,1>::operator=(&this->VoiceEngine,pTVar14);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pIVar5 = (this->VoiceEngine).Object;
          cVar11 = (**(code **)*pIVar5)(pIVar5,this->MaxLocalTalkers);
        }
        else {
          this->MaxLocalTalkers = 0;
          this->MaxRemoteTalkers = 0;
        }
      }
    }
    uVar3 = this->MaxLocalTalkers;
    uVar15 = (ulonglong)uVar3;
    local_b8 = 0;
    uStack_b4 = 0;
    local_b0 = (uint)local_b0._2_2_ << 0x10;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar15);
    }
    piVar1 = &(this->LocalTalkers).ArrayMax;
    (this->LocalTalkers).ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar3,&(this->LocalTalkers).AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar3) {
      do {
        pFVar6 = (this->LocalTalkers).AllocatorInstance.Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)*piVar1 * 0xc)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        iVar12 = (this->LocalTalkers).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&(this->LocalTalkers).AllocatorInstance,piVar1);
        }
        (this->LocalTalkers).ArrayNum = iVar12 + 1;
        pFVar6 = (this->LocalTalkers).AllocatorInstance.Data;
        *(ulonglong *)(pFVar6 + (longlong)iVar12 * 0xc) =
             CONCAT44(uStack_b4,CONCAT22(uStack_b6,local_b8));
        *(int *)(pFVar6 + (longlong)iVar12 * 0xc + 8) = local_b0;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    uVar3 = this->MaxRemoteTalkers;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    DestructItems<FRemoteTalker,int>
              ((FRemoteTalker *)(this->RemoteTalkers).AllocatorInstance.Data,
               (this->RemoteTalkers).ArrayNum);
    (this->RemoteTalkers).ArrayNum = 0;
    piVar2 = &(this->RemoteTalkers).ArrayMax;
    if ((this->RemoteTalkers).ArrayMax != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar3,&(this->RemoteTalkers).AllocatorInstance,0,piVar2);
    }
    if (cVar11 == '\0') {
      (this->LocalTalkers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&(this->LocalTalkers).AllocatorInstance,0,piVar1);
      }
      DestructItems<FRemoteTalker,int>
                ((FRemoteTalker *)(this->RemoteTalkers).AllocatorInstance.Data,
                 (this->RemoteTalkers).ArrayNum);
      (this->RemoteTalkers).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->RemoteTalkers).AllocatorInstance,0,piVar2);
      }
      local_78 = 0;
      FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->VoiceEngine != (TSharedPtr<IVoiceEngine,1> *)&local_78) {
        (this->VoiceEngine).Object = (IVoiceEngine *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->VoiceEngine).SharedReferenceCount,&FStack_70);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_70.ReferenceController);
    }
  }
  else if (4 < (byte)LogOnlineVoice._0_1_) {
    ::FString::PrintfImpl
              (&local_68,L"Voice interface disabled by config [OnlineSubsystem].bHasVoiceEnabled");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return (bool)cVar11;
}

// IsHeadsetPresent @ 14ecea5b0

bool __thiscall FOnlineVoiceImpl::IsHeadsetPresent(FOnlineVoiceImpl *this,uint param_1)

{
  IVoiceEngine *pIVar1;
  char cVar2;
  
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 != (IVoiceEngine *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x50))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsLocalPlayerTalking @ 14ecea620

bool __thiscall FOnlineVoiceImpl::IsLocalPlayerTalking(FOnlineVoiceImpl *this,uint param_1)

{
  IVoiceEngine *pIVar1;
  char cVar2;
  
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 != (IVoiceEngine *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x58))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsLocallyMuted @ 14ecea680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FOnlineVoiceImpl::IsLocallyMuted(FOnlineVoiceImpl *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TSharedRef<FUniqueNetId_const_,1> *pTVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  TSharedRef<FUniqueNetId_const_,1> local_48;
  FUniqueNetIdWrapper local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar5 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_48);
  local_38._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_38.Variant._padding_ = (longlong)pTVar5->Object;
  local_38.Variant._padding_ = (longlong)(pTVar5->SharedReferenceCount).ReferenceController;
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
  iVar4 = TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::Find(&this->MuteList,&local_38);
  uVar6 = (ulonglong)local_38.Variant.TypeIndex;
  if (1 < local_38.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38.Variant._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_38.Variant);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return iVar4 != -1;
}

// IsMuted @ 14ecea780

bool __thiscall FOnlineVoiceImpl::IsMuted(FOnlineVoiceImpl *this,uint param_1,FUniqueNetId *param_2)

{
  undefined1 uVar1;
  
  if (param_1 < (uint)this->MaxLocalTalkers) {
                    /* WARNING: Could not recover jumptable at 0x00014ecea78b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->_padding_ + 0x128))(this,param_2);
    return (bool)uVar1;
  }
  return false;
}

// IsRemotePlayerTalking @ 14ecea7f0

bool __thiscall
FOnlineVoiceImpl::IsRemotePlayerTalking(FOnlineVoiceImpl *this,FUniqueNetId *param_1)

{
  IVoiceEngine *pIVar1;
  char cVar2;
  
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 != (IVoiceEngine *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x60))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsSystemWideMuted @ 14eceab60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FOnlineVoiceImpl::IsSystemWideMuted(FOnlineVoiceImpl *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TSharedRef<FUniqueNetId_const_,1> *pTVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  TSharedRef<FUniqueNetId_const_,1> local_48;
  FUniqueNetIdWrapper local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar5 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_48);
  local_38._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_38.Variant._padding_ = (longlong)pTVar5->Object;
  local_38.Variant._padding_ = (longlong)(pTVar5->SharedReferenceCount).ReferenceController;
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
  iVar4 = TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::Find
                    (&this->SystemMuteList,&local_38);
  uVar6 = (ulonglong)local_38.Variant.TypeIndex;
  if (1 < local_38.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38.Variant._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_38.Variant);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return iVar4 != -1;
}

// MuteRemoteTalker @ 14eceaf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineVoiceImpl::MuteRemoteTalker
          (FOnlineVoiceImpl *this,uchar param_1,FUniqueNetId *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TSharedRef<FUniqueNetId_const_,1> *pTVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_108 [32];
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TSharedRef<FUniqueNetId_const_,1> local_b8;
  TSharedRef<FUniqueNetId_const_,1> local_a8;
  FScriptContainerElement *local_98 [2];
  FScriptContainerElement *local_88 [2];
  FUniqueNetIdWrapper local_78;
  FUniqueNetIdWrapper local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar8 = -1;
  if ((int)(uint)param_1 < this->MaxLocalTalkers) {
    if (param_3) {
      pTVar5 = TSharedFromThis<FUniqueNetId,1>::AsShared
                         ((TSharedFromThis<FUniqueNetId,1> *)&param_2->field_0x8,&local_b8);
      local_78._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_78.Variant._padding_ = (longlong)pTVar5->Object;
      local_78.Variant._padding_ = (longlong)(pTVar5->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_78.Variant._padding_ !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_78.Variant._padding_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_78.Variant._padding_)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_78.Variant.TypeIndex = 0;
      TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FUniqueNetIdWrapper>
                (&this->SystemMuteList,&local_78);
      uVar7 = (ulonglong)local_78.Variant.TypeIndex;
      if ((1 < local_78.Variant.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_78.Variant._padding_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(&local_78.Variant);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      (**(code **)(this->_padding_ + 8))(this);
      goto LAB_14eceb267;
    }
    if (((this->SessionInt == (IOnlineSession *)0x0) ||
        (iVar4 = (**(code **)(this->SessionInt->_padding_ + 0x448))(), iVar4 < 1)) ||
       ((this->VoiceEngine).Object == (IVoiceEngine *)0x0)) goto LAB_14eceb267;
    lVar6 = (**(code **)(this->_padding_ + 0x120))(this,param_2);
    if (lVar6 == 0) {
      if ((byte)LogOnlineVoice._0_1_ < 6) goto LAB_14eceb267;
      (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_88);
      ::FString::PrintfImpl(&local_d8,L"Unknown remote talker (%s) specified to MuteRemoteTalker()")
      ;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      local_c8.Data.AllocatorInstance.Data = local_88[0];
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        local_c8.Data.AllocatorInstance.Data = local_88[0];
      }
    }
    else {
      pTVar5 = TSharedFromThis<FUniqueNetId,1>::AsShared
                         ((TSharedFromThis<FUniqueNetId,1> *)&param_2->field_0x8,&local_a8);
      local_58._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_58.Variant._padding_ = (longlong)pTVar5->Object;
      local_58.Variant._padding_ = (longlong)(pTVar5->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_58.Variant._padding_ !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_58.Variant._padding_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_58.Variant._padding_)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_58.Variant.TypeIndex = 0;
      TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FUniqueNetIdWrapper>
                (&this->MuteList,&local_58);
      uVar7 = (ulonglong)local_58.Variant.TypeIndex;
      if ((1 < local_58.Variant.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_58.Variant._padding_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(&local_58.Variant);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      iVar8 = 0;
      if ((byte)LogOnlineVoice._0_1_ < 5) goto LAB_14eceb267;
      (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_98);
      ::FString::PrintfImpl(&local_e8,L"Muting remote talker (%s)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      local_c8.Data.AllocatorInstance.Data = local_98[0];
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        local_c8.Data.AllocatorInstance.Data = local_98[0];
      }
    }
  }
  else {
    if ((byte)LogOnlineVoice._0_1_ < 3) goto LAB_14eceb267;
    ::FString::PrintfImpl(&local_c8,L"Invalid user specified in MuteRemoteTalker(%d)");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_14eceb267:
  return iVar8 == 0;
}

// PatchLocalTalkerOutputToEndpoint @ 14ecf3c90

bool __thiscall
FOnlineVoiceImpl::PatchLocalTalkerOutputToEndpoint(FOnlineVoiceImpl *this,FString *param_1)

{
  IVoiceEngine *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 != (IVoiceEngine *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecf3c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0xd8))();
    return (bool)uVar2;
  }
  return false;
}

// PatchRemoteTalkerOutputToEndpoint @ 14ecf3df0

bool __thiscall
FOnlineVoiceImpl::PatchRemoteTalkerOutputToEndpoint
          (FOnlineVoiceImpl *this,FString *param_1,bool param_2)

{
  IVoiceEngine *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->VoiceEngine).Object;
  if (pIVar1 != (IVoiceEngine *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecf3dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0xd0))();
    return (bool)uVar2;
  }
  return false;
}

// ProcessLocalVoicePackets @ 14ecf4a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::ProcessLocalVoicePackets(FOnlineVoiceImpl *this)

{
  int *piVar1;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar2;
  TArray<TSharedPtr<FVoicePacket,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  ushort *puVar4;
  IVoiceEngine *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedPtr<FVoicePacket,1> *pTVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  FVoicePacketImpl *this_00;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  int local_res10 [2];
  ulong64 local_res18;
  TRawPtrProxy<FVoicePacketImpl> local_res20;
  TSharedPtr<FVoicePacket,1> local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  
  pIVar5 = (this->VoiceEngine).Object;
  if ((pIVar5 != (IVoiceEngine *)0x0) &&
     (uVar13 = (**(code **)((longlong)*pIVar5 + 0x68))(), fVar10 = __real_46fffe00,
     fVar9 = __real_3f800000, uVar13 != 0)) {
    uVar20 = 0;
    do {
      uVar19 = (uint)uVar20;
      if ((uVar13 & 1) != 0) {
        uVar14 = UVOIPStatics::GetMaxVoiceDataSize();
        uVar17 = (uint)(this->VoiceData).LocalPackets[uVar20].Length;
        local_res10[0] = uVar14 - uVar17;
        if (local_res10[0] == 0) {
          if (2 < (byte)LogVoiceEngine._0_1_) {
            ::FString::PrintfImpl
                      (&local_a8,
                       L"Dropping voice data due to network layer not processing fast enough");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          (this->VoiceData).LocalPackets[uVar20].Length = 0;
        }
        else {
          pFVar6 = (this->VoiceData).LocalPackets[uVar20].Buffer.AllocatorInstance.Data;
          puVar16 = (undefined8 *)
                    (**(code **)(this->IdentityInt->_padding_ + 0x110))
                              (this->IdentityInt,local_98,uVar20);
          pTVar2 = &(this->VoiceData).LocalPackets[uVar20].Sender;
          if (pTVar2 != (TSharedPtr<FUniqueNetId_const_,1> *)puVar16) {
            pTVar2->Object = (FUniqueNetId *)*puVar16;
            *puVar16 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->VoiceData).LocalPackets[uVar20].Sender.SharedReferenceCount,
                       (FSharedReferencer<1> *)(puVar16 + 1));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
          local_res18 = (this->VoiceData).LocalPackets[uVar20].SampleCount;
          if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pIVar5 = (this->VoiceEngine).Object;
          iVar15 = (**(code **)((longlong)*pIVar5 + 0x78))
                             (pIVar5,uVar20,pFVar6 + uVar17,local_res10,&local_res18);
          if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar21 = (float)(**(code **)((longlong)*(this->VoiceEngine).Object + 0xc0))();
          fVar22 = fVar9;
          if (((0.0 <= fVar21) && (fVar22 = fVar21, fVar9 < fVar21)) &&
             (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<8720241026427519710>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceInterfaceImpl.cpp"
                                  ,0x2de,"Amplitude >= 0.0f && Amplitude <= 1.0f"), fVar22 = fVar9,
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (this->VoiceData).LocalPackets[uVar20].MicrophoneAmplitude = (short)(int)(fVar22 * fVar10)
          ;
          if (iVar15 == 0) {
            uVar17 = ~uVar19 >> 0x1f;
            uVar14 = 0;
            if ((int)uVar19 < (this->LocalTalkers).ArrayNum) {
              uVar14 = uVar17;
            }
            if ((uVar14 == 0) &&
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
            lVar18 = (longlong)(int)uVar19;
            if ((this->LocalTalkers).AllocatorInstance.Data[lVar18 * 0xc + 1] ==
                (FScriptContainerElement)0x0) {
              (this->VoiceData).LocalPackets[uVar20].Length = 0;
            }
            else {
              uVar14 = 0;
              if ((int)uVar19 < (this->LocalTalkers).ArrayNum) {
                uVar14 = uVar17;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              (this->LocalTalkers).AllocatorInstance.Data[lVar18 * 0xc + 9] =
                   (FScriptContainerElement)0x1;
              fVar22 = this->VoiceNotificationDelta;
              uVar14 = 0;
              if ((int)uVar19 < (this->LocalTalkers).ArrayNum) {
                uVar14 = uVar17;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(float *)((this->LocalTalkers).AllocatorInstance.Data + lVar18 * 0xc + 4) = fVar22;
              puVar4 = &(this->VoiceData).LocalPackets[uVar20].Length;
              *puVar4 = *puVar4 + (short)local_res10[0];
              (this->VoiceData).LocalPackets[uVar20].SampleCount = local_res18;
              pTVar11 = OSSConsoleVariables::CVarVoiceLoopback.Ref;
              bVar12 = IsInParallelGameThread();
              if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
                 (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<6409875433831007945>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((pTVar11->ShadowedValue[0] != 0) && (local_res10[0] != 0)) {
                pTVar3 = &(this->VoiceData).RemotePackets;
                this_00 = ::operator_new(0x40);
                if (this_00 == (FVoicePacketImpl *)0x0) {
                  local_res20.Object = (FVoicePacketImpl *)0x0;
                }
                else {
                  local_res20.Object =
                       FVoicePacketImpl::FVoicePacketImpl
                                 (this_00,(this->VoiceData).LocalPackets + uVar20);
                }
                TSharedPtr<FVoicePacket,1>::TSharedPtr<FVoicePacket,1><FVoicePacketImpl>
                          (&local_c8,&local_res20);
                pTVar7 = (TSharedPtr<FVoicePacket,1> *)(pTVar3->AllocatorInstance).Data;
                if (((pTVar7 <= &local_c8) &&
                    (&local_c8 < pTVar7 + (this->VoiceData).RemotePackets.ArrayMax)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar15 = (this->VoiceData).RemotePackets.ArrayNum;
                piVar1 = &(this->VoiceData).RemotePackets.ArrayMax;
                if (iVar15 == *piVar1) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar3->AllocatorInstance,piVar1);
                }
                (this->VoiceData).RemotePackets.ArrayNum = iVar15 + 1;
                pFVar6 = (pTVar3->AllocatorInstance).Data;
                *(FVoicePacket **)(pFVar6 + (longlong)iVar15 * 0x10) = local_c8.Object;
                *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar15 * 0x10 + 8) =
                     local_c8.SharedReferenceCount.ReferenceController;
                local_c8.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                local_c8.Object = (FVoicePacket *)0x0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
              }
            }
          }
          else if (2 < (byte)LogVoiceEngine._0_1_) {
            ::FString::PrintfImpl(&local_b8,L"Voice data error in ReadLocalVoiceData");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar13 = uVar13 >> 1;
    } while (uVar13 != 0);
  }
  return;
}

// ProcessMuteChangeNotification @ 14ecf5040

void __thiscall FOnlineVoiceImpl::ProcessMuteChangeNotification(FOnlineVoiceImpl *this)

{
  int iVar1;
  
  if (((((this->VoiceEngine).Object != (IVoiceEngine *)0x0) &&
       (this->SessionInt != (IOnlineSession *)0x0)) &&
      (iVar1 = (**(code **)(this->SessionInt->_padding_ + 0x448))(), 0 < iVar1)) &&
     (iVar1 = 0, 0 < this->MaxLocalTalkers)) {
    do {
      (**(code **)(this->_padding_ + 0x150))(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this->MaxLocalTalkers);
  }
  return;
}

// ProcessRemoteVoicePackets @ 14ecf50a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::ProcessRemoteVoicePackets(FOnlineVoiceImpl *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  IVoiceEngine *pIVar4;
  longlong lVar5;
  TSharedPtr<FVoicePacket,1> *pTVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  TArray<TSharedPtr<FVoicePacket,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStackY_148 [32];
  longlong local_118;
  uint local_110 [2];
  undefined8 local_108;
  TReferenceControllerBase<1> *local_100;
  FString local_f8;
  FString local_e8;
  void *local_d8 [2];
  void *local_c8 [2];
  undefined **local_b8;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_b0;
  undefined **local_98;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar15 = 0;
  if (0 < (this->RemoteTalkers).ArrayNum) {
    lVar18 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar15 < (this->RemoteTalkers).ArrayNum) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar15 = uVar15 + 1;
      (this->RemoteTalkers).AllocatorInstance.Data[lVar18 + 0x15] = (FScriptContainerElement)0x0;
      lVar18 = lVar18 + 0x18;
    } while ((int)uVar15 < (this->RemoteTalkers).ArrayNum);
  }
  fVar9 = __real_38000100;
  fVar8 = __real_3f800000;
  iVar13 = (this->VoiceData).RemotePackets.ArrayNum;
  uVar15 = 0;
  if (0 < iVar13) {
    local_118 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar15 < iVar13) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar2 = (this->VoiceData).RemotePackets.AllocatorInstance.Data;
      plVar3 = *(longlong **)(pFVar2 + local_118);
      local_100 = *(TReferenceControllerBase<1> **)(pFVar2 + local_118 + 8);
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        if ((this->VoiceEngine).Object != (IVoiceEngine *)0x0) {
          uVar12 = (**(code **)(*plVar3 + 0x10))(plVar3);
          local_110[0] = (uint)uVar12;
          local_108 = (**(code **)(*plVar3 + 0x30))(plVar3);
          if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar18 = plVar3[3];
          pIVar4 = (this->VoiceEngine).Object;
          local_b8 = &___7FUniqueNetIdWrapper__6B_;
          local_b0._padding_ = 0;
          local_b0._padding_ = 0;
          local_b0.TypeIndex = 0;
          pcVar7 = *(code **)((longlong)*pIVar4 + 0x88);
          TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          ::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
                    (&local_b0,(TSharedPtr<FUniqueNetId_const_,1> *)(plVar3 + 1));
          iVar13 = (*pcVar7)(pIVar4,&local_b8,lVar18,local_110);
          uVar16 = (ulonglong)local_b0.TypeIndex;
          if ((1 < local_b0.TypeIndex) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16] ==
              UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_b0._padding_);
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16])(&local_b0);
          }
          if ((iVar13 != 0) && (2 < (byte)LogVoiceEngine._0_1_)) {
            if ((plVar3[1] == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (**(code **)(*(longlong *)plVar3[1] + 0x38))((longlong *)plVar3[1],local_d8);
            ::FString::PrintfImpl(&local_f8,L"SubmitRemoteVoiceData(%s) failed with 0x%08X");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            if (local_d8[0] != (void *)0x0) {
              FMemory::Free(local_d8[0]);
            }
          }
          fVar20 = (float)(int)(short)plVar3[7] * fVar9;
          if (((fVar20 < 0.0) || (fVar8 < fVar20)) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<8720241026427519791>,true,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceInterfaceImpl.cpp"
                                  ,0x32f,"Amplitude >= 0.0f && Amplitude <= 1.0f"), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pIVar4 = (this->VoiceEngine).Object;
          local_90._padding_ = 0;
          local_90._padding_ = 0;
          local_90.TypeIndex = 0;
          pcVar7 = *(code **)((longlong)*pIVar4 + 0x98);
          local_98 = &___7FUniqueNetIdWrapper__6B_;
          TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          ::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
                    (&local_90,(TSharedPtr<FUniqueNetId_const_,1> *)(plVar3 + 1));
          iVar13 = (*pcVar7)(pIVar4,&local_98,fVar20);
          uVar16 = (ulonglong)local_90.TypeIndex;
          if ((1 < local_90.TypeIndex) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16])(&local_90);
          if ((iVar13 != 0) && (2 < (byte)LogVoiceEngine._0_1_)) {
            if ((plVar3[1] == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (**(code **)(*(longlong *)plVar3[1] + 0x38))((longlong *)plVar3[1],local_c8);
            ::FString::PrintfImpl(&local_e8,L"SubmitRemoteVoiceData(%s) failed with 0x%08X");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEngine);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (local_c8[0] != (void *)0x0) {
              FMemory::Free(local_c8[0]);
            }
          }
        }
        uVar19 = 0;
        if (0 < (this->RemoteTalkers).ArrayNum) {
          lVar18 = 0;
          do {
            uVar14 = 0;
            if ((int)uVar19 < (this->RemoteTalkers).ArrayNum) {
              uVar14 = ~uVar19 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar2 = (this->RemoteTalkers).AllocatorInstance.Data;
            if ((plVar3[1] == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar5 = plVar3[1];
            if ((*(longlong *)(pFVar2 + lVar18) == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            cVar11 = (**(code **)**(undefined8 **)(pFVar2 + lVar18))
                               (*(undefined8 **)(pFVar2 + lVar18),lVar5);
            if (cVar11 != '\0') {
              pcVar7 = *(code **)(this->_padding_ + 0x128);
              if ((*(longlong *)(pFVar2 + lVar18) == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              cVar11 = (*pcVar7)(this,*(undefined8 *)(pFVar2 + lVar18));
              pFVar2[lVar18 + 0x15] = (FScriptContainerElement)(cVar11 == '\0');
              *(float *)(pFVar2 + lVar18 + 0x10) = this->VoiceNotificationDelta;
            }
            uVar19 = uVar19 + 1;
            lVar18 = lVar18 + 0x18;
          } while ((int)uVar19 < (this->RemoteTalkers).ArrayNum);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      iVar13 = (this->VoiceData).RemotePackets.ArrayNum;
      local_118 = local_118 + 0x10;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < iVar13);
  }
  pTVar17 = &(this->VoiceData).RemotePackets;
  pTVar6 = (TSharedPtr<FVoicePacket,1> *)(pTVar17->AllocatorInstance).Data;
  piVar1 = &(this->VoiceData).RemotePackets.ArrayMax;
  iVar13 = (this->VoiceData).RemotePackets.ArrayNum;
  if ((this->VoiceData).RemotePackets.ArrayMax < 0) {
    DestructItems<TSharedPtr<FVoicePacket,1>,int>(pTVar6,iVar13);
    iVar13 = *piVar1;
    (this->VoiceData).RemotePackets.ArrayNum = 0;
    if (iVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar17->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FVoicePacket,1>,int>(pTVar6,iVar13);
    (this->VoiceData).RemotePackets.ArrayNum = 0;
  }
  return;
}

// ProcessTalkingDelegates @ 14ecf57c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::ProcessTalkingDelegates(FOnlineVoiceImpl *this,float param_1)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  undefined1 local_res20 [8];
  undefined1 local_128;
  FScriptContainerElement local_127;
  uint local_124;
  longlong local_120;
  FUniqueNetId *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  FScriptContainerElement *local_100;
  FString local_f8;
  FString local_e8;
  TSharedRef<FUniqueNetId_const_,1> local_d8;
  longlong local_c8;
  TReferenceControllerBase<1> *local_c0;
  FDestructionSentinel local_b8;
  void *local_a0 [2];
  FReadAccessScope local_90;
  FReadAccessScope local_78 [2];
  
  uVar15 = 0;
  if (0 < (this->LocalTalkers).ArrayNum) {
    lVar14 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (this->LocalTalkers).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar16 = (this->LocalTalkers).AllocatorInstance.Data;
      if (pFVar16[lVar14] != (FScriptContainerElement)0x0) {
        if (pFVar16[lVar14 + 8] == (FScriptContainerElement)0x0) {
          if (pFVar16[lVar14 + 9] != (FScriptContainerElement)0x0) {
LAB_14ecf5895:
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                       &local_90);
            iVar4 = (int)this->_padding_;
            plVar12 = (longlong *)this->_padding_;
            plVar17 = plVar12 + (longlong)iVar4 * 2;
            while( true ) {
              if ((int)this->_padding_ != iVar4) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_res20);
              }
              if (plVar12 == plVar17) {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_90);
                goto LAB_14ecf59a6;
              }
              if (((int)plVar12[1] != 0) && (*plVar12 != 0)) break;
              plVar12 = plVar12 + 2;
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_90);
            (**(code **)(this->IdentityInt->_padding_ + 0x110))(this->IdentityInt,&local_118,uVar15)
            ;
            FVar3 = pFVar16[lVar14 + 9];
            if ((local_118 == (FUniqueNetId *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x408,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_d8.Object = local_118;
            local_d8.SharedReferenceCount.ReferenceController = local_110;
            if (local_110 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_110->SharedReferenceCount =
                   (atomic<int>)((int)local_110->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((local_118 == (FUniqueNetId *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x25d,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
            ::Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
                         *)&this->_padding_,&local_d8,(bool)FVar3);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_110);
LAB_14ecf59a6:
            pFVar16[lVar14 + 8] = pFVar16[lVar14 + 9];
            if (4 < (byte)LogOnlineVoice._0_1_) {
              ::FString::PrintfImpl(&local_f8,L"Trigger Local %d %sTALKING");
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        else {
          fVar2 = *(float *)(pFVar16 + lVar14 + 4);
          *(float *)(pFVar16 + lVar14 + 4) = fVar2 - param_1;
          if (fVar2 - param_1 <= 0.0) {
            pFVar16[lVar14 + 9] = (FScriptContainerElement)0x0;
            *(float *)(pFVar16 + lVar14 + 4) = this->VoiceNotificationDelta;
            goto LAB_14ecf5895;
          }
        }
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0xc;
    } while ((int)uVar15 < (this->LocalTalkers).ArrayNum);
  }
  local_124 = 0;
  if (0 < (this->RemoteTalkers).ArrayNum) {
    local_120 = 0;
    do {
      lVar14 = local_120;
      uVar15 = local_124;
      uVar11 = 0;
      if ((int)local_124 < (this->RemoteTalkers).ArrayNum) {
        uVar11 = ~local_124 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar16 = (this->RemoteTalkers).AllocatorInstance.Data;
      local_100 = pFVar16;
      if (pFVar16[lVar14 + 0x14] == (FScriptContainerElement)0x0) {
        if (pFVar16[lVar14 + 0x15] != (FScriptContainerElement)0x0) {
LAB_14ecf5ae0:
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                     local_78);
          iVar4 = (int)this->_padding_;
          plVar12 = (longlong *)this->_padding_;
          plVar17 = plVar12 + (longlong)iVar4 * 2;
          while( true ) {
            if ((int)this->_padding_ != iVar4) {
              local_128 = 0;
              `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_128);
            }
            if (plVar12 == plVar17) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(local_78);
              goto LAB_14ecf5ce8;
            }
            if (((int)plVar12[1] != 0) && (*plVar12 != 0)) break;
            plVar12 = plVar12 + 2;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_78);
          local_127 = pFVar16[lVar14 + 0x15];
          if ((*(longlong *)(pFVar16 + lVar14) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar5 = *(TReferenceControllerBase<1> **)(pFVar16 + lVar14 + 8);
          local_108 = *(longlong *)(pFVar16 + lVar14);
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_108 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                     (FWriteAccessScope *)&local_b8);
          lVar7 = local_108;
          FVar3 = local_127;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          *piVar1 = *piVar1 + 1;
          uVar15 = (int)this->_padding_ - 1;
          bVar8 = false;
          if (-1 < (int)uVar15) {
            lVar13 = (longlong)(int)uVar15 << 4;
            do {
              uVar11 = 0;
              if ((int)uVar15 < (int)this->_padding_) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((*(int *)(lVar13 + 8 + this->_padding_) == 0) ||
                 (plVar12 = *(longlong **)(lVar13 + this->_padding_), plVar12 == (longlong *)0x0)) {
LAB_14ecf5c7d:
                bVar8 = true;
              }
              else {
                lVar14 = *plVar12;
                local_c8 = lVar7;
                if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar5->SharedReferenceCount =
                       (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_c0 = pTVar5;
                cVar10 = (**(code **)(lVar14 + 0x68))(plVar12,&local_c8,FVar3);
                if (cVar10 == '\0') goto LAB_14ecf5c7d;
              }
              lVar13 = lVar13 + -0x10;
              uVar15 = uVar15 - 1;
              lVar14 = local_120;
              pFVar16 = local_100;
            } while (-1 < (int)uVar15);
          }
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar8) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false)
            ;
          }
          if (local_b8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          uVar15 = local_124;
LAB_14ecf5ce8:
          if (4 < (byte)LogOnlineVoice._0_1_) {
            if ((*(longlong *)(pFVar16 + lVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (**(code **)(**(longlong **)(pFVar16 + lVar14) + 0x30))
                      (*(longlong **)(pFVar16 + lVar14),local_a0);
            ::FString::PrintfImpl(&local_e8,L"Trigger Remote %s %sTALKING");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (local_a0[0] != (void *)0x0) {
              FMemory::Free(local_a0[0]);
            }
          }
          pFVar16[lVar14 + 0x14] = pFVar16[lVar14 + 0x15];
          *(float *)(pFVar16 + lVar14 + 0x10) = this->VoiceNotificationDelta;
        }
      }
      else if ((pFVar16[lVar14 + 0x15] == (FScriptContainerElement)0x0) &&
              (fVar2 = *(float *)(pFVar16 + lVar14 + 0x10),
              *(float *)(pFVar16 + lVar14 + 0x10) = fVar2 - param_1, fVar2 - param_1 <= 0.0))
      goto LAB_14ecf5ae0;
      local_124 = uVar15 + 1;
      local_120 = lVar14 + 0x18;
    } while ((int)local_124 < (this->RemoteTalkers).ArrayNum);
  }
  return;
}

// RegisterLocalTalker @ 14ecf7710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineVoiceImpl::RegisterLocalTalker(FOnlineVoiceImpl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IVoiceEngine *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  iVar7 = -1;
  if (param_1 < (uint)this->MaxLocalTalkers) {
    uVar6 = 0;
    if ((int)param_1 < (this->LocalTalkers).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar1 = (this->LocalTalkers).AllocatorInstance.Data + (longlong)(int)param_1 * 0xc;
    (**(code **)(this->_padding_ + 0x28))(this,(longlong)(int)param_1 & 0xff);
    pIVar2 = (this->VoiceEngine).Object;
    if (pIVar2 == (IVoiceEngine *)0x0) {
      *pFVar1 = (FScriptContainerElement)0x0;
    }
    else if (*pFVar1 == (FScriptContainerElement)0x0) {
      iVar7 = (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,param_1);
      if (4 < (byte)LogOnlineVoice._0_1_) {
        ::FString::PrintfImpl(&local_28,L"RegisterLocalTalker(%d) returned 0x%08X");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      if (iVar7 != 0) {
        return iVar7 == 0;
      }
      *pFVar1 = (FScriptContainerElement)0x1;
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
    }
  }
  else if (4 < (byte)LogOnlineVoice._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Invalid user specified in RegisterLocalTalker(%d)");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return iVar7 == 0;
}

// RegisterLocalTalkers @ 14ecf7a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::RegisterLocalTalkers(FOnlineVoiceImpl *this)

{
  uint uVar1;
  FString local_18;
  
  if (4 < (byte)LogOnlineVoice._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Registering all local talkers");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar1 = 0;
  if (this->MaxLocalTalkers != 0) {
    do {
      (**(code **)(this->_padding_ + 0x38))(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)this->MaxLocalTalkers);
  }
  return;
}

// RegisterRemoteTalker @ 14ecf7ac0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineVoiceImpl::RegisterRemoteTalker(FOnlineVoiceImpl *this,FUniqueNetId *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  TSharedRef<FUniqueNetId_const_,1> *pTVar11;
  IVoiceEngine *pIVar12;
  FScriptContainerElement *pFVar13;
  FUniqueNetId *local_98;
  FSharedReferencer<1> local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  TSharedRef<FUniqueNetId_const_,1> local_58;
  void *local_48 [2];
  void *local_38 [2];
  void *local_28 [2];
  
  iVar9 = -1;
  if ((((this->OnlineSubsystem == (IOnlineSubsystem *)0x0) ||
       (this->SessionInt == (IOnlineSession *)0x0)) ||
      (iVar6 = (**(code **)(this->SessionInt->_padding_ + 0x448))(), iVar6 < 1)) ||
     (iVar9 = -1, (this->VoiceEngine).Object == (IVoiceEngine *)0x0)) goto LAB_14ecf7e16;
  lVar10 = (**(code **)(this->_padding_ + 0x120))(this,param_1);
  if (lVar10 == 0) {
    uVar7 = (this->RemoteTalkers).ArrayNum;
    piVar1 = &(this->RemoteTalkers).ArrayMax;
    if (uVar7 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->RemoteTalkers).AllocatorInstance,piVar1);
    }
    (this->RemoteTalkers).ArrayNum = uVar7 + 1;
    lVar10 = (longlong)(int)uVar7 * 0x18;
    pFVar2 = (this->RemoteTalkers).AllocatorInstance.Data;
    pFVar13 = pFVar2 + lVar10;
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)(pFVar13 + 8) = 0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x10) = 0;
    uVar8 = 0;
    if ((int)uVar7 < (this->RemoteTalkers).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar13 = (this->RemoteTalkers).AllocatorInstance.Data + lVar10;
    pTVar11 = TSharedFromThis<FUniqueNetId,1>::AsShared
                        ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_58);
    local_90.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_98 = pTVar11->Object;
    if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar13 != (FScriptContainerElement *)&local_98) {
      *(FUniqueNetId **)pFVar13 = local_98;
      local_98 = (FUniqueNetId *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar13 + 8),&local_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    pIVar12 = TSharedPtr<IVoiceEngine,1>::operator->(&this->VoiceEngine);
    (**(code **)((longlong)*pIVar12 + 0x40))(pIVar12,param_1);
    if (4 < (byte)LogOnlineVoice._0_1_) {
      (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_48);
      ::FString::PrintfImpl(&local_88,L"RegisterRemoteTalker(%s) returned 0x%08X");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      local_38[0] = local_48[0];
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        local_38[0] = local_48[0];
      }
LAB_14ecf7d3d:
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
  }
  else if (5 < (byte)LogOnlineVoice._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_38);
    ::FString::PrintfImpl(&local_78,L"Remote talker %s is being re-registered");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    goto LAB_14ecf7d3d;
  }
  (**(code **)(this->_padding_ + 8))(this);
  if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pIVar12 = (this->VoiceEngine).Object;
  iVar9 = (**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,param_1);
  if (4 < (byte)LogOnlineVoice._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_28);
    ::FString::PrintfImpl(&local_68,L"StartRemoteVoiceProcessing(%s) returned 0x%08X");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
LAB_14ecf7e16:
  return iVar9 == 0;
}

// RemoveAllRemoteTalkers @ 14ecf8750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::RemoveAllRemoteTalkers(FOnlineVoiceImpl *this)

{
  int *piVar1;
  int iVar2;
  IVoiceEngine *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedRef<FUniqueNetId_const_,1> *pTVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  TSharedPtr<FUniqueNetId_const_,1> *this_00;
  undefined1 local_res8 [8];
  longlong local_res10;
  FString local_98;
  FString local_88;
  void *local_78 [2];
  TSharedRef<FUniqueNetId_const_,1> local_68;
  FReadAccessScope local_58;
  
  if (4 < (byte)LogOnlineVoice._0_1_) {
    ::FString::PrintfImpl(&local_98,L"Removing all remote talkers");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (((this->VoiceEngine).Object != (IVoiceEngine *)0x0) &&
     (uVar10 = (this->RemoteTalkers).ArrayNum - 1, -1 < (int)uVar10)) {
    lVar8 = (longlong)(int)uVar10 * 0x18;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->RemoteTalkers).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      local_res10 = lVar8;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (TSharedPtr<FUniqueNetId_const_,1> *)
                ((this->RemoteTalkers).AllocatorInstance.Data + lVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &local_58);
      iVar2 = (int)this->_padding_;
      plVar9 = (longlong *)this->_padding_;
      plVar11 = plVar9 + (longlong)iVar2 * 2;
      while( true ) {
        if ((int)this->_padding_ != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (plVar9 == plVar11) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
          goto LAB_14ecf88f2;
        }
        if (((int)plVar9[1] != 0) && (*plVar9 != 0)) break;
        plVar9 = plVar9 + 2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if ((*(char *)((longlong)&this_00[1].Object + 5) != '\0') ||
         (*(char *)((longlong)&this_00[1].Object + 4) != '\0')) {
        pTVar7 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(this_00,&local_68);
        TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
                     *)&this->_padding_,pTVar7,false);
      }
LAB_14ecf88f2:
      if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar3 = (this->VoiceEngine).Object;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x48);
      if ((this_00->Object == (FUniqueNetId *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*pcVar4)(pIVar3,this_00->Object);
      if (4 < (byte)LogOnlineVoice._0_1_) {
        if ((this_00->Object == (FUniqueNetId *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)this_00->Object + 0x38))(this_00->Object,local_78);
        ::FString::PrintfImpl(&local_88,L"UnregisterRemoteTalker(%s) returned 0x%08X");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78[0] != (void *)0x0) {
          FMemory::Free(local_78[0]);
        }
      }
      lVar8 = local_res10 + -0x18;
      uVar10 = uVar10 - 1;
      local_res10 = lVar8;
    } while (-1 < (int)uVar10);
  }
  uVar10 = this->MaxRemoteTalkers;
  if (-1 < (int)uVar10) {
    DestructItems<FRemoteTalker,int>
              ((FRemoteTalker *)(this->RemoteTalkers).AllocatorInstance.Data,
               (this->RemoteTalkers).ArrayNum);
    piVar1 = &(this->RemoteTalkers).ArrayMax;
    (this->RemoteTalkers).ArrayNum = 0;
    if (*piVar1 != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar10,&(this->RemoteTalkers).AllocatorInstance,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
}

// SerializeRemotePacket @ 14ecf9940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FVoicePacket,1> * __thiscall
FOnlineVoiceImpl::SerializeRemotePacket
          (FOnlineVoiceImpl *this,TSharedPtr<FVoicePacket,1> *__return_storage_ptr__,
          FArchive *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FVoicePacket,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  FVoicePacketImpl *pFVar8;
  TSharedPtr<FVoicePacket,1> *pTVar9;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  FVoicePacketImpl **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TSharedPtr<FVoicePacketImpl,1> local_98;
  FVoicePacketImpl *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TRawPtrProxy<FVoicePacketImpl> local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  FUniqueNetIdWrapper local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar8 = ::operator_new(0x40);
  local_78.Object = (FVoicePacketImpl *)0x0;
  if (pFVar8 != (FVoicePacketImpl *)0x0) {
    local_78.Object = FVoicePacketImpl::FVoicePacketImpl(pFVar8);
  }
  TSharedPtr<FVoicePacketImpl,1>::TSharedPtr<FVoicePacketImpl,1><FVoicePacketImpl>
            (&local_98,&local_78);
  pFVar8 = local_98.Object;
  if ((local_98.Object == (FVoicePacketImpl *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FVoicePacket,1> *)(*pcVar3)();
    return pTVar9;
  }
  (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8,param_1);
  if ((param_1->field_0x29 & 2) == 0) {
    if ((pFVar8 == (FVoicePacketImpl *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FVoicePacket,1> *)(*pcVar3)();
      return pTVar9;
    }
    sVar6 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
    if (sVar6 != 0) {
      cVar5 = (**(code **)(this->OnlineSubsystem->_padding_ + 0x120))();
      if (cVar5 == '\0') {
        if ((pFVar8 == (FVoicePacketImpl *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FVoicePacket,1> *)(*pcVar3)();
          return pTVar9;
        }
        pTVar10 = (TSharedPtr<FUniqueNetId_const_,1> *)
                  (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8,local_70);
        local_60.Variant.TypeIndex = 0;
        local_60._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
        local_60.Variant._padding_ = 0;
        local_60.Variant._padding_ = 0;
        TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
        ::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
                  (&local_60.Variant,pTVar10);
        iVar7 = TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::Find
                          (&this->MuteList,&local_60);
        uVar13 = (ulonglong)local_60.Variant.TypeIndex;
        if ((1 < local_60.Variant.TypeIndex) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FVoicePacket,1> *)(*pcVar3)();
          return pTVar9;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_60.Variant._padding_);
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(&local_60.Variant);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68);
        if (iVar7 == -1) {
          pTVar2 = &(this->VoiceData).RemotePackets;
          local_88 = local_98.Object;
          pTStack_80 = local_98.SharedReferenceCount.ReferenceController;
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pFVar12 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar12 <= (FScriptContainerElement *)&local_88) &&
             (lVar11 = (longlong)(this->VoiceData).RemotePackets.ArrayMax,
             (FScriptContainerElement *)&local_88 < pFVar12 + lVar11 * 0x10)) {
            local_b0 = (longlong)(this->VoiceData).RemotePackets.ArrayNum;
            local_a8 = 0x10;
            local_c8 = &local_88;
            local_c0 = pFVar12;
            local_b8 = lVar11;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TSharedPtr<FVoicePacket,1> *)(*pcVar3)();
              return pTVar9;
            }
          }
          iVar7 = (this->VoiceData).RemotePackets.ArrayNum;
          piVar1 = &(this->VoiceData).RemotePackets.ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->VoiceData).RemotePackets.ArrayNum = iVar7 + 1;
          pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(FVoicePacketImpl **)pFVar12 = local_88;
          *(TReferenceControllerBase<1> **)(pFVar12 + 8) = pTStack_80;
          pTStack_80 = (TReferenceControllerBase<1> *)0x0;
          local_88 = (FVoicePacketImpl *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
      }
      __return_storage_ptr__->Object = (FVoicePacket *)pFVar8;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_98.SharedReferenceCount.ReferenceController;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_14ecf9c32;
    }
  }
  __return_storage_ptr__->Object = (FVoicePacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14ecf9c32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Shutdown @ 14ecfa090

void __thiscall FOnlineVoiceImpl::Shutdown(FOnlineVoiceImpl *this)

{
  int *piVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  DestructItems<TSharedPtr<FVoicePacket,1>,int>
            ((TSharedPtr<FVoicePacket,1> *)(this->VoiceData).RemotePackets.AllocatorInstance.Data,
             (this->VoiceData).RemotePackets.ArrayNum);
  piVar1 = &(this->VoiceData).RemotePackets.ArrayMax;
  (this->VoiceData).RemotePackets.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->VoiceData).RemotePackets.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->LocalTalkers).ArrayMax;
  (this->LocalTalkers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->LocalTalkers).AllocatorInstance,0,piVar1);
  }
  DestructItems<FRemoteTalker,int>
            ((FRemoteTalker *)(this->RemoteTalkers).AllocatorInstance.Data,
             (this->RemoteTalkers).ArrayNum);
  piVar1 = &(this->RemoteTalkers).ArrayMax;
  (this->RemoteTalkers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->RemoteTalkers).AllocatorInstance,0,piVar1);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VoiceEngine != (TSharedPtr<IVoiceEngine,1> *)&local_18) {
    (this->VoiceEngine).Object = (IVoiceEngine *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceEngine).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->SessionInt = (IOnlineSession *)0x0;
  this->IdentityInt = (IOnlineIdentity *)0x0;
  return;
}

// StartNetworkedVoice @ 14ecfa400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::StartNetworkedVoice(FOnlineVoiceImpl *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  IVoiceEngine *pIVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((int)(uint)param_1 < this->MaxLocalTalkers) {
    if (((this->LocalTalkers).ArrayNum <= (int)(uint)param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->LocalTalkers).AllocatorInstance.Data[(ulonglong)param_1 * 0xc + 1] =
         (FScriptContainerElement)0x1;
    if ((this->VoiceEngine).Object != (IVoiceEngine *)0x0) {
      pIVar3 = TSharedPtr<IVoiceEngine,1>::operator->(&this->VoiceEngine);
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,(uint)param_1);
      if ((byte)LogOnlineVoice._0_1_ < 5) {
        return;
      }
      ::FString::PrintfImpl(&local_38,L"StartLocalProcessing(%d) returned 0x%08X");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((byte)LogOnlineVoice._0_1_ < 5) {
      return;
    }
    ::FString::PrintfImpl(&local_28,L"Starting networked voice for user: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
  }
  else {
    if ((byte)LogOnlineVoice._0_1_ < 5) {
      return;
    }
    ::FString::PrintfImpl(&local_18,L"Invalid user specified in StartNetworkedVoice(%d)");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// StopNetworkedVoice @ 14ecfb890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::StopNetworkedVoice(FOnlineVoiceImpl *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  IVoiceEngine *pIVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((int)(uint)param_1 < this->MaxLocalTalkers) {
    if ((this->VoiceEngine).Object != (IVoiceEngine *)0x0) {
      pIVar3 = TSharedPtr<IVoiceEngine,1>::operator->(&this->VoiceEngine);
      (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,(uint)param_1);
      if (4 < (byte)LogOnlineVoice._0_1_) {
        ::FString::PrintfImpl(&local_38,L"StopLocalVoiceProcessing(%d) returned 0x%08X");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    if (((this->LocalTalkers).ArrayNum <= (int)(uint)param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->LocalTalkers).AllocatorInstance.Data[(ulonglong)param_1 * 0xc + 1] =
         (FScriptContainerElement)0x0;
    if ((byte)LogOnlineVoice._0_1_ < 5) {
      return;
    }
    ::FString::PrintfImpl(&local_28,L"Stopping networked voice for user: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
  }
  else {
    if ((byte)LogOnlineVoice._0_1_ < 5) {
      return;
    }
    ::FString::PrintfImpl(&local_18,L"Invalid user specified in StopNetworkedVoice(%d)");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Tick @ 14ed043b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::Tick(FOnlineVoiceImpl *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOnlineVoiceImpl::Tick(float)_::_11_::FStat_STAT_FOnlineVoiceImpl_Tick>
  FVar8;
  IVoiceEngine *pIVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48 [2];
  
  cVar5 = (**(code **)(this->OnlineSubsystem->_padding_ + 0x120))();
  if (cVar5 != '\0') {
    return;
  }
  if (this->SessionInt == (IOnlineSession *)0x0) {
    return;
  }
  iVar6 = (**(code **)(this->SessionInt->_padding_ + 0x448))();
  if (iVar6 < 1) {
    return;
  }
  if ((this->VoiceEngine).Object == (IVoiceEngine *)0x0) {
    return;
  }
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FOnlineVoiceImpl_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOnlineVoiceImpl::Tick(float)_::_11_::FStat_STAT_FOnlineVoiceImpl_Tick>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_FOnlineVoiceImpl_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FOnlineVoiceImpl_Tick,*pFVar7,
                 L"STAT_FOnlineVoiceImpl_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_FOnlineVoiceImpl_Tick;
  if (StatPtr_STAT_FOnlineVoiceImpl_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOnlineVoiceImpl::Tick(float)_::_11_::FStat_STAT_FOnlineVoiceImpl_Tick>
       )0x0) {
    pFVar7 = ::FName::FName(local_res18,"STAT_FOnlineVoiceImpl_Tick");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FOnlineVoiceImpl::Tick(float)_::_11_::FStat_STAT_FOnlineVoiceImpl_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FOnlineVoiceImpl_Tick,*pFVar7,
                         L"STAT_FOnlineVoiceImpl_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoiceInterfaceImpl.cpp"
                   ,0x7a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_14ed0459a;
    }
  }
  bVar3 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_14ed0459a:
  pIVar9 = TSharedPtr<IVoiceEngine,1>::operator->(&this->VoiceEngine);
  (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,param_1);
  (**(code **)(this->_padding_ + 0x140))(this);
  (**(code **)(this->_padding_ + 0x148))(this);
  (**(code **)(this->_padding_ + 0x138))(this,param_1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_48[0].NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UnmuteRemoteTalker @ 14ed081f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineVoiceImpl::UnmuteRemoteTalker
          (FOnlineVoiceImpl *this,uchar param_1,FUniqueNetId *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TSharedRef<FUniqueNetId_const_,1> local_a8;
  TSharedRef<FUniqueNetId_const_,1> local_98;
  FScriptContainerElement *local_88 [2];
  FScriptContainerElement *local_78 [2];
  FUniqueNetIdWrapper local_68;
  FUniqueNetIdWrapper local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((int)(uint)param_1 < this->MaxLocalTalkers) {
    if (param_3) {
      pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                         ((TSharedFromThis<FUniqueNetId,1> *)&param_2->field_0x8,&local_a8);
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
             ((int)((TReferenceControllerBase<1> *)local_68.Variant._padding_)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_68.Variant.TypeIndex = 0;
      TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                (&this->SystemMuteList,&local_68,Default);
      uVar8 = (ulonglong)local_68.Variant.TypeIndex;
      if ((1 < local_68.Variant.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68.Variant._padding_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(&local_68.Variant);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      (**(code **)(this->_padding_ + 8))(this);
      return false;
    }
    if (this->SessionInt == (IOnlineSession *)0x0) {
      return false;
    }
    iVar5 = (**(code **)(this->SessionInt->_padding_ + 0x448))();
    if (iVar5 < 1) {
      return false;
    }
    if ((this->VoiceEngine).Object == (IVoiceEngine *)0x0) {
      return false;
    }
    lVar7 = (**(code **)(this->_padding_ + 0x120))(this,param_2);
    if (lVar7 == 0) {
      if ((byte)LogOnlineVoice._0_1_ < 6) {
        return false;
      }
      (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_78);
      ::FString::PrintfImpl
                (&local_c8,L"Unknown remote talker (%s) specified to UnmuteRemoteTalker()");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      local_b8.Data.AllocatorInstance.Data = local_78[0];
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        local_b8.Data.AllocatorInstance.Data = local_78[0];
      }
    }
    else {
      cVar4 = (**(code **)(this->_padding_ + 0x130))(this,param_2);
      if (cVar4 != '\0') {
        return false;
      }
      pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                         ((TSharedFromThis<FUniqueNetId,1> *)&param_2->field_0x8,&local_98);
      local_48._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_48.Variant._padding_ = (longlong)pTVar6->Object;
      local_48.Variant._padding_ = (longlong)(pTVar6->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_48.Variant._padding_ !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_48.Variant._padding_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_48.Variant._padding_)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_48.Variant.TypeIndex = 0;
      TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                (&this->MuteList,&local_48,Default);
      uVar8 = (ulonglong)local_48.Variant.TypeIndex;
      if ((1 < local_48.Variant.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_48.Variant._padding_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(&local_48.Variant);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      if ((byte)LogOnlineVoice._0_1_ < 5) {
        return false;
      }
      (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_88);
      ::FString::PrintfImpl(&local_d8,L"Unmuting remote talker (%s)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      local_b8.Data.AllocatorInstance.Data = local_88[0];
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        local_b8.Data.AllocatorInstance.Data = local_88[0];
      }
    }
  }
  else {
    if ((byte)LogOnlineVoice._0_1_ < 3) {
      return false;
    }
    ::FString::PrintfImpl(&local_b8,L"Invalid user specified in UnmuteRemoteTalker(%d)");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return false;
}

// UnregisterLocalTalker @ 14ed08560

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineVoiceImpl::UnregisterLocalTalker(FOnlineVoiceImpl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  TSharedRef<FUniqueNetId_const_,1> *pTVar8;
  IVoiceEngine *pIVar9;
  FString local_78;
  TSharedPtr<FUniqueNetId_const_,1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  TSharedRef<FUniqueNetId_const_,1> local_28;
  
  iVar7 = 0;
  if (param_1 < (uint)this->MaxLocalTalkers) {
    uVar6 = 0;
    if ((int)param_1 < (this->LocalTalkers).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->LocalTalkers).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(int)param_1 * 0xc;
    iVar7 = 0;
    if ((pFVar2[(longlong)(int)param_1 * 0xc] == (FScriptContainerElement)0x1) &&
       ((this->VoiceEngine).Object != (IVoiceEngine *)0x0)) {
      bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_);
      if ((bVar4) &&
         ((pFVar1[9] != (FScriptContainerElement)0x0 || (pFVar1[8] != (FScriptContainerElement)0x0))
         )) {
        (**(code **)(this->IdentityInt->_padding_ + 0x110))(this->IdentityInt,&local_68);
        if (local_68.Object == (FUniqueNetId *)0x0) {
          if (2 < (byte)LogOnlineVoice._0_1_) {
            ::FString::PrintfImpl
                      (&local_78,L"Invalid UserId for local player %d in UnregisterLocalTalker");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pTVar8 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(&local_68,&local_28);
          TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
          ::Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
                       *)&this->_padding_,pTVar8,false);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pIVar9 = (this->VoiceEngine).Object;
      (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,param_1);
      if (4 < (byte)LogOnlineVoice._0_1_) {
        ::FString::PrintfImpl(&local_58,L"StopLocalVoiceProcessing(%d) returned 0x%08X");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      pIVar9 = TSharedPtr<IVoiceEngine,1>::operator->(&this->VoiceEngine);
      iVar7 = (**(code **)((longlong)*pIVar9 + 0x38))(pIVar9,param_1);
      if (4 < (byte)LogOnlineVoice._0_1_) {
        ::FString::PrintfImpl(&local_48,L"UnregisterLocalTalker(%d) returned 0x%08X");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      *(undefined2 *)(pFVar1 + 8) = 0;
      *pFVar1 = (FScriptContainerElement)0x0;
    }
  }
  else if (4 < (byte)LogOnlineVoice._0_1_) {
    ::FString::PrintfImpl(&local_38,L"Invalid user specified in UnregisterLocalTalker(%d)");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return iVar7 == 0;
}

// UnregisterLocalTalkers @ 14ed08890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineVoiceImpl::UnregisterLocalTalkers(FOnlineVoiceImpl *this)

{
  uint uVar1;
  FString local_18;
  
  if (4 < (byte)LogOnlineVoice._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Unregistering all local talkers");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar1 = 0;
  if (this->MaxLocalTalkers != 0) {
    do {
      (**(code **)(this->_padding_ + 0x48))(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)this->MaxLocalTalkers);
  }
  return;
}

// UnregisterRemoteTalker @ 14ed08930

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineVoiceImpl::UnregisterRemoteTalker(FOnlineVoiceImpl *this,FUniqueNetId *param_1)

{
  IVoiceEngine *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TSharedRef<FUniqueNetId_const_,1> *pTVar10;
  int iVar11;
  uint uVar12;
  TSharedPtr<FUniqueNetId_const_,1> *this_00;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  TSharedRef<FUniqueNetId_const_,1> local_38;
  
  iVar8 = -1;
  iVar11 = -1;
  if ((((this->OnlineSubsystem != (IOnlineSubsystem *)0x0) &&
       (this->SessionInt != (IOnlineSession *)0x0)) &&
      (iVar6 = (**(code **)(this->SessionInt->_padding_ + 0x448))(), 0 < iVar6)) &&
     ((this->VoiceEngine).Object != (IVoiceEngine *)0x0)) {
    lVar9 = (**(code **)(this->_padding_ + 0x120))(this,param_1);
    if (lVar9 == 0) {
      iVar11 = -1;
      if ((byte)LogOnlineVoice._0_1_ < 6) goto LAB_14ed08c88;
      (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_48);
      ::FString::PrintfImpl
                (&local_68,L"Unknown remote talker (%s) specified to UnregisterRemoteTalker()");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar12 = 0;
      if (0 < (this->RemoteTalkers).ArrayNum) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar12 < (this->RemoteTalkers).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          this_00 = (TSharedPtr<FUniqueNetId_const_,1> *)
                    ((this->RemoteTalkers).AllocatorInstance.Data + lVar9);
          if ((this_00->Object == (FUniqueNetId *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          cVar5 = (*(code *)**(undefined8 **)this_00->Object)(this_00->Object,param_1);
          if (cVar5 != '\0') {
            bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &this->_padding_);
            if ((bVar3) &&
               ((*(char *)((longlong)&this_00[1].Object + 5) != '\0' ||
                (*(char *)((longlong)&this_00[1].Object + 4) != '\0')))) {
              pTVar10 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(this_00,&local_38);
              TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
              ::Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
                           *)&this->_padding_,pTVar10,false);
            }
            uVar7 = 0;
            if ((int)uVar12 < (this->RemoteTalkers).ArrayNum) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            TArray<FRemoteTalker,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (&this->RemoteTalkers,uVar12);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,&(this->RemoteTalkers).AllocatorInstance,
                       (this->RemoteTalkers).ArrayNum,&(this->RemoteTalkers).ArrayMax);
            break;
          }
          uVar12 = uVar12 + 1;
          lVar9 = lVar9 + 0x18;
        } while ((int)uVar12 < (this->RemoteTalkers).ArrayNum);
      }
      if (((this->VoiceEngine).Object == (IVoiceEngine *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pIVar1 = (this->VoiceEngine).Object;
      iVar8 = (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,param_1);
      iVar11 = iVar8;
      if ((byte)LogOnlineVoice._0_1_ < 5) goto LAB_14ed08c88;
      (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_58);
      ::FString::PrintfImpl(&local_78,L"UnregisterRemoteTalker(%s) returned 0x%08X");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      local_48[0] = local_58[0];
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        local_48[0] = local_58[0];
      }
    }
    iVar11 = iVar8;
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
LAB_14ed08c88:
  return iVar11 == 0;
}

// UpdateMuteListForLocalTalker @ 14ed08fb0

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

void __thiscall FOnlineVoiceImpl::UpdateMuteListForLocalTalker(FOnlineVoiceImpl *this,int param_1)

{
  longlong *plVar1;
  FUniqueNetIdWrapper *pFVar2;
  atomic<int> aVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  atomic<int> aVar9;
  ULocalPlayer *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar12;
  undefined1 *puVar13;
  undefined ***pppuVar14;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  FUniqueNetIdWrapper *this_00;
  code *pcVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  uint local_108;
  longlong local_100;
  FOnlineVoiceImpl *local_f8;
  undefined **local_f0;
  longlong local_e8;
  TReferenceControllerBase<1> *local_e0;
  byte local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  longlong local_b8;
  TReferenceControllerBase<1> *local_b0;
  byte local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FUniqueNetIdWrapper local_90;
  undefined **local_70;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_68;
  void *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_f8 = this;
  pUVar10 = UEngine::FindFirstLocalPlayerFromControllerId(GEngine,param_1);
  if (((pUVar10 != (ULocalPlayer *)0x0) &&
      (plVar1 = (longlong *)pUVar10->_padding_, plVar1 != (longlong *)0x0)) &&
     (local_108 = 0, 0 < (this->RemoteTalkers).ArrayNum)) {
    local_100 = 0;
    do {
      lVar4 = local_100;
      uVar18 = local_108;
      pTVar22 = (TReferenceControllerBase<1> *)0x0;
      iVar19 = (this->RemoteTalkers).ArrayNum;
      uVar8 = 0;
      if ((int)local_108 < iVar19) {
        uVar8 = ~local_108 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_118 = (longlong)(int)local_108;
        local_110 = (longlong)iVar19;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
      }
      pTVar15 = (TSharedPtr<FUniqueNetId_const_,1> *)
                ((this->RemoteTalkers).AllocatorInstance.Data + lVar4);
      local_70 = &___7FUniqueNetIdWrapper__6B_;
      local_68.TypeIndex = 0;
      local_68._padding_ = 0;
      local_68._padding_ = 0;
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
      ::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
                (&local_68,pTVar15);
      local_70 = &___7FUniqueNetIdRepl__6B_;
      local_50 = (void *)0x0;
      local_48 = 0;
      if ((pTVar15->Object == (FUniqueNetId *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      puVar13 = &pTVar15->Object->field_0x8;
      pTVar11 = *(TReferenceControllerBase<1> **)&pTVar15->Object->field_0x10;
      pTVar16 = pTVar22;
      pTVar21 = pTVar11;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar11->SharedReferenceCount;
        do {
          pTVar21 = pTVar22;
          if (aVar3 == (atomic<int>)0x0) goto LAB_14ed09137;
          LOCK();
          aVar9 = pTVar11->SharedReferenceCount;
          bVar5 = aVar3 == aVar9;
          if (bVar5) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar9 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar9;
        } while (!bVar5);
        pTVar16 = *(TReferenceControllerBase<1> **)puVar13;
        pTVar21 = pTVar11;
      }
LAB_14ed09137:
      pTVar11 = (TReferenceControllerBase<1> *)&pTVar16->SharedReferenceCount;
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        pTVar11 = pTVar22;
      }
      if ((pTVar11 != (TReferenceControllerBase<1> *)puVar13) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SharedThis.Get() == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x69a,L""), bVar5)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L"");
        if (bVar5) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L"");
        if (bVar5) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_90.Variant.TypeIndex = '\0';
      local_90._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
      local_90.Variant._padding_ = 0;
      local_90.Variant._padding_ = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar2 = (FUniqueNetIdWrapper *)(this->SystemMuteList).AllocatorInstance.Data;
      iVar19 = (this->SystemMuteList).ArrayNum;
      local_90.Variant.TypeIndex = 0;
      local_90.Variant._padding_ = (longlong)pTVar16;
      local_90.Variant._padding_ = (longlong)pTVar21;
      for (this_00 = pFVar2; this_00 != pFVar2 + iVar19; this_00 = this_00 + 1) {
        bVar5 = FUniqueNetIdWrapper::IsValid(this_00);
        bVar6 = FUniqueNetIdWrapper::IsValid(&local_90);
        if (bVar5 == bVar6) {
          if (!bVar5) {
LAB_14ed093af:
            iVar19 = (int)((longlong)this_00 - (longlong)pFVar2 >> 5);
            uVar18 = local_108;
            goto LAB_14ed0935a;
          }
          if ((this_00->Variant).TypeIndex == local_90.Variant.TypeIndex) {
            bVar5 = FUniqueNetIdWrapper::IsV1(this_00);
            if (bVar5) {
              if ((local_90.Variant.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              if (((TReferenceControllerBase<1> *)local_90.Variant._padding_ ==
                   (TReferenceControllerBase<1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar5)) {
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              lVar4 = local_90.Variant._padding_;
              pTVar15 = FUniqueNetIdWrapper::GetV1Unsafe(this_00);
              if ((pTVar15->Object == (FUniqueNetId *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar5)) {
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              cVar7 = (*(code *)**(undefined8 **)pTVar15->Object)(pTVar15->Object,lVar4);
            }
            else {
              pTVar12 = FUniqueNetIdWrapper::GetV2Unsafe(this_00);
              if ((local_90.Variant.TypeIndex != 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              cVar7 = pTVar12->Value == (uint)local_90.Variant._padding_;
            }
            if (cVar7 != '\0') goto LAB_14ed093af;
          }
        }
        uVar18 = local_108;
      }
      iVar19 = -1;
LAB_14ed0935a:
      uVar17 = (ulonglong)local_90.Variant.TypeIndex;
      if ((1 < local_90.Variant.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_90.Variant._padding_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])(&local_90.Variant);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
      uVar17 = (ulonglong)local_68.TypeIndex;
      if (iVar19 == -1) {
        pcVar20 = *(code **)(*plVar1 + 0xcd0);
        local_f0 = &___7FUniqueNetIdWrapper__6B_;
        local_d8 = local_68.TypeIndex;
        if ((1 < local_68.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar5)) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[uVar17] ==
            UE::Core::Private::TCopyConstructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Construct
           ) {
          local_e8 = local_68._padding_;
          local_e0 = (TReferenceControllerBase<1> *)local_68._padding_;
          if ((TReferenceControllerBase<1> *)local_68._padding_ !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *(atomic<int> *)(local_68._padding_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_68._padding_ + 8) + 1);
            UNLOCK();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[uVar17])(&local_e8,&local_68);
        }
        local_f0 = &___7FUniqueNetIdRepl__6B_;
        pppuVar14 = &local_f0;
        local_d0 = 0;
        local_c8 = 0;
      }
      else {
        pcVar20 = *(code **)(*plVar1 + 0xcc8);
        local_c0 = &___7FUniqueNetIdWrapper__6B_;
        local_a8 = local_68.TypeIndex;
        if ((1 < local_68.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar5)) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[uVar17] ==
            UE::Core::Private::TCopyConstructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Construct
           ) {
          local_b8 = local_68._padding_;
          local_b0 = (TReferenceControllerBase<1> *)local_68._padding_;
          if ((TReferenceControllerBase<1> *)local_68._padding_ !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *(atomic<int> *)(local_68._padding_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_68._padding_ + 8) + 1);
            UNLOCK();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[uVar17])(&local_b8,&local_68);
        }
        local_c0 = &___7FUniqueNetIdRepl__6B_;
        pppuVar14 = &local_c0;
        local_a0 = 0;
        local_98 = 0;
      }
      (*pcVar20)(plVar1,pppuVar14);
      local_70 = &___7FUniqueNetIdRepl__6B_;
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      uVar17 = (ulonglong)local_68.TypeIndex;
      if ((1 < local_68.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._padding_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])(&local_68);
      }
      local_108 = uVar18 + 1;
      local_100 = local_100 + 0x18;
      this = local_f8;
    } while ((int)local_108 < (local_f8->RemoteTalkers).ArrayNum);
  }
  return;
}

