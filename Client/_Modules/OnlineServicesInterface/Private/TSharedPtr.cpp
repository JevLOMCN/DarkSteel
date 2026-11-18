// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 2

// operator= @ 14ec24350

TSharedPtr<UE::Online::FSchemaDefinition_const_,1> * __thiscall
TSharedPtr<UE::Online::FSchemaDefinition_const_,1>::operator=
          (TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *this,
          TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSchemaDefinition *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 14ec248d0

FSchemaDefinition * __thiscall
TSharedPtr<UE::Online::FSchemaDefinition_const_,1>::operator->
          (TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSchemaDefinition *pFVar3;
  
  if (this->Object != (FSchemaDefinition *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSchemaDefinition *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

