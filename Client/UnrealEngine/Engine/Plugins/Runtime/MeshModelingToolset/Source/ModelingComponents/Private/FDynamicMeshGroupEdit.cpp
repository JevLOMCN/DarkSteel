// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// ~FDynamicMeshGroupEdit @ 14ca6acc0

void __thiscall FDynamicMeshGroupEdit::~FDynamicMeshGroupEdit(FDynamicMeshGroupEdit *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDynamicMeshGroupEdit__6B_;
  pFVar1 = (this->NewGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ApplyToMesh @ 14ca78f10

void __thiscall
FDynamicMeshGroupEdit::ApplyToMesh(FDynamicMeshGroupEdit *this,FDynamicMesh3 *param_1,bool param_2)

{
  longlong lVar1;
  FDynamicMeshAttributeSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *this_00;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = (longlong)(this->Triangles).ArrayNum;
  if (this->GroupLayerIndex < 0) {
    if ((param_1->TriangleGroups).bIsSet == false) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5815141270720348146>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Changes\\MeshPolygroupChange.cpp"
                         ,0xe,"Mesh->HasTriangleGroups()");
      if (bVar4) goto code_r0x00014ca79205;
    }
    else {
      uVar11 = 0;
      if (0 < lVar12) {
        lVar13 = 0;
        do {
          uVar10 = ~uVar11 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar11 < (this->Triangles).ArrayNum) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = *(uint *)((this->Triangles).AllocatorInstance.Data + lVar13 * 4);
          if ((-1 < (int)uVar5) &&
             ((int)uVar5 <
              (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            lVar1 = (ulonglong)(uVar5 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                      AllocatorInstance.Data + lVar1) +
                                   (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
              if (param_2) {
                uVar6 = 0;
                if ((int)uVar11 < (this->OldGroups).ArrayNum) {
                  uVar6 = uVar10;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar9 = (this->OldGroups).AllocatorInstance.Data;
              }
              else {
                uVar6 = 0;
                if ((int)uVar11 < (this->NewGroups).ArrayNum) {
                  uVar6 = uVar10;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar9 = (this->NewGroups).AllocatorInstance.Data;
              }
              iVar7 = *(int *)(pFVar9 + lVar13 * 4);
              if ((param_1->TriangleGroups).bIsSet != false) {
                *(int *)(*(longlong *)
                          ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                          lVar1) + (ulonglong)(uVar5 & 0x1ff) * 4) = iVar7;
                iVar7 = iVar7 + 1;
                if (iVar7 < param_1->GroupIDCounter) {
                  iVar7 = param_1->GroupIDCounter;
                }
                param_1->GroupIDCounter = iVar7;
              }
            }
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < lVar12);
      }
    }
  }
  else {
    pFVar2 = (param_1->AttributeSet).Ptr;
    if (pFVar2 == (FDynamicMeshAttributeSet *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5815141270720348132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Changes\\MeshPolygroupChange.cpp"
                         ,0x1c,"Mesh->HasAttributes()");
      if (bVar4) {
code_r0x00014ca79205:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      iVar7 = (**(code **)(pFVar2->_padding_ + 200))();
      if (iVar7 < this->GroupLayerIndex) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5815141270720348131>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Changes\\MeshPolygroupChange.cpp"
                           ,0x1d,"GroupLayerIndex <= Mesh->Attributes()->NumPolygroupLayers()");
        if (bVar4) goto code_r0x00014ca79205;
      }
      else {
        pFVar2 = (param_1->AttributeSet).Ptr;
        this_00 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
          this_00 = pFVar2;
        }
        pTVar8 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                           (this_00,this->GroupLayerIndex);
        if (pTVar8 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5815141270720348128>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Changes\\MeshPolygroupChange.cpp"
                             ,0x20,"PolygroupLayer");
          if (bVar4) goto code_r0x00014ca79205;
        }
        else {
          uVar11 = 0;
          if (0 < lVar12) {
            lVar13 = 0;
            do {
              uVar10 = ~uVar11 >> 0x1f;
              uVar5 = 0;
              if ((int)uVar11 < (this->Triangles).ArrayNum) {
                uVar5 = uVar10;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar5 = *(uint *)((this->Triangles).AllocatorInstance.Data + lVar13 * 4);
              if ((-1 < (int)uVar5) &&
                 ((int)uVar5 <
                  (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
                lVar1 = (ulonglong)(uVar5 >> 9) * 8;
                if ((ushort)(*(short *)(*(longlong *)
                                         ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + lVar1) +
                                       (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
                  if (param_2) {
                    uVar6 = 0;
                    if ((int)uVar11 < (this->OldGroups).ArrayNum) {
                      uVar6 = uVar10;
                    }
                    if ((uVar6 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pFVar9 = (this->OldGroups).AllocatorInstance.Data;
                  }
                  else {
                    uVar6 = 0;
                    if ((int)uVar11 < (this->NewGroups).ArrayNum) {
                      uVar6 = uVar10;
                    }
                    if ((uVar6 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pFVar9 = (this->NewGroups).AllocatorInstance.Data;
                  }
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)&pTVar8->field_0x20 + lVar1) +
                   (ulonglong)(uVar5 & 0x1ff) * 4) = *(undefined4 *)(pFVar9 + lVar13 * 4);
                }
              }
              uVar11 = uVar11 + 1;
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar12);
          }
        }
      }
    }
  }
  return;
}

