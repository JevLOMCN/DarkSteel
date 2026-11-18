// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// TSharedRef<FPortableObjectEntry,1><FPortableObjectEntry> @ 146b38300

TSharedRef<FPortableObjectEntry,1> * __thiscall
TSharedRef<FPortableObjectEntry,1>::TSharedRef<FPortableObjectEntry,1><FPortableObjectEntry>
          (TSharedRef<FPortableObjectEntry,1> *this,TRawPtrProxy<FPortableObjectEntry> *param_1)

{
  FPortableObjectEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FPortableObjectEntry,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFPortableObjectEntry__U__DefaultDeleter_VFPortableObjectEntry___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FPortableObjectEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FPortableObjectEntry,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// operator=<FPortableObjectEntry> @ 146b383a0

TSharedRef<FPortableObjectEntry,1> * __thiscall
TSharedRef<FPortableObjectEntry,1>::operator=<FPortableObjectEntry>
          (TSharedRef<FPortableObjectEntry,1> *this,TRawPtrProxy<FPortableObjectEntry> *param_1)

{
  FPortableObjectEntry *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedRef<FPortableObjectEntry,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  if (param_1->Object == (FPortableObjectEntry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x18d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FPortableObjectEntry,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFPortableObjectEntry__U__DefaultDeleter_VFPortableObjectEntry___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)pFVar1;
  }
  if (param_1->Object == (FPortableObjectEntry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FPortableObjectEntry,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar1;
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

