// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c8ab490

void __thiscall
`UE::Geometry::FMeshResampleImageBaker::Bake'::__l2::<lambda_2>::operator()
          (void *this,FVector2i *param_1,FCorrespondenceSample *param_2)

{
  uint uVar1;
  float *pfVar2;
  longlong lVar3;
  code *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  TVector4<float> *pTVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double local_38 [2];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  plVar8 = *(longlong **)this;
  uVar1 = param_2->DetailTriID;
  pfVar2 = (float *)*plVar8;
  fVar9 = *pfVar2;
  fVar10 = pfVar2[1];
  fVar11 = pfVar2[2];
  fVar12 = pfVar2[3];
  lVar3 = *(longlong *)plVar8[1];
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar1 >> 9) * 8)
                          + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (*(TDynamicMeshOverlay<float,2> **)(plVar8[2] + 0x40) != (TDynamicMeshOverlay<float,2> *)0x0))
  {
    UE::Geometry::TDynamicMeshOverlay<float,2>::GetTriBaryInterpolate<double>
              (*(TDynamicMeshOverlay<float,2> **)(plVar8[2] + 0x40),uVar1,
               (double *)&param_2->DetailBaryCoords,local_38);
    lVar3 = plVar8[2];
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x10));
    pcVar4 = *(code **)(lVar3 + 0x10);
    plVar8 = (longlong *)(lVar3 + 0x20);
    if (*(longlong **)(lVar3 + 0x38) != (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar3 + 0x38);
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    (*pcVar4)(&local_28,uVar6,local_38);
    fVar9 = local_28;
    fVar10 = fStack_24;
    fVar11 = fStack_20;
    fVar12 = fStack_1c;
  }
  piVar5 = *(int **)(*(longlong *)((longlong)this + 8) + 0x60);
  pTVar7 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                     ((TDenseGrid2<UE::Math::TVector4<float>_> *)(piVar5 + 2),
                      (longlong)(param_1->field0_0x0)._s_0.Y * (longlong)*piVar5 +
                      (longlong)(param_1->field0_0x0)._s_0.X);
  (pTVar7->field0_0x0)._s_0.X = fVar9;
  (pTVar7->field0_0x0)._s_0.Y = fVar10;
  (pTVar7->field0_0x0)._s_0.Z = fVar11;
  (pTVar7->field0_0x0)._s_0.W = fVar12;
  return;
}

// Bake @ 14c8c00a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Geometry::FMeshResampleImageBaker::Bake(FMeshResampleImageBaker *this)

{
  TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
  *pTVar1;
  FMeshImageBakingCache *this_00;
  FScriptContainerElement *pFVar2;
  FImageOccupancyMap *pFVar3;
  code *pcVar4;
  long64 lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar10;
  TVector4<float> *pTVar11;
  longlong lVar12;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar13;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar14;
  FDynamicMesh3 *local_res8;
  longlong local_98;
  undefined8 **local_90;
  FMeshResampleImageBaker *local_88;
  code *local_80;
  undefined8 ***local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  FDynamicMesh3 **local_50;
  FMeshResampleImageBaker *local_48;
  
  this_00 = *(FMeshImageBakingCache **)&this->field_0x8;
  if ((this_00 == (FMeshImageBakingCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BakeCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshResampleImageBaker.cpp"
                         ,10,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8 = this_00->DetailMesh;
  if ((this->DetailUVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0
      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DetailUVOverlay",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshResampleImageBaker.cpp"
                               ,0xd,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_58 = &local_68;
  local_50 = &local_res8;
  local_68 = ___xmm_3f800000000000000000000000000000;
  uStack_60 = _UNK_150689648;
  local_48 = this;
  pTVar10 = ::operator_new(0x30);
  pTVar14 = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  pTVar13 = pTVar14;
  if (pTVar10 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
    (pTVar10->Dimensions).Width = 0;
    (pTVar10->Dimensions).Height = 0;
    (pTVar10->Image).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar10->Image).Buffer.ArrayNum = 0;
    (pTVar10->Image).Buffer.ArrayMax = 0;
    (pTVar10->Image).DimensionX = 0;
    (pTVar10->Image).DimensionY = 0;
    pTVar13 = pTVar10;
  }
  pTVar1 = &this->ResultBuilder;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
                 *)&local_98) {
    if (pTVar13 == (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) goto LAB_14c8c01d0;
    pFVar2 = (pTVar13->Image).Buffer.AllocatorInstance.Data;
    pTVar10 = pTVar13;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  else {
    pTVar10 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar13;
    if (pTVar10 == (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) goto LAB_14c8c01d0;
    pFVar2 = (pTVar10->Image).Buffer.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  ::operator_delete(pTVar10,0x30);
LAB_14c8c01d0:
  TImageBuilder<UE::Math::TVector4<float>_>::SetDimensions(pTVar1->Ptr,this_00->Dimensions);
  TImageBuilder<UE::Math::TVector4<float>_>::Clear(pTVar1->Ptr,&this->DefaultColor);
  local_90 = &local_58;
  local_78 = &local_90;
  local_80 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshResampleImageBaker::Bake'::__l2::<lambda_2>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
             ::Call;
  local_88 = this;
  FMeshImageBakingCache::EvaluateSamples
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
                      *)&local_80,true);
  if (((this_00->bOccupancyValid == false) || (this_00->bSamplesValid == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCacheValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                         ,0x66,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this_00->OccupancyMap).Ptr;
  lVar12 = (pFVar3->GutterTexels).ArrayNum;
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
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar10 = pTVar1->Ptr;
      pFVar2 = (pFVar3->GutterTexels).AllocatorInstance.Data +
               (longlong)&(pTVar13->Dimensions).Width;
      lVar5 = *(long64 *)pFVar2;
      pTVar11 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                          (&pTVar10->Image,*(long64 *)(pFVar2 + 8));
      uVar6 = *(undefined8 *)&pTVar11->field0_0x0;
      uVar7 = *(undefined8 *)((longlong)&pTVar11->field0_0x0 + 8);
      pTVar11 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[](&pTVar10->Image,lVar5);
      pTVar14 = (TImageBuilder<UE::Math::TVector4<float>_> *)
                ((longlong)&(pTVar14->Dimensions).Width + 1);
      *(undefined8 *)&pTVar11->field0_0x0 = uVar6;
      *(undefined8 *)((longlong)&pTVar11->field0_0x0 + 8) = uVar7;
      lVar12 = (pFVar3->GutterTexels).ArrayNum;
      pTVar13 = (TImageBuilder<UE::Math::TVector4<float>_> *)&(pTVar13->Image).Buffer.ArrayNum;
    } while ((longlong)pTVar14 < lVar12);
  }
  return;
}

