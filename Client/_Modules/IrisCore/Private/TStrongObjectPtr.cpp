// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// operator-> @ 14422bb70

UNetObjectFilter * __thiscall
TStrongObjectPtr<UNetObjectFilter,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
::operator->(TStrongObjectPtr<UNetObjectFilter,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
             *this)

{
  code *pcVar1;
  bool bVar2;
  UNetObjectFilter *pUVar3;
  
  if (this->Object != (UObject *)0x0) {
    return (UNetObjectFilter *)this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UNetObjectFilter *)(*pcVar1)();
    return pUVar3;
  }
  return (UNetObjectFilter *)this->Object;
}

// operator-> @ 1442b1300

UNetObjectPrioritizer * __thiscall
TStrongObjectPtr<UNetObjectPrioritizer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
::operator->(TStrongObjectPtr<UNetObjectPrioritizer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
             *this)

{
  code *pcVar1;
  bool bVar2;
  UNetObjectPrioritizer *pUVar3;
  
  if (this->Object != (UObject *)0x0) {
    return (UNetObjectPrioritizer *)this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UNetObjectPrioritizer *)(*pcVar1)();
    return pUVar3;
  }
  return (UNetObjectPrioritizer *)this->Object;
}

