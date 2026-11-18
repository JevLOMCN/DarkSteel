// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FMenuBase @ 1426a7cb0

FMenuBase * __thiscall
FMenuBase::FMenuBase(FMenuBase *this,TSharedRef<SWidget,1> *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMenuBase__6B_;
  *(undefined8 *)&this->OnMenuDismissed = 0;
  *(undefined8 *)&(this->OnMenuDismissed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMenuDismissed).field_0x10 = 0;
  *(undefined8 *)&(this->OnMenuDismissed).field_0x18 = 2;
  (this->Content).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Content).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bDismissing = false;
  this->bIsCollapsedByParent = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FMenuBase @ 1426aaab0

void __thiscall FMenuBase::~FMenuBase(FMenuBase *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Content).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMenuDismissed).field_0x8,*(int *)&(this->OnMenuDismissed).field_0x10);
  pvVar3 = *(void **)&(this->OnMenuDismissed).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMenuDismissed);
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
  this->_padding_ = (longlong)&___7IMenu__6B_;
  return;
}

// GetContent @ 1426bcaf0

TSharedPtr<SWidget,1> * __thiscall
FMenuBase::GetContent(FMenuBase *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Content).Object;
  pTVar1 = (this->Content).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOnMenuDismissed @ 1426be500

TMulticastDelegate<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy> * __thiscall
FMenuBase::GetOnMenuDismissed(FMenuBase *this)

{
  return &this->OnMenuDismissed;
}

// UsingApplicationMenuStack @ 1426e5030

bool __thiscall FMenuBase::UsingApplicationMenuStack(FMenuBase *this)

{
  return true;
}

