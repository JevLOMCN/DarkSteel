// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkReplayStreaming
// Functions: 10

// INetworkReplayStreamer @ 144643cd0

INetworkReplayStreamer * __thiscall
INetworkReplayStreamer::INetworkReplayStreamer(INetworkReplayStreamer *this)

{
  this->ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  this->_padding_ = (longlong)&___7INetworkReplayStreamer__6B_;
  return this;
}

// ~INetworkReplayStreamer @ 144643d60

void __thiscall INetworkReplayStreamer::~INetworkReplayStreamer(INetworkReplayStreamer *this)

{
  TPimplPtr<UE::Net::FNetResult,1> TVar1;
  
  this->_padding_ = (longlong)&___7INetworkReplayStreamer__6B_;
  TVar1 = this->ExtendedError;
  if (TVar1 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144643d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
    return;
  }
  return;
}

// AppendCommonReplayAttributes @ 144643f90

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
INetworkReplayStreamer::AppendCommonReplayAttributes
          (INetworkReplayStreamer *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar8;
  wchar_t *pwVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  uint local_res8 [2];
  FString local_68;
  void *local_58 [2];
  FDestructionSentinel local_48;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar11 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&Attrib_StreamerState,L"StreamerState");
    atexit(`INetworkReplayStreamer::AppendCommonReplayAttributes'::__l2::
           _dynamic_atexit_destructor_for__Attrib_StreamerState__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar11 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&Attrib_ReplayName,L"ReplayName");
    atexit(`INetworkReplayStreamer::AppendCommonReplayAttributes'::__l2::
           _dynamic_atexit_destructor_for__Attrib_ReplayName__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar11 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&Attrib_LengthInMS,L"LengthInMS");
    atexit(`INetworkReplayStreamer::AppendCommonReplayAttributes'::__l2::
           _dynamic_atexit_destructor_for__Attrib_LengthInMS__);
    _Init_thread_footer(&::_TSS2);
  }
  piVar11 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = param_1->ArrayNum;
  *piVar11 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  local_res8[0] = (**(code **)(this->_padding_ + 0x60))(this);
  pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x130))(this,local_58);
  cVar4 = (**(code **)(this->_padding_ + 0x138))(this);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  if (cVar4 == '\0') {
    pwVar9 = L"Idle";
  }
  else if (cVar4 == '\x01') {
    pwVar9 = L"Recording";
  }
  else if (cVar4 == '\x02') {
    pwVar9 = L"Playback";
  }
  else {
    pwVar9 = L"Unknown";
  }
  ::FString::operator=(&local_68,pwVar9);
  uVar10 = __return_storage_ptr__->ArrayNum + 3;
  if (-1 < (int)uVar10) {
    if (*piVar11 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar10,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar11);
    }
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FString>
              (__return_storage_ptr__,&Attrib_StreamerState,&local_68);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FString>
              (__return_storage_ptr__,&Attrib_ReplayName,pFVar7);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned_int>
              (__return_storage_ptr__,&Attrib_LengthInMS,local_res8);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &OnReplayGetAnalyticsAttributes,(FWriteAccessScope *)&local_48);
    bVar3 = false;
    OnReplayGetAnalyticsAttributes._28_4_ = OnReplayGetAnalyticsAttributes._28_4_ + 1;
    uVar10 = OnReplayGetAnalyticsAttributes._16_4_ - 1;
    if (-1 < (int)uVar10) {
      lVar12 = (longlong)(int)uVar10 << 4;
      bVar3 = false;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (int)OnReplayGetAnalyticsAttributes._16_4_) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
        if (((*(int *)(lVar12 + 8 + OnReplayGetAnalyticsAttributes._8_8_) == 0) ||
            (plVar1 = *(longlong **)(lVar12 + OnReplayGetAnalyticsAttributes._8_8_),
            plVar1 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,this,__return_storage_ptr__), cVar4 == '\0'
           )) {
          bVar3 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    OnReplayGetAnalyticsAttributes._28_4_ = OnReplayGetAnalyticsAttributes._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &OnReplayGetAnalyticsAttributes,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
}

// Exec @ 144644330

void __thiscall
INetworkReplayStreamer::Exec(INetworkReplayStreamer *this,wchar_t *param_1,FOutputDevice *param_2)

{
  return;
}

// GetLastError @ 1446445e0

Type __thiscall INetworkReplayStreamer::GetLastError(INetworkReplayStreamer *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x168))();
  return (Type)(cVar1 != '\0');
}

// GetReplayStreamerState @ 1446446b0

EReplayStreamerState __thiscall
INetworkReplayStreamer::GetReplayStreamerState(INetworkReplayStreamer *this)

{
  return Idle;
}

// HandleLastError @ 1446446c0

EHandleNetResult __thiscall
INetworkReplayStreamer::HandleLastError(INetworkReplayStreamer *this,FNetResultManager *param_1)

{
  EHandleNetResult EVar1;
  
  if (this->ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    EVar1 = UE::Net::FNetResultManager::HandleNetResult(param_1,(FNetResult *)this->ExtendedError);
    return EVar1;
  }
  return NotHandled;
}

// HasError @ 1446446e0

bool __thiscall INetworkReplayStreamer::HasError(INetworkReplayStreamer *this)

{
  return this->ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0;
}

// SetAnalyticsProvider @ 144644800

void __thiscall
INetworkReplayStreamer::SetAnalyticsProvider
          (INetworkReplayStreamer *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  return;
}

// SetExtendedError @ 144644810

void __thiscall
INetworkReplayStreamer::SetExtendedError(INetworkReplayStreamer *this,FNetResult *param_1)

{
  UE::Net::AddToChainResultPtr(&this->ExtendedError,param_1);
  return;
}

