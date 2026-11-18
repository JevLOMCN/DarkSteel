// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// IsValid @ 1461417e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::MovieScene::FEntityHandle::IsValid(FEntityHandle *this,FEntityManager *param_1)

{
  FEntityHandle FVar1;
  int iVar2;
  uint *puVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  
  FVar1 = *this;
  if ((FVar1.ID.Value.Value != 0xffff) &&
     (*(int *)&(param_1->EntityGenerationMap).field_0x8 !=
      *(int *)&(param_1->EntityGenerationMap).field_0x34)) {
    puVar5 = *(undefined1 **)&(param_1->EntityGenerationMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(param_1->EntityGenerationMap).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(param_1->EntityGenerationMap).field_0x48 - 1) &
                              (ulonglong)FVar1 >> 0x20 & 0xffff) * 4);
    if (iVar2 != -1) {
      do {
        puVar4 = (ushort *)((longlong)iVar2 * 0x10 + *(longlong *)&param_1->EntityGenerationMap);
        if (*puVar4 == FVar1.ID.Value.Value) {
          puVar3 = (uint *)(puVar4 + 2);
          if (puVar4 == (ushort *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return false;
          }
          if (*puVar3 != FVar1.HandleGeneration) {
            return false;
          }
          return true;
        }
        iVar2 = *(int *)(puVar4 + 4);
      } while (iVar2 != -1);
    }
  }
  return false;
}

