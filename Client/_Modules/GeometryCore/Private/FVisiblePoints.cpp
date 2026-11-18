// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// RemovePt @ 1433c4080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FHullConnectivity<float>::FVisiblePoints::RemovePt
          (FVisiblePoints *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  int local_res8 [2];
  int local_res10 [2];
  float local_38;
  float local_34;
  float local_30;
  
  local_res10[0] = param_1;
  if (this->MaxIdx != param_1) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveSingleSwap(&this->Indices,local_res10,No);
    return;
  }
  this->MaxValue = -1.7976931348623157e+308;
  uVar8 = 0;
  this->MaxIdx = -1;
  iVar6 = (this->Indices).ArrayNum;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)((this->Indices).AllocatorInstance.Data + lVar9);
      if (iVar6 == local_res10[0]) {
        uVar5 = 0;
        if ((int)uVar8 < (this->Indices).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Indices).ArrayNum;
        pFVar2 = (this->Indices).AllocatorInstance.Data;
        iVar7 = ~uVar8 + iVar6;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar8 * 4,pFVar2 + (longlong)(iVar6 - iVar7) * 4,
                  (longlong)iVar7 << 2);
        }
        piVar1 = &(this->Indices).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar8 = uVar8 - 1;
        lVar9 = lVar9 + -4;
      }
      else {
        local_res8[0] = iVar6;
        (**(code **)param_2)(&local_38,*(undefined8 *)&param_2->field_0x8,local_res8);
        dVar10 = ((double)local_38 * (this->Plane).Normal.field0_0x0._s_0.X +
                  (double)local_34 * (this->Plane).Normal.field0_0x0._s_0.Y +
                 (double)local_30 * (this->Plane).Normal.field0_0x0._s_0.Z) - (this->Plane).Constant
        ;
        if (this->MaxValue <= dVar10 && dVar10 != this->MaxValue) {
          this->MaxValue = dVar10;
          this->MaxIdx = iVar6;
        }
      }
      iVar6 = (this->Indices).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < iVar6);
  }
  return;
}

// RemovePt @ 1433c4270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FHullConnectivity<double>::FVisiblePoints::RemovePt
          (FVisiblePoints *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  int local_res8 [2];
  int local_res10 [2];
  double local_48;
  double local_40;
  double local_38;
  
  local_res10[0] = param_1;
  if (this->MaxIdx != param_1) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveSingleSwap(&this->Indices,local_res10,No);
    return;
  }
  this->MaxValue = -1.7976931348623157e+308;
  uVar8 = 0;
  this->MaxIdx = -1;
  iVar6 = (this->Indices).ArrayNum;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)((this->Indices).AllocatorInstance.Data + lVar9);
      if (iVar6 == local_res10[0]) {
        uVar5 = 0;
        if ((int)uVar8 < (this->Indices).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Indices).ArrayNum;
        pFVar2 = (this->Indices).AllocatorInstance.Data;
        iVar7 = ~uVar8 + iVar6;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar8 * 4,pFVar2 + (longlong)(iVar6 - iVar7) * 4,
                  (longlong)iVar7 << 2);
        }
        piVar1 = &(this->Indices).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar8 = uVar8 - 1;
        lVar9 = lVar9 + -4;
      }
      else {
        local_res8[0] = iVar6;
        (**(code **)param_2)(&local_48,*(undefined8 *)&param_2->field_0x8,local_res8);
        dVar10 = (local_40 * (this->Plane).Normal.field0_0x0._s_0.Y +
                  local_48 * (this->Plane).Normal.field0_0x0._s_0.X +
                 local_38 * (this->Plane).Normal.field0_0x0._s_0.Z) - (this->Plane).Constant;
        if (this->MaxValue <= dVar10 && dVar10 != this->MaxValue) {
          this->MaxValue = dVar10;
          this->MaxIdx = iVar6;
        }
      }
      iVar6 = (this->Indices).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < iVar6);
  }
  return;
}

