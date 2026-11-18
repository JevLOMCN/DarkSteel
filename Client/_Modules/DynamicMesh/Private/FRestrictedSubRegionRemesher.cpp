// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// EdgeVerticesAreInVertexROI @ 14c800f80

bool __thiscall
UE::Geometry::FRestrictedSubRegionRemesher::EdgeVerticesAreInVertexROI
          (FRestrictedSubRegionRemesher *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uStackX_c;
  
  uVar1 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  if (*(int *)&this->field_0x268 != *(int *)&this->field_0x294) {
    uVar4 = *(int *)&this->field_0x2a8 - 1;
    puVar5 = *(undefined1 **)&this->field_0x2a0;
    if (*(undefined1 **)&this->field_0x2a0 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x298;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)uVar4 & uVar1 & 0xffffffff) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->field_0x260;
      do {
        if (*(int *)(lVar2 + (longlong)iVar3 * 0xc) == (int)uVar1) {
          uStackX_c = (uint)(uVar1 >> 0x20);
          iVar3 = *(int *)(puVar5 + (ulonglong)(uStackX_c & uVar4) * 4);
          if (iVar3 == -1) {
            return false;
          }
          do {
            if (*(uint *)(lVar2 + (longlong)iVar3 * 0xc) == uStackX_c) {
              return true;
            }
            iVar3 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0xc);
          } while (iVar3 != -1);
          return false;
        }
        iVar3 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// InitializeFromTriangleROI @ 14c817580

void __thiscall
UE::Geometry::FRestrictedSubRegionRemesher::InitializeFromTriangleROI
          (FRestrictedSubRegionRemesher *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res20 [2];
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined1 *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78 [2];
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2b0);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x260);
  this_00 = &this->field_0x300;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,param_1);
  iStack_b0 = 0;
  puVar1 = &this->field_0x310;
  iVar4 = *(int *)&this->field_0x328;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&this->field_0x320;
    if (*(uint **)&this->field_0x320 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14c81764b;
      uVar12 = puVar14[lVar10 + 1];
    }
    uStack_ac = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_9c = local_98 + -1 + (int)lVar10;
    if (iVar4 < iStack_9c) {
      iStack_9c = iVar4;
    }
  }
LAB_14c81764b:
  uVar12 = *(uint *)&this->field_0x328;
  uVar15 = uVar12 & 0xffffffe0;
  iStack_90 = *(int *)&this->field_0x308 - *(int *)&this->field_0x334;
  uStack_a0 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_68.CurrentBitIndex = iStack_9c;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_9c;
  TStack_68.BaseBitIndex = local_98;
  uStack_48 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = this_00;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_70 = (longlong *)this_00;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&this->field_0x328;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&this->field_0x320;
    if (*(undefined1 **)&this->field_0x320 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14c817750;
      uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14c817750:
  while( true ) {
    plVar8 = local_70;
    if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar12) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (plVar8 == (longlong *)this_00)) break;
    uVar15 = *(uint *)(*plVar8 + (longlong)TStack_68.CurrentBitIndex * 0xc);
    lVar10 = (ulonglong)(uVar15 >> 9) * 8;
    lVar3 = (ulonglong)(uVar15 & 0x1ff) * 0xc;
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x130) + lVar10);
    local_d8 = *(undefined8 *)(lVar6 + lVar3);
    local_d0[0] = *(undefined4 *)(lVar6 + 8 + lVar3);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x260,
               local_res20,(bool *)&local_d8);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x260,&local_88
               ,(bool *)((longlong)&local_d8 + 4));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x260,&local_84
               ,(bool *)local_d0);
    lVar10 = *(longlong *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x180) + lVar10);
    local_c8 = *(undefined8 *)(lVar10 + lVar3);
    local_c0[0] = *(undefined4 *)(lVar10 + 8 + lVar3);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2b0,&local_80
               ,(bool *)&local_c8);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2b0,&local_7c
               ,(bool *)((longlong)&local_c8 + 4));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2b0,local_78,
               (bool *)local_c0);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// OnEdgeFlip @ 14c81e370

void __thiscall
UE::Geometry::FRestrictedSubRegionRemesher::OnEdgeFlip
          (FRestrictedSubRegionRemesher *this,int param_1,FEdgeFlipInfo *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  int iVar7;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) + lVar1) +
                   (ulonglong)(param_1 & 0x1ff) * 0x10);
  if (*(int *)&this->field_0x268 != *(int *)&this->field_0x294) {
    puVar6 = *(undefined1 **)&this->field_0x2a0;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x298;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(*(int *)&this->field_0x2a8 - 1U & uVar2) * 4);
    if (iVar7 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->field_0x260 + (longlong)iVar7 * 0xc) == uVar2) {
          if (iVar7 != -1) goto LAB_14c81e449;
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->field_0x260 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("VertexROI.Contains(GetMesh()->GetEdgeV(EdgeID).A)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                     ,0x20b,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14c81e449:
  uVar3 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) + lVar1) +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  if (*(int *)&this->field_0x268 != *(int *)&this->field_0x294) {
    puVar6 = *(undefined1 **)&this->field_0x2a0;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x298;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&this->field_0x2a8 - 1) & uVar3 >> 0x20) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->field_0x260 + (longlong)iVar7 * 0xc) ==
            (int)(uVar3 >> 0x20)) goto LAB_14c81e4db;
        iVar7 = *(int *)(*(longlong *)&this->field_0x260 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("VertexROI.Contains(GetMesh()->GetEdgeV(EdgeID).B)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                     ,0x20c,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14c81e4db:
  uVar2 = param_2->EdgeID;
  lVar1 = *(longlong *)&this->field_0x8;
  if (((((int)uVar2 < 0) ||
       (*(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4) <= (int)uVar2)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)(uVar2 >> 9) * 8) +
                                   (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->IsEdge(FlipInfo.EdgeID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                         ,0x20e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2b0,local_res10
             ,(bool *)param_2);
  uVar2 = (param_2->Triangles).field0_0x0._s_0.A;
  lVar1 = *(longlong *)&this->field_0x8;
  if (((((int)uVar2 < 0) ||
       (*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144) <= (int)uVar2)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar1 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                                   (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->IsTriangle(FlipInfo.Triangles[0])",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                         ,0x211,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = (param_2->Triangles).field0_0x0._s_0.B;
  lVar1 = *(longlong *)&this->field_0x8;
  if (((((int)uVar2 < 0) ||
       (*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144) <= (int)uVar2)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar1 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                                   (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->IsTriangle(FlipInfo.Triangles[1])",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                         ,0x212,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x300,local_res8,
             (bool *)&param_2->Triangles);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x300,local_res18
             ,(bool *)((longlong)&(param_2->Triangles).field0_0x0 + 4));
  return;
}

// OnEdgeSplit @ 14c81e800

void __thiscall
UE::Geometry::FRestrictedSubRegionRemesher::OnEdgeSplit
          (FRestrictedSubRegionRemesher *this,int param_1,int param_2,int param_3,
          FEdgeSplitInfo *param_4)

{
  undefined1 *this_00;
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  int local_res8 [2];
  uint local_res10 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  undefined8 local_40;
  
  this_00 = &this->field_0x2b0;
  if (*(int *)&this->field_0x2b8 != *(int *)&this->field_0x2e4) {
    puVar11 = *(undefined1 **)&this->field_0x2f0;
    if (*(undefined1 **)&this->field_0x2f0 == (undefined1 *)0x0) {
      puVar11 = &this->field_0x2e8;
    }
    iVar7 = *(int *)(puVar11 + (ulonglong)(*(int *)&this->field_0x2f8 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar7 * 0xc) == param_1) goto LAB_14c81e88c;
        iVar7 = *(int *)(*(longlong *)this_00 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("EdgeROI.Contains(EdgeID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                     ,0x1e7,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14c81e88c:
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x260,local_res8,
             (bool *)&param_4->NewVertex);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,&local_58,
             (bool *)&param_4->NewEdges);
  bVar6 = EdgeVerticesAreInVertexROI(this,(param_4->NewEdges).field0_0x0._s_0.B);
  if (bVar6) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,&local_54,
               (bool *)((longlong)&(param_4->NewEdges).field0_0x0 + 4));
  }
  iVar7 = (param_4->NewEdges).field0_0x0._s_0.C;
  if ((iVar7 != -1) && (bVar6 = EdgeVerticesAreInVertexROI(this,iVar7), bVar6)) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,&local_50,
               (bool *)((longlong)&(param_4->NewEdges).field0_0x0 + 8));
  }
  local_48 = (param_4->NewTriangles).field0_0x0._s_0.A;
  puVar9 = &local_48;
  local_44 = (param_4->NewTriangles).field0_0x0._s_0.B;
  do {
    local_res10[0] = *puVar9;
    lVar3 = *(longlong *)&this->field_0x8;
    if (((-1 < (int)local_res10[0]) &&
        ((int)local_res10[0] < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144))) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x148) + (ulonglong)(local_res10[0] >> 9) * 8) +
                           (ulonglong)(local_res10[0] & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + (ulonglong)(local_res10[0] >> 9) * 8);
      uVar1 = *(undefined8 *)(lVar3 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
      uVar2 = *(uint *)(lVar3 + 8 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
      if (*(int *)&this->field_0x2b8 != *(int *)&this->field_0x2e4) {
        puVar11 = &this->field_0x2e8;
        puVar4 = *(undefined1 **)&this->field_0x2f0;
        local_40._0_4_ = (uint)uVar1;
        puVar8 = puVar11;
        if (puVar4 != (undefined1 *)0x0) {
          puVar8 = puVar4;
        }
        uVar10 = *(int *)&this->field_0x2f8 - 1;
        iVar7 = *(int *)(puVar8 + (ulonglong)((uint)local_40 & uVar10) * 4);
        if (iVar7 != -1) {
          lVar3 = *(longlong *)this_00;
          do {
            if (*(uint *)(lVar3 + (longlong)iVar7 * 0xc) == (uint)local_40) {
              local_40._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
              puVar8 = puVar11;
              if (puVar4 != (undefined1 *)0x0) {
                puVar8 = puVar4;
              }
              iVar7 = *(int *)(puVar8 + (ulonglong)(uVar10 & local_40._4_4_) * 4);
              goto joined_r0x00014c81ea38;
            }
            iVar7 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
    }
LAB_14c81eaa5:
    puVar9 = puVar9 + 1;
    if (puVar9 == (uint *)&local_40) {
      return;
    }
  } while( true );
joined_r0x00014c81ea38:
  if (iVar7 == -1) goto LAB_14c81eaa5;
  if (*(uint *)(lVar3 + (longlong)iVar7 * 0xc) == local_40._4_4_) {
    if (puVar4 != (undefined1 *)0x0) {
      puVar11 = puVar4;
    }
    iVar7 = *(int *)(puVar11 + (ulonglong)(uVar10 & uVar2) * 4);
    goto joined_r0x00014c81ea6b;
  }
  iVar7 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0xc);
  goto joined_r0x00014c81ea38;
joined_r0x00014c81ea6b:
  if (iVar7 == -1) goto LAB_14c81eaa5;
  if (*(uint *)(lVar3 + (longlong)iVar7 * 0xc) == uVar2) {
    local_40 = uVar1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x300,&local_4c
               ,(bool *)local_res10);
    goto LAB_14c81eaa5;
  }
  iVar7 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0xc);
  goto joined_r0x00014c81ea6b;
}

