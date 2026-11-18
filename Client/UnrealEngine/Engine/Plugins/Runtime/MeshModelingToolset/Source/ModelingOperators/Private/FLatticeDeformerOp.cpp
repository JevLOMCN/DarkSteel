// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 4

// FLatticeDeformerOp @ 14c946500

FLatticeDeformerOp * __thiscall
UE::Geometry::FLatticeDeformerOp::FLatticeDeformerOp
          (FLatticeDeformerOp *this,TSharedPtr<UE::Geometry::FDynamicMesh3,1> *param_1,
          TSharedPtr<UE::Geometry::FDynamicSubmesh3,1> *param_2,TTransform<double> *param_3,
          TSharedPtr<UE::Geometry::FFFDLattice,1> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          ELatticeInterpolation param_6,bool param_7)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  *(undefined ***)this = &___7FLatticeDeformerOp_Geometry_UE__6B_;
  (this->Lattice).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->Lattice).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->OriginalMesh).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Submesh).Object = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Submesh).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  dVar5 = (param_3->Rotation).XY.m128d_f64[1];
  pTVar2 = &this->LatticeControlPoints;
  dVar6 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_3->Translation).XY.m128d_f64[0];
  dVar8 = (param_3->Translation).XY.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar6 = (param_3->Translation).ZW.m128d_f64[0];
  dVar7 = (param_3->Translation).ZW.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] = dVar5;
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar8;
  dVar5 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar8 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = dVar6;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar7;
  dVar6 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = dVar5;
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar8;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = dVar6;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_5->ArrayNum;
  _Src = (param_5->AllocatorInstance).Data;
  piVar1 = &(this->LatticeControlPoints).ArrayMax;
  (this->LatticeControlPoints).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
  }
  this->InterpolationType = param_6;
  this->bDeformNormals = param_7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// FLatticeDeformerOp @ 14c9466b0

FLatticeDeformerOp * __thiscall
UE::Geometry::FLatticeDeformerOp::FLatticeDeformerOp
          (FLatticeDeformerOp *this,TSharedPtr<UE::Geometry::FDynamicMesh3,1> *param_1,
          TSharedPtr<UE::Geometry::FFFDLattice,1> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          ELatticeInterpolation param_4,bool param_5)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *_Src;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  *(undefined ***)this = &___7FLatticeDeformerOp_Geometry_UE__6B_;
  (this->Lattice).Object = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Lattice).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->OriginalMesh).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->LatticeControlPoints;
  (this->Submesh).Object = (FDynamicSubmesh3 *)0x0;
  piVar1 = &(this->LatticeControlPoints).ArrayMax;
  (this->Submesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar5;
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar6;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar6;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar5;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar7;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  (this->LatticeControlPoints).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
  }
  this->InterpolationType = param_4;
  this->bDeformNormals = param_5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// operator() @ 14c954400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UE::Geometry::FLatticeDeformerOp::CalculateResult'::__l56::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  uint uVar11;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar12;
  undefined8 uVar13;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    if ((pFVar1->NormalLayers).Array.ArrayNum < 1) {
      pTVar12 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      pTVar12 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                 (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
      if (pTVar12 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)
      goto LAB_14c954463;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NormalOverlay != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\DeformationOps\\LatticeDeformerOp.cpp"
                       ,0x53,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_14c954463:
    lVar2 = *(longlong *)this;
    if ((*(longlong *)(lVar2 + 0x88) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Geometry::FFFDLattice::GetRotatedOverlayNormals
              (*(FFFDLattice **)(lVar2 + 0x88),
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)this + 0x120),pTVar12,param_2,
               *(ELatticeInterpolation *)(*(longlong *)this + 0x130),
               **(FLatticeExecutionInfo **)((longlong)this + 8),
               (FProgressCancel *)**(undefined8 **)((longlong)this + 0x10));
    return;
  }
  if ((param_1->VertexNormals).bIsSet == false) {
    return;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_38,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar11 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar9 = 0;
  if ((uVar11 != 0) &&
     (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar9 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar9 = 1;
    uVar7 = 1;
    if ((int)uVar11 < 2) goto joined_r0x00014c954587;
    do {
      lVar2 = (ulonglong)((uint)uVar9 & 0x1ff) * 2;
      if ((*(short *)(lVar2 + *(longlong *)(pFVar3 + (uVar9 >> 9) * 8)) != 0) &&
         (*(short *)(lVar2 + *(longlong *)(pFVar3 + (uVar9 >> 9) * 8)) != -1)) break;
      uVar7 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar11);
  }
  uVar7 = (uint)uVar9;
joined_r0x00014c954587:
  do {
    if (uVar7 == uVar11) {
      lVar2 = *(longlong *)this;
      if ((*(longlong *)(lVar2 + 0x88) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Geometry::FFFDLattice::GetRotatedMeshVertexNormals
                (*(FFFDLattice **)(lVar2 + 0x88),
                 (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)this + 0x120),&local_38,param_2,
                 *(ELatticeInterpolation *)(*(longlong *)this + 0x130),
                 **(FLatticeExecutionInfo **)((longlong)this + 8),
                 (FProgressCancel *)**(undefined8 **)((longlong)this + 0x10));
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      uVar8 = (uint)uVar9;
      uVar13 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
      uVar10 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
      if ((param_1->VertexNormals).bIsSet != false) {
        lVar2 = *(longlong *)
                 ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                 (uVar9 >> 9) * 8);
        uVar13 = *(undefined8 *)(lVar2 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
        uVar10 = *(float *)(lVar2 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      }
      uVar7 = 0;
      if ((int)uVar8 < local_38.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = uVar8 + 1;
      uVar9 = (ulonglong)uVar7;
      *(undefined8 *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc) = uVar13;
      *(undefined4 *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc + 8) = uVar10;
      if ((int)uVar11 <= (int)uVar7) break;
      pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar2 = (uVar9 >> 9) * 8;
        lVar5 = (ulonglong)((uint)uVar9 & 0x1ff) * 2;
        if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar2)) != 0) &&
           (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar2)) != -1)) break;
        uVar7 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
        if ((int)uVar11 <= (int)uVar7) goto joined_r0x00014c954587;
      }
    }
  } while( true );
}

// CalculateResult @ 14c9657a0

void __thiscall
UE::Geometry::FLatticeDeformerOp::CalculateResult(FLatticeDeformerOp *this,FProgressCancel *param_1)

{
  FRefCountVector *pFVar1;
  TSharedPtr<UE::Geometry::FDynamicSubmesh3_const_,1> *this_00;
  atomic<unsigned_char> *this_01;
  undefined8 *puVar2;
  double *pdVar3;
  FMutex FVar4;
  atomic<unsigned_char> aVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [12];
  double dVar17;
  undefined8 uVar18;
  ForAnyElementType FVar19;
  bool bVar20;
  short sVar21;
  uint uVar22;
  FDynamicMesh3 *pFVar23;
  FFFDLattice *this_02;
  FDynamicSubmesh3 *pFVar24;
  FDynamicSubmesh3 *pFVar25;
  ulonglong uVar26;
  FDynamicMeshAttributeSet *pFVar27;
  FDynamicMeshAttributeSet *pFVar28;
  FDynamicMesh3 *pFVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  FDynamicMeshAttributeSet *pFVar33;
  int iVar34;
  FDynamicMeshAttributeSet *pFVar35;
  longlong lVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  FProgressCancel *local_res10;
  longlong local_res18;
  FLatticeExecutionInfo local_res20;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_1d8;
  IndexIterator local_1c8;
  IndexIterator local_1b8;
  IndexIterator local_1a8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_198;
  IndexIterator local_188;
  FDynamicSubmesh3 *local_178;
  BaseIterator local_170;
  IndexIterator local_160;
  BaseIterator local_150;
  IndexIterator local_140;
  IndexIterator local_130;
  IndexIterator local_120;
  IndexIterator local_110;
  IndexIterator local_100;
  FLatticeDeformerOp *local_f0;
  FLatticeExecutionInfo *local_e8;
  FProgressCancel **local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [16];
  
  local_res10 = param_1;
  if ((param_1 == (FProgressCancel *)0x0) || (bVar20 = FProgressCancel::Cancelled(param_1), !bVar20)
     ) {
    pFVar29 = *(FDynamicMesh3 **)&this->field_0x8;
    pFVar23 = TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>::
              operator*<UE::Geometry::FDynamicMesh3_const_>(&this->OriginalMesh);
    FDynamicMesh3::Copy(pFVar29,pFVar23,true,true,true,true);
    if ((local_res10 == (FProgressCancel *)0x0) ||
       (bVar20 = FProgressCancel::Cancelled(local_res10), !bVar20)) {
      this_00 = &this->Submesh;
      pFVar25 = this_00->Object;
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      local_res20.bParallel = true;
      local_res20._1_3_ = 0;
      local_res20.CancelCheckSize = 100000;
      local_178 = pFVar25;
      this_02 = TSharedPtr<UE::Geometry::FFFDLattice_const_,1>::operator->(&this->Lattice);
      FFFDLattice::GetDeformedMeshVertexPositions
                (this_02,&this->LatticeControlPoints,&local_198,this->InterpolationType,local_res20,
                 local_res10);
      iVar34 = local_198.ArrayNum;
      if (pFVar25 == (FDynamicSubmesh3 *)0x0) {
        if ((*(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x24) != local_198.ArrayNum) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("ResultMesh->MaxVertexID() == DeformedPositions.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\DeformationOps\\LatticeDeformerOp.cpp"
                                ,0x26,L""), bVar20)) goto code_r0x00014c965929;
      }
      else {
        pFVar24 = TSharedPtr<UE::Geometry::FDynamicSubmesh3_const_,1>::operator->(this_00);
        if (((pFVar24->Submesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (pFVar24->Submesh).VertexRefCounts.RefCounts.CurBlockUsed != iVar34) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Submesh->GetSubmesh().MaxVertexID() == DeformedPositions.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\DeformationOps\\LatticeDeformerOp.cpp"
                                ,0x22,L""), bVar20)) {
code_r0x00014c965929:
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if ((local_res10 == (FProgressCancel *)0x0) ||
         (bVar20 = FProgressCancel::Cancelled(local_res10), !bVar20)) {
        if (pFVar25 == (FDynamicSubmesh3 *)0x0) {
          lVar36 = *(longlong *)&this->field_0x8;
          FRefCountVector::IndexIterator::IndexIterator
                    (&local_1b8,(FRefCountVector *)(lVar36 + 0x20),0,
                     *(int *)(lVar36 + 0x20) * 0x200 + *(int *)(lVar36 + 0x24));
          iVar34 = *(int *)(lVar36 + 0x20) * 0x200 + *(int *)(lVar36 + 0x24);
          FRefCountVector::IndexIterator::IndexIterator
                    (&local_130,(FRefCountVector *)(lVar36 + 0x20),iVar34,iVar34);
          if (local_1b8._8_4_ != local_130._8_4_) {
            do {
              uVar49 = local_1b8._8_4_;
              lVar36 = (longlong)(int)local_1b8._8_4_;
              if (((this->Lattice).Object == (FFFDLattice *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar20 = FFFDLattice::VertexHasValidEmbedding((this->Lattice).Object,uVar49);
              if (bVar20) {
                pFVar29 = *(FDynamicMesh3 **)&this->field_0x8;
                uVar31 = 0;
                if ((int)uVar49 < local_198.ArrayNum) {
                  uVar31 = (uint)~uVar49 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FDynamicMesh3::SetVertex
                          (pFVar29,uVar49,
                           (TVector<double> *)(local_198.AllocatorInstance.Data + lVar36 * 0x18),
                           true);
              }
              local_1b8._8_4_ = uVar49 + 1;
              if ((int)local_1b8._8_4_ < (int)local_1b8._12_4_) {
                do {
                  if ((*(short *)(*(longlong *)
                                   (*(longlong *)(local_1b8._0_8_ + 8) +
                                   (ulonglong)((uint)local_1b8._8_4_ >> 9) * 8) +
                                 (ulonglong)(local_1b8._8_4_ & 0x1ff) * 2) != 0) &&
                     (*(short *)(*(longlong *)
                                  (*(longlong *)(local_1b8._0_8_ + 8) +
                                  (ulonglong)((uint)local_1b8._8_4_ >> 9) * 8) +
                                (ulonglong)(local_1b8._8_4_ & 0x1ff) * 2) != -1)) break;
                  local_1b8._8_4_ = local_1b8._8_4_ + 1;
                } while ((int)local_1b8._8_4_ < (int)local_1b8._12_4_);
              }
              pFVar25 = local_178;
            } while (local_1b8._8_4_ != local_130._8_4_);
          }
        }
        else {
          pFVar25 = TSharedPtr<UE::Geometry::FDynamicSubmesh3_const_,1>::operator->(this_00);
          pFVar1 = &(pFVar25->Submesh).VertexRefCounts;
          FRefCountVector::IndexIterator::IndexIterator
                    (&local_1c8,pFVar1,0,
                     (pFVar25->Submesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                     (pFVar25->Submesh).VertexRefCounts.RefCounts.CurBlockUsed);
          iVar34 = (pFVar1->RefCounts).CurBlock * 0x200 +
                   (pFVar25->Submesh).VertexRefCounts.RefCounts.CurBlockUsed;
          FRefCountVector::IndexIterator::IndexIterator(&local_140,pFVar1,iVar34,iVar34);
          if (local_1c8._8_4_ != local_140._8_4_) {
            do {
              uVar49 = local_1c8._8_4_;
              lVar36 = (longlong)(int)local_1c8._8_4_;
              if (((this->Submesh).Object == (FDynamicSubmesh3 *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar22 = TIndexMap<int>::GetFrom
                                 (&(((this->Submesh).Object)->Mappings).VertexMap,uVar49);
              local_res18 = *(longlong *)&this->field_0x8;
              uVar31 = 0;
              if ((int)uVar49 < local_198.ArrayNum) {
                uVar31 = (uint)~uVar49 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar19.Data = local_198.AllocatorInstance.Data;
              sVar21 = _dclass(*(undefined8 *)(local_198.AllocatorInstance.Data + lVar36 * 0x18));
              if (((sVar21 < 1) &&
                  (sVar21 = _dclass(*(undefined8 *)(FVar19.Data + lVar36 * 0x18 + 8)), sVar21 < 1))
                 && (sVar21 = _dclass(*(undefined8 *)(FVar19.Data + lVar36 * 0x18 + 0x10)),
                    sVar21 < 1)) {
                uVar18 = *(undefined8 *)(FVar19.Data + lVar36 * 0x18 + 8);
                uVar6 = *(undefined8 *)(FVar19.Data + lVar36 * 0x18 + 0x10);
                lVar7 = *(longlong *)
                         (*(longlong *)(local_res18 + 0x10) + (ulonglong)(uVar22 >> 9) * 8);
                puVar2 = (undefined8 *)(lVar7 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
                *puVar2 = *(undefined8 *)(FVar19.Data + lVar36 * 0x18);
                puVar2[1] = uVar18;
                *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18) = uVar6;
                FDynamicMesh3::FChangeStamp::IncrementIfEnabled
                          ((FChangeStamp *)(local_res18 + 0x21c));
              }
              local_1c8._8_4_ = uVar49 + 1;
              if ((int)local_1c8._8_4_ < (int)local_1c8._12_4_) {
                do {
                  if ((*(short *)(*(longlong *)
                                   (*(longlong *)(local_1c8._0_8_ + 8) +
                                   (ulonglong)((uint)local_1c8._8_4_ >> 9) * 8) +
                                 (ulonglong)(local_1c8._8_4_ & 0x1ff) * 2) != 0) &&
                     (*(short *)(*(longlong *)
                                  (*(longlong *)(local_1c8._0_8_ + 8) +
                                  (ulonglong)((uint)local_1c8._8_4_ >> 9) * 8) +
                                (ulonglong)(local_1c8._8_4_ & 0x1ff) * 2) != -1)) break;
                  local_1c8._8_4_ = local_1c8._8_4_ + 1;
                } while ((int)local_1c8._8_4_ < (int)local_1c8._12_4_);
              }
            } while (local_1c8._8_4_ != local_140._8_4_);
          }
          lVar36 = *(longlong *)&this->field_0x8;
          uVar22 = *(int *)(lVar36 + 0x24) + *(int *)(lVar36 + 0x20) * 0x200;
          uVar31 = 0;
          if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar36 + 0x28) - 1U)))
          {
            uVar30 = 1;
            uVar31 = 1;
            if (1 < (int)uVar22) {
              do {
                lVar7 = (*(undefined8 **)(lVar36 + 0x28))[uVar30 >> 9];
                if ((*(short *)(lVar7 + (ulonglong)(uVar30 & 0x1ff) * 2) != 0) &&
                   (uVar31 = uVar30, *(short *)(lVar7 + (ulonglong)(uVar30 & 0x1ff) * 2) != -1))
                break;
                uVar30 = uVar30 + 1;
                uVar31 = uVar30;
              } while ((int)uVar30 < (int)uVar22);
            }
          }
joined_r0x00014c965bb8:
          pFVar25 = local_178;
          if (uVar31 != uVar22) {
            while( true ) {
              if (((this->Submesh).Object == (FDynamicSubmesh3 *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar34 = TIndexMap<int>::GetTo(&(((this->Submesh).Object)->Mappings).VertexMap,uVar31)
              ;
              if (iVar34 == -1) {
                auVar41 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
                lVar7 = *(longlong *)&this->field_0x8;
                uVar26 = (ulonglong)(uVar31 & 0x1ff);
                dVar17 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
                local_res18 = *(longlong *)
                               (*(longlong *)(lVar7 + 0x10) + (ulonglong)(uVar31 >> 9) * 8);
                pdVar3 = (double *)(local_res18 + uVar26 * 0x18);
                local_c0 = *pdVar3;
                dStack_b8 = pdVar3[1];
                local_b0 = *(double *)(local_res18 + 0x10 + uVar26 * 0x18);
                dVar11 = local_b0 * (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
                dVar12 = (this->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
                local_a8 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
                dVar9 = (this->WorldTransform).Scale3D.XY.m128d_f64[0] * local_c0;
                dVar10 = (this->WorldTransform).Scale3D.XY.m128d_f64[1] * dStack_b8;
                uVar49 = (undefined4)((ulonglong)dVar10 >> 0x20);
                auVar45 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64;
                auVar46._8_4_ = SUB84(dVar10,0);
                auVar46._0_8_ = dVar9;
                auVar46._12_4_ = uVar49;
                auVar39 = blendpd(local_a8,auVar45,2);
                dVar15 = auVar45._0_8_;
                auVar47._0_8_ = auVar46._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar9;
                auVar47._8_8_ = dVar11 * local_a8._8_8_ - dVar15 * dVar10;
                auVar42._8_4_ = SUB84(dVar10,0);
                auVar42._0_8_ = dVar9;
                auVar42._12_4_ = uVar49;
                auVar37._8_4_ = SUB84(dVar12,0);
                auVar37._0_8_ = dVar11;
                auVar37._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                auVar37 = blendpd(auVar42,auVar37,2);
                auVar38._0_8_ = auVar37._0_8_ * dVar15 - auVar39._0_8_ * dVar11;
                auVar38._8_8_ = auVar37._8_8_ * auVar45._8_8_ - auVar39._8_8_ * dVar12;
                dVar12 = auVar47._8_8_ + auVar47._8_8_;
                dVar14 = auVar38._0_8_ + auVar38._0_8_;
                uVar49 = (undefined4)((ulonglong)dVar14 >> 0x20);
                auVar37 = blendpd(auVar47,auVar38,2);
                auVar43._8_4_ = SUB84(dVar14,0);
                auVar43._0_8_ = dVar12;
                auVar43._12_4_ = uVar49;
                auVar40._8_4_ = SUB84(dVar14,0);
                auVar40._0_8_ = dVar12;
                auVar40._12_4_ = uVar49;
                auVar48._0_8_ = auVar37._0_8_ + auVar37._0_8_;
                auVar48._8_8_ = auVar37._8_8_ + auVar37._8_8_;
                auVar44._0_8_ = auVar43._8_8_ * auVar41._0_8_ - auVar41._8_8_ * dVar12;
                auVar44._8_8_ = auVar48._0_8_ * auVar41._8_8_ - dVar15 * dVar14;
                auVar37 = blendpd(auVar40,auVar48,2);
                auVar39._8_4_ = SUB84(auVar44._8_8_,0);
                auVar39._0_8_ = auVar44._0_8_;
                auVar39._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
                auVar42 = blendpd(auVar41,auVar45,2);
                auVar41._0_8_ = auVar37._0_8_ * dVar15 - auVar42._0_8_ * auVar48._0_8_;
                auVar41._8_8_ = auVar37._8_8_ * auVar45._8_8_ - auVar42._8_8_ * auVar48._8_8_;
                auVar45 = blendpd(auVar44,auVar41,2);
                dVar9 = dVar12 * dVar17 + dVar9 + auVar39._8_8_ +
                        (this->WorldTransform).Translation.XY.m128d_f64[0];
                dVar15 = dVar14 * dVar17 + dVar10 + auVar41._0_8_ +
                         (this->WorldTransform).Translation.XY.m128d_f64[1];
                uVar49 = SUB84(dVar15,0);
                uVar50 = (undefined4)((ulonglong)dVar15 >> 0x20);
                dVar15 = dVar17 * auVar48._0_8_ + dVar11 + auVar45._0_8_ +
                         (this->WorldTransform).Translation.ZW.m128d_f64[0];
                local_d8._8_4_ = uVar49;
                local_d8._0_8_ = dVar9;
                local_d8._12_4_ = uVar50;
                local_c8 = dVar15;
                sVar21 = _dclass();
                if (((sVar21 < 1) &&
                    (auVar16._4_8_ = extraout_XMM0_Qb,
                    auVar16._0_4_ = (int)((ulonglong)dVar9 >> 0x20),
                    auVar45._0_8_ = auVar16._0_8_ << 0x20, auVar45._8_4_ = uVar49,
                    auVar45._12_4_ = uVar50, sVar21 = _dclass(auVar45._8_8_), sVar21 < 1)) &&
                   (sVar21 = _dclass(local_c8), sVar21 < 1)) {
                  auVar13._8_4_ = uVar49;
                  auVar13._0_8_ = dVar9;
                  auVar13._12_4_ = uVar50;
                  *(undefined1 (*) [16])(local_res18 + uVar26 * 0x18) = auVar13;
                  *(double *)(local_res18 + 0x10 + uVar26 * 0x18) = dVar15;
                  if (*(char *)(lVar7 + 0x21c) != '\0') {
                    this_01 = (atomic<unsigned_char> *)(lVar7 + 0x21d);
                    LOCK();
                    FVar4.State = *this_01;
                    if (FVar4.State == (atomic<unsigned_char>)0x0) {
                      *this_01 = (atomic<unsigned_char>)0x1;
                    }
                    UNLOCK();
                    if (FVar4.State != (atomic<unsigned_char>)0x0) {
                      FMutex::LockSlow((FMutex *)this_01);
                    }
                    *(int *)(lVar7 + 0x220) = *(int *)(lVar7 + 0x220) + 1;
                    LOCK();
                    aVar5 = *this_01;
                    *this_01 = (atomic<unsigned_char>)((char)*this_01 + -1);
                    UNLOCK();
                    if (((byte)aVar5 & 2) != 0) {
                      FMutex::WakeWaitingThread((FMutex *)this_01);
                    }
                  }
                }
              }
              uVar31 = uVar31 + 1;
              if ((int)uVar22 <= (int)uVar31) break;
              while( true ) {
                lVar7 = *(longlong *)(*(longlong *)(lVar36 + 0x28) + (ulonglong)(uVar31 >> 9) * 8);
                if ((*(short *)(lVar7 + (ulonglong)(uVar31 & 0x1ff) * 2) != 0) &&
                   (*(short *)(lVar7 + (ulonglong)(uVar31 & 0x1ff) * 2) != -1)) break;
                uVar31 = uVar31 + 1;
                if ((int)uVar22 <= (int)uVar31) goto joined_r0x00014c965bb8;
              }
            }
            goto joined_r0x00014c965bb8;
          }
        }
        if (this->bDeformNormals != false) {
          local_e8 = &local_res20;
          local_e0 = &local_res10;
          local_f0 = this;
          if (pFVar25 == (FDynamicSubmesh3 *)0x0) {
            pFVar29 = *(FDynamicMesh3 **)&this->field_0x8;
          }
          else {
            if (((this->Submesh).Object == (FDynamicSubmesh3 *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar20)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar29 = &((this->Submesh).Object)->Submesh;
          }
          pFVar35 = (FDynamicMeshAttributeSet *)0x0;
          local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.ArrayNum = 0;
          local_1d8.ArrayMax = 0;
          `UE::Geometry::FLatticeDeformerOp::CalculateResult'::__l56::<lambda_1>::operator()
                    (&local_f0,pFVar29,&local_1d8);
          if ((local_1d8.ArrayNum != 0) &&
             ((local_res10 == (FProgressCancel *)0x0 ||
              (bVar20 = FProgressCancel::Cancelled(local_res10), !bVar20)))) {
            lVar36 = *(longlong *)&this->field_0x8;
            lVar7 = *(longlong *)(lVar36 + 0x208);
            uVar31 = 0;
            if (pFVar25 == (FDynamicSubmesh3 *)0x0) {
              if (lVar7 == 0) {
                if (*(char *)(lVar36 + 0x70) != '\0') {
                  FRefCountVector::IndexIterator::IndexIterator
                            ((IndexIterator *)&local_150,(FRefCountVector *)(lVar36 + 0x20),0,
                             *(int *)(lVar36 + 0x20) * 0x200 + *(int *)(lVar36 + 0x24));
                  iVar34 = *(int *)(lVar36 + 0x20) * 0x200 + *(int *)(lVar36 + 0x24);
                  FRefCountVector::IndexIterator::IndexIterator
                            (&local_100,(FRefCountVector *)(lVar36 + 0x20),iVar34,iVar34);
                  iVar34 = local_150.Index;
                  uVar26 = local_150._8_8_;
                  while (iVar34 != local_100._8_4_) {
                    uVar30 = (uint)uVar26;
                    lVar36 = *(longlong *)&this->field_0x8;
                    uVar22 = uVar31;
                    if ((int)uVar30 < local_1d8.ArrayNum) {
                      uVar22 = ~uVar30 >> 0x1f;
                    }
                    local_150._8_8_ = uVar26;
                    if ((uVar22 == 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar20)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (*(char *)(lVar36 + 0x70) != '\0') {
                      uVar49 = *(undefined4 *)
                                (local_1d8.AllocatorInstance.Data + (longlong)(int)uVar30 * 0xc + 8)
                      ;
                      lVar36 = *(longlong *)
                                (*(longlong *)(lVar36 + 0x60) + ((uVar26 & 0xffffffff) >> 9) * 8);
                      *(undefined8 *)(lVar36 + (ulonglong)(uVar30 & 0x1ff) * 0xc) =
                           *(undefined8 *)
                            (local_1d8.AllocatorInstance.Data + (longlong)(int)uVar30 * 0xc);
                      *(undefined4 *)(lVar36 + 8 + (ulonglong)(uVar30 & 0x1ff) * 0xc) = uVar49;
                    }
                    FRefCountVector::BaseIterator::goto_next(&local_150);
                    uVar26 = local_150._8_8_;
                    iVar34 = local_150.Index;
                  }
                }
              }
              else {
                if (((*(int *)(lVar7 + 0x38) < 1) ||
                    (pFVar35 = (FDynamicMeshAttributeSet *)**(longlong **)(lVar7 + 0x30),
                    pFVar35 == (FDynamicMeshAttributeSet *)0x0)) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NormalOverlay != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\DeformationOps\\LatticeDeformerOp.cpp"
                                        ,0x9a,L""), bVar20)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FRefCountVector::IndexIterator::IndexIterator
                          (&local_188,(FRefCountVector *)&pFVar35->_padding_,0,
                           (int)pFVar35->_padding_ * 0x200 +
                           *(int *)((longlong)&pFVar35->_padding_ + 4));
                iVar34 = (int)pFVar35->_padding_ * 0x200 +
                         *(int *)((longlong)&pFVar35->_padding_ + 4);
                FRefCountVector::IndexIterator::IndexIterator
                          (&local_160,(FRefCountVector *)&pFVar35->_padding_,iVar34,iVar34);
                uVar22 = local_160._8_4_;
                if (local_188._8_4_ != local_160._8_4_) {
                  do {
                    uVar49 = local_188._8_4_;
                    lVar36 = (longlong)(int)local_188._8_4_;
                    uVar30 = uVar31;
                    if ((int)local_188._8_4_ < local_1d8.ArrayNum) {
                      uVar30 = (uint)~local_188._8_4_ >> 0x1f;
                    }
                    if ((uVar30 == 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar20)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar30 = uVar49 * 3;
                    local_188._8_4_ = uVar49 + 1;
                    *(undefined4 *)
                     (*(longlong *)
                       (&((pFVar35->MaterialIDAttrib).Ptr)->field_0x0 + (ulonglong)(uVar30 >> 9) * 8
                       ) + (ulonglong)(uVar30 & 0x1ff) * 4) =
                         *(undefined4 *)(local_1d8.AllocatorInstance.Data + lVar36 * 0xc);
                    *(undefined4 *)
                     (*(longlong *)
                       (&((pFVar35->MaterialIDAttrib).Ptr)->field_0x0 +
                       (ulonglong)(uVar30 + 1 >> 9) * 8) + (ulonglong)(uVar30 + 1 & 0x1ff) * 4) =
                         *(undefined4 *)(local_1d8.AllocatorInstance.Data + lVar36 * 0xc + 4);
                    *(undefined4 *)
                     (*(longlong *)
                       (&((pFVar35->MaterialIDAttrib).Ptr)->field_0x0 +
                       (ulonglong)(uVar30 + 2 >> 9) * 8) + (ulonglong)(uVar30 + 2 & 0x1ff) * 4) =
                         *(undefined4 *)(local_1d8.AllocatorInstance.Data + lVar36 * 0xc + 8);
                    if ((int)local_188._8_4_ < (int)local_188._12_4_) {
                      do {
                        uVar22 = local_160._8_4_;
                        if ((*(short *)(*(longlong *)
                                         (*(longlong *)(local_188._0_8_ + 8) +
                                         (ulonglong)((uint)local_188._8_4_ >> 9) * 8) +
                                       (ulonglong)(local_188._8_4_ & 0x1ff) * 2) != 0) &&
                           (*(short *)(*(longlong *)
                                        (*(longlong *)(local_188._0_8_ + 8) +
                                        (ulonglong)((uint)local_188._8_4_ >> 9) * 8) +
                                      (ulonglong)(local_188._8_4_ & 0x1ff) * 2) != -1)) break;
                        local_188._8_4_ = local_188._8_4_ + 1;
                      } while ((int)local_188._8_4_ < (int)local_188._12_4_);
                    }
                  } while (local_188._8_4_ != uVar22);
                }
              }
            }
            else if (lVar7 == 0) {
              if (*(char *)(lVar36 + 0x70) != '\0') {
                pFVar25 = TSharedPtr<UE::Geometry::FDynamicSubmesh3_const_,1>::operator->
                                    (&this->Submesh);
                pFVar1 = &(pFVar25->Submesh).VertexRefCounts;
                FRefCountVector::IndexIterator::IndexIterator
                          ((IndexIterator *)&local_170,pFVar1,0,
                           (pFVar25->Submesh).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                           (pFVar25->Submesh).VertexRefCounts.RefCounts.CurBlockUsed);
                iVar34 = (pFVar1->RefCounts).CurBlock * 0x200 +
                         (pFVar25->Submesh).VertexRefCounts.RefCounts.CurBlockUsed;
                FRefCountVector::IndexIterator::IndexIterator(&local_110,pFVar1,iVar34,iVar34);
                iVar34 = local_170.Index;
                uVar6 = local_170._8_8_;
                while (iVar34 != local_110._8_4_) {
                  local_170._8_8_ = uVar6;
                  pFVar25 = TSharedPtr<UE::Geometry::FDynamicSubmesh3_const_,1>::operator->
                                      (&this->Submesh);
                  uVar32 = (uint)uVar6;
                  uVar30 = TIndexMap<int>::GetFrom(&(pFVar25->Mappings).VertexMap,uVar32);
                  lVar36 = *(longlong *)&this->field_0x8;
                  uVar22 = uVar31;
                  if ((int)uVar32 < local_1d8.ArrayNum) {
                    uVar22 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (*(char *)(lVar36 + 0x70) != '\0') {
                    uVar49 = *(undefined4 *)
                              (local_1d8.AllocatorInstance.Data + (longlong)(int)uVar32 * 0xc + 8);
                    lVar36 = *(longlong *)
                              (*(longlong *)(lVar36 + 0x60) + (ulonglong)(uVar30 >> 9) * 8);
                    *(undefined8 *)(lVar36 + (ulonglong)(uVar30 & 0x1ff) * 0xc) =
                         *(undefined8 *)
                          (local_1d8.AllocatorInstance.Data + (longlong)(int)uVar32 * 0xc);
                    *(undefined4 *)(lVar36 + 8 + (ulonglong)(uVar30 & 0x1ff) * 0xc) = uVar49;
                  }
                  FRefCountVector::BaseIterator::goto_next(&local_170);
                  uVar6 = local_170._8_8_;
                  iVar34 = local_170.Index;
                }
              }
            }
            else {
              pFVar25 = TSharedPtr<UE::Geometry::FDynamicSubmesh3_const_,1>::operator->
                                  (&this->Submesh);
              pFVar33 = (pFVar25->Submesh).AttributeSet.Ptr;
              pFVar27 = pFVar35;
              if (pFVar33 != (FDynamicMeshAttributeSet *)0x0) {
                pFVar27 = pFVar33;
              }
              pFVar33 = pFVar35;
              if ((((pFVar27->NormalLayers).Array.ArrayNum < 1) ||
                  (pFVar33 = *(FDynamicMeshAttributeSet **)
                              (pFVar27->NormalLayers).Array.AllocatorInstance.Data,
                  pFVar33 == (FDynamicMeshAttributeSet *)0x0)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SubOverlay != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\DeformationOps\\LatticeDeformerOp.cpp"
                                      ,0x81,L""), bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar27 = *(FDynamicMeshAttributeSet **)(*(longlong *)&this->field_0x8 + 0x208);
              pFVar28 = pFVar35;
              if (pFVar27 != (FDynamicMeshAttributeSet *)0x0) {
                pFVar28 = pFVar27;
              }
              if ((((pFVar28->NormalLayers).Array.ArrayNum < 1) ||
                  (pFVar35 = *(FDynamicMeshAttributeSet **)
                              (pFVar28->NormalLayers).Array.AllocatorInstance.Data,
                  pFVar35 == (FDynamicMeshAttributeSet *)0x0)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ResultOverlay != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\DeformationOps\\LatticeDeformerOp.cpp"
                                      ,0x84,L""), bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FRefCountVector::IndexIterator::IndexIterator
                        (&local_1a8,(FRefCountVector *)&pFVar33->_padding_,0,
                         (int)pFVar33->_padding_ * 0x200 +
                         *(int *)((longlong)&pFVar33->_padding_ + 4));
              iVar34 = (int)pFVar33->_padding_ * 0x200 + *(int *)((longlong)&pFVar33->_padding_ + 4)
              ;
              FRefCountVector::IndexIterator::IndexIterator
                        (&local_120,(FRefCountVector *)&pFVar33->_padding_,iVar34,iVar34);
              if (local_1a8._8_4_ != local_120._8_4_) {
                do {
                  uVar49 = local_1a8._8_4_;
                  lVar36 = (longlong)(int)local_1a8._8_4_;
                  if (((this->Submesh).Object == (FDynamicSubmesh3 *)0x0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar20)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar25 = (this->Submesh).Object;
                  if (((pFVar25->Mappings).NormalMaps.ArrayNum < 1) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar34 = TIndexMap<int>::GetFrom
                                     ((TIndexMap<int> *)
                                      (pFVar25->Mappings).NormalMaps.AllocatorInstance.Data,uVar49);
                  uVar31 = 0;
                  if ((int)uVar49 < local_1d8.ArrayNum) {
                    uVar31 = (uint)~uVar49 >> 0x1f;
                  }
                  if ((uVar31 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar31 = iVar34 * 3;
                  local_1a8._8_4_ = uVar49 + 1;
                  *(undefined4 *)
                   (*(longlong *)
                     (&((pFVar35->MaterialIDAttrib).Ptr)->field_0x0 + (ulonglong)(uVar31 >> 9) * 8)
                   + (ulonglong)(uVar31 & 0x1ff) * 4) =
                       *(undefined4 *)(local_1d8.AllocatorInstance.Data + lVar36 * 0xc);
                  *(undefined4 *)
                   (*(longlong *)
                     (&((pFVar35->MaterialIDAttrib).Ptr)->field_0x0 +
                     (ulonglong)(uVar31 + 1 >> 9) * 8) + (ulonglong)(uVar31 + 1 & 0x1ff) * 4) =
                       *(undefined4 *)(local_1d8.AllocatorInstance.Data + lVar36 * 0xc + 4);
                  *(undefined4 *)
                   (*(longlong *)
                     (&((pFVar35->MaterialIDAttrib).Ptr)->field_0x0 +
                     (ulonglong)(uVar31 + 2 >> 9) * 8) + (ulonglong)(uVar31 + 2 & 0x1ff) * 4) =
                       *(undefined4 *)(local_1d8.AllocatorInstance.Data + lVar36 * 0xc + 8);
                  if ((int)local_1a8._8_4_ < (int)local_1a8._12_4_) {
                    do {
                      if ((*(short *)(*(longlong *)
                                       (*(longlong *)(local_1a8._0_8_ + 8) +
                                       (ulonglong)((uint)local_1a8._8_4_ >> 9) * 8) +
                                     (ulonglong)(local_1a8._8_4_ & 0x1ff) * 2) != 0) &&
                         (*(short *)(*(longlong *)
                                      (*(longlong *)(local_1a8._0_8_ + 8) +
                                      (ulonglong)((uint)local_1a8._8_4_ >> 9) * 8) +
                                    (ulonglong)(local_1a8._8_4_ & 0x1ff) * 2) != -1)) break;
                      local_1a8._8_4_ = local_1a8._8_4_ + 1;
                    } while ((int)local_1a8._8_4_ < (int)local_1a8._12_4_);
                  }
                } while (local_1a8._8_4_ != local_120._8_4_);
              }
            }
          }
          if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.AllocatorInstance.Data);
          }
        }
      }
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
    }
  }
  return;
}

