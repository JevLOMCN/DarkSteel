// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 4

// operator*<FStateTreeInstanceStorage> @ 14d4a8b70

FStateTreeInstanceStorage * __thiscall
TSharedPtr<FStateTreeInstanceStorage,1>::operator*<FStateTreeInstanceStorage>
          (TSharedPtr<FStateTreeInstanceStorage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeInstanceStorage *pFVar3;
  
  if (this->Object != (FStateTreeInstanceStorage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeInstanceStorage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d4b4630

ITemporaryStorage * __thiscall
TSharedPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1>::operator->
          (TSharedPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ITemporaryStorage *pIVar3;
  
  if (this->Object != (ITemporaryStorage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITemporaryStorage *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14d4edaa0

FSelectStateResult * __thiscall
TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1>::operator->
          (TSharedPtr<FStateTreeExecutionContext::FSelectStateResult,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSelectStateResult *pFVar3;
  
  if (this->Object != (FSelectStateResult *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSelectStateResult *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d4edaf0

FStateTreeEventQueue * __thiscall
TSharedPtr<FStateTreeEventQueue,1>::operator->(TSharedPtr<FStateTreeEventQueue,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeEventQueue *pFVar3;
  
  if (this->Object != (FStateTreeEventQueue *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeEventQueue *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

