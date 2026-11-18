// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c89e1f0

void __thiscall
`UE::Geometry::FMeshGenericWorldPositionNormalBaker::Bake'::__l2::<lambda_1>::operator()
          (void *this,FVector2i *param_1,FCorrespondenceSample *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  TVector<float> *pTVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_148;
  float local_144;
  float local_140;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_98;
  
  local_108._s_0.X = (param_2->BaseSample).BaryCoords.field0_0x0._s_0.X;
  local_108._s_0.Y = (param_2->BaseSample).BaryCoords.field0_0x0._s_0.Y;
  local_108._s_0.Z = (param_2->BaseSample).BaryCoords.field0_0x0._s_0.Z;
  dVar1 = (param_2->BaseNormal).field0_0x0._s_0.Z;
  dVar2 = (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.Z;
  dVar7 = (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.X;
  dVar8 = (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.Y;
  dVar5 = (param_2->BaseNormal).field0_0x0._s_0.X;
  dVar6 = (param_2->BaseNormal).field0_0x0._s_0.Y;
  local_98 = dVar1;
  UE::Geometry::TMeshTangents<double>::GetInterpolatedTriangleTangent
            (*(TMeshTangents<double> **)(*(longlong *)this + 0x10),
             (param_2->BaseSample).TriangleIndex,(TVector<double> *)&local_108._s_0,
             (TVector<double> *)&local_120._s_0,(TVector<double> *)&local_138._s_0);
  lVar3 = *(longlong *)this;
  local_e8 = dVar5;
  dStack_e0 = dVar6;
  local_d8 = dVar1;
  local_c8 = dVar7;
  dStack_c0 = dVar8;
  local_b8 = dVar2;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x30));
  pcVar4 = *(code **)(lVar3 + 0x30);
  plVar13 = (longlong *)(lVar3 + 0x40);
  if (*(longlong **)(lVar3 + 0x58) != (longlong *)0x0) {
    plVar13 = *(longlong **)(lVar3 + 0x58);
  }
  uVar11 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(&local_148,uVar11,&local_c8,&local_e8);
  uVar10 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
  fVar9 = __real_3f000000;
  fVar14 = SQRT(local_144 * local_144 + local_148 * local_148 + local_140 * local_140);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
  }
  else {
    fVar14 = __real_3f800000 / fVar14;
    fVar18 = local_148 * fVar14;
    fVar17 = local_144 * fVar14;
    fVar14 = local_140 * fVar14;
  }
  fVar16 = ((float)local_138._s_0.Y * fVar17 + (float)local_138._s_0.X * fVar18 +
           (float)local_138._s_0.Z * fVar14 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y)
           * __real_3f000000;
  fVar15 = ((float)dVar6 * fVar17 + (float)dVar5 * fVar18 +
           (float)local_98 * fVar14 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) *
           __real_3f000000;
  pTVar12 = UE::Geometry::TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                      ((TDenseGrid2<UE::Math::TVector<float>_> *)
                       (*(int **)(*(longlong *)this + 0x60) + 2),
                       (longlong)(param_1->field0_0x0)._s_0.Y *
                       (longlong)**(int **)(*(longlong *)this + 0x60) +
                       (longlong)(param_1->field0_0x0)._s_0.X);
  (pTVar12->field0_0x0)._s_0.X =
       ((float)local_120._s_0.Y * fVar17 + (float)local_120._s_0.X * fVar18 +
       (float)local_120._s_0.Z * fVar14 + (float)uVar10) * fVar9;
  (pTVar12->field0_0x0)._s_0.Y = fVar16;
  (pTVar12->field0_0x0)._s_0.Z = fVar15;
  return;
}

// Bake @ 14c8bd5b0

void __thiscall
UE::Geometry::FMeshGenericWorldPositionNormalBaker::Bake(FMeshGenericWorldPositionNormalBaker *this)

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
  FMeshGenericWorldPositionNormalBaker *local_res8;
  longlong local_78;
  TVector<float>_u_0 local_70;
  code *local_60;
  FMeshGenericWorldPositionNormalBaker **local_58;
  
  this_00 = *(FMeshImageBakingCache **)&this->field_0x8;
  if ((this_00 == (FMeshImageBakingCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BakeCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshGenericWorldPositionBaker.cpp"
                         ,0x2a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->BaseMeshTangents->Tangents).ArrayNum <
       (int)(((this_00->TargetMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this_00->TargetMesh->TriangleRefCounts).RefCounts.CurBlockUsed) * 3)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseMeshTangents->GetTangents().Num() >= 3 * BakeCache->GetBakeTargetMesh()->MaxTriangleID()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshGenericWorldPositionBaker.cpp"
                         ,0x2d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
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
                 *)&local_78) {
    if (pTVar13 == (TImageBuilder<UE::Math::TVector<float>_> *)0x0) goto LAB_14c8bd6b6;
    pFVar4 = (pTVar13->Image).Buffer.AllocatorInstance.Data;
    pTVar10 = pTVar13;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pTVar10 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar13;
    if (pTVar10 == (TImageBuilder<UE::Math::TVector<float>_> *)0x0) goto LAB_14c8bd6b6;
    pFVar4 = (pTVar10->Image).Buffer.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  ::operator_delete(pTVar10,0x30);
LAB_14c8bd6b6:
  TImageBuilder<UE::Math::TVector<float>_>::SetDimensions(pTVar1->Ptr,this_00->Dimensions);
  local_70._s_0.X =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
       (this->DefaultNormal).field0_0x0._s_0.X) * __real_3f000000;
  local_70._s_0.Y =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
       (this->DefaultNormal).field0_0x0._s_0.Y) * __real_3f000000;
  local_70._s_0.Z =
       (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
       (this->DefaultNormal).field0_0x0._s_0.Z) * __real_3f000000;
  TImageBuilder<UE::Math::TVector<float>_>::Clear(pTVar1->Ptr,(TVector<float> *)&local_70._s_0);
  local_58 = &local_res8;
  local_60 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshGenericWorldPositionNormalBaker::Bake'::__l2::<lambda_1>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
             ::Call;
  local_res8 = this;
  FMeshImageBakingCache::EvaluateSamples
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
                      *)&local_60,true);
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

