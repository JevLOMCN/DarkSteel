// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// addPoint @ 14a8d19e0

bool __thiscall
UE::PoseSearch::FKDTree::FKNNResultSet::addPoint(FKNNResultSet *this,float param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar10 = this->Count;
  uVar9 = (ulonglong)(int)uVar10;
  uVar8 = uVar10;
  if (0 < (int)uVar10) {
    lVar3 = uVar9 * 4;
    do {
      uVar10 = uVar10 - 1;
      lVar12 = lVar3 + -4;
      uVar8 = (uint)uVar9;
      uVar11 = -uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < (this->Distances).ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (*(float *)(lVar12 + (longlong)(this->Distances).DataPtr) <= param_1) break;
      uVar6 = 0;
      if ((int)uVar10 < (this->Distances).ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar1 = *(undefined4 *)(lVar12 + (longlong)(this->Distances).DataPtr);
      uVar6 = 0;
      if ((int)uVar8 < (this->Distances).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      *(undefined4 *)(lVar3 + (longlong)(this->Distances).DataPtr) = uVar1;
      uVar6 = 0;
      if ((int)uVar10 < (this->Indexes).ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar1 = *(undefined4 *)(lVar12 + (longlong)(this->Indexes).DataPtr);
      uVar6 = 0;
      if ((int)uVar8 < (this->Indexes).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar8 = uVar8 - 1;
      uVar9 = (ulonglong)uVar8;
      *(undefined4 *)(lVar3 + (longlong)(this->Indexes).DataPtr) = uVar1;
      lVar3 = lVar12;
    } while (0 < (int)uVar8);
  }
  pfVar7 = TArrayView<float,int>::operator[](&this->Distances,uVar8);
  *pfVar7 = param_1;
  uVar10 = 0;
  if ((int)uVar8 < (this->Indexes).ArrayNum) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  (this->Indexes).DataPtr[(int)uVar8] = param_2;
  if (this->Count < this->NumNeighbors) {
    this->Count = this->Count + 1;
  }
  return true;
}

