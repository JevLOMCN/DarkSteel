// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// operator() @ 14c89f100

double __thiscall
`UE::Geometry::FMeshCurvatureMapBaker::Bake_Single'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  FVertexCurvature *pFVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(*(longlong *)this + 0x10);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar6 = (undefined4)**(undefined8 **)((longlong)this + 0x18);
      uVar7 = (undefined4)((ulonglong)**(undefined8 **)((longlong)this + 0x18) >> 0x20);
      uVar4 = (undefined4)**(undefined8 **)((longlong)this + 0x10);
      uVar5 = (undefined4)((ulonglong)**(undefined8 **)((longlong)this + 0x10) >> 0x20);
      pFVar2 = UE::Geometry::FMeshVertexCurvatureCache::operator[]
                         (*(FMeshVertexCurvatureCache **)((longlong)this + 8),param_1);
      dVar3 = pFVar2->Gaussian;
      goto LAB_14c89f1a9;
    }
    if (iVar1 == 2) {
      uVar6 = (undefined4)**(undefined8 **)((longlong)this + 0x18);
      uVar7 = (undefined4)((ulonglong)**(undefined8 **)((longlong)this + 0x18) >> 0x20);
      uVar4 = (undefined4)**(undefined8 **)((longlong)this + 0x10);
      uVar5 = (undefined4)((ulonglong)**(undefined8 **)((longlong)this + 0x10) >> 0x20);
      pFVar2 = UE::Geometry::FMeshVertexCurvatureCache::operator[]
                         (*(FMeshVertexCurvatureCache **)((longlong)this + 8),param_1);
      dVar3 = pFVar2->MaxPrincipal;
      goto LAB_14c89f1a9;
    }
    if (iVar1 == 3) {
      uVar6 = (undefined4)**(undefined8 **)((longlong)this + 0x18);
      uVar7 = (undefined4)((ulonglong)**(undefined8 **)((longlong)this + 0x18) >> 0x20);
      uVar4 = (undefined4)**(undefined8 **)((longlong)this + 0x10);
      uVar5 = (undefined4)((ulonglong)**(undefined8 **)((longlong)this + 0x10) >> 0x20);
      pFVar2 = UE::Geometry::FMeshVertexCurvatureCache::operator[]
                         (*(FMeshVertexCurvatureCache **)((longlong)this + 8),param_1);
      dVar3 = pFVar2->MinPrincipal;
      goto LAB_14c89f1a9;
    }
  }
  uVar6 = (undefined4)**(undefined8 **)((longlong)this + 0x18);
  uVar7 = (undefined4)((ulonglong)**(undefined8 **)((longlong)this + 0x18) >> 0x20);
  uVar4 = (undefined4)**(undefined8 **)((longlong)this + 0x10);
  uVar5 = (undefined4)((ulonglong)**(undefined8 **)((longlong)this + 0x10) >> 0x20);
  pFVar2 = UE::Geometry::FMeshVertexCurvatureCache::operator[]
                     (*(FMeshVertexCurvatureCache **)((longlong)this + 8),param_1);
  dVar3 = pFVar2->Mean;
LAB_14c89f1a9:
  if (((double)CONCAT44(uVar5,uVar4) <= dVar3) &&
     (uVar4 = uVar6, uVar5 = uVar7, dVar3 <= (double)CONCAT44(uVar7,uVar6))) {
    uVar4 = SUB84(dVar3,0);
    uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  return (double)CONCAT44(uVar5,uVar4);
}

// operator() @ 14c8af5c0

void __thiscall
`UE::Geometry::FMeshCurvatureMapBaker::Bake_Single'::__l2::<lambda_3>::operator()
          (void *this,FVector2i *param_1,FCorrespondenceSample *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  float *pfVar13;
  TVector<float> *pTVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  int local_48;
  int iStack_44;
  
  puVar8 = *(undefined8 **)this;
  uVar21 = param_2->DetailTriID;
  lVar9 = *(longlong *)*puVar8;
  if (((int)uVar21 < 0) ||
     (*(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144) <= (int)uVar21)) {
LAB_14c8af6cd:
    dVar16 = 0.0;
  }
  else {
    uVar15 = (ulonglong)(uVar21 & 0x1ff);
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar9 + 0x148) + (ulonglong)(uVar21 >> 9) * 8)
                                    + uVar15 * 2) - 1U)) goto LAB_14c8af6cd;
    lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x130) + (ulonglong)(uVar21 >> 9) * 8);
    uVar7 = *(undefined8 *)(lVar9 + uVar15 * 0xc);
    iVar12 = *(int *)(lVar9 + 8 + uVar15 * 0xc);
    local_48 = (int)uVar7;
    dVar16 = __l2::<lambda_1>::operator()((void *)puVar8[1],local_48);
    iStack_44 = (int)((ulonglong)uVar7 >> 0x20);
    dVar17 = __l2::<lambda_1>::operator()((void *)puVar8[1],iStack_44);
    dVar18 = __l2::<lambda_1>::operator()((void *)puVar8[1],iVar12);
    dVar16 = dVar17 * (param_2->DetailBaryCoords).field0_0x0._s_0.Y +
             dVar16 * (param_2->DetailBaryCoords).field0_0x0._s_0.X +
             dVar18 * (param_2->DetailBaryCoords).field0_0x0._s_0.Z;
    if (0.0 < dVar16) {
      iVar12 = 1;
      goto LAB_14c8af6de;
    }
  }
  iVar12 = (0.0 <= dVar16) - 1;
LAB_14c8af6de:
  uVar21 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar16 = **(double **)((longlong)this + 8);
  if (dVar16 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != dVar16) {
    dVar17 = (*(double **)((longlong)this + 8))[1];
    dVar18 = __real_3ff0000000000000;
    if (((double)CONCAT44(uVar22,uVar21) < dVar17) &&
       (dVar18 = __real_3fe0000000000000, dVar16 != dVar17)) {
      dVar18 = ((double)CONCAT44(uVar22,uVar21) - dVar16) / (dVar17 - dVar16);
    }
  }
  else {
    dVar18 = 0.0;
  }
  pfVar10 = *(float **)((longlong)this + 0x10);
  fVar20 = (float)dVar18;
  fVar19 = __real_3f800000 - fVar20;
  fVar1 = *pfVar10;
  if (0.0 <= (double)iVar12) {
    pfVar13 = *(float **)((longlong)this + 0x20);
  }
  else {
    pfVar13 = *(float **)((longlong)this + 0x18);
  }
  fVar2 = *pfVar13;
  fVar3 = pfVar13[2];
  fVar4 = pfVar13[1];
  fVar5 = pfVar10[2];
  fVar6 = pfVar10[1];
  piVar11 = *(int **)(*(longlong *)((longlong)this + 0x28) + 0x58);
  pTVar14 = UE::Geometry::TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                      ((TDenseGrid2<UE::Math::TVector<float>_> *)(piVar11 + 2),
                       (longlong)(param_1->field0_0x0)._s_0.Y * (longlong)*piVar11 +
                       (longlong)(param_1->field0_0x0)._s_0.X);
  *(ulonglong *)&pTVar14->field0_0x0 =
       CONCAT44(fVar20 * fVar4 + fVar19 * fVar6,fVar19 * fVar1 + fVar20 * fVar2);
  (pTVar14->field0_0x0)._s_0.Z = fVar20 * fVar3 + fVar19 * fVar5;
  return;
}

// Bake @ 14c8bcb10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshCurvatureMapBaker::Bake(FMeshCurvatureMapBaker *this)

{
  TSharedPtr<UE::Geometry::FMeshVertexCurvatureCache,1> *pTVar1;
  atomic<int> *paVar2;
  TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
  *pTVar3;
  long64 *plVar4;
  atomic<int> aVar5;
  double dVar6;
  ECurvatureType EVar7;
  EColorMode EVar8;
  float fVar9;
  FDynamicMesh3 *pFVar10;
  FMeshVertexCurvatureCache *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  FMeshImageBakingCache *this_00;
  int *piVar14;
  code *pcVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  long64 lVar20;
  bool bVar21;
  uint uVar22;
  TSharedRef<UE::Geometry::FMeshVertexCurvatureCache,1> *pTVar23;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar24;
  TVector<float> *extraout_RAX;
  undefined7 extraout_var;
  TVector<float> *pTVar25;
  int iVar26;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  TReferenceControllerBase<1> *pTVar31;
  TReferenceControllerBase<1> *pTVar32;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar33;
  longlong lVar34;
  float fVar35;
  float fVar36;
  undefined1 in_XMM2 [16];
  undefined8 uVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  <lambda_1> local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_208;
  int local_1f8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_1f0;
  FDynamicMesh3 ***local_1e0;
  double *pdStack_1d8;
  undefined4 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  FMeshCurvatureMapBaker *local_1b8;
  FDynamicMesh3 *local_1b0;
  int *local_1a8;
  FMeshCurvatureMapBaker *local_1a0;
  TVector<float>_u_0 local_198;
  FDynamicMesh3 **local_188;
  FMeshCurvatureMapBaker **local_180;
  double local_178;
  double local_170;
  code *local_168;
  FDynamicMesh3 ****local_160;
  code *local_158;
  undefined1 *local_150;
  code *local_148;
  FMeshCurvatureMapBaker **local_140;
  code *local_138;
  <lambda_1> *local_130;
  code *local_128;
  int **local_120;
  TArrayView<std::nullptr_t,int> local_118;
  code *local_108;
  int **local_100;
  FMeshCurvatureMapBaker *local_f8;
  FMeshVertexCurvatureCache *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  int *local_d8;
  code **local_d0;
  code **local_c8;
  code **local_c0;
  code **local_b8;
  int local_b0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_a8;
  longlong local_a0;
  TSharedRef<UE::Geometry::FMeshVertexCurvatureCache,1> local_98;
  longlong local_88 [9];
  
  lVar30 = this->_padding_;
  if ((lVar30 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("BakeCache",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshCurvatureMapBaker.cpp"
                          ,0x1d,L""), bVar21)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar1 = &this->Curvatures;
  pFVar10 = *(FDynamicMesh3 **)(lVar30 + 0x30);
  if ((this->Curvatures).Object == (FMeshVertexCurvatureCache *)0x0) {
    pTVar23 = MakeShared<UE::Geometry::FMeshVertexCurvatureCache,1>(&local_98);
    pTVar32 = (pTVar23->SharedReferenceCount).ReferenceController;
    pFVar11 = pTVar23->Object;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<UE::Geometry::FMeshVertexCurvatureCache,1> *)local_88) {
      pTVar1->Object = pFVar11;
      pTVar12 = (this->Curvatures).SharedReferenceCount.ReferenceController;
      if (pTVar32 != pTVar12) {
        pTVar31 = (TReferenceControllerBase<1> *)0x0;
        (this->Curvatures).SharedReferenceCount.ReferenceController = pTVar32;
        pTVar32 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar12->SharedReferenceCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          pTVar32 = pTVar31;
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)pTVar12->_padding_)(pTVar12);
            LOCK();
            paVar2 = &pTVar12->WeakReferenceCount;
            aVar5 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar5 == (atomic<int>)0x1) {
              (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    if ((pTVar1->Object == (FMeshVertexCurvatureCache *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FMeshVertexCurvatureCache::BuildAll(pTVar1->Object,pFVar10);
    if ((pTVar1->Object == (FMeshVertexCurvatureCache *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  if (((pTVar1->Object->Curvatures).ArrayNum !=
       (pFVar10->VertexRefCounts).RefCounts.CurBlock * 0x200 +
       (pFVar10->VertexRefCounts).RefCounts.CurBlockUsed) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Curvatures->Num() == DetailMesh->MaxVertexID()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshCurvatureMapBaker.cpp"
                          ,0x15,L""), bVar21)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar24 = ::operator_new(0x30);
  pTVar33 = (TImageBuilder<UE::Math::TVector<float>_> *)0x0;
  pTVar27 = pTVar33;
  if (pTVar24 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
    (pTVar24->Dimensions).Width = 0;
    (pTVar24->Dimensions).Height = 0;
    (pTVar24->Image).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar24->Image).Buffer.ArrayNum = 0;
    (pTVar24->Image).Buffer.ArrayMax = 0;
    (pTVar24->Image).DimensionX = 0;
    (pTVar24->Image).DimensionY = 0;
    pTVar27 = pTVar24;
  }
  pTVar3 = &this->ResultBuilder;
  if (pTVar3 == (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
                 *)&local_a0) {
    if (pTVar27 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
      pFVar13 = (pTVar27->Image).Buffer.AllocatorInstance.Data;
      pTVar24 = pTVar27;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      goto LAB_14c8bcd17;
    }
  }
  else {
    pTVar24 = pTVar3->Ptr;
    pTVar3->Ptr = pTVar27;
    if (pTVar24 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
      pFVar13 = (pTVar24->Image).Buffer.AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
LAB_14c8bcd17:
      ::operator_delete(pTVar24,0x30);
    }
  }
  TImageBuilder<UE::Math::TVector<float>_>::SetDimensions
            (pTVar3->Ptr,*(FImageDimensions *)(lVar30 + 0x48));
  local_198._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_198._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  TImageBuilder<UE::Math::TVector<float>_>::Clear(pTVar3->Ptr,(TVector<float> *)&local_198._s_0);
  uVar39 = in_XMM2._8_8_;
  this_00 = (FMeshImageBakingCache *)this->_padding_;
  local_1b0 = this_00->DetailMesh;
  if (pTVar1->Object == (FMeshVertexCurvatureCache *)0x0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    uVar39 = in_XMM2._8_8_;
    if (bVar21) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  fVar9 = __real_3f000000;
  local_f0 = pTVar1->Object;
  local_res18 = __real_ffefffffffffffff;
  local_res20 = __real_7fefffffffffffff;
  if (this->UseClampMode == Positive) {
    local_res18 = 0;
  }
  else if (this->UseClampMode == Negative) {
    local_res20 = 0;
  }
  EVar7 = this->UseCurvatureType;
  local_e8 = &local_res18;
  local_e0 = &local_res20;
  if (EVar7 == Mean) {
LAB_14c8bce56:
    auVar19._4_8_ = uVar39;
    auVar19._0_4_ = *(undefined4 *)((longlong)&(local_f0->MeanStats).Range.Max + 4);
    auVar37._0_8_ = auVar19._0_8_ << 0x20;
    auVar37._8_4_ = *(undefined4 *)&(local_f0->MeanStats).Mean;
    auVar37._12_4_ = *(undefined4 *)((longlong)&(local_f0->MeanStats).Mean + 4);
    local_170 = (local_f0->MeanStats).StandardDeviation;
  }
  else if (EVar7 == Gaussian) {
    auVar18._4_8_ = uVar39;
    auVar18._0_4_ = *(undefined4 *)((longlong)&(local_f0->GaussianStats).Range.Max + 4);
    auVar37._0_8_ = auVar18._0_8_ << 0x20;
    auVar37._8_4_ = *(undefined4 *)&(local_f0->GaussianStats).Mean;
    auVar37._12_4_ = *(undefined4 *)((longlong)&(local_f0->GaussianStats).Mean + 4);
    local_170 = (local_f0->GaussianStats).StandardDeviation;
  }
  else if (EVar7 == MaxPrincipal) {
    auVar17._4_8_ = uVar39;
    auVar17._0_4_ = *(undefined4 *)((longlong)&(local_f0->MaxPrincipalStats).Range.Max + 4);
    auVar37._0_8_ = auVar17._0_8_ << 0x20;
    auVar37._8_4_ = *(undefined4 *)&(local_f0->MaxPrincipalStats).Mean;
    auVar37._12_4_ = *(undefined4 *)((longlong)&(local_f0->MaxPrincipalStats).Mean + 4);
    local_170 = (local_f0->MaxPrincipalStats).StandardDeviation;
  }
  else {
    if (EVar7 != MinPrincipal) goto LAB_14c8bce56;
    auVar16._4_8_ = uVar39;
    auVar16._0_4_ = *(undefined4 *)((longlong)&(local_f0->MinPrincipalStats).Range.Max + 4);
    auVar37._0_8_ = auVar16._0_8_ << 0x20;
    auVar37._8_4_ = *(undefined4 *)&(local_f0->MinPrincipalStats).Mean;
    auVar37._12_4_ = *(undefined4 *)((longlong)&(local_f0->MinPrincipalStats).Mean + 4);
    local_170 = (local_f0->MinPrincipalStats).StandardDeviation;
  }
  local_170 = local_170 + auVar37._8_8_;
  if (this->bOverrideCurvatureRange != false) {
    local_170 = this->OverrideRangeMax;
  }
  local_170 = local_170 * this->RangeScale;
  EVar8 = this->UseColorMode;
  local_188 = &local_1b0;
  local_178 = local_170 * this->MinRangeScale;
  local_180 = &local_f8;
  if (EVar8 != BlackGrayWhite) {
    if (EVar8 == RedGreenBlue) {
      local_228 = 0x3f800000;
      local_238 = 0;
      uStack_234 = 0x3f800000;
      local_230 = 0;
      local_218 = 0;
      goto LAB_14c8bcf4a;
    }
    if (EVar8 == RedBlue) {
      local_228 = 0x3f800000;
      local_238 = 0;
      uStack_234 = 0;
      local_230 = 0;
      local_218 = 0;
      goto LAB_14c8bcf4a;
    }
  }
  local_228 = 0;
  local_238 = 0x3f000000;
  uStack_234 = 0x3f000000;
  local_230 = 0x3f000000;
  local_218 = 0x3f8000003f800000;
LAB_14c8bcf4a:
  local_1e0 = &local_188;
  local_220 = 0;
  local_210 = 0x3f800000;
  local_1d0 = &local_238;
  local_1c8 = &local_228;
  local_1c0 = &local_218;
  local_160 = &local_1e0;
  local_168 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshCurvatureMapBaker::Bake_Single'::__l2::<lambda_3>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
              ::Call;
  pdStack_1d8 = &local_178;
  local_1b8 = this;
  local_f8 = this;
  FMeshImageBakingCache::EvaluateSamples
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
                      *)&local_168,true);
  if ((*(char *)(lVar30 + 0xa0) == '\0') ||
     (pTVar25 = extraout_RAX, *(char *)(lVar30 + 0x90) == '\0')) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsCacheValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                        ,0x66,L"");
    pTVar25 = (TVector<float> *)CONCAT71(extraout_var,bVar21);
    if (bVar21) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  piVar14 = *(int **)(lVar30 + 0x98);
  lVar30 = *(longlong *)(piVar14 + 0x30);
  pTVar27 = pTVar33;
  if (0 < lVar30) {
    do {
      uVar28 = 0;
      if ((longlong)pTVar27 < lVar30) {
        uVar28 = (uint)((ulonglong)pTVar27 >> 0x3f) ^ 1;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pTVar24 = pTVar3->Ptr;
      plVar4 = (long64 *)((longlong)&(pTVar33->Dimensions).Width + *(longlong *)(piVar14 + 0x2e));
      lVar20 = *plVar4;
      pTVar25 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar24->Image,plVar4[1]);
      uVar39 = *(undefined8 *)&pTVar25->field0_0x0;
      fVar36 = (pTVar25->field0_0x0)._s_0.Z;
      pTVar25 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar24->Image,lVar20);
      pTVar27 = (TImageBuilder<UE::Math::TVector<float>_> *)
                ((longlong)&(pTVar27->Dimensions).Width + 1);
      pTVar33 = (TImageBuilder<UE::Math::TVector<float>_> *)&(pTVar33->Image).Buffer.ArrayNum;
      *(undefined8 *)&pTVar25->field0_0x0 = uVar39;
      (pTVar25->field0_0x0)._s_0.Z = fVar36;
      lVar30 = *(longlong *)(piVar14 + 0x30);
    } while ((longlong)pTVar27 < lVar30);
  }
  uVar28 = 0;
  dVar6 = this->BlurRadius;
  if (__real_3f847ae147ae147b < dVar6) {
    fVar35 = (float)dVar6;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    iVar26 = (int)dVar6;
    fVar36 = fVar35;
    if ((iVar26 != -0x80000000) && ((float)iVar26 != fVar35)) {
      auVar38._4_4_ = fVar35;
      auVar38._0_4_ = fVar35;
      auVar38._8_8_ = 0;
      uVar22 = movmskps((int)pTVar25,auVar38);
      fVar36 = (float)(int)(iVar26 + (uVar22 & 1 ^ 1));
    }
    local_1f8[0] = (int)fVar36;
    TGaussian2<float>::MakeKernelFromWidth(local_1f8[0],fVar35 * fVar9,&local_1f0,true);
    iVar26 = local_1f8[0];
    local_1a8 = local_1f8;
    iVar29 = *piVar14 * piVar14[1];
    local_120 = &local_1a8;
    local_128 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshCurvatureMapBaker::Bake'::__l14::<lambda_5>,float,UE::Geometry::FVector2i_const_&>
                ::Call;
    local_130 = local_res8;
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshCurvatureMapBaker::Bake'::__l14::<lambda_3>,void,__int64,float,UE::Math::TVector<float>_&>
                ::Call;
    local_140 = &local_1a0;
    local_148 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshCurvatureMapBaker::Bake'::__l14::<lambda_2>,void,__int64,float,UE::Math::TVector<float>_&>
                ::Call;
    local_150 = local_res10;
    local_158 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshCurvatureMapBaker::Bake'::__l14::<lambda_1>,UE::Math::TVector<float>,__int64>
                ::Call;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    local_res8[0] = (<lambda_1>)0x0;
    local_res10[0] = 0;
    local_1a0 = this;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_208,iVar29,Default);
    local_d0 = &local_158;
    local_c8 = &local_148;
    local_c0 = &local_138;
    local_b0 = iVar26;
    local_b8 = &local_128;
    local_118.DataPtr = (void **)0x0;
    local_a8 = &local_208;
    local_108 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FImageOccupancyMap::ParallelProcessingPass<UE::Math::TVector<float>_>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_100 = &local_d8;
    local_118.ArrayNum = 0;
    local_d8 = piVar14;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",piVar14[1],1,(TFunctionRef<void___cdecl(int)> *)&local_108,
               local_res8[0],None,&local_118);
    if (0 < iVar29) {
      lVar30 = 0;
      lVar34 = 0;
      do {
        if ((*(longlong *)(piVar14 + 0xc) <= lVar30) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if (*(char *)(lVar30 + *(longlong *)(piVar14 + 10)) != '\0') {
          uVar22 = 0;
          if ((int)uVar28 < local_208.ArrayNum) {
            uVar22 = ~uVar28 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar39 = *(undefined8 *)(local_208.AllocatorInstance.Data + lVar34);
          fVar9 = *(float *)(local_208.AllocatorInstance.Data + lVar34 + 8);
          pTVar25 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar3->Ptr->Image,lVar30);
          *(undefined8 *)&pTVar25->field0_0x0 = uVar39;
          (pTVar25->field0_0x0)._s_0.Z = fVar9;
        }
        uVar28 = uVar28 + 1;
        lVar30 = lVar30 + 1;
        lVar34 = lVar34 + 0xc;
      } while (lVar30 < iVar29);
    }
    if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
  }
  return;
}

// Bake_Multi @ 14c8c12a0

void __thiscall UE::Geometry::FMeshCurvatureMapBaker::Bake_Multi(FMeshCurvatureMapBaker *this)

{
  return;
}

// Bake_Single @ 14c8c12b0

void __thiscall UE::Geometry::FMeshCurvatureMapBaker::Bake_Single(FMeshCurvatureMapBaker *this)

{
  double dVar1;
  ECurvatureType EVar2;
  EColorMode EVar3;
  FMeshImageBakingCache *this_00;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  FDynamicMesh3 *local_res18 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  FDynamicMesh3 ***local_98;
  double *pdStack_90;
  undefined4 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  FMeshCurvatureMapBaker *local_70;
  FDynamicMesh3 **local_68;
  FMeshCurvatureMapBaker **local_60;
  double local_58;
  double local_50;
  code *local_48;
  FDynamicMesh3 ****local_40;
  FMeshCurvatureMapBaker *local_38;
  FMeshVertexCurvatureCache *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  this_00 = (FMeshImageBakingCache *)this->_padding_;
  local_res18[0] = this_00->DetailMesh;
  if ((this->Curvatures).Object == (FMeshVertexCurvatureCache *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_30 = (this->Curvatures).Object;
  local_res8 = __real_ffefffffffffffff;
  local_res10 = __real_7fefffffffffffff;
  if (this->UseClampMode == Positive) {
    local_res8 = 0;
  }
  else if (this->UseClampMode == Negative) {
    local_res10 = 0;
  }
  EVar2 = this->UseCurvatureType;
  local_28 = &local_res8;
  local_20 = &local_res10;
  if (EVar2 == Mean) {
LAB_14c8c13ac:
    local_50 = (local_30->MeanStats).Mean;
    dVar1 = (local_30->MeanStats).StandardDeviation;
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  else if (EVar2 == Gaussian) {
    local_50 = (local_30->GaussianStats).Mean;
    dVar1 = (local_30->GaussianStats).StandardDeviation;
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  else if (EVar2 == MaxPrincipal) {
    local_50 = (local_30->MaxPrincipalStats).Mean;
    dVar1 = (local_30->MaxPrincipalStats).StandardDeviation;
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  else {
    if (EVar2 != MinPrincipal) goto LAB_14c8c13ac;
    local_50 = (local_30->MinPrincipalStats).Mean;
    dVar1 = (local_30->MinPrincipalStats).StandardDeviation;
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_50 = (double)CONCAT44(uVar7,uVar6) + local_50;
  if (this->bOverrideCurvatureRange != false) {
    local_50 = this->OverrideRangeMax;
  }
  local_50 = local_50 * this->RangeScale;
  EVar3 = this->UseColorMode;
  local_68 = local_res18;
  local_58 = local_50 * this->MinRangeScale;
  local_60 = &local_38;
  if (EVar3 != BlackGrayWhite) {
    if (EVar3 == RedGreenBlue) {
      local_b8 = 0x3f800000;
      local_c8 = 0;
      uStack_c4 = 0x3f800000;
      local_c0 = 0;
      local_a8 = 0;
      goto LAB_14c8c1486;
    }
    if (EVar3 == RedBlue) {
      local_b8 = 0x3f800000;
      local_c8 = 0;
      uStack_c4 = 0;
      local_c0 = 0;
      local_a8 = 0;
      goto LAB_14c8c1486;
    }
  }
  local_b8 = 0;
  local_c8 = 0x3f000000;
  uStack_c4 = 0x3f000000;
  local_c0 = 0x3f000000;
  local_a8 = 0x3f8000003f800000;
LAB_14c8c1486:
  local_98 = &local_68;
  local_b0 = 0;
  pdStack_90 = &local_58;
  local_a0 = 0x3f800000;
  local_88 = &local_c8;
  local_80 = &local_b8;
  local_78 = &local_a8;
  local_40 = &local_98;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshCurvatureMapBaker::Bake_Single'::__l2::<lambda_3>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
             ::Call;
  local_70 = this;
  local_38 = this;
  FMeshImageBakingCache::EvaluateSamples
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
                      *)&local_48,true);
  return;
}

// CacheDetailCurvatures @ 14c8c3270

void __thiscall
UE::Geometry::FMeshCurvatureMapBaker::CacheDetailCurvatures
          (FMeshCurvatureMapBaker *this,FDynamicMesh3 *param_1)

{
  TSharedPtr<UE::Geometry::FMeshVertexCurvatureCache,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMeshVertexCurvatureCache *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TSharedRef<UE::Geometry::FMeshVertexCurvatureCache,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<UE::Geometry::FMeshVertexCurvatureCache,1> local_28;
  longlong local_18 [2];
  
  pTVar1 = &this->Curvatures;
  if ((this->Curvatures).Object == (FMeshVertexCurvatureCache *)0x0) {
    pTVar9 = MakeShared<UE::Geometry::FMeshVertexCurvatureCache,1>(&local_28);
    pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar5 = pTVar9->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = pTVar4;
    if (pTVar1 != (TSharedPtr<UE::Geometry::FMeshVertexCurvatureCache,1> *)local_18) {
      pTVar1->Object = pFVar5;
      pTVar6 = (this->Curvatures).SharedReferenceCount.ReferenceController;
      if (pTVar4 != pTVar6) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        (this->Curvatures).SharedReferenceCount.ReferenceController = pTVar4;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar6->SharedReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)pTVar6->_padding_)(pTVar6);
            LOCK();
            paVar2 = &pTVar6->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if ((pTVar1->Object == (FMeshVertexCurvatureCache *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FMeshVertexCurvatureCache::BuildAll(pTVar1->Object,param_1);
    if ((pTVar1->Object == (FMeshVertexCurvatureCache *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (((pTVar1->Object->Curvatures).ArrayNum !=
       (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
       (param_1->VertexRefCounts).RefCounts.CurBlockUsed) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Curvatures->Num() == DetailMesh->MaxVertexID()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshCurvatureMapBaker.cpp"
                         ,0x15,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// GetColorMapRange @ 14c8f26b0

void __thiscall
UE::Geometry::FMeshCurvatureMapBaker::GetColorMapRange
          (FMeshCurvatureMapBaker *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  EColorMode EVar1;
  
  EVar1 = this->UseColorMode;
  if (EVar1 != BlackGrayWhite) {
    if (EVar1 == RedGreenBlue) {
      *(undefined8 *)&param_1->field0_0x0 = 0x3f800000;
      (param_1->field0_0x0)._s_0.Z = 0.0;
      (param_2->field0_0x0)._s_0.X = 0.0;
      *(undefined8 *)((longlong)&param_2->field0_0x0 + 4) = 0x3f800000;
      *(undefined8 *)&param_3->field0_0x0 = 0;
      (param_3->field0_0x0)._s_0.Z = 1.0;
      return;
    }
    if (EVar1 == RedBlue) {
      *(undefined8 *)&param_1->field0_0x0 = 0x3f800000;
      (param_1->field0_0x0)._s_0.Z = 0.0;
      *(undefined8 *)&param_2->field0_0x0 = 0;
      (param_2->field0_0x0)._s_0.Z = 0.0;
      *(undefined8 *)&param_3->field0_0x0 = 0;
      (param_3->field0_0x0)._s_0.Z = 1.0;
      return;
    }
  }
  *(undefined8 *)&param_1->field0_0x0 = 0;
  (param_1->field0_0x0)._s_0.Z = 0.0;
  (param_2->field0_0x0)._s_0.X = 0.5;
  (param_2->field0_0x0)._s_0.Y = 0.5;
  (param_2->field0_0x0)._s_0.Z = 0.5;
  (param_3->field0_0x0)._s_0.X = 1.0;
  (param_3->field0_0x0)._s_0.Y = 1.0;
  (param_3->field0_0x0)._s_0.Z = 1.0;
  return;
}

