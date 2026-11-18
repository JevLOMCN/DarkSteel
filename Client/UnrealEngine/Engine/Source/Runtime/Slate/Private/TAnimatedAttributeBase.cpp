// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// TAnimatedAttributeBase @ 1426a9bb0

TAnimatedAttributeBase * __thiscall
TAnimatedAttributeBase::TAnimatedAttributeBase(TAnimatedAttributeBase *this)

{
  this->bIsRegistered = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7TAnimatedAttributeBase__6B_;
  return this;
}

// ~TAnimatedAttributeBase @ 1426abd00

void __thiscall TAnimatedAttributeBase::~TAnimatedAttributeBase(TAnimatedAttributeBase *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7TAnimatedAttributeBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001426abd2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Register @ 1426d6130

void __thiscall TAnimatedAttributeBase::Register(TAnimatedAttributeBase *this)

{
  FAnimatedAttributeManager *this_00;
  TSharedRef<TAnimatedAttributeBase,1> *pTVar1;
  TSharedRef<TAnimatedAttributeBase,1> local_18;
  
  if (this->bIsRegistered == false) {
    this_00 = FAnimatedAttributeManager::Get();
    pTVar1 = TSharedFromThis<TAnimatedAttributeBase,1>::AsShared
                       ((TSharedFromThis<TAnimatedAttributeBase,1> *)&this->_padding_,&local_18);
    FAnimatedAttributeManager::RegisterAttribute(this_00,pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    this->bIsRegistered = true;
  }
  return;
}

// Unregister @ 1426e3e50

void __thiscall TAnimatedAttributeBase::Unregister(TAnimatedAttributeBase *this)

{
  FAnimatedAttributeManager *this_00;
  TSharedRef<TAnimatedAttributeBase,1> *pTVar1;
  TSharedRef<TAnimatedAttributeBase,1> local_18;
  
  if (this->bIsRegistered != false) {
    this_00 = FAnimatedAttributeManager::Get();
    pTVar1 = TSharedFromThis<TAnimatedAttributeBase,1>::AsShared
                       ((TSharedFromThis<TAnimatedAttributeBase,1> *)&this->_padding_,&local_18);
    FAnimatedAttributeManager::UnregisterAttribute(this_00,pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    this->bIsRegistered = false;
  }
  return;
}

