// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 1

// operator-> @ 14eae72a0

ITransferFunction * __thiscall
TSharedPtr<UE::NNEDenoiser::Private::ITransferFunction,1>::operator->
          (TSharedPtr<UE::NNEDenoiser::Private::ITransferFunction,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ITransferFunction *pIVar3;
  
  if (this->Object != (ITransferFunction *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITransferFunction *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

