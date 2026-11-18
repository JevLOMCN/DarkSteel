// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// GetAverageTranslation<UE::Geometry::TTransformSRT3<double>_> @ 14c942d20

TVector<double> * __cdecl
UE::Geometry::FVoxelBaseOp::GetAverageTranslation<UE::Geometry::TTransformSRT3<double>_>
          (TVector<double> *__return_storage_ptr__,
          TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  TTransformSRT3<double> *pTVar3;
  TTransformSRT3<double> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  pTVar3 = param_1->DataPtr;
  dVar5 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  pTVar4 = pTVar3 + iVar1;
  for (; pTVar3 != pTVar4; pTVar3 = pTVar3 + 1) {
    dVar5 = dVar5 + (pTVar3->Translation).field0_0x0._s_0.X;
    dVar7 = dVar7 + (pTVar3->Translation).field0_0x0._s_0.Y;
    dVar8 = dVar8 + (pTVar3->Translation).field0_0x0._s_0.Z;
  }
  dVar6 = __real_3ff0000000000000 / (double)iVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 * dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * dVar8;
  return __return_storage_ptr__;
}

// PostProcessResult @ 14c9831d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FVoxelBaseOp::PostProcessResult
          (FVoxelBaseOp *this,FProgressCancel *param_1,double param_2)

{
  code *pcVar1;
  longlong *plVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  ulonglong uVar5;
  double dVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  FDynamicMesh3 *pFVar14;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar15;
  undefined1 auStackY_558 [32];
  undefined1 local_518 [8];
  FDynamicMeshEditor local_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  longlong local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_4d0;
  double dStack_4c8;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  double dStack_498;
  double dStack_490;
  double local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  double local_460;
  undefined1 local_458 [640];
  undefined1 local_1d8 [48];
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 TStack_190;
  ForAnyElementType local_170;
  int local_168;
  ForAnyElementType local_160;
  int local_158;
  FDynamicMesh3 *local_150;
  FSharedReferencer<1> FStack_148;
  FPolygroupSet *pFStack_140;
  FSharedReferencer<1> local_138;
  ForAnyElementType FStack_130;
  undefined8 local_128;
  TBitArray<FDefaultBitArrayAllocator> local_120;
  undefined8 uStack_100;
  ForElementType<FSetElementId> local_f0;
  int local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  TBitArray<FDefaultBitArrayAllocator> local_d0;
  undefined8 uStack_b0;
  ForElementType<FSetElementId> local_a0;
  int local_98;
  undefined4 local_90;
  undefined2 local_8c;
  float local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_558;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar13 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar13 = plVar2;
    }
    uVar10 = (**(code **)(*plVar13 + 8))();
    bVar8 = (bool)(*pcVar1)(uVar10);
    param_1->WasCancelled = bVar8;
    if (bVar8 != false) {
      return;
    }
  }
  dVar6 = __real_3fe0000000000000;
  pTVar15 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  if (this->bRemoveInternalSurfaces != false) {
    MeshAutoRepair::RemoveInternalTriangles
              ((FDynamicMesh3 *)this->_padding_,true,Centroids,FastWindingNumber,0,
               __real_3fe0000000000000,true);
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar13 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar13 = plVar2;
    }
    uVar10 = (**(code **)(*plVar13 + 8))();
    bVar8 = (bool)(*pcVar1)(uVar10);
    param_1->WasCancelled = bVar8;
    if (bVar8 != false) {
      return;
    }
  }
  bVar8 = this->bAutoSimplify;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
  TMeshSimplification<UE::Geometry::TQuadricError<double>_>
            ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_458,
             (FDynamicMesh3 *)this->_padding_);
  local_458._272_8_ = param_1;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FastCollapsePass
            ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_458,param_2 * dVar6,
             3,true,0);
  if (this->bAutoSimplify != false) {
    TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMaxError
              ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_458,
               param_2 * param_2 * this->SimplifyMaxErrorFactor * this->SimplifyMaxErrorFactor);
  }
  TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
  ~TMeshSimplification<UE::Geometry::TQuadricError<double>_>
            ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_458);
  if ((param_1 != (FProgressCancel *)0x0) && (bVar9 = FProgressCancel::Cancelled(param_1), bVar9)) {
    return;
  }
  pFVar14 = (FDynamicMesh3 *)this->_padding_;
  if (bVar8 == false) {
    pFVar4 = (pFVar14->AttributeSet).Ptr;
    if (pFVar4 == (FDynamicMeshAttributeSet *)0x0) {
      FMeshNormals::QuickComputeVertexNormals(pFVar14,false);
    }
    else {
      if (0 < (pFVar4->NormalLayers).Array.ArrayNum) {
        pTVar15 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                   (pFVar4->NormalLayers).Array.AllocatorInstance.Data;
      }
      FMeshNormals::InitializeOverlayToPerVertexNormals(pTVar15,false);
    }
    goto LAB_14c983903;
  }
  this->_padding_ = 0;
  pTVar11 = ::operator_new(0x18);
  if (pTVar11 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    *(undefined4 *)&pTVar11->field_0x8 = 1;
    *(undefined4 *)&pTVar11->field_0xc = 1;
    *(undefined ***)pTVar11 =
         &
         ___7__TReferenceControllerWithDeleter_VFDynamicMesh3_Geometry_UE__U__DefaultDeleter_VFDynamicMesh3_Geometry_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(FDynamicMesh3 **)&pTVar11->field_0x10 = pFVar14;
    pTVar15 = pTVar11;
  }
  if ((pFVar14 == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FDynamicMesh3::EnableAttributes(pFVar14);
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)local_1d8);
  pFStack_140 = (FPolygroupSet *)0x0;
  local_120.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_120.MaxBits = _UNK_150631d94;
  uStack_100 = _UNK_150631d98;
  local_d0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_d0.MaxBits = _UNK_150631d94;
  uStack_b0 = _UNK_150631d98;
  local_1d8._0_8_ = &___7FEditNormalsOp_Geometry_UE__6B_;
  local_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FStack_130.Data = (FScriptContainerElement *)0x0;
  local_128 = 0;
  local_120.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_f0 = (ForElementType<FSetElementId>)0x0;
  local_e8 = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a0 = (ForElementType<FSetElementId>)0x0;
  local_98 = 0;
  if (pTVar15 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    LOCK();
    *(int *)&pTVar15->field_0x8 = *(int *)&pTVar15->field_0x8 + 1;
    UNLOCK();
  }
  local_480 = 0;
  uStack_478 = 0;
  local_150 = pFVar14;
  FStack_148.ReferenceController = (TReferenceControllerBase<1> *)pTVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_4f8 = (double)this->_padding_;
  local_4d8 = (double)this->_padding_;
  local_90._0_1_ = false;
  local_90._1_1_ = false;
  local_90._2_1_ = true;
  local_90._3_1_ = AreaAngleWeighting;
  local_8c._0_1_ = FaceNormalThreshold;
  local_8c._1_1_ = false;
  local_88 = 60.0;
  local_4e8 = (double)this->_padding_;
  dStack_4e0 = (double)this->_padding_;
  local_508 = (double)this->_padding_;
  dStack_500 = (double)this->_padding_;
  local_4c0 = (double)this->_padding_;
  dStack_4b8 = (double)this->_padding_;
  local_4d0 = (double)this->_padding_;
  dStack_4c8 = (double)this->_padding_;
  local_4b0 = local_4e8;
  dStack_4a8 = dStack_4e0;
  local_4a0 = local_4d8;
  dStack_498 = local_508;
  dStack_490 = dStack_500;
  local_488 = local_4f8;
  local_460 = local_4f8;
  local_1d8._16_8_ = local_4d0;
  local_1d8._24_8_ = dStack_4c8;
  local_1d8._32_8_ = local_4c0;
  local_1d8._40_8_ = dStack_4b8;
  local_1a8._s_0.X = local_4e8;
  local_1a8._s_0.Y = dStack_4e0;
  local_1a8._s_0.Z = local_4d8;
  TStack_190._s_0.X = local_508;
  TStack_190._s_0.Y = dStack_500;
  TStack_190._s_0.Z = local_4f8;
  if (param_1 == (FProgressCancel *)0x0) {
LAB_14c9835b2:
    uVar10 = local_1d8._8_8_;
    if ((local_150 == (FDynamicMesh3 *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FDynamicMesh3::Copy((FDynamicMesh3 *)uVar10,local_150,true,true,true,true);
    if ((((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
           *)(local_1d8._8_8_ + 0x208))->Ptr == (FDynamicMeshAttributeSet *)0x0) &&
       (bVar8 = `UE::Geometry::FEditNormalsOp::CalculateResult'::__l6::<lambda_1>::operator()
                          (local_518), !bVar8)) {
      FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)local_1d8._8_8_);
    }
    if (param_1 == (FProgressCancel *)0x0) {
LAB_14c98366c:
      if ((int)local_128 == uStack_100._4_4_) {
        if ((int)local_d8 == uStack_b0._4_4_) {
          FEditNormalsOp::CalculateResultWholeMesh((FEditNormalsOp *)local_1d8,param_1);
          goto LAB_14c9836a8;
        }
      }
      FEditNormalsOp::CalculateResultSelection((FEditNormalsOp *)local_1d8,param_1);
    }
    else if (param_1->WasCancelled == false) {
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      pcVar1 = *(code **)&param_1->CancelF;
      plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar13 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar13 = plVar2;
      }
      uVar10 = (**(code **)(*plVar13 + 8))();
      bVar8 = (bool)(*pcVar1)(uVar10);
      param_1->WasCancelled = bVar8;
      if (bVar8 == false) goto LAB_14c98366c;
    }
  }
  else if (param_1->WasCancelled == false) {
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar13 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar13 = plVar2;
    }
    uVar10 = (**(code **)(*plVar13 + 8))();
    bVar8 = (bool)(*pcVar1)(uVar10);
    param_1->WasCancelled = bVar8;
    if (bVar8 == false) goto LAB_14c9835b2;
  }
LAB_14c9836a8:
  pFVar14 = (FDynamicMesh3 *)local_1d8._8_8_;
  plVar2 = &this->_padding_;
  local_1d8._8_8_ = (FDynamicMesh3 *)0x0;
  if (plVar2 == &local_4f0) {
    if (pFVar14 != (FDynamicMesh3 *)0x0) {
      puVar12 = (undefined8 *)*&pFVar14->_padding_;
      goto LAB_14c9836df;
    }
  }
  else {
    pFVar3 = (FDynamicMesh3 *)*plVar2;
    *plVar2 = (longlong)pFVar14;
    if (pFVar3 != (FDynamicMesh3 *)0x0) {
      puVar12 = (undefined8 *)pFVar3->_padding_;
      pFVar14 = pFVar3;
LAB_14c9836df:
      (*(code *)*puVar12)(pFVar14);
    }
  }
  local_1d8._0_8_ = &___7FEditNormalsOp_Geometry_UE__6B_;
  local_98 = 0;
  if (local_a0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a0);
  }
  uVar5 = local_d8 >> 0x20;
  local_d8 = local_d8 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_e0,0,(int *)((longlong)&local_d8 + 4));
  }
  iVar7 = local_d0.MaxBits;
  uStack_b0 = 0xffffffff;
  local_d0._24_8_ = (ulonglong)(uint)local_d0.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_d0.NumBits = 0;
    local_d0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d0,0);
  }
  if (local_d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d0.AllocatorInstance.SecondaryData);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  local_e8 = 0;
  if (local_f0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f0);
  }
  uVar5 = local_128 >> 0x20;
  local_128 = local_128 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&FStack_130,0,(int *)((longlong)&local_128 + 4));
  }
  iVar7 = local_120.MaxBits;
  uStack_100 = 0xffffffff;
  local_120._24_8_ = (ulonglong)(uint)local_120.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_120.NumBits = 0;
    local_120.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_120,0);
  }
  if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_120.AllocatorInstance.SecondaryData);
  }
  if (FStack_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_130.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_148.ReferenceController);
  local_1d8._0_8_ = &___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>((FGeometryWarning *)local_160.Data,local_158);
  if ((FGeometryWarning *)local_160.Data != (FGeometryWarning *)0x0) {
    FMemory::Free(local_160.Data);
  }
  DestructItems<UE::Geometry::FGeometryError,int>((FGeometryError *)local_170.Data,local_168);
  if ((FGeometryError *)local_170.Data != (FGeometryError *)0x0) {
    FMemory::Free(local_170.Data);
  }
  if ((FDynamicMesh3 *)local_1d8._8_8_ != (FDynamicMesh3 *)0x0) {
    (**(code **)*(longlong *)local_1d8._8_8_)(local_1d8._8_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar15);
LAB_14c983903:
  if (((param_1 == (FProgressCancel *)0x0) || (bVar8 = FProgressCancel::Cancelled(param_1), !bVar8))
     && ((0.0 < this->MinComponentVolume || (0.0 < this->MinComponentArea)))) {
    local_510.Mesh = (FDynamicMesh3 *)this->_padding_;
    FDynamicMeshEditor::RemoveSmallComponents
              (&local_510,this->MinComponentVolume,this->MinComponentArea,0);
  }
  return;
}

