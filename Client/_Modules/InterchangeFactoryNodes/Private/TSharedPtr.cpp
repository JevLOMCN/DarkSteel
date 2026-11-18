// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 1

// operator*<UE::Interchange::FAttributeStorage> @ 14e5217c0

FAttributeStorage * __thiscall
TSharedPtr<UE::Interchange::FAttributeStorage,1>::operator*<UE::Interchange::FAttributeStorage>
          (TSharedPtr<UE::Interchange::FAttributeStorage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FAttributeStorage *pFVar3;
  
  if (this->Object != (FAttributeStorage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAttributeStorage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

