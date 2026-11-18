// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 3

// FMeshEdgeSelection @ 1435e2e30

FMeshEdgeSelection * __thiscall
UE::Geometry::FMeshEdgeSelection::FMeshEdgeSelection
          (FMeshEdgeSelection *this,FDynamicMesh3 *param_1,FMeshFaceSelection *param_2,int param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  int local_res8 [2];
  undefined8 local_res10;
  uint local_res20 [2];
  int local_b8 [2];
  undefined8 local_b0;
  undefined1 local_a0 [12];
  uint local_94;
  longlong local_90;
  uint local_88;
  int local_84;
  int local_78;
  TBaseIterator<1,1> local_70;
  
  this->Mesh = param_1;
  uVar10 = 0;
  *(undefined8 *)&(this->Selected).Elements = 0;
  *(undefined8 *)&(this->Selected).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Selected).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Selected).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Selected).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Selected).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Selected).Elements.field_0x34 = 0;
  (this->Selected).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Selected).HashSize = 0;
  iVar7 = 2;
  if (param_3 < 2) {
    iVar7 = param_3;
  }
  iVar6 = 1;
  if (1 < iVar7) {
    iVar6 = iVar7;
  }
  if (iVar6 == 1) {
    FMeshFaceSelection::begin(param_2,(TBaseIterator<1,1> *)local_a0);
    FMeshFaceSelection::end(param_2,&local_70);
    while( true ) {
      uVar5 = local_a0._0_8_;
      if ((int)*(longlong *)(local_a0._0_8_ + 8) - *(int *)(local_a0._0_8_ + 0x34) != local_78) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((local_84 == local_70.ElementIt._padding_._4_4_) &&
          (local_90 == local_70.ElementIt._padding_)) && (uVar5 == local_70.ElementIt._padding_))
      break;
      uVar11 = *(uint *)(*(longlong *)uVar5 + (longlong)local_84 * 0xc);
      uVar10 = (ulonglong)(uVar11 & 0x1ff);
      lVar1 = *(longlong *)
               ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar11 >> 9) * 8);
      local_b0 = *(undefined8 *)(lVar1 + uVar10 * 0xc);
      uVar11 = *(uint *)(lVar1 + 8 + uVar10 * 0xc);
      local_res20[0] = (uint)local_b0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->Selected,local_res8,(bool *)local_res20);
      local_res20[0] = local_b0._4_4_;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->Selected,(int *)&local_res10,(bool *)local_res20);
      local_res20[0] = uVar11;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->Selected,local_b8,(bool *)local_res20);
      local_88 = local_88 & ~local_94;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a0 + 8));
    }
    return this;
  }
  uVar11 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
  if ((uVar11 != 0) &&
     (pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar10 = 1;
    uVar9 = 1;
    if ((int)uVar11 < 2) goto joined_r0x0001435e3017;
    do {
      lVar1 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar2 + (uVar10 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar2 + (uVar10 >> 9) * 8)) != -1)) break;
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar11);
  }
  uVar9 = (uint)uVar10;
joined_r0x0001435e3017:
  if (uVar9 == uVar11) {
    return this;
  }
  do {
    uVar9 = (uint)uVar10;
    uVar10 = *(ulonglong *)
              (*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8)
               + 8 + (ulonglong)(uVar9 & 0x1ff) * 0x10);
    if (*(int *)&(param_2->Selected).Elements.field_0x8 !=
        *(int *)&(param_2->Selected).Elements.field_0x34) {
      FVar3 = (param_2->Selected).Hash.SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&(param_2->Selected).Hash;
      FVar8 = FVar12;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar3;
      }
      uVar13 = (param_2->Selected).HashSize - 1;
      iVar7 = *(int *)((longlong)FVar8 + ((ulonglong)uVar13 & uVar10 & 0xffffffff) * 4);
      if (iVar7 != -1) {
        lVar1 = *(longlong *)&(param_2->Selected).Elements;
        do {
          if (*(int *)(lVar1 + (longlong)iVar7 * 0xc) == (int)uVar10) {
            local_res10._4_4_ = (uint)(uVar10 >> 0x20);
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar12 = FVar3;
            }
            iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(uVar13 & local_res10._4_4_) * 4);
            goto joined_r0x0001435e30bf;
          }
          iVar7 = *(int *)(lVar1 + 4 + (longlong)iVar7 * 0xc);
        } while (iVar7 != -1);
      }
    }
LAB_1435e30f0:
    uVar9 = uVar9 + 1;
    uVar10 = (ulonglong)uVar9;
    if ((int)uVar11 <= (int)uVar9) goto joined_r0x0001435e3017;
    pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    while( true ) {
      lVar1 = (uVar10 >> 9) * 8;
      lVar4 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar1)) != 0) &&
         (*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar1)) != -1)) break;
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar11 <= (int)uVar9) goto joined_r0x0001435e3017;
    }
  } while( true );
joined_r0x0001435e30bf:
  if (iVar7 == -1) goto LAB_1435e30f0;
  if (*(uint *)(lVar1 + (longlong)iVar7 * 0xc) == local_res10._4_4_) {
    local_res10 = uVar10;
    local_res20[0] = uVar9;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res8,(bool *)local_res20);
    goto LAB_1435e30f0;
  }
  iVar7 = *(int *)(lVar1 + 4 + (longlong)iVar7 * 0xc);
  goto joined_r0x0001435e30bf;
}

// FMeshEdgeSelection @ 1435e3170

FMeshEdgeSelection * __thiscall
UE::Geometry::FMeshEdgeSelection::FMeshEdgeSelection
          (FMeshEdgeSelection *this,FDynamicMesh3 *param_1,FMeshVertexSelection *param_2,int param_3
          )

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  uint local_res8;
  uint uStackX_c;
  int local_res10 [2];
  
  this->Mesh = param_1;
  *(undefined8 *)&(this->Selected).Elements = 0;
  *(undefined8 *)&(this->Selected).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Selected).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Selected).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Selected).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Selected).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Selected).Elements.field_0x34 = 0;
  (this->Selected).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Selected).HashSize = 0;
  pFVar2 = this->Mesh;
  uVar11 = (pFVar2->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar2->EdgeRefCounts).RefCounts.CurBlockUsed;
  uVar10 = 0;
  if ((uVar11 != 0) &&
     (pFVar3 = (pFVar2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar10 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar10 = 1;
    uVar9 = 1;
    if ((int)uVar11 < 2) goto joined_r0x0001435e3237;
    do {
      lVar1 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + (uVar10 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar3 + (uVar10 >> 9) * 8)) != -1)) break;
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar11);
  }
  uVar9 = (uint)uVar10;
joined_r0x0001435e3237:
  if (uVar9 == uVar11) {
    return this;
  }
  do {
    uVar9 = (uint)uVar10;
    uVar10 = *(ulonglong *)
              (*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8)
              + (ulonglong)(uVar9 & 0x1ff) * 0x10);
    uStackX_c = (uint)(uVar10 >> 0x20);
    if (*(int *)&(param_2->Selected).Elements.field_0x8 ==
        *(int *)&(param_2->Selected).Elements.field_0x34) {
      iVar7 = -1;
      iVar6 = -1;
    }
    else {
      FVar4 = (param_2->Selected).Hash.SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&(param_2->Selected).Hash;
      FVar8 = FVar12;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar4;
      }
      iVar6 = *(int *)((longlong)FVar8 +
                      ((ulonglong)((param_2->Selected).HashSize - 1) & uVar10 & 0xffffffff) * 4);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&(param_2->Selected).Elements;
        do {
          if (*(int *)(lVar1 + (longlong)iVar6 * 0xc) == (int)uVar10) goto LAB_1435e32ce;
          iVar6 = *(int *)(lVar1 + 4 + (longlong)iVar6 * 0xc);
        } while (iVar6 != -1);
      }
      iVar6 = -1;
LAB_1435e32ce:
      FVar4 = (param_2->Selected).Hash.SecondaryData;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar4;
      }
      iVar7 = *(int *)((longlong)FVar12 +
                      (ulonglong)((param_2->Selected).HashSize - 1U & uStackX_c) * 4);
      if (iVar7 != -1) {
        lVar1 = *(longlong *)&(param_2->Selected).Elements;
        do {
          if (*(uint *)(lVar1 + (longlong)iVar7 * 0xc) == uStackX_c) goto LAB_1435e330f;
          iVar7 = *(int *)(lVar1 + 4 + (longlong)iVar7 * 0xc);
        } while (iVar7 != -1);
      }
      iVar7 = -1;
    }
LAB_1435e330f:
    if (param_3 <= (int)((uint)(iVar7 != -1) + (uint)(iVar6 != -1))) {
      _local_res8 = CONCAT44(uStackX_c,uVar9);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->Selected,local_res10,(bool *)&local_res8);
    }
    uVar9 = uVar9 + 1;
    uVar10 = (ulonglong)uVar9;
    if ((int)uVar11 <= (int)uVar9) goto joined_r0x0001435e3237;
    pFVar3 = (pFVar2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    while( true ) {
      lVar1 = (uVar10 >> 9) * 8;
      lVar5 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
         (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != -1)) break;
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar11 <= (int)uVar9) goto joined_r0x0001435e3237;
    }
  } while( true );
}

// SelectBoundaryTriEdges @ 143619700

void __thiscall
UE::Geometry::FMeshEdgeSelection::SelectBoundaryTriEdges
          (FMeshEdgeSelection *this,FMeshFaceSelection *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  uint local_res10 [2];
  int local_res18 [4];
  uint local_a8;
  uint uStack_a4;
  undefined1 local_98 [12];
  uint local_8c;
  longlong local_88;
  uint local_80;
  int local_7c;
  int local_70;
  TBaseIterator<1,1> local_68;
  
  FMeshFaceSelection::begin(param_1,(TBaseIterator<1,1> *)local_98);
  FMeshFaceSelection::end(param_1,&local_68);
  do {
    uVar1 = local_98._0_8_;
    if ((int)*(longlong *)(local_98._0_8_ + 8) - *(int *)(local_98._0_8_ + 0x34) != local_70) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((local_7c == local_68.ElementIt._padding_._4_4_) &&
        (local_88 == local_68.ElementIt._padding_)) && (uVar1 == local_68.ElementIt._padding_)) {
      return;
    }
    uVar2 = *(uint *)(*(longlong *)uVar1 + (longlong)local_7c * 0xc);
    lVar4 = *(longlong *)
             ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar2 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar4 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    uVar3 = *(uint *)(lVar4 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_a8 = (uint)uVar1;
    uVar5 = *(ulonglong *)
             (*(longlong *)
               ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_a8 >> 9) * 8)
              + 8 + (ulonglong)(local_a8 & 0x1ff) * 0x10);
    if ((uint)uVar5 == uVar2) {
      uVar5 = uVar5 >> 0x20;
    }
    if (*(int *)&(param_1->Selected).Elements.field_0x8 !=
        *(int *)&(param_1->Selected).Elements.field_0x34) {
      FVar6 = (param_1->Selected).Hash.SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)&(param_1->Selected).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar6;
      }
      iVar8 = *(int *)((longlong)FVar7 +
                      ((ulonglong)((param_1->Selected).HashSize - 1) & uVar5 & 0xffffffff) * 4);
      if (iVar8 != -1) {
        lVar4 = *(longlong *)&(param_1->Selected).Elements;
        do {
          if (*(int *)(lVar4 + (longlong)iVar8 * 0xc) == (int)uVar5) {
            if (iVar8 != -1) goto LAB_14361986c;
            break;
          }
          iVar8 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0xc);
        } while (iVar8 != -1);
      }
    }
    local_res10[0] = local_a8;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res18,(bool *)local_res10);
LAB_14361986c:
    uStack_a4 = (uint)((ulonglong)uVar1 >> 0x20);
    uVar5 = *(ulonglong *)
             (*(longlong *)
               ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uStack_a4 >> 9) * 8)
              + 8 + (ulonglong)(uStack_a4 & 0x1ff) * 0x10);
    if ((uint)uVar5 == uVar2) {
      uVar5 = uVar5 >> 0x20;
    }
    if (*(int *)&(param_1->Selected).Elements.field_0x8 !=
        *(int *)&(param_1->Selected).Elements.field_0x34) {
      FVar6 = (param_1->Selected).Hash.SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)&(param_1->Selected).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar6;
      }
      iVar8 = *(int *)((longlong)FVar7 +
                      ((ulonglong)((param_1->Selected).HashSize - 1) & uVar5 & 0xffffffff) * 4);
      if (iVar8 != -1) {
        lVar4 = *(longlong *)&(param_1->Selected).Elements;
        do {
          if (*(int *)(lVar4 + (longlong)iVar8 * 0xc) == (int)uVar5) goto LAB_1436198fe;
          iVar8 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0xc);
        } while (iVar8 != -1);
      }
    }
    local_res10[0] = uStack_a4;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res18,(bool *)local_res10);
LAB_1436198fe:
    uVar5 = *(ulonglong *)
             (*(longlong *)
               ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) + 8
             + (ulonglong)(uVar3 & 0x1ff) * 0x10);
    if ((uint)uVar5 == uVar2) {
      uVar5 = uVar5 >> 0x20;
    }
    if (*(int *)&(param_1->Selected).Elements.field_0x8 !=
        *(int *)&(param_1->Selected).Elements.field_0x34) {
      FVar6 = (param_1->Selected).Hash.SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)&(param_1->Selected).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar6;
      }
      iVar8 = *(int *)((longlong)FVar7 +
                      ((ulonglong)((param_1->Selected).HashSize - 1) & uVar5 & 0xffffffff) * 4);
      if (iVar8 != -1) {
        lVar4 = *(longlong *)&(param_1->Selected).Elements;
        do {
          if (*(int *)(lVar4 + (longlong)iVar8 * 0xc) == (int)uVar5) goto LAB_14361998f;
          iVar8 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0xc);
        } while (iVar8 != -1);
      }
    }
    local_res10[0] = uVar3;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res18,(bool *)local_res10);
LAB_14361998f:
    local_80 = local_80 & ~local_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_98 + 8));
  } while( true );
}

