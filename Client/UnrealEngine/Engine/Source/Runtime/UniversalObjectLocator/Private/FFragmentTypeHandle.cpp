// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 1

// Resolve @ 144349a00

FFragmentType * __thiscall
UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(FFragmentTypeHandle *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FRegistry *pFVar4;
  FFragmentType *pFVar5;
  
  if (this->Handle == 0xff) {
    return (FFragmentType *)0x0;
  }
  pFVar4 = FRegistry::Get();
  bVar1 = this->Handle;
  if ((pFVar4->FragmentTypes).ArrayNum <= (int)(uint)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFragmentType *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FFragmentType *)((pFVar4->FragmentTypes).AllocatorInstance.Data + (ulonglong)bVar1 * 0x60)
  ;
}

