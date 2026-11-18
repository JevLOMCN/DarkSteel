// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 20

// StaticStruct @ 1463dcd90

UScriptStruct * __cdecl FAnimNode_SkeletalControlBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,(UObject *)pUVar1,
                         L"AnimNode_SkeletalControlBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton;
}

// FAnimNode_SkeletalControlBase @ 1464059d0

FAnimNode_SkeletalControlBase * __thiscall
FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase(FAnimNode_SkeletalControlBase *this)

{
  float fVar1;
  
  fVar1 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
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

// ~FAnimNode_SkeletalControlBase @ 146408fb0

void __thiscall
FAnimNode_SkeletalControlBase::~FAnimNode_SkeletalControlBase(FAnimNode_SkeletalControlBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  pFVar1 = (this->BoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14640c380

FAnimNode_SkeletalControlBase * __thiscall
FAnimNode_SkeletalControlBase::operator=
          (FAnimNode_SkeletalControlBase *this,FAnimNode_SkeletalControlBase *param_1)

{
  int *piVar1;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UCurveFloat *pUVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  this->_padding_ = param_1->_padding_;
  uVar5 = *(undefined8 *)&(param_1->ComponentPose).field_0x8;
  *(undefined8 *)&this->ComponentPose = *(undefined8 *)&param_1->ComponentPose;
  *(undefined8 *)&(this->ComponentPose).field_0x8 = uVar5;
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
     (pUVar4 = (param_1->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr,
     pUVar4 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->AlphaBoolBlend).CustomCurve.field0_0x0 = (param_1->AlphaBoolBlend).CustomCurve.field0_0x0;
  FAlphaBlend::operator=(&(this->AlphaBoolBlend).AlphaBlend,&(param_1->AlphaBoolBlend).AlphaBlend);
  this->AlphaCurveName = param_1->AlphaCurveName;
  pTVar2 = &this->BoneTransforms;
  bVar6 = (param_1->AlphaScaleBiasClamp).bClampResult;
  bVar7 = (param_1->AlphaScaleBiasClamp).bInterpResult;
  bVar8 = (param_1->AlphaScaleBiasClamp).bInitialized;
  fVar9 = (param_1->AlphaScaleBiasClamp).InRange.Min;
  uVar5 = *(undefined8 *)&(param_1->AlphaScaleBiasClamp).InRange.Max;
  (this->AlphaScaleBiasClamp).bMapRange = (param_1->AlphaScaleBiasClamp).bMapRange;
  (this->AlphaScaleBiasClamp).bClampResult = bVar6;
  (this->AlphaScaleBiasClamp).bInterpResult = bVar7;
  (this->AlphaScaleBiasClamp).bInitialized = bVar8;
  (this->AlphaScaleBiasClamp).InRange.Min = fVar9;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).InRange.Max = uVar5;
  fVar9 = (param_1->AlphaScaleBiasClamp).Bias;
  fVar10 = (param_1->AlphaScaleBiasClamp).ClampMin;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).OutRange.Max =
       *(undefined8 *)&(param_1->AlphaScaleBiasClamp).OutRange.Max;
  (this->AlphaScaleBiasClamp).Bias = fVar9;
  (this->AlphaScaleBiasClamp).ClampMin = fVar10;
  fVar9 = (param_1->AlphaScaleBiasClamp).InterpSpeedIncreasing;
  fVar10 = (param_1->AlphaScaleBiasClamp).InterpSpeedDecreasing;
  fVar11 = (param_1->AlphaScaleBiasClamp).InterpolatedResult;
  (this->AlphaScaleBiasClamp).ClampMax = (param_1->AlphaScaleBiasClamp).ClampMax;
  (this->AlphaScaleBiasClamp).InterpSpeedIncreasing = fVar9;
  (this->AlphaScaleBiasClamp).InterpSpeedDecreasing = fVar10;
  (this->AlphaScaleBiasClamp).InterpolatedResult = fVar11;
  if (pTVar2 != &param_1->BoneTransforms) {
    iVar3 = (param_1->BoneTransforms).ArrayNum;
    piVar1 = &(this->BoneTransforms).ArrayMax;
    _Src = (param_1->BoneTransforms).AllocatorInstance.Data;
    (this->BoneTransforms).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x70);
      }
    }
  }
  return this;
}

// AddDebugNodeData @ 146414ce0

void __thiscall
FAnimNode_SkeletalControlBase::AddDebugNodeData
          (FAnimNode_SkeletalControlBase *this,FString *param_1)

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

// CacheBones_AnyThread @ 14641a2b0

void __thiscall
FAnimNode_SkeletalControlBase::CacheBones_AnyThread
          (FAnimNode_SkeletalControlBase *this,FAnimationCacheBonesContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  lVar1 = *(longlong *)param_1;
  pcVar2 = *(code **)(this->_padding_ + 0xd0);
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

// EvaluateComponentPose_AnyThread @ 1464268f0

void __thiscall
FAnimNode_SkeletalControlBase::EvaluateComponentPose_AnyThread
          (FAnimNode_SkeletalControlBase *this,FComponentSpacePoseContext *param_1)

{
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_SkeletalControlBase::EvaluateComponentPose_AnyThread");
  FComponentSpacePoseLink::EvaluateComponentSpace(&this->ComponentPose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateComponentSpaceInternal @ 146426ae0

void __thiscall
FAnimNode_SkeletalControlBase::EvaluateComponentSpaceInternal
          (FAnimNode_SkeletalControlBase *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateComponentSpace_AnyThread @ 146427020

void __thiscall
FAnimNode_SkeletalControlBase::EvaluateComponentSpace_AnyThread
          (FAnimNode_SkeletalControlBase *this,FComponentSpacePoseContext *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  USkeleton *pUVar10;
  float fVar11;
  undefined4 uStack_3c;
  TArrayView<FBoneTransform_const_,int> local_38 [3];
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_SkeletalControlBase::EvaluateComponentSpace_AnyThread");
  local_38[0].DataPtr = (FBoneTransform *)param_1->_padding_;
  local_38[0]._8_8_ = param_1->_padding_;
  uVar2 = param_1->_padding_;
  uVar3 = param_1->_padding_;
  (**(code **)(this->_padding_ + 0xb0))(this);
  bVar8 = FComponentSpacePoseContext::ContainsNaN(param_1);
  if (bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6573571201715666771>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_SkeletalControlBase.cpp"
                       ,0xad,"Output.ContainsNaN() == false");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (__real_3727c5ac < this->ActualAlpha) {
    pUVar10 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)param_1->_padding_);
    lVar6 = param_1->_padding_;
    if (*(longlong *)(lVar6 + 0x660) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    cVar9 = (**(code **)(this->_padding_ + 200))(this,pUVar10,*(undefined8 *)(lVar6 + 0x660));
    if (cVar9 != '\0') {
      *(int *)((longlong)&param_1->_padding_ + 4) = (int)((ulonglong)uVar2 >> 0x20);
      *(int *)&param_1->_padding_ = (int)uVar3;
      (**(code **)(this->_padding_ + 0xb8))(this);
      uVar4 = (this->BoneTransforms).ArrayNum;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      piVar1 = &(this->BoneTransforms).ArrayMax;
      (this->BoneTransforms).ArrayNum = 0;
      if (*piVar1 < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,uVar4,&(this->BoneTransforms).AllocatorInstance,0,piVar1);
      }
      (**(code **)(this->_padding_ + 0xc0))(this,param_1,&this->BoneTransforms);
      iVar5 = (this->BoneTransforms).ArrayNum;
      if (0 < iVar5) {
        local_38[0].DataPtr = (FBoneTransform *)(this->BoneTransforms).AllocatorInstance.Data;
        fVar11 = this->ActualAlpha;
        if (__real_3f800000 <= this->ActualAlpha) {
          fVar11 = __real_3f800000;
        }
        local_38[0]._8_8_ = CONCAT44(uStack_3c,iVar5);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        FCSPose<FCompactPose>::LocalBlendCSBoneTransforms(&param_1->Pose,local_38,fVar11);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateSkeletalControl_AnyThread @ 146434240

void __thiscall
FAnimNode_SkeletalControlBase::EvaluateSkeletalControl_AnyThread
          (FAnimNode_SkeletalControlBase *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetAlpha @ 1464475e0

float __thiscall FAnimNode_SkeletalControlBase::GetAlpha(FAnimNode_SkeletalControlBase *this)

{
  return this->ActualAlpha;
}

// GetLODThreshold @ 14644b550

int __thiscall FAnimNode_SkeletalControlBase::GetLODThreshold(FAnimNode_SkeletalControlBase *this)

{
  return this->LODThreshold;
}

// InitializeAndValidateBoneRef @ 146455960

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_SkeletalControlBase::InitializeAndValidateBoneRef
          (FAnimNode_SkeletalControlBase *this,FBoneReference *param_1,FBoneContainer *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FText *pFVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res10;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (param_1->BoneName != (FName)0x0) {
    FBoneReference::Initialize(param_1,param_2);
  }
  if (param_1->BoneIndex == -1) {
    pUVar4 = FWeakObjectPtr::Get(&(param_2->AssetSkeletalMesh).WeakPtr);
    if (pUVar4 == (UObject *)0x0) {
      ::FString::FString(&local_c8,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res10.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_res10,&local_c8);
    }
    pFVar5 = FText::AsCultureInvariant(&local_38,&local_c8);
    pFVar6 = ::FName::ToString(&param_1->BoneName,&local_48);
    pFVar7 = FText::AsCultureInvariant(&local_28,pFVar6);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"AnimNode_SkeletalControlBase",L"SkeletalControlBoneError",
                        L"Referenced Bone {0} does not exist on SkeletalMesh {1}.");
    pFVar9 = FTextFormat::FTextFormat(&local_18,pFVar8,Default);
    local_98.Type = Text;
    FText::FText((FText *)&local_98.TextValue,pFVar7);
    if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_78 = 4;
    FText::FText(&local_68,pFVar5);
    if ((local_68.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_d8.AllocatorInstance.Data,&local_98,2);
    local_b8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_a8,&local_b8,&local_d8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar1 = (pFVar7->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pIVar1 = (pFVar5->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogSkeletalControlBase._0_1_) {
      FText::ToString(&local_a8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalControlBase);
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InitializeBoneReferences @ 146457c90

void __thiscall
FAnimNode_SkeletalControlBase::InitializeBoneReferences
          (FAnimNode_SkeletalControlBase *this,FBoneContainer *param_1)

{
  return;
}

// Initialize_AnyThread @ 14645a5c0

void __thiscall
FAnimNode_SkeletalControlBase::Initialize_AnyThread
          (FAnimNode_SkeletalControlBase *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->ComponentPose,param_1);
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bcd0

bool __thiscall
FAnimNode_SkeletalControlBase::IsValidToEvaluate
          (FAnimNode_SkeletalControlBase *this,USkeleton *param_1,FBoneContainer *param_2)

{
  return false;
}

// SetAlpha @ 146467ac0

void __thiscall
FAnimNode_SkeletalControlBase::SetAlpha(FAnimNode_SkeletalControlBase *this,float param_1)

{
  this->Alpha = param_1;
  this->ActualAlpha = param_1;
  return;
}

// UpdateComponentPose_AnyThread @ 1464730d0

void __thiscall
FAnimNode_SkeletalControlBase::UpdateComponentPose_AnyThread
          (FAnimNode_SkeletalControlBase *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_SkeletalControlBase::UpdateComponentPose_AnyThread");
  FPoseLinkBase::Update((FPoseLinkBase *)&this->ComponentPose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateInternal @ 146474a90

void __thiscall
FAnimNode_SkeletalControlBase::UpdateInternal
          (FAnimNode_SkeletalControlBase *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 146479000

void __thiscall
FAnimNode_SkeletalControlBase::Update_AnyThread
          (FAnimNode_SkeletalControlBase *this,FAnimationUpdateContext *param_1)

{
  EAnimAlphaInputType EVar1;
  int iVar2;
  UAnimInstance *this_00;
  bool bVar3;
  char cVar4;
  FExposedValueHandler *this_01;
  UClass *pUVar5;
  USkeleton *pUVar6;
  FBoneContainer *pFVar7;
  float fVar8;
  float fVar9;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Update_AnyThread");
  (**(code **)(this->_padding_ + 0xa8))(this,param_1);
  this->ActualAlpha = 0.0;
  bVar3 = FAnimNode_Base::IsLODEnabled
                    ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
  if (!bVar3) goto LAB_14647917d;
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  EVar1 = this->AlphaInputType;
  if (EVar1 == Float) {
    fVar9 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,this->Alpha,param_1->DeltaTime)
    ;
    fVar9 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar9);
LAB_146479115:
    this->ActualAlpha = fVar9;
  }
  else {
    if (EVar1 == Bool) {
      fVar9 = FInputAlphaBoolBlend::ApplyTo
                        (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
      goto LAB_146479115;
    }
    if ((EVar1 == Curve) &&
       (this_00 = *(UAnimInstance **)(param_1->_padding_ + 0x140), this_00 != (UAnimInstance *)0x0))
    {
      pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        fVar9 = param_1->DeltaTime;
        fVar8 = UAnimInstance::GetCurveValue(this_00,this->AlphaCurveName);
        fVar9 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,fVar8,fVar9);
        goto LAB_146479115;
      }
    }
  }
  fVar9 = __real_3727c5ac;
  fVar8 = this->ActualAlpha;
  if (__real_3f800000 <= this->ActualAlpha) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  this->ActualAlpha = fVar8;
  if (fVar9 < fVar8) {
    pUVar6 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)param_1->_padding_);
    pFVar7 = FAnimInstanceProxy::GetRequiredBones((FAnimInstanceProxy *)param_1->_padding_);
    cVar4 = (**(code **)(this->_padding_ + 200))(this,pUVar6,pFVar7);
    if (cVar4 != '\0') {
      (**(code **)(this->_padding_ + 0xa0))(this,param_1);
    }
  }
LAB_14647917d:
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Alpha",
             this->ActualAlpha);
  FStatsHierarchical::EndMeasurement();
  return;
}

