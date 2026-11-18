// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// IsEdge @ 14c750a80

bool __thiscall UE::Geometry::FDynamicMesh3::IsEdge(FDynamicMesh3 *this,int param_1)

{
  if (((-1 < param_1) &&
      (param_1 < (int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// TrianglesItr @ 14c7704d0

MappedEnumerable<UE::Geometry::FIndex3i> * __thiscall
UE::Geometry::FDynamicMesh3::TrianglesItr
          (FDynamicMesh3 *this,MappedEnumerable<UE::Geometry::FIndex3i> *__return_storage_ptr__)

{
  FFunctionStorage *pFVar1;
  undefined ***pppuVar2;
  undefined **local_58;
  FDynamicMesh3 *local_50;
  undefined ***local_40;
  code *local_38 [2];
  FFunctionStorage local_28;
  
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__TrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_UFIndex3i_Geometry_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex3i,int>
                ::Call;
  local_40 = (undefined ***)0x0;
  local_28.HeapAllocation = (FFunctionStorage *)0x0;
  local_50 = this;
  Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_58,&local_28);
  *(undefined8 *)&__return_storage_ptr__->MapFunc = 0;
  (__return_storage_ptr__->enumerable).Vector = &this->TriangleRefCounts;
  *(undefined8 *)&(__return_storage_ptr__->MapFunc).field_0x28 = 0;
  TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
            (&__return_storage_ptr__->MapFunc,
             (TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_38);
  if (local_38[0] != (code *)0x0) {
    pFVar1 = &local_28;
    if (local_28.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar1 = local_28.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar1->InlineAllocation + 0x10))();
  }
  pppuVar2 = &local_58;
  if (local_40 != (undefined ***)0x0) {
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[2])();
  return __return_storage_ptr__;
}

// IsCompact @ 14c8189b0

bool __thiscall UE::Geometry::FDynamicMesh3::IsCompact(FDynamicMesh3 *this)

{
  if ((((this->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
        (this->VertexRefCounts).FreeIndices.CurBlockUsed == 0) &&
      ((this->EdgeRefCounts).FreeIndices.CurBlock * 0x200 +
       (this->EdgeRefCounts).FreeIndices.CurBlockUsed == 0)) &&
     ((this->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (this->TriangleRefCounts).FreeIndices.CurBlockUsed == 0)) {
    return true;
  }
  return false;
}

// EnumerateTriEdgeIDsFromEdgeID @ 14c8de1e0

void __thiscall
UE::Geometry::FDynamicMesh3::EnumerateTriEdgeIDsFromEdgeID
          (FDynamicMesh3 *this,int param_1,
          TFunctionRef<void___cdecl(UE::Geometry::FMeshTriEdgeID)> *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint local_res10 [2];
  int local_28;
  
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  local_res10[0] =
       *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
                (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar2 = *(undefined8 *)
           (*(longlong *)
             ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
             (ulonglong)(local_res10[0] >> 9) * 8) + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
  local_res10[0] = local_res10[0] * 4;
  local_28 = (int)uVar2;
  if (local_28 != param_1) {
    local_res10[0] = local_res10[0] | ((int)((ulonglong)uVar2 >> 0x20) != param_1) + 1;
  }
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
  uVar3 = *(ulonglong *)
           (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  local_res10[0] = (uint)(uVar3 >> 0x20);
  if (local_res10[0] != 0xffffffff) {
    uVar2 = *(undefined8 *)
             (*(longlong *)
               ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar3 >> 0x29) * 8) +
             (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
    local_res10[0] = local_res10[0] * 4;
    local_28 = (int)uVar2;
    if (local_28 != param_1) {
      local_res10[0] = local_res10[0] | ((int)((ulonglong)uVar2 >> 0x20) != param_1) + 1;
    }
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
  }
  return;
}

// EnumerateTriEdgeIDsFromTriID @ 14c8de320

void __thiscall
UE::Geometry::FDynamicMesh3::EnumerateTriEdgeIDsFromTriID
          (FDynamicMesh3 *this,int param_1,
          TFunctionRef<void___cdecl(UE::Geometry::FMeshTriEdgeID)> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint local_res10 [2];
  uint local_58;
  uint local_48;
  uint local_38;
  uint uStack_34;
  
  pFVar4 = (this->TriangleEdges).Blocks.AllocatorInstance.Data;
  lVar5 = *(longlong *)(pFVar4 + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar5 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar3 = *(uint *)(lVar5 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_38 = (uint)uVar1;
  lVar5 = (ulonglong)(local_38 >> 9) * 8;
  local_res10[0] =
       *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar5) + 8 +
                (ulonglong)(local_38 & 0x1ff) * 0x10);
  uVar2 = *(undefined8 *)
           (*(longlong *)(pFVar4 + (ulonglong)(local_res10[0] >> 9) * 8) +
           (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
  local_res10[0] = local_res10[0] * 4;
  local_58 = (uint)uVar2;
  if (local_58 != local_38) {
    local_res10[0] = local_res10[0] | ((uint)((ulonglong)uVar2 >> 0x20) != local_38) + 1;
  }
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
  uVar6 = *(ulonglong *)
           (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar5) + 8 +
           (ulonglong)(local_38 & 0x1ff) * 0x10);
  local_res10[0] = (uint)(uVar6 >> 0x20);
  if (local_res10[0] != 0xffffffff) {
    uVar2 = *(undefined8 *)
             (*(longlong *)
               ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar6 >> 0x29) * 8) +
             (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
    local_res10[0] = local_res10[0] * 4;
    local_48 = (uint)uVar2;
    if (local_48 != local_38) {
      local_res10[0] = local_res10[0] | ((uint)((ulonglong)uVar2 >> 0x20) != local_38) + 1;
    }
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
  }
  uStack_34 = (uint)((ulonglong)uVar1 >> 0x20);
  lVar5 = (ulonglong)(uStack_34 >> 9) * 8;
  local_res10[0] =
       *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar5) + 8 +
                (ulonglong)(uStack_34 & 0x1ff) * 0x10);
  uVar1 = *(undefined8 *)
           (*(longlong *)
             ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
             (ulonglong)(local_res10[0] >> 9) * 8) + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
  local_res10[0] = local_res10[0] * 4;
  local_58 = (uint)uVar1;
  if (local_58 != uStack_34) {
    local_res10[0] = local_res10[0] | ((uint)((ulonglong)uVar1 >> 0x20) != uStack_34) + 1;
  }
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
  uVar6 = *(ulonglong *)
           (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar5) + 8 +
           (ulonglong)(uStack_34 & 0x1ff) * 0x10);
  local_res10[0] = (uint)(uVar6 >> 0x20);
  if (local_res10[0] != 0xffffffff) {
    uVar1 = *(undefined8 *)
             (*(longlong *)
               ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar6 >> 0x29) * 8) +
             (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
    local_res10[0] = local_res10[0] * 4;
    local_48 = (uint)uVar1;
    if (local_48 != uStack_34) {
      local_res10[0] = local_res10[0] | ((uint)((ulonglong)uVar1 >> 0x20) != uStack_34) + 1;
    }
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
  }
  lVar5 = (ulonglong)(uVar3 >> 9) * 8;
  local_res10[0] =
       *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar5) + 8 +
                (ulonglong)(uVar3 & 0x1ff) * 0x10);
  uVar1 = *(undefined8 *)
           (*(longlong *)
             ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
             (ulonglong)(local_res10[0] >> 9) * 8) + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
  local_res10[0] = local_res10[0] * 4;
  local_58 = (uint)uVar1;
  if (local_58 != uVar3) {
    local_res10[0] = local_res10[0] | ((uint)((ulonglong)uVar1 >> 0x20) != uVar3) + 1;
  }
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
  uVar6 = *(ulonglong *)
           (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar5) + 8 +
           (ulonglong)(uVar3 & 0x1ff) * 0x10);
  local_res10[0] = (uint)(uVar6 >> 0x20);
  if (local_res10[0] != 0xffffffff) {
    uVar1 = *(undefined8 *)
             (*(longlong *)
               ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar6 >> 0x29) * 8) +
             (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
    local_res10[0] = local_res10[0] * 4;
    local_48 = (uint)uVar1;
    if (local_48 != uVar3) {
      local_res10[0] = local_res10[0] | ((uint)((ulonglong)uVar1 >> 0x20) != uVar3) + 1;
    }
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
  }
  return;
}

