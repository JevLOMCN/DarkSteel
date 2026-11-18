// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 18

// StaticStruct @ 14d29b5e0

UScriptStruct * __cdecl FAnimNode_DragonControlBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DragonControlBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_DragonControlBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonControlBase,(UObject *)pUVar1,
                         L"AnimNode_DragonControlBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DragonControlBase.OuterSingleton;
}

// GetLODThreshold @ 14d29b620

int __thiscall FAnimNode_DragonControlBase::GetLODThreshold(FAnimNode_DragonControlBase *this)

{
  return this->LODThreshold;
}

// EvaluateBoneTransforms @ 14d29b630

void __thiscall
FAnimNode_DragonControlBase::EvaluateBoneTransforms
          (FAnimNode_DragonControlBase *this,USkeletalMeshComponent *param_1,
          FCSPose<FCompactPose> *param_2,TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_3
          )

{
  return;
}

// IsValidToEvaluate @ 14d29b640

bool __thiscall
FAnimNode_DragonControlBase::IsValidToEvaluate
          (FAnimNode_DragonControlBase *this,USkeleton *param_1,FBoneContainer *param_2)

{
  return false;
}

// InitializeBoneReferences @ 14d29b650

void __thiscall
FAnimNode_DragonControlBase::InitializeBoneReferences
          (FAnimNode_DragonControlBase *this,FBoneContainer *param_1)

{
  return;
}

// FAnimNode_DragonControlBase @ 14d29dc80

FAnimNode_DragonControlBase * __thiscall
FAnimNode_DragonControlBase::FAnimNode_DragonControlBase(FAnimNode_DragonControlBase *this)

{
  float fVar1;
  
  fVar1 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_DragonControlBase__6B_;
  this->_padding_ = 0;
  *(undefined8 *)&this->ComponentPose = 0;
  (this->ComponentPose).field_0xc = 0;
  this->ActualAlpha = 0.0;
  (this->AlphaBoolBlend).BlendInTime = 0.0;
  (this->AlphaBoolBlend).BlendOutTime = 0.0;
  (this->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  *(undefined4 *)&(this->ComponentPose).field_0x8 = 0xffffffff;
  this->LODThreshold = -1;
  this->AlphaInputType = Float;
  this->bAlphaBoolEnabled = true;
  this->Alpha = 1.0;
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  (this->AlphaBoolBlend).BlendOption = HermiteCubic;
  (this->AlphaBoolBlend).bInitialized = false;
  FAlphaBlend::FAlphaBlend(&(this->AlphaBoolBlend).AlphaBlend,fVar1);
  (this->AlphaCurveName).ComparisonIndex = 0;
  (this->AlphaCurveName).Number = 0;
  (this->AlphaScaleBiasClamp).bMapRange = false;
  (this->AlphaScaleBiasClamp).bClampResult = false;
  (this->AlphaScaleBiasClamp).bInterpResult = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  (this->AlphaScaleBiasClamp).InRange.Min = 0.0;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).InRange.Max = 0x3f800000;
  (this->AlphaScaleBiasClamp).OutRange.Max = 1.0;
  (this->AlphaScaleBiasClamp).Scale = 1.0;
  (this->AlphaScaleBiasClamp).Bias = 0.0;
  (this->AlphaScaleBiasClamp).ClampMin = 0.0;
  (this->AlphaScaleBiasClamp).ClampMax = 1.0;
  (this->AlphaScaleBiasClamp).InterpSpeedIncreasing = 10.0;
  (this->AlphaScaleBiasClamp).InterpSpeedDecreasing = 10.0;
  (this->AlphaScaleBiasClamp).InterpolatedResult = 0.0;
  (this->BoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTransforms).ArrayNum = 0;
  (this->BoneTransforms).ArrayMax = 0;
  return this;
}

// operator= @ 14d2a1210

FAnimNode_DragonControlBase * __thiscall
FAnimNode_DragonControlBase::operator=
          (FAnimNode_DragonControlBase *this,FAnimNode_DragonControlBase *param_1)

{
  UCurveFloat *pUVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  this->_padding_ = param_1->_padding_;
  uVar2 = *(undefined8 *)&(param_1->ComponentPose).field_0x8;
  *(undefined8 *)&this->ComponentPose = *(undefined8 *)&param_1->ComponentPose;
  *(undefined8 *)&(this->ComponentPose).field_0x8 = uVar2;
  this->LODThreshold = param_1->LODThreshold;
  this->ActualAlpha = param_1->ActualAlpha;
  this->AlphaInputType = param_1->AlphaInputType;
  this->bAlphaBoolEnabled = param_1->bAlphaBoolEnabled;
  this->Alpha = param_1->Alpha;
  this->AlphaScaleBias = param_1->AlphaScaleBias;
  (this->AlphaBoolBlend).BlendInTime = (param_1->AlphaBoolBlend).BlendInTime;
  (this->AlphaBoolBlend).BlendOutTime = (param_1->AlphaBoolBlend).BlendOutTime;
  (this->AlphaBoolBlend).BlendOption = (param_1->AlphaBoolBlend).BlendOption;
  (this->AlphaBoolBlend).bInitialized = (param_1->AlphaBoolBlend).bInitialized;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr,
     pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->AlphaBoolBlend).CustomCurve.field0_0x0 = (param_1->AlphaBoolBlend).CustomCurve.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->AlphaBoolBlend).AlphaBlend.CustomCurve.field0_0x0.DebugPtr,
     pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->AlphaBoolBlend).AlphaBlend.CustomCurve.field0_0x0 =
       (param_1->AlphaBoolBlend).AlphaBlend.CustomCurve.field0_0x0;
  (this->AlphaBoolBlend).AlphaBlend.BlendTime = (param_1->AlphaBoolBlend).AlphaBlend.BlendTime;
  (this->AlphaBoolBlend).AlphaBlend.AlphaLerp = (param_1->AlphaBoolBlend).AlphaBlend.AlphaLerp;
  (this->AlphaBoolBlend).AlphaBlend.AlphaBlend = (param_1->AlphaBoolBlend).AlphaBlend.AlphaBlend;
  (this->AlphaBoolBlend).AlphaBlend.BlendTimeRemaining =
       (param_1->AlphaBoolBlend).AlphaBlend.BlendTimeRemaining;
  (this->AlphaBoolBlend).AlphaBlend.BlendedValue = (param_1->AlphaBoolBlend).AlphaBlend.BlendedValue
  ;
  (this->AlphaBoolBlend).AlphaBlend.BeginValue = (param_1->AlphaBoolBlend).AlphaBlend.BeginValue;
  (this->AlphaBoolBlend).AlphaBlend.DesiredValue = (param_1->AlphaBoolBlend).AlphaBlend.DesiredValue
  ;
  (this->AlphaBoolBlend).AlphaBlend.BlendOption = (param_1->AlphaBoolBlend).AlphaBlend.BlendOption;
  (this->AlphaBoolBlend).AlphaBlend.bNeedsToResetAlpha =
       (param_1->AlphaBoolBlend).AlphaBlend.bNeedsToResetAlpha;
  (this->AlphaBoolBlend).AlphaBlend.bNeedsToResetBlendTime =
       (param_1->AlphaBoolBlend).AlphaBlend.bNeedsToResetBlendTime;
  (this->AlphaBoolBlend).AlphaBlend.bNeedsToResetCachedDesiredBlendedValue =
       (param_1->AlphaBoolBlend).AlphaBlend.bNeedsToResetCachedDesiredBlendedValue;
  (this->AlphaBoolBlend).AlphaBlend.CachedDesiredBlendedValue =
       (param_1->AlphaBoolBlend).AlphaBlend.CachedDesiredBlendedValue;
  this->AlphaCurveName = param_1->AlphaCurveName;
  bVar3 = (param_1->AlphaScaleBiasClamp).bClampResult;
  bVar4 = (param_1->AlphaScaleBiasClamp).bInterpResult;
  bVar5 = (param_1->AlphaScaleBiasClamp).bInitialized;
  fVar6 = (param_1->AlphaScaleBiasClamp).InRange.Min;
  uVar2 = *(undefined8 *)&(param_1->AlphaScaleBiasClamp).InRange.Max;
  (this->AlphaScaleBiasClamp).bMapRange = (param_1->AlphaScaleBiasClamp).bMapRange;
  (this->AlphaScaleBiasClamp).bClampResult = bVar3;
  (this->AlphaScaleBiasClamp).bInterpResult = bVar4;
  (this->AlphaScaleBiasClamp).bInitialized = bVar5;
  (this->AlphaScaleBiasClamp).InRange.Min = fVar6;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).InRange.Max = uVar2;
  fVar6 = (param_1->AlphaScaleBiasClamp).Bias;
  fVar7 = (param_1->AlphaScaleBiasClamp).ClampMin;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).OutRange.Max =
       *(undefined8 *)&(param_1->AlphaScaleBiasClamp).OutRange.Max;
  (this->AlphaScaleBiasClamp).Bias = fVar6;
  (this->AlphaScaleBiasClamp).ClampMin = fVar7;
  fVar6 = (param_1->AlphaScaleBiasClamp).InterpSpeedIncreasing;
  fVar7 = (param_1->AlphaScaleBiasClamp).InterpSpeedDecreasing;
  fVar8 = (param_1->AlphaScaleBiasClamp).InterpolatedResult;
  (this->AlphaScaleBiasClamp).ClampMax = (param_1->AlphaScaleBiasClamp).ClampMax;
  (this->AlphaScaleBiasClamp).InterpSpeedIncreasing = fVar6;
  (this->AlphaScaleBiasClamp).InterpSpeedDecreasing = fVar7;
  (this->AlphaScaleBiasClamp).InterpolatedResult = fVar8;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneTransforms,&param_1->BoneTransforms);
  return this;
}

// AddDebugNodeData @ 14d2b90a0

void __thiscall
FAnimNode_DragonControlBase::AddDebugNodeData(FAnimNode_DragonControlBase *this,FString *param_1)

{
  int iVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"Alpha: %.1f%%");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// CacheBones_AnyThread @ 14d2beba0

void __thiscall
FAnimNode_DragonControlBase::CacheBones_AnyThread
          (FAnimNode_DragonControlBase *this,FAnimationCacheBonesContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  lVar1 = *(longlong *)param_1;
  pcVar2 = *(code **)(this->_padding_ + 0xd8);
  if (*(longlong *)(lVar1 + 0x660) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*pcVar2)(this,*(undefined8 *)(lVar1 + 0x660));
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->ComponentPose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// DragonContainsNaN @ 14d2c88a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FAnimNode_DragonControlBase::DragonContainsNaN
          (FAnimNode_DragonControlBase *this,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  undefined7 extraout_var;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar22;
  double dVar21;
  uint uVar23;
  uint uVar25;
  double dVar24;
  
  auVar11 = ___xmm_7ff00000000000007ff0000000000000;
  iVar14 = param_1->ArrayNum;
  uVar17 = 0;
  if (0 < iVar14) {
    lVar18 = 0;
    do {
      uVar15 = ~uVar17 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar17 < iVar14) {
        uVar16 = uVar15;
      }
      if (uVar16 == 0) {
        uVar15 = 0x506106c8;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar16 = (uint)CONCAT71(extraout_var,bVar12);
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar20 = auVar11._0_4_;
      uVar22 = auVar11._4_4_;
      uVar23 = auVar11._8_4_;
      uVar25 = auVar11._12_4_;
      pFVar1 = pFVar3 + lVar18 + 0x20;
      pFVar2 = pFVar3 + lVar18 + 0x10;
      dVar21 = auVar11._0_8_;
      dVar24 = auVar11._8_8_;
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar25 & *(uint *)(pFVar1 + 0xc),uVar23 & *(uint *)(pFVar1 + 8))
                == dVar24);
      auVar5._8_4_ = (int)lVar19;
      auVar5._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & *(uint *)(pFVar1 + 4),uVar20 & *(uint *)pFVar1) ==
                      dVar21);
      auVar5._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar15 = movmskpd(uVar15,auVar5);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar25 & *(uint *)(pFVar2 + 0xc),uVar23 & *(uint *)(pFVar2 + 8))
                == dVar24);
      auVar8._8_4_ = (int)lVar19;
      auVar8._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & *(uint *)(pFVar2 + 4),uVar20 & *(uint *)pFVar2) ==
                      dVar21);
      auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      iVar14 = movmskpd(uVar16,auVar8);
      if ((uVar15 & 0x3fffffff) != 0 || iVar14 != 0) {
        return true;
      }
      pFVar1 = pFVar3 + lVar18 + 0x40;
      pFVar2 = pFVar3 + lVar18 + 0x30;
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar25 & *(uint *)(pFVar1 + 0xc),uVar23 & *(uint *)(pFVar1 + 8))
                == dVar24);
      auVar6._8_4_ = (int)lVar19;
      auVar6._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & *(uint *)(pFVar1 + 4),uVar20 & *(uint *)pFVar1) ==
                      dVar21);
      auVar6._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar16 = movmskpd(0,auVar6);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar25 & *(uint *)(pFVar2 + 0xc),uVar23 & *(uint *)(pFVar2 + 8))
                == dVar24);
      auVar9._8_4_ = (int)lVar19;
      auVar9._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & *(uint *)(pFVar2 + 4),uVar20 & *(uint *)pFVar2) ==
                      dVar21);
      auVar9._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      iVar14 = movmskpd(iVar14,auVar9);
      if ((uVar16 & 0x3fffffff) != 0 || iVar14 != 0) {
        return true;
      }
      pFVar1 = pFVar3 + lVar18 + 0x60;
      pFVar3 = pFVar3 + lVar18 + 0x50;
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar25 & *(uint *)(pFVar1 + 0xc),uVar23 & *(uint *)(pFVar1 + 8))
                == dVar24);
      auVar7._8_4_ = (int)lVar19;
      auVar7._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & *(uint *)(pFVar1 + 4),uVar20 & *(uint *)pFVar1) ==
                      dVar21);
      auVar7._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar16 = movmskpd(0,auVar7);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar25 & *(uint *)(pFVar3 + 0xc),uVar23 & *(uint *)(pFVar3 + 8))
                == dVar24);
      auVar10._8_4_ = (int)lVar19;
      auVar10._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar22 & *(uint *)(pFVar3 + 4),uVar20 & *(uint *)pFVar3) == dVar21);
      auVar10._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      iVar14 = movmskpd(iVar14,auVar10);
      if ((uVar16 & 0x3fffffff) != 0 || iVar14 != 0) {
        return true;
      }
      iVar14 = param_1->ArrayNum;
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x70;
    } while ((int)uVar17 < iVar14);
  }
  return false;
}

// EvaluateComponentPose_AnyThread @ 14d2d4d00

void __thiscall
FAnimNode_DragonControlBase::EvaluateComponentPose_AnyThread
          (FAnimNode_DragonControlBase *this,FComponentSpacePoseContext *param_1)

{
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_DragonControlBase::EvaluateComponentPose_AnyThread");
  FComponentSpacePoseLink::EvaluateComponentSpace(&this->ComponentPose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateComponentSpaceInternal @ 14d2d4d60

void __thiscall
FAnimNode_DragonControlBase::EvaluateComponentSpaceInternal
          (FAnimNode_DragonControlBase *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateComponentSpace_AnyThread @ 14d2d5a10

void __thiscall
FAnimNode_DragonControlBase::EvaluateComponentSpace_AnyThread
          (FAnimNode_DragonControlBase *this,FComponentSpacePoseContext *param_1)

{
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FBoneTransform *pFVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  char cVar27;
  bool bVar28;
  uint uVar29;
  int iVar30;
  USkeleton *pUVar31;
  TQuat<double> *pTVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  int local_res18;
  undefined4 uStack_12c;
  TArrayView<FBoneTransform_const_,int> local_128;
  TRotator<double> local_118;
  TQuat<double> local_f8;
  TQuat<double> local_d8 [4];
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_DragonControlBase::EvaluateComponentSpace_AnyThread");
  (**(code **)(this->_padding_ + 0xb0))(this);
  bVar26 = FComponentSpacePoseContext::ContainsNaN(param_1);
  if ((bVar26) &&
     (bVar26 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2644533379873111889>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\AnimNode_DragonControlBase.cpp"
                          ,0xaf,"Output.ContainsNaN() == false"), bVar26)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (__real_3727c5ac < this->ActualAlpha) {
    lVar33 = param_1->_padding_;
    pcVar6 = *(code **)(this->_padding_ + 0xd0);
    if ((*(longlong *)(lVar33 + 0x660) == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar26)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar2 = *(undefined8 *)(lVar33 + 0x660);
    pUVar31 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)param_1->_padding_);
    cVar27 = (*pcVar6)(this,pUVar31,uVar2);
    if (cVar27 != '\0') {
      (**(code **)(this->_padding_ + 0xb8))(this,param_1);
      uVar35 = (this->BoneTransforms).ArrayNum;
      pTVar1 = &this->BoneTransforms;
      if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
      }
      (this->BoneTransforms).ArrayNum = 0;
      if ((this->BoneTransforms).ArrayMax < (int)uVar35) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,uVar35,&pTVar1->AllocatorInstance,0,&(this->BoneTransforms).ArrayMax);
      }
      (**(code **)(this->_padding_ + 200))(this,param_1,pTVar1);
      do {
        iVar30 = (this->BoneTransforms).ArrayNum;
        uVar35 = 1;
        bVar26 = false;
        if (iVar30 < 2) break;
        lVar33 = 0x70;
        local_res18 = 0;
        do {
          uVar36 = ~uVar35 >> 0x1f;
          uVar29 = 0;
          if ((int)uVar35 < (this->BoneTransforms).ArrayNum) {
            uVar29 = uVar36;
          }
          if ((uVar29 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          uVar34 = -uVar35 >> 0x1f;
          uVar29 = 0;
          if (local_res18 < (this->BoneTransforms).ArrayNum) {
            uVar29 = uVar34;
          }
          if ((uVar29 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)(pFVar3 + lVar33) <
              *(int *)((pTVar1->AllocatorInstance).Data + lVar33 + -0x70)) {
            uVar29 = 0;
            if ((int)(uVar35 - 1) < (this->BoneTransforms).ArrayNum) {
              uVar29 = uVar34;
            }
            if ((uVar29 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar3 = (pTVar1->AllocatorInstance).Data;
            uVar9 = *(undefined4 *)(pFVar3 + lVar33 + -0x70);
            uVar2 = *(undefined8 *)(pFVar3 + lVar33 + -0x60);
            uVar15 = *(undefined8 *)(pFVar3 + lVar33 + -0x60 + 8);
            uVar16 = *(undefined8 *)(pFVar3 + lVar33 + -0x50);
            uVar17 = *(undefined8 *)(pFVar3 + lVar33 + -0x50 + 8);
            uVar18 = *(undefined8 *)(pFVar3 + lVar33 + -0x40);
            uVar19 = *(undefined8 *)(pFVar3 + lVar33 + -0x40 + 8);
            uVar20 = *(undefined8 *)(pFVar3 + lVar33 + -0x30);
            uVar21 = *(undefined8 *)(pFVar3 + lVar33 + -0x30 + 8);
            uVar22 = *(undefined8 *)(pFVar3 + lVar33 + -0x20);
            uVar23 = *(undefined8 *)(pFVar3 + lVar33 + -0x20 + 8);
            uVar24 = *(undefined8 *)(pFVar3 + lVar33 + -0x10);
            uVar25 = *(undefined8 *)(pFVar3 + lVar33 + -0x10 + 8);
            uVar29 = 0;
            if ((int)uVar35 < (this->BoneTransforms).ArrayNum) {
              uVar29 = uVar36;
            }
            if ((uVar29 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar3 = (pTVar1->AllocatorInstance).Data;
            uVar29 = 0;
            if ((int)(uVar35 - 1) < (this->BoneTransforms).ArrayNum) {
              uVar29 = uVar34;
            }
            if ((uVar29 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            *(undefined4 *)(pFVar4 + lVar33 + -0x70) = *(undefined4 *)(pFVar3 + lVar33);
            uVar14 = *(undefined8 *)(pFVar3 + lVar33 + 0x10 + 8);
            *(undefined8 *)(pFVar4 + lVar33 + -0x60) = *(undefined8 *)(pFVar3 + lVar33 + 0x10);
            *(undefined8 *)(pFVar4 + lVar33 + -0x60 + 8) = uVar14;
            uVar14 = *(undefined8 *)(pFVar3 + lVar33 + 0x20 + 8);
            *(undefined8 *)(pFVar4 + lVar33 + -0x50) = *(undefined8 *)(pFVar3 + lVar33 + 0x20);
            *(undefined8 *)(pFVar4 + lVar33 + -0x50 + 8) = uVar14;
            uVar14 = *(undefined8 *)(pFVar3 + lVar33 + 0x30 + 8);
            *(undefined8 *)(pFVar4 + lVar33 + -0x40) = *(undefined8 *)(pFVar3 + lVar33 + 0x30);
            *(undefined8 *)(pFVar4 + lVar33 + -0x40 + 8) = uVar14;
            uVar14 = *(undefined8 *)(pFVar3 + lVar33 + 0x40 + 8);
            *(undefined8 *)(pFVar4 + lVar33 + -0x30) = *(undefined8 *)(pFVar3 + lVar33 + 0x40);
            *(undefined8 *)(pFVar4 + lVar33 + -0x30 + 8) = uVar14;
            uVar14 = *(undefined8 *)(pFVar3 + lVar33 + 0x50 + 8);
            *(undefined8 *)(pFVar4 + lVar33 + -0x20) = *(undefined8 *)(pFVar3 + lVar33 + 0x50);
            *(undefined8 *)(pFVar4 + lVar33 + -0x20 + 8) = uVar14;
            uVar14 = *(undefined8 *)(pFVar3 + lVar33 + 0x60 + 8);
            *(undefined8 *)(pFVar4 + lVar33 + -0x10) = *(undefined8 *)(pFVar3 + lVar33 + 0x60);
            *(undefined8 *)(pFVar4 + lVar33 + -0x10 + 8) = uVar14;
            uVar29 = 0;
            if ((int)uVar35 < (this->BoneTransforms).ArrayNum) {
              uVar29 = uVar36;
            }
            if ((uVar29 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar3 = (pTVar1->AllocatorInstance).Data;
            bVar26 = true;
            *(undefined4 *)(pFVar3 + lVar33) = uVar9;
            *(undefined8 *)(pFVar3 + lVar33 + 0x10) = uVar2;
            *(undefined8 *)(pFVar3 + lVar33 + 0x10 + 8) = uVar15;
            *(undefined8 *)(pFVar3 + lVar33 + 0x20) = uVar16;
            *(undefined8 *)(pFVar3 + lVar33 + 0x20 + 8) = uVar17;
            *(undefined8 *)(pFVar3 + lVar33 + 0x30) = uVar18;
            *(undefined8 *)(pFVar3 + lVar33 + 0x30 + 8) = uVar19;
            *(undefined8 *)(pFVar3 + lVar33 + 0x40) = uVar20;
            *(undefined8 *)(pFVar3 + lVar33 + 0x40 + 8) = uVar21;
            *(undefined8 *)(pFVar3 + lVar33 + 0x50) = uVar22;
            *(undefined8 *)(pFVar3 + lVar33 + 0x50 + 8) = uVar23;
            *(undefined8 *)(pFVar3 + lVar33 + 0x60) = uVar24;
            *(undefined8 *)(pFVar3 + lVar33 + 0x60 + 8) = uVar25;
          }
          iVar30 = (this->BoneTransforms).ArrayNum;
          uVar35 = uVar35 + 1;
          lVar33 = lVar33 + 0x70;
          local_res18 = local_res18 + 1;
        } while ((int)uVar35 < iVar30);
      } while (bVar26);
      lVar33 = 0x70;
      uVar35 = 1;
      if (1 < iVar30) {
        do {
          uVar36 = ~uVar35 >> 0x1f;
          uVar29 = 0;
          if ((int)uVar35 < (this->BoneTransforms).ArrayNum) {
            uVar29 = uVar36;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->BoneTransforms).AllocatorInstance.Data;
          pFVar3 = pFVar4 + lVar33 + 0x10;
          local_f8.X = *(double *)pFVar3;
          local_f8.Y = *(double *)(pFVar3 + 8);
          pFVar4 = pFVar4 + lVar33 + 0x20;
          local_f8.Z = *(double *)pFVar4;
          local_f8.W = *(double *)(pFVar4 + 8);
          UE::Math::TQuat<double>::Rotator(&local_f8,&local_118);
          UDragonIK_Library::RectifyNaNRotator(&local_118);
          uVar29 = 0;
          if ((int)uVar35 < (this->BoneTransforms).ArrayNum) {
            uVar29 = uVar36;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->BoneTransforms).AllocatorInstance.Data;
          pTVar32 = UE::Math::TRotator<double>::Quaternion(&local_118,local_d8);
          dVar10 = pTVar32->Y;
          dVar11 = pTVar32->Z;
          dVar12 = pTVar32->W;
          pFVar3 = pFVar4 + lVar33 + 0x10;
          *(double *)pFVar3 = pTVar32->X;
          *(double *)(pFVar3 + 8) = dVar10;
          pFVar4 = pFVar4 + lVar33 + 0x20;
          *(double *)pFVar4 = dVar11;
          *(double *)(pFVar4 + 8) = dVar12;
          uVar29 = 0;
          if ((int)uVar35 < (this->BoneTransforms).ArrayNum) {
            uVar29 = uVar36;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (this->BoneTransforms).AllocatorInstance.Data;
          uVar35 = uVar35 + 1;
          dVar10 = *(double *)(pFVar3 + lVar33 + 0x10);
          dVar11 = *(double *)(pFVar3 + lVar33 + 0x10 + 8);
          dVar12 = *(double *)(pFVar3 + lVar33 + 0x20);
          dVar13 = *(double *)(pFVar3 + lVar33 + 0x20 + 8);
          auVar45._0_8_ = dVar12 * dVar12 + dVar10 * dVar10;
          auVar45._8_8_ = dVar13 * dVar13 + dVar11 * dVar11;
          auVar41._8_4_ = SUB84(auVar45._8_8_,0);
          auVar41._0_8_ = auVar45._0_8_;
          auVar41._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
          auVar42._0_8_ = auVar41._8_8_ + auVar45._0_8_;
          auVar42._8_8_ = auVar45._0_8_ + auVar45._8_8_;
          auVar46 = sqrtpd(auVar45,auVar42);
          uVar37 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar42._0_8_);
          uVar39 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar42._8_8_);
          uVar38 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar42._0_8_);
          uVar40 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar42._8_8_);
          auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar46);
          auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
          auVar44._0_8_ = uVar38 & (ulonglong)(auVar43._0_8_ * dVar10);
          uVar8 = uVar40 & (ulonglong)(auVar43._8_8_ * dVar11);
          auVar44._8_4_ = (undefined4)uVar8;
          auVar44._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar47._0_8_ = uVar37 & (ulonglong)(auVar46._0_8_ * dVar12);
          uVar8 = uVar39 & (ulonglong)(auVar46._8_8_ * dVar13);
          auVar47._8_4_ = (undefined4)uVar8;
          auVar47._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar46._4_4_ =
               ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar46._0_4_ = ~(uint)uVar38 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar46._8_4_ = ~(uint)uVar40 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar46._12_4_ =
               ~(uint)(uVar40 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          uVar29 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          uVar36 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          uVar34 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pFVar3 + lVar33 + 0x10) = auVar44 | auVar46;
          auVar43._4_4_ = ~(uint)(uVar37 >> 0x20) & uVar36;
          auVar43._0_4_ = ~(uint)uVar37 & uVar29;
          auVar43._8_4_ = ~(uint)uVar39 & uVar34;
          auVar43._12_4_ = ~(uint)(uVar39 >> 0x20) & uVar7;
          *(undefined1 (*) [16])(pFVar3 + lVar33 + 0x20) = auVar47 | auVar43;
          lVar33 = lVar33 + 0x70;
        } while ((int)uVar35 < (this->BoneTransforms).ArrayNum);
      }
      if (((((0 < (this->BoneTransforms).ArrayNum) &&
            (bVar26 = DragonContainsNaN(this,&this->BoneTransforms), !bVar26)) &&
           (lVar33 = *(longlong *)&(param_1->Pose).Pose.field_0x10, lVar33 != 0)) &&
          ((bVar26 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar33 + 0x30)), bVar26 &&
           (*(longlong *)(lVar33 + 0x48) != 0)))) && (0 < *(int *)(lVar33 + 8))) {
        fVar48 = this->ActualAlpha;
        if (__real_3f800000 <= this->ActualAlpha) {
          fVar48 = __real_3f800000;
        }
        pFVar5 = (FBoneTransform *)(this->BoneTransforms).AllocatorInstance.Data;
        iVar30 = (this->BoneTransforms).ArrayNum;
        if (fVar48 <= 0.0) {
          fVar48 = 0.0;
        }
        if ((iVar30 < 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar26)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_128._12_4_ = uStack_12c;
        local_128.ArrayNum = iVar30;
        local_128.DataPtr = pFVar5;
        FCSPose<FCompactPose>::LocalBlendCSBoneTransforms(&param_1->Pose,&local_128,fVar48);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d2d8e70

void __thiscall
FAnimNode_DragonControlBase::EvaluateSkeletalControl_AnyThread
          (FAnimNode_DragonControlBase *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_DragonControlBase::EvaluateSkeletalControl_AnyThread");
  lVar1 = param_1->_padding_;
  pcVar2 = *(code **)(this->_padding_ + 0xc0);
  if (*(longlong *)(lVar1 + 0x158) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2821110184175206020>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                       ,0x17c,"SkeletalMeshComponent");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*pcVar2)(this,*(undefined8 *)(lVar1 + 0x158),&param_1->Pose,param_2);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 14d300010

void __thiscall
FAnimNode_DragonControlBase::Initialize_AnyThread
          (FAnimNode_DragonControlBase *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->ComponentPose,param_1);
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateComponentPose_AnyThread @ 14d317900

void __thiscall
FAnimNode_DragonControlBase::UpdateComponentPose_AnyThread
          (FAnimNode_DragonControlBase *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::UpdateComponentPose_AnyThread")
  ;
  FPoseLinkBase::Update((FPoseLinkBase *)&this->ComponentPose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateInternal @ 14d318150

void __thiscall
FAnimNode_DragonControlBase::UpdateInternal
          (FAnimNode_DragonControlBase *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 14d329110

void __thiscall
FAnimNode_DragonControlBase::Update_AnyThread
          (FAnimNode_DragonControlBase *this,FAnimationUpdateContext *param_1)

{
  EAnimAlphaInputType EVar1;
  int iVar2;
  UAnimInstance *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FExposedValueHandler *this_01;
  UClass *pUVar6;
  FBoneContainer *pFVar7;
  USkeleton *pUVar8;
  float fVar9;
  float fVar10;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::Update_AnyThread");
  (**(code **)(this->_padding_ + 0xa8))(this,param_1);
  this->ActualAlpha = 0.0;
  bVar4 = FAnimNode_Base::IsLODEnabled
                    ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
  if (!bVar4) goto LAB_14d32929a;
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  EVar1 = this->AlphaInputType;
  if (EVar1 == Float) {
    fVar10 = FInputScaleBiasClamp::ApplyTo
                       (&this->AlphaScaleBiasClamp,this->Alpha,param_1->DeltaTime);
    fVar10 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar10);
LAB_14d329229:
    this->ActualAlpha = fVar10;
  }
  else {
    if (EVar1 == Bool) {
      fVar10 = FInputAlphaBoolBlend::ApplyTo
                         (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
      goto LAB_14d329229;
    }
    if ((EVar1 == Curve) &&
       (this_00 = *(UAnimInstance **)(param_1->_padding_ + 0x140), this_00 != (UAnimInstance *)0x0))
    {
      pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        fVar10 = param_1->DeltaTime;
        fVar9 = UAnimInstance::GetCurveValue(this_00,this->AlphaCurveName);
        fVar10 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,fVar9,fVar10);
        goto LAB_14d329229;
      }
    }
  }
  fVar10 = __real_3727c5ac;
  fVar9 = this->ActualAlpha;
  if (__real_3f800000 <= this->ActualAlpha) {
    fVar9 = __real_3f800000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  this->ActualAlpha = fVar9;
  if (fVar10 < fVar9) {
    pcVar3 = *(code **)(this->_padding_ + 0xd0);
    pFVar7 = FAnimInstanceProxy::GetRequiredBones((FAnimInstanceProxy *)param_1->_padding_);
    pUVar8 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)param_1->_padding_);
    cVar5 = (*pcVar3)(this,pUVar8,pFVar7);
    if (cVar5 != '\0') {
      (**(code **)(this->_padding_ + 0xa0))(this,param_1);
    }
  }
LAB_14d32929a:
  FStatsHierarchical::EndMeasurement();
  return;
}

