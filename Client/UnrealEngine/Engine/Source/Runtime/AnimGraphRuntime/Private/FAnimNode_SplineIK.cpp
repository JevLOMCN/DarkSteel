// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 20

// StaticStruct @ 1463e9f40

UScriptStruct * __cdecl FAnimNode_SplineIK::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SplineIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SplineIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SplineIK,(UObject *)pUVar1,
                         L"AnimNode_SplineIK");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SplineIK.OuterSingleton;
}

// FAnimNode_SplineIK @ 146405b00

FAnimNode_SplineIK * __thiscall FAnimNode_SplineIK::FAnimNode_SplineIK(FAnimNode_SplineIK *this)

{
  undefined1 *puVar1;
  float fVar2;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  fVar2 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_SplineIK__6B_;
  (this->StartBone).BoneName.ComparisonIndex = 0;
  (this->StartBone).BoneName.Number = 0;
  puVar1 = &(this->StartBone).field_0x8;
  (this->StartBone).BoneIndex = -1;
  (this->StartBone).bUseSkeletonIndex = 0;
  (this->StartBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->EndBone).BoneName.ComparisonIndex = 0;
  (this->EndBone).BoneName.Number = 0;
  puVar1 = &(this->EndBone).field_0x8;
  (this->EndBone).BoneIndex = -1;
  (this->EndBone).bUseSkeletonIndex = 0;
  (this->EndBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->BoneAxis = X;
  this->bAutoCalculateSpline = true;
  this->PointCount = 2;
  (this->ControlPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPoints).ArrayNum = 0;
  (this->ControlPoints).ArrayMax = 0;
  this->Roll = 0.0;
  this->TwistStart = 0.0;
  this->TwistEnd = 0.0;
  FAlphaBlend::FAlphaBlend(&this->TwistBlend,fVar2);
  this->Stretch = 0.0;
  this->Offset = 0.0;
  *(undefined8 *)&(this->TransformedSpline).Position = 0;
  *(undefined8 *)&(this->TransformedSpline).Position.field_0x8 = 0;
  (this->TransformedSpline).Position.field_0x10 = 0;
  *(undefined4 *)&(this->TransformedSpline).Position.field_0x14 = 0;
  *(undefined8 *)&(this->TransformedSpline).Rotation = 0;
  *(undefined8 *)&(this->TransformedSpline).Rotation.field_0x8 = 0;
  (this->TransformedSpline).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->TransformedSpline).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->TransformedSpline).Scale = 0;
  *(undefined8 *)&(this->TransformedSpline).Scale.field_0x8 = 0;
  (this->TransformedSpline).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->TransformedSpline).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->TransformedSpline).ReparamTable = 0;
  *(undefined8 *)&(this->TransformedSpline).ReparamTable.field_0x8 = 0;
  (this->TransformedSpline).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->TransformedSpline).ReparamTable.field_0x14 = 0;
  (this->TransformedSpline).Version = 0xffffffff;
  (this->LinearApproximation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearApproximation).ArrayNum = 0;
  (this->LinearApproximation).ArrayMax = 0;
  *(undefined8 *)&(this->BoneSpline).Position = 0;
  *(undefined8 *)&(this->BoneSpline).Position.field_0x8 = 0;
  (this->BoneSpline).Position.field_0x10 = 0;
  *(undefined4 *)&(this->BoneSpline).Position.field_0x14 = 0;
  *(undefined8 *)&(this->BoneSpline).Rotation = 0;
  *(undefined8 *)&(this->BoneSpline).Rotation.field_0x8 = 0;
  (this->BoneSpline).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->BoneSpline).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->BoneSpline).Scale = 0;
  *(undefined8 *)&(this->BoneSpline).Scale.field_0x8 = 0;
  (this->BoneSpline).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->BoneSpline).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->BoneSpline).ReparamTable = 0;
  *(undefined8 *)&(this->BoneSpline).ReparamTable.field_0x8 = 0;
  (this->BoneSpline).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->BoneSpline).ReparamTable.field_0x14 = 0;
  (this->BoneSpline).Version = 0xffffffff;
  this->OriginalSplineLength = 0.0;
  (this->CachedBoneReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedBoneReferences).ArrayNum = 0;
  (this->CachedBoneReferences).ArrayMax = 0;
  (this->CachedBoneLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedBoneLengths).ArrayNum = 0;
  (this->CachedBoneLengths).ArrayMax = 0;
  (this->CachedOffsetRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedOffsetRotations).ArrayNum = 0;
  (this->CachedOffsetRotations).ArrayMax = 0;
  return this;
}

// ~FAnimNode_SplineIK @ 146408ff0

void __thiscall FAnimNode_SplineIK::~FAnimNode_SplineIK(FAnimNode_SplineIK *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CachedOffsetRotations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedBoneLengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedBoneReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->BoneSpline).ReparamTable;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->BoneSpline).Scale;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->BoneSpline).Rotation;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->BoneSpline).Position;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->LinearApproximation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TransformedSpline).ReparamTable;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TransformedSpline).Scale;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TransformedSpline).Rotation;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TransformedSpline).Position;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ControlPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// BuildBoneSpline @ 146416bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_SplineIK::BuildBoneSpline(FAnimNode_SplineIK *this,FReferenceSkeleton *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  FSplineCurves *this_00;
  FInterpCurveVector *pFVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined4 *puVar7;
  double *pdVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  TVector<double> *this_01;
  TQuat<double> *pTVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  TQuat<double> *pTVar32;
  int *piVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  FScriptContainerElement *pFVar39;
  int *piVar40;
  FInterpCurveQuat *pFVar41;
  ulonglong uVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  double dVar55;
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 in_XMM4 [16];
  float fVar58;
  float fVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  double dVar64;
  double dVar65;
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  float local_3c8 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_3c0;
  int local_3b0;
  int local_3ac;
  undefined1 local_3a8 [16];
  double local_398;
  undefined1 local_390 [16];
  double local_380;
  float local_378;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  longlong local_348;
  int *local_340;
  double local_338;
  double dStack_330;
  undefined8 local_328;
  double local_320;
  double dStack_318;
  undefined8 local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  int *local_2e8;
  int *local_2e0;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_2d8;
  TVector<double>_u_0 local_2c8;
  double local_2b0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  double local_278;
  double local_270;
  TQuat<double> local_268;
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined1 local_1e0 [16];
  double local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined1 local_1b0 [16];
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  TVector<double> local_138;
  TQuat<double> local_118;
  TQuat<double> local_f8 [6];
  
  if (0 < (this->CachedBoneReferences).ArrayNum) {
    iVar23 = (param_1->FinalRefBonePose).ArrayNum;
    uVar36 = 0;
    local_2d8.DataPtr = (TTransform<double> *)(param_1->FinalRefBonePose).AllocatorInstance.Data;
    local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c0.ArrayNum = 0;
    local_3c0.ArrayMax = 0;
    if ((iVar23 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar21)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_2d8.ArrayNum = iVar23;
    FAnimationRuntime::FillUpComponentSpaceTransforms(param_1,&local_2d8,&local_3c0);
    pTVar1 = &this->CachedBoneLengths;
    (this->CachedBoneLengths).ArrayNum = 0;
    if ((this->CachedBoneLengths).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,&(this->CachedBoneLengths).ArrayMax);
    }
    pTVar2 = &this->CachedOffsetRotations;
    (this->CachedOffsetRotations).ArrayNum = 0;
    if ((this->CachedOffsetRotations).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,0,&pTVar2->AllocatorInstance,0,&(this->CachedOffsetRotations).ArrayMax);
    }
    uVar70 = SUB84(__real_3ff0000000000000,0);
    uVar71 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar35 = uVar36;
    dVar64 = __real_3e45798ee0000000;
    if (0 < (this->CachedBoneReferences).ArrayNum) {
      do {
        dVar43 = 0.0;
        local_308 = UE::Math::TQuat<double>::Identity.X;
        dStack_300 = UE::Math::TQuat<double>::Identity.Y;
        local_2f8 = UE::Math::TQuat<double>::Identity.Z;
        dStack_2f0 = UE::Math::TQuat<double>::Identity.W;
        uVar26 = (uint)uVar36;
        if (0 < (int)uVar26) {
          uVar30 = 0;
          if ((int)uVar26 < (this->CachedBoneReferences).ArrayNum) {
            uVar30 = ~uVar26 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar30 = *(uint *)((this->CachedBoneReferences).AllocatorInstance.Data + uVar35 + 0x10);
          uVar25 = 0;
          if ((int)uVar30 < local_3c0.ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar39 = local_3c0.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x60;
          uVar30 = 0;
          if ((int)(uVar26 - 1) < (this->CachedBoneReferences).ArrayNum) {
            uVar30 = -uVar26 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar30 = *(uint *)((this->CachedBoneReferences).AllocatorInstance.Data + (uVar35 - 4));
          uVar25 = 0;
          if ((int)uVar30 < local_3c0.ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_168 = *(double *)(pFVar39 + 0x20);
          dStack_160 = *(double *)(pFVar39 + 0x28);
          local_158 = *(double *)(pFVar39 + 0x30);
          auVar61 = *(undefined1 (*) [16])pFVar39;
          dVar16 = *(double *)(pFVar39 + 0x10);
          dVar17 = *(double *)(pFVar39 + 0x18);
          local_150 = *(double *)
                       (local_3c0.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x60 + 0x20);
          dStack_148 = *(double *)
                        (local_3c0.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x60 + 0x20 + 8)
          ;
          local_140 = *(double *)
                       (local_3c0.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x60 + 0x30);
          dVar44 = local_168 - local_150;
          dVar14 = dStack_160 - dStack_148;
          dVar15 = local_158 - local_140;
          dVar55 = dVar14 * dVar14 + dVar44 * dVar44 + dVar15 * dVar15;
          dVar43 = SQRT(dVar55);
          this_01 = UE::Math::TMatrix<double>::GetScaledAxis
                              (&UE::Math::TMatrix<double>::Identity,&local_138,(uint)this->BoneAxis)
          ;
          UE::Math::TVector<double>::GetSafeNormal
                    (this_01,(TVector<double> *)&local_2c8._s_0,dVar64,
                     &UE::Math::TVector<double>::ZeroVector);
          dVar64 = __real_3e45798ee0000000;
          dVar49 = auVar61._0_8_;
          dVar65 = auVar61._8_8_;
          dVar12 = local_2c8._s_0.Z * dVar65 - local_2c8._s_0.Y * dVar16;
          dVar12 = dVar12 + dVar12;
          dVar53 = local_2c8._s_0.X * dVar16 - local_2c8._s_0.Z * dVar49;
          dVar53 = dVar53 + dVar53;
          dVar60 = local_2c8._s_0.Y * dVar49 - local_2c8._s_0.X * dVar65;
          dVar60 = dVar60 + dVar60;
          local_338 = (dVar60 * dVar65 - dVar53 * dVar16) + dVar12 * dVar17 + local_2c8._s_0.X;
          in_XMM4._8_8_ = 0.0;
          in_XMM4._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          dStack_330 = (dVar12 * dVar16 - dVar60 * dVar49) + dVar53 * dVar17 + local_2c8._s_0.Y;
          local_328 = (dVar53 * dVar49 - dVar12 * dVar65) + dVar60 * dVar17 + local_2c8._s_0.Z;
          dStack_318 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_320 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dVar12 = dStack_330 * dStack_330 + local_338 * local_338 +
                   (double)local_328 * (double)local_328;
          if (dVar12 == __real_3ff0000000000000) {
LAB_1464170d4:
          }
          else {
            if (__real_3e45798ee0000000 <= dVar12) {
              local_278 = __real_3ff0000000000000 / SQRT(dVar12);
              local_338 = local_338 * local_278;
              dStack_330 = dStack_330 * local_278;
              local_328 = (double)local_328 * local_278;
              goto LAB_1464170d4;
            }
            local_328 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            _local_338 = _local_320;
          }
          if (dVar55 == __real_3ff0000000000000) {
LAB_14641713e:
            dStack_318 = dVar14;
            local_320 = dVar44;
            local_310 = dVar15;
          }
          else {
            if (__real_3e45798ee0000000 <= dVar55) {
              local_270 = __real_3ff0000000000000 / SQRT(dVar55);
              dVar44 = dVar44 * local_270;
              dVar14 = dVar14 * local_270;
              dVar15 = dVar15 * local_270;
              goto LAB_14641713e;
            }
            local_310 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          pTVar27 = UE::Math::TQuat<double>::FindBetweenNormals
                              (&local_118,(TVector<double> *)&local_320,
                               (TVector<double> *)&local_338);
          local_308 = pTVar27->X;
          dStack_300 = pTVar27->Y;
          local_2f8 = pTVar27->Z;
          dStack_2f0 = pTVar27->W;
        }
        piVar40 = &(this->CachedBoneLengths).ArrayMax;
        piVar33 = &(this->CachedOffsetRotations).ArrayMax;
        pFVar39 = (pTVar1->AllocatorInstance).Data;
        local_3c8[0] = (float)dVar43;
        if (((pFVar39 <= (FScriptContainerElement *)local_3c8) &&
            ((FScriptContainerElement *)local_3c8 < pFVar39 + (longlong)*piVar40 * 4)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar23 = (this->CachedBoneLengths).ArrayNum;
        if (iVar23 == *piVar40) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar40);
        }
        (this->CachedBoneLengths).ArrayNum = iVar23 + 1;
        *(float *)((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_3c8[0];
        pFVar39 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar39 <= (FScriptContainerElement *)&local_308) &&
            ((FScriptContainerElement *)&local_308 < pFVar39 + (longlong)*piVar33 * 0x20)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar23 = (this->CachedOffsetRotations).ArrayNum;
        if (iVar23 == *piVar33) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1020,&pTVar2->AllocatorInstance,piVar33);
        }
        (this->CachedOffsetRotations).ArrayNum = iVar23 + 1;
        uVar36 = (ulonglong)(uVar26 + 1);
        uVar35 = uVar35 + 0x14;
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        pFVar39 = pFVar10 + (longlong)iVar23 * 0x20;
        *(double *)pFVar39 = local_308;
        *(double *)(pFVar39 + 8) = dStack_300;
        pFVar10 = pFVar10 + (longlong)iVar23 * 0x20 + 0x10;
        *(double *)pFVar10 = local_2f8;
        *(double *)(pFVar10 + 8) = dStack_2f0;
      } while ((int)(uVar26 + 1) < (this->CachedBoneReferences).ArrayNum);
      uVar70 = SUB84(__real_3ff0000000000000,0);
      uVar71 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    uVar36 = 0;
    puVar3 = &(this->BoneSpline).Position.field_0xc;
    *(undefined4 *)&(this->BoneSpline).Position.field_0x8 = 0;
    if (*(int *)puVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,(ForAnyElementType *)&this->BoneSpline,0,(int *)puVar3);
    }
    puVar3 = &(this->BoneSpline).Rotation.field_0xc;
    *(undefined4 *)&(this->BoneSpline).Rotation.field_0x8 = 0;
    if (*(int *)puVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,(ForAnyElementType *)&(this->BoneSpline).Rotation,0,(int *)puVar3);
    }
    puVar3 = &(this->BoneSpline).Scale.field_0xc;
    *(undefined4 *)&(this->BoneSpline).Scale.field_0x8 = 0;
    if (*(int *)puVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,(ForAnyElementType *)&(this->BoneSpline).Scale,0,(int *)puVar3);
    }
    pFVar41 = &(this->BoneSpline).Rotation;
    iVar23 = this->PointCount;
    if (this->PointCount < 2) {
      iVar23 = 2;
    }
    local_3ac = iVar23;
    if ((this->bAutoCalculateSpline == false) && (iVar23 != (this->CachedBoneReferences).ArrayNum))
    {
      this_00 = &this->TransformedSpline;
      iVar9 = *(int *)&(this->TransformedSpline).Position.field_0xc;
      local_2e8 = (int *)&(this->TransformedSpline).Position.field_0xc;
      *(undefined4 *)&(this->TransformedSpline).Position.field_0x8 = 0;
      if (iVar9 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)this_00,0,local_2e8);
      }
      local_340 = (int *)&(this->TransformedSpline).Rotation.field_0xc;
      *(undefined4 *)&(this->TransformedSpline).Rotation.field_0x8 = 0;
      if (*local_340 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,0,(ForAnyElementType *)&(this->TransformedSpline).Rotation,0,local_340)
        ;
      }
      pFVar4 = &(this->TransformedSpline).Scale;
      iVar9 = *(int *)&(this->TransformedSpline).Scale.field_0xc;
      local_2e0 = (int *)&(this->TransformedSpline).Scale.field_0xc;
      *(undefined4 *)&(this->TransformedSpline).Scale.field_0x8 = 0;
      if (iVar9 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)pFVar4,0,local_2e0);
      }
      fVar66 = __real_3f800000;
      iVar9 = (this->CachedBoneReferences).ArrayNum;
      if (0 < iVar9) {
        fVar69 = __real_3f800000 / (float)(iVar9 + -1);
        uVar35 = uVar36;
        do {
          uVar30 = (uint)uVar35;
          uVar26 = 0;
          if ((int)uVar30 < (this->CachedBoneReferences).ArrayNum) {
            uVar26 = ~uVar30 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar26 = *(uint *)((this->CachedBoneReferences).AllocatorInstance.Data + uVar36 + 0x10);
          fVar63 = (float)(int)uVar30 * fVar69;
          uVar25 = 0;
          if ((int)uVar26 < local_3c0.ArrayNum) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVar20.Data = local_3c0.AllocatorInstance.Data;
          iVar23 = *(int *)&(this->TransformedSpline).Position.field_0x8;
          lVar31 = (longlong)(int)uVar26 * 0x60;
          uVar68 = *(undefined8 *)(local_3c0.AllocatorInstance.Data + lVar31 + 0x20);
          uVar18 = *(undefined8 *)(local_3c0.AllocatorInstance.Data + lVar31 + 0x20 + 8);
          uVar67 = *(undefined8 *)(local_3c0.AllocatorInstance.Data + lVar31 + 0x30);
          local_228 = uVar68;
          uStack_220 = uVar18;
          local_218 = uVar67;
          if (iVar23 == *(int *)&(this->TransformedSpline).Position.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,(ForAnyElementType *)this_00,
                                (int *)&(this->TransformedSpline).Position.field_0xc);
          }
          *(int *)&(this->TransformedSpline).Position.field_0x8 = iVar23 + 1;
          lVar28 = (longlong)iVar23 * 0x58;
          lVar29 = *(longlong *)&this_00->Position;
          puVar5 = (undefined8 *)(lVar28 + 8 + lVar29);
          *puVar5 = uVar68;
          puVar5[1] = uVar18;
          *(undefined8 *)(lVar28 + 0x18 + lVar29) = uVar67;
          *(float *)(lVar28 + lVar29) = fVar63;
          uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar28 + 0x20 + lVar29);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar67;
          *(double *)(lVar28 + 0x30 + lVar29) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar28 + 0x38 + lVar29);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar67;
          *(double *)(lVar28 + 0x48 + lVar29) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          *(undefined1 *)(lVar28 + 0x50 + lVar29) = 1;
          iVar23 = *(int *)&(this->TransformedSpline).Rotation.field_0x8;
          uVar67 = *(undefined8 *)(FVar20.Data + lVar31);
          uVar68 = *(undefined8 *)(FVar20.Data + lVar31 + 8);
          uVar18 = *(undefined8 *)(FVar20.Data + lVar31 + 0x10);
          uVar19 = *(undefined8 *)(FVar20.Data + lVar31 + 0x10 + 8);
          if (iVar23 == *(int *)&(this->TransformedSpline).Rotation.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1080,(ForAnyElementType *)&(this->TransformedSpline).Rotation,
                                local_340);
          }
          *(int *)&(this->TransformedSpline).Rotation.field_0x8 = iVar23 + 1;
          lVar29 = *(longlong *)&(this->TransformedSpline).Rotation;
          lVar28 = (longlong)iVar23 * 0x80;
          *(float *)(lVar28 + lVar29) = fVar63;
          puVar5 = (undefined8 *)(lVar28 + 0x10 + lVar29);
          *puVar5 = uVar67;
          puVar5[1] = uVar68;
          puVar5 = (undefined8 *)(lVar28 + 0x20 + lVar29);
          *puVar5 = uVar18;
          puVar5[1] = uVar19;
          dVar64 = UE::Math::TQuat<double>::Identity.Y;
          pdVar6 = (double *)(lVar28 + 0x30 + lVar29);
          *pdVar6 = UE::Math::TQuat<double>::Identity.X;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.W;
          pdVar6 = (double *)(lVar28 + 0x40 + lVar29);
          *pdVar6 = UE::Math::TQuat<double>::Identity.Z;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.Y;
          pdVar6 = (double *)(lVar28 + 0x50 + lVar29);
          *pdVar6 = UE::Math::TQuat<double>::Identity.X;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.W;
          pdVar6 = (double *)(lVar28 + 0x60 + lVar29);
          *pdVar6 = UE::Math::TQuat<double>::Identity.Z;
          pdVar6[1] = dVar64;
          *(undefined1 *)(lVar28 + 0x70 + lVar29) = 0;
          uVar68 = *(undefined8 *)(FVar20.Data + lVar31 + 0x40);
          uVar18 = *(undefined8 *)(FVar20.Data + lVar31 + 0x40 + 8);
          uVar67 = *(undefined8 *)(FVar20.Data + lVar31 + 0x50);
          iVar23 = *(int *)&(this->TransformedSpline).Scale.field_0x8;
          local_210 = uVar68;
          uStack_208 = uVar18;
          local_200 = uVar67;
          if (iVar23 == *(int *)&(this->TransformedSpline).Scale.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,(ForAnyElementType *)pFVar4,
                                (int *)&(this->TransformedSpline).Scale.field_0xc);
          }
          uVar35 = (ulonglong)(uVar30 + 1);
          *(int *)&(this->TransformedSpline).Scale.field_0x8 = iVar23 + 1;
          uVar36 = uVar36 + 0x14;
          lVar29 = (longlong)iVar23 * 0x58;
          lVar31 = *(longlong *)pFVar4;
          puVar5 = (undefined8 *)(lVar31 + lVar29 + 8);
          *puVar5 = uVar68;
          puVar5[1] = uVar18;
          *(undefined8 *)(lVar31 + lVar29 + 0x18) = uVar67;
          *(float *)(lVar31 + lVar29) = fVar63;
          uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar31 + lVar29 + 0x20);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar67;
          *(double *)(lVar31 + lVar29 + 0x30) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar31 + lVar29 + 0x38);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar67;
          *(double *)(lVar31 + lVar29 + 0x48) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          *(undefined1 *)(lVar31 + lVar29 + 0x50) = 1;
          iVar23 = local_3ac;
        } while ((int)(uVar30 + 1) < (this->CachedBoneReferences).ArrayNum);
      }
      dVar43 = _UNK_150689688;
      dVar64 = ___xmm_3ff00000000000003ff0000000000000;
      local_2a8._s_0.Z = (double)CONCAT44(uVar71,uVar70);
      local_2a8._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_2a8._s_0.Y = _UNK_150689688;
      FSplineCurves::UpdateSpline
                (this_00,false,false,10,false,0.0,(TVector<double> *)&local_2a8._s_0);
      local_3b0 = 0;
      if (0 < iVar23) {
        local_378 = fVar66 / (float)(iVar23 + -1);
        fVar69 = __real_40400000;
        uVar67 = ___xmm_3ff00000000000000000000000000000;
        uVar68 = _UNK_15061cbc8;
        do {
          uVar25 = 0;
          uVar30 = *(uint *)&(this->TransformedSpline).Position.field_0x8;
          fVar63 = (float)local_3b0;
          uVar26 = uVar30 - 1;
          fVar74 = local_378 * fVar63;
          if (uVar30 == 0) {
            local_398 = 0.0;
            dVar64 = 0.0;
            dVar43 = 0.0;
          }
          else {
            iVar23 = _isnan((double)fVar74);
            if (iVar23 == 0) {
              uVar34 = FInterpCurve<UE::Math::TVector<double>_>::GetPointIndexForInputValue
                                 ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,fVar74);
              lVar31 = (longlong)(int)uVar34;
              if (uVar34 == 0xffffffff) {
LAB_146417821:
                if ((*(int *)&(this->TransformedSpline).Position.field_0x8 < 1) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar31 = *(longlong *)&this_00->Position;
                uVar70 = *(undefined4 *)(lVar31 + 8);
                uVar71 = *(undefined4 *)(lVar31 + 0xc);
                uVar72 = *(undefined4 *)(lVar31 + 0x10);
                uVar73 = *(undefined4 *)(lVar31 + 0x14);
                local_398 = *(double *)(lVar31 + 0x18);
              }
              else {
                if (uVar34 == uVar26) {
                  iVar23 = *(int *)&(this->TransformedSpline).Position.field_0x8;
                  if ((this->TransformedSpline).Position.field_0x10 != '\0') {
                    uVar24 = 0;
                    if ((int)uVar26 < iVar23) {
                      uVar24 = ~uVar26 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar21)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    if (*(float *)((longlong)(int)uVar26 * 0x58 + *(longlong *)&this_00->Position) +
                        *(float *)&(this->TransformedSpline).Position.field_0x14 <= fVar74)
                    goto LAB_146417821;
                    goto LAB_146417930;
                  }
                  uVar30 = 0;
                  if ((int)uVar26 < iVar23) {
                    uVar30 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  lVar31 = (longlong)(int)uVar26;
                }
                else {
LAB_146417930:
                  if ((int)uVar34 < 0) {
LAB_146417944:
                    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                                        ,0x162,L"");
                    if (bVar21) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                  }
                  else {
                    uVar24 = uVar26;
                    if ((this->TransformedSpline).Position.field_0x10 != '\0') {
                      uVar24 = uVar30;
                    }
                    if ((int)uVar24 <= (int)uVar34) goto LAB_146417944;
                  }
                  if (((this->TransformedSpline).Position.field_0x10 == '\0') || (uVar34 != uVar26))
                  {
                    bVar21 = false;
                    uVar25 = uVar34 + 1;
                  }
                  else {
                    bVar21 = true;
                  }
                  uVar26 = 0;
                  if ((int)uVar34 < *(int *)&(this->TransformedSpline).Position.field_0x8) {
                    uVar26 = ~uVar34 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  lVar29 = *(longlong *)&this_00->Position;
                  lVar28 = lVar31 * 0x58;
                  uVar26 = 0;
                  if ((int)uVar25 < *(int *)&(this->TransformedSpline).Position.field_0x8) {
                    uVar26 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  lVar37 = (longlong)(int)uVar25 * 0x58;
                  lVar38 = *(longlong *)&this_00->Position;
                  if (bVar21) {
                    fVar54 = *(float *)&(this->TransformedSpline).Position.field_0x14;
                  }
                  else {
                    fVar54 = *(float *)(lVar38 + lVar37) - *(float *)(lVar28 + lVar29);
                  }
                  if ((0.0 < fVar54) && (*(char *)(lVar28 + 0x50 + lVar29) != '\x02')) {
                    fVar57 = (fVar74 - *(float *)(lVar28 + lVar29)) / fVar54;
                    if (((fVar57 < 0.0) || (fVar66 < fVar57)) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Alpha >= 0.0f && Alpha <= 1.0f",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                                            ,0x16e,
                                            L"Bad value in Eval(): in %f prev %f  diff %f alpha %f")
                       , bVar21)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    uVar67 = ___xmm_3ff00000000000000000000000000000;
                    uVar68 = _UNK_15061cbc8;
                    if (*(char *)(lVar28 + 0x50 + lVar29) == '\0') {
                      pdVar6 = (double *)(lVar28 + 8 + lVar29);
                      dVar64 = *pdVar6;
                      dVar43 = pdVar6[1];
                      pdVar6 = (double *)(lVar38 + 8 + lVar37);
                      dVar44 = (double)fVar57;
                      dVar64 = (*pdVar6 - dVar64) * dVar44 + dVar64;
                      dVar43 = (pdVar6[1] - dVar43) * dVar44 + dVar43;
                      local_398 = (*(double *)(lVar38 + 0x18 + lVar37) -
                                  *(double *)(lVar28 + 0x18 + lVar29)) * dVar44 +
                                  *(double *)(lVar28 + 0x18 + lVar29);
                    }
                    else {
                      pdVar6 = (double *)(lVar38 + 0x20 + lVar37);
                      pdVar8 = (double *)(lVar28 + 0x38 + lVar29);
                      dVar12 = (double)fVar54;
                      fVar54 = fVar57 * fVar57;
                      local_1d0 = dVar12 * *(double *)(lVar38 + 0x30 + lVar37);
                      local_1e8 = dVar12 * *(double *)(lVar28 + 0x48 + lVar29);
                      fVar58 = fVar54 * (fVar57 + fVar57);
                      dVar64 = *pdVar6 * dVar12;
                      dVar43 = pdVar6[1] * dVar12;
                      dVar44 = *pdVar8 * dVar12;
                      dVar12 = pdVar8[1] * dVar12;
                      fVar66 = fVar54 * fVar57 - fVar54;
                      pdVar6 = (double *)(lVar38 + 8 + lVar37);
                      fVar59 = fVar54 * fVar69 - fVar58;
                      in_XMM4 = ZEXT416((uint)fVar59);
                      fVar57 = (fVar54 * fVar57 - fVar57 * (fVar57 + fVar57)) + fVar57;
                      local_1e0._8_4_ = SUB84(dVar43,0);
                      local_1e0._0_8_ = dVar64;
                      local_1e0._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
                      fVar69 = (fVar58 - fVar54 * fVar69) + __real_3f800000;
                      pdVar8 = (double *)(lVar28 + 8 + lVar29);
                      dVar64 = (double)fVar59 * *pdVar6 + (double)fVar66 * dVar64 +
                               (double)fVar69 * *pdVar8 + (double)fVar57 * dVar44;
                      dVar43 = (double)fVar59 * pdVar6[1] + (double)fVar66 * dVar43 +
                               (double)fVar69 * pdVar8[1] + (double)fVar57 * dVar12;
                      local_1f8._8_4_ = SUB84(dVar12,0);
                      local_1f8._0_8_ = dVar44;
                      local_1f8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                      local_398 = (double)fVar69 * *(double *)(lVar28 + 0x18 + lVar29) +
                                  (double)fVar57 * local_1e8 +
                                  (double)fVar59 * *(double *)(lVar38 + 0x18 + lVar37) +
                                  (double)fVar66 * local_1d0;
                      fVar66 = __real_3f800000;
                    }
                    goto LAB_146417d0c;
                  }
                  uVar26 = 0;
                  if ((int)uVar34 < *(int *)&(this->TransformedSpline).Position.field_0x8) {
                    uVar26 = ~uVar34 >> 0x1f;
                  }
                  uVar67 = ___xmm_3ff00000000000000000000000000000;
                  uVar68 = _UNK_15061cbc8;
                  if ((uVar26 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), uVar67 = ___xmm_3ff00000000000000000000000000000,
                     uVar68 = _UNK_15061cbc8, bVar21)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                local_398 = *(double *)(lVar31 * 0x58 + 0x18 + *(longlong *)&this_00->Position);
                puVar7 = (undefined4 *)(lVar31 * 0x58 + 8 + *(longlong *)&this_00->Position);
                uVar70 = *puVar7;
                uVar71 = puVar7[1];
                uVar72 = puVar7[2];
                uVar73 = puVar7[3];
              }
              dVar43 = (double)CONCAT44(uVar73,uVar72);
              dVar64 = (double)CONCAT44(uVar71,uVar70);
            }
            else {
              local_398 = 0.0;
              dVar64 = 0.0;
              dVar43 = 0.0;
            }
          }
LAB_146417d0c:
          uVar70 = (undefined4)((ulonglong)dVar43 >> 0x20);
          iVar23 = *(int *)&(this->BoneSpline).Position.field_0x8;
          local_3a8._8_4_ = SUB84(dVar43,0);
          local_3a8._0_8_ = dVar64;
          local_3a8._12_4_ = uVar70;
          if (iVar23 == *(int *)&(this->BoneSpline).Position.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,(ForAnyElementType *)&this->BoneSpline,
                                (int *)&(this->BoneSpline).Position.field_0xc);
          }
          *(int *)&(this->BoneSpline).Position.field_0x8 = iVar23 + 1;
          lVar29 = (longlong)iVar23 * 0x58;
          lVar31 = *(longlong *)&(this->BoneSpline).Position;
          auVar61._8_4_ = SUB84(dVar43,0);
          auVar61._0_8_ = dVar64;
          auVar61._12_4_ = uVar70;
          *(undefined1 (*) [16])(lVar31 + lVar29 + 8) = auVar61;
          *(double *)(lVar31 + lVar29 + 0x18) = local_398;
          *(float *)(lVar31 + lVar29) = fVar63;
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar31 + lVar29 + 0x20);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar18;
          *(double *)(lVar31 + lVar29 + 0x30) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar31 + lVar29 + 0x38);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar18;
          *(double *)(lVar31 + lVar29 + 0x48) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          *(undefined1 *)(lVar31 + lVar29 + 0x50) = 1;
          uVar30 = *(uint *)&(this->TransformedSpline).Rotation.field_0x8;
          uVar26 = uVar30 - 1;
          if ((uVar30 == 0) || (iVar23 = _isnan((double)fVar74), iVar23 != 0)) {
            local_358._8_8_ = uVar68;
            local_358._0_8_ = uVar67;
            local_368 = ZEXT816(0);
          }
          else {
            uVar25 = FInterpCurve<UE::Math::TQuat<double>_>::GetPointIndexForInputValue
                               ((FInterpCurve<UE::Math::TQuat<double>_> *)
                                &(this->TransformedSpline).Rotation,fVar74);
            if (uVar25 == 0xffffffff) {
              if ((*(int *)&(this->TransformedSpline).Rotation.field_0x8 < 1) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
LAB_146417e16:
              lVar31 = *(longlong *)&(this->TransformedSpline).Rotation;
              local_368 = *(undefined1 (*) [16])(lVar31 + 0x10);
              local_358 = *(undefined1 (*) [16])(lVar31 + 0x20);
            }
            else {
              if (uVar25 == uVar26) {
                iVar23 = *(int *)&(this->TransformedSpline).Rotation.field_0x8;
                if ((this->TransformedSpline).Rotation.field_0x10 == '\0') {
                  uVar30 = 0;
                  if ((int)uVar26 < iVar23) {
                    uVar30 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  lVar31 = *(longlong *)&(this->TransformedSpline).Rotation;
                  local_368 = *(undefined1 (*) [16])((longlong)(int)uVar26 * 0x80 + 0x10 + lVar31);
                  local_358 = *(undefined1 (*) [16])((longlong)(int)uVar26 * 0x80 + 0x20 + lVar31);
                  goto LAB_14641830a;
                }
                uVar34 = 0;
                if ((int)uVar26 < iVar23) {
                  uVar34 = ~uVar26 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (*(float *)((longlong)(int)uVar26 * 0x80 +
                              *(longlong *)&(this->TransformedSpline).Rotation) +
                    *(float *)&(this->TransformedSpline).Rotation.field_0x14 <= fVar74) {
                  if ((*(int *)&(this->TransformedSpline).Rotation.field_0x8 < 1) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  goto LAB_146417e16;
                }
              }
              if ((int)uVar25 < 0) {
LAB_146417f8c:
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                                    ,0x162,L"");
                if (bVar21) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              else {
                uVar34 = uVar26;
                if ((this->TransformedSpline).Rotation.field_0x10 != '\0') {
                  uVar34 = uVar30;
                }
                if ((int)uVar34 <= (int)uVar25) goto LAB_146417f8c;
              }
              if (((this->TransformedSpline).Rotation.field_0x10 == '\0') || (uVar25 != uVar26)) {
                uVar26 = uVar25 + 1;
                bVar21 = false;
              }
              else {
                bVar21 = true;
                uVar26 = 0;
              }
              uVar30 = 0;
              if ((int)uVar25 < *(int *)&(this->TransformedSpline).Rotation.field_0x8) {
                uVar30 = ~uVar25 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              lVar31 = *(longlong *)&(this->TransformedSpline).Rotation;
              lVar29 = (longlong)(int)uVar25 * 0x80;
              uVar30 = 0;
              if ((int)uVar26 < *(int *)&(this->TransformedSpline).Rotation.field_0x8) {
                uVar30 = ~uVar26 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              local_348 = *(longlong *)&(this->TransformedSpline).Rotation;
              lVar28 = (longlong)(int)uVar26 * 0x80;
              if (bVar21) {
                fVar69 = *(float *)&(this->TransformedSpline).Rotation.field_0x14;
              }
              else {
                fVar69 = *(float *)(lVar28 + local_348) - *(float *)(lVar29 + lVar31);
              }
              if ((fVar69 <= 0.0) || (*(char *)(lVar29 + 0x70 + lVar31) == '\x02')) {
                uVar26 = 0;
                if ((int)uVar25 < *(int *)&(this->TransformedSpline).Rotation.field_0x8) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar31 = *(longlong *)&(this->TransformedSpline).Rotation;
                lVar29 = (longlong)(int)uVar25 * 0x80;
                local_368 = *(undefined1 (*) [16])(lVar29 + 0x10 + lVar31);
                local_358 = *(undefined1 (*) [16])(lVar29 + 0x20 + lVar31);
              }
              else {
                fVar54 = (fVar74 - *(float *)(lVar29 + lVar31)) / fVar69;
                if (((fVar54 < 0.0) || (fVar66 < fVar54)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Alpha >= 0.0f && Alpha <= 1.0f",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                                        ,0x16e,
                                        L"Bad value in Eval(): in %f prev %f  diff %f alpha %f"),
                   bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pTVar32 = (TQuat<double> *)(local_348 + 0x10 + lVar28);
                pTVar27 = (TQuat<double> *)(lVar31 + 0x10 + lVar29);
                if (*(char *)(lVar29 + 0x70 + lVar31) == '\0') {
                  pTVar27 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                      (local_f8,pTVar27,pTVar32,(double)fVar54);
                  dVar64 = pTVar27->X;
                  dVar43 = pTVar27->Y;
                  dVar44 = pTVar27->Z;
                  dVar12 = pTVar27->W;
                  dVar49 = dVar64 * dVar64 + dVar44 * dVar44;
                  dVar53 = dVar43 * dVar43 + dVar12 * dVar12;
                  auVar45._8_4_ = SUB84(dVar53,0);
                  auVar45._0_8_ = dVar49;
                  auVar45._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
                  auVar46._0_8_ = auVar45._8_8_ + dVar49;
                  auVar46._8_8_ = dVar49 + dVar53;
                  in_XMM4 = sqrtpd(in_XMM4,auVar46);
                  local_2b0 = __real_3e45798ee0000000;
                  auVar61 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  in_XMM4);
                  uVar42 = -(ulonglong)(__real_3e45798ee0000000 <= auVar46._0_8_);
                  uVar35 = -(ulonglong)(__real_3e45798ee0000000 <= auVar46._8_8_);
                  uVar26 = (uint)(uVar42 >> 0x20);
                  uVar30 = (uint)(uVar35 >> 0x20);
                  auVar62._0_8_ = uVar42 & (ulonglong)(auVar61._0_8_ * dVar64);
                  uVar36 = uVar35 & (ulonglong)(auVar61._8_8_ * dVar43);
                  auVar62._8_4_ = (undefined4)uVar36;
                  auVar62._12_4_ = (undefined4)(uVar36 >> 0x20);
                  auVar50._0_4_ =
                       ~(uint)uVar42 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
                  ;
                  auVar50._4_4_ =
                       ~uVar26 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
                  auVar50._8_4_ =
                       ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
                  ;
                  auVar50._12_4_ =
                       ~uVar30 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                                       );
                  local_368 = auVar62 | auVar50;
                  auVar61 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  in_XMM4);
                  auVar56._0_4_ =
                       ~(uint)uVar42 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
                  ;
                  auVar56._4_4_ =
                       ~uVar26 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                                       );
                  auVar56._8_4_ =
                       ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
                  ;
                  auVar56._12_4_ =
                       ~uVar30 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                                       );
                  auVar51._0_8_ = (ulonglong)(auVar61._0_8_ * dVar44) & uVar42;
                  uVar35 = (ulonglong)(auVar61._8_8_ * dVar12) & uVar35;
                  auVar51._8_4_ = (undefined4)uVar35;
                  auVar51._12_4_ = (undefined4)(uVar35 >> 0x20);
                  local_358 = auVar56 | auVar51;
                }
                else {
                  dVar64 = (double)fVar69;
                  uVar70 = SUB84(dVar64,0);
                  uVar71 = (undefined4)((ulonglong)dVar64 >> 0x20);
                  auVar47._8_4_ = uVar70;
                  auVar47._0_8_ = dVar64;
                  auVar47._12_4_ = uVar71;
                  auVar52._8_4_ = uVar70;
                  auVar52._0_8_ = dVar64;
                  auVar52._12_4_ = uVar71;
                  pdVar6 = (double *)(lVar28 + 0x40 + local_348);
                  local_268.Z = dVar64 * *pdVar6;
                  local_268.W = auVar47._8_8_ * pdVar6[1];
                  pdVar6 = (double *)(lVar28 + 0x30 + local_348);
                  local_268.X = dVar64 * *pdVar6;
                  local_268.Y = auVar52._8_8_ * pdVar6[1];
                  auVar48._8_4_ = uVar70;
                  auVar48._0_8_ = dVar64;
                  auVar48._12_4_ = uVar71;
                  pdVar6 = (double *)(lVar29 + 0x50 + lVar31);
                  local_248._0_8_ = dVar64 * *pdVar6;
                  local_248._8_8_ = auVar48._8_8_ * pdVar6[1];
                  pdVar6 = (double *)(lVar29 + 0x60 + lVar31);
                  dVar43 = dVar64 * pdVar6[1];
                  local_248._24_4_ = SUB84(dVar43,0);
                  local_248._16_8_ = dVar64 * *pdVar6;
                  local_248._28_4_ = (int)((ulonglong)dVar43 >> 0x20);
                  UE::Math::TQuat<double>::Squad
                            ((TQuat<double> *)local_368,pTVar27,(TQuat<double> *)local_248,pTVar32,
                             &local_268,(double)fVar54);
                }
              }
            }
          }
LAB_14641830a:
          iVar23 = *(int *)&(this->BoneSpline).Rotation.field_0x8;
          if (iVar23 == *(int *)&(this->BoneSpline).Rotation.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1080,(ForAnyElementType *)&(this->BoneSpline).Rotation,
                                (int *)&(this->BoneSpline).Rotation.field_0xc);
          }
          *(int *)&(this->BoneSpline).Rotation.field_0x8 = iVar23 + 1;
          lVar31 = *(longlong *)&(this->BoneSpline).Rotation;
          lVar29 = (longlong)iVar23 * 0x80;
          *(float *)(lVar29 + lVar31) = fVar63;
          pdVar6 = (double *)(lVar29 + 0x10 + lVar31);
          *pdVar6 = (double)local_368._0_8_;
          pdVar6[1] = (double)local_368._8_8_;
          pdVar6 = (double *)(lVar29 + 0x20 + lVar31);
          *pdVar6 = (double)local_358._0_8_;
          pdVar6[1] = (double)local_358._8_8_;
          dVar64 = UE::Math::TQuat<double>::Identity.Y;
          pdVar6 = (double *)(lVar29 + 0x30 + lVar31);
          *pdVar6 = UE::Math::TQuat<double>::Identity.X;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.W;
          pdVar6 = (double *)(lVar29 + 0x40 + lVar31);
          *pdVar6 = UE::Math::TQuat<double>::Identity.Z;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.Y;
          pdVar6 = (double *)(lVar29 + 0x50 + lVar31);
          *pdVar6 = UE::Math::TQuat<double>::Identity.X;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.W;
          pdVar6 = (double *)(lVar29 + 0x60 + lVar31);
          *pdVar6 = UE::Math::TQuat<double>::Identity.Z;
          pdVar6[1] = dVar64;
          *(undefined1 *)(lVar29 + 0x70 + lVar31) = 0;
          uVar30 = *(uint *)&(this->TransformedSpline).Scale.field_0x8;
          uVar26 = uVar30 - 1;
          if ((uVar30 == 0) || (iVar23 = _isnan((double)fVar74), iVar23 != 0)) {
            uVar70 = 0;
            uVar71 = 0;
            uVar72 = 0;
            uVar73 = 0;
            local_380 = 0.0;
LAB_146418977:
            dVar43 = (double)CONCAT44(uVar73,uVar72);
            dVar64 = (double)CONCAT44(uVar71,uVar70);
          }
          else {
            uVar25 = FInterpCurve<UE::Math::TVector<double>_>::GetPointIndexForInputValue
                               ((FInterpCurve<UE::Math::TVector<double>_> *)
                                &(this->TransformedSpline).Scale,fVar74);
            if (uVar25 == 0xffffffff) {
              if ((*(int *)&(this->TransformedSpline).Scale.field_0x8 < 1) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              lVar31 = *(longlong *)&(this->TransformedSpline).Scale;
              local_380 = *(double *)(lVar31 + 0x18);
              uVar70 = *(undefined4 *)(lVar31 + 8);
              uVar71 = *(undefined4 *)(lVar31 + 0xc);
              uVar72 = *(undefined4 *)(lVar31 + 0x10);
              uVar73 = *(undefined4 *)(lVar31 + 0x14);
              goto LAB_146418977;
            }
            uVar34 = 0;
            if (uVar25 == uVar26) {
              iVar23 = *(int *)&(this->TransformedSpline).Scale.field_0x8;
              if ((this->TransformedSpline).Scale.field_0x10 == '\0') {
                uVar30 = 0;
                if ((int)uVar26 < iVar23) {
                  uVar30 = ~uVar26 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar31 = *(longlong *)&(this->TransformedSpline).Scale;
                local_380 = *(double *)((longlong)(int)uVar26 * 0x58 + 0x18 + lVar31);
                puVar7 = (undefined4 *)((longlong)(int)uVar26 * 0x58 + 8 + lVar31);
                uVar70 = *puVar7;
                uVar71 = puVar7[1];
                uVar72 = puVar7[2];
                uVar73 = puVar7[3];
              }
              else {
                uVar24 = 0;
                if ((int)uVar26 < iVar23) {
                  uVar24 = ~uVar26 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (fVar74 < *(float *)((longlong)(int)uVar26 * 0x58 +
                                       *(longlong *)&(this->TransformedSpline).Scale) +
                             *(float *)&(this->TransformedSpline).Scale.field_0x14)
                goto LAB_146418573;
                if ((*(int *)&(this->TransformedSpline).Scale.field_0x8 < 1) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar31 = *(longlong *)&(this->TransformedSpline).Scale;
                local_380 = *(double *)(lVar31 + 0x18);
                uVar70 = *(undefined4 *)(lVar31 + 8);
                uVar71 = *(undefined4 *)(lVar31 + 0xc);
                uVar72 = *(undefined4 *)(lVar31 + 0x10);
                uVar73 = *(undefined4 *)(lVar31 + 0x14);
              }
              goto LAB_146418977;
            }
LAB_146418573:
            if ((int)uVar25 < 0) {
LAB_14641858a:
              bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                                  ,0x162,L"");
              if (bVar21) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            else {
              uVar24 = uVar26;
              if ((this->TransformedSpline).Scale.field_0x10 != '\0') {
                uVar24 = uVar30;
              }
              if ((int)uVar24 <= (int)uVar25) goto LAB_14641858a;
            }
            if (((this->TransformedSpline).Scale.field_0x10 == '\0') || (uVar25 != uVar26)) {
              bVar21 = false;
              uVar34 = uVar25 + 1;
            }
            else {
              bVar21 = true;
            }
            uVar26 = 0;
            if ((int)uVar25 < *(int *)&(this->TransformedSpline).Scale.field_0x8) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar31 = *(longlong *)&(this->TransformedSpline).Scale;
            lVar29 = (longlong)(int)uVar25 * 0x58;
            uVar26 = 0;
            if ((int)uVar34 < *(int *)&(this->TransformedSpline).Scale.field_0x8) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar38 = (longlong)(int)uVar34 * 0x58;
            lVar28 = *(longlong *)&(this->TransformedSpline).Scale;
            if (bVar21) {
              fVar69 = *(float *)&(this->TransformedSpline).Scale.field_0x14;
            }
            else {
              fVar69 = *(float *)(lVar28 + lVar38) - *(float *)(lVar29 + lVar31);
            }
            if ((fVar69 <= 0.0) || (*(char *)(lVar29 + 0x50 + lVar31) == '\x02')) {
              uVar26 = 0;
              if ((int)uVar25 < *(int *)&(this->TransformedSpline).Scale.field_0x8) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              lVar31 = *(longlong *)&(this->TransformedSpline).Scale;
              lVar29 = (longlong)(int)uVar25 * 0x58;
              local_380 = *(double *)(lVar29 + 0x18 + lVar31);
              puVar7 = (undefined4 *)(lVar29 + 8 + lVar31);
              uVar70 = *puVar7;
              uVar71 = puVar7[1];
              uVar72 = puVar7[2];
              uVar73 = puVar7[3];
              goto LAB_146418977;
            }
            fVar74 = (fVar74 - *(float *)(lVar29 + lVar31)) / fVar69;
            if (((fVar74 < 0.0) || (fVar66 < fVar74)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Alpha >= 0.0f && Alpha <= 1.0f",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                                    ,0x16e,L"Bad value in Eval(): in %f prev %f  diff %f alpha %f"),
               bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (*(char *)(lVar29 + 0x50 + lVar31) == '\0') {
              pdVar6 = (double *)(lVar29 + 8 + lVar31);
              dVar64 = *pdVar6;
              dVar43 = pdVar6[1];
              pdVar6 = (double *)(lVar28 + 8 + lVar38);
              dVar44 = (double)fVar74;
              dVar64 = (*pdVar6 - dVar64) * dVar44 + dVar64;
              dVar43 = (pdVar6[1] - dVar43) * dVar44 + dVar43;
              local_380 = (*(double *)(lVar28 + 0x18 + lVar38) - *(double *)(lVar29 + 0x18 + lVar31)
                          ) * dVar44 + *(double *)(lVar29 + 0x18 + lVar31);
            }
            else {
              pdVar6 = (double *)(lVar28 + 0x20 + lVar38);
              pdVar8 = (double *)(lVar29 + 0x38 + lVar31);
              dVar53 = (double)fVar69;
              fVar54 = fVar74 * fVar74;
              local_1a0 = dVar53 * *(double *)(lVar28 + 0x30 + lVar38);
              local_1b8 = dVar53 * *(double *)(lVar29 + 0x48 + lVar31);
              fVar59 = fVar54 * (fVar74 + fVar74);
              fVar57 = fVar54 * __real_40400000 - fVar59;
              fVar69 = fVar54 * fVar74 - fVar54;
              dVar44 = *pdVar6 * dVar53;
              dVar12 = pdVar6[1] * dVar53;
              fVar66 = (fVar59 - fVar54 * __real_40400000) + fVar66;
              dVar49 = *pdVar8 * dVar53;
              dVar53 = pdVar8[1] * dVar53;
              pdVar6 = (double *)(lVar28 + 8 + lVar38);
              fVar74 = (fVar54 * fVar74 - (fVar74 + fVar74) * fVar74) + fVar74;
              pdVar8 = (double *)(lVar29 + 8 + lVar31);
              dVar64 = (double)fVar69 * dVar44 + (double)fVar57 * *pdVar6 +
                       (double)fVar66 * *pdVar8 + (double)fVar74 * dVar49;
              dVar43 = (double)fVar69 * dVar12 + (double)fVar57 * pdVar6[1] +
                       (double)fVar66 * pdVar8[1] + (double)fVar74 * dVar53;
              local_1b0._8_4_ = SUB84(dVar12,0);
              local_1b0._0_8_ = dVar44;
              local_1b0._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              in_XMM4._0_8_ =
                   (double)fVar66 * *(double *)(lVar29 + 0x18 + lVar31) + (double)fVar74 * local_1b8
                   + (double)fVar69 * local_1a0 +
                     (double)fVar57 * *(double *)(lVar28 + 0x18 + lVar38);
              in_XMM4._8_8_ =
                   (double)fVar66 * 0.0 + (double)fVar74 * 0.0 +
                   (double)fVar69 * 0.0 + (double)fVar57 * 0.0;
              local_1c8._8_4_ = SUB84(dVar53,0);
              local_1c8._0_8_ = dVar49;
              local_1c8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
              local_380 = in_XMM4._0_8_;
            }
          }
          fVar69 = __real_40400000;
          uVar70 = (undefined4)((ulonglong)dVar43 >> 0x20);
          iVar23 = *(int *)&(this->BoneSpline).Scale.field_0x8;
          local_390._8_4_ = SUB84(dVar43,0);
          local_390._0_8_ = dVar64;
          local_390._12_4_ = uVar70;
          if (iVar23 == *(int *)&(this->BoneSpline).Scale.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,(ForAnyElementType *)&(this->BoneSpline).Scale,
                                (int *)&(this->BoneSpline).Scale.field_0xc);
          }
          uVar68 = _UNK_15061cbc8;
          uVar67 = ___xmm_3ff00000000000000000000000000000;
          *(int *)&(this->BoneSpline).Scale.field_0x8 = iVar23 + 1;
          lVar29 = (longlong)iVar23 * 0x58;
          lVar31 = *(longlong *)&(this->BoneSpline).Scale;
          auVar13._8_4_ = SUB84(dVar43,0);
          auVar13._0_8_ = dVar64;
          auVar13._12_4_ = uVar70;
          *(undefined1 (*) [16])(lVar29 + 8 + lVar31) = auVar13;
          fVar66 = __real_3f800000;
          *(double *)(lVar29 + 0x18 + lVar31) = local_380;
          *(float *)(lVar29 + lVar31) = fVar63;
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar29 + 0x20 + lVar31);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar18;
          *(double *)(lVar29 + 0x30 + lVar31) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar29 + 0x38 + lVar31);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar18;
          *(double *)(lVar29 + 0x48 + lVar31) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          *(undefined1 *)(lVar29 + 0x50 + lVar31) = 1;
          local_3b0 = local_3b0 + 1;
        } while (local_3b0 < local_3ac);
        uVar70 = SUB84(__real_3ff0000000000000,0);
        uVar71 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        dVar64 = ___xmm_3ff00000000000003ff0000000000000;
        dVar43 = _UNK_150689688;
      }
      iVar23 = *(int *)&(this->TransformedSpline).Position.field_0xc;
      *(undefined4 *)&(this->TransformedSpline).Position.field_0x8 = 0;
      if (iVar23 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)&this->TransformedSpline,0,local_2e8);
        dVar64 = ___xmm_3ff00000000000003ff0000000000000;
        dVar43 = _UNK_150689688;
      }
      iVar23 = *(int *)&(this->TransformedSpline).Rotation.field_0xc;
      *(undefined4 *)&(this->TransformedSpline).Rotation.field_0x8 = 0;
      if (iVar23 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,0,(ForAnyElementType *)&(this->TransformedSpline).Rotation,0,local_340)
        ;
        dVar64 = ___xmm_3ff00000000000003ff0000000000000;
        dVar43 = _UNK_150689688;
      }
      iVar23 = *(int *)&(this->TransformedSpline).Scale.field_0xc;
      *(undefined4 *)&(this->TransformedSpline).Scale.field_0x8 = 0;
      local_290._s_0.X = dVar64;
      local_290._s_0.Y = dVar43;
      if (iVar23 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)&(this->TransformedSpline).Scale,0,local_2e0);
        local_290._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
        local_290._s_0.Y = _UNK_150689688;
      }
    }
    else {
      local_290._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_290._s_0.Y = _UNK_150689688;
      if (0 < (this->CachedBoneReferences).ArrayNum) {
        uVar35 = uVar36;
        do {
          uVar30 = (uint)uVar36;
          uVar26 = 0;
          if ((int)uVar30 < (this->CachedBoneReferences).ArrayNum) {
            uVar26 = ~uVar30 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar26 = *(uint *)((this->CachedBoneReferences).AllocatorInstance.Data + uVar35 + 0x10);
          uVar25 = 0;
          if ((int)uVar26 < local_3c0.ArrayNum) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVar20.Data = local_3c0.AllocatorInstance.Data;
          iVar23 = *(int *)&(this->BoneSpline).Position.field_0x8;
          lVar31 = (longlong)(int)uVar26 * 0x60;
          uVar68 = *(undefined8 *)(local_3c0.AllocatorInstance.Data + lVar31 + 0x20);
          uVar18 = *(undefined8 *)(local_3c0.AllocatorInstance.Data + lVar31 + 0x20 + 8);
          uVar67 = *(undefined8 *)(local_3c0.AllocatorInstance.Data + lVar31 + 0x30);
          local_198 = uVar68;
          uStack_190 = uVar18;
          local_188 = uVar67;
          if (iVar23 == *(int *)&(this->BoneSpline).Position.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,(ForAnyElementType *)&this->BoneSpline,
                                (int *)&(this->BoneSpline).Position.field_0xc);
          }
          *(int *)&(this->BoneSpline).Position.field_0x8 = iVar23 + 1;
          lVar28 = (longlong)iVar23 * 0x58;
          fVar66 = (float)(int)uVar30;
          lVar29 = *(longlong *)&(this->BoneSpline).Position;
          puVar5 = (undefined8 *)(lVar29 + lVar28 + 8);
          *puVar5 = uVar68;
          puVar5[1] = uVar18;
          *(undefined8 *)(lVar29 + lVar28 + 0x18) = uVar67;
          *(float *)(lVar29 + lVar28) = fVar66;
          uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar29 + lVar28 + 0x20);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar67;
          *(double *)(lVar29 + lVar28 + 0x30) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar29 + lVar28 + 0x38);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar67;
          *(double *)(lVar29 + lVar28 + 0x48) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          *(undefined1 *)(lVar29 + lVar28 + 0x50) = 1;
          iVar23 = *(int *)&(this->BoneSpline).Rotation.field_0x8;
          uVar67 = *(undefined8 *)(FVar20.Data + lVar31);
          uVar68 = *(undefined8 *)(FVar20.Data + lVar31 + 8);
          uVar18 = *(undefined8 *)(FVar20.Data + lVar31 + 0x10);
          uVar19 = *(undefined8 *)(FVar20.Data + lVar31 + 0x10 + 8);
          if (iVar23 == *(int *)&(this->BoneSpline).Rotation.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1080,(ForAnyElementType *)pFVar41,
                                (int *)&(this->BoneSpline).Rotation.field_0xc);
            *(int *)&(this->BoneSpline).Rotation.field_0x8 = iVar23;
          }
          *(int *)&(this->BoneSpline).Rotation.field_0x8 = iVar23 + 1;
          lVar29 = *(longlong *)pFVar41;
          lVar28 = (longlong)iVar23 * 0x80;
          *(float *)(lVar28 + lVar29) = fVar66;
          puVar5 = (undefined8 *)(lVar28 + 0x10 + lVar29);
          *puVar5 = uVar67;
          puVar5[1] = uVar68;
          puVar5 = (undefined8 *)(lVar28 + 0x20 + lVar29);
          *puVar5 = uVar18;
          puVar5[1] = uVar19;
          dVar64 = UE::Math::TQuat<double>::Identity.Y;
          pdVar6 = (double *)(lVar28 + 0x30 + lVar29);
          *pdVar6 = UE::Math::TQuat<double>::Identity.X;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.W;
          pdVar6 = (double *)(lVar28 + 0x40 + lVar29);
          *pdVar6 = UE::Math::TQuat<double>::Identity.Z;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.Y;
          pdVar6 = (double *)(lVar28 + 0x50 + lVar29);
          *pdVar6 = UE::Math::TQuat<double>::Identity.X;
          pdVar6[1] = dVar64;
          dVar64 = UE::Math::TQuat<double>::Identity.W;
          pdVar6 = (double *)(lVar28 + 0x60 + lVar29);
          *pdVar6 = UE::Math::TQuat<double>::Identity.Z;
          pdVar6[1] = dVar64;
          *(undefined1 *)(lVar28 + 0x70 + lVar29) = 0;
          uVar68 = *(undefined8 *)(FVar20.Data + lVar31 + 0x40);
          uVar18 = *(undefined8 *)(FVar20.Data + lVar31 + 0x40 + 8);
          uVar67 = *(undefined8 *)(FVar20.Data + lVar31 + 0x50);
          pFVar4 = &(this->BoneSpline).Scale;
          iVar23 = *(int *)&(this->BoneSpline).Scale.field_0x8;
          local_180 = uVar68;
          uStack_178 = uVar18;
          local_170 = uVar67;
          if (iVar23 == *(int *)&(this->BoneSpline).Scale.field_0xc) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,(ForAnyElementType *)pFVar4,
                                (int *)&(this->BoneSpline).Scale.field_0xc);
          }
          uVar36 = (ulonglong)(uVar30 + 1);
          *(int *)&(this->BoneSpline).Scale.field_0x8 = iVar23 + 1;
          uVar35 = uVar35 + 0x14;
          lVar29 = (longlong)iVar23 * 0x58;
          lVar31 = *(longlong *)pFVar4;
          puVar5 = (undefined8 *)(lVar31 + lVar29 + 8);
          *puVar5 = uVar68;
          puVar5[1] = uVar18;
          *(undefined8 *)(lVar31 + lVar29 + 0x18) = uVar67;
          *(float *)(lVar31 + lVar29) = fVar66;
          uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar31 + lVar29 + 0x20);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar67;
          *(double *)(lVar31 + lVar29 + 0x30) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pdVar6 = (double *)(lVar31 + lVar29 + 0x38);
          *pdVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pdVar6[1] = (double)uVar67;
          *(double *)(lVar31 + lVar29 + 0x48) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          *(undefined1 *)(lVar31 + lVar29 + 0x50) = 1;
          local_290._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
          local_290._s_0.Y = _UNK_150689688;
        } while ((int)(uVar30 + 1) < (this->CachedBoneReferences).ArrayNum);
      }
    }
    local_290._s_0.Z = (double)CONCAT44(uVar71,uVar70);
    FSplineCurves::UpdateSpline
              (&this->BoneSpline,false,false,10,false,0.0,(TVector<double> *)&local_290._s_0);
    fVar69 = FSplineCurves::GetSplineLength(&this->BoneSpline);
    fVar66 = __real_3f000000;
    this->OriginalSplineLength = fVar69;
    FSplinePositionLinearApproximation::Build(&this->BoneSpline,&this->LinearApproximation,fVar66);
    if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateSkeletalControl_AnyThread @ 146434250

void __thiscall
FAnimNode_SplineIK::EvaluateSkeletalControl_AnyThread
          (FAnimNode_SplineIK *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  longlong lVar3;
  FBoneReference *this_00;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ESplineBoneAxis EVar10;
  TTransform<double> *pTVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  double dVar15;
  undefined8 uVar16;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  FTlsAutoCleanup *pFVar22;
  FTlsAutoCleanup *pFVar23;
  FTlsAutoCleanup *pFVar24;
  FTlsAutoCleanup FVar25;
  TTransform<double> *pTVar26;
  undefined8 *puVar27;
  ulong64 uVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  float fVar34;
  undefined1 local_res20 [8];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  undefined1 local_1a0 [8];
  FDelegateAllocation local_198;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  int local_170;
  FBoneContainer *local_168;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_160;
  code *local_150;
  undefined1 *local_148;
  code *local_140;
  ForElementType<unsigned_int> local_138;
  code *local_130;
  FWeakObjectPtr local_128;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  ForAnyElementType local_d8;
  FDestructionSentinel local_d0;
  ForAnyElementType local_b8;
  undefined4 extraout_var;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SplineIK::EvaluateSkeletalControl_AnyThread");
  if (0 < (this->CachedBoneReferences).ArrayNum) {
    local_168 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
    TransformSpline(this);
    fVar34 = FSplineCurves::GetSplineLength(&this->TransformedSpline);
    iVar21 = *(int *)&(this->TransformedSpline).ReparamTable.field_0x8;
    uVar30 = iVar21 - 1;
    uVar19 = 0;
    if ((int)uVar30 < iVar21) {
      uVar19 = ~uVar30 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    fVar5 = *(float *)(*(longlong *)&(this->TransformedSpline).ReparamTable + -0x10 +
                      (longlong)*(int *)&(this->TransformedSpline).ReparamTable.field_0x8 * 0x14);
    FAlphaBlend::SetValueRange(&this->TwistBlend,this->TwistStart,this->TwistEnd);
    local_148 = local_res20;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FSplineIKScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar22 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_150,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSplineIKScratchArea>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    local_140 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FSplineIKScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pTVar1 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pFVar22 + 2);
    local_138 = (ForElementType<unsigned_int>)&local_1a8;
    pFVar23 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_140,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSplineIKScratchArea>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    local_130 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FSplineIKScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    local_128 = (FWeakObjectPtr)local_1a7;
    local_160 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pFVar23 + 4);
    pFVar24 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_130,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSplineIKScratchArea>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    iVar21 = *(int *)&pFVar22[3].field_0x4;
    *(undefined4 *)(pFVar22 + 3) = 0;
    if (iVar21 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,(ForAnyElementType *)pTVar1,0,(int *)&pFVar22[3].field_0x4);
    }
    uVar32 = 0;
    iVar21 = *(int *)&pFVar23[5].field_0x4;
    *(undefined4 *)(pFVar23 + 5) = 0;
    if (iVar21 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,(ForAnyElementType *)(pFVar23 + 4),0,(int *)&pFVar23[5].field_0x4);
    }
    iVar21 = *(int *)&pFVar24[7].field_0x4;
    puVar4 = &pFVar24[7].field_0x4;
    *(undefined4 *)(pFVar24 + 7) = 0;
    if (iVar21 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(pFVar24 + 6),0,(int *)puVar4);
    }
    local_170 = (this->CachedBoneReferences).ArrayNum;
    if (0 < local_170) {
      do {
        uVar30 = (uint)uVar32;
        uVar19 = 0;
        if ((int)uVar30 < (this->CachedBoneReferences).ArrayNum) {
          uVar19 = ~uVar30 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        this_00 = (FBoneReference *)
                  ((this->CachedBoneReferences).AllocatorInstance.Data + uVar32 * 0x14);
        bVar18 = FBoneReference::IsValidToEvaluate(this_00,local_168);
        if (!bVar18) break;
        FVar25._0_4_ = FBoneReference::GetCompactPoseIndex
                                 (this_00,(FBoneContainer *)&stack0xfffffffffffffea8);
        FVar25._4_4_ = extraout_var;
        if ((((ulonglong)pFVar24[6] <= (ulonglong)FVar25) &&
            ((ulonglong)FVar25 < (ulonglong)((longlong)pFVar24[6] + (longlong)*(int *)puVar4 * 4)))
           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar19 = *(uint *)(pFVar24 + 7);
        if (uVar19 == *(uint *)puVar4) {
          uVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar24 + 6),(int *)puVar4);
        }
        *(uint *)(pFVar24 + 7) = uVar19 + 1;
        *(undefined4 *)((longlong)pFVar24[6] + (longlong)(int)uVar19 * 4) = *(undefined4 *)FVar25;
        uVar20 = 0;
        if ((int)uVar19 < *(int *)(pFVar24 + 7)) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pTVar26 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (&param_1->Pose,
                             *(FCompactPoseBoneIndex *)
                              ((longlong)pFVar24[6] + (longlong)(int)uVar19 * 4));
        pTVar11 = (TTransform<double> *)(pTVar1->AllocatorInstance).Data;
        puVar2 = &pFVar22[3].field_0x4;
        if (((pTVar11 <= pTVar26) && (pTVar26 < pTVar11 + *(int *)puVar2)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar21 = *(int *)(pFVar22 + 3);
        if (iVar21 == *(int *)puVar2) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,(ForAnyElementType *)pTVar1,(int *)puVar2);
        }
        uVar32 = (ulonglong)(uVar30 + 1);
        *(int *)(pFVar22 + 3) = iVar21 + 1;
        dVar15 = (pTVar26->Rotation).XY.m128d_f64[1];
        pFVar12 = (pTVar1->AllocatorInstance).Data;
        lVar29 = (longlong)iVar21 * 0x60;
        *(double *)(pFVar12 + lVar29) = (pTVar26->Rotation).XY.m128d_f64[0];
        *(double *)(pFVar12 + lVar29 + 8) = dVar15;
        dVar15 = (pTVar26->Rotation).ZW.m128d_f64[1];
        *(double *)(pFVar12 + lVar29 + 0x10) = (pTVar26->Rotation).ZW.m128d_f64[0];
        *(double *)(pFVar12 + lVar29 + 0x10 + 8) = dVar15;
        dVar15 = (pTVar26->Translation).XY.m128d_f64[1];
        *(double *)(pFVar12 + lVar29 + 0x20) = (pTVar26->Translation).XY.m128d_f64[0];
        *(double *)(pFVar12 + lVar29 + 0x20 + 8) = dVar15;
        dVar15 = (pTVar26->Translation).ZW.m128d_f64[1];
        *(double *)(pFVar12 + lVar29 + 0x30) = (pTVar26->Translation).ZW.m128d_f64[0];
        *(double *)(pFVar12 + lVar29 + 0x30 + 8) = dVar15;
        dVar15 = (pTVar26->Scale3D).XY.m128d_f64[1];
        *(double *)(pFVar12 + lVar29 + 0x40) = (pTVar26->Scale3D).XY.m128d_f64[0];
        *(double *)(pFVar12 + lVar29 + 0x40 + 8) = dVar15;
        dVar15 = (pTVar26->Scale3D).ZW.m128d_f64[1];
        *(double *)(pFVar12 + lVar29 + 0x50) = (pTVar26->Scale3D).ZW.m128d_f64[0];
        *(double *)(pFVar12 + lVar29 + 0x50 + 8) = dVar15;
      } while ((int)(uVar30 + 1) < local_170);
    }
    fVar6 = this->OriginalSplineLength;
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_f0);
    local_d8.Data = (FScriptContainerElement *)&local_180;
    puVar27 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
    if (puVar27 != (undefined8 *)0x0) {
      *puVar27 = &
                 ___7__TCommonDelegateInstanceState___A6AMAEBU__TVector_N_Math_UE__MAEAH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar28 = FDelegateHandle::GenerateNewID();
      puVar27[2] = uVar28;
      *puVar27 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_SplineIK____A6AMAEBU__TVector_N_Math_UE__MAEAH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar27[4] = FindParamAtFirstSphereIntersection;
      puVar27[3] = this;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    EVar10 = this->BoneAxis;
    fVar7 = this->Offset;
    fVar8 = this->Stretch;
    uVar32 = 0;
    fVar9 = this->Roll;
    local_1a0 = (undefined1  [8])0x0;
    local_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_198.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
               (FWriteAccessScope *)&local_d0);
    local_b8.Data = (FScriptContainerElement *)&local_198;
    puVar27 = UE::Core::Private::DelegateAllocate(0x28,&local_198);
    if (puVar27 != (undefined8 *)0x0) {
      *puVar27 = &___7__TCommonDelegateInstanceState___A6AMM_ZUFDefaultDelegateUserPolicy__M__6B_;
      *(float *)(puVar27 + 1) = fVar5;
      uVar28 = FDelegateHandle::GenerateNewID();
      puVar27[2] = uVar28;
      *puVar27 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_SplineIK____A6AMM_ZUFDefaultDelegateUserPolicy__M__6B_
      ;
      puVar27[4] = GetTwist;
      puVar27[3] = this;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    pTVar17 = local_160;
    AnimationCore::SolveSplineIK
              (pTVar1,&(this->TransformedSpline).Position,&(this->TransformedSpline).Rotation,
               &(this->TransformedSpline).Scale,fVar5,fVar34,
               (TDelegate<float___cdecl(float),FDefaultDelegateUserPolicy> *)local_1a0,fVar9,fVar8,
               fVar7,(uint)EVar10,
               (TDelegate<float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
                *)local_188,&this->CachedOffsetRotations,&this->CachedBoneLengths,fVar6,local_160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
               (FWriteAccessScope *)&local_120);
    if ((local_198.DelegateSize != 0) &&
       (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_198.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_198,0,0,0x10);
      local_198.DelegateSize = 0;
    }
    if (local_120.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
    }
    if (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_198.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_108);
    if ((local_180.DelegateSize != 0) &&
       (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_180,0,0,0x10);
      local_180.DelegateSize = 0;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_180.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
    if ((*(int *)(pFVar22 + 3) != pTVar17->ArrayNum) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTransforms.Num() == OutTransforms.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_SplineIK.cpp"
                            ,0x5d,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if ((*(int *)(pFVar22 + 3) != *(int *)(pFVar24 + 7)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTransforms.Num() == CompactPoseBoneIndices.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_SplineIK.cpp"
                            ,0x5e,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    local_168 = (FBoneContainer *)(longlong)*(int *)(pFVar24 + 7);
    if (0 < (longlong)local_168) {
      lVar29 = 0;
      uVar33 = uVar32;
      do {
        pTVar1 = local_160;
        uVar30 = (uint)uVar32;
        uVar19 = 0;
        if ((int)uVar30 < local_160->ArrayNum) {
          uVar19 = ~uVar30 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar12 = (pTVar1->AllocatorInstance).Data;
        uVar19 = 0;
        if ((int)uVar30 < *(int *)(pFVar24 + 7)) {
          uVar19 = ~uVar30 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar21 = param_2->ArrayNum;
        FVar25 = pFVar24[6];
        if (iVar21 == param_2->ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        uVar32 = (ulonglong)(uVar30 + 1);
        param_2->ArrayNum = iVar21 + 1;
        pFVar13 = (param_2->AllocatorInstance).Data;
        lVar31 = (longlong)iVar21 * 0x70;
        lVar3 = uVar33 * 4;
        uVar33 = uVar33 + 1;
        *(undefined4 *)(pFVar13 + lVar31) = *(undefined4 *)((longlong)FVar25 + lVar3);
        uVar16 = *(undefined8 *)(pFVar12 + lVar29 + 8);
        *(undefined8 *)(pFVar13 + lVar31 + 0x10) = *(undefined8 *)(pFVar12 + lVar29);
        *(undefined8 *)(pFVar13 + lVar31 + 0x10 + 8) = uVar16;
        uVar16 = *(undefined8 *)(pFVar12 + lVar29 + 0x10 + 8);
        *(undefined8 *)(pFVar13 + lVar31 + 0x20) = *(undefined8 *)(pFVar12 + lVar29 + 0x10);
        *(undefined8 *)(pFVar13 + lVar31 + 0x20 + 8) = uVar16;
        uVar16 = *(undefined8 *)(pFVar12 + lVar29 + 0x20 + 8);
        *(undefined8 *)(pFVar13 + lVar31 + 0x30) = *(undefined8 *)(pFVar12 + lVar29 + 0x20);
        *(undefined8 *)(pFVar13 + lVar31 + 0x30 + 8) = uVar16;
        uVar16 = *(undefined8 *)(pFVar12 + lVar29 + 0x30 + 8);
        *(undefined8 *)(pFVar13 + lVar31 + 0x40) = *(undefined8 *)(pFVar12 + lVar29 + 0x30);
        *(undefined8 *)(pFVar13 + lVar31 + 0x40 + 8) = uVar16;
        uVar16 = *(undefined8 *)(pFVar12 + lVar29 + 0x40 + 8);
        *(undefined8 *)(pFVar13 + lVar31 + 0x50) = *(undefined8 *)(pFVar12 + lVar29 + 0x40);
        *(undefined8 *)(pFVar13 + lVar31 + 0x50 + 8) = uVar16;
        lVar3 = lVar29 + 0x50;
        uVar16 = *(undefined8 *)(pFVar12 + lVar3 + 8);
        lVar29 = lVar29 + 0x60;
        *(undefined8 *)(pFVar13 + lVar31 + 0x60) = *(undefined8 *)(pFVar12 + lVar3);
        *(undefined8 *)(pFVar13 + lVar31 + 0x60 + 8) = uVar16;
      } while ((longlong)uVar33 < (longlong)local_168);
    }
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Start Bone",&(this->StartBone).BoneName);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"End Bone",&(this->EndBone).BoneName);
  FStatsHierarchical::EndMeasurement();
  return;
}

// FindParamAtFirstSphereIntersection @ 146440e70

float __thiscall
FAnimNode_SplineIK::FindParamAtFirstSphereIntersection
          (FAnimNode_SplineIK *this,TVector<double> *param_1,float param_2,int *param_3)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  
  iVar8 = (this->LinearApproximation).ArrayNum + -1;
  uVar12 = *param_3;
  uVar10 = (ulonglong)(int)uVar12;
  if ((int)uVar12 < iVar8) {
    uVar11 = uVar10;
    lVar14 = uVar10 << 5;
    do {
      uVar12 = uVar12 + 1;
      uVar9 = (uint)uVar10;
      uVar13 = 0;
      if ((int)uVar9 < (this->LinearApproximation).ArrayNum) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        fVar16 = (float)(*pcVar3)();
        return fVar16;
      }
      pFVar15 = (this->LinearApproximation).AllocatorInstance.Data + lVar14;
      uVar13 = 0;
      if ((int)uVar12 < (this->LinearApproximation).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        fVar16 = (float)(*pcVar3)();
        return fVar16;
      }
      pFVar2 = (this->LinearApproximation).AllocatorInstance.Data;
      dVar22 = (param_1->field0_0x0)._s_0.X;
      dVar1 = (param_1->field0_0x0)._s_0.Y;
      dVar21 = (param_1->field0_0x0)._s_0.Z;
      dVar6 = dVar1 - *(double *)(pFVar15 + 8);
      dVar1 = dVar1 - *(double *)(pFVar2 + lVar14 + 0x28);
      dVar19 = dVar22 - *(double *)pFVar15;
      dVar22 = dVar22 - *(double *)(pFVar2 + lVar14 + 0x20);
      dVar17 = dVar21 - *(double *)(pFVar15 + 0x10);
      dVar21 = dVar21 - *(double *)(pFVar2 + lVar14 + 0x30);
      auVar20._0_8_ = dVar19 * dVar19;
      auVar20._8_8_ = 0;
      auVar18._0_8_ = dVar17 * dVar17;
      auVar18._8_8_ = 0;
      dVar6 = dVar6 * dVar6 + auVar20._0_8_ + auVar18._0_8_;
      dVar22 = dVar1 * dVar1 + dVar22 * dVar22 + dVar21 * dVar21;
      if ((dVar6 <= (double)(param_2 * param_2)) && ((double)(param_2 * param_2) <= dVar22)) {
        *param_3 = uVar9;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar6;
        auVar20 = sqrtpd(auVar20,auVar5);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar22;
        auVar18 = sqrtpd(auVar18,auVar4);
        dVar22 = ((double)param_2 - auVar20._0_8_) / (auVar18._0_8_ - auVar20._0_8_);
        if (__real_3ff0000000000000 <= dVar22) {
          dVar22 = __real_3ff0000000000000;
        }
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        return (float)(dVar22 * (double)(*(float *)(pFVar2 + lVar14 + 0x38) -
                                        *(float *)(pFVar15 + 0x18)) +
                      (double)*(float *)(pFVar15 + 0x18));
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x20;
    } while ((longlong)uVar11 < (longlong)iVar8);
  }
  *param_3 = 0;
  iVar8 = *(int *)&(this->TransformedSpline).ReparamTable.field_0x8;
  uVar13 = iVar8 - 1;
  uVar12 = 0;
  if ((int)uVar13 < iVar8) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    fVar16 = (float)(*pcVar3)();
    return fVar16;
  }
  return *(float *)(*(longlong *)&(this->TransformedSpline).ReparamTable + -0x10 +
                   (longlong)*(int *)&(this->TransformedSpline).ReparamTable.field_0x8 * 0x14);
}

// GatherBoneReferences @ 146441b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_SplineIK::GatherBoneReferences(FAnimNode_SplineIK *this,FReferenceSkeleton *param_1)

{
  TArray<FSplineIKCachedBoneData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName FVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_res18 [2];
  
  pTVar1 = &this->CachedBoneReferences;
  (this->CachedBoneReferences).ArrayNum = 0;
  if ((this->CachedBoneReferences).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&pTVar1->AllocatorInstance,0,&(this->CachedBoneReferences).ArrayMax);
  }
  FVar3 = (this->StartBone).BoneName;
  uVar12 = 0xffffffff;
  if ((FVar3 != (FName)0x0) &&
     (puVar10 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)&param_1->FinalNameToIndexMap,FVar3), puVar10 != (uint *)0x0)) {
    uVar12 = *puVar10;
  }
  FVar3 = (this->EndBone).BoneName;
  uVar11 = 0xffffffff;
  if ((FVar3 != (FName)0x0) &&
     (puVar10 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)&param_1->FinalNameToIndexMap,FVar3), puVar10 != (uint *)0x0)) {
    uVar11 = *puVar10;
  }
  if ((uVar12 != 0xffffffff) && (uVar11 != 0xffffffff)) {
    for (; uVar11 != uVar12;
        uVar11 = *(uint *)((param_1->FinalRefBoneInfo).AllocatorInstance.Data +
                          (longlong)(int)uVar11 * 0xc + 8)) {
      if (uVar11 == 0xffffffff) {
        (this->CachedBoneReferences).ArrayNum = 0;
        if ((this->CachedBoneReferences).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,0,&pTVar1->AllocatorInstance,0,&(this->CachedBoneReferences).ArrayMax);
        }
        break;
      }
      uVar8 = 0;
      if ((int)uVar11 < (param_1->FinalRefBoneInfo).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(undefined8 *)
               ((param_1->FinalRefBoneInfo).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc);
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x14,4,1,&pTVar1->AllocatorInstance,&(this->CachedBoneReferences).ArrayNum,
                         &(this->CachedBoneReferences).ArrayMax);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      memmove(pFVar5 + 0x14,pFVar5,(longlong)iVar9 * 0x14);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      *(undefined8 *)pFVar5 = uVar4;
      *(undefined4 *)(pFVar5 + 0xc) = 0xffffffff;
      *(undefined4 *)(pFVar5 + 8) = 0x7fffffff;
      *(uint *)(pFVar5 + 0x10) = uVar11;
      uVar8 = 0;
      if ((int)uVar11 < (param_1->FinalRefBoneInfo).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    piVar2 = &(this->CachedBoneReferences).ArrayNum;
    if (*piVar2 != 0) {
      FReferenceSkeleton::GetBoneName(param_1,(int)local_res18);
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x14,4,1,&pTVar1->AllocatorInstance,piVar2,
                         &(this->CachedBoneReferences).ArrayMax);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      memmove(pFVar5 + 0x14,pFVar5,(longlong)iVar9 * 0x14);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      *(undefined8 *)pFVar5 = local_res18[0];
      *(undefined4 *)(pFVar5 + 0xc) = 0xffffffff;
      *(undefined4 *)(pFVar5 + 8) = 0x7fffffff;
      *(uint *)(pFVar5 + 0x10) = uVar12;
      if (this->bAutoCalculateSpline == false) {
        iVar9 = this->PointCount;
        if (iVar9 < 2) {
          iVar9 = 2;
        }
      }
      else {
        iVar9 = (this->CachedBoneReferences).ArrayNum;
      }
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->ControlPoints,iVar9,Default);
    }
  }
  BuildBoneSpline(this,param_1);
  return;
}

// GatherDebugData @ 1464467a0

void __thiscall
FAnimNode_SplineIK::GatherDebugData(FAnimNode_SplineIK *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SplineIK::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SplineIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SplineIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SplineIK,(UObject *)pUVar1,
                         L"AnimNode_SplineIK");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_SplineIK.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_68);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_58,"(",1);
  ::FString::PrintfImpl(&local_68,L"Alpha: %.1f%%");
  iVar2 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&(this->EndBone).BoneName,local_38);
  ::FName::ToString(&(this->StartBone).BoneName,&local_48);
  ::FString::PrintfImpl(&local_68,L" StartBone: %s, EndBone: %s)");
  iVar2 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_68,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetControlPoint @ 1464494a0

TTransform<double> * __thiscall
FAnimNode_SplineIK::GetControlPoint
          (FAnimNode_SplineIK *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  __m128d _Var7;
  __m128d _Var8;
  bool bVar9;
  uint uVar10;
  TTransform<double> *pTVar11;
  longlong lVar12;
  
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  if ((-1 < param_1) && (param_1 < (this->ControlPoints).ArrayNum)) {
    uVar10 = 0;
    if (param_1 < (this->ControlPoints).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        pTVar11 = (TTransform<double> *)(*pcVar2)();
        return pTVar11;
      }
    }
    pFVar1 = (this->ControlPoints).AllocatorInstance.Data;
    lVar12 = (longlong)param_1 * 0x60;
    dVar3 = *(double *)(pFVar1 + lVar12 + 8);
    dVar4 = *(double *)(pFVar1 + lVar12 + 0x10);
    dVar5 = *(double *)(pFVar1 + lVar12 + 0x10 + 8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar12);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(pFVar1 + lVar12 + 0x20);
    dVar6 = *(double *)(pFVar1 + lVar12 + 0x20 + 8);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar4 = *(double *)(pFVar1 + lVar12 + 0x30);
    dVar5 = *(double *)(pFVar1 + lVar12 + 0x30 + 8);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
    dVar3 = *(double *)(pFVar1 + lVar12 + 0x40);
    dVar6 = *(double *)(pFVar1 + lVar12 + 0x40 + 8);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
    dVar4 = *(double *)(pFVar1 + lVar12 + 0x50);
    dVar5 = *(double *)(pFVar1 + lVar12 + 0x50 + 8);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar5;
    return __return_storage_ptr__;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var7.m128d_f64;
  _Var7 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var7.m128d_f64;
  _Var7 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var8.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var7.m128d_f64;
  return __return_storage_ptr__;
}

// GetTransformedSplinePoint @ 146450080

TTransform<double> * __thiscall
FAnimNode_SplineIK::GetTransformedSplinePoint
          (FAnimNode_SplineIK *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  __m128d _Var9;
  __m128d _Var10;
  bool bVar11;
  uint uVar12;
  TTransform<double> *pTVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  if ((-1 < param_1) && (param_1 < *(int *)&(this->TransformedSpline).Rotation.field_0x8)) {
    uVar14 = (uint)~param_1 >> 0x1f;
    uVar12 = 0;
    if (param_1 < *(int *)&(this->TransformedSpline).Scale.field_0x8) {
      uVar12 = uVar14;
    }
    if (uVar12 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TTransform<double> *)(*pcVar6)();
        return pTVar13;
      }
    }
    lVar3 = *(longlong *)&(this->TransformedSpline).Scale;
    lVar15 = (longlong)param_1 * 0x58;
    uVar12 = 0;
    if (param_1 < *(int *)&(this->TransformedSpline).Position.field_0x8) {
      uVar12 = uVar14;
    }
    if (uVar12 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TTransform<double> *)(*pcVar6)();
        return pTVar13;
      }
    }
    lVar4 = *(longlong *)&(this->TransformedSpline).Position;
    uVar12 = 0;
    if (param_1 < *(int *)&(this->TransformedSpline).Rotation.field_0x8) {
      uVar12 = uVar14;
    }
    if (uVar12 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TTransform<double> *)(*pcVar6)();
        return pTVar13;
      }
    }
    lVar5 = *(longlong *)&(this->TransformedSpline).Rotation;
    lVar16 = (longlong)param_1 * 0x80;
    pdVar1 = (double *)(lVar16 + 0x20 + lVar5);
    dVar2 = *pdVar1;
    dVar7 = pdVar1[1];
    pdVar1 = (double *)(lVar16 + 0x10 + lVar5);
    dVar8 = pdVar1[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar1;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar8;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar7;
    pdVar1 = (double *)(lVar15 + 8 + lVar4);
    dVar7 = pdVar1[1];
    dVar2 = *(double *)(lVar15 + 0x18 + lVar4);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *pdVar1;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar7;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    pdVar1 = (double *)(lVar3 + 8 + lVar15);
    dVar7 = pdVar1[1];
    dVar2 = *(double *)(lVar3 + 0x18 + lVar15);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *pdVar1;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar7;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    return __return_storage_ptr__;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var10 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var9.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var10.m128d_f64;
  _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var9.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var10.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var9.m128d_f64;
  return __return_storage_ptr__;
}

// GetTwist @ 1464503c0

float __thiscall FAnimNode_SplineIK::GetTwist(FAnimNode_SplineIK *this,float param_1,float param_2)

{
  FAlphaBlend::SetAlpha(&this->TwistBlend,param_1 / param_2);
  return (this->TwistBlend).BlendedValue;
}

// InitializeBoneReferences @ 146457ca0

void __thiscall
FAnimNode_SplineIK::InitializeBoneReferences(FAnimNode_SplineIK *this,FBoneContainer *param_1)

{
  FBoneReference *pFVar1;
  int iVar2;
  FBoneReference *this_00;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SplineIK::InitializeBoneReferences");
  FBoneReference::Initialize(&this->StartBone,param_1);
  FBoneReference::Initialize(&this->EndBone,param_1);
  GatherBoneReferences(this,param_1->RefSkeleton);
  iVar2 = (this->CachedBoneReferences).ArrayNum;
  this_00 = (FBoneReference *)(this->CachedBoneReferences).AllocatorInstance.Data;
  pFVar1 = (FBoneReference *)((longlong)this_00 + (longlong)iVar2 * 0x14);
  while( true ) {
    if ((this->CachedBoneReferences).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSplineIKCachedBoneData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    FBoneReference::Initialize(this_00,param_1);
    this_00 = (FBoneReference *)&this_00[1].BoneName.Number;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bce0

bool __thiscall
FAnimNode_SplineIK::IsValidToEvaluate
          (FAnimNode_SplineIK *this,USkeleton *param_1,FBoneContainer *param_2)

{
  FBoneReference *pFVar1;
  int iVar2;
  bool bVar3;
  FBoneReference *this_00;
  undefined1 local_res8 [8];
  
  iVar2 = (this->CachedBoneReferences).ArrayNum;
  if (iVar2 < 1) {
LAB_14645bd42:
    bVar3 = false;
  }
  else {
    this_00 = (FBoneReference *)(this->CachedBoneReferences).AllocatorInstance.Data;
    pFVar1 = (FBoneReference *)((longlong)this_00 + (longlong)iVar2 * 0x14);
    while( true ) {
      if ((this->CachedBoneReferences).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSplineIKCachedBoneData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar1) goto LAB_14645bd42;
      bVar3 = FBoneReference::IsValidToEvaluate(this_00,param_2);
      if (bVar3) break;
      this_00 = (FBoneReference *)&this_00[1].BoneName.Number;
    }
    bVar3 = true;
  }
  return bVar3;
}

// NeedsOnInitializeAnimInstance @ 14645ed60

bool __thiscall FAnimNode_SplineIK::NeedsOnInitializeAnimInstance(FAnimNode_SplineIK *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14645f010

void __thiscall
FAnimNode_SplineIK::OnInitializeAnimInstance
          (FAnimNode_SplineIK *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  USkeletalMeshComponent *pUVar1;
  USkeletalMesh *pUVar2;
  FReferenceSkeleton *pFVar3;
  
  pUVar1 = UAnimInstance::GetSkelMeshComponentChecked(param_2);
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = UAnimInstance::GetSkelMeshComponentChecked(param_2);
    pUVar2 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar1);
    if (pUVar2 != (USkeletalMesh *)0x0) {
      pUVar1 = UAnimInstance::GetSkelMeshComponentChecked(param_2);
      pUVar2 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar1);
      pFVar3 = (FReferenceSkeleton *)(**(code **)(pUVar2->_padding_ + 800))(pUVar2);
      GatherBoneReferences(this,pFVar3);
    }
  }
  return;
}

// SetControlPoint @ 146468670

void __thiscall
FAnimNode_SplineIK::SetControlPoint
          (FAnimNode_SplineIK *this,int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  longlong lVar20;
  
  if ((-1 < param_1) && (param_1 < (this->ControlPoints).ArrayNum)) {
    uVar4 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
    uVar5 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
    uVar6 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
    uVar7 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
    dVar8 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar10 = (param_2->Translation).XY.m128d_f64[0];
    dVar11 = (param_2->Translation).XY.m128d_f64[1];
    dVar12 = (param_2->Translation).ZW.m128d_f64[0];
    dVar13 = (param_2->Translation).ZW.m128d_f64[1];
    dVar14 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar15 = (param_2->Scale3D).XY.m128d_f64[1];
    dVar16 = (param_2->Scale3D).ZW.m128d_f64[0];
    dVar17 = (param_2->Scale3D).ZW.m128d_f64[1];
    uVar19 = 0;
    if (param_1 < (this->ControlPoints).ArrayNum) {
      uVar19 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->ControlPoints).AllocatorInstance.Data;
    lVar20 = (longlong)param_1 * 0x60;
    pFVar1 = pFVar2 + lVar20;
    *(undefined4 *)pFVar1 = uVar4;
    *(undefined4 *)(pFVar1 + 4) = uVar5;
    *(undefined4 *)(pFVar1 + 8) = uVar6;
    *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    *(double *)(pFVar2 + lVar20 + 0x10) = dVar8;
    *(double *)(pFVar2 + lVar20 + 0x10 + 8) = dVar9;
    *(double *)(pFVar2 + lVar20 + 0x20) = dVar10;
    *(double *)(pFVar2 + lVar20 + 0x20 + 8) = dVar11;
    *(double *)(pFVar2 + lVar20 + 0x30) = dVar12;
    *(double *)(pFVar2 + lVar20 + 0x30 + 8) = dVar13;
    *(double *)(pFVar2 + lVar20 + 0x40) = dVar14;
    *(double *)(pFVar2 + lVar20 + 0x40 + 8) = dVar15;
    *(double *)(pFVar2 + lVar20 + 0x50) = dVar16;
    *(double *)(pFVar2 + lVar20 + 0x50 + 8) = dVar17;
  }
  return;
}

// SetControlPointLocation @ 146468780

void __thiscall
FAnimNode_SplineIK::SetControlPointLocation
          (FAnimNode_SplineIK *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  
  if ((-1 < param_1) && (param_1 < (this->ControlPoints).ArrayNum)) {
    uVar7 = 0;
    if (param_1 < (this->ControlPoints).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->ControlPoints).AllocatorInstance.Data;
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    pFVar1 = pFVar3 + (longlong)param_1 * 0x60 + 0x20;
    *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar1 + 8) = dVar5;
    pFVar3 = pFVar3 + (longlong)param_1 * 0x60 + 0x30;
    *(double *)pFVar3 = dVar2;
    *(undefined8 *)(pFVar3 + 8) = 0;
  }
  return;
}

// SetControlPointRotation @ 146468830

void __thiscall
FAnimNode_SplineIK::SetControlPointRotation
          (FAnimNode_SplineIK *this,int param_1,TQuat<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  
  if ((-1 < param_1) && (param_1 < (this->ControlPoints).ArrayNum)) {
    uVar8 = 0;
    if (param_1 < (this->ControlPoints).ArrayNum) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->ControlPoints).AllocatorInstance.Data;
    dVar4 = param_2->Y;
    dVar5 = param_2->Z;
    dVar6 = param_2->W;
    pFVar1 = pFVar2 + (longlong)param_1 * 0x60;
    *(double *)pFVar1 = param_2->X;
    *(double *)(pFVar1 + 8) = dVar4;
    pFVar2 = pFVar2 + (longlong)param_1 * 0x60 + 0x10;
    *(double *)pFVar2 = dVar5;
    *(double *)(pFVar2 + 8) = dVar6;
  }
  return;
}

// SetControlPointScale @ 1464688e0

void __thiscall
FAnimNode_SplineIK::SetControlPointScale
          (FAnimNode_SplineIK *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  
  if ((-1 < param_1) && (param_1 < (this->ControlPoints).ArrayNum)) {
    uVar7 = 0;
    if (param_1 < (this->ControlPoints).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->ControlPoints).AllocatorInstance.Data;
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    pFVar1 = pFVar3 + (longlong)param_1 * 0x60 + 0x40;
    *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar1 + 8) = dVar5;
    pFVar3 = pFVar3 + (longlong)param_1 * 0x60 + 0x50;
    *(double *)pFVar3 = dVar2;
    *(undefined8 *)(pFVar3 + 8) = 0;
  }
  return;
}

// TransformSpline @ 14646ede0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAnimNode_SplineIK::TransformSpline(FAnimNode_SplineIK *this)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  bool bVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double local_178;
  double dStack_170;
  double local_168;
  TVector<double>_u_0 local_158;
  undefined1 local_140 [16];
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  
  uVar38 = 0;
  puVar1 = &(this->TransformedSpline).Position.field_0xc;
  *(undefined4 *)&(this->TransformedSpline).Position.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&this->TransformedSpline,0,(int *)puVar1);
  }
  puVar1 = &(this->TransformedSpline).Rotation.field_0xc;
  *(undefined4 *)&(this->TransformedSpline).Rotation.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&(this->TransformedSpline).Rotation,0,(int *)puVar1)
    ;
  }
  puVar1 = &(this->TransformedSpline).Scale.field_0xc;
  *(undefined4 *)&(this->TransformedSpline).Scale.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&(this->TransformedSpline).Scale,0,(int *)puVar1);
  }
  uVar39 = uVar38;
  uVar40 = uVar38;
  uVar42 = uVar38;
  if (0 < *(int *)&(this->BoneSpline).Position.field_0x8) {
    do {
      dVar21 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dVar22 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      dVar23 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dVar24 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      dVar16 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dVar18 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      dVar19 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_178 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      dStack_170 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_168 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      uVar37 = (uint)uVar38;
      if ((-1 < (int)uVar37) && ((int)uVar37 < (this->ControlPoints).ArrayNum)) {
        if (((int)uVar37 < 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (this->ControlPoints).AllocatorInstance.Data;
        dVar21 = *(double *)(pFVar5 + uVar40);
        dVar22 = *(double *)(pFVar5 + uVar40 + 8);
        dVar23 = *(double *)(pFVar5 + uVar40 + 0x10);
        dVar24 = *(double *)(pFVar5 + uVar40 + 0x10 + 8);
        dVar16 = *(double *)(pFVar5 + uVar40 + 0x20);
        dVar18 = *(double *)(pFVar5 + uVar40 + 0x20 + 8);
        dVar19 = *(double *)(pFVar5 + uVar40 + 0x30);
        local_178 = *(double *)(pFVar5 + uVar40 + 0x40);
        dStack_170 = *(double *)(pFVar5 + uVar40 + 0x40 + 8);
        local_168 = *(double *)(pFVar5 + uVar40 + 0x50);
      }
      uVar41 = ~uVar37 >> 0x1f;
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->BoneSpline).Position.field_0x8) {
        uVar34 = uVar41;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->BoneSpline).Position;
      local_140._8_4_ = SUB84(dVar18,0);
      local_140._0_8_ = dVar16;
      local_140._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      dVar16 = dVar16 + *(double *)(lVar6 + 8 + uVar39);
      dVar18 = dVar18 + *(double *)(lVar6 + 0x10 + uVar39);
      dVar20 = dVar19 + *(double *)(lVar6 + 0x18 + uVar39);
      uVar47 = SUB84(dVar18,0);
      uVar48 = (undefined4)((ulonglong)dVar18 >> 0x20);
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->BoneSpline).Rotation.field_0x8) {
        uVar34 = uVar41;
      }
      local_128._8_4_ = uVar47;
      local_128._0_8_ = dVar16;
      local_128._12_4_ = uVar48;
      local_130 = dVar19;
      local_118 = dVar20;
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->BoneSpline).Rotation;
      pdVar2 = (double *)(lVar6 + 0x20 + uVar42);
      dVar18 = *pdVar2;
      dVar19 = pdVar2[1];
      auVar43._8_4_ = SUB84(dVar24,0);
      auVar43._0_8_ = dVar24;
      auVar43._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      pdVar2 = (double *)(lVar6 + 0x10 + uVar42);
      dVar30 = *pdVar2;
      dVar31 = pdVar2[1];
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->BoneSpline).Scale.field_0x8) {
        uVar34 = uVar41;
      }
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      auVar44._8_4_ = SUB84(dVar23,0);
      auVar44._0_8_ = dVar23;
      auVar44._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar29 = dVar21 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar43._8_8_ * dVar31 +
               dVar22 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar44._8_8_ * dVar30 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar27 = dVar21 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar24 * dVar19 +
               dVar22 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar23 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->BoneSpline).Scale;
      dVar17 = local_178 * *(double *)(lVar6 + 8 + uVar39);
      local_110 = local_178;
      dStack_108 = dStack_170;
      dStack_170 = dStack_170 * *(double *)(lVar6 + 0x10 + uVar39);
      local_100 = local_168;
      local_168 = local_168 * *(double *)(lVar6 + 0x18 + uVar39);
      uVar45 = SUB84(dStack_170,0);
      uVar46 = (undefined4)((ulonglong)dStack_170 >> 0x20);
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->BoneSpline).Position.field_0x8) {
        uVar34 = uVar41;
      }
      local_f8._8_4_ = uVar45;
      local_f8._0_8_ = dVar17;
      local_f8._12_4_ = uVar46;
      local_e8 = local_168;
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->BoneSpline).Position;
      iVar35 = *(int *)&(this->TransformedSpline).Position.field_0x8;
      puVar1 = &(this->TransformedSpline).Position.field_0xc;
      if (iVar35 == *(int *)puVar1) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,(ForAnyElementType *)&this->TransformedSpline,(int *)puVar1);
      }
      *(int *)&(this->TransformedSpline).Position.field_0x8 = iVar35 + 1;
      uVar32 = ((undefined8 *)(uVar39 + lVar6))[1];
      lVar36 = (longlong)iVar35 * 0x58;
      lVar7 = *(longlong *)&(this->TransformedSpline).Position;
      *(undefined8 *)(lVar36 + lVar7) = *(undefined8 *)(uVar39 + lVar6);
      ((undefined8 *)(lVar36 + lVar7))[1] = uVar32;
      puVar3 = (undefined8 *)(uVar39 + 0x10 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x10 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar39 + 0x20 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x20 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar39 + 0x30 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x30 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar39 + 0x40 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x40 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      *(undefined8 *)(lVar36 + 0x50 + lVar7) = *(undefined8 *)(uVar39 + 0x50 + lVar6);
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->BoneSpline).Rotation.field_0x8) {
        uVar34 = uVar41;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->BoneSpline).Rotation;
      iVar35 = *(int *)&(this->TransformedSpline).Rotation.field_0x8;
      puVar1 = &(this->TransformedSpline).Rotation.field_0xc;
      if (iVar35 == *(int *)puVar1) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,(ForAnyElementType *)&(this->TransformedSpline).Rotation,
                            (int *)puVar1);
      }
      *(int *)&(this->TransformedSpline).Rotation.field_0x8 = iVar35 + 1;
      uVar32 = ((undefined8 *)(uVar42 + lVar6))[1];
      lVar7 = *(longlong *)&(this->TransformedSpline).Rotation;
      lVar36 = (longlong)iVar35 * 0x80;
      *(undefined8 *)(lVar36 + lVar7) = *(undefined8 *)(uVar42 + lVar6);
      ((undefined8 *)(lVar36 + lVar7))[1] = uVar32;
      puVar3 = (undefined8 *)(uVar42 + 0x10 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x10 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar42 + 0x20 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x20 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar42 + 0x30 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x30 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar42 + 0x40 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x40 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar42 + 0x50 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x50 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar42 + 0x60 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x60 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar42 + 0x70 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x70 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->BoneSpline).Scale.field_0x8) {
        uVar34 = uVar41;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->BoneSpline).Scale;
      iVar35 = *(int *)&(this->TransformedSpline).Scale.field_0x8;
      puVar1 = &(this->TransformedSpline).Scale.field_0xc;
      if (iVar35 == *(int *)puVar1) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,(ForAnyElementType *)&(this->TransformedSpline).Scale,
                            (int *)puVar1);
      }
      *(int *)&(this->TransformedSpline).Scale.field_0x8 = iVar35 + 1;
      uVar32 = ((undefined8 *)(uVar39 + lVar6))[1];
      lVar36 = (longlong)iVar35 * 0x58;
      local_e0._8_4_ = uVar47;
      local_e0._0_8_ = dVar16;
      local_e0._12_4_ = uVar48;
      lVar7 = *(longlong *)&(this->TransformedSpline).Scale;
      *(undefined8 *)(lVar36 + lVar7) = *(undefined8 *)(uVar39 + lVar6);
      ((undefined8 *)(lVar36 + lVar7))[1] = uVar32;
      puVar3 = (undefined8 *)(uVar39 + 0x10 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x10 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar39 + 0x20 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x20 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar39 + 0x30 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x30 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      puVar3 = (undefined8 *)(uVar39 + 0x40 + lVar6);
      uVar32 = puVar3[1];
      puVar4 = (undefined8 *)(lVar36 + 0x40 + lVar7);
      *puVar4 = *puVar3;
      puVar4[1] = uVar32;
      *(undefined8 *)(lVar36 + 0x50 + lVar7) = *(undefined8 *)(uVar39 + 0x50 + lVar6);
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->TransformedSpline).Position.field_0x8) {
        uVar34 = uVar41;
      }
      local_d0 = dVar20;
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->TransformedSpline).Position;
      auVar25._8_4_ = uVar47;
      auVar25._0_8_ = dVar16;
      auVar25._12_4_ = uVar48;
      *(undefined1 (*) [16])(lVar6 + 8 + uVar39) = auVar25;
      *(double *)(lVar6 + 0x18 + uVar39) = dVar20;
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->TransformedSpline).Rotation.field_0x8) {
        uVar34 = uVar41;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->TransformedSpline).Rotation;
      auVar28._8_4_ = SUB84(dVar29,0);
      auVar28._0_8_ =
           dVar21 * dVar19 * dVar9 + dVar24 * dVar30 + dVar22 * dVar18 * dVar11 +
           dVar23 * dVar31 * dVar13;
      auVar28._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      *(undefined1 (*) [16])(lVar6 + 0x10 + uVar42) = auVar28;
      auVar26._8_4_ = SUB84(dVar27,0);
      auVar26._0_8_ =
           dVar21 * dVar31 * dVar10 + dVar24 * dVar18 + dVar22 * dVar30 * dVar12 +
           dVar23 * dVar19 * dVar14;
      auVar26._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      *(undefined1 (*) [16])(lVar6 + 0x20 + uVar42) = auVar26;
      local_c8._8_4_ = uVar45;
      local_c8._0_8_ = dVar17;
      local_c8._12_4_ = uVar46;
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->TransformedSpline).Scale.field_0x8) {
        uVar34 = uVar41;
      }
      local_b8 = local_168;
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->TransformedSpline).Scale;
      uVar38 = (ulonglong)(uVar37 + 1);
      uVar40 = uVar40 + 0x60;
      uVar42 = uVar42 + 0x80;
      auVar15._8_4_ = uVar45;
      auVar15._0_8_ = dVar17;
      auVar15._12_4_ = uVar46;
      *(undefined1 (*) [16])(lVar6 + 8 + uVar39) = auVar15;
      *(double *)(lVar6 + 0x18 + uVar39) = local_168;
      uVar39 = uVar39 + 0x58;
    } while ((int)(uVar37 + 1) < *(int *)&(this->BoneSpline).Position.field_0x8);
  }
  local_158._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_158._s_0.Y = _UNK_150689688;
  local_158._s_0.Z = __real_3ff0000000000000;
  FSplineCurves::UpdateSpline
            (&this->TransformedSpline,false,false,10,false,0.0,(TVector<double> *)&local_158._s_0);
  FSplinePositionLinearApproximation::Build
            (&this->TransformedSpline,&this->LinearApproximation,__real_3f000000);
  return;
}

