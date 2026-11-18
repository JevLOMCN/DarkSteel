// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// FSmoothHoleFiller @ 14c7b4140

FSmoothHoleFiller * __thiscall
UE::Geometry::FSmoothHoleFiller::FSmoothHoleFiller
          (FSmoothHoleFiller *this,FDynamicMesh3 *param_1,FEdgeLoop *param_2)

{
  (this->FillOptions).bConstrainToHoleInterior = true;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSmoothHoleFiller_Geometry_UE__6B_;
  (this->FillOptions).InteriorSmoothness = 0.2;
  (this->FillOptions).FillDensityScalar = 1.0;
  (this->FillOptions).RemeshingExteriorRegionWidth = 2;
  (this->FillOptions).SmoothingExteriorRegionWidth = 2;
  (this->FillOptions).SmoothingInteriorRegionWidth = 2;
  (this->FillOptions).bProjectDuringRemesh = false;
  this->Mesh = param_1;
  this->FillLoop = param_2;
  return this;
}

// ConstrainSubregionSeams @ 14c7f5860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSmoothHoleFiller::ConstrainSubregionSeams
          (FSmoothHoleFiller *this,FSubRegionRemesher *param_1,bool param_2)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 auStackY_2b8 [32];
  undefined1 local_288 [8];
  uint local_280 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_278;
  int iStack_270;
  uint uStack_26c;
  undefined1 *local_268;
  undefined4 uStack_260;
  int iStack_25c;
  int local_258;
  int iStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  int local_248;
  undefined1 local_244 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  uint *local_208;
  undefined4 *local_200;
  undefined4 local_1f8 [2];
  undefined8 local_1f0;
  undefined4 local_1e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1e0;
  TOptional<UE::Geometry::FMeshConstraints> local_1d0;
  undefined1 local_108 [64];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  undefined1 local_b8 [64];
  void *local_78;
  undefined4 local_70;
  int local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  this_00 = &param_1->EdgeROI;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  iVar13 = 0;
  local_108._40_4_ = 0;
  local_108._44_4_ = 0x80;
  local_108._48_4_ = 0xffffffff;
  local_108._52_4_ = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_b8._32_8_ = 0;
  local_b8._40_4_ = 0;
  local_b8._44_4_ = 0x80;
  local_b8._48_4_ = 0xffffffff;
  local_b8._52_4_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_68 = 0;
  local_244._4_8_ = param_1;
  pTVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(this_00,&local_1e0);
  FMeshConstraintsUtil::ConstrainSeamsInEdgeROI
            ((FMeshConstraints *)local_108,this->Mesh,pTVar8,!param_2,false,true);
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  FMeshConstraintsUtil::ConstrainROIBoundariesInEdgeROI
            ((FMeshConstraints *)local_108,this->Mesh,this_00,&param_1->TriangleROI,!param_2,false);
  puVar1 = &(param_1->EdgeROI).Elements.field_0x10;
  iVar3 = *(int *)&(param_1->EdgeROI).Elements.field_0x28;
  uStack_26c = 1;
  local_258 = 0;
  iStack_25c = local_258;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->EdgeROI).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    local_258 = 0;
    iVar13 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      local_258 = local_258 + 0x20;
      iVar13 = iVar13 + 1;
      iStack_25c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14c7f5a2e;
      uVar12 = puVar15[lVar9 + 1];
    }
    uStack_26c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_26c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_248 = (int)lVar9;
    iStack_25c = local_258 + -1 + local_248;
    if (iVar3 < iStack_25c) {
      iStack_25c = iVar3;
    }
  }
LAB_14c7f5a2e:
  uVar12 = *(uint *)&(param_1->EdgeROI).Elements.field_0x28;
  iStack_250 = *(int *)&(param_1->EdgeROI).Elements.field_0x8 -
               *(int *)&(param_1->EdgeROI).Elements.field_0x34;
  uVar11 = uVar12 & 0xffffffe0;
  uStack_260 = 0xffffffff;
  TStack_230._padding_ = CONCAT44(uStack_26c,iVar13);
  TStack_230.CurrentBitIndex = iStack_25c;
  TStack_230.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_230._28_4_ = iStack_25c;
  TStack_230.BaseBitIndex = local_258;
  uStack_210 = CONCAT44(uStack_24c,iStack_250);
  local_278 = this_00;
  iStack_270 = iVar13;
  local_268 = puVar1;
  iStack_254 = iStack_25c;
  local_244._12_8_ = this_00;
  TStack_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->EdgeROI).Elements.field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&(param_1->EdgeROI).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14c7f5b40;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14c7f5b40:
  while( true ) {
    uVar6 = local_244._12_8_;
    if (*(int *)&((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_244._12_8_)->field_0x8 -
        *(int *)&((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_244._12_8_)->field_0x34 != (int)uStack_210) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_288);
    }
    if (((TStack_230.CurrentBitIndex == uVar12) &&
        (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)uVar6 == this_00)) break;
    uVar11 = *(uint *)(*(longlong *)
                        (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)uVar6 + (longlong)TStack_230.CurrentBitIndex * 0xc);
    if (*(int *)(*(longlong *)
                  ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8)
                 + 0xc + (ulonglong)(uVar11 & 0x1ff) * 0x10) == -1) {
      local_208 = local_280;
      local_200 = local_1f8;
      local_1f8[0] = 7;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_280[0] = uVar11;
      TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                  *)local_108,
                 (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)local_244,
                 (bool *)&local_208);
    }
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  }
  if ((0 < (int)(local_108._8_4_ - local_108._52_4_)) ||
     (0 < (int)(local_b8._8_4_ - local_b8._52_4_))) {
    FMeshConstraints::FMeshConstraints(&local_1d0.TypedValue,(FMeshConstraints *)local_108);
    local_1d0.bIsSet = true;
    FMeshRefinerBase::SetExternalConstraints((FMeshRefinerBase *)local_244._4_8_,&local_1d0);
  }
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_60.Data,(int)local_58);
  if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_60.Data !=
      (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_60.Data);
  }
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  return;
}

// DefaultConfigureRemesher @ 14c7ff920

void __thiscall
UE::Geometry::FSmoothHoleFiller::DefaultConfigureRemesher
          (FSmoothHoleFiller *this,FSubRegionRemesher *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->RemeshingTargetEdgeLength <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RemeshingTargetEdgeLength > 0.0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothHoleFiller.cpp"
                       ,0xe3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRemesher::SetTargetEdgeLength((FRemesher *)param_1,this->RemeshingTargetEdgeLength);
  param_1->field_0x143 = 1;
  *(undefined8 *)&param_1->field_0x168 = 0x3fe8000000000000;
  *(undefined4 *)&param_1->field_0x170 = 2;
  ConstrainSubregionSeams(this,param_1,param_2);
  param_1->field_0x128 = 0;
  return;
}

// Fill @ 14c804880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Geometry::FSmoothHoleFiller::Fill(FSmoothHoleFiller *this,int param_1)

{
  longlong *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDynamicMesh3 *pFVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FEdgeLoop *pFVar10;
  FSubRegionRemesher *pFVar11;
  FSubRegionRemesher *pFVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  FSubRegionRemesher *pFVar22;
  uint *puVar23;
  FSubRegionRemesher *pFVar24;
  FSmoothHoleFiller *pFVar25;
  undefined1 auStackY_328 [32];
  undefined1 local_2e8;
  undefined1 local_2e7 [7];
  ForAnyElementType local_2e0;
  int local_2d8;
  int local_2d4;
  uint local_2d0 [2];
  int local_2c8;
  uint local_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b8;
  undefined4 local_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  int local_2a0 [2];
  double local_298;
  FSmoothHoleFiller *local_290;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_280;
  undefined1 local_258 [16];
  longlong local_248;
  FDynamicMesh3 *local_240;
  FEdgeLoop local_238;
  EFillType local_1f8;
  int local_1f4;
  double local_1e8;
  double local_1e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d8;
  FEdgeLoop local_1c8;
  undefined1 local_188 [8];
  undefined1 local_180 [32];
  uint *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  int local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_128;
  undefined1 local_d8 [40];
  longlong *local_b0;
  FMeshVertexSelection local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2c8 = param_1;
  local_290 = this;
  pFVar10 = FEdgeLoop::FEdgeLoop(&local_1c8,this->FillLoop);
  local_240 = this->Mesh;
  pFVar24 = (FSubRegionRemesher *)0x0;
  local_258._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
  local_258._8_8_ = (void *)0x0;
  local_248 = 0;
  FEdgeLoop::FEdgeLoop(&local_238,pFVar10);
  local_1f8 = TriangleFan;
  local_1f4 = -1;
  pFVar2 = (pFVar10->BowtieVertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar10->Edges).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar10->Vertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  bVar5 = FSimpleHoleFiller::Fill((FSimpleHoleFiller *)local_258,param_1);
  if (bVar5) {
    if ((this->FillLoop->Vertices).ArrayNum < 4) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(local_258 + 8));
      bVar5 = true;
    }
    else {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::EdgeLengthStatsFromEdges
                (this->Mesh,&this->FillLoop->Edges,&local_1e0,&local_1e8,&local_298);
      if (((this->FillOptions).FillDensityScalar <= 0.0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FillOptions.FillDensityScalar > 0.0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothHoleFiller.cpp"
                             ,0x101,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_188 = (undefined1  [8])this->Mesh;
      local_180._0_8_ = (FScriptContainerElement *)0x0;
      local_180._8_8_ = 0;
      local_160 = (uint *)0x0;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      this->RemeshingTargetEdgeLength = local_298 / (this->FillOptions).FillDensityScalar;
      local_158 = ___xmm_00000000ffffffff0000008000000000;
      uStack_150 = _UNK_150631d98;
      FMeshFaceSelection::
      Select<TArray<int,TSizedDefaultAllocator<32>_>,TCheckedPointerIterator<int,int,0>_>
                ((FMeshFaceSelection *)local_188,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(local_258 + 8));
      this_00 = &this->_padding_;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)this_00,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(local_258 + 8));
      if ((this->FillOptions).bConstrainToHoleInterior == false) {
        local_d8._0_8_ = 0;
        local_b0 = (longlong *)0x0;
        FMeshFaceSelection::ExpandToOneRingNeighbours
                  ((FMeshFaceSelection *)local_188,(this->FillOptions).RemeshingExteriorRegionWidth,
                   (TUniqueFunction<bool___cdecl(int)> *)local_d8);
        if (local_d8._0_8_ != 0) {
          plVar16 = (longlong *)(local_d8 + 0x10);
          if (local_b0 != (longlong *)0x0) {
            plVar16 = local_b0;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        bVar5 = false;
        pFVar12 = pFVar24;
        do {
          bVar7 = FMeshFaceSelection::ClipFins((FMeshFaceSelection *)local_188,true);
          bVar8 = FMeshFaceSelection::FillEars((FMeshFaceSelection *)local_188,true);
          if ((bVar7) || (bVar8)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (((!bVar5) && (bVar7)) || (bVar7)) break;
          iVar15 = (int)pFVar12;
          bVar5 = true;
          pFVar12 = (FSubRegionRemesher *)(ulonglong)(iVar15 + 1);
        } while (iVar15 < 0x19);
      }
      pFVar3 = this->Mesh;
      pFVar12 = pFVar24;
      if ((this->FillOptions).bConstrainToHoleInterior == false) {
        pFVar11 = ::operator_new(0x440);
        if (pFVar11 != (FSubRegionRemesher *)0x0) {
          pFVar12 = FSubRegionRemesher::FSubRegionRemesher(pFVar11,pFVar3);
        }
        FMeshVertexSelection::FMeshVertexSelection
                  (&local_a8,this->Mesh,(FMeshFaceSelection *)local_188);
        local_128.Elements._0_8_ = 0;
        local_128.Elements._8_8_ = 0;
        local_128.Elements._32_8_ = 0;
        local_128.Elements._40_4_ = 0;
        local_128.Elements._44_4_ = 0x80;
        local_128.Elements._48_4_ = 0xffffffff;
        local_128.Elements._52_4_ = 0;
        local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_128.HashSize = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&local_128,&local_a8.Selected);
        if (&pFVar12->VertexROI != &local_128) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
          Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                    (&pFVar12->VertexROI,&local_128);
        }
        local_128.HashSize = 0;
        if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_128.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_128.Elements);
        FSubRegionRemesher::InitializeFromVertexROI(pFVar12);
        local_a8.Selected.HashSize = 0;
        if (local_a8.Selected.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_a8.Selected.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_a8.Selected.Elements);
      }
      else {
        pFVar11 = ::operator_new(0x440);
        if (pFVar11 != (FSubRegionRemesher *)0x0) {
          FSubRegionRemesher::FSubRegionRemesher(pFVar11,pFVar3);
          *(undefined ***)pFVar11 = &___7FRestrictedSubRegionRemesher_Geometry_UE__6B_;
          FRestrictedSubRegionRemesher::InitializeFromTriangleROI
                    ((FRestrictedSubRegionRemesher *)pFVar11,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_180);
          pFVar12 = pFVar11;
        }
      }
      FSubRegionRemesher::UpdateROI(pFVar12);
      DefaultConfigureRemesher(this,pFVar12,true);
      pFVar11 = pFVar24;
      do {
        if ((int)pFVar11 != 0) {
          FSubRegionRemesher::UpdateROI(pFVar12);
          ConstrainSubregionSeams(this,pFVar12,true);
        }
        (**(code **)(*(longlong *)pFVar12 + 0x38))(pFVar12);
        uVar20 = (int)pFVar11 + 1;
        pFVar11 = (FSubRegionRemesher *)(ulonglong)uVar20;
      } while ((int)uVar20 < 5);
      pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                          (&pFVar12->TriangleROI,&local_1d8);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)this_00 != pTVar13) {
        if ((void *)*this_00 != (void *)0x0) {
          FMemory::Free((void *)*this_00);
        }
        *this_00 = (longlong)(pTVar13->AllocatorInstance).Data;
        (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)&this->_padding_ = pTVar13->ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = pTVar13->ArrayMax;
        pTVar13->ArrayNum = 0;
        pTVar13->ArrayMax = 0;
      }
      if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
      FMeshFaceSelection::DeselectAll((FMeshFaceSelection *)local_188);
      FMeshFaceSelection::
      Select<TArray<int,TSizedDefaultAllocator<32>_>,TCheckedPointerIterator<int,int,0>_>
                ((FMeshFaceSelection *)local_188,(TArray<int,TSizedDefaultAllocator<32>_> *)this_00)
      ;
      if ((this->FillOptions).bConstrainToHoleInterior == false) {
        bVar5 = false;
        pFVar11 = pFVar24;
        do {
          bVar7 = FMeshFaceSelection::ClipFins((FMeshFaceSelection *)local_188,true);
          bVar8 = FMeshFaceSelection::FillEars((FMeshFaceSelection *)local_188,true);
          if ((bVar7) || (bVar8)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (((!bVar5) && (bVar7)) || (bVar7)) break;
          iVar15 = (int)pFVar11;
          bVar5 = true;
          pFVar11 = (FSubRegionRemesher *)(ulonglong)(iVar15 + 1);
        } while (iVar15 < 0x19);
      }
      (*(code *)**(undefined8 **)pFVar12)(pFVar12,1);
      pFVar12 = pFVar24;
      pFVar25 = this;
      if ((this->FillOptions).bConstrainToHoleInterior == false) {
        SmoothAndRemesh(this,(FMeshFaceSelection *)local_188);
        FMeshFaceSelection::DeselectAll((FMeshFaceSelection *)local_188);
        FMeshFaceSelection::
        Select<TArray<int,TSizedDefaultAllocator<32>_>,TCheckedPointerIterator<int,int,0>_>
                  ((FMeshFaceSelection *)local_188,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)this_00);
      }
      else {
        do {
          SmoothAndRemeshPreserveRegion(pFVar25,(FMeshFaceSelection *)local_188,(int)pFVar12 == 1);
          bVar5 = 1 < local_138;
          if (!bVar5) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_180);
          }
          iVar15 = SUB84(local_180._8_8_,4);
          local_180._8_8_ = local_180._8_8_ & 0xffffffff00000000;
          if (iVar15 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_180,0,(int *)(local_180 + 0xc));
          }
          uVar20 = local_158._4_4_;
          uStack_150 = 0xffffffff;
          local_158 = (ulonglong)local_158._4_4_ << 0x20;
          if (0x80 < uVar20) {
            local_158 = 0x8000000000;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_180 + 0x10),0);
          }
          if (bVar5) {
            local_138 = 1;
            if (((ForElementType<FSetElementId>)local_140.Data != (ForElementType<FSetElementId>)0x0
                ) && (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_140,0,0,4),
                     (ForElementType<FSetElementId>)local_140.Data !=
                     (ForElementType<FSetElementId>)0x0)) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_140,0,0,4)
              ;
            }
            FVar21.Data = (FScriptContainerElement *)local_148;
            if ((ForElementType<FSetElementId>)local_140.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar21.Data = local_140.Data;
            }
            *(undefined4 *)FVar21.Data = 0xffffffff;
            if (local_138 != 0) {
              pTStack_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_180 + 0x10);
              local_2c0 = 0;
              uStack_2bc = 1;
              uStack_2ac = 0;
              uStack_2a8 = 0;
              pFVar11 = pFVar24;
              if ((uint)local_158 != 0) {
                puVar23 = (uint *)(local_180 + 0x10);
                if (local_160 != (uint *)0x0) {
                  puVar23 = local_160;
                }
                uVar20 = *puVar23;
                pFVar22 = pFVar24;
                while (uVar20 == 0) {
                  uStack_2a8 = (int)pFVar22 + 0x20;
                  pFVar22 = (FSubRegionRemesher *)(ulonglong)uStack_2a8;
                  iVar15 = (int)pFVar11;
                  local_2c0 = iVar15 + 1;
                  pFVar11 = (FSubRegionRemesher *)(ulonglong)local_2c0;
                  if ((int)(((uint)local_158 - 1) + ((int)((uint)local_158 - 1) >> 0x1f & 0x1fU)) >>
                      5 < (int)local_2c0) goto LAB_14c804f2e;
                  uVar20 = (puVar23 + 1)[iVar15];
                }
                uStack_2bc = -uVar20 & uVar20;
                uVar17 = (ulonglong)uStack_2bc * 2 + 1;
                lVar19 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                uStack_2ac = (int)pFVar22 + -1 + (int)lVar19;
                pFVar11 = (FSubRegionRemesher *)(ulonglong)uStack_2ac;
                if ((int)(uint)local_158 < (int)uStack_2ac) {
LAB_14c804f2e:
                  pFVar11 = (FSubRegionRemesher *)(local_158 & 0xffffffff);
                  uStack_2ac = (uint)local_158;
                }
              }
              local_2b0 = 0xffffffff;
              local_288 = (longlong *)local_180;
              local_280._padding_ = CONCAT44(uStack_2bc,local_2c0);
              local_280.CurrentBitIndex = uStack_2ac;
              local_280.UnvisitedBitMask = 0xffffffff;
              local_280._28_4_ = uStack_2a4;
              local_280.BaseBitIndex = uStack_2a8;
              local_280.Array = pTStack_2b8;
              if ((int)pFVar11 < (int)(uint)local_158) {
                do {
                  lVar19 = *local_288;
                  lVar14 = (longlong)(int)pFVar11;
                  uVar20 = local_138 - 1U & *(uint *)(lVar19 + lVar14 * 0xc);
                  *(uint *)(lVar19 + 8 + lVar14 * 0xc) = uVar20;
                  FVar21.Data = (FScriptContainerElement *)local_148;
                  if ((ForElementType<FSetElementId>)local_140.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar21.Data = local_140.Data;
                  }
                  uVar17 = (longlong)local_138 - 1U & (longlong)(int)uVar20;
                  *(undefined4 *)(lVar19 + 4 + lVar14 * 0xc) =
                       *(undefined4 *)((longlong)FVar21.Data + uVar17 * 4);
                  *(int *)((longlong)FVar21.Data + uVar17 * 4) = (int)pFVar11;
                  local_280.UnvisitedBitMask =
                       local_280.UnvisitedBitMask & ~local_280._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_280);
                  pFVar11 = (FSubRegionRemesher *)(ulonglong)(uint)local_280.CurrentBitIndex;
                } while (local_280.CurrentBitIndex < (local_280.Array)->NumBits);
              }
            }
          }
          puVar18 = (uint *)*this_00;
          iVar15 = (int)this->_padding_;
          puVar23 = puVar18 + iVar15;
          while( true ) {
            if ((int)this->_padding_ != iVar15) {
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_2e8);
            }
            if (puVar18 == puVar23) break;
            uVar20 = *puVar18;
            if (((-1 < (int)uVar20) &&
                ((int)uVar20 <
                 (int)((((FRefCountVector *)((longlong)local_188 + 0x140))->RefCounts).CurBlock *
                       0x200 + (((FRefCountVector *)((longlong)local_188 + 0x140))->RefCounts).
                               CurBlockUsed))) &&
               ((ushort)(*(short *)(*(longlong *)
                                     ((((FRefCountVector *)((longlong)local_188 + 0x140))->RefCounts
                                      ).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8
                                     ) + (ulonglong)(uVar20 & 0x1ff) * 2) - 1U) < 0xfffe)) {
              local_2d0[0] = uVar20;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_180,
                         local_2a0,(bool *)local_2d0);
            }
            puVar18 = puVar18 + 1;
          }
          uVar20 = (int)pFVar12 + 1;
          pFVar12 = (FSubRegionRemesher *)(ulonglong)uVar20;
          pFVar25 = local_290;
        } while ((int)uVar20 < 2);
      }
      local_2d8 = (int)pFVar25->_padding_;
      lVar19 = (longlong)local_2d8;
      _Src = (void *)pFVar25->_padding_;
      local_2e0.Data = (FScriptContainerElement *)0x0;
      if (local_2d8 == 0) {
        local_2d4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_2d8,0,&local_2e0,local_2d8,&local_2d4);
        memcpy(local_2e0.Data,_Src,lVar19 << 2);
      }
      iVar15 = *(int *)((longlong)&pFVar25->_padding_ + 4);
      piVar1 = (int *)((longlong)&pFVar25->_padding_ + 4);
      *(undefined4 *)&pFVar25->_padding_ = 0;
      if (iVar15 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)&pFVar25->_padding_,0,piVar1);
      }
      iVar15 = local_2d8;
      pFVar2 = local_2e0.Data + (longlong)local_2d8 * 4;
      FVar21.Data = local_2e0.Data;
      while( true ) {
        if (local_2d8 != iVar15) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2e7);
        }
        if (FVar21.Data == pFVar2) break;
        pFVar3 = pFVar25->Mesh;
        uVar20 = *(uint *)FVar21.Data;
        if ((pFVar3->TriangleGroups).bIsSet == false) {
          iVar9 = -1;
        }
        else {
          if ((-1 < (int)uVar20) &&
             ((int)uVar20 <
              (int)((pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + (ulonglong)(uVar20 >> 9) * 8) +
                                   (ulonglong)(uVar20 & 0x1ff) * 2) - 1U) < 0xfffe) {
              iVar9 = *(int *)(*(longlong *)
                                ((pFVar3->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
              goto LAB_14c8051c9;
            }
          }
          iVar9 = 0;
        }
LAB_14c8051c9:
        if (iVar9 == local_2c8) {
          iVar9 = (int)pFVar25->_padding_;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)&pFVar25->_padding_,piVar1);
          }
          *(int *)&pFVar25->_padding_ = iVar9 + 1;
          *(uint *)(pFVar25->_padding_ + (longlong)iVar9 * 4) = uVar20;
        }
        FVar21.Data = FVar21.Data + 4;
      }
      bVar5 = true;
      if (local_2e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data);
      }
      local_138 = 0;
      if ((ForElementType<FSetElementId>)local_140.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_140.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_180);
    }
  }
  else {
    bVar5 = false;
  }
  local_258._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
  if (local_238.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.BowtieVertices.AllocatorInstance.Data);
  }
  if (local_238.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Edges.AllocatorInstance.Data);
  }
  if (local_238.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Vertices.AllocatorInstance.Data);
  }
  if ((void *)local_258._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_258._8_8_);
  }
  return bVar5;
}

// SmoothAndRemesh @ 14c832010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSmoothHoleFiller::SmoothAndRemesh
          (FSmoothHoleFiller *this,FMeshFaceSelection *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar6;
  uint uVar7;
  longlong *plVar9;
  undefined1 auStackY_7a8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_768;
  FDynamicMesh3 local_758;
  undefined1 local_528 [32];
  void *local_508;
  undefined4 local_500;
  uint local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  ForElementType<FSetElementId> local_4e8;
  int local_4e0;
  FMeshVertexSelection local_4d8;
  undefined1 local_478 [208];
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_3a8;
  undefined1 local_350;
  bool local_335;
  double local_310;
  ESmoothTypes local_308;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_218 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_178 [3];
  uint local_6c;
  uint local_68;
  ulonglong local_38;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar8;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  if (((this->FillOptions).bConstrainToHoleInterior != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FillOptions.bConstrainToHoleInterior",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothHoleFiller.cpp"
                         ,0x194,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::`anonymous_namespace'::RegionSmooth
            (this->Mesh,param_1,(this->FillOptions).SmoothingInteriorRegionWidth,
             (this->FillOptions).SmoothingExteriorRegionWidth,false,
             (this->FillOptions).InteriorSmoothness,__real_4024000000000000);
  FSubRegionRemesher::FSubRegionRemesher((FSubRegionRemesher *)local_478,this->Mesh);
  FMeshVertexSelection::FMeshVertexSelection(&local_4d8,this->Mesh,param_1);
  pTVar8 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_4fc = 0x80;
  local_528._0_8_ = (FScriptContainerElement *)0x0;
  local_528._8_8_ = 0;
  local_508 = (void *)0x0;
  local_500 = 0;
  local_4f4 = 0;
  local_4e8 = (ForElementType<FSetElementId>)0x0;
  local_4e0 = 0;
  local_4f8 = 0xffffffff;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_528,&local_4d8.Selected)
  ;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (local_218,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_528);
  local_4e0 = 0;
  if (local_4e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4e8);
  }
  iVar2 = SUB84(local_528._8_8_,4);
  local_528._8_8_ = local_528._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_528,0,(int *)(local_528 + 0xc));
  }
  local_4f8 = 0xffffffff;
  local_4f4 = 0;
  local_500 = 0;
  if (0x80 < local_4fc) {
    local_4fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_528 + 0x10),0);
  }
  if (local_508 != (void *)0x0) {
    FMemory::Free(local_508);
  }
  if ((FScriptContainerElement *)local_528._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_528._0_8_);
  }
  FSubRegionRemesher::InitializeFromVertexROI((FSubRegionRemesher *)local_478);
  FSubRegionRemesher::UpdateROI((FSubRegionRemesher *)local_478);
  if ((this->RemeshingTargetEdgeLength <= 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemeshingTargetEdgeLength > 0.0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothHoleFiller.cpp"
                         ,0xe3,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FRemesher::SetTargetEdgeLength((FRemesher *)local_478,this->RemeshingTargetEdgeLength);
  local_310 = __real_3fe8000000000000;
  local_335 = true;
  local_308 = MeanValue;
  ConstrainSubregionSeams(this,(FSubRegionRemesher *)local_478,false);
  local_350 = 0;
  FDynamicMesh3::FDynamicMesh3(&local_758);
  pTVar6 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  pTVar4 = pTVar8;
  if ((this->FillOptions).bProjectDuringRemesh == false) {
    local_350 = 0;
  }
  else {
    FDynamicMesh3::Copy(&local_758,this->Mesh,false,false,false,false);
    pTVar6 = ::operator_new(0xc0);
    if (pTVar6 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar4 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
               TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(pTVar6,&local_758,true);
    }
    local_3a8 = ::operator_new(0x18);
    if (local_3a8 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      local_350 = 1;
      local_3a8 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
      pTVar6 = pTVar8;
    }
    else {
      local_3a8->MeshChangeStamp = (ulong64)pTVar4;
      local_3a8->_padding_ = (longlong)&___7FMeshProjectionTarget_Geometry_UE__6B_;
      local_3a8->Mesh = &local_758;
      local_350 = 1;
      pTVar6 = local_3a8;
    }
  }
  while( true ) {
    if ((int)pTVar8 != 0) {
      FSubRegionRemesher::UpdateROI((FSubRegionRemesher *)local_478);
      ConstrainSubregionSeams(this,(FSubRegionRemesher *)local_478,false);
    }
    if ((local_68 == local_6c) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastRemeshPassCounter != LastUpdateROICounter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                           ,0xe0,L""), bVar3)) break;
    local_68 = local_6c;
    FRemesher::BasicRemeshPass((FRemesher *)local_478);
    uVar7 = (int)pTVar8 + 1;
    pTVar8 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar7;
    if (9 < (int)uVar7) {
      pTVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(local_178,&local_768);
      plVar9 = &this->_padding_;
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)plVar9 != pTVar5) {
        if ((void *)*plVar9 != (void *)0x0) {
          FMemory::Free((void *)*plVar9);
        }
        *plVar9 = (longlong)(pTVar5->AllocatorInstance).Data;
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)&this->_padding_ = pTVar5->ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = pTVar5->ArrayMax;
        pTVar5->ArrayNum = 0;
        pTVar5->ArrayMax = 0;
      }
      if (local_768.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.AllocatorInstance.Data);
      }
      if (pTVar6 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
        (**(code **)pTVar6->_padding_)(pTVar6,1);
      }
      if (pTVar4 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
        (**(code **)pTVar4->_padding_)(pTVar4,1);
      }
      FDynamicMesh3::~FDynamicMesh3(&local_758);
      local_4d8.Selected.HashSize = 0;
      if (local_4d8.Selected.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_4d8.Selected.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_4d8.Selected.Elements);
      FSubRegionRemesher::~FSubRegionRemesher((FSubRegionRemesher *)local_478);
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SmoothAndRemeshPreserveRegion @ 14c832480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSmoothHoleFiller::SmoothAndRemeshPreserveRegion
          (FSmoothHoleFiller *this,FMeshFaceSelection *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this_00;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
  undefined8 *puVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStackY_6e8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_6a8;
  FDynamicMesh3 local_698;
  undefined1 local_468 [208];
  undefined8 *local_398;
  undefined1 local_340;
  bool local_325;
  double local_300;
  ESmoothTypes local_2f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_168 [3];
  uint local_5c;
  uint local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  if ((this->FillOptions).bConstrainToHoleInterior == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FillOptions.bConstrainToHoleInterior",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothHoleFiller.cpp"
                       ,0x15f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::`anonymous_namespace'::RegionSmooth
            (this->Mesh,param_1,(this->FillOptions).SmoothingInteriorRegionWidth,
             (this->FillOptions).SmoothingExteriorRegionWidth,true,
             (this->FillOptions).InteriorSmoothness,__real_4024000000000000);
  FSubRegionRemesher::FSubRegionRemesher((FSubRegionRemesher *)local_468,this->Mesh);
  local_468._0_8_ = &___7FRestrictedSubRegionRemesher_Geometry_UE__6B_;
  FRestrictedSubRegionRemesher::InitializeFromTriangleROI
            ((FRestrictedSubRegionRemesher *)local_468,&param_1->Selected);
  FSubRegionRemesher::UpdateROI((FSubRegionRemesher *)local_468);
  if (this->RemeshingTargetEdgeLength <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RemeshingTargetEdgeLength > 0.0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothHoleFiller.cpp"
                       ,0xe3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRemesher::SetTargetEdgeLength((FRemesher *)local_468,this->RemeshingTargetEdgeLength);
  local_300 = __real_3fe8000000000000;
  local_325 = true;
  local_2f8 = MeanValue;
  ConstrainSubregionSeams(this,(FSubRegionRemesher *)local_468,true);
  local_340 = 0;
  FDynamicMesh3::FDynamicMesh3(&local_698);
  pTVar3 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  puVar4 = (undefined8 *)0x0;
  if ((param_2) && ((this->FillOptions).bProjectDuringRemesh != false)) {
    FDynamicMesh3::Copy(&local_698,this->Mesh,false,false,false,false);
    this_00 = ::operator_new(0xc0);
    if (this_00 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar3 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
               TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(this_00,&local_698,true);
    }
    puVar4 = ::operator_new(0x18);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      local_340 = 1;
      local_398 = (undefined8 *)0x0;
    }
    else {
      puVar4[2] = pTVar3;
      *puVar4 = &___7FMeshProjectionTarget_Geometry_UE__6B_;
      puVar4[1] = &local_698;
      local_340 = 1;
      local_398 = puVar4;
    }
  }
  else {
    local_340 = 0;
  }
  iVar6 = 0;
  do {
    if (iVar6 != 0) {
      FSubRegionRemesher::UpdateROI((FSubRegionRemesher *)local_468);
      ConstrainSubregionSeams(this,(FSubRegionRemesher *)local_468,true);
    }
    if (local_58 == local_5c) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastRemeshPassCounter != LastUpdateROICounter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                         ,0xe0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = local_5c;
    FRemesher::BasicRemeshPass((FRemesher *)local_468);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  pTVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(local_168,&local_6a8);
  plVar7 = &this->_padding_;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)plVar7 != pTVar5) {
    if ((void *)*plVar7 != (void *)0x0) {
      FMemory::Free((void *)*plVar7);
    }
    *plVar7 = (longlong)(pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&this->_padding_ = pTVar5->ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = pTVar5->ArrayMax;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 0;
  }
  if (local_6a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.AllocatorInstance.Data);
  }
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (pTVar3 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  FDynamicMesh3::~FDynamicMesh3(&local_698);
  FSubRegionRemesher::~FSubRegionRemesher((FSubRegionRemesher *)local_468);
  return;
}

