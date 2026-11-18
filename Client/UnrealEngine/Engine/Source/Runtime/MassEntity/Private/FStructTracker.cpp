// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// GetStructType @ 147227b50

UStruct * __thiscall FStructTracker::GetStructType(FStructTracker *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UStruct *pUVar3;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar4;
  
  if ((-1 < param_1) && (param_1 < (this->StructTypesList).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UStruct *)(*pcVar1)();
        return pUVar3;
      }
    }
    FVar4 = (this->StructTypesList).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar4 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)&this->StructTypesList
      ;
    }
    pUVar3 = (UStruct *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar4 + (longlong)param_1 * 8));
    return pUVar3;
  }
  return (UStruct *)0x0;
}

