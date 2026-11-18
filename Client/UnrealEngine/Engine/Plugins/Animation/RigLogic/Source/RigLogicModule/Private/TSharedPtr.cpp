// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 3

// operator-> @ 14a661820

FSharedRigRuntimeContext * __thiscall
TSharedPtr<FSharedRigRuntimeContext,1>::operator->(TSharedPtr<FSharedRigRuntimeContext,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSharedRigRuntimeContext *pFVar3;
  
  if (this->Object != (FSharedRigRuntimeContext *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSharedRigRuntimeContext *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a661870

FRigLogic * __thiscall TSharedPtr<FRigLogic,1>::operator->(TSharedPtr<FRigLogic,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRigLogic *pFVar3;
  
  if (this->Object != (FRigLogic *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRigLogic *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a6618c0

IDNAReader * __thiscall TSharedPtr<IDNAReader,1>::operator->(TSharedPtr<IDNAReader,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IDNAReader *pIVar3;
  
  if (this->Object != (IDNAReader *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IDNAReader *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

