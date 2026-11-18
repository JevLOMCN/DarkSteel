// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// FVoicePacketImpl @ 14ecd96b0

FVoicePacketImpl * __thiscall
FVoicePacketImpl::FVoicePacketImpl(FVoicePacketImpl *this,FVoicePacketImpl *param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FUniqueNetId *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  piVar1 = &(this->Buffer).ArrayNum;
  this->_padding_ = (longlong)&___7FVoicePacketImpl__6B_;
  piVar2 = &(this->Buffer).ArrayMax;
  (this->Sender).Object = (FUniqueNetId *)0x0;
  (this->Sender).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  pTVar4 = (param_1->Sender).SharedReferenceCount.ReferenceController;
  pFVar5 = (param_1->Sender).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->Sender).SharedReferenceCount.ReferenceController;
  (this->Sender).Object = pFVar5;
  (this->Sender).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  this->Length = param_1->Length;
  this->SampleCount = param_1->SampleCount;
  this->MicrophoneAmplitude = param_1->MicrophoneAmplitude;
  uVar3 = param_1->Length;
  *piVar1 = 0;
  if (*piVar2 != (uint)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(uint)uVar3,&(this->Buffer).AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(uint)param_1->Length,&(this->Buffer).AllocatorInstance,piVar1,piVar2);
  memcpy((this->Buffer).AllocatorInstance.Data,(param_1->Buffer).AllocatorInstance.Data,
         (ulonglong)param_1->Length);
  return this;
}

// FVoicePacketImpl @ 14ecd97c0

FVoicePacketImpl * __thiscall FVoicePacketImpl::FVoicePacketImpl(FVoicePacketImpl *this)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = &(this->Buffer).ArrayNum;
  this->_padding_ = (longlong)&___7FVoicePacketImpl__6B_;
  piVar2 = &(this->Buffer).ArrayMax;
  (this->Sender).Object = (FUniqueNetId *)0x0;
  (this->Sender).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->Length = 0;
  this->MicrophoneAmplitude = 0;
  uVar3 = UVOIPStatics::GetMaxVoiceDataSize();
  if (-1 < (int)uVar3) {
    *piVar1 = 0;
    if (*piVar2 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar3,&(this->Buffer).AllocatorInstance,0,piVar2);
    }
    uVar3 = UVOIPStatics::GetMaxVoiceDataSize();
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,&(this->Buffer).AllocatorInstance,piVar1,piVar2);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ~FVoicePacketImpl @ 14ecdbcc0

void __thiscall FVoicePacketImpl::~FVoicePacketImpl(FVoicePacketImpl *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FVoicePacketImpl__6B_;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Sender).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FVoicePacket__6B_;
  return;
}

// GetBufferSize @ 14ece7900

ushort __thiscall FVoicePacketImpl::GetBufferSize(FVoicePacketImpl *this)

{
  return this->Length;
}

// GetSampleCounter @ 14ece88e0

ulong64 __thiscall FVoicePacketImpl::GetSampleCounter(FVoicePacketImpl *this)

{
  return this->SampleCount;
}

// GetSender @ 14ece8910

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FVoicePacketImpl::GetSender
          (FVoicePacketImpl *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Sender).Object;
  pTVar1 = (this->Sender).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTotalPacketSize @ 14ece8940

ushort __thiscall FVoicePacketImpl::GetTotalPacketSize(FVoicePacketImpl *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  short sVar4;
  
  if ((this->Sender).Object == (FUniqueNetId *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = this->Length;
  sVar4 = (**(code **)(*(longlong *)(this->Sender).Object + 0x20))();
  return sVar4 + uVar3 + 2;
}

// IsReliable @ 14ecea7e0

bool __thiscall FVoicePacketImpl::IsReliable(FVoicePacketImpl *this)

{
  return false;
}

// ResetData @ 14ecf9620

void __thiscall FVoicePacketImpl::ResetData(FVoicePacketImpl *this)

{
  this->Length = 0;
  this->MicrophoneAmplitude = 0;
  return;
}

// Serialize @ 14ecf9640

void __thiscall FVoicePacketImpl::Serialize(FVoicePacketImpl *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  FUniqueNetId *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FOnlineSubsystemModule *pFVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  FString local_58;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if (((this->Sender).Object == (FUniqueNetId *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Sender.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoicePacketImpl.cpp"
                           ,0x56,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->Sender).Object == (FUniqueNetId *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->Sender).Object;
    (**(code **)(*(longlong *)pFVar4 + 0x30))(pFVar4,&local_38);
    ::operator<<(param_1,&local_38);
    ::operator<<(param_1,&this->MicrophoneAmplitude);
    ::operator<<(param_1,&this->Length);
    ::operator<<(param_1,&this->SampleCount);
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(this->Buffer).AllocatorInstance.Data,this->Length);
  }
  else {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_58);
    ::operator<<(param_1,&this->MicrophoneAmplitude);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar8 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                       (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                        ::__l2::OnlineSubsystemModuleName);
    plVar9 = (longlong *)(**(code **)(pFVar8->_padding_ + 0x50))(pFVar8,0);
    (**(code **)(*plVar9 + 0x80))(plVar9,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((local_48 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar10 = (undefined8 *)(**(code **)(*local_48 + 0x120))(local_48,local_28,&local_58);
      if (&this->Sender != (TSharedPtr<FUniqueNetId_const_,1> *)puVar10) {
        (this->Sender).Object = (FUniqueNetId *)*puVar10;
        *puVar10 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Sender).SharedReferenceCount,(FSharedReferencer<1> *)(puVar10 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
    ::operator<<(param_1,&this->Length);
    ::operator<<(param_1,&this->SampleCount);
    uVar7 = UVOIPStatics::GetMaxVoiceDataSize();
    uVar3 = this->Length;
    if (uVar7 < uVar3) {
      this->Length = 0;
    }
    else {
      piVar1 = &(this->Buffer).ArrayMax;
      piVar2 = &(this->Buffer).ArrayNum;
      *piVar2 = 0;
      if (*piVar1 != (uint)uVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(uint)uVar3,&(this->Buffer).AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(uint)this->Length,&(this->Buffer).AllocatorInstance,piVar2,piVar1);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->Buffer).AllocatorInstance.Data,this->Length);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

