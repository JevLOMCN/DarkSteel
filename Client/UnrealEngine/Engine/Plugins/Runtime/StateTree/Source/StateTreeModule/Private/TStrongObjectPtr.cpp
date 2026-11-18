// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// operator-> @ 14d52d4a0

UStateTreeSchema * __thiscall
TStrongObjectPtr<UStateTreeSchema_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
::operator->(TStrongObjectPtr<UStateTreeSchema_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
             *this)

{
  code *pcVar1;
  bool bVar2;
  UStateTreeSchema *pUVar3;
  
  if (this->Object != (UObject *)0x0) {
    return (UStateTreeSchema *)this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UStateTreeSchema *)(*pcVar1)();
    return pUVar3;
  }
  return (UStateTreeSchema *)this->Object;
}

