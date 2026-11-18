// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 8

// FBufferedSubmixListener @ 1464cbaf0

FBufferedSubmixListener * __thiscall
FBufferedSubmixListener::FBufferedSubmixListener
          (FBufferedSubmixListener *this,int param_1,bool param_2,FString *param_3)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ISubmixBufferListener__6B_;
  FBufferedListenerBase::FBufferedListenerBase((FBufferedListenerBase *)&this->_padding_,param_1);
  this->bZeroInputBuffer = param_2;
  pFVar2 = &this->Name;
  this->_padding_ = (longlong)&_vftable__for__ISubmixBufferListener__;
  this->_padding_ = (longlong)&_vftable__for__FBufferedListenerBase__;
  this->DeviceId = BufferedSubmixListenerPrivate::InvalidAudioDeviceId;
  piVar1 = &(this->Name).Data.ArrayMax;
  *piVar1 = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  if ((param_3 != (FString *)0x0) && (pFVar2 != param_3)) {
    iVar3 = (param_3->Data).ArrayNum;
    _Src = (param_3->Data).AllocatorInstance.Data;
    (this->Name).Data.ArrayNum = iVar3;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      memcpy((pFVar2->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
    }
  }
  return this;
}

// ~FBufferedSubmixListener @ 1464cbf40

void __thiscall FBufferedSubmixListener::~FBufferedSubmixListener(FBufferedSubmixListener *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&_vftable__for__ISubmixBufferListener__;
  this->_padding_ = (longlong)&_vftable__for__FBufferedListenerBase__;
  if (this->DeviceId != BufferedSubmixListenerPrivate::InvalidAudioDeviceId) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeviceId == BufferedSubmixListenerPrivate::InvalidAudioDeviceId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                       ,0x1a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((char)this->_padding_ != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsStartedNonAtomic()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FBufferedListenerBase::~FBufferedListenerBase((FBufferedListenerBase *)&this->_padding_);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// GetListenerName @ 1464cd1a0

FString * __thiscall FBufferedSubmixListener::GetListenerName(FBufferedSubmixListener *this)

{
  return &this->Name;
}

// OnNewSubmixBuffer @ 1464cd920

void __thiscall
FBufferedSubmixListener::OnNewSubmixBuffer
          (FBufferedSubmixListener *this,USoundSubmix *param_1,float *param_2,int param_3,
          int param_4,int param_5,double param_6)

{
  code *pcVar1;
  bool bVar2;
  FBufferFormat local_38;
  float *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  if ((char)this->_padding_ != '\0') {
    local_38.NumChannels = param_4;
    local_38.NumSamplesPerSec = param_5;
    local_38.NumSamplesPerBlock = param_3;
    if (param_3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = param_3;
    local_28 = param_2;
    iStack_20 = param_3;
    local_18.DataPtr = param_2;
    FBufferedListenerBase::OnBufferReceived
              ((FBufferedListenerBase *)&this->_padding_,&local_38,&local_18);
    if (this->bZeroInputBuffer != false) {
      memset(param_2,0,(longlong)param_3 << 2);
    }
  }
  return;
}

// RegisterWithAudioDevice @ 1464cdd40

void __thiscall
FBufferedSubmixListener::RegisterWithAudioDevice
          (FBufferedSubmixListener *this,FAudioDevice *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  if (param_1 == (FAudioDevice *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                       ,0x25,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->DeviceId = param_1->DeviceID;
  lVar1 = param_1->_padding_;
  uVar4 = (**(code **)(lVar1 + 0x88))(param_1);
  pTVar5 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                     ((TSharedFromThis<ISubmixBufferListener,1> *)&this->_padding_,&local_18);
  (**(code **)(lVar1 + 0x90))(param_1,pTVar5,uVar4);
  return;
}

// Start @ 1464ce420

bool __thiscall FBufferedSubmixListener::Start(FBufferedSubmixListener *this,FAudioDevice *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  TSharedRef<ISubmixBufferListener,1> *pTVar6;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  if (param_1 == (FAudioDevice *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5470089898876731336>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                       ,0x38,"InAudioDevice");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    LOCK();
    bVar3 = (char)this->_padding_ == '\0';
    if (bVar3) {
      *(undefined1 *)&this->_padding_ = 1;
    }
    UNLOCK();
    if (bVar3) {
      *(uint *)&this->_padding_ = param_1->DeviceID;
      lVar1 = param_1->_padding_;
      uVar5 = (**(code **)(lVar1 + 0x88))(param_1);
      pTVar6 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                         ((TSharedFromThis<ISubmixBufferListener,1> *)&this[-1].Name,&local_18);
      (**(code **)(lVar1 + 0x90))(param_1,pTVar6,uVar5);
    }
  }
  return false;
}

// Stop @ 1464ce550

void __thiscall FBufferedSubmixListener::Stop(FBufferedSubmixListener *this,FAudioDevice *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  if (param_1 == (FAudioDevice *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5470089898876731324>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                       ,0x44,"InAudioDevice");
    if (!bVar3) {
      return;
    }
  }
  else {
    if (param_1->DeviceID == (uint)this->_padding_) {
      LOCK();
      bVar3 = (char)this->_padding_ == '\x01';
      if (bVar3) {
        *(undefined1 *)&this->_padding_ = 0;
      }
      UNLOCK();
      if (bVar3) {
        if ((uint)this->_padding_ == BufferedSubmixListenerPrivate::InvalidAudioDeviceId) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5470089898876731345>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                             ,0x2f,"DeviceId != BufferedSubmixListenerPrivate::InvalidAudioDeviceId"
                            );
          if (bVar3) goto code_r0x0001464ce630;
        }
        else {
          *(uint *)&this->_padding_ = BufferedSubmixListenerPrivate::InvalidAudioDeviceId;
          lVar1 = param_1->_padding_;
          uVar4 = (**(code **)(lVar1 + 0x88))(param_1);
          pTVar5 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                             ((TSharedFromThis<ISubmixBufferListener,1> *)&this[-1].Name,&local_18);
          (**(code **)(lVar1 + 0xa0))(param_1,pTVar5,uVar4);
        }
      }
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5470089898876731322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                       ,0x46,"InAudioDevice->DeviceID == DeviceId");
    if (!bVar3) {
      return;
    }
  }
code_r0x0001464ce630:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// UnregsiterWithAudioDevice @ 1464ce700

void __thiscall
FBufferedSubmixListener::UnregsiterWithAudioDevice
          (FBufferedSubmixListener *this,FAudioDevice *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  if (param_1 == (FAudioDevice *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                       ,0x2d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->DeviceId == BufferedSubmixListenerPrivate::InvalidAudioDeviceId) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5470089898876731345>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedSubmixListener.cpp"
                       ,0x2f,"DeviceId != BufferedSubmixListenerPrivate::InvalidAudioDeviceId");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this->DeviceId = BufferedSubmixListenerPrivate::InvalidAudioDeviceId;
    lVar1 = param_1->_padding_;
    uVar4 = (**(code **)(lVar1 + 0x88))(param_1);
    pTVar5 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                       ((TSharedFromThis<ISubmixBufferListener,1> *)&this->_padding_,&local_18);
    (**(code **)(lVar1 + 0xa0))(param_1,pTVar5,uVar4);
  }
  return;
}

