// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 2

// operator-> @ 1462d09c0

TEngineContext<UE::Dataflow::FContextSingle> * __thiscall
TSharedPtr<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1>::operator->
          (TSharedPtr<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TEngineContext<UE::Dataflow::FContextSingle> *pTVar3;
  
  if (this->Object != (TEngineContext<UE::Dataflow::FContextSingle> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TEngineContext<UE::Dataflow::FContextSingle> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 1462d0a10

FGraph * __thiscall
TSharedPtr<UE::Dataflow::FGraph,1>::operator->(TSharedPtr<UE::Dataflow::FGraph,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGraph *pFVar3;
  
  if (this->Object != (FGraph *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGraph *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

