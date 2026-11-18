// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 4

// TSharedPtr<IMediaTimeSource,1><FAppMediaTimeSource> @ 148d989a0

TSharedPtr<IMediaTimeSource,1> * __thiscall
TSharedPtr<IMediaTimeSource,1>::TSharedPtr<IMediaTimeSource,1><FAppMediaTimeSource>
          (TSharedPtr<IMediaTimeSource,1> *this,TRawPtrProxy<FAppMediaTimeSource> *param_1)

{
  FAppMediaTimeSource *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMediaTimeSource *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAppMediaTimeSource__U__DefaultDeleter_VFAppMediaTimeSource___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 148d9d120

IInstallBundleManager * __thiscall
TSharedPtr<IInstallBundleManager,1>::operator->(TSharedPtr<IInstallBundleManager,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IInstallBundleManager *pIVar3;
  
  if (this->Object != (IInstallBundleManager *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IInstallBundleManager *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 148d9d170

ISessionService * __thiscall
TSharedPtr<ISessionService,1>::operator->(TSharedPtr<ISessionService,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ISessionService *pIVar3;
  
  if (this->Object != (ISessionService *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISessionService *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// ToSharedRef @ 148db2070

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateRenderer,1> * __thiscall
TSharedPtr<FSlateRenderer,1>::ToSharedRef
          (TSharedPtr<FSlateRenderer,1> *this,TSharedRef<FSlateRenderer,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FSlateRenderer,1> *pTVar4;
  
  if (this->Object == (FSlateRenderer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateRenderer,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FSlateRenderer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateRenderer,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

