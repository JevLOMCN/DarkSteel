// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c8aa8a0

void __thiscall
`UE::Geometry::FMeshNormalMapBaker::Bake'::__l2::<lambda_2>::operator()
          (void *this,FVector2i *param_1,FCorrespondenceSample *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TVector<float> *pTVar9;
  double dVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [5];
  
  puVar2 = *(undefined8 **)this;
  uVar1 = param_2->DetailTriID;
  lVar3 = *(longlong *)*puVar2;
  uVar13 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X;
  uVar14 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y;
  uVar15 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144))
      ) && ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    UE::Geometry::TMeshTangents<double>::GetInterpolatedTriangleTangent
              (*(TMeshTangents<double> **)(puVar2[1] + 0x10),(param_2->BaseSample).TriangleIndex,
               &(param_2->BaseSample).BaryCoords,(TVector<double> *)&local_a0._s_0,
               (TVector<double> *)&local_88[0]._s_0);
    UE::Geometry::TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
              (*(TDynamicMeshOverlay<float,3> **)puVar2[2],uVar1,
               (double *)&param_2->DetailBaryCoords,&local_b8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_b0 * local_b0 + local_b8 * local_b8 + local_a8 * local_a8;
    auVar11 = sqrtpd(in_XMM3,auVar11);
    if (auVar11._0_8_ <= 0.0) {
      local_a8 = 0.0;
      local_b0 = 0.0;
      local_b8 = 0.0;
    }
    else {
      dVar10 = __real_3ff0000000000000 / auVar11._0_8_;
      local_b8 = local_b8 * dVar10;
      local_b0 = local_b0 * dVar10;
      local_a8 = local_a8 * dVar10;
    }
    uVar13 = (float)(local_a0._s_0.Y * local_b0 + local_a0._s_0.X * local_b8 +
                    local_a0._s_0.Z * local_a8);
    uVar14 = (float)((double)local_88[0]._8_8_ * local_b0 + (double)local_88[0]._0_8_ * local_b8 +
                    (double)local_88[0]._16_8_ * local_a8);
    uVar15 = (float)(local_b0 * (param_2->BaseNormal).field0_0x0._s_0.Y +
                     local_b8 * (param_2->BaseNormal).field0_0x0._s_0.X +
                    local_a8 * (param_2->BaseNormal).field0_0x0._s_0.Z);
  }
  uVar8 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
  piVar4 = *(int **)(*(longlong *)((longlong)this + 8) + 0x28);
  pTVar9 = UE::Geometry::TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                     ((TDenseGrid2<UE::Math::TVector<float>_> *)(piVar4 + 2),
                      (longlong)(param_1->field0_0x0)._s_0.Y * (longlong)*piVar4 +
                      (longlong)(param_1->field0_0x0)._s_0.X);
  fVar5 = __real_3f000000;
  fVar12 = ((float)uVar7 + (float)uVar14) * __real_3f000000;
  (pTVar9->field0_0x0)._s_0.X = ((float)uVar6 + (float)uVar13) * __real_3f000000;
  (pTVar9->field0_0x0)._s_0.Y = fVar12;
  (pTVar9->field0_0x0)._s_0.Z = ((float)uVar8 + (float)uVar15) * fVar5;
  return;
}

// Bake @ 14c8bea50

void __thiscall UE::Geometry::FMeshNormalMapBaker::Bake(FMeshNormalMapBaker *this)

{
  TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
  *pTVar1;
  undefined8 uVar2;
  float fVar3;
  FMeshImageBakingCache *this_00;
  FScriptContainerElement *pFVar4;
  FImageOccupancyMap *pFVar5;
  code *pcVar6;
  long64 lVar7;
  bool bVar8;
  uint uVar9;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar10;
  TVector<float> *pTVar11;
  longlong lVar12;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar13;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar14;
  FDynamicMesh3 *local_res8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_res10;
  longlong local_98;
  TVector<float>_u_0 local_90;
  FDynamicMesh3 ***local_80;
  FMeshNormalMapBaker *local_78;
  code *local_70;
  FDynamicMesh3 ****local_68;
  FDynamicMesh3 **local_60;
  FMeshNormalMapBaker *local_58;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_50;
  
  this_00 = (FMeshImageBakingCache *)this->_padding_;
  if ((this_00 == (FMeshImageBakingCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BakeCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshNormalMapBaker.cpp"
                         ,10,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res8 = this_00->DetailMesh;
  local_res10 = FMeshImageBakingCache::GetDetailNormals(this_00);
  if ((local_res10 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DetailNormalOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshNormalMapBaker.cpp"
                         ,0xd,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->BaseMeshTangents->Tangents).ArrayNum <
       (int)(((this_00->TargetMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this_00->TargetMesh->TriangleRefCounts).RefCounts.CurBlockUsed) * 3)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseMeshTangents->GetTangents().Num() >= 3*BakeCache->GetBakeTargetMesh()->MaxTriangleID()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshNormalMapBaker.cpp"
                         ,0x11,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_60 = &local_res8;
  local_50 = &local_res10;
  local_58 = this;
  pTVar10 = ::operator_new(0x30);
  pTVar14 = (TImageBuilder<UE::Math::TVector<float>_> *)0x0;
  pTVar13 = pTVar14;
  if (pTVar10 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
    (pTVar10->Dimensions).Width = 0;
    (pTVar10->Dimensions).Height = 0;
    (pTVar10->Image).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar10->Image).Buffer.ArrayNum = 0;
    (pTVar10->Image).Buffer.ArrayMax = 0;
    (pTVar10->Image).DimensionX = 0;
    (pTVar10->Image).DimensionY = 0;
    pTVar13 = pTVar10;
  }
  pTVar1 = &this->NormalsBuilder;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
                 *)&local_98) {
    if (pTVar13 == (TImageBuilder<UE::Math::TVector<float>_> *)0x0) goto LAB_14c8bebbc;
    pFVar4 = (pTVar13->Image).Buffer.AllocatorInstance.Data;
    pTVar10 = pTVar13;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pTVar10 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar13;
    if (pTVar10 == (TImageBuilder<UE::Math::TVector<float>_> *)0x0) goto LAB_14c8bebbc;
    pFVar4 = (pTVar10->Image).Buffer.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  ::operator_delete(pTVar10,0x30);
LAB_14c8bebbc:
  TImageBuilder<UE::Math::TVector<float>_>::SetDimensions(pTVar1->Ptr,this_00->Dimensions);
  local_90._s_0.X =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
       (this->DefaultNormal).field0_0x0._s_0.X) * __real_3f000000;
  local_90._s_0.Y =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
       (this->DefaultNormal).field0_0x0._s_0.Y) * __real_3f000000;
  local_90._s_0.Z =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
       (this->DefaultNormal).field0_0x0._s_0.Z) * __real_3f000000;
  TImageBuilder<UE::Math::TVector<float>_>::Clear(pTVar1->Ptr,(TVector<float> *)&local_90._s_0);
  local_80 = &local_60;
  local_68 = &local_80;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshNormalMapBaker::Bake'::__l2::<lambda_2>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
             ::Call;
  local_78 = this;
  FMeshImageBakingCache::EvaluateSamples
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
                      *)&local_70,true);
  if (((this_00->bOccupancyValid == false) || (this_00->bSamplesValid == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCacheValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                         ,0x66,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this_00->OccupancyMap).Ptr;
  lVar12 = (pFVar5->GutterTexels).ArrayNum;
  pTVar13 = pTVar14;
  if (0 < lVar12) {
    do {
      uVar9 = 0;
      if ((longlong)pTVar14 < lVar12) {
        uVar9 = (uint)((ulonglong)pTVar14 >> 0x3f) ^ 1;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar10 = pTVar1->Ptr;
      pFVar4 = (pFVar5->GutterTexels).AllocatorInstance.Data +
               (longlong)&(pTVar13->Dimensions).Width;
      lVar7 = *(long64 *)pFVar4;
      pTVar11 = TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                          (&pTVar10->Image,*(long64 *)(pFVar4 + 8));
      uVar2 = *(undefined8 *)&pTVar11->field0_0x0;
      fVar3 = (pTVar11->field0_0x0)._s_0.Z;
      pTVar11 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar10->Image,lVar7);
      pTVar14 = (TImageBuilder<UE::Math::TVector<float>_> *)
                ((longlong)&(pTVar14->Dimensions).Width + 1);
      *(undefined8 *)&pTVar11->field0_0x0 = uVar2;
      (pTVar11->field0_0x0)._s_0.Z = fVar3;
      lVar12 = (pFVar5->GutterTexels).ArrayNum;
      pTVar13 = (TImageBuilder<UE::Math::TVector<float>_> *)&(pTVar13->Image).Buffer.ArrayNum;
    } while ((longlong)pTVar14 < lVar12);
  }
  return;
}

