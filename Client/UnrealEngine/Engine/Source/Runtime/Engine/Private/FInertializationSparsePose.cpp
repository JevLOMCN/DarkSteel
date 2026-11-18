// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FInertializationSparsePose @ 1474b30d0

FInertializationSparsePose * __thiscall
FInertializationSparsePose::FInertializationSparsePose(FInertializationSparsePose *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bHasRootMotion = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RootMotionDelta).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RootMotionDelta).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionDelta).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionDelta).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RootMotionDelta).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RootMotionDelta).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionDelta).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionDelta).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RootMotionDelta).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RootMotionDelta).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RootMotionDelta).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootMotionDelta).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  (this->BoneIndices).ArrayMax = 0;
  (this->BoneTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTranslations).ArrayNum = 0;
  (this->BoneTranslations).ArrayMax = 0;
  (this->BoneRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneRotations).ArrayNum = 0;
  (this->BoneRotations).ArrayMax = 0;
  (this->BoneScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneScales).ArrayNum = 0;
  (this->BoneScales).ArrayMax = 0;
  *(undefined8 *)&(this->Curves).BlendedCurve = 0;
  *(undefined8 *)&(this->Curves).BlendedCurve.field_0x8 = 0;
  (this->Curves).BlendedCurve.field_0x10 = 0;
  *(undefined8 *)&(this->Curves).BlendedCurve.field_0x18 = 0;
  (this->Curves).CurveUIDToArrayIndexLUT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).CurveUIDToArrayIndexLUT.ArrayNum = 0;
  (this->Curves).CurveUIDToArrayIndexLUT.ArrayMax = 0;
  (this->AttachParentName).ComparisonIndex = 0;
  (this->AttachParentName).Number = 0;
  this->DeltaTime = 0.0;
  return this;
}

// ~FInertializationSparsePose @ 1474b5240

void __thiscall
FInertializationSparsePose::~FInertializationSparsePose(FInertializationSparsePose *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Curves).CurveUIDToArrayIndexLUT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Curves).BlendedCurve;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->BoneScales).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneRotations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneTranslations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1474b6a60

FInertializationSparsePose * __thiscall
FInertializationSparsePose::operator=
          (FInertializationSparsePose *this,FInertializationSparsePose *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->ComponentTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTransform).Translation.XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->bHasRootMotion = param_1->bHasRootMotion;
  dVar1 = (param_1->RootMotionDelta).Rotation.XY.m128d_f64[1];
  (this->RootMotionDelta).Rotation.XY.m128d_f64[0] =
       (param_1->RootMotionDelta).Rotation.XY.m128d_f64[0];
  (this->RootMotionDelta).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionDelta).Rotation.ZW.m128d_f64[1];
  (this->RootMotionDelta).Rotation.ZW.m128d_f64[0] =
       (param_1->RootMotionDelta).Rotation.ZW.m128d_f64[0];
  (this->RootMotionDelta).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionDelta).Translation.XY.m128d_f64[1];
  (this->RootMotionDelta).Translation.XY.m128d_f64[0] =
       (param_1->RootMotionDelta).Translation.XY.m128d_f64[0];
  (this->RootMotionDelta).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionDelta).Translation.ZW.m128d_f64[1];
  (this->RootMotionDelta).Translation.ZW.m128d_f64[0] =
       (param_1->RootMotionDelta).Translation.ZW.m128d_f64[0];
  (this->RootMotionDelta).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionDelta).Scale3D.XY.m128d_f64[1];
  (this->RootMotionDelta).Scale3D.XY.m128d_f64[0] =
       (param_1->RootMotionDelta).Scale3D.XY.m128d_f64[0];
  (this->RootMotionDelta).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootMotionDelta).Scale3D.ZW.m128d_f64[1];
  (this->RootMotionDelta).Scale3D.ZW.m128d_f64[0] =
       (param_1->RootMotionDelta).Scale3D.ZW.m128d_f64[0];
  (this->RootMotionDelta).Scale3D.ZW.m128d_f64[1] = dVar1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->BoneIndices,&param_1->BoneIndices);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneTranslations,&param_1->BoneTranslations);
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneRotations,&param_1->BoneRotations);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneScales,&param_1->BoneScales);
  TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)&this->Curves,
             (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)&param_1->Curves);
  (this->Curves).BlendedCurve.field_0x10 = (param_1->Curves).BlendedCurve.field_0x10;
  this->AttachParentName = param_1->AttachParentName;
  this->DeltaTime = param_1->DeltaTime;
  return this;
}

// Empty @ 1474cc6a0

void __thiscall FInertializationSparsePose::Empty(FInertializationSparsePose *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  
  piVar1 = &(this->BoneIndices).ArrayMax;
  (this->BoneIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneIndices).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneTranslations).ArrayMax;
  (this->BoneTranslations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->BoneTranslations).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneRotations).ArrayMax;
  (this->BoneRotations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->BoneRotations).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneScales).ArrayMax;
  (this->BoneScales).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->BoneScales).AllocatorInstance,0,piVar1);
  }
  puVar2 = &(this->Curves).BlendedCurve.field_0xc;
  iVar3 = *(int *)puVar2;
  *(undefined4 *)&(this->Curves).BlendedCurve.field_0x8 = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->Curves,0,(int *)puVar2);
  }
  (this->Curves).BlendedCurve.field_0x10 = 0;
  return;
}

// InitFrom @ 1474e7690

void __thiscall
FInertializationSparsePose::InitFrom
          (FInertializationSparsePose *this,FCompactPose *param_1,FBlendedCurve *param_2,
          FStackAttributeContainer *param_3,TTransform<double> *param_4,FName param_5,float param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  longlong lVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  UObject *pUVar23;
  IAnimRootMotionProvider *pIVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  int local_118 [2];
  longlong local_110;
  int *local_108;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_100;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *local_f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  local_110 = *(longlong *)&param_1->field_0x10;
  pUVar23 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_110 + 0x40));
  if ((pUVar23 == (UObject *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SkeletonAsset",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                          ,0x57,L""), bVar20)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_118[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&this->BoneIndices,local_118,*(int *)&pUVar23[2].field_0x20);
  lVar19 = local_110;
  iVar26 = 0;
  uVar4 = *(uint *)&param_1->field_0x8;
  uVar25 = 0;
  if (uVar4 != 0) {
    lVar29 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar25 < *(int *)(lVar19 + 0x78)) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar21 = *(uint *)(lVar29 + *(longlong *)(lVar19 + 0x70));
      if (uVar21 != 0xffffffff) {
        uVar22 = 0;
        if ((int)uVar21 < (this->BoneIndices).ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)((this->BoneIndices).AllocatorInstance.Data + (longlong)(int)uVar21 * 4) = iVar26;
        iVar26 = iVar26 + 1;
      }
      uVar25 = uVar25 + 1;
      lVar29 = lVar29 + 4;
    } while (uVar25 != uVar4);
  }
  local_108 = (int *)&param_1->field_0x8;
  local_100 = &this->BoneTranslations;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            (local_100,&UE::Math::TVector<double>::ZeroVector,iVar26);
  local_f8 = &this->BoneRotations;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::Init
            (local_f8,&UE::Math::TQuat<double>::Identity,iVar26);
  local_f0 = &this->BoneScales;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            (local_f0,&UE::Math::TVector<double>::OneVector,iVar26);
  lVar19 = local_110;
  uVar4 = *(uint *)&param_1->field_0x8;
  uVar25 = 0;
  if (uVar4 != 0) {
    local_e0 = 0;
    local_e8 = 0;
    do {
      lVar28 = local_e0;
      lVar29 = local_e8;
      uVar21 = 0;
      if ((int)uVar25 < *(int *)(lVar19 + 0x78)) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar21 = *(uint *)(lVar29 + *(longlong *)(lVar19 + 0x70));
      if (uVar21 != 0xffffffff) {
        uVar22 = 0;
        if ((int)uVar21 < (this->BoneIndices).ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
        lVar29 = (longlong)(int)uVar21;
        if ((uVar21 == 0xffffffff) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InertializationBoneIndex != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                                ,0x4f3,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar22 = 0;
        if ((int)uVar25 < *local_108) {
          uVar22 = ~uVar25 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)param_1;
        uVar3 = *(undefined8 *)(lVar28 + 0x30 + lVar5);
        puVar2 = (undefined8 *)(lVar28 + 0x20 + lVar5);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        uVar11 = *(undefined8 *)(lVar28 + lVar5);
        uVar12 = ((undefined8 *)(lVar28 + lVar5))[1];
        puVar2 = (undefined8 *)(lVar28 + 0x10 + lVar5);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        puVar2 = (undefined8 *)(lVar28 + 0x40 + lVar5);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar8 = *(undefined8 *)(lVar28 + 0x50 + lVar5);
        uVar27 = ~uVar21 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar21 < local_100->ArrayNum) {
          uVar22 = uVar27;
        }
        local_d8 = uVar9;
        uStack_d0 = uVar10;
        local_c8 = uVar3;
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (local_100->AllocatorInstance).Data;
        pFVar1 = pFVar6 + lVar29 * 0x18;
        *(undefined8 *)pFVar1 = uVar9;
        *(undefined8 *)(pFVar1 + 8) = uVar10;
        *(undefined8 *)(pFVar6 + lVar29 * 0x18 + 0x10) = uVar3;
        uVar22 = 0;
        if ((int)uVar21 < local_f8->ArrayNum) {
          uVar22 = uVar27;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (local_f8->AllocatorInstance).Data;
        pFVar1 = pFVar6 + lVar29 * 0x20;
        *(undefined8 *)pFVar1 = uVar11;
        *(undefined8 *)(pFVar1 + 8) = uVar12;
        pFVar6 = pFVar6 + lVar29 * 0x20 + 0x10;
        *(undefined8 *)pFVar6 = uVar13;
        *(undefined8 *)(pFVar6 + 8) = uVar14;
        uVar22 = 0;
        if ((int)uVar21 < local_f0->ArrayNum) {
          uVar22 = uVar27;
        }
        local_c0 = uVar15;
        uStack_b8 = uVar16;
        local_b0 = uVar8;
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (local_f0->AllocatorInstance).Data;
        pFVar1 = pFVar6 + lVar29 * 0x18;
        *(undefined8 *)pFVar1 = uVar15;
        *(undefined8 *)(pFVar1 + 8) = uVar16;
        *(undefined8 *)(pFVar6 + lVar29 * 0x18 + 0x10) = uVar8;
        lVar28 = local_e0;
      }
      local_e0 = lVar28 + 0x60;
      local_e8 = local_e8 + 4;
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar4);
  }
  this->bHasRootMotion = false;
  *&(this->RootMotionDelta).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootMotionDelta).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootMotionDelta).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootMotionDelta).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootMotionDelta).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootMotionDelta).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pIVar24 = UE::Anim::IAnimRootMotionProvider::Get();
  if (pIVar24 != (IAnimRootMotionProvider *)0x0) {
    bVar20 = (bool)(**(code **)((longlong)*pIVar24 + 0x20))(pIVar24,param_3,&this->RootMotionDelta);
    this->bHasRootMotion = bVar20;
  }
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
  CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
            ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)&this->Curves,
             (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2);
  dVar17 = (param_4->Rotation).XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_4->Rotation).ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_4->Translation).XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_4->Translation).ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_4->Scale3D).XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_4->Scale3D).ZW.m128d_f64[0];
  dVar18 = (param_4->Scale3D).ZW.m128d_f64[1];
  this->AttachParentName = param_5;
  this->DeltaTime = param_6;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = dVar17;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar18;
  return;
}

// IsEmpty @ 1474e9d60

bool __thiscall FInertializationSparsePose::IsEmpty(FInertializationSparsePose *this)

{
  return (this->BoneIndices).ArrayNum == 0;
}

