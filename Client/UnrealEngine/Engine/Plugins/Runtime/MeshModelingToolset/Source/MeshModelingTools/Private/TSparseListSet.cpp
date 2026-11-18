// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// Insert_Internal @ 14cd07b90

void __thiscall
UE::Geometry::TSparseListSet<int>::Insert_Internal
          (TSparseListSet<int> *this,FList *param_1,int param_2)

{
  int *piVar1;
  ForElementType<int_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<int_*> FVar7;
  uint uVar8;
  uint uVar9;
  int *local_18 [2];
  
  uVar8 = param_1->CurIndex;
  if (uVar8 == this->BlockSize) {
    local_18[0] = AllocateNewBlockMemory(this);
    FVar2 = (param_1->Blocks).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<int_*>)param_1;
    if (FVar2 != (ForElementType<int_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((ulonglong)FVar7 <= local_18) {
      FVar7 = (ForElementType<int_*>)param_1;
      if (FVar2 != (ForElementType<int_*>)0x0) {
        FVar7 = FVar2;
      }
      if ((local_18 < (int **)((longlong)FVar7 + (longlong)(param_1->Blocks).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_1->Blocks).ArrayNum;
    piVar1 = &(param_1->Blocks).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int_*>_>
                        (0x808,(ForElementType<int_*> *)param_1,piVar1);
    }
    (param_1->Blocks).ArrayNum = iVar5 + 1;
    FVar2 = (param_1->Blocks).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<int_*>)param_1;
    if (FVar2 != (ForElementType<int_*>)0x0) {
      FVar7 = FVar2;
    }
    uVar8 = 0;
    *(int **)((longlong)FVar7 + (longlong)iVar5 * 8) = local_18[0];
    iVar5 = (param_1->Blocks).ArrayNum;
    uVar9 = iVar5 - 1;
    uVar6 = uVar8;
    if ((int)uVar9 < iVar5) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar2 = (param_1->Blocks).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<int_*>)param_1;
    if (FVar2 != (ForElementType<int_*>)0x0) {
      FVar7 = FVar2;
    }
    param_1->CurBlock =
         *(int **)((int *)((longlong)FVar7 + -8) + (longlong)(param_1->Blocks).ArrayNum * 2);
    param_1->CurIndex = 0;
  }
  param_1->CurBlock[(int)uVar8] = param_2;
  param_1->CurIndex = param_1->CurIndex + 1;
  return;
}

