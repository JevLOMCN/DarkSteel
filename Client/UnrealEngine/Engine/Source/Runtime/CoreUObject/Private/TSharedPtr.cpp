// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// operator=<FCoreRedirects::FWildcardData> @ 141fb5360

TSharedPtr<FCoreRedirects::FWildcardData,1> * __thiscall
TSharedPtr<FCoreRedirects::FWildcardData,1>::operator=<FCoreRedirects::FWildcardData>
          (TSharedPtr<FCoreRedirects::FWildcardData,1> *this,
          TRawPtrProxy<FCoreRedirects::FWildcardData> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWildcardData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FCoreRedirects::FWildcardData,1> local_18;
  
  pFVar3 = param_1->Object;
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFWildcardData_FCoreRedirects__U__DefaultDeleter_UFWildcardData_FCoreRedirects___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5[1]._padding_ = (longlong)pFVar3;
  }
  if (this != &local_18) {
    this->Object = pFVar3;
    pTVar4 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar5 != pTVar4) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      (this->SharedReferenceCount).ReferenceController = pTVar5;
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        pTVar5 = pTVar6;
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar4->_padding_)(pTVar4);
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return this;
}

// operator-> @ 141fc1dd0

FWildcardData * __thiscall
TSharedPtr<FCoreRedirects::FWildcardData,1>::operator->
          (TSharedPtr<FCoreRedirects::FWildcardData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FWildcardData *pFVar3;
  
  if (this->Object != (FWildcardData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWildcardData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14212f2d0

FIoDispatcherBackendContext * __thiscall
TSharedPtr<FIoDispatcherBackendContext_const_,1>::operator->
          (TSharedPtr<FIoDispatcherBackendContext_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FIoDispatcherBackendContext *pFVar3;
  
  if (this->Object != (FIoDispatcherBackendContext *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIoDispatcherBackendContext *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 1422013e0

TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> * __thiscall
TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>::operator=
          (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *this,
          TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar4 = (this->SharedReferenceCount).ReferenceController;
  if (pTVar3 != pTVar4) {
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (this->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      return this;
    }
  }
  return this;
}

// operator= @ 14225a020

TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1> * __thiscall
TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1>::operator=
          (TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1> *this,
          TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (FCopyOnWriteContents *)0x0;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar4 = (this->SharedReferenceCount).ReferenceController;
  if (pTVar3 != pTVar4) {
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (this->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      return this;
    }
  }
  return this;
}

