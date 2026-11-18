// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 11

// ~TArray<FWmfMediaAudioSample_*,TSizedDefaultAllocator<32>_> @ 14ea96050

void __thiscall
TArray<FWmfMediaAudioSample_*,TSizedDefaultAllocator<32>_>::
~TArray<FWmfMediaAudioSample_*,TSizedDefaultAllocator<32>_>
          (TArray<FWmfMediaAudioSample_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FWmfMediaHardwareVideoDecodingTextureSample_*,TSizedDefaultAllocator<32>_> @ 14ea96070

void __thiscall
TArray<FWmfMediaHardwareVideoDecodingTextureSample_*,TSizedDefaultAllocator<32>_>::
~TArray<FWmfMediaHardwareVideoDecodingTextureSample_*,TSizedDefaultAllocator<32>_>
          (TArray<FWmfMediaHardwareVideoDecodingTextureSample_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FWmfMediaTextureSample_*,TSizedDefaultAllocator<32>_> @ 14ea96090

void __thiscall
TArray<FWmfMediaTextureSample_*,TSizedDefaultAllocator<32>_>::
~TArray<FWmfMediaTextureSample_*,TSizedDefaultAllocator<32>_>
          (TArray<FWmfMediaTextureSample_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<IHeadMountedDisplayModule_*,TSizedDefaultAllocator<32>_> @ 14ea960b0

void __thiscall
TArray<IHeadMountedDisplayModule_*,TSizedDefaultAllocator<32>_>::
~TArray<IHeadMountedDisplayModule_*,TSizedDefaultAllocator<32>_>
          (TArray<IHeadMountedDisplayModule_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TComPtr<IMFActivate>,TSizedDefaultAllocator<32>_> @ 14ea960d0

void __thiscall
TArray<TComPtr<IMFActivate>,TSizedDefaultAllocator<32>_>::
~TArray<TComPtr<IMFActivate>,TSizedDefaultAllocator<32>_>
          (TArray<TComPtr<IMFActivate>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TComPtr<IMFActivate>,int>
            ((TComPtr<IMFActivate> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TComPtr<IMFMediaType>,TSizedDefaultAllocator<32>_> @ 14ea96100

void __thiscall
TArray<TComPtr<IMFMediaType>,TSizedDefaultAllocator<32>_>::
~TArray<TComPtr<IMFMediaType>,TSizedDefaultAllocator<32>_>
          (TArray<TComPtr<IMFMediaType>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TComPtr<IMFMediaType>,int>
            ((TComPtr<IMFMediaType> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> @ 14ea96130

void __thiscall
TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>::
~TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FWmfMediaSession::FWorkItem,TSizedDefaultAllocator<32>_> @ 14ea96160

void __thiscall
TArray<FWmfMediaSession::FWorkItem,TSizedDefaultAllocator<32>_>::
~TArray<FWmfMediaSession::FWorkItem,TSizedDefaultAllocator<32>_>
          (TArray<FWmfMediaSession::FWorkItem,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FWmfMediaSession::FWorkItem,int>
            ((FWorkItem *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<enum_EMediaEvent,TSizedDefaultAllocator<32>_> @ 14ea96190

void __thiscall
TArray<enum_EMediaEvent,TSizedDefaultAllocator<32>_>::
~TArray<enum_EMediaEvent,TSizedDefaultAllocator<32>_>(void *this)

{
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 14ea961b0

void __thiscall
TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
~TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(void *this)

{
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  return;
}

// AddDefaulted @ 14ea9b310

int __thiscall
TArray<FWmfMediaTracks::FTrack,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FWmfMediaTracks::FTrack,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FWmfMediaTracks::FTrack,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x60,1);
  return iVar1;
}

