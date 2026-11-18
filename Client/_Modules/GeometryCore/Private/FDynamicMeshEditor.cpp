// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 55

// AppendElementSubset<float,3> @ 14332f760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshEditor::AppendElementSubset<float,3>
          (FDynamicMeshEditor *this,FDynamicMesh3 *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TDynamicMeshOverlay<float,3> *param_4,TDynamicMeshOverlay<float,3> *param_5)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int *piVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_187 [3];
  uint local_184;
  ForElementType<unsigned_int> local_180;
  uint local_178;
  int local_174;
  TPairInitializer<int_const_&,int_const_&> local_170;
  int local_160;
  FIndex3i_u_0 local_158;
  uint local_148 [4];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  FDynamicMeshEditor *local_f8;
  FDynamicMesh3 *local_f0;
  undefined8 local_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  uint *local_a8;
  int *local_a0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_98.Elements._0_8_ = 0;
  local_180 = (ForElementType<unsigned_int>)&(param_2->Elements).field_0x10;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  uStack_12c = 1;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  iStack_130 = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  iVar7 = *(int *)&(param_2->Elements).field_0x28;
  iStack_11c = 0;
  local_118 = iStack_130;
  if (iVar7 != 0) {
    puVar10 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)local_180;
    }
    uVar17 = *puVar10;
    iStack_130 = 0;
    local_118 = 0;
    while (uVar17 == 0) {
      lVar9 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_14332f862;
      uVar17 = (puVar10 + 1)[lVar9];
    }
    uStack_12c = -uVar17 & uVar17;
    uVar11 = (ulonglong)uStack_12c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_108 = (int)lVar9;
    iStack_11c = local_118 + -1 + local_108;
    if (iVar7 < iStack_11c) {
      iStack_11c = iVar7;
    }
  }
LAB_14332f862:
  uVar17 = *(uint *)&(param_2->Elements).field_0x28;
  iStack_110 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar22 = uVar17 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uStack_12c,iStack_130);
  uStack_120 = 0xffffffff;
  TStack_d0.CurrentBitIndex = iStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_d0._28_4_ = iStack_11c;
  TStack_d0.BaseBitIndex = local_118;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  local_184 = uVar17;
  local_138 = param_2;
  local_128 = (undefined1 *)local_180;
  iStack_114 = iStack_11c;
  local_100 = param_2;
  local_f8 = this;
  local_f0 = param_1;
  local_d8 = param_2;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_180;
  if ((((int)uVar17 < 0) || (iVar7 < (int)uVar17)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = *(int *)((longlong)local_180 + 0x18);
  if (uVar17 != uVar1) {
    FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_180;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar9 = (longlong)iVar14;
      uVar22 = uVar22 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar1;
      local_184 = uVar1;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14332f990;
      uVar17 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar9 * 4);
    }
    uVar11 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar17 = (int)lVar9 + -1 + uVar22;
    local_184 = uVar17;
    if ((int)uVar1 < (int)uVar17) {
      uVar17 = uVar1;
      local_184 = uVar1;
    }
  }
LAB_14332f990:
  pTVar5 = local_d8;
  if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
      (int)uStack_b0) {
    `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_188);
  }
  if (((TStack_d0.CurrentBitIndex == uVar17) &&
      ((ForElementType<unsigned_int>)TStack_d0.Array == local_180)) && (pTVar5 == local_100)) {
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    return;
  }
  uVar17 = *(uint *)(*(longlong *)&pTVar5->Elements + (longlong)TStack_d0.CurrentBitIndex * 0xc);
  uVar11 = (ulonglong)(uVar17 & 0x1ff);
  lVar9 = *(longlong *)
           ((local_f8->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8
           );
  local_170.Value = *(int **)(lVar9 + uVar11 * 0xc);
  local_160 = *(int *)(lVar9 + 8 + uVar11 * 0xc);
  piVar4 = local_170.Value;
  lVar9 = *(longlong *)
           ((local_f0->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
  local_e8 = *(undefined8 *)(lVar9 + uVar11 * 0xc);
  if ((((int)local_170.Value != (int)local_e8) ||
      ((int)((ulonglong)local_170.Value >> 0x20) != (int)((ulonglong)local_e8 >> 0x20))) ||
     (local_170.Value = piVar4, local_160 != *(int *)(lVar9 + 8 + uVar11 * 0xc))) {
    local_170.Value = piVar4;
    `UE::Geometry::FDynamicMeshEditor::AppendElementSubset<float,3>'::__l6::<lambda_1>::operator()
              (local_187);
  }
  pFVar2 = (param_4->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar22 = uVar17 * 3;
  uVar15 = (ulonglong)(uVar22 + 1 & 0x1ff);
  uVar20 = (ulonglong)(uVar22 + 1 >> 9);
  uVar21 = (ulonglong)(uVar22 + 2 & 0x1ff);
  uVar11 = (ulonglong)(uVar22 + 2 >> 9);
  local_148[0] = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar22 >> 9) * 8) +
                          (ulonglong)(uVar22 & 0x1ff) * 4);
  local_148[1] = *(undefined4 *)(*(longlong *)(pFVar2 + uVar20 * 8) + uVar15 * 4);
  local_148[2] = *(undefined4 *)(*(longlong *)(pFVar2 + uVar11 * 8) + uVar21 * 4);
  pFVar2 = (param_5->ElementTriangles).Blocks.AllocatorInstance.Data;
  local_158._s_0.C = *(int *)(*(longlong *)(pFVar2 + uVar11 * 8) + uVar21 * 4);
  lVar16 = 0;
  local_158._s_0.B = *(int *)(*(longlong *)(pFVar2 + uVar20 * 8) + uVar15 * 4);
  local_158._s_0.A =
       *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar22 >> 9) * 8) +
               (ulonglong)(uVar22 & 0x1ff) * 4);
  lVar9 = local_98.Elements._0_8_;
LAB_14332faf0:
  local_178 = *(uint *)((longlong)local_148 + lVar16);
  uVar22 = *(uint *)((longlong)&local_170.Value + lVar16);
  if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
    FVar13 = (param_3->Hash).SecondaryData;
    FVar12 = (ForElementType<FSetElementId>)&param_3->Hash;
    if (FVar13 != (ForElementType<FSetElementId>)0x0) {
      FVar12 = FVar13;
    }
    iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(param_3->HashSize - 1U & uVar22) * 4);
    if (iVar7 != -1) {
      do {
        if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar7 * 0xc) == uVar22) {
          if (local_98.Elements._8_4_ == local_98.Elements._52_4_) goto LAB_14332fbad;
          FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_98.Hash.SecondaryData;
          }
          uVar22 = *(uint *)((longlong)FVar13 + (ulonglong)(local_98.HashSize - 1U & local_178) * 4)
          ;
          if (uVar22 == 0xffffffff) goto LAB_14332fbad;
          goto LAB_14332fb80;
        }
        iVar7 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14332fc74;
  while (uVar22 = puVar10[2], uVar22 != 0xffffffff) {
LAB_14332fb80:
    puVar10 = (uint *)((longlong)(int)uVar22 * 0x10 + lVar9);
    if (*puVar10 == local_178) {
      puVar8 = puVar10 + 1;
      if (puVar10 == (uint *)0x0) {
        puVar8 = (uint *)0x0;
      }
      if (puVar8 != (uint *)0x0) goto LAB_14332fc6e;
      break;
    }
  }
LAB_14332fbad:
  local_a8 = &local_178;
  lVar18 = 3;
  local_a0 = &local_174;
  do {
    uVar22 = local_178 * 3;
    pFVar2 = (param_4->Elements).Blocks.AllocatorInstance.Data;
    local_48 = *(float *)(*(longlong *)(pFVar2 + (ulonglong)(uVar22 >> 9) * 8) +
                         (ulonglong)(uVar22 & 0x1ff) * 4);
    local_44 = *(undefined4 *)
                (*(longlong *)(pFVar2 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                (ulonglong)(uVar22 + 1 & 0x1ff) * 4);
    local_40 = *(undefined4 *)
                (*(longlong *)(pFVar2 + (ulonglong)(uVar22 + 2 >> 9) * 8) +
                (ulonglong)(uVar22 + 2 & 0x1ff) * 4);
    local_174 = TDynamicMeshOverlay<float,3>::AppendElement(param_5,&local_48);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_98,&local_170,(bool *)&local_a8);
    puVar8 = (uint *)((longlong)(int)local_170.Key * 0x10 + 4 + local_98.Elements._0_8_);
    lVar18 = lVar18 + -1;
    lVar9 = local_98.Elements._0_8_;
  } while (lVar18 != 0);
LAB_14332fc6e:
  *(uint *)((longlong)&local_158 + lVar16) = *puVar8;
LAB_14332fc74:
  lVar16 = lVar16 + 4;
  if (0xb < lVar16) goto code_r0x00014332fc82;
  goto LAB_14332faf0;
code_r0x00014332fc82:
  TDynamicMeshOverlay<float,3>::SetTriangle(param_5,uVar17,(FIndex3i *)&local_158._s_0,true);
  TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  uVar17 = local_184;
  goto LAB_14332f990;
}

// AddTriangleFan_OrderedVertexLoop @ 143381030

bool __thiscall
UE::Geometry::FDynamicMeshEditor::AddTriangleFan_OrderedVertexLoop
          (FDynamicMeshEditor *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,FDynamicMeshEditResult *param_4)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FDynamicMeshEditResult *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int local_res20 [2];
  int local_68 [2];
  FIndex3i_u_0 local_60;
  code *local_50;
  FDynamicMeshEditResult **local_48;
  
  pFVar6 = param_4;
  local_res20[0] = param_3;
  if (param_3 == -1) {
    local_res20[0] = this->Mesh->GroupIDCounter;
    this->Mesh->GroupIDCounter = local_res20[0] + 1;
    pFVar4 = (param_4->NewGroups).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_res20) &&
        ((FScriptContainerElement *)local_res20 <
         pFVar4 + (longlong)(param_4->NewGroups).ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar9 = (pFVar6->NewGroups).ArrayNum;
    piVar1 = &(pFVar6->NewGroups).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(pFVar6->NewGroups).AllocatorInstance,piVar1);
    }
    (pFVar6->NewGroups).ArrayNum = iVar9 + 1;
    *(int *)((pFVar6->NewGroups).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_res20[0];
  }
  uVar3 = param_2->ArrayNum;
  pTVar2 = &pFVar6->NewTriangles;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(pFVar6->NewTriangles).ArrayMax;
  if (*piVar1 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&pTVar2->AllocatorInstance,(pFVar6->NewTriangles).ArrayNum,piVar1);
  }
  uVar12 = 0;
  if (0 < (int)uVar3) {
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = *(int *)((param_2->AllocatorInstance).Data + lVar13);
      uVar12 = uVar12 + 1;
      uVar11 = (int)uVar12 % (int)uVar3;
      uVar10 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      local_60._s_0.B =
           *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 4);
      local_60._s_0.A = param_1;
      local_60._s_0.C = iVar9;
      local_68[0] = FDynamicMesh3::AppendTriangle
                              (this->Mesh,(FIndex3i *)&local_60._s_0,local_res20[0]);
      if (local_68[0] < 0) {
        local_48 = &param_4;
        local_50 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMeshEditor::RemoveTriangles'::__l2::<lambda_1>,void,int>
                   ::Call;
        bVar7 = RemoveTriangles(this,pTVar2,false,(TFunctionRef<void___cdecl(int)> *)&local_50);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                               ,0x24a,
                               L"FDynamicMeshEditor::AddTriangleFan: failed to add all triangles, and also failed to back out changes."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        return false;
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_68) &&
          ((FScriptContainerElement *)local_68 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (pFVar6->NewTriangles).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      lVar13 = lVar13 + 4;
      (pFVar6->NewTriangles).ArrayNum = iVar9 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_68[0];
    } while ((int)uVar12 < (int)uVar3);
  }
  return true;
}

// AppendColors @ 1433814b0

void __thiscall
UE::Geometry::FDynamicMeshEditor::AppendColors
          (FDynamicMeshEditor *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_2,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_3,
          TIndexMap<int> *param_4,TIndexMap<int> *param_5,TIndexMap<int> *param_6)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  TDynamicMeshOverlay<float,4> *this_00;
  undefined4 uVar7;
  TIndexMap<int> *pTVar8;
  uint *puVar9;
  byte bVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  bool bVar19;
  undefined1 local_res18 [8];
  TDynamicMeshOverlay<float,4> *local_res20;
  int local_188 [2];
  uint local_180 [2];
  int local_178;
  FIndex3i_u_0 local_170;
  int local_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  float local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  TIndexMap<int> *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [8];
  int local_f0;
  int local_ec;
  TIndexMap<int> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  uint *local_b8;
  int *local_b0;
  int *local_a8;
  uint *local_a0;
  TIndexMap<int> *local_98;
  undefined8 uStack_90;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  TIndexMap<int> *local_68;
  undefined8 uStack_60;
  TBitArray<FDefaultBitArrayAllocator> *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar14 = 0;
  uVar16 = *(int *)&param_2->field_0xc + *(int *)&param_2->field_0x8 * 0x200;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&param_2->field_0x10 - 1U))) {
    uVar14 = 1;
    bVar19 = uVar16 == 1;
    if ((int)uVar16 < 2) goto LAB_14338154a;
    do {
      lVar11 = (*(undefined8 **)&param_2->field_0x10)[uVar14 >> 9];
      if ((*(short *)(lVar11 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar11 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar16);
  }
  bVar19 = uVar14 == uVar16;
LAB_14338154a:
  local_res20 = (TDynamicMeshOverlay<float,4> *)param_3;
  if (!bVar19) {
    local_b8 = local_180;
    local_b0 = local_188;
    local_a8 = local_188;
    local_a0 = local_180;
LAB_143381580:
    do {
      lVar11 = *(longlong *)&param_2->field_0x48;
      uVar17 = uVar14 * 4;
      local_138 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar17 & 0x1ff) * 4);
      local_134 = *(undefined4 *)
                   (*(longlong *)(lVar11 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
      local_130 = *(undefined4 *)
                   (*(longlong *)(lVar11 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
      local_12c = *(undefined4 *)
                   (*(longlong *)(lVar11 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar17 + 3 & 0x1ff) * 4);
      local_188[0] = TDynamicMeshOverlay<float,4>::AppendElement
                               ((TDynamicMeshOverlay<float,4> *)param_3,&local_138);
      local_180[0] = uVar14;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)param_6,(TPairInitializer<int_const_&,int_const_&> *)local_f8,(bool *)&local_b8)
      ;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&param_6->ReverseMap,(TPairInitializer<int_const_&,int_const_&> *)(local_f8 + 4)
                 ,(bool *)&local_a8);
      uVar14 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar16) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)&param_2->field_0x10 + (ulonglong)(uVar14 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)&param_2->field_0x10 + (ulonglong)(uVar14 >> 9) * 8) +
                        (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) goto LAB_143381580;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar16);
      }
    } while (uVar14 != uVar16);
  }
  local_108 = 0;
  iStack_120 = 0;
  iVar2 = *(int *)&(param_5->ForwardMap).field_0x28;
  local_118 = &(param_5->ForwardMap).field_0x10;
  uStack_11c = 1;
  iStack_10c = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(param_5->ForwardMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)local_118;
    }
    uStack_11c = *puVar12;
    iStack_120 = 0;
    while (uStack_11c == 0) {
      lVar11 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      uStack_11c = 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_143381725;
      uStack_11c = puVar12[lVar11 + 1];
    }
    uStack_11c = -uStack_11c & uStack_11c;
    uVar1 = (ulonglong)uStack_11c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f0 = (int)lVar11;
    iStack_10c = local_108 + -1 + local_f0;
    if (iVar2 < iStack_10c) {
LAB_143381725:
      iStack_10c = iVar2;
    }
  }
  puVar18 = &(param_5->ForwardMap).field_0x10;
  iStack_100 = *(int *)&(param_5->ForwardMap).field_0x8 - *(int *)&(param_5->ForwardMap).field_0x34;
  local_128 = param_5;
  uVar14 = *(uint *)&(param_5->ForwardMap).field_0x28;
  iVar15 = (int)uVar14 >> 5;
  bVar10 = (byte)uVar14 & 0x1f;
  uStack_15c = 1 << bVar10;
  uVar17 = uVar14 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uStack_11c,iStack_120);
  uVar16 = -1 << bVar10;
  uStack_110 = 0xffffffff;
  TStack_e0.CurrentBitIndex = iStack_10c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  local_e8 = param_5;
  TStack_e0._28_4_ = iStack_10c;
  TStack_e0.BaseBitIndex = local_108;
  uStack_c0 = CONCAT44(uStack_fc,iStack_100);
  local_178 = iVar15;
  local_160 = iVar15;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)puVar18;
  local_150 = uVar16;
  uStack_14c = uVar14;
  uStack_148 = uVar17;
  iStack_104 = iStack_10c;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118;
  if ((((int)uVar14 < 0) || (iVar2 < (int)uVar14)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = local_res20;
  uVar3 = *(uint *)&(param_5->ForwardMap).field_0x28;
  if (uVar14 != uVar3) {
    puVar13 = *(undefined1 **)&(param_5->ForwardMap).field_0x20;
    if (puVar13 != (undefined1 *)0x0) {
      puVar18 = puVar13;
    }
    uVar16 = uVar16 & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      uStack_148 = uVar17 + 0x20;
      local_160 = iVar15 + 1;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < local_160)
      goto LAB_143381893;
      uVar16 = *(uint *)(puVar18 + (longlong)iVar15 * 4 + 4);
      local_150 = 0xffffffff;
      iVar15 = local_160;
      uVar17 = uStack_148;
    }
    uStack_15c = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_15c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_ec = (int)lVar11;
    uStack_14c = local_ec + -1 + uVar17;
    if ((int)uVar3 < (int)uStack_14c) {
LAB_143381893:
      uStack_14c = uVar3;
    }
  }
  uStack_90 = CONCAT44(uStack_15c,local_160);
  uStack_80 = CONCAT44(uStack_14c,local_150);
  uStack_78 = CONCAT44(uStack_144,uStack_148);
  local_70 = *(int *)&(param_5->ForwardMap).field_0x8 - *(int *)&(param_5->ForwardMap).field_0x34;
  pTStack_88 = pTStack_158;
  local_98 = param_5;
  local_68 = param_5;
  uStack_40 = CONCAT44(uStack_6c,local_70);
  local_58 = pTStack_158;
  uStack_60 = uStack_90;
  uStack_50 = uStack_80;
  local_48 = uStack_78;
  do {
    pTVar8 = local_e8;
    if (*(int *)&(local_e8->ForwardMap).field_0x8 - *(int *)&(local_e8->ForwardMap).field_0x34 !=
        (int)uStack_c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar11 = (longlong)TStack_e0.CurrentBitIndex;
    if (((TStack_e0.CurrentBitIndex == uStack_50._4_4_) && (TStack_e0.Array == local_58)) &&
       (pTVar8 == local_68)) {
      return;
    }
    lVar4 = *(longlong *)&pTVar8->ForwardMap;
    lVar5 = *(longlong *)&param_2->field_0x78;
    uVar16 = *(int *)(lVar4 + lVar11 * 0x10) * 3;
    uVar14 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar16 & 0x1ff) * 4);
    if (-1 < (int)uVar14) {
      local_170._s_0.C =
           *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                    (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
      local_170._s_0.B =
           *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                    (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
      if (((-1 < (int)uVar14) &&
          ((int)uVar14 < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 + (ulonglong)(uVar14 >> 9) * 8) +
                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_6->bWantForward == false) &&
           (local_170._0_4_ = uVar14,
           bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("bWantForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                               ,0x9a,L""), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(param_6->ForwardMap).field_0x8 != *(int *)&(param_6->ForwardMap).field_0x34) {
          puVar18 = *(undefined1 **)&(param_6->ForwardMap).field_0x40;
          puVar13 = &(param_6->ForwardMap).field_0x38;
          if (puVar18 != (undefined1 *)0x0) {
            puVar13 = puVar18;
          }
          uVar16 = *(uint *)(puVar13 +
                            (ulonglong)(*(int *)&(param_6->ForwardMap).field_0x48 - 1U & uVar14) * 4
                            );
          if (uVar16 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar16 * 0x10 + *(longlong *)&param_6->ForwardMap);
              if (*puVar12 == uVar14) {
                puVar9 = puVar12 + 1;
                if (puVar12 == (uint *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                if (puVar9 != (uint *)0x0) {
                  local_170._s_0.A = *puVar9;
                  goto LAB_143381a5f;
                }
                break;
              }
              uVar16 = puVar12[2];
            } while (uVar16 != 0xffffffff);
          }
        }
      }
      local_170._s_0.A = 0xffffffff;
LAB_143381a5f:
      uVar7 = local_170._s_0.B;
      if (((-1 < local_170._s_0.B) &&
          (local_170._s_0.B < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 +
                               (ulonglong)((uint)local_170._s_0.B >> 9) * 8) +
                             (ulonglong)(local_170._s_0.B & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_6->bWantForward == false) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("bWantForward",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                ,0x9a,L""), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(param_6->ForwardMap).field_0x8 != *(int *)&(param_6->ForwardMap).field_0x34) {
          puVar18 = *(undefined1 **)&(param_6->ForwardMap).field_0x40;
          puVar13 = &(param_6->ForwardMap).field_0x38;
          if (puVar18 != (undefined1 *)0x0) {
            puVar13 = puVar18;
          }
          uVar14 = *(uint *)(puVar13 +
                            (ulonglong)(*(int *)&(param_6->ForwardMap).field_0x48 - 1U & uVar7) * 4)
          ;
          if (uVar14 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar14 * 0x10 + *(longlong *)&param_6->ForwardMap);
              if (*puVar12 == uVar7) {
                puVar9 = puVar12 + 1;
                if (puVar12 == (uint *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                if (puVar9 != (uint *)0x0) {
                  local_170._s_0.B = *puVar9;
                  goto LAB_143381b2f;
                }
                break;
              }
              uVar14 = puVar12[2];
            } while (uVar14 != 0xffffffff);
          }
        }
      }
      local_170._s_0.B = 0xffffffff;
LAB_143381b2f:
      uVar7 = local_170._s_0.C;
      if (((-1 < local_170._s_0.C) &&
          (local_170._s_0.C < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 +
                               (ulonglong)((uint)local_170._s_0.C >> 9) * 8) +
                             (ulonglong)(local_170._s_0.C & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_6->bWantForward == false) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("bWantForward",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                ,0x9a,L""), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(param_6->ForwardMap).field_0x8 != *(int *)&(param_6->ForwardMap).field_0x34) {
          puVar18 = *(undefined1 **)&(param_6->ForwardMap).field_0x40;
          puVar13 = &(param_6->ForwardMap).field_0x38;
          if (puVar18 != (undefined1 *)0x0) {
            puVar13 = puVar18;
          }
          uVar14 = *(uint *)(puVar13 +
                            (ulonglong)(*(int *)&(param_6->ForwardMap).field_0x48 - 1U & uVar7) * 4)
          ;
          if (uVar14 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar14 * 0x10 + *(longlong *)&param_6->ForwardMap);
              if (*puVar12 == uVar7) {
                puVar9 = puVar12 + 1;
                if (puVar12 == (uint *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                if (puVar9 != (uint *)0x0) {
                  local_170._s_0.C = *puVar9;
                  goto LAB_143381bec;
                }
                break;
              }
              uVar14 = puVar12[2];
            } while (uVar14 != 0xffffffff);
          }
        }
      }
      local_170._s_0.C = 0xffffffff;
LAB_143381bec:
      TDynamicMeshOverlay<float,4>::SetTriangle
                (this_00,*(int *)(lVar4 + 4 + lVar11 * 0x10),(FIndex3i *)&local_170._s_0,true);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// AppendMesh @ 143381d60

void __thiscall
UE::Geometry::FDynamicMeshEditor::AppendMesh
          (FDynamicMeshEditor *this,TTriangleMeshAdapter<double> *param_1,
          FMeshIndexMappings *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
          *param_3)

{
  code *pcVar1;
  FDynamicMeshAttributeSet *pFVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  TVector<double> *pTVar10;
  uint *puVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  TDynamicMeshOverlay<float,3> *local_1c8;
  int local_1c0 [2];
  int local_1b8 [2];
  int local_1b0 [2];
  int local_1a8 [2];
  FDynamicMeshEditor *local_1a0;
  int local_198 [2];
  int local_190 [2];
  int local_188 [2];
  int local_180 [2];
  int local_178 [2];
  int local_170;
  float local_168;
  float local_164;
  float local_160;
  uint local_158;
  uint local_154;
  uint local_150;
  FIndex3i_u_0 local_148;
  FIndex3i_u_0 local_138;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  int *local_f8;
  int *local_f0;
  int *local_e8;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  int *local_c0;
  TVector<double>_u_0 local_b8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  TVector2<float>_u_0 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  TVector<double> local_60;
  
  local_1a0 = this;
  local_118 = param_3;
  FMeshIndexMappings::Reset(param_2);
  Core::Private::Function::CheckCallable(*(void **)&param_1->VertexCount);
  pcVar1 = *(code **)&param_1->VertexCount;
  plVar14 = *(longlong **)&(param_1->VertexCount).field_0x28;
  plVar12 = (longlong *)&(param_1->VertexCount).field_0x10;
  if (plVar14 != (longlong *)0x0) {
    plVar12 = plVar14;
  }
  uVar9 = (**(code **)(*plVar12 + 8))();
  iVar6 = (*pcVar1)(uVar9);
  if ((param_2->VertexMap).bWantForward != false) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               param_2,iVar6);
  }
  if ((param_2->VertexMap).bWantReverse != false) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &(param_2->VertexMap).ReverseMap,iVar6);
  }
  Core::Private::Function::CheckCallable(*(void **)&param_1->MaxVertexID);
  pcVar1 = *(code **)&param_1->MaxVertexID;
  plVar14 = *(longlong **)&(param_1->MaxVertexID).field_0x28;
  plVar12 = (longlong *)&(param_1->MaxVertexID).field_0x10;
  if (plVar14 != (longlong *)0x0) {
    plVar12 = plVar14;
  }
  (**(code **)(*plVar12 + 8))();
  iVar6 = (*pcVar1)();
  iVar17 = 0;
  if (0 < iVar6) {
    do {
      local_198[0] = iVar17;
      Core::Private::Function::CheckCallable(*(void **)&param_1->IsVertex);
      plVar14 = *(longlong **)&(param_1->IsVertex).field_0x28;
      pcVar1 = *(code **)&param_1->IsVertex;
      plVar12 = (longlong *)&(param_1->IsVertex).field_0x10;
      if (plVar14 != (longlong *)0x0) {
        plVar12 = plVar14;
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      cVar4 = (*pcVar1)(uVar9,local_198);
      if (cVar4 != '\0') {
        local_190[0] = iVar17;
        Core::Private::Function::CheckCallable(*(void **)&param_1->GetVertex);
        plVar14 = *(longlong **)&(param_1->GetVertex).field_0x28;
        pcVar1 = *(code **)&param_1->GetVertex;
        plVar12 = (longlong *)&(param_1->GetVertex).field_0x10;
        if (plVar14 != (longlong *)0x0) {
          plVar12 = plVar14;
        }
        uVar9 = (**(code **)(*plVar12 + 8))();
        (*pcVar1)(&local_110,uVar9,local_190);
        if (*(void **)param_3 != (void *)0x0) {
          local_188[0] = iVar17;
          Core::Private::Function::CheckCallable(*(void **)param_3);
          pcVar1 = *(code **)param_3;
          plVar14 = *(longlong **)&param_3->field_0x28;
          if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
            plVar14 = (longlong *)&param_3->field_0x10;
          }
          uVar9 = (**(code **)(*plVar14 + 8))();
          (*pcVar1)(&local_78,uVar9,local_188,&local_110);
          local_110 = local_78;
          uStack_10c = uStack_74;
          uStack_108 = uStack_70;
          uStack_104 = uStack_6c;
          local_100 = local_68;
        }
        local_98 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_8c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_88 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_80 = 0;
        local_a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_94 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_7e = 0;
        local_b8._0_4_ = local_110;
        local_b8._4_4_ = uStack_10c;
        local_b8._8_4_ = uStack_108;
        local_b8._12_4_ = uStack_104;
        local_b8._s_0.Z = local_100;
        local_1c0[0] = FDynamicMesh3::AppendVertex(local_1a0->Mesh,(FVertexInfo *)&local_b8._s_0);
        local_f8 = local_1b8;
        local_f0 = local_1c0;
        local_1b8[0] = iVar17;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)param_2,(TPairInitializer<int_const_&,int_const_&> *)local_128,
                   (bool *)&local_f8);
        local_e8 = local_1c0;
        local_e0 = local_1b8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&(param_2->VertexMap).ReverseMap,
                   (TPairInitializer<int_const_&,int_const_&> *)(local_128 + 4),(bool *)&local_e8);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar6);
  }
  iVar6 = 0;
  pFVar2 = (local_1a0->Mesh->AttributeSet).Ptr;
  if ((pFVar2 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar2->NormalLayers).Array.ArrayNum < 1)) {
    local_1c8 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    local_1c8 = *(TDynamicMeshOverlay<float,3> **)
                 (pFVar2->NormalLayers).Array.AllocatorInstance.Data;
  }
  Core::Private::Function::CheckCallable(*(void **)&param_1->MaxTriangleID);
  pcVar1 = *(code **)&param_1->MaxTriangleID;
  plVar14 = *(longlong **)&(param_1->MaxTriangleID).field_0x28;
  plVar12 = (longlong *)&(param_1->MaxTriangleID).field_0x10;
  if (plVar14 != (longlong *)0x0) {
    plVar12 = plVar14;
  }
  uVar9 = (**(code **)(*plVar12 + 8))();
  local_170 = (*pcVar1)(uVar9);
  if (0 < local_170) {
    do {
      local_180[0] = iVar6;
      Core::Private::Function::CheckCallable(*(void **)&param_1->IsTriangle);
      plVar14 = *(longlong **)&(param_1->IsTriangle).field_0x28;
      pcVar1 = *(code **)&param_1->IsTriangle;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)&(param_1->IsTriangle).field_0x10;
      }
      uVar9 = (**(code **)(*plVar14 + 8))();
      cVar4 = (*pcVar1)(uVar9,local_180);
      if (cVar4 != '\0') {
        local_178[0] = iVar6;
        Core::Private::Function::CheckCallable(*(void **)&param_1->GetTriangle);
        plVar14 = *(longlong **)&(param_1->GetTriangle).field_0x28;
        pcVar1 = *(code **)&param_1->GetTriangle;
        plVar12 = (longlong *)&(param_1->GetTriangle).field_0x10;
        if (plVar14 != (longlong *)0x0) {
          plVar12 = plVar14;
        }
        uVar9 = (**(code **)(*plVar12 + 8))();
        (*pcVar1)(&local_158,uVar9,local_178);
        uVar16 = local_150;
        if (((param_2->VertexMap).bWantForward == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bWantForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                               ,0x9a,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar18 = local_154;
        if (*(int *)&(param_2->VertexMap).ForwardMap.field_0x8 !=
            *(int *)&(param_2->VertexMap).ForwardMap.field_0x34) {
          puVar3 = *(undefined1 **)&(param_2->VertexMap).ForwardMap.field_0x40;
          puVar15 = &(param_2->VertexMap).ForwardMap.field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar15 = puVar3;
          }
          uVar7 = *(uint *)(puVar15 +
                           (ulonglong)
                           (*(int *)&(param_2->VertexMap).ForwardMap.field_0x48 - 1U & uVar16) * 4);
          if (uVar7 != 0xffffffff) {
            do {
              puVar13 = (uint *)((longlong)(int)uVar7 * 0x10 +
                                *(longlong *)&(param_2->VertexMap).ForwardMap);
              if (*puVar13 == uVar16) {
                puVar11 = puVar13 + 1;
                if (puVar13 == (uint *)0x0) {
                  puVar11 = (uint *)0x0;
                }
                if (puVar11 != (uint *)0x0) {
                  uVar16 = *puVar11;
                  goto LAB_143382110;
                }
                break;
              }
              uVar7 = puVar13[2];
            } while (uVar7 != 0xffffffff);
          }
        }
        uVar16 = 0xffffffff;
LAB_143382110:
        if (((param_2->VertexMap).bWantForward == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bWantForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                               ,0x9a,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar7 = local_158;
        if (*(int *)&(param_2->VertexMap).ForwardMap.field_0x8 !=
            *(int *)&(param_2->VertexMap).ForwardMap.field_0x34) {
          puVar3 = *(undefined1 **)&(param_2->VertexMap).ForwardMap.field_0x40;
          puVar15 = &(param_2->VertexMap).ForwardMap.field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar15 = puVar3;
          }
          uVar8 = *(uint *)(puVar15 +
                           (ulonglong)
                           (*(int *)&(param_2->VertexMap).ForwardMap.field_0x48 - 1U & uVar18) * 4);
          if (uVar8 != 0xffffffff) {
            do {
              puVar13 = (uint *)((longlong)(int)uVar8 * 0x10 +
                                *(longlong *)&(param_2->VertexMap).ForwardMap);
              if (*puVar13 == uVar18) {
                puVar11 = puVar13 + 1;
                if (puVar13 == (uint *)0x0) {
                  puVar11 = (uint *)0x0;
                }
                if (puVar11 != (uint *)0x0) {
                  uVar18 = *puVar11;
                  goto LAB_143382190;
                }
                break;
              }
              uVar8 = puVar13[2];
            } while (uVar8 != 0xffffffff);
          }
        }
        uVar18 = 0xffffffff;
LAB_143382190:
        if (((param_2->VertexMap).bWantForward == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bWantForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                               ,0x9a,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)&(param_2->VertexMap).ForwardMap.field_0x8 !=
            *(int *)&(param_2->VertexMap).ForwardMap.field_0x34) {
          puVar3 = *(undefined1 **)&(param_2->VertexMap).ForwardMap.field_0x40;
          puVar15 = &(param_2->VertexMap).ForwardMap.field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar15 = puVar3;
          }
          uVar8 = *(uint *)(puVar15 +
                           (ulonglong)
                           (*(int *)&(param_2->VertexMap).ForwardMap.field_0x48 - 1U & uVar7) * 4);
          if (uVar8 != 0xffffffff) {
            do {
              puVar13 = (uint *)((longlong)(int)uVar8 * 0x10 +
                                *(longlong *)&(param_2->VertexMap).ForwardMap);
              if (*puVar13 == uVar7) {
                puVar11 = puVar13 + 1;
                if (puVar13 == (uint *)0x0) {
                  puVar11 = (uint *)0x0;
                }
                if (puVar11 != (uint *)0x0) {
                  uVar7 = *puVar11;
                  goto LAB_14338220f;
                }
                break;
              }
              uVar8 = puVar13[2];
            } while (uVar8 != 0xffffffff);
          }
        }
        uVar7 = 0xffffffff;
LAB_14338220f:
        local_148._s_0.A = uVar7;
        local_148._s_0.B = uVar18;
        local_148._s_0.C = uVar16;
        iVar17 = FDynamicMesh3::AppendTriangle(local_1a0->Mesh,(FIndex3i *)&local_148._s_0,-1);
        local_d8 = local_1a8;
        local_d0 = local_1b0;
        local_1b0[0] = iVar17;
        local_1a8[0] = iVar6;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&param_2->TriangleMap,(TPairInitializer<int_const_&,int_const_&> *)local_120,
                   (bool *)&local_d8);
        local_c8 = local_1b0;
        local_c0 = local_1a8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&(param_2->TriangleMap).ReverseMap,
                   (TPairInitializer<int_const_&,int_const_&> *)(local_120 + 4),(bool *)&local_c8);
        if (local_1c8 != (TDynamicMeshOverlay<float,3> *)0x0) {
          pTVar10 = FDynamicMesh3::GetTriNormal(local_1a0->Mesh,&local_60,iVar17);
          local_160 = (float)(pTVar10->field0_0x0)._s_0.Z;
          local_164 = (float)(pTVar10->field0_0x0)._s_0.Y;
          local_168 = (float)(pTVar10->field0_0x0)._s_0.X;
          local_138._s_0.A = TDynamicMeshOverlay<float,3>::AppendElement(local_1c8,&local_168);
          *(uint *)(*(longlong *)
                     ((local_1c8->ParentVertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)local_138._s_0.A >> 9) * 8) +
                   (ulonglong)(local_138._s_0.A & 0x1ff) * 4) = uVar7;
          local_138._s_0.B = TDynamicMeshOverlay<float,3>::AppendElement(local_1c8,&local_168);
          *(uint *)(*(longlong *)
                     ((local_1c8->ParentVertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)local_138._s_0.B >> 9) * 8) +
                   (ulonglong)(local_138._s_0.B & 0x1ff) * 4) = uVar18;
          local_138._s_0.C = TDynamicMeshOverlay<float,3>::AppendElement(local_1c8,&local_168);
          *(uint *)(*(longlong *)
                     ((local_1c8->ParentVertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)local_138._s_0.C >> 9) * 8) +
                   (ulonglong)(local_138._s_0.C & 0x1ff) * 4) = uVar16;
          TDynamicMeshOverlay<float,3>::SetTriangle
                    (local_1c8,iVar17,(FIndex3i *)&local_138._s_0,true);
        }
      }
      iVar6 = iVar6 + 1;
      param_3 = local_118;
    } while (iVar6 < local_170);
  }
  if (*(longlong *)param_3 != 0) {
    plVar14 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

// AppendMesh @ 143382420

void __thiscall
UE::Geometry::FDynamicMeshEditor::AppendMesh
          (FDynamicMeshEditor *this,FDynamicMesh3 *param_1,FMeshIndexMappings *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
          *param_3,TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                   *param_4,bool param_5)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar2;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar3;
  undefined4 *puVar4;
  FDynamicMesh3 *this_00;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar5;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar7;
  FName FVar8;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this_01;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  longlong lVar10;
  code *pcVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  FMeshIndexMappings *pFVar13;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar14;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar22;
  TVector<double> *pTVar23;
  TDynamicVector<UE::Math::TVector2<float>,512> *pTVar24;
  TDynamicVector<int,512> *pTVar25;
  uint *puVar26;
  int *piVar27;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar28;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar29;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar30;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar31;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar32;
  FDynamicMeshAttributeSet *pFVar33;
  longlong lVar34;
  TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar35;
  TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>
  *pTVar36;
  FDynamicMeshAttributeSet *pFVar37;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar38;
  FDynamicMeshAttributeSet *pFVar39;
  TFunctionStorage<0> *pTVar40;
  FDynamicMeshAttributeSet *pFVar41;
  longlong lVar42;
  longlong *plVar43;
  TFunctionStorage<0> *pTVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  ulonglong uVar47;
  TIndexMap<int> *pTVar48;
  FDynamicMeshAttributeSet *pFVar49;
  uint uVar50;
  FRefCountVector *this_02;
  uint uVar51;
  uint uVar52;
  int iVar53;
  uint uVar54;
  ulonglong uVar55;
  undefined1 *puVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  undefined1 local_6c8;
  undefined1 local_6c7;
  undefined1 local_6c6 [6];
  FRefCountVector *local_6c0;
  FMeshIndexMappings *local_6b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6b0;
  int local_690;
  undefined4 uStack_68c;
  longlong local_688;
  undefined8 local_680;
  float local_678;
  FMeshIndexMappings *local_670;
  undefined1 local_668 [8];
  uint local_660 [2];
  uint local_658 [2];
  uint local_650 [2];
  uint local_648 [2];
  int local_640 [2];
  uint local_638 [2];
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_630;
  uint uStack_628;
  uint uStack_624;
  undefined1 *local_620;
  undefined4 uStack_618;
  uint uStack_614;
  uint local_610;
  undefined4 uStack_60c;
  int iStack_608;
  undefined4 uStack_604;
  uint local_600 [2];
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *local_5f8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
  *local_5f0;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> local_5e8;
  FIndex3i_u_0 local_5b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_588;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_568;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_548;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_528;
  undefined1 local_508 [8];
  undefined1 local_500 [8];
  undefined1 local_4f8 [8];
  int local_4f0;
  int local_4ec;
  int local_4e8;
  int local_4e4;
  int local_4e0;
  BaseIterator local_4d8;
  BaseIterator local_4c8;
  undefined1 local_4b8 [12];
  uint uStack_4ac;
  TBitArray<FDefaultBitArrayAllocator> *local_4a8;
  undefined8 uStack_4a0;
  longlong local_498;
  int iStack_490;
  undefined4 uStack_48c;
  undefined1 local_488 [12];
  uint uStack_47c;
  TBitArray<FDefaultBitArrayAllocator> *local_478;
  undefined8 uStack_470;
  longlong local_468;
  int iStack_460;
  undefined4 uStack_45c;
  undefined1 local_458 [12];
  uint uStack_44c;
  TBitArray<FDefaultBitArrayAllocator> *local_448;
  undefined8 uStack_440;
  longlong local_438;
  int iStack_430;
  undefined4 uStack_42c;
  FMeshIndexMappings *local_428;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_420;
  int iStack_400;
  undefined4 uStack_3fc;
  undefined1 local_3f8 [12];
  uint uStack_3ec;
  TBitArray<FDefaultBitArrayAllocator> *local_3e8;
  undefined8 uStack_3e0;
  longlong local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c0;
  undefined8 uStack_3a0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_398;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_390;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  uint *local_350;
  uint *local_348;
  uint *local_340;
  uint *local_338;
  uint *local_330;
  int *local_328;
  int *local_320;
  uint *local_318;
  IndexIterator local_310;
  uint *local_300;
  uint *local_2f8;
  uint *local_2f0;
  uint *local_2e8;
  TVector<double>_u_0 local_2e0;
  undefined8 local_2c8;
  float local_2c0;
  undefined8 local_2bc;
  float local_2b4;
  TVector2<float>_u_0 local_2b0;
  undefined2 local_2a8;
  undefined1 local_2a6;
  TVector<double>_u_0 local_2a0;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  IndexIterator local_270;
  TRangedForIterator local_260;
  TRangedForIterator local_230;
  TRangedForConstIterator local_200;
  TRangedForConstIterator local_1d0;
  _func___cdecl_TVector<double>_void_ptr_int_ptr_TVector<double>_ptr *local_198 [2];
  _func___cdecl_TVector<double>_void_ptr_int_ptr_TVector<double>_ptr *local_188 [3];
  undefined8 local_170;
  TVector<double> local_168 [2];
  undefined4 local_134;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  undefined4 local_74;
  undefined4 local_54;
  
  local_5f0 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
               *)param_4;
  local_5f8 = param_3;
  if ((param_1 == this->Mesh) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AppendMesh != Mesh",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                          ,0x775,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FMeshIndexMappings::Reset(param_2);
  FMeshIndexMappings::Initialize(param_2,this->Mesh);
  TIndexMap<int>::Reserve(&param_2->VertexMap,(param_1->VertexRefCounts).UsedCount);
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_4d8,&param_1->VertexRefCounts,0,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  iVar53 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_270,&param_1->VertexRefCounts,iVar53,iVar53);
  if (local_4d8.Index != local_270._8_4_) {
    local_2f0 = local_658;
    local_2e8 = local_660;
    local_300 = local_660;
    local_2f8 = local_658;
    do {
      uVar54 = local_4d8.Index;
      uVar47 = (ulonglong)(uVar54 & 0x1ff);
      uVar55 = (local_4d8._8_8_ & 0xffffffff) >> 9;
      lVar42 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + uVar55 * 8);
      puVar4 = (undefined4 *)(lVar42 + uVar47 * 0x18);
      local_368 = *puVar4;
      uStack_364 = puVar4[1];
      uStack_360 = puVar4[2];
      uStack_35c = puVar4[3];
      local_358 = *(undefined8 *)(lVar42 + 0x10 + uVar47 * 0x18);
      uVar58 = (undefined4)local_358;
      uVar60 = (undefined4)((ulonglong)local_358 >> 0x20);
      if (*(void **)local_5f8 != (void *)0x0) {
        local_600[0] = uVar54;
        Core::Private::Function::CheckCallable(*(void **)local_5f8);
        pcVar11 = *(code **)local_5f8;
        plVar43 = *(longlong **)&local_5f8->field_0x28;
        if (*(longlong **)&local_5f8->field_0x28 == (longlong *)0x0) {
          plVar43 = (longlong *)&local_5f8->field_0x10;
        }
        uVar21 = (**(code **)(*plVar43 + 8))();
        (*pcVar11)(&local_288,uVar21,local_600,&local_368);
        uVar58 = (undefined4)local_278;
        uVar60 = (undefined4)((ulonglong)local_278 >> 0x20);
        local_358 = local_278;
        local_368 = local_288;
        uStack_364 = uStack_284;
        uStack_360 = uStack_280;
        uStack_35c = uStack_27c;
      }
      local_2c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2e0._s_0.Z = (double)CONCAT44(uVar60,uVar58);
      local_2c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2bc = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2b0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_2a8 = 0;
      local_2a6 = 0;
      local_2e0._0_4_ = local_368;
      local_2e0._4_4_ = uStack_364;
      local_2e0._8_4_ = uStack_360;
      local_2e0._12_4_ = uStack_35c;
      uVar19 = FDynamicMesh3::AppendVertex(this->Mesh,(FVertexInfo *)&local_2e0._s_0);
      local_660[0] = uVar19;
      local_658[0] = uVar54;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)param_2,(TPairInitializer<int_const_&,int_const_&> *)local_508,
                 (bool *)&local_2f0);
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&(param_2->VertexMap).ReverseMap,
                 (TPairInitializer<int_const_&,int_const_&> *)(local_508 + 4),(bool *)&local_300);
      if (((param_1->VertexNormals).bIsSet != false) &&
         ((this->Mesh->VertexNormals).bIsSet != false)) {
        pTVar22 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::GetValue
                            (&param_1->VertexNormals);
        lVar42 = *(longlong *)((pTVar22->Blocks).AllocatorInstance.Data + uVar55 * 8);
        local_680 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar42 + uVar47 * 0xc);
        fVar59 = SUB84(local_680,0);
        fVar61 = (float)((ulonglong)local_680 >> 0x20);
        fVar57 = *(float *)(lVar42 + 8 + uVar47 * 0xc);
        local_678 = fVar57;
        if (local_5f0->Callable !=
            (_func___cdecl_TVector<double>_void_ptr_int_ptr_TVector<double>_ptr *)0x0) {
          local_2a0._s_0.X = (double)fVar59;
          local_2a0._s_0.Y = (double)fVar61;
          local_2a0._s_0.Z = (double)fVar57;
          pTVar23 = Core::Private::Function::
                    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                    ::operator()(local_5f0,local_168,uVar54,(TVector<double> *)&local_2a0._s_0);
          fVar57 = (float)(pTVar23->field0_0x0)._s_0.Z;
          fVar59 = (float)(pTVar23->field0_0x0)._s_0.X;
          fVar61 = (float)(pTVar23->field0_0x0)._s_0.Y;
        }
        if ((this->Mesh->VertexNormals).bIsSet != false) {
          lVar42 = *(longlong *)
                    ((this->Mesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar19 >> 9) * 8);
          *(ulonglong *)(lVar42 + (ulonglong)(uVar19 & 0x1ff) * 0xc) = CONCAT44(fVar61,fVar59);
          *(float *)(lVar42 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc) = fVar57;
        }
      }
      if (((param_1->VertexUVs).bIsSet != false) && ((this->Mesh->VertexUVs).bIsSet != false)) {
        pTVar24 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::GetValue
                            (&param_1->VertexUVs);
        if ((this->Mesh->VertexUVs).bIsSet != false) {
          *(undefined8 *)
           (*(longlong *)
             ((this->Mesh->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 8) =
               *(undefined8 *)
                (*(longlong *)((pTVar24->Blocks).AllocatorInstance.Data + uVar55 * 8) + uVar47 * 8);
        }
      }
      if (((param_1->VertexColors).bIsSet != false) && ((this->Mesh->VertexColors).bIsSet != false))
      {
        pTVar22 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::GetValue
                            (&param_1->VertexColors);
        lVar42 = *(longlong *)((pTVar22->Blocks).AllocatorInstance.Data + uVar55 * 8);
        if ((this->Mesh->VertexColors).bIsSet != false) {
          uVar58 = *(undefined4 *)(lVar42 + 8 + uVar47 * 0xc);
          lVar34 = *(longlong *)
                    ((this->Mesh->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar19 >> 9) * 8);
          *(undefined8 *)(lVar34 + (ulonglong)(uVar19 & 0x1ff) * 0xc) =
               *(undefined8 *)(lVar42 + uVar47 * 0xc);
          *(undefined4 *)(lVar34 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc) = uVar58;
        }
      }
      FRefCountVector::BaseIterator::goto_next(&local_4d8);
    } while (local_4d8.Index != local_270._8_4_);
  }
  local_670 = (FMeshIndexMappings *)&param_2->TriangleMap;
  if (((param_1->TriangleGroups).bIsSet == false) || ((this->Mesh->TriangleGroups).bIsSet == false))
  {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  this_02 = &param_1->TriangleRefCounts;
  local_6c0 = this_02;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_4c8,this_02,0,
             (this_02->RefCounts).CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar53 = (this_02->RefCounts).CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_310,this_02,iVar53,iVar53);
  pFVar41 = (FDynamicMeshAttributeSet *)0x0;
  uVar54 = 0;
  if (local_4c8.Index != local_310._8_4_) {
    do {
      uVar51 = local_4c8.Index;
      uVar55 = local_4c8._8_8_ & 0xffffffff;
      uVar19 = 0xffffffff;
      uVar47 = local_4c8._8_8_ & 0xffffffff;
      if (bVar16) {
        if ((param_1->TriangleGroups).bIsSet == false) {
          uVar19 = 0xffffffff;
        }
        else {
          bVar17 = FRefCountVector::IsValid(this_02,uVar51);
          uVar50 = uVar54;
          if (bVar17) {
            pTVar25 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue
                                (&param_1->TriangleGroups);
            uVar19 = *(uint *)(*(longlong *)
                                ((pTVar25->Blocks).AllocatorInstance.Data + (uVar47 >> 9) * 8) +
                              (ulonglong)(uVar51 & 0x1ff) * 4);
            uVar50 = uVar19;
            if (uVar19 == 0xffffffff) goto LAB_143382a4a;
          }
          if (((param_2->GroupMap).bWantForward == false) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bWantForward",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                  ,0xac,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          puVar26 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                    *)&param_2->GroupMap,uVar50);
          if (puVar26 == (uint *)0x0) {
            uVar19 = this->Mesh->GroupIDCounter;
            this->Mesh->GroupIDCounter = uVar19 + 1;
            local_350 = local_648;
            local_348 = local_650;
            local_650[0] = uVar19;
            local_648[0] = uVar50;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)&param_2->GroupMap,(TPairInitializer<int_const_&,int_const_&> *)local_500,
                       (bool *)&local_350);
            local_340 = local_650;
            local_338 = local_648;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)&(param_2->GroupMap).ReverseMap,
                       (TPairInitializer<int_const_&,int_const_&> *)(local_500 + 4),
                       (bool *)&local_340);
          }
          else {
            uVar19 = *puVar26;
          }
        }
      }
LAB_143382a4a:
      lVar42 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar55 >> 9) * 8)
      ;
      local_680 = *(TBitArray<FDefaultBitArrayAllocator> **)
                   (lVar42 + (ulonglong)(uVar51 & 0x1ff) * 0xc);
      iVar53 = *(int *)(lVar42 + 8 + (ulonglong)(uVar51 & 0x1ff) * 0xc);
      this_00 = this->Mesh;
      if (((param_2->VertexMap).bWantForward == false) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantForward",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0x9a,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      piVar27 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::Find
                          ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)param_2,iVar53);
      iVar53 = -1;
      if (piVar27 != (int *)0x0) {
        iVar53 = *piVar27;
      }
      if (((param_2->VertexMap).bWantForward == false) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantForward",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0x9a,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      piVar27 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::Find
                          ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)param_2,local_680._4_4_);
      iVar20 = -1;
      if (piVar27 != (int *)0x0) {
        iVar20 = *piVar27;
      }
      if (((param_2->VertexMap).bWantForward == false) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantForward",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0x9a,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      piVar27 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::Find
                          ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)param_2,(int)local_680);
      if (piVar27 == (int *)0x0) {
        local_5b8._s_0.A = -1;
      }
      else {
        local_5b8._s_0.A = *piVar27;
      }
      local_5b8._s_0.B = iVar20;
      local_5b8._s_0.C = iVar53;
      iVar53 = FDynamicMesh3::AppendTriangle(this_00,(FIndex3i *)&local_5b8._s_0,uVar19);
      pFVar13 = local_670;
      if (iVar53 < 0) {
        bVar17 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3787275554290399303>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                            ,0x7b9,"NewTriID >= 0");
        if (bVar17) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      else {
        local_330 = local_638;
        local_328 = local_640;
        local_640[0] = iVar53;
        local_638[0] = uVar51;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_670,(TPairInitializer<int_const_&,int_const_&> *)local_4f8,
                   (bool *)&local_330);
        local_320 = local_640;
        local_318 = local_638;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&(pFVar13->VertexMap).ReverseMap,
                   (TPairInitializer<int_const_&,int_const_&> *)(local_4f8 + 4),(bool *)&local_320);
      }
      FRefCountVector::BaseIterator::goto_next(&local_4c8);
      this_02 = local_6c0;
    } while (local_4c8.Index != local_310._8_4_);
  }
  pFVar39 = (param_1->AttributeSet).Ptr;
  local_6c0 = (FRefCountVector *)0x1;
  if ((pFVar39 == (FDynamicMeshAttributeSet *)0x0) ||
     ((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0)) goto LAB_1433842a6;
  iVar53 = (**(code **)(pFVar39->_padding_ + 0xb8))();
  iVar20 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xb8))();
  if (iVar20 < iVar53) {
    iVar53 = iVar20;
  }
  local_680 = (TBitArray<FDefaultBitArrayAllocator> *)(longlong)iVar53;
  if (0 < iVar53) {
    local_688 = 0;
    pFVar39 = pFVar41;
    pFVar37 = pFVar41;
    do {
      lVar42 = local_688;
      pFVar33 = (param_1->AttributeSet).Ptr;
      pFVar49 = pFVar41;
      if (pFVar33 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar49 = pFVar33;
      }
      uVar19 = (uint)pFVar39;
      pFVar39 = pFVar41;
      if (((int)uVar19 < (pFVar49->NormalLayers).Array.ArrayNum) && (-1 < (int)uVar19)) {
        if (((int)uVar19 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar39 = *(FDynamicMeshAttributeSet **)
                   ((pFVar49->NormalLayers).Array.AllocatorInstance.Data + (longlong)pFVar37 * 8);
      }
      pFVar33 = (this->Mesh->AttributeSet).Ptr;
      pFVar49 = pFVar41;
      if (pFVar33 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar49 = pFVar33;
      }
      pFVar33 = pFVar41;
      if (((int)uVar19 < (pFVar49->NormalLayers).Array.ArrayNum) && (-1 < (int)uVar19)) {
        if (((int)uVar19 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar33 = *(FDynamicMeshAttributeSet **)
                   ((pFVar49->NormalLayers).Array.AllocatorInstance.Data + (longlong)pFVar37 * 8);
      }
      if ((pFVar39 != (FDynamicMeshAttributeSet *)0x0) &&
         (pFVar33 != (FDynamicMeshAttributeSet *)0x0)) {
        uVar51 = uVar54;
        if ((int)uVar19 < (param_2->NormalMaps).ArrayNum) {
          uVar51 = ~uVar19 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar48 = (TIndexMap<int> *)((param_2->NormalMaps).AllocatorInstance.Data + lVar42);
        iVar53 = (pFVar39->NormalLayers).Array.ArrayNum;
        if (pTVar48->bWantForward != false) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)pTVar48,iVar53);
        }
        if (pTVar48->bWantReverse != false) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&pTVar48->ReverseMap,iVar53);
        }
        local_170 = 0;
        local_198[0] = local_5f0->Callable;
        if (local_198[0] !=
            (_func___cdecl_TVector<double>_void_ptr_int_ptr_TVector<double>_ptr *)0x0) {
          pTVar40 = *(TFunctionStorage<0> **)&(local_5f0->Storage).field_0x18;
          if (pTVar40 == (TFunctionStorage<0> *)0x0) {
            pTVar40 = &local_5f0->Storage;
          }
          (*(code *)**(undefined8 **)pTVar40)(pTVar40,local_198 + 2);
        }
        AppendNormals(this,param_1,
                      (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar39,
                      (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar33,
                      &param_2->VertexMap,&local_670->VertexMap,
                      (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                       *)local_198,pTVar48);
        lVar42 = local_688;
      }
      local_688 = lVar42 + 0xa8;
      pFVar39 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar19 + 1);
      pFVar37 = (FDynamicMeshAttributeSet *)((longlong)&pFVar37->_padding_ + 1);
    } while ((longlong)pFVar37 < (longlong)local_680);
  }
  iVar53 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xa8))();
  iVar20 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))();
  if (iVar20 < iVar53) {
    iVar53 = iVar20;
  }
  local_680 = (TBitArray<FDefaultBitArrayAllocator> *)(longlong)iVar53;
  if (0 < iVar53) {
    local_688 = 0;
    pFVar39 = pFVar41;
    pFVar37 = pFVar41;
    do {
      lVar42 = local_688;
      pFVar33 = (param_1->AttributeSet).Ptr;
      pFVar49 = pFVar41;
      if (pFVar33 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar49 = pFVar33;
      }
      uVar19 = (uint)pFVar39;
      pFVar39 = pFVar41;
      if (((int)uVar19 < (pFVar49->UVLayers).Array.ArrayNum) && (-1 < (int)uVar19)) {
        if (((int)uVar19 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar39 = *(FDynamicMeshAttributeSet **)
                   ((pFVar49->UVLayers).Array.AllocatorInstance.Data + (longlong)pFVar37 * 8);
      }
      pFVar33 = (this->Mesh->AttributeSet).Ptr;
      pFVar49 = pFVar41;
      if (pFVar33 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar49 = pFVar33;
      }
      pFVar33 = pFVar41;
      if (((int)uVar19 < (pFVar49->UVLayers).Array.ArrayNum) && (-1 < (int)uVar19)) {
        if (((int)uVar19 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar33 = *(FDynamicMeshAttributeSet **)
                   ((pFVar49->UVLayers).Array.AllocatorInstance.Data + (longlong)pFVar37 * 8);
      }
      if ((pFVar39 != (FDynamicMeshAttributeSet *)0x0) &&
         (pFVar33 != (FDynamicMeshAttributeSet *)0x0)) {
        uVar51 = uVar54;
        if ((int)uVar19 < (param_2->UVMaps).ArrayNum) {
          uVar51 = ~uVar19 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar48 = (TIndexMap<int> *)((param_2->UVMaps).AllocatorInstance.Data + lVar42);
        iVar53 = (pFVar39->NormalLayers).Array.ArrayNum;
        if (pTVar48->bWantForward != false) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)pTVar48,iVar53);
        }
        if (pTVar48->bWantReverse != false) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&pTVar48->ReverseMap,iVar53);
        }
        AppendUVs(this,param_1,
                  (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar39,
                  (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar33,
                  &param_2->VertexMap,&local_670->VertexMap,pTVar48);
        lVar42 = local_688;
      }
      local_688 = lVar42 + 0xa8;
      pFVar39 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar19 + 1);
      pFVar37 = (FDynamicMeshAttributeSet *)((longlong)&pFVar37->_padding_ + 1);
    } while ((longlong)pFVar37 < (longlong)local_680);
  }
  pFVar39 = (param_1->AttributeSet).Ptr;
  pFVar37 = pFVar41;
  if (pFVar39 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar37 = pFVar39;
  }
  if ((pFVar37->ColorLayer).Ptr !=
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    pFVar37 = (this->Mesh->AttributeSet).Ptr;
    pFVar33 = pFVar41;
    if (pFVar37 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar33 = pFVar37;
    }
    if ((((pFVar33->ColorLayer).Ptr !=
          (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) &&
        (pTVar5 = (pFVar39->ColorLayer).Ptr,
        pTVar5 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) &&
       (pTVar6 = (pFVar37->ColorLayer).Ptr,
       pTVar6 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) {
      TIndexMap<int>::Reserve(&param_2->ColorMap,*(int *)&pTVar5->field_0x38);
      AppendColors(this,param_1,pTVar5,pTVar6,&param_2->VertexMap,&param_2->TriangleMap,
                   &param_2->ColorMap);
    }
  }
  pFVar13 = local_670;
  pFVar39 = (param_1->AttributeSet).Ptr;
  pFVar37 = pFVar41;
  if (pFVar39 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar37 = pFVar39;
  }
  if ((pFVar37->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    pFVar37 = (this->Mesh->AttributeSet).Ptr;
    pFVar33 = pFVar41;
    if (pFVar37 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar33 = pFVar37;
    }
    if ((pFVar33->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      pTVar29 = (pFVar39->MaterialIDAttrib).Ptr;
      pTVar30 = (pFVar37->MaterialIDAttrib).Ptr;
      puVar56 = &(local_670->VertexMap).ForwardMap.field_0x10;
      local_548._padding_._0_4_ = 0;
      local_548._padding_._4_4_ = SUB84(local_6c0,0);
      local_548.UnvisitedBitMask = 0xffffffff;
      local_548.CurrentBitIndex = 0;
      local_548.BaseBitIndex = 0;
      local_548.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
      if (*(int *)&(local_670->VertexMap).ForwardMap.field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_548);
      }
      TStack_6b0._padding_ = CONCAT44(local_548._padding_._4_4_,(undefined4)local_548._padding_);
      TStack_6b0._16_8_ = CONCAT44(local_548.CurrentBitIndex,local_548.UnvisitedBitMask);
      TStack_6b0._24_8_ = CONCAT44(local_548._28_4_,local_548.BaseBitIndex);
      iStack_460 = *(int *)&(pFVar13->VertexMap).ForwardMap.field_0x8 -
                   *(int *)&(pFVar13->VertexMap).ForwardMap.field_0x34;
      TStack_6b0.Array = local_548.Array;
      local_690 = iStack_460;
      local_6b8 = pFVar13;
      local_488._0_8_ = pFVar13;
      local_478 = local_548.Array;
      uStack_45c = uStack_68c;
      unique0x10004560 = TStack_6b0._padding_;
      uStack_470 = TStack_6b0._16_8_;
      local_468 = TStack_6b0._24_8_;
      pTVar28 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_b0,(TBitArray<FDefaultBitArrayAllocator> *)puVar56,
                           *(int *)&(pFVar13->VertexMap).ForwardMap.field_0x28);
      local_6b8 = pFVar13;
      TStack_6b0._padding_ = pTVar28->_padding_;
      TStack_6b0.Array = pTVar28->Array;
      TStack_6b0.UnvisitedBitMask = pTVar28->UnvisitedBitMask;
      TStack_6b0.CurrentBitIndex = pTVar28->CurrentBitIndex;
      TStack_6b0._24_8_ = *(undefined8 *)&pTVar28->BaseBitIndex;
      local_260.InitialNum =
           *(int *)&(pFVar13->VertexMap).ForwardMap.field_0x8 -
           *(int *)&(pFVar13->VertexMap).ForwardMap.field_0x34;
      local_690 = local_260.InitialNum;
      local_260._padding_ = (longlong)pFVar13;
      local_260._44_4_ = uStack_68c;
      local_260._padding_ = TStack_6b0._padding_;
      local_260._padding_ = (longlong)TStack_6b0.Array;
      local_260._padding_ = TStack_6b0._16_8_;
      local_260._padding_ = TStack_6b0._24_8_;
      bVar16 = TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_488,&local_260);
      if (bVar16) {
        do {
          lVar42 = *(longlong *)&((TIndexMap<int> *)local_488._0_8_)->ForwardMap;
          uVar54 = *(uint *)(lVar42 + (longlong)uStack_470._4_4_ * 0x10);
          uVar19 = *(uint *)(lVar42 + 4 + (longlong)uStack_470._4_4_ * 0x10);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)&pTVar30->field_0x20 + (ulonglong)(uVar19 >> 9) * 8) +
           (ulonglong)(uVar19 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)&pTVar29->field_0x20 + (ulonglong)(uVar54 >> 9) * 8) +
                (ulonglong)(uVar54 & 0x1ff) * 4);
          uStack_470 = CONCAT44(uStack_470._4_4_,(uint)uStack_470 & ~uStack_47c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_488 + 8));
          bVar16 = TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_488,&local_260);
        } while (bVar16);
      }
    }
  }
  iVar53 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 200))();
  iVar20 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 200))();
  if (iVar20 < iVar53) {
    iVar53 = iVar20;
  }
  if (0 < iVar53) {
    puVar56 = &(local_670->VertexMap).ForwardMap.field_0x10;
    pFVar39 = pFVar41;
    do {
      iVar20 = (int)pFVar39;
      pFVar39 = (param_1->AttributeSet).Ptr;
      pFVar37 = pFVar41;
      if (pFVar39 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar37 = pFVar39;
      }
      pTVar29 = FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar37,iVar20);
      pFVar39 = (this->Mesh->AttributeSet).Ptr;
      pFVar37 = pFVar41;
      if (pFVar39 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar37 = pFVar39;
      }
      pTVar30 = FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar37,iVar20);
      local_528._padding_._0_4_ = 0;
      local_528._padding_._4_4_ = SUB84(local_6c0,0);
      local_528.UnvisitedBitMask = 0xffffffff;
      local_528.CurrentBitIndex = 0;
      local_528.BaseBitIndex = 0;
      local_528.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
      if (*(int *)&(local_670->VertexMap).ForwardMap.field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_528);
      }
      TStack_6b0._padding_ = CONCAT44(local_528._padding_._4_4_,(undefined4)local_528._padding_);
      TStack_6b0._16_8_ = CONCAT44(local_528.CurrentBitIndex,local_528.UnvisitedBitMask);
      TStack_6b0._24_8_ = CONCAT44(local_528._28_4_,local_528.BaseBitIndex);
      iStack_430 = *(int *)&(local_670->VertexMap).ForwardMap.field_0x8 -
                   *(int *)&(local_670->VertexMap).ForwardMap.field_0x34;
      TStack_6b0.Array = local_528.Array;
      local_6b8 = local_670;
      local_690 = iStack_430;
      local_458._0_8_ = local_670;
      local_448 = local_528.Array;
      uStack_42c = uStack_68c;
      unique0x10004578 = TStack_6b0._padding_;
      uStack_440 = TStack_6b0._16_8_;
      local_438 = TStack_6b0._24_8_;
      pTVar28 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_f0,(TBitArray<FDefaultBitArrayAllocator> *)puVar56,
                           *(int *)&(local_670->VertexMap).ForwardMap.field_0x28);
      local_6b8 = local_670;
      TStack_6b0._padding_ = pTVar28->_padding_;
      TStack_6b0.Array = pTVar28->Array;
      TStack_6b0.UnvisitedBitMask = pTVar28->UnvisitedBitMask;
      TStack_6b0.CurrentBitIndex = pTVar28->CurrentBitIndex;
      TStack_6b0._24_8_ = *(undefined8 *)&pTVar28->BaseBitIndex;
      local_230.InitialNum =
           *(int *)&(local_670->VertexMap).ForwardMap.field_0x8 -
           *(int *)&(local_670->VertexMap).ForwardMap.field_0x34;
      local_690 = local_230.InitialNum;
      local_230._padding_ = (longlong)local_670;
      local_230._44_4_ = uStack_68c;
      local_230._padding_ = TStack_6b0._padding_;
      local_230._padding_ = (longlong)TStack_6b0.Array;
      local_230._padding_ = TStack_6b0._16_8_;
      local_230._padding_ = TStack_6b0._24_8_;
      bVar16 = TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_458,&local_230);
      if (bVar16) {
        do {
          lVar42 = *(longlong *)&((TIndexMap<int> *)local_458._0_8_)->ForwardMap;
          uVar54 = *(uint *)(lVar42 + (longlong)uStack_440._4_4_ * 0x10);
          uVar19 = *(uint *)(lVar42 + 4 + (longlong)uStack_440._4_4_ * 0x10);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)&pTVar30->field_0x20 + (ulonglong)(uVar19 >> 9) * 8) +
           (ulonglong)(uVar19 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)&pTVar29->field_0x20 + (ulonglong)(uVar54 >> 9) * 8) +
                (ulonglong)(uVar54 & 0x1ff) * 4);
          uStack_440 = CONCAT44(uStack_440._4_4_,(uint)uStack_440 & ~uStack_44c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_458 + 8));
          bVar16 = TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_458,&local_230);
        } while (bVar16);
      }
      pFVar39 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar20 + 1U);
    } while ((int)(iVar20 + 1U) < iVar53);
  }
  iVar53 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xd8))();
  iVar20 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xd8))();
  if (iVar20 < iVar53) {
    iVar53 = iVar20;
  }
  local_688 = CONCAT44(local_688._4_4_,iVar53);
  if (0 < iVar53) {
    local_680 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->VertexMap).ForwardMap.field_0x10;
    do {
      pTVar12 = local_680;
      pFVar39 = (param_1->AttributeSet).Ptr;
      iVar53 = (int)pFVar41;
      pFVar41 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar39 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar41 = pFVar39;
      }
      pTVar31 = FDynamicMeshAttributeSet::GetWeightLayer(pFVar41,iVar53);
      pFVar41 = (this->Mesh->AttributeSet).Ptr;
      pFVar39 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar39 = pFVar41;
      }
      pTVar32 = FDynamicMeshAttributeSet::GetWeightLayer(pFVar39,iVar53);
      local_5a8._padding_._4_4_ = SUB84(local_6c0,0);
      local_5a8._padding_._0_4_ = 0;
      local_5a8.UnvisitedBitMask = 0xffffffff;
      local_5a8.CurrentBitIndex = 0;
      local_5a8.BaseBitIndex = 0;
      local_5a8.Array = pTVar12;
      if (*(int *)&(param_2->VertexMap).ForwardMap.field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5a8);
      }
      TStack_6b0._padding_ = CONCAT44(local_5a8._padding_._4_4_,(undefined4)local_5a8._padding_);
      TStack_6b0.CurrentBitIndex = local_5a8.CurrentBitIndex;
      TStack_6b0.UnvisitedBitMask = local_5a8.UnvisitedBitMask;
      TStack_6b0._28_4_ = local_5a8._28_4_;
      TStack_6b0.BaseBitIndex = local_5a8.BaseBitIndex;
      iStack_400 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
                   *(int *)&(param_2->VertexMap).ForwardMap.field_0x34;
      TStack_6b0.Array = local_5a8.Array;
      local_690 = iStack_400;
      TStack_420.Array = local_5a8.Array;
      uStack_3fc = uStack_68c;
      local_6b8 = param_2;
      local_428 = param_2;
      TStack_420._padding_ = TStack_6b0._padding_;
      TStack_420._16_8_ = TStack_6b0._16_8_;
      TStack_420._24_8_ = TStack_6b0._24_8_;
      pTVar28 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_130,pTVar12,*(int *)&(param_2->VertexMap).ForwardMap.field_0x28);
      TStack_6b0._padding_ = pTVar28->_padding_;
      pTVar12 = pTVar28->Array;
      lVar42._0_4_ = pTVar28->UnvisitedBitMask;
      lVar42._4_4_ = pTVar28->CurrentBitIndex;
      TStack_6b0._24_8_ = *(undefined8 *)&pTVar28->BaseBitIndex;
      TStack_6b0.Array = pTVar12;
      TStack_6b0._16_8_ = lVar42;
      while( true ) {
        pFVar13 = local_428;
        if (*(int *)&(local_428->VertexMap).ForwardMap.field_0x8 -
            *(int *)&(local_428->VertexMap).ForwardMap.field_0x34 != iStack_400) {
          local_6c8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6c8);
        }
        if (((TStack_420.CurrentBitIndex == lVar42._4_4_) && (TStack_420.Array == pTVar12)) &&
           (pFVar13 == param_2)) break;
        lVar34 = *(longlong *)&(pFVar13->VertexMap).ForwardMap;
        uVar54 = *(uint *)(lVar34 + (longlong)TStack_420.CurrentBitIndex * 0x10);
        uVar19 = *(uint *)(lVar34 + 4 + (longlong)TStack_420.CurrentBitIndex * 0x10);
        *(undefined4 *)
         (*(longlong *)
           ((pTVar32->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8) +
         (ulonglong)(uVar19 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((pTVar31->AttribValues).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar54 >> 9) * 8) + (ulonglong)(uVar54 & 0x1ff) * 4);
        TStack_420.UnvisitedBitMask = TStack_420.UnvisitedBitMask & ~TStack_420._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_420);
      }
      pFVar41 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar53 + 1U);
    } while ((int)(iVar53 + 1U) < (int)(uint)local_688);
  }
  pFVar39 = (FDynamicMeshAttributeSet *)0x0;
  pFVar41 = (param_1->AttributeSet).Ptr;
  pFVar37 = pFVar39;
  if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar37 = pFVar41;
  }
  uVar54 = 0;
  if ((pFVar37->BoneNameAttrib).Ptr ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
LAB_143383d2c:
    puVar56 = &(pFVar41->SkinWeightAttributes).field_0x10;
    pTVar1 = &pFVar41->SkinWeightAttributes;
    local_568._padding_._4_4_ = SUB84(local_6c0,0);
    local_568._padding_._0_4_ = 0;
    local_568.UnvisitedBitMask = 0xffffffff;
    local_568.CurrentBitIndex = 0;
    local_568.BaseBitIndex = 0;
    local_568.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
    if (*(int *)&(pFVar41->SkinWeightAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_568);
    }
    TStack_6b0._padding_ = CONCAT44(local_568._padding_._4_4_,(undefined4)local_568._padding_);
    TStack_6b0._16_8_ = CONCAT44(local_568.CurrentBitIndex,local_568.UnvisitedBitMask);
    TStack_6b0._24_8_ = CONCAT44(local_568._28_4_,local_568.BaseBitIndex);
    iStack_490 = *(int *)&(pFVar41->SkinWeightAttributes).field_0x8 -
                 *(int *)&(pFVar41->SkinWeightAttributes).field_0x34;
    TStack_6b0.Array = local_568.Array;
    local_690 = iStack_490;
    local_4a8 = local_568.Array;
    uStack_48c = uStack_68c;
    local_6b8 = (FMeshIndexMappings *)pTVar1;
    local_4b8._0_8_ = pTVar1;
    unique0x10004548 = TStack_6b0._padding_;
    uStack_4a0 = TStack_6b0._16_8_;
    local_498 = TStack_6b0._24_8_;
    pTVar28 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_d0,(TBitArray<FDefaultBitArrayAllocator> *)puVar56,
                         *(int *)&(pFVar41->SkinWeightAttributes).field_0x28);
    TStack_6b0._padding_ = pTVar28->_padding_;
    TStack_6b0.Array = pTVar28->Array;
    TStack_6b0.UnvisitedBitMask = pTVar28->UnvisitedBitMask;
    TStack_6b0.CurrentBitIndex = pTVar28->CurrentBitIndex;
    TStack_6b0._24_8_ = *(undefined8 *)&pTVar28->BaseBitIndex;
    local_1d0.InitialNum =
         *(int *)&(pFVar41->SkinWeightAttributes).field_0x8 -
         *(int *)&(pFVar41->SkinWeightAttributes).field_0x34;
    local_690 = local_1d0.InitialNum;
    local_1d0._44_4_ = uStack_68c;
    local_6b8 = (FMeshIndexMappings *)pTVar1;
    local_1d0._padding_ = (longlong)pTVar1;
    local_1d0._padding_ = TStack_6b0._padding_;
    local_1d0._padding_ = (longlong)TStack_6b0.Array;
    local_1d0._padding_ = TStack_6b0._16_8_;
    local_1d0._padding_ = TStack_6b0._24_8_;
    bVar16 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_4b8,&local_1d0);
    if (bVar16) {
      do {
        lVar34 = (longlong)uStack_4a0._4_4_;
        lVar42 = *(longlong *)local_4b8._0_8_;
        FVar8 = *(FName *)(lVar42 + lVar34 * 0x18);
        pFVar41 = (this->Mesh->AttributeSet).Ptr;
        pFVar37 = pFVar39;
        if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar37 = pFVar41;
        }
        uVar19 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
        if (*(int *)&(pFVar37->SkinWeightAttributes).field_0x8 !=
            *(int *)&(pFVar37->SkinWeightAttributes).field_0x34) {
          puVar56 = *(undefined1 **)&(pFVar37->SkinWeightAttributes).field_0x40;
          puVar45 = &(pFVar37->SkinWeightAttributes).field_0x38;
          if (puVar56 != (undefined1 *)0x0) {
            puVar45 = puVar56;
          }
          iVar53 = *(int *)(puVar45 +
                           (ulonglong)
                           (*(int *)&(pFVar37->SkinWeightAttributes).field_0x48 - 1U &
                           FVar8.Number + uVar19) * 4);
          if (iVar53 != -1) {
            do {
              if (*(FName *)(*(longlong *)&pFVar37->SkinWeightAttributes + (longlong)iVar53 * 0x18)
                  == FVar8) {
                pTVar35 = TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                          ::FindChecked((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                                         *)&pFVar37->SkinWeightAttributes,FVar8);
                if (pTVar35->Ptr !=
                    (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
                  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
                  CopyThroughMapping(pTVar35->Ptr,
                                     *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
                                      (lVar42 + 8 + lVar34 * 0x18),param_2);
                }
                break;
              }
              iVar53 = *(int *)(*(longlong *)&pFVar37->SkinWeightAttributes + 0x10 +
                               (longlong)iVar53 * 0x18);
            } while (iVar53 != -1);
          }
        }
        uStack_4a0 = CONCAT44(uStack_4a0._4_4_,(uint)uStack_4a0 & ~uStack_4ac);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_4b8 + 8));
        bVar16 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_4b8,&local_1d0);
      } while (bVar16);
    }
  }
  else {
    pFVar37 = (this->Mesh->AttributeSet).Ptr;
    pFVar33 = pFVar39;
    if (pFVar37 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar33 = pFVar37;
    }
    if ((pFVar33->BoneNameAttrib).Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) goto LAB_143383d2c;
    pTVar7 = (pFVar41->BoneNameAttrib).Ptr;
    cVar18 = (**(code **)(pTVar7->_padding_ + 0xd8))(pTVar7,(pFVar37->BoneNameAttrib).Ptr);
    if (cVar18 == '\0') {
      pFVar41 = (this->Mesh->AttributeSet).Ptr;
      pFVar37 = (param_1->AttributeSet).Ptr;
      pFVar33 = pFVar39;
      if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar33 = pFVar41;
      }
      pFVar41 = pFVar39;
      if (pFVar37 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar41 = pFVar37;
      }
      FDynamicMeshAttributeSet::AppendBonesUnique(pFVar33,pFVar41);
    }
    local_588._padding_._0_4_ = 0;
    local_588.UnvisitedBitMask = 0xffffffff;
    local_588.CurrentBitIndex = 0;
    local_588.BaseBitIndex = 0;
    pFVar41 = (param_1->AttributeSet).Ptr;
    pFVar37 = pFVar39;
    if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar37 = pFVar41;
    }
    local_588._padding_._4_4_ = SUB84(local_6c0,0);
    puVar56 = &(pFVar37->SkinWeightAttributes).field_0x10;
    pTVar1 = &pFVar37->SkinWeightAttributes;
    local_588.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
    if (*(int *)&(pFVar37->SkinWeightAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_588);
    }
    TStack_6b0._padding_ = CONCAT44(local_588._padding_._4_4_,(undefined4)local_588._padding_);
    TStack_6b0._16_8_ = CONCAT44(local_588.CurrentBitIndex,local_588.UnvisitedBitMask);
    TStack_6b0._24_8_ = CONCAT44(local_588._28_4_,local_588.BaseBitIndex);
    iStack_3d0 = *(int *)&(pFVar37->SkinWeightAttributes).field_0x8 -
                 *(int *)&(pFVar37->SkinWeightAttributes).field_0x34;
    TStack_6b0.Array = local_588.Array;
    local_690 = iStack_3d0;
    local_3e8 = local_588.Array;
    uStack_3cc = uStack_68c;
    local_6b8 = (FMeshIndexMappings *)pTVar1;
    local_3f8._0_8_ = pTVar1;
    unique0x100045b8 = TStack_6b0._padding_;
    uStack_3e0 = TStack_6b0._16_8_;
    local_3d8 = TStack_6b0._24_8_;
    pTVar28 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_110,(TBitArray<FDefaultBitArrayAllocator> *)puVar56,
                         *(int *)&(pFVar37->SkinWeightAttributes).field_0x28);
    TStack_6b0._padding_ = pTVar28->_padding_;
    TStack_6b0.Array = pTVar28->Array;
    TStack_6b0.UnvisitedBitMask = pTVar28->UnvisitedBitMask;
    TStack_6b0.CurrentBitIndex = pTVar28->CurrentBitIndex;
    TStack_6b0._24_8_ = *(undefined8 *)&pTVar28->BaseBitIndex;
    local_200.InitialNum =
         *(int *)&(pFVar37->SkinWeightAttributes).field_0x8 -
         *(int *)&(pFVar37->SkinWeightAttributes).field_0x34;
    local_690 = local_200.InitialNum;
    local_200._44_4_ = uStack_68c;
    local_6b8 = (FMeshIndexMappings *)pTVar1;
    local_200._padding_ = (longlong)pTVar1;
    local_200._padding_ = TStack_6b0._padding_;
    local_200._padding_ = (longlong)TStack_6b0.Array;
    local_200._padding_ = TStack_6b0._16_8_;
    local_200._padding_ = TStack_6b0._24_8_;
    bVar16 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_3f8,&local_200);
    if (bVar16) {
      do {
        lVar34 = (longlong)uStack_3e0._4_4_;
        lVar42 = *(longlong *)local_3f8._0_8_;
        FVar8 = *(FName *)(lVar42 + lVar34 * 0x18);
        pFVar41 = (this->Mesh->AttributeSet).Ptr;
        pFVar37 = pFVar39;
        if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar37 = pFVar41;
        }
        uVar19 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
        if (*(int *)&(pFVar37->SkinWeightAttributes).field_0x8 !=
            *(int *)&(pFVar37->SkinWeightAttributes).field_0x34) {
          puVar56 = *(undefined1 **)&(pFVar37->SkinWeightAttributes).field_0x40;
          puVar45 = &(pFVar37->SkinWeightAttributes).field_0x38;
          if (puVar56 != (undefined1 *)0x0) {
            puVar45 = puVar56;
          }
          iVar53 = *(int *)(puVar45 +
                           (ulonglong)
                           (*(int *)&(pFVar37->SkinWeightAttributes).field_0x48 - 1U &
                           FVar8.Number + uVar19) * 4);
          if (iVar53 != -1) {
            do {
              if (*(FName *)(*(longlong *)&pFVar37->SkinWeightAttributes + (longlong)iVar53 * 0x18)
                  == FVar8) {
                pTVar35 = TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                          ::FindChecked((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                                         *)&pFVar37->SkinWeightAttributes,FVar8);
                this_01 = pTVar35->Ptr;
                if (this_01 !=
                    (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
                  if (cVar18 == '\0') {
                    local_5e8._padding_ = 0;
                    local_5e8._padding_ =
                         (longlong)
                         &
                         ___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
                    ;
                    local_5e8.Parent = (FDynamicMesh3 *)0x0;
                    local_5e8.VertexBoneWeights.CurBlock = 0;
                    local_5e8.VertexBoneWeights.CurBlockUsed = 0;
                    local_5e8.VertexBoneWeights.Blocks.AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    local_5e8.VertexBoneWeights.Blocks.ArrayNum = 0;
                    local_5e8.VertexBoneWeights.Blocks.ArrayMax = 0;
                    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                              (&local_5e8.VertexBoneWeights);
                    lVar42 = *(longlong *)(lVar42 + 8 + lVar34 * 0x18);
                    local_5e8._padding_ = *(longlong *)(lVar42 + 8);
                    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::operator=
                              (&local_5e8.VertexBoneWeights,
                               (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)
                               (lVar42 + 0x18));
                    pFVar41 = (this->Mesh->AttributeSet).Ptr;
                    pFVar37 = pFVar39;
                    if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
                      pFVar37 = pFVar41;
                    }
                    pFVar41 = (param_1->AttributeSet).Ptr;
                    pFVar33 = pFVar39;
                    if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
                      pFVar33 = pFVar41;
                    }
                    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
                    ReindexBoneIndicesToSkeleton
                              (&local_5e8,&((pFVar33->BoneNameAttrib).Ptr)->AttribValues,
                               &((pFVar37->BoneNameAttrib).Ptr)->AttribValues);
                    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
                    CopyThroughMapping(this_01,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *
                                               )&local_5e8,param_2);
                    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty
                              (&local_5e8.VertexBoneWeights,0);
                    if (local_5e8.VertexBoneWeights.Blocks.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_5e8.VertexBoneWeights.Blocks.AllocatorInstance.Data);
                    }
                    local_5e8._padding_ =
                         (longlong)
                         &___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
                  }
                  else {
                    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
                    CopyThroughMapping(this_01,*(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>
                                                 **)(lVar42 + 8 + lVar34 * 0x18),param_2);
                  }
                }
                break;
              }
              iVar53 = *(int *)(*(longlong *)&pFVar37->SkinWeightAttributes + 0x10 +
                               (longlong)iVar53 * 0x18);
            } while (iVar53 != -1);
          }
        }
        uStack_3e0 = CONCAT44(uStack_3e0._4_4_,(uint)uStack_3e0 & ~uStack_3ec);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3f8 + 8));
        bVar16 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_3f8,&local_200);
      } while (bVar16);
    }
  }
  pFVar41 = (param_1->AttributeSet).Ptr;
  uVar19 = 0;
  pFVar37 = pFVar39;
  if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar37 = pFVar41;
  }
  TStack_6b0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar37->MorphTargetAttributes).field_0x10;
  uVar51 = *(uint *)&(pFVar37->MorphTargetAttributes).field_0x28;
  pTVar3 = &pFVar37->MorphTargetAttributes;
  uStack_624 = (uint)local_6c0;
  uStack_614 = uVar19;
  local_610 = uVar19;
  if (uVar51 != 0) {
    puVar26 = *(uint **)&(pFVar37->MorphTargetAttributes).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)TStack_6b0.Array;
    }
    uVar50 = *puVar26;
    pFVar41 = pFVar39;
    pFVar33 = pFVar39;
    while( true ) {
      uVar54 = (uint)pFVar41;
      local_610 = (uint)pFVar33;
      if (uVar50 != 0) break;
      lVar42 = (longlong)(int)uVar54;
      local_610 = local_610 + 0x20;
      pFVar33 = (FDynamicMeshAttributeSet *)(ulonglong)local_610;
      uVar54 = uVar54 + 1;
      pFVar41 = (FDynamicMeshAttributeSet *)(ulonglong)uVar54;
      uStack_614 = uVar51;
      if ((int)((uVar51 - 1) + ((int)(uVar51 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar54)
      goto LAB_143383b80;
      uVar50 = puVar26[lVar42 + 1];
    }
    uStack_624 = -uVar50 & uVar50;
    uVar47 = (ulonglong)uStack_624 * 2 + 1;
    lVar42 = 0x3f;
    if (uVar47 != 0) {
      for (; uVar47 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_4f0 = (int)lVar42;
    uStack_614 = (local_610 - 1) + local_4f0;
    if ((int)uVar51 < (int)uStack_614) {
      uStack_614 = uVar51;
    }
  }
LAB_143383b80:
  puVar56 = &(pFVar37->MorphTargetAttributes).field_0x10;
  uStack_60c = local_54;
  iStack_608 = *(int *)&(pFVar37->MorphTargetAttributes).field_0x8 -
               *(int *)&(pFVar37->MorphTargetAttributes).field_0x34;
  uVar51 = *(uint *)&(pFVar37->MorphTargetAttributes).field_0x28;
  TStack_6b0._padding_ = CONCAT44(uStack_624,uVar54);
  uVar50 = uVar51 & 0xffffffe0;
  uStack_618 = 0xffffffff;
  TStack_6b0._16_8_ = CONCAT44(uStack_614,0xffffffff);
  iVar53 = (int)uVar51 >> 5;
  TStack_6b0._24_8_ = CONCAT44(local_54,local_610);
  uStack_68c = uStack_604;
  local_690 = iStack_608;
  local_6b8 = (FMeshIndexMappings *)pTVar3;
  local_630 = pTVar3;
  uStack_628 = uVar54;
  local_620 = (undefined1 *)TStack_6b0.Array;
  if (((int)uVar51 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar54 = *(uint *)&(pFVar37->MorphTargetAttributes).field_0x28;
  if (uVar51 != uVar54) {
    puVar45 = *(undefined1 **)&(pFVar37->MorphTargetAttributes).field_0x20;
    puVar46 = puVar56;
    if (puVar45 != (undefined1 *)0x0) {
      puVar46 = puVar45;
    }
    uVar51 = -1 << ((byte)uVar51 & 0x1f) & *(uint *)(puVar46 + (longlong)iVar53 * 4);
    while (uVar51 == 0) {
      lVar42 = (longlong)iVar53;
      uVar50 = uVar50 + 0x20;
      iVar53 = iVar53 + 1;
      uVar51 = uVar54;
      if ((int)((uVar54 - 1) + ((int)(uVar54 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar53)
      goto LAB_143383c90;
      uVar51 = *(uint *)(puVar46 + lVar42 * 4 + 4);
    }
    uVar47 = (ulonglong)(-uVar51 & uVar51) * 2 + 1;
    lVar42 = 0x3f;
    if (uVar47 != 0) {
      for (; uVar47 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_4ec = (int)lVar42;
    uVar51 = local_4ec + -1 + uVar50;
    if ((int)uVar54 < (int)uVar51) {
      uVar51 = uVar54;
    }
  }
LAB_143383c90:
  while( true ) {
    pFVar13 = local_6b8;
    if (*(int *)&(local_6b8->VertexMap).ForwardMap.field_0x8 -
        *(int *)&(local_6b8->VertexMap).ForwardMap.field_0x34 != local_690) {
      local_6c7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_6c7);
    }
    lVar42 = (longlong)TStack_6b0.CurrentBitIndex;
    if (((TStack_6b0.CurrentBitIndex == uVar51) &&
        (TStack_6b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar56)) &&
       (pFVar13 == (FMeshIndexMappings *)pTVar3)) break;
    lVar34 = *(longlong *)&(pFVar13->VertexMap).ForwardMap;
    pFVar41 = (this->Mesh->AttributeSet).Ptr;
    pFVar37 = pFVar39;
    if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar37 = pFVar41;
    }
    pTVar36 = TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
              ::Find((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
                      *)&pFVar37->MorphTargetAttributes,*(FName *)(lVar34 + lVar42 * 0x18));
    if ((pTVar36 !=
         (TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>
          *)0x0) &&
       (pTVar9 = pTVar36->Ptr,
       pTVar9 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0)) {
      (**(code **)(pTVar9->_padding_ + 0x30))
                (pTVar9,*(undefined8 *)(lVar34 + 8 + lVar42 * 0x18),param_2);
    }
    TStack_6b0.UnvisitedBitMask = TStack_6b0.UnvisitedBitMask & ~TStack_6b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6b0);
  }
  local_610 = 0;
  pFVar41 = (param_1->AttributeSet).Ptr;
  pFVar37 = pFVar39;
  if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar37 = pFVar41;
  }
  local_620 = &(pFVar37->GenericAttributes).field_0x10;
  uVar54 = *(uint *)&(pFVar37->GenericAttributes).field_0x28;
  local_680 = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar37->GenericAttributes;
  uStack_624 = (uint)local_6c0;
  uStack_614 = uVar19;
  if (uVar54 != 0) {
    puVar26 = *(uint **)&(pFVar37->GenericAttributes).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)local_620;
    }
    uVar51 = *puVar26;
    pFVar41 = pFVar39;
    pFVar33 = pFVar39;
    while( true ) {
      uVar19 = (uint)pFVar41;
      local_610 = (uint)pFVar33;
      if (uVar51 != 0) break;
      lVar42 = (longlong)(int)uVar19;
      local_610 = local_610 + 0x20;
      pFVar33 = (FDynamicMeshAttributeSet *)(ulonglong)local_610;
      uVar19 = uVar19 + 1;
      pFVar41 = (FDynamicMeshAttributeSet *)(ulonglong)uVar19;
      uStack_614 = uVar54;
      if ((int)((uVar54 - 1) + ((int)(uVar54 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_143383fd1;
      uVar51 = puVar26[lVar42 + 1];
    }
    uStack_624 = -uVar51 & uVar51;
    uVar47 = (ulonglong)uStack_624 * 2 + 1;
    lVar42 = 0x3f;
    if (uVar47 != 0) {
      for (; uVar47 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_4e8 = (int)lVar42;
    uStack_614 = local_4e8 + -1 + local_610;
    if ((int)uVar54 < (int)uStack_614) {
      uStack_614 = uVar54;
    }
  }
LAB_143383fd1:
  puVar56 = &(pFVar37->GenericAttributes).field_0x10;
  uStack_60c = local_74;
  iStack_608 = *(int *)&(pFVar37->GenericAttributes).field_0x8 -
               *(int *)&(pFVar37->GenericAttributes).field_0x34;
  uVar54 = *(uint *)&(pFVar37->GenericAttributes).field_0x28;
  TStack_3c0._padding_ = CONCAT44(uStack_624,uVar19);
  uVar51 = uVar54 & 0xffffffe0;
  uStack_618 = 0xffffffff;
  TStack_3c0.CurrentBitIndex = uStack_614;
  TStack_3c0.UnvisitedBitMask = 0xffffffff;
  iVar53 = (int)uVar54 >> 5;
  TStack_3c0._28_4_ = local_74;
  TStack_3c0.BaseBitIndex = local_610;
  uStack_3a0 = CONCAT44(uStack_604,iStack_608);
  local_630 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)local_680;
  uStack_628 = uVar19;
  local_3c8 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)local_680;
  TStack_3c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_620;
  if (((int)uVar54 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar19 = *(uint *)&(pFVar37->GenericAttributes).field_0x28;
  if (uVar54 != uVar19) {
    puVar45 = *(undefined1 **)&(pFVar37->GenericAttributes).field_0x20;
    puVar46 = puVar56;
    if (puVar45 != (undefined1 *)0x0) {
      puVar46 = puVar45;
    }
    uVar54 = -1 << ((byte)uVar54 & 0x1f) & *(uint *)(puVar46 + (longlong)iVar53 * 4);
    while (uVar54 == 0) {
      lVar42 = (longlong)iVar53;
      uVar51 = uVar51 + 0x20;
      iVar53 = iVar53 + 1;
      uVar54 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar53)
      goto LAB_1433840f0;
      uVar54 = *(uint *)(puVar46 + lVar42 * 4 + 4);
    }
    uVar47 = (ulonglong)(-uVar54 & uVar54) * 2 + 1;
    lVar42 = 0x3f;
    if (uVar47 != 0) {
      for (; uVar47 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_4e4 = (int)lVar42;
    uVar54 = local_4e4 + -1 + uVar51;
    if ((int)uVar19 < (int)uVar54) {
      uVar54 = uVar19;
    }
  }
LAB_1433840f0:
  while( true ) {
    pTVar14 = local_3c8;
    if (*(int *)&local_3c8->field_0x8 - *(int *)&local_3c8->field_0x34 != (int)uStack_3a0) {
      local_6c6[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_6c6);
    }
    lVar42 = (longlong)TStack_3c0.CurrentBitIndex;
    if (((TStack_3c0.CurrentBitIndex == uVar54) &&
        (TStack_3c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar56)) &&
       (pTVar14 ==
        (TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
         *)local_680)) break;
    lVar34 = *(longlong *)pTVar14;
    lVar10 = *(longlong *)(lVar34 + lVar42 * 0x18);
    pFVar41 = (this->Mesh->AttributeSet).Ptr;
    pFVar37 = pFVar39;
    if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar37 = pFVar41;
    }
    uVar19 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
    if (*(int *)&(pFVar37->GenericAttributes).field_0x8 !=
        *(int *)&(pFVar37->GenericAttributes).field_0x34) {
      puVar45 = *(undefined1 **)&(pFVar37->GenericAttributes).field_0x40;
      puVar46 = &(pFVar37->GenericAttributes).field_0x38;
      if (puVar45 != (undefined1 *)0x0) {
        puVar46 = puVar45;
      }
      iVar53 = *(int *)(puVar46 +
                       (ulonglong)
                       (*(int *)&(pFVar37->GenericAttributes).field_0x48 - 1U &
                       (int)((ulonglong)lVar10 >> 0x20) + uVar19) * 4);
      if (iVar53 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&pFVar37->GenericAttributes + (longlong)iVar53 * 0x18) ==
              lVar10) {
            pFVar41 = (this->Mesh->AttributeSet).Ptr;
            pFVar37 = pFVar39;
            if (pFVar41 != (FDynamicMeshAttributeSet *)0x0) {
              pFVar37 = pFVar41;
            }
            pTVar38 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                              *)&pFVar37->GenericAttributes,*(FName *)(lVar34 + lVar42 * 0x18));
            if ((pTVar38 ==
                 (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                  *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            (**(code **)(**(longlong **)&pTVar38->field_0x8 + 0x30))
                      (*(longlong **)&pTVar38->field_0x8,*(undefined8 *)(lVar34 + 8 + lVar42 * 0x18)
                       ,param_2);
            break;
          }
          iVar53 = *(int *)(*(longlong *)&pFVar37->GenericAttributes + 0x10 +
                           (longlong)iVar53 * 0x18);
        } while (iVar53 != -1);
      }
    }
    TStack_3c0.UnvisitedBitMask = TStack_3c0.UnvisitedBitMask & ~TStack_3c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c0);
  }
  pFVar41 = (this->Mesh->AttributeSet).Ptr;
  if (0 < (pFVar41->SculptLayers).Layers.Array.ArrayNum) {
    pFVar37 = (param_1->AttributeSet).Ptr;
    if (pFVar37 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar39 = pFVar37;
    }
    if (0 < (pFVar39->SculptLayers).Layers.Array.ArrayNum) {
      FDynamicMeshSculptLayers::CopyThroughMapping
                (&pFVar41->SculptLayers,&pFVar37->SculptLayers,param_2);
    }
  }
LAB_1433842a6:
  pFVar13 = local_670;
  uVar54 = 0;
  uVar19 = (uint)local_6c0;
  if (param_5) {
    uVar51 = *(uint *)&(local_670->VertexMap).ReverseMap.field_0x28;
    local_620 = &(local_670->VertexMap).ReverseMap.field_0x10;
    local_610 = 0;
    pTVar2 = &(local_670->VertexMap).ReverseMap;
    uStack_614 = uVar54;
    if (uVar51 != 0) {
      puVar26 = *(uint **)&(local_670->VertexMap).ReverseMap.field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)local_620;
      }
      uVar50 = *puVar26;
      local_610 = 0;
      uVar54 = 0;
      while (uVar50 == 0) {
        lVar42 = (longlong)(int)uVar54;
        local_610 = local_610 + 0x20;
        uVar54 = uVar54 + 1;
        uStack_614 = uVar51;
        if ((int)((uVar51 - 1) + ((int)(uVar51 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar54)
        goto LAB_143384330;
        uVar50 = puVar26[lVar42 + 1];
      }
      uVar19 = -uVar50 & uVar50;
      uVar47 = (ulonglong)uVar19 * 2 + 1;
      lVar42 = 0x3f;
      if (uVar47 != 0) {
        for (; uVar47 >> lVar42 == 0; lVar42 = lVar42 + -1) {
        }
      }
      local_4e0 = (int)lVar42;
      uStack_614 = (local_610 - 1) + local_4e0;
      if ((int)uVar51 < (int)uStack_614) {
        uStack_614 = uVar51;
      }
    }
LAB_143384330:
    uVar51 = *(uint *)&(local_670->VertexMap).ReverseMap.field_0x28;
    uStack_60c = local_134;
    iStack_608 = *(int *)&(local_670->VertexMap).ReverseMap.field_0x8 -
                 *(int *)&(local_670->VertexMap).ReverseMap.field_0x34;
    puVar56 = &(local_670->VertexMap).ReverseMap.field_0x10;
    uVar52 = uVar51 & 0xffffffe0;
    uStack_618 = 0xffffffff;
    uVar50 = -1 << ((byte)uVar51 & 0x1f);
    TStack_390._padding_ = CONCAT44(uVar19,uVar54);
    TStack_390.CurrentBitIndex = uStack_614;
    TStack_390.UnvisitedBitMask = 0xffffffff;
    iVar53 = (int)uVar51 >> 5;
    local_688 = CONCAT44(local_688._4_4_,uVar50);
    TStack_390._28_4_ = local_134;
    TStack_390.BaseBitIndex = local_610;
    uStack_370 = CONCAT44(uStack_604,iStack_608);
    local_630 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)pTVar2;
    uStack_628 = uVar54;
    uStack_624 = uVar19;
    local_398 = pTVar2;
    TStack_390.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_620;
    if ((int)uVar51 < 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar50 = (uint)local_688;
    }
    uVar54 = *(uint *)&(pFVar13->VertexMap).ReverseMap.field_0x28;
    if (uVar51 != uVar54) {
      puVar45 = *(undefined1 **)&(pFVar13->VertexMap).ReverseMap.field_0x20;
      puVar46 = puVar56;
      if (puVar45 != (undefined1 *)0x0) {
        puVar46 = puVar45;
      }
      uVar50 = uVar50 & *(uint *)(puVar46 + (longlong)iVar53 * 4);
      while (uVar50 == 0) {
        lVar42 = (longlong)iVar53;
        uVar52 = uVar52 + 0x20;
        iVar53 = iVar53 + 1;
        uVar51 = uVar54;
        if ((int)((uVar54 - 1) + ((int)(uVar54 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar53)
        goto LAB_143384440;
        uVar50 = *(uint *)(puVar46 + lVar42 * 4 + 4);
      }
      uVar47 = (ulonglong)(-uVar50 & uVar50) * 2 + 1;
      lVar42 = 0x3f;
      if (uVar47 != 0) {
        for (; uVar47 >> lVar42 == 0; lVar42 = lVar42 + -1) {
        }
      }
      uVar51 = (uVar52 - 1) + (int)lVar42;
      if ((int)uVar54 < (int)uVar51) {
        uVar51 = uVar54;
      }
    }
LAB_143384440:
    while( true ) {
      pTVar15 = local_398;
      if (*(int *)&local_398->field_0x8 - *(int *)&local_398->field_0x34 != (int)uStack_370) {
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_668);
      }
      if (((TStack_390.CurrentBitIndex == uVar51) &&
          (TStack_390.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar56)) &&
         (pTVar15 == pTVar2)) break;
      FDynamicMesh3::ReverseTriOrientation
                (this->Mesh,
                 *(int *)(*(longlong *)pTVar15 + (longlong)TStack_390.CurrentBitIndex * 0x10));
      TStack_390.UnvisitedBitMask = TStack_390.UnvisitedBitMask & ~TStack_390._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_390);
    }
  }
  if (*(longlong *)local_5f8 != 0) {
    plVar43 = (longlong *)&local_5f8->field_0x10;
    if (*(longlong **)&local_5f8->field_0x28 != (longlong *)0x0) {
      plVar43 = *(longlong **)&local_5f8->field_0x28;
    }
    (**(code **)(*plVar43 + 0x10))();
  }
  if (local_5f0->Callable !=
      (_func___cdecl_TVector<double>_void_ptr_int_ptr_TVector<double>_ptr *)0x0) {
    pTVar40 = *(TFunctionStorage<0> **)&(local_5f0->Storage).field_0x18;
    pTVar44 = &local_5f0->Storage;
    if (pTVar40 != (TFunctionStorage<0> *)0x0) {
      pTVar44 = pTVar40;
    }
    (**(code **)(*(longlong *)pTVar44 + 0x10))();
  }
  return;
}

// AppendNormals @ 143384530

void __thiscall
UE::Geometry::FDynamicMeshEditor::AppendNormals
          (FDynamicMeshEditor *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_2,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_3,
          TIndexMap<int> *param_4,TIndexMap<int> *param_5,
          TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
          *param_6,TIndexMap<int> *param_7)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  TIndexMap<int> *pTVar8;
  bool bVar9;
  undefined8 uVar10;
  uint *puVar11;
  byte bVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 local_1d8 [8];
  int local_1d0 [2];
  uint local_1c8 [2];
  int local_1c0;
  FIndex3i_u_0 local_1b8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_198 [2];
  int local_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  TDynamicMeshOverlay<float,3> *local_170;
  TIndexMap<int> *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [8];
  int local_130;
  int local_12c;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *local_128;
  TIndexMap<int> *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  uint *local_f0;
  int *local_e8;
  int *local_e0;
  uint *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  TIndexMap<int> *local_a0;
  undefined8 uStack_98;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 uStack_74;
  TIndexMap<int> *local_70;
  undefined8 uStack_68;
  TBitArray<FDefaultBitArrayAllocator> *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar17 = 0;
  local_128 = param_6;
  uVar21 = *(int *)&param_2->field_0xc + *(int *)&param_2->field_0x8 * 0x200;
  if (((uVar21 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&param_2->field_0x10 - 1U)))
     && (uVar17 = 1, 1 < (int)uVar21)) {
    do {
      lVar13 = (*(undefined8 **)&param_2->field_0x10)[uVar17 >> 9];
      if ((*(short *)(lVar13 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar13 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (int)uVar21);
  }
  local_170 = (TDynamicMeshOverlay<float,3> *)param_3;
  if (uVar17 != uVar21) {
    local_f0 = local_1c8;
    local_e8 = local_1d0;
    local_e0 = local_1d0;
    local_d8 = local_1c8;
LAB_143384610:
    do {
      lVar13 = *(longlong *)&param_2->field_0x48;
      uVar18 = uVar17 * 3;
      local_1a8 = *(float *)(*(longlong *)(lVar13 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
      local_1a4 = *(float *)(*(longlong *)(lVar13 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                            (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
      local_1a0 = *(float *)(*(longlong *)(lVar13 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                            (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
      if (*(void **)param_6 != (void *)0x0) {
        local_d0 = (double)local_1a8;
        local_c8 = (double)local_1a4;
        local_c0 = (double)local_1a0;
        local_198[0] = *(undefined4 *)
                        (*(longlong *)
                          (*(longlong *)&param_2->field_0x60 + (ulonglong)(uVar17 >> 9) * 8) +
                        (ulonglong)(uVar17 & 0x1ff) * 4);
        Core::Private::Function::CheckCallable(*(void **)param_6);
        pcVar4 = *(code **)param_6;
        plVar15 = *(longlong **)&param_6->field_0x28;
        if (*(longlong **)&param_6->field_0x28 == (longlong *)0x0) {
          plVar15 = (longlong *)&param_6->field_0x10;
        }
        uVar10 = (**(code **)(*plVar15 + 8))();
        (*pcVar4)(&local_b8,uVar10,local_198);
        local_1a8 = (float)local_b8;
        local_1a4 = (float)local_b0;
        local_1a0 = (float)local_a8;
      }
      local_1d0[0] = TDynamicMeshOverlay<float,3>::AppendElement(local_170,&local_1a8);
      local_1c8[0] = uVar17;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)param_7,(TPairInitializer<int_const_&,int_const_&> *)local_138,(bool *)&local_f0
                );
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&param_7->ReverseMap,
                 (TPairInitializer<int_const_&,int_const_&> *)(local_138 + 4),(bool *)&local_e0);
      uVar17 = uVar17 + 1;
      if ((int)uVar17 < (int)uVar21) {
        do {
          lVar13 = *(longlong *)(*(longlong *)&param_2->field_0x10 + (ulonglong)(uVar17 >> 9) * 8);
          if ((*(short *)(lVar13 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar13 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) goto LAB_143384610;
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar21);
      }
    } while (uVar17 != uVar21);
  }
  local_148 = 0;
  iStack_160 = 0;
  iVar2 = *(int *)&(param_5->ForwardMap).field_0x28;
  local_158 = &(param_5->ForwardMap).field_0x10;
  uVar17 = 1;
  uStack_15c = 1;
  iStack_14c = 0;
  if (iVar2 != 0) {
    puVar20 = *(uint **)&(param_5->ForwardMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_158;
    }
    uVar21 = *puVar20;
    iStack_160 = 0;
    while (uVar21 == 0) {
      lVar13 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160) goto LAB_143384814;
      uVar21 = puVar20[lVar13 + 1];
    }
    uVar17 = -uVar21 & uVar21;
    uVar1 = (ulonglong)uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_130 = (int)lVar13;
    iStack_14c = local_148 + -1 + local_130;
    uStack_15c = uVar17;
    if (iVar2 < iStack_14c) {
LAB_143384814:
      uStack_15c = uVar17;
      iStack_14c = iVar2;
    }
  }
  puVar22 = &(param_5->ForwardMap).field_0x10;
  iStack_140 = *(int *)&(param_5->ForwardMap).field_0x8 - *(int *)&(param_5->ForwardMap).field_0x34;
  local_168 = param_5;
  uVar17 = *(uint *)&(param_5->ForwardMap).field_0x28;
  iVar19 = (int)uVar17 >> 5;
  bVar12 = (byte)uVar17 & 0x1f;
  uStack_18c = 1 << bVar12;
  uVar18 = uVar17 & 0xffffffe0;
  TStack_118._padding_ = CONCAT44(uStack_15c,iStack_160);
  uVar21 = -1 << bVar12;
  uStack_150 = 0xffffffff;
  TStack_118.CurrentBitIndex = iStack_14c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  local_120 = param_5;
  TStack_118._28_4_ = iStack_14c;
  TStack_118.BaseBitIndex = local_148;
  uStack_f8 = CONCAT44(uStack_13c,iStack_140);
  local_1c0 = iVar19;
  local_190 = iVar19;
  pTStack_188 = (TBitArray<FDefaultBitArrayAllocator> *)puVar22;
  local_180 = uVar21;
  uStack_17c = uVar17;
  uStack_178 = uVar18;
  iStack_144 = iStack_14c;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_158;
  if ((((int)uVar17 < 0) || (iVar2 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(param_5->ForwardMap).field_0x28;
  if (uVar17 != uVar3) {
    puVar16 = *(undefined1 **)&(param_5->ForwardMap).field_0x20;
    if (puVar16 != (undefined1 *)0x0) {
      puVar22 = puVar16;
    }
    uVar21 = uVar21 & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar21 == 0) {
      uStack_178 = uVar18 + 0x20;
      local_190 = iVar19 + 1;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < local_190)
      goto LAB_14338496f;
      uVar21 = *(uint *)(puVar22 + (longlong)iVar19 * 4 + 4);
      local_180 = 0xffffffff;
      iVar19 = local_190;
      uVar18 = uStack_178;
    }
    uStack_18c = -uVar21 & uVar21;
    uVar1 = (ulonglong)uStack_18c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_12c = (int)lVar13;
    uStack_17c = local_12c + -1 + uVar18;
    if ((int)uVar3 < (int)uStack_17c) {
LAB_14338496f:
      uStack_17c = uVar3;
    }
  }
  uStack_98 = CONCAT44(uStack_18c,local_190);
  local_a0 = param_5;
  uStack_88 = CONCAT44(uStack_17c,local_180);
  uStack_80 = CONCAT44(uStack_174,uStack_178);
  local_78 = *(int *)&(param_5->ForwardMap).field_0x8 - *(int *)&(param_5->ForwardMap).field_0x34;
  pTStack_90 = pTStack_188;
  puVar20 = (uint *)0x0;
  local_70 = param_5;
  uStack_48 = CONCAT44(uStack_74,local_78);
  local_60 = pTStack_188;
  uStack_68 = uStack_98;
  uStack_58 = uStack_88;
  local_50 = uStack_80;
  do {
    pTVar8 = local_120;
    if (*(int *)&(local_120->ForwardMap).field_0x8 - *(int *)&(local_120->ForwardMap).field_0x34 !=
        (int)uStack_f8) {
      local_1d8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
    }
    lVar13 = (longlong)TStack_118.CurrentBitIndex;
    if (((TStack_118.CurrentBitIndex == uStack_58._4_4_) && (TStack_118.Array == local_60)) &&
       (pTVar8 == local_70)) {
      if (*(longlong *)local_128 != 0) {
        plVar15 = (longlong *)&local_128->field_0x10;
        if (*(longlong **)&local_128->field_0x28 != (longlong *)0x0) {
          plVar15 = *(longlong **)&local_128->field_0x28;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      return;
    }
    lVar5 = *(longlong *)&pTVar8->ForwardMap;
    lVar6 = *(longlong *)&param_2->field_0x78;
    uVar21 = *(int *)(lVar5 + lVar13 * 0x10) * 3;
    uVar17 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar21 >> 9) * 8) +
                      (ulonglong)(uVar21 & 0x1ff) * 4);
    if (-1 < (int)uVar17) {
      local_1b8._s_0.C =
           *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar21 + 2 >> 9) * 8) +
                    (ulonglong)(uVar21 + 2 & 0x1ff) * 4);
      local_1b8._s_0.B =
           *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                    (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
      if (((-1 < (int)uVar17) &&
          ((int)uVar17 < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 + (ulonglong)(uVar17 >> 9) * 8) +
                             (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_7->bWantForward == false) &&
           (local_1b8._0_4_ = uVar17,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantForward",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0x9a,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)&(param_7->ForwardMap).field_0x8 != *(int *)&(param_7->ForwardMap).field_0x34) {
          puVar22 = *(undefined1 **)&(param_7->ForwardMap).field_0x40;
          puVar16 = &(param_7->ForwardMap).field_0x38;
          if (puVar22 != (undefined1 *)0x0) {
            puVar16 = puVar22;
          }
          uVar21 = *(uint *)(puVar16 +
                            (ulonglong)(*(int *)&(param_7->ForwardMap).field_0x48 - 1U & uVar17) * 4
                            );
          if (uVar21 != 0xffffffff) {
            do {
              puVar14 = (uint *)((longlong)(int)uVar21 * 0x10 + *(longlong *)&param_7->ForwardMap);
              if (*puVar14 == uVar17) {
                puVar11 = puVar14 + 1;
                if (puVar14 == (uint *)0x0) {
                  puVar11 = puVar20;
                }
                if (puVar11 != (uint *)0x0) {
                  local_1b8._s_0.A = *puVar11;
                  goto LAB_143384b3f;
                }
                break;
              }
              uVar21 = puVar14[2];
            } while (uVar21 != 0xffffffff);
          }
        }
      }
      local_1b8._s_0.A = 0xffffffff;
LAB_143384b3f:
      uVar7 = local_1b8._s_0.B;
      if (((-1 < local_1b8._s_0.B) &&
          (local_1b8._s_0.B < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 +
                               (ulonglong)((uint)local_1b8._s_0.B >> 9) * 8) +
                             (ulonglong)(local_1b8._s_0.B & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_7->bWantForward == false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("bWantForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                               ,0x9a,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)&(param_7->ForwardMap).field_0x8 != *(int *)&(param_7->ForwardMap).field_0x34) {
          puVar22 = *(undefined1 **)&(param_7->ForwardMap).field_0x40;
          puVar16 = &(param_7->ForwardMap).field_0x38;
          if (puVar22 != (undefined1 *)0x0) {
            puVar16 = puVar22;
          }
          uVar17 = *(uint *)(puVar16 +
                            (ulonglong)(*(int *)&(param_7->ForwardMap).field_0x48 - 1U & uVar7) * 4)
          ;
          if (uVar17 != 0xffffffff) {
            do {
              puVar14 = (uint *)((longlong)(int)uVar17 * 0x10 + *(longlong *)&param_7->ForwardMap);
              if (*puVar14 == uVar7) {
                puVar11 = puVar14 + 1;
                if (puVar14 == (uint *)0x0) {
                  puVar11 = puVar20;
                }
                if (puVar11 != (uint *)0x0) {
                  local_1b8._s_0.B = *puVar11;
                  goto LAB_143384c0f;
                }
                break;
              }
              uVar17 = puVar14[2];
            } while (uVar17 != 0xffffffff);
          }
        }
      }
      local_1b8._s_0.B = 0xffffffff;
LAB_143384c0f:
      uVar7 = local_1b8._s_0.C;
      if (((-1 < local_1b8._s_0.C) &&
          (local_1b8._s_0.C < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 +
                               (ulonglong)((uint)local_1b8._s_0.C >> 9) * 8) +
                             (ulonglong)(local_1b8._s_0.C & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_7->bWantForward == false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("bWantForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                               ,0x9a,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)&(param_7->ForwardMap).field_0x8 != *(int *)&(param_7->ForwardMap).field_0x34) {
          puVar22 = *(undefined1 **)&(param_7->ForwardMap).field_0x40;
          puVar16 = &(param_7->ForwardMap).field_0x38;
          if (puVar22 != (undefined1 *)0x0) {
            puVar16 = puVar22;
          }
          uVar17 = *(uint *)(puVar16 +
                            (ulonglong)(*(int *)&(param_7->ForwardMap).field_0x48 - 1U & uVar7) * 4)
          ;
          if (uVar17 != 0xffffffff) {
            do {
              puVar14 = (uint *)((longlong)(int)uVar17 * 0x10 + *(longlong *)&param_7->ForwardMap);
              if (*puVar14 == uVar7) {
                puVar11 = puVar14 + 1;
                if (puVar14 == (uint *)0x0) {
                  puVar11 = puVar20;
                }
                if (puVar11 != (uint *)0x0) {
                  local_1b8._s_0.C = *puVar11;
                  goto LAB_143384cdb;
                }
                break;
              }
              uVar17 = puVar14[2];
            } while (uVar17 != 0xffffffff);
          }
        }
      }
      local_1b8._s_0.C = 0xffffffff;
LAB_143384cdb:
      TDynamicMeshOverlay<float,3>::SetTriangle
                (local_170,*(int *)(lVar5 + 4 + lVar13 * 0x10),(FIndex3i *)&local_1b8._s_0,true);
    }
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  } while( true );
}

// AppendTriangles @ 1433859c0

void __thiscall
UE::Geometry::FDynamicMeshEditor::AppendTriangles
          (FDynamicMeshEditor *this,FDynamicMesh3 *param_1,TArrayView<int_const_,int> *param_2,
          FMeshIndexMappings *param_3,FDynamicMeshEditResult *param_4,bool param_5)

{
  longlong lVar1;
  uint uVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  int *piVar10;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar11;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int local_res18 [4];
  int local_f8 [2];
  int local_f0 [2];
  int local_e8;
  int local_e4;
  int local_e0;
  undefined1 local_dc [12];
  int local_d0 [2];
  uint local_c8 [2];
  FIndex3i_u_0 local_c0;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_90;
  int local_88;
  uint *local_80;
  undefined1 local_78 [8];
  uint *local_70;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *local_68;
  uint *local_60;
  uint *local_58;
  int *local_50;
  int *local_48;
  uint *local_40;
  
  FDynamicMeshEditResult::Reset(param_4);
  FMeshIndexMappings::Initialize(param_3,this->Mesh);
  local_80 = (uint *)param_2->DataPtr;
  local_e4 = -1;
  local_60 = local_80 + param_2->ArrayNum;
  if (local_80 != local_60) {
    puVar9 = &(param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    pTVar11 = &(param_1->TriangleRefCounts).RefCounts.Blocks;
    do {
      uVar2 = *local_80;
      if ((((int)uVar2 < 0) ||
          ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 + *puVar9) <= (int)uVar2))
         || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((pTVar11->AllocatorInstance).Data +
                                           (ulonglong)(uVar2 >> 9) * 8) +
                                         (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceMesh->IsTriangle(SourceTriangleID)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                           ,0x9d1,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (-1 < (int)uVar2) goto LAB_143385ac1;
LAB_1433861bb:
        puVar9 = &(param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
        pTVar11 = &(param_1->TriangleRefCounts).RefCounts.Blocks;
      }
      else {
LAB_143385ac1:
        local_70 = puVar9;
        if ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 + *puVar9) <= (int)uVar2)
        goto LAB_1433861bb;
        lVar1 = (ulonglong)(uVar2 >> 9) * 8;
        uVar8 = (ulonglong)(uVar2 & 0x1ff);
        local_68 = pTVar11;
        if (0xfffd < (ushort)(*(short *)(*(longlong *)((pTVar11->AllocatorInstance).Data + lVar1) +
                                        uVar8 * 2) - 1U)) goto LAB_1433861bb;
        pFVar3 = this->Mesh;
        lVar1 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar1);
        local_90 = *(undefined8 *)(lVar1 + uVar8 * 0xc);
        local_88 = *(int *)(lVar1 + 8 + uVar8 * 0xc);
        local_e8 = -1;
        if ((pFVar3->TriangleGroups).bIsSet != false) {
          if ((param_1->TriangleGroups).bIsSet == false) {
            if (local_e4 == -1) {
              local_e4 = pFVar3->GroupIDCounter;
              pFVar3->GroupIDCounter = local_e4 + 1;
              pFVar4 = (param_4->NewGroups).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_e4) &&
                  ((FScriptContainerElement *)&local_e4 <
                   pFVar4 + (longlong)(param_4->NewGroups).ArrayMax * 4)) &&
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
              iVar7 = (param_4->NewGroups).ArrayNum;
              piVar10 = &(param_4->NewGroups).ArrayMax;
              if (iVar7 == *piVar10) {
                iVar7 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&(param_4->NewGroups).AllocatorInstance,piVar10);
              }
              (param_4->NewGroups).ArrayNum = iVar7 + 1;
              *(int *)((param_4->NewGroups).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_e4
              ;
            }
            local_e8 = local_e4;
          }
          else {
            iVar7 = FDynamicMesh3::GetTriangleGroup(param_1,uVar2);
            if ((-1 < iVar7) &&
               (local_e8 = TIndexMap<int>::GetTo(&param_3->GroupMap,iVar7), local_e8 == -1)) {
              local_e8 = this->Mesh->GroupIDCounter;
              this->Mesh->GroupIDCounter = local_e8 + 1;
              FMeshIndexMappings::SetGroup(param_3,iVar7,local_e8);
              pFVar4 = (param_4->NewGroups).AllocatorInstance.Data;
              if ((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
                 (((FScriptContainerElement *)&local_e8 <
                   pFVar4 + (longlong)(param_4->NewGroups).ArrayMax * 4 &&
                  (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)))) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = (param_4->NewGroups).ArrayNum;
              piVar10 = &(param_4->NewGroups).ArrayMax;
              if (iVar7 == *piVar10) {
                iVar7 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&(param_4->NewGroups).AllocatorInstance,piVar10);
              }
              (param_4->NewGroups).ArrayNum = iVar7 + 1;
              *(int *)((param_4->NewGroups).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_e8
              ;
            }
          }
        }
        iVar7 = (int)local_90;
        local_c0._0_8_ = 0xffffffffffffffff;
        local_c0._s_0.C = -1;
        local_f8[0] = TIndexMap<int>::GetTo(&param_3->VertexMap,(int)local_90);
        if (local_f8[0] == -1) {
          local_res18[0] = FDynamicMesh3::AppendVertex(this->Mesh,param_1,iVar7);
          local_b0 = local_f0;
          local_f0[0] = iVar7;
          local_a8 = local_res18;
          local_f8[0] = local_res18[0];
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_3,(TPairInitializer<int_const_&,int_const_&> *)local_dc,
                     (bool *)&local_b0);
          local_a0 = local_res18;
          local_98 = local_f0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&(param_3->VertexMap).ReverseMap,
                     (TPairInitializer<int_const_&,int_const_&> *)(local_dc + 4),(bool *)&local_a0);
          pFVar4 = (param_4->NewVertices).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_f8) &&
              ((FScriptContainerElement *)local_f8 <
               pFVar4 + (longlong)(param_4->NewVertices).ArrayMax * 4)) &&
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
          iVar7 = (param_4->NewVertices).ArrayNum;
          piVar10 = &(param_4->NewVertices).ArrayMax;
          if (iVar7 == *piVar10) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)param_4,piVar10);
          }
          (param_4->NewVertices).ArrayNum = iVar7 + 1;
          *(int *)((param_4->NewVertices).AllocatorInstance.Data + (longlong)iVar7 * 4) =
               local_f8[0];
        }
        this_00 = &(param_3->VertexMap).ReverseMap;
        piVar10 = &(param_4->NewVertices).ArrayMax;
        iVar7 = local_90._4_4_;
        local_c0._s_0.A = local_f8[0];
        local_f8[0] = TIndexMap<int>::GetTo(&param_3->VertexMap,local_90._4_4_);
        if (local_f8[0] == -1) {
          local_res18[0] = FDynamicMesh3::AppendVertex(this->Mesh,param_1,iVar7);
          local_b0 = local_f0;
          local_f0[0] = iVar7;
          local_a8 = local_res18;
          local_f8[0] = local_res18[0];
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_3,(TPairInitializer<int_const_&,int_const_&> *)local_dc,
                     (bool *)&local_b0);
          local_a0 = local_res18;
          local_98 = local_f0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)this_00,(TPairInitializer<int_const_&,int_const_&> *)(local_dc + 4),
                     (bool *)&local_a0);
          pFVar4 = (param_4->NewVertices).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_f8) &&
              ((FScriptContainerElement *)local_f8 < pFVar4 + (longlong)*piVar10 * 4)) &&
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
          iVar7 = (param_4->NewVertices).ArrayNum;
          if (iVar7 == *piVar10) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)param_4,piVar10);
            (param_4->NewVertices).ArrayNum = iVar7;
          }
          (param_4->NewVertices).ArrayNum = iVar7 + 1;
          *(int *)((param_4->NewVertices).AllocatorInstance.Data + (longlong)iVar7 * 4) =
               local_f8[0];
        }
        iVar7 = local_88;
        local_c0._s_0.B = local_f8[0];
        local_f8[0] = TIndexMap<int>::GetTo(&param_3->VertexMap,local_88);
        if (local_f8[0] == -1) {
          local_res18[0] = FDynamicMesh3::AppendVertex(this->Mesh,param_1,iVar7);
          local_b0 = local_f0;
          local_f0[0] = iVar7;
          local_a8 = local_res18;
          local_f8[0] = local_res18[0];
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_3,(TPairInitializer<int_const_&,int_const_&> *)local_dc,
                     (bool *)&local_b0);
          local_a0 = local_res18;
          local_98 = local_f0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)this_00,(TPairInitializer<int_const_&,int_const_&> *)(local_dc + 4),
                     (bool *)&local_a0);
          pFVar4 = (param_4->NewVertices).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_f8) &&
              ((FScriptContainerElement *)local_f8 < pFVar4 + (longlong)*piVar10 * 4)) &&
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
          iVar7 = (param_4->NewVertices).ArrayNum;
          if (iVar7 == *piVar10) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)param_4,piVar10);
            (param_4->NewVertices).ArrayNum = iVar7;
          }
          (param_4->NewVertices).ArrayNum = iVar7 + 1;
          *(int *)((param_4->NewVertices).AllocatorInstance.Data + (longlong)iVar7 * 4) =
               local_f8[0];
        }
        local_c0._s_0.C = local_f8[0];
        local_e0 = FDynamicMesh3::AppendTriangle(this->Mesh,(FIndex3i *)&local_c0._s_0,local_e8);
        if (param_5) {
          local_58 = local_c8;
          local_50 = local_d0;
          local_d0[0] = local_e0;
          local_c8[0] = uVar2;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&param_3->TriangleMap,(TPairInitializer<int_const_&,int_const_&> *)local_78,
                     (bool *)&local_58);
          local_48 = local_d0;
          local_40 = local_c8;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&(param_3->TriangleMap).ReverseMap,
                     (TPairInitializer<int_const_&,int_const_&> *)(local_78 + 4),(bool *)&local_48);
        }
        pFVar4 = (param_4->NewTriangles).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 <
             pFVar4 + (longlong)(param_4->NewTriangles).ArrayMax * 4)) &&
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
        iVar7 = (param_4->NewTriangles).ArrayNum;
        piVar10 = &(param_4->NewTriangles).ArrayMax;
        if (iVar7 == *piVar10) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->NewTriangles).AllocatorInstance,piVar10);
        }
        (param_4->NewTriangles).ArrayNum = iVar7 + 1;
        *(int *)((param_4->NewTriangles).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_e0;
        DynamicMeshEditorInternals::AppendTriangleAttributes
                  (param_1,uVar2,this->Mesh,local_e0,param_3,param_4);
        puVar9 = local_70;
        pTVar11 = local_68;
      }
      local_80 = local_80 + 1;
    } while (local_80 != local_60);
  }
  DynamicMeshEditorInternals::AppendVertexAttributes(param_1,this->Mesh,param_3);
  return;
}

// AppendUVs @ 143386220

void __thiscall
UE::Geometry::FDynamicMeshEditor::AppendUVs
          (FDynamicMeshEditor *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_3,
          TIndexMap<int> *param_4,TIndexMap<int> *param_5,TIndexMap<int> *param_6)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  TDynamicMeshOverlay<float,2> *this_00;
  undefined4 uVar7;
  TIndexMap<int> *pTVar8;
  uint *puVar9;
  byte bVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  bool bVar19;
  undefined1 local_res18 [8];
  TDynamicMeshOverlay<float,2> *local_res20;
  int local_178 [2];
  uint local_170 [2];
  int local_168;
  FIndex3i_u_0 local_160;
  int local_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  float local_130;
  undefined4 local_12c;
  TIndexMap<int> *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [8];
  int local_f0;
  int local_ec;
  TIndexMap<int> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  uint *local_b8;
  int *local_b0;
  int *local_a8;
  uint *local_a0;
  TIndexMap<int> *local_98;
  undefined8 uStack_90;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  TIndexMap<int> *local_68;
  undefined8 uStack_60;
  TBitArray<FDefaultBitArrayAllocator> *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar14 = 0;
  uVar16 = *(int *)&param_2->field_0xc + *(int *)&param_2->field_0x8 * 0x200;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&param_2->field_0x10 - 1U))) {
    uVar14 = 1;
    bVar19 = uVar16 == 1;
    if ((int)uVar16 < 2) goto LAB_1433862ba;
    do {
      lVar11 = (*(undefined8 **)&param_2->field_0x10)[uVar14 >> 9];
      if ((*(short *)(lVar11 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar11 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar16);
  }
  bVar19 = uVar14 == uVar16;
LAB_1433862ba:
  local_res20 = (TDynamicMeshOverlay<float,2> *)param_3;
  if (!bVar19) {
    local_b8 = local_170;
    local_b0 = local_178;
    local_a8 = local_178;
    local_a0 = local_170;
LAB_1433862f0:
    do {
      local_130 = *(float *)(*(longlong *)
                              (*(longlong *)&param_2->field_0x48 +
                              (ulonglong)((uVar14 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar14 * 2 & 0x1ff) * 4);
      local_12c = *(undefined4 *)
                   (*(longlong *)
                     (*(longlong *)&param_2->field_0x48 +
                     (ulonglong)((uVar14 & 0x7fffffff) >> 8) * 8) +
                   (ulonglong)(uVar14 * 2 + 1 & 0x1ff) * 4);
      local_178[0] = TDynamicMeshOverlay<float,2>::AppendElement
                               ((TDynamicMeshOverlay<float,2> *)param_3,&local_130);
      local_170[0] = uVar14;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)param_6,(TPairInitializer<int_const_&,int_const_&> *)local_f8,(bool *)&local_b8)
      ;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&param_6->ReverseMap,(TPairInitializer<int_const_&,int_const_&> *)(local_f8 + 4)
                 ,(bool *)&local_a8);
      uVar14 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar16) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)&param_2->field_0x10 + (ulonglong)(uVar14 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)&param_2->field_0x10 + (ulonglong)(uVar14 >> 9) * 8) +
                        (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) goto LAB_1433862f0;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar16);
      }
    } while (uVar14 != uVar16);
  }
  local_108 = 0;
  iStack_120 = 0;
  iVar2 = *(int *)&(param_5->ForwardMap).field_0x28;
  local_118 = &(param_5->ForwardMap).field_0x10;
  uStack_11c = 1;
  iStack_10c = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(param_5->ForwardMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)local_118;
    }
    uStack_11c = *puVar12;
    iStack_120 = 0;
    while (uStack_11c == 0) {
      lVar11 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      uStack_11c = 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_143386446;
      uStack_11c = puVar12[lVar11 + 1];
    }
    uStack_11c = -uStack_11c & uStack_11c;
    uVar1 = (ulonglong)uStack_11c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f0 = (int)lVar11;
    iStack_10c = local_108 + -1 + local_f0;
    if (iVar2 < iStack_10c) {
LAB_143386446:
      iStack_10c = iVar2;
    }
  }
  puVar18 = &(param_5->ForwardMap).field_0x10;
  iStack_100 = *(int *)&(param_5->ForwardMap).field_0x8 - *(int *)&(param_5->ForwardMap).field_0x34;
  local_128 = param_5;
  uVar14 = *(uint *)&(param_5->ForwardMap).field_0x28;
  iVar15 = (int)uVar14 >> 5;
  bVar10 = (byte)uVar14 & 0x1f;
  uStack_14c = 1 << bVar10;
  uVar17 = uVar14 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uStack_11c,iStack_120);
  uVar16 = -1 << bVar10;
  uStack_110 = 0xffffffff;
  TStack_e0.CurrentBitIndex = iStack_10c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  local_e8 = param_5;
  TStack_e0._28_4_ = iStack_10c;
  TStack_e0.BaseBitIndex = local_108;
  uStack_c0 = CONCAT44(uStack_fc,iStack_100);
  local_168 = iVar15;
  local_150 = iVar15;
  pTStack_148 = (TBitArray<FDefaultBitArrayAllocator> *)puVar18;
  local_140 = uVar16;
  uStack_13c = uVar14;
  uStack_138 = uVar17;
  iStack_104 = iStack_10c;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118;
  if ((((int)uVar14 < 0) || (iVar2 < (int)uVar14)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = local_res20;
  uVar3 = *(uint *)&(param_5->ForwardMap).field_0x28;
  if (uVar14 != uVar3) {
    puVar13 = *(undefined1 **)&(param_5->ForwardMap).field_0x20;
    if (puVar13 != (undefined1 *)0x0) {
      puVar18 = puVar13;
    }
    uVar16 = uVar16 & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      uStack_138 = uVar17 + 0x20;
      local_150 = iVar15 + 1;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < local_150)
      goto LAB_1433865b3;
      uVar16 = *(uint *)(puVar18 + (longlong)iVar15 * 4 + 4);
      local_140 = 0xffffffff;
      iVar15 = local_150;
      uVar17 = uStack_138;
    }
    uStack_14c = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_14c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_ec = (int)lVar11;
    uStack_13c = local_ec + -1 + uVar17;
    if ((int)uVar3 < (int)uStack_13c) {
LAB_1433865b3:
      uStack_13c = uVar3;
    }
  }
  uStack_90 = CONCAT44(uStack_14c,local_150);
  uStack_80 = CONCAT44(uStack_13c,local_140);
  uStack_78 = CONCAT44(uStack_134,uStack_138);
  local_70 = *(int *)&(param_5->ForwardMap).field_0x8 - *(int *)&(param_5->ForwardMap).field_0x34;
  pTStack_88 = pTStack_148;
  local_98 = param_5;
  local_68 = param_5;
  uStack_40 = CONCAT44(uStack_6c,local_70);
  local_58 = pTStack_148;
  uStack_60 = uStack_90;
  uStack_50 = uStack_80;
  local_48 = uStack_78;
  do {
    pTVar8 = local_e8;
    if (*(int *)&(local_e8->ForwardMap).field_0x8 - *(int *)&(local_e8->ForwardMap).field_0x34 !=
        (int)uStack_c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar11 = (longlong)TStack_e0.CurrentBitIndex;
    if (((TStack_e0.CurrentBitIndex == uStack_50._4_4_) && (TStack_e0.Array == local_58)) &&
       (pTVar8 == local_68)) {
      return;
    }
    lVar4 = *(longlong *)&pTVar8->ForwardMap;
    lVar5 = *(longlong *)&param_2->field_0x78;
    uVar16 = *(int *)(lVar4 + lVar11 * 0x10) * 3;
    uVar14 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar16 & 0x1ff) * 4);
    if (-1 < (int)uVar14) {
      local_160._s_0.C =
           *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                    (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
      local_160._s_0.B =
           *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                    (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
      if (((-1 < (int)uVar14) &&
          ((int)uVar14 < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 + (ulonglong)(uVar14 >> 9) * 8) +
                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_6->bWantForward == false) &&
           (local_160._0_4_ = uVar14,
           bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("bWantForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                               ,0x9a,L""), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(param_6->ForwardMap).field_0x8 != *(int *)&(param_6->ForwardMap).field_0x34) {
          puVar18 = *(undefined1 **)&(param_6->ForwardMap).field_0x40;
          puVar13 = &(param_6->ForwardMap).field_0x38;
          if (puVar18 != (undefined1 *)0x0) {
            puVar13 = puVar18;
          }
          uVar16 = *(uint *)(puVar13 +
                            (ulonglong)(*(int *)&(param_6->ForwardMap).field_0x48 - 1U & uVar14) * 4
                            );
          if (uVar16 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar16 * 0x10 + *(longlong *)&param_6->ForwardMap);
              if (*puVar12 == uVar14) {
                puVar9 = puVar12 + 1;
                if (puVar12 == (uint *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                if (puVar9 != (uint *)0x0) {
                  local_160._s_0.A = *puVar9;
                  goto LAB_14338677f;
                }
                break;
              }
              uVar16 = puVar12[2];
            } while (uVar16 != 0xffffffff);
          }
        }
      }
      local_160._s_0.A = 0xffffffff;
LAB_14338677f:
      uVar7 = local_160._s_0.B;
      if (((-1 < local_160._s_0.B) &&
          (local_160._s_0.B < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 +
                               (ulonglong)((uint)local_160._s_0.B >> 9) * 8) +
                             (ulonglong)(local_160._s_0.B & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_6->bWantForward == false) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("bWantForward",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                ,0x9a,L""), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(param_6->ForwardMap).field_0x8 != *(int *)&(param_6->ForwardMap).field_0x34) {
          puVar18 = *(undefined1 **)&(param_6->ForwardMap).field_0x40;
          puVar13 = &(param_6->ForwardMap).field_0x38;
          if (puVar18 != (undefined1 *)0x0) {
            puVar13 = puVar18;
          }
          uVar14 = *(uint *)(puVar13 +
                            (ulonglong)(*(int *)&(param_6->ForwardMap).field_0x48 - 1U & uVar7) * 4)
          ;
          if (uVar14 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar14 * 0x10 + *(longlong *)&param_6->ForwardMap);
              if (*puVar12 == uVar7) {
                puVar9 = puVar12 + 1;
                if (puVar12 == (uint *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                if (puVar9 != (uint *)0x0) {
                  local_160._s_0.B = *puVar9;
                  goto LAB_14338684f;
                }
                break;
              }
              uVar14 = puVar12[2];
            } while (uVar14 != 0xffffffff);
          }
        }
      }
      local_160._s_0.B = 0xffffffff;
LAB_14338684f:
      uVar7 = local_160._s_0.C;
      if (((-1 < local_160._s_0.C) &&
          (local_160._s_0.C < *(int *)&param_2->field_0x8 * 0x200 + *(int *)&param_2->field_0xc)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)&param_2->field_0x10 +
                               (ulonglong)((uint)local_160._s_0.C >> 9) * 8) +
                             (ulonglong)(local_160._s_0.C & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((param_6->bWantForward == false) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("bWantForward",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                ,0x9a,L""), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(param_6->ForwardMap).field_0x8 != *(int *)&(param_6->ForwardMap).field_0x34) {
          puVar18 = *(undefined1 **)&(param_6->ForwardMap).field_0x40;
          puVar13 = &(param_6->ForwardMap).field_0x38;
          if (puVar18 != (undefined1 *)0x0) {
            puVar13 = puVar18;
          }
          uVar14 = *(uint *)(puVar13 +
                            (ulonglong)(*(int *)&(param_6->ForwardMap).field_0x48 - 1U & uVar7) * 4)
          ;
          if (uVar14 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar14 * 0x10 + *(longlong *)&param_6->ForwardMap);
              if (*puVar12 == uVar7) {
                puVar9 = puVar12 + 1;
                if (puVar12 == (uint *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                if (puVar9 != (uint *)0x0) {
                  local_160._s_0.C = *puVar9;
                  goto LAB_14338690c;
                }
                break;
              }
              uVar14 = puVar12[2];
            } while (uVar14 != 0xffffffff);
          }
        }
      }
      local_160._s_0.C = 0xffffffff;
LAB_14338690c:
      TDynamicMeshOverlay<float,2>::SetTriangle
                (this_00,*(int *)(lVar4 + 4 + lVar11 * 0x10),(FIndex3i *)&local_160._s_0,true);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// ComputeAndSetQuadNormal @ 14338f5d0

TVector<float> * __thiscall
UE::Geometry::FDynamicMeshEditor::ComputeAndSetQuadNormal
          (FDynamicMeshEditor *this,TVector<float> *__return_storage_ptr__,FIndex2i *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  TVector<double> *pTVar4;
  TVector<double> local_28;
  
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  iVar3 = (param_1->field0_0x0)._s_0.A;
  if (param_2) {
    pTVar4 = FDynamicMesh3::GetTriNormal(this->Mesh,&local_28,iVar3);
    dVar1 = (pTVar4->field0_0x0)._s_0.Y;
    dVar2 = (pTVar4->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(pTVar4->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar2;
  }
  else {
    pTVar4 = FDynamicMesh3::GetTriNormal(this->Mesh,&local_28,iVar3);
    dVar1 = (pTVar4->field0_0x0)._s_0.Y;
    dVar2 = (pTVar4->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(pTVar4->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar2;
    pTVar4 = FDynamicMesh3::GetTriNormal(this->Mesh,&local_28,(param_1->field0_0x0)._s_0.B);
    dVar1 = (pTVar4->field0_0x0)._s_0.Z;
    dVar2 = (pTVar4->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (float)(pTVar4->field0_0x0)._s_0.Y + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (float)dVar1 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (float)dVar2 + (__return_storage_ptr__->field0_0x0)._s_0.X;
    Normalize<float>(__return_storage_ptr__,0.0);
  }
  SetQuadNormals(this,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConvertLoopToTriVidPairSequence @ 143393bf0

bool __cdecl
UE::Geometry::FDynamicMeshEditor::ConvertLoopToTriVidPairSequence
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  atomic<unsigned_char> *paVar15;
  uint uVar16;
  char cVar17;
  uint uVar18;
  char cVar19;
  longlong lVar20;
  
  iVar12 = param_3->ArrayNum;
  if (iVar12 == param_2->ArrayNum) {
    uVar18 = 0;
    if (0 < iVar12) {
      lVar20 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar18 < iVar12) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        uVar9 = *(uint *)((param_3->AllocatorInstance).Data + lVar20);
        uVar9 = *(uint *)(*(longlong *)
                           ((param_1->Edges).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar9 >> 9) * 8) + 8 + (ulonglong)(uVar9 & 0x1ff) * 0x10);
        uVar10 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        iVar12 = *(int *)((param_2->AllocatorInstance).Data + lVar20);
        uVar18 = uVar18 + 1;
        uVar16 = (int)uVar18 % param_2->ArrayNum;
        uVar10 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        iVar2 = *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
        lVar4 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
        uVar1 = *(undefined8 *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
        iVar3 = *(int *)(lVar4 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
        iVar14 = (int)uVar1;
        iVar11 = (int)((ulonglong)uVar1 >> 0x20);
        if (iVar14 == iVar12) {
          cVar19 = '\0';
        }
        else if (iVar11 == iVar12) {
          cVar19 = '\x01';
        }
        else {
          cVar19 = -1;
          if (iVar3 == iVar12) {
            cVar19 = '\x02';
          }
        }
        if (iVar14 == iVar2) {
          cVar17 = '\0';
        }
        else if (iVar11 == iVar2) {
          cVar17 = '\x01';
        }
        else {
          cVar17 = -1;
          if (iVar3 == iVar2) {
            cVar17 = '\x02';
          }
        }
        if ((cVar19 < '\0') || (cVar17 < '\0')) {
          pcVar13 = "SubIdx1 >= 0 && SubIdx2 >= 0";
          iVar12 = 0x170;
          paVar15 = &bGEnsureHasExecuted<_3787275554290400912>;
          goto LAB_143393e80;
        }
        iVar12 = param_4->ArrayNum;
        if (iVar12 == param_4->ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        lVar20 = lVar20 + 4;
        param_4->ArrayNum = iVar12 + 1;
        pFVar5 = (param_4->AllocatorInstance).Data;
        *(uint *)(pFVar5 + (longlong)iVar12 * 8) = uVar9;
        *(ushort *)(pFVar5 + (longlong)iVar12 * 8 + 4) = CONCAT11(cVar17,cVar19);
        iVar12 = param_3->ArrayNum;
      } while ((int)uVar18 < iVar12);
    }
    bVar7 = true;
  }
  else {
    pcVar13 = "EdgeLoop.Num() == VidLoop.Num()";
    iVar12 = 0x162;
    paVar15 = &bGEnsureHasExecuted<_3787275554290400926>;
LAB_143393e80:
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (paVar15,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                       ,iVar12,pcVar13);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    bVar7 = false;
  }
  return bVar7;
}

// CopyAttributes @ 143394900

void __thiscall
UE::Geometry::FDynamicMeshEditor::CopyAttributes
          (FDynamicMeshEditor *this,int param_1,int param_2,FMeshIndexMappings *param_3,
          FDynamicMeshEditResult *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TDynamicMeshOverlay<float,2> *this_00;
  FDynamicMeshAttributeSet *pFVar11;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar12;
  int iVar13;
  TDynamicMeshOverlay<float,4> *pTVar14;
  longlong lVar15;
  uint uVar16;
  TDynamicMeshOverlay<float,2> *this_01;
  TDynamicMeshOverlay<float,3> *this_02;
  float local_res8;
  undefined4 local_resc;
  uint local_res10;
  uint local_res18;
  int local_a8 [2];
  TDynamicMeshOverlay<float,4> *local_a0;
  FIndex3i_u_0 local_98;
  FIndex3i_u_0 local_88;
  uint local_78 [4];
  FIndex3i_u_0 local_68;
  uint local_58 [4];
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    iVar13 = 0;
    pTVar14 = (TDynamicMeshOverlay<float,4> *)0x0;
    local_res10 = param_1;
    local_res18 = param_2;
    while( true ) {
      local_a0 = pTVar14;
      iVar9 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))();
      pFVar5 = (this->Mesh->AttributeSet).Ptr;
      if (iVar9 <= iVar13) break;
      pFVar11 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar11 = pFVar5;
      }
      if ((iVar13 < (pFVar11->UVLayers).Array.ArrayNum) && (-1 < iVar13)) {
        if ((iVar13 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_01 = *(TDynamicMeshOverlay<float,2> **)
                   ((longlong)&pTVar14->ParentMesh +
                   (longlong)(pFVar11->UVLayers).Array.AllocatorInstance.Data);
      }
      else {
        this_01 = (TDynamicMeshOverlay<float,2> *)0x0;
      }
      pFVar6 = (this_01->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar4 = param_1 * 3;
      uVar2 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) +
                       (ulonglong)(uVar4 & 0x1ff) * 4);
      if (-1 < (int)uVar2) {
        local_78[0] = uVar2;
        local_78[1] = *(undefined4 *)
                       (*(longlong *)(pFVar6 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                       (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
        local_78[2] = *(undefined4 *)
                       (*(longlong *)(pFVar6 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                       (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
        uVar2 = local_res18 * 3;
        local_98._s_0.C =
             *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
        local_98._s_0.B =
             *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                     (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
        lVar15 = 0;
        local_98._s_0.A =
             *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
        do {
          uVar2 = *(uint *)((longlong)local_78 + lVar15);
          iVar9 = FMeshIndexMappings::GetNewUV(param_3,iVar13,uVar2);
          if (iVar9 == -1) {
            pFVar5 = (this->Mesh->AttributeSet).Ptr;
            pFVar11 = (FDynamicMeshAttributeSet *)0x0;
            if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
              pFVar11 = pFVar5;
            }
            this_00 = (TDynamicMeshOverlay<float,2> *)
                      FDynamicMeshAttributeSet::GetUVLayer(pFVar11,iVar13);
            pFVar6 = (this_00->Elements).Blocks.AllocatorInstance.Data;
            local_res8 = *(float *)(*(longlong *)
                                     (pFVar6 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
            local_resc = *(undefined4 *)
                          (*(longlong *)(pFVar6 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
            iVar9 = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_res8);
            FMeshIndexMappings::SetUV(param_3,iVar13,uVar2,iVar9);
          }
          *(int *)((longlong)&local_98 + lVar15) = iVar9;
          lVar15 = lVar15 + 4;
        } while (lVar15 < 0xc);
        TDynamicMeshOverlay<float,2>::SetTriangle
                  (this_01,local_res18,(FIndex3i *)&local_98._s_0,true);
        pTVar14 = local_a0;
        param_1 = local_res10;
      }
      iVar13 = iVar13 + 1;
      pTVar14 = (TDynamicMeshOverlay<float,4> *)&pTVar14->ElementsRefCounts;
    }
    piVar1 = &(param_4->NewNormalOverlayElements).ArrayNum;
    iVar13 = *piVar1;
    iVar9 = (**(code **)(pFVar5->_padding_ + 0xb8))();
    if (iVar13 < iVar9) {
      iVar13 = *piVar1;
      iVar9 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xb8))();
      iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar9 - iVar13,
                          &(param_4->NewNormalOverlayElements).AllocatorInstance,piVar1,
                          &(param_4->NewNormalOverlayElements).ArrayMax);
      memset((param_4->NewNormalOverlayElements).AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
             (longlong)(iVar9 - iVar13) << 4);
    }
    iVar13 = 0;
    lVar15 = 0;
    while( true ) {
      iVar9 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xb8))();
      uVar2 = local_res18;
      pFVar5 = (this->Mesh->AttributeSet).Ptr;
      if (iVar9 <= iVar13) break;
      pFVar11 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar11 = pFVar5;
      }
      if ((iVar13 < (pFVar11->NormalLayers).Array.ArrayNum) && (-1 < iVar13)) {
        if ((iVar13 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_02 = *(TDynamicMeshOverlay<float,3> **)
                   ((pFVar11->NormalLayers).Array.AllocatorInstance.Data + lVar15);
      }
      else {
        this_02 = (TDynamicMeshOverlay<float,3> *)0x0;
      }
      pFVar6 = (this_02->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar2 = local_res10 * 3;
      iVar9 = *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar2 >> 9) * 8) +
                      (ulonglong)(uVar2 & 0x1ff) * 4);
      if (-1 < iVar9) {
        iVar10 = *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                         (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
        iVar3 = *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                        (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
        local_68._s_0.A = FindOrCreateDuplicateNormal(this,iVar9,iVar13,param_3,param_4);
        local_68._s_0.B = FindOrCreateDuplicateNormal(this,iVar10,iVar13,param_3,param_4);
        local_68._s_0.C = FindOrCreateDuplicateNormal(this,iVar3,iVar13,param_3,param_4);
        TDynamicMeshOverlay<float,3>::SetTriangle
                  (this_02,local_res18,(FIndex3i *)&local_68._s_0,true);
      }
      iVar13 = iVar13 + 1;
      lVar15 = lVar15 + 8;
    }
    if ((pFVar5->ColorLayer).Ptr !=
        (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
      local_a0 = (TDynamicMeshOverlay<float,4> *)(pFVar5->ColorLayer).Ptr;
      uVar16 = local_res10 * 3;
      pFVar6 = (local_a0->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar4 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar16 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 4);
      if (-1 < (int)uVar4) {
        local_58[0] = uVar4;
        uVar4 = local_res18 * 3;
        local_58[1] = *(undefined4 *)
                       (*(longlong *)(pFVar6 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                       (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
        local_58[2] = *(undefined4 *)
                       (*(longlong *)(pFVar6 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                       (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
        local_88._s_0.C =
             *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                     (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
        local_88._s_0.B =
             *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                     (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
        lVar15 = 0;
        local_88._s_0.A =
             *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) +
                     (ulonglong)(uVar4 & 0x1ff) * 4);
        do {
          uVar4 = *(uint *)((longlong)local_58 + lVar15);
          local_a8[0] = TIndexMap<int>::GetTo(&param_3->ColorMap,uVar4);
          if (local_a8[0] == -1) {
            uVar16 = uVar4 * 4;
            pFVar5 = (this->Mesh->AttributeSet).Ptr;
            pFVar11 = (FDynamicMeshAttributeSet *)0x0;
            if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
              pFVar11 = pFVar5;
            }
            pTVar14 = (TDynamicMeshOverlay<float,4> *)(pFVar11->ColorLayer).Ptr;
            pFVar6 = (pTVar14->Elements).Blocks.AllocatorInstance.Data;
            local_48 = *(float *)(*(longlong *)(pFVar6 + (ulonglong)((uVar4 & 0x3fffffff) >> 7) * 8)
                                 + (ulonglong)(uVar16 & 0x1ff) * 4);
            local_44 = *(undefined4 *)
                        (*(longlong *)(pFVar6 + (ulonglong)((uVar4 & 0x3fffffff) >> 7) * 8) +
                        (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
            local_40 = *(undefined4 *)
                        (*(longlong *)(pFVar6 + (ulonglong)((uVar4 & 0x3fffffff) >> 7) * 8) +
                        (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
            local_3c = *(undefined4 *)
                        (*(longlong *)(pFVar6 + (ulonglong)((uVar4 & 0x3fffffff) >> 7) * 8) +
                        (ulonglong)(uVar16 + 3 & 0x1ff) * 4);
            local_a8[0] = TDynamicMeshOverlay<float,4>::AppendElement(pTVar14,&local_48);
            FMeshIndexMappings::SetColor(param_3,uVar4,local_a8[0]);
            if (param_4 != (FDynamicMeshEditResult *)0x0) {
              pFVar6 = (param_4->NewColorOverlayElements).AllocatorInstance.Data;
              if (((pFVar6 <= (FScriptContainerElement *)local_a8) &&
                  ((FScriptContainerElement *)local_a8 <
                   pFVar6 + (longlong)(param_4->NewColorOverlayElements).ArrayMax * 4)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = (param_4->NewColorOverlayElements).ArrayNum;
              piVar1 = &(param_4->NewColorOverlayElements).ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&(param_4->NewColorOverlayElements).AllocatorInstance,
                                    piVar1);
              }
              pFVar6 = (param_4->NewColorOverlayElements).AllocatorInstance.Data;
              (param_4->NewColorOverlayElements).ArrayNum = iVar13 + 1;
              *(int *)(pFVar6 + (longlong)iVar13 * 4) = local_a8[0];
            }
          }
          *(int *)((longlong)&local_88 + lVar15) = local_a8[0];
          lVar15 = lVar15 + 4;
        } while (lVar15 < 0xc);
        TDynamicMeshOverlay<float,4>::SetTriangle(local_a0,uVar2,(FIndex3i *)&local_88._s_0,true);
      }
    }
    uVar4 = local_res10;
    pFVar5 = (this->Mesh->AttributeSet).Ptr;
    pFVar11 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar11 = pFVar5;
    }
    if ((pFVar11->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      lVar15 = *(longlong *)&((pFVar5->MaterialIDAttrib).Ptr)->field_0x20;
      *(undefined4 *)
       (*(longlong *)(lVar15 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(lVar15 + (ulonglong)(local_res10 >> 9) * 8) +
            (ulonglong)(local_res10 & 0x1ff) * 4);
    }
    for (iVar13 = 0; iVar9 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 200))(),
        iVar13 < iVar9; iVar13 = iVar13 + 1) {
      pFVar5 = (this->Mesh->AttributeSet).Ptr;
      pFVar11 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar11 = pFVar5;
      }
      pTVar12 = FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar11,iVar13);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)&pTVar12->field_0x20 + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)&pTVar12->field_0x20 + (ulonglong)(uVar4 >> 9) * 8) +
            (ulonglong)(uVar4 & 0x1ff) * 4);
    }
  }
  return;
}

// CreateSeamsAtEdges @ 143395560

bool __cdecl
UE::Geometry::FDynamicMeshEditor::CreateSeamsAtEdges
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TDynamicMeshOverlay<float,2> *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Private::OverlaySeamHelpers::CreateSeamsAtEdges<float,2>
                    (param_1,param_2->ParentMesh,param_2,param_3);
  return bVar1;
}

// CreateSeamsAtEdges @ 143395580

bool __cdecl
UE::Geometry::FDynamicMeshEditor::CreateSeamsAtEdges
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TDynamicMeshOverlay<float,3> *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Private::OverlaySeamHelpers::CreateSeamsAtEdges<float,3>
                    (param_1,param_2->ParentMesh,param_2,param_3);
  return bVar1;
}

// DisconnectTriangles @ 143397c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshEditor::DisconnectTriangles
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FSmallListSet *pFVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  FDynamicMeshEditor *pFVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  bool bVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar11;
  longlong *plVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStackY_4f8 [32];
  undefined1 local_4a8;
  undefined1 local_4a7;
  char local_4a6;
  ForAnyElementType local_4a0;
  undefined8 local_498;
  int local_490 [2];
  int local_488;
  int local_484;
  ForAnyElementType local_480;
  undefined8 local_478;
  ForAnyElementType local_470;
  undefined8 local_468;
  undefined1 local_460;
  undefined1 local_45f [3];
  int local_45c;
  int local_458 [2];
  undefined8 local_450;
  undefined4 local_448 [2];
  int local_440;
  uint uStack_43c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_438;
  uint local_430;
  uint uStack_42c;
  uint uStack_428;
  undefined4 uStack_424;
  FDynamicMeshEditor *local_420;
  uint local_418;
  uint uStack_414;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_410;
  undefined4 local_408;
  uint uStack_404;
  uint uStack_400;
  undefined4 uStack_3fc;
  FSmallListSet *local_3f8;
  int iStack_3f0;
  uint uStack_3ec;
  TBitArray<FDefaultBitArrayAllocator> *local_3e8;
  undefined8 uStack_3e0;
  int local_3d8;
  undefined4 uStack_3d4;
  int iStack_3d0;
  undefined4 uStack_3cc;
  TArray<bool,TSizedDefaultAllocator<32>_> local_3c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_3b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_3a8;
  FIndex3i_u_0 local_398;
  code *local_388 [2];
  TBitArray<FDefaultBitArrayAllocator> *pTStack_378;
  FDynamicMesh3 *local_370;
  int iStack_368;
  undefined4 uStack_364;
  TBitArray<FDefaultBitArrayAllocator> **local_360;
  undefined4 local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  longlong *local_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_338;
  FSmallListSet *local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_310;
  undefined8 uStack_2f0;
  FScriptContainerElement *local_2e8;
  int local_2e0;
  BaseValueIterator local_2d8;
  undefined4 local_2a4;
  undefined4 local_284;
  undefined1 local_278 [32];
  ForElementType<unsigned_int> local_258;
  uint local_250;
  int local_24c;
  int local_248;
  int local_244;
  FScriptContainerElement local_240 [8];
  ForAnyElementType local_238;
  uint local_230;
  undefined1 local_228 [16];
  TBitArray<FDefaultBitArrayAllocator> local_218;
  uint local_1f8;
  uint local_1f4;
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  undefined1 local_1d8 [40];
  longlong *local_1b0;
  FSmallListSet *local_1a8;
  ulonglong uStack_1a0;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  FSmallListSet *local_180;
  ulonglong uStack_178;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158 [144];
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  iVar13 = param_1->ArrayNum;
  uVar9 = 0;
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_278._0_8_ = (FScriptContainerElement *)0x0;
  local_278._8_8_ = 0;
  local_258 = (ForElementType<unsigned_int>)0x0;
  local_250 = 0;
  local_24c = 0x80;
  local_248 = -1;
  local_244 = 0;
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  local_228._0_8_ = 0;
  local_228._8_8_ = (FScriptContainerElement *)0x0;
  local_218.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_218.NumBits = 0;
  local_218.MaxBits = 0x80;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1e8 = (ForElementType<FSetElementId>)0x0;
  local_1e0 = 0;
  local_480.Data = (FScriptContainerElement *)0x0;
  local_478 = 0;
  local_470.Data = (FScriptContainerElement *)0x0;
  local_468 = 0;
  local_4a0.Data = (FScriptContainerElement *)0x0;
  local_498 = 0;
  local_4a6 = param_2;
  local_420 = this;
  if ((iVar13 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar18 = (local_278._8_4_ - local_244) + iVar13;
  if (uVar18 <= (uint)(local_278._8_4_ - local_244)) goto LAB_143397ffa;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_278,uVar18);
  uVar19 = 1;
  if (3 < uVar18) {
    uVar20 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_358 = (int)lVar10;
    uVar19 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_230 != 0) && ((int)uVar19 <= (int)local_230)) goto LAB_143397ffa;
  local_230 = uVar19;
  if (local_238.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_238,0,0,4);
  }
  if (uVar19 != 0) {
    uVar18 = uVar19;
    if (uVar19 < 2) {
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_143397e18;
      }
    }
    else {
LAB_143397e18:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_238,0,uVar18,4);
    }
    if (0 < (int)uVar19) {
      uVar22 = (ulonglong)uVar19;
      uVar20 = uVar9;
      do {
        FVar15.Data = local_240;
        if (local_238.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_238.Data;
        }
        uVar7 = uVar20 & (longlong)(int)uVar19 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar15.Data + uVar7 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_230 != 0) {
    pTStack_410 = (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10);
    local_418 = 0;
    uStack_414 = 1;
    uStack_404 = 0;
    uStack_400 = 0;
    if (local_250 != 0) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_278 + 0x10);
      if (local_258 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_258;
      }
      uVar18 = *(uint *)FVar21;
      uVar20 = uVar9;
      while (uVar18 == 0) {
        uStack_400 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_400;
        iVar16 = (int)uVar9;
        local_418 = iVar16 + 1;
        uVar9 = (ulonglong)local_418;
        if ((int)((local_250 - 1) + ((int)(local_250 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_418)
        goto LAB_143397f30;
        uVar18 = ((uint *)((longlong)FVar21 + 4))[iVar16];
      }
      uStack_414 = -uVar18 & uVar18;
      uVar9 = (ulonglong)uStack_414 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_354 = (int)lVar10;
      uStack_404 = (int)lVar10 + -1 + uStack_400;
      uVar9 = (ulonglong)uStack_404;
      if ((int)local_250 < (int)uStack_404) {
LAB_143397f30:
        uVar9 = (ulonglong)local_250;
        uStack_404 = local_250;
      }
    }
    local_408 = 0xffffffff;
    local_340 = (longlong *)local_278;
    local_338._padding_ = CONCAT44(uStack_414,local_418);
    local_338.Array = pTStack_410;
    local_338.UnvisitedBitMask = 0xffffffff;
    local_338.CurrentBitIndex = uStack_404;
    local_338.BaseBitIndex = uStack_400;
    local_338._28_4_ = uStack_3fc;
    if ((int)uVar9 < (int)local_250) {
      do {
        iVar16 = (int)uVar9;
        uVar18 = local_230 - 1 & *(uint *)(*local_340 + (longlong)iVar16 * 0xc);
        lVar10 = *local_340 + (longlong)iVar16 * 0xc;
        *(uint *)(lVar10 + 8) = uVar18;
        FVar15.Data = local_240;
        if (local_238.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_238.Data;
        }
        uVar9 = (longlong)(int)local_230 - 1U & (longlong)(int)uVar18;
        *(undefined4 *)(lVar10 + 4) = *(undefined4 *)(FVar15.Data + uVar9 * 4);
        *(int *)(FVar15.Data + uVar9 * 4) = iVar16;
        local_338.UnvisitedBitMask = local_338.UnvisitedBitMask & ~local_338._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_338);
        uVar9 = (ulonglong)(uint)local_338.CurrentBitIndex;
      } while (local_338.CurrentBitIndex < (local_338.Array)->NumBits);
    }
  }
LAB_143397ffa:
  pFVar17 = pFVar14 + (longlong)iVar13 * 4;
  pFVar4 = local_420;
  for (; local_420 = pFVar4, pFVar14 != pFVar17; pFVar14 = pFVar14 + 4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_278,&local_350,
               (bool *)pFVar14);
    pFVar4 = local_420;
  }
  pFVar17 = (param_1->AllocatorInstance).Data;
  iVar13 = param_1->ArrayNum;
  pFVar14 = pFVar17 + (longlong)iVar13 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar13) {
      local_4a8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_4a8);
    }
    iVar16 = local_218.NumBits;
    if (pFVar17 == pFVar14) break;
    uVar18 = *(uint *)pFVar17;
    FDynamicMesh3::GetTriNeighbourTris(pFVar4->Mesh,(FIndex3i *)&local_398._s_0,uVar18);
    lVar10 = *(longlong *)
              ((pFVar4->Mesh->Triangles).Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar18 >> 9) * 8);
    local_450 = *(undefined8 *)(lVar10 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    local_448[0] = *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    if (local_278._8_4_ != local_244) {
      FVar15.Data = local_240;
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_238.Data;
      }
      for (iVar16 = *(int *)(FVar15.Data + (ulonglong)(local_230 - 1 & local_398._s_0.A) * 4);
          iVar16 != -1; iVar16 = *(int *)(local_278._0_8_ + (longlong)iVar16 * 0xc + 4)) {
        if (*(uint *)(local_278._0_8_ + (longlong)iVar16 * 0xc) == local_398._s_0.A)
        goto LAB_143398155;
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,&local_45c,
               (bool *)&local_450);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,local_458,
               (bool *)((longlong)&local_450 + 4));
LAB_143398155:
    if (local_278._8_4_ != local_244) {
      FVar15.Data = local_240;
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_238.Data;
      }
      for (iVar16 = *(int *)(FVar15.Data + (ulonglong)(local_230 - 1 & local_398._s_0.B) * 4);
          iVar16 != -1; iVar16 = *(int *)(local_278._0_8_ + (longlong)iVar16 * 0xc + 4)) {
        iVar23 = local_278._8_4_;
        if (*(uint *)(local_278._0_8_ + (longlong)iVar16 * 0xc) == local_398._s_0.B)
        goto LAB_1433981e5;
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,&local_45c,
               (bool *)((longlong)&local_450 + 4));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,local_458,
               (bool *)local_448);
    iVar23 = local_278._8_4_;
LAB_1433981e5:
    if (iVar23 != local_244) {
      FVar15.Data = local_240;
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_238.Data;
      }
      for (iVar16 = *(int *)(FVar15.Data + (ulonglong)(local_230 - 1 & local_398._s_0.C) * 4);
          iVar16 != -1; iVar16 = *(int *)(local_278._0_8_ + (longlong)iVar16 * 0xc + 4)) {
        if (*(uint *)(local_278._0_8_ + (longlong)iVar16 * 0xc) == local_398._s_0.C)
        goto LAB_143398254;
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,&local_45c,
               (bool *)local_448);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,local_458,
               (bool *)&local_450);
LAB_143398254:
    pFVar17 = pFVar17 + 4;
  }
  iStack_3f0 = 0;
  local_3d8 = 0;
  uStack_3ec = 1;
  uStack_3e0._4_4_ = 0;
  if (local_218.NumBits != 0) {
    FVar21 = (ForElementType<unsigned_int>)(local_228 + 0x10);
    if (local_218.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_218.AllocatorInstance.SecondaryData;
    }
    uStack_3ec = *(uint *)FVar21;
    while (uStack_3ec == 0) {
      lVar10 = (longlong)iStack_3f0;
      local_3d8 = local_3d8 + 0x20;
      iStack_3f0 = iStack_3f0 + 1;
      uStack_3ec = 1;
      uStack_3e0._4_4_ = local_218.NumBits;
      if ((int)((local_218.NumBits - 1U) + ((int)(local_218.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_3f0) goto LAB_1433982e6;
      uStack_3ec = *(uint *)((longlong)FVar21 + lVar10 * 4 + 4);
    }
    uStack_3ec = -uStack_3ec & uStack_3ec;
    uVar9 = (ulonglong)uStack_3ec * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uStack_3e0._4_4_ = local_3d8 + -1 + (int)lVar10;
    local_34c = (int)lVar10;
    if (local_218.NumBits < (int)uStack_3e0._4_4_) {
      uStack_3e0._4_4_ = local_218.NumBits;
    }
  }
LAB_1433982e6:
  local_3f8 = (FSmallListSet *)local_228;
  uStack_3d4 = local_284;
  local_3e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
  uVar19 = local_218.NumBits & 0xffffffe0;
  iStack_3d0 = local_228._8_4_ - local_1f4;
  bVar8 = (byte)local_218.NumBits & 0x1f;
  uStack_43c = 1 << bVar8;
  pTStack_438 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
  uVar18 = -1 << bVar8;
  iVar13 = local_218.NumBits >> 5;
  uStack_3e0._0_4_ = 0xffffffff;
  uStack_42c = local_218.NumBits;
  local_318 = local_3f8;
  TStack_310._padding_ = CONCAT44(uStack_3ec,iStack_3f0);
  TStack_310.Array = local_3e8;
  TStack_310.UnvisitedBitMask = 0xffffffff;
  TStack_310.CurrentBitIndex = uStack_3e0._4_4_;
  TStack_310.BaseBitIndex = local_3d8;
  TStack_310._28_4_ = local_284;
  uStack_2f0 = CONCAT44(uStack_3cc,iStack_3d0);
  local_440 = iVar13;
  local_430 = uVar18;
  uStack_428 = uVar19;
  if ((local_218.NumBits < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar5 = pTStack_438;
  if (iVar16 != local_218.NumBits) {
    FVar21 = (ForElementType<unsigned_int>)(local_228 + 0x10);
    if (local_218.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_218.AllocatorInstance.SecondaryData;
    }
    uVar18 = uVar18 & *(uint *)((longlong)FVar21 + (longlong)iVar13 * 4);
    while (uVar18 == 0) {
      uStack_428 = uVar19 + 0x20;
      local_440 = iVar13 + 1;
      if ((int)((local_218.NumBits - 1U) + ((int)(local_218.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          local_440) {
        uStack_42c = local_218.NumBits;
        goto LAB_143398451;
      }
      uVar18 = *(uint *)((longlong)FVar21 + (longlong)iVar13 * 4 + 4);
      local_430 = 0xffffffff;
      uVar19 = uStack_428;
      iVar13 = local_440;
    }
    uStack_43c = -uVar18 & uVar18;
    uVar9 = (ulonglong)uStack_43c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_348 = (int)lVar10;
    uStack_42c = (uVar19 - 1) + local_348;
    if (local_218.NumBits < (int)uStack_42c) {
      uStack_42c = local_218.NumBits;
    }
  }
LAB_143398451:
  uVar18 = uStack_42c;
  local_388[1]._4_4_ = uStack_43c;
  local_388[1]._0_4_ = local_440;
  local_370 = (FDynamicMesh3 *)CONCAT44(uStack_42c,local_430);
  uStack_364 = uStack_424;
  iStack_368 = uStack_428;
  pTStack_378 = pTStack_438;
  do {
    pFVar1 = local_318;
    if (*(int *)&(local_318->ListHeads).Blocks.AllocatorInstance.Data -
        (local_318->FreeBlocks).CurBlockUsed != (int)uStack_2f0) {
      local_4a7 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4a7);
    }
    pFVar4 = local_420;
    lVar10 = local_498;
    if (((TStack_310.CurrentBitIndex == uVar18) && (TStack_310.Array == pTVar5)) &&
       (pFVar1 == (FSmallListSet *)local_228)) {
      if (local_4a6 != '\0') {
        iVar13 = (int)local_468;
        uVar9 = (ulonglong)(int)local_468;
        local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a8.ArrayNum = 0;
        local_3a8.ArrayMax = 0;
        pFVar14 = local_470.Data + uVar9 * 4;
        local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b8.ArrayNum = 0;
        local_3b8.ArrayMax = 0;
        local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3c8.ArrayNum = 0;
        local_3c8.ArrayMax = 0;
        FVar15.Data = local_470.Data;
        while( true ) {
          if ((int)uVar9 != iVar13) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_460);
          }
          if (FVar15.Data == pFVar14) break;
          SplitBowtiesInternal
                    (pFVar4,*(int *)FVar15.Data,&local_3a8,&local_3b8,&local_3c8,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
          uVar9 = local_468 & 0xffffffff;
          FVar15.Data = FVar15.Data + 4;
        }
        iVar13 = (int)local_478;
        uVar9 = (ulonglong)(int)local_478;
        pFVar14 = local_480.Data + uVar9 * 4;
        FVar15.Data = local_480.Data;
        while( true ) {
          if ((int)uVar9 != iVar13) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_45f);
          }
          if (FVar15.Data == pFVar14) break;
          SplitBowtiesInternal
                    (pFVar4,*(int *)FVar15.Data,&local_3a8,&local_3b8,&local_3c8,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
          uVar9 = local_478 & 0xffffffff;
          FVar15.Data = FVar15.Data + 4;
        }
        if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.AllocatorInstance.Data);
        }
        if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.AllocatorInstance.Data);
        }
        if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.AllocatorInstance.Data);
        }
      }
      if (local_4a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data);
      }
      if (local_470.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data);
      }
      if (local_480.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.Data);
      }
      local_1e0 = 0;
      if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1e8);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_228);
      local_230 = 0;
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_278);
      return;
    }
    iVar13 = *(int *)(*(longlong *)&pFVar1->ListHeads + (longlong)TStack_310.CurrentBitIndex * 0xc);
    uVar19 = local_498._4_4_;
    local_498 = (ulonglong)local_498._4_4_ << 0x20;
    if ((lVar10 < 0) && (uVar19 != 0)) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_4a0,0,(int *)((longlong)&local_498 + 4));
    }
    pFVar4 = local_420;
    iVar16 = 0;
    pTStack_378 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_360 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
    local_388[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                   ::Call;
    local_370 = local_420->Mesh;
    local_1d8._0_8_ = 0;
    local_1b0 = (longlong *)0x0;
    local_1a8 = (FSmallListSet *)0x0;
    pFVar1 = &local_370->VertexEdgeLists;
    uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
    local_180 = (FSmallListSet *)0x0;
    uStack_178 = uStack_178 & 0xffffffff00000000;
    uStack_364 = local_2a4;
    iStack_368 = iVar13;
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_2d8,pFVar1,iVar13,false);
    local_1a8 = local_2d8.ListSet;
    uStack_1a0._0_4_ = local_2d8.ListIndex;
    uStack_1a0._4_4_ = local_2d8.block_ptr;
    local_188 = local_2d8.cur_value;
    uStack_184 = local_2d8._36_4_;
    local_198 = local_2d8.N;
    iStack_194 = local_2d8.iEnd;
    iStack_190 = local_2d8.iCur;
    iStack_18c = local_2d8.cur_ptr;
    uStack_3ec = 0xffffffff;
    uStack_178 = CONCAT44(0xffffffff,iVar13);
    local_3e8 = (TBitArray<FDefaultBitArrayAllocator> *)((ulonglong)local_3e8 & 0xffffffff00000000);
    uStack_3e0._0_4_ = 0xffffffff;
    uStack_3e0._4_4_ = -1;
    local_160._4_4_ = uStack_3d4;
    local_160._0_4_ = local_3d8;
    local_170 = local_3e8;
    uStack_168 = 0xffffffffffffffff;
    local_3f8 = pFVar1;
    iStack_3f0 = iVar13;
    local_180 = pFVar1;
    TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
              ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_388);
    if (local_388[0] != (code *)0x0) {
      ppTVar11 = &pTStack_378;
      if (local_360 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
        ppTVar11 = local_360;
      }
      (*(code *)((*ppTVar11)->AllocatorInstance).SecondaryData)();
    }
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158,
               (ValueIterator *)&local_1a8,(ValueIterator *)&local_180,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_c8,
               (ValueIterator *)&local_180,(ValueIterator *)&local_180,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8);
    while (((local_158._0_8_ != local_c8._0_8_ || (local_158._8_4_ != local_c8._8_4_)) ||
           ((local_158._24_4_ != local_c8._24_4_ || (local_158._28_4_ != local_c8._28_4_))))) {
      local_490[0] = (int)local_158._88_8_;
      if (local_278._8_4_ == local_244) {
LAB_1433987e3:
        iVar16 = iVar16 + 1;
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158);
      }
      else {
        FVar15.Data = local_240;
        if (local_238.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_238.Data;
        }
        iVar13 = *(int *)(FVar15.Data +
                         ((ulonglong)(local_230 - 1) & local_158._88_8_ & 0xffffffff) * 4);
        if (iVar13 == -1) goto LAB_1433987e3;
        do {
          if (*(int *)(local_278._0_8_ + (longlong)iVar13 * 0xc) == local_490[0]) {
            if (((local_4a0.Data <= (FScriptContainerElement *)local_490) &&
                ((FScriptContainerElement *)local_490 <
                 local_4a0.Data + (longlong)(int)local_498._4_4_ * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar13 = (int)local_498;
            if ((int)local_498 == local_498._4_4_) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_4a0,(int *)((longlong)&local_498 + 4));
            }
            local_498 = CONCAT44(local_498._4_4_,iVar13 + 1);
            *(int *)(local_4a0.Data + (longlong)iVar13 * 4) = local_490[0];
            goto LAB_1433987e3;
          }
          iVar13 = *(int *)(local_278._0_8_ + (longlong)iVar13 * 0xc + 4);
        } while (iVar13 != -1);
        iVar16 = iVar16 + 1;
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158);
      }
    }
    if (local_c8._96_8_ != 0) {
      plVar12 = (longlong *)(local_c8 + 0x70);
      if ((longlong *)local_c8._136_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_c8._136_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_158._96_8_ != 0) {
      plVar12 = (longlong *)(local_158 + 0x70);
      if ((longlong *)local_158._136_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_158._136_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_1d8._0_8_ != 0) {
      plVar12 = (longlong *)(local_1d8 + 0x10);
      if (local_1b0 != (longlong *)0x0) {
        plVar12 = local_1b0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    iVar13 = (int)local_498;
    if ((int)local_498 < iVar16) {
      pFVar2 = pFVar4->Mesh;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x48);
      local_2e8 = local_4a0.Data;
      if (((int)local_498 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_2e0 = iVar13;
      iVar13 = (*pcVar3)(pFVar2);
      if ((iVar13 != 0) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3787275554290400437>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                             ,0x34b,
                             "EMeshResult::Ok == Mesh->SplitVertex(VID, FilteredTriangles, SplitInfo)"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((local_480.Data <= (FScriptContainerElement *)&local_484) &&
          ((FScriptContainerElement *)&local_484 < local_480.Data + (longlong)local_478._4_4_ * 4))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = (int)local_478;
      if ((int)local_478 == local_478._4_4_) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_480,(int *)((longlong)&local_478 + 4));
      }
      local_478 = CONCAT44(local_478._4_4_,iVar13 + 1);
      *(int *)(local_480.Data + (longlong)iVar13 * 4) = local_484;
      if (((local_470.Data <= (FScriptContainerElement *)&local_488) &&
          ((FScriptContainerElement *)&local_488 < local_470.Data + (longlong)local_468._4_4_ * 4))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = (int)local_468;
      if ((int)local_468 == local_468._4_4_) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_470,(int *)((longlong)&local_468 + 4));
      }
      local_468 = CONCAT44(local_468._4_4_,iVar13 + 1);
      *(int *)(local_470.Data + (longlong)iVar13 * 4) = local_488;
    }
    TStack_310.UnvisitedBitMask = TStack_310.UnvisitedBitMask & ~TStack_310._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_310);
  } while( true );
}

// DisconnectTriangles @ 143398c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
UE::Geometry::FDynamicMeshEditor::DisconnectTriangles
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  undefined1 auStackY_288 [32];
  uint local_250;
  uint uStack_24c;
  uint uStack_23c;
  uint uStack_238;
  undefined4 uStack_234;
  uint local_230;
  uint uStack_22c;
  uint uStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d0;
  FSparseArrayAllocationInfo local_1b0;
  FMeshRegionBoundaryLoops local_198;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops(&local_198,this->Mesh,param_1,false);
  bVar4 = FMeshRegionBoundaryLoops::Compute(&local_198);
  if (!bVar4) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3787275554290400595>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                       ,0x2ad,"bOK");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = false;
    goto LAB_1433994a8;
  }
  pFVar20 = (param_1->AllocatorInstance).Data;
  uVar17 = param_1->ArrayNum;
  if (((int)uVar17 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar12 = 0;
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar17 != 0) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar17);
    uVar14 = 1;
    if (3 < uVar17) {
      uVar18 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar9 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar14)) {
      local_50 = uVar14;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar14 != 0) {
        uVar16 = uVar14;
        if (uVar14 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar16 = 0;
            goto LAB_143398d98;
          }
        }
        else {
LAB_143398d98:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar16,4)
          ;
        }
        if (0 < (int)uVar14) {
          uVar19 = (ulonglong)uVar14;
          uVar18 = uVar12;
          do {
            FVar11.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_58.Data;
            }
            uVar8 = uVar18 & (longlong)(int)uVar14 - 1U;
            uVar18 = uVar18 + 1;
            *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (local_50 != 0) {
        local_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_250 = 0;
        uStack_24c = 1;
        uStack_23c = 0;
        uStack_238 = 0;
        if (local_70 != 0) {
          FVar13 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = local_78;
          }
          uVar14 = *(uint *)FVar13;
          uVar18 = uVar12;
          while (uVar14 == 0) {
            uStack_238 = (int)uVar18 + 0x20;
            uVar18 = (ulonglong)uStack_238;
            iVar6 = (int)uVar12;
            local_250 = iVar6 + 1;
            uVar12 = (ulonglong)local_250;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_250)
            goto LAB_143398ebe;
            uVar14 = ((uint *)((longlong)FVar13 + 4))[iVar6];
          }
          uStack_24c = -uVar14 & uVar14;
          uVar12 = (ulonglong)uStack_24c * 2 + 1;
          lVar9 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uStack_23c = (int)lVar9 + -1 + uStack_238;
          uVar12 = (ulonglong)uStack_23c;
          if ((int)local_70 < (int)uStack_23c) {
LAB_143398ebe:
            uVar12 = (ulonglong)local_70;
            uStack_23c = local_70;
          }
        }
        local_1f8._padding_ = CONCAT44(uStack_24c,local_250);
        local_1f8.CurrentBitIndex = uStack_23c;
        local_1f8.UnvisitedBitMask = 0xffffffff;
        local_1f8._28_4_ = uStack_234;
        local_1f8.BaseBitIndex = uStack_238;
        if ((int)uVar12 < (int)local_70) {
          do {
            lVar9 = (longlong)(int)uVar12;
            uVar14 = local_50 - 1 & *(uint *)(local_98._0_8_ + lVar9 * 0xc);
            *(uint *)(local_98._0_8_ + lVar9 * 0xc + 8) = uVar14;
            FVar11.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_58.Data;
            }
            uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar14;
            *(undefined4 *)(local_98._0_8_ + lVar9 * 0xc + 4) =
                 *(undefined4 *)(FVar11.Data + uVar18 * 4);
            *(int *)(FVar11.Data + uVar18 * 4) = (int)uVar12;
            local_1f8.UnvisitedBitMask = local_1f8.UnvisitedBitMask & ~local_1f8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
            uVar12 = (ulonglong)(uint)local_1f8.CurrentBitIndex;
          } while (local_1f8.CurrentBitIndex < (local_1f8.Array)->NumBits);
        }
      }
    }
  }
  pFVar1 = pFVar20 + (longlong)(int)uVar17 * 4;
  iVar6 = local_68;
  for (; local_68 = iVar6, pFVar20 != pFVar1; pFVar20 = pFVar20 + 4) {
    puVar15 = (uint *)0x0;
    if (local_64 == 0) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar13 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_78;
      }
      bVar10 = (byte)iVar7 & 0x1f;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
        bVar10 = bVar10 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar13 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar10 & 0x1f));
    }
    else {
      local_68 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0xc + 4);
      local_64 = local_64 + -1;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)local_68 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_1b0,iVar6);
    if (local_1b0.Pointer != (uint *)0x0) {
      *(uint *)local_1b0.Pointer = *(uint *)pFVar20;
      *(uint *)((longlong)local_1b0.Pointer + 4) = 0xffffffff;
      puVar15 = local_1b0.Pointer;
    }
    uVar17 = *puVar15;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar11.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_58.Data;
      }
      for (iVar6 = *(int *)(FVar11.Data + (ulonglong)(local_50 - 1 & uVar17) * 4); iVar6 != -1;
          iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar6 * 0xc) == uVar17) {
          if (iVar6 != -1) {
            *(uint *)(local_98._0_8_ + (longlong)iVar6 * 0xc) = uVar17;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_1b0.Index,1);
            goto LAB_1433993b2;
          }
          break;
        }
      }
    }
    uVar12 = 0;
    uVar16 = local_98._8_4_ - local_64;
    uVar14 = 1;
    if (3 < uVar16) {
      uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar16 < 1) || ((int)uVar14 <= (int)local_50)) {
      uVar17 = local_50 - 1 & uVar17;
      puVar15[2] = uVar17;
      FVar11.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_58.Data;
      }
      uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
      puVar15[1] = *(uint *)(FVar11.Data + uVar12 * 4);
      *(int *)(FVar11.Data + uVar12 * 4) = local_1b0.Index;
    }
    else {
      local_50 = uVar14;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar14 != 0) {
        uVar17 = uVar14;
        if (uVar14 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar17 = 0;
            goto LAB_1433991a3;
          }
        }
        else {
LAB_1433991a3:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4)
          ;
        }
        if (0 < (int)uVar14) {
          uVar19 = (ulonglong)uVar14;
          uVar18 = uVar12;
          do {
            FVar11.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_58.Data;
            }
            uVar8 = uVar18 & (longlong)(int)uVar14 - 1U;
            uVar18 = uVar18 + 1;
            *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (local_50 != 0) {
        local_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_230 = 0;
        uStack_22c = 1;
        uStack_21c = 0;
        uStack_218 = 0;
        if (local_70 != 0) {
          FVar13 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = local_78;
          }
          uVar17 = *(uint *)FVar13;
          uVar18 = uVar12;
          while (uVar17 == 0) {
            uStack_218 = (int)uVar18 + 0x20;
            uVar18 = (ulonglong)uStack_218;
            iVar6 = (int)uVar12;
            local_230 = iVar6 + 1;
            uVar12 = (ulonglong)local_230;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_230)
            goto LAB_1433992ce;
            uVar17 = ((uint *)((longlong)FVar13 + 4))[iVar6];
          }
          uStack_22c = -uVar17 & uVar17;
          uVar12 = (ulonglong)uStack_22c * 2 + 1;
          lVar9 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uStack_21c = (int)lVar9 + -1 + uStack_218;
          uVar12 = (ulonglong)uStack_21c;
          if ((int)local_70 < (int)uStack_21c) {
LAB_1433992ce:
            uVar12 = (ulonglong)local_70;
            uStack_21c = local_70;
          }
        }
        local_1d8 = (longlong *)local_98;
        local_1d0._padding_ = CONCAT44(uStack_22c,local_230);
        local_1d0.CurrentBitIndex = uStack_21c;
        local_1d0.UnvisitedBitMask = 0xffffffff;
        local_1d0._28_4_ = uStack_214;
        local_1d0.BaseBitIndex = uStack_218;
        if ((int)uVar12 < (int)local_70) {
          do {
            iVar6 = (int)uVar12;
            uVar17 = local_50 - 1 & *(uint *)(*local_1d8 + (longlong)iVar6 * 0xc);
            lVar9 = *local_1d8 + (longlong)iVar6 * 0xc;
            *(uint *)(lVar9 + 8) = uVar17;
            FVar11.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_58.Data;
            }
            uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
            *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(FVar11.Data + uVar12 * 4);
            *(int *)(FVar11.Data + uVar12 * 4) = iVar6;
            local_1d0.UnvisitedBitMask = local_1d0.UnvisitedBitMask & ~local_1d0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d0);
            uVar12 = (ulonglong)(uint)local_1d0.CurrentBitIndex;
          } while (local_1d0.CurrentBitIndex < (local_1d0.Array)->NumBits);
        }
      }
    }
LAB_1433993b2:
    iVar6 = local_68;
  }
  bVar4 = DisconnectTriangles(this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98
                              ,&local_198.Loops,param_2,param_3);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  bVar21 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar21) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
LAB_1433994a8:
  if (local_198.edges_roi.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.edges_roi.AllocatorInstance.Data);
  }
  FIndexFlagSet::~FIndexFlagSet(&local_198.Edges);
  FIndexFlagSet::~FIndexFlagSet(&local_198.Triangles);
  DestructItems<UE::Geometry::FEdgeLoop,int>
            ((FEdgeLoop *)local_198.Loops.AllocatorInstance.Data,local_198.Loops.ArrayNum);
  if ((FEdgeLoop *)local_198.Loops.AllocatorInstance.Data != (FEdgeLoop *)0x0) {
    FMemory::Free(local_198.Loops.AllocatorInstance.Data);
  }
  return bVar4;
}

// DisconnectTriangles @ 143399520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDynamicMeshEditor::DisconnectTriangles
          (FDynamicMeshEditor *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_>
          *param_3,bool param_4)

{
  int *piVar1;
  FSmallListSet *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FDynamicMesh3 *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  uint *puVar18;
  undefined ***pppuVar19;
  longlong *plVar20;
  ushort uVar21;
  ForElementType<FSetElementId> FVar22;
  ForElementType<FSetElementId> FVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_428 [32];
  undefined1 local_3d8;
  uint local_3d4;
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  int local_3c0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_3b8;
  uint local_3a8;
  uint local_3a4;
  int local_3a0;
  uint local_39c;
  FScriptContainerElement *local_398;
  FDynamicMeshEditor *local_390;
  undefined1 local_388 [8];
  ForAnyElementType local_380;
  undefined8 local_378;
  ForAnyElementType local_370;
  undefined8 local_368;
  ForAnyElementType local_360;
  undefined8 local_358;
  bool local_350;
  longlong local_348;
  undefined1 local_340 [8];
  FScriptContainerElement *local_338;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_330;
  uint local_324;
  longlong local_320;
  TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_> *local_318;
  TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *local_310;
  FSmallListSet *local_308;
  uint uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  uint uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  code *local_2d8 [2];
  undefined **local_2c8;
  FDynamicMesh3 *local_2c0;
  uint local_2b8;
  undefined ***local_2b0;
  FScriptContainerElement *local_2a8;
  int local_2a0;
  uint *local_298;
  uint *local_290;
  uint *local_288;
  int *local_280;
  BaseValueIterator local_268;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_238;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  uVar13 = param_2->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  iVar12 = *piVar1;
  local_390 = this;
  local_330 = param_1;
  local_318 = param_3;
  local_310 = param_2;
  if (iVar12 < (int)uVar13) {
    iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x48,8,uVar13 - iVar12,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax
                       );
    DefaultConstructItems<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar11 * 0x48,uVar13 - iVar12);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar12) {
      uVar25 = iVar12 - uVar13;
      if (((int)(uVar25 | uVar13) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if (uVar25 != 0) {
        TArray<UE::Geometry::FDynamicMeshEditor::FLoopPairSet,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(param_3,uVar13,uVar25);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
      }
    }
  }
  local_238.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_3d0.Data = (FScriptContainerElement *)0x0;
  local_3c8 = 0;
  local_238.Elements._0_8_ = 0;
  local_238.Elements._8_8_ = 0;
  local_238.Elements._32_8_ = 0;
  local_238.Elements._40_4_ = 0;
  local_238.Elements._44_4_ = 0x80;
  local_238.Elements._48_4_ = 0xffffffff;
  local_238.Elements._52_4_ = 0;
  local_238.HashSize = 0;
  local_39c = 0;
  if (0 < (int)uVar13) {
    local_348 = 0;
    local_320 = (longlong)(int)uVar13;
    do {
      lVar17 = local_348;
      uVar13 = local_39c;
      uVar24 = ~local_39c;
      uVar25 = 0;
      if ((int)local_39c < param_2->ArrayNum) {
        uVar25 = uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar28 = (param_2->AllocatorInstance).Data + lVar17 * 0x40;
      uVar25 = 0;
      if ((int)uVar13 < param_3->ArrayNum) {
        uVar25 = uVar24 >> 0x1f;
      }
      local_338 = pFVar28;
      if ((uVar25 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar27 = (param_3->AllocatorInstance).Data + lVar17 * 0x48;
      local_398 = pFVar27;
      if (pFVar27 != pFVar28 + 8) {
        iVar12 = *(int *)(pFVar28 + 0x10);
        pFVar4 = pFVar27 + 0xc;
        pFVar3 = *(FScriptContainerElement **)&pFVar28[8].field_0x0;
        iVar11 = *(int *)pFVar4;
        *(int *)&pFVar27[8].field_0x0 = iVar12;
        if ((iVar12 == 0) && (iVar11 == 0)) {
          *(int *)pFVar4 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar12,iVar11,(ForAnyElementType *)pFVar27,iVar12,(int *)pFVar4);
          if (iVar12 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar27->field_0x0,pFVar3,(longlong)iVar12 << 2);
          }
        }
      }
      pFVar3 = pFVar27 + 0x10;
      if (pFVar3 != pFVar28 + 0x18) {
        iVar12 = *(int *)(pFVar28 + 0x20);
        pFVar7 = pFVar27 + 0x1c;
        pFVar4 = *(FScriptContainerElement **)&pFVar28[0x18].field_0x0;
        iVar11 = *(int *)pFVar7;
        *(int *)&pFVar27[0x18].field_0x0 = iVar12;
        if ((iVar12 == 0) && (iVar11 == 0)) {
          *(int *)pFVar7 = 0;
          pFVar27 = local_398;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar12,iVar11,(ForAnyElementType *)pFVar3,iVar12,(int *)pFVar7);
          pFVar27 = local_398;
          if (iVar12 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,pFVar4,(longlong)iVar12 << 2);
            pFVar27 = local_398;
          }
        }
      }
      uVar25 = *(uint *)(pFVar28 + 0x10);
      uVar24 = 0;
      local_3d8 = 0;
      local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.ArrayNum = 0;
      local_3b8.ArrayMax = 0;
      local_3a8 = uVar25;
      if ((int)uVar25 < 1) {
        local_3d8 = 0;
        if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
        }
      }
      else {
        iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar25,&local_3b8.AllocatorInstance,&local_3b8.ArrayNum,
                            &local_3b8.ArrayMax);
        memset(local_3b8.AllocatorInstance.Data + (longlong)iVar12 * 4,0,(longlong)(int)uVar25 * 4);
        lVar26 = 0;
        do {
          pFVar28 = local_338;
          uVar25 = ~uVar24 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar24 < *(int *)(local_338 + 0x10)) {
            uVar13 = uVar25;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          lVar17 = local_3c8;
          local_3d4 = *(uint *)(*(longlong *)(pFVar28 + 8) + lVar26 * 4);
          if (local_238.Elements._8_4_ != local_238.Elements._52_4_) {
            FVar22 = (ForElementType<FSetElementId>)&local_238.Hash;
            if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar22 = local_238.Hash.SecondaryData;
            }
            uVar13 = *(uint *)((longlong)FVar22 +
                              (ulonglong)(local_238.HashSize - 1U & local_3d4) * 4);
            while (uVar13 != 0xffffffff) {
              puVar18 = (uint *)((longlong)(int)uVar13 * 0x10 + local_238.Elements._0_8_);
              if (*puVar18 == local_3d4) {
                puVar16 = puVar18 + 1;
                if (puVar18 == (uint *)0x0) {
                  puVar16 = (uint *)0x0;
                }
                if (puVar16 != (uint *)0x0) {
                  uVar13 = *puVar16;
                  if ((-1 < (int)uVar13) &&
                     (pFVar5 = local_390->Mesh,
                     (int)uVar13 <
                     (int)((pFVar5->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                          (pFVar5->VertexRefCounts).RefCounts.CurBlockUsed))) {
                    uVar21 = *(ushort *)
                              (*(longlong *)
                                ((pFVar5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 2);
                    if (uVar21 == 0xffff) {
                      uVar21 = 0;
                    }
                    if (1 < uVar21) {
                      uVar14 = 0;
                      if ((int)uVar24 < local_3b8.ArrayNum) {
                        uVar14 = uVar25;
                      }
                      if ((uVar14 == 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar6 = (code *)swi(3);
                        uVar10 = (*pcVar6)();
                        return (bool)uVar10;
                      }
                      goto LAB_14339a201;
                    }
                  }
                  uVar14 = 0;
                  if ((int)uVar24 < *(int *)&pFVar27[8].field_0x0) {
                    uVar14 = uVar25;
                  }
                  if ((uVar14 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  *(uint *)(*(FScriptContainerElement **)&pFVar27->field_0x0 + lVar26 * 4) = uVar13;
                  uVar13 = 0;
                  if ((int)uVar24 < *(int *)&pFVar27[0x18].field_0x0) {
                    uVar13 = uVar25;
                  }
                  if ((uVar13 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  lVar17 = (longlong)(int)local_3a8;
                  uVar13 = local_3a8;
                  if (uVar24 != 0) {
                    lVar17 = lVar26;
                    uVar13 = uVar24;
                  }
                  *(undefined4 *)
                   (*(FScriptContainerElement **)&pFVar27[0x10].field_0x0 + lVar26 * 4) = 0xffffffff
                  ;
                  uVar14 = 0;
                  if ((int)(uVar13 - 1) < *(int *)&pFVar27[0x18].field_0x0) {
                    uVar14 = ~(uVar13 - 1) >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  uVar13 = local_3d4;
                  *(undefined4 *)
                   (*(FScriptContainerElement **)&pFVar27[0x10].field_0x0 + lVar17 * 4 + -4) =
                       0xffffffff;
                  uVar14 = 0;
                  if ((int)uVar24 < local_3b8.ArrayNum) {
                    uVar14 = uVar25;
                  }
                  if ((uVar14 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  goto LAB_14339a201;
                }
                break;
              }
              uVar13 = puVar18[2];
            }
          }
          uVar13 = local_3c8._4_4_;
          local_3c8 = (ulonglong)local_3c8._4_4_ << 0x20;
          if ((lVar17 < 0) && (uVar13 != 0)) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_3d0,0,(int *)((longlong)&local_3c8 + 4));
          }
          uVar13 = local_3d4;
          iVar12 = 0;
          local_2c8 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
          ;
          local_2b0 = (undefined ***)0x0;
          local_2d8[0] = Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                         ::Call;
          local_2c0 = local_390->Mesh;
          local_1e8._0_8_ = 0;
          local_1c0 = (longlong *)0x0;
          local_1b8 = (FSmallListSet *)0x0;
          pFVar2 = &local_2c0->VertexEdgeLists;
          uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
          local_190 = (FSmallListSet *)0x0;
          uStack_188 = uStack_188 & 0xffffffff00000000;
          local_2b8 = local_3d4;
          FSmallListSet::BaseValueIterator::BaseValueIterator(&local_268,pFVar2,local_3d4,false);
          local_1b8 = local_268.ListSet;
          uStack_1b0._0_4_ = local_268.ListIndex;
          uStack_1b0._4_4_ = local_268.block_ptr;
          local_198 = local_268.cur_value;
          uStack_194 = local_268._36_4_;
          local_1a8 = local_268.N;
          iStack_1a4 = local_268.iEnd;
          iStack_1a0 = local_268.iCur;
          iStack_19c = local_268.cur_ptr;
          uStack_2fc = 0xffffffff;
          uStack_188 = CONCAT44(0xffffffff,uVar13);
          local_2f8 = 0;
          uStack_2f0 = 0xffffffffffffffff;
          local_180 = (ulonglong)uStack_2f4 << 0x20;
          local_170 = local_2e8;
          uStack_178 = 0xffffffffffffffff;
          local_308 = pFVar2;
          uStack_300 = uVar13;
          local_190 = pFVar2;
          TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                    ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
                     (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_2d8);
          if (local_2d8[0] != (code *)0x0) {
            pppuVar19 = &local_2c8;
            if (local_2b0 != (undefined ***)0x0) {
              pppuVar19 = local_2b0;
            }
            (*(code *)(*pppuVar19)[2])();
          }
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                    ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
                     (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
                     (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                    ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
                     (ValueIterator *)&local_190,(ValueIterator *)&local_190,
                     (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
          pTVar8 = local_330;
          while ((((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
                  (local_168._24_4_ != local_d8._24_4_)) || (local_168._28_4_ != local_d8._28_4_)))
          {
            local_3c0[0] = (int)local_168._88_8_;
            if (*(int *)&(pTVar8->Elements).field_0x8 == *(int *)&(pTVar8->Elements).field_0x34) {
LAB_143399e88:
              iVar12 = iVar12 + 1;
              TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                        ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_168);
            }
            else {
              FVar22 = (pTVar8->Hash).SecondaryData;
              FVar23 = (ForElementType<FSetElementId>)&pTVar8->Hash;
              if (FVar22 != (ForElementType<FSetElementId>)0x0) {
                FVar23 = FVar22;
              }
              iVar11 = *(int *)((longlong)FVar23 +
                               ((ulonglong)(pTVar8->HashSize - 1) & local_168._88_8_ & 0xffffffff) *
                               4);
              if (iVar11 == -1) goto LAB_143399e88;
              do {
                if (*(int *)(*(longlong *)&pTVar8->Elements + (longlong)iVar11 * 0xc) ==
                    local_3c0[0]) {
                  if (((local_3d0.Data <= (FScriptContainerElement *)local_3c0) &&
                      ((FScriptContainerElement *)local_3c0 <
                       local_3d0.Data + (longlong)(int)local_3c8._4_4_ * 4)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  iVar11 = (int)local_3c8;
                  if ((int)local_3c8 == local_3c8._4_4_) {
                    iVar11 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_3d0,(int *)((longlong)&local_3c8 + 4));
                  }
                  local_3c8 = CONCAT44(local_3c8._4_4_,iVar11 + 1);
                  *(int *)(local_3d0.Data + (longlong)iVar11 * 4) = local_3c0[0];
                  goto LAB_143399e88;
                }
                iVar11 = *(int *)(*(longlong *)&pTVar8->Elements + 4 + (longlong)iVar11 * 0xc);
              } while (iVar11 != -1);
              iVar12 = iVar12 + 1;
              TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                        ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_168);
            }
          }
          if (local_d8._96_8_ != 0) {
            plVar20 = (longlong *)(local_d8 + 0x70);
            if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
              plVar20 = (longlong *)local_d8._136_8_;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          if (local_168._96_8_ != 0) {
            plVar20 = (longlong *)(local_168 + 0x70);
            if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
              plVar20 = (longlong *)local_168._136_8_;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          if (local_1e8._0_8_ != 0) {
            plVar20 = (longlong *)(local_1e8 + 0x10);
            if (local_1c0 != (longlong *)0x0) {
              plVar20 = local_1c0;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          iVar11 = (int)local_3c8;
          if ((int)local_3c8 < iVar12) {
            pFVar5 = local_390->Mesh;
            pcVar6 = *(code **)(pFVar5->_padding_ + 0x48);
            local_2a8 = local_3d0.Data;
            if (((int)local_3c8 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            local_2a0 = iVar11;
            iVar12 = (*pcVar6)(pFVar5,local_3d4,&local_2a8);
            if ((iVar12 != 0) &&
               (bVar9 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_3787275554290400515>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                                   ,0x2fd,"MeshResult == EMeshResult::Ok"), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            local_3a4 = local_324;
            local_298 = &local_3d4;
            local_290 = &local_3a4;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      (&local_238,(TPairInitializer<int_const_&,int_const_&> *)local_340,
                       (bool *)&local_298);
            uVar13 = local_3a4;
            uVar14 = 0;
            if ((int)uVar24 < local_3b8.ArrayNum) {
              uVar14 = uVar25;
            }
            pFVar27 = local_398;
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar27 = local_398, bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
          }
          else {
            if (!param_4) {
              bVar9 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3787275554290400494>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                                 ,0x312,"false");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              goto LAB_14339a37c;
            }
            local_3a0 = FDynamicMesh3::AppendVertex(local_390->Mesh,local_390->Mesh,local_3d4);
            local_288 = &local_3d4;
            local_280 = &local_3a0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      (&local_238,(TPairInitializer<int_const_&,int_const_&> *)(local_340 + 4),
                       (bool *)&local_288);
            pFVar27 = local_398;
            iVar12 = local_3a0;
            uVar13 = 0;
            if ((int)uVar24 < *(int *)&local_398[8].field_0x0) {
              uVar13 = uVar25;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            *(int *)(*(FScriptContainerElement **)&pFVar27->field_0x0 + lVar26 * 4) = iVar12;
            uVar14 = 0;
            uVar13 = uVar14;
            if ((int)uVar24 < *(int *)&pFVar27[0x18].field_0x0) {
              uVar13 = uVar25;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            *(undefined4 *)(*(FScriptContainerElement **)&pFVar27[0x10].field_0x0 + lVar26 * 4) =
                 0xffffffff;
            lVar17 = lVar26;
            uVar13 = uVar24;
            if (uVar24 == 0) {
              lVar17 = (longlong)(int)local_3a8;
              uVar13 = local_3a8;
            }
            uVar15 = uVar14;
            if ((int)(uVar13 - 1) < *(int *)&pFVar27[0x18].field_0x0) {
              uVar15 = ~(uVar13 - 1) >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            uVar13 = local_3d4;
            *(undefined4 *)(*(FScriptContainerElement **)&pFVar27[0x10].field_0x0 + lVar17 * 4 + -4)
                 = 0xffffffff;
            if ((int)uVar24 < local_3b8.ArrayNum) {
              uVar14 = uVar25;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            local_3d8 = 1;
          }
LAB_14339a201:
          uVar24 = uVar24 + 1;
          *(uint *)(local_3b8.AllocatorInstance.Data + lVar26 * 4) = uVar13;
          lVar26 = lVar26 + 1;
          lVar17 = local_348;
          uVar13 = local_39c;
        } while (lVar26 < (int)local_3a8);
      }
      local_380.Data = (FScriptContainerElement *)0x0;
      local_378._0_4_ = 0;
      local_378._4_4_ = 0;
      local_370.Data = (FScriptContainerElement *)0x0;
      local_388 = (undefined1  [8])local_390->Mesh;
      local_368._0_4_ = 0;
      local_368._4_4_ = 0;
      local_360.Data = (FScriptContainerElement *)0x0;
      local_358._0_4_ = 0;
      local_358._4_4_ = 0;
      local_350 = false;
      bVar9 = FEdgeLoop::InitializeFromVertices((FEdgeLoop *)local_388,&local_3b8,false);
      if (!bVar9) {
        bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3787275554290400488>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                           ,0x318,"InnerLoop.InitializeFromVertices(Mesh, NewVertexLoop, false)");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        if (local_360.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data);
        }
        if (local_370.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data);
        }
        if (local_380.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data);
        }
LAB_14339a37c:
        if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.AllocatorInstance.Data);
        }
        bVar9 = false;
        goto LAB_14339a39f;
      }
      pFVar28 = pFVar27 + 0x20;
      if (pFVar28 != (FScriptContainerElement *)(local_388 + 8)) {
        if (*(FScriptContainerElement **)&pFVar28->field_0x0 != (FScriptContainerElement *)0x0) {
          FMemory::Free(*(FScriptContainerElement **)&pFVar28->field_0x0);
        }
        *(FScriptContainerElement **)&pFVar28->field_0x0 = local_380.Data;
        local_380.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar27[0x28].field_0x0 = (int)local_378;
        *(int *)(pFVar27 + 0x2c) = local_378._4_4_;
        local_378._0_4_ = 0;
        local_378._4_4_ = 0;
      }
      pFVar28 = pFVar27 + 0x30;
      if (pFVar28 != (FScriptContainerElement *)(local_388 + 0x18)) {
        if (*(FScriptContainerElement **)&pFVar28->field_0x0 != (FScriptContainerElement *)0x0) {
          FMemory::Free(*(FScriptContainerElement **)&pFVar28->field_0x0);
        }
        *(FScriptContainerElement **)&pFVar28->field_0x0 = local_370.Data;
        local_370.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar27[0x38].field_0x0 = (int)local_368;
        *(int *)(pFVar27 + 0x3c) = local_368._4_4_;
        local_368._0_4_ = 0;
        local_368._4_4_ = 0;
      }
      pFVar27[0x40].field_0x0 = local_3d8;
      if (local_360.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data);
      }
      if (local_370.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data);
      }
      if (local_380.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data);
      }
      if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.AllocatorInstance.Data);
      }
      local_39c = uVar13 + 1;
      local_348 = lVar17 + 1;
      param_3 = local_318;
      param_2 = local_310;
    } while (local_348 < local_320);
  }
  bVar9 = true;
LAB_14339a39f:
  local_238.HashSize = 0;
  if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_238.Elements);
  if (local_3d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data);
  }
  return bVar9;
}

// DisconnectTrianglesAlongEdges @ 14339a480

bool __thiscall
UE::Geometry::FDynamicMeshEditor::DisconnectTrianglesAlongEdges
          (FDynamicMeshEditor *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  EMeshResult EVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  uint *puVar25;
  int iVar26;
  int *piVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 local_res20 [8];
  uint local_218 [2];
  ForAnyElementType local_210;
  undefined8 local_208;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [4];
  undefined4 local_1ec;
  undefined8 local_1e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1e0;
  ulonglong local_1d0;
  undefined1 local_1c8 [4];
  undefined4 local_1c4;
  undefined1 local_1c0 [4];
  undefined1 local_1bc [20];
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  TArray<int,TSizedDefaultAllocator<32>_> local_198;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  int local_170;
  TArray<bool,TSizedDefaultAllocator<32>_> local_168;
  FIndex3i_u_0 local_158;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  <lambda_1> local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FScriptContainerElement *local_c8;
  int local_c0;
  FScriptContainerElement *local_b8;
  int local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a8;
  undefined8 uStack_a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_78;
  undefined8 uStack_70;
  TBitArray<FDefaultBitArrayAllocator> *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  iStack_140 = 0;
  puVar23 = &(param_1->Elements).field_0x10;
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_13c = 1;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_128 = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208 = 0;
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8 = 0;
  iVar11 = *(int *)&(param_1->Elements).field_0x28;
  iStack_12c = local_128;
  if (iVar11 != 0) {
    puVar25 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar23;
    }
    uVar13 = *puVar25;
    local_128 = 0;
    while (uVar13 == 0) {
      lVar16 = (longlong)iStack_140;
      local_128 = local_128 + 0x20;
      iStack_140 = iStack_140 + 1;
      iStack_12c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140) goto LAB_14339a55d;
      uVar13 = puVar25[lVar16 + 1];
    }
    uStack_13c = -uVar13 & uVar13;
    uVar17 = (ulonglong)uStack_13c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_118 = (int)lVar16;
    iStack_12c = local_128 + -1 + local_118;
    if (iVar11 < iStack_12c) {
      iStack_12c = iVar11;
    }
  }
LAB_14339a55d:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  bVar15 = (byte)uVar13 & 0x1f;
  iStack_120 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar21 = uVar13 & 0xffffffe0;
  iVar26 = (int)uVar13 >> 5;
  local_1bc._8_4_ = 1 << bVar15;
  uVar20 = -1 << bVar15;
  uStack_130 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_13c,iStack_140);
  TStack_f0.CurrentBitIndex = iStack_12c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = iStack_12c;
  TStack_f0.BaseBitIndex = local_128;
  uStack_d0 = CONCAT44(uStack_11c,iStack_120);
  local_1bc._4_4_ = iVar26;
  local_1bc._12_8_ = puVar23;
  local_1a8 = uVar20;
  uStack_1a4 = uVar13;
  uStack_1a0 = uVar21;
  local_148 = param_1;
  local_138 = puVar23;
  iStack_124 = iStack_12c;
  local_f8 = param_1;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar23;
  if ((((int)uVar13 < 0) || (iVar11 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  uVar2 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar2) {
    puVar24 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar23;
    }
    uVar20 = uVar20 & *(uint *)(puVar24 + (longlong)iVar26 * 4);
    while (uVar20 == 0) {
      uStack_1a0 = uVar21 + 0x20;
      local_1bc._4_4_ = iVar26 + 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1bc._4_4_)
      goto LAB_14339a698;
      uVar20 = *(uint *)(puVar24 + (longlong)iVar26 * 4 + 4);
      local_1a8 = 0xffffffff;
      uVar21 = uStack_1a0;
      iVar26 = local_1bc._4_4_;
    }
    local_1bc._8_4_ = -uVar20 & uVar20;
    uVar17 = (ulonglong)(uint)local_1bc._8_4_ * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_114 = (int)lVar16;
    uStack_1a4 = local_114 + -1 + uVar21;
    if ((int)uVar2 < (int)uStack_1a4) {
LAB_14339a698:
      uStack_1a4 = uVar2;
    }
  }
  uStack_a0 = CONCAT44(local_1bc._8_4_,local_1bc._4_4_);
  uStack_90 = CONCAT44(uStack_1a4,local_1a8);
  uStack_88 = CONCAT44(uStack_19c,uStack_1a0);
  local_80 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  pTStack_98 = (TBitArray<FDefaultBitArrayAllocator> *)local_1bc._12_8_;
  uStack_50 = CONCAT44(uStack_7c,local_80);
  local_68 = (TBitArray<FDefaultBitArrayAllocator> *)local_1bc._12_8_;
  local_a8 = param_1;
  local_78 = param_1;
  uStack_70 = uStack_a0;
  uStack_60 = uStack_90;
  local_58 = uStack_88;
  do {
    pTVar7 = local_f8;
    if (*(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34 !=
        (int)uStack_d0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_f0.CurrentBitIndex == uStack_60._4_4_) && (TStack_f0.Array == local_68)) &&
       (pTVar7 == local_78)) {
      puVar23 = local_1f0;
      lVar16 = 2;
      do {
        puVar1 = (undefined8 *)(puVar23 + -0x10);
        puVar23 = puVar23 + -0x10;
        lVar16 = lVar16 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar16 != 0);
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      return true;
    }
    uVar13 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_f0.CurrentBitIndex * 0xc);
    local_1d0 = CONCAT44(local_1d0._4_4_,uVar13);
    uVar28 = (ulonglong)(uVar13 & 0x1ff);
    lVar16 = (ulonglong)(uVar13 >> 9) * 8;
    uVar17 = *(ulonglong *)
              (*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + lVar16) +
              uVar28 * 0x10);
    local_1e8 = uVar17;
    if ((longlong)local_208 < 0) {
      local_208 = (ulonglong)local_208._4_4_ << 0x20;
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_210,0,(int *)((longlong)&local_208 + 4));
    }
    else {
      local_208 = (ulonglong)local_208._4_4_ << 0x20;
    }
    bVar8 = (longlong)local_1f8 < 0;
    local_1f8 = local_1f8 & 0xffffffff00000000;
    uVar29 = uVar17;
    if (bVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_200,0,(int *)((longlong)&local_1f8 + 4));
      uVar29 = uVar17 & 0xffffffff;
    }
    lVar18 = 0;
    if (*(int *)(*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + lVar16) + 0xc +
                uVar28 * 0x10) == -1) {
      do {
        SplitBowtiesInternal
                  (this,*(int *)((longlong)&local_1e8 + lVar18 * 4),&local_198,&local_1e0,&local_168
                   ,param_2);
        lVar18 = lVar18 + 1;
      } while (lVar18 < 2);
    }
    else {
      bVar8 = (longlong)local_208 < 0;
      local_208 = local_208 & 0xffffffff00000000;
      if (bVar8) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_210,0,(int *)((longlong)&local_208 + 4));
      }
      uVar19 = *(ulonglong *)
                (*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + lVar16) + 8 +
                uVar28 * 0x10);
      uVar20 = (uint)uVar19;
      local_218[0] = uVar20;
      iVar11 = FDynamicMesh3::GetVtxEdgeCount(this->Mesh,(int)uVar17);
      uVar19 = uVar19 >> 0x20;
      while( true ) {
        if (((local_210.Data <= (FScriptContainerElement *)local_218) &&
            ((FScriptContainerElement *)local_218 <
             local_210.Data + (longlong)(int)local_208._4_4_ * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        iVar26 = (int)local_208;
        if ((int)local_208 == local_208._4_4_) {
          iVar26 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_210,(int *)((longlong)&local_208 + 4));
        }
        local_208 = CONCAT44(local_208._4_4_,iVar26 + 1);
        *(uint *)(local_210.Data + (longlong)iVar26 * 4) = local_218[0];
        if (iVar11 < iVar26 + 1) break;
        local_108._12_4_ = uStack_17c;
        local_108.EID = uVar13;
        local_188 = param_1;
        uStack_180 = uVar13;
        local_108.EdgeIDs = param_1;
        FindNextAdjacentTriangleAroundVtx<__UE::Geometry::FDynamicMeshEditor::DisconnectTrianglesAlongEdges_::__l2::<lambda_1>::operator()_::__l4::<lambda_1>_>
                  ((FIndex3i *)&local_158._s_0,this->Mesh,(int)uVar29,local_218[0],(int)uVar19,
                   &local_108);
        if (local_158._s_0.A == 0xffffffff) {
          bVar8 = true;
          goto LAB_14339a9fe;
        }
        if (local_158._s_0.A == uVar20) goto LAB_14339a9fb;
        uVar19 = (ulonglong)local_218[0];
        local_218[0] = local_158._s_0.A;
      }
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3787275554290400392>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                         ,0x378,"false");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
LAB_14339a9fb:
      bVar8 = false;
LAB_14339a9fe:
      iVar11 = local_1e8._4_4_;
      if ((longlong)local_1f8 < 0) {
        local_1f8 = (ulonglong)local_1f8._4_4_ << 0x20;
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_200,0,(int *)((longlong)&local_1f8 + 4));
      }
      else {
        local_1f8 = (ulonglong)local_1f8._4_4_ << 0x20;
      }
      uVar17 = *(ulonglong *)
                (*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + lVar16) + 8 +
                uVar28 * 0x10);
      uVar20 = (uint)uVar17;
      local_218[0] = uVar20;
      iVar26 = FDynamicMesh3::GetVtxEdgeCount(this->Mesh,iVar11);
      uVar13 = (uint)local_1d0;
      pcVar22 = (char *)(uVar17 >> 0x20);
      while( true ) {
        if (((local_200.Data <= (FScriptContainerElement *)local_218) &&
            ((FScriptContainerElement *)local_218 <
             local_200.Data + (longlong)(int)local_1f8._4_4_ * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        iVar12 = (int)local_1f8;
        if ((int)local_1f8 == local_1f8._4_4_) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_200,(int *)((longlong)&local_1f8 + 4));
        }
        local_1f8 = CONCAT44(local_1f8._4_4_,iVar12 + 1);
        *(uint *)(local_200.Data + (longlong)iVar12 * 4) = local_218[0];
        if (iVar26 < iVar12 + 1) break;
        uStack_180 = uVar13;
        local_108._12_4_ = uStack_17c;
        local_108.EID = uVar13;
        local_188 = param_1;
        local_108.EdgeIDs = param_1;
        FindNextAdjacentTriangleAroundVtx<__UE::Geometry::FDynamicMeshEditor::DisconnectTrianglesAlongEdges_::__l2::<lambda_1>::operator()_::__l4::<lambda_1>_>
                  ((FIndex3i *)&local_158._s_0,this->Mesh,iVar11,local_218[0],(int)pcVar22,
                   &local_108);
        if (local_158._s_0.A == 0xffffffff) {
          bVar10 = true;
          goto LAB_14339ab9f;
        }
        if (local_158._s_0.A == uVar20) goto LAB_14339ab9d;
        pcVar22 = (char *)(ulonglong)local_218[0];
        local_218[0] = local_158._s_0.A;
      }
      pcVar22 = "false";
      bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3787275554290400392>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                          ,0x378,"false");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
LAB_14339ab9d:
      bVar10 = false;
LAB_14339ab9f:
      uVar17 = local_1e8;
      iVar11 = (int)local_208;
      if (bVar8) {
        pFVar3 = this->Mesh;
        pcVar5 = *(code **)(pFVar3->_padding_ + 0x48);
        local_178 = local_210.Data;
        if (((int)local_208 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        local_170 = iVar11;
        iVar11 = (*pcVar5)(pFVar3,uVar17 & 0xffffffff,&local_178,local_1f0);
        if ((iVar11 == 0) && (param_2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
          pFVar4 = (param_2->AllocatorInstance).Data;
          if ((pFVar4 <= (FScriptContainerElement *)&local_1ec) &&
             (((FScriptContainerElement *)&local_1ec < pFVar4 + (longlong)param_2->ArrayMax * 4 &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          iVar11 = param_2->ArrayNum;
          if (iVar11 == param_2->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar11 + 1;
          *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_1ec;
        }
        if (bVar10) goto LAB_14339b2fb;
      }
      else if (bVar10) {
LAB_14339b2fb:
        pFVar3 = this->Mesh;
        iVar11 = (int)local_1f8;
        uVar6 = local_1e8._4_4_;
        pcVar5 = *(code **)(pFVar3->_padding_ + 0x48);
        local_178 = local_200.Data;
        if (((int)local_1f8 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        local_170 = iVar11;
        iVar11 = (*pcVar5)(pFVar3,uVar6,&local_178,local_1f0);
        if ((iVar11 == 0) && (param_2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
          pFVar4 = (param_2->AllocatorInstance).Data;
          if ((pFVar4 <= (FScriptContainerElement *)&local_1ec) &&
             (((FScriptContainerElement *)&local_1ec < pFVar4 + (longlong)param_2->ArrayMax * 4 &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          iVar11 = param_2->ArrayNum;
          if (iVar11 == param_2->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar11 + 1;
          *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_1ec;
        }
      }
      else {
        pFVar3 = this->Mesh;
        uVar20 = ((int)local_208 + 1) / 2;
        uVar13 = 0;
        if ((int)uVar20 < (int)local_208) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if (uVar13 == 0) {
          pcVar22 = (char *)(longlong)(int)uVar20;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        uVar21 = uVar20 - 1;
        piVar27 = (int *)(longlong)(int)uVar20;
        iVar11 = *(int *)(local_210.Data + (longlong)piVar27 * 4);
        uVar13 = 0;
        if ((int)uVar21 < (int)local_208) {
          uVar13 = ~uVar21 >> 0x1f;
        }
        if (uVar13 == 0) {
          pcVar22 = (char *)(longlong)(int)uVar21;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        uVar13 = FDynamicMesh3::FindEdgeFromTriPair
                           (pFVar3,*(int *)(local_210.Data + (longlong)(int)uVar21 * 4),iVar11);
        if (uVar13 == 0xffffffff) {
          pcVar22 = "OtherSplitEdge != IndexConstants::InvalidID";
          bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3787275554290400311>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                             ,0x3c9,"OtherSplitEdge != IndexConstants::InvalidID");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          uVar28 = 0xffffffff;
        }
        else {
          uVar17 = *(ulonglong *)
                    (*(longlong *)
                      ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 0x10);
          uVar28 = uVar17 >> 0x20;
          if ((uint)uVar17 != (uint)local_1e8) {
            uVar13 = 0xffffffff;
            if ((uint)(uVar17 >> 0x20) == (uint)local_1e8) {
              uVar13 = (uint)uVar17;
            }
            uVar28 = (ulonglong)uVar13;
          }
        }
        uVar17 = local_1e8;
        local_1d0 = uVar28;
        if ((int)local_208 < (int)uVar20) {
          pcVar22 = (char *)&local_208;
          iVar26 = uVar20 - (int)local_208;
          iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar26,&local_210,(int *)pcVar22,(int *)((longlong)&local_208 + 4)
                             );
          memset(local_210.Data + (longlong)iVar11 * 4,0,(longlong)iVar26 << 2);
LAB_14339ae13:
          iVar11 = (int)local_208;
        }
        else {
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
          iVar11 = (int)local_208;
          if ((int)uVar20 < (int)local_208) {
            iVar26 = (int)local_208 - uVar20;
            if (-1 < (char)((byte)(~uVar20 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18))) {
              pcVar22 = (char *)piVar27;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              iVar11 = (int)local_208;
            }
            if (iVar26 != 0) {
              iVar12 = (iVar11 - iVar26) - uVar20;
              if (iVar12 != 0) {
                memmove(local_210.Data + (longlong)piVar27 * 4,
                        local_210.Data + (longlong)piVar27 * 4 + (longlong)iVar26 * 4,
                        (longlong)iVar12 << 2);
                iVar11 = (int)local_208;
              }
              pcVar22 = (char *)((longlong)&local_208 + 4);
              local_208 = CONCAT44(local_208._4_4_,iVar11 - iVar26);
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_210,iVar11 - iVar26,(int *)pcVar22);
              goto LAB_14339ae13;
            }
          }
        }
        pFVar3 = this->Mesh;
        pcVar5 = *(code **)(pFVar3->_padding_ + 0x48);
        local_c8 = local_210.Data;
        if ((iVar11 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        local_c0 = iVar11;
        iVar11 = (*pcVar5)(pFVar3,uVar17 & 0xffffffff,&local_c8,local_1c8,pcVar22);
        if ((iVar11 == 0) && (param_2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
          pFVar4 = (param_2->AllocatorInstance).Data;
          if ((pFVar4 <= (FScriptContainerElement *)&local_1c4) &&
             (((FScriptContainerElement *)&local_1c4 < pFVar4 + (longlong)param_2->ArrayMax * 4 &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          iVar11 = param_2->ArrayNum;
          if (iVar11 == param_2->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar11 + 1;
          *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_1c4;
        }
        iVar11 = (int)uVar28;
        if (iVar11 == -1) {
          bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3787275554290400302>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                             ,0x3d2,"PotentialBowtieVID != IndexConstants::InvalidID");
          if (bVar8) {
code_r0x00014339afc2:
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        else {
          bVar8 = FDynamicMesh3::IsBowtieVertex(this->Mesh,iVar11);
          if (bVar8) {
            pcVar22 = (char *)&local_168;
            EVar14 = FDynamicMesh3::
                     GetVtxContiguousTriangles<TArray<int,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
                               (this->Mesh,iVar11,&local_198,&local_1e0,&local_168);
            if (EVar14 == Ok) {
              uVar17 = local_1e0._8_8_ & 0xffffffff;
              if (1 < local_1e0.ArrayNum) {
                uVar13 = 1;
                lVar16 = 1;
                iVar11 = *(int *)local_1e0.AllocatorInstance.Data;
                do {
                  pFVar3 = this->Mesh;
                  pcVar5 = *(code **)(pFVar3->_padding_ + 0x48);
                  uVar20 = 0;
                  if ((int)uVar13 < (int)uVar17) {
                    uVar20 = ~uVar13 >> 0x1f;
                  }
                  if (uVar20 == 0) {
                    pcVar22 = (char *)(longlong)(int)uVar13;
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar8) {
                      pcVar5 = (code *)swi(3);
                      uVar9 = (*pcVar5)();
                      return (bool)uVar9;
                    }
                  }
                  lVar18 = lVar16 * 4;
                  local_b0 = *(int *)(local_1e0.AllocatorInstance.Data + lVar18);
                  local_b8 = local_198.AllocatorInstance.Data + (longlong)iVar11 * 4;
                  if ((local_b0 < 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ArrayNum >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xfe,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    uVar9 = (*pcVar5)();
                    return (bool)uVar9;
                  }
                  iVar26 = (*pcVar5)(pFVar3,local_1d0 & 0xffffffff,&local_b8,local_1c0,pcVar22);
                  if (iVar26 != 0) {
                    pcVar22 = 
                    "EMeshResult::Ok == Mesh->SplitVertex(VertexID, TArrayView<const int>(TrianglesOut.GetData() + GroupStartIdx, ContiguousGroupLengths[GroupIdx]), SplitInfo)"
                    ;
                    bVar8 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_3787275554290400244>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                                       ,0x40c,
                                       "EMeshResult::Ok == Mesh->SplitVertex(VertexID, TArrayView<const int>(TrianglesOut.GetData() + GroupStartIdx, ContiguousGroupLengths[GroupIdx]), SplitInfo)"
                                      );
                    if (bVar8) {
                      pcVar5 = (code *)swi(3);
                      uVar9 = (*pcVar5)();
                      return (bool)uVar9;
                    }
                  }
                  if (param_2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                    pFVar4 = (param_2->AllocatorInstance).Data;
                    if ((pFVar4 <= (FScriptContainerElement *)local_1bc) &&
                       ((FScriptContainerElement *)local_1bc <
                        pFVar4 + (longlong)param_2->ArrayMax * 4)) {
                      pcVar22 = local_1bc;
                      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar8) {
                        pcVar5 = (code *)swi(3);
                        uVar9 = (*pcVar5)();
                        return (bool)uVar9;
                      }
                    }
                    iVar26 = param_2->ArrayNum;
                    if (iVar26 == param_2->ArrayMax) {
                      iVar26 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
                    }
                    param_2->ArrayNum = iVar26 + 1;
                    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar26 * 4) =
                         local_1bc._0_4_;
                  }
                  uVar17 = (ulonglong)local_1e0.ArrayNum;
                  uVar20 = 0;
                  if ((int)uVar13 < local_1e0.ArrayNum) {
                    uVar20 = ~uVar13 >> 0x1f;
                  }
                  if (uVar20 == 0) {
                    pcVar22 = (char *)(longlong)(int)uVar13;
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar8) {
                      pcVar5 = (code *)swi(3);
                      uVar9 = (*pcVar5)();
                      return (bool)uVar9;
                    }
                    uVar17 = local_1e0._8_8_ & 0xffffffff;
                  }
                  uVar13 = uVar13 + 1;
                  lVar16 = lVar16 + 1;
                  iVar11 = iVar11 + *(int *)(local_1e0.AllocatorInstance.Data + lVar18);
                } while ((int)uVar13 < (int)uVar17);
              }
            }
            else {
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3787275554290400251>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                                 ,0x405,
                                 "EMeshResult::Ok == Mesh->GetVtxContiguousTriangles(VertexID, TrianglesOut, ContiguousGroupLengths, GroupIsLoop)"
                                );
              if (bVar8) goto code_r0x00014339afc2;
            }
          }
        }
      }
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
}

// DuplicateTriangles @ 14339bc20

void __thiscall
UE::Geometry::FDynamicMeshEditor::DuplicateTriangles
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FMeshIndexMappings *param_2,FDynamicMeshEditResult *param_3)

{
  int *piVar1;
  uint uVar2;
  FDynamicMesh3 *this_00;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  int local_a8;
  int local_a4;
  int local_a0 [2];
  uint local_98 [2];
  uint local_90;
  undefined8 local_88;
  int local_80;
  FIndex3i_u_0 local_78;
  undefined1 local_68 [8];
  FScriptContainerElement *local_60;
  uint *local_58;
  int *local_50;
  int *local_48;
  uint *local_40;
  
  local_res10 = param_1;
  FDynamicMeshEditResult::Reset(param_3);
  FMeshIndexMappings::Initialize(param_2,this->Mesh);
  local_90 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_90;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_60 = pFVar11 + uVar10 * 4;
  while( true ) {
    pFVar4 = local_60;
    if (param_1->ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar4) {
      return;
    }
    uVar2 = *(uint *)pFVar11;
    this_00 = this->Mesh;
    lVar3 = *(longlong *)
             ((this_00->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8);
    local_88 = *(undefined8 *)(lVar3 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    iVar9 = *(int *)(lVar3 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_80 = iVar9;
    if ((this_00->TriangleGroups).bIsSet == false) {
      iVar8 = -1;
    }
    else {
      iVar7 = FDynamicMesh3::GetTriangleGroup(this_00,uVar2);
      iVar8 = TIndexMap<int>::GetTo(&param_2->GroupMap,iVar7);
      local_a8 = iVar8;
      if (iVar8 == -1) {
        local_a8 = this->Mesh->GroupIDCounter;
        this->Mesh->GroupIDCounter = local_a8 + 1;
        FMeshIndexMappings::SetGroup(param_2,iVar7,local_a8);
        pFVar4 = (param_3->NewGroups).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             pFVar4 + (longlong)(param_3->NewGroups).ArrayMax * 4)) &&
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
        iVar8 = (param_3->NewGroups).ArrayNum;
        piVar1 = &(param_3->NewGroups).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->NewGroups).AllocatorInstance,piVar1);
        }
        (param_3->NewGroups).ArrayNum = iVar8 + 1;
        *(int *)((param_3->NewGroups).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_a8;
        iVar8 = local_a8;
      }
    }
    local_78._s_0.A = FindOrCreateDuplicateVertex(this,(int)local_88,param_2,param_3);
    local_78._s_0.B = FindOrCreateDuplicateVertex(this,local_88._4_4_,param_2,param_3);
    local_78._s_0.C = FindOrCreateDuplicateVertex(this,iVar9,param_2,param_3);
    local_a4 = FDynamicMesh3::AppendTriangle(this->Mesh,(FIndex3i *)&local_78._s_0,iVar8);
    local_58 = local_98;
    local_50 = local_a0;
    local_a0[0] = local_a4;
    local_98[0] = uVar2;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &param_2->TriangleMap,(TPairInitializer<int_const_&,int_const_&> *)local_68,
               (bool *)&local_58);
    local_48 = local_a0;
    local_40 = local_98;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &(param_2->TriangleMap).ReverseMap,
               (TPairInitializer<int_const_&,int_const_&> *)(local_68 + 4),(bool *)&local_48);
    pFVar4 = (param_3->NewTriangles).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_a4) &&
        ((FScriptContainerElement *)&local_a4 <
         pFVar4 + (longlong)(param_3->NewTriangles).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar9 = (param_3->NewTriangles).ArrayNum;
    piVar1 = &(param_3->NewTriangles).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_3->NewTriangles).AllocatorInstance,piVar1);
    }
    (param_3->NewTriangles).ArrayNum = iVar9 + 1;
    *(int *)((param_3->NewTriangles).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_a4;
    CopyAttributes(this,uVar2,local_a4,param_2,param_3);
    uVar10 = (ulonglong)local_90;
    pFVar11 = pFVar11 + 4;
    param_1 = local_res10;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// FindOrCreateDuplicateColor @ 1433a0ab0

int __thiscall
UE::Geometry::FDynamicMeshEditor::FindOrCreateDuplicateColor
          (FDynamicMeshEditor *this,int param_1,FMeshIndexMappings *param_2,
          FDynamicMeshEditResult *param_3)

{
  int *piVar1;
  uint uVar2;
  FDynamicMeshAttributeSet *pFVar3;
  TDynamicMeshOverlay<float,4> *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  int local_28 [4];
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28[0] = TIndexMap<int>::GetTo(&param_2->ColorMap,param_1);
  if (local_28[0] == -1) {
    uVar2 = param_1 * 4;
    pFVar3 = (this->Mesh->AttributeSet).Ptr;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar8 = pFVar3;
    }
    this_00 = (TDynamicMeshOverlay<float,4> *)(pFVar8->ColorLayer).Ptr;
    pFVar4 = (this_00->Elements).Blocks.AllocatorInstance.Data;
    local_18 = *(float *)(*(longlong *)(pFVar4 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
                         (ulonglong)(uVar2 & 0x1ff) * 4);
    local_14 = *(undefined4 *)
                (*(longlong *)(pFVar4 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
                (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
    local_10 = *(undefined4 *)
                (*(longlong *)(pFVar4 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
                (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
    local_c = *(undefined4 *)
               (*(longlong *)(pFVar4 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
               (ulonglong)(uVar2 + 3 & 0x1ff) * 4);
    local_28[0] = TDynamicMeshOverlay<float,4>::AppendElement(this_00,&local_18);
    FMeshIndexMappings::SetColor(param_2,param_1,local_28[0]);
    if (param_3 != (FDynamicMeshEditResult *)0x0) {
      pFVar4 = (param_3->NewColorOverlayElements).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar4 + (longlong)(param_3->NewColorOverlayElements).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = (param_3->NewColorOverlayElements).ArrayNum;
      piVar1 = &(param_3->NewColorOverlayElements).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_3->NewColorOverlayElements).AllocatorInstance,piVar1);
      }
      pFVar4 = (param_3->NewColorOverlayElements).AllocatorInstance.Data;
      (param_3->NewColorOverlayElements).ArrayNum = iVar7 + 1;
      *(int *)(pFVar4 + (longlong)iVar7 * 4) = local_28[0];
    }
  }
  return local_28[0];
}

// FindOrCreateDuplicateGroup @ 1433a0c80

int __thiscall
UE::Geometry::FDynamicMeshEditor::FindOrCreateDuplicateGroup
          (FDynamicMeshEditor *this,int param_1,FMeshIndexMappings *param_2,
          FDynamicMeshEditResult *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_18 [4];
  
  iVar5 = FDynamicMesh3::GetTriangleGroup(this->Mesh,param_1);
  local_18[0] = TIndexMap<int>::GetTo(&param_2->GroupMap,iVar5);
  if (local_18[0] == -1) {
    local_18[0] = this->Mesh->GroupIDCounter;
    this->Mesh->GroupIDCounter = local_18[0] + 1;
    FMeshIndexMappings::SetGroup(param_2,iVar5,local_18[0]);
    pFVar2 = (param_3->NewGroups).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(param_3->NewGroups).ArrayMax * 4))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar5 = (param_3->NewGroups).ArrayNum;
    piVar1 = &(param_3->NewGroups).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_3->NewGroups).AllocatorInstance,piVar1);
    }
    (param_3->NewGroups).ArrayNum = iVar5 + 1;
    *(int *)((param_3->NewGroups).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_18[0];
  }
  return local_18[0];
}

// FindOrCreateDuplicateNormal @ 1433a0db0

int __thiscall
UE::Geometry::FDynamicMeshEditor::FindOrCreateDuplicateNormal
          (FDynamicMeshEditor *this,int param_1,int param_2,FMeshIndexMappings *param_3,
          FDynamicMeshEditResult *param_4)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TDynamicMeshOverlay<float,3> *this_00;
  FDynamicMeshAttributeSet *this_01;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  int local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = FMeshIndexMappings::GetNewNormal(param_3,param_2,param_1);
  if (local_18 == -1) {
    pFVar1 = (this->Mesh->AttributeSet).Ptr;
    this_01 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      this_01 = pFVar1;
    }
    this_00 = (TDynamicMeshOverlay<float,3> *)
              FDynamicMeshAttributeSet::GetNormalLayer(this_01,param_2);
    uVar6 = param_1 * 3;
    pFVar5 = (this_00->Elements).Blocks.AllocatorInstance.Data;
    local_14 = *(float *)(*(longlong *)(pFVar5 + (ulonglong)(uVar6 >> 9) * 8) +
                         (ulonglong)(uVar6 & 0x1ff) * 4);
    local_10 = *(undefined4 *)
                (*(longlong *)(pFVar5 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
    local_c = *(undefined4 *)
               (*(longlong *)(pFVar5 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
               (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
    local_18 = TDynamicMeshOverlay<float,3>::AppendElement(this_00,&local_14);
    FMeshIndexMappings::SetNormal(param_3,param_2,param_1,local_18);
    if (param_4 != (FDynamicMeshEditResult *)0x0) {
      if (((param_4->NewNormalOverlayElements).ArrayNum <= param_2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResultOut->NewNormalOverlayElements.Num() > NormalLayerIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                             ,0x729,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar6 = 0;
      if (param_2 < (param_4->NewNormalOverlayElements).ArrayNum) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar5 = (param_4->NewNormalOverlayElements).AllocatorInstance.Data + (longlong)param_2 * 0x10
      ;
      if (((*(FScriptContainerElement **)&pFVar5->field_0x0 <= (FScriptContainerElement *)&local_18)
          && ((FScriptContainerElement *)&local_18 <
              *(FScriptContainerElement **)&pFVar5->field_0x0 + (longlong)*(int *)(pFVar5 + 0xc) * 4
             )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = *(int *)&pFVar5[8].field_0x0;
      if (iVar4 == *(int *)(pFVar5 + 0xc)) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar5,(int *)(pFVar5 + 0xc));
      }
      *(int *)&pFVar5[8].field_0x0 = iVar4 + 1;
      *(int *)(*(FScriptContainerElement **)&pFVar5->field_0x0 + (longlong)iVar4 * 4) = local_18;
    }
  }
  return local_18;
}

// FindOrCreateDuplicateUV @ 1433a0fd0

int __thiscall
UE::Geometry::FDynamicMeshEditor::FindOrCreateDuplicateUV
          (FDynamicMeshEditor *this,int param_1,int param_2,FMeshIndexMappings *param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TDynamicMeshOverlay<float,2> *this_00;
  FDynamicMeshAttributeSet *this_01;
  float local_18;
  undefined4 local_14;
  
  iVar3 = FMeshIndexMappings::GetNewUV(param_3,param_2,param_1);
  if (iVar3 == -1) {
    pFVar1 = (this->Mesh->AttributeSet).Ptr;
    this_01 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      this_01 = pFVar1;
    }
    this_00 = (TDynamicMeshOverlay<float,2> *)FDynamicMeshAttributeSet::GetUVLayer(this_01,param_2);
    pFVar2 = (this_00->Elements).Blocks.AllocatorInstance.Data;
    local_18 = *(float *)(*(longlong *)(pFVar2 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
                         (ulonglong)(param_1 * 2 & 0x1ff) * 4);
    local_14 = *(undefined4 *)
                (*(longlong *)(pFVar2 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
                (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4);
    iVar3 = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_18);
    FMeshIndexMappings::SetUV(param_3,param_2,param_1,iVar3);
  }
  return iVar3;
}

// FindOrCreateDuplicateVertex @ 1433a10b0

int __thiscall
UE::Geometry::FDynamicMeshEditor::FindOrCreateDuplicateVertex
          (FDynamicMeshEditor *this,int param_1,FMeshIndexMappings *param_2,
          FDynamicMeshEditResult *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar9;
  uint uVar10;
  FDynamicMeshAttributeSet *this_00;
  uint uVar11;
  int iVar12;
  FDynamicMeshAttributeSet *pFVar13;
  uint local_38 [8];
  
  local_38[0] = TIndexMap<int>::GetTo(&param_2->VertexMap,param_1);
  if (local_38[0] == 0xffffffff) {
    local_38[0] = FDynamicMesh3::AppendVertex(this->Mesh,this->Mesh,param_1);
    FMeshIndexMappings::SetVertex(param_2,param_1,local_38[0]);
    pFVar4 = (param_3->NewVertices).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar4 + (longlong)(param_3->NewVertices).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    iVar7 = (param_3->NewVertices).ArrayNum;
    piVar1 = &(param_3->NewVertices).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)param_3,piVar1);
    }
    pFVar4 = (param_3->NewVertices).AllocatorInstance.Data;
    (param_3->NewVertices).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar4 + (longlong)iVar7 * 4) = local_38[0];
    if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      pFVar13 = (FDynamicMeshAttributeSet *)0x0;
      while( true ) {
        iVar7 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xd8))();
        iVar12 = (int)pFVar13;
        if (iVar7 <= iVar12) break;
        pFVar13 = (this->Mesh->AttributeSet).Ptr;
        this_00 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar13 != (FDynamicMeshAttributeSet *)0x0) {
          this_00 = pFVar13;
        }
        pTVar9 = FDynamicMeshAttributeSet::GetWeightLayer(this_00,iVar12);
        uVar10 = (pTVar9->AttribValues).CurBlockUsed;
        uVar11 = (pTVar9->AttribValues).CurBlock;
        uVar3 = *(undefined4 *)
                 (*(longlong *)
                   ((pTVar9->AttribValues).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
        uVar8 = uVar11 * 0x200 + uVar10;
        if (local_38[0] == uVar8) {
          if (uVar10 == 0x200) {
            if (uVar11 == (pTVar9->AttribValues).Blocks.ArrayNum - 1U) {
              TDynamicVector<float,512>::AddAllocatedBlock(&pTVar9->AttribValues);
            }
            (pTVar9->AttribValues).CurBlock = (pTVar9->AttribValues).CurBlock + 1;
            uVar11 = (pTVar9->AttribValues).CurBlock;
            (pTVar9->AttribValues).CurBlockUsed = 0;
          }
          *(undefined4 *)
           (*(longlong *)
             ((pTVar9->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar11 * 8) +
           (longlong)(int)(pTVar9->AttribValues).CurBlockUsed * 4) = uVar3;
          puVar2 = &(pTVar9->AttribValues).CurBlockUsed;
          *puVar2 = *puVar2 + 1;
          pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar12 + 1);
        }
        else if (uVar8 < local_38[0]) {
          TDynamicVector<float,512>::Resize(&pTVar9->AttribValues,local_38[0]);
          uVar10 = (pTVar9->AttribValues).CurBlockUsed;
          if (uVar10 == 0x200) {
            if ((pTVar9->AttribValues).CurBlock == (pTVar9->AttribValues).Blocks.ArrayNum - 1U) {
              TDynamicVector<float,512>::AddAllocatedBlock(&pTVar9->AttribValues);
            }
            (pTVar9->AttribValues).CurBlock = (pTVar9->AttribValues).CurBlock + 1;
            (pTVar9->AttribValues).CurBlockUsed = 0;
            uVar10 = 0;
          }
          *(undefined4 *)
           (*(longlong *)
             ((pTVar9->AttribValues).Blocks.AllocatorInstance.Data +
             (longlong)(int)(pTVar9->AttribValues).CurBlock * 8) + (longlong)(int)uVar10 * 4) =
               uVar3;
          puVar2 = &(pTVar9->AttribValues).CurBlockUsed;
          *puVar2 = *puVar2 + 1;
          pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar12 + 1);
        }
        else {
          pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar12 + 1);
          *(undefined4 *)
           (*(longlong *)
             ((pTVar9->AttribValues).Blocks.AllocatorInstance.Data +
             (ulonglong)(local_38[0] >> 9) * 8) + (ulonglong)(local_38[0] & 0x1ff) * 4) = uVar3;
        }
      }
    }
  }
  return local_38[0];
}

// InvertTriangleNormals @ 1433bb930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshEditor::InvertTriangleNormals
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  ulonglong uVar15;
  uint uVar16;
  FDynamicMeshAttributeSet *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar28;
  uint *puVar29;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8;
  undefined1 local_e7 [3];
  int local_e4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e0;
  uint local_d8;
  undefined8 local_d4;
  float local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  FScriptContainerElement *local_b8;
  longlong local_b0;
  uint local_a8 [4];
  FScriptContainerElement *local_98;
  FDynamicMeshEditor *local_90;
  ForElementType<unsigned_int> local_88;
  uint local_70;
  int local_6c;
  ForElementType<unsigned_int> local_68;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  uVar10 = __xmm_80000000800000008000000080000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar4 = this->Mesh;
  local_90 = this;
  pTVar28 = param_1;
  local_e0 = param_1;
  if ((pFVar4->VertexNormals).bIsSet != false) {
    local_70 = (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed +
               (pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200;
    local_88.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_6c = 0x80;
    uVar16 = local_70 + 0x1f >> 5;
    if (uVar16 != 0) {
      if (4 < uVar16) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_88,0,uVar16,4);
        local_6c = uVar16 << 5;
      }
      FVar14 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_88.SecondaryData;
      }
      memset((void *)FVar14,0,(ulonglong)uVar16 << 2);
      uVar16 = local_70 & 0x8000001f;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
      }
      if (uVar16 != 0) {
        FVar14 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_88.SecondaryData;
        }
        puVar29 = (uint *)((longlong)FVar14 +
                          (longlong)((int)(local_70 + ((int)local_70 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar29 = *puVar29 & 0xffffffffU >> (0x20U - (char)uVar16 & 0x1f);
      }
    }
    pTVar28 = local_e0;
    pFVar18 = (param_1->AllocatorInstance).Data;
    iVar20 = param_1->ArrayNum;
    pFVar27 = pFVar18 + (longlong)iVar20 * 4;
    while( true ) {
      if (pTVar28->ArrayNum != iVar20) {
        local_e8 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_e8);
      }
      if (pFVar18 == pFVar27) break;
      uVar15 = (ulonglong)(*(uint *)pFVar18 & 0x1ff);
      lVar21 = 0;
      lVar19 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(*(uint *)pFVar18 >> 9) * 8);
      local_c8 = *(undefined8 *)(lVar19 + uVar15 * 0xc);
      local_c0 = *(undefined4 *)(lVar19 + 8 + uVar15 * 0xc);
      do {
        uVar16 = *(uint *)((longlong)&local_c8 + lVar21 * 4);
        if ((((int)uVar16 < 0) || ((int)local_70 <= (int)uVar16)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar14 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_88.SecondaryData;
        }
        uVar23 = uVar16 & 0x1f;
        if ((int)uVar16 < 0) {
          uVar16 = uVar16 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar16 >> 5) * 4) >> uVar23 & 1) == 0) {
          uVar16 = *(uint *)((longlong)&local_c8 + lVar21 * 4);
          if ((this->Mesh->VertexNormals).bIsSet == false) {
            local_d4 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
            local_cc = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          }
          else {
            pFVar5 = (this->Mesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
            uVar15 = (ulonglong)(uVar16 & 0x1ff);
            lVar19 = *(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8);
            uVar2 = *(undefined8 *)(lVar19 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
            local_cc = *(float *)(lVar19 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
            lVar19 = *(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8);
            *(uint *)(lVar19 + uVar15 * 0xc) = (uint)uVar2 ^ uVar10;
            local_d4._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
            *(uint *)(lVar19 + 4 + uVar15 * 0xc) = local_d4._4_4_ ^ uVar10;
            *(uint *)(lVar19 + 8 + uVar15 * 0xc) = (uint)local_cc ^ uVar10;
            local_d4 = uVar2;
          }
          iVar13 = *(int *)((longlong)&local_c8 + lVar21 * 4);
          if (((iVar13 < 0) || ((int)local_70 <= iVar13)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar14 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_88.SecondaryData;
          }
          iVar12 = iVar13;
          if (iVar13 < 0) {
            iVar12 = iVar13 + 0x1f;
          }
          puVar29 = (uint *)((longlong)FVar14 + (longlong)(iVar12 >> 5) * 4);
          *puVar29 = *puVar29 | 1 << ((byte)iVar13 & 0x1f);
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < 3);
      pFVar18 = pFVar18 + 4;
    }
    if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.SecondaryData);
    }
  }
  if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    lVar19 = 0;
    iVar20 = 0;
    while (local_e4 = iVar20, local_b0 = lVar19,
          iVar13 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xb8))(),
          iVar20 < iVar13) {
      pFVar6 = (this->Mesh->AttributeSet).Ptr;
      pFVar17 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar17 = pFVar6;
      }
      iVar13 = (pFVar17->NormalLayers).Array.ArrayNum;
      if ((iVar20 < iVar13) && (-1 < iVar20)) {
        if (iVar20 < 0) {
          local_f8 = (longlong)iVar20;
          local_f0 = (longlong)iVar13;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        lVar19 = *(longlong *)((pFVar17->NormalLayers).Array.AllocatorInstance.Data + lVar19);
      }
      else {
        lVar19 = 0;
      }
      local_50 = *(int *)(lVar19 + 0xc) + *(int *)(lVar19 + 8) * 0x200;
      local_68.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_4c = 0x80;
      uVar16 = local_50 + 0x1f;
      uVar23 = uVar16 >> 5;
      if (uVar16 >> 5 != 0) {
        if (4 < uVar23) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_68,0,uVar23,4);
          local_4c = uVar23 << 5;
        }
        FVar14 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_68.SecondaryData;
        }
        memset((void *)FVar14,0,(ulonglong)uVar23 << 2);
        uVar16 = local_50 & 0x8000001f;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
        }
        if (uVar16 != 0) {
          FVar14 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_68.SecondaryData;
          }
          puVar29 = (uint *)((longlong)FVar14 +
                            (longlong)((int)(local_50 + ((int)local_50 >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar29 = *puVar29 & 0xffffffffU >> (0x20U - (char)uVar16 & 0x1f);
        }
      }
      local_d8 = pTVar28->ArrayNum;
      uVar15 = (ulonglong)(int)local_d8;
      pFVar27 = (pTVar28->AllocatorInstance).Data;
      local_98 = pFVar27 + uVar15 * 4;
      while( true ) {
        pFVar18 = local_98;
        local_b8 = pFVar27;
        if (pTVar28->ArrayNum != (int)uVar15) {
          local_e7[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_e7);
        }
        if (pFVar27 == pFVar18) break;
        puVar29 = local_a8;
        lVar21 = *(longlong *)(lVar19 + 0x78);
        lVar26 = 3;
        uVar16 = *(int *)pFVar27 * 3;
        local_a8[0] = *(uint *)(*(longlong *)(lVar21 + (ulonglong)(uVar16 >> 9) * 8) +
                               (ulonglong)(uVar16 & 0x1ff) * 4);
        local_a8[1] = *(undefined4 *)
                       (*(longlong *)(lVar21 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                       (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
        local_a8[2] = *(undefined4 *)
                       (*(longlong *)(lVar21 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                       (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
        do {
          uVar16 = *puVar29;
          if (((-1 < (int)uVar16) &&
              ((int)uVar16 < *(int *)(lVar19 + 8) * 0x200 + *(int *)(lVar19 + 0xc))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar16 >> 9) * 8) +
                                 (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            if (((int)local_50 <= (int)uVar16) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar14 = (ForElementType<unsigned_int>)&local_68;
            if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_68.SecondaryData;
            }
            uVar23 = uVar16 & 0x1f;
            if ((int)uVar16 < 0) {
              uVar16 = uVar16 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar16 >> 5) * 4) >> uVar23 & 1) == 0)
            {
              lVar21 = *(longlong *)(lVar19 + 0x48);
              uVar3 = *puVar29;
              uVar9 = uVar3 * 3;
              uVar25 = (ulonglong)(uVar9 + 1 >> 9);
              uVar22 = (ulonglong)(uVar9 + 1 & 0x1ff);
              lVar7 = *(longlong *)(lVar21 + (ulonglong)(uVar9 >> 9) * 8);
              uVar24 = (ulonglong)(uVar9 + 2 & 0x1ff);
              uVar15 = (ulonglong)(uVar9 + 2 >> 9);
              uVar16 = *(uint *)(*(longlong *)(lVar21 + uVar25 * 8) + uVar22 * 4);
              uVar23 = *(uint *)(*(longlong *)(lVar21 + uVar15 * 8) + uVar24 * 4);
              *(uint *)(lVar7 + (ulonglong)(uVar9 & 0x1ff) * 4) =
                   *(uint *)(lVar7 + (ulonglong)(uVar9 & 0x1ff) * 4) ^ uVar10;
              *(uint *)(*(longlong *)(*(longlong *)(lVar19 + 0x48) + uVar25 * 8) + uVar22 * 4) =
                   uVar16 ^ uVar10;
              *(uint *)(*(longlong *)(*(longlong *)(lVar19 + 0x48) + uVar15 * 8) + uVar24 * 4) =
                   uVar23 ^ uVar10;
              if ((((int)uVar3 < 0) || ((int)local_50 <= (int)uVar3)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar14 = (ForElementType<unsigned_int>)&local_68;
              if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar14 = local_68.SecondaryData;
              }
              uVar16 = uVar3;
              if ((int)uVar3 < 0) {
                uVar16 = uVar3 + 0x1f;
              }
              puVar1 = (uint *)((longlong)FVar14 + (longlong)((int)uVar16 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
            }
          }
          puVar29 = puVar29 + 1;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        uVar15 = (ulonglong)local_d8;
        pFVar27 = local_b8 + 4;
        pTVar28 = local_e0;
      }
      if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
      lVar19 = local_b0 + 8;
      this = local_90;
      iVar20 = local_e4 + 1;
    }
  }
  return;
}

// ReinsertSubmesh @ 1433c2a70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDynamicMeshEditor::ReinsertSubmesh
          (FDynamicMeshEditor *this,FDynamicSubmesh3 *param_1,FOptionallySparseIndexMap *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,EDuplicateTriBehavior param_4)

{
  int *piVar1;
  EMapType EVar2;
  undefined1 *puVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  EMapType *pEVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  ForElementType<FSetElementId> FVar16;
  ForElementType<FSetElementId> FVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  FScriptContainerElement FVar27;
  bool local_res10;
  uint local_118;
  int local_114;
  uint local_110;
  EMapType *local_108;
  uint local_100 [2];
  FIndex3i_u_0 local_f8;
  int local_e8;
  uint local_e0 [2];
  TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_>_u_0 local_d8;
  int local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c0;
  int local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  
  if ((param_1->BaseMesh != this->Mesh) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Region.GetBaseMesh() == Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                         ,0x42e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  bVar8 = true;
  iVar24 = (param_1->Submesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
           (param_1->Submesh).VertexRefCounts.RefCounts.CurBlockUsed;
  local_res10 = true;
  local_d8.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_d8.TypedValue.ArrayNum = 0;
  local_d8.TypedValue.ArrayMax = -1;
  local_c0.Elements._0_8_ = 0;
  local_c0.Elements._8_4_ = 0;
  local_c0.Elements._12_4_ = -1;
  local_c0.Elements._32_8_ = 0;
  local_c0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_c0.Elements._48_8_ = _UNK_150631d98;
  local_c0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c0.HashSize = 0;
  if ((iVar24 < 32000) ||
     (__real_3d4ccccd <= (float)((param_1->Submesh).TriangleRefCounts.UsedCount / 2) / (float)iVar24
     )) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  FIndexFlagSet::InitManual((FIndexFlagSet *)&local_d8.TypedValue,bVar10,iVar24);
  piVar1 = &(param_2->Dense).ArrayMax;
  iVar24 = (param_1->Submesh).VertexRefCounts.UsedCount;
  iVar19 = (param_1->Submesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
           (param_1->Submesh).VertexRefCounts.RefCounts.CurBlockUsed;
  (param_2->Dense).ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_2,0,piVar1);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_2->Sparse);
  param_2->MaxIndex = iVar19;
  if ((iVar19 < 32000) || (__real_3dcccccd < (float)iVar24 / (float)iVar19)) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&param_2->Dense,iVar19,Default);
    local_108 = &param_2->MapType;
    *local_108 = Dense;
    uVar20 = 0;
    iVar24 = (param_2->Dense).ArrayNum;
    if (0 < iVar24) {
      local_108 = &param_2->MapType;
      lVar26 = 0;
      do {
        iVar22 = uVar20 * param_2->DefaultScale;
        iVar19 = param_2->DefaultOffset;
        uVar11 = 0;
        if ((int)uVar20 < iVar24) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar20 = uVar20 + 1;
        *(int *)((param_2->Dense).AllocatorInstance.Data + lVar26) = iVar22 + iVar19;
        lVar26 = lVar26 + 4;
        iVar24 = (param_2->Dense).ArrayNum;
      } while ((int)uVar20 < iVar24);
    }
  }
  else {
    local_108 = &param_2->MapType;
    *local_108 = Sparse;
  }
  uVar25 = 0;
  iVar24 = (param_1->Submesh).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
           (param_1->Submesh).TriangleRefCounts.RefCounts.CurBlockUsed;
  local_110 = 0;
  if (iVar24 < 1) {
LAB_1433c3630:
    if (local_c0.Elements._12_4_ != -1) {
      local_c0.HashSize = 0;
      if (local_c0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c0.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_c0.Elements);
    }
    if ((local_d8.TypedValue.ArrayMax != -1) &&
       (local_d8.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_d8.TypedValue.AllocatorInstance.Data);
    }
    return bVar8;
  }
LAB_1433c2ca4:
  lVar26 = 0;
  uVar20 = (uint)uVar25;
  if ((-1 < (int)uVar20) &&
     ((int)uVar20 <
      (int)((param_1->Submesh).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
           (param_1->Submesh).TriangleRefCounts.RefCounts.CurBlockUsed))) {
    uVar15 = (ulonglong)(uVar20 & 0x1ff);
    uVar25 = uVar25 >> 9;
    if ((ushort)(*(short *)(*(longlong *)
                             ((param_1->Submesh).TriangleRefCounts.RefCounts.Blocks.
                              AllocatorInstance.Data + uVar25 * 8) + uVar15 * 2) - 1U) < 0xfffe) {
      lVar23 = *(longlong *)
                ((param_1->Submesh).Triangles.Blocks.AllocatorInstance.Data + uVar25 * 8);
      local_60 = *(undefined8 *)(lVar23 + uVar15 * 0xc);
      local_58 = *(undefined4 *)(lVar23 + 8 + uVar15 * 0xc);
      if ((param_1->Submesh).TriangleGroups.bIsSet == false) {
        local_e8 = -1;
      }
      else {
        local_e8 = *(int *)(*(longlong *)
                             ((param_1->Submesh).TriangleGroups.TypedValue.Blocks.AllocatorInstance.
                              Data + uVar25 * 8) + uVar15 * 4);
      }
      local_f8._0_8_ = 0;
      local_f8._s_0.C = 0;
LAB_1433c2d53:
      pEVar7 = local_108;
      uVar20 = *(uint *)((longlong)&local_60 + lVar26 * 4);
      lVar23 = (longlong)(int)uVar20;
      if (local_d8.TypedValue.ArrayMax == -1) {
        if (local_c0.Elements._12_4_ == -1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Sparse.IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                             ,0x51,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if ((local_c0.Elements._12_4_ == -1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        if (local_c0.Elements._8_4_ != local_c0.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&local_c0.Hash;
          if (local_c0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_c0.Hash.SecondaryData;
          }
          for (iVar19 = *(int *)((longlong)FVar16 + (ulonglong)(local_c0.HashSize - 1U & uVar20) * 4
                                ); iVar19 != -1;
              iVar19 = *(int *)(local_c0.Elements._0_8_ + 4 + (longlong)iVar19 * 0xc)) {
            if (*(uint *)(local_c0.Elements._0_8_ + (longlong)iVar19 * 0xc) == uVar20)
            goto LAB_1433c2e5e;
          }
        }
        iVar19 = -1;
LAB_1433c2e5e:
        FVar27 = (FScriptContainerElement)(iVar19 != -1);
      }
      else {
        uVar11 = 0;
        if ((int)uVar20 < local_d8.TypedValue.ArrayNum) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        FVar27 = *(FScriptContainerElement *)
                  (lVar23 + (longlong)local_d8.TypedValue.AllocatorInstance.Data);
      }
      if (FVar27 == (FScriptContainerElement)0x0) {
        bVar8 = FDynamicMesh3::IsBoundaryVertex(&param_1->Submesh,uVar20);
        if (bVar8) {
          if (((param_1->Mappings).VertexMap.bWantReverse == false) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("bWantReverse",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                 ,0xa3,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (*(int *)&(param_1->Mappings).VertexMap.ReverseMap.field_0x8 !=
              *(int *)&(param_1->Mappings).VertexMap.ReverseMap.field_0x34) {
            puVar3 = *(undefined1 **)&(param_1->Mappings).VertexMap.ReverseMap.field_0x40;
            puVar18 = &(param_1->Mappings).VertexMap.ReverseMap.field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar18 = puVar3;
            }
            uVar11 = *(uint *)(puVar18 +
                              (ulonglong)
                              (*(int *)&(param_1->Mappings).VertexMap.ReverseMap.field_0x48 - 1U &
                              uVar20) * 4);
            if (uVar11 != 0xffffffff) {
              do {
                puVar14 = (uint *)((longlong)(int)uVar11 * 0x10 +
                                  *(longlong *)&(param_1->Mappings).VertexMap.ReverseMap);
                if (*puVar14 == uVar20) {
                  puVar13 = puVar14 + 1;
                  if (puVar14 == (uint *)0x0) {
                    puVar13 = (uint *)0x0;
                  }
                  if ((((puVar13 != (uint *)0x0) && (uVar11 = *puVar13, -1 < (int)uVar11)) &&
                      (pFVar4 = this->Mesh,
                      (int)uVar11 <
                      (int)((pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                           (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed))) &&
                     (((ushort)(*(short *)(*(longlong *)
                                            ((pFVar4->VertexRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8)
                                          + (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe &&
                      (*(int *)&(param_1->BaseBorderV).Elements.field_0x8 !=
                       *(int *)&(param_1->BaseBorderV).Elements.field_0x34)))) {
                    FVar16 = (param_1->BaseBorderV).Hash.SecondaryData;
                    FVar17 = (ForElementType<FSetElementId>)&(param_1->BaseBorderV).Hash;
                    if (FVar16 != (ForElementType<FSetElementId>)0x0) {
                      FVar17 = FVar16;
                    }
                    iVar19 = *(int *)((longlong)FVar17 +
                                     (ulonglong)((param_1->BaseBorderV).HashSize - 1U & uVar11) * 4)
                    ;
                    if (iVar19 != -1) {
                      lVar21 = *(longlong *)&(param_1->BaseBorderV).Elements;
                      goto LAB_1433c2fc4;
                    }
                  }
                  break;
                }
                uVar11 = puVar14[2];
              } while (uVar11 != 0xffffffff);
            }
          }
        }
        goto LAB_1433c301c;
      }
      if (((int)uVar20 < 0) || ((-1 < param_2->MaxIndex && (param_2->MaxIndex <= (int)uVar20)))) {
LAB_1433c3239:
        uVar11 = 0xffffffff;
      }
      else {
        EVar2 = *pEVar7;
        if (EVar2 == Dense) {
          uVar11 = 0;
          if ((int)uVar20 < (param_2->Dense).ArrayNum) {
            uVar11 = ~uVar20 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          uVar11 = *(uint *)((param_2->Dense).AllocatorInstance.Data + lVar23 * 4);
        }
        else {
          if (EVar2 == Sparse) {
            if (*(int *)&(param_2->Sparse).field_0x8 != *(int *)&(param_2->Sparse).field_0x34) {
              puVar3 = *(undefined1 **)&(param_2->Sparse).field_0x40;
              puVar18 = &(param_2->Sparse).field_0x38;
              if (puVar3 != (undefined1 *)0x0) {
                puVar18 = puVar3;
              }
              uVar11 = *(uint *)(puVar18 +
                                (ulonglong)(*(int *)&(param_2->Sparse).field_0x48 - 1U & uVar20) * 4
                                );
              if (uVar11 != 0xffffffff) {
                do {
                  puVar14 = (uint *)((longlong)(int)uVar11 * 0x10 + *(longlong *)&param_2->Sparse);
                  if (*puVar14 == uVar20) {
                    puVar13 = puVar14 + 1;
                    if (puVar14 == (uint *)0x0) {
                      puVar13 = (uint *)0x0;
                    }
                    if (puVar13 != (uint *)0x0) {
                      uVar11 = *puVar13;
                      goto LAB_1433c3240;
                    }
                    break;
                  }
                  uVar11 = puVar14[2];
                } while (uVar11 != 0xffffffff);
              }
            }
          }
          else if (EVar2 != ScaleAndOffset) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                               ,0x14d,L"");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            goto LAB_1433c3239;
          }
          uVar11 = uVar20 * param_2->DefaultScale + param_2->DefaultOffset;
        }
      }
      goto LAB_1433c3240;
    }
  }
  goto LAB_1433c35e9;
  while (iVar19 = *(int *)(lVar21 + 4 + (longlong)iVar19 * 0xc), iVar19 != -1) {
LAB_1433c2fc4:
    if (*(uint *)(lVar21 + (longlong)iVar19 * 0xc) == uVar11) {
      bVar8 = FDynamicMesh3::IsBoundaryVertex(pFVar4,uVar11);
      if (bVar8) {
        if (uVar11 != 0xffffffff) goto LAB_1433c3030;
      }
      else {
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3787275554290400178>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                           ,0x44e,"Mesh->IsBoundaryVertex(base_v)");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      break;
    }
  }
LAB_1433c301c:
  uVar11 = FDynamicMesh3::AppendVertex(this->Mesh,&param_1->Submesh,uVar20);
LAB_1433c3030:
  local_100[0] = uVar20;
  if ((((int)uVar20 < 0) || ((-1 < param_2->MaxIndex && (param_2->MaxIndex <= (int)uVar20)))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!BadIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                         ,0x164,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if ((*local_108 == ScaleAndOffset) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MapType != EMapType::ScaleAndOffset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                         ,0x165,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if (*local_108 == Dense) {
    lVar21 = (longlong)(int)local_100[0];
    uVar12 = 0;
    if ((int)local_100[0] < (param_2->Dense).ArrayNum) {
      uVar12 = ~local_100[0] >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    *(uint *)((param_2->Dense).AllocatorInstance.Data + lVar21 * 4) = uVar11;
  }
  else {
    puVar14 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::FindOrAddImpl<int_const_&>
                                ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                  *)&param_2->Sparse,local_100[0],(int *)local_100);
    *puVar14 = uVar11;
  }
  local_e0[0] = uVar20;
  if (local_d8.TypedValue.ArrayMax == -1) {
    if (local_c0.Elements._12_4_ == -1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sparse.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                         ,0x66,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if ((local_c0.Elements._12_4_ == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_c0,local_68,(bool *)local_e0);
  }
  else {
    uVar12 = 0;
    if ((int)uVar20 < local_d8.TypedValue.ArrayNum) {
      uVar12 = ~uVar20 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    if (*(FScriptContainerElement *)(lVar23 + (longlong)local_d8.TypedValue.AllocatorInstance.Data)
        == (FScriptContainerElement)0x0) {
      *(FScriptContainerElement *)(lVar23 + (longlong)local_d8.TypedValue.AllocatorInstance.Data) =
           (FScriptContainerElement)0x1;
      local_c8 = local_c8 + 1;
    }
  }
LAB_1433c3240:
  *(uint *)((longlong)&local_f8 + lVar26 * 4) = uVar11;
  lVar26 = lVar26 + 1;
  if (2 < lVar26) goto code_r0x0001433c3257;
  goto LAB_1433c2d53;
code_r0x0001433c3257:
  iVar19 = FDynamicMesh3::FindTriangle(this->Mesh,local_f8._s_0.A,local_f8._s_0.B,local_f8._s_0.C);
  if (param_4 == EnsureContinue) {
    if ((iVar19 != -1) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3787275554290400150>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                           ,0x46a,
                           "Mesh->FindTriangle(new_t.A, new_t.B, new_t.C) == FDynamicMesh3::InvalidID"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  else {
    local_114 = iVar19;
    if (iVar19 != -1) {
      if (param_4 == EnsureAbort) {
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3787275554290400141>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                           ,0x473,"false");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        bVar8 = false;
        goto LAB_1433c3630;
      }
      if (param_4 == UseExisting) {
        bVar8 = local_res10;
        uVar20 = local_110;
        if (param_3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar5 = (param_3->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_114) &&
              ((FScriptContainerElement *)&local_114 < pFVar5 + (longlong)param_3->ArrayMax * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          iVar19 = param_3->ArrayNum;
          if (iVar19 == param_3->ArrayMax) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar19 + 1;
          *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_114;
          uVar20 = local_110;
        }
        goto LAB_1433c35e9;
      }
      if (param_4 == Replace) {
        FDynamicMesh3::RemoveTriangle(this->Mesh,iVar19,false,false);
      }
    }
  }
  local_118 = FDynamicMesh3::AppendTriangle(this->Mesh,(FIndex3i *)&local_f8._s_0,local_e8);
  if (((int)local_118 < 0) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3787275554290400121>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                         ,0x487,"new_tid >= 0"), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar4 = this->Mesh;
  if ((((int)local_118 < 0) ||
      ((int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)local_118)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)(local_118 >> 9) * 8) +
                                  (ulonglong)(local_118 & 0x1ff) * 2) - 1U))) {
    local_res10 = false;
  }
  bVar8 = local_res10;
  uVar20 = local_110;
  if (param_3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar5 = (param_3->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar5 + (longlong)param_3->ArrayMax * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    iVar19 = param_3->ArrayNum;
    if (iVar19 == param_3->ArrayMax) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar19 + 1;
    *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_118;
    uVar20 = local_110;
  }
LAB_1433c35e9:
  local_110 = uVar20 + 1;
  uVar25 = (ulonglong)local_110;
  if (iVar24 <= (int)local_110) goto LAB_1433c3630;
  goto LAB_1433c2ca4;
}

// RemoveIsolatedVertices @ 1433c3f00

bool __thiscall UE::Geometry::FDynamicMeshEditor::RemoveIsolatedVertices(FDynamicMeshEditor *this)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMesh3 *this_00;
  bool bVar4;
  longlong lVar5;
  EMeshResult EVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  bool bVar10;
  
  pFVar2 = this->Mesh;
  bVar4 = true;
  uVar7 = 0;
  uVar8 = (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed +
          (pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar8 != 0) &&
     (pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar7 = 1;
    bVar10 = uVar8 == 1;
    if ((int)uVar8 < 2) goto LAB_1433c3f97;
    do {
      lVar1 = (ulonglong)(uVar7 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + (ulonglong)(uVar7 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar3 + (ulonglong)(uVar7 >> 9) * 8)) != -1)) break;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar8);
  }
  bVar10 = uVar7 == uVar8;
LAB_1433c3f97:
  if (!bVar10) {
LAB_1433c3fa0:
    do {
      this_00 = this->Mesh;
      if (((int)uVar7 < 0) ||
         ((int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (this_00->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar7)) {
LAB_1433c3fdd:
        EVar6 = FDynamicMesh3::RemoveVertex(this_00,uVar7,false);
        if ((EVar6 == Ok) && (bVar4)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        uVar9 = *(ushort *)
                 (*(longlong *)
                   ((this_00->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2);
        if (uVar9 == 0xffff) {
          uVar9 = 0;
        }
        if (uVar9 < 2) goto LAB_1433c3fdd;
      }
      uVar7 = uVar7 + 1;
      if ((int)uVar7 < (int)uVar8) {
        pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar1 = (ulonglong)(uVar7 >> 9) * 8;
          lVar5 = (ulonglong)(uVar7 & 0x1ff) * 2;
          if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
             (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != -1)) goto LAB_1433c3fa0;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar8);
      }
    } while (uVar7 != uVar8);
  }
  return bVar4;
}

// RemoveSeamsAtEdges @ 1433c4460

bool __cdecl
UE::Geometry::FDynamicMeshEditor::RemoveSeamsAtEdges
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TDynamicMeshOverlay<float,2> *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Private::OverlaySeamHelpers::RemoveSeamsAtEdges<float,2>
                    (param_1,param_2->ParentMesh,param_2);
  return bVar1;
}

// RemoveSeamsAtEdges @ 1433c4480

bool __cdecl
UE::Geometry::FDynamicMeshEditor::RemoveSeamsAtEdges
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TDynamicMeshOverlay<float,3> *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Private::OverlaySeamHelpers::RemoveSeamsAtEdges<float,3>
                    (param_1,param_2->ParentMesh,param_2);
  return bVar1;
}

// RemoveSmallComponents @ 1433c45e0

int __thiscall
UE::Geometry::FDynamicMeshEditor::RemoveSmallComponents
          (FDynamicMeshEditor *this,double param_1,double param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  int local_c8 [2];
  FMeshConnectedComponents local_c0;
  FScriptContainerElement *local_a8;
  int *piStack_a0;
  int local_98;
  undefined4 uStack_94;
  TVector2<double>_u_0 local_90;
  FScriptContainerElement *local_78;
  int *piStack_70;
  undefined8 local_68;
  undefined8 local_50;
  
  iVar8 = 0;
  local_c0.Mesh = this->Mesh;
  local_c0.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Components.Array.ArrayNum = 0;
  local_c0.Components.Array.ArrayMax = 0;
  local_78 = (FScriptContainerElement *)0x0;
  local_50 = 0;
  FMeshConnectedComponents::FindConnectedTriangles
            (&local_c0,(TFunction<bool___cdecl(int,int)> *)&local_78);
  iVar4 = local_c0.Components.Array.ArrayNum;
  uVar6 = (ulonglong)local_c0.Components.Array.ArrayNum;
  if (local_c0.Components.Array.ArrayNum != 1) {
    piStack_a0 = &local_c0.Components.Array.ArrayNum;
    local_98 = local_c0.Components.Array.ArrayNum;
    local_68._4_4_ = uStack_94;
    local_68._0_4_ = local_c0.Components.Array.ArrayNum;
    local_a8 = local_c0.Components.Array.AllocatorInstance.Data;
    pFVar1 = local_c0.Components.Array.AllocatorInstance.Data + uVar6 * 8;
    local_78 = local_c0.Components.Array.AllocatorInstance.Data;
    FVar7.Data = local_c0.Components.Array.AllocatorInstance.Data;
    piStack_70 = piStack_a0;
    while( true ) {
      if (*piStack_70 != iVar4) {
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar7.Data == pFVar1) break;
      pTVar2 = *(TArray<int,TSizedDefaultAllocator<32>_> **)FVar7.Data;
      if (((pTVar2->ArrayNum < param_3) ||
          (TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea
                     ((TVector2<double> *)&local_90._s_0,this->Mesh,pTVar2),
          local_90._s_0.X < param_1)) || (local_90._s_0.Y < param_2)) {
        piStack_a0 = local_c8;
        local_a8 = (FScriptContainerElement *)
                   Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMeshEditor::RemoveTriangles'::__l2::<lambda_1>,void,int>
                   ::Call;
        RemoveTriangles(this,pTVar2,true,(TFunctionRef<void___cdecl(int)> *)&local_a8);
        iVar8 = iVar8 + 1;
      }
      FVar7.Data = FVar7.Data + 8;
    }
    uVar6 = local_c0.Components.Array._8_8_ & 0xffffffff;
  }
  uVar5 = (uint)uVar6;
  FVar7.Data = local_c0.Components.Array.AllocatorInstance.Data;
  while (uVar5 != 0) {
    puVar3 = *(undefined8 **)FVar7.Data;
    if (puVar3 != (undefined8 *)0x0) {
      if ((void *)*puVar3 != (void *)0x0) {
        FMemory::Free((void *)*puVar3);
      }
      ::operator_delete(puVar3,0x10);
    }
    FVar7.Data = FVar7.Data + 8;
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
  }
  local_c0.Components.Array.ArrayMax = (int)((ulonglong)local_c0.Components.Array._8_8_ >> 0x20);
  bVar9 = local_c0.Components.Array.ArrayMax != 0;
  local_c0.Components.Array._8_8_ = (ulonglong)(uint)local_c0.Components.Array.ArrayMax << 0x20;
  if (bVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_c0.Components,0,&local_c0.Components.Array.ArrayMax
              );
  }
  if (local_c0.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Components.Array.AllocatorInstance.Data);
  }
  return iVar8;
}

// RemoveTriangles @ 1433c49b0

bool __thiscall
UE::Geometry::FDynamicMeshEditor::RemoveTriangles
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshEditor::RemoveTriangles'::__l2::<lambda_1>,void,int>
             ::Call;
  bVar1 = RemoveTriangles(this,param_1,param_2,(TFunctionRef<void___cdecl(int)> *)&local_18);
  return bVar1;
}

// RemoveTriangles @ 1433c49e0

bool __thiscall
UE::Geometry::FDynamicMeshEditor::RemoveTriangles
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          TFunctionRef<void___cdecl(int)> *param_3)

{
  int iVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  EMeshResult EVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined4 local_res10 [2];
  bool local_res18;
  TFunctionRef<void___cdecl(int)> *local_res20;
  
  iVar1 = param_1->ArrayNum;
  bVar11 = true;
  uVar8 = 0;
  if (0 < (longlong)iVar1) {
    lVar9 = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    bVar11 = true;
    do {
      pFVar2 = this->Mesh;
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar9 * 4);
      if (((-1 < (int)uVar6) &&
          ((int)uVar6 <
           (int)((pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        uVar6 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_res10[0] = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar9 * 4);
        (**(code **)local_res20)(*(undefined8 *)&local_res20->field_0x8,local_res10);
        pFVar2 = this->Mesh;
        uVar6 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        EVar7 = FDynamicMesh3::RemoveTriangle
                          (pFVar2,*(int *)((param_1->AllocatorInstance).Data + lVar9 * 4),
                           local_res18,false);
        if (EVar7 != Ok) {
          bVar11 = false;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  return bVar11;
}

// RescaleAttributeUVs @ 1433c4c00

void __thiscall
UE::Geometry::FDynamicMeshEditor::RescaleAttributeUVs
          (FDynamicMeshEditor *this,float param_1,bool param_2,int param_3,
          TOptional<UE::Geometry::TTransformSRT3<double>_> *param_4)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMesh3 *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  bool bVar20;
  int iVar21;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar22;
  TVector<double> *pTVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  float fVar29;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar30;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar31;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  TVector<double>_u_0 local_168;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  TVector<double> local_f8 [8];
  
  pFVar8 = (this->Mesh->AttributeSet).Ptr;
  if (((pFVar8 == (FDynamicMeshAttributeSet *)0x0) ||
      (iVar21 = (**(code **)(pFVar8->_padding_ + 0xa8))(), iVar21 <= param_3)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh->HasAttributes() && Mesh->Attributes()->NumUVLayers() > UVLayerIndex"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                          ,0x655,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar22 = FDynamicMeshAttributeSet::GetUVLayer((this->Mesh->AttributeSet).Ptr,param_3);
  if (param_2) {
    uVar26 = 0;
    pFVar9 = this->Mesh;
    dVar18 = 0.0;
    iVar21 = (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed +
             (pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    if (((iVar21 != 0) &&
        (pFVar10 = (pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar10 - 1U))) && (uVar26 = 1, 1 < iVar21)) {
      do {
        lVar11 = *(longlong *)(pFVar10 + (ulonglong)(uVar26 >> 9) * 8);
        if ((*(short *)(lVar11 + (ulonglong)(uVar26 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar11 + (ulonglong)(uVar26 & 0x1ff) * 2) != -1)) break;
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < iVar21);
    }
    uVar28 = (pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed;
    if (uVar26 != uVar28) {
      fVar39 = 0.0;
LAB_1433c4db0:
      do {
        lVar11 = *(longlong *)&pTVar22->field_0x78;
        uVar19 = uVar26 * 3;
        uVar5 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 4);
        if (-1 < (int)uVar5) {
          lVar12 = *(longlong *)&pTVar22->field_0x48;
          fVar31 = *(float *)(*(longlong *)(lVar12 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
          fVar2 = *(float *)(*(longlong *)(lVar12 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
          uVar5 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                           (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
          fVar38 = *(float *)(*(longlong *)(lVar12 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
          fVar30 = *(float *)(*(longlong *)(lVar12 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
          uVar5 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                           (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
          fVar41 = *(float *)(*(longlong *)(lVar12 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
          fVar40 = *(float *)(*(longlong *)(lVar12 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
          uVar25 = (ulonglong)(uVar26 & 0x1ff);
          lVar11 = *(longlong *)
                    ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar26 >> 9) * 8);
          pFVar10 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
          uVar5 = *(uint *)(lVar11 + uVar25 * 0xc);
          uVar24 = (ulonglong)(uVar5 & 0x1ff);
          pdVar1 = (double *)(*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar24 * 0x18);
          dVar14 = *pdVar1;
          dVar15 = pdVar1[1];
          dVar3 = *(double *)
                   (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar24 * 0x18);
          uVar5 = *(uint *)(lVar11 + 4 + uVar25 * 0xc);
          uVar24 = (ulonglong)(uVar5 & 0x1ff);
          pdVar1 = (double *)(*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar24 * 0x18);
          dVar16 = *pdVar1;
          dVar17 = pdVar1[1];
          dVar4 = *(double *)
                   (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar24 * 0x18);
          uVar5 = *(uint *)(lVar11 + 8 + uVar25 * 0xc);
          uVar25 = (ulonglong)(uVar5 & 0x1ff);
          pdVar1 = (double *)(*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar25 * 0x18);
          local_118 = *pdVar1;
          dStack_110 = pdVar1[1];
          local_108 = *(double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar25 * 0x18)
          ;
          if (param_4->bIsSet != false) {
            local_168._s_0.X = dVar14 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.X;
            local_168._s_0.Y = dVar15 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.Y;
            local_168._s_0.Z = dVar3 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.Z;
            local_148 = dVar14;
            dStack_140 = dVar15;
            local_138 = dVar3;
            local_130 = dVar16;
            dStack_128 = dVar17;
            local_120 = dVar4;
            pTVar23 = operator*<double>(local_f8,(TQuaternion<double> *)param_4,
                                        (TVector<double> *)&local_168._s_0);
            local_168._s_0.X = local_130 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.X;
            dVar14 = (pTVar23->field0_0x0)._s_0.X +
                     (param_4->TypedValue).Translation.field0_0x0._s_0.X;
            dVar15 = (pTVar23->field0_0x0)._s_0.Y +
                     (param_4->TypedValue).Translation.field0_0x0._s_0.Y;
            dVar3 = (pTVar23->field0_0x0)._s_0.Z +
                    (param_4->TypedValue).Translation.field0_0x0._s_0.Z;
            local_168._s_0.Y = dStack_128 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.Y;
            local_168._s_0.Z = local_120 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.Z;
            local_148 = dVar14;
            dStack_140 = dVar15;
            local_138 = dVar3;
            pTVar23 = operator*<double>(local_f8,(TQuaternion<double> *)param_4,
                                        (TVector<double> *)&local_168._s_0);
            dVar16 = (pTVar23->field0_0x0)._s_0.X +
                     (param_4->TypedValue).Translation.field0_0x0._s_0.X;
            dVar17 = (pTVar23->field0_0x0)._s_0.Y +
                     (param_4->TypedValue).Translation.field0_0x0._s_0.Y;
            dVar4 = (pTVar23->field0_0x0)._s_0.Z +
                    (param_4->TypedValue).Translation.field0_0x0._s_0.Z;
            local_130 = dVar16;
            dStack_128 = dVar17;
            local_120 = dVar4;
            if ((param_4->bIsSet == false) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_168._s_0.X = local_118 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.X;
            local_168._s_0.Y = dStack_110 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.Y;
            local_168._s_0.Z = local_108 * (param_4->TypedValue).Scale3D.field0_0x0._s_0.Z;
            pTVar23 = operator*<double>(local_f8,(TQuaternion<double> *)param_4,
                                        (TVector<double> *)&local_168._s_0);
            local_118 = (pTVar23->field0_0x0)._s_0.X +
                        (param_4->TypedValue).Translation.field0_0x0._s_0.X;
            dStack_110 = (pTVar23->field0_0x0)._s_0.Y +
                         (param_4->TypedValue).Translation.field0_0x0._s_0.Y;
            local_108 = (pTVar23->field0_0x0)._s_0.Z +
                        (param_4->TypedValue).Translation.field0_0x0._s_0.Z;
          }
          fVar37 = fVar31 - fVar41;
          fVar41 = fVar41 - fVar38;
          fVar29 = fVar2 - fVar40;
          fVar40 = fVar40 - fVar30;
          fVar38 = fVar38 - fVar31;
          auVar32._0_8_ = (dVar3 - local_108) * (dVar3 - local_108);
          auVar32._8_8_ = 0;
          auVar33._8_8_ = 0;
          auVar33._0_8_ =
               (dVar15 - dStack_110) * (dVar15 - dStack_110) +
               (dVar14 - local_118) * (dVar14 - local_118) + auVar32._0_8_;
          auVar33 = sqrtpd(auVar32,auVar33);
          fVar30 = fVar30 - fVar2;
          auVar34._0_8_ = (dVar4 - dVar3) * (dVar4 - dVar3);
          auVar34._8_8_ = 0;
          auVar35._8_8_ = 0;
          auVar35._0_8_ =
               (dVar17 - dVar15) * (dVar17 - dVar15) + (dVar16 - dVar14) * (dVar16 - dVar14) +
               auVar34._0_8_;
          auVar35 = sqrtpd(auVar34,auVar35);
          fVar31 = SQRT(fVar40 * fVar40 + fVar41 * fVar41);
          fVar39 = fVar39 + SQRT(fVar29 * fVar29 + fVar37 * fVar37) +
                   SQRT(fVar30 * fVar30 + fVar38 * fVar38) + fVar31;
          auVar36._8_8_ = 0;
          auVar36._0_8_ =
               (dStack_110 - dVar17) * (dStack_110 - dVar17) +
               (local_118 - dVar16) * (local_118 - dVar16) +
               (local_108 - dVar4) * (local_108 - dVar4);
          auVar36 = sqrtpd(ZEXT416((uint)fVar31),auVar36);
          dVar18 = dVar18 + auVar33._0_8_ + auVar35._0_8_ + auVar36._0_8_;
        }
        uVar26 = uVar26 + 1;
        if ((int)uVar26 < iVar21) {
          do {
            lVar11 = *(longlong *)
                      ((pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar26 >> 9) * 8);
            if ((*(short *)(lVar11 + (ulonglong)(uVar26 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar11 + (ulonglong)(uVar26 & 0x1ff) * 2) != -1)) goto LAB_1433c4db0;
            uVar26 = uVar26 + 1;
          } while ((int)uVar26 < iVar21);
        }
      } while (uVar26 != uVar28);
      if (__real_38d1b717 < fVar39) {
        param_1 = param_1 * (float)(dVar18 / (double)fVar39);
      }
    }
  }
  uVar26 = 0;
  iVar21 = *(int *)&pTVar22->field_0xc + *(int *)&pTVar22->field_0x8 * 0x200;
  if (((iVar21 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar22->field_0x10 - 1U)))
     && (uVar26 = 1, 1 < iVar21)) {
    do {
      lVar11 = (*(undefined8 **)&pTVar22->field_0x10)[uVar26 >> 9];
      if ((*(short *)(lVar11 + (ulonglong)(uVar26 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar11 + (ulonglong)(uVar26 & 0x1ff) * 2) != -1)) break;
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < iVar21);
  }
  iVar6 = *(int *)&pTVar22->field_0x8;
  iVar7 = *(int *)&pTVar22->field_0xc;
joined_r0x0001433c53c4:
  do {
    if (uVar26 == iVar6 * 0x200 + iVar7) {
      return;
    }
    while( true ) {
      uVar28 = uVar26 * 2;
      uVar5 = uVar26 & 0x7fffffff;
      uVar27 = (ulonglong)(uVar28 & 0x1ff);
      uVar25 = (ulonglong)((uVar26 & 0x7fffffff) >> 8);
      uVar26 = uVar26 + 1;
      uVar24 = (ulonglong)(uVar28 + 1 & 0x1ff);
      lVar11 = *(longlong *)(*(longlong *)&pTVar22->field_0x48 + (ulonglong)(uVar5 >> 8) * 8);
      fVar39 = *(float *)(*(longlong *)(*(longlong *)&pTVar22->field_0x48 + uVar25 * 8) + uVar24 * 4
                         );
      *(float *)(lVar11 + uVar27 * 4) = param_1 * *(float *)(lVar11 + uVar27 * 4);
      *(float *)(*(longlong *)(*(longlong *)&pTVar22->field_0x48 + uVar25 * 8) + uVar24 * 4) =
           param_1 * fVar39;
      if (iVar21 <= (int)uVar26) break;
      while( true ) {
        lVar11 = *(longlong *)(*(longlong *)&pTVar22->field_0x10 + (ulonglong)(uVar26 >> 9) * 8);
        if ((*(short *)(lVar11 + (ulonglong)(uVar26 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar11 + (ulonglong)(uVar26 & 0x1ff) * 2) != -1)) break;
        uVar26 = uVar26 + 1;
        if (iVar21 <= (int)uVar26) goto joined_r0x0001433c53c4;
      }
    }
  } while( true );
}

// ReverseTriangleOrientations @ 1433c7090

void __thiscall
UE::Geometry::FDynamicMeshEditor::ReverseTriangleOrientations
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar1) break;
    FDynamicMesh3::ReverseTriOrientation(this->Mesh,*(int *)pFVar3);
    pFVar3 = pFVar3 + 4;
  }
  if (param_2) {
    InvertTriangleNormals(this,param_1);
  }
  return;
}

// SetGeneralTubeUVs @ 1433c8490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshEditor::SetGeneralTubeUVs
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,TVector<float> *param_7,float param_8,
          TVector2<float> *param_9,int param_10)

{
  TPairInitializer<int_const_&,int_&&> *pTVar1;
  double *pdVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  uint uVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMesh3 *pFVar9;
  undefined8 uVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  double dVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  FDynamicMeshAttributeSet *this_00;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  ForElementType<FSetElementId> FVar31;
  uint uVar32;
  TDynamicMeshOverlay<float,2> *this_01;
  uint *puVar33;
  TPairInitializer<int_const_&,int_&&> *pTVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  uint uVar38;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar39;
  longlong lVar40;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStackY_358 [32];
  uint local_320;
  int local_31c;
  int local_2d4;
  longlong local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  int local_2a4;
  TDynamicMeshOverlay<float,2> *local_2a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_298;
  FIndex3i_u_0 local_290;
  double local_280;
  double dStack_278;
  double local_270;
  undefined8 local_268;
  float local_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  longlong local_240;
  longlong local_238;
  TArray<int,TSizedDefaultAllocator<32>_> *local_230;
  TArray<int,TSizedDefaultAllocator<32>_> *local_228;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_220;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_210;
  TPairInitializer<int_const_&,int_&&> local_200;
  undefined4 *local_1f0;
  int *local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_148;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_200.Value = (int *)param_5;
  local_268 = param_3;
  local_230 = param_2;
  local_228 = param_1;
  if ((param_2->ArrayNum < 3) || (param_4->ArrayNum < 3)) {
    bVar23 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3787275554290399878>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                        ,0x57a,"VertexIDs1.Num() >= 3 && VertexIDs2.Num() >= 3");
    if (bVar23) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  else {
    if (((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mesh->HasAttributes()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                            ,0x57f,L""), bVar23)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((param_3->ArrayNum != param_5->ArrayNum) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("MatchedIndices1.Num() == MatchedIndices2.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                            ,0x580,L""), bVar23)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((param_6->ArrayNum != param_3->ArrayNum + 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("UValues.Num() == MatchedIndices1.Num() + 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                            ,0x581,L""), bVar23)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar7 = param_3->ArrayNum;
    pFVar8 = (this->Mesh->AttributeSet).Ptr;
    this_00 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      this_00 = pFVar8;
    }
    local_2a0 = (TDynamicMeshOverlay<float,2> *)
                FDynamicMeshAttributeSet::GetUVLayer(this_00,param_10);
    pFVar9 = this->Mesh;
    if ((param_2->ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar26 = *(uint *)(param_2->AllocatorInstance).Data;
    uVar28 = (ulonglong)(uVar26 & 0x1ff);
    lVar40 = *(longlong *)
              ((pFVar9->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar26 >> 9) * 8);
    pdVar2 = (double *)(lVar40 + uVar28 * 0x18);
    local_280 = *pdVar2;
    dStack_278 = pdVar2[1];
    local_270 = *(double *)(lVar40 + 0x10 + uVar28 * 0x18);
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 0;
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_220,param_2->ArrayNum + 1,Default);
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_210,param_4->ArrayNum + 1,Default);
    pTVar39 = &local_220;
    uVar44 = (undefined4)__real_3f1a36e2e0000000;
    uVar45 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    uVar42 = (undefined4)__real_3ff0000000000000;
    uVar43 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_2b0 = 0xffffffffffffffff;
    local_31c = 0;
    local_238 = 0;
    do {
      piVar3 = &pTVar39->ArrayNum;
      pTVar41 = param_4;
      local_298 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_200.Value;
      if (local_31c == 0) {
        pTVar41 = param_2;
        local_298 = local_268;
      }
      uVar26 = pTVar41->ArrayNum;
      if (0 < (int)uVar7) {
        local_320 = 1;
        local_2b8 = 0;
        local_2d4 = 0;
        do {
          pTVar21 = local_298;
          uVar29 = (int)local_320 % (int)uVar7;
          uVar35 = ~(local_320 - 1) >> 0x1f;
          uVar38 = 0;
          if (local_2d4 < local_298->ArrayNum) {
            uVar38 = uVar35;
          }
          if ((uVar38 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar38 = *(uint *)((pTVar21->AllocatorInstance).Data + local_2b8);
          lVar40 = (longlong)(int)uVar38;
          uVar25 = 0;
          if ((int)uVar29 < pTVar21->ArrayNum) {
            uVar25 = ~uVar29 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar29 = *(uint *)((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar29 * 4);
          uVar25 = uVar29;
          if (local_320 == uVar7) {
            uVar25 = uVar26;
          }
          uVar30 = ~local_320 >> 0x1f;
          uVar37 = 0;
          if ((int)local_320 < param_6->ArrayNum) {
            uVar37 = uVar30;
          }
          if ((uVar37 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar27 = local_320 - 1;
          local_240 = local_2b8 + 4;
          fVar4 = *(float *)((param_6->AllocatorInstance).Data + local_240);
          uVar37 = 0;
          if (iVar27 < param_6->ArrayNum) {
            uVar37 = uVar35;
          }
          if ((uVar37 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar37 = 0;
          if ((int)uVar29 < pTVar41->ArrayNum) {
            uVar37 = ~uVar29 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar37 = *(uint *)((pTVar41->AllocatorInstance).Data + (longlong)(int)uVar29 * 4);
          uVar28 = (ulonglong)(uVar37 & 0x1ff);
          lVar36 = *(longlong *)
                    ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar37 >> 9) * 8);
          pdVar2 = (double *)(lVar36 + uVar28 * 0x18);
          local_1e0 = *pdVar2;
          dStack_1d8 = pdVar2[1];
          local_1d0 = *(double *)(lVar36 + 0x10 + uVar28 * 0x18);
          fStack_254 = fVar4 * param_8 + (param_9->field0_0x0)._s_0.Y;
          local_258 = (float)((local_1e0 - local_280) * (double)(param_7->field0_0x0)._s_0.X +
                              (dStack_1d8 - dStack_278) * (double)(param_7->field0_0x0)._s_0.Y +
                             (local_1d0 - local_270) * (double)(param_7->field0_0x0)._s_0.Z) *
                      param_8 + (param_9->field0_0x0)._s_0.X;
          uVar37 = 0;
          if ((int)uVar25 < *piVar3) {
            uVar37 = ~uVar25 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(ulonglong *)((pTVar39->AllocatorInstance).Data + (longlong)(int)uVar25 * 8) =
               CONCAT44(fStack_254,local_258);
          if (uVar38 != uVar29) {
            uVar37 = 0;
            if ((int)local_320 < param_6->ArrayNum) {
              uVar37 = uVar30;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar37 = 0;
            if (iVar27 < param_6->ArrayNum) {
              uVar37 = uVar35;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar32 = ~uVar38 >> 0x1f;
            fVar4 = *(float *)((param_6->AllocatorInstance).Data + local_2b8);
            uVar37 = 0;
            if ((int)uVar38 < pTVar41->ArrayNum) {
              uVar37 = uVar32;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar37 = *(uint *)((pTVar41->AllocatorInstance).Data + lVar40 * 4);
            uVar28 = (ulonglong)(uVar37 & 0x1ff);
            lVar36 = *(longlong *)
                      ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar37 >> 9) * 8);
            pdVar2 = (double *)(lVar36 + uVar28 * 0x18);
            local_1c8 = *pdVar2;
            dStack_1c0 = pdVar2[1];
            local_1b8 = *(double *)(lVar36 + 0x10 + uVar28 * 0x18);
            fStack_24c = fVar4 * param_8 + (param_9->field0_0x0)._s_0.Y;
            local_250 = (float)((local_1c8 - local_280) * (double)(param_7->field0_0x0)._s_0.X +
                                (dStack_1c0 - dStack_278) * (double)(param_7->field0_0x0)._s_0.Y +
                               (local_1b8 - local_270) * (double)(param_7->field0_0x0)._s_0.Z) *
                        param_8 + (param_9->field0_0x0)._s_0.X;
            uVar37 = 0;
            if ((int)uVar38 < *piVar3) {
              uVar37 = uVar32;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(ulonglong *)((pTVar39->AllocatorInstance).Data + lVar40 * 8) =
                 CONCAT44(fStack_24c,local_250);
            pFVar9 = this->Mesh;
            uVar37 = 0;
            if ((int)uVar38 < pTVar41->ArrayNum) {
              uVar37 = uVar32;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar37 = *(uint *)((pTVar41->AllocatorInstance).Data + lVar40 * 4);
            uVar28 = (ulonglong)(uVar37 & 0x1ff);
            lVar40 = *(longlong *)
                      ((pFVar9->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar37 >> 9) * 8);
            pdVar2 = (double *)(lVar40 + uVar28 * 0x18);
            dVar16 = *pdVar2;
            dVar17 = pdVar2[1];
            local_188 = *(double *)(lVar40 + 0x10 + uVar28 * 0x18);
            pFVar9 = this->Mesh;
            uVar37 = 0;
            if ((int)uVar29 < pTVar41->ArrayNum) {
              uVar37 = ~uVar29 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            dVar22 = local_188;
            uVar37 = *(uint *)((pTVar41->AllocatorInstance).Data + (longlong)(int)uVar29 * 4);
            uVar28 = (ulonglong)(uVar37 & 0x1ff);
            lVar40 = *(longlong *)
                      ((pFVar9->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar37 >> 9) * 8);
            pdVar2 = (double *)(lVar40 + uVar28 * 0x18);
            local_1b0 = *pdVar2;
            dStack_1a8 = pdVar2[1];
            local_1a0 = *(double *)(lVar40 + 0x10 + uVar28 * 0x18);
            dVar15 = local_1b0 - dVar16;
            dVar13 = dStack_1a8 - dVar17;
            dVar14 = local_1a0 - local_188;
            dVar12 = dVar13 * dVar13 + dVar15 * dVar15 + dVar14 * dVar14;
            if (dVar12 < (double)CONCAT44(uVar45,uVar44)) {
              lVar40 = (longlong)(int)(uVar38 + 1) % (longlong)(int)uVar26;
              uVar37 = (uint)lVar40;
              while (uVar37 != uVar29) {
                uVar37 = (uint)lVar40;
                uVar32 = 0;
                if ((int)uVar25 < *piVar3) {
                  uVar32 = ~uVar25 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar10 = *(undefined8 *)
                          ((pTVar39->AllocatorInstance).Data + (longlong)(int)uVar25 * 8);
                uVar32 = 0;
                if ((int)uVar37 < *piVar3) {
                  uVar32 = ~uVar37 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                *(undefined8 *)((pTVar39->AllocatorInstance).Data + (longlong)(int)uVar37 * 8) =
                     uVar10;
                lVar40 = (longlong)(int)(uVar37 + 1) % (longlong)(int)uVar26;
                uVar37 = (uint)lVar40;
              }
            }
            lVar40 = (longlong)(int)(uVar38 + 1) % (longlong)(int)uVar26;
            if ((uint)lVar40 != uVar29) {
              do {
                uVar38 = (uint)lVar40;
                uVar37 = ~uVar38 >> 0x1f;
                pFVar9 = this->Mesh;
                uVar25 = 0;
                if ((int)uVar38 < pTVar41->ArrayNum) {
                  uVar25 = uVar37;
                }
                if ((uVar25 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar36 = (longlong)(int)uVar38;
                uVar25 = *(uint *)((pTVar41->AllocatorInstance).Data + lVar36 * 4);
                uVar28 = (ulonglong)(uVar25 & 0x1ff);
                lVar40 = *(longlong *)
                          ((pFVar9->Vertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar25 >> 9) * 8);
                pdVar2 = (double *)(lVar40 + uVar28 * 0x18);
                dVar18 = *pdVar2;
                dVar19 = pdVar2[1];
                dVar6 = *(double *)(lVar40 + 0x10 + uVar28 * 0x18);
                local_170 = dVar6;
                uVar25 = 0;
                if ((int)local_320 < param_6->ArrayNum) {
                  uVar25 = uVar30;
                }
                local_180 = dVar18;
                dStack_178 = dVar19;
                if ((uVar25 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                fVar4 = *(float *)((param_6->AllocatorInstance).Data + local_240);
                uVar25 = 0;
                if (iVar27 < param_6->ArrayNum) {
                  uVar25 = uVar35;
                }
                if ((uVar25 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                fVar5 = *(float *)((param_6->AllocatorInstance).Data + local_2b8);
                uVar25 = 0;
                if ((int)uVar38 < pTVar41->ArrayNum) {
                  uVar25 = uVar37;
                }
                if ((uVar25 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar25 = *(uint *)((pTVar41->AllocatorInstance).Data + lVar36 * 4);
                uVar28 = (ulonglong)(uVar25 & 0x1ff);
                lVar40 = *(longlong *)
                          ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar25 >> 9) * 8);
                pdVar2 = (double *)(lVar40 + uVar28 * 0x18);
                local_168 = *pdVar2;
                dStack_160 = pdVar2[1];
                local_158 = *(double *)(lVar40 + 0x10 + uVar28 * 0x18);
                fStack_244 = ((fVar4 - fVar5) *
                              (float)(((dVar19 - dVar17) * dVar13 + (dVar18 - dVar16) * dVar15 +
                                      (dVar6 - dVar22) * dVar14) *
                                     ((double)CONCAT44(uVar43,uVar42) / dVar12)) + fVar5) * param_8
                             + (param_9->field0_0x0)._s_0.Y;
                local_248 = (float)((local_168 - local_280) * (double)(param_7->field0_0x0)._s_0.X +
                                    (dStack_160 - dStack_278) * (double)(param_7->field0_0x0)._s_0.Y
                                   + (local_158 - local_270) * (double)(param_7->field0_0x0)._s_0.Z)
                            * param_8 + (param_9->field0_0x0)._s_0.X;
                uVar25 = 0;
                if ((int)uVar38 < *piVar3) {
                  uVar25 = uVar37;
                }
                if ((uVar25 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                *(ulonglong *)((pTVar39->AllocatorInstance).Data + lVar36 * 8) =
                     CONCAT44(fStack_244,local_248);
                lVar40 = (longlong)(int)(uVar38 + 1) % (longlong)(int)uVar26;
              } while ((uint)lVar40 != uVar29);
              uVar42 = (undefined4)__real_3ff0000000000000;
              uVar43 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              uVar44 = (undefined4)__real_3f1a36e2e0000000;
              uVar45 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
            }
          }
          local_2b8 = local_240;
          local_2d4 = local_2d4 + 1;
          bVar23 = (int)local_320 < (int)uVar7;
          local_320 = local_320 + 1;
        } while (bVar23);
      }
      lVar36 = 0;
      uVar38 = 0;
      this_01 = local_2a0;
      lVar40 = lVar36;
      if (0 < (int)uVar26) {
        do {
          uVar29 = 0;
          if ((int)uVar38 < pTVar41->ArrayNum) {
            uVar29 = ~uVar38 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_2a8 = *(undefined4 *)((pTVar41->AllocatorInstance).Data + lVar40);
          uVar29 = 0;
          if ((int)uVar38 < *piVar3) {
            uVar29 = ~uVar38 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          this_01 = local_2a0;
          local_2a4 = TDynamicMeshOverlay<float,2>::AppendElement
                                (local_2a0,(float *)((pTVar39->AllocatorInstance).Data + lVar36 * 8)
                                );
          local_1f0 = &local_2a8;
          local_1e8 = &local_2a4;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_&&>_>(&local_148,&local_200,(bool *)&local_1f0);
          uVar38 = uVar38 + 1;
          lVar36 = lVar36 + 1;
          lVar40 = lVar40 + 4;
        } while ((int)uVar38 < (int)uVar26);
      }
      uVar38 = pTVar39->ArrayNum - 1;
      uVar26 = 0;
      if ((int)uVar38 < pTVar39->ArrayNum) {
        uVar26 = ~uVar38 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar27 = TDynamicMeshOverlay<float,2>::AppendElement
                         (this_01,(float *)((pTVar39->AllocatorInstance).Data +
                                           (longlong)(pTVar39->ArrayNum + -1) * 8));
      param_2 = local_230;
      pTVar39 = pTVar39 + 1;
      local_31c = local_31c + 1;
      *(int *)((longlong)&local_2b0 + local_238 * 4) = iVar27;
      local_238 = local_238 + 1;
    } while (local_238 < 2);
    bVar23 = false;
    bVar20 = false;
    if ((param_2->ArrayNum < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar7 = *(uint *)(param_2->AllocatorInstance).Data;
    if ((param_4->ArrayNum < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar40 = 2;
    uVar38 = 0;
    uVar26 = *(uint *)(param_4->AllocatorInstance).Data;
    iVar27 = local_228->ArrayNum;
    if (0 < iVar27) {
      local_2c0 = 0;
      do {
        pTVar41 = local_228;
        uVar29 = 0;
        if ((int)uVar38 < iVar27) {
          uVar29 = ~uVar38 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar29 = *(uint *)((pTVar41->AllocatorInstance).Data + local_2c0);
        local_298 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar29;
        lVar36 = *(longlong *)
                  ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar29 >> 9) * 8);
        local_268 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                     (lVar36 + (ulonglong)(uVar29 & 0x1ff) * 0xc);
        uVar29 = *(uint *)(lVar36 + 8 + (ulonglong)(uVar29 & 0x1ff) * 0xc);
        if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_148.Hash;
          if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_148.Hash.SecondaryData;
          }
          uVar35 = *(uint *)((longlong)FVar31 + (ulonglong)(local_148.HashSize - 1U & uVar29) * 4);
          while (uVar35 != 0xffffffff) {
            puVar33 = (uint *)((longlong)(int)uVar35 * 0x10 + local_148.Elements._0_8_);
            if (*puVar33 == uVar29) {
              if (puVar33 != (uint *)0x0) goto LAB_1433c9611;
              goto LAB_1433c95dd;
            }
            uVar35 = puVar33[2];
          }
        }
        puVar33 = (uint *)0x0;
LAB_1433c95dd:
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar24) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_1433c9611:
        uVar35 = puVar33[1];
        uVar25 = local_268._4_4_;
        if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_148.Hash;
          if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_148.Hash.SecondaryData;
          }
          uVar37 = *(uint *)((longlong)FVar31 +
                            (ulonglong)(local_148.HashSize - 1U & local_268._4_4_) * 4);
          while (uVar37 != 0xffffffff) {
            puVar33 = (uint *)((longlong)(int)uVar37 * 0x10 + local_148.Elements._0_8_);
            if (*puVar33 == local_268._4_4_) {
              if (puVar33 != (uint *)0x0) goto LAB_1433c96a0;
              goto LAB_1433c966c;
            }
            uVar37 = puVar33[2];
          }
        }
        puVar33 = (uint *)0x0;
LAB_1433c966c:
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar24) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_1433c96a0:
        uVar37 = puVar33[1];
        uVar30 = (uint)local_268;
        if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_148.Hash;
          if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_148.Hash.SecondaryData;
          }
          uVar32 = *(uint *)((longlong)FVar31 +
                            (ulonglong)(local_148.HashSize - 1U & (uint)local_268) * 4);
          while (uVar32 != 0xffffffff) {
            puVar33 = (uint *)((longlong)(int)uVar32 * 0x10 + local_148.Elements._0_8_);
            if (*puVar33 == (uint)local_268) {
              if (puVar33 != (uint *)0x0) goto LAB_1433c971e;
              goto LAB_1433c96f8;
            }
            uVar32 = puVar33[2];
          }
        }
        puVar33 = (uint *)0x0;
LAB_1433c96f8:
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar24) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_1433c971e:
        local_290._s_0.A = puVar33[1];
        if (uVar30 == uVar7) {
          iVar27 = 0;
        }
        else if (uVar25 == uVar7) {
          iVar27 = 1;
        }
        else {
          iVar27 = -1;
          if (uVar29 == uVar7) {
            iVar27 = 2;
          }
        }
        local_290._s_0.B = uVar37;
        local_290._s_0.C = uVar35;
        if ((bVar23) || (iVar27 == -1)) {
          bVar23 = true;
          if (-1 < iVar27) {
            *(undefined4 *)((longlong)&local_290 + (longlong)iVar27 * 4) = (undefined4)local_2b0;
          }
        }
        else {
          bVar23 = false;
        }
        if (uVar30 == uVar26) {
          iVar27 = 0;
        }
        else if (uVar25 == uVar26) {
          iVar27 = 1;
        }
        else {
          iVar27 = -1;
          if (uVar29 == uVar26) {
            iVar27 = 2;
          }
        }
        if ((bVar20) || (iVar27 == -1)) {
          bVar20 = true;
          if (-1 < iVar27) {
            *(undefined4 *)((longlong)&local_290 + (longlong)iVar27 * 4) = local_2b0._4_4_;
          }
        }
        else {
          bVar20 = false;
        }
        TDynamicMeshOverlay<float,2>::SetTriangle
                  (local_2a0,(int)local_298,(FIndex3i *)&local_290._s_0,true);
        uVar38 = uVar38 + 1;
        local_2c0 = local_2c0 + 4;
        iVar27 = local_228->ArrayNum;
      } while ((int)uVar38 < iVar27);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
    pTVar34 = &local_200;
    do {
      pTVar1 = pTVar34 + -1;
      pTVar34 = pTVar34 + -1;
      lVar40 = lVar40 + -1;
      if (pTVar1->Key != (int *)0x0) {
        FMemory::Free(pTVar1->Key);
      }
    } while (lVar40 != 0);
  }
  return;
}

// SetQuadNormals @ 1433caa10

void __thiscall
UE::Geometry::FDynamicMeshEditor::SetQuadNormals
          (FDynamicMeshEditor *this,FIndex2i *param_1,TVector<float> *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FDynamicMeshAttributeSet *pFVar5;
  longlong lVar6;
  FDynamicMesh3 *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FDynamicMeshAttributeSet *pFVar12;
  ulonglong uVar13;
  FDynamicMeshAttributeSet *this_00;
  int local_58;
  int iStack_54;
  FIndex3i_u_0 local_48;
  FIndex3i_u_0 local_38;
  undefined8 local_28;
  
  if (((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->HasAttributes()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                         ,0x4ae,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  iVar11 = 0;
  pFVar5 = (this->Mesh->AttributeSet).Ptr;
  pFVar12 = this_00;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar12 = pFVar5;
  }
  if (0 < (pFVar12->NormalLayers).Array.ArrayNum) {
    this_00 = *(FDynamicMeshAttributeSet **)(pFVar12->NormalLayers).Array.AllocatorInstance.Data;
  }
  uVar2 = (param_1->field0_0x0)._s_0.A;
  uVar13 = (ulonglong)(uVar2 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar6 + uVar13 * 0xc);
  iVar3 = *(int *)(lVar6 + 8 + uVar13 * 0xc);
  local_48._s_0.A =
       TDynamicMeshOverlay<float,3>::AppendElement
                 ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
  local_48._s_0.B =
       TDynamicMeshOverlay<float,3>::AppendElement
                 ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
  local_48._s_0.C =
       TDynamicMeshOverlay<float,3>::AppendElement
                 ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
  TDynamicMeshOverlay<float,3>::SetTriangle
            ((TDynamicMeshOverlay<float,3> *)this_00,(param_1->field0_0x0)._s_0.A,
             (FIndex3i *)&local_48._s_0,true);
  uVar2 = (param_1->field0_0x0)._s_0.B;
  pFVar7 = this->Mesh;
  if ((int)uVar2 < 0) {
    return;
  }
  if ((int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2) {
    return;
  }
  uVar13 = (ulonglong)(uVar2 & 0x1ff);
  lVar6 = (ulonglong)(uVar2 >> 9) * 8;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + lVar6) + uVar13 * 2) - 1U)) {
    return;
  }
  lVar6 = *(longlong *)((pFVar7->Triangles).Blocks.AllocatorInstance.Data + lVar6);
  local_28 = *(undefined8 *)(lVar6 + uVar13 * 0xc);
  iVar4 = *(int *)(lVar6 + 8 + uVar13 * 0xc);
  local_58 = (int)uVar1;
  iStack_54 = (int)((ulonglong)uVar1 >> 0x20);
  iVar10 = iVar11;
  if (local_58 == (int)local_28) {
LAB_1433cab8e:
    local_38._s_0.A = *(int *)((longlong)&local_48 + (longlong)iVar10 * 4);
  }
  else {
    if (iStack_54 == (int)local_28) {
      iVar10 = 1;
      goto LAB_1433cab8e;
    }
    if (iVar3 == (int)local_28) {
      iVar10 = 2;
      goto LAB_1433cab8e;
    }
    local_38._s_0.A =
         TDynamicMeshOverlay<float,3>::AppendElement
                   ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
  }
  if (local_58 == local_28._4_4_) {
    iVar10 = 0;
LAB_1433caba8:
    local_38._s_0.B = *(int *)((longlong)&local_48 + (longlong)iVar10 * 4);
  }
  else {
    if (iStack_54 == local_28._4_4_) {
      iVar10 = 1;
      goto LAB_1433caba8;
    }
    if (iVar3 == local_28._4_4_) {
      iVar10 = 2;
      goto LAB_1433caba8;
    }
    local_38._s_0.B =
         TDynamicMeshOverlay<float,3>::AppendElement
                   ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
  }
  if (local_58 != iVar4) {
    if (iStack_54 == iVar4) {
      iVar11 = 1;
    }
    else {
      iVar11 = 2;
      if (iVar3 != iVar4) {
        local_38._s_0.C =
             TDynamicMeshOverlay<float,3>::AppendElement
                       ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
        goto LAB_1433cabd4;
      }
    }
  }
  local_38._s_0.C = *(int *)((longlong)&local_48 + (longlong)iVar11 * 4);
LAB_1433cabd4:
  TDynamicMeshOverlay<float,3>::SetTriangle
            ((TDynamicMeshOverlay<float,3> *)this_00,(param_1->field0_0x0)._s_0.B,
             (FIndex3i *)&local_38._s_0,true);
  return;
}

// SetQuadUVsFromProjection @ 1433caca0

void __thiscall
UE::Geometry::FDynamicMeshEditor::SetQuadUVsFromProjection
          (FDynamicMeshEditor *this,FIndex2i *param_1,TFrame3<double> *param_2,float param_3,
          TVector2<float> *param_4,int param_5)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FDynamicMesh3 *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  TDynamicMeshOverlay<float,2> *this_00;
  TVector<double> *pTVar19;
  ulonglong uVar20;
  longlong lVar21;
  float *pfVar22;
  uint *puVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float local_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  undefined8 local_188;
  uint local_180;
  FIndex3i_u_0 local_178;
  FIndex3i_u_0 local_168;
  uint local_158 [4];
  undefined8 local_148;
  uint local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  FIndex2i *local_118;
  undefined8 local_110;
  undefined8 local_108;
  TVector<double> local_100 [2];
  TVector<double> local_d0;
  TVector<double> local_b8;
  TVector<double> local_a0 [4];
  
  pFVar9 = (this->Mesh->AttributeSet).Ptr;
  local_118 = param_1;
  if (((pFVar9 == (FDynamicMeshAttributeSet *)0x0) ||
      (iVar16 = (**(code **)(pFVar9->_padding_ + 0xa8))(), iVar16 <= param_5)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh->HasAttributes() && Mesh->Attributes()->NumUVLayers() > UVLayerIndex"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                          ,0x617,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this_00 = (TDynamicMeshOverlay<float,2> *)
            FDynamicMeshAttributeSet::GetUVLayer((this->Mesh->AttributeSet).Ptr,param_5);
  uVar7 = (param_1->field0_0x0)._s_0.A;
  uVar20 = (ulonglong)(uVar7 & 0x1ff);
  iVar17 = -1;
  iVar16 = -1;
  local_158[3] = -1;
  lVar21 = *(longlong *)
            ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
  local_188 = *(undefined8 *)(lVar21 + uVar20 * 0xc);
  uVar7 = *(uint *)(lVar21 + 8 + uVar20 * 0xc);
  lVar21 = *(longlong *)
            ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)local_188 >> 9) * 8);
  pdVar1 = (double *)(lVar21 + (ulonglong)((uint)local_188 & 0x1ff) * 0x18);
  dVar13 = *(double *)(lVar21 + 0x10 + (ulonglong)((uint)local_188 & 0x1ff) * 0x18) -
           (param_2->Origin).field0_0x0._s_0.Z;
  dVar14 = pdVar1[1] - (param_2->Origin).field0_0x0._s_0.Y;
  dVar12 = *pdVar1 - (param_2->Origin).field0_0x0._s_0.X;
  local_180 = uVar7;
  pTVar19 = TFrame3<double>::GetAxis(param_2,&local_d0,0);
  dVar4 = (pTVar19->field0_0x0)._s_0.Y;
  dVar5 = (pTVar19->field0_0x0)._s_0.X;
  dVar6 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = TFrame3<double>::GetAxis(param_2,local_100,1);
  local_198 = (float)(dVar14 * dVar4 + dVar12 * dVar5 + dVar13 * dVar6);
  fStack_194 = (float)(dVar14 * (pTVar19->field0_0x0)._s_0.Y + dVar12 * (pTVar19->field0_0x0)._s_0.X
                      + dVar13 * (pTVar19->field0_0x0)._s_0.Z);
  local_178._s_0.A = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_198);
  local_138 = CONCAT44(fStack_194,local_198);
  lVar21 = *(longlong *)
            ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
            (ulonglong)(local_188._4_4_ >> 9) * 8);
  pdVar1 = (double *)(lVar21 + (ulonglong)(local_188._4_4_ & 0x1ff) * 0x18);
  dVar12 = *pdVar1 - (param_2->Origin).field0_0x0._s_0.X;
  dVar13 = *(double *)(lVar21 + 0x10 + (ulonglong)(local_188._4_4_ & 0x1ff) * 0x18) -
           (param_2->Origin).field0_0x0._s_0.Z;
  dVar14 = pdVar1[1] - (param_2->Origin).field0_0x0._s_0.Y;
  local_158[0] = local_178._s_0.A;
  local_108 = local_138;
  pTVar19 = TFrame3<double>::GetAxis(param_2,&local_d0,0);
  dVar4 = (pTVar19->field0_0x0)._s_0.Y;
  dVar5 = (pTVar19->field0_0x0)._s_0.X;
  dVar6 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = TFrame3<double>::GetAxis(param_2,local_100,1);
  local_198 = (float)(dVar14 * dVar4 + dVar12 * dVar5 + dVar13 * dVar6);
  fStack_194 = (float)(dVar14 * (pTVar19->field0_0x0)._s_0.Y + dVar12 * (pTVar19->field0_0x0)._s_0.X
                      + dVar13 * (pTVar19->field0_0x0)._s_0.Z);
  local_178._s_0.B = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_198);
  uVar24 = CONCAT44(fStack_194,local_198);
  lVar21 = *(longlong *)
            ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
  pdVar1 = (double *)(lVar21 + (ulonglong)(local_180 & 0x1ff) * 0x18);
  dVar13 = *(double *)(lVar21 + 0x10 + (ulonglong)(local_180 & 0x1ff) * 0x18) -
           (param_2->Origin).field0_0x0._s_0.Z;
  dVar14 = pdVar1[1] - (param_2->Origin).field0_0x0._s_0.Y;
  dVar12 = *pdVar1 - (param_2->Origin).field0_0x0._s_0.X;
  local_158[1] = local_178._s_0.B;
  local_130 = uVar24;
  local_110 = uVar24;
  pTVar19 = TFrame3<double>::GetAxis(param_2,&local_d0,0);
  dVar4 = (pTVar19->field0_0x0)._s_0.Y;
  dVar5 = (pTVar19->field0_0x0)._s_0.X;
  dVar6 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = TFrame3<double>::GetAxis(param_2,local_100,1);
  local_198 = (float)(dVar14 * dVar4 + dVar12 * dVar5 + dVar13 * dVar6);
  fStack_194 = (float)(dVar14 * (pTVar19->field0_0x0)._s_0.Y + dVar12 * (pTVar19->field0_0x0)._s_0.X
                      + dVar13 * (pTVar19->field0_0x0)._s_0.Z);
  local_178._s_0.C = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_198);
  local_128 = CONCAT44(fStack_194,local_198);
  local_158[2] = local_178._s_0.C;
  TDynamicMeshOverlay<float,2>::SetTriangle
            (this_00,(param_1->field0_0x0)._s_0.A,(FIndex3i *)&local_178._s_0,true);
  uVar8 = (param_1->field0_0x0)._s_0.B;
  pFVar10 = this->Mesh;
  if (((int)uVar8 < 0) ||
     ((int)((pFVar10->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar10->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar8)) goto LAB_1433cb126;
  uVar20 = (ulonglong)(uVar8 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((pFVar10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)(uVar8 >> 9) * 8) + uVar20 * 2) - 1U))
  goto LAB_1433cb126;
  lVar21 = *(longlong *)
            ((pFVar10->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
  local_148 = *(undefined8 *)(lVar21 + uVar20 * 0xc);
  uVar8 = *(uint *)(lVar21 + 8 + uVar20 * 0xc);
  uVar24 = local_148;
  local_140 = uVar8;
  iVar18 = 0;
  local_148 = uVar24;
  if ((uint)local_188 == (uint)local_148) {
    iVar16 = 0;
LAB_1433cb0c5:
    local_168._s_0.A = *(int *)((longlong)&local_178 + (longlong)iVar16 * 4);
  }
  else {
    if (local_188._4_4_ == (uint)local_148) {
      iVar16 = 1;
      goto LAB_1433cb0c5;
    }
    if (uVar7 == (uint)local_148) {
      iVar16 = 2;
      goto LAB_1433cb0c5;
    }
    lVar21 = *(longlong *)
              ((pFVar10->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)local_148 >> 9) * 8);
    pdVar1 = (double *)(lVar21 + (ulonglong)((uint)local_148 & 0x1ff) * 0x18);
    dVar13 = *(double *)(lVar21 + 0x10 + (ulonglong)((uint)local_148 & 0x1ff) * 0x18) -
             (param_2->Origin).field0_0x0._s_0.Z;
    dVar14 = pdVar1[1] - (param_2->Origin).field0_0x0._s_0.Y;
    dVar12 = *pdVar1 - (param_2->Origin).field0_0x0._s_0.X;
    pTVar19 = TFrame3<double>::GetAxis(param_2,&local_b8,0);
    dVar4 = (pTVar19->field0_0x0)._s_0.Y;
    dVar5 = (pTVar19->field0_0x0)._s_0.X;
    dVar6 = (pTVar19->field0_0x0)._s_0.Z;
    pTVar19 = TFrame3<double>::GetAxis(param_2,local_a0,1);
    local_190 = (float)(dVar14 * dVar4 + dVar12 * dVar5 + dVar13 * dVar6);
    fStack_18c = (float)(dVar14 * (pTVar19->field0_0x0)._s_0.Y +
                         dVar12 * (pTVar19->field0_0x0)._s_0.X +
                        dVar13 * (pTVar19->field0_0x0)._s_0.Z);
    iVar17 = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_190);
    local_120 = CONCAT44(fStack_18c,local_190);
    local_158[3] = iVar17;
    local_168._s_0.A = iVar17;
  }
  if ((uint)local_188 == local_148._4_4_) {
    iVar16 = 0;
LAB_1433cb0df:
    local_168._s_0.B = *(int *)((longlong)&local_178 + (longlong)iVar16 * 4);
  }
  else {
    if (local_188._4_4_ == local_148._4_4_) {
      iVar16 = 1;
      goto LAB_1433cb0df;
    }
    if (uVar7 == local_148._4_4_) {
      iVar16 = 2;
      goto LAB_1433cb0df;
    }
    lVar21 = *(longlong *)
              ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_148._4_4_ >> 9) * 8);
    pdVar1 = (double *)(lVar21 + (ulonglong)(local_148._4_4_ & 0x1ff) * 0x18);
    dVar13 = *(double *)(lVar21 + 0x10 + (ulonglong)(local_148._4_4_ & 0x1ff) * 0x18) -
             (param_2->Origin).field0_0x0._s_0.Z;
    dVar14 = pdVar1[1] - (param_2->Origin).field0_0x0._s_0.Y;
    dVar12 = *pdVar1 - (param_2->Origin).field0_0x0._s_0.X;
    pTVar19 = TFrame3<double>::GetAxis(param_2,&local_b8,0);
    dVar4 = (pTVar19->field0_0x0)._s_0.Y;
    dVar5 = (pTVar19->field0_0x0)._s_0.X;
    dVar6 = (pTVar19->field0_0x0)._s_0.Z;
    pTVar19 = TFrame3<double>::GetAxis(param_2,local_a0,1);
    local_190 = (float)(dVar14 * dVar4 + dVar12 * dVar5 + dVar13 * dVar6);
    fStack_18c = (float)(dVar14 * (pTVar19->field0_0x0)._s_0.Y +
                         dVar12 * (pTVar19->field0_0x0)._s_0.X +
                        dVar13 * (pTVar19->field0_0x0)._s_0.Z);
    iVar17 = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_190);
    local_120 = CONCAT44(fStack_18c,local_190);
    local_158[3] = iVar17;
    local_168._s_0.B = iVar17;
  }
  if ((uint)local_188 == uVar8) {
LAB_1433cb100:
    iVar16 = iVar17;
    local_168._s_0.C = *(int *)((longlong)&local_178 + (longlong)iVar18 * 4);
  }
  else {
    if (local_188._4_4_ == uVar8) {
      iVar18 = 1;
      goto LAB_1433cb100;
    }
    iVar18 = 2;
    if (uVar7 == uVar8) goto LAB_1433cb100;
    lVar21 = *(longlong *)
              ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
    pdVar1 = (double *)(lVar21 + (ulonglong)(local_140 & 0x1ff) * 0x18);
    dVar13 = *(double *)(lVar21 + 0x10 + (ulonglong)(local_140 & 0x1ff) * 0x18) -
             (param_2->Origin).field0_0x0._s_0.Z;
    dVar14 = pdVar1[1] - (param_2->Origin).field0_0x0._s_0.Y;
    dVar12 = *pdVar1 - (param_2->Origin).field0_0x0._s_0.X;
    pTVar19 = TFrame3<double>::GetAxis(param_2,&local_b8,0);
    dVar4 = (pTVar19->field0_0x0)._s_0.Y;
    dVar5 = (pTVar19->field0_0x0)._s_0.X;
    dVar6 = (pTVar19->field0_0x0)._s_0.Z;
    pTVar19 = TFrame3<double>::GetAxis(param_2,local_a0,1);
    local_190 = (float)(dVar14 * dVar4 + dVar12 * dVar5 + dVar13 * dVar6);
    fStack_18c = (float)(dVar14 * (pTVar19->field0_0x0)._s_0.Y +
                         dVar12 * (pTVar19->field0_0x0)._s_0.X +
                        dVar13 * (pTVar19->field0_0x0)._s_0.Z);
    iVar16 = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_190);
    local_120 = CONCAT44(fStack_18c,local_190);
    local_168._s_0.C = iVar16;
    local_158[3] = iVar16;
  }
  TDynamicMeshOverlay<float,2>::SetTriangle
            (this_00,(local_118->field0_0x0)._s_0.B,(FIndex3i *)&local_168._s_0,true);
  uVar24 = local_110;
LAB_1433cb126:
  fVar26 = __real_7f7fffff;
  if ((float)local_108 < __real_7f7fffff) {
    fVar26 = (float)local_108;
  }
  fVar25 = __real_7f7fffff;
  if (local_138._4_4_ < __real_7f7fffff) {
    fVar25 = local_138._4_4_;
  }
  if ((float)uVar24 < fVar26) {
    fVar26 = (float)uVar24;
  }
  if (local_130._4_4_ < fVar25) {
    fVar25 = local_130._4_4_;
  }
  if (local_198 < fVar26) {
    fVar26 = local_198;
  }
  if (local_128._4_4_ < fVar25) {
    fVar25 = local_128._4_4_;
  }
  if (iVar16 != -1) {
    if ((float)local_120 < fVar26) {
      fVar26 = (float)local_120;
    }
    if (local_120._4_4_ < fVar25) {
      fVar25 = local_120._4_4_;
    }
  }
  pfVar22 = (float *)((longlong)&local_138 + 4);
  puVar23 = local_158;
  lVar21 = 4;
  do {
    uVar7 = *puVar23;
    if (uVar7 != 0xffffffff) {
      fVar2 = *pfVar22;
      fVar3 = (param_4->field0_0x0)._s_0.Y;
      *(float *)(*(longlong *)
                  ((this_00->Elements).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar7 * 2 & 0x1ff) * 4)
           = (pfVar22[-1] - fVar26) * param_3 + (param_4->field0_0x0)._s_0.X;
      *(float *)(*(longlong *)
                  ((this_00->Elements).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4) = (fVar2 - fVar25) * param_3 + fVar3;
    }
    puVar23 = puVar23 + 1;
    pfVar22 = pfVar22 + 2;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  return;
}

// SetTriangleNormals @ 1433cb770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FDynamicMeshEditor::SetTriangleNormals
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FDynamicMeshEditor *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FDynamicMeshAttributeSet *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  FDynamicMeshAttributeSet *pFVar11;
  ForAnyElementType FVar12;
  uint *puVar13;
  undefined ***pppuVar14;
  uint uVar15;
  uint *puVar16;
  ForElementType<FSetElementId> FVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint *puVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  FDynamicMeshAttributeSet *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [8];
  int local_230 [2];
  undefined1 local_228 [4];
  float local_224;
  float local_220;
  float local_21c;
  TPairInitializer<int_const_&,int_const_&> local_218;
  uint local_208 [2];
  code *local_200;
  code **local_1f8;
  int **local_1f0;
  FIndex3i_u_0 *local_1e8;
  TVector<double>_u_0 local_1e0;
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  FDynamicMeshAttributeSet *local_188;
  TArray<int,TSizedDefaultAllocator<32>_> *local_180;
  FDynamicMeshEditor *local_170;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  FSparseArrayAllocationInfo local_118;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_108;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_b8;
  code *local_68 [2];
  undefined **local_58;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_180 = param_1;
  local_170 = this;
  if (((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->HasAttributes()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                         ,0x4f3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = (FDynamicMeshAttributeSet *)0x0;
  pFVar24 = (this->Mesh->AttributeSet).Ptr;
  pFVar7 = pFVar11;
  if (pFVar24 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar7 = pFVar24;
  }
  pFVar24 = pFVar11;
  if (0 < (pFVar7->NormalLayers).Array.ArrayNum) {
    pFVar24 = *(FDynamicMeshAttributeSet **)(pFVar7->NormalLayers).Array.AllocatorInstance.Data;
  }
  pFVar25 = (param_1->AllocatorInstance).Data;
  uVar15 = param_1->ArrayNum;
  local_188 = pFVar24;
  if (((int)uVar15 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_108.AllocationFlags.NumBits = 0;
  local_108.AllocationFlags.MaxBits = 0x80;
  local_108.FirstFreeIndex = -1;
  local_108.NumFreeIndices = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  if (uVar15 == 0) goto LAB_1433cbab2;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_108,uVar15);
  uVar18 = 1;
  if (3 < uVar15) {
    uVar23 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_c0 != 0) && ((int)uVar18 <= (int)local_c0)) goto LAB_1433cbab2;
  local_c0 = uVar18;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
  }
  if (uVar18 != 0) {
    uVar21 = uVar18;
    if (uVar18 < 2) {
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        uVar21 = 0;
        goto LAB_1433cb907;
      }
    }
    else {
LAB_1433cb907:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar21,4);
    }
    if (0 < (int)uVar18) {
      uVar23 = (ulonglong)uVar18;
      pFVar7 = pFVar11;
      do {
        FVar12.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_c8.Data;
        }
        uVar8 = (ulonglong)pFVar7 & (longlong)(int)uVar18 - 1U;
        pFVar7 = (FDynamicMeshAttributeSet *)((longlong)&pFVar7->_padding_ + 1);
        *(undefined4 *)(FVar12.Data + uVar8 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_c0 != 0) {
    pTStack_1c0 = &local_108.AllocationFlags;
    local_1c8 = 0;
    uStack_1c4 = 1;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    if (local_108.AllocationFlags.NumBits != 0) {
      FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
      if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar18 = *(uint *)FVar22;
      pFVar7 = pFVar11;
      while (uVar18 == 0) {
        uStack_1b0 = (int)pFVar7 + 0x20;
        pFVar7 = (FDynamicMeshAttributeSet *)(ulonglong)uStack_1b0;
        iVar5 = (int)pFVar11;
        local_1c8 = iVar5 + 1;
        pFVar11 = (FDynamicMeshAttributeSet *)(ulonglong)local_1c8;
        if ((int)((local_108.AllocationFlags.NumBits - 1U) +
                 ((int)(local_108.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_1c8) goto LAB_1433cba1a;
        uVar18 = *(uint *)((uchar *)((longlong)FVar22 + 4) + (longlong)iVar5 * 4);
      }
      uStack_1c4 = -uVar18 & uVar18;
      uVar23 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uStack_1b4 = (uStack_1b0 - 1) + (int)lVar9;
      pFVar11 = (FDynamicMeshAttributeSet *)(ulonglong)uStack_1b4;
      if (local_108.AllocationFlags.NumBits < (int)uStack_1b4) {
LAB_1433cba1a:
        pFVar11 = (FDynamicMeshAttributeSet *)(ulonglong)(uint)local_108.AllocationFlags.NumBits;
        uStack_1b4 = local_108.AllocationFlags.NumBits;
      }
    }
    local_1b8 = 0xffffffff;
    local_168 = &local_108;
    local_160._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_160.CurrentBitIndex = uStack_1b4;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160._28_4_ = uStack_1ac;
    local_160.BaseBitIndex = uStack_1b0;
    local_160.Array = pTStack_1c0;
    if ((int)pFVar11 < local_108.AllocationFlags.NumBits) {
      do {
        pFVar19 = (local_168->Data).AllocatorInstance.Data;
        lVar9 = (longlong)(int)pFVar11;
        uVar18 = local_c0 - 1 & *(uint *)(pFVar19 + lVar9 * 0xc);
        *(uint *)(pFVar19 + lVar9 * 0xc + 8) = uVar18;
        FVar12.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_c8.Data;
        }
        uVar23 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar18;
        *(undefined4 *)(pFVar19 + lVar9 * 0xc + 4) = *(undefined4 *)(FVar12.Data + uVar23 * 4);
        *(int *)(FVar12.Data + uVar23 * 4) = (int)pFVar11;
        local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
        pFVar11 = (FDynamicMeshAttributeSet *)(ulonglong)(uint)local_160.CurrentBitIndex;
      } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
    }
  }
LAB_1433cbab2:
  pFVar19 = pFVar25 + (longlong)(int)uVar15 * 4;
  if (pFVar25 != pFVar19) {
    puVar13 = (uint *)0x0;
    do {
      if (local_108.NumFreeIndices == 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)&local_108,&local_108.Data.ArrayNum,
                           &local_108.Data.ArrayMax);
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_108.AllocationFlags,1)
        ;
        FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
        if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        bVar10 = (byte)iVar6 & 0x1f;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x1f;
          bVar10 = bVar10 - 0x20;
        }
        puVar16 = (uint *)((longlong)FVar22 + (longlong)(iVar6 >> 5) * 4);
        *puVar16 = *puVar16 & ~(1 << (bVar10 & 0x1f));
        iVar6 = local_108.FirstFreeIndex;
      }
      else {
        iVar6 = *(int *)(local_108.Data.AllocatorInstance.Data +
                        (longlong)local_108.FirstFreeIndex * 0xc + 4);
        local_108.NumFreeIndices = local_108.NumFreeIndices + -1;
        iVar5 = local_108.FirstFreeIndex;
        if (local_108.NumFreeIndices != 0) {
          *(undefined4 *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) =
               0xffffffff;
        }
      }
      local_108.FirstFreeIndex = iVar6;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex(&local_108,&local_118,iVar5);
      puVar16 = puVar13;
      if (local_118.Pointer != (uint *)0x0) {
        *(uint *)local_118.Pointer = *(uint *)pFVar25;
        *(uint *)((longlong)local_118.Pointer + 4) = 0xffffffff;
        puVar16 = local_118.Pointer;
      }
      uVar15 = *puVar16;
      if ((local_108.Data.ArrayNum - local_108.NumFreeIndices != 1) &&
         (local_108.Data.ArrayNum != local_108.NumFreeIndices)) {
        FVar12.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_c8.Data;
        }
        for (iVar5 = *(int *)(FVar12.Data + (ulonglong)(local_c0 - 1 & uVar15) * 4); iVar5 != -1;
            iVar5 = *(int *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar5 * 0xc + 4)) {
          if (*(uint *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar5 * 0xc) == uVar15) {
            if (iVar5 != -1) {
              *(uint *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar5 * 0xc) = uVar15;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(&local_108,local_118.Index,1);
              goto LAB_1433cbebf;
            }
            break;
          }
        }
      }
      uVar21 = local_108.Data.ArrayNum - local_108.NumFreeIndices;
      uVar18 = 1;
      if (3 < uVar21) {
        uVar23 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((int)uVar21 < 1) || ((int)uVar18 <= (int)local_c0)) {
        uVar15 = local_c0 - 1 & uVar15;
        puVar16[2] = uVar15;
        FVar12.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_c8.Data;
        }
        uVar23 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar15;
        puVar16[1] = *(uint *)(FVar12.Data + uVar23 * 4);
        *(int *)(FVar12.Data + uVar23 * 4) = local_118.Index;
      }
      else {
        local_c0 = uVar18;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
        }
        if (uVar18 != 0) {
          uVar15 = uVar18;
          if (uVar18 < 2) {
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              uVar15 = 0;
              goto LAB_1433cbcd1;
            }
          }
          else {
LAB_1433cbcd1:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_c8,0,uVar15,4);
          }
          if (0 < (int)uVar18) {
            uVar23 = (ulonglong)uVar18;
            puVar16 = puVar13;
            do {
              FVar12.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar12.Data = local_c8.Data;
              }
              uVar8 = (longlong)(int)uVar18 - 1U & (ulonglong)puVar16;
              puVar16 = (uint *)((longlong)puVar16 + 1);
              *(undefined4 *)(FVar12.Data + uVar8 * 4) = 0xffffffff;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
        }
        if (local_c0 != 0) {
          pTStack_1a0 = &local_108.AllocationFlags;
          local_1a8 = 0;
          uStack_1a4 = 1;
          uStack_194 = 0;
          uStack_190 = 0;
          puVar16 = puVar13;
          if (local_108.AllocationFlags.NumBits != 0) {
            FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
            if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar15 = *(uint *)FVar22;
            puVar20 = puVar13;
            while (uVar15 == 0) {
              uStack_190 = (int)puVar20 + 0x20;
              puVar20 = (uint *)(ulonglong)uStack_190;
              iVar5 = (int)puVar16;
              local_1a8 = iVar5 + 1;
              puVar16 = (uint *)(ulonglong)local_1a8;
              if ((int)((local_108.AllocationFlags.NumBits - 1U) +
                       ((int)(local_108.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_1a8) goto LAB_1433cbdda;
              uVar15 = *(uint *)((uchar *)((longlong)FVar22 + 4) + (longlong)iVar5 * 4);
            }
            uStack_1a4 = -uVar15 & uVar15;
            uVar23 = (ulonglong)uStack_1a4 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            uStack_194 = (uStack_190 - 1) + (int)lVar9;
            puVar16 = (uint *)(ulonglong)uStack_194;
            if (local_108.AllocationFlags.NumBits < (int)uStack_194) {
LAB_1433cbdda:
              puVar16 = (uint *)(ulonglong)(uint)local_108.AllocationFlags.NumBits;
              uStack_194 = local_108.AllocationFlags.NumBits;
            }
          }
          local_198 = 0xffffffff;
          local_140 = &local_108;
          local_138._padding_ = CONCAT44(uStack_1a4,local_1a8);
          local_138.CurrentBitIndex = uStack_194;
          local_138.UnvisitedBitMask = 0xffffffff;
          local_138._28_4_ = uStack_18c;
          local_138.BaseBitIndex = uStack_190;
          local_138.Array = pTStack_1a0;
          if ((int)puVar16 < local_108.AllocationFlags.NumBits) {
            do {
              pFVar1 = (local_140->Data).AllocatorInstance.Data;
              lVar9 = (longlong)(int)puVar16;
              uVar15 = local_c0 - 1 & *(uint *)(pFVar1 + lVar9 * 0xc);
              *(uint *)(pFVar1 + lVar9 * 0xc + 8) = uVar15;
              FVar12.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar12.Data = local_c8.Data;
              }
              uVar23 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar15;
              *(undefined4 *)(pFVar1 + lVar9 * 0xc + 4) = *(undefined4 *)(FVar12.Data + uVar23 * 4);
              *(int *)(FVar12.Data + uVar23 * 4) = (int)puVar16;
              local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
              puVar16 = (uint *)(ulonglong)(uint)local_138.CurrentBitIndex;
            } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
          }
        }
      }
LAB_1433cbebf:
      pFVar25 = pFVar25 + 4;
      pFVar24 = local_188;
    } while (pFVar25 != pFVar19);
  }
  pFVar3 = local_170;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FDynamicMeshEditor::SetTriangleNormals'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_40 = (undefined ***)0x0;
  iVar5 = local_180->ArrayNum;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  pFVar19 = (local_180->AllocatorInstance).Data;
  local_50 = &local_108;
  local_68[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMeshEditor::SetTriangleNormals'::__l2::<lambda_1>,bool,int>
                ::Call;
  local_b8.Elements._8_8_ = 0;
  pFVar25 = pFVar19 + (longlong)iVar5 * 4;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  do {
    if (local_180->ArrayNum != iVar5) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_228);
    }
    if (pFVar19 == pFVar25) {
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8.Elements);
      if (local_68[0] != (code *)0x0) {
        pppuVar14 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar14 = local_40;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      local_c0 = 0;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_108);
      return;
    }
    uVar15 = *(uint *)pFVar19;
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)&(pFVar24->SkinWeightAttributes).field_0x8 +
                       (ulonglong)(uVar15 * 3 >> 9) * 8) + (ulonglong)(uVar15 * 3 & 0x1ff) * 4)) {
      TDynamicMeshOverlay<float,3>::UnsetTriangle
                ((TDynamicMeshOverlay<float,3> *)pFVar24,uVar15,true);
    }
    lVar9 = *(longlong *)
             ((pFVar3->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8
             );
    local_218.Value = *(int **)(lVar9 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
    local_208[0] = *(uint *)(lVar9 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
    local_238 = (undefined1  [8])0xffffffffffffffff;
    local_230[0] = -1;
    if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)&local_b8.Hash;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_b8.Hash.SecondaryData;
      }
      uVar18 = *(uint *)((longlong)FVar17 +
                        (ulonglong)(local_b8.HashSize - 1U & (uint)local_218.Value) * 4);
      while (uVar18 != 0xffffffff) {
        puVar13 = (uint *)((longlong)(int)uVar18 * 0x10 + local_b8.Elements._0_8_);
        if (*puVar13 == (uint)local_218.Value) goto LAB_1433cc060;
        uVar18 = puVar13[2];
      }
    }
    puVar13 = (uint *)0x0;
LAB_1433cc060:
    puVar16 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar16 = (uint *)0x0;
    }
    if (puVar16 == (uint *)0x0) {
      local_1f8 = local_68;
      local_200 = Core::Private::Function::
                  TFunctionRefCaller<TUniqueFunction<bool___cdecl(int)>,bool,int>::Call;
      FMeshNormals::ComputeVertexNormal
                ((TVector<double> *)&local_1e0._s_0,pFVar3->Mesh,(uint)local_218.Value,
                 (TFunctionRef<bool___cdecl(int)> *)&local_200,true,true);
      local_224 = (float)local_1e0._s_0.X;
      local_220 = (float)local_1e0._s_0.Y;
      local_21c = (float)local_1e0._s_0.Z;
      iVar6 = TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)pFVar24,&local_224);
      local_238._0_4_ = iVar6;
      local_1f0 = &local_218.Value;
      local_1e8 = (FIndex3i_u_0 *)local_238;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_b8,&local_218,(bool *)&local_1f0);
    }
    else {
      local_238._4_4_ = 0xffffffff;
      local_238._0_4_ = *puVar16;
    }
    if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)&local_b8.Hash;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_b8.Hash.SecondaryData;
      }
      uVar18 = *(uint *)((longlong)FVar17 +
                        (ulonglong)(local_b8.HashSize - 1U & local_218.Value._4_4_) * 4);
      while (uVar18 != 0xffffffff) {
        puVar13 = (uint *)((longlong)(int)uVar18 * 0x10 + local_b8.Elements._0_8_);
        if (*puVar13 == local_218.Value._4_4_) goto LAB_1433cc18f;
        uVar18 = puVar13[2];
      }
    }
    puVar13 = (uint *)0x0;
LAB_1433cc18f:
    puVar20 = (uint *)0x0;
    puVar16 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar16 = puVar20;
    }
    if (puVar16 == (uint *)0x0) {
      local_1f8 = local_68;
      local_200 = Core::Private::Function::
                  TFunctionRefCaller<TUniqueFunction<bool___cdecl(int)>,bool,int>::Call;
      FMeshNormals::ComputeVertexNormal
                ((TVector<double> *)&local_1e0._s_0,pFVar3->Mesh,local_218.Value._4_4_,
                 (TFunctionRef<bool___cdecl(int)> *)&local_200,true,true);
      local_224 = (float)local_1e0._s_0.X;
      local_220 = (float)local_1e0._s_0.Y;
      local_21c = (float)local_1e0._s_0.Z;
      iVar6 = TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)pFVar24,&local_224);
      local_238._4_4_ = iVar6;
      local_1f0 = (int **)((longlong)&local_218.Value + 4);
      local_1e8 = (FIndex3i_u_0 *)((longlong)local_238 + 4);
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_b8,&local_218,(bool *)&local_1f0);
    }
    else {
      local_238._4_4_ = *puVar16;
    }
    puVar13 = puVar20;
    if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
      FVar17 = (ForElementType<FSetElementId>)&local_b8.Hash;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_b8.Hash.SecondaryData;
      }
      uVar18 = *(uint *)((longlong)FVar17 + (ulonglong)(local_b8.HashSize - 1U & local_208[0]) * 4);
      while ((puVar13 = puVar20, uVar18 != 0xffffffff &&
             (puVar13 = (uint *)((longlong)(int)uVar18 * 0x10 + local_b8.Elements._0_8_),
             *puVar13 != local_208[0]))) {
        uVar18 = puVar13[2];
      }
    }
    puVar16 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar16 = puVar20;
    }
    if (puVar16 == (uint *)0x0) {
      local_1f8 = local_68;
      local_200 = Core::Private::Function::
                  TFunctionRefCaller<TUniqueFunction<bool___cdecl(int)>,bool,int>::Call;
      FMeshNormals::ComputeVertexNormal
                ((TVector<double> *)&local_1e0._s_0,pFVar3->Mesh,local_208[0],
                 (TFunctionRef<bool___cdecl(int)> *)&local_200,true,true);
      local_224 = (float)local_1e0._s_0.X;
      local_220 = (float)local_1e0._s_0.Y;
      local_21c = (float)local_1e0._s_0.Z;
      local_230[0] = TDynamicMeshOverlay<float,3>::AppendElement
                               ((TDynamicMeshOverlay<float,3> *)pFVar24,&local_224);
      local_1f0 = (int **)local_208;
      local_1e8 = (FIndex3i_u_0 *)&(((FIndex3i_u_0 *)local_238)->_s_0).C;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_b8,&local_218,(bool *)&local_1f0);
    }
    else {
      local_230[0] = *puVar16;
    }
    TDynamicMeshOverlay<float,3>::SetTriangle
              ((TDynamicMeshOverlay<float,3> *)pFVar24,uVar15,
               (FIndex3i *)&((FIndex3i_u_0 *)local_238)->_s_0,true);
    pFVar19 = pFVar19 + 4;
  } while( true );
}

// SetTriangleNormals @ 1433cc450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FDynamicMeshEditor::SetTriangleNormals
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TVector<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FDynamicMeshAttributeSet *pFVar10;
  uint *puVar11;
  uint *puVar12;
  FDynamicMeshAttributeSet *this_00;
  ForElementType<FSetElementId> FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  int local_d0 [2];
  undefined1 local_c8 [4];
  undefined1 local_c4 [20];
  undefined8 *local_b0;
  FIndex3i_u_0 *local_a8;
  FDynamicMeshEditor *local_a0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a0 = this;
  if (((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->HasAttributes()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                         ,0x4d1,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  pFVar5 = (this->Mesh->AttributeSet).Ptr;
  pFVar10 = this_00;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar10 = pFVar5;
  }
  if (0 < (pFVar10->NormalLayers).Array.ArrayNum) {
    this_00 = *(FDynamicMeshAttributeSet **)(pFVar10->NormalLayers).Array.AllocatorInstance.Data;
  }
  pFVar14 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  pFVar1 = pFVar14 + (longlong)iVar2 * 4;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  do {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_c8);
    }
    if (pFVar14 == pFVar1) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    uVar3 = *(uint *)pFVar14;
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)&(this_00->SkinWeightAttributes).field_0x8 +
                       (ulonglong)(uVar3 * 3 >> 9) * 8) + (ulonglong)(uVar3 * 3 & 0x1ff) * 4)) {
      TDynamicMeshOverlay<float,3>::UnsetTriangle
                ((TDynamicMeshOverlay<float,3> *)this_00,uVar3,true);
    }
    lVar6 = *(longlong *)
             ((local_a0->Mesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar3 >> 9) * 8);
    local_c4._4_8_ = *(undefined8 *)(lVar6 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
    local_c4._12_4_ = *(uint *)(lVar6 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
    local_d8 = (undefined1  [8])0xffffffffffffffff;
    local_d0[0] = -1;
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar13 = local_98.Hash.SecondaryData;
      }
      uVar4 = *(uint *)((longlong)FVar13 + (ulonglong)(local_98.HashSize - 1U & local_c4._4_4_) * 4)
      ;
      while (uVar4 != 0xffffffff) {
        puVar12 = (uint *)((longlong)(int)uVar4 * 0x10 + local_98.Elements._0_8_);
        if (*puVar12 == local_c4._4_4_) {
          puVar11 = puVar12 + 1;
          if (puVar12 == (uint *)0x0) {
            puVar11 = (uint *)0x0;
          }
          if (puVar11 != (uint *)0x0) {
            local_d8._4_4_ = 0xffffffff;
            local_d8._0_4_ = *puVar11;
            goto LAB_1433cc659;
          }
          break;
        }
        uVar4 = puVar12[2];
      }
    }
    iVar9 = TDynamicMeshOverlay<float,3>::AppendElement
                      ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
    local_d8._0_4_ = iVar9;
    local_b0 = (undefined8 *)(local_c4 + 4);
    local_a8 = (FIndex3i_u_0 *)local_d8;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (&local_98,(TPairInitializer<int_const_&,int_const_&> *)local_c4,(bool *)&local_b0);
LAB_1433cc659:
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar13 = local_98.Hash.SecondaryData;
      }
      uVar4 = *(uint *)((longlong)FVar13 + (ulonglong)(local_98.HashSize - 1U & local_c4._8_4_) * 4)
      ;
      while (uVar4 != 0xffffffff) {
        puVar12 = (uint *)((longlong)(int)uVar4 * 0x10 + local_98.Elements._0_8_);
        if (*puVar12 == local_c4._8_4_) {
          puVar11 = puVar12 + 1;
          if (puVar12 == (uint *)0x0) {
            puVar11 = (uint *)0x0;
          }
          if (puVar11 != (uint *)0x0) {
            local_d8._4_4_ = *puVar11;
            goto LAB_1433cc6dc;
          }
          break;
        }
        uVar4 = puVar12[2];
      }
    }
    iVar9 = TDynamicMeshOverlay<float,3>::AppendElement
                      ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
    local_d8._4_4_ = iVar9;
    local_b0 = (undefined8 *)(local_c4 + 8);
    local_a8 = (FIndex3i_u_0 *)((longlong)local_d8 + 4);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (&local_98,(TPairInitializer<int_const_&,int_const_&> *)local_c4,(bool *)&local_b0);
LAB_1433cc6dc:
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar13 = local_98.Hash.SecondaryData;
      }
      uVar4 = *(uint *)((longlong)FVar13 + (ulonglong)(local_98.HashSize - 1U & local_c4._12_4_) * 4
                       );
      while (uVar4 != 0xffffffff) {
        puVar12 = (uint *)((longlong)(int)uVar4 * 0x10 + local_98.Elements._0_8_);
        if (*puVar12 == local_c4._12_4_) {
          puVar11 = puVar12 + 1;
          if (puVar12 == (uint *)0x0) {
            puVar11 = (uint *)0x0;
          }
          if (puVar11 != (uint *)0x0) {
            local_d0[0] = *puVar11;
            goto LAB_1433cc74f;
          }
          break;
        }
        uVar4 = puVar12[2];
      }
    }
    local_d0[0] = TDynamicMeshOverlay<float,3>::AppendElement
                            ((TDynamicMeshOverlay<float,3> *)this_00,(float *)param_2);
    local_b0 = (undefined8 *)(local_c4 + 0xc);
    local_a8 = (FIndex3i_u_0 *)&(((FIndex3i_u_0 *)local_d8)->_s_0).C;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (&local_98,(TPairInitializer<int_const_&,int_const_&> *)local_c4,(bool *)&local_b0);
LAB_1433cc74f:
    TDynamicMeshOverlay<float,3>::SetTriangle
              ((TDynamicMeshOverlay<float,3> *)this_00,uVar3,
               (FIndex3i *)&((FIndex3i_u_0 *)local_d8)->_s_0,true);
    pFVar14 = pFVar14 + 4;
  } while( true );
}

// SetTriangleUVsFromProjection @ 1433cc850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshEditor::SetTriangleUVsFromProjection
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFrame3<double> *param_2,TVector2<float> *param_3,TVector2<float> *param_4,int param_5,
          bool param_6,bool param_7)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  FDynamicMeshAttributeSet *pFVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FDynamicMeshEditor *pFVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TDynamicMeshOverlay<float,2> *this_00;
  uint *puVar18;
  TVector<double> *pTVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ForElementType<FSetElementId> FVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int *piVar31;
  FScriptContainerElement *pFVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_268 [32];
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined1 local_218 [8];
  ForAnyElementType local_210;
  undefined8 local_208;
  undefined1 local_200 [8];
  undefined8 local_1f8;
  FDynamicMeshEditor *local_1f0;
  uint local_1e8;
  uint local_1e4;
  int *local_1e0;
  FIndex3i_u_0 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  TPairInitializer<int_const_&,int_const_&> local_170;
  FScriptContainerElement *local_160;
  longlong local_158;
  FScriptContainerElement *local_150;
  TVector<double> local_148;
  TVector<double> local_130;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_118;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_1e0 = &param_1->ArrayNum;
  if (param_1->ArrayNum != 0) {
    pFVar8 = (this->Mesh->AttributeSet).Ptr;
    local_1f8 = (TVector2<float>_u_0)param_3;
    local_1f0 = this;
    local_170.Value = (int *)param_2;
    if ((pFVar8 == (FDynamicMeshAttributeSet *)0x0) ||
       (iVar16 = (**(code **)(pFVar8->_padding_ + 0xa8))(), iVar16 <= param_5)) {
      local_1e0 = &param_1->ArrayNum;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh->HasAttributes() && Mesh->Attributes()->NumUVLayers() > UVLayerIndex"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                          ,0x5e3,L"");
      if (bVar15) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this_00 = (TDynamicMeshOverlay<float,2> *)
              FDynamicMeshAttributeSet::GetUVLayer((this->Mesh->AttributeSet).Ptr,param_5);
    local_1e4 = param_1->ArrayNum;
    uVar21 = (ulonglong)(int)local_1e4;
    pFVar32 = (param_1->AllocatorInstance).Data;
    local_118.Elements._0_8_ = 0;
    local_118.Elements._8_8_ = 0;
    local_118.Elements._32_8_ = 0;
    local_118.Elements._40_4_ = 0;
    local_118.Elements._52_4_ = 0;
    local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_118.HashSize = 0;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    local_1c8 = 0x7f7fffff;
    uStack_1c4 = 0x7f7fffff;
    local_190 = 0x7f7fffff7f7fffff;
    local_190._4_4_ = 3.4028235e+38;
    local_190._0_4_ = 3.4028235e+38;
    local_1c0 = 0xff7fffff;
    uStack_1bc = 0xff7fffff;
    local_188 = 0xff7fffffff7fffff;
    local_188._4_4_ = -3.4028235e+38;
    local_188._0_4_ = -3.4028235e+38;
    local_118.Elements._44_4_ = 0x80;
    local_118.Elements._48_4_ = 0xffffffff;
    local_160 = pFVar32 + uVar21 * 4;
    piVar31 = &param_1->ArrayNum;
    fVar33 = local_188._4_4_;
    fVar34 = (float)local_188;
    fVar35 = local_190._4_4_;
    fVar36 = (float)local_190;
    while( true ) {
      pFVar24 = local_160;
      if (*piVar31 != (int)uVar21) {
        local_218[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_218);
      }
      if (pFVar32 == pFVar24) break;
      uVar17 = *(uint *)pFVar32;
      local_1e8 = uVar17;
      if (-1 < *(int *)(*(longlong *)
                         ((this_00->ElementTriangles).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar17 * 3 >> 9) * 8) + (ulonglong)(uVar17 * 3 & 0x1ff) * 4)) {
        TDynamicMeshOverlay<float,2>::UnsetTriangle(this_00,uVar17,true);
      }
      piVar31 = local_170.Value;
      pFVar14 = local_1f0;
      lVar26 = 3;
      lVar27 = 0;
      lVar9 = *(longlong *)
               ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8
               );
      local_180 = *(undefined8 *)(lVar9 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
      local_178 = *(undefined4 *)(lVar9 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
      local_1d8._0_8_ = 0xffffffffffffffff;
      local_1d8._s_0.C = -1;
      do {
        puVar28 = (uint *)0x0;
        uVar17 = *(uint *)((longlong)&local_180 + lVar27);
        puVar23 = puVar28;
        if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_118.Hash;
          if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_118.Hash.SecondaryData;
          }
          uVar7 = *(uint *)((longlong)FVar22 + (ulonglong)(local_118.HashSize - 1U & uVar17) * 4);
          while ((puVar23 = puVar28, uVar7 != 0xffffffff &&
                 (puVar23 = (uint *)((longlong)(int)uVar7 * 0x10 + local_118.Elements._0_8_),
                 *puVar23 != uVar17))) {
            uVar7 = puVar23[2];
          }
        }
        puVar18 = puVar23 + 1;
        if (puVar23 == (uint *)0x0) {
          puVar18 = puVar28;
        }
        if (puVar18 == (uint *)0x0) {
          lVar9 = *(longlong *)
                   ((pFVar14->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar17 >> 9) * 8);
          pdVar1 = (double *)(lVar9 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
          local_148.field0_0x0._s_0.Z =
               *(double *)(lVar9 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
          dVar11 = *pdVar1 - (((TVector<double> *)piVar31)->field0_0x0)._s_0.X;
          dVar12 = local_148.field0_0x0._s_0.Z - (((TVector<double> *)piVar31)->field0_0x0)._s_0.Z;
          dVar13 = pdVar1[1] - (((TVector<double> *)piVar31)->field0_0x0)._s_0.Y;
          pTVar19 = TFrame3<double>::GetAxis((TFrame3<double> *)piVar31,&local_148,0);
          dVar4 = (pTVar19->field0_0x0)._s_0.Y;
          dVar5 = (pTVar19->field0_0x0)._s_0.X;
          dVar6 = (pTVar19->field0_0x0)._s_0.Z;
          pTVar19 = TFrame3<double>::GetAxis((TFrame3<double> *)piVar31,&local_130,1);
          local_1b8 = (float)(dVar13 * dVar4 + dVar11 * dVar5 + dVar12 * dVar6);
          local_1b4 = (float)(dVar13 * (pTVar19->field0_0x0)._s_0.Y +
                              dVar11 * (pTVar19->field0_0x0)._s_0.X +
                             dVar12 * (pTVar19->field0_0x0)._s_0.Z);
          if (local_1b8 < fVar36) {
            fVar36 = local_1b8;
          }
          if (fVar34 < local_1b8) {
            fVar34 = local_1b8;
          }
          if (local_1b4 < fVar35) {
            fVar35 = local_1b4;
          }
          if (fVar33 < local_1b4) {
            fVar33 = local_1b4;
          }
          pFVar24 = (FScriptContainerElement *)((longlong)&local_1d8 + lVar27);
          uVar17 = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_1b8);
          *(uint *)pFVar24 = uVar17;
          if (local_210.Data <= pFVar24) {
            if (pFVar24 < local_210.Data + (longlong)local_208._4_4_ * 4) {
              local_230 = (longlong)(int)local_208;
              local_228 = 4;
              local_240 = local_210.Data;
              local_248 = pFVar24;
              local_238 = (longlong)local_208._4_4_;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar15) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
          }
          iVar16 = (int)local_208;
          if ((int)local_208 == local_208._4_4_) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_210,(int *)((longlong)&local_208 + 4));
          }
          local_150 = pFVar24;
          local_208 = CONCAT44(local_208._4_4_,iVar16 + 1);
          *(uint *)(local_210.Data + (longlong)iVar16 * 4) = *(uint *)pFVar24;
          local_158 = (longlong)&local_180 + lVar27;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_118,&local_170,(bool *)&local_158);
        }
        else {
          *(uint *)((longlong)&local_1d8 + lVar27) = *puVar18;
        }
        lVar27 = lVar27 + 4;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      TDynamicMeshOverlay<float,2>::SetTriangle(this_00,local_1e8,(FIndex3i *)&local_1d8._s_0,true);
      uVar21 = (ulonglong)local_1e4;
      pFVar32 = pFVar32 + 4;
      this = pFVar14;
      piVar31 = local_1e0;
    }
    if (param_7) {
      local_1b0 = fVar34 - fVar36;
      if (fVar34 - fVar36 <= 0.0) {
        local_1b0 = 0.0;
      }
      fStack_1ac = fVar33 - fVar35;
      if (fVar33 - fVar35 <= 0.0) {
        fStack_1ac = 0.0;
      }
      local_1b0 = ((TVector2<float>_u_0_s_0 *)local_1f8)->X / local_1b0;
      fStack_1ac = ((TVector2<float>_u_0_s_0 *)local_1f8)->Y / fStack_1ac;
      local_1f8._4_4_ = fStack_1ac;
      local_1f8._0_4_ = local_1b0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      local_1f8 = *local_1f8;
    }
    iVar16 = (int)local_208;
    pFVar32 = local_210.Data + (longlong)(int)local_208 * 4;
    fVar34 = (float)local_1f8._4_4_;
    fVar33 = (float)(undefined4)local_1f8;
    FVar25.Data = local_210.Data;
    while( true ) {
      if ((int)local_208 != iVar16) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_200);
      }
      if (FVar25.Data == pFVar32) break;
      uVar17 = *(uint *)FVar25.Data;
      pFVar24 = (this_00->Elements).Blocks.AllocatorInstance.Data;
      uVar21 = (ulonglong)((uVar17 & 0x7fffffff) >> 8);
      uVar30 = (ulonglong)(uVar17 * 2 + 1 & 0x1ff);
      uVar29 = (ulonglong)(uVar17 * 2 & 0x1ff);
      lVar9 = *(longlong *)(pFVar24 + (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8);
      fVar2 = *(float *)(lVar9 + uVar29 * 4);
      fVar3 = *(float *)(*(longlong *)(pFVar24 + uVar21 * 8) + uVar30 * 4);
      if (param_6) {
        local_1a8 = (fVar2 - fVar36) * fVar33;
        fStack_1a4 = (fVar3 - fVar35) * fVar34;
        uVar20 = CONCAT44(fStack_1a4,local_1a8);
      }
      else {
        local_1a0 = fVar2 * fVar33;
        fStack_19c = fVar3 * fVar34;
        uVar20 = CONCAT44(fStack_19c,local_1a0);
      }
      FVar25.Data = FVar25.Data + 4;
      local_198._0_4_ = (float)uVar20;
      local_198._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
      fVar2 = (param_4->field0_0x0)._s_0.Y;
      *(float *)(lVar9 + uVar29 * 4) = (float)local_198 + (param_4->field0_0x0)._s_0.X;
      *(float *)(*(longlong *)((this_00->Elements).Blocks.AllocatorInstance.Data + uVar21 * 8) +
                uVar30 * 4) = local_198._4_4_ + fVar2;
      local_198 = uVar20;
    }
    if (local_210.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data);
    }
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
  }
  return;
}

// SetTriangleUVsFromProjection @ 1433ccf00

void __thiscall
UE::Geometry::FDynamicMeshEditor::SetTriangleUVsFromProjection
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFrame3<double> *param_2,float param_3,TVector2<float> *param_4,bool param_5,int param_6)

{
  TVector2<float>_u_0 local_18 [3];
  
  local_18[0]._0_4_ = param_3;
  local_18[0]._4_4_ = param_3;
  SetTriangleUVsFromProjection
            (this,param_1,param_2,(TVector2<float> *)&local_18[0]._s_0,param_4,param_6,param_5,false
            );
  return;
}

// SetTubeNormals @ 1433ccf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshEditor::SetTubeNormals
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,bool param_6)

{
  FDynamicMesh3 **ppFVar1;
  undefined8 *puVar2;
  TArray<int,TSizedDefaultAllocator<32>_> **ppTVar3;
  double *pdVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FDynamicMesh3 *pFVar10;
  FDynamicMesh3 *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ForAnyElementType FVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  FDynamicMeshAttributeSet *pFVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  ForElementType<FSetElementId> FVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar33;
  int *piVar34;
  FDynamicMesh3 **ppFVar35;
  undefined4 *puVar36;
  int *piVar37;
  longlong lVar38;
  FScriptContainerElement *pFVar39;
  TArray<int,TSizedDefaultAllocator<32>_> **ppTVar40;
  longlong lVar41;
  int *piVar42;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar43;
  FDynamicMeshAttributeSet *pFVar44;
  int *piVar45;
  FDynamicMeshEditor *pFVar46;
  uint uVar47;
  int *piVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auStack_358 [32];
  int *local_338;
  longlong local_330;
  float local_328;
  undefined1 local_324 [4];
  uint local_320;
  float local_31c;
  float local_318;
  float local_314;
  FDynamicMeshEditor *local_310;
  TArray<int,TSizedDefaultAllocator<32>_> *local_308;
  float local_300;
  longlong local_2f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2f0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2e0;
  longlong local_2d8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_2d0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_2c0;
  FDynamicMesh3 *local_2b0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_298;
  TArray<int,TSizedDefaultAllocator<32>_> *local_288;
  longlong local_280;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_278;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_268;
  undefined4 local_258;
  int local_254;
  TArray<int,TSizedDefaultAllocator<32>_> *local_250;
  TDynamicMeshOverlay<float,3> *local_248;
  TArray<int,TSizedDefaultAllocator<32>_> *local_240;
  float local_238;
  float local_234;
  float local_230;
  FIndex3i_u_0 local_228;
  undefined8 local_218;
  double local_208;
  TPairInitializer<int_const_&,int_&&> local_200;
  undefined4 *local_1f0;
  int *local_1e8;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_138;
  ulonglong local_e8;
  
  puVar36 = &local_258;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_308 = param_4;
  local_250 = param_5;
  local_310 = this;
  local_2f0 = param_2;
  local_288 = param_3;
  local_240 = param_1;
  if (((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh->HasAttributes()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                          ,0x51a,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((param_3->ArrayNum != param_5->ArrayNum) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("MatchedIndices1.Num() == MatchedIndices2.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                          ,0x51b,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar44 = (FDynamicMeshAttributeSet *)0x0;
  uVar32 = param_3->ArrayNum;
  pFVar9 = (this->Mesh->AttributeSet).Ptr;
  pFVar23 = pFVar44;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar23 = pFVar9;
  }
  if ((pFVar23->NormalLayers).Array.ArrayNum < 1) {
    local_248 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    local_248 = *(TDynamicMeshOverlay<float,3> **)
                 (pFVar23->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ArrayNum = 0;
  local_298.ArrayMax = 0;
  local_320 = uVar32;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,uVar32,Default);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_298,uVar32,Default);
  local_31c = __real_3f800000;
  pTVar43 = local_308;
  fVar50 = __real_3f800000;
  local_280 = (longlong)(int)uVar32;
  if (0 < (int)uVar32) {
    lVar24 = (longlong)(int)(uVar32 - 1);
    local_2f8 = 0;
    local_2d8 = 0;
    local_2e0 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar24 * 0xc);
    uVar30 = uVar32 - 1;
    do {
      lVar38 = local_2f8;
      uVar32 = 0;
      if ((int)uVar30 < param_3->ArrayNum) {
        uVar32 = ~uVar30 >> 0x1f;
      }
      if (uVar32 == 0) {
        local_338 = (int *)(longlong)(int)uVar30;
        local_330 = (longlong)param_3->ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      uVar47 = (uint)pFVar44;
      uVar32 = *(uint *)((param_3->AllocatorInstance).Data + lVar24 * 4);
      uVar27 = 0;
      if ((int)uVar47 < local_288->ArrayNum) {
        uVar27 = ~uVar47 >> 0x1f;
      }
      if (uVar27 == 0) {
        local_338 = (int *)(longlong)(int)uVar47;
        local_330 = (longlong)local_288->ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      uVar27 = *(uint *)((local_288->AllocatorInstance).Data + lVar38 * 4);
      uVar20 = 0;
      if ((int)uVar30 < local_250->ArrayNum) {
        uVar20 = ~uVar30 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_338 = (int *)(longlong)(int)uVar30;
        local_330 = (longlong)local_250->ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pTVar43 = local_250;
      uVar20 = *(uint *)((local_250->AllocatorInstance).Data + lVar24 * 4);
      uVar28 = 0;
      if ((int)uVar47 < local_250->ArrayNum) {
        uVar28 = ~uVar47 >> 0x1f;
      }
      if (uVar28 == 0) {
        local_338 = (int *)(longlong)(int)uVar47;
        local_330 = (longlong)local_250->ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      lVar24 = local_2f8;
      uVar28 = *(uint *)((pTVar43->AllocatorInstance).Data + local_2f8 * 4);
      if (uVar32 == uVar27) {
        uVar27 = (int)(uVar27 + 1) % local_2f0->ArrayNum;
      }
      if (uVar20 == uVar28) {
        uVar28 = (int)(uVar28 + 1) % local_308->ArrayNum;
      }
      local_2b0 = local_310->Mesh;
      uVar21 = 0;
      if ((int)uVar32 < local_2f0->ArrayNum) {
        uVar21 = ~uVar32 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (local_338 = (int *)(longlong)(int)uVar32, local_330 = (longlong)local_2f0->ArrayNum,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar32 = *(uint *)((local_2f0->AllocatorInstance).Data + (longlong)(int)uVar32 * 4);
      uVar26 = (ulonglong)(uVar32 & 0x1ff);
      lVar38 = *(longlong *)
                ((local_2b0->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar32 >> 9) * 8)
      ;
      pdVar4 = (double *)(lVar38 + uVar26 * 0x18);
      local_1c8 = *pdVar4;
      dStack_1c0 = pdVar4[1];
      pFVar10 = local_310->Mesh;
      local_1b8 = *(double *)(lVar38 + 0x10 + uVar26 * 0x18);
      fVar50 = (float)local_1c8;
      uVar32 = 0;
      if ((int)uVar27 < local_2f0->ArrayNum) {
        uVar32 = ~uVar27 >> 0x1f;
      }
      local_2e8 = (TArray<int,TSizedDefaultAllocator<32>_> *)CONCAT44(local_2e8._4_4_,fVar50);
      fVar63 = (float)local_1b8;
      fVar61 = (float)dStack_1c0;
      local_328 = fVar61;
      local_318 = fVar63;
      if (uVar32 == 0) {
        local_338 = (int *)(longlong)(int)uVar27;
        local_330 = (longlong)local_2f0->ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar46 = local_310;
      uVar32 = *(uint *)((local_2f0->AllocatorInstance).Data + (longlong)(int)uVar27 * 4);
      uVar26 = (ulonglong)(uVar32 & 0x1ff);
      pFVar11 = local_310->Mesh;
      lVar38 = *(longlong *)
                ((pFVar10->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar32 >> 9) * 8);
      pdVar4 = (double *)(lVar38 + uVar26 * 0x18);
      local_1b0 = *pdVar4;
      dStack_1a8 = pdVar4[1];
      local_1a0 = *(double *)(lVar38 + 0x10 + uVar26 * 0x18);
      fVar56 = (float)local_1b0;
      uVar32 = 0;
      if ((int)uVar20 < local_308->ArrayNum) {
        uVar32 = ~uVar20 >> 0x1f;
      }
      fVar53 = (float)dStack_1a8;
      local_314 = (float)local_1a0;
      if ((uVar32 == 0) &&
         (local_338 = (int *)(longlong)(int)uVar20, local_330 = (longlong)local_308->ArrayNum,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar43 = local_308;
      uVar32 = *(uint *)((local_308->AllocatorInstance).Data + (longlong)(int)uVar20 * 4);
      pFVar10 = pFVar46->Mesh;
      uVar26 = (ulonglong)(uVar32 & 0x1ff);
      lVar38 = *(longlong *)
                ((pFVar11->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar32 >> 9) * 8);
      pdVar4 = (double *)(lVar38 + uVar26 * 0x18);
      local_198 = *pdVar4;
      dStack_190 = pdVar4[1];
      local_188 = *(double *)(lVar38 + 0x10 + uVar26 * 0x18);
      uVar32 = 0;
      if ((int)uVar28 < local_308->ArrayNum) {
        uVar32 = ~uVar28 >> 0x1f;
      }
      fVar60 = (float)local_198;
      fVar49 = (float)dStack_190;
      fVar59 = (float)local_188;
      if (uVar32 == 0) {
        local_338 = (int *)(longlong)(int)uVar28;
        local_330 = (longlong)local_308->ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      fVar53 = fVar53 - fVar61;
      local_300 = fVar56 - fVar50;
      local_2f8 = CONCAT44(local_2f8._4_4_,fVar53);
      uVar32 = *(uint *)((pTVar43->AllocatorInstance).Data + (longlong)(int)uVar28 * 4);
      uVar26 = (ulonglong)(uVar32 & 0x1ff);
      lVar38 = *(longlong *)
                ((pFVar10->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar32 >> 9) * 8);
      pdVar4 = (double *)(lVar38 + uVar26 * 0x18);
      local_180 = *pdVar4;
      dStack_178 = pdVar4[1];
      local_170 = *(double *)(lVar38 + 0x10 + uVar26 * 0x18);
      fVar62 = (float)local_180 - fVar60;
      fVar60 = fVar60 - local_2e8._0_4_;
      fVar64 = (float)dStack_178 - fVar49;
      fVar49 = fVar49 - local_328;
      fVar65 = (float)local_170 - fVar59;
      fVar59 = fVar59 - local_318;
      fVar61 = fVar59 * fVar53 - fVar49 * (local_314 - fVar63);
      fVar63 = fVar60 * (local_314 - fVar63) - fVar59 * local_300;
      fVar56 = fVar49 * local_300 - fVar60 * fVar53;
      fVar50 = SQRT(fVar63 * fVar63 + fVar61 * fVar61 + fVar56 * fVar56);
      if (fVar50 <= 0.0) {
        fVar61 = 0.0;
        fVar63 = 0.0;
        fVar56 = 0.0;
      }
      else {
        fVar50 = local_31c / fVar50;
        fVar61 = fVar61 * fVar50;
        fVar63 = fVar63 * fVar50;
        fVar56 = fVar56 * fVar50;
      }
      uVar32 = 0;
      if ((int)uVar30 < local_2a8.ArrayNum) {
        uVar32 = ~uVar30 >> 0x1f;
      }
      if (uVar32 == 0) {
        local_338 = (int *)(longlong)(int)uVar30;
        local_330 = (longlong)local_2a8.ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pTVar33 = local_2e0;
      fVar50 = local_31c;
      *(ulonglong *)(local_2a8.AllocatorInstance.Data + (longlong)local_2e0) =
           CONCAT44(fVar63,fVar61);
      fVar53 = fVar59 * fVar64 - fVar49 * fVar65;
      fVar59 = fVar60 * fVar65 - fVar59 * fVar62;
      fVar63 = fVar49 * fVar62 - fVar60 * fVar64;
      *(float *)(local_2a8.AllocatorInstance.Data + (longlong)local_2e0 + 8) = fVar56;
      fVar61 = SQRT(fVar59 * fVar59 + fVar53 * fVar53 + fVar63 * fVar63);
      if (fVar61 <= 0.0) {
        fVar53 = 0.0;
        fVar59 = 0.0;
        fVar63 = 0.0;
      }
      else {
        fVar61 = local_31c / fVar61;
        fVar53 = fVar53 * fVar61;
        fVar59 = fVar59 * fVar61;
        fVar63 = fVar63 * fVar61;
      }
      uVar32 = 0;
      if ((int)uVar30 < local_298.ArrayNum) {
        uVar32 = ~uVar30 >> 0x1f;
      }
      if (uVar32 == 0) {
        local_338 = (int *)(longlong)(int)uVar30;
        local_330 = (longlong)local_298.ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      local_2f8 = lVar24 + 1;
      local_2e0 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_2d8;
      local_2d8 = local_2d8 + 0xc;
      pFVar44 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar47 + 1);
      *(ulonglong *)(local_298.AllocatorInstance.Data + (longlong)pTVar33) = CONCAT44(fVar59,fVar53)
      ;
      *(float *)(local_298.AllocatorInstance.Data + (longlong)pTVar33 + 8) = fVar63;
      param_3 = local_288;
      uVar30 = uVar47;
      uVar32 = local_320;
    } while (local_2f8 < local_280);
  }
  piVar45 = (int *)0x0;
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_278,uVar32,Default);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_268,uVar32,Default);
  pTVar33 = local_2f0;
  local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.ArrayNum = 0;
  local_2d0.ArrayMax = 0;
  local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.ArrayNum = 0;
  local_2c0.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_2d0,local_2f0->ArrayNum,Default);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_2c0,pTVar43->ArrayNum,Default);
  lVar24 = (longlong)(int)uVar32;
  if (0 < (int)uVar32) {
    piVar34 = piVar45;
    piVar42 = piVar45;
    piVar48 = (int *)((longlong)(int)(uVar32 - 1) * 0xc);
    uVar32 = uVar32 - 1;
    do {
      piVar37 = piVar34;
      uVar30 = 0;
      if ((int)uVar32 < local_2a8.ArrayNum) {
        uVar30 = ~uVar32 >> 0x1f;
      }
      if (uVar30 == 0) {
        local_338 = (int *)(longlong)(int)uVar32;
        local_330 = (longlong)local_2a8.ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      FVar18.Data = local_2a8.AllocatorInstance.Data;
      uVar27 = (uint)piVar45;
      uVar30 = 0;
      if ((int)uVar27 < local_2a8.ArrayNum) {
        uVar30 = ~uVar27 >> 0x1f;
      }
      if (uVar30 == 0) {
        local_330 = (longlong)local_2a8.ArrayNum;
        local_338 = (int *)(longlong)(int)uVar27;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      fVar56 = *(float *)(local_2a8.AllocatorInstance.Data + 4 + (longlong)piVar37) +
               *(float *)((longlong)(piVar48 + 1) + FVar18.Data);
      fVar63 = *(float *)((longlong)piVar48 + FVar18.Data) +
               *(float *)(local_2a8.AllocatorInstance.Data + (longlong)piVar37);
      fVar53 = *(float *)(local_2a8.AllocatorInstance.Data + 8 + (longlong)piVar37) +
               *(float *)((longlong)(piVar48 + 2) + FVar18.Data);
      fVar61 = SQRT(fVar56 * fVar56 + fVar63 * fVar63 + fVar53 * fVar53);
      if (fVar61 <= 0.0) {
        fVar63 = 0.0;
        fVar56 = 0.0;
        fVar53 = 0.0;
      }
      else {
        fVar61 = fVar50 / fVar61;
        fVar63 = fVar63 * fVar61;
        fVar56 = fVar56 * fVar61;
        fVar53 = fVar53 * fVar61;
      }
      uVar30 = 0;
      if ((int)uVar27 < local_278.ArrayNum) {
        uVar30 = ~uVar27 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (local_338 = piVar42, local_330 = (longlong)local_278.ArrayNum,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(ulonglong *)(local_278.AllocatorInstance.Data + (longlong)piVar37) = CONCAT44(fVar56,fVar63)
      ;
      *(float *)(local_278.AllocatorInstance.Data + 8 + (longlong)piVar37) = fVar53;
      uVar30 = 0;
      if ((int)uVar32 < local_298.ArrayNum) {
        uVar30 = ~uVar32 >> 0x1f;
      }
      if (uVar30 == 0) {
        local_338 = (int *)(longlong)(int)uVar32;
        local_330 = (longlong)local_298.ArrayNum;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      FVar18.Data = local_298.AllocatorInstance.Data;
      uVar32 = 0;
      if ((int)uVar27 < local_298.ArrayNum) {
        uVar32 = ~uVar27 >> 0x1f;
      }
      if (uVar32 == 0) {
        local_330 = (longlong)local_298.ArrayNum;
        local_338 = (int *)(longlong)(int)uVar27;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      fVar63 = *(float *)(local_298.AllocatorInstance.Data + (longlong)piVar37) +
               *(float *)(FVar18.Data + (longlong)piVar48);
      fVar56 = *(float *)(local_298.AllocatorInstance.Data + 4 + (longlong)piVar37) +
               *(float *)(FVar18.Data + 4 + (longlong)piVar48);
      fVar53 = *(float *)(local_298.AllocatorInstance.Data + 8 + (longlong)piVar37) +
               *(float *)(FVar18.Data + 8 + (longlong)piVar48);
      fVar61 = SQRT(fVar56 * fVar56 + fVar63 * fVar63 + fVar53 * fVar53);
      if (fVar61 <= 0.0) {
        fVar63 = 0.0;
        fVar56 = 0.0;
        fVar53 = 0.0;
      }
      else {
        fVar61 = fVar50 / fVar61;
        fVar63 = fVar63 * fVar61;
        fVar56 = fVar56 * fVar61;
        fVar53 = fVar53 * fVar61;
      }
      uVar32 = 0;
      if ((int)uVar27 < local_268.ArrayNum) {
        uVar32 = ~uVar27 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (local_338 = piVar42, local_330 = (longlong)local_268.ArrayNum,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      piVar45 = (int *)(ulonglong)(uVar27 + 1);
      piVar42 = (int *)((longlong)piVar42 + 1);
      *(ulonglong *)(local_268.AllocatorInstance.Data + (longlong)piVar37) = CONCAT44(fVar56,fVar63)
      ;
      *(float *)(local_268.AllocatorInstance.Data + 8 + (longlong)piVar37) = fVar53;
      piVar34 = piVar37 + 3;
      piVar48 = piVar37;
      uVar32 = uVar27;
    } while ((longlong)piVar42 < local_280);
    uVar32 = (uint)local_280;
    lVar24 = local_280;
    pTVar33 = local_2f0;
    pTVar43 = local_308;
  }
  lVar38 = 0;
  if (param_6) {
    local_31c = __real_bf800000;
    fVar50 = __real_bf800000;
  }
  uVar57 = SUB84(__real_3ff0000000000000,0);
  uVar58 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_300 = (float)(uVar32 - 1);
  local_314 = 0.0;
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  do {
    local_328 = *(float *)((longlong)&local_2d0.ArrayNum + lVar38);
    local_2e8 = pTVar43;
    local_2e0 = local_250;
    if (local_314 == 0.0) {
      local_2e8 = pTVar33;
      local_2e0 = local_288;
    }
    local_320 = 0;
    local_2b0 = (FDynamicMesh3 *)0x0;
    if (0 < lVar24) {
      local_2d8 = 0;
      lVar25 = lVar24 * 4 + -4;
      lVar24 = lVar24 * 0xc + -0xc;
      fVar61 = local_300;
      do {
        pTVar33 = local_2e0;
        pTVar43 = local_2e8;
        uVar32 = local_320;
        uVar30 = 0;
        if ((int)fVar61 < local_2e0->ArrayNum) {
          uVar30 = ~(uint)fVar61 >> 0x1f;
        }
        if (uVar30 == 0) {
          local_338 = (int *)(longlong)(int)fVar61;
          local_330 = (longlong)local_2e0->ArrayNum;
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        fVar50 = *(float *)((pTVar33->AllocatorInstance).Data + lVar25);
        piVar45 = (int *)(longlong)(int)fVar50;
        uVar30 = 0;
        if ((int)uVar32 < local_2e0->ArrayNum) {
          uVar30 = ~uVar32 >> 0x1f;
        }
        local_318 = fVar50;
        if (uVar30 == 0) {
          local_338 = (int *)(longlong)(int)uVar32;
          local_330 = (longlong)local_2e0->ArrayNum;
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        iVar8 = *(int *)((longlong)&local_278.ArrayNum + lVar38);
        fVar63 = *(float *)((local_2e0->AllocatorInstance).Data + (longlong)local_2b0 * 4);
        piVar34 = (int *)(longlong)(int)fVar63;
        uVar30 = 0;
        if ((int)local_320 < iVar8) {
          uVar30 = ~uVar32 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (local_338 = (int *)(longlong)(int)local_320, local_330 = (longlong)iVar8,
           bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar25 = *(longlong *)((longlong)&local_278.AllocatorInstance.Data + lVar38);
        iVar8 = *(int *)((longlong)&local_2d0.ArrayNum + lVar38);
        uVar6 = *(undefined8 *)(local_2d8 + lVar25);
        uVar54 = *(undefined4 *)(local_2d8 + 8 + lVar25);
        uVar32 = 0;
        if ((int)fVar63 < iVar8) {
          uVar32 = ~(uint)fVar63 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (local_338 = piVar34, local_330 = (longlong)iVar8,
           bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar25 = *(longlong *)((longlong)&local_2d0.AllocatorInstance.Data + lVar38);
        *(undefined8 *)(lVar25 + (longlong)piVar34 * 0xc) = uVar6;
        *(undefined4 *)(lVar25 + 8 + (longlong)piVar34 * 0xc) = uVar54;
        if (fVar50 != fVar63) {
          iVar8 = *(int *)((longlong)&local_278.ArrayNum + lVar38);
          uVar32 = 0;
          if ((int)fVar61 < iVar8) {
            uVar32 = ~(uint)fVar61 >> 0x1f;
          }
          if (uVar32 == 0) {
            local_338 = (int *)(longlong)(int)fVar61;
            local_330 = (longlong)iVar8;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          lVar25 = *(longlong *)((longlong)&local_278.AllocatorInstance.Data + lVar38);
          iVar8 = *(int *)((longlong)&local_2d0.ArrayNum + lVar38);
          uVar6 = *(undefined8 *)(lVar25 + lVar24);
          uVar54 = *(undefined4 *)(lVar25 + 8 + lVar24);
          uVar32 = 0;
          if ((int)fVar50 < iVar8) {
            uVar32 = ~(uint)fVar50 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (local_338 = piVar45, local_330 = (longlong)iVar8,
             bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar24 = *(longlong *)((longlong)&local_2d0.AllocatorInstance.Data + lVar38);
          *(undefined8 *)(lVar24 + (longlong)piVar45 * 0xc) = uVar6;
          *(undefined4 *)(lVar24 + 8 + (longlong)piVar45 * 0xc) = uVar54;
          pFVar10 = local_310->Mesh;
          uVar32 = 0;
          if ((int)fVar50 < pTVar43->ArrayNum) {
            uVar32 = ~(uint)fVar50 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (local_338 = piVar45, local_330 = (longlong)pTVar43->ArrayNum,
             bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar46 = local_310;
          uVar32 = *(uint *)((pTVar43->AllocatorInstance).Data + (longlong)piVar45 * 4);
          pFVar11 = local_310->Mesh;
          uVar26 = (ulonglong)(uVar32 & 0x1ff);
          lVar24 = *(longlong *)
                    ((pFVar10->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar32 >> 9) * 8);
          local_208 = *(double *)(lVar24 + 0x10 + uVar26 * 0x18);
          auVar7 = *(undefined1 (*) [16])(lVar24 + uVar26 * 0x18);
          uVar32 = 0;
          if ((int)fVar63 < pTVar43->ArrayNum) {
            uVar32 = ~(uint)fVar63 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (local_338 = piVar34, local_330 = (longlong)pTVar43->ArrayNum,
             bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar54 = SUB84(local_208,0);
          uVar55 = (undefined4)((ulonglong)local_208 >> 0x20);
          local_218 = local_208;
          uVar32 = *(uint *)((pTVar43->AllocatorInstance).Data + (longlong)piVar34 * 4);
          uVar26 = (ulonglong)(uVar32 & 0x1ff);
          local_1d8._8_4_ = auVar7._8_4_;
          local_1d8._0_8_ = auVar7._8_8_;
          local_1d8._12_4_ = auVar7._12_4_;
          lVar24 = *(longlong *)
                    ((pFVar11->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar32 >> 9) * 8);
          pdVar4 = (double *)(lVar24 + uVar26 * 0x18);
          local_168 = *pdVar4;
          dStack_160 = pdVar4[1];
          local_158 = *(double *)(lVar24 + 0x10 + uVar26 * 0x18);
          dVar17 = local_168 - auVar7._0_8_;
          dVar15 = dStack_160 - auVar7._8_8_;
          dVar16 = local_158 - local_208;
          dVar14 = dVar15 * dVar15 + dVar17 * dVar17 + dVar16 * dVar16;
          if ((dVar14 < __real_3f1a36e2e0000000) &&
             (lVar24 = (longlong)(int)((int)fVar50 + 1) % (longlong)(int)local_328,
             (float)lVar24 != fVar63)) {
            do {
              uVar32 = (uint)lVar24;
              iVar8 = *(int *)((longlong)&local_2d0.ArrayNum + lVar38);
              uVar30 = 0;
              if ((int)fVar63 < iVar8) {
                uVar30 = ~(uint)fVar63 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (local_338 = piVar34, local_330 = (longlong)iVar8,
                 bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar24 = *(longlong *)((longlong)&local_2d0.AllocatorInstance.Data + lVar38);
              iVar8 = *(int *)((longlong)&local_2d0.ArrayNum + lVar38);
              uVar6 = *(undefined8 *)(lVar24 + (longlong)piVar34 * 0xc);
              uVar51 = *(undefined4 *)(lVar24 + 8 + (longlong)piVar34 * 0xc);
              uVar30 = 0;
              if ((int)uVar32 < iVar8) {
                uVar30 = ~uVar32 >> 0x1f;
              }
              if (uVar30 == 0) {
                local_338 = (int *)(longlong)(int)uVar32;
                local_330 = (longlong)iVar8;
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar19) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              lVar24 = *(longlong *)((longlong)&local_2d0.AllocatorInstance.Data + lVar38);
              *(undefined8 *)(lVar24 + (longlong)(int)uVar32 * 0xc) = uVar6;
              *(undefined4 *)(lVar24 + 8 + (longlong)(int)uVar32 * 0xc) = uVar51;
              lVar24 = (longlong)(int)(uVar32 + 1) % (longlong)(int)local_328;
              pFVar46 = local_310;
            } while ((float)lVar24 != fVar63);
          }
          lVar24 = (longlong)(int)((int)fVar50 + 1) % (longlong)(int)local_328;
          if ((float)lVar24 != fVar63) {
            piVar45 = (int *)(longlong)(int)fVar50;
            local_2f8 = CONCAT44(local_2f8._4_4_,~(uint)fVar63 >> 0x1f);
            uVar51 = auVar7._8_4_;
            uVar52 = auVar7._12_4_;
            local_200.Value = piVar45;
            do {
              uVar32 = (uint)lVar24;
              pFVar10 = pFVar46->Mesh;
              uVar30 = 0;
              if ((int)uVar32 < local_2e8->ArrayNum) {
                uVar30 = ~uVar32 >> 0x1f;
              }
              if (uVar30 == 0) {
                local_338 = (int *)(longlong)(int)uVar32;
                local_330 = (longlong)local_2e8->ArrayNum;
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar19) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              uVar30 = *(uint *)((local_2e8->AllocatorInstance).Data + (longlong)(int)uVar32 * 4);
              uVar26 = (ulonglong)(uVar30 & 0x1ff);
              lVar24 = *(longlong *)
                        ((pFVar10->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar30 >> 9) * 8);
              pdVar4 = (double *)(lVar24 + uVar26 * 0x18);
              local_150 = *pdVar4;
              dStack_148 = pdVar4[1];
              local_140 = *(double *)(lVar24 + 0x10 + uVar26 * 0x18);
              iVar8 = *(int *)((longlong)&local_2d0.ArrayNum + lVar38);
              iVar22 = 0;
              if ((int)fVar63 < iVar8) {
                iVar22 = (int)local_2f8;
              }
              dVar13 = ((dStack_148 - (double)CONCAT44(uVar52,uVar51)) * dVar15 +
                        (local_150 - auVar7._0_8_) * dVar17 +
                       (local_140 - (double)CONCAT44(uVar55,uVar54)) * dVar16) *
                       ((double)CONCAT44(uVar58,uVar57) / dVar14);
              if ((iVar22 == 0) &&
                 (local_338 = piVar34, local_330 = (longlong)iVar8,
                 bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar24 = *(longlong *)((longlong)&local_2d0.AllocatorInstance.Data + lVar38);
              iVar8 = *(int *)((longlong)&local_2d0.ArrayNum + lVar38);
              fVar49 = (float)dVar13;
              fVar61 = *(float *)(lVar24 + (longlong)piVar34 * 0xc);
              fVar56 = *(float *)(lVar24 + 4 + (longlong)piVar34 * 0xc);
              fVar53 = *(float *)(lVar24 + 8 + (longlong)piVar34 * 0xc);
              uVar30 = 0;
              if ((int)local_318 < iVar8) {
                uVar30 = ~(uint)fVar50 >> 0x1f;
              }
              if (uVar30 == 0) {
                local_338 = local_200.Value;
                local_330 = (longlong)iVar8;
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar19) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              lVar24 = *(longlong *)((longlong)&local_2d0.AllocatorInstance.Data + lVar38);
              iVar8 = *(int *)((longlong)&local_2d0.ArrayNum + lVar38);
              fVar64 = (float)(__real_3ff0000000000000 - dVar13);
              fVar59 = *(float *)(lVar24 + (longlong)piVar45 * 0xc);
              fVar60 = *(float *)(lVar24 + 4 + (longlong)piVar45 * 0xc);
              fVar62 = *(float *)(lVar24 + 8 + (longlong)piVar45 * 0xc);
              uVar30 = 0;
              if ((int)uVar32 < iVar8) {
                uVar30 = ~uVar32 >> 0x1f;
              }
              if (uVar30 == 0) {
                local_338 = (int *)(longlong)(int)uVar32;
                local_330 = (longlong)iVar8;
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar19) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              lVar25 = (longlong)(int)uVar32;
              lVar24 = *(longlong *)((longlong)&local_2d0.AllocatorInstance.Data + lVar38);
              *(float *)(lVar24 + lVar25 * 0xc) = fVar64 * fVar59 + fVar49 * fVar61;
              *(float *)(lVar24 + 4 + lVar25 * 0xc) = fVar64 * fVar60 + fVar49 * fVar56;
              *(float *)(lVar24 + 8 + lVar25 * 0xc) = fVar64 * fVar62 + fVar49 * fVar53;
              uVar54 = SUB84(local_218,0);
              uVar55 = (undefined4)((ulonglong)local_218 >> 0x20);
              lVar24 = (longlong)(int)(uVar32 + 1) % (longlong)(int)local_328;
              pFVar46 = local_310;
              uVar51 = local_1d8._0_4_;
              uVar52 = local_1d8._4_4_;
            } while ((float)lVar24 != fVar63);
            uVar57 = SUB84(__real_3ff0000000000000,0);
            uVar58 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          }
        }
        lVar41 = local_2d8 + 0xc;
        lVar25 = (longlong)local_2b0 * 4;
        local_2b0 = (FDynamicMesh3 *)((longlong)&local_2b0->_padding_ + 1);
        uVar32 = local_320 + 1;
        lVar24 = local_2d8;
        fVar50 = local_31c;
        fVar61 = (float)local_320;
        local_320 = uVar32;
        local_2d8 = lVar41;
      } while ((longlong)local_2b0 < local_280);
    }
    pTVar43 = local_2e8;
    uVar32 = 0;
    if (0 < (int)local_328) {
      lVar25 = 0;
      piVar45 = (int *)0x0;
      lVar24 = 0;
      do {
        iVar8 = pTVar43->ArrayNum;
        uVar30 = 0;
        if ((int)uVar32 < iVar8) {
          uVar30 = ~uVar32 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (local_338 = piVar45, local_330 = (longlong)iVar8,
           bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_258 = *(undefined4 *)((pTVar43->AllocatorInstance).Data + lVar24);
        iVar8 = *(int *)((longlong)&local_2d0.ArrayNum + lVar38);
        uVar30 = 0;
        if ((int)uVar32 < iVar8) {
          uVar30 = ~uVar32 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (local_338 = piVar45, local_330 = (longlong)iVar8,
           bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar41 = *(longlong *)((longlong)&local_2d0.AllocatorInstance.Data + lVar38);
        local_230 = fVar50 * *(float *)(lVar41 + 8 + lVar25);
        local_234 = fVar50 * *(float *)(lVar41 + 4 + lVar25);
        local_238 = fVar50 * *(float *)(lVar41 + lVar25);
        local_254 = TDynamicMeshOverlay<float,3>::AppendElement(local_248,&local_238);
        local_1e8 = &local_254;
        local_1f0 = puVar36;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&&>_>(&local_138,&local_200,(bool *)&local_1f0);
        uVar32 = uVar32 + 1;
        piVar45 = (int *)((longlong)piVar45 + 1);
        lVar24 = lVar24 + 4;
        lVar25 = lVar25 + 0xc;
      } while ((int)uVar32 < (int)local_328);
    }
    lVar38 = lVar38 + 0x10;
    local_314 = (float)((int)local_314 + 1);
    lVar24 = local_280;
    pTVar33 = local_2f0;
    pTVar43 = local_308;
  } while (lVar38 < 0x20);
  pFVar39 = (local_240->AllocatorInstance).Data;
  iVar8 = local_240->ArrayNum;
  pFVar5 = pFVar39 + (longlong)iVar8 * 4;
  do {
    if (local_240->ArrayNum != iVar8) {
      local_324[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_324);
    }
    if (pFVar39 == pFVar5) {
      local_138.HashSize = 0;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      lVar24 = 2;
      ppFVar35 = &local_2b0;
      lVar38 = 2;
      do {
        ppFVar1 = ppFVar35 + -2;
        ppFVar35 = ppFVar35 + -2;
        lVar38 = lVar38 + -1;
        if (*ppFVar1 != (FDynamicMesh3 *)0x0) {
          FMemory::Free(*ppFVar1);
        }
      } while (lVar38 != 0);
      lVar38 = 2;
      do {
        puVar2 = (undefined8 *)(puVar36 + -4);
        puVar36 = puVar36 + -4;
        lVar38 = lVar38 + -1;
        if ((void *)*puVar2 != (void *)0x0) {
          FMemory::Free((void *)*puVar2);
        }
      } while (lVar38 != 0);
      ppTVar40 = &local_288;
      do {
        ppTVar3 = ppTVar40 + -2;
        ppTVar40 = ppTVar40 + -2;
        lVar24 = lVar24 + -1;
        if (*ppTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(*ppTVar3);
        }
      } while (lVar24 != 0);
      return;
    }
    uVar32 = *(uint *)pFVar39;
    lVar24 = *(longlong *)
              ((local_310->Mesh->Triangles).Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar32 >> 9) * 8);
    local_218 = *(double *)(lVar24 + (ulonglong)(uVar32 & 0x1ff) * 0xc);
    uVar30 = *(uint *)(lVar24 + 8 + (ulonglong)(uVar32 & 0x1ff) * 0xc);
    if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
      FVar29 = (ForElementType<FSetElementId>)&local_138.Hash;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar29 = local_138.Hash.SecondaryData;
      }
      uVar27 = *(uint *)((longlong)FVar29 + (ulonglong)(local_138.HashSize - 1U & uVar30) * 4);
      while (uVar27 != 0xffffffff) {
        puVar31 = (uint *)((longlong)(int)uVar27 * 0x10 + local_138.Elements._0_8_);
        if (*puVar31 == uVar30) {
          if (puVar31 != (uint *)0x0) goto LAB_1433ce612;
          goto LAB_1433ce5de;
        }
        uVar27 = puVar31[2];
      }
    }
    puVar31 = (uint *)0x0;
LAB_1433ce5de:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x288,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_1433ce612:
    uVar30 = puVar31[1];
    if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
      FVar29 = (ForElementType<FSetElementId>)&local_138.Hash;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar29 = local_138.Hash.SecondaryData;
      }
      uVar27 = *(uint *)((longlong)FVar29 +
                        (ulonglong)(local_138.HashSize - 1U & local_218._4_4_) * 4);
      while (uVar27 != 0xffffffff) {
        puVar31 = (uint *)((longlong)(int)uVar27 * 0x10 + local_138.Elements._0_8_);
        if (*puVar31 == local_218._4_4_) {
          if (puVar31 != (uint *)0x0) goto LAB_1433ce6a1;
          goto LAB_1433ce66d;
        }
        uVar27 = puVar31[2];
      }
    }
    puVar31 = (uint *)0x0;
LAB_1433ce66d:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x288,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_1433ce6a1:
    uVar27 = puVar31[1];
    if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
      FVar29 = (ForElementType<FSetElementId>)&local_138.Hash;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar29 = local_138.Hash.SecondaryData;
      }
      uVar47 = *(uint *)((longlong)FVar29 +
                        (ulonglong)(local_138.HashSize - 1U & (uint)local_218) * 4);
      while (uVar47 != 0xffffffff) {
        puVar31 = (uint *)((longlong)(int)uVar47 * 0x10 + local_138.Elements._0_8_);
        if (*puVar31 == (uint)local_218) {
          if (puVar31 != (uint *)0x0) goto LAB_1433ce71f;
          goto LAB_1433ce6f9;
        }
        uVar47 = puVar31[2];
      }
    }
    puVar31 = (uint *)0x0;
LAB_1433ce6f9:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x288,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_1433ce71f:
    local_228._s_0.A = puVar31[1];
    local_228._s_0.B = uVar27;
    local_228._s_0.C = uVar30;
    TDynamicMeshOverlay<float,3>::SetTriangle(local_248,uVar32,(FIndex3i *)&local_228._s_0,true);
    pFVar39 = pFVar39 + 4;
  } while( true );
}

// SplitBowties @ 1433d1b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshEditor::SplitBowties
          (FDynamicMeshEditor *this,FDynamicMeshEditResult *param_1)

{
  int iVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<FSetElementId> FVar16;
  undefined1 auStackY_108 [32];
  TArray<bool,TSizedDefaultAllocator<32>_> local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  int local_a8 [2];
  FDynamicMeshEditor *local_a0;
  ForElementType<FSetElementId> local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FVar9 = (ForElementType<FSetElementId>)0x0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_a0 = this;
  FDynamicMeshEditResult::Reset(param_1);
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  iVar12 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
  FVar11 = FVar9;
  FVar13 = FVar9;
  FVar16 = FVar9;
  if (0 < iVar12) {
    do {
      pFVar2 = this->Mesh;
      iVar15 = FVar16._0_4_;
      if ((iVar15 < (int)((pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                         (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               ((ulonglong)FVar16 >> 9) * 8) + (ulonglong)(FVar13._0_4_ & 0x1ff) * 2
                             ) - 1U) < 0xfffe)) {
        if ((int)local_90 != local_64) {
          FVar7 = (ForElementType<FSetElementId>)local_60;
          if (FVar11 != (ForElementType<FSetElementId>)0x0) {
            FVar7 = FVar11;
          }
          for (iVar1 = *(int *)((longlong)FVar7 +
                               ((ulonglong)(local_50 - 1) & (ulonglong)FVar16) * 4); iVar1 != -1;
              iVar1 = *(int *)((undefined1 *)((longlong)FVar9 + 4) + (longlong)iVar1 * 0xc)) {
            if (*(int *)((longlong)FVar9 + (longlong)iVar1 * 0xc) == iVar15) goto LAB_1433d1d75;
          }
        }
        iVar1 = (param_1->NewVertices).ArrayNum;
        uVar10 = (ulonglong)iVar1;
        SplitBowtiesInternal(this,iVar15,&local_b8,&local_c8,&local_d8,&param_1->NewVertices);
        iVar6 = (param_1->NewVertices).ArrayNum;
        FVar9 = local_98;
        FVar11 = local_58;
        if (iVar1 < iVar6) {
          lVar14 = uVar10 * 4;
          do {
            uVar8 = (uint)uVar10;
            uVar5 = 0;
            if ((int)uVar8 < iVar6) {
              uVar5 = ~uVar8 >> 0x1f;
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
            if (*(int *)((param_1->NewVertices).AllocatorInstance.Data + lVar14) < iVar12) {
              uVar5 = 0;
              if ((int)uVar8 < (param_1->NewVertices).ArrayNum) {
                uVar5 = ~uVar8 >> 0x1f;
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
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_98,local_a8
                         ,(bool *)((param_1->NewVertices).AllocatorInstance.Data +
                                  (longlong)(int)uVar8 * 4));
            }
            iVar6 = (param_1->NewVertices).ArrayNum;
            uVar10 = (ulonglong)(uVar8 + 1);
            lVar14 = lVar14 + 4;
            this = local_a0;
            FVar9 = local_98;
            FVar11 = local_58;
          } while ((int)(uVar8 + 1) < iVar6);
        }
      }
LAB_1433d1d75:
      FVar16._0_4_ = iVar15 + 1;
      FVar16._4_4_ = 0;
      FVar13 = (ForElementType<FSetElementId>)((longlong)FVar13 + 1);
    } while ((int)FVar16._0_4_ < iVar12);
  }
  local_50 = 0;
  if (FVar11 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return;
}

// SplitBowtiesAtTriangles @ 1433d1e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshEditor::SplitBowtiesAtTriangles
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FDynamicMeshEditResult *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_128 [32];
  char local_f8 [4];
  int local_f4;
  int local_f0 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  undefined8 local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8 = pFVar7 + (longlong)iVar1 * 4;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  while( true ) {
    pFVar4 = local_b8;
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    if (pFVar7 == pFVar4) break;
    local_f8[0] = '\0';
    uVar6 = (ulonglong)(*(uint *)pFVar7 & 0x1ff);
    lVar3 = *(longlong *)
             ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)(*(uint *)pFVar7 >> 9) * 8);
    local_b0 = *(undefined8 *)(lVar3 + uVar6 * 0xc);
    iVar2 = *(int *)(lVar3 + 8 + uVar6 * 0xc);
    iVar5 = (int)local_b0;
    local_f4 = (int)local_b0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_98,local_f0,(bool *)&local_f4);
    if (local_f8[0] == '\0') {
      SplitBowtiesInternal(this,iVar5,&local_c8,&local_d8,&local_e8,&param_2->NewVertices);
    }
    iVar5 = local_b0._4_4_;
    local_f4 = local_b0._4_4_;
    local_f8[0] = '\0';
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_98,local_f0,(bool *)&local_f4);
    if (local_f8[0] == '\0') {
      SplitBowtiesInternal(this,iVar5,&local_c8,&local_d8,&local_e8,&param_2->NewVertices);
    }
    local_f8[0] = '\0';
    local_f4 = iVar2;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_98,local_f0,(bool *)&local_f4);
    if (local_f8[0] == '\0') {
      SplitBowtiesInternal(this,iVar2,&local_c8,&local_d8,&local_e8,&param_2->NewVertices);
    }
    pFVar7 = pFVar7 + 4;
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return;
}

// SplitBowtiesInternal @ 1433d2060

void __thiscall
UE::Geometry::FDynamicMeshEditor::SplitBowtiesInternal
          (FDynamicMeshEditor *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  EMeshResult EVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_58 [4];
  undefined1 local_54 [12];
  FScriptContainerElement *local_48;
  int local_40;
  
  EVar6 = FDynamicMesh3::
          GetVtxContiguousTriangles<TArray<int,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
                    (this->Mesh,param_1,param_2,param_3,param_4);
  if (EVar6 == Ok) {
    iVar8 = param_3->ArrayNum;
    if (1 < iVar8) {
      uVar9 = 1;
      iVar10 = *(int *)(param_3->AllocatorInstance).Data;
      local_54._4_8_ = 1;
      do {
        uVar4 = local_54._4_8_;
        pFVar1 = this->Mesh;
        pcVar3 = *(code **)(pFVar1->_padding_ + 0x48);
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          param_4 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar9;
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
        local_40 = *(int *)((param_3->AllocatorInstance).Data + uVar4 * 4);
        local_48 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 4;
        if ((local_40 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (*pcVar3)(pFVar1,param_1,&local_48,local_58,param_4);
        if (iVar8 != 0) {
          pcVar11 = 
          "EMeshResult::Ok == Mesh->SplitVertex(VertexID, TArrayView<const int>(TrianglesOut.GetData() + GroupStartIdx, ContiguousGroupLengths[GroupIdx]), SplitInfo)"
          ;
          bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3787275554290400244>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                             ,0x40c,
                             "EMeshResult::Ok == Mesh->SplitVertex(VertexID, TArrayView<const int>(TrianglesOut.GetData() + GroupStartIdx, ContiguousGroupLengths[GroupIdx]), SplitInfo)"
                            );
          param_4 = (TArray<bool,TSizedDefaultAllocator<32>_> *)pcVar11;
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (param_5 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar2 = (param_5->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)local_54) &&
             ((FScriptContainerElement *)local_54 < pFVar2 + (longlong)param_5->ArrayMax * 4)) {
            param_4 = (TArray<bool,TSizedDefaultAllocator<32>_> *)local_54;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar8 = param_5->ArrayNum;
          if (iVar8 == param_5->ArrayMax) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar8 + 1;
          *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_54._0_4_;
        }
        uVar7 = 0;
        if ((int)uVar9 < param_3->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          param_4 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar9;
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
        local_54._4_8_ = local_54._4_8_ + 1;
        uVar9 = uVar9 + 1;
        iVar8 = param_3->ArrayNum;
        iVar10 = iVar10 + *(int *)((param_3->AllocatorInstance).Data + uVar4 * 4);
      } while ((int)uVar9 < iVar8);
    }
  }
  else {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3787275554290400251>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                       ,0x405,
                       "EMeshResult::Ok == Mesh->GetVtxContiguousTriangles(VertexID, TrianglesOut, ContiguousGroupLengths, GroupIsLoop)"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SplitMesh @ 1433d2370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::Geometry::FDynamicMeshEditor::SplitMesh
          (FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<int___cdecl(int)> *param_3,int param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,bool param_6)

{
  int *piVar1;
  FRefCountVector *pFVar2;
  short sVar3;
  undefined8 uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  int iVar9;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  byte bVar19;
  ulong64 uVar20;
  FDynamicMeshAttributeSet *this;
  FDynamicMeshAttributeSet *pFVar21;
  ForElementType<FSetElementId> FVar22;
  uint *puVar23;
  FMeshIndexMappings *pFVar24;
  longlong lVar25;
  ulonglong uVar26;
  FDynamicMesh3 *pFVar27;
  uint uVar28;
  uint uVar29;
  FDynamicMesh3 *pFVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iVar33;
  FDynamicMesh3 *this_00;
  uint uVar34;
  int *piVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auStackY_368 [32];
  int local_320 [2];
  int local_318 [2];
  undefined1 local_310;
  undefined1 local_30f;
  FIdentityFunctor local_30e [6];
  ForAnyElementType local_308;
  int local_300;
  int local_2fc;
  FDynamicMesh3 *local_2f8;
  uint local_2f0;
  FIndex3i_u_0 local_2e8;
  int local_2d8 [2];
  int local_2d0 [2];
  undefined1 local_2c8 [8];
  int local_2c0;
  int local_2b8 [2];
  uint local_2b0 [2];
  uint local_2a8;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_2a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_298;
  int *local_288;
  int *local_280;
  int *local_278;
  int *local_270;
  int local_268 [2];
  uint local_260 [2];
  uint local_258;
  int local_254;
  uint local_250 [2];
  uint local_248;
  undefined8 local_240;
  int local_238;
  int *local_230;
  FDynamicMeshEditResult local_228;
  TPairInitializer<int_const_&,int_const_&> local_1b8;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  int local_198;
  int local_194;
  BaseIterator local_190;
  longlong *local_180;
  int iStack_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  uint *local_120;
  int *local_118;
  int *local_110;
  int *local_108;
  int *local_100;
  int *local_f8;
  uint *local_f0;
  int *local_e8;
  int *local_e0;
  uint *local_d8;
  IndexIterator local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  uVar20 = 0;
  local_6c = 0x80;
  pFVar2 = &param_1->TriangleRefCounts;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  bVar14 = false;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  local_2f8 = param_1;
  local_2a0 = param_2;
  local_248 = param_4;
  local_1b8.Value = (int *)param_3;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_190,pFVar2,0,
             (pFVar2->RefCounts).CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar33 = (pFVar2->RefCounts).CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(local_d0,pFVar2,iVar33,iVar33);
  if (local_190.Index == local_d0[0]._8_4_) {
LAB_1433d34a2:
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    return false;
  }
  do {
    local_268[0] = local_190.Index;
    local_258 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_268);
    if (local_258 == param_4) {
      bVar14 = true;
    }
    else {
      local_260[0] = local_258;
      iVar33 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
               FindIndexByHash<int>
                         ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                           *)local_98,local_258,(int *)local_260);
      if (iVar33 == -1) {
        local_120 = &local_258;
        local_254 = (int)uVar20;
        local_118 = &local_254;
        uVar20 = (ulong64)(local_254 + 1);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_98,(TPairInitializer<int_const_&,int_&&> *)local_1a8,(bool *)&local_120)
        ;
      }
    }
    uVar17 = (uint)uVar20;
    FRefCountVector::BaseIterator::goto_next(&local_190);
  } while (local_190.Index != local_d0[0]._8_4_);
  local_2f0 = uVar17;
  if ((!bVar14) && ((int)uVar17 < 2)) goto LAB_1433d34a2;
  uVar34 = 0;
  if (param_6) {
    local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.ArrayNum = 0;
    local_298.ArrayMax = 0;
    TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_98,&local_298);
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_298.AllocatorInstance.Data,local_298.ArrayNum,local_30e[0],
               (TLess<void> *)local_30e);
    if (0 < local_298.ArrayNum) {
      lVar25 = 0;
      uVar28 = uVar34;
      do {
        uVar29 = uVar34;
        if ((int)uVar28 < local_298.ArrayNum) {
          uVar29 = ~uVar28 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        puVar23 = (uint *)0x0;
        if (local_98._8_4_ != local_64) {
          FVar22 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_58;
          }
          uVar29 = *(uint *)((longlong)FVar22 +
                            (ulonglong)
                            (local_50 - 1U & *(uint *)(local_298.AllocatorInstance.Data + lVar25)) *
                            4);
          while (puVar23 = (uint *)0x0, uVar29 != 0xffffffff) {
            puVar23 = (uint *)((longlong)(int)uVar29 * 0x10 + local_98._0_8_);
            if (*puVar23 == *(uint *)(local_298.AllocatorInstance.Data + lVar25)) {
              if (puVar23 != (uint *)0x0) goto LAB_1433d2636;
              break;
            }
            uVar29 = puVar23[2];
          }
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
LAB_1433d2636:
        puVar23[1] = uVar28;
        lVar25 = lVar25 + 4;
        uVar28 = uVar28 + 1;
      } while ((int)uVar28 < local_298.ArrayNum);
    }
    if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.AllocatorInstance.Data);
    }
  }
  if (param_5 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_5,uVar17,Default);
    uVar28 = local_70;
    iStack_178 = 0;
    local_160 = 0;
    uStack_174 = 1;
    uStack_164 = uVar34;
    if (local_70 != 0) {
      puVar23 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar23 = local_78;
      }
      uVar34 = *puVar23;
      while (uVar34 == 0) {
        lVar25 = (longlong)iStack_178;
        local_160 = local_160 + 0x20;
        iStack_178 = iStack_178 + 1;
        uStack_164 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_178)
        goto LAB_1433d26f5;
        uVar34 = puVar23[lVar25 + 1];
      }
      uStack_174 = -uVar34 & uVar34;
      uVar31 = (ulonglong)uStack_174 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_194 = (int)lVar25;
      uStack_164 = local_194 + -1 + local_160;
      if ((int)local_70 < (int)uStack_164) {
        uStack_164 = local_70;
      }
    }
LAB_1433d26f5:
    local_180 = (longlong *)local_98;
    uStack_15c = local_a4;
    local_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar34 = local_70 & 0xffffffe0;
    iStack_158 = local_98._8_4_ - local_64;
    uStack_168 = 0xffffffff;
    TStack_148.CurrentBitIndex = uStack_164;
    TStack_148.UnvisitedBitMask = 0xffffffff;
    TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
    iVar33 = (int)local_70 >> 5;
    TStack_148._28_4_ = local_a4;
    TStack_148.BaseBitIndex = local_160;
    uStack_128 = CONCAT44(uStack_154,iStack_158);
    bVar19 = (byte)local_70;
    local_150 = local_180;
    TStack_148.Array = local_170;
    if (((int)local_70 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    if (uVar28 != local_70) {
      puVar23 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar23 = local_78;
      }
      uVar28 = -1 << (bVar19 & 0x1f) & puVar23[iVar33];
      while (uVar28 == 0) {
        lVar25 = (longlong)iVar33;
        uVar34 = uVar34 + 0x20;
        iVar33 = iVar33 + 1;
        uVar28 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
        goto LAB_1433d2837;
        uVar28 = puVar23[lVar25 + 1];
      }
      uVar31 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_198 = (int)lVar25;
      uVar28 = local_198 + -1 + uVar34;
      if ((int)local_70 < (int)uVar28) {
        uVar28 = local_70;
      }
    }
LAB_1433d2837:
    while( true ) {
      plVar13 = local_150;
      if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
        local_310 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_310);
      }
      if (((TStack_148.CurrentBitIndex == uVar28) &&
          (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (param_2 = local_2a0, plVar13 == (longlong *)local_98)) break;
      uVar4 = *(undefined8 *)(*plVar13 + (longlong)TStack_148.CurrentBitIndex * 0x10);
      uVar29 = (uint)((ulonglong)uVar4 >> 0x20);
      uVar34 = 0;
      if ((int)uVar29 < param_5->ArrayNum) {
        uVar34 = ~uVar29 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      *(int *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar29 * 4) = (int)uVar4;
      TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
    }
  }
  piVar35 = &param_2->ArrayNum;
  pFVar27 = (FDynamicMesh3 *)(param_2->AllocatorInstance).Data;
  piVar1 = &param_2->ArrayMax;
  local_230 = piVar35;
  if (param_2->ArrayMax < 0) {
    DestructItems<UE::Geometry::FDynamicMesh3,int>(pFVar27,*piVar35);
    *piVar35 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x230,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FDynamicMesh3,int>(pFVar27,*piVar35);
    *piVar35 = 0;
  }
  iVar33 = *piVar35;
  if (iVar33 < (int)uVar17) {
    iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x230,8,uVar17 - iVar33,&param_2->AllocatorInstance,piVar35,piVar1);
    DefaultConstructItems<UE::Geometry::FDynamicMesh3,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar16 * 0x230,uVar17 - iVar33);
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar20);
    }
    if ((int)uVar17 < iVar33) {
      uVar34 = iVar33 - uVar17;
      if (((int)(uVar34 | uVar17) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      if (uVar34 != 0) {
        TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,uVar17,uVar34);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x230,8,&param_2->AllocatorInstance,*piVar35,piVar1);
      }
    }
  }
  this_00 = local_2f8;
  iVar33 = *piVar35;
  pFVar27 = (FDynamicMesh3 *)(param_2->AllocatorInstance).Data;
  pFVar30 = pFVar27 + iVar33;
  while( true ) {
    if (*piVar35 != iVar33) {
      local_30f = 0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMesh3,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_30f);
    }
    if (pFVar27 == pFVar30) break;
    iVar16 = FDynamicMesh3::GetComponentsFlags(this_00);
    FDynamicMesh3::EnableMeshComponents(pFVar27,iVar16);
    if ((this_00->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      FDynamicMesh3::EnableAttributes(pFVar27);
      pFVar5 = (pFVar27->AttributeSet).Ptr;
      this = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
        this = pFVar5;
      }
      pFVar5 = (this_00->AttributeSet).Ptr;
      pFVar21 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar21 = pFVar5;
      }
      FDynamicMeshAttributeSet::EnableMatchingAttributes(this,pFVar21,true,false);
    }
    pFVar27 = pFVar27 + 1;
  }
  if (uVar17 == 0) goto LAB_1433d3477;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = 0;
  local_2fc = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar20);
  }
  if (0 < (int)uVar17) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c0,8,uVar17,&local_308,0,&local_2fc);
  }
  pTVar10 = local_2a0;
  uVar26 = 0;
  local_228.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.NewVertices.ArrayNum = 0;
  local_228.NewVertices.ArrayMax = 0;
  local_228.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.NewTriangles.ArrayNum = 0;
  local_228.NewTriangles.ArrayMax = 0;
  local_228.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.NewQuads.ArrayNum = 0;
  local_228.NewQuads.ArrayMax = 0;
  local_228.NewPolygons.ArrayNum = 0;
  local_228.NewPolygons.ArrayMax = 0;
  local_228.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.NewGroups.ArrayNum = 0;
  local_228.NewGroups.ArrayMax = 0;
  local_228.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.NewNormalOverlayElements.ArrayNum = 0;
  local_228.NewNormalOverlayElements.ArrayMax = 0;
  local_228.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.NewColorOverlayElements.ArrayNum = 0;
  local_228.NewColorOverlayElements.ArrayMax = 0;
  uVar31 = uVar26;
  if (0 < (int)uVar17) {
    do {
      if (local_300 == local_2fc) {
        local_300 = Core::Private::
                    ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x2c0,8,&local_308,&local_2fc);
      }
      pFVar24 = (FMeshIndexMappings *)(local_308.Data + (longlong)local_300 * 0x2c0);
      local_300 = local_300 + 1;
      memset(pFVar24,0,0x2c0);
      pFVar24 = FMeshIndexMappings::FMeshIndexMappings(pFVar24);
      uVar28 = (uint)uVar31;
      uVar34 = 0;
      if ((int)uVar28 < *piVar35) {
        uVar34 = ~uVar28 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      FMeshIndexMappings::Initialize
                (pFVar24,(FDynamicMesh3 *)((pTVar10->AllocatorInstance).Data + uVar26));
      uVar26 = uVar26 + 0x230;
      uVar31 = (ulonglong)(uVar28 + 1);
      this_00 = local_2f8;
    } while ((int)(uVar28 + 1) < (int)uVar17);
  }
  uVar34 = (this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (this_00->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar31 = 0;
  if ((uVar34 == 0) ||
     (pFVar6 = (this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar31 = 0,
     (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_1433d2cfa:
    uVar28 = (uint)uVar31;
  }
  else {
    uVar31 = 1;
    uVar28 = 1;
    if (1 < (int)uVar34) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar6 + (uVar31 >> 9) * 8) +
                          (ulonglong)((uint)uVar31 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar28 = (uint)uVar31 + 1;
        uVar31 = (ulonglong)uVar28;
      } while ((int)uVar28 < (int)uVar34);
      goto LAB_1433d2cfa;
    }
  }
  local_2a8 = uVar34;
  if (uVar28 != uVar34) {
LAB_1433d2d10:
    do {
      uVar28 = (uint)uVar31;
      local_250[0] = uVar28;
      uVar17 = (**(code **)local_1b8.Value)
                         (*(undefined8 *)((longlong)local_1b8.Value + 8),local_250);
      if (uVar17 != local_248) {
        if (local_98._8_4_ != local_64) {
          FVar22 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_58;
          }
          uVar34 = *(uint *)((longlong)FVar22 + (ulonglong)(local_50 - 1U & uVar17) * 4);
          while (uVar34 != 0xffffffff) {
            puVar23 = (uint *)((longlong)(int)uVar34 * 0x10 + local_98._0_8_);
            if (*puVar23 == uVar17) {
              if (puVar23 == (uint *)0x0) goto LAB_1433d2d8d;
              goto LAB_1433d2db3;
            }
            uVar34 = puVar23[2];
          }
        }
        puVar23 = (uint *)0x0;
LAB_1433d2d8d:
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
LAB_1433d2db3:
        uVar17 = puVar23[1];
        uVar34 = 0;
        if ((int)uVar17 < *piVar35) {
          uVar34 = ~uVar17 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        pFVar27 = (FDynamicMesh3 *)
                  ((local_2a0->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x230);
        uVar34 = 0;
        if ((int)uVar17 < local_300) {
          uVar34 = ~uVar17 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        pFVar24 = (FMeshIndexMappings *)(local_308.Data + (longlong)(int)uVar17 * 0x2c0);
        uVar26 = (ulonglong)(uVar28 & 0x1ff);
        iVar33 = -1;
        lVar25 = (uVar31 >> 9) * 8;
        lVar7 = *(longlong *)((this_00->Triangles).Blocks.AllocatorInstance.Data + lVar25);
        local_240 = *(undefined8 *)(lVar7 + uVar26 * 0xc);
        local_2c0 = *(int *)(lVar7 + 8 + uVar26 * 0xc);
        local_238 = local_2c0;
        if ((this_00->TriangleGroups).bIsSet != false) {
          if ((((int)uVar28 < 0) ||
              ((int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (this_00->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar28)) ||
             (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((this_00->TriangleRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data + lVar25) + uVar26 * 2) - 1U)))
          {
            iVar16 = 0;
          }
          else {
            iVar16 = *(int *)(*(longlong *)
                               ((this_00->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                               lVar25) + uVar26 * 4);
            if (iVar16 < 0) goto LAB_1433d2fa4;
          }
          iVar33 = TIndexMap<int>::GetTo(&pFVar24->GroupMap,iVar16);
          if (iVar33 == -1) {
            iVar33 = pFVar27->GroupIDCounter;
            pFVar27->GroupIDCounter = iVar33 + 1;
            local_110 = local_2d0;
            local_108 = local_2d8;
            local_2d8[0] = iVar33;
            local_2d0[0] = iVar16;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)&pFVar24->GroupMap,&local_1b8,(bool *)&local_110);
            local_100 = local_2d8;
            local_f8 = local_2d0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)&(pFVar24->GroupMap).ReverseMap,
                       (TPairInitializer<int_const_&,int_const_&> *)(local_1a8 + 4),
                       (bool *)&local_100);
          }
        }
LAB_1433d2fa4:
        iVar16 = (int)local_240;
        local_2e8._0_8_ = 0xffffffffffffffff;
        local_2e8._s_0.C = -1;
        iVar18 = TIndexMap<int>::GetTo((TIndexMap<int> *)pFVar24,(int)local_240);
        bVar14 = iVar18 == -1;
        if (bVar14) {
          iVar18 = FDynamicMesh3::AppendVertex(pFVar27,local_2f8,iVar16);
          local_288 = local_318;
          local_318[0] = iVar16;
          local_280 = local_320;
          local_320[0] = iVar18;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)pFVar24,(TPairInitializer<int_const_&,int_const_&> *)local_2c8,
                     (bool *)&local_288);
          local_278 = local_320;
          local_270 = local_318;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&(pFVar24->VertexMap).ReverseMap,
                     (TPairInitializer<int_const_&,int_const_&> *)(local_2c8 + 4),(bool *)&local_278
                    );
        }
        iVar9 = local_240._4_4_;
        local_2e8._s_0.A = iVar18;
        iVar18 = TIndexMap<int>::GetTo((TIndexMap<int> *)pFVar24,local_240._4_4_);
        bVar36 = iVar18 == -1;
        if (bVar36) {
          iVar18 = FDynamicMesh3::AppendVertex(pFVar27,local_2f8,iVar9);
          local_288 = local_318;
          local_318[0] = iVar9;
          local_280 = local_320;
          local_320[0] = iVar18;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)pFVar24,(TPairInitializer<int_const_&,int_const_&> *)local_2c8,
                     (bool *)&local_288);
          local_278 = local_320;
          local_270 = local_318;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&(pFVar24->VertexMap).ReverseMap,
                     (TPairInitializer<int_const_&,int_const_&> *)(local_2c8 + 4),(bool *)&local_278
                    );
        }
        iVar9 = local_2c0;
        local_2e8._s_0.B = iVar18;
        iVar18 = TIndexMap<int>::GetTo((TIndexMap<int> *)pFVar24,local_2c0);
        bVar37 = iVar18 == -1;
        if (bVar37) {
          iVar18 = FDynamicMesh3::AppendVertex(pFVar27,local_2f8,iVar9);
          local_288 = local_318;
          local_318[0] = iVar9;
          local_280 = local_320;
          local_320[0] = iVar18;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)pFVar24,(TPairInitializer<int_const_&,int_const_&> *)local_2c8,
                     (bool *)&local_288);
          local_278 = local_320;
          local_270 = local_318;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&(pFVar24->VertexMap).ReverseMap,
                     (TPairInitializer<int_const_&,int_const_&> *)(local_2c8 + 4),(bool *)&local_278
                    );
        }
        local_2e8._s_0.C = iVar18;
        iVar18 = FDynamicMesh3::AppendTriangle(pFVar27,(FIndex3i *)&local_2e8._s_0,iVar33);
        this_00 = local_2f8;
        if (iVar18 < 0) {
          if (!bVar14) {
            iVar16 = FDynamicMesh3::AppendVertex(pFVar27,local_2f8,iVar16);
            local_2e8._s_0.A = iVar16;
          }
          if (!bVar36) {
            iVar16 = FDynamicMesh3::AppendVertex(pFVar27,this_00,local_240._4_4_);
            local_2e8._s_0.B = iVar16;
          }
          if (!bVar37) {
            local_2e8._s_0.C = FDynamicMesh3::AppendVertex(pFVar27,this_00,local_2c0);
          }
          iVar18 = FDynamicMesh3::AppendTriangle(pFVar27,(FIndex3i *)&local_2e8._s_0,iVar33);
          piVar35 = local_230;
          uVar34 = local_2a8;
          if (iVar18 < 0) goto LAB_1433d3272;
        }
        local_f0 = local_2b0;
        local_e8 = local_2b8;
        local_2b8[0] = iVar18;
        local_2b0[0] = uVar28;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&pFVar24->TriangleMap,(TPairInitializer<int_const_&,int_const_&> *)local_1a0,
                   (bool *)&local_f0);
        local_e0 = local_2b8;
        local_d8 = local_2b0;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&(pFVar24->TriangleMap).ReverseMap,
                   (TPairInitializer<int_const_&,int_const_&> *)(local_1a0 + 4),(bool *)&local_e0);
        DynamicMeshEditorInternals::AppendTriangleAttributes
                  (this_00,uVar28,pFVar27,iVar18,pFVar24,&local_228);
        piVar35 = local_230;
        uVar34 = local_2a8;
      }
LAB_1433d3272:
      uVar28 = uVar28 + 1;
      uVar31 = (ulonglong)uVar28;
      if ((int)uVar28 < (int)uVar34) {
        pFVar6 = (this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar25 = (uVar31 >> 9) * 8;
          lVar7 = (ulonglong)((uint)uVar31 & 0x1ff) * 2;
          if ((*(short *)(lVar7 + *(longlong *)(pFVar6 + lVar25)) != 0) &&
             (*(short *)(lVar7 + *(longlong *)(pFVar6 + lVar25)) != -1)) goto LAB_1433d2d10;
          uVar28 = (uint)uVar31 + 1;
          uVar31 = (ulonglong)uVar28;
        } while ((int)uVar28 < (int)uVar34);
      }
      uVar17 = local_2f0;
    } while (uVar28 != uVar34);
  }
  uVar32 = 0;
  uVar31 = uVar32;
  uVar26 = uVar32;
  if (0 < (int)uVar17) {
    do {
      uVar28 = (uint)uVar32;
      uVar34 = 0;
      if ((int)uVar28 < local_300) {
        uVar34 = ~uVar28 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      pFVar24 = (FMeshIndexMappings *)(local_308.Data + uVar31);
      uVar34 = 0;
      if ((int)uVar28 < local_2a0->ArrayNum) {
        uVar34 = ~uVar28 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      DynamicMeshEditorInternals::AppendVertexAttributes
                (local_2f8,(FDynamicMesh3 *)((local_2a0->AllocatorInstance).Data + uVar26),pFVar24);
      uVar32 = (ulonglong)(uVar28 + 1);
      uVar31 = uVar31 + 0x2c0;
      uVar26 = uVar26 + 0x230;
    } while ((int)(uVar28 + 1) < (int)uVar17);
  }
  FVar12.Data = local_228.NewNormalOverlayElements.AllocatorInstance.Data;
  FVar11.Data = local_228.NewPolygons.AllocatorInstance.Data;
  if (local_228.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.NewColorOverlayElements.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data,
             local_228.NewNormalOverlayElements.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (local_228.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.NewGroups.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data,local_228.NewPolygons.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if (local_228.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.NewQuads.AllocatorInstance.Data);
  }
  if (local_228.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.NewTriangles.AllocatorInstance.Data);
  }
  if (local_228.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.NewVertices.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FMeshIndexMappings,int>
            ((FMeshIndexMappings *)local_308.Data,local_300);
  if ((FMeshIndexMappings *)local_308.Data != (FMeshIndexMappings *)0x0) {
    FMemory::Free(local_308.Data);
  }
LAB_1433d3477:
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return true;
}

// StitchSparselyCorrespondedVertexLoops @ 1433d7310

bool __thiscall
UE::Geometry::FDynamicMeshEditor::StitchSparselyCorrespondedVertexLoops
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,FDynamicMeshEditResult *param_5,
          bool param_6)

{
  int *piVar1;
  double *pdVar2;
  FDynamicMesh3 *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  undefined1 local_148;
  undefined1 local_147 [3];
  int local_144;
  int local_140;
  undefined1 local_13c;
  undefined1 local_13b [3];
  uint local_138;
  uint local_134;
  FIndex3i_u_0 local_130;
  int *local_120;
  double local_118;
  double dStack_110;
  double local_108;
  uint local_100;
  longlong local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  code *local_c0;
  undefined1 *local_b8;
  double local_a0;
  
  uVar14 = param_2->ArrayNum;
  uVar21 = (ulonglong)uVar14;
  local_100 = uVar14;
  if (uVar14 != param_4->ArrayNum) {
    local_148 = 0;
    bVar11 = `UE::Geometry::FDynamicMeshEditor::StitchSparselyCorrespondedVertexLoops'::__l3::
             <lambda_1>::operator()(&local_148);
    if (!bVar11) {
      return false;
    }
  }
  if ((int)uVar14 < 2) {
    local_147[0] = 0;
    bVar11 = `UE::Geometry::FDynamicMeshEditor::StitchSparselyCorrespondedVertexLoops'::__l6::
             <lambda_2>::operator()(local_147);
    if (!bVar11) {
      return false;
    }
  }
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar21);
  }
  piVar1 = &(param_5->NewGroups).ArrayMax;
  local_120 = &(param_5->NewGroups).ArrayNum;
  if (*piVar1 < (int)uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&(param_5->NewGroups).AllocatorInstance,*local_120,piVar1);
  }
  fVar10 = __real_34000000;
  local_134 = 0;
  if (0 < (int)uVar14) {
    local_f8 = 0;
    do {
      lVar24 = local_f8;
      uVar14 = local_134;
      uVar20 = ~local_134;
      uVar22 = 0;
      if ((int)local_134 < param_2->ArrayNum) {
        uVar22 = uVar20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      uVar22 = *(uint *)((param_2->AllocatorInstance).Data + lVar24);
      lVar23 = (longlong)(int)uVar22;
      uVar18 = 0;
      if ((int)uVar14 < param_4->ArrayNum) {
        uVar18 = uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      uVar20 = *(uint *)((param_4->AllocatorInstance).Data + lVar24);
      lVar24 = (longlong)(int)uVar20;
      uVar18 = (int)(uVar14 + 1) % (int)uVar21;
      uVar14 = 0;
      if ((int)uVar18 < param_2->ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      local_138 = *(uint *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 4);
      uVar14 = 0;
      if ((int)uVar18 < param_4->ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      dVar9 = 0.0;
      uVar14 = *(uint *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar18 * 4);
      uVar18 = 0;
      if ((int)uVar22 < param_1->ArrayNum) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      pFVar3 = this->Mesh;
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      uVar16 = local_138;
      uVar21 = (ulonglong)uVar22;
      uVar18 = *(uint *)((param_1->AllocatorInstance).Data + lVar23 * 4);
      uVar19 = (ulonglong)(uVar18 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8);
      pdVar2 = (double *)(lVar4 + uVar19 * 0x18);
      local_118 = *pdVar2;
      dStack_110 = pdVar2[1];
      local_108 = *(double *)(lVar4 + 0x10 + uVar19 * 0x18);
      uVar18 = uVar22;
      while (uVar18 != uVar16) {
        uVar18 = ((int)uVar21 + 1) % param_1->ArrayNum;
        uVar21 = (ulonglong)(int)uVar18;
        uVar15 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar15 = *(uint *)((param_1->AllocatorInstance).Data + uVar21 * 4);
        uVar19 = (ulonglong)(uVar15 & 0x1ff);
        lVar4 = *(longlong *)
                 ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
        dVar28 = *(double *)(lVar4 + 0x10 + uVar19 * 0x18) - local_108;
        pdVar2 = (double *)(lVar4 + uVar19 * 0x18);
        local_118 = *pdVar2 - local_118;
        dStack_110 = pdVar2[1] - dStack_110;
        local_108 = *(double *)(lVar4 + 0x10 + uVar19 * 0x18);
        dVar9 = dVar9 + SQRT(dStack_110 * dStack_110 + local_118 * local_118 + dVar28 * dVar28);
        pdVar2 = (double *)(lVar4 + uVar19 * 0x18);
        local_118 = *pdVar2;
        dStack_110 = pdVar2[1];
      }
      pFVar3 = this->Mesh;
      uVar18 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      dVar28 = 0.0;
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      uVar21 = (ulonglong)uVar20;
      uVar18 = *(uint *)((param_3->AllocatorInstance).Data + lVar24 * 4);
      uVar19 = (ulonglong)(uVar18 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8);
      local_108 = *(double *)(lVar4 + 0x10 + uVar19 * 0x18);
      pdVar2 = (double *)(lVar4 + uVar19 * 0x18);
      local_118 = *pdVar2;
      dStack_110 = pdVar2[1];
      uVar18 = uVar20;
      while (uVar18 != uVar14) {
        uVar18 = ((int)uVar21 + 1) % param_3->ArrayNum;
        uVar21 = (ulonglong)(int)uVar18;
        uVar16 = 0;
        if ((int)uVar18 < param_3->ArrayNum) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar16 = *(uint *)((param_3->AllocatorInstance).Data + uVar21 * 4);
        uVar19 = (ulonglong)(uVar16 & 0x1ff);
        lVar4 = *(longlong *)
                 ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
        dVar29 = *(double *)(lVar4 + 0x10 + uVar19 * 0x18) - local_108;
        pdVar2 = (double *)(lVar4 + uVar19 * 0x18);
        local_118 = *pdVar2 - local_118;
        dStack_110 = pdVar2[1] - dStack_110;
        local_108 = *(double *)(lVar4 + 0x10 + uVar19 * 0x18);
        dVar28 = dVar28 + SQRT(dStack_110 * dStack_110 + local_118 * local_118 + dVar29 * dVar29);
        pdVar2 = (double *)(lVar4 + uVar19 * 0x18);
        local_118 = *pdVar2;
        dStack_110 = pdVar2[1];
      }
      local_144 = this->Mesh->GroupIDCounter;
      this->Mesh->GroupIDCounter = local_144 + 1;
      pFVar5 = (param_5->NewGroups).AllocatorInstance.Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_144) &&
         ((FScriptContainerElement *)&local_144 <
          pFVar5 + (longlong)(param_5->NewGroups).ArrayMax * 4)) {
        local_120 = &(param_5->NewGroups).ArrayNum;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
      }
      iVar17 = *local_120;
      if (iVar17 == (param_5->NewGroups).ArrayMax) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(param_5->NewGroups).AllocatorInstance,
                            &(param_5->NewGroups).ArrayMax);
      }
      *local_120 = iVar17 + 1;
      *(int *)((param_5->NewGroups).AllocatorInstance.Data + (longlong)iVar17 * 4) = local_144;
      pFVar3 = this->Mesh;
      uVar18 = 0;
      if ((int)uVar22 < param_1->ArrayNum) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      uVar22 = *(uint *)((param_1->AllocatorInstance).Data + lVar23 * 4);
      pFVar6 = this->Mesh;
      uVar21 = (ulonglong)(uVar22 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8);
      pdVar2 = (double *)(lVar4 + uVar21 * 0x18);
      local_f0 = *pdVar2;
      dStack_e8 = pdVar2[1];
      local_e0 = *(double *)(lVar4 + 0x10 + uVar21 * 0x18);
      uVar22 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar22 = ~uVar20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      uVar22 = *(uint *)((param_3->AllocatorInstance).Data + lVar24 * 4);
      uVar21 = (ulonglong)(uVar22 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar6->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8);
      pdVar2 = (double *)(lVar4 + uVar21 * 0x18);
      local_d8 = *pdVar2;
      dStack_d0 = pdVar2[1];
      local_c8 = *(double *)(lVar4 + 0x10 + uVar21 * 0x18);
      fVar30 = fVar10;
      fVar31 = fVar10;
      while( true ) {
        uVar22 = (uint)lVar23;
        uVar20 = (uint)lVar24;
        if ((uVar22 == local_138) && (uVar20 == uVar14)) break;
        if ((uVar22 == local_138) ||
           ((uVar20 != uVar14 &&
            (fVar31 / ((float)dVar28 + fVar10) < fVar30 / ((float)dVar9 + fVar10))))) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        uVar18 = 0;
        if ((int)uVar20 < param_3->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar18 = *(uint *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar20 * 4);
        uVar16 = 0;
        if ((int)uVar22 < param_1->ArrayNum) {
          uVar16 = ~uVar22 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_130._s_0.A =
             *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar22 * 4);
        local_130._s_0.C = -1;
        local_130._s_0.B = uVar18;
        if (bVar11) {
          uVar20 = (int)(uVar20 + 1) % param_3->ArrayNum;
          lVar24 = (longlong)(int)uVar20;
          uVar22 = 0;
          if ((int)uVar20 < param_3->ArrayNum) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          uVar22 = *(uint *)((param_3->AllocatorInstance).Data + lVar24 * 4);
          uVar21 = (ulonglong)(uVar22 & 0x1ff);
          lVar4 = *(longlong *)
                   ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar22 >> 9) * 8);
          pdVar2 = (double *)(lVar4 + uVar21 * 0x18);
          dVar29 = pdVar2[1];
          local_a0 = *(double *)(lVar4 + 0x10 + uVar21 * 0x18);
          local_d8 = local_d8 - *pdVar2;
          auVar27._8_8_ = dVar29;
          auVar27._0_8_ = dVar29;
          auVar26._8_8_ = 0;
          auVar26._0_8_ =
               (dStack_d0 - dVar29) * (dStack_d0 - dVar29) + local_d8 * local_d8 +
               (local_c8 - local_a0) * (local_c8 - local_a0);
          auVar26 = sqrtpd(auVar27,auVar26);
          pdVar2 = (double *)(lVar4 + uVar21 * 0x18);
          local_d8 = *pdVar2;
          dStack_d0 = pdVar2[1];
          fVar31 = fVar31 + (float)auVar26._0_8_;
          local_c8 = local_a0;
        }
        else {
          uVar20 = (int)(uVar22 + 1) % param_1->ArrayNum;
          lVar23 = (longlong)(int)uVar20;
          uVar22 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          uVar22 = *(uint *)((param_1->AllocatorInstance).Data + lVar23 * 4);
          uVar21 = (ulonglong)(uVar22 & 0x1ff);
          lVar4 = *(longlong *)
                   ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar22 >> 9) * 8);
          pdVar2 = (double *)(lVar4 + uVar21 * 0x18);
          dVar29 = pdVar2[1];
          local_a0 = *(double *)(lVar4 + 0x10 + uVar21 * 0x18);
          local_f0 = local_f0 - *pdVar2;
          auVar25._8_8_ = dVar29;
          auVar25._0_8_ = dVar29;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (dStack_e8 - dVar29) * (dStack_e8 - dVar29) + local_f0 * local_f0 +
                         (local_e0 - local_a0) * (local_e0 - local_a0);
          auVar26 = sqrtpd(auVar25,auVar8);
          pdVar2 = (double *)(lVar4 + uVar21 * 0x18);
          local_f0 = *pdVar2;
          dStack_e8 = pdVar2[1];
          fVar30 = fVar30 + (float)auVar26._0_8_;
          local_e0 = local_a0;
        }
        local_130._s_0.C = uVar22;
        if (param_6) {
          local_130._s_0.C = local_130._s_0.B;
          local_130._s_0.B = uVar22;
        }
        local_140 = FDynamicMesh3::AppendTriangle(this->Mesh,(FIndex3i *)&local_130._s_0,local_144);
        if (local_140 < 0) {
          if ((param_5->NewTriangles).ArrayNum != 0) {
            local_b8 = &local_13c;
            local_c0 = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FDynamicMeshEditor::RemoveTriangles'::__l2::<lambda_1>,void,int>
                       ::Call;
            bVar11 = RemoveTriangles(this,&param_5->NewTriangles,false,
                                     (TFunctionRef<void___cdecl(int)> *)&local_c0);
            if (!bVar11) {
              `UE::Geometry::FDynamicMeshEditor::StitchSparselyCorrespondedVertexLoops'::__l26::
              <lambda_4>::operator()(local_13b);
            }
          }
          return false;
        }
        pFVar5 = (param_5->NewTriangles).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_140) &&
            ((FScriptContainerElement *)&local_140 <
             pFVar5 + (longlong)(param_5->NewTriangles).ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        iVar17 = (param_5->NewTriangles).ArrayNum;
        piVar1 = &(param_5->NewTriangles).ArrayMax;
        if (iVar17 == *piVar1) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(param_5->NewTriangles).AllocatorInstance,piVar1);
        }
        (param_5->NewTriangles).ArrayNum = iVar17 + 1;
        *(int *)((param_5->NewTriangles).AllocatorInstance.Data + (longlong)iVar17 * 4) = local_140;
      }
      local_134 = local_134 + 1;
      uVar21 = (ulonglong)local_100;
      local_f8 = local_f8 + 4;
    } while ((int)local_134 < (int)local_100);
  }
  return true;
}

// StitchVertexLoopToTriVidPairSequence @ 1433d7f10

bool __thiscall
UE::Geometry::FDynamicMeshEditor::StitchVertexLoopToTriVidPairSequence
          (FDynamicMeshEditor *this,
          TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FDynamicMeshEditResult *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  <lambda_2> local_38;
  
  iVar1 = param_1->ArrayNum;
  if ((iVar1 != param_2->ArrayNum) &&
     (bVar2 = `UE::Geometry::FDynamicMeshEditor::StitchVertexLoopToTriVidPairSequence'::__l3::
              <lambda_1>::operator()(local_res10), !bVar2)) {
    return bVar2;
  }
  local_38.__this = this;
  local_38.N = iVar1;
  local_38.TriVidPairs = param_1;
  local_38.VertexLoop = param_2;
  bVar2 = DynamicMeshEditorLocals::
          StitchLoopsInternal<_UE::Geometry::FDynamicMeshEditor::StitchVertexLoopToTriVidPairSequence_::__l2::<lambda_2>_>
                    (this,iVar1,&local_38,param_3);
  return bVar2;
}

// StitchVertexLoopsMinimal @ 1433d7f90

bool __thiscall
UE::Geometry::FDynamicMeshEditor::StitchVertexLoopsMinimal
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FDynamicMeshEditResult *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  <lambda_2> local_38;
  
  iVar1 = param_1->ArrayNum;
  if ((iVar1 != param_2->ArrayNum) &&
     (bVar2 = `UE::Geometry::FDynamicMeshEditor::StitchVertexLoopsMinimal'::__l3::<lambda_1>::
              operator()(local_res10), !bVar2)) {
    return bVar2;
  }
  local_38.N = iVar1;
  local_38.Loop1 = param_1;
  local_38.Loop2 = param_2;
  bVar2 = DynamicMeshEditorLocals::
          StitchLoopsInternal<_UE::Geometry::FDynamicMeshEditor::StitchVertexLoopsMinimal_::__l2::<lambda_2>_>
                    (this,iVar1,&local_38,param_3);
  return bVar2;
}

// WeldVertexLoops @ 1433e2a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDynamicMeshEditor::WeldVertexLoops
          (FDynamicMeshEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  undefined1 auStack_188 [32];
  int *local_168;
  FScriptContainerElement *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined1 local_128 [4];
  int local_124;
  int local_120;
  int local_11c;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  uint local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_f0;
  FDynamicMeshEditor *local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_b0 [4];
  int *local_a0;
  uint local_98;
  undefined4 local_94;
  void *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar9 = param_1->ArrayNum;
  local_120 = iVar9;
  local_f0 = param_2;
  local_e8 = this;
  local_e0 = param_1;
  if ((iVar9 != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("N == Loop2.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMeshEditor.cpp"
                         ,0x183,
                         L"FDynamicMeshEditor::WeldVertexLoops: loops are not the same length!"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (iVar9 == param_2->ArrayNum) {
    piVar15 = (int *)0x0;
    local_11c = 0;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_108,iVar9,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_118,iVar9,Default);
    piVar16 = piVar15;
    if (0 < iVar9) {
      do {
        uVar14 = (uint)piVar15;
        uVar17 = ~uVar14 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar15, local_160 = (FScriptContainerElement *)(longlong)param_1->ArrayNum,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)((longlong)piVar16 + (longlong)(param_1->AllocatorInstance).Data);
        local_f8 = uVar14 + 1;
        uVar12 = (int)local_f8 % local_120;
        piVar18 = (int *)(longlong)(int)uVar12;
        uVar8 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar18, local_160 = (FScriptContainerElement *)(longlong)param_1->ArrayNum,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar9 = FDynamicMesh3::FindEdge
                          (local_e8->Mesh,iVar9,
                           *(int *)((local_e0->AllocatorInstance).Data + (longlong)piVar18 * 4));
        uVar8 = 0;
        if ((int)uVar14 < local_108.ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar15, local_160 = (FScriptContainerElement *)(longlong)local_108.ArrayNum
           , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        *(int *)((longlong)piVar16 + local_108.AllocatorInstance.Data) = iVar9;
        uVar8 = 0;
        if ((int)uVar14 < local_108.ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar15, local_160 = (FScriptContainerElement *)(longlong)local_108.ArrayNum
           , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        if (*(int *)((longlong)piVar16 + local_108.AllocatorInstance.Data) == -1) {
LAB_1433e2f92:
          bVar6 = false;
          goto LAB_1433e3247;
        }
        uVar8 = 0;
        if ((int)uVar14 < local_f0->ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar15, local_160 = (FScriptContainerElement *)(longlong)local_f0->ArrayNum
           , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)((longlong)piVar16 + (longlong)(local_f0->AllocatorInstance).Data);
        uVar8 = 0;
        if ((int)uVar12 < local_f0->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar18, local_160 = (FScriptContainerElement *)(longlong)local_f0->ArrayNum
           , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar9 = FDynamicMesh3::FindEdge
                          (local_e8->Mesh,iVar9,
                           *(int *)((local_f0->AllocatorInstance).Data + (longlong)piVar18 * 4));
        uVar8 = 0;
        if ((int)uVar14 < local_118.ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar15, local_160 = (FScriptContainerElement *)(longlong)local_118.ArrayNum
           , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        *(int *)((longlong)piVar16 + local_118.AllocatorInstance.Data) = iVar9;
        uVar8 = 0;
        if ((int)uVar14 < local_118.ArrayNum) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar15, local_160 = (FScriptContainerElement *)(longlong)local_118.ArrayNum
           , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        if (*(int *)((longlong)piVar16 + local_118.AllocatorInstance.Data) == -1)
        goto LAB_1433e2f92;
        piVar15 = (int *)(ulonglong)local_f8;
        piVar16 = piVar16 + 1;
        param_1 = local_e0;
        iVar9 = local_120;
      } while ((int)local_f8 < local_120);
    }
    uVar5 = _UNK_15060db28;
    uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
    piVar18 = (int *)0x0;
    local_138.Data = (FScriptContainerElement *)0x0;
    local_130 = 0;
    piVar16 = piVar18;
    piVar15 = piVar18;
    if (0 < iVar9) {
      do {
        uVar14 = (uint)piVar16;
        uVar8 = 0;
        if ((int)uVar14 < local_108.ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar18, local_160 = (FScriptContainerElement *)(longlong)local_108.ArrayNum
           , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        uVar2 = *(undefined4 *)((longlong)piVar15 + local_108.AllocatorInstance.Data);
        uVar8 = 0;
        if ((int)uVar14 < local_118.ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_168 = piVar18, local_160 = (FScriptContainerElement *)(longlong)local_118.ArrayNum
           , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        for (FVar11.Data = local_138.Data;
            FVar11.Data != local_138.Data + (longlong)(int)local_130 * 4;
            FVar11.Data = FVar11.Data + 4) {
          if (*(int *)FVar11.Data == *(int *)((longlong)piVar15 + local_118.AllocatorInstance.Data))
          goto LAB_1433e320d;
        }
        local_70 = 0;
        local_d0 = 0xffffffffffffffff;
        local_c8 = uVar4;
        uStack_c0 = uVar5;
        local_b8 = 0xffffffffffffffff;
        local_a0 = (int *)0x0;
        local_98 = 0;
        local_94 = 4;
        local_80 = (void *)0x0;
        local_78 = 0;
        local_74 = 4;
        local_168 = (int *)CONCAT71(local_168._1_7_,1);
        iVar10 = (**(code **)(local_e8->Mesh->_padding_ + 0x88))
                           (local_e8->Mesh,uVar2,
                            *(int *)((longlong)piVar15 + local_118.AllocatorInstance.Data),local_d8)
        ;
        if (iVar10 == 0) {
          if ((int)uStack_c0 != -1) {
            if (local_138.Data <= (FScriptContainerElement *)&uStack_c0) {
              if ((FScriptContainerElement *)&uStack_c0 <
                  local_138.Data + (longlong)local_130._4_4_ * 4) {
                local_150 = (longlong)(int)local_130;
                local_148 = 4;
                local_168 = (int *)&uStack_c0;
                local_160 = local_138.Data;
                local_158 = (longlong)local_130._4_4_;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
              }
            }
            iVar9 = (int)local_130;
            if ((int)local_130 == local_130._4_4_) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_138,(int *)((longlong)&local_130 + 4));
            }
            local_130 = CONCAT44(local_130._4_4_,iVar9 + 1);
            *(int *)(local_138.Data + (longlong)iVar9 * 4) = (int)uStack_c0;
          }
          if (uStack_c0._4_4_ != -1) {
            if (local_138.Data <= (FScriptContainerElement *)((longlong)&uStack_c0 + 4U)) {
              if ((FScriptContainerElement *)((longlong)&uStack_c0 + 4U) <
                  local_138.Data + (longlong)local_130._4_4_ * 4) {
                local_150 = (longlong)(int)local_130;
                local_148 = 4;
                local_168 = (int *)((longlong)&uStack_c0 + 4);
                local_160 = local_138.Data;
                local_158 = (longlong)local_130._4_4_;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
              }
            }
            iVar9 = (int)local_130;
            if ((int)local_130 == local_130._4_4_) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_138,(int *)((longlong)&local_130 + 4));
            }
            local_130 = CONCAT44(local_130._4_4_,iVar9 + 1);
            *(int *)(local_138.Data + (longlong)iVar9 * 4) = uStack_c0._4_4_;
          }
          uVar8 = local_98;
          uVar13 = (ulonglong)(int)local_98;
          piVar16 = local_b0;
          if (local_a0 != (int *)0x0) {
            piVar16 = local_a0;
          }
          piVar1 = piVar16 + uVar13;
          while( true ) {
            if ((uint)uVar13 != uVar8) {
              local_128[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_128);
            }
            iVar9 = local_120;
            if (piVar16 == piVar1) break;
            local_124 = *piVar16;
            if (local_138.Data <= (FScriptContainerElement *)&local_124) {
              if ((FScriptContainerElement *)&local_124 <
                  local_138.Data + (longlong)local_130._4_4_ * 4) {
                local_150 = (longlong)(int)local_130;
                local_148 = 4;
                local_168 = &local_124;
                local_160 = local_138.Data;
                local_158 = (longlong)local_130._4_4_;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
              }
            }
            iVar9 = (int)local_130;
            if ((int)local_130 == local_130._4_4_) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_138,(int *)((longlong)&local_130 + 4));
            }
            piVar16 = piVar16 + 1;
            local_130 = CONCAT44(local_130._4_4_,iVar9 + 1);
            *(int *)(local_138.Data + (longlong)iVar9 * 4) = local_124;
            uVar13 = (ulonglong)local_98;
          }
        }
        else {
          local_11c = local_11c + 1;
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        if (local_a0 != (int *)0x0) {
          FMemory::Free(local_a0);
        }
LAB_1433e320d:
        piVar18 = (int *)((longlong)piVar18 + 1);
        piVar16 = (int *)(ulonglong)(uVar14 + 1);
        piVar15 = piVar15 + 1;
      } while ((int)(uVar14 + 1) < iVar9);
    }
    bVar6 = 0 < local_11c;
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
LAB_1433e3247:
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// operator() @ 15049e420

bool __thiscall
`UE::Geometry::FDynamicMeshEditor::StitchSparselyCorrespondedVertexLoops'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3787275554290400816>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3787275554290400816>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e460

bool __thiscall
`UE::Geometry::FDynamicMeshEditor::StitchVertexLoopToTriVidPairSequence'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3787275554290400944>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3787275554290400944>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e4a0

bool __thiscall
`UE::Geometry::FDynamicMeshEditor::StitchVertexLoopsMinimal'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3787275554290400962>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3787275554290400962>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e4e0

bool __thiscall
`UE::Geometry::FDynamicMeshEditor::AppendElementSubset<float,3>'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3787275554290398528>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3787275554290398528>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Geometry::FDynamicMeshEditor::AppendElementSubset<float,3>(UE::Geometry::FDynamicMesh3_const*___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const&___ptr64,UE::Geometry::TDynamicMeshOverlay<float,3>_const*___ptr64,UE::Geometry::TDynamicMeshOverlay<float,3>*___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e6e0

bool __thiscall
`UE::Geometry::FDynamicMeshEditor::StitchSparselyCorrespondedVertexLoops'::__l6::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3787275554290400810>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3787275554290400810>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e720

bool __thiscall
`UE::Geometry::FDynamicMeshEditor::StitchSparselyCorrespondedVertexLoops'::__l26::<lambda_4>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3787275554290400732>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3787275554290400732>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

