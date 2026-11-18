// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// NotifyPendingModification<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14cc18af0

void __thiscall
UE::Geometry::FDynamicMeshOctree3::
NotifyPendingModification<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FDynamicMeshOctree3 *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  int iVar4;
  FDynamicMesh3 *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_40;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14cc18b8e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = local_res18 + -1 + iVar13;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14cc18b8e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar7,iVar11);
  TStack_90.CurrentBitIndex = iVar8;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_90._28_4_ = iVar8;
  TStack_90.BaseBitIndex = iVar13;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14cc18c90;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14cc18c90:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_90.CurrentBitIndex == uVar10) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar7 = *(uint *)(*(longlong *)&param_1->Elements + (longlong)TStack_90.CurrentBitIndex * 0xc);
    this_00 = this->Mesh;
    if (((-1 < (int)uVar7) &&
        ((int)uVar7 <
         (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) <
        0xfffe)) {
      FDynamicMesh3::GetTriBounds(this_00,(TAxisAlignedBox3<double> *)&local_68._s_0,uVar7);
      dVar3 = *(double *)&(this->ModifiedBounds).Min.field0_0x0;
      uVar16 = SUB84(dVar3,0);
      uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (local_68._s_0.X <= dVar3) {
        uVar16 = SUB84(local_68._s_0.X,0);
        uVar17 = (undefined4)((ulonglong)local_68._0_8_ >> 0x20);
      }
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Min.field0_0x0 + 8);
      uVar18 = SUB84(dVar3,0);
      uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (local_68._s_0.Y <= dVar3) {
        uVar18 = SUB84(local_68._s_0.Y,0);
        uVar19 = (undefined4)((ulonglong)local_68._8_8_ >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar17,uVar16);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Min.field0_0x0 + 0x10);
      uVar16 = SUB84(dVar3,0);
      uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (local_68._s_0.Z <= dVar3) {
        uVar16 = SUB84(local_68._s_0.Z,0);
        uVar17 = (undefined4)((ulonglong)local_68._16_8_ >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar18);
      dVar3 = *(double *)&(this->ModifiedBounds).Max.field0_0x0;
      uVar18 = SUB84(dVar3,0);
      uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_50) {
        uVar18 = SUB84(local_50,0);
        uVar19 = (undefined4)((ulonglong)local_50 >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar17,uVar16);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Max.field0_0x0 + 8);
      uVar16 = SUB84(dVar3,0);
      uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_48) {
        uVar16 = SUB84(local_48,0);
        uVar17 = (undefined4)((ulonglong)local_48 >> 0x20);
      }
      (this->ModifiedBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar18);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Max.field0_0x0 + 0x10);
      uVar18 = SUB84(dVar3,0);
      uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_40) {
        uVar18 = SUB84(local_40,0);
        uVar19 = (undefined4)((ulonglong)local_40 >> 0x20);
      }
      (this->ModifiedBounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar17,uVar16);
      (this->ModifiedBounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar18);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// ReinsertTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14cc19d20

void __thiscall
UE::Geometry::FDynamicMeshOctree3::
ReinsertTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FDynamicMeshOctree3 *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  int iVar4;
  FDynamicMesh3 *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_40;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14cc19dbd;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = local_res18 + -1 + iVar13;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14cc19dbd:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar7,iVar11);
  TStack_90.CurrentBitIndex = iVar8;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_90._28_4_ = iVar8;
  TStack_90.BaseBitIndex = iVar13;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14cc19ec0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14cc19ec0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_90.CurrentBitIndex == uVar10) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar7 = *(uint *)(*(longlong *)&param_1->Elements + (longlong)TStack_90.CurrentBitIndex * 0xc);
    this_00 = this->Mesh;
    if ((((int)uVar7 < 0) ||
        ((int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (this_00->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar7)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((this_00->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
                                    (ulonglong)(uVar7 & 0x1ff) * 2) - 1U))) {
      FSparseDynamicOctree3::RemoveObject((FSparseDynamicOctree3 *)this,uVar7);
    }
    else {
      FDynamicMesh3::GetTriBounds(this_00,(TAxisAlignedBox3<double> *)&local_68._s_0,uVar7);
      dVar3 = *(double *)&(this->ModifiedBounds).Min.field0_0x0;
      uVar16 = SUB84(dVar3,0);
      uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (local_68._s_0.X <= dVar3) {
        uVar16 = SUB84(local_68._s_0.X,0);
        uVar17 = (undefined4)((ulonglong)local_68._0_8_ >> 0x20);
      }
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Min.field0_0x0 + 8);
      uVar18 = SUB84(dVar3,0);
      uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (local_68._s_0.Y <= dVar3) {
        uVar18 = SUB84(local_68._s_0.Y,0);
        uVar19 = (undefined4)((ulonglong)local_68._8_8_ >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar17,uVar16);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Min.field0_0x0 + 0x10);
      uVar16 = SUB84(dVar3,0);
      uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (local_68._s_0.Z <= dVar3) {
        uVar16 = SUB84(local_68._s_0.Z,0);
        uVar17 = (undefined4)((ulonglong)local_68._16_8_ >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar18);
      dVar3 = *(double *)&(this->ModifiedBounds).Max.field0_0x0;
      uVar18 = SUB84(dVar3,0);
      uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_50) {
        uVar18 = SUB84(local_50,0);
        uVar19 = (undefined4)((ulonglong)local_50 >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar17,uVar16);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Max.field0_0x0 + 8);
      uVar16 = SUB84(dVar3,0);
      uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_48) {
        uVar16 = SUB84(local_48,0);
        uVar17 = (undefined4)((ulonglong)local_48 >> 0x20);
      }
      (this->ModifiedBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar18);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Max.field0_0x0 + 0x10);
      uVar18 = SUB84(dVar3,0);
      uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_40) {
        uVar18 = SUB84(local_40,0);
        uVar19 = (undefined4)((ulonglong)local_40 >> 0x20);
      }
      (this->ModifiedBounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar17,uVar16);
      (this->ModifiedBounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar18);
      FSparseDynamicOctree3::ReinsertObject
                ((FSparseDynamicOctree3 *)this,uVar7,(TAxisAlignedBox3<double> *)&local_68._s_0,
                 0xffffffff);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// RemoveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14cc1a030

void __thiscall
UE::Geometry::FDynamicMeshOctree3::
RemoveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FDynamicMeshOctree3 *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  int iVar4;
  FDynamicMesh3 *this_00;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 local_res10 [8];
  char local_res18;
  int local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_40;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar14 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar12 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cc1a0de;
      uVar11 = puVar12[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar9 = local_res20 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14cc1a0de:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar8,iVar14);
  TStack_90.CurrentBitIndex = iVar9;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_90._28_4_ = iVar9;
  TStack_90.BaseBitIndex = iVar15;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar6 = local_res18;
  uVar8 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cc1a1f0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_14cc1a1f0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_90.CurrentBitIndex == uVar11) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar8 = *(uint *)(*(longlong *)&param_1->Elements + (longlong)TStack_90.CurrentBitIndex * 0xc);
    bVar7 = FSparseDynamicOctree3::RemoveObject((FSparseDynamicOctree3 *)this,uVar8);
    if (((bVar7) && (cVar6 != '\0')) &&
       ((this_00 = this->Mesh, -1 < (int)uVar8 &&
        (((int)uVar8 <
          (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this_00->TriangleRefCounts).RefCounts.CurBlockUsed) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)))))) {
      FDynamicMesh3::GetTriBounds(this_00,(TAxisAlignedBox3<double> *)&local_68._s_0,uVar8);
      uVar17 = SUB84(local_68._s_0.X,0);
      uVar18 = (undefined4)((ulonglong)local_68._0_8_ >> 0x20);
      dVar3 = *(double *)&(this->ModifiedBounds).Min.field0_0x0;
      if (dVar3 <= local_68._s_0.X) {
        uVar17 = SUB84(dVar3,0);
        uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      uVar19 = SUB84(local_68._s_0.Y,0);
      uVar20 = (undefined4)((ulonglong)local_68._8_8_ >> 0x20);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Min.field0_0x0 + 8);
      if (dVar3 <= local_68._s_0.Y) {
        uVar19 = SUB84(dVar3,0);
        uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar17);
      uVar17 = SUB84(local_68._s_0.Z,0);
      uVar18 = (undefined4)((ulonglong)local_68._16_8_ >> 0x20);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Min.field0_0x0 + 0x10);
      if (dVar3 <= local_68._s_0.Z) {
        uVar17 = SUB84(dVar3,0);
        uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar20,uVar19);
      dVar3 = *(double *)&(this->ModifiedBounds).Max.field0_0x0;
      uVar19 = SUB84(dVar3,0);
      uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_50) {
        uVar19 = SUB84(local_50,0);
        uVar20 = (undefined4)((ulonglong)local_50 >> 0x20);
      }
      (this->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Max.field0_0x0 + 8);
      uVar17 = SUB84(dVar3,0);
      uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_48) {
        uVar17 = SUB84(local_48,0);
        uVar18 = (undefined4)((ulonglong)local_48 >> 0x20);
      }
      (this->ModifiedBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar19);
      dVar3 = *(double *)((longlong)&(this->ModifiedBounds).Max.field0_0x0 + 0x10);
      uVar19 = SUB84(dVar3,0);
      uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= local_40) {
        uVar19 = SUB84(local_40,0);
        uVar20 = (undefined4)((ulonglong)local_40 >> 0x20);
      }
      (this->ModifiedBounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar17);
      (this->ModifiedBounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar20,uVar19);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// operator() @ 14cc2caa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>::operator()
          (void *this,int param_1,TRay<double> *param_2)

{
  undefined1 auStack_d8 [32];
  TIntrRay3Triangle3<double,UE::Math::TRay<double>_> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleIntersection
            (&local_b8,*(FDynamicMesh3 **)(*(longlong *)this + 0x1d0),param_1,param_2);
  if (local_b8.IntersectionType == Point) {
    return local_b8.RayParameter;
  }
  return __real_7fefffffffffffff;
}

// operator() @ 14cccdee0

void __thiscall
`UE::Geometry::FDynamicMeshOctree3::ReinsertTrianglesParallel'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  FDynamicMesh3 *this_00;
  FSparseDynamicOctree3 *this_01;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TAxisAlignedBox3<double> local_58;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar8 = (longlong)param_1;
  this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 0x1d0);
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::GetTriBounds(this_00,&local_58,*(int *)(*plVar1 + lVar8 * 4));
  plVar1 = *(longlong **)((longlong)this + 0x18);
  this_01 = *(FSparseDynamicOctree3 **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *plVar1;
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = UE::Geometry::FSparseDynamicOctree3::CheckIfObjectNeedsReinsert
                    (this_01,*(int *)(*plVar1 + lVar8 * 4),&local_58,(uint *)(lVar2 + lVar8 * 4));
  plVar1 = *(longlong **)((longlong)this + 0x10);
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(bool *)(lVar8 + *plVar1) = bVar4;
  return;
}

// operator() @ 14ccd1020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>::operator()
          (void *this,int param_1,TRay<double> *param_2)

{
  char cVar1;
  double dVar2;
  undefined1 auStack_e8 [32];
  int local_c8 [4];
  TIntrRay3Triangle3<double,UE::Math::TRay<double>_> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8[0] = param_1;
  cVar1 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],local_c8);
  dVar2 = __real_7fefffffffffffff;
  if ((cVar1 != '\0') &&
     (UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleIntersection
                (&local_b8,*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 0x1d0),param_1,
                 param_2), dVar2 = __real_7fefffffffffffff, local_b8.IntersectionType == Point)) {
    dVar2 = local_b8.RayParameter;
  }
  return dVar2;
}

// FindNearestHitObject @ 14ccfb3b0

int __thiscall
UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject
          (FDynamicMeshOctree3 *this,TRay<double> *param_1,double param_2)

{
  int iVar1;
  FDynamicMeshOctree3 *local_res8 [3];
  FDynamicMeshOctree3 *local_res20;
  code *local_28;
  FDynamicMeshOctree3 **local_20;
  code *local_18;
  FDynamicMeshOctree3 **local_10;
  
  local_20 = local_res8;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
             ::Call;
  local_10 = &local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
             ::Call;
  local_res8[0] = this;
  local_res20 = this;
  iVar1 = FSparseDynamicOctree3::FindNearestHitObject
                    ((FSparseDynamicOctree3 *)this,param_1,
                     (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)&local_18,
                     (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_28,
                     param_2);
  return iVar1;
}

// FindNearestHitObject @ 14ccfb410

int __thiscall
UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject
          (FDynamicMeshOctree3 *this,TRay<double> *param_1,TFunctionRef<bool___cdecl(int)> *param_2,
          double param_3)

{
  int iVar1;
  FDynamicMeshOctree3 *local_res8 [4];
  TFunctionRef<bool___cdecl(int)> *local_38;
  FDynamicMeshOctree3 *local_30;
  code *local_28;
  TFunctionRef<bool___cdecl(int)> **local_20;
  code *local_18;
  FDynamicMeshOctree3 **local_10;
  
  local_20 = &local_38;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
             ::Call;
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
             ::Call;
  local_res8[0] = this;
  local_38 = param_2;
  local_30 = this;
  iVar1 = FSparseDynamicOctree3::FindNearestHitObject
                    ((FSparseDynamicOctree3 *)this,param_1,
                     (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)&local_18,
                     (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_28,
                     param_3);
  return iVar1;
}

// ReinsertTrianglesParallel @ 14cd1aef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshOctree3::ReinsertTrianglesParallel
          (FDynamicMeshOctree3 *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  FDynamicMesh3 *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  TAxisAlignedBox3<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  <lambda_1> local_res18;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  FDynamicMeshOctree3 **local_90;
  FDynamicMeshOctree3 *local_88;
  TArray<int,TSizedDefaultAllocator<32>_> *local_80;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_78;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_70;
  TAxisAlignedBox3<double> local_68;
  
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  uVar2 = param_1->ArrayNum;
  if (iVar6 < (int)uVar2) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar2 - iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0,
           (longlong)(int)(uVar2 - iVar6) << 2);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar6) {
      uVar9 = iVar6 - uVar2;
      if (((int)(uVar9 | uVar2) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar2 * 4;
        iVar6 = (*piVar1 - uVar9) - uVar2;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 4,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar9;
      }
    }
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(param_3,uVar2,No);
  uVar11 = 0;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::ReinsertTrianglesParallel'::__l2::<lambda_1>,void,int>
             ::Call;
  local_90 = &local_88;
  local_res18 = SUB81(param_2,0);
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_88 = this;
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_98,local_res18,
             None,&local_a8);
  uVar12 = uVar11;
  if (0 < (int)uVar2) {
    do {
      uVar10 = (uint)uVar11;
      uVar13 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < param_3->ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_3->AllocatorInstance).Data[uVar12] != (FScriptContainerElement)0x0) {
        uVar9 = 0;
        if ((int)uVar10 < *piVar1) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = this->Mesh;
        uVar9 = *(uint *)((param_2->AllocatorInstance).Data + uVar12 * 4);
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar8 = FDynamicMesh3::GetTriBounds
                           (this_00,&local_68,
                            *(int *)((param_1->AllocatorInstance).Data + uVar12 * 4));
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FSparseDynamicOctree3::ReinsertObject
                  ((FSparseDynamicOctree3 *)this,
                   *(int *)((param_1->AllocatorInstance).Data + uVar12 * 4),pTVar8,uVar9);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < (longlong)(int)uVar2);
  }
  return;
}

