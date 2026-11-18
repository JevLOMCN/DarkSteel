// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 13

// ~IOnlineVoice @ 14ecdbd00

void __thiscall IOnlineVoice::~IOnlineVoice(IOnlineVoice *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineVoice__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlayerTalkingStateChangedDelegates).field_0x8,
             *(int *)&(this->OnPlayerTalkingStateChangedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnPlayerTalkingStateChangedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlayerTalkingStateChangedDelegates);
  return;
}

// AddOnPlayerTalkingStateChangedDelegate_Handle @ 14ecdda00

FDelegateHandle __thiscall
IOnlineVoice::AddOnPlayerTalkingStateChangedDelegate_Handle
          (IOnlineVoice *this,
          TDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
         *)&this->OnPlayerTalkingStateChangedDelegates,
        (TDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// ClearOnPlayerTalkingStateChangedDelegate_Handle @ 14ecde330

void __thiscall
IOnlineVoice::ClearOnPlayerTalkingStateChangedDelegate_Handle
          (IOnlineVoice *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnPlayerTalkingStateChangedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnPlayerTalkingStateChangedDelegates @ 14ecde360

void __thiscall
IOnlineVoice::ClearOnPlayerTalkingStateChangedDelegates(IOnlineVoice *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnPlayerTalkingStateChangedDelegates,param_1);
  return;
}

// DisconnectAllEndpoints @ 14ece2360

void __thiscall IOnlineVoice::DisconnectAllEndpoints(IOnlineVoice *this)

{
  return;
}

// GetAmplitudeOfRemoteTalker @ 14ece76f0

float __thiscall IOnlineVoice::GetAmplitudeOfRemoteTalker(IOnlineVoice *this,FUniqueNetId *param_1)

{
  return __real_bf800000;
}

// GetMicrophoneOutput @ 14ece7f10

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
IOnlineVoice::GetMicrophoneOutput
          (IOnlineVoice *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FPatchOutput *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetRemoteTalkerOutput @ 14ece8890

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
IOnlineVoice::GetRemoteTalkerOutput
          (IOnlineVoice *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FPatchOutput *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Init @ 14ece9e00

bool __thiscall IOnlineVoice::Init(IOnlineVoice *this)

{
  return true;
}

// PatchLocalTalkerOutputToEndpoint @ 14ecf3dd0

bool __thiscall IOnlineVoice::PatchLocalTalkerOutputToEndpoint(IOnlineVoice *this,FString *param_1)

{
  return false;
}

// PatchRemoteTalkerOutputToEndpoint @ 14ecf3fd0

bool __thiscall
IOnlineVoice::PatchRemoteTalkerOutputToEndpoint(IOnlineVoice *this,FString *param_1,bool param_2)

{
  return false;
}

// Shutdown @ 14ecfa380

void __thiscall IOnlineVoice::Shutdown(IOnlineVoice *this)

{
  return;
}

// TriggerOnPlayerTalkingStateChangedDelegates @ 14ed07880

void __thiscall
IOnlineVoice::TriggerOnPlayerTalkingStateChangedDelegates
          (IOnlineVoice *this,TSharedRef<FUniqueNetId_const_,1> *param_1,bool param_2)

{
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnPlayerTalkingStateChangedDelegates,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

