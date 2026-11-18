// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Apply @ 143470d30

bool __thiscall
UE::Geometry::FDynamicMeshAttributeChangeSet::Apply
          (FDynamicMeshAttributeChangeSet *this,FDynamicMeshAttributeSet *param_1,bool param_2)

{
  TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
  *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar12;
  TDynamicMeshAttributeChange<float,2> *this_00;
  TDynamicMeshAttributeChange<float,3> *this_01;
  TDynamicMeshOverlay<float,2> *pTVar13;
  uint uVar14;
  TDynamicMeshOverlay<float,3> *pTVar15;
  TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
  *pTVar16;
  TDynamicMeshAttributeChange<float,2> *pTVar17;
  TDynamicMeshAttributeChange<float,3> *pTVar18;
  TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeElement,TSizedDefaultAllocator<32>_>
  *pTVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
  *pTVar22;
  
  iVar7 = (**(code **)(param_1->_padding_ + 0xa8))(param_1);
  if ((iVar7 != (this->UVChanges).ArrayNum) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794229392>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x290,"NumUVLayers == UVChanges.Num()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar8 = (this->UVChanges).ArrayNum;
  uVar14 = 0;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  if (0 < (longlong)iVar8) {
    lVar21 = 0;
    lVar11 = 0x10;
    if (!param_2) {
      lVar11 = 0x40;
    }
    uVar10 = 0x50;
    if (!param_2) {
      uVar10 = 0x20;
    }
    uVar4 = 0x20;
    if (!param_2) {
      uVar4 = 0x50;
    }
    do {
      if (((int)uVar14 < (param_1->UVLayers).Array.ArrayNum) && (-1 < (int)uVar14)) {
        if (((int)uVar14 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pTVar13 = *(TDynamicMeshOverlay<float,2> **)
                   ((param_1->UVLayers).Array.AllocatorInstance.Data + lVar21 * 8);
      }
      else {
        pTVar13 = (TDynamicMeshOverlay<float,2> *)0x0;
      }
      uVar9 = 0;
      if ((int)uVar14 < (this->UVChanges).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_00 = (TDynamicMeshAttributeChange<float,2> *)
                ((this->UVChanges).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x60);
      pTVar17 = this_00;
      if (!param_2) {
        pTVar17 = (TDynamicMeshAttributeChange<float,2> *)&this_00->NewElements;
      }
      TDynamicMeshAttributeChange<float,2>::ApplyReplaceChange
                (this_00,pTVar13,
                 (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                  *)((longlong)&(this_00->OldElements).AllocatorInstance.Data + (ulonglong)uVar10),
                 &pTVar17->OldElements,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)&(this_00->OldElements).AllocatorInstance.Data + lVar11),
                 (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                  *)((longlong)&(this_00->OldElements).AllocatorInstance.Data + (ulonglong)uVar4));
      uVar14 = uVar14 + 1;
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar8);
  }
  iVar7 = (**(code **)(param_1->_padding_ + 0xb8))(param_1);
  if ((iVar7 != (this->NormalChanges).ArrayNum) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794229401>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x299,"NumNormalLayers == NormalChanges.Num()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar8 = (this->NormalChanges).ArrayNum;
  uVar14 = 0;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  if (0 < iVar8) {
    lVar11 = 0;
    uVar10 = 0x20;
    if (!param_2) {
      uVar10 = 0x50;
    }
    lVar21 = 0x10;
    uVar4 = 0x50;
    if (!param_2) {
      lVar21 = 0x40;
      uVar4 = 0x20;
    }
    do {
      if (((int)uVar14 < (param_1->NormalLayers).Array.ArrayNum) && (-1 < (int)uVar14)) {
        if (((int)uVar14 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pTVar15 = *(TDynamicMeshOverlay<float,3> **)
                   ((param_1->NormalLayers).Array.AllocatorInstance.Data + lVar11 * 8);
      }
      else {
        pTVar15 = (TDynamicMeshOverlay<float,3> *)0x0;
      }
      uVar9 = 0;
      if ((int)uVar14 < (this->NormalChanges).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_01 = (TDynamicMeshAttributeChange<float,3> *)
                ((this->NormalChanges).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x60);
      pTVar18 = this_01;
      if (!param_2) {
        pTVar18 = (TDynamicMeshAttributeChange<float,3> *)&this_01->NewElements;
      }
      TDynamicMeshAttributeChange<float,3>::ApplyReplaceChange
                (this_01,pTVar15,
                 (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                  *)((longlong)&(this_01->OldElements).AllocatorInstance.Data + (ulonglong)uVar4),
                 &pTVar18->OldElements,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)&(this_01->OldElements).AllocatorInstance.Data + lVar21),
                 (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                  *)((longlong)&(this_01->OldElements).AllocatorInstance.Data + (ulonglong)uVar10));
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar8);
  }
  lVar11 = (longlong)(int)param_1->_padding_;
  uVar14 = 0;
  if (0 < lVar11) {
    lVar21 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar14 < (this->RegisteredAttributeChanges).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      plVar2 = *(longlong **)
                ((this->RegisteredAttributeChanges).AllocatorInstance.Data + lVar21 * 8);
      pcVar3 = *(code **)(*plVar2 + 0x30);
      uVar10 = 0;
      if ((int)uVar14 < (int)param_1->_padding_) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      (*pcVar3)(plVar2,*(undefined8 *)(param_1->_padding_ + lVar21 * 8),param_2);
      uVar14 = uVar14 + 1;
      lVar21 = lVar21 + 1;
    } while (lVar21 < lVar11);
  }
  uVar14 = 0;
  iVar7 = (**(code **)(param_1->_padding_ + 0xd8))(param_1);
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar14 < (this->WeightChanges).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      plVar2 = *(longlong **)((this->WeightChanges).AllocatorInstance.Data + lVar11 * 8);
      pcVar3 = *(code **)(*plVar2 + 0x30);
      uVar10 = 0;
      if ((int)uVar14 < (param_1->WeightLayers).Array.ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      (*pcVar3)(plVar2,*(undefined8 *)
                        ((param_1->WeightLayers).Array.AllocatorInstance.Data + lVar11 * 8),param_2)
      ;
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar7);
  }
  if ((this->ColorChange).bIsSet != false) {
    pTVar22 = &(this->ColorChange).TypedValue.NewTriangles;
    pTVar1 = &(this->ColorChange).TypedValue.OldTriangles;
    if (param_2) {
      pTVar12 = &(this->ColorChange).TypedValue.OldElementData;
      pTVar16 = pTVar22;
      pTVar19 = (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeElement,TSizedDefaultAllocator<32>_>
                 *)&this->ColorChange;
      pTVar22 = pTVar1;
    }
    else {
      pTVar12 = &(this->ColorChange).TypedValue.NewElementData;
      pTVar19 = &(this->ColorChange).TypedValue.NewElements;
      pTVar16 = pTVar1;
    }
    TDynamicMeshAttributeChange<float,4>::ApplyReplaceChange
              (&(this->ColorChange).TypedValue,
               (TDynamicMeshOverlay<float,4> *)(param_1->ColorLayer).Ptr,pTVar16,pTVar19,pTVar12,
               pTVar22);
  }
  if ((this->MaterialIDAttribChange).bIsSet != false) {
    (**(code **)((this->MaterialIDAttribChange).TypedValue._padding_ + 0x30))
              (&this->MaterialIDAttribChange,(param_1->MaterialIDAttrib).Ptr,param_2);
  }
  uVar14 = 0;
  iVar7 = (**(code **)(param_1->_padding_ + 200))(param_1);
  if (0 < (longlong)iVar7) {
    lVar11 = 0;
    lVar21 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar14 < (this->PolygroupChanges).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar20 = (this->PolygroupChanges).AllocatorInstance.Data + lVar21;
      pcVar3 = *(code **)(*(longlong *)pFVar20 + 0x30);
      uVar10 = 0;
      if ((int)uVar14 < (param_1->PolygroupLayers).Array.ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      (*pcVar3)(pFVar20,*(undefined8 *)
                         ((param_1->PolygroupLayers).Array.AllocatorInstance.Data + lVar11 * 8),
                param_2);
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 1;
      lVar21 = lVar21 + 0x28;
    } while (lVar11 < iVar7);
  }
  return true;
}

