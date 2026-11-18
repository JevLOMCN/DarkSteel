// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 15

// FMeshVertexChangeBuilder @ 1496f8c90

FMeshVertexChangeBuilder * __thiscall
FMeshVertexChangeBuilder::FMeshVertexChangeBuilder
          (FMeshVertexChangeBuilder *this,EMeshVertexChangeComponents param_1)

{
  FMeshVertexChange *pFVar1;
  longlong lVar2;
  bool bVar3;
  FMeshVertexChange *pFVar4;
  bool bVar5;
  
  pFVar4 = (FMeshVertexChange *)0x0;
  (this->Change).Ptr = (FMeshVertexChange *)0x0;
  *(undefined8 *)&this->SavedVertices = 0;
  *(undefined8 *)&(this->SavedVertices).field_0x8 = 0;
  *(undefined8 *)&(this->SavedVertices).field_0x20 = 0;
  *(undefined4 *)&(this->SavedVertices).field_0x28 = 0;
  *(undefined4 *)&(this->SavedVertices).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedVertices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedVertices).field_0x34 = 0;
  *(undefined8 *)&(this->SavedVertices).field_0x40 = 0;
  *(undefined4 *)&(this->SavedVertices).field_0x48 = 0;
  this->bSavePositions = true;
  this->bSaveColors = false;
  this->bSaveOverlayNormals = false;
  *(undefined8 *)&this->SavedNormalElements = 0;
  *(undefined8 *)&(this->SavedNormalElements).field_0x8 = 0;
  *(undefined8 *)&(this->SavedNormalElements).field_0x20 = 0;
  *(undefined4 *)&(this->SavedNormalElements).field_0x28 = 0;
  *(undefined4 *)&(this->SavedNormalElements).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedNormalElements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedNormalElements).field_0x34 = 0;
  *(undefined8 *)&(this->SavedNormalElements).field_0x40 = 0;
  *(undefined4 *)&(this->SavedNormalElements).field_0x48 = 0;
  this->bSaveOverlayUVs = false;
  *(undefined8 *)&this->SavedUVElements = 0;
  *(undefined8 *)&(this->SavedUVElements).field_0x8 = 0;
  *(undefined8 *)&(this->SavedUVElements).field_0x20 = 0;
  *(undefined4 *)&(this->SavedUVElements).field_0x28 = 0;
  *(undefined4 *)&(this->SavedUVElements).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedUVElements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedUVElements).field_0x34 = 0;
  *(undefined8 *)&(this->SavedUVElements).field_0x40 = 0;
  *(undefined4 *)&(this->SavedUVElements).field_0x48 = 0;
  *(undefined8 *)&this->OnNewVertexSaved = 0;
  *(undefined8 *)&(this->OnNewVertexSaved).field_0x28 = 0;
  pFVar1 = ::operator_new(0xd0);
  if (pFVar1 != (FMeshVertexChange *)0x0) {
    *(undefined4 *)&pFVar1->field_0xa = 0;
    *(undefined2 *)&pFVar1->field_0xe = 0;
    *(undefined4 *)&pFVar1->field_0x61 = 0;
    *(undefined2 *)&pFVar1->field_0x65 = 0;
    pFVar1->field_0x67 = 0;
    *(undefined4 *)&pFVar1->field_0x99 = 0;
    *(undefined2 *)&pFVar1->field_0x9d = 0;
    pFVar1->field_0x9f = 0;
    pFVar1->_padding_ = (longlong)&___7FMeshVertexChange__6B_;
    pFVar1->bHaveVertexPositions = true;
    pFVar1->bHaveVertexColors = false;
    (pFVar1->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Vertices).ArrayNum = 0;
    (pFVar1->Vertices).ArrayMax = 0;
    (pFVar1->OldPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OldPositions).ArrayNum = 0;
    (pFVar1->OldPositions).ArrayMax = 0;
    (pFVar1->NewPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->NewPositions).ArrayNum = 0;
    (pFVar1->NewPositions).ArrayMax = 0;
    (pFVar1->OldColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OldColors).ArrayNum = 0;
    (pFVar1->OldColors).ArrayMax = 0;
    (pFVar1->NewColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->NewColors).ArrayNum = 0;
    (pFVar1->NewColors).ArrayMax = 0;
    pFVar1->bHaveOverlayNormals = false;
    (pFVar1->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Normals).ArrayNum = 0;
    (pFVar1->Normals).ArrayMax = 0;
    (pFVar1->OldNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OldNormals).ArrayNum = 0;
    (pFVar1->OldNormals).ArrayMax = 0;
    (pFVar1->NewNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->NewNormals).ArrayNum = 0;
    (pFVar1->NewNormals).ArrayMax = 0;
    pFVar1->bHaveOverlayUVs = false;
    (pFVar1->UVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->UVs).ArrayNum = 0;
    (pFVar1->UVs).ArrayMax = 0;
    (pFVar1->OldUVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OldUVs).ArrayNum = 0;
    (pFVar1->OldUVs).ArrayMax = 0;
    (pFVar1->NewUVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->NewUVs).ArrayNum = 0;
    (pFVar1->NewUVs).ArrayMax = 0;
    pFVar4 = pFVar1;
  }
  if (this == (FMeshVertexChangeBuilder *)&stack0xffffffffffffffe8) {
    if (pFVar4 == (FMeshVertexChange *)0x0) goto LAB_1496f8e6a;
    lVar2 = pFVar4->_padding_;
  }
  else {
    pFVar1 = (this->Change).Ptr;
    (this->Change).Ptr = pFVar4;
    if (pFVar1 == (FMeshVertexChange *)0x0) goto LAB_1496f8e6a;
    lVar2 = pFVar1->_padding_;
    pFVar4 = pFVar1;
  }
  (**(code **)(lVar2 + 0x48))(pFVar4,1);
LAB_1496f8e6a:
  pFVar4 = (this->Change).Ptr;
  this->bSavePositions = (bool)(param_1 & VertexPositions);
  pFVar4->bHaveVertexPositions = (bool)(param_1 & VertexPositions);
  pFVar4 = (this->Change).Ptr;
  bVar3 = (bool)(param_1 >> 1 & 1);
  this->bSaveColors = bVar3;
  pFVar4->bHaveVertexColors = bVar3;
  pFVar4 = (this->Change).Ptr;
  bVar3 = (bool)(param_1 >> 4 & 1);
  this->bSaveOverlayNormals = bVar3;
  bVar5 = (bool)(param_1 >> 2 & 1);
  pFVar4->bHaveOverlayNormals = bVar3;
  pFVar4 = (this->Change).Ptr;
  this->bSaveOverlayUVs = bVar5;
  pFVar4->bHaveOverlayUVs = bVar5;
  return this;
}

// FMeshVertexChangeBuilder @ 1496f8ee0

FMeshVertexChangeBuilder * __thiscall
FMeshVertexChangeBuilder::FMeshVertexChangeBuilder(FMeshVertexChangeBuilder *this)

{
  FMeshVertexChange *pFVar1;
  longlong lVar2;
  FMeshVertexChange *pFVar3;
  
  pFVar3 = (FMeshVertexChange *)0x0;
  (this->Change).Ptr = (FMeshVertexChange *)0x0;
  *(undefined8 *)&this->SavedVertices = 0;
  *(undefined8 *)&(this->SavedVertices).field_0x8 = 0;
  *(undefined8 *)&(this->SavedVertices).field_0x20 = 0;
  *(undefined4 *)&(this->SavedVertices).field_0x28 = 0;
  *(undefined4 *)&(this->SavedVertices).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedVertices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedVertices).field_0x34 = 0;
  *(undefined8 *)&(this->SavedVertices).field_0x40 = 0;
  *(undefined4 *)&(this->SavedVertices).field_0x48 = 0;
  *(undefined8 *)&this->SavedNormalElements = 0;
  *(undefined8 *)&(this->SavedNormalElements).field_0x8 = 0;
  *(undefined8 *)&(this->SavedNormalElements).field_0x20 = 0;
  this->bSavePositions = true;
  this->bSaveColors = false;
  this->bSaveOverlayNormals = false;
  *(undefined4 *)&(this->SavedNormalElements).field_0x28 = 0;
  *(undefined4 *)&(this->SavedNormalElements).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedNormalElements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedNormalElements).field_0x34 = 0;
  *(undefined8 *)&(this->SavedNormalElements).field_0x40 = 0;
  *(undefined4 *)&(this->SavedNormalElements).field_0x48 = 0;
  this->bSaveOverlayUVs = false;
  *(undefined8 *)&this->SavedUVElements = 0;
  *(undefined8 *)&(this->SavedUVElements).field_0x8 = 0;
  *(undefined8 *)&(this->SavedUVElements).field_0x20 = 0;
  *(undefined4 *)&(this->SavedUVElements).field_0x28 = 0;
  *(undefined4 *)&(this->SavedUVElements).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedUVElements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedUVElements).field_0x34 = 0;
  *(undefined8 *)&(this->SavedUVElements).field_0x40 = 0;
  *(undefined4 *)&(this->SavedUVElements).field_0x48 = 0;
  *(undefined8 *)&this->OnNewVertexSaved = 0;
  *(undefined8 *)&(this->OnNewVertexSaved).field_0x28 = 0;
  pFVar1 = ::operator_new(0xd0);
  if (pFVar1 != (FMeshVertexChange *)0x0) {
    *(undefined4 *)&pFVar1->field_0xa = 0;
    *(undefined2 *)&pFVar1->field_0xe = 0;
    *(undefined4 *)&pFVar1->field_0x61 = 0;
    *(undefined2 *)&pFVar1->field_0x65 = 0;
    pFVar1->field_0x67 = 0;
    *(undefined4 *)&pFVar1->field_0x99 = 0;
    *(undefined2 *)&pFVar1->field_0x9d = 0;
    pFVar1->field_0x9f = 0;
    pFVar1->_padding_ = (longlong)&___7FMeshVertexChange__6B_;
    pFVar1->bHaveVertexPositions = true;
    pFVar1->bHaveVertexColors = false;
    (pFVar1->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Vertices).ArrayNum = 0;
    (pFVar1->Vertices).ArrayMax = 0;
    (pFVar1->OldPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OldPositions).ArrayNum = 0;
    (pFVar1->OldPositions).ArrayMax = 0;
    (pFVar1->NewPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->NewPositions).ArrayNum = 0;
    (pFVar1->NewPositions).ArrayMax = 0;
    (pFVar1->OldColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OldColors).ArrayNum = 0;
    (pFVar1->OldColors).ArrayMax = 0;
    (pFVar1->NewColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->NewColors).ArrayNum = 0;
    (pFVar1->NewColors).ArrayMax = 0;
    pFVar1->bHaveOverlayNormals = false;
    (pFVar1->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Normals).ArrayNum = 0;
    (pFVar1->Normals).ArrayMax = 0;
    (pFVar1->OldNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OldNormals).ArrayNum = 0;
    (pFVar1->OldNormals).ArrayMax = 0;
    (pFVar1->NewNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->NewNormals).ArrayNum = 0;
    (pFVar1->NewNormals).ArrayMax = 0;
    pFVar1->bHaveOverlayUVs = false;
    (pFVar1->UVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->UVs).ArrayNum = 0;
    (pFVar1->UVs).ArrayMax = 0;
    (pFVar1->OldUVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OldUVs).ArrayNum = 0;
    (pFVar1->OldUVs).ArrayMax = 0;
    (pFVar1->NewUVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->NewUVs).ArrayNum = 0;
    (pFVar1->NewUVs).ArrayMax = 0;
    pFVar3 = pFVar1;
  }
  if (this == (FMeshVertexChangeBuilder *)&stack0xffffffffffffffe8) {
    if (pFVar3 == (FMeshVertexChange *)0x0) {
      return this;
    }
    lVar2 = pFVar3->_padding_;
  }
  else {
    pFVar1 = (this->Change).Ptr;
    (this->Change).Ptr = pFVar3;
    if (pFVar1 == (FMeshVertexChange *)0x0) {
      return this;
    }
    lVar2 = pFVar1->_padding_;
    pFVar3 = pFVar1;
  }
  (**(code **)(lVar2 + 0x48))(pFVar3,1);
  return this;
}

// SaveOverlayNormals @ 1497171f0

void __thiscall
FMeshVertexChangeBuilder::SaveOverlayNormals
          (FMeshVertexChangeBuilder *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_28;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->NormalLayers).Array.ArrayNum))
     && (pFVar2 = (pFVar1->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar2 != 0)) {
    lVar3 = *(longlong *)pFVar2;
    lVar10 = (longlong)param_2->ArrayNum;
    uVar8 = 0;
    if (param_3) {
      if (0 < lVar10) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < param_2->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)(lVar3 + 0x48);
          uVar7 = *(int *)((param_2->AllocatorInstance).Data + lVar9 * 4) * 3;
          local_38._s_0.X =
               *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
          local_38._s_0.Y =
               *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                         (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          local_38._s_0.Z =
               *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                         (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          uVar7 = 0;
          if ((int)uVar8 < param_2->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UpdateOverlayNormal(this,*(int *)((param_2->AllocatorInstance).Data + lVar9 * 4),
                              (TVector<float> *)&local_38._s_0,(TVector<float> *)&local_38._s_0);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar10);
      }
    }
    else if (0 < lVar10) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)(lVar3 + 0x48);
        uVar7 = *(int *)((param_2->AllocatorInstance).Data + lVar9 * 4) * 3;
        local_28._s_0.X =
             *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
        local_28._s_0.Y =
             *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
        local_28._s_0.Z =
             *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                       (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
        uVar7 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UpdateOverlayNormalFinal
                  (this,*(int *)((param_2->AllocatorInstance).Data + lVar9 * 4),
                   (TVector<float> *)&local_28._s_0);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar10);
    }
  }
  return;
}

// SaveOverlayNormals @ 1497174e0

void __thiscall
FMeshVertexChangeBuilder::SaveOverlayNormals
          (FMeshVertexChangeBuilder *this,FDynamicMesh3 *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,bool param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_118 [8];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  TVector<float>_u_0 local_e0;
  TVector<float>_u_0 local_d0;
  int local_c0;
  int local_bc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  pFVar5 = (param_1->AttributeSet).Ptr;
  if (((pFVar5 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar5->NormalLayers).Array.ArrayNum))
     && (pFVar6 = (pFVar5->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar6 != 0)) {
    iVar3 = *(int *)&(param_2->Elements).field_0x28;
    iStack_108 = 0;
    puVar1 = &(param_2->Elements).field_0x10;
    lVar7 = *(longlong *)pFVar6;
    local_f0 = 0;
    uStack_104 = 1;
    iStack_f4 = 0;
    local_110 = param_2;
    local_100 = puVar1;
    if (param_3) {
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(param_2->Elements).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)puVar1;
        }
        uVar12 = *puVar15;
        while (uVar12 == 0) {
          lVar11 = (longlong)iStack_108;
          local_f0 = local_f0 + 0x20;
          iStack_108 = iStack_108 + 1;
          iStack_f4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108)
          goto LAB_1497175cf;
          uVar12 = puVar15[lVar11 + 1];
        }
        uStack_104 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_104 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_c0 = (int)lVar11;
        iStack_f4 = local_c0 + -1 + local_f0;
        if (iVar3 < iStack_f4) {
          iStack_f4 = iVar3;
        }
      }
LAB_1497175cf:
      uVar12 = *(uint *)&(param_2->Elements).field_0x28;
      uVar16 = uVar12 & 0xffffffe0;
      iStack_e8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
      uStack_f8 = 0xffffffff;
      TStack_b0._padding_ = CONCAT44(uStack_104,iStack_108);
      TStack_b0.CurrentBitIndex = iStack_f4;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar12 >> 5;
      TStack_b0._28_4_ = local_3c;
      TStack_b0.BaseBitIndex = local_f0;
      uStack_90 = CONCAT44(uStack_e4,iStack_e8);
      local_b8 = param_2;
      TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)&(param_2->Elements).field_0x28;
      if (uVar12 != uVar4) {
        puVar14 = *(undefined1 **)&(param_2->Elements).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar13;
          uVar16 = uVar16 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_1497176e0;
          uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar12 = (int)lVar11 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar12) {
          uVar12 = uVar4;
        }
      }
LAB_1497176e0:
      while( true ) {
        pTVar9 = local_b8;
        if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
            (int)uStack_90) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_b0.CurrentBitIndex == uVar12) &&
            (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == param_2)) break;
        lVar11 = *(longlong *)(lVar7 + 0x48);
        iVar3 = *(int *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_b0.CurrentBitIndex * 0xc)
        ;
        uVar16 = iVar3 * 3;
        local_e0._s_0.X =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar16 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 4);
        local_e0._s_0.Y =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                       (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
        local_e0._s_0.Z =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                       (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
        UpdateOverlayNormal(this,iVar3,(TVector<float> *)&local_e0._s_0,
                            (TVector<float> *)&local_e0._s_0);
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      }
    }
    else {
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(param_2->Elements).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)puVar1;
        }
        uVar12 = *puVar15;
        while (uVar12 == 0) {
          lVar11 = (longlong)iStack_108;
          local_f0 = local_f0 + 0x20;
          iStack_108 = iStack_108 + 1;
          iStack_f4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108)
          goto LAB_14971780f;
          uVar12 = puVar15[lVar11 + 1];
        }
        uStack_104 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_104 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_bc = (int)lVar11;
        iStack_f4 = local_bc + -1 + local_f0;
        if (iVar3 < iStack_f4) {
          iStack_f4 = iVar3;
        }
      }
LAB_14971780f:
      uVar12 = *(uint *)&(param_2->Elements).field_0x28;
      uVar16 = uVar12 & 0xffffffe0;
      iStack_e8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
      uStack_f8 = 0xffffffff;
      TStack_80._padding_ = CONCAT44(uStack_104,iStack_108);
      TStack_80.CurrentBitIndex = iStack_f4;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar12 >> 5;
      TStack_80._28_4_ = iStack_f4;
      TStack_80.BaseBitIndex = local_f0;
      uStack_60 = CONCAT44(uStack_e4,iStack_e8);
      iStack_ec = iStack_f4;
      local_88 = param_2;
      TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)&(param_2->Elements).field_0x28;
      if (uVar12 != uVar4) {
        puVar14 = *(undefined1 **)&(param_2->Elements).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar13;
          uVar16 = uVar16 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_149717920;
          uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar12 = (int)lVar11 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar12) {
          uVar12 = uVar4;
        }
      }
LAB_149717920:
      while( true ) {
        pTVar9 = local_88;
        if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
            (int)uStack_60) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
        }
        if (((TStack_80.CurrentBitIndex == uVar12) &&
            (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == param_2)) break;
        lVar11 = *(longlong *)(lVar7 + 0x48);
        iVar3 = *(int *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_80.CurrentBitIndex * 0xc)
        ;
        uVar16 = iVar3 * 3;
        local_d0._s_0.X =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar16 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 4);
        local_d0._s_0.Y =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                       (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
        local_d0._s_0.Z =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                       (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
        UpdateOverlayNormalFinal(this,iVar3,(TVector<float> *)&local_d0._s_0);
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      }
    }
  }
  return;
}

// SaveOverlayUVs @ 149717a30

void __thiscall
FMeshVertexChangeBuilder::SaveOverlayUVs
          (FMeshVertexChangeBuilder *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  TVector2<float>_u_0 local_res10;
  TVector2<float>_u_0 local_38 [2];
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->UVLayers).Array.ArrayNum)) &&
     (pFVar2 = (pFVar1->UVLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar2 != 0)) {
    lVar3 = *(longlong *)pFVar2;
    lVar10 = (longlong)param_2->ArrayNum;
    uVar8 = 0;
    if (param_3) {
      if (0 < lVar10) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < param_2->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)(lVar3 + 0x48);
          uVar7 = *(uint *)((param_2->AllocatorInstance).Data + lVar9 * 4);
          local_res10._s_0.X =
               *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
          local_res10._s_0.Y =
               *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
          uVar7 = 0;
          if ((int)uVar8 < param_2->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UpdateOverlayUV(this,*(int *)((param_2->AllocatorInstance).Data + lVar9 * 4),
                          (TVector2<float> *)&local_res10._s_0,(TVector2<float> *)&local_res10._s_0)
          ;
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar10);
      }
    }
    else if (0 < lVar10) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)(lVar3 + 0x48);
        uVar7 = *(uint *)((param_2->AllocatorInstance).Data + lVar9 * 4);
        local_38[0]._0_4_ =
             *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
        local_38[0]._4_4_ =
             *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
        uVar7 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UpdateOverlayUVFinal
                  (this,*(int *)((param_2->AllocatorInstance).Data + lVar9 * 4),
                   (TVector2<float> *)&local_38[0]._s_0);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar10);
    }
  }
  return;
}

// SaveOverlayUVs @ 149717cf0

void __thiscall
FMeshVertexChangeBuilder::SaveOverlayUVs
          (FMeshVertexChangeBuilder *this,FDynamicMesh3 *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,bool param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_108 [8];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TVector2<float>_u_0 local_d0;
  TVector2<float>_u_0 local_c8;
  int local_c0;
  int local_bc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  pFVar5 = (param_1->AttributeSet).Ptr;
  if (((pFVar5 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar5->UVLayers).Array.ArrayNum)) &&
     (pFVar6 = (pFVar5->UVLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar6 != 0)) {
    iVar3 = *(int *)&(param_2->Elements).field_0x28;
    iStack_f8 = 0;
    puVar1 = &(param_2->Elements).field_0x10;
    lVar7 = *(longlong *)pFVar6;
    local_e0 = 0;
    uStack_f4 = 1;
    iStack_e4 = 0;
    local_100 = param_2;
    local_f0 = puVar1;
    if (param_3) {
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(param_2->Elements).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)puVar1;
        }
        uVar12 = *puVar15;
        while (uVar12 == 0) {
          lVar11 = (longlong)iStack_f8;
          local_e0 = local_e0 + 0x20;
          iStack_f8 = iStack_f8 + 1;
          iStack_e4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_149717ddf;
          uVar12 = puVar15[lVar11 + 1];
        }
        uStack_f4 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_f4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_c0 = (int)lVar11;
        iStack_e4 = local_c0 + -1 + local_e0;
        if (iVar3 < iStack_e4) {
          iStack_e4 = iVar3;
        }
      }
LAB_149717ddf:
      uVar12 = *(uint *)&(param_2->Elements).field_0x28;
      uVar16 = uVar12 & 0xffffffe0;
      iStack_d8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
      uStack_e8 = 0xffffffff;
      TStack_b0._padding_ = CONCAT44(uStack_f4,iStack_f8);
      TStack_b0.CurrentBitIndex = iStack_e4;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar12 >> 5;
      TStack_b0._28_4_ = local_3c;
      TStack_b0.BaseBitIndex = local_e0;
      uStack_90 = CONCAT44(uStack_d4,iStack_d8);
      local_b8 = param_2;
      TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)&(param_2->Elements).field_0x28;
      if (uVar12 != uVar4) {
        puVar14 = *(undefined1 **)&(param_2->Elements).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar13;
          uVar16 = uVar16 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_149717ef0;
          uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar12 = (int)lVar11 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar12) {
          uVar12 = uVar4;
        }
      }
LAB_149717ef0:
      while( true ) {
        pTVar9 = local_b8;
        if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
            (int)uStack_90) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_b0.CurrentBitIndex == uVar12) &&
            (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == param_2)) break;
        lVar11 = *(longlong *)(lVar7 + 0x48);
        uVar16 = *(uint *)(*(longlong *)&pTVar9->Elements +
                          (longlong)TStack_b0.CurrentBitIndex * 0xc);
        local_d0._s_0.X =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar16 * 2 & 0x1ff) * 4);
        local_d0._s_0.Y =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar16 * 2 + 1 & 0x1ff) * 4);
        UpdateOverlayUV(this,uVar16,(TVector2<float> *)&local_d0._s_0,
                        (TVector2<float> *)&local_d0._s_0);
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      }
    }
    else {
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(param_2->Elements).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)puVar1;
        }
        uVar12 = *puVar15;
        while (uVar12 == 0) {
          lVar11 = (longlong)iStack_f8;
          local_e0 = local_e0 + 0x20;
          iStack_f8 = iStack_f8 + 1;
          iStack_e4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14971800f;
          uVar12 = puVar15[lVar11 + 1];
        }
        uStack_f4 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_f4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_bc = (int)lVar11;
        iStack_e4 = local_bc + -1 + local_e0;
        if (iVar3 < iStack_e4) {
          iStack_e4 = iVar3;
        }
      }
LAB_14971800f:
      uVar12 = *(uint *)&(param_2->Elements).field_0x28;
      uVar16 = uVar12 & 0xffffffe0;
      iStack_d8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
      uStack_e8 = 0xffffffff;
      TStack_80._padding_ = CONCAT44(uStack_f4,iStack_f8);
      TStack_80.CurrentBitIndex = iStack_e4;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar12 >> 5;
      TStack_80._28_4_ = iStack_e4;
      TStack_80.BaseBitIndex = local_e0;
      uStack_60 = CONCAT44(uStack_d4,iStack_d8);
      iStack_dc = iStack_e4;
      local_88 = param_2;
      TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)&(param_2->Elements).field_0x28;
      if (uVar12 != uVar4) {
        puVar14 = *(undefined1 **)&(param_2->Elements).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar13;
          uVar16 = uVar16 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_149718120;
          uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar12 = (int)lVar11 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar12) {
          uVar12 = uVar4;
        }
      }
LAB_149718120:
      while( true ) {
        pTVar9 = local_88;
        if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
            (int)uStack_60) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
        }
        if (((TStack_80.CurrentBitIndex == uVar12) &&
            (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == param_2)) break;
        lVar11 = *(longlong *)(lVar7 + 0x48);
        uVar16 = *(uint *)(*(longlong *)&pTVar9->Elements +
                          (longlong)TStack_80.CurrentBitIndex * 0xc);
        local_c8._s_0.X =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar16 * 2 & 0x1ff) * 4);
        local_c8._s_0.Y =
             *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar16 * 2 + 1 & 0x1ff) * 4);
        UpdateOverlayUVFinal(this,uVar16,(TVector2<float> *)&local_c8._s_0);
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      }
    }
  }
  return;
}

// SaveVertexFinal @ 149718210

void __thiscall
FMeshVertexChangeBuilder::SaveVertexFinal
          (FMeshVertexChangeBuilder *this,FDynamicMesh3 *param_1,int param_2)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  FMeshVertexChange *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if (*(int *)&(this->SavedVertices).field_0x8 != *(int *)&(this->SavedVertices).field_0x34) {
    puVar16 = *(undefined1 **)&(this->SavedVertices).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->SavedVertices).field_0x38;
    }
    iVar11 = *(int *)(puVar16 +
                     (ulonglong)(*(int *)&(this->SavedVertices).field_0x48 - 1U & param_2) * 4);
    if (iVar11 != -1) {
      while (piVar14 = (int *)((longlong)iVar11 * 0x10 + *(longlong *)&this->SavedVertices),
            *piVar14 != param_2) {
        iVar11 = piVar14[2];
        if (iVar11 == -1) {
          return;
        }
      }
      puVar13 = (uint *)(piVar14 + 1);
      if (piVar14 == (int *)0x0) {
        puVar13 = (uint *)0x0;
      }
      if (puVar13 != (uint *)0x0) {
        uVar4 = *puVar13;
        lVar15 = (longlong)(int)uVar4;
        if (this->bSavePositions != false) {
          lVar5 = *(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)param_2 >> 9) * 8);
          puVar1 = (undefined4 *)(lVar5 + (ulonglong)(param_2 & 0x1ff) * 0x18);
          uVar17 = *puVar1;
          uVar18 = puVar1[1];
          uVar19 = puVar1[2];
          uVar9 = puVar1[3];
          uVar3 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
          pFVar6 = (this->Change).Ptr;
          uVar12 = 0;
          if ((int)uVar4 < (pFVar6->NewPositions).ArrayNum) {
            uVar12 = ~uVar4 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (pFVar6->NewPositions).AllocatorInstance.Data;
          pFVar2 = pFVar7 + lVar15 * 0x18;
          *(undefined4 *)pFVar2 = uVar17;
          *(undefined4 *)(pFVar2 + 4) = uVar18;
          *(undefined4 *)(pFVar2 + 8) = uVar19;
          *(undefined4 *)(pFVar2 + 0xc) = uVar9;
          *(undefined8 *)(pFVar7 + lVar15 * 0x18 + 0x10) = uVar3;
        }
        if (this->bSaveColors != false) {
          if ((param_1->VertexColors).bIsSet == false) {
            uVar18 = (undefined4)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
            uVar19 = (undefined4)
                     ((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
            uVar17 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
          }
          else {
            lVar5 = *(longlong *)
                     ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_2 >> 9) * 8);
            uVar3 = *(undefined8 *)(lVar5 + (ulonglong)(param_2 & 0x1ff) * 0xc);
            uVar18 = (undefined4)uVar3;
            uVar19 = (undefined4)((ulonglong)uVar3 >> 0x20);
            uVar17 = *(float *)(lVar5 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
          }
          pFVar6 = (this->Change).Ptr;
          uVar12 = 0;
          if ((int)uVar4 < (pFVar6->NewColors).ArrayNum) {
            uVar12 = ~uVar4 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar2 = (pFVar6->NewColors).AllocatorInstance.Data;
          *(ulonglong *)(pFVar2 + lVar15 * 0xc) = CONCAT44(uVar19,uVar18);
          *(undefined4 *)(pFVar2 + lVar15 * 0xc + 8) = uVar17;
        }
      }
    }
  }
  return;
}

// SaveVertexInitial @ 149718460

void __thiscall
FMeshVertexChangeBuilder::SaveVertexInitial
          (FMeshVertexChangeBuilder *this,FDynamicMesh3 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  FMeshVertexChange *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  int *piVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int local_res8 [2];
  uint local_res18 [2];
  int local_res20 [2];
  uint local_98 [2];
  TPairInitializer<int_const_&,int_const_&> local_90;
  undefined8 local_80;
  float local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint *local_60;
  int *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_res18[0] = param_2;
  if (*(int *)&(this->SavedVertices).field_0x8 != *(int *)&(this->SavedVertices).field_0x34) {
    puVar17 = *(undefined1 **)&(this->SavedVertices).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->SavedVertices).field_0x38;
    }
    iVar11 = *(int *)(puVar17 +
                     (ulonglong)(*(int *)&(this->SavedVertices).field_0x48 - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        piVar15 = (int *)((longlong)iVar11 * 0x10 + *(longlong *)&this->SavedVertices);
        if (*piVar15 == param_2) {
          puVar13 = (uint *)(piVar15 + 1);
          if (piVar15 == (int *)0x0) {
            puVar13 = (uint *)0x0;
          }
          if (puVar13 != (uint *)0x0) {
            uVar3 = *puVar13;
            lVar19 = (longlong)(int)uVar3;
            if (this->bSavePositions != false) {
              pFVar4 = (this->Change).Ptr;
              lVar7 = *(longlong *)
                       ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)param_2 >> 9) * 8);
              puVar2 = (undefined4 *)(lVar7 + (ulonglong)(param_2 & 0x1ff) * 0x18);
              local_70 = *puVar2;
              uStack_6c = puVar2[1];
              uStack_68 = puVar2[2];
              uStack_64 = puVar2[3];
              local_90.Value = *(int **)(lVar7 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
              uVar12 = 0;
              if ((int)uVar3 < (pFVar4->NewPositions).ArrayNum) {
                uVar12 = ~uVar3 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar6 = (pFVar4->NewPositions).AllocatorInstance.Data;
              pFVar5 = pFVar6 + lVar19 * 0x18;
              *(undefined4 *)pFVar5 = local_70;
              *(undefined4 *)(pFVar5 + 4) = uStack_6c;
              *(undefined4 *)(pFVar5 + 8) = uStack_68;
              *(undefined4 *)(pFVar5 + 0xc) = uStack_64;
              *(int **)(pFVar6 + lVar19 * 0x18 + 0x10) = local_90.Value;
            }
            if (this->bSaveColors == false) {
              return;
            }
            if ((param_1->VertexColors).bIsSet == false) {
              uVar20 = (undefined4)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
              uVar21 = (undefined4)
                       ((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
              uVar18 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
            }
            else {
              lVar7 = *(longlong *)
                       ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_res18[0] >> 9) * 8);
              uVar14 = *(undefined8 *)(lVar7 + (ulonglong)(local_res18[0] & 0x1ff) * 0xc);
              uVar20 = (undefined4)uVar14;
              uVar21 = (undefined4)((ulonglong)uVar14 >> 0x20);
              uVar18 = *(float *)(lVar7 + 8 + (ulonglong)(local_res18[0] & 0x1ff) * 0xc);
            }
            pFVar4 = (this->Change).Ptr;
            local_90.Value = (int *)CONCAT44(uVar21,uVar20);
            uVar12 = 0;
            if ((int)uVar3 < (pFVar4->NewColors).ArrayNum) {
              uVar12 = ~uVar3 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar5 = (pFVar4->NewColors).AllocatorInstance.Data;
            *(int **)(pFVar5 + lVar19 * 0xc) = local_90.Value;
            *(undefined4 *)(pFVar5 + lVar19 * 0xc + 8) = uVar18;
            return;
          }
          break;
        }
        iVar11 = piVar15[2];
      } while (iVar11 != -1);
    }
  }
  local_res8[0] = (((this->Change).Ptr)->Vertices).ArrayNum;
  local_60 = local_res18;
  local_58 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedVertices,&local_90,(bool *)&local_60);
  pFVar4 = (this->Change).Ptr;
  pFVar5 = (pFVar4->Vertices).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)local_res18) &&
      ((FScriptContainerElement *)local_res18 < pFVar5 + (longlong)(pFVar4->Vertices).ArrayMax * 4))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar11 = (pFVar4->Vertices).ArrayNum;
  piVar15 = &(pFVar4->Vertices).ArrayMax;
  if (iVar11 == *piVar15) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&(pFVar4->Vertices).AllocatorInstance,piVar15);
  }
  (pFVar4->Vertices).ArrayNum = iVar11 + 1;
  *(uint *)((pFVar4->Vertices).AllocatorInstance.Data + (longlong)iVar11 * 4) = local_res18[0];
  if (this->bSavePositions != false) {
    pFVar4 = (this->Change).Ptr;
    lVar19 = *(longlong *)
              ((param_1->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_res18[0] >> 9) * 8);
    puVar1 = (undefined8 *)(lVar19 + (ulonglong)(local_res18[0] & 0x1ff) * 0x18);
    local_50 = *puVar1;
    uStack_48 = puVar1[1];
    local_40 = *(undefined8 *)(lVar19 + 0x10 + (ulonglong)(local_res18[0] & 0x1ff) * 0x18);
    pFVar5 = (pFVar4->OldPositions).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 <
         pFVar5 + (longlong)(pFVar4->OldPositions).ArrayMax * 0x18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar11 = (pFVar4->OldPositions).ArrayNum;
    piVar15 = &(pFVar4->OldPositions).ArrayMax;
    if (iVar11 == *piVar15) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&(pFVar4->OldPositions).AllocatorInstance,piVar15);
    }
    (pFVar4->OldPositions).ArrayNum = iVar11 + 1;
    pFVar6 = (pFVar4->OldPositions).AllocatorInstance.Data;
    pFVar5 = pFVar6 + (longlong)iVar11 * 0x18;
    *(undefined8 *)pFVar5 = local_50;
    *(undefined8 *)(pFVar5 + 8) = uStack_48;
    *(undefined8 *)(pFVar6 + (longlong)iVar11 * 0x18 + 0x10) = local_40;
    pFVar4 = (this->Change).Ptr;
    pFVar5 = (pFVar4->NewPositions).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 <
         pFVar5 + (longlong)(pFVar4->NewPositions).ArrayMax * 0x18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar11 = (pFVar4->NewPositions).ArrayNum;
    piVar15 = &(pFVar4->NewPositions).ArrayMax;
    if (iVar11 == *piVar15) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&(pFVar4->NewPositions).AllocatorInstance,piVar15);
    }
    (pFVar4->NewPositions).ArrayNum = iVar11 + 1;
    pFVar6 = (pFVar4->NewPositions).AllocatorInstance.Data;
    pFVar5 = pFVar6 + (longlong)iVar11 * 0x18;
    *(undefined8 *)pFVar5 = local_50;
    *(undefined8 *)(pFVar5 + 8) = uStack_48;
    *(undefined8 *)(pFVar6 + (longlong)iVar11 * 0x18 + 0x10) = local_40;
  }
  if (this->bSaveColors != false) {
    if ((param_1->VertexColors).bIsSet == false) {
      local_80 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      local_78 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    }
    else {
      lVar19 = *(longlong *)
                ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                (ulonglong)(local_res18[0] >> 9) * 8);
      local_80 = *(undefined8 *)(lVar19 + (ulonglong)(local_res18[0] & 0x1ff) * 0xc);
      local_78 = *(float *)(lVar19 + 8 + (ulonglong)(local_res18[0] & 0x1ff) * 0xc);
    }
    pFVar4 = (this->Change).Ptr;
    pFVar5 = (pFVar4->OldColors).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar5 + (longlong)(pFVar4->OldColors).ArrayMax * 0xc)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar11 = (pFVar4->OldColors).ArrayNum;
    piVar15 = &(pFVar4->OldColors).ArrayMax;
    if (iVar11 == *piVar15) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&(pFVar4->OldColors).AllocatorInstance,piVar15);
    }
    (pFVar4->OldColors).ArrayNum = iVar11 + 1;
    pFVar5 = (pFVar4->OldColors).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0xc) = local_80;
    *(float *)(pFVar5 + (longlong)iVar11 * 0xc + 8) = local_78;
    pFVar4 = (this->Change).Ptr;
    pFVar5 = (pFVar4->NewColors).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar5 + (longlong)(pFVar4->NewColors).ArrayMax * 0xc)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar11 = (pFVar4->NewColors).ArrayNum;
    piVar15 = &(pFVar4->NewColors).ArrayMax;
    if (iVar11 == *piVar15) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&(pFVar4->NewColors).AllocatorInstance,piVar15);
    }
    (pFVar4->NewColors).ArrayNum = iVar11 + 1;
    pFVar5 = (pFVar4->NewColors).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0xc) = local_80;
    *(float *)(pFVar5 + (longlong)iVar11 * 0xc + 8) = local_78;
  }
  if (*(void **)&this->OnNewVertexSaved == (void *)0x0) {
    return;
  }
  local_res20[0] = local_res8[0];
  local_98[0] = local_res18[0];
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnNewVertexSaved);
  pcVar9 = *(code **)&this->OnNewVertexSaved;
  plVar8 = *(longlong **)&(this->OnNewVertexSaved).field_0x28;
  plVar16 = (longlong *)&(this->OnNewVertexSaved).field_0x10;
  if (plVar8 != (longlong *)0x0) {
    plVar16 = plVar8;
  }
  uVar14 = (**(code **)(*plVar16 + 8))();
  (*pcVar9)(uVar14,local_98,local_res20);
  return;
}

// UpdateOverlayNormal @ 14971b420

void __thiscall
FMeshVertexChangeBuilder::UpdateOverlayNormal
          (FMeshVertexChangeBuilder *this,int param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  uint uVar1;
  float fVar2;
  FMeshVertexChange *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 *puVar12;
  int local_res8 [2];
  int local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_38;
  int *local_28;
  int *local_20;
  
  local_res10[0] = param_1;
  if (*(int *)&(this->SavedNormalElements).field_0x8 !=
      *(int *)&(this->SavedNormalElements).field_0x34) {
    puVar12 = *(undefined1 **)&(this->SavedNormalElements).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SavedNormalElements).field_0x38;
    }
    iVar7 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->SavedNormalElements).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar7 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)&this->SavedNormalElements);
        if (*piVar9 == param_1) {
          puVar8 = (uint *)(piVar9 + 1);
          if (piVar9 == (int *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 != (uint *)0x0) {
            uVar1 = *puVar8;
            pFVar3 = (this->Change).Ptr;
            local_38.Value = *(int **)&param_3->field0_0x0;
            fVar2 = (param_3->field0_0x0)._s_0.Z;
            uVar10 = 0;
            if ((int)uVar1 < (pFVar3->NewNormals).ArrayNum) {
              uVar10 = ~uVar1 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar3->NewNormals).AllocatorInstance.Data;
            *(int **)(pFVar4 + (longlong)(int)uVar1 * 0xc) = local_38.Value;
            *(float *)(pFVar4 + (longlong)(int)uVar1 * 0xc + 8) = fVar2;
            return;
          }
          break;
        }
        iVar7 = piVar9[2];
      } while (iVar7 != -1);
    }
  }
  local_res8[0] = (((this->Change).Ptr)->Normals).ArrayNum;
  local_28 = local_res10;
  local_20 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedNormalElements,&local_38,(bool *)&local_28);
  pFVar3 = (this->Change).Ptr;
  pFVar4 = (pFVar3->Normals).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar4 + (longlong)(pFVar3->Normals).ArrayMax * 4))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (pFVar3->Normals).ArrayNum;
  piVar9 = &(pFVar3->Normals).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar3->Normals).AllocatorInstance,piVar9);
  }
  (pFVar3->Normals).ArrayNum = iVar7 + 1;
  *(int *)((pFVar3->Normals).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res10[0];
  pFVar3 = (this->Change).Ptr;
  pFVar4 = (pFVar3->OldNormals).AllocatorInstance.Data;
  if (((pFVar4 <= param_2) && (param_2 < pFVar4 + (longlong)(pFVar3->OldNormals).ArrayMax * 0xc)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (pFVar3->OldNormals).ArrayNum;
  piVar9 = &(pFVar3->OldNormals).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(pFVar3->OldNormals).AllocatorInstance,piVar9);
  }
  (pFVar3->OldNormals).ArrayNum = iVar7 + 1;
  pFVar4 = (pFVar3->OldNormals).AllocatorInstance.Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = *(undefined8 *)&param_2->field0_0x0;
  *(float *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = (param_2->field0_0x0)._s_0.Z;
  pFVar3 = (this->Change).Ptr;
  pTVar11 = &pFVar3->NewNormals;
  pFVar4 = (pTVar11->AllocatorInstance).Data;
  if (((pFVar4 <= param_3) && (param_3 < pFVar4 + (longlong)(pFVar3->NewNormals).ArrayMax * 0xc)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (pFVar3->NewNormals).ArrayNum;
  piVar9 = &(pFVar3->NewNormals).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar11->AllocatorInstance,piVar9);
  }
  (pFVar3->NewNormals).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar11->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = *(undefined8 *)&param_3->field0_0x0;
  *(float *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = (param_3->field0_0x0)._s_0.Z;
  return;
}

// UpdateOverlayNormalFinal @ 14971b780

void __thiscall
FMeshVertexChangeBuilder::UpdateOverlayNormalFinal
          (FMeshVertexChangeBuilder *this,int param_1,TVector<float> *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  FMeshVertexChange *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  
  puVar12 = &(this->SavedNormalElements).field_0x40;
  if (*(int *)&(this->SavedNormalElements).field_0x8 !=
      *(int *)&(this->SavedNormalElements).field_0x34) {
    puVar11 = *(undefined1 **)puVar12;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->SavedNormalElements).field_0x38;
    }
    iVar13 = *(int *)(puVar11 +
                     (ulonglong)(*(int *)&(this->SavedNormalElements).field_0x48 - 1U & param_1) * 4
                     );
    if (iVar13 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->SavedNormalElements + (longlong)iVar13 * 0x10) == param_1)
        {
          if (iVar13 != -1) goto LAB_14971b834;
          break;
        }
        iVar13 = *(int *)(*(longlong *)&this->SavedNormalElements + 8 + (longlong)iVar13 * 0x10);
      } while (iVar13 != -1);
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("SavedNormalElements.Contains(ElementID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Changes\\MeshVertexChange.cpp"
                     ,0xc5,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14971b834:
  if (*(int *)&(this->SavedNormalElements).field_0x8 !=
      *(int *)&(this->SavedNormalElements).field_0x34) {
    puVar12 = *(undefined1 **)puVar12;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SavedNormalElements).field_0x38;
    }
    iVar13 = *(int *)(puVar12 +
                     (ulonglong)(*(int *)&(this->SavedNormalElements).field_0x48 - 1U & param_1) * 4
                     );
    if (iVar13 != -1) {
      while (piVar9 = (int *)((longlong)iVar13 * 0x10 + *(longlong *)&this->SavedNormalElements),
            *piVar9 != param_1) {
        iVar13 = piVar9[2];
        if (iVar13 == -1) {
          return;
        }
      }
      puVar8 = (uint *)(piVar9 + 1);
      if (piVar9 == (int *)0x0) {
        puVar8 = (uint *)0x0;
      }
      if (puVar8 != (uint *)0x0) {
        uVar2 = *puVar8;
        pFVar4 = (this->Change).Ptr;
        uVar1 = *(undefined8 *)&param_2->field0_0x0;
        fVar3 = (param_2->field0_0x0)._s_0.Z;
        uVar10 = 0;
        if ((int)uVar2 < (pFVar4->NewNormals).ArrayNum) {
          uVar10 = ~uVar2 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pFVar4->NewNormals).AllocatorInstance.Data;
        *(undefined8 *)(pFVar5 + (longlong)(int)uVar2 * 0xc) = uVar1;
        *(float *)(pFVar5 + (longlong)(int)uVar2 * 0xc + 8) = fVar3;
      }
    }
  }
  return;
}

// UpdateOverlayUV @ 14971b940

void __thiscall
FMeshVertexChangeBuilder::UpdateOverlayUV
          (FMeshVertexChangeBuilder *this,int param_1,TVector2<float> *param_2,
          TVector2<float> *param_3)

{
  uint uVar1;
  FMeshVertexChange *pFVar2;
  FScriptContainerElement *pFVar3;
  TVector2<float>_u_0 TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined1 *puVar13;
  int local_res8 [2];
  int local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_38;
  int *local_28;
  
  local_res10[0] = param_1;
  if (*(int *)&(this->SavedUVElements).field_0x8 != *(int *)&(this->SavedUVElements).field_0x34) {
    puVar13 = *(undefined1 **)&(this->SavedUVElements).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->SavedUVElements).field_0x38;
    }
    iVar7 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->SavedUVElements).field_0x48 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)&(this->SavedUVElements).field_0x0);
        if (*piVar9 == param_1) {
          puVar8 = (uint *)(piVar9 + 1);
          if (piVar9 == (int *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 != (uint *)0x0) {
            uVar1 = *puVar8;
            pFVar2 = (this->Change).Ptr;
            TVar4 = param_3->field0_0x0;
            uVar10 = 0;
            if ((int)uVar1 < (pFVar2->NewUVs).ArrayNum) {
              uVar10 = ~uVar1 >> 0x1f;
            }
            if (uVar10 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            ((TVector2<float>_u_0 *)
            ((pFVar2->NewUVs).AllocatorInstance.Data + (longlong)(int)uVar1 * 8))->_s_0 =
                 (TVector2<float>_u_0_s_0)TVar4;
            return;
          }
          break;
        }
        iVar7 = piVar9[2];
      } while (iVar7 != -1);
    }
  }
  local_res8[0] = (((this->Change).Ptr)->UVs).ArrayNum;
  local_38.Value = local_res10;
  local_28 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedUVElements,&local_38,(bool *)&local_38.Value);
  pFVar2 = (this->Change).Ptr;
  pTVar11 = &pFVar2->UVs;
  pFVar3 = (pTVar11->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(pFVar2->UVs).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (pFVar2->UVs).ArrayNum;
  piVar9 = &(pFVar2->UVs).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar11->AllocatorInstance,piVar9);
  }
  (pFVar2->UVs).ArrayNum = iVar7 + 1;
  *(int *)((pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_res10[0];
  pFVar2 = (this->Change).Ptr;
  pTVar12 = &pFVar2->OldUVs;
  pFVar3 = (pTVar12->AllocatorInstance).Data;
  if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)(pFVar2->OldUVs).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (pFVar2->OldUVs).ArrayNum;
  piVar9 = &(pFVar2->OldUVs).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar12->AllocatorInstance,piVar9);
  }
  (pFVar2->OldUVs).ArrayNum = iVar7 + 1;
  ((TVector2<float>_u_0 *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 8))->_s_0 =
       (TVector2<float>_u_0_s_0)param_2->field0_0x0;
  pFVar2 = (this->Change).Ptr;
  pTVar12 = &pFVar2->NewUVs;
  pFVar3 = (pTVar12->AllocatorInstance).Data;
  if ((pFVar3 <= param_3) && (param_3 < pFVar3 + (longlong)(pFVar2->NewUVs).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (pFVar2->NewUVs).ArrayNum;
  piVar9 = &(pFVar2->NewUVs).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar12->AllocatorInstance,piVar9);
  }
  (pFVar2->NewUVs).ArrayNum = iVar7 + 1;
  ((TVector2<float>_u_0 *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 8))->_s_0 =
       (TVector2<float>_u_0_s_0)param_3->field0_0x0;
  return;
}

// UpdateOverlayUVFinal @ 14971bc60

void __thiscall
FMeshVertexChangeBuilder::UpdateOverlayUVFinal
          (FMeshVertexChangeBuilder *this,int param_1,TVector2<float> *param_2)

{
  uint uVar1;
  FMeshVertexChange *pFVar2;
  TVector2<float>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  
  puVar10 = &(this->SavedUVElements).field_0x40;
  if (*(int *)&(this->SavedUVElements).field_0x8 != *(int *)&(this->SavedUVElements).field_0x34) {
    puVar9 = *(undefined1 **)puVar10;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SavedUVElements).field_0x38;
    }
    iVar11 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(this->SavedUVElements).field_0x48 - 1U & param_1) * 4);
    if (iVar11 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->SavedUVElements + (longlong)iVar11 * 0x10) == param_1) {
          if (iVar11 != -1) goto LAB_14971bd24;
          break;
        }
        iVar11 = *(int *)(*(longlong *)&this->SavedUVElements + 8 + (longlong)iVar11 * 0x10);
      } while (iVar11 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("SavedUVElements.Contains(ElementID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Changes\\MeshVertexChange.cpp"
                     ,0x118,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14971bd24:
  if (*(int *)&(this->SavedUVElements).field_0x8 != *(int *)&(this->SavedUVElements).field_0x34) {
    puVar10 = *(undefined1 **)puVar10;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SavedUVElements).field_0x38;
    }
    iVar11 = *(int *)(puVar10 +
                     (ulonglong)(*(int *)&(this->SavedUVElements).field_0x48 - 1U & param_1) * 4);
    if (iVar11 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar11 * 0x10 + *(longlong *)&this->SavedUVElements);
        if (*piVar7 == param_1) {
          puVar6 = (uint *)(piVar7 + 1);
          if (piVar7 == (int *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 == (uint *)0x0) {
            return;
          }
          pFVar2 = (this->Change).Ptr;
          uVar1 = *puVar6;
          TVar3 = param_2->field0_0x0;
          uVar8 = 0;
          if ((int)uVar1 < (pFVar2->NewUVs).ArrayNum) {
            uVar8 = ~uVar1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ((TVector2<float>_u_0 *)
          ((pFVar2->NewUVs).AllocatorInstance.Data + (longlong)(int)uVar1 * 8))->_s_0 =
               (TVector2<float>_u_0_s_0)TVar3;
          return;
        }
        iVar11 = piVar7[2];
      } while (iVar11 != -1);
    }
  }
  return;
}

// UpdateVertex @ 14971c7d0

void __thiscall
FMeshVertexChangeBuilder::UpdateVertex
          (FMeshVertexChangeBuilder *this,int param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  uint uVar1;
  FMeshVertexChange *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  undefined1 *puVar12;
  int local_res8 [2];
  int local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *local_28;
  int *local_20;
  
  local_res10[0] = param_1;
  if (*(int *)&(this->SavedVertices).field_0x8 != *(int *)&(this->SavedVertices).field_0x34) {
    puVar12 = *(undefined1 **)&(this->SavedVertices).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SavedVertices).field_0x38;
    }
    iVar8 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->SavedVertices).field_0x48 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        piVar10 = (int *)((longlong)iVar8 * 0x10 + *(longlong *)&this->SavedVertices);
        if (*piVar10 == param_1) {
          puVar9 = (uint *)(piVar10 + 1);
          if (piVar10 == (int *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            uVar1 = *puVar9;
            pFVar2 = (this->Change).Ptr;
            local_38 = *(undefined4 *)&param_3->field0_0x0;
            uStack_34 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
            uStack_30 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
            uStack_2c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
            local_48.Value = (int *)(param_3->field0_0x0)._s_0.Z;
            uVar11 = 0;
            if ((int)uVar1 < (pFVar2->NewPositions).ArrayNum) {
              uVar11 = ~uVar1 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar2->NewPositions).AllocatorInstance.Data;
            pFVar3 = pFVar4 + (longlong)(int)uVar1 * 0x18;
            *(undefined4 *)pFVar3 = local_38;
            *(undefined4 *)(pFVar3 + 4) = uStack_34;
            *(undefined4 *)(pFVar3 + 8) = uStack_30;
            *(undefined4 *)(pFVar3 + 0xc) = uStack_2c;
            *(int **)(pFVar4 + (longlong)(int)uVar1 * 0x18 + 0x10) = local_48.Value;
            return;
          }
          break;
        }
        iVar8 = piVar10[2];
      } while (iVar8 != -1);
    }
  }
  local_res8[0] = (((this->Change).Ptr)->Vertices).ArrayNum;
  local_28 = local_res10;
  local_20 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedVertices,&local_48,(bool *)&local_28);
  pFVar2 = (this->Change).Ptr;
  pFVar3 = (pFVar2->Vertices).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(pFVar2->Vertices).ArrayMax * 4))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (pFVar2->Vertices).ArrayNum;
  piVar10 = &(pFVar2->Vertices).ArrayMax;
  if (iVar8 == *piVar10) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->Vertices).AllocatorInstance,piVar10);
  }
  (pFVar2->Vertices).ArrayNum = iVar8 + 1;
  *(int *)((pFVar2->Vertices).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_res10[0];
  pFVar2 = (this->Change).Ptr;
  pFVar3 = (pFVar2->OldPositions).AllocatorInstance.Data;
  if (((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)(pFVar2->OldPositions).ArrayMax * 0x18))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (pFVar2->OldPositions).ArrayNum;
  piVar10 = &(pFVar2->OldPositions).ArrayMax;
  if (iVar8 == *piVar10) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->OldPositions).AllocatorInstance,piVar10);
  }
  (pFVar2->OldPositions).ArrayNum = iVar8 + 1;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  pFVar4 = (pFVar2->OldPositions).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(double *)pFVar3 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar3 + 8) = dVar6;
  *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar2 = (this->Change).Ptr;
  pFVar3 = (pFVar2->NewPositions).AllocatorInstance.Data;
  if (((pFVar3 <= param_3) && (param_3 < pFVar3 + (longlong)(pFVar2->NewPositions).ArrayMax * 0x18))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (pFVar2->NewPositions).ArrayNum;
  piVar10 = &(pFVar2->NewPositions).ArrayMax;
  if (iVar8 == *piVar10) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->NewPositions).AllocatorInstance,piVar10);
  }
  (pFVar2->NewPositions).ArrayNum = iVar8 + 1;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  pFVar4 = (pFVar2->NewPositions).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(double *)pFVar3 = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar3 + 8) = dVar6;
  *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_3->field0_0x0)._s_0.Z;
  return;
}

// UpdateVertexColor @ 14971cb20

void __thiscall
FMeshVertexChangeBuilder::UpdateVertexColor
          (FMeshVertexChangeBuilder *this,int param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  uint uVar1;
  float fVar2;
  FMeshVertexChange *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  undefined1 *puVar11;
  int local_res8 [2];
  int local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_38;
  int *local_28;
  int *local_20;
  
  local_res10[0] = param_1;
  if (*(int *)&(this->SavedVertices).field_0x8 != *(int *)&(this->SavedVertices).field_0x34) {
    puVar11 = *(undefined1 **)&(this->SavedVertices).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->SavedVertices).field_0x38;
    }
    iVar7 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->SavedVertices).field_0x48 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)&this->SavedVertices);
        if (*piVar9 == param_1) {
          puVar8 = (uint *)(piVar9 + 1);
          if (piVar9 == (int *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 != (uint *)0x0) {
            uVar1 = *puVar8;
            pFVar3 = (this->Change).Ptr;
            local_38.Value = *(int **)&param_3->field0_0x0;
            fVar2 = (param_3->field0_0x0)._s_0.Z;
            uVar10 = 0;
            if ((int)uVar1 < (pFVar3->NewColors).ArrayNum) {
              uVar10 = ~uVar1 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar3->NewColors).AllocatorInstance.Data;
            *(int **)(pFVar4 + (longlong)(int)uVar1 * 0xc) = local_38.Value;
            *(float *)(pFVar4 + (longlong)(int)uVar1 * 0xc + 8) = fVar2;
            return;
          }
          break;
        }
        iVar7 = piVar9[2];
      } while (iVar7 != -1);
    }
  }
  local_res8[0] = (((this->Change).Ptr)->Vertices).ArrayNum;
  local_28 = local_res10;
  local_20 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedVertices,&local_38,(bool *)&local_28);
  pFVar3 = (this->Change).Ptr;
  pFVar4 = (pFVar3->Vertices).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar4 + (longlong)(pFVar3->Vertices).ArrayMax * 4))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (pFVar3->Vertices).ArrayNum;
  piVar9 = &(pFVar3->Vertices).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar3->Vertices).AllocatorInstance,piVar9);
  }
  (pFVar3->Vertices).ArrayNum = iVar7 + 1;
  *(int *)((pFVar3->Vertices).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res10[0];
  pFVar3 = (this->Change).Ptr;
  pFVar4 = (pFVar3->OldColors).AllocatorInstance.Data;
  if (((pFVar4 <= param_2) && (param_2 < pFVar4 + (longlong)(pFVar3->OldColors).ArrayMax * 0xc)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (pFVar3->OldColors).ArrayNum;
  piVar9 = &(pFVar3->OldColors).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(pFVar3->OldColors).AllocatorInstance,piVar9);
  }
  (pFVar3->OldColors).ArrayNum = iVar7 + 1;
  pFVar4 = (pFVar3->OldColors).AllocatorInstance.Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = *(undefined8 *)&param_2->field0_0x0;
  *(float *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = (param_2->field0_0x0)._s_0.Z;
  pFVar3 = (this->Change).Ptr;
  pFVar4 = (pFVar3->NewColors).AllocatorInstance.Data;
  if (((pFVar4 <= param_3) && (param_3 < pFVar4 + (longlong)(pFVar3->NewColors).ArrayMax * 0xc)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (pFVar3->NewColors).ArrayNum;
  piVar9 = &(pFVar3->NewColors).ArrayMax;
  if (iVar7 == *piVar9) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(pFVar3->NewColors).AllocatorInstance,piVar9);
  }
  (pFVar3->NewColors).ArrayNum = iVar7 + 1;
  pFVar4 = (pFVar3->NewColors).AllocatorInstance.Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = *(undefined8 *)&param_3->field0_0x0;
  *(float *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = (param_3->field0_0x0)._s_0.Z;
  return;
}

// UpdateVertexFinal @ 14971ce60

void __thiscall
FMeshVertexChangeBuilder::UpdateVertexFinal
          (FMeshVertexChangeBuilder *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uint uVar3;
  FMeshVertexChange *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  
  puVar16 = &(this->SavedVertices).field_0x40;
  if (*(int *)&(this->SavedVertices).field_0x8 != *(int *)&(this->SavedVertices).field_0x34) {
    puVar15 = *(undefined1 **)puVar16;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->SavedVertices).field_0x38;
    }
    iVar17 = *(int *)(puVar15 +
                     (ulonglong)(*(int *)&(this->SavedVertices).field_0x48 - 1U & param_1) * 4);
    if (iVar17 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->SavedVertices + (longlong)iVar17 * 0x10) == param_1) {
          if (iVar17 != -1) goto LAB_14971cf05;
          break;
        }
        iVar17 = *(int *)(*(longlong *)&this->SavedVertices + 8 + (longlong)iVar17 * 0x10);
      } while (iVar17 != -1);
    }
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("SavedVertices.Contains(VertexID)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Changes\\MeshVertexChange.cpp"
                      ,0x61,L"");
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14971cf05:
  if (*(int *)&(this->SavedVertices).field_0x8 != *(int *)&(this->SavedVertices).field_0x34) {
    puVar16 = *(undefined1 **)puVar16;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->SavedVertices).field_0x38;
    }
    iVar17 = *(int *)(puVar16 +
                     (ulonglong)(*(int *)&(this->SavedVertices).field_0x48 - 1U & param_1) * 4);
    if (iVar17 != -1) {
      while (piVar13 = (int *)((longlong)iVar17 * 0x10 + *(longlong *)&this->SavedVertices),
            *piVar13 != param_1) {
        iVar17 = piVar13[2];
        if (iVar17 == -1) {
          return;
        }
      }
      puVar12 = (uint *)(piVar13 + 1);
      if (piVar13 == (int *)0x0) {
        puVar12 = (uint *)0x0;
      }
      if (puVar12 != (uint *)0x0) {
        uVar3 = *puVar12;
        pFVar4 = (this->Change).Ptr;
        uVar7 = *(undefined4 *)&param_2->field0_0x0;
        uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
        uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
        uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
        dVar2 = (param_2->field0_0x0)._s_0.Z;
        uVar14 = 0;
        if ((int)uVar3 < (pFVar4->NewPositions).ArrayNum) {
          uVar14 = ~uVar3 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pFVar4->NewPositions).AllocatorInstance.Data;
        pFVar1 = pFVar5 + (longlong)(int)uVar3 * 0x18;
        *(undefined4 *)pFVar1 = uVar7;
        *(undefined4 *)(pFVar1 + 4) = uVar8;
        *(undefined4 *)(pFVar1 + 8) = uVar9;
        *(undefined4 *)(pFVar1 + 0xc) = uVar10;
        *(double *)(pFVar5 + (longlong)(int)uVar3 * 0x18 + 0x10) = dVar2;
      }
    }
  }
  return;
}

