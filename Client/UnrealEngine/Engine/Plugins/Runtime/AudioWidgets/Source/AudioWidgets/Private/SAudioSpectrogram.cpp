// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 20

// SAudioSpectrogram @ 14d8b7b80

SAudioSpectrogram * __thiscall SAudioSpectrogram::SAudioSpectrogram(SAudioSpectrogram *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SAudioSpectrogram__6B_;
  (this->ContextMenuExtender).Object = (FExtender *)0x0;
  (this->ContextMenuExtender).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ViewMinFrequency).Value = 0.0;
  (this->ViewMinFrequency).bIsSet = false;
  *(undefined8 *)&(this->ViewMinFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ViewMinFrequency).Getter = 0;
  *(undefined8 *)&(this->ViewMinFrequency).Getter.field_0x8 = 0;
  (this->ViewMaxFrequency).Value = 0.0;
  (this->ViewMaxFrequency).bIsSet = false;
  *(undefined8 *)&(this->ViewMaxFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ViewMaxFrequency).Getter = 0;
  *(undefined8 *)&(this->ViewMaxFrequency).Getter.field_0x8 = 0;
  (this->ColorMapMinSoundLevel).Value = 0.0;
  (this->ColorMapMinSoundLevel).bIsSet = false;
  *(undefined8 *)&(this->ColorMapMinSoundLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ColorMapMinSoundLevel).Getter = 0;
  *(undefined8 *)&(this->ColorMapMinSoundLevel).Getter.field_0x8 = 0;
  (this->ColorMapMaxSoundLevel).Value = 0.0;
  (this->ColorMapMaxSoundLevel).bIsSet = false;
  *(undefined8 *)&(this->ColorMapMaxSoundLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ColorMapMaxSoundLevel).Getter = 0;
  *(undefined8 *)&(this->ColorMapMaxSoundLevel).Getter.field_0x8 = 0;
  (this->ColorMap).Value = BlackToWhite;
  (this->ColorMap).bIsSet = false;
  *(undefined8 *)&(this->ColorMap).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ColorMap).Getter = 0;
  *(undefined8 *)&(this->ColorMap).Getter.field_0x8 = 0;
  (this->FrequencyAxisScale).Value = Linear;
  (this->FrequencyAxisScale).bIsSet = false;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter = 0;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter.field_0x8 = 0;
  (this->FrequencyAxisPixelBucketMode).Value = Sample;
  (this->FrequencyAxisPixelBucketMode).bIsSet = false;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter = 0;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter.field_0x8 = 0;
  (this->Orientation).Value = Orient_Horizontal;
  (this->Orientation).bIsSet = false;
  *(undefined8 *)&(this->Orientation).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Orientation).Getter = 0;
  *(undefined8 *)&(this->Orientation).Getter.field_0x8 = 0;
  (this->bAllowContextMenu).Value = false;
  (this->bAllowContextMenu).bIsSet = false;
  *(undefined8 *)&(this->bAllowContextMenu).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bAllowContextMenu).Getter = 0;
  *(undefined8 *)&(this->bAllowContextMenu).Getter.field_0x8 = 0;
  (this->bFillBackground).Value = false;
  (this->bFillBackground).bIsSet = false;
  *(undefined8 *)&(this->bFillBackground).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bFillBackground).Getter = 0;
  *(undefined8 *)&(this->bFillBackground).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnContextMenuOpening = 0;
  *(undefined8 *)&(this->OnContextMenuOpening).field_0x8 = 0;
  *(undefined4 *)&(this->OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->OnFrequencyAxisPixelBucketModeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnFrequencyAxisScaleMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnColorMapMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnColorMapMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnColorMapMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnOrientationMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnOrientationMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnOrientationMenuEntryClicked).field_0x10 = 0;
  (this->SpectrogramViewport).Object = (FAudioSpectrogramViewport *)0x0;
  (this->SpectrogramViewport).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~SAudioSpectrogram @ 14d8c0600

void __thiscall SAudioSpectrogram::~SAudioSpectrogram(SAudioSpectrogram *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpectrogramViewport).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnOrientationMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnOrientationMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOrientationMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColorMapMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnColorMapMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnColorMapMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFrequencyAxisScaleMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFrequencyAxisScaleMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening);
  pvVar1 = *(void **)&(this->OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bFillBackground).Getter);
  pvVar1 = *(void **)&(this->bFillBackground).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bFillBackground).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bAllowContextMenu).Getter);
  pvVar1 = *(void **)&(this->bAllowContextMenu).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bAllowContextMenu).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Orientation).Getter);
  pvVar1 = *(void **)&(this->Orientation).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Orientation).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->FrequencyAxisPixelBucketMode).Getter);
  pvVar1 = *(void **)&(this->FrequencyAxisPixelBucketMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FrequencyAxisPixelBucketMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FrequencyAxisScale).Getter);
  pvVar1 = *(void **)&(this->FrequencyAxisScale).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FrequencyAxisScale).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorMap).Getter);
  pvVar1 = *(void **)&(this->ColorMap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ColorMap).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorMapMaxSoundLevel).Getter);
  pvVar1 = *(void **)&(this->ColorMapMaxSoundLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ColorMapMaxSoundLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorMapMinSoundLevel).Getter);
  pvVar1 = *(void **)&(this->ColorMapMinSoundLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ColorMapMinSoundLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewMaxFrequency).Getter);
  pvVar1 = *(void **)&(this->ViewMaxFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ViewMaxFrequency).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewMinFrequency).Getter);
  pvVar1 = *(void **)&(this->ViewMinFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ViewMinFrequency).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContextMenuExtender).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14d8c8670

void __thiscall `SAudioSpectrogram::BuildColorMapSubMenu'::__l4::<lambda_1>::operator()(void *this)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FDestructionSentinel local_48;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x340),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x350) != 0) && (*(longlong **)(lVar2 + 0x348) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x348) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c86bd;
    }
  }
  bVar4 = false;
LAB_14d8c86bd:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0x338) = local_30;
    *(undefined1 *)(lVar2 + 0x339) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x340),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  lVar2 = *(longlong *)this;
  uVar1 = *(undefined1 *)((longlong)this + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x440),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x450) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x448), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8c87d0

void __thiscall
`SAudioSpectrogram::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_1>::operator()
          (void *this)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FDestructionSentinel local_48;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x380),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x390) != 0) && (*(longlong **)(lVar2 + 0x388) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x388) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c881d;
    }
  }
  bVar4 = false;
LAB_14d8c881d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0x378) = local_30;
    *(undefined1 *)(lVar2 + 0x379) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x380),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  lVar2 = *(longlong *)this;
  uVar1 = *(undefined1 *)((longlong)this + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x410),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x420) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x418), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8c89d0

void __thiscall
`SAudioSpectrogram::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_1>::operator()(void *this)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FDestructionSentinel local_48;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x360),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x370) != 0) && (*(longlong **)(lVar2 + 0x368) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x368) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c8a1d;
    }
  }
  bVar4 = false;
LAB_14d8c8a1d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0x358) = local_30;
    *(undefined1 *)(lVar2 + 0x359) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x360),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  lVar2 = *(longlong *)this;
  uVar1 = *(undefined1 *)((longlong)this + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x428),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x438) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x430), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8c8bd0

void __thiscall
`SAudioSpectrogram::BuildOrientationSubMenu'::__l4::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FDestructionSentinel local_48;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x3a0),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x3b0) != 0) && (*(longlong **)(lVar2 + 0x3a8) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x3a8) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c8c1d;
    }
  }
  bVar4 = false;
LAB_14d8c8c1d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined4 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2c = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined4 *)(lVar2 + 0x398) = local_30;
    *(undefined1 *)(lVar2 + 0x39c) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x3a0),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  lVar2 = *(longlong *)this;
  uVar1 = *(undefined4 *)((longlong)this + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x458),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x468) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x460), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// AddContextMenuExtension @ 14d8d9e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FExtensionBase_const_,1> * __thiscall
SAudioSpectrogram::AddContextMenuExtension
          (SAudioSpectrogram *this,TSharedRef<FExtensionBase_const_,1> *__return_storage_ptr__,
          Position param_1,TSharedPtr<FUICommandList,1> *param_2,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_3)

{
  TSharedPtr<FExtender,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FExtensionBase_const_,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar1 = &this->ContextMenuExtender;
  if (pTVar1->Object == (FExtender *)0x0) {
    pTVar4 = ::operator_new(0x20);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6 = pTVar4 + 1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFExtender___00_SharedPointerInternals__6B_;
      pTVar4[1]._padding_ = 0;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedRef<FExtensionBase_const_,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar4;
      local_28 = pTVar6;
    }
    if (pTVar1 != (TSharedPtr<FExtender,1> *)&local_28) {
      pTVar1->Object = (FExtender *)pTVar6;
      local_28 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ContextMenuExtender).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pTVar1->Object == (FExtender *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FExtensionBase_const_,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  FExtender::AddMenuExtension
            (pTVar1->Object,__return_storage_ptr__,ContextMenuExtensionHook,param_1,param_2,param_3)
  ;
  return __return_storage_ptr__;
}

// AddFrame @ 14d8da160

void __thiscall
SAudioSpectrogram::AddFrame(SAudioSpectrogram *this,FAudioSpectrogramFrameData *param_1)

{
  int iVar1;
  FAudioSpectrogramViewport *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if ((this->SpectrogramViewport).Object == (FAudioSpectrogramViewport *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (this->SpectrogramViewport).Object;
  iVar1 = (this_00->RenderParams).NumRows;
  if (iVar1 != 0) {
    if ((this_00->History).AfterBack - (this_00->History).Front == iVar1) {
      TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
      PopFront(&this_00->History,1);
    }
    uVar5 = TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
            NormalizeCapacity(&this_00->History,
                              ((this_00->History).AfterBack - (this_00->History).Front) + 1);
    if ((this_00->History).IndexMask + 1 < uVar5) {
      TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
      Reallocate(&this_00->History,uVar5);
    }
    uVar5 = (this_00->History).AfterBack;
    pFVar2 = (this_00->History).AllocatorInstance.Data;
    (this_00->History).AfterBack = uVar5 + 1;
    FAudioSpectrogramViewport::FHistoryFrameData::FHistoryFrameData
              ((FHistoryFrameData *)
               (pFVar2 + (ulonglong)((this_00->History).IndexMask & uVar5) * 0x38),param_1,
               (this_00->RenderParams).FrequencyAxisPixelBucketMode);
    FAudioSpectrogramViewport::UpdateTextureData(this_00,false);
  }
  return;
}

// AddFrame @ 14d8da240

void __thiscall
SAudioSpectrogram::AddFrame
          (SAudioSpectrogram *this,FConstantQResults *param_1,float param_2,float param_3,
          EAudioSpectrumType param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FAudioSpectrogramFrameData local_48 [2];
  
  iVar1 = (param_1->SpectrumValues).ArrayNum;
  local_48[0].SpectrumValues.DataPtr = (float *)(param_1->SpectrumValues).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48[0].SpectrumType = param_4;
  local_48[0].SpectrumValues.ArrayNum = iVar1;
  local_48[0].MinFrequency = param_2;
  local_48[0].MaxFrequency = powf(__real_40000000,(float)(iVar1 + -1) / param_3);
  local_48[0].MaxFrequency = local_48[0].MaxFrequency * param_2;
  local_48[0].bLogSpacedFreqencies = true;
  AddFrame(this,local_48);
  return;
}

// AddFrame @ 14d8da300

void __thiscall
SAudioSpectrogram::AddFrame
          (SAudioSpectrogram *this,FSynesthesiaSpectrumResults *param_1,EAudioSpectrumType param_2,
          float param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uStack_54;
  FAudioSpectrogramFrameData local_48;
  
  uVar1 = (param_1->SpectrumValues).ArrayNum;
  pFVar2 = (param_1->SpectrumValues).AllocatorInstance.Data;
  if ((int)uVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = uVar1 - 1;
  if ((uVar6 & uVar1 - 2) != 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_850704391362052047>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSpectrogram.cpp"
                       ,0x31,"FMath::IsPowerOfTwo(SpectrumValues.Num() - 1)");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar4 = uVar1;
  if ((int)uVar6 < (int)uVar1) {
    uVar4 = uVar6;
  }
  uVar6 = 0;
  if (0 < (int)uVar4) {
    uVar6 = uVar4;
  }
  if ((int)uVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStack_54 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_48.SpectrumValues.DataPtr._4_4_ = uStack_54;
  local_48.SpectrumValues.DataPtr._0_4_ = SUB84(pFVar2,0);
  local_48.MinFrequency = 0.0;
  local_48.bLogSpacedFreqencies = false;
  local_48.MaxFrequency = (float)(int)(uVar6 - 1) * (param_3 / (float)(int)(uVar1 * 2 + -2));
  local_48.SpectrumValues.ArrayNum = uVar6;
  local_48.SpectrumType = param_2;
  AddFrame(this,&local_48);
  return;
}

// BuildColorMapSubMenu @ 14d8dccb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SAudioSpectrogram::BuildColorMapSubMenu(SAudioSpectrogram *this,FMenuBuilder *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  UEnum *pUVar10;
  bool bVar11;
  int iVar12;
  UPackage *pUVar13;
  TTuple<FName,__int64> *pTVar14;
  undefined8 *puVar15;
  TWeakPtr<SWidget,1> *pTVar16;
  ulong64 uVar17;
  FUIAction *pFVar18;
  FSlateIcon *pFVar19;
  FText *pFVar20;
  int iVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined4 uStackX_1c;
  undefined1 local_2e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  FName local_2c8;
  FName local_2c0;
  undefined1 local_2b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  ForAnyElementType FStack_298;
  ulonglong local_290;
  undefined1 local_288 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined1 local_258 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  FDelegateAllocation local_220;
  undefined1 local_210 [8];
  FDelegateAllocation local_208;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1f8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  TWeakPtr<SWidget,1> local_120;
  TWeakPtr<SWidget,1> local_110;
  longlong *local_100 [2];
  FText local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [32];
  TTuple<FName,__int64> local_78;
  FSlateIcon local_68;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  if (Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton == (UEnum *)0x0) {
    pUVar13 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioColorGradient,(UObject *)pUVar13,
                       L"EAudioColorGradient");
  }
  pUVar10 = Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton;
  iVar21 = 0;
  iVar12 = ((Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton)->Names).NumValues + -1;
  if (0 < iVar12) {
    pTVar22 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar12);
    pTVar23 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar12);
    do {
      if (((pUVar10->Names).NumValues <= iVar21) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Names.IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0xb2d,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar14 = UEnum::FNameData::operator[](&pUVar10->Names,&local_78,iVar21);
      local_2e8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_2e8[1] = false;
      local_2e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2d8.Data = (FScriptContainerElement *)0x0;
      uVar3 = pTVar14->field_0x8;
      local_2d0 = 0;
      FText::FText((FText *)local_258);
      local_258[0x10] = false;
      local_230 = 0;
      local_2c8.ComparisonIndex.Value = 0;
      local_2c8.Number = 0;
      local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_238.Data = (FScriptContainerElement *)0x0;
      local_2c0.ComparisonIndex.Value = 0;
      local_2c0.Number = 0;
      uStack_1d8 = CONCAT31(uStack_1d8._1_3_,uVar3);
      local_228 = (undefined1  [8])0x0;
      local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_220.DelegateSize = 0;
      local_1e0 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
                 (FWriteAccessScope *)&local_160);
      local_148 = &local_220;
      puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_220);
      if (puVar15 != (undefined8 *)0x0) {
        bVar7 = true;
        bVar6 = true;
        pTVar16 = TSharedFromThis<SWidget,1>::AsWeak
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_120);
        pSVar4 = pTVar16->Object;
        pTVar23 = (pTVar16->WeakReferenceCount).ReferenceController;
        (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar16->Object = (SWidget *)0x0;
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildColorMapSubMenu'::`4'::<lambda_2>_>
                    ::_vftable_;
        puVar15[3] = pSVar4;
        puVar15[4] = pTVar23;
        if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar15 + 5) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_1e0._4_4_;
        *(undefined4 *)(puVar15 + 6) = uStack_1d8;
        *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_1d4;
      }
      if ((bVar6) && (bVar6 = false, pTVar23 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar23->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar23->_padding_ + 8))(pTVar23,1);
        }
      }
      if ((bVar7) &&
         (bVar7 = false,
         local_120.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_120.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_120.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_120.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      local_1f8._16_8_ = 0;
      local_1f8._0_8_ = 0;
      local_1f8._8_8_ = 0;
      local_210 = (undefined1  [8])0x0;
      local_208.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_208.DelegateSize = 0;
      uStack_1c8 = CONCAT31(uStack_1c8._1_3_,uVar3);
      local_1d0 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
                 (FWriteAccessScope *)&local_140);
      local_128 = &local_208;
      puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_208);
      if (puVar15 != (undefined8 *)0x0) {
        bVar9 = true;
        bVar8 = true;
        pTVar16 = TSharedFromThis<SWidget,1>::AsWeak
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_110);
        pSVar4 = pTVar16->Object;
        pTVar22 = (pTVar16->WeakReferenceCount).ReferenceController;
        (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar16->Object = (SWidget *)0x0;
        *puVar15 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildColorMapSubMenu'::`4'::<lambda_1>_>
                    ::_vftable_;
        puVar15[3] = pSVar4;
        puVar15[4] = pTVar22;
        if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar15 + 5) = (undefined4)local_1d0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_1d0._4_4_;
        *(undefined4 *)(puVar15 + 6) = uStack_1c8;
        *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_1c4;
      }
      if ((bVar8) && (bVar8 = false, pTVar22 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar22->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar22->_padding_ + 8))(pTVar22,1);
        }
      }
      if ((bVar9) &&
         (bVar9 = false,
         local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_110.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_140.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
      }
      pFVar18 = FUIAction::FUIAction
                          ((FUIAction *)local_e0,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_210,
                           &local_1f8,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_228,
                           RepeatDisabled);
      pFVar19 = FSlateIcon::FSlateIcon(&local_68);
      pFVar20 = FText::FText(&local_f0);
      FText::FText((FText *)local_288,pFVar20);
      local_288[0x10] = true;
      local_260 = 0;
      local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_268.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (FText *)(**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,local_100,iVar21);
      FText::FText((FText *)local_2b8,pFVar20);
      local_2b8[0x10] = true;
      local_290 = 0;
      local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_298.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_2b8,
                 (TAttribute<FText> *)local_288,pFVar19,pFVar18,local_2c0,ToggleButton,local_2c8,
                 (TAttribute<FText> *)local_258,(TAttribute<EVisibility> *)local_2e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2a0,(FWriteAccessScope *)&local_1c0);
      if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_298.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
        local_290 = local_290 & 0xffffffff00000000;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      if (FStack_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_298.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
      if ((ITextData *)local_2b8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2b8._0_8_ + 0x10))();
      }
      if (local_100[0] != (longlong *)0x0) {
        (**(code **)(*local_100[0] + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_270,(FWriteAccessScope *)&local_1a8);
      if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_268.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
        local_260 = local_260 & 0xffffffff00000000;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      if (FStack_268.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_268.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
      if ((ITextData *)local_288._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_288._0_8_ + 0x10))();
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      if ((void *)local_98._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_98);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
      if ((void *)local_c8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
      if ((void *)local_e0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_e0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_240,(FWriteAccessScope *)&local_190);
      if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_238.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
        local_230 = local_230 & 0xffffffff00000000;
      }
      if (local_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
      }
      if (FStack_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_238.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
      if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2e0,(FWriteAccessScope *)&local_178);
      if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2d8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
        local_2d0 = local_2d0 & 0xffffffff00000000;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2d8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar12);
  }
  return;
}

// BuildDefaultContextMenu @ 14d8dd430

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SAudioSpectrogram::BuildDefaultContextMenu
          (SAudioSpectrogram *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FText *pFVar5;
  FSlateIcon *pFVar6;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar7;
  FDestructionSentinel local_3d8;
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  ForAnyElementType FStack_3b0;
  ulonglong local_3a8;
  undefined1 local_3a0 [16];
  FName FStack_390;
  FName local_388;
  undefined1 local_380 [24];
  undefined1 local_368 [8];
  ForAnyElementType FStack_360;
  ulonglong local_358;
  undefined1 local_350 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_338;
  ForAnyElementType FStack_330;
  ulonglong local_328;
  code *local_318;
  TReferenceControllerBase<1> *pTStack_310;
  bool local_308;
  TSharedPtr<FExtender,1> local_2f8;
  undefined1 local_2e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2d0;
  ForAnyElementType FStack_2c8;
  ulonglong local_2c0;
  FText local_2b8;
  undefined1 local_2a8 [16];
  undefined1 local_298 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_290;
  ForAnyElementType FStack_288;
  ulonglong local_280;
  undefined1 local_278 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined1 local_258 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  ForAnyElementType FStack_248;
  ulonglong local_240;
  undefined1 local_238 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_230;
  ForAnyElementType FStack_228;
  ulonglong local_220;
  int local_218;
  bool local_214;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  ForAnyElementType FStack_208;
  ulonglong local_200;
  undefined1 local_1f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1f0;
  ForAnyElementType FStack_1e8;
  ulonglong local_1e0;
  bool local_1d7;
  bool local_1d5;
  bool local_1d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  ForAnyElementType FStack_1c0;
  ulonglong local_1b8;
  FMenuBuilder local_1b0;
  
  pIVar4 = FAppStyle::Get();
  local_2f8.SharedReferenceCount.ReferenceController =
       (this->ContextMenuExtender).SharedReferenceCount.ReferenceController;
  local_2f8.Object = (this->ContextMenuExtender).Object;
  if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_318 = (code *)0x0;
  pTStack_310 = (TReferenceControllerBase<1> *)0x0;
  FMenuBuilder::FMenuBuilder
            (&local_1b0,true,(TSharedPtr<FUICommandList_const_,1> *)&local_318,&local_2f8,false,
             pIVar4,true,(FName)0x0,true);
  memset(local_298,0,200);
  local_218 = 0;
  local_280 = 0;
  local_260 = 0;
  local_240 = 0;
  local_220 = 0;
  local_200 = 0;
  local_1e0 = 0;
  local_1b8 = 0;
  local_388.ComparisonIndex.Value = 0;
  local_388.Number = 0;
  local_290.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_288.Data = (FScriptContainerElement *)0x0;
  local_278[0] = false;
  local_278[1] = false;
  local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_268.Data = (FScriptContainerElement *)0x0;
  local_258[0] = false;
  local_258[1] = false;
  local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_248.Data = (FScriptContainerElement *)0x0;
  local_238[0] = false;
  local_238[1] = false;
  local_230.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_228.Data = (FScriptContainerElement *)0x0;
  local_214 = false;
  local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_208.Data = (FScriptContainerElement *)0x0;
  local_1f8[0] = Preferred;
  local_1f8[1] = false;
  local_1f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1e8.Data = (FScriptContainerElement *)0x0;
  local_1d7 = false;
  local_1d5 = false;
  local_1d0 = false;
  local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1c0.Data = (FScriptContainerElement *)0x0;
  local_3a0._0_2_ = 0x19;
  local_3a0._8_4_ = 0;
  local_3a0._12_4_ = 0;
  FStack_390.ComparisonIndex.Value = 0;
  FStack_390.Number = 0;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_318,L"SAudioSpectrogram",L"DisplayOptions",L"Display Options")
  ;
  FText::FText((FText *)local_2e8,pFVar5);
  local_2e8[0x10] = true;
  local_2c0 = 0;
  local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2c8.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::BeginSection
            (&local_1b0,ContextMenuExtensionHook,(TAttribute<FText> *)local_2e8,
             (TAttribute<EVisibility> *)local_3a0,(TAttribute<FMenuEntryResizeParams> *)local_298);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d0,(FWriteAccessScope *)&local_3d8);
  if (((int)local_2c0 != 0) && (FStack_2c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c8,0,0,0x10);
    local_2c0 = local_2c0 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d0.AccessDetector);
  if ((FName)local_2e8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2e8._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_318 != (FUICommandList *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_318 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_3a0 + 8),
             (FWriteAccessScope *)&local_3d8);
  if ((local_388.ComparisonIndex.Value != 0) && (FStack_390 != (FName)0x0)) {
    (*(code *)**(undefined8 **)FStack_390)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_390,0,0,0x10);
    local_388 = (FName)((ulonglong)local_388 & 0xffffffff00000000);
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_390 != (FName)0x0) {
    FMemory::Free((void *)FStack_390);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_3a0 + 8));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_3d8);
  if (((int)local_1b8 != 0) && (FStack_1c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c0,0,0,0x10);
    local_1b8 = local_1b8 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1f0,(FWriteAccessScope *)&local_3d8);
  if (((int)local_1e0 != 0) && (FStack_1e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e8,0,0,0x10);
    local_1e0 = local_1e0 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_210,(FWriteAccessScope *)&local_3d8);
  if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_208.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
    local_200 = local_200 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_230,(FWriteAccessScope *)&local_3d8);
  if (((int)local_220 != 0) && (FStack_228.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_228.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_228,0,0,0x10);
    local_220 = local_220 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_228.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_230.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)&local_3d8);
  if (((int)local_240 != 0) && (FStack_248.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_248.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_248,0,0,0x10);
    local_240 = local_240 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_248.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_270,(FWriteAccessScope *)&local_3d8);
  if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_268.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
    local_260 = local_260 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_268.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_290,(FWriteAccessScope *)&local_3d8);
  if (((int)local_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_288.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10);
    local_280 = local_280 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_288.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_290.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnFrequencyAxisPixelBucketModeMenuEntryClicked,(FReadAccessScope *)local_3a0);
  if ((*(int *)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8,
     plVar1 == (longlong *)0x0)) {
LAB_14d8ddb01:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_3a0);
    bVar3 = TAttribute<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode>::IsBound
                      (&this->FrequencyAxisPixelBucketMode);
    if (!bVar3) goto LAB_14d8ddb1e;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 == '\0') goto LAB_14d8ddb01;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_3a0);
LAB_14d8ddb1e:
    local_3c0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_3c0[1] = false;
    local_3a8 = 0;
    local_3b8 = (undefined1  [8])0x0;
    FStack_3b0.Data = (FScriptContainerElement *)0x0;
    pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_3a0);
    local_2f8.SharedReferenceCount.ReferenceController =
         local_2f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_2f8.Object = (FExtender *)BuildFrequencyAxisPixelBucketModeSubMenu;
    local_318 = BuildFrequencyAxisPixelBucketModeSubMenu;
    pTStack_310 = local_2f8.SharedReferenceCount.ReferenceController;
    pTVar7 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
             CreateSP<SAudioSpectrogram>
                       ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                        &local_3d8,this,(pmf_2e14a72c *)&local_318);
    pFVar5 = FText::FText((FText *)local_2a8);
    FText::FText((FText *)local_380,pFVar5);
    local_380[0x10] = true;
    local_358 = 0;
    local_368 = (undefined1  [8])0x0;
    FStack_360.Data = (FScriptContainerElement *)0x0;
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_2b8,L"SAudioSpectrogram",L"FrequencyAxisPixelBucketMode",
                        L"Pixel Plot Mode");
    FText::FText((FText *)local_2e8,pFVar5);
    local_2e8[0x10] = true;
    local_2c0 = 0;
    local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_2c8.Data = (FScriptContainerElement *)0x0;
    FMenuBuilder::AddSubMenu
              (&local_1b0,(TAttribute<FText> *)local_2e8,(TAttribute<FText> *)local_380,pTVar7,false
               ,pFVar6,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_3c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2d0,(FWriteAccessScope *)&local_318);
    if (((int)local_2c0 != 0) && (FStack_2c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_2c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c8,0,0,0x10);
      local_2c0 = local_2c0 & 0xffffffff00000000;
    }
    if (local_308 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_310,(FDestructionSentinel *)&local_318);
    }
    if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d0.AccessDetector);
    if ((FName)local_2e8._0_8_ != (FName)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2e8._0_8_ + 0x10))();
    }
    if (local_2b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_368,
               (FWriteAccessScope *)&local_318);
    if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_360.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
      local_358 = local_358 & 0xffffffff00000000;
    }
    if (local_308 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_310,(FDestructionSentinel *)&local_318);
    }
    if (FStack_360.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_360.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_368);
    if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 0x10))();
    }
    if ((ITextData *)local_2a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2a8._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_3d8,
               (FWriteAccessScope *)&local_318);
    if ((local_3d8._16_4_ != 0) && (&(local_3d8.Accessor)->State != (atomic<unsigned___int64> *)0x0)
       ) {
      (**(code **)(local_3d8.Accessor)->State)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_3d8.Accessor,0,0,0x10);
      local_3d8._16_4_ = 0;
    }
    if (local_308 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_310,(FDestructionSentinel *)&local_318);
    }
    if (&(local_3d8.Accessor)->State != (atomic<unsigned___int64> *)0x0) {
      FMemory::Free(local_3d8.Accessor);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_3d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b8);
    if (FStack_3b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnFrequencyAxisScaleMenuEntryClicked,(FReadAccessScope *)local_3a0);
  if ((*(int *)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x8,
     plVar1 == (longlong *)0x0)) {
LAB_14d8dde08:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_3a0);
    bVar3 = TAttribute<enum_EAudioSpectrogramFrequencyAxisScale>::IsBound(&this->FrequencyAxisScale)
    ;
    if (!bVar3) goto LAB_14d8dde25;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 == '\0') goto LAB_14d8dde08;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_3a0);
LAB_14d8dde25:
    local_3c0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_3c0[1] = false;
    local_3a8 = 0;
    local_3b8 = (undefined1  [8])0x0;
    FStack_3b0.Data = (FScriptContainerElement *)0x0;
    pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_2e8);
    local_2f8.SharedReferenceCount.ReferenceController =
         local_2f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_2f8.Object = (FExtender *)BuildFrequencyAxisScaleSubMenu;
    local_2a8._0_8_ = BuildFrequencyAxisScaleSubMenu;
    local_2a8._8_8_ = local_2f8.SharedReferenceCount.ReferenceController;
    pTVar7 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
             CreateSP<SAudioSpectrogram>
                       ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                        local_3a0,this,(pmf_2e14a72c *)local_2a8);
    pFVar5 = FText::FText((FText *)&local_318);
    FText::FText((FText *)local_350,pFVar5);
    local_350[0x10] = true;
    local_328 = 0;
    local_338.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_330.Data = (FScriptContainerElement *)0x0;
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_2b8,L"SAudioSpectrogram",L"FrequencyAxisScale",L"Frequency Scale");
    FText::FText((FText *)local_380,pFVar5);
    local_380[0x10] = true;
    local_358 = 0;
    local_368 = (undefined1  [8])0x0;
    FStack_360.Data = (FScriptContainerElement *)0x0;
    FMenuBuilder::AddSubMenu
              (&local_1b0,(TAttribute<FText> *)local_380,(TAttribute<FText> *)local_350,pTVar7,false
               ,pFVar6,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_3c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_368,
               (FWriteAccessScope *)&local_3d8);
    if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_360.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
      local_358 = local_358 & 0xffffffff00000000;
    }
    if (local_3d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
    }
    if (FStack_360.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_360.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_368);
    if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 0x10))();
    }
    if (local_2b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_338,(FWriteAccessScope *)&local_3d8);
    if (((int)local_328 != 0) && (FStack_330.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_330.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_330,0,0,0x10);
      local_328 = local_328 & 0xffffffff00000000;
    }
    if (local_3d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
    }
    if (FStack_330.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_330.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_338.AccessDetector);
    if ((ITextData *)local_350._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_350._0_8_ + 0x10))();
    }
    if ((FUICommandList *)local_318 != (FUICommandList *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_318 + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a0);
    if ((FName)local_3a0._8_8_ != (FName)0x0) {
      FMemory::Free((void *)local_3a0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b8,
               (FWriteAccessScope *)&local_3d8);
    if (((int)local_3a8 != 0) && (FStack_3b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_3b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b0,0,0,0x10);
      local_3a8 = local_3a8 & 0xffffffff00000000;
    }
    if (local_3d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
    }
    if (FStack_3b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnColorMapMenuEntryClicked,(FReadAccessScope *)local_3a0);
  if ((*(int *)&(this->OnColorMapMenuEntryClicked).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->OnColorMapMenuEntryClicked).field_0x8,
     plVar1 == (longlong *)0x0)) {
LAB_14d8de115:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_3a0);
    bVar3 = TAttribute<enum_EAudioColorGradient>::IsBound(&this->ColorMap);
    if (!bVar3) goto LAB_14d8de132;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 == '\0') goto LAB_14d8de115;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_3a0);
LAB_14d8de132:
    local_3c0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_3c0[1] = false;
    local_3a8 = 0;
    local_3b8 = (undefined1  [8])0x0;
    FStack_3b0.Data = (FScriptContainerElement *)0x0;
    pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_2e8);
    local_2f8.SharedReferenceCount.ReferenceController =
         local_2f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_2f8.Object = (FExtender *)BuildColorMapSubMenu;
    local_2a8._0_8_ = BuildColorMapSubMenu;
    local_2a8._8_8_ = local_2f8.SharedReferenceCount.ReferenceController;
    pTVar7 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
             CreateSP<SAudioSpectrogram>
                       ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                        &local_3d8,this,(pmf_2e14a72c *)local_2a8);
    pFVar5 = FText::FText((FText *)&local_318);
    FText::FText((FText *)local_380,pFVar5);
    local_380[0x10] = true;
    local_358 = 0;
    local_368 = (undefined1  [8])0x0;
    FStack_360.Data = (FScriptContainerElement *)0x0;
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_2b8,L"SAudioSpectrogram",L"ColorMap",L"Color Map");
    FText::FText((FText *)local_350,pFVar5);
    local_350[0x10] = true;
    local_328 = 0;
    local_338.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_330.Data = (FScriptContainerElement *)0x0;
    FMenuBuilder::AddSubMenu
              (&local_1b0,(TAttribute<FText> *)local_350,(TAttribute<FText> *)local_380,pTVar7,false
               ,pFVar6,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_3c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_338,(FWriteAccessScope *)local_3a0);
    if (((int)local_328 != 0) && (FStack_330.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_330.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_330,0,0,0x10);
      local_328 = local_328 & 0xffffffff00000000;
    }
    if (FStack_390.ComparisonIndex.Value._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_3a0._8_8_,(FDestructionSentinel *)local_3a0);
    }
    if (FStack_330.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_330.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_338.AccessDetector);
    if ((ITextData *)local_350._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_350._0_8_ + 0x10))();
    }
    if (local_2b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_368,
               (FWriteAccessScope *)local_3a0);
    if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_360.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
      local_358 = local_358 & 0xffffffff00000000;
    }
    if (FStack_390.ComparisonIndex.Value._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_3a0._8_8_,(FDestructionSentinel *)local_3a0);
    }
    if (FStack_360.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_360.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_368);
    if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 0x10))();
    }
    if ((FUICommandList *)local_318 != (FUICommandList *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_318 + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3d8);
    if (&(local_3d8.Accessor)->State != (atomic<unsigned___int64> *)0x0) {
      FMemory::Free(local_3d8.Accessor);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_3d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b8,
               (FWriteAccessScope *)local_3a0);
    if (((int)local_3a8 != 0) && (FStack_3b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_3b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b0,0,0,0x10);
      local_3a8 = local_3a8 & 0xffffffff00000000;
    }
    if (FStack_390.ComparisonIndex.Value._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_3a0._8_8_,(FDestructionSentinel *)local_3a0);
    }
    if (FStack_3b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnOrientationMenuEntryClicked,(FReadAccessScope *)local_3a0);
  if ((*(int *)&(this->OnOrientationMenuEntryClicked).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->OnOrientationMenuEntryClicked).field_0x8,
     plVar1 == (longlong *)0x0)) {
LAB_14d8de41a:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_3a0);
    bVar3 = TAttribute<enum_EOrientation>::IsBound(&this->Orientation);
    if (bVar3) goto LAB_14d8de69c;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 == '\0') goto LAB_14d8de41a;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_3a0);
  }
  local_3c0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3c0[1] = false;
  local_3a8 = 0;
  local_3b8 = (undefined1  [8])0x0;
  FStack_3b0.Data = (FScriptContainerElement *)0x0;
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_2e8);
  local_2f8.SharedReferenceCount.ReferenceController =
       local_2f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2f8.Object = (FExtender *)BuildOrientationSubMenu;
  local_2a8._0_8_ = BuildOrientationSubMenu;
  local_2a8._8_8_ = local_2f8.SharedReferenceCount.ReferenceController;
  pTVar7 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<SAudioSpectrogram>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      &local_3d8,this,(pmf_2e14a72c *)local_2a8);
  pFVar5 = FText::FText((FText *)&local_318);
  FText::FText((FText *)local_380,pFVar5);
  local_380[0x10] = true;
  local_358 = 0;
  local_368 = (undefined1  [8])0x0;
  FStack_360.Data = (FScriptContainerElement *)0x0;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_2b8,L"SAudioSpectrogram",L"Orientation",L"Orientation");
  FText::FText((FText *)local_350,pFVar5);
  local_350[0x10] = true;
  local_328 = 0;
  local_338.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_330.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (&local_1b0,(TAttribute<FText> *)local_350,(TAttribute<FText> *)local_380,pTVar7,false,
             pFVar6,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_3c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_338,(FWriteAccessScope *)local_3a0);
  if (((int)local_328 != 0) && (FStack_330.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_330.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_330,0,0,0x10);
    local_328 = local_328 & 0xffffffff00000000;
  }
  if (FStack_390.ComparisonIndex.Value._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3a0._8_8_,(FDestructionSentinel *)local_3a0);
  }
  if (FStack_330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_330.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_338.AccessDetector);
  if ((ITextData *)local_350._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_350._0_8_ + 0x10))();
  }
  if (local_2b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_368);
  if (FStack_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_368);
  if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_318 != (FUICommandList *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_318 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3d8);
  if (&(local_3d8.Accessor)->State != (atomic<unsigned___int64> *)0x0) {
    FMemory::Free(local_3d8.Accessor);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_3d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b8,
             (FWriteAccessScope *)local_3a0);
  if (((int)local_3a8 != 0) && (FStack_3b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b0,0,0,0x10);
    local_3a8 = local_3a8 & 0xffffffff00000000;
  }
  if (FStack_390.ComparisonIndex.Value._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3a0._8_8_,(FDestructionSentinel *)local_3a0);
  }
  if (FStack_3b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b8);
LAB_14d8de69c:
  FMenuBuilder::EndSection(&local_1b0);
  FMenuBuilder::MakeWidget
            (&local_1b0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_1b0);
  return __return_storage_ptr__;
}

// BuildFrequencyAxisPixelBucketModeSubMenu @ 14d8e1c70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SAudioSpectrogram::BuildFrequencyAxisPixelBucketModeSubMenu
          (SAudioSpectrogram *this,FMenuBuilder *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  UEnum *pUVar10;
  bool bVar11;
  int iVar12;
  UPackage *pUVar13;
  TTuple<FName,__int64> *pTVar14;
  undefined8 *puVar15;
  TWeakPtr<SWidget,1> *pTVar16;
  ulong64 uVar17;
  FUIAction *pFVar18;
  FSlateIcon *pFVar19;
  FText *pFVar20;
  int iVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined4 uStackX_1c;
  undefined1 local_2e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  FName local_2c8;
  FName local_2c0;
  undefined1 local_2b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  ForAnyElementType FStack_298;
  ulonglong local_290;
  undefined1 local_288 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined1 local_258 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  FDelegateAllocation local_220;
  undefined1 local_210 [8];
  FDelegateAllocation local_208;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1f8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  TWeakPtr<SWidget,1> local_120;
  TWeakPtr<SWidget,1> local_110;
  longlong *local_100 [2];
  FText local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [32];
  TTuple<FName,__int64> local_78;
  FSlateIcon local_68;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  if (Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar13 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode,
                       (UObject *)pUVar13,L"EAudioSpectrogramFrequencyAxisPixelBucketMode");
  }
  pUVar10 = Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton;
  iVar21 = 0;
  iVar12 = ((Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton)
           ->Names).NumValues + -1;
  if (0 < iVar12) {
    pTVar22 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar12);
    pTVar23 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar12);
    do {
      if (((pUVar10->Names).NumValues <= iVar21) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Names.IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0xb2d,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar14 = UEnum::FNameData::operator[](&pUVar10->Names,&local_78,iVar21);
      local_2e8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_2e8[1] = false;
      local_2e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2d8.Data = (FScriptContainerElement *)0x0;
      uVar3 = pTVar14->field_0x8;
      local_2d0 = 0;
      FText::FText((FText *)local_258);
      local_258[0x10] = false;
      local_230 = 0;
      local_2c8.ComparisonIndex.Value = 0;
      local_2c8.Number = 0;
      local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_238.Data = (FScriptContainerElement *)0x0;
      local_2c0.ComparisonIndex.Value = 0;
      local_2c0.Number = 0;
      uStack_1d8 = CONCAT31(uStack_1d8._1_3_,uVar3);
      local_228 = (undefined1  [8])0x0;
      local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_220.DelegateSize = 0;
      local_1e0 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
                 (FWriteAccessScope *)&local_160);
      local_148 = &local_220;
      puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_220);
      if (puVar15 != (undefined8 *)0x0) {
        bVar7 = true;
        bVar6 = true;
        pTVar16 = TSharedFromThis<SWidget,1>::AsWeak
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_120);
        pSVar4 = pTVar16->Object;
        pTVar23 = (pTVar16->WeakReferenceCount).ReferenceController;
        (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar16->Object = (SWidget *)0x0;
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildFrequencyAxisPixelBucketModeSubMenu'::`4'::<lambda_2>_>
                    ::_vftable_;
        puVar15[3] = pSVar4;
        puVar15[4] = pTVar23;
        if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar15 + 5) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_1e0._4_4_;
        *(undefined4 *)(puVar15 + 6) = uStack_1d8;
        *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_1d4;
      }
      if ((bVar6) && (bVar6 = false, pTVar23 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar23->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar23->_padding_ + 8))(pTVar23,1);
        }
      }
      if ((bVar7) &&
         (bVar7 = false,
         local_120.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_120.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_120.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_120.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      local_1f8._16_8_ = 0;
      local_1f8._0_8_ = 0;
      local_1f8._8_8_ = 0;
      local_210 = (undefined1  [8])0x0;
      local_208.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_208.DelegateSize = 0;
      uStack_1c8 = CONCAT31(uStack_1c8._1_3_,uVar3);
      local_1d0 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
                 (FWriteAccessScope *)&local_140);
      local_128 = &local_208;
      puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_208);
      if (puVar15 != (undefined8 *)0x0) {
        bVar9 = true;
        bVar8 = true;
        pTVar16 = TSharedFromThis<SWidget,1>::AsWeak
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_110);
        pSVar4 = pTVar16->Object;
        pTVar22 = (pTVar16->WeakReferenceCount).ReferenceController;
        (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar16->Object = (SWidget *)0x0;
        *puVar15 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildFrequencyAxisPixelBucketModeSubMenu'::`4'::<lambda_1>_>
                    ::_vftable_;
        puVar15[3] = pSVar4;
        puVar15[4] = pTVar22;
        if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar15 + 5) = (undefined4)local_1d0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_1d0._4_4_;
        *(undefined4 *)(puVar15 + 6) = uStack_1c8;
        *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_1c4;
      }
      if ((bVar8) && (bVar8 = false, pTVar22 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar22->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar22->_padding_ + 8))(pTVar22,1);
        }
      }
      if ((bVar9) &&
         (bVar9 = false,
         local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_110.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_140.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
      }
      pFVar18 = FUIAction::FUIAction
                          ((FUIAction *)local_e0,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_210,
                           &local_1f8,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_228,
                           RepeatDisabled);
      pFVar19 = FSlateIcon::FSlateIcon(&local_68);
      pFVar20 = FText::FText(&local_f0);
      FText::FText((FText *)local_288,pFVar20);
      local_288[0x10] = true;
      local_260 = 0;
      local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_268.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (FText *)(**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,local_100,iVar21);
      FText::FText((FText *)local_2b8,pFVar20);
      local_2b8[0x10] = true;
      local_290 = 0;
      local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_298.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_2b8,
                 (TAttribute<FText> *)local_288,pFVar19,pFVar18,local_2c0,ToggleButton,local_2c8,
                 (TAttribute<FText> *)local_258,(TAttribute<EVisibility> *)local_2e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2a0,(FWriteAccessScope *)&local_1c0);
      if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_298.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
        local_290 = local_290 & 0xffffffff00000000;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      if (FStack_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_298.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
      if ((ITextData *)local_2b8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2b8._0_8_ + 0x10))();
      }
      if (local_100[0] != (longlong *)0x0) {
        (**(code **)(*local_100[0] + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_270,(FWriteAccessScope *)&local_1a8);
      if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_268.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
        local_260 = local_260 & 0xffffffff00000000;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      if (FStack_268.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_268.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
      if ((ITextData *)local_288._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_288._0_8_ + 0x10))();
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      if ((void *)local_98._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_98);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
      if ((void *)local_c8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
      if ((void *)local_e0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_e0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_240,(FWriteAccessScope *)&local_190);
      if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_238.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
        local_230 = local_230 & 0xffffffff00000000;
      }
      if (local_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
      }
      if (FStack_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_238.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
      if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2e0,(FWriteAccessScope *)&local_178);
      if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2d8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
        local_2d0 = local_2d0 & 0xffffffff00000000;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2d8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar12);
  }
  return;
}

// BuildFrequencyAxisScaleSubMenu @ 14d8e2940

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SAudioSpectrogram::BuildFrequencyAxisScaleSubMenu(SAudioSpectrogram *this,FMenuBuilder *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  UEnum *pUVar10;
  bool bVar11;
  int iVar12;
  UPackage *pUVar13;
  TTuple<FName,__int64> *pTVar14;
  undefined8 *puVar15;
  TWeakPtr<SWidget,1> *pTVar16;
  ulong64 uVar17;
  FUIAction *pFVar18;
  FSlateIcon *pFVar19;
  FText *pFVar20;
  int iVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined4 uStackX_1c;
  undefined1 local_2e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  FName local_2c8;
  FName local_2c0;
  undefined1 local_2b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  ForAnyElementType FStack_298;
  ulonglong local_290;
  undefined1 local_288 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined1 local_258 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  FDelegateAllocation local_220;
  undefined1 local_210 [8];
  FDelegateAllocation local_208;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1f8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  TWeakPtr<SWidget,1> local_120;
  TWeakPtr<SWidget,1> local_110;
  longlong *local_100 [2];
  FText local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [32];
  TTuple<FName,__int64> local_78;
  FSlateIcon local_68;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  if (Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton == (UEnum *)0x0)
  {
    pUVar13 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale,
                       (UObject *)pUVar13,L"EAudioSpectrogramFrequencyAxisScale");
  }
  pUVar10 = Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton;
  iVar21 = 0;
  iVar12 = ((Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton)->Names).
           NumValues + -1;
  if (0 < iVar12) {
    pTVar22 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar12);
    pTVar23 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar12);
    do {
      if (((pUVar10->Names).NumValues <= iVar21) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Names.IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0xb2d,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar14 = UEnum::FNameData::operator[](&pUVar10->Names,&local_78,iVar21);
      local_2e8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_2e8[1] = false;
      local_2e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2d8.Data = (FScriptContainerElement *)0x0;
      uVar3 = pTVar14->field_0x8;
      local_2d0 = 0;
      FText::FText((FText *)local_258);
      local_258[0x10] = false;
      local_230 = 0;
      local_2c8.ComparisonIndex.Value = 0;
      local_2c8.Number = 0;
      local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_238.Data = (FScriptContainerElement *)0x0;
      local_2c0.ComparisonIndex.Value = 0;
      local_2c0.Number = 0;
      uStack_1d8 = CONCAT31(uStack_1d8._1_3_,uVar3);
      local_228 = (undefined1  [8])0x0;
      local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_220.DelegateSize = 0;
      local_1e0 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
                 (FWriteAccessScope *)&local_160);
      local_148 = &local_220;
      puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_220);
      if (puVar15 != (undefined8 *)0x0) {
        bVar7 = true;
        bVar6 = true;
        pTVar16 = TSharedFromThis<SWidget,1>::AsWeak
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_120);
        pSVar4 = pTVar16->Object;
        pTVar23 = (pTVar16->WeakReferenceCount).ReferenceController;
        (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar16->Object = (SWidget *)0x0;
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildFrequencyAxisScaleSubMenu'::`4'::<lambda_2>_>
                    ::_vftable_;
        puVar15[3] = pSVar4;
        puVar15[4] = pTVar23;
        if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar15 + 5) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_1e0._4_4_;
        *(undefined4 *)(puVar15 + 6) = uStack_1d8;
        *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_1d4;
      }
      if ((bVar6) && (bVar6 = false, pTVar23 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar23->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar23->_padding_ + 8))(pTVar23,1);
        }
      }
      if ((bVar7) &&
         (bVar7 = false,
         local_120.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_120.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_120.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_120.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      local_1f8._16_8_ = 0;
      local_1f8._0_8_ = 0;
      local_1f8._8_8_ = 0;
      local_210 = (undefined1  [8])0x0;
      local_208.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_208.DelegateSize = 0;
      uStack_1c8 = CONCAT31(uStack_1c8._1_3_,uVar3);
      local_1d0 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
                 (FWriteAccessScope *)&local_140);
      local_128 = &local_208;
      puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_208);
      if (puVar15 != (undefined8 *)0x0) {
        bVar9 = true;
        bVar8 = true;
        pTVar16 = TSharedFromThis<SWidget,1>::AsWeak
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_110);
        pSVar4 = pTVar16->Object;
        pTVar22 = (pTVar16->WeakReferenceCount).ReferenceController;
        (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar16->Object = (SWidget *)0x0;
        *puVar15 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildFrequencyAxisScaleSubMenu'::`4'::<lambda_1>_>
                    ::_vftable_;
        puVar15[3] = pSVar4;
        puVar15[4] = pTVar22;
        if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar15 + 5) = (undefined4)local_1d0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_1d0._4_4_;
        *(undefined4 *)(puVar15 + 6) = uStack_1c8;
        *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_1c4;
      }
      if ((bVar8) && (bVar8 = false, pTVar22 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar22->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar22->_padding_ + 8))(pTVar22,1);
        }
      }
      if ((bVar9) &&
         (bVar9 = false,
         local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_110.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_140.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
      }
      pFVar18 = FUIAction::FUIAction
                          ((FUIAction *)local_e0,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_210,
                           &local_1f8,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_228,
                           RepeatDisabled);
      pFVar19 = FSlateIcon::FSlateIcon(&local_68);
      pFVar20 = FText::FText(&local_f0);
      FText::FText((FText *)local_288,pFVar20);
      local_288[0x10] = true;
      local_260 = 0;
      local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_268.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (FText *)(**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,local_100,iVar21);
      FText::FText((FText *)local_2b8,pFVar20);
      local_2b8[0x10] = true;
      local_290 = 0;
      local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_298.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_2b8,
                 (TAttribute<FText> *)local_288,pFVar19,pFVar18,local_2c0,ToggleButton,local_2c8,
                 (TAttribute<FText> *)local_258,(TAttribute<EVisibility> *)local_2e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2a0,(FWriteAccessScope *)&local_1c0);
      if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_298.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
        local_290 = local_290 & 0xffffffff00000000;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      if (FStack_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_298.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
      if ((ITextData *)local_2b8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2b8._0_8_ + 0x10))();
      }
      if (local_100[0] != (longlong *)0x0) {
        (**(code **)(*local_100[0] + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_270,(FWriteAccessScope *)&local_1a8);
      if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_268.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
        local_260 = local_260 & 0xffffffff00000000;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      if (FStack_268.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_268.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
      if ((ITextData *)local_288._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_288._0_8_ + 0x10))();
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      if ((void *)local_98._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_98);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
      if ((void *)local_c8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
      if ((void *)local_e0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_e0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_240,(FWriteAccessScope *)&local_190);
      if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_238.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
        local_230 = local_230 & 0xffffffff00000000;
      }
      if (local_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
      }
      if (FStack_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_238.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
      if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2e0,(FWriteAccessScope *)&local_178);
      if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2d8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
        local_2d0 = local_2d0 & 0xffffffff00000000;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2d8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar12);
  }
  return;
}

// BuildOrientationSubMenu @ 14d8e3610

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SAudioSpectrogram::BuildOrientationSubMenu(SAudioSpectrogram *this,FMenuBuilder *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined4 uVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UEnum *pUVar12;
  TTuple<FName,__int64> *pTVar13;
  undefined8 *puVar14;
  TWeakPtr<SWidget,1> *pTVar15;
  ulong64 uVar16;
  FUIAction *pFVar17;
  FSlateIcon *pFVar18;
  FText *pFVar19;
  int iVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined4 uStackX_1c;
  undefined1 local_2e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  FName local_2c8;
  undefined1 local_2c0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a8;
  ForAnyElementType FStack_2a0;
  ulonglong local_298;
  undefined1 local_290 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_278;
  ForAnyElementType FStack_270;
  ulonglong local_268;
  undefined1 local_260 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_248;
  ForAnyElementType FStack_240;
  ulonglong local_238;
  undefined1 local_230 [8];
  FDelegateAllocation local_228;
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  UEnum *local_200;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1f8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  TWeakPtr<SWidget,1> local_120;
  TWeakPtr<SWidget,1> local_110;
  longlong *local_100 [2];
  FText local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [32];
  TTuple<FName,__int64> local_78;
  FSlateIcon local_68;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  pUVar12 = StaticEnum<enum_EOrientation>();
  iVar20 = 0;
  iVar11 = (pUVar12->Names).NumValues + -1;
  if (0 < iVar11) {
    pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar11);
    pTVar22 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar11);
    local_200 = pUVar12;
    do {
      if (((pUVar12->Names).NumValues <= iVar20) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Names.IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0xb2d,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar13 = UEnum::FNameData::operator[](&pUVar12->Names,&local_78,iVar20);
      local_2e8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_2e8[1] = false;
      local_2e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2d8.Data = (FScriptContainerElement *)0x0;
      uVar3 = *(undefined4 *)&pTVar13->field_0x8;
      local_2d0 = 0;
      FText::FText((FText *)local_260);
      local_260[0x10] = false;
      local_238 = 0;
      local_248.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_240.Data = (FScriptContainerElement *)0x0;
      local_2c8.ComparisonIndex.Value = 0;
      local_2c8.Number = 0;
      local_230 = (undefined1  [8])0x0;
      local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_228.DelegateSize = 0;
      local_1e0 = this;
      uStack_1d8 = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
                 (FWriteAccessScope *)&local_160);
      local_148 = &local_228;
      puVar14 = UE::Core::Private::DelegateAllocate(0x38,&local_228);
      if (puVar14 != (undefined8 *)0x0) {
        bVar7 = true;
        bVar6 = true;
        pTVar15 = TSharedFromThis<SWidget,1>::AsWeak
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_120);
        pSVar4 = pTVar15->Object;
        pTVar22 = (pTVar15->WeakReferenceCount).ReferenceController;
        (pTVar15->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar15->Object = (SWidget *)0x0;
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar16 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar16;
        *puVar14 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildOrientationSubMenu'::`4'::<lambda_2>_>
                    ::_vftable_;
        puVar14[3] = pSVar4;
        puVar14[4] = pTVar22;
        if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar14 + 5) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = local_1e0._4_4_;
        *(undefined4 *)(puVar14 + 6) = uStack_1d8;
        *(undefined4 *)((longlong)puVar14 + 0x34) = uStack_1d4;
      }
      if ((bVar6) && (bVar6 = false, pTVar22 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar22->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar22->_padding_ + 8))(pTVar22,1);
        }
      }
      if ((bVar7) &&
         (bVar7 = false,
         local_120.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_120.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_120.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_120.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      local_1f8._16_8_ = 0;
      local_1f8._0_8_ = 0;
      local_1f8._8_8_ = 0;
      local_218 = (undefined1  [8])0x0;
      local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_210.DelegateSize = 0;
      local_1d0 = this;
      uStack_1c8 = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                 (FWriteAccessScope *)&local_140);
      local_128 = &local_210;
      puVar14 = UE::Core::Private::DelegateAllocate(0x38,&local_210);
      if (puVar14 != (undefined8 *)0x0) {
        bVar9 = true;
        bVar8 = true;
        pTVar15 = TSharedFromThis<SWidget,1>::AsWeak
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_110);
        pSVar4 = pTVar15->Object;
        pTVar21 = (pTVar15->WeakReferenceCount).ReferenceController;
        (pTVar15->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar15->Object = (SWidget *)0x0;
        *puVar14 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar16 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar16;
        *puVar14 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildOrientationSubMenu'::`4'::<lambda_1>_>
                    ::_vftable_;
        puVar14[3] = pSVar4;
        puVar14[4] = pTVar21;
        if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar14 + 5) = (undefined4)local_1d0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = local_1d0._4_4_;
        *(undefined4 *)(puVar14 + 6) = uStack_1c8;
        *(undefined4 *)((longlong)puVar14 + 0x34) = uStack_1c4;
      }
      if ((bVar8) && (bVar8 = false, pTVar21 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar21->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar21->_padding_ + 8))(pTVar21,1);
        }
      }
      if ((bVar9) &&
         (bVar9 = false,
         local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_110.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_140.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
      }
      pFVar17 = FUIAction::FUIAction
                          ((FUIAction *)local_e0,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_218,
                           &local_1f8,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_230,
                           RepeatDisabled);
      pFVar18 = FSlateIcon::FSlateIcon(&local_68);
      pFVar19 = FText::FText(&local_f0);
      FText::FText((FText *)local_290,pFVar19);
      pUVar12 = local_200;
      local_290[0x10] = true;
      local_268 = 0;
      local_278.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_270.Data = (FScriptContainerElement *)0x0;
      pFVar19 = (FText *)(**(code **)(local_200->_padding_ + 0x2c0))(local_200,local_100,iVar20);
      FText::FText((FText *)local_2c0,pFVar19);
      local_2c0[0x10] = true;
      local_298 = 0;
      local_2a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2a0.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_2c0,
                 (TAttribute<FText> *)local_290,pFVar18,pFVar17,local_2c8,ToggleButton,(FName)0x0,
                 (TAttribute<FText> *)local_260,(TAttribute<EVisibility> *)local_2e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2a8,(FWriteAccessScope *)&local_1c0);
      if (((int)local_298 != 0) && (FStack_2a0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2a0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a0,0,0,0x10);
        local_298 = local_298 & 0xffffffff00000000;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2a0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a8.AccessDetector);
      if ((ITextData *)local_2c0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2c0._0_8_ + 0x10))();
      }
      if (local_100[0] != (longlong *)0x0) {
        (**(code **)(*local_100[0] + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_278,(FWriteAccessScope *)&local_1a8);
      if (((int)local_268 != 0) && (FStack_270.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_270.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_270,0,0,0x10);
        local_268 = local_268 & 0xffffffff00000000;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      if (FStack_270.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_270.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_278.AccessDetector);
      if ((ITextData *)local_290._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_290._0_8_ + 0x10))();
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      if ((void *)local_98._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_98);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
      if ((void *)local_c8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
      if ((void *)local_e0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_e0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_248,(FWriteAccessScope *)&local_190);
      if (((int)local_238 != 0) && (FStack_240.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_240.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_240,0,0,0x10);
        local_238 = local_238 & 0xffffffff00000000;
      }
      if (local_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
      }
      if (FStack_240.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_240.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_248.AccessDetector);
      if ((ITextData *)local_260._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_260._0_8_ + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2e0,(FWriteAccessScope *)&local_178);
      if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2d8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
        local_2d0 = local_2d0 & 0xffffffff00000000;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2d8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar11);
  }
  return;
}

// Construct @ 14d8ec930

void __thiscall SAudioSpectrogram::Construct(SAudioSpectrogram *this,FArguments *param_1)

{
  FAudioSpectrogramViewport *pFVar1;
  TRawPtrProxy<FAudioSpectrogramViewport> local_res8;
  
  (this->ViewMinFrequency).Value = (param_1->_ViewMinFrequency).Value;
  (this->ViewMinFrequency).bIsSet = (param_1->_ViewMinFrequency).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ViewMinFrequency).Getter,&(param_1->_ViewMinFrequency).Getter);
  (this->ViewMaxFrequency).Value = (param_1->_ViewMaxFrequency).Value;
  (this->ViewMaxFrequency).bIsSet = (param_1->_ViewMaxFrequency).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ViewMaxFrequency).Getter,&(param_1->_ViewMaxFrequency).Getter);
  (this->ColorMapMinSoundLevel).Value = (param_1->_ColorMapMinSoundLevel).Value;
  (this->ColorMapMinSoundLevel).bIsSet = (param_1->_ColorMapMinSoundLevel).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ColorMapMinSoundLevel).Getter,&(param_1->_ColorMapMinSoundLevel).Getter);
  (this->ColorMapMaxSoundLevel).Value = (param_1->_ColorMapMaxSoundLevel).Value;
  (this->ColorMapMaxSoundLevel).bIsSet = (param_1->_ColorMapMaxSoundLevel).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ColorMapMaxSoundLevel).Getter,&(param_1->_ColorMapMaxSoundLevel).Getter);
  (this->ColorMap).Value = (param_1->_ColorMap).Value;
  (this->ColorMap).bIsSet = (param_1->_ColorMap).bIsSet;
  TDelegate<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ColorMap).Getter,&(param_1->_ColorMap).Getter);
  (this->FrequencyAxisScale).Value = (param_1->_FrequencyAxisScale).Value;
  (this->FrequencyAxisScale).bIsSet = (param_1->_FrequencyAxisScale).bIsSet;
  TDelegate<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->FrequencyAxisScale).Getter,&(param_1->_FrequencyAxisScale).Getter);
  (this->FrequencyAxisPixelBucketMode).Value = (param_1->_FrequencyAxisPixelBucketMode).Value;
  (this->FrequencyAxisPixelBucketMode).bIsSet = (param_1->_FrequencyAxisPixelBucketMode).bIsSet;
  TDelegate<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->FrequencyAxisPixelBucketMode).Getter,
             &(param_1->_FrequencyAxisPixelBucketMode).Getter);
  (this->Orientation).Value = (param_1->_Orientation).Value;
  (this->Orientation).bIsSet = (param_1->_Orientation).bIsSet;
  TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Orientation).Getter,&(param_1->_Orientation).Getter);
  TAttribute<bool>::operator=(&this->bAllowContextMenu,&param_1->_AllowContextMenu);
  TAttribute<bool>::operator=(&this->bFillBackground,&param_1->_FillBackground);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnContextMenuOpening,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnFrequencyAxisPixelBucketModeMenuEntryClicked,
              &param_1->_OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  TDelegate<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy>::
  operator=(&this->OnFrequencyAxisScaleMenuEntryClicked,
            &param_1->_OnFrequencyAxisScaleMenuEntryClicked);
  TDelegate<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy>::operator=
            (&this->OnColorMapMenuEntryClicked,&param_1->_OnColorMapMenuEntryClicked);
  TDelegate<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy>::operator=
            (&this->OnOrientationMenuEntryClicked,&param_1->_OnOrientationMenuEntryClicked);
  pFVar1 = ::operator_new(0x60);
  local_res8.Object = (FAudioSpectrogramViewport *)0x0;
  if (pFVar1 != (FAudioSpectrogramViewport *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FAudioSpectrogramViewport__6B_;
    pFVar1->_padding_ = 0;
    (pFVar1->RenderParams).NumRows = 0;
    (pFVar1->RenderParams).NumPixelsPerRow = 0;
    (pFVar1->RenderParams).ViewMinFrequency = 0.0;
    (pFVar1->RenderParams).ViewMaxFrequency = 0.0;
    (pFVar1->RenderParams).ColorMapMinSoundLevel = 0.0;
    (pFVar1->RenderParams).ColorMapMaxSoundLevel = 0.0;
    (pFVar1->RenderParams).ColorMap = BlackToWhite;
    (pFVar1->RenderParams).FrequencyAxisScale = Logarithmic;
    (pFVar1->RenderParams).FrequencyAxisPixelBucketMode = Average;
    (pFVar1->History).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->History).IndexMask = 0xffffffff;
    (pFVar1->History).Front = 0;
    (pFVar1->History).AfterBack = 0;
    pFVar1->UpdatableTexture = (FSlateUpdatableTexture *)0x0;
    pFVar1->UpdatableTexturePixelFormat = PF_Unknown;
    local_res8.Object = pFVar1;
  }
  TSharedPtr<FAudioSpectrogramViewport,1>::operator=<FAudioSpectrogramViewport>
            (&this->SpectrogramViewport,&local_res8);
  return;
}

// OnMouseButtonDown @ 14d94ee20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioSpectrogram::OnMouseButtonDown
          (SAudioSpectrogram *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if (!bVar3) {
    pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = FVar2 == EKeys::RightMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar3) {
      FReply::FReply(&local_c8,true);
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
      pFVar5 = FReply::CaptureMouse(&local_c8,pTVar4);
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
      pFVar5 = FReply::SetUserFocus(pFVar5,pTVar4,Mouse,false);
      FReply::FReply(__return_storage_ptr__,pFVar5);
      FReply::~FReply(&local_c8);
      return __return_storage_ptr__;
    }
  }
  SWidget::OnMouseButtonDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14d950500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioSpectrogram::OnMouseButtonUp
          (SAudioSpectrogram *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool *pbVar4;
  FWidgetPath *pFVar5;
  FSlateApplication *this_00;
  FReply *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForElementType<FArrangedWidget> FVar9;
  SWidget *pSVar10;
  undefined1 auStackY_628 [32];
  undefined1 local_5c8;
  undefined1 local_5c7;
  FPopupTransitionEffect local_5c4;
  SWidget *local_5c0;
  TReferenceControllerBase<1> *local_5b8;
  TSharedRef<SWidget,1> local_5b0;
  FDeprecateSlateVector2D local_5a0;
  TVector2<float>_u_0 local_598;
  FDeprecateSlateVector2D local_590;
  undefined8 local_588;
  undefined8 local_580;
  TSharedRef<SWidget,1> local_578;
  TSharedPtr<IMenu,1> local_568;
  TSharedRef<SWidget,1> local_558;
  FReadAccessScope local_548;
  FReply local_530;
  FWidgetPath local_478;
  FWidgetPath local_318;
  FWidgetPath local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_628;
  local_5c4.SlideDirection = None;
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar3) {
    pTVar8 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->EffectingButton).KeyName;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = FVar1 == EKeys::RightMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (bVar3) {
      local_5a0 = param_2->ScreenSpacePosition;
      bVar3 = FGeometry::IsUnderLocation(param_1,(FDeprecateVector2DParameter *)&local_5a0);
      if ((bVar3) && (pbVar4 = TAttribute<bool>::Get(&this->bAllowContextMenu), *pbVar4 != false)) {
        bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening)
        ;
        if (bVar3) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->OnContextMenuOpening,&local_548);
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          if (*(int *)&(this->OnContextMenuOpening).field_0x10 != 0) {
            pTVar8 = *(TReferenceControllerBase<1> **)&(this->OnContextMenuOpening).field_0x8;
          }
          (**(code **)(pTVar8->_padding_ + 0x60))(pTVar8,&local_5c0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_548);
          pTVar8 = local_5b8;
          pSVar10 = local_5c0;
          local_5b8 = (TReferenceControllerBase<1> *)0x0;
          local_5c0 = (SWidget *)0x0;
          local_578.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar7 = BuildDefaultContextMenu(this,&local_578);
          pTVar8 = (pTVar7->SharedReferenceCount).ReferenceController;
          pSVar10 = pTVar7->Object;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_580 = 0;
          local_588 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_578.SharedReferenceCount.ReferenceController);
        if (pSVar10 != (SWidget *)0x0) {
          bVar3 = (FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0;
          if (bVar3) {
            pFVar5 = FWidgetPath::FWidgetPath(&local_318);
          }
          else {
            pFVar5 = FWidgetPath::FWidgetPath(&local_1b8,(FWidgetPath *)param_2->_padding_);
          }
          FWidgetPath::FWidgetPath(&local_478,pFVar5);
          if (bVar3) {
            if (local_318.VirtualPointerPositions.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_318.VirtualPointerPositions.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_318.TopLevelWindow.SharedReferenceCount.ReferenceController);
            FVar9 = (ForElementType<FArrangedWidget>)&local_318.Widgets.Array;
            if (local_318.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar9 = local_318.Widgets.Array.AllocatorInstance.SecondaryData;
            }
            DestructItems<FArrangedWidget,int>
                      ((FArrangedWidget *)FVar9,local_318.Widgets.Array.ArrayNum);
            if (local_318.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FMemory::Free((void *)local_318.Widgets.Array.AllocatorInstance.SecondaryData);
            }
          }
          if (!bVar3) {
            if (local_1b8.VirtualPointerPositions.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.VirtualPointerPositions.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1b8.TopLevelWindow.SharedReferenceCount.ReferenceController);
            FVar9 = (ForElementType<FArrangedWidget>)&local_1b8.Widgets.Array;
            if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar9 = local_1b8.Widgets.Array.AllocatorInstance.SecondaryData;
            }
            DestructItems<FArrangedWidget,int>
                      ((FArrangedWidget *)FVar9,local_1b8.Widgets.Array.ArrayNum);
            if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FMemory::Free((void *)local_1b8.Widgets.Array.AllocatorInstance.SecondaryData);
            }
          }
          this_00 = FSlateApplication::Get();
          local_590 = param_2->ScreenSpacePosition;
          local_598 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_5c7 = 0;
          local_5c4.SlideDirection = ContextMenu;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_5b0.Object = pSVar10;
          local_5b0.SharedReferenceCount.ReferenceController = pTVar8;
          if ((pSVar10 == (SWidget *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FReply *)(*pcVar2)();
            return pFVar6;
          }
          pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                             ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_558);
          FSlateApplication::PushMenu
                    (this_00,&local_568,pTVar7,&local_478,&local_5b0,
                     (FDeprecateVector2DParameter *)&local_590,&local_5c4,true,
                     (FDeprecateVector2DParameter *)&local_598._s_0,SUB82(&local_5c8,0),true,-1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_568.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_558.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5b0.SharedReferenceCount.ReferenceController);
          if (local_478.VirtualPointerPositions.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_478.VirtualPointerPositions.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_478.TopLevelWindow.SharedReferenceCount.ReferenceController);
          FVar9 = (ForElementType<FArrangedWidget>)&local_478.Widgets.Array;
          if (local_478.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar9 = local_478.Widgets.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>
                    ((FArrangedWidget *)FVar9,local_478.Widgets.Array.ArrayNum);
          if (local_478.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FMemory::Free((void *)local_478.Widgets.Array.AllocatorInstance.SecondaryData);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      }
      FReply::FReply(&local_530,true);
      pFVar6 = FReply::ReleaseMouseCapture(&local_530);
      FReply::FReply(__return_storage_ptr__,pFVar6);
      FReply::~FReply(&local_530);
      return __return_storage_ptr__;
    }
  }
  SWidget::OnMouseButtonUp((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnPaint @ 14d954c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioSpectrogram::OnPaint
          (SAudioSpectrogram *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  EAudioColorGradient EVar3;
  EAudioSpectrogramFrequencyAxisScale EVar4;
  EAudioSpectrogramFrequencyAxisPixelBucketMode EVar5;
  EOrientation EVar6;
  FAudioSpectrogramViewport *this_00;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TTransform2<float> *pTVar10;
  EOrientation *pEVar11;
  float *pfVar12;
  EAudioColorGradient *pEVar13;
  EAudioSpectrogramFrequencyAxisScale *pEVar14;
  EAudioSpectrogramFrequencyAxisPixelBucketMode *pEVar15;
  bool *pbVar16;
  int iVar17;
  FSlateWindowElementList *pFVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2b8 [32];
  undefined8 local_280;
  float local_278;
  float fStack_274;
  TTransform2<float> local_270;
  FSlateWindowElementList *local_258;
  FSlateLayoutTransform local_250;
  int local_240;
  int iStack_23c;
  float fStack_238;
  float fStack_234;
  undefined4 local_228;
  FLinearColor_u_0 local_220;
  TSharedPtr<ISlateViewport_const_,1> local_210;
  TVector2<float>_u_0 local_200;
  undefined4 local_1f8;
  TVector2<float>_u_0 local_1f4;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  byte local_1cc;
  TTransform2<float> local_1c8;
  FSlateBrush local_1a8;
  TVector2<float>_u_0 local_f8;
  float local_f0;
  undefined8 local_ec;
  FDeprecateSlateVector2D local_e4;
  float local_dc [2];
  float afStack_d4 [2];
  TVector2<float>_u_0 local_cc;
  byte local_c4;
  TVector2<float>_u_0 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  TVector2<float>_u_0 local_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  byte local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_258 = param_4;
  local_280 = param_2->Size;
  fVar21 = local_280._4_4_ * (param_2->AccumulatedRenderTransform).M.M[1][0] +
           (float)local_280 * (param_2->AccumulatedRenderTransform).M.M[0][0];
  fVar22 = (float)local_280 * (param_2->AccumulatedRenderTransform).M.M[0][1] +
           local_280._4_4_ * (param_2->AccumulatedRenderTransform).M.M[1][1];
  iVar17 = (int)ROUND((fVar21 + fVar21) - __real_3f000000) >> 1;
  iVar20 = (int)ROUND((fVar22 + fVar22) - __real_3f000000) >> 1;
  fVar22 = (float)iVar17;
  fVar21 = (float)iVar20;
  pTVar10 = Inverse<TTransform2<float>_>(&local_1c8,&param_2->AccumulatedRenderTransform);
  fStack_274 = fVar21 * (pTVar10->M).M[1][1] + fVar22 * (pTVar10->M).M[0][1];
  local_278 = fVar21 * (pTVar10->M).M[1][0] + fVar22 * (pTVar10->M).M[0][0];
  pEVar11 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  EVar6 = *pEVar11;
  local_270.M.M[1][0] = fVar22 / fVar21;
  if (EVar6 == Orient_Horizontal) {
    local_270.M.M[0] =
         (float  [2])
         ((ulonglong)((uint)(fVar21 / fVar22) ^ __xmm_80000000800000008000000080000000) << 0x20);
    local_270.M.M[1][1] = 0.0;
  }
  else {
    local_270.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_270.M.M[0][1] = _UNK_15076b184;
    local_270.M.M[1][0] = (float)_UNK_15076b188;
    local_270.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  }
  local_270.Trans.field0_0x0._s_0.Y = 0.0;
  local_270.Trans.field0_0x0._s_0.X = 0.0;
  local_280 = (FDeprecateSlateVector2D)0x3f0000003f000000;
  local_250._0_8_ = 0x3f800000;
  local_250.Translation.field0_0x0._s_0.Y = 0.0;
  FGeometry::MakeChild
            (param_2,(FGeometry *)&local_200._s_0,(FDeprecateVector2DParameter *)&local_278,
             &local_250,&local_270,(FDeprecateVector2DParameter *)&local_280);
  iVar9 = iVar20;
  if (EVar6 == Orient_Horizontal) {
    iVar9 = iVar17;
  }
  iVar19 = 1;
  if (1 < iVar9) {
    iVar19 = iVar9;
  }
  if (EVar6 == Orient_Horizontal) {
    iVar17 = iVar20;
  }
  iVar20 = 2;
  if (2 < iVar17) {
    iVar20 = iVar17;
  }
  local_240 = iVar19;
  iStack_23c = iVar20;
  pfVar12 = TAttribute<float>::Get(&this->ViewMinFrequency);
  fVar21 = *pfVar12;
  fStack_238 = fVar21;
  pfVar12 = TAttribute<float>::Get(&this->ViewMaxFrequency);
  fVar22 = *pfVar12;
  fStack_234 = fVar22;
  pfVar12 = TAttribute<float>::Get(&this->ColorMapMinSoundLevel);
  fVar1 = *pfVar12;
  pfVar12 = TAttribute<float>::Get(&this->ColorMapMaxSoundLevel);
  fVar2 = *pfVar12;
  pEVar13 = TAttribute<enum_EAudioColorGradient>::Get(&this->ColorMap);
  EVar3 = *pEVar13;
  local_228 = CONCAT31(local_228._1_3_,EVar3);
  pEVar14 = TAttribute<enum_EAudioSpectrogramFrequencyAxisScale>::Get(&this->FrequencyAxisScale);
  EVar4 = *pEVar14;
  local_228._0_2_ = CONCAT11(EVar4,(undefined1)local_228);
  pEVar15 = TAttribute<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode>::Get
                      (&this->FrequencyAxisPixelBucketMode);
  EVar5 = *pEVar15;
  local_228._0_3_ = CONCAT12(EVar5,(undefined2)local_228);
  if (((this->SpectrogramViewport).Object == (FAudioSpectrogramViewport *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar17 = (*pcVar7)();
    return iVar17;
  }
  this_00 = (this->SpectrogramViewport).Object;
  if (((((((this_00->RenderParams).NumRows != iVar19) ||
         ((this_00->RenderParams).NumPixelsPerRow != iVar20)) ||
        (fVar21 != (this_00->RenderParams).ViewMinFrequency)) ||
       ((fVar22 != (this_00->RenderParams).ViewMaxFrequency ||
        (fVar1 != (this_00->RenderParams).ColorMapMinSoundLevel)))) ||
      ((fVar2 != (this_00->RenderParams).ColorMapMaxSoundLevel ||
       (((this_00->RenderParams).ColorMap != EVar3 ||
        ((this_00->RenderParams).FrequencyAxisScale != EVar4)))))) ||
     ((this_00->RenderParams).FrequencyAxisPixelBucketMode != EVar5)) {
    (this_00->RenderParams).NumRows = local_240;
    (this_00->RenderParams).NumPixelsPerRow = iStack_23c;
    (this_00->RenderParams).ViewMinFrequency = fStack_238;
    (this_00->RenderParams).ViewMaxFrequency = fStack_234;
    (this_00->RenderParams).ColorMapMinSoundLevel = fVar1;
    (this_00->RenderParams).ColorMapMaxSoundLevel = fVar2;
    (this_00->RenderParams).ColorMap = (undefined1)local_228;
    (this_00->RenderParams).FrequencyAxisScale = local_228._1_1_;
    (this_00->RenderParams).FrequencyAxisPixelBucketMode = local_228._2_1_;
    (this_00->RenderParams).field_0x1b = local_228._3_1_;
    iVar20 = (this_00->History).AfterBack - (this_00->History).Front;
    iVar17 = (this_00->RenderParams).NumRows;
    if (iVar17 < iVar20) {
      TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
      PopFront(&this_00->History,iVar20 - iVar17);
    }
    FAudioSpectrogramViewport::UpdateTextureData(this_00,true);
  }
  pbVar16 = TAttribute<bool>::Get(&this->bFillBackground);
  pFVar18 = local_258;
  if (*pbVar16 != false) {
    FSlateBrush::FSlateBrush(&local_1a8);
    pFVar18 = local_258;
    if ((EVar3 == BlackToWhite) || (EVar3 != WhiteToBlack)) {
      pfVar12 = FLinearColor::sRGBToLinearTable;
      local_220._s_0.B = FLinearColor::sRGBToLinearTable[0];
    }
    else {
      pfVar12 = FLinearColor::sRGBToLinearTable + 0xff;
      local_220._s_0.B = FLinearColor::sRGBToLinearTable[0xff];
    }
    local_220._s_0.R = *pfVar12;
    local_220._s_0.G = *pfVar12;
    local_f8 = (param_2->AbsolutePosition).field0_0x0;
    local_e4 = param_2->Size;
    local_f0 = param_2->Scale;
    local_c4 = param_2->bHasRenderTransform * '\x02' | local_c4 & 0xfc;
    local_cc = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_dc = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_d4 = (param_2->AccumulatedRenderTransform).M.M[1];
    local_220._s_0.A = 1.0;
    local_ec = 0;
    FSlateDrawElement::MakeBox
              (local_258,param_5,(FPaintGeometry *)&local_f8._s_0,&local_1a8,None,
               (FLinearColor *)&local_220._s_0);
    param_5 = param_5 + 1;
    local_1a8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  local_210.Object = (ISlateViewport *)(this->SpectrogramViewport).Object;
  local_210.SharedReferenceCount.ReferenceController =
       (this->SpectrogramViewport).SharedReferenceCount.ReferenceController;
  if (local_210.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_210.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_210.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c0 = local_1f4;
  local_ac = local_200;
  local_b8 = local_1f8;
  local_8c = (local_1cc & 1) * '\x02' | local_8c & 0xfc;
  local_b4 = 0;
  local_a4 = local_1e4;
  uStack_9c = uStack_1dc;
  local_94 = local_1d4;
  FSlateDrawElement::MakeViewport
            (pFVar18,param_5,(FPaintGeometry *)&local_c0._s_0,&local_210,NoGamma,
             &FLinearColor::White);
  return param_5 + 1;
}

// RemoveContextMenuExtension @ 14d964140

void __thiscall
SAudioSpectrogram::RemoveContextMenuExtension
          (SAudioSpectrogram *this,TSharedRef<FExtensionBase_const_,1> *param_1)

{
  FExtender *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->ContextMenuExtender).Object;
  if (this_00 != (FExtender *)0x0) {
    FExtender::RemoveExtension(this_00,param_1);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_850704391362052004>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSpectrogram.cpp"
                     ,0x5c,"ContextMenuExtender.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

