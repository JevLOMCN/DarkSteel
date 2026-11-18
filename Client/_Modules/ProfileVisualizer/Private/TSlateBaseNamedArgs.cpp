// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 3

// Visibility<SBarVisualizer> @ 148d54180

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::Visibility<SBarVisualizer>
          (TSlateBaseNamedArgs<SButton> *this,SBarVisualizer *param_1,pmf_f45150d9 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  this->field_0x89 = 1;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x98;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FArguments *)this;
}

// ~TSlateBaseNamedArgs<SGraphBar> @ 148d57b50

void __thiscall
TSlateBaseNamedArgs<SGraphBar>::~TSlateBaseNamedArgs<SGraphBar>
          (TSlateBaseNamedArgs<SGraphBar> *this)

{
  DestructItems<TSharedRef<ISlateMetaData,1>,int>
            (*(TSharedRef<ISlateMetaData,1> **)&this->field_0x1e8,*(int *)&this->field_0x1f0);
  if (*(void **)&this->field_0x1e8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x1d0);
  if (*(void **)&this->field_0x1d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x1d0);
  if (*(longlong **)&this->field_0x1b8 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x1b8 + 0x10))();
  }
  if (this->field_0x1b0 != '\0') {
    FAccessibleWidgetData::~FAccessibleWidgetData((FAccessibleWidgetData *)&this->field_0x148);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x128);
  if (*(void **)&this->field_0x130 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x130);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x128);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xf8);
  if (*(void **)&this->field_0x100 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x100);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xf8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0);
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90);
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x70);
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x48);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  if (*(longlong **)this != (longlong *)0x0) {
    (**(code **)(**(longlong **)this + 0x10))();
  }
  return;
}

// ~TSlateBaseNamedArgs<STimeline> @ 148d57b60

void __thiscall
TSlateBaseNamedArgs<STimeline>::~TSlateBaseNamedArgs<STimeline>
          (TSlateBaseNamedArgs<STimeline> *this)

{
  DestructItems<TSharedRef<ISlateMetaData,1>,int>
            (*(TSharedRef<ISlateMetaData,1> **)&this->field_0x1e8,*(int *)&this->field_0x1f0);
  if (*(void **)&this->field_0x1e8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x1d0);
  if (*(void **)&this->field_0x1d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x1d0);
  if (*(longlong **)&this->field_0x1b8 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x1b8 + 0x10))();
  }
  if (this->field_0x1b0 != '\0') {
    FAccessibleWidgetData::~FAccessibleWidgetData((FAccessibleWidgetData *)&this->field_0x148);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x128);
  if (*(void **)&this->field_0x130 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x130);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x128);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xf8);
  if (*(void **)&this->field_0x100 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x100);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xf8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0);
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0xb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90);
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x70);
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x48);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x18);
  if (*(longlong **)this != (longlong *)0x0) {
    (**(code **)(**(longlong **)this + 0x10))();
  }
  return;
}

