// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// FAsyncGrassBuilder @ 145f40d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAsyncGrassBuilder * __thiscall
FAsyncGrassBuilder::FAsyncGrassBuilder
          (FAsyncGrassBuilder *this,ALandscapeProxy *param_1,ULandscapeComponent *param_2,
          ULandscapeGrassType *param_3,FGrassVariety *param_4,Type param_5,
          UGrassInstancedStaticMeshComponent *param_6,int param_7,int param_8,int param_9,
          uint param_10,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_11)

{
  int *piVar1;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  EGrassScaling EVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FLandscapeComponentGrassData *pFVar12;
  TBox<double> *pTVar13;
  FScriptContainerElement *pFVar14;
  FStaticMeshVertexDataInterface *pFVar15;
  code *pcVar16;
  UHierarchicalInstancedStaticMeshComponent *this_00;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  TMatrix<double> *pTVar21;
  TBoxSphereBounds<double,double> *pTVar22;
  FAsyncGrassBuilder *pFVar23;
  TMatrix<double> *pTVar24;
  TBox<double> *pTVar25;
  longlong *plVar26;
  longlong lVar27;
  TBox<double> *this_01;
  TBox<double> *pTVar28;
  float fVar29;
  undefined1 auStackY_458 [32];
  undefined1 local_408 [8];
  UHierarchicalInstancedStaticMeshComponent *local_400;
  ULandscapeComponent *local_3f8;
  TBoxSphereBounds<double,double> local_3f0;
  TBox<double> local_3b8;
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_400 = (UHierarchicalInstancedStaticMeshComponent *)param_6;
  local_3f8 = param_2;
  FGrassBuilderBase::FGrassBuilderBase
            ((FGrassBuilderBase *)this,param_1,param_2,param_4,param_5,param_7,param_8,param_9,
             param_3->bEnableDensityScaling);
  (this->GrassData).GrassData.Object = (param_2->GrassData).Object;
  pTVar11 = (param_2->GrassData).SharedReferenceCount.ReferenceController;
  (this->GrassData).GrassData.SharedReferenceCount.ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = (param_2->GrassData).Object;
  iVar19 = (pFVar12->HeightWeightData).ArrayNum;
  if (iVar19 == 0) {
    (this->GrassData).HeightData.DataPtr = (ushort *)0x0;
    (this->GrassData).HeightData.ArrayNum = 0;
  }
  else {
    if ((iVar19 < pFVar12->NumElements) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumElements <= HeightWeightData.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                            ,0x5b7,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      pFVar23 = (FAsyncGrassBuilder *)(*pcVar16)();
      return pFVar23;
    }
    iVar19 = pFVar12->NumElements;
    if (((pFVar12->HeightWeightData).ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar16 = (code *)swi(3);
      pFVar23 = (FAsyncGrassBuilder *)(*pcVar16)();
      return pFVar23;
    }
    (this->GrassData).HeightData.DataPtr =
         (ushort *)(pFVar12->HeightWeightData).AllocatorInstance.Data;
    (this->GrassData).HeightData.ArrayNum = iVar19;
    if ((iVar19 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      pFVar23 = (FAsyncGrassBuilder *)(*pcVar16)();
      return pFVar23;
    }
  }
  FLandscapeComponentGrassData::GetWeightData
            ((param_2->GrassData).Object,&(this->GrassData).WeightData,param_3);
  this_00 = local_400;
  (this->GrassData).Stride = param_2->ComponentSizeQuads + 1;
  this->Scaling = param_4->Scaling;
  this->ScaleX = param_4->ScaleX;
  this->ScaleY = param_4->ScaleY;
  this->ScaleZ = param_4->ScaleZ;
  this->AllowedDensityRange = param_4->AllowedDensityRange;
  this->bWeightAttenuatesMaxScale = param_4->bWeightAttenuatesMaxScale;
  this->MaxScaleWeightAttenuation = param_4->MaxScaleWeightAttenuation;
  bVar17 = param_4->RandomRotation;
  this->bRandomScale = false;
  this->bRandomRotation = bVar17;
  this->bAlignToSurface = param_4->AlignToSurface;
  this->bAlignToTriangleNormals = param_4->bAlignToTriangleNormals;
  this->PlacementJitter = param_4->PlacementJitter;
  uVar10 = *(uint *)&local_400->field_0x6e4;
  (this->RandomStream).InitialSeed = uVar10;
  (this->RandomStream).Seed = uVar10;
  pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale
                      ((TTransform<double> *)&local_400->field_0x1f0,&local_2f8);
  pTVar21 = UE::Math::TMatrix<double>::Inverse(pTVar21,&local_278);
  VectorMatrixMultiply(&this->XForm,(TMatrix<double> *)&this->field_0x40,pTVar21);
  pTVar22 = UStaticMesh::GetBounds((param_4->GrassMesh).field0_0x0.DebugPtr,&local_3f0);
  dVar3 = (pTVar22->Origin).field0_0x0._s_0.X;
  dVar4 = (pTVar22->BoxExtent).field0_0x0._s_0.X;
  dVar5 = (pTVar22->Origin).field0_0x0._s_0.Y;
  dVar6 = (pTVar22->BoxExtent).field0_0x0._s_0.Y;
  dVar7 = (pTVar22->BoxExtent).field0_0x0._s_0.Z;
  dVar8 = (pTVar22->Origin).field0_0x0._s_0.Z;
  (this->MeshBox).Min.field0_0x0._s_0.X = dVar3 - dVar4;
  (this->MeshBox).Min.field0_0x0._s_0.Y = dVar5 - dVar6;
  (this->MeshBox).Min.field0_0x0._s_0.Z = dVar8 - dVar7;
  (this->MeshBox).Max.field0_0x0._s_0.X = dVar4 + dVar3;
  (this->MeshBox).Max.field0_0x0._s_0.Y = dVar6 + dVar5;
  (this->MeshBox).Max.field0_0x0._s_0.Z = dVar7 + dVar8;
  (this->MeshBox).IsValid = '\x01';
  iVar19 = UHierarchicalInstancedStaticMeshComponent::DesiredInstancesPerLeaf(this_00);
  this->DesiredInstancesPerLeaf = iVar19;
  this->HaltonBaseIndex = param_10;
  this->BuildTime = 0.0;
  this->TotalInstances = 0;
  this->bUseLandscapeLightmap = param_4->bUseLandscapeLightmap;
  (this->LightmapBaseBias).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LightmapBaseScale).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  pTVar2 = &this->ExcludedBoxes;
  (this->ShadowmapBaseBias).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ShadowmapBaseScale).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  (this->LightMapComponentBias).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LightMapComponentScale).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  piVar1 = &(this->ExcludedBoxes).ArrayMax;
  this->bRequiresCPUAccess = param_4->bKeepInstanceBufferCPUCopy;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ExcludedBoxes).ArrayNum = 0;
  *piVar1 = 0;
  (this->InstanceBuffer).InstanceOriginData = (FStaticMeshVertexDataInterface *)0x0;
  (this->InstanceBuffer).InstanceOriginDataPtr = (uchar *)0x0;
  (this->InstanceBuffer).InstanceTransformData = (FStaticMeshVertexDataInterface *)0x0;
  (this->InstanceBuffer).InstanceTransformDataPtr = (uchar *)0x0;
  (this->InstanceBuffer).InstanceLightmapData = (FStaticMeshVertexDataInterface *)0x0;
  (this->InstanceBuffer).InstanceLightmapDataPtr = (uchar *)0x0;
  (this->InstanceBuffer).InstanceCustomData = (FStaticMeshVertexDataInterface *)0x0;
  (this->InstanceBuffer).InstanceCustomDataPtr = (uchar *)0x0;
  (this->InstanceBuffer).NumInstances = 0;
  (this->InstanceBuffer).NumCustomDataFloats = 0;
  (this->InstanceBuffer).bUseHalfFloat = true;
  FStaticMeshInstanceData::AllocateBuffers(&this->InstanceBuffer,0,None);
  EVar9 = this->Scaling;
  (this->ClusterTree).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusterTree).ArrayNum = 0;
  (this->ClusterTree).ArrayMax = 0;
  this->OutOcclusionLayerNum = 0;
  if (EVar9 == Uniform) {
    bVar17 = 0.0 < *(float *)&(this->ScaleX).field_0x4 - *(float *)&this->ScaleX;
  }
  else {
    if (EVar9 == Free) {
      if (*(float *)&(this->ScaleX).field_0x4 - *(float *)&this->ScaleX <= 0.0) {
        fVar29 = *(float *)&(this->ScaleY).field_0x4 - *(float *)&this->ScaleY;
        goto LAB_145f411a8;
      }
    }
    else {
      if (EVar9 != LockXY) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                            ,0x770,L"");
        if (bVar17) {
          pcVar16 = (code *)swi(3);
          pFVar23 = (FAsyncGrassBuilder *)(*pcVar16)();
          return pFVar23;
        }
        goto LAB_145f41213;
      }
      fVar29 = *(float *)&(this->ScaleX).field_0x4 - *(float *)&this->ScaleX;
LAB_145f411a8:
      if ((fVar29 <= 0.0) && (*(float *)&(this->ScaleZ).field_0x4 - *(float *)&this->ScaleZ <= 0.0))
      {
        bVar17 = false;
        goto LAB_145f4120d;
      }
    }
    bVar17 = true;
  }
LAB_145f4120d:
  this->bRandomScale = bVar17;
LAB_145f41213:
  uVar10 = param_11->ArrayNum;
  if (uVar10 != 0) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (*piVar1 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar10,&pTVar2->AllocatorInstance,(this->ExcludedBoxes).ArrayNum,piVar1);
    }
    pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale
                        ((TTransform<double> *)&this_00->field_0x1f0,&local_1f8);
    pTVar21 = UE::Math::TMatrix<double>::Inverse(pTVar21,&local_178);
    pTVar24 = UE::Math::TMatrix<double>::Inverse(&this->XForm,&local_f8);
    VectorMatrixMultiply(&local_378,pTVar21,pTVar24);
    iVar19 = param_11->ArrayNum;
    this_01 = (TBox<double> *)(param_11->AllocatorInstance).Data;
    pTVar28 = this_01 + iVar19;
    while( true ) {
      if (param_11->ArrayNum != iVar19) {
        local_408[0] = 0;
        `TCheckedPointerIterator<UE::Math::TBox<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_408);
      }
      param_2 = local_3f8;
      if (this_01 == pTVar28) break;
      pTVar25 = UE::Math::TBox<double>::TransformBy(this_01,&local_3b8,&local_378);
      pTVar13 = (TBox<double> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar13 <= pTVar25) && (pTVar25 < pTVar13 + *piVar1)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar16 = (code *)swi(3);
        pFVar23 = (FAsyncGrassBuilder *)(*pcVar16)();
        return pFVar23;
      }
      iVar20 = (this->ExcludedBoxes).ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ExcludedBoxes).ArrayNum = iVar20 + 1;
      dVar3 = (pTVar25->Min).field0_0x0._s_0.Y;
      lVar27 = (longlong)iVar20 * 0x38;
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      this_01 = this_01 + 1;
      *(double *)(pFVar14 + lVar27) = (pTVar25->Min).field0_0x0._s_0.X;
      *(double *)(pFVar14 + lVar27 + 8) = dVar3;
      dVar3 = (pTVar25->Max).field0_0x0._s_0.X;
      *(double *)(pFVar14 + lVar27 + 0x10) = (pTVar25->Min).field0_0x0._s_0.Z;
      *(double *)(pFVar14 + lVar27 + 0x10 + 8) = dVar3;
      dVar3 = (pTVar25->Max).field0_0x0._s_0.Z;
      *(double *)(pFVar14 + lVar27 + 0x20) = (pTVar25->Max).field0_0x0._s_0.Y;
      *(double *)(pFVar14 + lVar27 + 0x20 + 8) = dVar3;
      *(undefined8 *)(pFVar14 + lVar27 + 0x30) = *(undefined8 *)&pTVar25->IsValid;
    }
  }
  if (((*(char *)this == '\0') ||
      (iVar19 = (this->GrassData).Stride, iVar19 = iVar19 * iVar19,
      (this->GrassData).WeightData.ArrayNum != iVar19)) ||
     ((this->GrassData).HeightData.ArrayNum != iVar19)) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  bVar17 = this->bRequiresCPUAccess;
  *(undefined1 *)this = uVar18;
  pFVar15 = (this->InstanceBuffer).InstanceOriginData;
  if (pFVar15 != (FStaticMeshVertexDataInterface *)0x0) {
    plVar26 = (longlong *)(**(code **)((longlong)*pFVar15 + 0x38))();
    (**(code **)(*plVar26 + 0x38))(plVar26,bVar17);
  }
  pFVar15 = (this->InstanceBuffer).InstanceLightmapData;
  if (pFVar15 != (FStaticMeshVertexDataInterface *)0x0) {
    plVar26 = (longlong *)(**(code **)((longlong)*pFVar15 + 0x38))();
    (**(code **)(*plVar26 + 0x38))(plVar26,bVar17);
  }
  pFVar15 = (this->InstanceBuffer).InstanceTransformData;
  if (pFVar15 != (FStaticMeshVertexDataInterface *)0x0) {
    plVar26 = (longlong *)(**(code **)((longlong)*pFVar15 + 0x38))();
    (**(code **)(*plVar26 + 0x38))(plVar26,bVar17);
  }
  pFVar15 = (this->InstanceBuffer).InstanceCustomData;
  if (pFVar15 != (FStaticMeshVertexDataInterface *)0x0) {
    plVar26 = (longlong *)(**(code **)((longlong)*pFVar15 + 0x38))();
    (**(code **)(*plVar26 + 0x38))(plVar26,bVar17);
  }
  if ((this->DesiredInstancesPerLeaf < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("DesiredInstancesPerLeaf > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                          ,0x781,L""), bVar17)) {
    pcVar16 = (code *)swi(3);
    pFVar23 = (FAsyncGrassBuilder *)(*pcVar16)();
    return pFVar23;
  }
  if (this->bUseLandscapeLightmap != false) {
    InitLandscapeLightmap(this,param_2);
  }
  return this;
}

// operator() @ 145f44c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FAsyncGrassBuilder::Build'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TMatrix<double> *param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_1d8 [48];
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1a8.M[2][2] = (param_1->field0_0x0)._s_0.Z;
  uVar2 = SUB84(__real_3ff0000000000000,0);
  uVar3 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (local_1a8.M[2][2] <= 0.0) {
    if (0.0 <= local_1a8.M[2][2]) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar2 = (undefined4)__real_bff0000000000000;
      uVar3 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
  }
  local_1a8.M[2][0] = (double)CONCAT44(uVar3,uVar2) * (param_1->field0_0x0)._s_0.X;
  local_1a8.M[2][1] = (double)CONCAT44(uVar3,uVar2) * (param_1->field0_0x0)._s_0.Y;
  uVar6 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar7 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  local_1a8.M[2][2] = local_1a8.M[2][2] * (double)CONCAT44(uVar3,uVar2);
  uVar4 = SUB84(local_1a8.M[2][2],0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)local_1a8.M[2][2] >> 0x20) ^
          __xmm_80000000000000008000000000000000._4_4_;
  local_1a8.M[0][0] = (double)CONCAT44(uVar5,uVar4);
  dVar1 = local_1a8.M[0][0] * (double)CONCAT44(uVar5,uVar4) + local_1a8.M[2][0] * local_1a8.M[2][0];
  local_1a8.M[0][2] = local_1a8.M[2][0];
  if (dVar1 != __real_3ff0000000000000) {
    local_1a8.M[0][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1a8.M[0][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (dVar1 < __real_3e45798ee0000000) goto LAB_145f44d4f;
    local_1a8.M[0][0] = (double)CONCAT44(uVar5,uVar4) * (__real_3ff0000000000000 / SQRT(dVar1));
    local_1a8.M[0][2] = local_1a8.M[2][0] * (__real_3ff0000000000000 / SQRT(dVar1));
  }
  uVar6 = 0;
  uVar7 = 0;
LAB_145f44d4f:
  local_1a8.M[0][1] = (double)CONCAT44(uVar7,uVar6);
  local_1a8.M[1][0] =
       local_1a8.M[0][2] * local_1a8.M[2][1] - (double)CONCAT44(uVar7,uVar6) * local_1a8.M[2][2];
  local_1a8.M[1][1] = local_1a8.M[0][0] * local_1a8.M[2][2] - local_1a8.M[0][2] * local_1a8.M[2][0];
  local_1a8.M[0][3] = 0.0;
  local_1a8.M[1][3] = 0.0;
  local_1a8.M[1][2] =
       (double)CONCAT44(uVar7,uVar6) * local_1a8.M[2][0] - local_1a8.M[0][0] * local_1a8.M[2][1];
  local_1a8.M[2][3] = 0.0;
  local_1a8.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1a8.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1a8.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1a8.M[3][3] = __real_3ff0000000000000;
  VectorMatrixMultiply(&local_128,param_2,&local_1a8);
  param_2->M[0][0] = local_128.M[0][0];
  param_2->M[0][1] = local_128.M[0][1];
  param_2->M[0][2] = local_128.M[0][2];
  param_2->M[0][3] = local_128.M[0][3];
  param_2->M[1][0] = local_128.M[1][0];
  param_2->M[1][1] = local_128.M[1][1];
  param_2->M[1][2] = local_128.M[1][2];
  param_2->M[1][3] = local_128.M[1][3];
  param_2->M[2][0] = local_128.M[2][0];
  param_2->M[2][1] = local_128.M[2][1];
  param_2->M[2][2] = local_128.M[2][2];
  param_2->M[2][3] = local_128.M[2][3];
  param_2->M[3][0] = local_128.M[3][0];
  param_2->M[3][1] = local_128.M[3][1];
  param_2->M[3][2] = local_128.M[3][2];
  param_2->M[3][3] = local_128.M[3][3];
  return;
}

// Build @ 145f49f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncGrassBuilder::Build(FAsyncGrassBuilder *this)

{
  undefined1 *puVar1;
  EGrassScaling EVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  float fVar16;
  ForAnyElementType FVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  int iVar23;
  TStatId TVar24;
  byte *pbVar25;
  ushort *puVar26;
  TVector<double>_u_0 *pTVar27;
  TScaleRotationTranslationMatrix<double> *pTVar28;
  longlong lVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  TVector<double> *pTVar33;
  ulonglong uVar34;
  uint uVar35;
  TVector<double> *pTVar36;
  ulonglong uVar37;
  FScriptContainerElement *pFVar38;
  TMatrix<float> *pTVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  uint uVar43;
  ulonglong uVar44;
  int iVar45;
  TVector<double> *pTVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined8 uVar61;
  undefined1 auVar60 [16];
  float fVar62;
  double dVar63;
  float fVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  double dVar68;
  undefined1 auVar69 [16];
  undefined8 uVar71;
  undefined1 auVar70 [16];
  float fVar72;
  double dVar73;
  double dVar74;
  float fVar75;
  double dVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auStackY_a68 [32];
  TVector2<double> *pTVar81;
  TVector2<double> *pTVar82;
  uint local_a18;
  undefined1 local_a14;
  undefined1 local_a13 [3];
  float local_a10;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_a08;
  float local_9f8;
  double local_9f0;
  float local_9e8;
  float local_9e4;
  ulonglong local_9e0;
  double local_9d8;
  ForAnyElementType local_9d0;
  int local_9c8 [2];
  double local_9c0;
  uint local_9b8;
  ulonglong local_9b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_9a8;
  undefined8 local_998;
  FScriptContainerElement *local_988;
  TArray<int,TSizedDefaultAllocator<32>_> local_980;
  double local_970;
  double local_968;
  double local_960;
  double local_958;
  double local_950;
  double dStack_948;
  double local_940;
  double local_938;
  double dStack_930;
  double local_928;
  FName local_920;
  byte local_918;
  TArray<float,TSizedDefaultAllocator<32>_> local_910;
  LARGE_INTEGER local_900;
  LARGE_INTEGER local_8f8 [2];
  FSourceLocation local_8e8;
  TVector<double>_u_0 local_8c8;
  TVector<double> local_8b0;
  TVector2<double>_u_0 local_898;
  TVector2<double>_u_0 local_888;
  TVector2<double>_u_0 local_878;
  TVector2<double>_u_0 local_868;
  TVector<double>_u_0 local_858;
  TVector<double>_u_0 local_840;
  TVector<double>_u_0 local_828;
  TVector<double>_u_0 local_810;
  TRotator<double> local_7f8;
  TVector<double>_u_0 local_7e0;
  double local_7c0;
  TVector<double>_u_0 local_7b8;
  TVector<double>_u_0 local_7a0;
  TVector<double>_u_0 local_788;
  TVector<double>_u_0 local_770;
  TVector<double>_u_0 local_758;
  TVector<double>_u_0 local_740;
  double local_718;
  double local_700;
  TVector<double> local_6f8;
  TMatrix<float> local_6d8;
  TMatrix<float> local_698;
  TMatrix<float> local_658;
  TMatrix<float> local_618;
  TVector<double> local_5d8;
  TVector<double> local_5c0;
  TVector<double> local_5a8;
  TVector<double> local_590;
  TVector<double> local_578;
  TScaleRotationTranslationMatrix<double> local_558;
  undefined1 local_4d8 [120];
  double dStack_460;
  TMatrix<double> local_458;
  TMatrix<double> local_3d8;
  TMatrix<double> local_358;
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  undefined1 local_1d8 [48];
  double local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_a68;
  TVar24 = FThreadSafeStaticStatInner<FStat_STAT_FoliageGrassAsyncBuildTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_FoliageGrassAsyncBuildTime,1> *)
                      &StatPtr_STAT_FoliageGrassAsyncBuildTime);
  local_8e8.Impl._Line = 0x812;
  local_8e8.Impl._Function = "void __cdecl FAsyncGrassBuilder::Build(void)";
  local_8e8.Impl._Column = 3;
  local_8e8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_920,*(TStatIdData **)&(TVar24.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_8e8);
  if ((*(char *)this == '\0') &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("bHaveValidData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                          ,0x813,L""), bVar22)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  QueryPerformanceCounter(&local_900);
  fVar16 = __real_3f800000;
  fVar56 = *(float *)&this->ScaleZ;
  dVar76 = (double)local_900.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if ((fVar56 <= 0.0) ||
     (__real_322bcc77 <
      (float)((uint)(*(float *)&(this->ScaleZ).field_0x4 - fVar56) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar56 = __real_3f800000;
  }
  fVar72 = *(float *)&this->ScaleY;
  if ((fVar72 <= 0.0) ||
     (__real_322bcc77 <
      (float)((uint)(*(float *)&(this->ScaleY).field_0x4 - fVar72) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar72 = __real_3f800000;
  }
  fVar49 = *(float *)&this->ScaleX;
  if ((fVar49 <= 0.0) ||
     (__real_322bcc77 <
      (float)((uint)(*(float *)&(this->ScaleX).field_0x4 - fVar49) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar49 = __real_3f800000;
  }
  EVar2 = this->Scaling;
  local_9c0 = (double)fVar72;
  local_958 = (double)fVar49;
  local_960 = (double)fVar56;
  dVar73 = local_958;
  local_968 = dVar76;
  dVar66 = local_958;
  local_950 = local_958;
  dStack_948 = local_958;
  local_940 = local_958;
  if ((((EVar2 != Uniform) &&
       (dVar73 = local_9c0, dVar66 = local_960, dStack_948 = local_9c0, local_940 = local_960,
       EVar2 != Free)) && (dVar73 = local_958, dStack_948 = local_958, EVar2 != LockXY)) &&
     (dStack_948 = local_9c0,
     bVar22 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                         ,0x7dd,L""), dVar73 = local_9c0, dVar66 = local_960, bVar22)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_960 = dVar66;
  local_9c0 = dVar73;
  uVar30 = __xmm_80000000000000008000000000000000._4_4_;
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  iVar23 = *(int *)&this->field_0x120;
  uVar37 = 0;
  local_a08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a08.ArrayNum = 0;
  local_a08.ArrayMax = 0;
  fVar56 = fVar16 / (float)iVar23;
  local_9e0 = CONCAT44(local_9e0._4_4_,fVar56);
  if (this->HaltonBaseIndex == 0) {
    fVar72 = this->PlacementJitter;
    if (__real_3f7d70a4 <= this->PlacementJitter) {
      fVar72 = __real_3f7d70a4;
    }
    local_9d0.Data = (FScriptContainerElement *)0x0;
    if (fVar72 <= 0.0) {
      fVar72 = 0.0;
    }
    local_9c8[0] = 0;
    local_9c8[1] = 0;
    local_9f8 = 0.0;
    dVar51 = (double)(fVar72 * fVar56 * __real_3f000000);
    dVar66 = *(double *)&this->field_0xf0 * dVar51;
    dVar51 = *(double *)&this->field_0xf8 * dVar51;
    dVar73 = (double)(fVar56 * __real_3f000000);
    auVar69._0_8_ = *(double *)&this->field_0xf8 * dVar73 + *(double *)&this->field_0xe0;
    auVar69._8_8_ = 0;
    *(double *)&this->field_0xd8 =
         *(double *)&this->field_0xf0 * dVar73 + *(double *)&this->field_0xd8;
    *(double *)&this->field_0xe8 =
         dVar73 * *(double *)&this->field_0x100 + *(double *)&this->field_0xe8;
    *(double *)&this->field_0xe0 = auVar69._0_8_;
    local_9d8 = dVar66;
    local_970 = dVar51;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,*(int *)&this->field_0x120 * *(int *)&this->field_0x120,&local_9d0,local_9c8,
               local_9c8 + 1);
    dVar73 = __real_3ff0000000000000;
    iVar23 = *(int *)&this->field_0x120;
    local_9e4 = 0.0;
    local_a10 = 0.0;
    if (0 < iVar23) {
      fVar49 = (float)local_9e0;
      local_998 = 0;
      uVar40 = uVar37;
      uVar42 = uVar37;
      uVar44 = uVar37;
      fVar56 = __real_bf000000;
      fVar72 = __real_3b808081;
      do {
        local_9e8 = 0.0;
        fVar48 = (float)uVar44;
        if (0 < iVar23) {
          lVar29 = uVar42 * 0x38;
          local_938 = (double)((float)(int)(float)uVar44 * fVar49);
          do {
            uVar35 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
            uVar30 = uVar35 * 0xbb38435 + 0x3619636b;
            fVar48 = (float)(uVar35 >> 9 | 0x3f800000) - fVar16;
            (this->RandomStream).Seed = uVar30;
            fVar75 = (float)(uVar30 >> 9 | 0x3f800000) - fVar16;
            dVar76 = (double)((fVar48 + fVar48) - fVar16) * dVar66 +
                     local_938 * *(double *)&this->field_0xf0 + *(double *)&this->field_0xd8;
            uVar35 = 0;
            if ((int)(uint)uVar40 < local_9c8[0]) {
              uVar35 = ~(uint)uVar40 >> 0x1f;
            }
            dVar66 = (double)((float)(int)local_9e8 * fVar49) * *(double *)&this->field_0xf8 +
                     *(double *)&this->field_0xe0 + (double)((fVar75 + fVar75) - fVar16) * dVar51;
            if ((uVar35 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               fVar56 = __real_bf000000, bVar22)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar17.Data = local_9d0.Data;
            if ((this->bAlignToSurface == false) || (this->bAlignToTriangleNormals == false)) {
              local_988 = (FScriptContainerElement *)0x0;
            }
            else {
              local_988 = local_9d0.Data + lVar29 + 0x18;
            }
            uVar35 = (this->GrassData).Stride - 1;
            fVar48 = (float)(dVar76 / *(double *)&this->field_0x8 -
                            (double)*(int *)&this->field_0xc0);
            fVar75 = (float)(dVar66 / *(double *)&this->field_0x10 -
                            (double)*(int *)&this->field_0xc4);
            uVar41 = (int)ROUND((fVar48 + fVar48) - __real_3f000000) >> 1;
            local_9e0 = CONCAT44(local_9e0._4_4_,uVar41);
            uVar43 = (int)ROUND((fVar75 + fVar75) - __real_3f000000) >> 1;
            local_9f0 = (double)CONCAT44(local_9f0._4_4_,uVar43);
            uVar32 = -((int)ROUND(fVar56 - (fVar48 + fVar48)) >> 1);
            local_9b0 = CONCAT44(local_9b0._4_4_,uVar32);
            local_9b8 = -((int)ROUND(fVar56 - (fVar75 + fVar75)) >> 1);
            uVar30 = uVar35;
            if ((int)uVar41 < (int)uVar35) {
              uVar30 = uVar41;
            }
            uVar41 = 0;
            if (0 < (int)uVar30) {
              uVar41 = uVar30;
            }
            uVar30 = uVar35;
            if ((int)uVar43 < (int)uVar35) {
              uVar30 = uVar43;
            }
            uVar43 = 0;
            if (0 < (int)uVar30) {
              uVar43 = uVar30;
            }
            uVar30 = uVar35;
            if ((int)uVar32 < (int)uVar35) {
              uVar30 = uVar32;
            }
            uVar32 = 0;
            if (0 < (int)uVar30) {
              uVar32 = uVar30;
            }
            if ((int)local_9b8 < (int)uVar35) {
              uVar35 = local_9b8;
            }
            uVar30 = 0;
            if (0 < (int)uVar35) {
              uVar30 = uVar35;
            }
            fVar56 = (float)truncf();
            fVar48 = fVar48 - fVar56;
            fVar56 = (float)truncf();
            fVar75 = fVar75 - fVar56;
            pbVar25 = TArrayView<unsigned_char,int>::operator[]
                                (&(this->GrassData).WeightData,
                                 uVar43 * (this->GrassData).Stride + uVar41);
            bVar3 = *pbVar25;
            pbVar25 = TArrayView<unsigned_char,int>::operator[]
                                (&(this->GrassData).WeightData,
                                 uVar43 * (this->GrassData).Stride + uVar32);
            fVar56 = (float)*pbVar25 * __real_3b808081;
            pbVar25 = TArrayView<unsigned_char,int>::operator[]
                                (&(this->GrassData).WeightData,
                                 uVar30 * (this->GrassData).Stride + uVar41);
            fVar62 = (fVar56 - (float)bVar3 * fVar72) * fVar48 + (float)bVar3 * fVar72;
            fVar56 = (float)*pbVar25 * __real_3b808081;
            pbVar25 = TArrayView<unsigned_char,int>::operator[]
                                (&(this->GrassData).WeightData,
                                 uVar30 * (this->GrassData).Stride + uVar32);
            fVar62 = ((((float)*pbVar25 * __real_3b808081 - fVar56) * fVar48 + fVar56) - fVar62) *
                     fVar75 + fVar62;
            puVar26 = TArrayView<unsigned_short,int>::operator[]
                                (&(this->GrassData).HeightData,
                                 uVar43 * (this->GrassData).Stride + uVar41);
            fVar57 = ((float)*puVar26 - __real_47000000) * __real_3c000000;
            puVar26 = TArrayView<unsigned_short,int>::operator[]
                                (&(this->GrassData).HeightData,
                                 uVar32 + uVar43 * (this->GrassData).Stride);
            fVar64 = ((float)*puVar26 - __real_47000000) * __real_3c000000;
            puVar26 = TArrayView<unsigned_short,int>::operator[]
                                (&(this->GrassData).HeightData,
                                 uVar30 * (this->GrassData).Stride + uVar41);
            fVar72 = ((float)*puVar26 - __real_47000000) * __real_3c000000;
            puVar26 = TArrayView<unsigned_short,int>::operator[]
                                (&(this->GrassData).HeightData,
                                 uVar32 + uVar30 * (this->GrassData).Stride);
            pFVar38 = local_988;
            fVar56 = (float)*puVar26 - __real_47000000;
            *(double *)(FVar17.Data + lVar29) =
                 dVar76 - (double)*(int *)&this->field_0xc8 * *(double *)&this->field_0x8;
            fVar56 = fVar56 * __real_3c000000;
            *(double *)(FVar17.Data + lVar29 + 8) =
                 dVar66 - (double)*(int *)&this->field_0xcc * *(double *)&this->field_0x10;
            dVar76 = (double)fVar64;
            dVar66 = (double)fVar56;
            dVar65 = (double)fVar72;
            dVar51 = (double)fVar48;
            auVar69._0_8_ = (double)fVar57;
            auVar69._8_8_ = 0;
            if (fVar75 <= fVar48) {
              dVar51 = (dVar73 - dVar51) * auVar69._0_8_ + (double)(fVar48 - fVar75) * dVar76 +
                       (dVar51 - (double)(fVar48 - fVar75)) * dVar66;
            }
            else {
              dVar51 = (dVar73 - (double)fVar75) * auVar69._0_8_ + dVar66 * dVar51 +
                       ((double)fVar75 - dVar51) * dVar65;
            }
            *(double *)(FVar17.Data + lVar29 + 0x10) = dVar51 * *(double *)&this->field_0x18;
            if (local_988 != (FScriptContainerElement *)0x0) {
              dVar51 = *(double *)&this->field_0x18;
              dVar50 = dVar51 * auVar69._0_8_;
              dVar68 = (double)(int)(float)local_9e0 * *(double *)&this->field_0x8;
              dVar58 = (double)local_9f0._0_4_ * *(double *)&this->field_0x10;
              auVar69._0_8_ = (double)(int)(float)local_9b0 * *(double *)&this->field_0x8;
              auVar69._8_8_ = 0;
              dVar63 = (double)(int)local_9b8 * *(double *)&this->field_0x10;
              dVar66 = dVar51 * dVar66;
              if (fVar48 <= fVar75) {
                dVar65 = dVar65 * dVar51;
                if (((dVar58 != dVar63) || (dVar50 != dVar65)) &&
                   ((auVar69._0_8_ != dVar68 || (dVar66 != dVar65)))) {
                  pTVar33 = &local_578;
                  pTVar27 = &local_858;
                  local_858._s_0.Y = (dVar50 - dVar65) * (auVar69._0_8_ - dVar68);
                  dVar76 = (auVar69._0_8_ - dVar68) * (dVar58 - dVar63);
                  local_858._s_0.X = (dVar66 - dVar65) * (dVar58 - dVar63);
                  auVar69._0_8_ =
                       (double)CONCAT44((uint)((ulonglong)dVar76 >> 0x20) ^
                                        __xmm_80000000000000008000000000000000._4_4_,
                                        SUB84(dVar76,0) ^
                                        (uint)__xmm_80000000000000008000000000000000);
                  auVar69._8_4_ = _UNK_15066df78;
                  auVar69._12_4_ = _UNK_15066df7c;
                  local_858._s_0.Z = auVar69._0_8_;
                  goto LAB_145f4b7b3;
                }
                pTVar27 = &local_740;
                local_740._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
                local_740._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
                local_740._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
              }
              else {
                dVar76 = dVar76 * dVar51;
                if (((dVar68 == auVar69._0_8_) && (dVar50 == dVar76)) ||
                   ((dVar63 == dVar58 && (dVar66 == dVar76)))) {
                  pTVar27 = &local_758;
                  local_758._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
                  local_758._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
                  local_758._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
                }
                else {
                  pTVar33 = &local_590;
                  pTVar27 = &local_7e0;
                  local_7e0._s_0.Y = (dVar66 - dVar76) * (dVar68 - auVar69._0_8_);
                  dVar66 = (dVar68 - auVar69._0_8_) * (dVar63 - dVar58);
                  local_7e0._s_0.X = (dVar50 - dVar76) * (dVar63 - dVar58);
                  local_7e0._s_0.Z =
                       (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) ^
                                        __xmm_80000000000000008000000000000000._4_4_,
                                        SUB84(dVar66,0) ^
                                        (uint)__xmm_80000000000000008000000000000000);
LAB_145f4b7b3:
                  pTVar27 = &UE::Math::TVector<double>::GetSafeNormal
                                       ((TVector<double> *)&pTVar27->_s_0,pTVar33,
                                        (double)__real_3e45798ee0000000,
                                        &UE::Math::TVector<double>::ZeroVector)->field0_0x0;
                }
              }
              dVar76 = (pTVar27->_s_0).Y;
              *(double *)pFVar38 = (((TVector<double>_u_0 *)&(pTVar27->_s_0).X)->_s_0).X;
              *(double *)(pFVar38 + 8) = dVar76;
              *(double *)(pFVar38 + 0x10) = (pTVar27->_s_0).Z;
            }
            if (((*(float *)&this->AllowedDensityRange <= fVar62 &&
                  fVar62 != *(float *)&this->AllowedDensityRange) &&
                (puVar1 = &(this->AllowedDensityRange).field_0x4,
                fVar62 < *(float *)puVar1 || fVar62 == *(float *)puVar1)) &&
               (uVar35 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b,
               (this->RandomStream).Seed = uVar35,
               (float)(uVar35 >> 9 | 0x3f800000) - fVar16 <= fVar62)) {
              iVar23 = (this->ExcludedBoxes).ArrayNum;
              pFVar38 = (this->ExcludedBoxes).AllocatorInstance.Data;
              pFVar31 = pFVar38 + (longlong)iVar23 * 0x38;
              while( true ) {
                if ((this->ExcludedBoxes).ArrayNum != iVar23) {
                  local_a14 = 0;
                  `TCheckedPointerIterator<UE::Math::TBox<double>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_a14);
                }
                if (pFVar38 == pFVar31) {
                  local_9f8 = (float)((int)local_9f8 + 1);
                  FVar17.Data[lVar29 + 0x30] = (FScriptContainerElement)0x1;
                  goto LAB_145f4b8bc;
                }
                dVar76 = *(double *)(FVar17.Data + lVar29);
                if ((((*(double *)pFVar38 <= dVar76 && dVar76 != *(double *)pFVar38) &&
                     (dVar76 < *(double *)(pFVar38 + 0x18))) &&
                    ((dVar76 = *(double *)(FVar17.Data + lVar29 + 8),
                     *(double *)(pFVar38 + 8) <= dVar76 && dVar76 != *(double *)(pFVar38 + 8) &&
                     ((dVar76 < *(double *)(pFVar38 + 0x20) &&
                      (dVar76 = *(double *)(FVar17.Data + lVar29 + 0x10),
                      *(double *)(pFVar38 + 0x10) <= dVar76 && dVar76 != *(double *)(pFVar38 + 0x10)
                      )))))) && (dVar76 < *(double *)(pFVar38 + 0x28))) break;
                pFVar38 = pFVar38 + 0x38;
              }
            }
            FVar17.Data[lVar29 + 0x30] = (FScriptContainerElement)0x0;
LAB_145f4b8bc:
            fVar72 = __real_3b808081;
            fVar56 = __real_bf000000;
            uVar37 = (ulonglong)(uint)local_9f8;
            local_9e4 = (float)((int)local_9e4 + 1);
            uVar40 = (ulonglong)(uint)local_9e4;
            uVar42 = local_998 + 1;
            local_9e8 = (float)((int)local_9e8 + 1);
            *(float *)(FVar17.Data + lVar29 + 0x34) = fVar62;
            lVar29 = lVar29 + 0x38;
            iVar23 = *(int *)&this->field_0x120;
            fVar48 = local_a10;
            dVar66 = local_9d8;
            dVar51 = local_970;
            local_998 = uVar42;
          } while ((int)local_9e8 < iVar23);
        }
        uVar34 = 0;
        local_a10 = (float)((int)fVar48 + 1);
        uVar44 = (ulonglong)(uint)local_a10;
      } while ((int)local_a10 < iVar23);
      iVar23 = (int)uVar37;
      dVar76 = local_968;
      if (iVar23 != 0) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,iVar23,&local_a08.AllocatorInstance,&local_a08.ArrayNum,
                   &local_a08.ArrayMax);
        this->TotalInstances = this->TotalInstances + iVar23;
        FStaticMeshInstanceData::AllocateInstances
                  (&this->InstanceBuffer,iVar23,0,AllowSlackOnReduce|AllowSlackOnGrow,true);
        iVar23 = *(int *)&this->field_0x120;
        local_a18 = 0;
        local_a10 = 0.0;
        dVar76 = local_968;
        if (0 < iVar23) {
          uVar77 = (undefined4)__real_4056800000000000;
          uVar78 = (undefined4)((ulonglong)__real_4056800000000000 >> 0x20);
          uVar79 = (undefined4)__real_bff0000000000000;
          uVar80 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
          local_9b0 = 0;
          local_9e0 = 0;
          uVar37 = uVar34;
          uVar40 = uVar34;
          uVar42 = uVar34;
          dVar66 = __real_4066800000000000;
          do {
            iVar45 = 0;
            uVar35 = (uint)uVar34;
            if (0 < iVar23) {
              lVar29 = uVar37 << 7;
              dVar76 = (double)(uVar40 * 0x38);
              uVar30 = (uint)uVar42;
              do {
                uVar32 = uVar30 + 1;
                uVar41 = (uint)uVar42;
                uVar35 = 0;
                if ((int)uVar41 < local_9c8[0]) {
                  uVar35 = ~uVar41 >> 0x1f;
                }
                local_9f0 = dVar76;
                if ((uVar35 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar40 = local_9e0, bVar22)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar38 = local_9d0.Data + (longlong)dVar76;
                if (pFVar38[0x30] != (FScriptContainerElement)0x0) {
                  dVar51 = local_960;
                  dVar65 = local_958;
                  dVar68 = local_9c0;
                  if (this->bRandomScale != false) {
                    fVar56 = fVar16;
                    if (this->bWeightAttenuatesMaxScale != false) {
                      fVar56 = this->MaxScaleWeightAttenuation;
                      if (fVar16 <= fVar56) {
                        fVar56 = 0.0;
                      }
                      else {
                        fVar56 = (*(float *)(pFVar38 + 0x34) - fVar56) / (fVar16 - fVar56);
                        if (fVar16 <= fVar56) {
                          fVar56 = fVar16;
                        }
                        if (fVar56 <= 0.0) {
                          fVar56 = 0.0;
                        }
                      }
                    }
                    EVar2 = this->Scaling;
                    if (EVar2 == Uniform) {
                      uVar35 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
                      (this->RandomStream).Seed = uVar35;
                      fVar72 = *(float *)&(this->ScaleX).field_0x4;
                      fVar49 = *(float *)&this->ScaleX;
                      if (fVar72 < fVar49) {
                        dVar51 = 0.0;
                        dVar65 = 0.0;
                        dVar68 = 0.0;
                      }
                      else {
                        dVar51 = (double)(((float)(uVar35 >> 9 | 0x3f800000) - fVar16) * fVar56 *
                                          (fVar72 - fVar49) + fVar49);
                        dVar65 = dVar51;
                        dVar68 = dVar51;
                      }
                    }
                    else {
                      if (EVar2 == Free) {
                        fVar72 = *(float *)&(this->ScaleX).field_0x4;
                        fVar49 = *(float *)&this->ScaleX;
                        uVar35 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
                        if (fVar72 < fVar49) {
                          fVar49 = 0.0;
                        }
                        else {
                          fVar49 = ((float)(uVar35 >> 9 | 0x3f800000) - fVar16) * fVar56 *
                                   (fVar72 - fVar49) + fVar49;
                        }
                        fVar72 = *(float *)&(this->ScaleY).field_0x4;
                        fVar48 = *(float *)&this->ScaleY;
                        dVar65 = (double)fVar49;
                        uVar35 = uVar35 * 0xbb38435 + 0x3619636b;
                        if (fVar72 < fVar48) {
                          fVar48 = 0.0;
                        }
                        else {
                          fVar48 = ((float)(uVar35 >> 9 | 0x3f800000) - fVar16) * fVar56 *
                                   (fVar72 - fVar48) + fVar48;
                        }
                        dVar68 = (double)fVar48;
                      }
                      else {
                        if (EVar2 != LockXY) {
                          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                              ,0x7fe,L"");
                          dVar51 = dVar73;
                          dVar65 = dVar73;
                          dVar68 = dVar73;
                          if (bVar22) {
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          goto LAB_145f4bd15;
                        }
                        fVar72 = *(float *)&(this->ScaleX).field_0x4;
                        fVar49 = *(float *)&this->ScaleX;
                        uVar35 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
                        if (fVar72 < fVar49) {
                          dVar65 = 0.0;
                          dVar68 = 0.0;
                        }
                        else {
                          dVar65 = (double)(((float)(uVar35 >> 9 | 0x3f800000) - fVar16) * fVar56 *
                                            (fVar72 - fVar49) + fVar49);
                          dVar68 = dVar65;
                        }
                      }
                      uVar35 = uVar35 * 0xbb38435 + 0x3619636b;
                      (this->RandomStream).Seed = uVar35;
                      fVar72 = *(float *)&(this->ScaleZ).field_0x4;
                      fVar49 = *(float *)&this->ScaleZ;
                      if (fVar72 < fVar49) {
                        dVar51 = 0.0;
                      }
                      else {
                        dVar51 = (double)(((float)(uVar35 >> 9 | 0x3f800000) - fVar16) * fVar56 *
                                          (fVar72 - fVar49) + fVar49);
                      }
                    }
                  }
LAB_145f4bd15:
                  if (this->bRandomRotation == false) {
                    fVar56 = 0.0;
                  }
                  else {
                    uVar35 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
                    (this->RandomStream).Seed = uVar35;
                    fVar56 = ((float)(uVar35 >> 9 | 0x3f800000) - fVar16) * __real_43b40000;
                  }
                  dVar63 = (double)fVar56;
                  if (dVar63 == 0.0) {
                    dVar66 = 0.0;
                    local_4d8._40_8_ = dVar73;
                    dVar63 = 0.0;
                  }
                  else if (dVar63 == (double)CONCAT44(uVar78,uVar77)) {
                    local_4d8._40_8_ = 0.0;
                    dVar66 = 0.0;
                    dVar63 = dVar73;
                  }
                  else if (dVar63 == dVar66) {
                    dVar63 = 0.0;
                    local_4d8._40_8_ = CONCAT44(uVar80,uVar79);
                    dVar66 = 0.0;
                  }
                  else if (dVar63 == ___real_4070e00000000000) {
                    dVar63 = (double)CONCAT44(uVar80,uVar79);
                    local_4d8._40_8_ = 0.0;
                    dVar66 = 0.0;
                  }
                  else {
                    __libm_sse2_sincos_();
                    local_4d8._40_8_ = extraout_XMM0_Qb;
                    dVar66 = extraout_XMM0_Qa;
                    dVar63 = extraout_XMM0_Qa;
                  }
                  local_4d8._0_8_ = (double)local_4d8._40_8_ * dVar65;
                  local_4d8._8_8_ = dVar63 * dVar65;
                  local_4d8._40_8_ = (double)local_4d8._40_8_ * dVar68;
                  auVar59._4_4_ = __xmm_80000000000000008000000000000000._4_4_;
                  auVar59._0_4_ = (uint)__xmm_80000000000000008000000000000000;
                  auVar59._8_8_ = 0;
                  local_4d8._16_8_ = 0.0;
                  local_4d8._24_8_ = 0.0;
                  local_4d8._32_8_ =
                       CONCAT44((uint)((ulonglong)(dVar63 * dVar68) >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar63 * dVar68,0) ^
                                (uint)__xmm_80000000000000008000000000000000);
                  local_4d8._48_8_ = ___xmm_00000000000000008000000000000000;
                  local_4d8._56_8_ = _UNK_150689528;
                  local_4d8._64_8_ = ___xmm_00000000000000008000000000000000;
                  local_4d8._72_8_ = _UNK_150689528;
                  local_4d8._88_8_ = 0.0;
                  local_4d8._96_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  local_4d8._104_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  dStack_460 = dVar73;
                  local_4d8._112_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  local_4d8._80_8_ = dVar51;
                  if (this->bAlignToSurface != false) {
                    if (this->bAlignToTriangleNormals == false) {
                      pFVar31 = pFVar38;
                      if (local_a18 != 0) {
                        uVar43 = uVar41 - *(int *)&this->field_0x120;
                        uVar35 = 0;
                        if ((int)uVar43 < local_9c8[0]) {
                          uVar35 = ~uVar43 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar31 = local_9d0.Data + (longlong)(int)uVar43 * 0x38;
                      }
                      local_940 = *(double *)(pFVar31 + 0x10);
                      auVar52 = *(undefined1 (*) [16])pFVar31;
                      pFVar31 = pFVar38;
                      if ((int)(local_a18 + 1) < *(int *)&this->field_0x120) {
                        uVar43 = *(int *)&this->field_0x120 + uVar41;
                        uVar35 = 0;
                        if ((int)uVar43 < local_9c8[0]) {
                          uVar35 = ~uVar43 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar31 = local_9d0.Data + (longlong)(int)uVar43 * 0x38;
                      }
                      local_928 = *(double *)(pFVar31 + 0x10);
                      auVar53 = *(undefined1 (*) [16])pFVar31;
                      pFVar31 = pFVar38;
                      if (iVar45 != 0) {
                        uVar35 = 0;
                        if ((int)(uVar30 - 1) < local_9c8[0]) {
                          uVar35 = -uVar41 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar31 = local_9d0.Data + (longlong)(int)(uVar30 - 1) * 0x38;
                      }
                      uVar61 = auVar59._8_8_;
                      uVar71 = auVar69._8_8_;
                      local_700 = *(double *)(pFVar31 + 0x10);
                      auVar54 = *(undefined1 (*) [16])pFVar31;
                      pFVar31 = pFVar38;
                      if (iVar45 + 1 < *(int *)&this->field_0x120) {
                        uVar35 = 0;
                        if ((int)uVar32 < local_9c8[0]) {
                          uVar35 = ~uVar32 >> 0x1f;
                        }
                        if (uVar35 == 0) {
                          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          uVar61 = auVar59._8_8_;
                          uVar71 = auVar69._8_8_;
                          if (bVar22) {
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                        }
                        pFVar31 = local_9d0.Data + (longlong)(int)uVar32 * 0x38;
                      }
                      local_718 = *(double *)(pFVar31 + 0x10);
                      auVar13._4_8_ = uVar71;
                      auVar13._0_4_ = auVar52._4_4_;
                      auVar70._0_8_ = auVar13._0_8_ << 0x20;
                      auVar70._8_4_ = auVar52._8_4_;
                      auVar70._12_4_ = auVar52._12_4_;
                      auVar14._4_8_ = uVar61;
                      auVar14._0_4_ = auVar53._4_4_;
                      auVar60._0_8_ = auVar14._0_8_ << 0x20;
                      auVar60._8_4_ = auVar53._8_4_;
                      auVar60._12_4_ = auVar53._12_4_;
                      dVar51 = auVar70._8_8_;
                      auVar69._8_8_ = auVar52._8_8_;
                      auVar69._0_8_ = dVar51;
                      dVar76 = local_9f0;
                      if ((((auVar52._0_8_ != auVar53._0_8_) || (dVar51 != auVar60._8_8_)) ||
                          (local_940 != local_928)) &&
                         (((auVar15._4_8_ = dVar66, auVar15._0_4_ = auVar54._4_4_,
                           auVar67._0_8_ = auVar15._0_8_ << 0x20, auVar67._8_4_ = auVar54._8_4_,
                           auVar67._12_4_ = auVar54._12_4_, auVar54._0_8_ != *(double *)pFVar31 ||
                           (auVar67._8_8_ != *(double *)(pFVar31 + 8))) || (local_700 != local_718))
                         )) {
                        dVar66 = auVar54._0_8_ - *(double *)pFVar31;
                        dVar76 = auVar67._8_8_ - *(double *)(pFVar31 + 8);
                        auVar69._0_8_ = dVar51 - auVar60._8_8_;
                        dVar51 = auVar52._0_8_ - auVar53._0_8_;
                        local_840._s_0.Z = dVar76 * dVar51 - dVar66 * auVar69._0_8_;
                        local_840._s_0.Y =
                             dVar66 * (local_940 - local_928) - (local_700 - local_718) * dVar51;
                        local_840._s_0.X =
                             (local_700 - local_718) * auVar69._0_8_ -
                             dVar76 * (local_940 - local_928);
                        UE::Math::TVector<double>::GetSafeNormal
                                  ((TVector<double> *)&local_840._s_0,&local_6f8,
                                   (double)__real_3e45798ee0000000,
                                   &UE::Math::TVector<double>::ZeroVector);
                        `FAsyncGrassBuilder::Build'::__l2::<lambda_1>::operator()
                                  (local_a13,&local_6f8,(TMatrix<double> *)local_4d8);
                        dVar76 = local_9f0;
                      }
                    }
                    else {
                      dVar66 = *(double *)(pFVar38 + 0x28);
                      local_358.M[2][2] = dVar73;
                      if (dVar66 <= 0.0) {
                        if (0.0 <= dVar66) {
                          local_358.M[2][2] = 0.0;
                        }
                        else {
                          local_358.M[2][2] = (double)CONCAT44(uVar80,uVar79);
                        }
                      }
                      local_358.M[2][0] = local_358.M[2][2] * *(double *)(pFVar38 + 0x18);
                      local_358.M[2][1] = local_358.M[2][2] * *(double *)(pFVar38 + 0x20);
                      local_358.M[2][2] = local_358.M[2][2] * dVar66;
                      local_9f0 = (double)CONCAT44((uint)((ulonglong)local_358.M[2][2] >> 0x20) ^
                                                   __xmm_80000000000000008000000000000000._4_4_,
                                                   SUB84(local_358.M[2][2],0) ^
                                                   (uint)__xmm_80000000000000008000000000000000);
                      dVar66 = local_358.M[2][0] * local_358.M[2][0] + local_9f0 * local_9f0;
                      local_9d8 = local_358.M[2][0];
                      if (dVar66 == dVar73) {
LAB_145f4bf7a:
                        local_358.M[0][1] = 0.0;
                      }
                      else {
                        if ((double)__real_3e45798ee0000000 <= dVar66) {
                          local_7c0 = dVar73 / SQRT(dVar66);
                          local_9f0 = local_7c0 * local_9f0;
                          local_9d8 = local_7c0 * local_358.M[2][0];
                          goto LAB_145f4bf7a;
                        }
                        local_9d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        local_718 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        local_9f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                        local_358.M[0][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                      }
                      local_358.M[1][0] =
                           local_358.M[2][1] * local_9d8 - local_358.M[0][1] * local_358.M[2][2];
                      local_358.M[1][1] =
                           local_9f0 * local_358.M[2][2] - local_9d8 * local_358.M[2][0];
                      local_358.M[0][3] = 0.0;
                      local_358.M[1][3] = 0.0;
                      local_358.M[1][2] =
                           local_358.M[0][1] * local_358.M[2][0] - local_358.M[2][1] * local_9f0;
                      local_358.M[2][3] = 0.0;
                      local_358.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                      local_358.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                      local_358.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                      local_358.M[3][3] = dVar73;
                      local_358.M[0][0] = local_9f0;
                      local_358.M[0][2] = local_9d8;
                      VectorMatrixMultiply
                                ((TMatrix<double> *)local_1d8,(TMatrix<double> *)local_4d8,
                                 &local_358);
                      local_4d8._96_8_ = local_178._0_8_;
                      local_4d8._80_8_ = local_188._0_8_;
                      local_4d8._32_8_ = local_1d8._32_8_;
                      local_4d8._16_8_ = local_1d8._16_8_;
                      local_4d8._24_8_ = local_1d8._24_8_;
                      local_4d8._48_8_ = local_1a8;
                      local_4d8._60_4_ = uStack_19c;
                      local_4d8._56_4_ = uStack_1a0;
                      local_4d8._64_8_ = local_198;
                      local_4d8._72_8_ = dStack_190;
                      auVar9._4_8_ = local_168._8_8_;
                      auVar9._0_4_ = local_178._4_4_;
                      auVar52._0_8_ = auVar9._0_8_ << 0x20;
                      auVar52._8_4_ = local_178._8_4_;
                      auVar52._12_4_ = local_178._12_4_;
                      local_4d8._104_8_ = auVar52._8_8_;
                      auVar10._4_8_ = local_178._8_8_;
                      auVar10._0_4_ = local_188._4_4_;
                      auVar53._0_8_ = auVar10._0_8_ << 0x20;
                      auVar53._8_4_ = local_188._8_4_;
                      auVar53._12_4_ = local_188._12_4_;
                      local_4d8._88_8_ = auVar53._8_8_;
                      auVar11._4_8_ = local_188._8_8_;
                      auVar11._0_4_ = local_1d8._36_4_;
                      auVar54._0_8_ = auVar11._0_8_ << 0x20;
                      auVar54._8_4_ = local_1d8._40_4_;
                      auVar54._12_4_ = local_1d8._44_4_;
                      local_4d8._40_8_ = auVar54._8_8_;
                      auVar12._4_8_ = local_1d8._40_8_;
                      auVar12._0_4_ = local_1d8._4_4_;
                      auVar55._0_8_ = auVar12._0_8_ << 0x20;
                      auVar55._8_4_ = local_1d8._8_4_;
                      auVar55._12_4_ = local_1d8._12_4_;
                      local_4d8._8_8_ = auVar55._8_8_;
                      stack0xfffffffffffffb98 = local_168;
                      local_4d8._4_4_ = local_1d8._4_4_;
                      local_4d8._0_4_ = local_1d8._0_4_;
                      auVar69 = local_1d8._32_16_;
                    }
                  }
                  local_2d8.M[3][1] = (double)local_4d8._104_8_ + *(double *)(pFVar38 + 8);
                  local_2d8.M[0][0] = (double)local_4d8._0_8_;
                  local_2d8.M[0][1] = (double)local_4d8._8_8_;
                  local_2d8.M[0][2] = (double)local_4d8._16_8_;
                  local_2d8.M[0][3] = (double)local_4d8._24_8_;
                  local_2d8.M[1][0] = (double)local_4d8._32_8_;
                  local_2d8.M[1][1] = (double)local_4d8._40_8_;
                  local_2d8.M[1][2] = (double)local_4d8._48_8_;
                  local_2d8.M[1][3] = (double)local_4d8._56_8_;
                  local_2d8.M[2][0] = (double)local_4d8._64_8_;
                  local_2d8.M[2][1] = (double)local_4d8._72_8_;
                  local_2d8.M[2][2] = (double)local_4d8._80_8_;
                  local_2d8.M[2][3] = (double)local_4d8._88_8_;
                  local_2d8.M[3][0] = (double)local_4d8._96_8_ + *(double *)pFVar38;
                  local_2d8.M[3][2] = (double)local_4d8._112_8_ + *(double *)(pFVar38 + 0x10);
                  local_2d8.M[3][3] = dStack_460;
                  VectorMatrixMultiply(&local_158,&local_2d8,&this->XForm);
                  dVar21 = local_158.M[3][1];
                  dVar20 = local_158.M[3][0];
                  dVar19 = local_158.M[2][3];
                  dVar18 = local_158.M[2][2];
                  dVar74 = local_158.M[2][1];
                  dVar58 = local_158.M[2][0];
                  dVar50 = local_158.M[1][3];
                  dVar63 = local_158.M[1][2];
                  dVar68 = local_158.M[1][1];
                  dVar65 = local_158.M[1][0];
                  uVar80 = local_158.M[0][3]._4_4_;
                  uVar79 = local_158.M[0][3]._0_4_;
                  uVar78 = local_158.M[0][2]._4_4_;
                  uVar77 = local_158.M[0][2]._0_4_;
                  dVar51 = local_158.M[0][1];
                  dVar66 = local_158.M[0][0];
                  fVar56 = local_a10;
                  local_4d8._0_8_ = local_158.M[0][0];
                  local_4d8._8_8_ = local_158.M[0][1];
                  local_4d8._20_4_ = local_158.M[0][2]._4_4_;
                  local_4d8._16_4_ = local_158.M[0][2]._0_4_;
                  local_4d8._28_4_ = local_158.M[0][3]._4_4_;
                  local_4d8._24_4_ = local_158.M[0][3]._0_4_;
                  uVar35 = 0;
                  if ((int)local_a10 < local_a08.ArrayNum) {
                    uVar35 = ~(uint)local_a10 >> 0x1f;
                  }
                  local_4d8._32_8_ = local_158.M[1][0];
                  local_4d8._40_8_ = local_158.M[1][1];
                  local_4d8._48_8_ = local_158.M[1][2];
                  local_4d8._56_8_ = local_158.M[1][3];
                  local_4d8._64_8_ = local_158.M[2][0];
                  local_4d8._72_8_ = local_158.M[2][1];
                  local_4d8._80_8_ = local_158.M[2][2];
                  local_4d8._88_8_ = local_158.M[2][3];
                  local_4d8._96_8_ = local_158.M[3][0];
                  local_4d8._104_8_ = local_158.M[3][1];
                  local_4d8._112_8_ = local_158.M[3][2];
                  dStack_460 = local_158.M[3][3];
                  local_938 = local_158.M[3][2];
                  dStack_930 = local_158.M[3][3];
                  if ((uVar35 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_9b0 = local_9b0 + 1;
                  local_a10 = (float)((int)fVar56 + 1);
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29) = dVar66;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 8) = dVar51;
                  pFVar38 = local_a08.AllocatorInstance.Data + lVar29 + 0x10;
                  *(undefined4 *)pFVar38 = uVar77;
                  *(undefined4 *)(pFVar38 + 4) = uVar78;
                  *(undefined4 *)(pFVar38 + 8) = uVar79;
                  *(undefined4 *)(pFVar38 + 0xc) = uVar80;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x20) = dVar65;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x20 + 8) = dVar68;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x30) = dVar63;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x30 + 8) = dVar50;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x40) = dVar58;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x40 + 8) = dVar74;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x50) = dVar18;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x50 + 8) = dVar19;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60) = dVar20;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60 + 8) = dVar21;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x70) = local_938;
                  *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x70 + 8) = dStack_930;
                  lVar29 = lVar29 + 0x80;
                  uVar35 = (this->RandomStream).Seed * -0x4b9b4d07 + 0x9d6f2492;
                  if (this->bUseLandscapeLightmap == false) {
                    local_618.M[0][0] = (float)(double)local_4d8._0_8_;
                    local_618.M[0][1] = (float)(double)local_4d8._8_8_;
                    pTVar82 = &UE::Math::TVector2<double>::ZeroVector;
                    pTVar39 = &local_618;
                    pTVar81 = &UE::Math::TVector2<double>::ZeroVector;
                    local_618.M[1][0] = (float)(double)local_4d8._32_8_;
                    local_618.M[1][1] = (float)(double)local_4d8._40_8_;
                    local_618.M[0][2] = (float)(double)local_4d8._16_8_;
                    local_618.M[0][3] = (float)(double)local_4d8._24_8_;
                    local_618.M[1][2] = (float)(double)local_4d8._48_8_;
                    local_618.M[1][3] = (float)(double)local_4d8._56_8_;
                    local_618.M[2][0] = (float)(double)local_4d8._64_8_;
                    local_618.M[2][1] = (float)(double)local_4d8._72_8_;
                    local_618.M[2][2] = (float)(double)local_4d8._80_8_;
                    local_618.M[2][3] = (float)(double)local_4d8._88_8_;
                    local_618.M[3][0] = (float)(double)local_4d8._96_8_;
                    local_618.M[3][1] = (float)(double)local_4d8._104_8_;
                    local_618.M[3][2] = (float)(double)local_4d8._112_8_;
                    local_618.M[3][3] = (float)dStack_460;
                  }
                  else {
                    pTVar82 = (TVector2<double> *)&local_878;
                    auVar69._8_8_ = 0;
                    auVar69._0_8_ = (double)local_4d8._104_8_;
                    pTVar39 = &local_658;
                    pTVar81 = (TVector2<double> *)&local_868;
                    dVar51 = ((double)local_4d8._96_8_ - *(double *)&this->field_0x108) *
                             (this->LightMapComponentScale).field0_0x0._s_0.X +
                             (this->LightMapComponentBias).field0_0x0._s_0.X;
                    dVar66 = ((double)local_4d8._104_8_ - *(double *)&this->field_0x110) *
                             (this->LightMapComponentScale).field0_0x0._s_0.Y +
                             (this->LightMapComponentBias).field0_0x0._s_0.Y;
                    local_868._s_0.X =
                         dVar51 * (this->LightmapBaseScale).field0_0x0._s_0.X +
                         (this->LightmapBaseBias).field0_0x0._s_0.X;
                    local_878._s_0.Y =
                         dVar66 * (this->ShadowmapBaseScale).field0_0x0._s_0.Y +
                         (this->ShadowmapBaseBias).field0_0x0._s_0.Y;
                    local_878._s_0.X =
                         dVar51 * (this->ShadowmapBaseScale).field0_0x0._s_0.X +
                         (this->ShadowmapBaseBias).field0_0x0._s_0.X;
                    local_868._s_0.Y =
                         dVar66 * (this->LightmapBaseScale).field0_0x0._s_0.Y +
                         (this->LightmapBaseBias).field0_0x0._s_0.Y;
                    local_658.M[0][2] = (float)(double)local_4d8._16_8_;
                    local_658.M[0][3] = (float)(double)local_4d8._24_8_;
                    local_658.M[0][0] = (float)(double)local_4d8._0_8_;
                    local_658.M[0][1] = (float)(double)local_4d8._8_8_;
                    local_658.M[1][2] = (float)(double)local_4d8._48_8_;
                    local_658.M[1][3] = (float)(double)local_4d8._56_8_;
                    local_658.M[2][0] = (float)(double)local_4d8._64_8_;
                    local_658.M[2][1] = (float)(double)local_4d8._72_8_;
                    local_658.M[1][0] = (float)(double)local_4d8._32_8_;
                    local_658.M[1][1] = (float)(double)local_4d8._40_8_;
                    local_658.M[2][2] = (float)(double)local_4d8._80_8_;
                    local_658.M[2][3] = (float)(double)local_4d8._88_8_;
                    local_658.M[3][0] = (float)(double)local_4d8._96_8_;
                    local_658.M[3][1] = (float)(double)local_4d8._104_8_;
                    local_658.M[3][2] = (float)(double)local_4d8._112_8_;
                    local_658.M[3][3] = (float)dStack_460;
                  }
                  (this->RandomStream).Seed = uVar35;
                  FStaticMeshInstanceData::SetInstance
                            (&this->InstanceBuffer,(int)fVar56,pTVar39,
                             (float)(uVar35 >> 9 | 0x3f800000) - fVar16,pTVar81,pTVar82);
                  uVar77 = (undefined4)__real_4056800000000000;
                  uVar78 = (undefined4)((ulonglong)__real_4056800000000000 >> 0x20);
                  uVar79 = (undefined4)__real_bff0000000000000;
                  uVar80 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
                  uVar40 = local_9e0;
                  dVar66 = __real_4066800000000000;
                }
                iVar23 = *(int *)&this->field_0x120;
                uVar40 = uVar40 + 1;
                dVar76 = (double)((longlong)dVar76 + 0x38);
                uVar42 = (ulonglong)(uVar41 + 1);
                iVar45 = iVar45 + 1;
                uVar37 = local_9b0;
                uVar35 = local_a18;
                uVar30 = uVar32;
                local_9f0 = dVar76;
                local_9e0 = uVar40;
              } while (iVar45 < iVar23);
            }
            local_a18 = uVar35 + 1;
            uVar34 = (ulonglong)local_a18;
            dVar76 = local_968;
          } while ((int)local_a18 < iVar23);
        }
      }
    }
    if (local_9d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d0.Data);
    }
    iVar23 = local_a08.ArrayNum;
  }
  else {
    dVar73 = *(double *)&this->field_0xf0;
    local_998 = CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                         (uint)__xmm_80000000000000008000000000000000);
    if (dVar73 < 0.0) {
      *(ulonglong *)&this->field_0xf0 =
           CONCAT44((uint)((ulonglong)dVar73 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_
                    ,SUB84(dVar73,0) ^ (uint)__xmm_80000000000000008000000000000000);
      *(double *)&this->field_0xd8 = dVar73 + *(double *)&this->field_0xd8;
    }
    dVar73 = *(double *)&this->field_0xf8;
    if (dVar73 < 0.0) {
      *(ulonglong *)&this->field_0xf8 =
           CONCAT44((uint)((ulonglong)dVar73 >> 0x20) ^ uVar30,SUB84(dVar73,0) ^ uVar35);
      *(double *)&this->field_0xe0 = dVar73 + *(double *)&this->field_0xe0;
    }
    uVar35 = iVar23 * iVar23;
    local_9f0 = (double)CONCAT44(local_9f0._4_4_,uVar35);
    if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
    }
    iVar23 = 0;
    if (0 < (int)uVar35) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar35,&local_a08.AllocatorInstance,0,&local_a08.ArrayMax);
      fVar48 = __real_3c000000;
      fVar49 = __real_3eaaaaab;
      fVar72 = __real_3f000000;
      local_938 = local_940;
      local_9e0 = CONCAT44(local_9e0._4_4_,__real_bf000000);
      local_988 = __real_3e45798ee0000000;
      local_9b0 = CONCAT44(local_9b0._4_4_,__real_43b40000);
      local_9e4 = __real_3b808081;
      local_9f8 = __real_47000000;
      fVar56 = __real_bf000000;
      do {
        fVar75 = local_9e4;
        pTVar33 = (TVector<double> *)0x0;
        fVar62 = 0.0;
        uVar35 = this->HaltonBaseIndex + (int)uVar37;
        uVar30 = uVar35;
        fVar64 = fVar72;
        if ((int)uVar35 < 1) {
          fVar64 = 0.0;
        }
        else {
          do {
            uVar32 = uVar30 >> 1;
            fVar62 = fVar62 + (float)(uVar30 & 1) * fVar64;
            uVar30 = uVar32;
            fVar64 = fVar64 * fVar72;
          } while (uVar32 != 0);
          fVar64 = 0.0;
          fVar57 = fVar49;
          do {
            uVar30 = uVar35 / 3;
            fVar47 = (float)(uVar35 % 3) * fVar57;
            fVar57 = fVar57 * fVar49;
            fVar64 = fVar64 + fVar47;
            uVar35 = uVar30;
          } while (uVar30 != 0);
        }
        pTVar46 = &local_8b0;
        if (this->bAlignToSurface == false) {
          pTVar46 = pTVar33;
        }
        uVar35 = (this->GrassData).Stride - 1;
        local_9d8 = (double)fVar62 * *(double *)&this->field_0xf0 + *(double *)&this->field_0xd8;
        local_9c0 = (double)fVar64 * *(double *)&this->field_0xf8 + *(double *)&this->field_0xe0;
        fVar62 = (float)(local_9d8 / *(double *)&this->field_0x8 - (double)*(int *)&this->field_0xc0
                        );
        uVar41 = (int)ROUND((fVar62 + fVar62) - fVar72) >> 1;
        local_958 = (double)CONCAT44(local_958._4_4_,uVar41);
        fVar64 = (float)(local_9c0 / *(double *)&this->field_0x10 -
                        (double)*(int *)&this->field_0xc4);
        uVar43 = (int)ROUND((fVar64 + fVar64) - fVar72) >> 1;
        local_960 = (double)CONCAT44(local_960._4_4_,uVar43);
        uVar32 = -((int)ROUND(fVar56 - (fVar62 + fVar62)) >> 1);
        local_970 = (double)CONCAT44(local_970._4_4_,uVar32);
        local_9b8 = -((int)ROUND(fVar56 - (fVar64 + fVar64)) >> 1);
        uVar30 = uVar35;
        if ((int)uVar41 < (int)uVar35) {
          uVar30 = uVar41;
        }
        uVar41 = 0;
        if (0 < (int)uVar30) {
          uVar41 = uVar30;
        }
        uVar30 = uVar35;
        if ((int)uVar43 < (int)uVar35) {
          uVar30 = uVar43;
        }
        pTVar36 = pTVar33;
        if (0 < (int)uVar30) {
          pTVar36 = (TVector<double> *)(ulonglong)uVar30;
        }
        uVar30 = uVar35;
        if ((int)uVar32 < (int)uVar35) {
          uVar30 = uVar32;
        }
        uVar32 = 0;
        if (0 < (int)uVar30) {
          uVar32 = uVar30;
        }
        if ((int)local_9b8 < (int)uVar35) {
          uVar35 = local_9b8;
        }
        if (0 < (int)uVar35) {
          pTVar33 = (TVector<double> *)(ulonglong)uVar35;
        }
        fVar56 = (float)truncf();
        fVar62 = fVar62 - fVar56;
        local_9e8 = fVar62;
        fVar56 = (float)truncf();
        iVar23 = (int)pTVar36;
        local_a10 = fVar64 - fVar56;
        pbVar25 = TArrayView<unsigned_char,int>::operator[]
                            (&(this->GrassData).WeightData,
                             iVar23 * (this->GrassData).Stride + uVar41);
        bVar3 = *pbVar25;
        pbVar25 = TArrayView<unsigned_char,int>::operator[]
                            (&(this->GrassData).WeightData,
                             iVar23 * (this->GrassData).Stride + uVar32);
        iVar45 = (int)pTVar33;
        bVar4 = *pbVar25;
        pbVar25 = TArrayView<unsigned_char,int>::operator[]
                            (&(this->GrassData).WeightData,
                             iVar45 * (this->GrassData).Stride + uVar41);
        bVar5 = *pbVar25;
        fVar57 = ((float)bVar4 * fVar75 - (float)bVar3 * fVar75) * fVar62 + (float)bVar3 * fVar75;
        pbVar25 = TArrayView<unsigned_char,int>::operator[]
                            (&(this->GrassData).WeightData,
                             iVar45 * (this->GrassData).Stride + uVar32);
        fVar57 = ((((float)*pbVar25 * local_9e4 - (float)bVar5 * fVar75) * fVar62 +
                  (float)bVar5 * fVar75) - fVar57) * (fVar64 - fVar56) + fVar57;
        puVar26 = TArrayView<unsigned_short,int>::operator[]
                            (&(this->GrassData).HeightData,
                             iVar23 * (this->GrassData).Stride + uVar41);
        fVar56 = local_9f8;
        fVar75 = (float)*puVar26 - local_9f8;
        puVar26 = TArrayView<unsigned_short,int>::operator[]
                            (&(this->GrassData).HeightData,
                             uVar32 + iVar23 * (this->GrassData).Stride);
        uVar6 = *puVar26;
        puVar26 = TArrayView<unsigned_short,int>::operator[]
                            (&(this->GrassData).HeightData,
                             iVar45 * (this->GrassData).Stride + uVar41);
        uVar7 = *puVar26;
        puVar26 = TArrayView<unsigned_short,int>::operator[]
                            (&(this->GrassData).HeightData,
                             uVar32 + iVar45 * (this->GrassData).Stride);
        dVar76 = *(double *)&this->field_0x18;
        dVar68 = (double)(fVar75 * fVar48);
        dVar73 = (double)fVar62;
        local_9d8 = local_9d8 - (double)*(int *)&this->field_0xc8 * *(double *)&this->field_0x8;
        dVar66 = (double)(((float)uVar7 - fVar56) * fVar48);
        dVar51 = (double)(((float)uVar6 - fVar56) * fVar48);
        local_9c0 = local_9c0 - (double)*(int *)&this->field_0xcc * *(double *)&this->field_0x10;
        dVar65 = (double)(((float)*puVar26 - local_9f8) * fVar48);
        if (local_a10 <= local_9e8) {
          dVar73 = (__real_3ff0000000000000 - dVar73) * dVar68 +
                   (double)(local_9e8 - local_a10) * dVar51 +
                   (dVar73 - (double)(local_9e8 - local_a10)) * dVar65;
        }
        else {
          dVar73 = (__real_3ff0000000000000 - (double)local_a10) * dVar68 + dVar65 * dVar73 +
                   ((double)local_a10 - dVar73) * dVar66;
        }
        dVar73 = dVar73 * dVar76;
        local_8c8._s_0.X = local_9d8;
        local_8c8._s_0.Y = local_9c0;
        local_8c8._s_0.Z = dVar73;
        if (pTVar46 != (TVector<double> *)0x0) {
          dVar68 = dVar68 * dVar76;
          dVar63 = (double)local_958._0_4_ * *(double *)&this->field_0x8;
          dVar65 = dVar65 * dVar76;
          dVar74 = (double)local_960._0_4_ * *(double *)&this->field_0x10;
          dVar58 = (double)local_970._0_4_ * *(double *)&this->field_0x8;
          dVar50 = (double)(int)local_9b8 * *(double *)&this->field_0x10;
          if (local_9e8 <= local_a10) {
            dVar76 = dVar76 * dVar66;
            if (((dVar74 != dVar50) || (dVar68 != dVar76)) &&
               ((dVar58 != dVar63 || (dVar65 != dVar76)))) {
              pTVar33 = &local_5c0;
              pTVar27 = &local_810;
              local_810._s_0.Y = (dVar68 - dVar76) * (dVar58 - dVar63);
              dVar66 = (dVar58 - dVar63) * (dVar74 - dVar50);
              local_810._s_0.X = (dVar65 - dVar76) * (dVar74 - dVar50);
              local_810._s_0.Z =
                   (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) ^ local_998._4_4_,
                                    SUB84(dVar66,0) ^ (uint)local_998);
              goto LAB_145f4a8d4;
            }
            pTVar27 = &local_7a0;
            local_7a0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
            local_7a0._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
            local_7a0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
          }
          else {
            dVar76 = dVar76 * dVar51;
            if (((dVar63 == dVar58) && (dVar68 == dVar76)) ||
               ((dVar50 == dVar74 && (dVar65 == dVar76)))) {
              pTVar27 = &local_7b8;
              local_7b8._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
              local_7b8._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
              local_7b8._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
            }
            else {
              pTVar33 = &local_5d8;
              pTVar27 = &local_828;
              local_828._s_0.Y = (dVar65 - dVar76) * (dVar63 - dVar58);
              dVar66 = (dVar63 - dVar58) * (dVar50 - dVar74);
              local_828._s_0.X = (dVar68 - dVar76) * (dVar50 - dVar74);
              local_828._s_0.Z =
                   (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) ^ local_998._4_4_,
                                    SUB84(dVar66,0) ^ (uint)local_998);
LAB_145f4a8d4:
              pTVar27 = &UE::Math::TVector<double>::GetSafeNormal
                                   ((TVector<double> *)&pTVar27->_s_0,pTVar33,(double)local_988,
                                    &UE::Math::TVector<double>::ZeroVector)->field0_0x0;
            }
          }
          dVar66 = (pTVar27->_s_0).Y;
          dVar76 = (pTVar27->_s_0).Z;
          (pTVar46->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar27->_s_0).X)->_s_0).X;
          (pTVar46->field0_0x0)._s_0.Y = dVar66;
          (pTVar46->field0_0x0)._s_0.Z = dVar76;
        }
        if ((((*(float *)&this->AllowedDensityRange <= fVar57 &&
               fVar57 != *(float *)&this->AllowedDensityRange) &&
             (puVar1 = &(this->AllowedDensityRange).field_0x4,
             fVar57 < *(float *)puVar1 || fVar57 == *(float *)puVar1)) &&
            (uVar35 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b,
            (this->RandomStream).Seed = uVar35, (float)(uVar35 >> 9 | 0x3f800000) - fVar16 <= fVar57
            )) && (bVar22 = IsExcluded(this,(TVector<double> *)&local_8c8._s_0), !bVar22)) {
          if (this->bRandomScale == false) {
            pTVar27 = &local_788;
            local_788._s_0.X = local_950;
            local_788._s_0.Y = dStack_948;
            local_788._s_0.Z = local_938;
          }
          else {
            pTVar27 = &GetRandomScale(this,&local_5a8,fVar57)->field0_0x0;
          }
          local_770._s_0.X = (((TVector<double>_u_0 *)&(pTVar27->_s_0).X)->_s_0).X;
          local_770._s_0.Y = (pTVar27->_s_0).Y;
          local_770._s_0.Z = (pTVar27->_s_0).Z;
          if (this->bRandomRotation == false) {
            fVar56 = 0.0;
          }
          else {
            uVar35 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
            (this->RandomStream).Seed = uVar35;
            fVar56 = ((float)(uVar35 >> 9 | 0x3f800000) - fVar16) * (float)local_9b0;
          }
          local_7f8.Yaw = (double)fVar56;
          local_7f8.Pitch = 0.0;
          local_7f8.Roll = 0.0;
          pTVar28 = UE::Math::TScaleRotationTranslationMatrix<double>::
                    TScaleRotationTranslationMatrix<double>
                              (&local_558,(TVector<double> *)&local_770._s_0,&local_7f8,
                               &UE::Math::TVector<double>::ZeroVector);
          local_458.M[0][0] = *(double *)pTVar28;
          local_458.M[0][1] = *(double *)&pTVar28->field_0x8;
          local_458.M[0][2] = *(double *)&pTVar28->field_0x10;
          local_458.M[0][3] = *(double *)&pTVar28->field_0x18;
          local_458.M[1][0] = *(double *)&pTVar28->field_0x20;
          local_458.M[1][1] = *(double *)&pTVar28->field_0x28;
          local_458.M[1][2] = *(double *)&pTVar28->field_0x30;
          local_458.M[1][3] = *(double *)&pTVar28->field_0x38;
          local_458.M[2][0] = *(double *)&pTVar28->field_0x40;
          local_458.M[2][1] = *(double *)&pTVar28->field_0x48;
          local_458.M[2][2] = *(double *)&pTVar28->field_0x50;
          local_458.M[2][3] = *(double *)&pTVar28->field_0x58;
          local_458.M[3][0] = *(double *)&pTVar28->field_0x60;
          local_458.M[3][1] = *(double *)&pTVar28->field_0x68;
          local_458.M[3][2] = *(double *)&pTVar28->field_0x70;
          local_458.M[3][3] = *(double *)&pTVar28->field_0x78;
          if ((this->bAlignToSurface != false) &&
             (((__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)local_8b0.field0_0x0._0_8_ >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(local_8b0.field0_0x0._s_0.X,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
               (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)local_8b0.field0_0x0._8_8_ >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(local_8b0.field0_0x0._s_0.Y,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
              (__real_3f1a36e2e0000000 <
               (double)CONCAT44((uint)((ulonglong)local_8b0.field0_0x0._16_8_ >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_8b0.field0_0x0._s_0.Z,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
            `FAsyncGrassBuilder::Build'::__l2::<lambda_1>::operator()
                      (local_a13,&local_8b0,&local_458);
          }
          local_3d8.M[3][2] = dVar73 + local_458.M[3][2];
          local_3d8.M[0][0] = local_458.M[0][0];
          local_3d8.M[0][1] = local_458.M[0][1];
          local_3d8.M[0][2] = local_458.M[0][2];
          local_3d8.M[0][3] = local_458.M[0][3];
          local_3d8.M[1][0] = local_458.M[1][0];
          local_3d8.M[1][1] = local_458.M[1][1];
          local_3d8.M[1][2] = local_458.M[1][2];
          local_3d8.M[1][3] = local_458.M[1][3];
          local_3d8.M[2][0] = local_458.M[2][0];
          local_3d8.M[2][1] = local_458.M[2][1];
          local_3d8.M[2][2] = local_458.M[2][2];
          local_3d8.M[2][3] = local_458.M[2][3];
          local_3d8.M[3][0] = local_9d8 + local_458.M[3][0];
          local_3d8.M[3][1] = local_9c0 + local_458.M[3][1];
          local_3d8.M[3][3] = local_458.M[3][3];
          VectorMatrixMultiply(&local_258,&local_3d8,&this->XForm);
          local_458.M[0][0] = local_258.M[0][0];
          local_458.M[0][1] = local_258.M[0][1];
          local_458.M[0][2] = local_258.M[0][2];
          local_458.M[0][3] = local_258.M[0][3];
          local_458.M[1][0] = local_258.M[1][0];
          local_458.M[1][1] = local_258.M[1][1];
          local_458.M[1][2] = local_258.M[1][2];
          local_458.M[1][3] = local_258.M[1][3];
          local_458.M[2][0] = local_258.M[2][0];
          local_458.M[2][1] = local_258.M[2][1];
          local_458.M[2][2] = local_258.M[2][2];
          local_458.M[2][3] = local_258.M[2][3];
          local_458.M[3][0] = local_258.M[3][0];
          local_458.M[3][1] = local_258.M[3][1];
          local_458.M[3][2] = local_258.M[3][2];
          local_458.M[3][3] = local_258.M[3][3];
          if (((local_a08.AllocatorInstance.Data <= (FScriptContainerElement *)&local_458) &&
              ((FScriptContainerElement *)&local_458 <
               local_a08.AllocatorInstance.Data + (longlong)local_a08.ArrayMax * 0x80)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar23 = local_a08.ArrayNum;
          if (local_a08.ArrayNum == local_a08.ArrayMax) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1080,&local_a08.AllocatorInstance,&local_a08.ArrayMax);
          }
          local_a08.ArrayNum = iVar23 + 1;
          lVar29 = (longlong)iVar23 * 0x80;
          *(double *)(local_a08.AllocatorInstance.Data + lVar29) = local_458.M[0][0];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 8) = local_458.M[0][1];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x10) = local_458.M[0][2];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x10 + 8) = local_458.M[0][3];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x20) = local_458.M[1][0];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x20 + 8) = local_458.M[1][1];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x30) = local_458.M[1][2];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x30 + 8) = local_458.M[1][3];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x40) = local_458.M[2][0];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x40 + 8) = local_458.M[2][1];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x50) = local_458.M[2][2];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x50 + 8) = local_458.M[2][3];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60) = local_458.M[3][0];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60 + 8) = local_458.M[3][1];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x70) = local_458.M[3][2];
          *(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x70 + 8) = local_458.M[3][3];
        }
        uVar35 = (int)uVar37 + 1;
        uVar37 = (ulonglong)uVar35;
        fVar56 = (float)local_9e0;
      } while ((int)uVar35 < local_9f0._0_4_);
      iVar23 = local_a08.ArrayNum;
      dVar76 = local_968;
    }
    uVar35 = 0;
    if (iVar23 == 0) goto LAB_145f4cc38;
    this->TotalInstances = this->TotalInstances + iVar23;
    FStaticMeshInstanceData::AllocateInstances
              (&this->InstanceBuffer,iVar23,0,AllowSlackOnReduce|AllowSlackOnGrow,true);
    iVar23 = local_a08.ArrayNum;
    if (0 < local_a08.ArrayNum) {
      lVar29 = 0;
      do {
        uVar30 = 0;
        if ((int)uVar35 < local_a08.ArrayNum) {
          uVar30 = ~uVar35 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar30 = (this->RandomStream).Seed;
        (this->RandomStream).Seed = uVar30 * 0xbb38435 + 0x3619636b;
        uVar30 = uVar30 * -0x4b9b4d07 + 0x9d6f2492;
        if (this->bUseLandscapeLightmap == false) {
          (this->RandomStream).Seed = uVar30;
          pTVar39 = &local_698;
          pTVar82 = &UE::Math::TVector2<double>::ZeroVector;
          pTVar81 = &UE::Math::TVector2<double>::ZeroVector;
          local_698.M[0][2] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x10);
          local_698.M[0][3] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x10 + 8);
          local_698.M[0][0] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29);
          local_698.M[0][1] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 8);
          local_698.M[1][0] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x20);
          local_698.M[1][1] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x20 + 8);
          local_698.M[1][2] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x30);
          local_698.M[1][3] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x30 + 8);
          local_698.M[2][0] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x40);
          local_698.M[2][1] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x40 + 8);
          local_698.M[2][2] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x50);
          local_698.M[2][3] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x50 + 8);
          local_698.M[3][0] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60);
          local_698.M[3][1] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60 + 8);
          local_698.M[3][2] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x70);
          local_698.M[3][3] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x70 + 8);
        }
        else {
          pTVar82 = (TVector2<double> *)&local_898;
          pTVar39 = &local_6d8;
          pTVar81 = (TVector2<double> *)&local_888;
          dVar73 = (*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x68) -
                   *(double *)&this->field_0x110) * (this->LightMapComponentScale).field0_0x0._s_0.Y
                   + (this->LightMapComponentBias).field0_0x0._s_0.Y;
          dVar66 = (*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60) -
                   *(double *)&this->field_0x108) * (this->LightMapComponentScale).field0_0x0._s_0.X
                   + (this->LightMapComponentBias).field0_0x0._s_0.X;
          local_888._s_0.Y =
               dVar73 * (this->LightmapBaseScale).field0_0x0._s_0.Y +
               (this->LightmapBaseBias).field0_0x0._s_0.Y;
          local_888._s_0.X =
               dVar66 * (this->LightmapBaseScale).field0_0x0._s_0.X +
               (this->LightmapBaseBias).field0_0x0._s_0.X;
          local_898._s_0.Y =
               dVar73 * (this->ShadowmapBaseScale).field0_0x0._s_0.Y +
               (this->ShadowmapBaseBias).field0_0x0._s_0.Y;
          local_898._s_0.X =
               dVar66 * (this->ShadowmapBaseScale).field0_0x0._s_0.X +
               (this->ShadowmapBaseBias).field0_0x0._s_0.X;
          (this->RandomStream).Seed = uVar30;
          local_6d8.M[0][2] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x10);
          local_6d8.M[0][3] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x10 + 8);
          local_6d8.M[0][0] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29);
          local_6d8.M[0][1] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 8);
          local_6d8.M[1][0] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x20);
          local_6d8.M[1][1] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x20 + 8);
          local_6d8.M[1][2] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x30);
          local_6d8.M[1][3] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x30 + 8);
          local_6d8.M[2][0] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x40);
          local_6d8.M[2][1] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x40 + 8);
          local_6d8.M[2][2] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x50);
          local_6d8.M[2][3] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x50 + 8);
          local_6d8.M[3][0] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60);
          local_6d8.M[3][1] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x60 + 8);
          local_6d8.M[3][2] = (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x70);
          local_6d8.M[3][3] =
               (float)*(double *)(local_a08.AllocatorInstance.Data + lVar29 + 0x70 + 8);
        }
        FStaticMeshInstanceData::SetInstance
                  (&this->InstanceBuffer,uVar35,pTVar39,(float)(uVar30 >> 9 | 0x3f800000) - fVar16,
                   pTVar81,pTVar82);
        uVar35 = uVar35 + 1;
        lVar29 = lVar29 + 0x80;
        iVar23 = local_a08.ArrayNum;
      } while ((int)uVar35 < local_a08.ArrayNum);
    }
  }
  if (iVar23 != 0) {
    local_9a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9a8.ArrayNum = 0;
    local_9a8.ArrayMax = 0;
    local_980.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_980.ArrayNum = 0;
    local_980.ArrayMax = 0;
    local_910.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_910.ArrayNum = 0;
    local_910.ArrayMax = 0;
    UGrassInstancedStaticMeshComponent::BuildTreeAnyThread
              (&local_a08,&local_910,0,&this->MeshBox,&this->ClusterTree,&local_9a8,&local_980,
               &this->OutOcclusionLayerNum,this->DesiredInstancesPerLeaf,false);
    uVar35 = 0;
    local_938 = (double)(longlong)iVar23;
    if (0 < iVar23) {
      lVar29 = 0;
      do {
        uVar32 = ~uVar35 >> 0x1f;
        uVar30 = 0;
        if ((int)uVar35 < local_9a8.ArrayNum) {
          uVar30 = uVar32;
        }
        if ((uVar30 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar30 = *(uint *)(local_9a8.AllocatorInstance.Data + lVar29 * 4);
        if (uVar30 != uVar35) {
          if (((int)uVar30 < (int)uVar35) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LoadFrom > FirstUnfixedIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                  ,0x8d1,L""), bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FStaticMeshInstanceData::SwapInstance(&this->InstanceBuffer,uVar35,uVar30);
          uVar41 = 0;
          if ((int)uVar35 < local_980.ArrayNum) {
            uVar41 = uVar32;
          }
          if ((uVar41 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar41 = *(uint *)(local_980.AllocatorInstance.Data + lVar29 * 4);
          if (((int)uVar41 <= (int)uVar35) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SwapGoesTo > FirstUnfixedIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                  ,0x8d5,L""), bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar43 = 0;
          if ((int)uVar41 < local_9a8.ArrayNum) {
            uVar43 = ~uVar41 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((*(uint *)(local_9a8.AllocatorInstance.Data + (longlong)(int)uVar41 * 4) != uVar35) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SortedInstances[SwapGoesTo] == FirstUnfixedIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                                  ,0x8d6,L""), bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar43 = 0;
          if ((int)uVar41 < local_9a8.ArrayNum) {
            uVar43 = ~uVar41 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(uint *)(local_9a8.AllocatorInstance.Data + (longlong)(int)uVar41 * 4) = uVar30;
          uVar43 = 0;
          if ((int)uVar30 < local_980.ArrayNum) {
            uVar43 = ~uVar30 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(uint *)(local_980.AllocatorInstance.Data + (longlong)(int)uVar30 * 4) = uVar41;
          uVar30 = 0;
          if ((int)uVar35 < local_980.ArrayNum) {
            uVar30 = uVar32;
          }
          if ((uVar30 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(uint *)(local_980.AllocatorInstance.Data + lVar29 * 4) = uVar35;
          uVar30 = 0;
          if ((int)uVar35 < local_9a8.ArrayNum) {
            uVar30 = uVar32;
          }
          if ((uVar30 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(uint *)(local_9a8.AllocatorInstance.Data + lVar29 * 4) = uVar35;
        }
        uVar35 = uVar35 + 1;
        lVar29 = lVar29 + 1;
      } while (lVar29 < (longlong)local_938);
    }
    if (local_910.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_910.AllocatorInstance.Data);
    }
    if (local_980.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_980.AllocatorInstance.Data);
    }
    if (local_9a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.AllocatorInstance.Data);
    }
  }
LAB_145f4cc38:
  QueryPerformanceCounter(local_8f8);
  this->BuildTime = (double)local_8f8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar76;
  if (local_a08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.AllocatorInstance.Data);
  }
  if ((local_918 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_918 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_918 & 4) != 0) {
    FThreadStats::AddMessage(local_920,CycleScopeEnd);
  }
  return;
}

// GetRandomScale @ 145f54350

TVector<double> * __thiscall
FAsyncGrassBuilder::GetRandomScale
          (FAsyncGrassBuilder *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  EGrassScaling EVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = __real_3f800000;
  bVar5 = this->bWeightAttenuatesMaxScale;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  fVar10 = fVar4;
  if (bVar5 != false) {
    fVar10 = this->MaxScaleWeightAttenuation;
    if (fVar4 <= fVar10) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (param_1 - fVar10) / (fVar4 - fVar10);
      if (fVar4 <= fVar10) {
        fVar10 = fVar4;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
    }
  }
  EVar2 = this->Scaling;
  if (EVar2 == Uniform) {
    uVar7 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar7;
    fVar1 = *(float *)&(this->ScaleX).field_0x4;
    fVar8 = *(float *)&this->ScaleX;
    if (fVar1 < fVar8) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (fVar1 - fVar8) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar10 + fVar8;
    }
    dVar9 = (double)fVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9;
    return __return_storage_ptr__;
  }
  if (EVar2 == Free) {
    uVar7 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar7;
    fVar1 = *(float *)&(this->ScaleX).field_0x4;
    fVar8 = *(float *)&this->ScaleX;
    if (fVar1 < fVar8) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (fVar1 - fVar8) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar10 + fVar8;
    }
    uVar7 = uVar7 * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar7;
    fVar1 = *(float *)&(this->ScaleY).field_0x4;
    fVar11 = *(float *)&this->ScaleY;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar8;
    if (fVar1 < fVar11) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (fVar1 - fVar11) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar10 + fVar11;
    }
    uVar7 = uVar7 * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar7;
    fVar1 = *(float *)&(this->ScaleZ).field_0x4;
    fVar8 = *(float *)&this->ScaleZ;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar11;
    if (fVar8 <= fVar1) {
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (double)((fVar1 - fVar8) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar10 + fVar8);
      return __return_storage_ptr__;
    }
  }
  else {
    if (EVar2 != LockXY) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                         ,0x7fe,L"");
      if (!bVar5) {
        return __return_storage_ptr__;
      }
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar3)();
      return pTVar6;
    }
    uVar7 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar7;
    fVar1 = *(float *)&(this->ScaleX).field_0x4;
    fVar8 = *(float *)&this->ScaleX;
    if (fVar1 < fVar8) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = ((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar10 * (fVar1 - fVar8) + fVar8;
    }
    uVar7 = uVar7 * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar7;
    fVar1 = *(float *)&(this->ScaleZ).field_0x4;
    fVar11 = *(float *)&this->ScaleZ;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar8;
    if (fVar11 <= fVar1) {
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (double)((fVar1 - fVar11) * ((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar10 + fVar11)
      ;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// InitLandscapeLightmap @ 145f57790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAsyncGrassBuilder::InitLandscapeLightmap(FAsyncGrassBuilder *this,ULandscapeComponent *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FLightMap *pFVar5;
  FShadowMap *pFVar6;
  code *pcVar7;
  bool bVar8;
  ALandscapeProxy *pAVar9;
  FMeshMapBuildData *pFVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  
  iVar12 = param_1->SubsectionSizeQuads;
  iVar2 = param_1->NumSubsections;
  iVar3 = param_1->ComponentSizeQuads;
  pAVar9 = ULandscapeComponent::GetLandscapeProxy(param_1);
  fVar13 = param_1->StaticLightingResolution;
  iVar4 = pAVar9->StaticLightingLOD;
  if (fVar13 <= 0.0) {
    pAVar9 = ULandscapeComponent::GetLandscapeProxy(param_1);
    fVar13 = pAVar9->StaticLightingResolution;
  }
  local_res18[0] = 1;
  local_res10[0] = 0;
  local_res8[0] = 0;
  pAVar9 = ULandscapeComponent::GetLandscapeProxy(param_1);
  fVar13 = ::`anonymous_namespace'::GetTerrainExpandPatchCount
                     (fVar13,local_res10,local_res8,iVar3,(iVar12 + 1) * iVar2,local_res18,
                      pAVar9->StaticLightingLOD);
  iVar12 = iVar3 + 1 >> ((byte)iVar4 & 0x1f);
  fVar14 = __real_3f800000 / (float)iVar3;
  fVar15 = fVar13 / (float)(iVar12 + local_res10[0] * 2);
  fVar13 = fVar13 / (float)(iVar12 + local_res8[0] * 2);
  dVar1 = *(double *)&this->field_0x10;
  (this->LightMapComponentScale).field0_0x0._s_0.X =
       (double)((float)(iVar12 + -1) * fVar15 * fVar14) / *(double *)&this->field_0x8;
  (this->LightMapComponentScale).field0_0x0._s_0.Y =
       (double)((float)(iVar12 + -1) * fVar13 * fVar14) / dVar1;
  (this->LightMapComponentBias).field0_0x0._s_0.X = (double)((float)local_res10[0] * fVar15);
  (this->LightMapComponentBias).field0_0x0._s_0.Y = (double)((float)local_res8[0] * fVar13);
  pFVar10 = ULandscapeComponent::GetMeshMapBuildData(param_1);
  if (pFVar10 != (FMeshMapBuildData *)0x0) {
    pFVar5 = (pFVar10->LightMap).Reference;
    if (pFVar5 != (FLightMap *)0x0) {
      lVar11 = (**(code **)(pFVar5->_padding_ + 0x30))();
      dVar1 = *(double *)(lVar11 + 0xf8);
      (this->LightmapBaseBias).field0_0x0._s_0.X = *(double *)(lVar11 + 0xf0);
      (this->LightmapBaseBias).field0_0x0._s_0.Y = dVar1;
      lVar11 = (**(code **)(((pFVar10->LightMap).Reference)->_padding_ + 0x30))();
      dVar1 = *(double *)(lVar11 + 0xe8);
      (this->LightmapBaseScale).field0_0x0._s_0.X = *(double *)(lVar11 + 0xe0);
      (this->LightmapBaseScale).field0_0x0._s_0.Y = dVar1;
    }
    pFVar6 = (pFVar10->ShadowMap).Reference;
    if (pFVar6 != (FShadowMap *)0x0) {
      lVar11 = (**(code **)(pFVar6->_padding_ + 0x28))();
      if (*(longlong *)(lVar11 + 0x20) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShadowMap.h"
                           ,0x157,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      dVar1 = *(double *)(lVar11 + 0x40);
      (this->ShadowmapBaseBias).field0_0x0._s_0.X = *(double *)(lVar11 + 0x38);
      (this->ShadowmapBaseBias).field0_0x0._s_0.Y = dVar1;
      lVar11 = (**(code **)(((pFVar10->ShadowMap).Reference)->_padding_ + 0x28))();
      if (*(longlong *)(lVar11 + 0x20) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShadowMap.h"
                           ,0x156,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      dVar1 = *(double *)(lVar11 + 0x30);
      (this->ShadowmapBaseScale).field0_0x0._s_0.X = *(double *)(lVar11 + 0x28);
      (this->ShadowmapBaseScale).field0_0x0._s_0.Y = dVar1;
    }
  }
  return;
}

// IsExcluded @ 145f58ed0

bool __thiscall FAsyncGrassBuilder::IsExcluded(FAsyncGrassBuilder *this,TVector<double> *param_1)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ExcludedBoxes).ArrayNum;
  pFVar3 = (this->ExcludedBoxes).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((this->ExcludedBoxes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TBox<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    dVar1 = (param_1->field0_0x0)._s_0.X;
    if ((((*(double *)pFVar3 <= dVar1 && dVar1 != *(double *)pFVar3) &&
         (dVar1 < *(double *)(pFVar3 + 0x18))) &&
        (dVar1 = (param_1->field0_0x0)._s_0.Y,
        *(double *)(pFVar3 + 8) <= dVar1 && dVar1 != *(double *)(pFVar3 + 8))) &&
       (((dVar1 < *(double *)(pFVar3 + 0x20) &&
         (dVar1 = (param_1->field0_0x0)._s_0.Z,
         *(double *)(pFVar3 + 0x10) <= dVar1 && dVar1 != *(double *)(pFVar3 + 0x10))) &&
        (dVar1 < *(double *)(pFVar3 + 0x28))))) {
      return true;
    }
    pFVar3 = pFVar3 + 0x38;
  }
  return false;
}

