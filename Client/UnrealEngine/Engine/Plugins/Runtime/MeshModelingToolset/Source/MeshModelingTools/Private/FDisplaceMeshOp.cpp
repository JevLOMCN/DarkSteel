// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// FDisplaceMeshOp @ 14cc1b450

FDisplaceMeshOp * __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOp::FDisplaceMeshOp
          (FDisplaceMeshOp *this,TSharedPtr<UE::Geometry::FDynamicMesh3,1> *param_1,
          DisplaceMeshParameters *param_2,EDisplaceMeshToolDisplaceType param_3)

{
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->_padding_ = (longlong)&___7FDisplaceMeshOp_DisplaceMeshToolLocals__6B_;
  (this->SourceMesh).Object = param_1->Object;
  (this->SourceMesh).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FDynamicMesh3 *)0x0;
  DisplaceMeshParameters::DisplaceMeshParameters(&this->Parameters,param_2);
  this->DisplacementType = param_3;
  (this->SourcePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcePositions).ArrayNum = 0;
  (this->SourcePositions).ArrayMax = 0;
  (this->SourceNormals).Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceNormals).Normals.ArrayNum = 0;
  (this->SourceNormals).Normals.ArrayMax = 0;
  (this->SourceNormals).Mesh = (FDynamicMesh3 *)0x0;
  (this->DisplacedPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplacedPositions).ArrayNum = 0;
  (this->DisplacedPositions).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// operator() @ 14cc2e6d0

float __thiscall
`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l27::<lambda_3>::operator()
          (void *this,int param_1,TVector<double> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float local_res8;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x88) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x88);
  if (*(char *)(lVar1 + 0xb0) == '\0') {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    return local_res8;
  }
  local_res8 = (float)*(undefined8 *)
                       (*(longlong *)
                         (*(longlong *)(lVar1 + 0xa0) + (ulonglong)((uint)param_1 >> 9) * 8) +
                       (ulonglong)(param_1 & 0x1ff) * 8);
  return local_res8;
}

// operator() @ 14cc2e810

double __thiscall
`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l2::<lambda_4>::operator()
          (void *this,int param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int local_res10 [2];
  
  pcVar1 = *(char **)((longlong)this + 8);
  puVar2 = *(undefined8 **)((longlong)this + 0x10);
  local_res10[0] = param_1;
  UE::Core::Private::Function::CheckCallable((void *)*puVar2);
  pcVar3 = (code *)*puVar2;
  plVar5 = puVar2 + 2;
  if ((longlong *)puVar2[5] != (longlong *)0x0) {
    plVar5 = (longlong *)puVar2[5];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  fVar6 = (float)(*pcVar3)(uVar4,local_res10,param_2);
  dVar7 = __real_3ff0000000000000;
  if (*pcVar1 != '\0') {
    dVar9 = __real_3ff0000000000000 -
            (__real_3ff0000000000000 / *(double *)(pcVar1 + 0x28) + __real_4000000000000000) *
            *(double *)(pcVar1 + 0x20);
    dVar8 = dVar9 + __real_3ff0000000000000 / *(double *)(pcVar1 + 0x28);
    if (__real_3ff0000000000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000;
    }
    dVar8 = dVar8 - dVar9;
    dVar7 = 0.0;
    if (((__real_3e45798ee2308c3a <=
          (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
        (dVar8 = (((param_3->field0_0x0)._s_0.Y * *(double *)(pcVar1 + 0x10) +
                   *(double *)(pcVar1 + 8) * (param_3->field0_0x0)._s_0.X +
                  *(double *)(pcVar1 + 0x18) * (param_3->field0_0x0)._s_0.Z) - dVar9) / dVar8,
        0.0 <= dVar8)) && (dVar7 = dVar8, __real_3ff0000000000000 <= dVar8)) {
      dVar7 = __real_3ff0000000000000;
    }
  }
  return dVar7 * **(double **)this * (double)fVar6;
}

// CalculateResult @ 14cc447b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult
          (FDisplaceMeshOp *this,FProgressCancel *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> *this_00;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  float fVar5;
  float fVar6;
  EDisplaceMeshToolDisplaceType EVar7;
  code *pcVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  FRichCurve *pFVar14;
  TVector2<float>_u_0_s_0 TVar15;
  TVector2<float>_u_0_s_0 TVar16;
  longlong lVar17;
  FDynamicMeshAttributeSet *pFVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined **ppuVar22;
  bool bVar23;
  short sVar24;
  int iVar25;
  undefined8 uVar26;
  FDynamicMesh3 *pFVar27;
  longlong *plVar28;
  undefined ***pppuVar29;
  undefined ***pppuVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar37;
  longlong lVar38;
  int iVar39;
  undefined1 auStackY_2f8 [32];
  float local_294;
  FProgressCancel *local_290;
  double *local_288;
  undefined1 *local_280;
  code **local_278;
  FMeshNormals local_270;
  double local_258;
  double local_250;
  double local_248;
  longlong local_240;
  code *local_238;
  double **local_230;
  code *local_228;
  double **local_220;
  code *local_218;
  double **local_210;
  code *local_208;
  double **local_200;
  code *local_1f8;
  double **local_1f0;
  TQuaternion<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  <lambda_1> local_1a8;
  <lambda_1> local_188;
  TVector<double>_u_0 local_158;
  undefined1 local_140 [8];
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 local_108 [2];
  code *local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined ***pppuStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined **local_b8 [2];
  undefined8 local_a8;
  undefined ***pppuStack_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined **local_88 [2];
  undefined8 local_78;
  undefined ***pppuStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_290 = param_1;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar8 = *(code **)&param_1->CancelF;
    plVar9 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar28 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar28 = plVar9;
    }
    uVar26 = (**(code **)(*plVar28 + 8))();
    bVar23 = (bool)(*pcVar8)(uVar26);
    param_1->WasCancelled = bVar23;
    if (bVar23 != false) {
      return;
    }
  }
  pFVar27 = (FDynamicMesh3 *)this->_padding_;
  if (((this->SourceMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  UE::Geometry::FDynamicMesh3::Copy(pFVar27,(this->SourceMesh).Object,true,true,true,true);
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar8 = *(code **)&param_1->CancelF;
    plVar9 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar28 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar28 = plVar9;
    }
    uVar26 = (**(code **)(*plVar28 + 8))();
    bVar23 = (bool)(*pcVar8)(uVar26);
    param_1->WasCancelled = bVar23;
    if (bVar23 != false) {
      return;
    }
  }
  if ((this->DisplacementType == DisplacementMap) &&
     ((this->Parameters).DisplacementMap == (UTexture2D *)0x0)) {
    return;
  }
  pTVar1 = &(this->SourceNormals).Normals;
  (this->SourceNormals).Mesh = (this->SourceMesh).Object;
  if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_108) {
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SourceNormals).Normals.ArrayNum = 0;
    (this->SourceNormals).Normals.ArrayMax = 0;
  }
  UE::Geometry::FMeshNormals::Compute_FaceAvg(&this->SourceNormals,true,true);
  if ((param_1 != (FProgressCancel *)0x0) && (bVar23 = FProgressCancel::Cancelled(param_1), bVar23))
  {
    return;
  }
  if (((this->SourceMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar27 = (this->SourceMesh).Object;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SourcePositions,
             (pFVar27->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar27->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  if (((this->SourceMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar27 = (this->SourceMesh).Object;
  iVar39 = (pFVar27->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar27->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar36 = 0;
  if ((iVar39 != 0) &&
     (pFVar10 = (pFVar27->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar36 = 0,
     0xfffd < (ushort)(**(short **)pFVar10 - 1U))) {
    uVar36 = 1;
    uVar31 = 1;
    if (1 < iVar39) {
      do {
        uVar36 = uVar31;
        uVar31 = (ulonglong)((uint)uVar36 & 0x1ff);
        lVar11 = *(longlong *)(pFVar10 + (uVar36 >> 9) * 8);
        if ((*(short *)(lVar11 + uVar31 * 2) != 0) && (*(short *)(lVar11 + uVar31 * 2) != -1))
        break;
        uVar32 = (uint)uVar36 + 1;
        uVar36 = (ulonglong)uVar32;
        uVar31 = uVar36;
      } while ((int)uVar32 < iVar39);
    }
  }
  uVar32 = (pFVar27->VertexRefCounts).RefCounts.CurBlock;
  uVar35 = (pFVar27->VertexRefCounts).RefCounts.CurBlockUsed;
  iVar25 = (int)uVar36;
  while (iVar25 != uVar32 * 0x200 + uVar35) {
    while( true ) {
      if (((this->SourceMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar23)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar33 = (uint)uVar36;
      lVar11 = *(longlong *)
                ((((this->SourceMesh).Object)->Vertices).Blocks.AllocatorInstance.Data +
                (uVar36 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar11 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
      uVar19 = *puVar2;
      uVar20 = puVar2[1];
      uVar26 = *(undefined8 *)(lVar11 + 0x10 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
      uVar34 = 0;
      if ((int)uVar33 < (this->SourcePositions).ArrayNum) {
        uVar34 = ~uVar33 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar12 = (this->SourcePositions).AllocatorInstance.Data;
      uVar36 = (ulonglong)(uVar33 + 1);
      pFVar10 = pFVar12 + (longlong)(int)uVar33 * 0x18;
      *(undefined8 *)pFVar10 = uVar19;
      *(undefined8 *)(pFVar10 + 8) = uVar20;
      *(undefined8 *)(pFVar12 + (longlong)(int)uVar33 * 0x18 + 0x10) = uVar26;
      if (iVar39 <= (int)(uVar33 + 1)) break;
      while( true ) {
        uVar31 = (ulonglong)((uint)uVar36 & 0x1ff);
        lVar11 = *(longlong *)
                  ((pFVar27->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar36 >> 9) * 8);
        if ((*(short *)(lVar11 + uVar31 * 2) != 0) && (*(short *)(lVar11 + uVar31 * 2) != -1))
        break;
        uVar34 = (uint)uVar36 + 1;
        uVar36 = (ulonglong)uVar34;
        if (iVar39 <= (int)uVar34) goto LAB_14cc44b60;
      }
    }
LAB_14cc44b60:
    param_1 = local_290;
    iVar25 = (int)uVar36;
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar8 = *(code **)&param_1->CancelF;
    plVar9 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar28 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar28 = plVar9;
    }
    uVar26 = (**(code **)(*plVar28 + 8))();
    bVar23 = (bool)(*pcVar8)(uVar26);
    param_1->WasCancelled = bVar23;
    if (bVar23 != false) {
      return;
    }
  }
  if (((this->SourceMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar27 = (this->SourceMesh).Object;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->DisplacedPositions,
             (pFVar27->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar27->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar8 = *(code **)&param_1->CancelF;
    plVar9 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar28 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar28 = plVar9;
    }
    uVar26 = (**(code **)(*plVar28 + 8))();
    bVar23 = (bool)(*pcVar8)(uVar26);
    param_1->WasCancelled = bVar23;
    if (bVar23 != false) {
      return;
    }
  }
  local_138 = (this->Parameters).FilterDirection.field0_0x0._s_0.X;
  dStack_130 = (this->Parameters).FilterDirection.field0_0x0._s_0.Y;
  local_140[0] = (this->Parameters).bEnableFilter;
  local_128 = (this->Parameters).FilterDirection.field0_0x0._s_0.Z;
  local_120 = (double)(this->Parameters).FilterWidth;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  pppuStack_d0 = (undefined ***)0x0;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l2::<lambda_1>,float,int,UE::Math::TVector<double>_const_&>
             ::Call;
  local_258 = (double)(this->Parameters).DisplaceIntensity;
  local_118 = __real_4014000000000000;
  uStack_e0 = (FDisplaceMeshOp *)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  if ((this->Parameters).WeightMap.Object != (TIndexedWeightMap<float> *)0x0) {
    if (((this->SourceMesh).Object == (FDynamicMesh3 *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar27 = (this->SourceMesh).Object;
    uStack_e0 = this;
    if ((pFVar27->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
        (pFVar27->VertexRefCounts).FreeIndices.CurBlockUsed == 0) {
      if (((this->Parameters).WeightMap.Object == (TIndexedWeightMap<float> *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar23)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar39 = (((this->Parameters).WeightMap.Object)->Values).ArrayNum;
      if (((this->SourceMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar23)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pppuVar30 = pppuStack_d0;
      ppuVar22 = local_e8;
      uVar26 = uStack_f0;
      pcVar8 = local_f8;
      if ((((this->SourceMesh).Object)->VertexRefCounts).UsedCount != iVar39) goto LAB_14cc44e30;
      local_f8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l25::<lambda_2>,float,int,UE::Math::TVector<double>_const_&>
                 ::Call;
      uStack_f0 = uStack_c0;
      local_d8 = (undefined4)local_a8;
      uStack_d4 = local_a8._4_4_;
      pppuStack_d0 = (undefined ***)0x0;
      local_e8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::`25'::<lambda_2>,1,0>
                  ::_vftable_;
      local_c8 = pcVar8;
      uStack_c0 = uVar26;
      local_b8[0] = ppuVar22;
      pppuStack_a0 = pppuVar30;
      if (pcVar8 == (code *)0x0) goto LAB_14cc44ed6;
      pppuVar29 = local_b8;
    }
    else {
LAB_14cc44e30:
      pppuVar30 = pppuStack_d0;
      local_88[0] = local_e8;
      uVar26 = uStack_f0;
      local_98 = local_f8;
      local_f8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l27::<lambda_3>,float,int,UE::Math::TVector<double>_const_&>
                 ::Call;
      uStack_f0 = uStack_90;
      local_d8 = (undefined4)local_78;
      uStack_d4 = local_78._4_4_;
      pppuStack_d0 = (undefined ***)0x0;
      local_e8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::`27'::<lambda_3>,1,0>
                  ::_vftable_;
      uStack_90 = uVar26;
      pppuStack_70 = pppuVar30;
      if (local_98 == (code *)0x0) goto LAB_14cc44ed6;
      pppuVar29 = local_88;
    }
    pppuStack_d0 = (undefined ***)0x0;
    if (pppuVar30 != (undefined ***)0x0) {
      pppuVar29 = pppuVar30;
    }
    (*(code *)(*pppuVar29)[2])();
    uStack_e0 = uStack_e0;
  }
LAB_14cc44ed6:
  EVar7 = this->DisplacementType;
  local_288 = &local_258;
  local_280 = local_140;
  local_278 = &local_f8;
  if (EVar7 != Constant) {
    if (EVar7 == DisplacementMap) {
      pFVar14 = (this->Parameters).AdjustmentCurve.Object;
      local_200 = &local_288;
      pTVar13 = (this->Parameters).VerticesToDisplace.Object;
      TVar15 = (this->Parameters).UVOffset.field0_0x0._s_0;
      TVar16 = (this->Parameters).UVScale.field0_0x0._s_0;
      fVar5 = (this->Parameters).DisplacementMapBaseValue;
      local_208 = UE::Core::Private::Function::
                  TFunctionRefCaller<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l2::<lambda_4>,float,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                  ::Call;
      pFVar27 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                          (&this->SourceMesh);
      ComputeDisplacement::Map
                (pFVar27,&this->SourcePositions,&this->SourceNormals,
                 (TFunctionRef<float___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                  *)&local_208,&(this->Parameters).DisplaceField,&this->DisplacedPositions,fVar5,
                 (TVector2<float>)TVar16,(TVector2<float>)TVar15,pTVar13,pFVar14,true);
      goto LAB_14cc45252;
    }
    if (EVar7 == RandomNoise) {
      pTVar13 = (this->Parameters).VerticesToDisplace.Object;
      local_210 = &local_288;
      iVar39 = (this->Parameters).RandomSeed;
      local_218 = UE::Core::Private::Function::
                  TFunctionRefCaller<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l2::<lambda_4>,float,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                  ::Call;
      pFVar27 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                          (&this->SourceMesh);
      FGenericPlatformMath::SRandInit(iVar39);
      ComputeDisplacement::
      ParallelDisplace<_DisplaceMeshToolLocals::ComputeDisplacement::RandomNoise_::__l2::<lambda_1>_>
                (pFVar27,&this->SourcePositions,&this->SourceNormals,&this->DisplacedPositions,
                 pTVar13,(TFunctionRef<float___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                          *)&local_218,false);
      goto LAB_14cc45252;
    }
    if (EVar7 == PerlinNoise) {
      pTVar13 = (this->Parameters).VerticesToDisplace.Object;
      local_220 = &local_288;
      iVar39 = (this->Parameters).RandomSeed;
      local_228 = UE::Core::Private::Function::
                  TFunctionRefCaller<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l2::<lambda_4>,float,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                  ::Call;
      pFVar27 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                          (&this->SourceMesh);
      FGenericPlatformMath::SRandInit(iVar39);
      local_294 = FGenericPlatformMath::SRand();
      local_294 = local_294 * __real_461c4000;
      local_1a8.RandomOffset = &local_294;
      local_1a8.PerlinLayerProperties = &(this->Parameters).PerlinLayerProperties;
      local_1a8.IntensityFunc =
           (TFunctionRef<float___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
            *)&local_228;
      ComputeDisplacement::
      ParallelDisplace<_DisplaceMeshToolLocals::ComputeDisplacement::PerlinNoise_::__l2::<lambda_1>_>
                (pFVar27,&this->SourcePositions,&this->SourceNormals,&this->DisplacedPositions,
                 pTVar13,&local_1a8,true);
      goto LAB_14cc45252;
    }
    if (EVar7 == SineWave) {
      local_1c8._s_0.X = (this->Parameters).SineWaveDirection.field0_0x0._s_0.X;
      local_1c8._s_0.Y = (this->Parameters).SineWaveDirection.field0_0x0._s_0.Y;
      local_230 = &local_288;
      pTVar13 = (this->Parameters).VerticesToDisplace.Object;
      local_1c8._s_0.Z = (this->Parameters).SineWaveDirection.field0_0x0._s_0.Z;
      fVar5 = (this->Parameters).SineWavePhaseShift;
      fVar6 = (this->Parameters).SineWaveFrequency;
      local_238 = UE::Core::Private::Function::
                  TFunctionRefCaller<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l2::<lambda_4>,float,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                  ::Call;
      pFVar27 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                          (&this->SourceMesh);
      local_158._s_0.Z = __real_3ff0000000000000;
      local_1e8._s_0.X = 0.0;
      local_1e8._s_0.W = __real_3ff0000000000000;
      local_158._s_0.X = 0.0;
      local_158._s_0.Y = 0.0;
      local_1e8._s_0.Y = 0.0;
      local_1e8._s_0.Z = 0.0;
      local_250 = (double)fVar6;
      local_248 = (double)fVar5;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_1e8._s_0,(TVector<double> *)&local_1c8._s_0,
                 (TVector<double> *)&local_158._s_0);
      local_188.RotateToDirection = (TQuaternion<double> *)&local_1e8;
      local_188.IntensityFunc =
           (TFunctionRef<float___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
            *)&local_238;
      local_188.Frequency = &local_250;
      local_188.PhaseShift = &local_248;
      local_188.Direction = (TVector<double> *)&local_1c8;
      ComputeDisplacement::
      ParallelDisplace<_DisplaceMeshToolLocals::ComputeDisplacement::Sine_::__l2::<lambda_1>_>
                (pFVar27,&this->SourcePositions,&this->SourceNormals,&this->DisplacedPositions,
                 pTVar13,&local_188,true);
      goto LAB_14cc45252;
    }
  }
  local_1f0 = &local_288;
  pTVar13 = (this->Parameters).VerticesToDisplace.Object;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`DisplaceMeshToolLocals::FDisplaceMeshOp::CalculateResult'::__l2::<lambda_4>,float,int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
              ::Call;
  if ((this->SourceMesh).Object == (FDynamicMesh3 *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar23) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  ComputeDisplacement::
  ParallelDisplace<_DisplaceMeshToolLocals::ComputeDisplacement::Constant_::__l2::<lambda_1>_>
            ((this->SourceMesh).Object,&this->SourcePositions,&this->SourceNormals,
             &this->DisplacedPositions,pTVar13,
             (TFunctionRef<float___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
              *)&local_1f8,true);
LAB_14cc45252:
  lVar11 = this->_padding_;
  iVar39 = *(int *)(lVar11 + 0x20) * 0x200 + *(int *)(lVar11 + 0x24);
  uVar36 = 0;
  if (((iVar39 != 0) &&
      (uVar36 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar11 + 0x28) - 1U))) &&
     (uVar36 = 1, 1 < iVar39)) {
    do {
      uVar31 = (ulonglong)((uint)uVar36 & 0x1ff);
      lVar38 = (*(undefined8 **)(lVar11 + 0x28))[uVar36 >> 9];
      if ((*(short *)(lVar38 + uVar31 * 2) != 0) && (*(short *)(lVar38 + uVar31 * 2) != -1)) break;
      uVar32 = (uint)uVar36 + 1;
      uVar36 = (ulonglong)uVar32;
    } while ((int)uVar32 < iVar39);
  }
  iVar25 = *(int *)(lVar11 + 0x20) * 0x200 + *(int *)(lVar11 + 0x24);
  local_290 = (FProgressCancel *)CONCAT44(local_290._4_4_,iVar25);
  if ((int)uVar36 != iVar25) {
LAB_14cc452d0:
    do {
      local_240 = this->_padding_;
      uVar35 = (uint)uVar36;
      uVar32 = 0;
      if ((int)uVar35 < (this->DisplacedPositions).ArrayNum) {
        uVar32 = ~uVar35 >> 0x1f;
      }
      if (uVar32 == 0) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar23) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar10 = (this->DisplacedPositions).AllocatorInstance.Data;
      lVar38 = (longlong)(int)uVar35;
      sVar24 = _dclass((int)*(undefined8 *)(pFVar10 + lVar38 * 0x18));
      if (sVar24 < 1) {
        sVar24 = _dclass((int)*(undefined8 *)(pFVar10 + lVar38 * 0x18 + 8));
        if (sVar24 < 1) {
          sVar24 = _dclass((int)*(undefined8 *)(pFVar10 + lVar38 * 0x18 + 0x10));
          lVar21 = local_240;
          if (sVar24 < 1) {
            uVar19 = *(undefined8 *)(pFVar10 + lVar38 * 0x18 + 8);
            uVar26 = *(undefined8 *)(pFVar10 + lVar38 * 0x18 + 0x10);
            lVar17 = *(longlong *)(*(longlong *)(local_240 + 0x10) + (uVar36 >> 9) * 8);
            puVar2 = (undefined8 *)(lVar17 + (ulonglong)(uVar35 & 0x1ff) * 0x18);
            *puVar2 = *(undefined8 *)(pFVar10 + lVar38 * 0x18);
            puVar2[1] = uVar19;
            *(undefined8 *)(lVar17 + 0x10 + (ulonglong)(uVar35 & 0x1ff) * 0x18) = uVar26;
            if (*(char *)(local_240 + 0x21c) != '\0') {
              this_00 = (atomic<unsigned_char> *)(local_240 + 0x21d);
              LOCK();
              FVar3.State = *this_00;
              if (FVar3.State == (atomic<unsigned_char>)0x0) {
                *this_00 = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (FVar3.State != (atomic<unsigned_char>)0x0) {
                UE::FMutex::LockSlow((FMutex *)this_00);
              }
              *(int *)(lVar21 + 0x220) = *(int *)(lVar21 + 0x220) + 1;
              LOCK();
              aVar4 = *this_00;
              *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                UE::FMutex::WakeWaitingThread((FMutex *)this_00);
              }
            }
          }
        }
      }
      uVar36 = (ulonglong)(uVar35 + 1);
      if ((int)(uVar35 + 1) < iVar39) {
        do {
          uVar31 = (ulonglong)((uint)uVar36 & 0x1ff);
          lVar38 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + (uVar36 >> 9) * 8);
          if ((*(short *)(lVar38 + uVar31 * 2) != 0) && (*(short *)(lVar38 + uVar31 * 2) != -1))
          goto LAB_14cc452d0;
          uVar32 = (uint)uVar36 + 1;
          uVar36 = (ulonglong)uVar32;
        } while ((int)uVar32 < iVar39);
      }
    } while ((int)uVar36 != (int)local_290);
  }
  pTVar37 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  if ((this->Parameters).bRecalculateNormals != false) {
    pFVar27 = (FDynamicMesh3 *)this->_padding_;
    pFVar18 = (pFVar27->AttributeSet).Ptr;
    if (pFVar18 == (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FMeshNormals::QuickComputeVertexNormals(pFVar27,false);
    }
    else {
      local_270.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Normals.ArrayNum = 0;
      local_270.Normals.ArrayMax = 0;
      if (0 < (pFVar18->NormalLayers).Array.ArrayNum) {
        pTVar37 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                   (pFVar18->NormalLayers).Array.AllocatorInstance.Data;
      }
      local_270.Mesh = pFVar27;
      UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg(&local_270,pTVar37,true,true);
      UE::Geometry::FMeshNormals::CopyToOverlay(&local_270,pTVar37,false);
      if (local_270.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Normals.AllocatorInstance.Data);
      }
    }
  }
  if (local_f8 != (code *)0x0) {
    pppuVar30 = &local_e8;
    if (pppuStack_d0 != (undefined ***)0x0) {
      pppuVar30 = pppuStack_d0;
    }
    (*(code *)(*pppuVar30)[2])();
  }
  return;
}

