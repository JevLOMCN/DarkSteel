// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// RemoveMembership @ 14424f140

void __thiscall
UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership::RemoveMembership
          (FNetObjectGroupMembership *this,FNetObjectGroupHandle param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  
  FVar3 = (this->GroupIndexes).AllocatorInstance.SecondaryData;
  iVar2 = (this->GroupIndexes).ArrayNum;
  FVar8 = (ForElementType<unsigned_int>)this;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FVar8 = FVar3;
  }
  FVar3 = (ForElementType<unsigned_int>)((longlong)FVar8 + (longlong)iVar2 * 4);
  FVar10 = FVar8;
  if (FVar8 != FVar3) {
    while (*(uint *)FVar10 != (param_1.field0_0x0._0_4_ & 0xffffff)) {
      FVar10 = (ForElementType<unsigned_int>)((longlong)FVar10 + 4);
      if (FVar10 == FVar3) {
        return;
      }
    }
    uVar9 = (uint)((longlong)FVar10 - (longlong)FVar8 >> 2);
    if (uVar9 != 0xffffffff) {
      uVar7 = 0;
      if ((int)(uVar9 + 1) <= iVar2) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar3 = (this->GroupIndexes).AllocatorInstance.SecondaryData;
      iVar2 = (this->GroupIndexes).ArrayNum;
      FVar8 = (ForElementType<unsigned_int>)this;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar3;
      }
      iVar6 = iVar2 + ~uVar9;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        memmove((void *)((longlong)FVar8 + (longlong)(int)uVar9 * 4),
                (void *)((longlong)FVar8 + (longlong)(iVar2 - iVar6) * 4),(longlong)iVar6 << 2);
      }
      piVar1 = &(this->GroupIndexes).ArrayNum;
      *piVar1 = *piVar1 + -1;
      Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,(ForElementType<unsigned_int> *)this,(this->GroupIndexes).ArrayNum,
                 &(this->GroupIndexes).ArrayMax);
    }
  }
  return;
}

