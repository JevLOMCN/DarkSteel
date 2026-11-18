// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// FindBoneIndex @ 146440a40

int __thiscall FReferenceSkeleton::FindBoneIndex(FReferenceSkeleton *this,FName *param_1)

{
  int *piVar1;
  
  if (*param_1 != (FName)0x0) {
    piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&this->FinalNameToIndexMap,*param_1);
    if (piVar1 != (int *)0x0) {
      return *piVar1;
    }
  }
  return -1;
}

// GetBoneName @ 146448570

FName __thiscall FReferenceSkeleton::GetBoneName(FReferenceSkeleton *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  uVar3 = 0;
  if ((int)in_R8D < (this->FinalRefBoneInfo).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 =
       *(undefined8 *)
        ((this->FinalRefBoneInfo).AllocatorInstance.Data + (longlong)(int)in_R8D * 0xc);
  return FVar4;
}

