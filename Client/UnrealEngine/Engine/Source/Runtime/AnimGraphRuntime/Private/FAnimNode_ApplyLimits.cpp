// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// StaticStruct @ 1463d2ea0

UScriptStruct * __cdecl FAnimNode_ApplyLimits::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ApplyLimits.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ApplyLimits.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits,(UObject *)pUVar1,
                         L"AnimNode_ApplyLimits");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ApplyLimits.OuterSingleton;
}

// FAnimNode_ApplyLimits @ 146403550

FAnimNode_ApplyLimits * __thiscall
FAnimNode_ApplyLimits::FAnimNode_ApplyLimits(FAnimNode_ApplyLimits *this)

{
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_ApplyLimits__6B_;
  (this->AngularRangeLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AngularRangeLimits).ArrayNum = 0;
  (this->AngularRangeLimits).ArrayMax = 0;
  (this->AngularOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AngularOffsets).ArrayNum = 0;
  (this->AngularOffsets).ArrayMax = 0;
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 1464295c0

void __thiscall
FAnimNode_ApplyLimits::EvaluateSkeletalControl_AnyThread
          (FAnimNode_ApplyLimits *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FCSPose<FCompactPose> *pFVar1;
  FBlendedCurve *pFVar2;
  undefined1 *puVar3;
  ushort uVar4;
  int iVar5;
  FAnimInstanceProxy *pFVar6;
  void *pvVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  double *pdVar16;
  double *pdVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 local_328 [16];
  longlong local_318;
  longlong *local_310;
  ForElementType<unsigned_int> local_308;
  FBlendedCurve *local_300;
  FWeakObjectPtr local_2f8;
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [24];
  void *pvStack_2b0;
  ForAnyElementType local_2a8;
  undefined1 local_2a0;
  ForAnyElementType local_298;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_290;
  ForAnyElementType local_288;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_280;
  longlong local_278;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_270
  ;
  longlong local_268;
  void *local_260;
  undefined1 local_258 [16];
  undefined1 local_248 [48];
  longlong *local_218;
  ForElementType<UE::Anim::FCurveElement> FStack_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_1f0;
  bool local_1b0;
  undefined1 local_1a8 [56];
  ForElementType<UE::Anim::FCurveElement> FStack_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_150;
  bool local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TQuat<double> local_d8;
  TQuat<double> local_b8;
  FAnimationPoseData local_98;
  FAnimationPoseData local_80;
  FAnimationPoseData local_68 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyLimits::EvaluateSkeletalControl_AnyThread");
  pFVar6 = (FAnimInstanceProxy *)param_1->_padding_;
  FAnimationBaseContext::FAnimationBaseContext
            ((FAnimationBaseContext *)local_248,pFVar6,(FAnimationUpdateSharedContext *)0x0);
  uVar19 = 0;
  local_248._32_8_ = 0;
  local_218 = (longlong *)0x0;
  FStack_210.Data = (FCurveElement *)0x0;
  local_1f8 = 0;
  TStack_1f0.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248._40_8_ = 0;
  local_208 = 0;
  local_200 = 0;
  TStack_1f0.UniqueTypedBoneIndices.ArrayNum = 0;
  TStack_1f0.UniqueTypedBoneIndices.ArrayMax = 0;
  TStack_1f0.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1f0.AttributeIdentifiers.ArrayNum = 0;
  TStack_1f0.AttributeIdentifiers.ArrayMax = 0;
  TStack_1f0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1f0.Values.ArrayNum = 0;
  TStack_1f0.Values.ArrayMax = 0;
  TStack_1f0.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1f0.UniqueTypes.ArrayNum = 0;
  TStack_1f0.UniqueTypes.ArrayMax = 0;
  local_1b0 = false;
  FPoseContext::InitializeImpl((FPoseContext *)local_248,pFVar6);
  pFVar6 = (FAnimInstanceProxy *)param_1->_padding_;
  FAnimationBaseContext::FAnimationBaseContext
            ((FAnimationBaseContext *)local_1a8,pFVar6,(FAnimationUpdateSharedContext *)0x0);
  local_1a8._32_8_ = 0;
  local_1a8._48_8_ = 0;
  FStack_170.Data = (FCurveElement *)0x0;
  local_158 = 0;
  TStack_150.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8._40_8_ = 0;
  local_168 = 0;
  local_160 = 0;
  TStack_150.UniqueTypedBoneIndices.ArrayNum = 0;
  TStack_150.UniqueTypedBoneIndices.ArrayMax = 0;
  TStack_150.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_150.AttributeIdentifiers.ArrayNum = 0;
  TStack_150.AttributeIdentifiers.ArrayMax = 0;
  TStack_150.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_150.Values.ArrayNum = 0;
  TStack_150.Values.ArrayMax = 0;
  TStack_150.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_150.UniqueTypes.ArrayNum = 0;
  TStack_150.UniqueTypes.ArrayMax = 0;
  local_110 = false;
  FPoseContext::InitializeImpl((FPoseContext *)local_1a8,pFVar6);
  pFVar1 = &param_1->Pose;
  local_2f8 = (FWeakObjectPtr)pFVar1;
  FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses
            (pFVar1,(FCompactPose *)(local_248 + 0x20));
  FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses
            (pFVar1,(FCompactPose *)(local_1a8 + 0x20));
  pFVar2 = &param_1->Curve;
  local_300 = pFVar2;
  if ((FBlendedCurve *)&FStack_210 != pFVar2) {
    iVar5 = *(int *)&(param_1->Curve).field_0x8;
    pvVar7 = *(void **)pFVar2;
    local_208._0_4_ = iVar5;
    if ((iVar5 == 0) && (local_208._4_4_ == 0)) {
      local_208 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar5,local_208._4_4_,&FStack_210,iVar5,(int *)((longlong)&local_208 + 4));
      if (iVar5 != 0) {
        memcpy(FStack_210.Data,pvVar7,(longlong)iVar5 << 4);
      }
    }
  }
  local_200 = (param_1->Curve).field_0x10;
  local_1f8 = *(undefined8 *)&(param_1->Curve).field_0x18;
  if ((FBlendedCurve *)&FStack_170 != pFVar2) {
    iVar5 = *(int *)&(param_1->Curve).field_0x8;
    pvVar7 = *(void **)pFVar2;
    local_168._0_4_ = iVar5;
    if ((iVar5 == 0) && (local_168._4_4_ == 0)) {
      local_168 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar5,local_168._4_4_,&FStack_170,iVar5,(int *)((longlong)&local_168 + 4));
      if (iVar5 != 0) {
        memcpy(FStack_170.Data,pvVar7,(longlong)iVar5 << 4);
      }
    }
  }
  local_160 = (param_1->Curve).field_0x10;
  local_158 = *(undefined8 *)&(param_1->Curve).field_0x18;
  UE::Anim::FStackAttributeContainer::operator=
            ((FStackAttributeContainer *)&TStack_1f0,&param_1->CustomAttributes);
  UE::Anim::FStackAttributeContainer::operator=
            ((FStackAttributeContainer *)&TStack_150,&param_1->CustomAttributes);
  local_310 = local_218;
  bVar11 = false;
  local_308 = (ForElementType<unsigned_int>)(longlong)(this->AngularRangeLimits).ArrayNum;
  if (0 < (longlong)local_308) {
    local_318 = 0;
    uVar20 = uVar19;
    uVar22 = uVar19;
    do {
      plVar15 = local_310;
      uVar18 = (uint)uVar19;
      uVar21 = ~uVar18 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar18 < (this->AngularRangeLimits).ArrayNum) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_328._8_8_ = (this->AngularRangeLimits).AllocatorInstance.Data;
      FBoneReference::GetCompactPoseIndex
                ((FBoneReference *)(local_328._8_8_ + uVar20 + 0x30),(FBoneContainer *)local_328);
      lVar14 = (longlong)(int)local_328._0_4_;
      uVar13 = 0;
      if ((int)local_328._0_4_ < (int)local_248._40_4_) {
        uVar13 = (uint)~local_328._0_4_ >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar8 = plVar15[0x1d];
      pdVar17 = (double *)(lVar14 * 0x60 + local_248._32_8_);
      if (lVar8 == 0) {
        plVar15 = (longlong *)(plVar15[9] + 0x30);
      }
      else {
        plVar15 = (longlong *)(lVar8 + 0x10);
      }
      lVar14 = (longlong)(int)local_328._0_4_;
      uVar13 = 0;
      if ((int)local_328._0_4_ < (int)local_310[1]) {
        uVar13 = (uint)~local_328._0_4_ >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar4 = *(ushort *)(*local_310 + lVar14 * 2);
      if (((int)plVar15[1] <= (int)(uint)uVar4) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar14 = local_318;
      local_d8.X = *pdVar17;
      local_d8.Y = pdVar17[1];
      local_d8.Z = pdVar17[2];
      local_d8.W = pdVar17[3];
      pdVar16 = (double *)((ulonglong)uVar4 * 0x60 + *plVar15);
      uVar13 = 0;
      if ((int)uVar18 < (this->AngularOffsets).ArrayNum) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (this->AngularOffsets).AllocatorInstance.Data;
      local_108._s_0.Z =
           *(double *)(local_328._8_8_ + uVar20 + 0x28) + *(double *)(pFVar9 + uVar22 + 0x10);
      local_108._s_0.Y =
           *(double *)(local_328._8_8_ + uVar20 + 0x20) + *(double *)(pFVar9 + uVar22 + 8);
      local_108._s_0.X = *(double *)(local_328._8_8_ + uVar20 + 0x18) + *(double *)(pFVar9 + uVar22)
      ;
      uVar13 = 0;
      if ((int)uVar18 < (this->AngularOffsets).ArrayNum) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (this->AngularOffsets).AllocatorInstance.Data;
      local_f0._s_0.Y = *(double *)(local_328._8_8_ + uVar20 + 8) + *(double *)(pFVar9 + uVar22 + 8)
      ;
      local_f0._s_0.X = *(double *)(local_328._8_8_ + uVar20) + *(double *)(pFVar9 + uVar22);
      local_f0._s_0.Z =
           *(double *)(local_328._8_8_ + uVar20 + 0x10) + *(double *)(pFVar9 + uVar22 + 0x10);
      local_b8.X = *pdVar16;
      local_b8.Y = pdVar16[1];
      local_b8.Z = pdVar16[2];
      local_b8.W = pdVar16[3];
      bVar12 = AnimationCore::ConstrainAngularRangeUsingEuler
                         (&local_d8,&local_b8,(TVector<double> *)&local_f0._s_0,
                          (TVector<double> *)&local_108._s_0);
      pFVar2 = local_300;
      if (bVar12) {
        *pdVar17 = local_d8.X;
        pdVar17[1] = local_d8.Y;
        bVar11 = true;
        pdVar17[2] = local_d8.Z;
        pdVar17[3] = local_d8.W;
      }
      local_318 = lVar14 + 1;
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar20 = uVar20 + 0x40;
      uVar22 = uVar22 + 0x18;
    } while (local_318 < (longlong)local_308);
    if (bVar11) {
      fVar23 = *(float *)((longlong)&this->_padding_ + 4);
      if (__real_3f800000 <= fVar23) {
        fVar23 = __real_3f800000;
      }
      pFVar6 = (FAnimInstanceProxy *)param_1->_padding_;
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)local_2e8,pFVar6,(FAnimationUpdateSharedContext *)0x0);
      local_2c8._0_8_ = (FScriptContainerElement *)0x0;
      local_2c8._16_8_ = (FScriptContainerElement *)0x0;
      pvStack_2b0 = (void *)0x0;
      local_298.Data = (FScriptContainerElement *)0x0;
      pTStack_290 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_2c8._8_8_ = 0;
      local_2a8.Data = (FScriptContainerElement *)0x0;
      local_2a0 = 0;
      local_288.Data = (FScriptContainerElement *)0x0;
      local_280 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      local_278 = 0;
      local_270 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                   *)0x0;
      local_268 = 0;
      local_260 = (void *)0x0;
      local_258._0_8_ = 0;
      local_258[8] = false;
      FPoseContext::InitializeImpl((FPoseContext *)local_2e8,pFVar6);
      FAnimationPoseData::FAnimationPoseData(local_68,(FPoseContext *)local_248);
      FAnimationPoseData::FAnimationPoseData(&local_80,(FPoseContext *)local_1a8);
      FAnimationPoseData::FAnimationPoseData(&local_98,(FPoseContext *)local_2e8);
      FAnimationRuntime::BlendTwoPosesTogether(local_68,&local_80,fVar23,&local_98);
      FCSPose<FCompactPose>::InitPose((FCSPose<FCompactPose> *)local_2f8,(FCompactPose *)local_2c8);
      pvVar7 = pvStack_2b0;
      if (pFVar2 != (FBlendedCurve *)&pvStack_2b0) {
        iVar5 = (int)local_2a8.Data;
        lVar14 = (longlong)(int)local_2a8.Data;
        puVar3 = &pFVar2->field_0xc;
        *(int *)&pFVar2->field_0x8 = (int)local_2a8.Data;
        if (((int)local_2a8.Data == 0) && (*(int *)puVar3 == 0)) {
          *(undefined4 *)puVar3 = 0;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,(int)local_2a8.Data,*(int *)puVar3,
                     (ForElementType<UE::Anim::FCurveElement> *)pFVar2,(int)local_2a8.Data,
                     (int *)puVar3);
          if (iVar5 != 0) {
            memcpy(*(void **)pFVar2,pvVar7,lVar14 << 4);
          }
        }
      }
      pFVar2->field_0x10 = local_2a0;
      *(FScriptContainerElement **)&pFVar2->field_0x18 = local_298.Data;
      if (local_260 != (void *)0x0) {
        FMemory::Free(local_260);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (local_270,(int)local_268);
      if (local_270 !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_270);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                (local_280,(int)local_278);
      if (local_280 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_280);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_290,(int)local_288.Data);
      if (pTStack_290 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(pTStack_290);
      }
    }
  }
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&TStack_150);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&TStack_1f0);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146442430

void __thiscall
FAnimNode_ApplyLimits::GatherDebugData(FAnimNode_ApplyLimits *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyLimits::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ApplyLimits.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ApplyLimits.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits,(UObject *)pUVar1,
                         L"AnimNode_ApplyLimits");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ApplyLimits.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(local_38,"(",1);
  ::FString::PrintfImpl(&local_48,L"Alpha: %.1f%%");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_48,L")");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 1464560f0

void __thiscall
FAnimNode_ApplyLimits::InitializeBoneReferences(FAnimNode_ApplyLimits *this,FBoneContainer *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyLimits::InitializeBoneReferences");
  iVar1 = (this->AngularRangeLimits).ArrayNum;
  pFVar2 = (this->AngularRangeLimits).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->AngularRangeLimits).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAngularRangeLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FBoneReference::Initialize((FBoneReference *)(pFVar2 + 0x30),param_1);
    pFVar2 = pFVar2 + 0x40;
  }
  RecalcLimits(this);
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645b510

bool __thiscall
FAnimNode_ApplyLimits::IsValidToEvaluate
          (FAnimNode_ApplyLimits *this,USkeleton *param_1,FBoneContainer *param_2)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AngularRangeLimits).ArrayNum;
  pFVar3 = (this->AngularRangeLimits).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->AngularRangeLimits).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAngularRangeLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = FBoneReference::IsValidToEvaluate((FBoneReference *)(pFVar3 + 0x30),param_2);
    if (bVar2) {
      return true;
    }
    pFVar3 = pFVar3 + 0x40;
  }
  return false;
}

// NeedsOnInitializeAnimInstance @ 14645ed30

bool __thiscall FAnimNode_ApplyLimits::NeedsOnInitializeAnimInstance(FAnimNode_ApplyLimits *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14645efe0

void __thiscall
FAnimNode_ApplyLimits::OnInitializeAnimInstance
          (FAnimNode_ApplyLimits *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (this->AngularRangeLimits).ArrayNum;
  this_00 = &this->AngularOffsets;
  iVar5 = (this->AngularOffsets).ArrayNum;
  if (iVar5 < (int)uVar2) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,uVar2 - iVar5);
    return;
  }
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((int)uVar2 < iVar5) {
    uVar6 = iVar5 - uVar2;
    if (((int)(uVar6 | uVar2) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (this_00->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x18;
      iVar5 = ((this->AngularOffsets).ArrayNum - uVar2) - uVar6;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x18,(longlong)iVar5 * 0x18);
      }
      piVar1 = &(this->AngularOffsets).ArrayNum;
      *piVar1 = *piVar1 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&this_00->AllocatorInstance,(this->AngularOffsets).ArrayNum,
                 &(this->AngularOffsets).ArrayMax);
    }
  }
  return;
}

// RecalcLimits @ 146462a40

void __thiscall FAnimNode_ApplyLimits::RecalcLimits(FAnimNode_ApplyLimits *this)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (this->AngularRangeLimits).ArrayNum;
  this_00 = &this->AngularOffsets;
  iVar5 = (this->AngularOffsets).ArrayNum;
  if (iVar5 < (int)uVar2) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,uVar2 - iVar5);
    return;
  }
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((int)uVar2 < iVar5) {
    uVar6 = iVar5 - uVar2;
    if (((int)(uVar6 | uVar2) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (this_00->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x18;
      iVar5 = ((this->AngularOffsets).ArrayNum - uVar2) - uVar6;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x18,(longlong)iVar5 * 0x18);
      }
      piVar1 = &(this->AngularOffsets).ArrayNum;
      *piVar1 = *piVar1 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&this_00->AllocatorInstance,(this->AngularOffsets).ArrayNum,
                 &(this->AngularOffsets).ArrayMax);
    }
  }
  return;
}

