// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// operator= @ 14a978c20

TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
* __thiscall
TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
::operator=(TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
            *this,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  *param_1)

{
  if (this != param_1) {
    if (this->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(this->Object);
      this->Object = (UObject *)0x0;
    }
    this->Object = param_1->Object;
    param_1->Object = (UObject *)0x0;
  }
  return this;
}

// operator-> @ 14a979930

UMaterialInterface * __thiscall
TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
::operator->(TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
             *this)

{
  code *pcVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  
  if (this->Object != (UObject *)0x0) {
    return (UMaterialInterface *)this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMaterialInterface *)(*pcVar1)();
    return pUVar3;
  }
  return (UMaterialInterface *)this->Object;
}

