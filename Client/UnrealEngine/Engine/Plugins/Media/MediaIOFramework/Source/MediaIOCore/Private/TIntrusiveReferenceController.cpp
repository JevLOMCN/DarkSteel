// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 19

// DestroyObject @ 14d7a33a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UMediaCapture::FMediaCaptureSyncData,1>::
DestroyObject(TIntrusiveReferenceController<UMediaCapture::FMediaCaptureSyncData,1> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = *(FRHIResource **)(this->ObjectStorage).Pad;
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// DestroyObject @ 14d7a33c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOpenColorIOColorConversionSettings,1>::
DestroyObject(TIntrusiveReferenceController<FOpenColorIOColorConversionSettings,1> *this)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7a33d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UCaptureCardMediaSource::FOpenColorIODataContainer,1>::DestroyObject
          (TIntrusiveReferenceController<UCaptureCardMediaSource::FOpenColorIODataContainer,1> *this
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDataContainer_IMediaOptions__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d7a3412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d7a3430

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOpenColorIORenderPassResources,1>::
DestroyObject(TIntrusiveReferenceController<FOpenColorIORenderPassResources,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d7a3470

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaIOCore::FBlendDeinterlacer,1>::
DestroyObject(TIntrusiveReferenceController<UE::MediaIOCore::FBlendDeinterlacer,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d7a3490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaIOCore::FBobDeinterlacer,1>::
DestroyObject(TIntrusiveReferenceController<UE::MediaIOCore::FBobDeinterlacer,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d7a34b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaCaptureData::FBufferCaptureFrame,1>::
DestroyObject(TIntrusiveReferenceController<UE::MediaCaptureData::FBufferCaptureFrame,1> *this)

{
  UE::MediaCaptureData::FBufferCaptureFrame::~FBufferCaptureFrame
            ((FBufferCaptureFrame *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7a34c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaIOCore::FDeinterlacer,1>::
DestroyObject(TIntrusiveReferenceController<UE::MediaIOCore::FDeinterlacer,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d7a34e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaIOCore::FDiscardDeinterlacer,1>::
DestroyObject(TIntrusiveReferenceController<UE::MediaIOCore::FDiscardDeinterlacer,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d7a3500

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMainMediaIOAudioCapture,1>::DestroyObject
          (TIntrusiveReferenceController<FMainMediaIOAudioCapture,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMainMediaIOAudioCapture__6B_;
  FMediaIOAudioCapture::~FMediaIOAudioCapture((FMediaIOAudioCapture *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7a3520

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaIOAudioCapture,1>::DestroyObject
          (TIntrusiveReferenceController<FMediaIOAudioCapture,1> *this)

{
  FMediaIOAudioCapture::~FMediaIOAudioCapture((FMediaIOAudioCapture *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7a3530

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaIOAudioOutput,1>::DestroyObject
          (TIntrusiveReferenceController<FMediaIOAudioOutput,1> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x30));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
  return;
}

// DestroyObject @ 14d7a3560

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaIOCoreTextureSampleBase,1>::
DestroyObject(TIntrusiveReferenceController<FMediaIOCoreTextureSampleBase,1> *this)

{
  FMediaIOCoreTextureSampleBase::~FMediaIOCoreTextureSampleBase
            ((FMediaIOCoreTextureSampleBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7a3570

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaIOCoreTextureSampleConverter,1>::
DestroyObject(TIntrusiveReferenceController<FMediaIOCoreTextureSampleConverter,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMediaTextureSampleConverter__6B_;
  return;
}

// DestroyObject @ 14d7a35c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MediaCapture::Private::FRHIResourceCaptureSource,1>::DestroyObject
          (TIntrusiveReferenceController<UE::MediaCapture::Private::FRHIResourceCaptureSource,1>
           *this)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 14d7a35d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MediaCapture::Private::FRenderTargetCaptureSource,1>::
DestroyObject(TIntrusiveReferenceController<UE::MediaCapture::Private::FRenderTargetCaptureSource,1>
              *this)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 14d7a35e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MediaCapture::Private::FSceneViewportCaptureSource,1>::
DestroyObject(TIntrusiveReferenceController<UE::MediaCapture::Private::FSceneViewportCaptureSource,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0xd8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 14d7a3630

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMediaIOAudioCapture::FSubmixBufferListenerProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FMediaIOAudioCapture::FSubmixBufferListenerProxy,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// DestroyObject @ 14d7a3690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaCaptureData::FTextureCaptureFrame,1>
::DestroyObject(TIntrusiveReferenceController<UE::MediaCaptureData::FTextureCaptureFrame,1> *this)

{
  UE::MediaCaptureData::FTextureCaptureFrame::~FTextureCaptureFrame
            ((FTextureCaptureFrame *)&this->ObjectStorage);
  return;
}

