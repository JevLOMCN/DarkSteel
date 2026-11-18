// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NonRealtimeAudioRenderer
// Functions: 28

// FMixerPlatformNonRealtime @ 1464c6c70

FMixerPlatformNonRealtime * __thiscall
Audio::FMixerPlatformNonRealtime::FMixerPlatformNonRealtime
          (FMixerPlatformNonRealtime *this,float param_1,float param_2)

{
  undefined1 *puVar1;
  
  IAudioMixerPlatformInterface::IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  this->SampleRate = param_1;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this->NumChannels = (int)param_2;
  this->bIsInitialized = 0;
  this->bIsDeviceOpen = 0;
  this->TotalDurationRendered = 0.0;
  this->TotalDesiredRender = 0.0;
  this->TickDelta = 0.0;
  (this->AudioFileWriter).Ptr = (FAudioFileWriter *)0x0;
  return this;
}

// ~FMixerPlatformNonRealtime @ 1464c6d00

void __thiscall
Audio::FMixerPlatformNonRealtime::~FMixerPlatformNonRealtime(FMixerPlatformNonRealtime *this)

{
  FAudioFileWriter *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this_00 = (this->AudioFileWriter).Ptr;
  if (this_00 != (FAudioFileWriter *)0x0) {
    FAudioFileWriter::~FAudioFileWriter(this_00);
    ::operator_delete(this_00,0x48);
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  return;
}

// CheckAudioDeviceChange @ 1464c6e20

bool __thiscall
Audio::FMixerPlatformNonRealtime::CheckAudioDeviceChange(FMixerPlatformNonRealtime *this)

{
  return false;
}

// CloseAudioStream @ 1464c6e30

bool __thiscall Audio::FMixerPlatformNonRealtime::CloseAudioStream(FMixerPlatformNonRealtime *this)

{
  char cVar1;
  
  if ((this->bIsInitialized == 0) || ((int)this->_padding_ == 0)) {
    return false;
  }
  if ((this->bIsDeviceOpen != 0) && (cVar1 = (**(code **)(this->_padding_ + 0xa8))(), cVar1 == '\0')
     ) {
    return false;
  }
  this->bIsDeviceOpen = 0;
  LOCK();
  *(undefined4 *)&this->_padding_ = 0;
  UNLOCK();
  return true;
}

// CloseFile @ 1464c6e90

void __thiscall Audio::FMixerPlatformNonRealtime::CloseFile(FMixerPlatformNonRealtime *this)

{
  FAudioFileWriter *this_00;
  
  this_00 = (this->AudioFileWriter).Ptr;
  if (this_00 != (FAudioFileWriter *)0x0) {
    (this->AudioFileWriter).Ptr = (FAudioFileWriter *)0x0;
    FAudioFileWriter::~FAudioFileWriter(this_00);
    ::operator_delete(this_00,0x48);
    return;
  }
  return;
}

// FadeIn @ 1464c6ee0

void __thiscall Audio::FMixerPlatformNonRealtime::FadeIn(FMixerPlatformNonRealtime *this)

{
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  UNLOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  return;
}

// FadeOut @ 1464c6f00

void __thiscall Audio::FMixerPlatformNonRealtime::FadeOut(FMixerPlatformNonRealtime *this)

{
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  return;
}

// GetDefaultDeviceName @ 1464c6f20

FString * __thiscall
Audio::FMixerPlatformNonRealtime::GetDefaultDeviceName
          (FMixerPlatformNonRealtime *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDefaultOutputDeviceIndex @ 1464c6f40

bool __thiscall
Audio::FMixerPlatformNonRealtime::GetDefaultOutputDeviceIndex
          (FMixerPlatformNonRealtime *this,uint *param_1)

{
  *param_1 = 0;
  return true;
}

// GetNumOutputDevices @ 1464c6f50

bool __thiscall
Audio::FMixerPlatformNonRealtime::GetNumOutputDevices(FMixerPlatformNonRealtime *this,uint *param_1)

{
  if (this->bIsInitialized == 0) {
    return false;
  }
  *param_1 = 1;
  return true;
}

// GetOutputDeviceInfo @ 1464c6f70

bool __thiscall
Audio::FMixerPlatformNonRealtime::GetOutputDeviceInfo
          (FMixerPlatformNonRealtime *this,uint param_1,FAudioPlatformDeviceInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (this->bIsInitialized == 0) {
    return false;
  }
  param_2->bIsSystemDefault = '\x01';
  param_2->SampleRate = (int)this->SampleRate;
  ::FString::operator=(&param_2->DeviceId,(wchar_t *)0x0);
  param_2->Format = Float;
  ::FString::operator=(&param_2->Name,L"Non-realtime Renderer");
  param_2->NumChannels = this->NumChannels;
  pTVar6 = &param_2->OutputChannelArray;
  local_28 = 0;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar1 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (param_2->OutputChannelArray).ArrayNum;
  if (iVar5 == (param_2->OutputChannelArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&(param_2->OutputChannelArray).ArrayMax);
  }
  (param_2->OutputChannelArray).ArrayNum = iVar5 + 1;
  local_24 = 1;
  *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_28;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 <
      pFVar1 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (param_2->OutputChannelArray).ArrayNum;
  if (iVar5 == (param_2->OutputChannelArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&(param_2->OutputChannelArray).ArrayMax);
  }
  (param_2->OutputChannelArray).ArrayNum = iVar5 + 1;
  local_20 = 2;
  *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_24;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 <
      pFVar1 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (param_2->OutputChannelArray).ArrayNum;
  if (iVar5 == (param_2->OutputChannelArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&(param_2->OutputChannelArray).ArrayMax);
  }
  (param_2->OutputChannelArray).ArrayNum = iVar5 + 1;
  local_1c = 3;
  *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_20;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_1c) &&
     ((FScriptContainerElement *)&local_1c <
      pFVar1 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (param_2->OutputChannelArray).ArrayNum;
  if (iVar5 == (param_2->OutputChannelArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&(param_2->OutputChannelArray).ArrayMax);
  }
  (param_2->OutputChannelArray).ArrayNum = iVar5 + 1;
  local_18 = 4;
  *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_1c;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar1 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (param_2->OutputChannelArray).ArrayNum;
  if (iVar5 == (param_2->OutputChannelArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&(param_2->OutputChannelArray).ArrayMax);
  }
  (param_2->OutputChannelArray).ArrayNum = iVar5 + 1;
  local_14 = 5;
  *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 <
      pFVar1 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (param_2->OutputChannelArray).ArrayNum;
  if (iVar5 == (param_2->OutputChannelArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&(param_2->OutputChannelArray).ArrayMax);
  }
  (param_2->OutputChannelArray).ArrayNum = iVar5 + 1;
  local_10 = 9;
  *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_14;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 <
      pFVar1 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (param_2->OutputChannelArray).ArrayNum;
  if (iVar5 == (param_2->OutputChannelArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&(param_2->OutputChannelArray).ArrayMax);
  }
  (param_2->OutputChannelArray).ArrayNum = iVar5 + 1;
  local_c = 10;
  *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_10;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&local_c) {
    if ((FScriptContainerElement *)&local_c <
        pFVar1 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  iVar5 = (param_2->OutputChannelArray).ArrayNum;
  if (iVar5 == (param_2->OutputChannelArray).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&(param_2->OutputChannelArray).ArrayMax);
  }
  (param_2->OutputChannelArray).ArrayNum = iVar5 + 1;
  *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_c;
  return true;
}

// GetPlatformApi @ 1464c74e0

FString * __thiscall
Audio::FMixerPlatformNonRealtime::GetPlatformApi
          (FMixerPlatformNonRealtime *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"NonRealtime");
  return __return_storage_ptr__;
}

// GetPlatformDeviceInfo @ 1464c7510

FAudioPlatformDeviceInfo * __thiscall
Audio::FMixerPlatformNonRealtime::GetPlatformDeviceInfo
          (FMixerPlatformNonRealtime *this,FAudioPlatformDeviceInfo *__return_storage_ptr__)

{
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  
  ::FString::FString(&__return_storage_ptr__->Name,(FString *)&this->_padding_);
  ::FString::FString(&__return_storage_ptr__->DeviceId,(FString *)&this->_padding_);
  pTVar1 = &__return_storage_ptr__->OutputChannelArray;
  __return_storage_ptr__->NumChannels = (int)this->_padding_;
  __return_storage_ptr__->NumDirectOutChannels = *(int *)((longlong)&this->_padding_ + 4);
  __return_storage_ptr__->SampleRate = (int)this->_padding_;
  __return_storage_ptr__->Format = *(Type *)((longlong)&this->_padding_ + 4);
  piVar2 = &(__return_storage_ptr__->OutputChannelArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)this->_padding_;
  _Src = (void *)this->_padding_;
  (__return_storage_ptr__->OutputChannelArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  __return_storage_ptr__->field_0x40 =
       __return_storage_ptr__->field_0x40 ^
       (__return_storage_ptr__->bIsSystemDefault ^ (byte)this->_padding_) & 1;
  return __return_storage_ptr__;
}

// GetPlatformSettings @ 1464c75f0

FAudioPlatformSettings * __thiscall
Audio::FMixerPlatformNonRealtime::GetPlatformSettings
          (FMixerPlatformNonRealtime *this,FAudioPlatformSettings *__return_storage_ptr__)

{
  FAudioPlatformSettings::GetPlatformSettings
            (__return_storage_ptr__,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return __return_storage_ptr__;
}

// InitializeHardware @ 1464c7620

bool __thiscall
Audio::FMixerPlatformNonRealtime::InitializeHardware(FMixerPlatformNonRealtime *this)

{
  if (ZPULL(*(undefined4 *)&this->field_0x200,0,1) != 0) {
    return false;
  }
  *(uint *)&this->field_0x200 = *(undefined4 *)&this->field_0x200 | 1;
  this->TickDelta = (double)FApp::DeltaTime;
  return true;
}

// IsInitialized @ 1464c7680

bool __thiscall Audio::FMixerPlatformNonRealtime::IsInitialized(FMixerPlatformNonRealtime *this)

{
  return this->bIsInitialized;
}

// IsNonRealtime @ 1464c7690

bool __thiscall Audio::FMixerPlatformNonRealtime::IsNonRealtime(FMixerPlatformNonRealtime *this)

{
  return true;
}

// MoveAudioStreamToNewAudioDevice @ 1464c76a0

bool __thiscall
Audio::FMixerPlatformNonRealtime::MoveAudioStreamToNewAudioDevice
          (FMixerPlatformNonRealtime *this,FString *param_1)

{
  return true;
}

// OnHardwareUpdate @ 1464c76b0

void __thiscall Audio::FMixerPlatformNonRealtime::OnHardwareUpdate(FMixerPlatformNonRealtime *this)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  
  if ((RenderEveryTickCvar != 0) && (this->bIsInitialized == 1 && this->bIsDeviceOpen == 1)) {
    lVar2 = this->_padding_;
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    dVar3 = this->TickDelta + this->TotalDesiredRender;
    this->TotalDesiredRender = dVar3;
    if (this->TotalDurationRendered <= dVar3 && dVar3 != this->TotalDurationRendered) {
      do {
        FOutputBuffer::MixNextBuffer((FOutputBuffer *)&this->_padding_);
        IAudioMixerPlatformInterface::ReadNextBuffer((IAudioMixerPlatformInterface *)this);
        dVar3 = (double)iVar1 / (double)(int)lVar2 + this->TotalDurationRendered;
        this->TotalDurationRendered = dVar3;
      } while (dVar3 < this->TotalDesiredRender);
    }
  }
  return;
}

// OpenAudioStream @ 1464c7770

bool __thiscall
Audio::FMixerPlatformNonRealtime::OpenAudioStream
          (FMixerPlatformNonRealtime *this,FAudioMixerOpenStreamParams *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  if ((this->bIsInitialized != 0) && (this->bIsDeviceOpen == 0)) {
    *(uint *)&this->_padding_ = param_1->OutputDeviceIndex;
    *(uint *)((longlong)&this->_padding_ + 4) = param_1->NumFrames;
    *(int *)&this->_padding_ = param_1->NumBuffers;
    this->_padding_ = (longlong)param_1->AudioMixer;
    *(uint *)&this->_padding_ = param_1->SampleRate;
    *(int *)((longlong)&this->_padding_ + 4) = param_1->MaxSources;
    *(bool *)&this->_padding_ = param_1->bRestoreIfRemoved;
    *(bool *)((longlong)&this->_padding_ + 1) = param_1->bUseSystemAudioDevice;
    ::FString::operator=((FString *)&this->_padding_,&param_1->AudioDeviceId);
    *(undefined4 *)&this->_padding_ = 0;
    ::FString::operator=((FString *)&this->_padding_,L"Unknown");
    ::FString::operator=((FString *)&this->_padding_,L"Unknown");
    this->_padding_ = 0;
    this->_padding_ = 0;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar2 = *piVar1;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
    LOCK();
    *(undefined4 *)&this->_padding_ = 0;
    UNLOCK();
    uVar3 = (undefined4)this->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)&this->_padding_ = (int)this->_padding_;
    this->_padding_ = this->_padding_;
    *(undefined4 *)&this->_padding_ = uVar3;
    cVar4 = (**(code **)(this->_padding_ + 0x68))(this,uVar3,&this->_padding_);
    if (cVar4 != '\0') {
      LOCK();
      *(undefined4 *)&this->_padding_ = 1;
      UNLOCK();
      this->bIsDeviceOpen = 1;
      return true;
    }
  }
  return false;
}

// OpenFileToWriteAudioTo @ 1464c78c0

void __thiscall
Audio::FMixerPlatformNonRealtime::OpenFileToWriteAudioTo
          (FMixerPlatformNonRealtime *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FString *pFVar3;
  FAudioFileWriter *pFVar4;
  FAudioFileWriter *pFVar5;
  FString local_58;
  FString local_48;
  FSoundQualityInfo local_38;
  
  pFVar5 = (FAudioFileWriter *)0x0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar2 = FPaths::IsRelative(param_1);
  if (bVar2) {
    pFVar3 = FPaths::ProjectSavedDir();
    ::FString::ConcatFF(&local_48,pFVar3,param_1);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    pFVar3 = FPaths::ConvertRelativePathToFull(&local_48,&local_58);
    if (&local_58 != pFVar3) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else if (&local_58 != param_1) {
    iVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_58.Data.ArrayNum = iVar1;
    if (((iVar1 != 0) || (local_58.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_58.Data.ArrayMax,(ForAnyElementType *)&local_58,iVar1,
                   &local_58.Data.ArrayMax), iVar1 != 0)) {
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  local_38.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DebugName.Data.ArrayNum = 0;
  local_38.DebugName.Data.ArrayMax = 0;
  local_38.Quality = 100;
  local_38.Duration = 5.0;
  local_38.SampleRate = (uint)(longlong)this->SampleRate;
  local_38.NumChannels = this->NumChannels;
  local_38.SampleDataSize =
       (uint)(longlong)((float)(int)local_38.NumChannels * this->SampleRate * __real_41200000);
  pFVar4 = ::operator_new(0x48);
  if (pFVar4 != (FAudioFileWriter *)0x0) {
    pFVar5 = FAudioFileWriter::FAudioFileWriter(pFVar4,&local_58,&local_38);
  }
  pFVar4 = (this->AudioFileWriter).Ptr;
  if ((pFVar4 != pFVar5) &&
     ((this->AudioFileWriter).Ptr = pFVar5, pFVar4 != (FAudioFileWriter *)0x0)) {
    FAudioFileWriter::~FAudioFileWriter(pFVar4);
    ::operator_delete(pFVar4,0x48);
  }
  if (local_38.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DebugName.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// RenderAudio @ 1464c7ad0

void __thiscall
Audio::FMixerPlatformNonRealtime::RenderAudio(FMixerPlatformNonRealtime *this,double param_1)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  
  if (this->bIsInitialized == 1 && this->bIsDeviceOpen == 1) {
    dVar3 = param_1 + this->TotalDesiredRender;
    lVar2 = this->_padding_;
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    this->TotalDesiredRender = dVar3;
    if (this->TotalDurationRendered <= dVar3 && dVar3 != this->TotalDurationRendered) {
      do {
        FOutputBuffer::MixNextBuffer((FOutputBuffer *)&this->_padding_);
        IAudioMixerPlatformInterface::ReadNextBuffer((IAudioMixerPlatformInterface *)this);
        dVar3 = (double)iVar1 / (double)(int)lVar2 + this->TotalDurationRendered;
        this->TotalDurationRendered = dVar3;
      } while (dVar3 < this->TotalDesiredRender);
    }
  }
  return;
}

// ResumePlaybackOnNewDevice @ 1464c7b70

void __thiscall
Audio::FMixerPlatformNonRealtime::ResumePlaybackOnNewDevice(FMixerPlatformNonRealtime *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int local_res8 [2];
  TArrayView<unsigned_char_const_,int> local_18;
  
  FOutputBuffer::PopBufferData((FOutputBuffer *)&this->_padding_,&local_18,local_res8);
  (**(code **)(this->_padding_ + 0xd0))(this,local_18.DataPtr);
  iVar3 = FOutputBuffer::GetNumSamples((FOutputBuffer *)&this->_padding_);
  if (*(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_ != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OpenStreamParams.NumFrames * AudioStreamInfo.DeviceInfo.NumChannels == OutputBuffer.GetNumSamples()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NonRealtimeAudioRenderer\\Private\\AudioMixerPlatformNonRealtime.cpp"
                       ,0x110,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  return;
}

// RunInternal @ 1464c7c10

uint __thiscall Audio::FMixerPlatformNonRealtime::RunInternal(FMixerPlatformNonRealtime *this)

{
  return 0;
}

// StartAudioStream @ 1464c7c20

bool __thiscall Audio::FMixerPlatformNonRealtime::StartAudioStream(FMixerPlatformNonRealtime *this)

{
  IAudioMixerPlatformInterface::BeginGeneratingAudio((IAudioMixerPlatformInterface *)this);
  return true;
}

// StopAudioStream @ 1464c7c40

bool __thiscall Audio::FMixerPlatformNonRealtime::StopAudioStream(FMixerPlatformNonRealtime *this)

{
  return true;
}

// SubmitBuffer @ 1464c7c50

void __thiscall
Audio::FMixerPlatformNonRealtime::SubmitBuffer(FMixerPlatformNonRealtime *this,uchar *param_1)

{
  FAudioFileWriter *this_00;
  
  this_00 = (this->AudioFileWriter).Ptr;
  if (this_00 != (FAudioFileWriter *)0x0) {
    FAudioFileWriter::PushAudio
              (this_00,(float *)param_1,this->NumChannels * *(int *)((longlong)&this->_padding_ + 4)
               ,true);
    return;
  }
  return;
}

// TeardownHardware @ 1464c7c80

bool __thiscall Audio::FMixerPlatformNonRealtime::TeardownHardware(FMixerPlatformNonRealtime *this)

{
  if (ZPULL(*(undefined4 *)&this->field_0x200,0,1) == 0) {
    return false;
  }
  *(uint *)&this->field_0x200 = *(undefined4 *)&this->field_0x200 & 0xfffffffe;
  return true;
}

