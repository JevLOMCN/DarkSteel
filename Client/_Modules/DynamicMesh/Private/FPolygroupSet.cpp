// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 11

// GetGroup @ 14c73c060

int __thiscall UE::Geometry::FPolygroupSet::GetGroup(FPolygroupSet *this,int param_1)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  
  if (this->PolygroupAttrib != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    return *(int *)(*(longlong *)
                     (*(longlong *)&this->PolygroupAttrib->field_0x20 +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  }
  pFVar2 = this->Mesh;
  if ((pFVar2->TriangleGroups).bIsSet == false) {
    return -1;
  }
  if ((-1 < param_1) &&
     (param_1 < (int)((pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      return *(int *)(*(longlong *)
                       ((pFVar2->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + lVar1) +
                     (ulonglong)(param_1 & 0x1ff) * 4);
    }
  }
  return 0;
}

// FPolygroupSet @ 14c8977d0

FPolygroupSet * __thiscall
UE::Geometry::FPolygroupSet::FPolygroupSet(FPolygroupSet *this,FPolygroupSet *param_1)

{
  this->GroupLayerIndex = -1;
  this->Mesh = (FDynamicMesh3 *)0x0;
  this->PolygroupAttrib = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  this->MaxGroupID = 0;
  this->Mesh = param_1->Mesh;
  this->PolygroupAttrib = param_1->PolygroupAttrib;
  this->GroupLayerIndex = param_1->GroupLayerIndex;
  this->MaxGroupID = param_1->MaxGroupID;
  return this;
}

// FPolygroupSet @ 14c897810

FPolygroupSet * __thiscall
UE::Geometry::FPolygroupSet::FPolygroupSet(FPolygroupSet *this,FDynamicMesh3 *param_1)

{
  this->Mesh = param_1;
  this->PolygroupAttrib = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  this->MaxGroupID = 0;
  this->GroupLayerIndex = -1;
  RecalculateMaxGroupID(this);
  return this;
}

// FPolygroupSet @ 14c897840

FPolygroupSet * __thiscall
UE::Geometry::FPolygroupSet::FPolygroupSet(FPolygroupSet *this,FDynamicMesh3 *param_1,int param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPolygroupSet *pFVar5;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  FDynamicMeshAttributeSet *this_00;
  undefined1 local_res8 [8];
  
  this->GroupLayerIndex = -1;
  this->PolygroupAttrib = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  this->MaxGroupID = 0;
  this->Mesh = param_1;
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1090533801802596434>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupSet.cpp"
                       ,0x52,"Mesh->Attributes()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPolygroupSet *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    iVar4 = (**(code **)(pFVar1->_padding_ + 200))();
    if (param_2 < iVar4) {
      pFVar1 = (this->Mesh->AttributeSet).Ptr;
      this_00 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        this_00 = pFVar1;
      }
      pTVar6 = FDynamicMeshAttributeSet::GetPolygroupLayer(this_00,param_2);
      this->PolygroupAttrib = pTVar6;
      this->GroupLayerIndex = param_2;
      return this;
    }
  }
  RecalculateMaxGroupID(this);
  `UE::Geometry::FPolygroupSet::FPolygroupSet'::__l2::<lambda_1>::operator()(local_res8);
  return this;
}

// FPolygroupSet @ 14c897910

FPolygroupSet * __thiscall
UE::Geometry::FPolygroupSet::FPolygroupSet
          (FPolygroupSet *this,FDynamicMesh3 *param_1,
          TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  int iVar1;
  
  this->Mesh = param_1;
  this->GroupLayerIndex = -1;
  this->MaxGroupID = 0;
  this->PolygroupAttrib = param_2;
  iVar1 = FindPolygroupLayerIndex(param_1,param_2);
  this->GroupLayerIndex = iVar1;
  RecalculateMaxGroupID(this);
  return this;
}

// FPolygroupSet @ 14c897960

FPolygroupSet * __thiscall
UE::Geometry::FPolygroupSet::FPolygroupSet
          (FPolygroupSet *this,FDynamicMesh3 *param_1,FPolygroupLayer param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FPolygroupSet *pFVar6;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar7;
  FDynamicMeshAttributeSet *this_00;
  FPolygroupLayer local_res18 [2];
  
  this->Mesh = param_1;
  this->PolygroupAttrib = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  this->MaxGroupID = 0;
  this->GroupLayerIndex = -1;
  local_res18[0] = param_2;
  if (param_2.bIsDefaultLayer == false) {
    pFVar1 = (param_1->AttributeSet).Ptr;
    if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1090533801802596406>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupSet.cpp"
                         ,0x36,"Mesh->Attributes()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPolygroupSet *)(*pcVar2)();
        return pFVar6;
      }
    }
    else {
      iVar5 = (**(code **)(pFVar1->_padding_ + 200))();
      iVar3 = local_res18[0].LayerIndex;
      if (local_res18[0].LayerIndex < iVar5) {
        pFVar1 = (this->Mesh->AttributeSet).Ptr;
        this_00 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
          this_00 = pFVar1;
        }
        pTVar7 = FDynamicMeshAttributeSet::GetPolygroupLayer(this_00,local_res18[0].LayerIndex);
        this->PolygroupAttrib = pTVar7;
        this->GroupLayerIndex = iVar3;
      }
    }
    if (this->GroupLayerIndex == -1) {
      `UE::Geometry::FPolygroupSet::FPolygroupSet'::__l14::<lambda_1>::operator()(local_res18);
    }
  }
  RecalculateMaxGroupID(this);
  return this;
}

// FPolygroupSet @ 14c897a40

FPolygroupSet * __thiscall
UE::Geometry::FPolygroupSet::FPolygroupSet(FPolygroupSet *this,FDynamicMesh3 *param_1,FName param_2)

{
  FDynamicMeshAttributeSet *this_00;
  FName FVar1;
  int iVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pTVar4 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  this->PolygroupAttrib = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  this->MaxGroupID = 0;
  this->GroupLayerIndex = -1;
  this->Mesh = param_1;
  this_00 = (param_1->AttributeSet).Ptr;
  if ((this_00 != (FDynamicMeshAttributeSet *)0x0) &&
     (iVar2 = (**(code **)(this_00->_padding_ + 200))(this_00), pTVar3 = pTVar4, 0 < iVar2)) {
    do {
      iVar5 = (int)pTVar3;
      pTVar3 = FDynamicMeshAttributeSet::GetPolygroupLayer(this_00,iVar5);
      FVar1.ComparisonIndex.Value = *(uint *)&pTVar3->field_0x8;
      FVar1.Number = *(uint *)&pTVar3->field_0xc;
      if (FVar1 == param_2) {
        pTVar4 = FDynamicMeshAttributeSet::GetPolygroupLayer(this_00,iVar5);
        break;
      }
      pTVar3 = (TDynamicMeshScalarTriangleAttribute<int> *)(ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < iVar2);
  }
  this->PolygroupAttrib = pTVar4;
  iVar2 = FindPolygroupLayerIndex(param_1,pTVar4);
  this->GroupLayerIndex = iVar2;
  RecalculateMaxGroupID(this);
  if (this->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    `UE::Geometry::FPolygroupSet::FPolygroupSet'::__l2::<lambda_1>::operator()(local_res8);
  }
  return this;
}

// RecalculateMaxGroupID @ 14c911520

void __thiscall UE::Geometry::FPolygroupSet::RecalculateMaxGroupID(FPolygroupSet *this)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  pFVar1 = this->Mesh;
  iVar9 = 0;
  this->MaxGroupID = 0;
  uVar10 = (pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (this->PolygroupAttrib != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    uVar6 = 0;
    if ((uVar10 != 0) &&
       (pFVar2 = (pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar6 = 0,
       0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
      uVar5 = 1;
      uVar6 = 1;
      if (1 < (int)uVar10) {
        do {
          lVar4 = (ulonglong)(uVar5 & 0x1ff) * 2;
          lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8);
          if ((*(short *)(lVar4 + lVar3) != 0) && (uVar6 = uVar5, *(short *)(lVar4 + lVar3) != -1))
          break;
          uVar5 = uVar5 + 1;
          uVar6 = uVar5;
        } while ((int)uVar5 < (int)uVar10);
      }
    }
    if (uVar6 == uVar10) {
      return;
    }
LAB_14c9115d0:
    do {
      iVar8 = *(int *)(*(longlong *)
                        (*(longlong *)&this->PolygroupAttrib->field_0x20 +
                        (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4) + 1;
      if (iVar8 < iVar9) {
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      uVar6 = uVar6 + 1;
      this->MaxGroupID = iVar9;
      if ((int)uVar6 < (int)uVar10) {
        pFVar2 = (pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar3 = (ulonglong)(uVar6 >> 9) * 8;
          lVar4 = (ulonglong)(uVar6 & 0x1ff) * 2;
          if ((*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar3)) != 0) &&
             (*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar3)) != -1)) goto LAB_14c9115d0;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar10);
      }
      if (uVar6 == uVar10) {
        return;
      }
    } while( true );
  }
  uVar6 = 0;
  if ((uVar10 != 0) &&
     (pFVar2 = (pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar6 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar6 = 1;
    bVar11 = uVar10 == 1;
    if ((int)uVar10 < 2) goto LAB_14c9116c6;
    do {
      lVar4 = (ulonglong)(uVar6 & 0x1ff) * 2;
      lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 9) * 8);
      if ((*(short *)(lVar4 + lVar3) != 0) && (*(short *)(lVar4 + lVar3) != -1)) break;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar10);
  }
  bVar11 = uVar6 == uVar10;
LAB_14c9116c6:
  if (!bVar11) {
    iVar9 = 0;
LAB_14c9116d3:
    do {
      if ((pFVar1->TriangleGroups).bIsSet == false) {
        iVar8 = -1;
      }
      else {
        if ((-1 < (int)uVar6) &&
           ((int)uVar6 <
            (int)((pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar3 = (ulonglong)(uVar6 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar3) + (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)
          {
            iVar8 = *(int *)(*(longlong *)
                              ((pFVar1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                              lVar3) + (ulonglong)(uVar6 & 0x1ff) * 4);
            goto LAB_14c911740;
          }
        }
        iVar8 = 0;
      }
LAB_14c911740:
      iVar7 = iVar8 + 1;
      if (iVar8 + 1 < iVar9) {
        iVar7 = iVar9;
      }
      uVar6 = uVar6 + 1;
      this->MaxGroupID = iVar7;
      iVar9 = iVar7;
      if ((int)uVar6 < (int)uVar10) {
        do {
          lVar4 = (ulonglong)(uVar6 & 0x1ff) * 2;
          lVar3 = *(longlong *)
                   ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar6 >> 9) * 8);
          if ((*(short *)(lVar4 + lVar3) != 0) && (*(short *)(lVar4 + lVar3) != -1))
          goto LAB_14c9116d3;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar10);
      }
    } while (uVar6 != uVar10);
  }
  return;
}

// operator() @ 1505740a0

bool __thiscall
`UE::Geometry::FPolygroupSet::FPolygroupSet'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1090533801802596444>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1090533801802596444>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505740e0

bool __thiscall
`UE::Geometry::FPolygroupSet::FPolygroupSet'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1090533801802596454>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1090533801802596454>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574a20

bool __thiscall
`UE::Geometry::FPolygroupSet::FPolygroupSet'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1090533801802596416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1090533801802596416>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

