// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// operator() @ 14cccc210

void __thiscall
`UE::Geometry::FSparseDynamicPointOctree3::InsertPoint_DynamicExpand'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  FSparseDynamicPointOctree3 *this_00;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  int local_c8 [2];
  undefined4 local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  TVector<double>_u_0 local_88;
  FSparsePointOctreeCell local_68;
  
  local_c8[0] = param_1;
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_88,(*(undefined8 **)((longlong)this + 8))[1],local_c8);
  piVar2 = *(int **)((longlong)this + 0x10);
  this_00 = *(FSparseDynamicPointOctree3 **)this;
  dVar7 = this_00->RootDimension / (double)(ulonglong)(1L << (*(byte *)(piVar2 + 1) & 0x1f));
  iVar5 = 4;
  if (local_88._s_0.Z < ((double)piVar2[4] + __real_3fe0000000000000) * dVar7) {
    iVar5 = 0;
  }
  iVar3 = 2;
  if (local_88._s_0.Y < ((double)piVar2[3] + __real_3fe0000000000000) * dVar7) {
    iVar3 = 0;
  }
  uVar6 = iVar5 + iVar3 +
          (uint)(((double)piVar2[2] + __real_3fe0000000000000) * dVar7 <= local_88._s_0.X);
  uVar1 = piVar2[(ulonglong)uVar6 + 5];
  if (uVar1 == 0xffffffff) {
    uStack_a4 = 0xffffffff;
    uStack_a0 = 0xffffffff;
    uStack_bc = CONCAT31(uStack_bc._1_3_,*(byte *)(piVar2 + 1) + 1);
    local_c0 = 0xffffffff;
    iStack_b8 = (uVar6 & 1) + piVar2[2] * 2;
    uStack_ac = 0xffffffff;
    uStack_a8 = 0xffffffff;
    uStack_98 = 0xffffffffffffffff;
    uStack_9c = 0xffffffff;
    local_68.Children.Elements[7] = 0xffffffff;
    iStack_b4 = (uVar6 >> 1 & 1) + piVar2[3] * 2;
    local_68._4_4_ = uStack_bc;
    local_68.CellID = 0xffffffff;
    local_68.Index.field0_0x0._0_8_ = CONCAT44(iStack_b4,iStack_b8);
    local_68.Children.Elements[3] = 0xffffffff;
    local_68.Children.Elements[4] = 0xffffffff;
    local_b0 = (uVar6 >> 2) + piVar2[4] * 2;
    local_68.Children.Elements[0] = 0xffffffff;
    local_68.Index.field0_0x0._s_0.Z = local_b0;
    local_68.Children.Elements[1] = 0xffffffff;
    local_68.Children.Elements[2] = 0xffffffff;
    local_68.Children.Elements[5] = 0xffffffff;
    local_68.Children.Elements[6] = 0xffffffff;
    UE::Geometry::FSparseDynamicPointOctree3::Insert_NewChildCell
              (this_00,param_1,(TVector<double> *)&local_88._s_0,*piVar2,&local_68,uVar6);
  }
  else {
    puVar4 = (uint *)(*(longlong *)
                       ((this_00->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8
                       ) + (ulonglong)(uVar1 & 0x1ff) * 0x34);
    UE::Geometry::TDynamicVector<unsigned_int,512>::InsertAt
              (&this_00->PointIDToCellMap,puVar4,param_1,
               &UE::Geometry::FSparseDynamicPointOctree3::InvalidCellID);
    uVar1 = *puVar4;
    UE::Geometry::TSparseListSet<int>::Insert_Internal
              (&this_00->CellPointLists,
               (FList *)((ulonglong)(uVar1 & 0x1ff) * 0x60 +
                        *(longlong *)
                         ((this_00->CellPointLists).Lists.Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar1 >> 9) * 8)),param_1);
  }
  return;
}

// CellContains @ 14ccec000

bool __thiscall
UE::Geometry::FSparseDynamicPointOctree3::CellContains
          (FSparseDynamicPointOctree3 *this,FSparsePointOctreeCell *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = this->RootDimension / (double)(ulonglong)(1L << (param_1->Level & 0x1f));
  dVar4 = (double)(param_1->Index).field0_0x0._s_0.X * dVar3;
  dVar5 = (double)(param_1->Index).field0_0x0._s_0.Y * dVar3;
  dVar6 = (double)(param_1->Index).field0_0x0._s_0.Z * dVar3;
  if ((((dVar4 < (param_2->field0_0x0)._s_0.X || dVar4 == (param_2->field0_0x0)._s_0.X) &&
       (dVar1 = (param_2->field0_0x0)._s_0.Y, dVar5 <= dVar1)) &&
      (dVar2 = (param_2->field0_0x0)._s_0.Z, dVar6 <= dVar2)) &&
     ((((param_2->field0_0x0)._s_0.X <= dVar4 + dVar3 && (dVar1 <= dVar5 + dVar3)) &&
      (dVar2 <= dVar6 + dVar3)))) {
    return true;
  }
  return false;
}

// CreateNewRootCell @ 14ccf5280

uint __thiscall
UE::Geometry::FSparseDynamicPointOctree3::CreateNewRootCell
          (FSparseDynamicPointOctree3 *this,FSparsePointOctreeCell *param_1,bool param_2)

{
  FVector3i *pFVar1;
  TSparseGrid3<unsigned_int> *this_00;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint *local_38;
  TPairInitializer<UE::Geometry::FVector3i_const_&,unsigned_int_*_const_&> local_30;
  uint **local_20;
  
  uVar2 = FRefCountVector::Allocate(&this->CellRefCounts);
  param_1->CellID = uVar2;
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::InsertAt(&this->Cells,param_1,uVar2);
  pFVar1 = &param_1->Index;
  this_00 = &this->RootCells;
  uVar2 = FCrc::MemCrc_DEPRECATED(pFVar1,0xc,0);
  iVar3 = TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Geometry::FVector3i>
                    ((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar2,pFVar1);
  if (((iVar3 == -1) ||
      (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&this_00->Elements, lVar4 == 0)) ||
     (puVar5 = *(uint **)(lVar4 + 0x10), puVar5 == (uint *)0x0)) {
    local_38 = ::operator_new(4);
    if (local_38 != (uint *)0x0) {
      *local_38 = 0;
    }
    local_20 = &local_38;
    local_30.Value = (uint **)pFVar1;
    TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,unsigned_int_*_const_&>_>
              ((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                *)this_00,&local_30,(bool *)&local_30.Value);
    iVar3 = (pFVar1->field0_0x0)._s_0.X;
    if (iVar3 < (this->RootCells).Bounds.Min.field0_0x0._s_0.X) {
      (this->RootCells).Bounds.Min.field0_0x0._s_0.X = iVar3;
    }
    if ((this->RootCells).Bounds.Max.field0_0x0._s_0.X < iVar3) {
      (this->RootCells).Bounds.Max.field0_0x0._s_0.X = iVar3;
    }
    iVar3 = (param_1->Index).field0_0x0._s_0.Y;
    if (iVar3 < (this->RootCells).Bounds.Min.field0_0x0._s_0.Y) {
      (this->RootCells).Bounds.Min.field0_0x0._s_0.Y = iVar3;
    }
    if ((this->RootCells).Bounds.Max.field0_0x0._s_0.Y < iVar3) {
      (this->RootCells).Bounds.Max.field0_0x0._s_0.Y = iVar3;
    }
    iVar3 = (param_1->Index).field0_0x0._s_0.Z;
    if (iVar3 < (this->RootCells).Bounds.Min.field0_0x0._s_0.Z) {
      (this->RootCells).Bounds.Min.field0_0x0._s_0.Z = iVar3;
    }
    puVar5 = local_38;
    if ((this->RootCells).Bounds.Max.field0_0x0._s_0.Z < iVar3) {
      (this->RootCells).Bounds.Max.field0_0x0._s_0.Z = iVar3;
    }
  }
  *puVar5 = param_1->CellID;
  if (param_2) {
    TSparseListSet<int>::AllocateAt(&this->CellPointLists,(int)&local_38);
  }
  return param_1->CellID;
}

// FindCurrentContainingCell @ 14ccfa840

FSparsePointOctreeCell * __thiscall
UE::Geometry::FSparseDynamicPointOctree3::FindCurrentContainingCell
          (FSparseDynamicPointOctree3 *this,FSparsePointOctreeCell *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  undefined8 uVar6;
  uchar uVar7;
  undefined3 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  FSparsePointOctreeCell *pFVar15;
  undefined1 *puVar16;
  FSparsePointOctreeCell *pFVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  FVector3i_u_0 local_78 [9];
  
  PointToIndex(this,(FVector3i *)&local_78[0]._s_0,0,param_1);
  uVar10 = FCrc::MemCrc_DEPRECATED(local_78,0xc,0);
  if (*(int *)&(this->RootCells).Elements.field_0x8 !=
      *(int *)&(this->RootCells).Elements.field_0x34) {
    puVar16 = *(undefined1 **)&(this->RootCells).Elements.field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->RootCells).Elements.field_0x38;
    }
    iVar12 = *(int *)(puVar16 +
                     (ulonglong)(*(int *)&(this->RootCells).Elements.field_0x48 - 1U & uVar10) * 4);
    if (iVar12 != -1) {
      do {
        piVar13 = (int *)((longlong)iVar12 * 0x20 + *(longlong *)&(this->RootCells).Elements);
        if (((*piVar13 == local_78[0]._s_0.X) && (piVar13[1] == local_78[0]._s_0.Y)) &&
           (piVar13[2] == local_78[0]._s_0.Z)) {
          if (((iVar12 != -1) && (piVar13 != (int *)0x0)) &&
             (*(uint **)(piVar13 + 4) != (uint *)0x0)) {
            uVar10 = **(uint **)(piVar13 + 4);
            pFVar4 = (this->Cells).Blocks.AllocatorInstance.Data;
            pFVar15 = (FSparsePointOctreeCell *)
                      (*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 0x34);
            bVar9 = CellContains(this,pFVar15,param_1);
            if (!bVar9) {
              __return_storage_ptr__->CellID = 0xffffffff;
              __return_storage_ptr__->Level = 0xff;
              *(undefined8 *)&(__return_storage_ptr__->Index).field0_0x0 = 0;
              (__return_storage_ptr__->Index).field0_0x0._s_0.Z = 0;
              (__return_storage_ptr__->Children).Elements[2] = 0xffffffff;
              (__return_storage_ptr__->Children).Elements[3] = 0xffffffff;
              (__return_storage_ptr__->Children).Elements[0] = 0xffffffff;
              (__return_storage_ptr__->Children).Elements[1] = 0xffffffff;
              (__return_storage_ptr__->Children).Elements[6] = 0xffffffff;
              (__return_storage_ptr__->Children).Elements[7] = 0xffffffff;
              (__return_storage_ptr__->Children).Elements[4] = 0xffffffff;
              (__return_storage_ptr__->Children).Elements[5] = 0xffffffff;
              return __return_storage_ptr__;
            }
            dVar1 = (param_1->field0_0x0)._s_0.Z;
            dVar2 = (param_1->field0_0x0)._s_0.Y;
            dVar3 = (param_1->field0_0x0)._s_0.X;
            dVar5 = this->RootDimension / (double)(ulonglong)(1L << (pFVar15->Level & 0x1f));
            iVar12 = 4;
            if (dVar1 < ((double)(pFVar15->Index).field0_0x0._s_0.Z + __real_3fe0000000000000) *
                        dVar5) {
              iVar12 = 0;
            }
            iVar11 = 2;
            if (dVar2 < ((double)(pFVar15->Index).field0_0x0._s_0.Y + __real_3fe0000000000000) *
                        dVar5) {
              iVar11 = 0;
            }
            uVar14 = (ulonglong)
                     (iVar12 + iVar11 +
                     (uint)(((double)(pFVar15->Index).field0_0x0._s_0.X + __real_3fe0000000000000) *
                            dVar5 <= dVar3));
            uVar10 = (pFVar15->Children).Elements[uVar14];
            goto joined_r0x00014ccfaacb;
          }
          break;
        }
        iVar12 = piVar13[6];
      } while (iVar12 != -1);
    }
  }
  *(ulonglong *)&(__return_storage_ptr__->Index).field0_0x0 =
       CONCAT44(local_78[0]._s_0.Y,local_78[0]._s_0.X);
  (__return_storage_ptr__->Index).field0_0x0._s_0.Z = local_78[0]._s_0.Z;
  __return_storage_ptr__->CellID = 0xffffffff;
  __return_storage_ptr__->Level = '\0';
  (__return_storage_ptr__->Children).Elements[2] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[3] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[0] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[1] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[6] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[7] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[4] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[5] = 0xffffffff;
  return __return_storage_ptr__;
joined_r0x00014ccfaacb:
  if (uVar10 == 0xffffffff) {
LAB_14ccfabf3:
    uVar7 = pFVar15->Level;
    uVar8 = *(undefined3 *)&pFVar15->field_0x5;
    uVar6 = *(undefined8 *)&(pFVar15->Index).field0_0x0;
    __return_storage_ptr__->CellID = pFVar15->CellID;
    __return_storage_ptr__->Level = uVar7;
    *(undefined3 *)&__return_storage_ptr__->field_0x5 = uVar8;
    *(undefined8 *)&(__return_storage_ptr__->Index).field0_0x0 = uVar6;
    uVar6 = *(undefined8 *)((pFVar15->Children).Elements + 1);
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Index).field0_0x0 + 8) =
         *(undefined8 *)((longlong)&(pFVar15->Index).field0_0x0 + 8);
    *(undefined8 *)((__return_storage_ptr__->Children).Elements + 1) = uVar6;
    uVar6 = *(undefined8 *)((pFVar15->Children).Elements + 5);
    *(undefined8 *)((__return_storage_ptr__->Children).Elements + 3) =
         *(undefined8 *)((pFVar15->Children).Elements + 3);
    *(undefined8 *)((__return_storage_ptr__->Children).Elements + 5) = uVar6;
    (__return_storage_ptr__->Children).Elements[7] = (pFVar15->Children).Elements[7];
    return __return_storage_ptr__;
  }
  uVar10 = (pFVar15->Children).Elements[uVar14];
  pFVar17 = (FSparsePointOctreeCell *)
            (*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
            (ulonglong)(uVar10 & 0x1ff) * 0x34);
  dVar5 = this->RootDimension / (double)(ulonglong)(1L << (pFVar17->Level & 0x1f));
  dVar20 = (double)(pFVar17->Index).field0_0x0._s_0.X * dVar5;
  dVar19 = (double)(pFVar17->Index).field0_0x0._s_0.Y * dVar5;
  dVar18 = (double)(pFVar17->Index).field0_0x0._s_0.Z * dVar5;
  if (((dVar3 < dVar20) || (dVar2 < dVar19)) ||
     ((dVar1 < dVar18 ||
      (((dVar20 + dVar5 < dVar3 || (dVar19 + dVar5 < dVar2)) || (dVar18 + dVar5 < dVar1))))))
  goto LAB_14ccfabf3;
  dVar5 = dVar5 * __real_3fe0000000000000;
  iVar12 = 4;
  if (dVar1 < dVar18 + dVar5) {
    iVar12 = 0;
  }
  iVar11 = 2;
  if (dVar2 < dVar19 + dVar5) {
    iVar11 = 0;
  }
  uVar14 = (ulonglong)((uint)(dVar20 + dVar5 <= dVar3) + iVar12 + iVar11);
  uVar10 = (pFVar17->Children).Elements[uVar14];
  pFVar15 = pFVar17;
  goto joined_r0x00014ccfaacb;
}

// InsertPoint @ 14cd07570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::InsertPoint
          (FSparseDynamicPointOctree3 *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStackY_f8 [32];
  FSparsePointOctreeCell local_c8;
  FSparsePointOctreeCell local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (((ulonglong)
       ((this->PointIDToCellMap).CurBlock * 0x200 + (this->PointIDToCellMap).CurBlockUsed) <=
       (ulonglong)(longlong)param_1) ||
     (*(int *)(*(longlong *)
                ((this->PointIDToCellMap).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4) == -1)) {
    FindCurrentContainingCell(this,&local_88,param_2);
    uVar4 = local_88.CellID;
    if ((local_88.Level == 0) && (uVar4 == 0xffffffff)) {
      local_c8.CellID = local_88.CellID;
      local_c8.Level = local_88.Level;
      local_c8._5_3_ = local_88._5_3_;
      local_c8.Children.Elements[7] = local_88.Children.Elements[7];
      local_c8.Children.Elements[1] = local_88.Children.Elements[1];
      local_c8.Children.Elements[2] = local_88.Children.Elements[2];
      local_c8.Children.Elements[3] = local_88.Children.Elements[3];
      local_c8.Children.Elements[4] = local_88.Children.Elements[4];
      local_c8.Children.Elements[5] = local_88.Children.Elements[5];
      local_c8.Children.Elements[6] = local_88.Children.Elements[6];
      Insert_NewRoot(this,param_1,param_2,&local_c8);
    }
    else {
      dVar8 = this->RootDimension / (double)(ulonglong)(1L << (local_88.Level & 0x1f));
      dVar7 = ((double)local_88.Index.field0_0x0._s_0.Z + __real_3fe0000000000000) * dVar8;
      pdVar1 = &(param_2->field0_0x0)._s_0.Z;
      iVar5 = 4;
      if (*pdVar1 <= dVar7 && dVar7 != *pdVar1) {
        iVar5 = 0;
      }
      dVar7 = ((double)local_88.Index.field0_0x0._s_0.Y + __real_3fe0000000000000) * dVar8;
      pdVar1 = &(param_2->field0_0x0)._s_0.Y;
      iVar3 = 2;
      if (*pdVar1 <= dVar7 && dVar7 != *pdVar1) {
        iVar3 = 0;
      }
      dVar8 = ((double)local_88.Index.field0_0x0._s_0.X + __real_3fe0000000000000) * dVar8;
      uVar6 = iVar5 + iVar3 +
              (uint)(dVar8 < (param_2->field0_0x0)._s_0.X || dVar8 == (param_2->field0_0x0)._s_0.X);
      if (local_88.Children.Elements[uVar6] == 0xffffffff) {
        local_c8.Level = local_88.Level + 1;
        local_c8.CellID = 0xffffffff;
        local_c8.Children.Elements[2] = 0xffffffff;
        local_c8.Children.Elements[3] = 0xffffffff;
        local_c8.Children.Elements[0] = 0xffffffff;
        local_c8.Children.Elements[1] = 0xffffffff;
        local_c8.Children.Elements[6] = 0xffffffff;
        local_c8.Children.Elements[7] = 0xffffffff;
        local_c8.Children.Elements[4] = 0xffffffff;
        local_c8.Children.Elements[5] = 0xffffffff;
        local_c8.Index.field0_0x0._s_0.Y = (uVar6 >> 1 & 1) + local_88.Index.field0_0x0._s_0.Y * 2;
        local_c8.Index.field0_0x0._s_0.X = (uVar6 & 1) + local_88.Index.field0_0x0._s_0.X * 2;
        local_c8.Index.field0_0x0._s_0.Z = (uVar6 >> 2) + local_88.Index.field0_0x0._s_0.Z * 2;
        if (((int)(uint)(byte)(local_88.Level + 1) <= this->MaxTreeDepth) &&
           (bVar2 = CellContains(this,&local_c8,param_2), bVar2)) {
          local_88.Children.Elements[2] = local_c8.Children.Elements[2];
          local_88.Children.Elements[1] = local_c8.Children.Elements[1];
          local_88.CellID = local_c8.CellID;
          local_88.Level = local_c8.Level;
          local_88._5_3_ = local_c8._5_3_;
          local_88.Index.field0_0x0._s_0.X = (int)local_c8.Index.field0_0x0._0_8_;
          local_88.Index.field0_0x0._s_0.Y =
               (int)((ulonglong)local_c8.Index.field0_0x0._0_8_ >> 0x20);
          local_88.Children.Elements[4] = local_c8.Children.Elements[4];
          local_88.Children.Elements[3] = local_c8.Children.Elements[3];
          local_88.Children.Elements[6] = local_c8.Children.Elements[6];
          local_88.Children.Elements[5] = local_c8.Children.Elements[5];
          local_88.Children.Elements[7] = 0xffffffff;
          local_88.Index.field0_0x0._s_0.Z = local_c8.Index.field0_0x0._s_0.Z;
          local_88.Children.Elements[0] = local_c8.Children.Elements[0];
          Insert_NewChildCell(this,param_1,param_2,uVar4,&local_88,uVar6);
          return;
        }
      }
      TDynamicVector<unsigned_int,512>::InsertAt
                (&this->PointIDToCellMap,&local_88.CellID,param_1,&InvalidCellID);
      TSparseListSet<int>::Insert_Internal
                (&this->CellPointLists,
                 (FList *)((ulonglong)(uVar4 & 0x1ff) * 0x60 +
                          *(longlong *)
                           ((this->CellPointLists).Lists.Blocks.AllocatorInstance.Data +
                           ((local_88._0_8_ & 0xffffffff) >> 9) * 8)),param_1);
    }
  }
  return;
}

// InsertPoint_DynamicExpand @ 14cd07820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::InsertPoint_DynamicExpand
          (FSparseDynamicPointOctree3 *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2)

{
  TSparseListSet<int> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  int local_118 [2];
  uint local_110 [2];
  uint local_108;
  int local_104;
  uint *local_100;
  FSparseDynamicPointOctree3 *local_f8;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_f0;
  uint *local_e8;
  FSparsePointOctreeCell local_d8;
  TVector<double> local_98;
  FSparsePointOctreeCell local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (((ulonglong)
       ((this->PointIDToCellMap).CurBlockUsed + (this->PointIDToCellMap).CurBlock * 0x200) <=
       (ulonglong)(longlong)param_1) ||
     (*(int *)(*(longlong *)
                ((this->PointIDToCellMap).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4) == -1)) {
    local_118[0] = param_1;
    local_104 = param_1;
    (**(code **)param_2)(&local_98,*(undefined8 *)&param_2->field_0x8,local_118);
    FindCurrentContainingCell(this,&local_80,&local_98);
    if ((local_80.Level == '\0') && (local_80.CellID == 0xffffffff)) {
      local_d8.Index.field0_0x0._0_8_ = local_80.Index.field0_0x0._0_8_;
      local_d8.Children.Elements[7] = local_80.Children.Elements[7];
      local_d8._16_8_ = local_80._16_8_;
      local_d8.Children.Elements[1] = local_80.Children.Elements[1];
      local_d8.Children.Elements[2] = local_80.Children.Elements[2];
      local_d8.Children.Elements[3] = local_80.Children.Elements[3];
      local_d8.Children.Elements[4] = local_80.Children.Elements[4];
      local_d8.Children.Elements[5] = local_80.Children.Elements[5];
      local_d8.Children.Elements[6] = local_80.Children.Elements[6];
      uVar5 = CreateNewRootCell(this,&local_d8,true);
      local_110[0] = uVar5;
      TDynamicVector<unsigned_int,512>::InsertAt
                (&this->PointIDToCellMap,local_110,param_1,&InvalidCellID);
      TSparseListSet<int>::Insert_Internal
                (&this->CellPointLists,
                 (FList *)((ulonglong)(uVar5 & 0x1ff) * 0x60 +
                          *(longlong *)
                           ((this->CellPointLists).Lists.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar5 >> 9) * 8)),param_1);
    }
    else {
      uVar12 = 0;
      this_00 = &this->CellPointLists;
      pFVar2 = (this->CellPointLists).Lists.Blocks.AllocatorInstance.Data;
      lVar14 = (ulonglong)(local_80.CellID >> 9) * 8;
      lVar9 = *(longlong *)(pFVar2 + lVar14) + (ulonglong)(local_80.CellID & 0x1ff) * 0x60;
      iVar8 = *(int *)(lVar9 + 0x48) + -1;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if ((iVar8 * this_00->BlockSize + *(int *)(lVar9 + 0x58) + 1 < this->MaxPointsPerCell) ||
         ((local_80._4_4_ & 0xff) == this->MaxTreeDepth)) {
        TDynamicVector<unsigned_int,512>::InsertAt
                  (&this->PointIDToCellMap,&local_80.CellID,param_1,&InvalidCellID);
        TSparseListSet<int>::Insert_Internal
                  (this_00,(FList *)((ulonglong)(local_80.CellID & 0x1ff) * 0x60 +
                                    *(longlong *)
                                     ((this->CellPointLists).Lists.Blocks.AllocatorInstance.Data +
                                     lVar14)),param_1);
      }
      else {
        local_100 = (uint *)(*(longlong *)((this->Cells).Blocks.AllocatorInstance.Data + lVar14) +
                            (ulonglong)(local_80.CellID & 0x1ff) * 0x34);
        lVar14 = *(longlong *)(pFVar2 + (ulonglong)(*local_100 >> 9) * 8) +
                 (ulonglong)(*local_100 & 0x1ff) * 0x60;
        local_f8 = this;
        local_f0 = param_2;
        local_e8 = local_100;
        if (*(longlong *)(lVar14 + 0x50) != 0) {
          iVar8 = *(int *)(lVar14 + 0x48);
          if (0 < iVar8) {
            local_108 = iVar8 - 1;
            uVar13 = uVar12;
            do {
              uVar5 = local_108;
              uVar11 = (uint)uVar12;
              uVar6 = 0;
              if ((int)uVar11 < *(int *)(lVar14 + 0x48)) {
                uVar6 = ~uVar11 >> 0x1f;
              }
              if (uVar6 == 0) {
                local_128 = (longlong)(int)uVar11;
                local_120 = (longlong)*(int *)(lVar14 + 0x48);
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              lVar9 = lVar14;
              if (*(longlong *)(lVar14 + 0x40) != 0) {
                lVar9 = *(longlong *)(lVar14 + 0x40);
              }
              piVar10 = *(int **)(lVar9 + uVar13 * 8);
              if (uVar11 == uVar5) {
                iVar7 = *(int *)(lVar14 + 0x58);
              }
              else {
                iVar7 = this_00->BlockSize;
              }
              piVar1 = piVar10 + iVar7;
              param_1 = local_104;
              for (; local_104 = param_1, piVar10 != piVar1; piVar10 = piVar10 + 1) {
                `UE::Geometry::FSparseDynamicPointOctree3::InsertPoint_DynamicExpand'::__l2::
                <lambda_1>::operator()(&local_f8,*piVar10);
                param_1 = local_104;
              }
              uVar12 = (ulonglong)(uVar11 + 1);
              uVar13 = uVar13 + 1;
            } while ((longlong)uVar13 < (longlong)iVar8);
          }
        }
        TSparseListSet<int>::Clear_Internal
                  (this_00,(FList *)((ulonglong)(*local_100 & 0x1ff) * 0x60 +
                                    *(longlong *)
                                     ((this->CellPointLists).Lists.Blocks.AllocatorInstance.Data +
                                     (ulonglong)(*local_100 >> 9) * 8)));
        `UE::Geometry::FSparseDynamicPointOctree3::InsertPoint_DynamicExpand'::__l2::<lambda_1>::
        operator()(&local_f8,param_1);
      }
    }
  }
  return;
}

// Insert_NewChildCell @ 14cd07d10

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::Insert_NewChildCell
          (FSparseDynamicPointOctree3 *this,int param_1,TVector<double> *param_2,int param_3,
          FSparsePointOctreeCell *param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FSparsePointOctreeCell *pFVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  lVar1 = *(longlong *)
           ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_3 >> 9) * 8);
  uVar7 = FRefCountVector::Allocate(&this->CellRefCounts);
  pFVar6 = param_4;
  uVar8 = (this->Cells).CurBlock * 0x200 + (this->Cells).CurBlockUsed;
  param_4->CellID = uVar7;
  if (uVar7 != uVar8) {
    if (uVar7 <= uVar8) {
      uVar2 = *(undefined8 *)&(param_4->Index).field0_0x0;
      uVar3 = *(undefined8 *)((longlong)&(param_4->Index).field0_0x0 + 8);
      uVar4 = *(undefined8 *)((param_4->Children).Elements + 1);
      uVar8 = (param_4->Children).Elements[7];
      puVar9 = (undefined8 *)
               (*(longlong *)
                 ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
               (ulonglong)(uVar7 & 0x1ff) * 0x34);
      *puVar9 = *(undefined8 *)param_4;
      puVar9[1] = uVar2;
      uVar2 = *(undefined8 *)((param_4->Children).Elements + 3);
      uVar5 = *(undefined8 *)((param_4->Children).Elements + 5);
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      puVar9[4] = uVar2;
      puVar9[5] = uVar5;
      *(uint *)(puVar9 + 6) = uVar8;
      goto LAB_14cd07dc1;
    }
    TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::Resize(&this->Cells,uVar7);
  }
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::Add(&this->Cells,pFVar6);
LAB_14cd07dc1:
  TDynamicVector<unsigned_int,512>::InsertAt
            (&this->PointIDToCellMap,&pFVar6->CellID,param_1,&InvalidCellID);
  TSparseListSet<int>::AllocateAt(&this->CellPointLists,(int)&param_4);
  TSparseListSet<int>::Insert_Internal
            (&this->CellPointLists,
             (FList *)((ulonglong)(uVar7 & 0x1ff) * 0x60 +
                      *(longlong *)
                       ((this->CellPointLists).Lists.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar7 >> 9) * 8)),param_1);
  *(uint *)((ulonglong)(param_3 & 0x1ff) * 0x34 + lVar1 + 0x14 + (ulonglong)(uint)param_5 * 4) =
       uVar7;
  return;
}

// Insert_NewRoot @ 14cd07e50

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::Insert_NewRoot
          (FSparseDynamicPointOctree3 *this,int param_1,TVector<double> *param_2,
          FSparsePointOctreeCell *param_3)

{
  uint uVar1;
  uint local_res8 [2];
  FSparsePointOctreeCell local_48;
  
  local_48.CellID = param_3->CellID;
  local_48.Level = param_3->Level;
  local_48._5_3_ = *(undefined3 *)&param_3->field_0x5;
  local_48.Index.field0_0x0._0_8_ = *(undefined8 *)&(param_3->Index).field0_0x0;
  local_48.Children.Elements[7] = (param_3->Children).Elements[7];
  local_48._16_8_ = *(undefined8 *)((longlong)&(param_3->Index).field0_0x0 + 8);
  local_48.Children.Elements._4_8_ = *(undefined8 *)((param_3->Children).Elements + 1);
  local_48.Children.Elements._12_8_ = *(undefined8 *)((param_3->Children).Elements + 3);
  local_48.Children.Elements._20_8_ = *(undefined8 *)((param_3->Children).Elements + 5);
  uVar1 = CreateNewRootCell(this,&local_48,true);
  local_res8[0] = uVar1;
  TDynamicVector<unsigned_int,512>::InsertAt
            (&this->PointIDToCellMap,local_res8,param_1,&InvalidCellID);
  TSparseListSet<int>::Insert_Internal
            (&this->CellPointLists,
             (FList *)((ulonglong)(uVar1 & 0x1ff) * 0x60 +
                      *(longlong *)
                       ((this->CellPointLists).Lists.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar1 >> 9) * 8)),param_1);
  return;
}

