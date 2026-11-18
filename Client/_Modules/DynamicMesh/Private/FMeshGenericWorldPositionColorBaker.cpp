// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c89e110

void __thiscall
`UE::Geometry::FMeshGenericWorldPositionColorBaker::Bake'::__l2::<lambda_1>::operator()
          (void *this,FVector2i *param_1,FCorrespondenceSample *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TVector4<float> *pTVar4;
  longlong *plVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_48 = (param_2->BaseNormal).field0_0x0._s_0.X;
  dStack_40 = (param_2->BaseNormal).field0_0x0._s_0.Y;
  lVar1 = *(longlong *)this;
  local_38 = (param_2->BaseNormal).field0_0x0._s_0.Z;
  local_28 = (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.X;
  dStack_20 = (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.Y;
  local_18 = (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.Z;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x20));
  pcVar2 = *(code **)(lVar1 + 0x20);
  plVar5 = (longlong *)(lVar1 + 0x30);
  if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x48);
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(&local_68,uVar3,&local_28,&local_48);
  local_58 = local_68;
  uStack_50 = uStack_60;
  pTVar4 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                     ((TDenseGrid2<UE::Math::TVector4<float>_> *)
                      (*(int **)(*(longlong *)this + 0x50) + 2),
                      (longlong)(param_1->field0_0x0)._s_0.Y *
                      (longlong)**(int **)(*(longlong *)this + 0x50) +
                      (longlong)(param_1->field0_0x0)._s_0.X);
  *(undefined8 *)&pTVar4->field0_0x0 = local_58;
  *(undefined8 *)((longlong)&pTVar4->field0_0x0 + 8) = uStack_50;
  return;
}

// Bake @ 14c8bd370

void __thiscall
UE::Geometry::FMeshGenericWorldPositionColorBaker::Bake(FMeshGenericWorldPositionColorBaker *this)

{
  TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
  *pTVar1;
  FMeshImageBakingCache *this_00;
  FScriptContainerElement *pFVar2;
  FImageOccupancyMap *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar7;
  TVector4<float> *pTVar8;
  longlong lVar9;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar10;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar11;
  FMeshGenericWorldPositionColorBaker *local_res8;
  longlong local_58;
  code *local_50;
  FMeshGenericWorldPositionColorBaker **local_48;
  long64 local_40;
  long64 lStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  this_00 = *(FMeshImageBakingCache **)&this->field_0x8;
  if ((this_00 == (FMeshImageBakingCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BakeCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshGenericWorldPositionBaker.cpp"
                         ,10,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar7 = ::operator_new(0x30);
  pTVar11 = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  pTVar10 = pTVar11;
  if (pTVar7 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
    (pTVar7->Dimensions).Width = 0;
    (pTVar7->Dimensions).Height = 0;
    (pTVar7->Image).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar7->Image).Buffer.ArrayNum = 0;
    (pTVar7->Image).Buffer.ArrayMax = 0;
    (pTVar7->Image).DimensionX = 0;
    (pTVar7->Image).DimensionY = 0;
    pTVar10 = pTVar7;
  }
  pTVar1 = &this->ResultBuilder;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
                 *)&local_58) {
    if (pTVar10 == (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) goto LAB_14c8bd438;
    pFVar2 = (pTVar10->Image).Buffer.AllocatorInstance.Data;
    pTVar7 = pTVar10;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  else {
    pTVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar10;
    if (pTVar7 == (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) goto LAB_14c8bd438;
    pFVar2 = (pTVar7->Image).Buffer.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  ::operator_delete(pTVar7,0x30);
LAB_14c8bd438:
  TImageBuilder<UE::Math::TVector4<float>_>::SetDimensions(pTVar1->Ptr,this_00->Dimensions);
  TImageBuilder<UE::Math::TVector4<float>_>::Clear(pTVar1->Ptr,&this->DefaultColor);
  local_48 = &local_res8;
  local_50 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshGenericWorldPositionColorBaker::Bake'::__l2::<lambda_1>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
             ::Call;
  local_res8 = this;
  FMeshImageBakingCache::EvaluateSamples
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
                      *)&local_50,true);
  if (((this_00->bOccupancyValid == false) || (this_00->bSamplesValid == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCacheValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                         ,0x66,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this_00->OccupancyMap).Ptr;
  lVar9 = (pFVar3->GutterTexels).ArrayNum;
  pTVar10 = pTVar11;
  if (0 < lVar9) {
    do {
      uVar6 = 0;
      if ((longlong)pTVar11 < lVar9) {
        uVar6 = (uint)((ulonglong)pTVar11 >> 0x3f) ^ 1;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar7 = pTVar1->Ptr;
      pFVar2 = (pFVar3->GutterTexels).AllocatorInstance.Data +
               (longlong)&(pTVar10->Dimensions).Width;
      local_40 = *(long64 *)pFVar2;
      lStack_38 = *(long64 *)(pFVar2 + 8);
      pTVar8 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[](&pTVar7->Image,lStack_38);
      local_30 = *(undefined8 *)&pTVar8->field0_0x0;
      uStack_28 = *(undefined8 *)((longlong)&pTVar8->field0_0x0 + 8);
      pTVar8 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[](&pTVar7->Image,local_40);
      pTVar11 = (TImageBuilder<UE::Math::TVector4<float>_> *)
                ((longlong)&(pTVar11->Dimensions).Width + 1);
      *(undefined8 *)&pTVar8->field0_0x0 = local_30;
      *(undefined8 *)((longlong)&pTVar8->field0_0x0 + 8) = uStack_28;
      lVar9 = (pFVar3->GutterTexels).ArrayNum;
      pTVar10 = (TImageBuilder<UE::Math::TVector4<float>_> *)&(pTVar10->Image).Buffer.ArrayNum;
    } while ((longlong)pTVar11 < lVar9);
  }
  return;
}

