// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 7

// FBufferedSourceListener @ 1464cba80

FBufferedSourceListener * __thiscall
FBufferedSourceListener::FBufferedSourceListener(FBufferedSourceListener *this,int param_1)

{
  this->_padding_ = (longlong)&___7ISourceBufferListener__6B_;
  FBufferedListenerBase::FBufferedListenerBase((FBufferedListenerBase *)&this->_padding_,param_1);
  this->_padding_ = (longlong)&_vftable__for__ISourceBufferListener__;
  this->_padding_ = (longlong)&_vftable__for__FBufferedListenerBase__;
  *(undefined8 *)&this->OnBufferStreamEndDelegate = 0;
  *(undefined8 *)&(this->OnBufferStreamEndDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnBufferStreamEndDelegate).field_0x10 = 0;
  this->CurrentSourceId = (atomic<int>)0xffffffff;
  return this;
}

// ~FBufferedSourceListener @ 1464cbf00

void __thiscall FBufferedSourceListener::~FBufferedSourceListener(FBufferedSourceListener *this)

{
  this->_padding_ = (longlong)&_vftable__for__ISourceBufferListener__;
  this->_padding_ = (longlong)&_vftable__for__FBufferedListenerBase__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBufferStreamEndDelegate);
  FBufferedListenerBase::~FBufferedListenerBase((FBufferedListenerBase *)&this->_padding_);
  return;
}

// OnNewBuffer @ 1464cd790

void __thiscall
FBufferedSourceListener::OnNewBuffer(FBufferedSourceListener *this,FOnNewBufferParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  FBufferFormat local_38;
  float *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  if ((char)this->_padding_ != '\0') {
    if ((param_1->AudioData == (float *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InParams.AudioData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSourceListener.cpp"
                           ,0x39,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->NumChannels < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InParams.NumChannels > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSourceListener.cpp"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->NumSamples < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InParams.NumSamples > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSourceListener.cpp"
                           ,0x3b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->SampleRate < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InParams.SampleRate > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSourceListener.cpp"
                           ,0x3c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->SourceId < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InParams.SourceId >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSourceListener.cpp"
                           ,0x3d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (this->CurrentSourceId == (atomic<int>)0xffffffff) {
      LOCK();
      bVar2 = this->CurrentSourceId == (atomic<int>)0xffffffff;
      if (bVar2) {
        this->CurrentSourceId = (atomic<int>)param_1->SourceId;
      }
      UNLOCK();
      if (!bVar2) {
        return;
      }
    }
    local_38.NumChannels = param_1->NumChannels;
    local_38.NumSamplesPerBlock = param_1->NumSamples;
    local_38.NumSamplesPerSec = param_1->SampleRate;
    local_28 = param_1->AudioData;
    iStack_20 = local_38.NumSamplesPerBlock;
    if ((local_38.NumSamplesPerBlock < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iStack_20;
    local_18.DataPtr = local_28;
    FBufferedListenerBase::OnBufferReceived
              ((FBufferedListenerBase *)&this->_padding_,&local_38,&local_18);
  }
  return;
}

// OnSourceReleased @ 1464cd9f0

void __thiscall FBufferedSourceListener::OnSourceReleased(FBufferedSourceListener *this,int param_1)

{
  atomic<int> aVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  if ((atomic<int>)param_1 == this->CurrentSourceId) {
    aVar1 = this->CurrentSourceId;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnBufferStreamEndDelegate,&local_28);
    if ((*(int *)&(this->OnBufferStreamEndDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnBufferStreamEndDelegate).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,aVar1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    LOCK();
    this->CurrentSourceId = (atomic<int>)0xffffffff;
    UNLOCK();
    (**(code **)(this->_padding_ + 0x20))(&this->_padding_,0);
  }
  return;
}

// SetBufferStreamEndDelegate @ 1464cdfb0

void __thiscall
FBufferedSourceListener::SetBufferStreamEndDelegate
          (FBufferedSourceListener *this,
          TDelegate<void___cdecl(IBufferedAudioOutput::FBufferStreamEnd),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 !=
      (TDelegate<void___cdecl(IBufferedAudioOutput::FBufferStreamEnd),FDefaultDelegateUserPolicy> *)
      &this->CurrentSourceId) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CurrentSourceId,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// Start @ 1464ce400

bool __thiscall FBufferedSourceListener::Start(FBufferedSourceListener *this,FAudioDevice *param_1)

{
  bool bVar1;
  
  LOCK();
  bVar1 = (char)this->_padding_ == '\0';
  if (bVar1) {
    *(undefined1 *)&this->_padding_ = 1;
  }
  UNLOCK();
  return bVar1;
}

// Stop @ 1464ce520

void __thiscall FBufferedSourceListener::Stop(FBufferedSourceListener *this,FAudioDevice *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((longlong)&this->_padding_ + 1);
  LOCK();
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  UNLOCK();
  LOCK();
  if ((char)this->_padding_ == '\x01') {
    *(undefined1 *)&this->_padding_ = 0;
  }
  UNLOCK();
  return;
}

