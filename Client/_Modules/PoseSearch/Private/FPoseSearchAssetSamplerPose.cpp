// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 4

// StaticStruct @ 14a895710

UScriptStruct * __cdecl FPoseSearchAssetSamplerPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchAssetSamplerPose,(UObject *)pUVar1,
                         L"PoseSearchAssetSamplerPose");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerPose.OuterSingleton;
}

// FPoseSearchAssetSamplerPose @ 14a8abcc0

FPoseSearchAssetSamplerPose * __thiscall
FPoseSearchAssetSamplerPose::FPoseSearchAssetSamplerPose(FPoseSearchAssetSamplerPose *this)

{
  *&(this->RootTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&this->Pose = 0;
  *(undefined8 *)&(this->Pose).field_0x8 = 0;
  *(undefined8 *)&(this->Pose).field_0x10 = 0;
  *(undefined8 *)&this->Curve = 0;
  *(undefined8 *)&(this->Curve).field_0x8 = 0;
  (this->Curve).field_0x10 = 0;
  *(undefined8 *)&(this->Curve).field_0x18 = 0;
  *(undefined8 *)&(this->ComponentSpacePose).Pose = 0;
  *(undefined8 *)&(this->ComponentSpacePose).Pose.field_0x8 = 0;
  *(undefined8 *)&(this->ComponentSpacePose).Pose.field_0x10 = 0;
  *(undefined8 *)&(this->ComponentSpacePose).ComponentSpaceFlags = 0;
  *(undefined8 *)&(this->ComponentSpacePose).ComponentSpaceFlags.field_0x8 = 0;
  *(undefined8 *)&(this->ComponentSpacePose).BoneMask = 0;
  *(undefined8 *)&(this->ComponentSpacePose).BoneMask.field_0x8 = 0;
  (this->ComponentSpacePose).BonesToConvert.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentSpacePose).BonesToConvert.ArrayNum = 0;
  (this->ComponentSpacePose).BonesToConvert.ArrayMax = 0;
  return this;
}

// ~FPoseSearchAssetSamplerPose @ 14a8adb00

void __thiscall
FPoseSearchAssetSamplerPose::~FPoseSearchAssetSamplerPose(FPoseSearchAssetSamplerPose *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ComponentSpacePose).BonesToConvert.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ComponentSpacePose).BoneMask;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->ComponentSpacePose).ComponentSpaceFlags;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->ComponentSpacePose).Pose;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  if (*(void **)&this->Curve != (void *)0x0) {
    FMemory::Free(*(void **)&this->Curve);
  }
  if (*(void **)&this->Pose != (void *)0x0) {
    FMemory::Free(*(void **)&this->Pose);
    return;
  }
  return;
}

// operator= @ 14a8aed30

FPoseSearchAssetSamplerPose * __thiscall
FPoseSearchAssetSamplerPose::operator=
          (FPoseSearchAssetSamplerPose *this,FPoseSearchAssetSamplerPose *param_1)

{
  FCompactHeapPose *pFVar1;
  FCompactHeapPose *pFVar2;
  FBlendedHeapCurve *pFVar3;
  FBlendedHeapCurve *pFVar4;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *pTVar5
  ;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *pTVar6
  ;
  FCSPose<FCompactHeapPose> *pFVar7;
  FCSPose<FCompactHeapPose> *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar12;
  
  dVar10 = (param_1->RootTransform).Rotation.XY.m128d_f64[1];
  pFVar1 = &param_1->Pose;
  pFVar2 = &this->Pose;
  (this->RootTransform).Rotation.XY.m128d_f64[0] = (param_1->RootTransform).Rotation.XY.m128d_f64[0]
  ;
  (this->RootTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootTransform).Rotation.ZW.m128d_f64[1];
  (this->RootTransform).Rotation.ZW.m128d_f64[0] = (param_1->RootTransform).Rotation.ZW.m128d_f64[0]
  ;
  (this->RootTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootTransform).Translation.XY.m128d_f64[1];
  (this->RootTransform).Translation.XY.m128d_f64[0] =
       (param_1->RootTransform).Translation.XY.m128d_f64[0];
  (this->RootTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootTransform).Translation.ZW.m128d_f64[1];
  (this->RootTransform).Translation.ZW.m128d_f64[0] =
       (param_1->RootTransform).Translation.ZW.m128d_f64[0];
  (this->RootTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootTransform).Scale3D.XY.m128d_f64[1];
  (this->RootTransform).Scale3D.XY.m128d_f64[0] = (param_1->RootTransform).Scale3D.XY.m128d_f64[0];
  (this->RootTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootTransform).Scale3D.ZW.m128d_f64[1];
  (this->RootTransform).Scale3D.ZW.m128d_f64[0] = (param_1->RootTransform).Scale3D.ZW.m128d_f64[0];
  (this->RootTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  if (pFVar2 != pFVar1) {
    if (*(void **)pFVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar2);
    }
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar1;
    *(undefined8 *)pFVar1 = 0;
    *(undefined4 *)&(this->Pose).field_0x8 = *(undefined4 *)&(param_1->Pose).field_0x8;
    *(undefined4 *)&(this->Pose).field_0xc = *(undefined4 *)&(param_1->Pose).field_0xc;
    *(undefined8 *)&(param_1->Pose).field_0x8 = 0;
  }
  pFVar3 = &param_1->Curve;
  *(undefined8 *)&(this->Pose).field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
  pFVar4 = &this->Curve;
  if (pFVar4 != pFVar3) {
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
    *(undefined8 *)pFVar3 = 0;
    *(undefined4 *)&(this->Curve).field_0x8 = *(undefined4 *)&(param_1->Curve).field_0x8;
    *(undefined4 *)&(this->Curve).field_0xc = *(undefined4 *)&(param_1->Curve).field_0xc;
    *(undefined8 *)&(param_1->Curve).field_0x8 = 0;
  }
  (this->Curve).field_0x10 = (param_1->Curve).field_0x10;
  pFVar7 = &param_1->ComponentSpacePose;
  *(undefined8 *)&(this->Curve).field_0x18 = *(undefined8 *)&(param_1->Curve).field_0x18;
  pFVar8 = &this->ComponentSpacePose;
  if (pFVar8 != pFVar7) {
    if (*(void **)&pFVar8->Pose != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar8->Pose);
    }
    *(undefined8 *)&pFVar8->Pose = *(undefined8 *)&pFVar7->Pose;
    *(undefined8 *)&pFVar7->Pose = 0;
    *(undefined4 *)&(this->ComponentSpacePose).Pose.field_0x8 =
         *(undefined4 *)&(param_1->ComponentSpacePose).Pose.field_0x8;
    *(undefined4 *)&(this->ComponentSpacePose).Pose.field_0xc =
         *(undefined4 *)&(param_1->ComponentSpacePose).Pose.field_0xc;
    *(undefined8 *)&(param_1->ComponentSpacePose).Pose.field_0x8 = 0;
  }
  pTVar5 = &(param_1->ComponentSpacePose).ComponentSpaceFlags;
  pTVar6 = &(this->ComponentSpacePose).ComponentSpaceFlags;
  *(undefined8 *)&(this->ComponentSpacePose).Pose.field_0x10 =
       *(undefined8 *)&(param_1->ComponentSpacePose).Pose.field_0x10;
  if (pTVar6 != pTVar5) {
    if (*(void **)pTVar6 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar6);
    }
    *(undefined8 *)pTVar6 = *(undefined8 *)pTVar5;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->ComponentSpacePose).ComponentSpaceFlags.field_0x8 =
         *(undefined4 *)&(param_1->ComponentSpacePose).ComponentSpaceFlags.field_0x8;
    *(undefined4 *)&(this->ComponentSpacePose).ComponentSpaceFlags.field_0xc =
         *(undefined4 *)&(param_1->ComponentSpacePose).ComponentSpaceFlags.field_0xc;
    *(undefined8 *)&(param_1->ComponentSpacePose).ComponentSpaceFlags.field_0x8 = 0;
  }
  pTVar5 = &(param_1->ComponentSpacePose).BoneMask;
  pTVar6 = &(this->ComponentSpacePose).BoneMask;
  if (pTVar6 != pTVar5) {
    if (*(void **)pTVar6 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar6);
    }
    *(undefined8 *)pTVar6 = *(undefined8 *)pTVar5;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->ComponentSpacePose).BoneMask.field_0x8 =
         *(undefined4 *)&(param_1->ComponentSpacePose).BoneMask.field_0x8;
    *(undefined4 *)&(this->ComponentSpacePose).BoneMask.field_0xc =
         *(undefined4 *)&(param_1->ComponentSpacePose).BoneMask.field_0xc;
    *(undefined8 *)&(param_1->ComponentSpacePose).BoneMask.field_0x8 = 0;
  }
  pTVar11 = &(param_1->ComponentSpacePose).BonesToConvert;
  pTVar12 = &(this->ComponentSpacePose).BonesToConvert;
  if (pTVar12 != pTVar11) {
    pFVar9 = (pTVar12->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ComponentSpacePose).BonesToConvert.ArrayNum =
         (param_1->ComponentSpacePose).BonesToConvert.ArrayNum;
    (this->ComponentSpacePose).BonesToConvert.ArrayMax =
         (param_1->ComponentSpacePose).BonesToConvert.ArrayMax;
    (param_1->ComponentSpacePose).BonesToConvert.ArrayNum = 0;
    (param_1->ComponentSpacePose).BonesToConvert.ArrayMax = 0;
  }
  return this;
}

