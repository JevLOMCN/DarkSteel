// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// TMeshLocalParam<UE::Geometry::FDynamicMesh3> @ 14c7b1e40

TMeshLocalParam<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::
TMeshLocalParam<UE::Geometry::FDynamicMesh3>
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
  *this_00;
  
  this->ParamMode = ExponentialMapUpwindAvg;
  this->bEnableExternalNormals = false;
  *(undefined8 *)&this->ExternalNormalFunc = 0;
  *(undefined8 *)&(this->ExternalNormalFunc).field_0x28 = 0;
  *(undefined8 *)&this->IDToNodeIndexMap = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x48 = 0;
  this_00 = &this->AllocatedNodes;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->AllocatedNodes).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedNodes).Blocks.ArrayNum = 0;
  (this->AllocatedNodes).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
  AddAllocatedBlock(this_00);
  FIndexPriorityQueue::FIndexPriorityQueue(&this->Queue);
  (this->SeedFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->SeedFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->SeedFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->SeedFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SeedFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SeedFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->SeedFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SeedFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->SeedFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->SeedFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->SeedFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->PointSet = param_1;
  FIndexPriorityQueue::Initialize
            (&this->Queue,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  this->MaxGraphDistance = 0.0;
  this->MaxUVDistance = 0.0;
  return this;
}

// ComputeLocalUV @ 14c7f1a40

TVector2<double> * __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::ComputeLocalUV
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,
          TVector2<double> *__return_storage_ptr__,TFrame3<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = __real_3ff0000000000000;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
  dVar2 = (param_1->Rotation).field0_0x0._s_0.X;
  dVar5 = dVar1 + dVar1;
  dVar3 = (param_1->Rotation).field0_0x0._s_0.W;
  dVar4 = (param_1->Rotation).field0_0x0._s_0.Y;
  dVar10 = dVar4 + dVar4;
  dVar6 = (param_2->field0_0x0)._s_0.Y - (param_1->Origin).field0_0x0._s_0.Y;
  dVar7 = (param_2->field0_0x0)._s_0.X - (param_1->Origin).field0_0x0._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Z - (param_1->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__real_3ff0000000000000 - (dVar10 * dVar4 + dVar5 * dVar1)) * dVar7 +
       (dVar10 * dVar2 + dVar3 * dVar5) * dVar6 + (dVar5 * dVar2 - dVar10 * dVar3) * dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar9 - ((dVar2 + dVar2) * dVar2 + dVar5 * dVar1)) * dVar6 +
       (dVar10 * dVar2 - dVar3 * dVar5) * dVar7 + (dVar4 * dVar5 + dVar3 * (dVar2 + dVar2)) * dVar8;
  return __return_storage_ptr__;
}

// ComputeToMaxDistance @ 14c7f30b0

void __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::ComputeToMaxDistance
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,TFrame3<double> *param_1,
          FIndex3i *param_2,double param_3)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  uint *puVar2;
  FIndexPriorityQueue *this_00;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  FGraphNode *pFVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  double dVar26;
  longlong local_res8;
  
  dVar17 = (param_1->Origin).field0_0x0._s_0.Y;
  this_00 = &this->Queue;
  (this->SeedFrame).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->SeedFrame).Origin.field0_0x0._s_0.Y = dVar17;
  dVar17 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->SeedFrame).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->SeedFrame).Rotation.field0_0x0._s_0.X = dVar17;
  dVar17 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->SeedFrame).Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->SeedFrame).Rotation.field0_0x0._s_0.Z = dVar17;
  dVar17 = __real_3ff0000000000000;
  local_res8 = 0;
  (this->SeedFrame).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  this->MaxGraphDistance = 0.0;
  this->MaxUVDistance = 0.0;
  do {
    uVar8 = (param_2->field0_0x0).ABC[local_res8];
    pFVar20 = GetNodeForPointSetID(this,uVar8,true);
    dVar4 = (this->SeedFrame).Rotation.field0_0x0._s_0.X;
    dVar5 = (this->SeedFrame).Rotation.field0_0x0._s_0.Z;
    dVar6 = (this->SeedFrame).Rotation.field0_0x0._s_0.Y;
    dVar7 = (this->SeedFrame).Rotation.field0_0x0._s_0.W;
    dVar13 = dVar5 + dVar5;
    dVar26 = dVar6 + dVar6;
    lVar10 = *(longlong *)
              ((this->PointSet->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar8 >> 9) * 8);
    pdVar3 = (double *)(lVar10 + (ulonglong)(uVar8 & 0x1ff) * 0x18);
    dVar14 = *pdVar3 - (this->SeedFrame).Origin.field0_0x0._s_0.X;
    dVar16 = *(double *)(lVar10 + 0x10 + (ulonglong)(uVar8 & 0x1ff) * 0x18) -
             (this->SeedFrame).Origin.field0_0x0._s_0.Z;
    dVar15 = pdVar3[1] - (this->SeedFrame).Origin.field0_0x0._s_0.Y;
    dVar12 = (dVar17 - (dVar26 * dVar6 + dVar13 * dVar5)) * dVar14 +
             (dVar13 * dVar7 + dVar26 * dVar4) * dVar15 + (dVar13 * dVar4 - dVar26 * dVar7) * dVar16
    ;
    (pFVar20->UV).field0_0x0._s_0.X = dVar12;
    dVar4 = (dVar17 - ((dVar4 + dVar4) * dVar4 + dVar13 * dVar5)) * dVar15 +
            (dVar26 * dVar4 - dVar13 * dVar7) * dVar14 +
            ((dVar4 + dVar4) * dVar7 + dVar13 * dVar6) * dVar16;
    (pFVar20->UV).field0_0x0._s_0.Y = dVar4;
    pFVar20->bFrozen = true;
    pFVar20->GraphDistance = SQRT(dVar12 * dVar12 + dVar4 * dVar4);
    iVar23 = (this->Queue).id_to_index.ArrayNum;
    if ((int)uVar8 <= iVar23 + 1) {
      uVar19 = 0;
      if ((int)uVar8 < iVar23) {
        uVar19 = ~uVar8 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar19 = *(uint *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar8 * 4
                        );
      if ((((0 < (int)uVar19) && ((int)uVar19 <= (this->Queue).num_nodes)) &&
          (0 < *(int *)(*(longlong *)
                         ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar19 >> 9) * 8) + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Queue.Contains(NbrPointID) == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshLocalParam.h"
                              ,0x69,L""), bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    dVar4 = pFVar20->GraphDistance;
    if (((this_00->EnableDebugChecks != false) &&
        (bVar18 = FIndexPriorityQueue::Contains(this_00,uVar8), bVar18)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Contains(NodeID) == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                            ,0x7d,L""), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar23 = (this->Queue).num_nodes + 1;
    (this->Queue).num_nodes = iVar23;
    uVar19 = 0;
    if ((int)uVar8 < (this->Queue).id_to_index.ArrayNum) {
      uVar19 = ~uVar8 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(int *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = iVar23;
    uVar19 = (this->Queue).num_nodes;
    uVar22 = (this->Queue).nodes.CurBlock;
    uVar9 = (this->Queue).nodes.CurBlockUsed;
    uVar25 = uVar22 * 0x200 + uVar9;
    if (uVar19 == uVar25) {
      if (uVar9 == 0x200) {
        if (uVar22 == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                    (&(this->Queue).nodes);
        }
        pTVar1 = &(this->Queue).nodes;
        pTVar1->CurBlock = pTVar1->CurBlock + 1;
        uVar22 = (this->Queue).nodes.CurBlock;
        (this->Queue).nodes.CurBlockUsed = 0;
      }
      uVar19 = (this->Queue).nodes.CurBlockUsed;
LAB_14c7f34e7:
      lVar21 = (longlong)(int)uVar19;
      lVar10 = *(longlong *)
                ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar22 * 8);
      *(uint *)(lVar10 + lVar21 * 0xc) = uVar8;
      *(float *)(lVar10 + 4 + lVar21 * 0xc) = (float)dVar4;
      *(int *)(lVar10 + 8 + lVar21 * 0xc) = iVar23;
      puVar2 = &(this->Queue).nodes.CurBlockUsed;
      *puVar2 = *puVar2 + 1;
    }
    else {
      if (uVar25 < uVar19) {
        TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                  (&(this->Queue).nodes,uVar19);
        uVar19 = (this->Queue).nodes.CurBlockUsed;
        if (uVar19 == 0x200) {
          if ((this->Queue).nodes.CurBlock == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&(this->Queue).nodes);
          }
          pTVar1 = &(this->Queue).nodes;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar19 = 0;
          (this->Queue).nodes.CurBlockUsed = 0;
        }
        uVar22 = (this->Queue).nodes.CurBlock;
        goto LAB_14c7f34e7;
      }
      uVar24 = (ulonglong)(uVar19 & 0x1ff);
      lVar10 = *(longlong *)
                ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
      *(uint *)(lVar10 + uVar24 * 0xc) = uVar8;
      *(float *)(lVar10 + 4 + uVar24 * 0xc) = (float)dVar4;
      *(int *)(lVar10 + 8 + uVar24 * 0xc) = iVar23;
    }
    uVar8 = (this->Queue).num_nodes;
    FIndexPriorityQueue::move_up
              (this_00,*(int *)(*(longlong *)
                                 ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar8 >> 9) * 8) + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc
                               ));
    local_res8 = local_res8 + 1;
    if (2 < local_res8) {
      ProcessQueueUntilTermination(this,param_3);
      return;
    }
  } while( true );
}

// GetNodeForPointSetID @ 14c8107e0

FGraphNode * __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::GetNodeForPointSetID
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,int param_1,bool param_2)

{
  TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
  *this_00;
  undefined8 *puVar1;
  double *pdVar2;
  longlong *plVar3;
  code *pcVar4;
  FDynamicMesh3 *pFVar5;
  longlong lVar6;
  TVector2<double> TVar7;
  int iVar8;
  undefined8 uVar9;
  uint *puVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  int *local_a8;
  uint *local_a0;
  TVector<double>_u_0 local_98;
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 local_58;
  undefined7 uStack_57;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  TVar7.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (*(int *)&(this->IDToNodeIndexMap).field_0x8 != *(int *)&(this->IDToNodeIndexMap).field_0x34) {
    puVar14 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->IDToNodeIndexMap).field_0x38;
    }
    iVar8 = *(int *)(puVar14 +
                    (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar8 * 0x10 + *(longlong *)&this->IDToNodeIndexMap);
        if (*piVar11 == param_1) {
          puVar10 = (uint *)(piVar11 + 1);
          if (piVar11 == (int *)0x0) {
            puVar10 = (uint *)0x0;
          }
          if (puVar10 != (uint *)0x0) {
            return (FGraphNode *)
                   ((ulonglong)(*puVar10 & 0x1ff) * 0x40 +
                   *(longlong *)
                    ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                    (ulonglong)(*puVar10 >> 9) * 8));
          }
          break;
        }
        iVar8 = piVar11[2];
      } while (iVar8 != -1);
    }
  }
  if (param_2) {
    uStack_70 = 0;
    uStack_74 = 0xffffffff;
    local_58 = 0;
    local_res10[0] = param_1;
    local_78 = param_1;
    if (this->bEnableExternalNormals == false) {
      pFVar5 = this->PointSet;
      if ((pFVar5->VertexNormals).bIsSet == false) {
        FMeshNormals::ComputeVertexNormal
                  ((TVector<double> *)&local_98._s_0,pFVar5,param_1,true,true);
      }
      else {
        lVar6 = *(longlong *)
                 ((pFVar5->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        local_a8 = *(int **)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0xc);
        local_98._s_0.X = (double)SUB84(local_a8,0);
        local_98._s_0.Y = (double)(float)((ulonglong)local_a8 >> 0x20);
        local_98._s_0.Z = (double)*(float *)(lVar6 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
      }
    }
    else {
      local_res20[0] = param_1;
      Core::Private::Function::CheckCallable(*(void **)&this->ExternalNormalFunc);
      plVar3 = *(longlong **)&(this->ExternalNormalFunc).field_0x28;
      pcVar4 = *(code **)&this->ExternalNormalFunc;
      plVar12 = (longlong *)&(this->ExternalNormalFunc).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar12 = plVar3;
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      (*pcVar4)(&local_98,uVar9,local_res20);
    }
    this_00 = &this->AllocatedNodes;
    uVar15 = (this->AllocatedNodes).CurBlockUsed;
    local_res8[0] = this_00->CurBlock * 0x200 + uVar15;
    dStack_40 = local_98._s_0.Z;
    dStack_50 = local_98._s_0.X;
    dStack_48 = local_98._s_0.Y;
    if (uVar15 == 0x200) {
      if (this_00->CurBlock == (this->AllocatedNodes).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
        AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar15 = 0;
      (this->AllocatedNodes).CurBlockUsed = 0;
    }
    lVar6 = *(longlong *)
             ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
             (longlong)(int)this_00->CurBlock * 8);
    local_a8 = local_res10;
    lVar13 = (longlong)(int)uVar15 * 0x40;
    local_a0 = local_res8;
    *(undefined8 *)(lVar6 + lVar13) = CONCAT44(uStack_74,local_78);
    ((undefined8 *)(lVar6 + lVar13))[1] = uStack_70;
    ((TVector2<double>_u_0 *)(lVar6 + 0x10 + lVar13))->_s_0 =
         (TVector2<double>_u_0_s_0)TVar7.field0_0x0;
    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar13);
    *puVar1 = CONCAT71(uStack_57,local_58);
    puVar1[1] = dStack_50;
    pdVar2 = (double *)(lVar6 + 0x30 + lVar13);
    *pdVar2 = dStack_48;
    pdVar2[1] = dStack_40;
    puVar10 = &(this->AllocatedNodes).CurBlockUsed;
    *puVar10 = *puVar10 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->IDToNodeIndexMap,(TPairInitializer<int_const_&,int_const_&> *)local_res20,
               (bool *)&local_a8);
    return (FGraphNode *)
           ((ulonglong)(local_res8[0] & 0x1ff) * 0x40 +
           *(longlong *)
            ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
            (ulonglong)(local_res8[0] >> 9) * 8));
  }
  return (FGraphNode *)0x0;
}

// ProcessQueueUntilTermination @ 14c81fcf0

void __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::ProcessQueueUntilTermination
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,double param_1)

{
  double *pdVar1;
  double dVar2;
  ELocalParamTypes EVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  FGraphNode *pFVar11;
  TVector2<double> *pTVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  FGraphNode *pFVar16;
  FGraphNode *pFVar17;
  undefined1 auVar18 [16];
  double dVar19;
  TVector<double>_u_0 local_e8;
  TQuaternion<double>_u_0 local_d0;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector2<double> local_58;
  TVector2<double> local_48 [4];
  
  dVar8 = __real_3ff0000000000000;
  if (0 < (this->Queue).num_nodes) {
    pFVar17 = (FGraphNode *)0x0;
    do {
      if ((((this->Queue).EnableDebugChecks != false) && ((this->Queue).num_nodes < 1)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetCount() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                             ,0x92,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar4 = *(uint *)(*(longlong *)(this->Queue).nodes.Blocks.AllocatorInstance.Data + 0xc);
      FIndexPriorityQueue::remove_at_index(&this->Queue,1);
      pFVar16 = pFVar17;
      if (*(int *)&(this->IDToNodeIndexMap).field_0x8 !=
          *(int *)&(this->IDToNodeIndexMap).field_0x34) {
        puVar5 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
        puVar15 = &(this->IDToNodeIndexMap).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar15 = puVar5;
        }
        uVar10 = *(uint *)(puVar15 +
                          (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar4) * 4
                          );
        if (uVar10 != 0xffffffff) {
          do {
            puVar13 = (uint *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&this->IDToNodeIndexMap);
            if (*puVar13 == uVar4) {
              pFVar11 = (FGraphNode *)(puVar13 + 1);
              if (puVar13 == (uint *)0x0) {
                pFVar11 = pFVar17;
              }
              if ((pFVar11 != (FGraphNode *)0x0) &&
                 (pFVar16 = (FGraphNode *)
                            (*(longlong *)
                              ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)pFVar11->PointID >> 9) * 8) +
                            (ulonglong)(pFVar11->PointID & 0x1ff) * 0x40),
                 pFVar16 != (FGraphNode *)0x0)) goto LAB_14c81fe07;
              break;
            }
            uVar10 = puVar13[2];
          } while (uVar10 != 0xffffffff);
        }
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshLocalParam.h"
                         ,0x14d,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_14c81fe07:
      dVar19 = pFVar16->GraphDistance;
      if (pFVar16->GraphDistance <= this->MaxGraphDistance) {
        dVar19 = this->MaxGraphDistance;
      }
      this->MaxGraphDistance = dVar19;
      if (param_1 < dVar19) {
        return;
      }
      if (-1 < pFVar16->ParentPointID) {
        EVar3 = this->ParamMode;
        if (EVar3 == PlanarProjection) {
          uVar14 = (ulonglong)(pFVar16->PointID & 0x1ff);
          lVar6 = *(longlong *)
                   ((this->PointSet->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)pFVar16->PointID >> 9) * 8);
          pdVar1 = (double *)(lVar6 + uVar14 * 0x18);
          local_78._s_0.X = *pdVar1;
          local_78._s_0.Y = pdVar1[1];
          local_78._s_0.Z = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
          pTVar12 = ComputeLocalUV(this,local_48,&this->SeedFrame,(TVector<double> *)&local_78._s_0)
          ;
        }
        else {
          if (EVar3 != ExponentialMap) {
            if (EVar3 == ExponentialMapUpwindAvg) {
              UpdateUVExpmapUpwind(this,pFVar16);
            }
            goto LAB_14c82000f;
          }
          pFVar11 = GetNodeForPointSetID(this,pFVar16->ParentPointID,false);
          if ((pFVar11 == (FGraphNode *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ParentNode != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshLocalParam.h"
                                 ,0x19d,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = (ulonglong)(pFVar11->PointID & 0x1ff);
          local_d0._s_0.X = 0.0;
          local_d0._s_0.W = dVar8;
          local_d0._s_0.Y = 0.0;
          local_d0._s_0.Z = 0.0;
          lVar6 = *(longlong *)
                   ((this->PointSet->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)pFVar11->PointID >> 9) * 8);
          pdVar1 = (double *)(lVar6 + uVar14 * 0x18);
          local_e8._s_0.X = *pdVar1;
          local_e8._s_0.Y = pdVar1[1];
          local_e8._s_0.Z = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
          local_b0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
          local_b0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
          local_b0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
          TQuaternion<double>::SetFromTo
                    ((TQuaternion<double> *)&local_d0._s_0,(TVector<double> *)&local_b0._s_0,
                     &pFVar11->CachedNormal);
          uVar14 = (ulonglong)(pFVar16->PointID & 0x1ff);
          lVar6 = *(longlong *)
                   ((this->PointSet->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)pFVar16->PointID >> 9) * 8);
          pdVar1 = (double *)(lVar6 + uVar14 * 0x18);
          local_98._s_0.X = *pdVar1;
          local_98._s_0.Y = pdVar1[1];
          local_98._s_0.Z = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
          pTVar12 = PropagateUV(this,&local_58,(TVector<double> *)&local_98._s_0,&pFVar11->UV,
                                (TFrame3<double> *)&local_e8._s_0,&this->SeedFrame);
        }
        dVar19 = (pTVar12->field0_0x0)._s_0.Y;
        (pFVar16->UV).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
        (pFVar16->UV).field0_0x0._s_0.Y = dVar19;
      }
LAB_14c82000f:
      dVar19 = (pFVar16->UV).field0_0x0._s_0.X;
      dVar2 = (pFVar16->UV).field0_0x0._s_0.Y;
      dVar19 = dVar2 * dVar2 + dVar19 * dVar19;
      if (this->MaxUVDistance <= dVar19 && dVar19 != this->MaxUVDistance) {
        this->MaxUVDistance = dVar19;
      }
      pFVar16->bFrozen = true;
      UpdateNeighboursSparse(this,pFVar16);
    } while (0 < (this->Queue).num_nodes);
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = this->MaxUVDistance;
  auVar18 = sqrtpd(auVar18,auVar18);
  this->MaxUVDistance = auVar18._0_8_;
  return;
}

// PropagateUV @ 14c820280

TVector2<double> * __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::PropagateUV
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,
          TVector2<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector2<double> *param_2,TFrame3<double> *param_3,TFrame3<double> *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TVector<double>_u_0 local_148;
  TVector2<double>_u_0 local_128;
  TQuaternion<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  
  local_148._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_148._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_148._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  ComputeLocalUV(this,(TVector2<double> *)&local_128._s_0,param_3,(TVector<double> *)&local_148._s_0
                );
  dVar4 = __real_3ff0000000000000;
  dVar1 = (param_3->Rotation).field0_0x0._s_0.Y;
  dVar2 = (param_3->Rotation).field0_0x0._s_0.X;
  dVar13 = (param_3->Rotation).field0_0x0._s_0.Z;
  dVar10 = (param_3->Rotation).field0_0x0._s_0.W;
  dVar13 = dVar13 + dVar13;
  local_c0 = (param_4->Rotation).field0_0x0._s_0.Y;
  dStack_b8 = (param_4->Rotation).field0_0x0._s_0.Z;
  local_b0 = (param_4->Rotation).field0_0x0._s_0.W;
  local_e0._s_0.X = (param_4->Origin).field0_0x0._s_0.X;
  local_e0._s_0.Y = (param_4->Origin).field0_0x0._s_0.Y;
  local_e0._s_0.Z = (param_4->Origin).field0_0x0._s_0.Z;
  dStack_c8 = (param_4->Rotation).field0_0x0._s_0.X;
  local_f8._s_0.X = dVar10 * (dVar1 + dVar1) + dVar13 * dVar2;
  local_f8._s_0.Y = dVar13 * dVar1 - dVar10 * (dVar2 + dVar2);
  local_f8._s_0.Z = __real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + (dVar2 + dVar2) * dVar2);
  local_148._s_0.X = local_b0 * (local_c0 + local_c0) + dStack_c8 * (dStack_b8 + dStack_b8);
  local_148._s_0.Y = local_c0 * (dStack_b8 + dStack_b8) - local_b0 * (dStack_c8 + dStack_c8);
  local_148._s_0.Z =
       __real_3ff0000000000000 -
       (local_c0 * (local_c0 + local_c0) + dStack_c8 * (dStack_c8 + dStack_c8));
  local_118._s_0.W = __real_3ff0000000000000;
  local_118._s_0.X = 0.0;
  local_118._s_0.Y = 0.0;
  local_118._s_0.Z = 0.0;
  TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_118._s_0,(TVector<double> *)&local_148._s_0,
             (TVector<double> *)&local_f8._s_0);
  TFrame3<double>::Rotate((TFrame3<double> *)&local_e0._s_0,(TQuaternion<double> *)&local_118._s_0);
  dVar1 = (param_3->Rotation).field0_0x0._s_0.Y;
  dVar14 = local_c0 + local_c0;
  dVar2 = (param_3->Rotation).field0_0x0._s_0.X;
  dVar10 = dStack_b8 + dStack_b8;
  dVar7 = dVar4 - (dStack_b8 * dVar10 + local_c0 * dVar14);
  dVar13 = (param_3->Rotation).field0_0x0._s_0.W;
  dVar6 = local_b0 * dVar10 + dStack_c8 * dVar14;
  dVar11 = dVar1 + dVar1;
  dVar14 = dStack_c8 * dVar10 - local_b0 * dVar14;
  dVar10 = (param_3->Rotation).field0_0x0._s_0.Z;
  dVar5 = dVar10 + dVar10;
  dVar15 = dVar2 * dVar5 - dVar13 * dVar11;
  dVar4 = dVar4 - (dVar5 * dVar10 + dVar11 * dVar1);
  dVar10 = dVar13 * dVar5 + dVar2 * dVar11;
  dVar12 = dVar10 * dVar6 + dVar4 * dVar7 + dVar15 * dVar14;
  auVar9._0_8_ = dVar12 * dVar12;
  auVar9._8_8_ = 0;
  dVar8 = __real_3ff0000000000000 - auVar9._0_8_;
  if (__real_3ff0000000000000 - auVar9._0_8_ <= __real_0000000000000000) {
    dVar8 = __real_0000000000000000;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar8;
  auVar9 = sqrtpd(auVar9,auVar3);
  dVar8 = auVar9._0_8_;
  if ((dVar5 * dVar1 - (dVar2 + dVar2) * dVar13) * (dVar15 * dVar7 - dVar4 * dVar14) +
      (dVar10 * dVar14 - dVar15 * dVar6) * (dVar2 * dVar5 + dVar13 * dVar11) +
      (dVar4 * dVar6 - dVar10 * dVar7) *
      (__real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + dVar11 * dVar1)) <
      __real_0000000000000000) {
    dVar8 = (double)CONCAT44(auVar9._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                             auVar9._0_4_ ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       local_128._s_0.Y * dVar8 + local_128._s_0.X * dVar12 + (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (local_128._s_0.Y * dVar12 - local_128._s_0.X * dVar8) + dVar1;
  return __return_storage_ptr__;
}

// UpdateNeighboursSparse @ 14c8503b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::UpdateNeighboursSparse
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,FGraphNode *param_1)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  uint *puVar2;
  double *pdVar3;
  FIndexPriorityQueue *this_00;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  FGraphNode *pFVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  double dVar26;
  undefined1 auStackY_248 [32];
  int local_218 [2];
  double local_210;
  double dStack_208;
  double local_200;
  TFunction<int___cdecl(int)> local_1f8;
  TFunction<int___cdecl(int)> local_1c8;
  undefined1 local_198 [64];
  undefined1 local_158 [64];
  longlong local_118 [3];
  longlong *local_100;
  undefined1 local_f8 [96];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar15 = param_1->PointID;
  dVar4 = param_1->GraphDistance;
  lVar6 = *(longlong *)
           ((this->PointSet->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8)
  ;
  pdVar3 = (double *)(lVar6 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
  local_210 = *pdVar3;
  dStack_208 = pdVar3[1];
  local_200 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
  FDynamicMesh3::VtxVerticesItr(this->PointSet,(MappedValueEnumerable *)local_198,uVar15);
  uVar13 = local_198._8_4_;
  uVar12 = local_198._0_8_;
  local_1f8._0_8_ = local_198._16_8_;
  local_1f8._40_8_ = 0;
  if (local_198._16_8_ != 0) {
    plVar20 = (longlong *)(local_198 + 0x20);
    if ((longlong *)local_198._56_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_198._56_8_;
    }
    (**(code **)*plVar20)(plVar20,&local_1f8.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_158,(FSmallListSet *)uVar12,uVar13,false,&local_1f8);
  local_1c8._0_8_ = local_198._16_8_;
  local_1c8._40_8_ = 0;
  if (local_198._16_8_ != 0) {
    plVar20 = (longlong *)(local_198 + 0x20);
    if ((longlong *)local_198._56_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_198._56_8_;
    }
    (**(code **)*plVar20)(plVar20,&local_1c8.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_f8,(FSmallListSet *)local_198._0_8_,local_198._8_4_,true,
             &local_1c8);
  dVar11 = local_200;
  dVar10 = dStack_208;
  dVar9 = local_210;
  do {
    while( true ) {
      if ((((local_158._0_8_ == local_f8._0_8_) && (local_158._8_4_ == local_f8._8_4_)) &&
          (local_158._24_4_ == local_f8._24_4_)) && (local_158._28_4_ == local_f8._28_4_)) {
        if (local_f8._48_8_ != 0) {
          plVar20 = (longlong *)(local_f8 + 0x40);
          if ((longlong *)local_f8._88_8_ != (longlong *)0x0) {
            plVar20 = (longlong *)local_f8._88_8_;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
        if ((code *)local_158._48_8_ != (code *)0x0) {
          plVar20 = local_118;
          if (local_100 != (longlong *)0x0) {
            plVar20 = local_100;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
        if (local_198._16_8_ != 0) {
          plVar20 = (longlong *)(local_198 + 0x20);
          if ((longlong *)local_198._56_8_ != (longlong *)0x0) {
            plVar20 = (longlong *)local_198._56_8_;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
        return;
      }
      local_218[0] = local_158._32_4_;
      Core::Private::Function::CheckCallable((void *)local_158._48_8_);
      uVar12 = local_158._48_8_;
      plVar20 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar20 = local_100;
      }
      uVar17 = (**(code **)(*plVar20 + 8))();
      uVar15 = (*(code *)uVar12)(uVar17,local_218);
      pFVar18 = GetNodeForPointSetID(this,uVar15,true);
      if (pFVar18->bFrozen == false) break;
LAB_14c85084f:
      FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_158);
    }
    this_00 = &this->Queue;
    lVar6 = *(longlong *)
             ((this->PointSet->Vertices).Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar15 >> 9) * 8);
    pdVar3 = (double *)(lVar6 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
    local_200 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
    iVar25 = (this->Queue).id_to_index.ArrayNum;
    dVar8 = *pdVar3 - dVar9;
    dVar26 = pdVar3[1] - dVar10;
    dVar8 = SQRT(dVar26 * dVar26 + dVar8 * dVar8 + (local_200 - dVar11) * (local_200 - dVar11)) +
            dVar4;
    if (iVar25 + 1 < (int)uVar15) {
LAB_14c8506b4:
      piVar24 = &(this->Queue).num_nodes;
      iVar25 = param_1->PointID;
      pFVar18->GraphDistance = dVar8;
      pFVar18->ParentPointID = iVar25;
      if (((this_00->EnableDebugChecks != false) &&
          (bVar14 = FIndexPriorityQueue::Contains(this_00,uVar15), bVar14)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Contains(NodeID) == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                              ,0x7d,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar25 = *piVar24 + 1;
      *piVar24 = iVar25;
      uVar16 = 0;
      if ((int)uVar15 < (this->Queue).id_to_index.ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) =
           iVar25;
      uVar16 = (this->Queue).num_nodes;
      uVar21 = (this->Queue).nodes.CurBlock;
      uVar5 = (this->Queue).nodes.CurBlockUsed;
      uVar23 = uVar21 * 0x200 + uVar5;
      if (uVar16 == uVar23) {
        if (uVar5 == 0x200) {
          if (uVar21 == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&(this->Queue).nodes);
          }
          pTVar1 = &(this->Queue).nodes;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar21 = (this->Queue).nodes.CurBlock;
          (this->Queue).nodes.CurBlockUsed = 0;
        }
        uVar16 = (this->Queue).nodes.CurBlockUsed;
LAB_14c8507e0:
        lVar19 = (longlong)(int)uVar16;
        lVar6 = *(longlong *)
                 ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar21 * 8);
        *(uint *)(lVar6 + lVar19 * 0xc) = uVar15;
        *(float *)(lVar6 + 4 + lVar19 * 0xc) = (float)dVar8;
        *(int *)(lVar6 + 8 + lVar19 * 0xc) = iVar25;
        puVar2 = &(this->Queue).nodes.CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        if (uVar23 < uVar16) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                    (&(this->Queue).nodes,uVar16);
          uVar16 = (this->Queue).nodes.CurBlockUsed;
          if (uVar16 == 0x200) {
            if ((this->Queue).nodes.CurBlock == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->Queue).nodes);
            }
            pTVar1 = &(this->Queue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar16 = 0;
            (this->Queue).nodes.CurBlockUsed = 0;
          }
          uVar21 = (this->Queue).nodes.CurBlock;
          goto LAB_14c8507e0;
        }
        uVar22 = (ulonglong)(uVar16 & 0x1ff);
        lVar6 = *(longlong *)
                 ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
        *(uint *)(lVar6 + uVar22 * 0xc) = uVar15;
        *(float *)(lVar6 + 4 + uVar22 * 0xc) = (float)dVar8;
        *(int *)(lVar6 + 8 + uVar22 * 0xc) = iVar25;
      }
      uVar15 = (this->Queue).num_nodes;
      FIndexPriorityQueue::move_up
                (this_00,*(int *)(*(longlong *)
                                   ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                                   (ulonglong)(uVar15 >> 9) * 8) + 8 +
                                 (ulonglong)(uVar15 & 0x1ff) * 0xc));
      goto LAB_14c85084f;
    }
    uVar16 = 0;
    if ((int)uVar15 < iVar25) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar16 = *(uint *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar15 * 4)
    ;
    if ((((int)uVar16 < 1) || ((this->Queue).num_nodes < (int)uVar16)) ||
       (*(int *)(*(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8)
                 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc) < 1)) goto LAB_14c8506b4;
    if (pFVar18->GraphDistance <= dVar8) goto LAB_14c85084f;
    pFVar18->ParentPointID = param_1->PointID;
    pFVar18->GraphDistance = dVar8;
    FIndexPriorityQueue::Update(this_00,uVar15,(float)dVar8);
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_158);
  } while( true );
}

// UpdateUVExpmapUpwind @ 14c850ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::UpdateUVExpmapUpwind
          (TMeshLocalParam<UE::Geometry::FDynamicMesh3> *this,FGraphNode *param_1)

{
  double *pdVar1;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  FGraphNode *pFVar18;
  undefined8 uVar19;
  uint *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  uint *puVar24;
  uint *puVar25;
  double dVar26;
  undefined1 auStackY_2e8 [32];
  int local_2b8 [2];
  TVector<double>_u_0 local_2b0;
  TVector<double>_u_0 local_298;
  TQuaternion<double>_u_0 local_280;
  undefined1 local_260 [16];
  TVector2<double>_u_0 local_250;
  TVector<double>_u_0 local_240;
  TFunction<int___cdecl(int)> local_228;
  TFunction<int___cdecl(int)> local_1f8;
  undefined1 local_1c8 [64];
  undefined1 local_188 [64];
  longlong local_148 [3];
  longlong *local_130;
  undefined1 local_128 [96];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pFVar18 = GetNodeForPointSetID(this,param_1->ParentPointID,false);
  if (pFVar18 == (FGraphNode *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("ParentNode != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshLocalParam.h"
                        ,0x1a9,L"");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar16 = param_1->PointID;
  dVar7 = 0.0;
  lVar2 = *(longlong *)
           ((this->PointSet->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8)
  ;
  pdVar1 = (double *)(lVar2 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
  local_2b0._s_0.X = *pdVar1;
  local_2b0._s_0.Y = pdVar1[1];
  local_2b0._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
  local_260 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  FDynamicMesh3::VtxVerticesItr(this->PointSet,(MappedValueEnumerable *)local_1c8,uVar16);
  uVar13 = local_1c8._8_4_;
  uVar10 = local_1c8._0_8_;
  local_228._0_8_ = local_1c8._16_8_;
  local_228._40_8_ = 0;
  if (local_1c8._16_8_ != 0) {
    plVar22 = (longlong *)(local_1c8 + 0x20);
    if ((longlong *)local_1c8._56_8_ != (longlong *)0x0) {
      plVar22 = (longlong *)local_1c8._56_8_;
    }
    (**(code **)*plVar22)(plVar22,&local_228.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_188,(FSmallListSet *)uVar10,uVar13,false,&local_228);
  local_1f8._0_8_ = local_1c8._16_8_;
  local_1f8._40_8_ = 0;
  if (local_1c8._16_8_ != 0) {
    plVar22 = (longlong *)(local_1c8 + 0x20);
    if ((longlong *)local_1c8._56_8_ != (longlong *)0x0) {
      plVar22 = (longlong *)local_1c8._56_8_;
    }
    (**(code **)*plVar22)(plVar22,&local_1f8.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_128,(FSmallListSet *)local_1c8._0_8_,local_1c8._8_4_,true,
             &local_1f8);
  uVar12 = local_2b0._s_0.Z;
  uVar11 = local_2b0._s_0.Y;
  uVar10 = local_2b0._s_0.X;
  dVar9 = __real_3e45798ee2308c3a;
  dVar8 = __real_3ff0000000000000;
  puVar25 = (uint *)0x0;
  dVar5 = (double)local_260._8_8_;
  dVar6 = (double)local_260._0_8_;
LAB_14c850e70:
  do {
    if ((((local_188._0_8_ == local_128._0_8_) && (local_188._8_4_ == local_128._8_4_)) &&
        (local_188._24_4_ == local_128._24_4_)) && (local_188._28_4_ == local_128._28_4_)) {
      if (local_128._48_8_ != 0) {
        plVar22 = (longlong *)(local_128 + 0x40);
        if ((longlong *)local_128._88_8_ != (longlong *)0x0) {
          plVar22 = (longlong *)local_128._88_8_;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if ((code *)local_188._48_8_ != (code *)0x0) {
        plVar22 = local_148;
        if (local_130 != (longlong *)0x0) {
          plVar22 = local_130;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_1c8._16_8_ != 0) {
        plVar22 = (longlong *)(local_1c8 + 0x20);
        if ((longlong *)local_1c8._56_8_ != (longlong *)0x0) {
          plVar22 = (longlong *)local_1c8._56_8_;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if ((int)puVar25 < 1) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("NbrCount > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshLocalParam.h"
                            ,0x1bd,L"");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (param_1->UV).field0_0x0._s_0.X = dVar6 * (dVar8 / dVar7);
      (param_1->UV).field0_0x0._s_0.Y = dVar5 * (dVar8 / dVar7);
      return;
    }
    local_2b8[0] = local_188._32_4_;
    Core::Private::Function::CheckCallable((void *)local_188._48_8_);
    uVar14 = local_188._48_8_;
    plVar22 = local_148;
    if (local_130 != (longlong *)0x0) {
      plVar22 = local_130;
    }
    uVar19 = (**(code **)(*plVar22 + 8))();
    uVar16 = (*(code *)uVar14)(uVar19,local_2b8);
    if (*(int *)&(this->IDToNodeIndexMap).field_0x8 != *(int *)&(this->IDToNodeIndexMap).field_0x34)
    {
      puVar3 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
      puVar23 = &(this->IDToNodeIndexMap).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar23 = puVar3;
      }
      uVar17 = *(uint *)(puVar23 +
                        (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar16) * 4)
      ;
      if (uVar17 != 0xffffffff) {
        do {
          puVar20 = (uint *)((longlong)(int)uVar17 * 0x10 + *(longlong *)&this->IDToNodeIndexMap);
          if (*puVar20 == uVar16) {
            puVar24 = puVar20 + 1;
            if (puVar20 == (uint *)0x0) {
              puVar24 = (uint *)0x0;
            }
            if (((puVar24 != (uint *)0x0) &&
                (puVar20 = (uint *)(*(longlong *)
                                     ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                                     (ulonglong)(*puVar24 >> 9) * 8) +
                                   (ulonglong)(*puVar24 & 0x1ff) * 0x40), puVar20 != (uint *)0x0))
               && ((char)puVar20[8] != '\0')) {
              uVar21 = (ulonglong)(*puVar20 & 0x1ff);
              local_280._s_0.X = 0.0;
              local_280._s_0.W = dVar8;
              local_280._s_0.Y = 0.0;
              local_280._s_0.Z = 0.0;
              lVar2 = *(longlong *)
                       ((this->PointSet->Vertices).Blocks.AllocatorInstance.Data +
                       (ulonglong)(*puVar20 >> 9) * 8);
              pdVar1 = (double *)(lVar2 + uVar21 * 0x18);
              local_298._s_0.X = *pdVar1;
              local_298._s_0.Y = pdVar1[1];
              local_298._s_0.Z = *(double *)(lVar2 + 0x10 + uVar21 * 0x18);
              local_240._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
              local_240._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
              local_240._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
              TQuaternion<double>::SetFromTo
                        ((TQuaternion<double> *)&local_280._s_0,(TVector<double> *)&local_240._s_0,
                         (TVector<double> *)(puVar20 + 10));
              PropagateUV(this,(TVector2<double> *)&local_250._s_0,
                          (TVector<double> *)&local_2b0._s_0,(TVector2<double> *)(puVar20 + 4),
                          (TFrame3<double> *)&local_298._s_0,&this->SeedFrame);
              puVar25 = (uint *)(ulonglong)((int)puVar25 + 1);
              dVar26 = dVar8 / ((local_298._s_0.Y - (double)uVar11) *
                                (local_298._s_0.Y - (double)uVar11) +
                                (local_298._s_0.X - (double)uVar10) *
                                (local_298._s_0.X - (double)uVar10) +
                               (local_298._s_0.Z - (double)uVar12) *
                               (local_298._s_0.Z - (double)uVar12) + dVar9);
              dVar7 = dVar7 + dVar26;
              dVar6 = dVar6 + local_250._s_0.X * dVar26;
              dVar5 = dVar5 + local_250._s_0.Y * dVar26;
            }
            goto LAB_14c851086;
          }
          uVar17 = puVar20[2];
        } while (uVar17 != 0xffffffff);
        FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_188);
        goto LAB_14c850e70;
      }
    }
LAB_14c851086:
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_188);
  } while( true );
}

