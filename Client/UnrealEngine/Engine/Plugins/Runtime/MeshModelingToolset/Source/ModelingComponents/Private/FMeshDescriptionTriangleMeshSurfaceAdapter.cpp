// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// IsTriangle @ 14cb23060

bool __thiscall
UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter::IsTriangle
          (FMeshDescriptionTriangleMeshSurfaceAdapter *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMeshElementContainer *pFVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  
  if (this->bHasInvalidPolyGroup == false) {
    if (-1 < param_1) {
      pFVar5 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x70),0);
      if (param_1 < (pFVar5->BitArray).NumBits - pFVar5->NumHoles) {
        return true;
      }
    }
    return false;
  }
  lVar1 = *(longlong *)(this->_padding_ + 0xe8);
  if (*(int *)(lVar1 + 0x38) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar8 = *(longlong **)(lVar1 + 0x30);
  if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
    plVar8 = (longlong *)(lVar1 + 0x18);
  }
  uVar9 = param_1 * (int)plVar8[2];
  uVar7 = 0;
  if ((int)uVar9 < (int)plVar8[1]) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar7 = *(uint *)(*plVar8 + (longlong)(int)uVar9 * 4);
  if (*(int *)&(this->ValidPolyGroups).Elements.field_0x8 !=
      *(int *)&(this->ValidPolyGroups).Elements.field_0x34) {
    FVar10 = (this->ValidPolyGroups).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(this->ValidPolyGroups).Hash;
    }
    iVar6 = *(int *)((longlong)FVar10 +
                    (ulonglong)((this->ValidPolyGroups).HashSize - 1U & uVar7) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->ValidPolyGroups).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar6 * 0xc) == uVar7) goto LAB_14cb2319c;
        iVar6 = *(int *)(lVar1 + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_14cb2319c:
  return iVar6 != -1;
}

