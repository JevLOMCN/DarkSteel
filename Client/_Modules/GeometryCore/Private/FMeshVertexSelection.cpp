// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// FMeshVertexSelection @ 1435e3c00

FMeshVertexSelection * __thiscall
UE::Geometry::FMeshVertexSelection::FMeshVertexSelection
          (FMeshVertexSelection *this,FDynamicMesh3 *param_1,FMeshEdgeSelection *param_2)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FMeshVertexSelection *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uStack_8c;
  int local_84;
  int local_80 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this->Mesh = param_1;
  this_00 = &this->Selected;
  *(undefined8 *)&this_00->Elements = 0;
  puVar1 = &(param_2->Selected).Elements.field_0x10;
  *(undefined8 *)&(this->Selected).Elements.field_0x8 = 0;
  pTVar2 = &param_2->Selected;
  *(undefined8 *)&(this->Selected).Elements.field_0x20 = 0;
  uVar9 = 1;
  iVar17 = 0;
  *(undefined4 *)&(this->Selected).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Selected).Elements.field_0x2c = 0x80;
  iVar15 = 0;
  *(undefined4 *)&(this->Selected).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Selected).Elements.field_0x34 = 0;
  (this->Selected).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Selected).HashSize = 0;
  iVar4 = *(int *)&(param_2->Selected).Elements.field_0x28;
  iVar10 = iVar17;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(param_2->Selected).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    iVar15 = 0;
    iVar17 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar17;
      iVar15 = iVar15 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1435e3cdd;
      uVar14 = puVar18[lVar12 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = iVar15 + -1 + (int)lVar12;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_1435e3cdd:
  uVar14 = *(uint *)&(param_2->Selected).Elements.field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,iVar17);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_8c,
                       *(int *)&(param_2->Selected).Elements.field_0x8 -
                       *(int *)&(param_2->Selected).Elements.field_0x34);
  local_78 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FMeshVertexSelection *)(*pcVar6)();
    return pFVar11;
  }
  uVar9 = *(uint *)&(param_2->Selected).Elements.field_0x28;
  if (uVar14 != uVar9) {
    puVar16 = *(undefined1 **)&(param_2->Selected).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar17 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar17;
      uVar13 = uVar13 + 0x20;
      iVar17 = iVar17 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1435e3de0;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_1435e3de0:
  while( true ) {
    pTVar7 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    uVar9 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_70.CurrentBitIndex * 0xc);
    uVar5 = *(undefined8 *)
             (*(longlong *)
               ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8) +
             (ulonglong)(uVar9 & 0x1ff) * 0x10);
    local_res18[0] = (undefined4)uVar5;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (this_00,&local_84,(bool *)local_res18);
    uStackX_c = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_res20[0] = uStackX_c;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (this_00,local_80,(bool *)local_res20);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return this;
}

// FMeshVertexSelection @ 1435e3ea0

FMeshVertexSelection * __thiscall
UE::Geometry::FMeshVertexSelection::FMeshVertexSelection
          (FMeshVertexSelection *this,FDynamicMesh3 *param_1,FMeshFaceSelection *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_98 [12];
  uint local_8c;
  longlong local_88;
  uint local_80;
  int local_7c;
  int local_70;
  TBaseIterator<1,1> local_68;
  
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
  FMeshFaceSelection::begin(param_2,(TBaseIterator<1,1> *)local_98);
  FMeshFaceSelection::end(param_2,&local_68);
  while( true ) {
    uVar1 = local_98._0_8_;
    if ((int)*(longlong *)(local_98._0_8_ + 8) - *(int *)(local_98._0_8_ + 0x34) != local_70) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((local_7c == local_68.ElementIt._padding_._4_4_) &&
        (local_88 == local_68.ElementIt._padding_)) && (uVar1 == local_68.ElementIt._padding_))
    break;
    uVar2 = *(uint *)(*(longlong *)uVar1 + (longlong)local_7c * 0xc);
    uVar5 = (ulonglong)(uVar2 & 0x1ff);
    lVar4 = *(longlong *)
             ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar4 + uVar5 * 0xc);
    uVar3 = *(undefined4 *)(lVar4 + 8 + uVar5 * 0xc);
    local_a8 = (undefined4)uVar1;
    local_res8[0] = local_a8;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res10,(bool *)local_res8);
    uStack_a4 = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_res8[0] = uStack_a4;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res18,(bool *)local_res8);
    local_res8[0] = uVar3;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res20,(bool *)local_res8);
    local_80 = local_80 & ~local_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_98 + 8));
  }
  return this;
}

// IsSelected @ 14360d730

bool __thiscall
UE::Geometry::FMeshVertexSelection::IsSelected(FMeshVertexSelection *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Selected).Elements.field_0x8 != *(int *)&(this->Selected).Elements.field_0x34)
  {
    FVar3 = (this->Selected).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Selected).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Selected).Elements;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0xc) == param_1) goto LAB_14360d77d;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14360d77d:
  return iVar2 != -1;
}

// SelectInteriorVertices @ 143619b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshVertexSelection::SelectInteriorVertices
          (FMeshVertexSelection *this,FMeshFaceSelection *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  FSmallListSet *pFVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  FMeshVertexSelection *pFVar6;
  undefined8 uVar7;
  int iVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ForElementType<FSetElementId> FVar11;
  ForElementType<FSetElementId> FVar12;
  int *piVar13;
  ulonglong uVar14;
  FMeshVertexSelection *pFVar15;
  longlong lVar16;
  undefined1 auStack_348 [32];
  undefined1 local_328 [8];
  uint local_320 [2];
  FMeshVertexSelection *local_318;
  BaseValueIterator local_310;
  int local_2e8;
  int local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  code *local_2c8 [2];
  undefined **local_2b8;
  FDynamicMesh3 *local_2b0;
  uint local_2a8;
  undefined4 local_2a4;
  undefined ***local_2a0;
  undefined1 local_298 [12];
  uint local_28c;
  longlong local_288;
  uint local_280;
  int local_27c;
  int local_270;
  TBaseIterator<1,1> local_268;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_238;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  int local_170;
  undefined4 uStack_16c;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_238.Elements._0_8_ = 0;
  local_238.Elements._8_8_ = 0;
  local_238.Elements._32_8_ = 0;
  local_238.Elements._40_4_ = 0;
  local_238.Elements._44_4_ = 0x80;
  local_238.Elements._48_4_ = 0xffffffff;
  local_238.Elements._52_4_ = 0;
  local_238.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_238.HashSize = 0;
  local_318 = this;
  FMeshFaceSelection::begin(param_1,(TBaseIterator<1,1> *)local_298);
  FMeshFaceSelection::end(param_1,&local_268);
  do {
    uVar7 = local_298._0_8_;
    if ((int)*(longlong *)(local_298._0_8_ + 8) - *(int *)(local_298._0_8_ + 0x34) != local_270) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_328);
    }
    pFVar6 = local_318;
    if (((local_27c == local_268.ElementIt._padding_._4_4_) &&
        (local_288 == local_268.ElementIt._padding_)) && (uVar7 == local_268.ElementIt._padding_)) {
      local_238.HashSize = 0;
      if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_238.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_238.Elements);
      return;
    }
    pTVar1 = &local_318->Selected;
    uVar3 = *(uint *)(*(longlong *)uVar7 + (longlong)local_27c * 0xc);
    uVar14 = (ulonglong)(uVar3 & 0x1ff);
    lVar16 = 0;
    lVar4 = *(longlong *)
             ((local_318->Mesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar3 >> 9) * 8);
    local_2e0 = *(undefined8 *)(lVar4 + uVar14 * 0xc);
    local_2d8 = *(undefined4 *)(lVar4 + 8 + uVar14 * 0xc);
    pFVar15 = local_318;
    do {
      uVar3 = *(uint *)((longlong)&local_2e0 + lVar16 * 4);
      local_320[0] = uVar3;
      if (*(int *)&(pFVar6->Selected).Elements.field_0x8 !=
          *(int *)&(pFVar6->Selected).Elements.field_0x34) {
        FVar11 = (pFVar6->Selected).Hash.SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&(pFVar6->Selected).Hash;
        if (FVar11 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar11;
        }
        iVar8 = *(int *)((longlong)FVar12 +
                        (ulonglong)((pFVar6->Selected).HashSize - 1U & uVar3) * 4);
        if (iVar8 != -1) {
          lVar4 = *(longlong *)&pTVar1->Elements;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar8 * 0xc) == uVar3) goto LAB_143619f89;
            iVar8 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0xc);
          } while (iVar8 != -1);
        }
      }
      if (local_238.Elements._8_4_ != local_238.Elements._52_4_) {
        FVar11 = (ForElementType<FSetElementId>)&local_238.Hash;
        if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar11 = local_238.Hash.SecondaryData;
        }
        for (iVar8 = *(int *)((longlong)FVar11 + (ulonglong)(local_238.HashSize - 1U & uVar3) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_238.Elements._0_8_ + 4 + (longlong)iVar8 * 0xc)) {
          if (*(uint *)(local_238.Elements._0_8_ + (longlong)iVar8 * 0xc) == uVar3)
          goto LAB_143619f89;
        }
      }
      local_2b0 = pFVar15->Mesh;
      local_2a0 = (undefined ***)0x0;
      local_1e8._0_8_ = 0;
      bVar5 = true;
      local_1c0 = (longlong *)0x0;
      pFVar2 = &local_2b0->VertexEdgeLists;
      local_1b8 = (FSmallListSet *)0x0;
      uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
      local_190 = (FSmallListSet *)0x0;
      uStack_188 = uStack_188 & 0xffffffff00000000;
      local_2b8 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_2a4 = local_2d4;
      local_2c8[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                     ::Call;
      local_2a8 = uVar3;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_310,pFVar2,uVar3,false);
      uStack_1b0 = CONCAT44(local_310.block_ptr,local_310.ListIndex);
      local_1a8._4_4_ = local_310.iEnd;
      local_1a8._0_4_ = local_310.N;
      local_1b8 = local_310.ListSet;
      local_198 = local_310.cur_value;
      uStack_194 = local_310._36_4_;
      iStack_1a0 = local_310.iCur;
      iStack_19c = local_310.cur_ptr;
      local_310.block_ptr = -1;
      uStack_188 = CONCAT44(0xffffffff,uVar3);
      local_310.N = 0;
      local_310.iCur = -1;
      local_310.cur_ptr = -1;
      local_180 = (ulonglong)(uint)local_310.iEnd << 0x20;
      local_170 = local_310.cur_value;
      uStack_16c = local_310._36_4_;
      uStack_178 = 0xffffffffffffffff;
      local_310.ListSet = pFVar2;
      local_310.ListIndex = uVar3;
      local_190 = pFVar2;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_2c8);
      if (local_2c8[0] != (code *)0x0) {
        pppuVar9 = &local_2b8;
        if (local_2a0 != (undefined ***)0x0) {
          pppuVar9 = local_2a0;
        }
        (*(code *)(*pppuVar9)[2])();
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
      while( true ) {
        if (((local_168._0_8_ == local_d8._0_8_) && (local_168._8_4_ == local_d8._8_4_)) &&
           ((local_168._24_4_ == local_d8._24_4_ && (local_168._28_4_ == local_d8._28_4_))))
        goto LAB_143619edd;
        if (*(int *)&(param_1->Selected).Elements.field_0x8 ==
            *(int *)&(param_1->Selected).Elements.field_0x34) break;
        FVar11 = (param_1->Selected).Hash.SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&(param_1->Selected).Hash;
        if (FVar11 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar11;
        }
        iVar8 = *(int *)((longlong)FVar12 +
                        ((ulonglong)((param_1->Selected).HashSize - 1) &
                        local_168._88_8_ & 0xffffffff) * 4);
        if (iVar8 == -1) break;
        lVar4 = *(longlong *)&(param_1->Selected).Elements;
        while (*(int *)(lVar4 + (longlong)iVar8 * 0xc) != (int)local_168._88_8_) {
          iVar8 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0xc);
          if (iVar8 == -1) goto LAB_143619eda;
        }
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168);
      }
LAB_143619eda:
      bVar5 = false;
LAB_143619edd:
      if (local_d8._96_8_ != 0) {
        plVar10 = (longlong *)(local_d8 + 0x70);
        if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_d8._136_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (local_168._96_8_ != 0) {
        plVar10 = (longlong *)(local_168 + 0x70);
        if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_168._136_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (local_1e8._0_8_ != 0) {
        plVar10 = (longlong *)(local_1e8 + 0x10);
        if (local_1c0 != (longlong *)0x0) {
          plVar10 = local_1c0;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (bVar5) {
        piVar13 = &local_2e8;
        this_00 = pTVar1;
        local_320[0] = uVar3;
      }
      else {
        piVar13 = &local_2e4;
        this_00 = &local_238;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (this_00,piVar13,(bool *)local_320);
      pFVar15 = local_318;
LAB_143619f89:
      lVar16 = lVar16 + 1;
    } while (lVar16 < 3);
    local_280 = local_280 & ~local_28c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_298 + 8));
  } while( true );
}

// SelectTriangleVertices @ 14361a010

void __thiscall
UE::Geometry::FMeshVertexSelection::SelectTriangleVertices
          (FMeshVertexSelection *this,FMeshFaceSelection *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_b8 [2];
  undefined8 local_b0;
  undefined1 local_a0 [12];
  uint local_94;
  longlong local_90;
  uint local_88;
  int local_84;
  int local_78;
  TBaseIterator<1,1> local_70;
  
  FMeshFaceSelection::begin(param_1,(TBaseIterator<1,1> *)local_a0);
  FMeshFaceSelection::end(param_1,&local_70);
  while( true ) {
    uVar4 = local_a0._0_8_;
    if ((int)*(longlong *)(local_a0._0_8_ + 8) - *(int *)(local_a0._0_8_ + 0x34) != local_78) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((local_84 == local_70.ElementIt._padding_._4_4_) &&
        (local_90 == local_70.ElementIt._padding_)) && (uVar4 == local_70.ElementIt._padding_))
    break;
    uVar1 = *(uint *)(*(longlong *)uVar4 + (longlong)local_84 * 0xc);
    uVar5 = (ulonglong)(uVar1 & 0x1ff);
    lVar3 = *(longlong *)
             ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8);
    local_b0 = *(undefined8 *)(lVar3 + uVar5 * 0xc);
    uVar2 = *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc);
    local_res10[0] = (undefined4)local_b0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res18,(bool *)local_res10);
    local_res10[0] = local_b0._4_4_;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_res20,(bool *)local_res10);
    local_res10[0] = uVar2;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_b8,(bool *)local_res10);
    local_88 = local_88 & ~local_94;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a0 + 8));
  }
  return;
}

