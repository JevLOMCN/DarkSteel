// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 22

// StaticStruct @ 14a203bf0

UScriptStruct * __cdecl FAnimNode_ControlRig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig,(UObject *)pUVar1,
                         L"AnimNode_ControlRig");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton;
}

// FAnimNode_ControlRig @ 14a21d780

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FAnimNode_ControlRig * __thiscall
FAnimNode_ControlRig::FAnimNode_ControlRig(FAnimNode_ControlRig *this)

{
  float fVar1;
  
  FAnimNode_ControlRigBase::FAnimNode_ControlRigBase((FAnimNode_ControlRigBase *)this);
  fVar1 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_ControlRig__6B_;
  *(undefined8 *)&(this->ControlRigPerClass).field_0x8 = 0;
  (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  *(undefined8 *)&this->ControlRigPerClass = 0;
  *(undefined8 *)&(this->ControlRigPerClass).field_0x20 = 0;
  *(undefined4 *)&(this->ControlRigPerClass).field_0x28 = 0;
  *(undefined4 *)&(this->ControlRigPerClass).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlRigPerClass).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlRigPerClass).field_0x34 = 0;
  *(undefined8 *)&(this->ControlRigPerClass).field_0x40 = 0;
  *(undefined4 *)&(this->ControlRigPerClass).field_0x48 = 0;
  this->Alpha = 1.0;
  this->AlphaInputType = Float;
  this->bAlphaBoolEnabled = '\x01';
  this->bSetRefPoseFromSkeleton = '\0';
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  (this->AlphaBoolBlend).BlendInTime = 0.0;
  (this->AlphaBoolBlend).BlendOutTime = 0.0;
  (this->AlphaBoolBlend).BlendOption = HermiteCubic;
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  FAlphaBlend::FAlphaBlend(&(this->AlphaBoolBlend).AlphaBlend,fVar1);
  (this->AlphaCurveName).ComparisonIndex = 0;
  (this->AlphaCurveName).Number = 0;
  (this->AlphaScaleBiasClamp).bMapRange = false;
  (this->AlphaScaleBiasClamp).bClampResult = false;
  (this->AlphaScaleBiasClamp).bInterpResult = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  (this->AlphaScaleBiasClamp).InRange.Min = 0.0;
  (this->AlphaScaleBiasClamp).Scale = 1.0;
  (this->AlphaScaleBiasClamp).Bias = 0.0;
  (this->AlphaScaleBiasClamp).ClampMin = 0.0;
  (this->AlphaScaleBiasClamp).ClampMax = 1.0;
  (this->AlphaScaleBiasClamp).InterpSpeedIncreasing = 10.0;
  (this->AlphaScaleBiasClamp).InterpSpeedDecreasing = 10.0;
  (this->AlphaScaleBiasClamp).InterpolatedResult = 0.0;
  *(undefined8 *)&this->InputMapping = 0;
  *(undefined8 *)&(this->InputMapping).field_0x8 = 0;
  *(undefined8 *)&(this->InputMapping).field_0x20 = 0;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).InRange.Max = 0x3f800000;
  (this->AlphaScaleBiasClamp).OutRange.Max = 1.0;
  *(undefined4 *)&(this->InputMapping).field_0x28 = 0;
  *(undefined4 *)&(this->InputMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputMapping).field_0x34 = 0;
  *(undefined8 *)&(this->InputMapping).field_0x40 = 0;
  *(undefined4 *)&(this->InputMapping).field_0x48 = 0;
  *(undefined8 *)&this->OutputMapping = 0;
  *(undefined8 *)&(this->OutputMapping).field_0x8 = 0;
  *(undefined8 *)&(this->OutputMapping).field_0x20 = 0;
  *(undefined4 *)&(this->OutputMapping).field_0x28 = 0;
  *(undefined4 *)&(this->OutputMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputMapping).field_0x34 = 0;
  *(undefined8 *)&(this->OutputMapping).field_0x40 = 0;
  *(undefined4 *)&(this->OutputMapping).field_0x48 = 0;
  this->LODThreshold = -1;
  (this->ControlRigVariableMappings).SourceProperties.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).SourceProperties.ArrayNum = 0;
  (this->ControlRigVariableMappings).SourceProperties.ArrayMax = 0;
  (this->ControlRigVariableMappings).DestProperties.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).DestProperties.ArrayNum = 0;
  (this->ControlRigVariableMappings).DestProperties.ArrayMax = 0;
  (this->ControlRigVariableMappings).UpdateFunctions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).UpdateFunctions.ArrayNum = 0;
  (this->ControlRigVariableMappings).UpdateFunctions.ArrayMax = 0;
  (this->ControlRigVariableMappings).CustomUpdateFunctions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).CustomUpdateFunctions.ArrayNum = 0;
  (this->ControlRigVariableMappings).CustomUpdateFunctions.ArrayMax = 0;
  (this->ControlRigVariableMappings).Variables.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).Variables.ArrayNum = 0;
  (this->ControlRigVariableMappings).Variables.ArrayMax = 0;
  (this->ControlRigVariableMappings).SourcePropertiesMemory.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).SourcePropertiesMemory.ArrayNum = 0;
  (this->ControlRigVariableMappings).SourcePropertiesMemory.ArrayMax = 0;
  (this->ControlRigVariableMappings).DestPropertyNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).DestPropertyNames.ArrayNum = 0;
  (this->ControlRigVariableMappings).DestPropertyNames.ArrayMax = 0;
  (this->ControlRigVariableMappings).InputCurveMappings.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).InputCurveMappings.Elements.ArrayNum = 0;
  (this->ControlRigVariableMappings).InputCurveMappings.Elements.ArrayMax = 0;
  (this->ControlRigVariableMappings).InputCurveMappings.bSorted = false;
  (this->ControlRigVariableMappings).OutputCurveMappings.Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigVariableMappings).OutputCurveMappings.Elements.ArrayNum = 0;
  (this->ControlRigVariableMappings).OutputCurveMappings.Elements.ArrayMax = 0;
  (this->ControlRigVariableMappings).OutputCurveMappings.bSorted = false;
  *(undefined8 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex = 0;
  *(undefined8 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex.field_0x8 = 0;
  *(undefined8 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex.field_0x20 = 0;
  *(undefined4 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex.field_0x28 = 0;
  *(undefined4 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex.field_0x34 = 0;
  *(undefined8 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex.field_0x40 = 0;
  *(undefined4 *)&(this->ControlRigVariableMappings).CurveInputToControlIndex.field_0x48 = 0;
  return this;
}

// ~FAnimNode_ControlRig @ 14a225320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FAnimNode_ControlRig::~FAnimNode_ControlRig(FAnimNode_ControlRig *this)

{
  UControlRig *pUVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FAnimNode_ControlRig__6B_;
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar1 != (UControlRig *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->_padding_,this);
  }
  FControlRigVariableMappings::~FControlRigVariableMappings(&this->ControlRigVariableMappings);
  *(undefined4 *)&(this->OutputMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OutputMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputMapping);
  *(undefined4 *)&(this->InputMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->InputMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputMapping);
  *(undefined4 *)&(this->ControlRigPerClass).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ControlRigPerClass).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlRigPerClass);
  FAnimNode_ControlRigBase::~FAnimNode_ControlRigBase((FAnimNode_ControlRigBase *)this);
  return;
}

// operator() @ 14a22f0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`FAnimNode_ControlRig::UpdateControlRigIfNeeded'::__l11::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  longlong lVar1;
  bool bVar2;
  TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_> *pTVar3;
  uint uVar4;
  TObjectPtr<UClass>_u_0 TVar5;
  FName local_res8;
  TObjectPtr<UClass>_u_0 local_res18;
  undefined8 local_res20;
  undefined1 local_38 [16];
  FString local_28;
  
  if (2 < (byte)LogControlRig._0_1_) {
    local_res8 = *(FName *)(*(longlong *)((longlong)this + 0x168) + 0x18);
    ::FName::ToString(&local_res8,(FString *)local_38);
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)((longlong)this + 8),&local_28,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((TObjectPtr<UClass>_u_0 *)local_38._0_8_ != (TObjectPtr<UClass>_u_0 *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  TVar5 = (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)((longlong)this + 0x168))->DebugPtr;
  lVar1 = *(longlong *)this;
  local_res20 = 0;
  local_res18 = TVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar5.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    TVar5 = local_res18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  pTVar3 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
           ::FindByHash<TObjectPtr<UClass>_>
                     ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                       *)(lVar1 + 0x240),uVar4,(TObjectPtr<UClass> *)&local_res18.ObjectPtr);
  if (pTVar3 == (TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_> *)0x0) {
    local_38._0_8_ = &local_res18;
    local_38._8_8_ = &local_res20;
    TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<UControlRig>_&&>_>
              ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x240),(uint)&local_res8,
               (TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<UControlRig>_&&> *)
               (ulonglong)uVar4,(bool *)local_38);
  }
  *(undefined8 *)(*(longlong *)this + 0x228) = 0;
  bVar2 = FAnimNode_ControlRig::UpdateControlRigIfNeeded
                    (*(FAnimNode_ControlRig **)this,*(UAnimInstance **)((longlong)this + 8),
                     (FBoneContainer *)((longlong)this + 0x10));
  return bVar2;
}

// CacheBones_AnyThread @ 14a242640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::CacheBones_AnyThread
          (FAnimNode_ControlRig *this,FAnimationCacheBonesContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FExposedValueHandler *this_00;
  UAnimInstance *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  URigHierarchy *pUVar7;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::CacheBones_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  (**(code **)(this->_padding_ + 0xa8))(this,*(undefined8 *)(*(longlong *)param_1 + 0x140));
  pUVar4 = (UAnimInstance *)
           FAnimationBaseContext::GetAnimInstanceObject((FAnimationBaseContext *)param_1);
  if (pUVar4 != (UAnimInstance *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      lVar6 = *(longlong *)param_1;
      if (*(longlong *)(lVar6 + 0x660) == 0) {
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
      UpdateControlRigIfNeeded(this,pUVar4,*(FBoneContainer **)(lVar6 + 0x660));
      FAnimNode_ControlRigBase::CacheBones_AnyThread((FAnimNode_ControlRigBase *)this,param_1);
      bVar3 = FControlRigVariableMappings::RequiresInitAfterConstruction
                        (&this->ControlRigVariableMappings);
      if (bVar3) {
        pUVar5 = (UClass *)(**(code **)(this->_padding_ + 0xb0))(this);
        FControlRigVariableMappings::InitializeProperties
                  (&this->ControlRigVariableMappings,*(UClass **)&pUVar4->field_0x10,
                   (UObject *)this->_padding_,pUVar5,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_);
      }
      goto LAB_14a24276d;
    }
  }
  FAnimNode_ControlRigBase::CacheBones_AnyThread((FAnimNode_ControlRigBase *)this,param_1);
LAB_14a24276d:
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&(this->ControlRigVariableMappings).CurveInputToControlIndex);
  lVar6 = *(longlong *)param_1;
  if (*(longlong *)(lVar6 + 0x660) == 0) {
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
  lVar6 = *(longlong *)(lVar6 + 0x660);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar6 + 0x30));
  if (((bVar3) && (*(longlong *)(lVar6 + 0x48) != 0)) && (0 < *(int *)(lVar6 + 8))) {
    if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    }
    pUVar7 = (URigHierarchy *)0x0;
    lVar6 = (**(code **)(this->_padding_ + 0xb8))(this);
    if (lVar6 != 0) {
      pUVar7 = *(URigHierarchy **)(lVar6 + 0x338);
    }
    FControlRigVariableMappings::CacheCurveMappings
              (&this->ControlRigVariableMappings,&this->InputMapping,&this->OutputMapping,pUVar7);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14a252040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::Evaluate_AnyThread(FAnimNode_ControlRig *this,FPoseContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::Evaluate_AnyThread");
  FAnimNode_ControlRigBase::Evaluate_AnyThread((FAnimNode_ControlRigBase *)this,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 14a25d5b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::GatherDebugData(FAnimNode_ControlRig *this,FNodeDebugData *param_1)

{
  UClass *pUVar1;
  bool bVar2;
  ForAnyElementType _Src;
  UPackage *pUVar3;
  UClass *pUVar4;
  FNodeDebugData *pFVar5;
  int iVar6;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig,(UObject *)pUVar3,
                         L"AnimNode_ControlRig");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  pUVar1 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
  if ((pUVar1 != (UClass *)0x0) && (pUVar4 = UControlRig::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar6 = (int)pUVar4->_padding_;
    if (((int)pUVar1->_padding_ < iVar6) ||
       ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar6 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (pUVar1 = (this->ControlRigClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_58);
      goto LAB_14a25d6f7;
    }
  }
  ::FString::FString(&local_58,L"None");
LAB_14a25d6f7:
  ::FString::PrintfImpl(local_38,L"(%s)");
  iVar6 = local_38[0].Data.ArrayNum + -1;
  if (local_38[0].Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_38[0].Data.AllocatorInstance.Data,iVar6);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,false);
  local_38[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].Data.ArrayNum = 0;
  local_38[0].Data.ArrayMax = 0;
  pFVar5 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,local_38);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,pFVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetControlRig @ 14a260870

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall FAnimNode_ControlRig::GetControlRig(FAnimNode_ControlRig *this)

{
  return (this->ControlRig).field0_0x0.DebugPtr;
}

// GetControlRigClass @ 14a260900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TSubclassOf<UControlRig> __thiscall
FAnimNode_ControlRig::GetControlRigClass(FAnimNode_ControlRig *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UControlRig>)in_RDX.field0_0x0;
}

// GetLODThreshold @ 14a264b60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FAnimNode_ControlRig::GetLODThreshold(FAnimNode_ControlRig *this)

{
  return this->LODThreshold;
}

// GetTargetClass @ 14a26bb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UClass * __thiscall FAnimNode_ControlRig::GetTargetClass(FAnimNode_ControlRig *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) && (pUVar4 = UControlRig::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (pUVar2 = (this->ControlRigClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
      pUVar4 = UControlRig::StaticClass();
      if (pUVar4 == (UClass *)0x0) {
        return (UClass *)0x0;
      }
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        return (UClass *)0x0;
      }
      return (this->ControlRigClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar2 = (this->DefaultControlRigClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) && (pUVar4 = UControlRig::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return (this->DefaultControlRigClass).Class.field0_0x0.DebugPtr;
    }
  }
  return (UClass *)0x0;
}

// HandleOnInitialized_AnyThread @ 14a26eb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::HandleOnInitialized_AnyThread
          (FAnimNode_ControlRig *this,URigVMHost *param_1,FName *param_2)

{
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  }
  return;
}

// InitializeProperties @ 14a272930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::InitializeProperties
          (FAnimNode_ControlRig *this,UObject *param_1,UClass *param_2)

{
  FControlRigVariableMappings::InitializeProperties
            (&this->ControlRigVariableMappings,*(UClass **)&param_1->field_0x10,
             (UObject *)this->_padding_,param_2,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// Initialize_AnyThread @ 14a272b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::Initialize_AnyThread
          (FAnimNode_ControlRig *this,FAnimationInitializeContext *param_1)

{
  UControlRig *pUVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  FStatsHierarchical::EndMeasurement();
  pUVar1 = (this->ControlRig).field0_0x0.DebugPtr;
  if (pUVar1 == (UControlRig *)0x0) {
    FAnimNode_CustomProperty::SetTargetInstance((FAnimNode_CustomProperty *)this,(UObject *)0x0);
  }
  else {
    FAnimNode_CustomProperty::SetTargetInstance((FAnimNode_CustomProperty *)this,(UObject *)pUVar1);
    (**(code **)(((this->ControlRig).field0_0x0.DebugPtr)->_padding_ + 0x318))();
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
  }
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// OnInitializeAnimInstance @ 14a277ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::OnInitializeAnimInstance
          (FAnimNode_ControlRig *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  undefined1 uVar1;
  int iVar2;
  UClass *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  FBoneContainer *pFVar8;
  USkeletalMeshComponent *pUVar9;
  UControlRig *this_00;
  USkeletalMesh *pUVar10;
  UAnimationDataSourceRegistry *this_01;
  undefined8 uVar11;
  FWeakObjectPtr local_res8;
  UAnimInstance *local_res18 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::OnInitializeAnimInstance");
  TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
           *)&this->ControlRigPerClass);
  pUVar3 = (this->DefaultControlRigClass).Class.field0_0x0.DebugPtr;
  if (pUVar3 != (UClass *)0x0) {
    pUVar7 = UControlRig::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && ((this->DefaultControlRigClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
      }
    }
  }
  pFVar8 = UAnimInstance::GetRequiredBones(param_2);
  bVar6 = UpdateControlRigIfNeeded(this,param_2,pFVar8);
  if (bVar6) {
    if ((param_1->RequiredBones).Object == (FBoneContainer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar8 = (param_1->RequiredBones).Object;
    pUVar9 = FAnimInstanceProxy::GetSkelMeshComponent(param_1);
    FControlRigHierarchyMappings::UpdateControlRigRefPoseIfNeeded
              ((FControlRigHierarchyMappings *)&this->_padding_,
               (this->ControlRig).field0_0x0.DebugPtr,param_1->AnimInstanceObject,pUVar9,pFVar8,
               this->bSetRefPoseFromSkeleton,false);
  }
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::OnInitializeAnimInstance");
  FAnimNode_Base::OnInitializeAnimInstance((FAnimNode_Base *)this,param_1,param_2);
  FControlRigHierarchyMappings::InitializeInstance((FControlRigHierarchyMappings *)&this->_padding_)
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  this->_padding_ = (longlong)local_res8;
  pUVar9 = UAnimInstance::GetOwningComponent(param_2);
  this_00 = (UControlRig *)(**(code **)(this->_padding_ + 0xb8))(this);
  if (pUVar9 != (USkeletalMeshComponent *)0x0) {
    pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar9);
    if ((pUVar10 != (USkeletalMesh *)0x0) && (this_00 != (UControlRig *)0x0)) {
      this_01 = UControlRig::GetDataSourceRegistry(this_00);
      pUVar9 = UAnimInstance::GetOwningComponent(param_2);
      UAnimationDataSourceRegistry::RegisterDataSource
                (this_01,&UControlRig::OwnerComponent,(UObject *)pUVar9);
      FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate
                ((FAnimNode_ControlRigBase *)this,this_00);
    }
  }
  FStatsHierarchical::EndMeasurement();
  lVar4 = this->_padding_;
  uVar11 = (**(code **)(lVar4 + 0xb0))(this);
  (**(code **)(lVar4 + 0xa0))(this,param_2,uVar11);
  FStatsHierarchical::EndMeasurement();
  return;
}

// PostSerialize @ 14a27cce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FAnimNode_ControlRig::PostSerialize(FAnimNode_ControlRig *this,FArchive *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::PostSerialize");
  FStatsHierarchical::EndMeasurement();
  return;
}

// PropagateInputProperties @ 14a27ceb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::PropagateInputProperties(FAnimNode_ControlRig *this,UObject *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ControlRig::PropagateInputProperties(UObject_const_*)_::_2_::FStat_STAT_AnimNode_ControlRig_PropagateInputProperties>
  FVar7;
  UClass *pUVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::PropagateInputProperties");
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_AnimNode_ControlRig_PropagateInputProperties ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ControlRig::PropagateInputProperties(UObject_const_*)_::_2_::FStat_STAT_AnimNode_ControlRig_PropagateInputProperties>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res10.s,
                                "STAT_AnimNode_ControlRig_PropagateInputProperties");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_AnimNode_ControlRig_PropagateInputProperties,*pFVar6,
                   L"STAT_AnimNode_ControlRig_PropagateInputProperties","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_AnimNode_ControlRig_PropagateInputProperties;
  if (StatPtr_STAT_AnimNode_ControlRig_PropagateInputProperties ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ControlRig::PropagateInputProperties(UObject_const_*)_::_2_::FStat_STAT_AnimNode_ControlRig_PropagateInputProperties>
       )0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_AnimNode_ControlRig_PropagateInputProperties");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ControlRig::PropagateInputProperties(UObject_const_*)_::_2_::FStat_STAT_AnimNode_ControlRig_PropagateInputProperties>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AnimNode_ControlRig_PropagateInputProperties,*pFVar6,
                         L"STAT_AnimNode_ControlRig_PropagateInputProperties","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\AnimNode_ControlRig.cpp"
                   ,0x1df);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar10.Value;
      local_res10.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_14a27d043;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14a27d043:
  if ((param_1 != (UObject *)0x0) && (this->_padding_ != 0)) {
    pUVar8 = UControlRig::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if ((bVar5) && ((UControlRig *)this->_padding_ != (UControlRig *)0x0)) {
      FControlRigVariableMappings::PropagateInputProperties
                (&this->ControlRigVariableMappings,param_1,(UControlRig *)this->_padding_,
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res10);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// SetControlRigClass @ 14a291570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::SetControlRigClass
          (FAnimNode_ControlRig *this,TSubclassOf<UControlRig> param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->DefaultControlRigClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UControlRig::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((this->DefaultControlRigClass).Class.field0_0x0.DebugPtr != (UClass *)0x0))
      goto LAB_14a2915f1;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (this->ControlRigClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->DefaultControlRigClass).Class.field0_0x0 = (this->ControlRigClass).Class.field0_0x0;
LAB_14a2915f1:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)param_1.Class.field0_0x0 == (UObject *)0x0) {
      (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
      return;
    }
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->ControlRigClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  return;
}

// UpdateControlRigIfNeeded @ 14a2a31d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FAnimNode_ControlRig::UpdateControlRigIfNeeded
          (FAnimNode_ControlRig *this,UAnimInstance *param_1,FBoneContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  URigHierarchy *this_00;
  URigHierarchy *this_01;
  TReferenceControllerBase<1> *pTVar3;
  FControlRigObjectBinding *pFVar4;
  IControlRigObjectBinding *pIVar5;
  code *pcVar6;
  FProperty *this_02;
  UObject *pUVar7;
  UAnimInstance *pUVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  TObjectPtr<UClass>_u_0 TVar13;
  UClass *pUVar14;
  longlong *plVar15;
  FUObjectItem *pFVar16;
  FProperty *pFVar17;
  longlong lVar18;
  longlong lVar19;
  TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_> *pTVar20;
  USkeletalMeshComponent *pUVar21;
  UControlRig *pUVar22;
  TSharedRef<FControlRigObjectBinding,1> *pTVar23;
  FText *pFVar24;
  FString *pFVar25;
  uint uVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  ForAnyElementType FVar30;
  UControlRig *pUVar31;
  ulonglong uVar32;
  UControlRig *pUVar33;
  undefined1 auStackY_488 [32];
  FGCScopeGuard local_438;
  undefined1 local_437;
  undefined1 local_436;
  FGCScopeGuard local_435 [5];
  UObject *local_430;
  ForAnyElementType local_428;
  int local_420;
  int local_41c;
  ForAnyElementType local_418;
  int local_410;
  int local_40c;
  TObjectPtr<UClass>_u_0 local_408;
  FProperty *local_400;
  undefined4 local_3f8;
  undefined2 local_3f4;
  undefined1 local_3f2;
  FName local_3f0;
  UControlRig *local_3e8;
  TObjectPtr<UClass>_u_0 local_3e0;
  TObjectPtr<UClass>_u_0 local_3d8;
  undefined8 local_3d0;
  UAnimInstance *local_3c8;
  TObjectPtr<UClass>_u_0 local_3c0;
  undefined8 local_3b8;
  FBoneContainer *local_3b0;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_3a8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_398;
  IControlRigObjectBinding *local_388;
  TReferenceControllerBase<1> *pTStack_380;
  FString local_378;
  FString local_368;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_358;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_348;
  undefined1 local_338 [8];
  TObjectPtr<UControlRig>_u_0 local_330;
  FString local_328;
  undefined1 local_318 [4];
  undefined1 local_314 [4];
  TObjectPtr<UClass>_u_0 local_310;
  FString local_308;
  FString local_2f8;
  FName local_2e8;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  TSharedPtr<IControlRigObjectBinding,1> local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  TObjectPtr<UClass>_u_0 *local_260;
  TObjectPtr<UControlRig>_u_0 *local_258;
  TObjectPtr<UClass>_u_0 *local_250;
  TObjectPtr<UControlRig> *local_248;
  TSharedRef<FControlRigObjectBinding,1> local_240;
  FString local_230;
  FString local_220;
  FText local_210;
  FText local_200;
  FString local_1f0;
  FString local_1e0;
  TSharedRef<FControlRigObjectBinding,1> local_1d0;
  undefined1 local_1c0 [368];
  TObjectPtr<UClass>_u_0 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_3c8 = param_1;
  local_3b0 = param_2;
  TVar13.DebugPtr = (UClass *)(**(code **)(this->_padding_ + 0xb0))();
  if (TVar13.DebugPtr == (UClass *)0x0) {
    return false;
  }
  pUVar22 = (this->ControlRig).field0_0x0.DebugPtr;
  pUVar31 = (UControlRig *)0x0;
  local_3c0.DebugPtr = TVar13.DebugPtr;
  if (pUVar22 == (UControlRig *)0x0) goto LAB_14a2a3e79;
  if ((UClass *)pUVar22->_padding_ == TVar13.DebugPtr) {
    return false;
  }
  uVar27 = 0;
  pUVar33 = (UControlRig *)0x0;
  local_1c0._8_8_ = this;
  local_1c0._16_8_ = param_1;
  FBoneContainer::FBoneContainer((FBoneContainer *)(local_1c0 + 0x18),param_2);
  pUVar2 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
  pUVar22 = pUVar31;
  local_50.DebugPtr = TVar13.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar14 = UControlRig::StaticClass(), pUVar22 = pUVar33, pUVar14 != (UClass *)0x0)) {
    iVar12 = (int)pUVar14->_padding_;
    if (((int)pUVar2->_padding_ < iVar12) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar12 * 8) !=
        &pUVar14->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((((bVar9) && ((this->ControlRigClass).Class.field0_0x0.DebugPtr == TVar13.DebugPtr)) &&
        (pUVar2 = (this->DefaultControlRigClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)
        ) && (pUVar14 = UControlRig::StaticClass(), pUVar14 != (UClass *)0x0)) {
      iVar12 = (int)pUVar14->_padding_;
      if (((int)pUVar2->_padding_ < iVar12) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar12 * 8) !=
          &pUVar14->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) &&
         (pUVar2 = (this->DefaultControlRigClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0
         )) {
        pUVar14 = UControlRig::StaticClass();
        if (pUVar14 != (UClass *)0x0) {
          iVar12 = (int)pUVar14->_padding_;
          if (((int)pUVar2->_padding_ < iVar12) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar12 * 8) !=
              &pUVar14->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if ((bVar9) &&
             (TVar13.DebugPtr == (this->DefaultControlRigClass).Class.field0_0x0.DebugPtr))
          goto LAB_14a2a3d69;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
        }
        local_310.DebugPtr = TVar13.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
        }
        uVar26 = ((uint)((ulonglong)TVar13.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar13.DebugPtr >> 4)) * -0x7a143595;
        uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
        iVar12 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                           ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                             *)&this->ControlRigPerClass,uVar26 >> 0x10 ^ uVar26,
                            (TObjectPtr<UClass_const_> *)&local_310.ObjectPtr);
        if (((iVar12 == -1) ||
            (lVar18 = *(longlong *)&this->ControlRigPerClass + (longlong)iVar12 * 0x18, lVar18 == 0)
            ) || (plVar15 = (longlong *)(lVar18 + 8), plVar15 == (longlong *)0x0)) {
          pFVar16 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&(TVar13.DebugPtr)->_padding_ + 4))
          ;
          if (((ulonglong)((pFVar16->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
            local_2e8 = (FName)(TVar13.DebugPtr)->_padding_;
            ::FName::ToString(&local_2e8,&local_308);
            ::FString::PrintfImpl(&local_2e0,L"Class \'%s\' is not supported (is it native).");
            bVar9 = `FAnimNode_ControlRig::UpdateControlRigIfNeeded'::__l11::<lambda_1>::operator()
                              (local_1c0 + 8,&local_2e0);
            if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
            }
            if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Data.AllocatorInstance.Data);
              FBoneContainer::~FBoneContainer((FBoneContainer *)(local_1c0 + 0x18));
              return bVar9;
            }
            goto LAB_14a2a43e4;
          }
          pUVar2 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
          if ((pUVar2 == (UClass *)0x0) ||
             (pUVar14 = UControlRig::StaticClass(), pUVar14 == (UClass *)0x0)) {
LAB_14a2a3531:
            local_408.DebugPtr = (UClass *)0x0;
LAB_14a2a3535:
            local_400 = (FProperty *)0x0;
          }
          else {
            iVar12 = (int)pUVar14->_padding_;
            if (((int)pUVar2->_padding_ < iVar12) ||
               ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar12 * 8) !=
                &pUVar14->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_14a2a3531;
            local_408 = (TObjectPtr<UClass>_u_0)(this->ControlRigClass).Class.field0_0x0.DebugPtr;
            if (local_408.DebugPtr == (UClass *)0x0) goto LAB_14a2a3535;
            local_400 = (FProperty *)(local_408.DebugPtr)->_padding_;
          }
          local_3f8 = 0xffffffff;
          local_3f4 = 0x101;
          local_3f2 = 0;
          TFieldIterator<FProperty>::IterateToNext
                    ((TFieldIterator<FProperty> *)&local_408.ObjectPtr);
          this_02 = local_400;
          while (local_400 = this_02, this_02 != (FProperty *)0x0) {
            bVar9 = FField::IsNative((FField *)this_02);
            if (!bVar9) {
              bVar9 = IsThisNotNull(this_02,"FField::GetFName");
              if (bVar9) {
                local_3f0 = (FName)this_02->_padding_;
              }
              else {
                local_3f0.ComparisonIndex.Value = 0;
                local_3f0.Number = 0;
              }
              pFVar17 = UStruct::FindPropertyByName((UStruct *)TVar13.DebugPtr,local_3f0);
              if (pFVar17 == (FProperty *)0x0) {
                bVar9 = IsThisNotNull(this_02,"FField::GetName");
                if (bVar9) {
                  ::FName::ToString((FName *)&this_02->_padding_,&local_368);
                }
                else {
                  ::FString::FString(&local_368,L"None");
                }
                ::FString::PrintfImpl(&local_2c0,L"Property / Variable \'%s\' is missing.");
                bVar9 = `FAnimNode_ControlRig::UpdateControlRigIfNeeded'::__l11::<lambda_1>::
                        operator()(local_1c0 + 8,&local_2c0);
                if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                }
                if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_368.Data.AllocatorInstance.Data);
                  FBoneContainer::~FBoneContainer((FBoneContainer *)(local_1c0 + 0x18));
                  return bVar9;
                }
                goto LAB_14a2a43e4;
              }
              cVar10 = (**(code **)(pFVar17->_padding_ + 0x1a0))(pFVar17,this_02);
              TVar13 = local_3c0;
              if (cVar10 == '\0') {
                RigVMTypeUtils::GetCPPTypeFromProperty(&local_328,this_02);
                RigVMTypeUtils::GetCPPTypeFromProperty(&local_2f8,pFVar17);
                bVar9 = IsThisNotNull(pFVar17,"FField::GetName");
                if (bVar9) {
                  ::FName::ToString((FName *)&pFVar17->_padding_,&local_378);
                }
                else {
                  ::FString::FString(&local_378,L"None");
                }
                ::FString::PrintfImpl
                          (&local_2d0,
                           L"Property / Variable \'%s\' has incorrect type (is \'%s\', expected \'%s\')."
                          );
                bVar9 = `FAnimNode_ControlRig::UpdateControlRigIfNeeded'::__l11::<lambda_1>::
                        operator()(local_1c0 + 8,&local_2d0);
                if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                }
                if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_378.Data.AllocatorInstance.Data);
                }
                if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                }
                if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_328.Data.AllocatorInstance.Data);
                  FBoneContainer::~FBoneContainer((FBoneContainer *)(local_1c0 + 0x18));
                  return bVar9;
                }
                goto LAB_14a2a43e4;
              }
            }
            local_400 = (FProperty *)this_02->_padding_;
            TFieldIterator<FProperty>::IterateToNext
                      ((TFieldIterator<FProperty> *)&local_408.ObjectPtr);
            this_02 = local_400;
          }
          FGCScopeGuard::FGCScopeGuard(&local_438);
          local_3d0 = 0;
          pUVar21 = UAnimInstance::GetOwningComponent(param_1);
          pUVar33 = NewObject<UControlRig>
                              ((UObject *)pUVar21,TVar13.DebugPtr,(FName)0x0,RF_NoFlags,
                               (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          local_3e8 = pUVar33;
          UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)pUVar33,Async);
          pUVar22 = (this->ControlRig).field0_0x0.DebugPtr;
          pTVar23 = MakeShared<FControlRigObjectBinding,1>(&local_240);
          local_2b0.Object = (IControlRigObjectBinding *)pTVar23->Object;
          local_2b0.SharedReferenceCount.ReferenceController =
               (pTVar23->SharedReferenceCount).ReferenceController;
          if (local_2b0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UControlRig::SetObjectBinding(pUVar22,&local_2b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_240.SharedReferenceCount.ReferenceController);
          pUVar22 = (this->ControlRig).field0_0x0.DebugPtr;
          pTVar3 = (pUVar22->ObjectBinding).SharedReferenceCount.ReferenceController;
          pIVar5 = (pUVar22->ObjectBinding).Object;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pIVar5 == (IControlRigObjectBinding *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          pUVar8 = local_3c8;
          pcVar6 = *(code **)*pIVar5;
          pUVar21 = UAnimInstance::GetOwningComponent(local_3c8);
          (*pcVar6)(pIVar5,pUVar21);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          (**(code **)(pUVar33->_padding_ + 0x2c0))(pUVar33,1);
          (**(code **)(pUVar33->_padding_ + 0x318))(pUVar33);
          FGCScopeGuard::~FGCScopeGuard(&local_438);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar33);
          }
          local_430 = (UObject *)this->_padding_;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (local_430 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(local_430);
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar33);
            }
          }
          this->_padding_ = (longlong)pUVar33;
          (**(code **)(this->_padding_ + 0xa8))(this,pUVar8);
          pcVar6 = *(code **)(pUVar33->_padding_ + 0x2f0);
          FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
          (*pcVar6)(pUVar33,local_338);
          this_00 = (pUVar33->DynamicHierarchy).field0_0x0.DebugPtr;
          this_01 = (((this->ControlRig).field0_0x0.DebugPtr)->DynamicHierarchy).field0_0x0.DebugPtr
          ;
          URigHierarchy::GetBoneKeys(this_01,&local_398,false);
          URigHierarchy::GetBoneKeys(this_00,&local_348,false);
          iVar12 = local_398.ArrayNum;
          uVar32 = (ulonglong)local_398.ArrayNum;
          pFVar1 = local_398.AllocatorInstance.Data + uVar32 * 0xc;
          FVar30.Data = local_398.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar32 != iVar12) {
              local_437 = 0;
              `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_437);
              uVar32 = (ulonglong)(uint)local_398.ArrayNum;
            }
            if (FVar30.Data == pFVar1) {
              URigHierarchy::GetCurveKeys(this_01,&local_3a8);
              URigHierarchy::GetCurveKeys(this_00,&local_358);
              iVar12 = local_3a8.ArrayNum;
              uVar32 = (ulonglong)local_3a8.ArrayNum;
              pFVar1 = local_3a8.AllocatorInstance.Data + uVar32 * 0xc;
              FVar30.Data = local_3a8.AllocatorInstance.Data;
              goto LAB_14a2a3a60;
            }
            if (local_348.AllocatorInstance.Data ==
                local_348.AllocatorInstance.Data + (longlong)local_348.ArrayNum * 0xc) break;
            FVar28.Data = local_348.AllocatorInstance.Data;
            while ((*(longlong *)(FVar28.Data + 4) != *(longlong *)(FVar30.Data + 4) ||
                   (*FVar28.Data != *FVar30.Data))) {
              FVar28.Data = FVar28.Data + 0xc;
              if (FVar28.Data ==
                  local_348.AllocatorInstance.Data + (longlong)local_348.ArrayNum * 0xc)
              goto LAB_14a2a381a;
            }
            FVar30.Data = FVar30.Data + 0xc;
          }
LAB_14a2a381a:
          ::FName::ToString((FName *)(FVar30.Data + 4),&local_230);
          ::FString::PrintfImpl(&local_2a0,L"Bone \'%s\' is missing from the rig.");
          bVar9 = `FAnimNode_ControlRig::UpdateControlRigIfNeeded'::__l11::<lambda_1>::operator()
                            (local_1c0 + 8,&local_2a0);
          local_3a8.AllocatorInstance.Data = local_230.Data.AllocatorInstance.Data;
          if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
            local_3a8.AllocatorInstance.Data = local_230.Data.AllocatorInstance.Data;
          }
          goto LAB_14a2a439f;
        }
        pUVar22 = (UControlRig *)*plVar15;
        if (pUVar22 == (UControlRig *)0x0) {
          (this->ControlRigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
          bVar9 = UpdateControlRigIfNeeded(this,param_1,local_3b0);
          FBoneContainer::~FBoneContainer((FBoneContainer *)(local_1c0 + 0x18));
          return bVar9;
        }
      }
    }
  }
LAB_14a2a3d69:
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->ControlRig).field0_0x0.DebugPtr)->_padding_,this);
  TVar13 = (TObjectPtr<UClass>_u_0)((this->ControlRig).field0_0x0.DebugPtr)->_padding_;
  local_3d8 = TVar13;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar13.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
    }
    TVar13 = local_3d8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_3d8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_3d8.DebugPtr);
    }
  }
  uVar27 = ((uint)((ulonglong)TVar13.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar13.DebugPtr >> 4)) * -0x7a143595;
  uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
  uVar27 = uVar27 >> 0x10 ^ uVar27;
  pTVar20 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
            ::FindByHash<TObjectPtr<UClass>_>
                      ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                        *)&this->ControlRigPerClass,uVar27,
                       (TObjectPtr<UClass> *)&local_3d8.ObjectPtr);
  if (pTVar20 == (TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_> *)0x0) {
    local_250 = &local_3d8;
    local_248 = &this->ControlRig;
    TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<UControlRig>_const_&>_>
              ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                *)&this->ControlRigPerClass,(uint)local_314,
               (TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<UControlRig>_const_&> *)
               (ulonglong)uVar27,(bool *)&local_250);
  }
  (this->ControlRig).field0_0x0.DebugPtr = (UControlRig *)0x0;
  if (pUVar22 != (UControlRig *)0x0) {
    (this->ControlRig).field0_0x0.DebugPtr = pUVar22;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar22);
    }
    FAnimNode_CustomProperty::SetTargetInstance
              ((FAnimNode_CustomProperty *)this,(UObject *)(this->ControlRig).field0_0x0.DebugPtr);
  }
  FBoneContainer::~FBoneContainer((FBoneContainer *)(local_1c0 + 0x18));
LAB_14a2a3e79:
  TVar13 = local_3c0;
  if ((this->ControlRig).field0_0x0.DebugPtr == (UControlRig *)0x0) {
    FGCScopeGuard::FGCScopeGuard(local_435);
    local_3b8 = 0;
    pUVar21 = UAnimInstance::GetOwningComponent(param_1);
    pUVar22 = NewObject<UControlRig>
                        ((UObject *)pUVar21,TVar13.DebugPtr,(FName)0x0,RF_NoFlags,(UObject *)0x0,
                         false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UControlRig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->ControlRig).field0_0x0.DebugPtr = pUVar22;
    UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)pUVar22,Async);
    pUVar22 = (this->ControlRig).field0_0x0.DebugPtr;
    pTVar23 = MakeShared<FControlRigObjectBinding,1>(&local_1d0);
    pTVar3 = (pTVar23->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar23->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_388 = (pUVar22->ObjectBinding).Object;
    pTStack_380 = (pUVar22->ObjectBinding).SharedReferenceCount.ReferenceController;
    (pUVar22->ObjectBinding).Object = (IControlRigObjectBinding *)pFVar4;
    (pUVar22->ObjectBinding).SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_380)
    ;
    TMulticastDelegate<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy> *)
               &pUVar22->OnControlRigBound,pUVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d0.SharedReferenceCount.ReferenceController);
    pUVar22 = (this->ControlRig).field0_0x0.DebugPtr;
    pTVar3 = (pUVar22->ObjectBinding).SharedReferenceCount.ReferenceController;
    pIVar5 = (pUVar22->ObjectBinding).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar5 == (IControlRigObjectBinding *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    pcVar6 = *(code **)*pIVar5;
    pUVar21 = UAnimInstance::GetOwningComponent(param_1);
    (*pcVar6)(pIVar5,pUVar21);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pUVar22 = (this->ControlRig).field0_0x0.DebugPtr;
    (**(code **)(pUVar22->_padding_ + 0x2c0))(pUVar22,1);
    (**(code **)(((this->ControlRig).field0_0x0.DebugPtr)->_padding_ + 0x318))();
    FAnimNode_CustomProperty::SetTargetInstance
              ((FAnimNode_CustomProperty *)this,(UObject *)(this->ControlRig).field0_0x0.DebugPtr);
    FGCScopeGuard::~FGCScopeGuard(local_435);
  }
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  }
  TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FAnimNode_ControlRig>
            ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
              *)&((this->ControlRig).field0_0x0.DebugPtr)->_padding_,
             (FAnimNode_ControlRig *)local_1c0,(pmf_b47d16fa)this);
  pUVar22 = (this->ControlRig).field0_0x0.DebugPtr;
  FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequired
            ((FControlRigHierarchyMappings *)&this->_padding_,pUVar22,
             (pUVar22->DynamicHierarchy).field0_0x0.DebugPtr,local_3b0,
             (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TWeakObjectPtr<UNodeMappingContainer,FWeakObjectPtr> *)&this->_padding_,
             *(bool *)((longlong)&this->_padding_ + 3),SUB81(this->_padding_,0));
  return true;
LAB_14a2a3a60:
  if ((uint)uVar32 != iVar12) {
    local_436 = 0;
    `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_436);
    uVar32 = (ulonglong)(uint)local_3a8.ArrayNum;
  }
  if (FVar30.Data == pFVar1) {
    if ((int)this->_padding_ < 1) goto LAB_14a2a3c3f;
    goto LAB_14a2a3b40;
  }
  if (local_358.AllocatorInstance.Data ==
      local_358.AllocatorInstance.Data + (longlong)local_358.ArrayNum * 0xc) goto LAB_14a2a3ab6;
  FVar28.Data = local_358.AllocatorInstance.Data;
  while ((*(longlong *)(FVar28.Data + 4) != *(longlong *)(FVar30.Data + 4) ||
         (*FVar28.Data != *FVar30.Data))) {
    FVar28.Data = FVar28.Data + 0xc;
    if (FVar28.Data == local_358.AllocatorInstance.Data + (longlong)local_358.ArrayNum * 0xc)
    goto LAB_14a2a3ab6;
  }
  FVar30.Data = FVar30.Data + 0xc;
  goto LAB_14a2a3a60;
LAB_14a2a3b40:
  do {
    pUVar22 = (this->ControlRig).field0_0x0.DebugPtr;
    uVar29 = (uint)pUVar31;
    pcVar6 = *(code **)(pUVar22->_padding_ + 0x3c8);
    uVar26 = uVar27;
    if ((int)uVar29 < (int)this->_padding_) {
      uVar26 = ~uVar29 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    lVar18 = (*pcVar6)(pUVar22,this->_padding_ + (longlong)(int)uVar29 * 8);
    if (lVar18 != 0) {
      pcVar6 = *(code **)(local_3e8->_padding_ + 0x3c8);
      uVar26 = uVar27;
      if ((int)uVar29 < (int)this->_padding_) {
        uVar26 = ~uVar29 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      lVar19 = (*pcVar6)(local_3e8,this->_padding_ + (longlong)(int)uVar29 * 8);
      if (lVar19 == 0) {
        uVar27 = 0;
        if ((int)uVar29 < (int)this->_padding_) {
          uVar27 = ~uVar29 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        ::FName::ToString((FName *)(this->_padding_ + (longlong)(int)uVar29 * 8),&local_1e0);
        ::FString::PrintfImpl(&local_270,L"Control \'%s\' is missing from the rig.");
        bVar9 = `FAnimNode_ControlRig::UpdateControlRigIfNeeded'::__l11::<lambda_1>::operator()
                          (local_1c0 + 8,&local_270);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        goto LAB_14a2a4383;
      }
      if (*(char *)(lVar19 + 0x231) != *(char *)(lVar18 + 0x231)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
          ControlTypeEnum = StaticEnum<enum_ERigControlType>();
          _Init_thread_footer(&::_TSS2);
        }
        pFVar24 = UEnum::GetDisplayNameTextByValue
                            (ControlTypeEnum,&local_210,(ulonglong)*(byte *)(lVar18 + 0x231));
        pFVar25 = FText::ToString(pFVar24);
        local_418.Data = (FScriptContainerElement *)0x0;
        local_410 = (pFVar25->Data).ArrayNum;
        lVar18 = (longlong)local_410;
        pFVar1 = (pFVar25->Data).AllocatorInstance.Data;
        if (local_410 == 0) {
          local_40c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_410,0,&local_418,local_410,&local_40c);
          memcpy(local_418.Data,pFVar1,lVar18 * 2);
        }
        if (local_210.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
        }
        pFVar24 = UEnum::GetDisplayNameTextByValue
                            (ControlTypeEnum,&local_200,(ulonglong)*(byte *)(lVar19 + 0x231));
        pFVar25 = FText::ToString(pFVar24);
        local_428.Data = (FScriptContainerElement *)0x0;
        local_420 = (pFVar25->Data).ArrayNum;
        lVar18 = (longlong)local_420;
        pFVar1 = (pFVar25->Data).AllocatorInstance.Data;
        if (local_420 == 0) {
          local_41c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_420,0,&local_428,local_420,&local_41c);
          memcpy(local_428.Data,pFVar1,lVar18 * 2);
        }
        if (local_200.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
        }
        if ((int)uVar29 < (int)this->_padding_) {
          uVar27 = ~uVar29 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        ::FName::ToString((FName *)(this->_padding_ + (longlong)(int)uVar29 * 8),&local_1f0);
        ::FString::PrintfImpl
                  (&local_280,L"Control \'%s\' has the incorrect type (is \'%s\', expected \'%s\')."
                  );
        bVar9 = `FAnimNode_ControlRig::UpdateControlRigIfNeeded'::__l11::<lambda_1>::operator()
                          (local_1c0 + 8,&local_280);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        local_1e0.Data.AllocatorInstance.Data = local_418.Data;
        if (local_428.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data);
          local_1e0.Data.AllocatorInstance.Data = local_418.Data;
        }
        goto LAB_14a2a4383;
      }
    }
    pUVar31 = (UControlRig *)(ulonglong)(uVar29 + 1);
  } while ((int)(uVar29 + 1) < (int)this->_padding_);
LAB_14a2a3c3f:
  pUVar22 = local_3e8;
  local_330.DebugPtr = local_3e8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_3e8);
  }
  TVar13 = (TObjectPtr<UClass>_u_0)pUVar22->_padding_;
  local_3e0 = TVar13;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar13.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
    }
    TVar13 = local_3e0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_3e0.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_3e0.DebugPtr);
    }
  }
  uVar27 = ((uint)((ulonglong)TVar13.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar13.DebugPtr >> 4)) * -0x7a143595;
  uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
  uVar27 = uVar27 >> 0x10 ^ uVar27;
  pTVar20 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
            ::FindByHash<TObjectPtr<UClass>_>
                      ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                        *)&this->ControlRigPerClass,uVar27,
                       (TObjectPtr<UClass> *)&local_3e0.ObjectPtr);
  if (pTVar20 == (TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_> *)0x0) {
    local_260 = &local_3e0;
    local_258 = &local_330;
    TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<UControlRig>_&&>_>
              ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UControlRig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UControlRig>,0>,FDefaultSetAllocator>
                *)&this->ControlRigPerClass,(uint)local_318,
               (TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<UControlRig>_&&> *)
               (ulonglong)uVar27,(bool *)&local_260);
  }
  if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
  if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AllocatorInstance.Data);
  }
  if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.AllocatorInstance.Data);
  }
  if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.AllocatorInstance.Data);
  }
  pUVar7 = local_430;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_430 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_430);
  }
  this->_padding_ = (longlong)pUVar7;
  param_1 = local_3c8;
  goto LAB_14a2a3d69;
LAB_14a2a3ab6:
  ::FName::ToString((FName *)(FVar30.Data + 4),&local_220);
  ::FString::PrintfImpl(&local_290,L"Curve \'%s\' is missing from the rig.");
  bVar9 = `FAnimNode_ControlRig::UpdateControlRigIfNeeded'::__l11::<lambda_1>::operator()
                    (local_1c0 + 8,&local_290);
  local_1e0.Data.AllocatorInstance.Data = local_220.Data.AllocatorInstance.Data;
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
    local_1e0.Data.AllocatorInstance.Data = local_220.Data.AllocatorInstance.Data;
  }
LAB_14a2a4383:
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
LAB_14a2a439f:
  if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AllocatorInstance.Data);
  }
  if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.AllocatorInstance.Data);
  }
  if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.AllocatorInstance.Data);
  }
  pUVar7 = local_430;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_430 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_430);
  }
  this->_padding_ = (longlong)pUVar7;
LAB_14a2a43e4:
  FBoneContainer::~FBoneContainer((FBoneContainer *)(local_1c0 + 0x18));
  return bVar9;
}

// UpdateInput @ 14a2a4e50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::UpdateInput
          (FAnimNode_ControlRig *this,UControlRig *param_1,FPoseContext *param_2)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::UpdateInput");
  FAnimNode_ControlRigBase::UpdateInput((FAnimNode_ControlRigBase *)this,param_1,param_2);
  FControlRigVariableMappings::UpdateCurveInputs
            (&this->ControlRigVariableMappings,param_1,&this->InputMapping,&param_2->Curve);
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateOutput @ 14a2a5950

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::UpdateOutput
          (FAnimNode_ControlRig *this,UControlRig *param_1,FPoseContext *param_2)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::UpdateOutput");
  FAnimNode_ControlRigBase::UpdateOutput((FAnimNode_ControlRigBase *)this,param_1,param_2);
  FControlRigVariableMappings::UpdateCurveOutputs
            (&this->ControlRigVariableMappings,param_1,&this->OutputMapping,&param_2->Curve);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 14a2a6410

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_ControlRig::Update_AnyThread(FAnimNode_ControlRig *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  EAnimAlphaInputType EVar2;
  undefined1 uVar3;
  int iVar4;
  FName FVar5;
  longlong lVar6;
  FBoneContainer *pFVar7;
  code *pcVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ControlRig::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_AnimNode_ControlRig_Update_AnyThread>
  FVar11;
  FExposedValueHandler *this_00;
  UClass *pUVar12;
  UAnimInstance *pUVar13;
  URigVMHost *this_01;
  UClass *pUVar14;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  ForAnyElementType FVar15;
  float fVar16;
  float fVar17;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_98;
  FName local_90;
  FName local_88;
  byte local_80;
  FString local_78;
  FStatMessage local_68 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRig::Update_AnyThread");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AnimNode_ControlRig_Update_AnyThread ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ControlRig::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_AnimNode_ControlRig_Update_AnyThread>
         )0x0) {
      pFVar10 = ::FName::FName(&local_98,"STAT_AnimNode_ControlRig_Update_AnyThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimNode_ControlRig_Update_AnyThread,
                 *pFVar10,L"STAT_AnimNode_ControlRig_Update_AnyThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_AnimNode_ControlRig_Update_AnyThread;
  if (StatPtr_STAT_AnimNode_ControlRig_Update_AnyThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ControlRig::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_AnimNode_ControlRig_Update_AnyThread>
       )0x0) {
    pFVar10 = ::FName::FName(&local_90,"STAT_AnimNode_ControlRig_Update_AnyThread");
    FVar11 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_ControlRig::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_AnimNode_ControlRig_Update_AnyThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimNode_ControlRig_Update_AnyThread,*pFVar10,
                          L"STAT_AnimNode_ControlRig_Update_AnyThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  local_80 = 0;
  FVar5 = *(FName *)FVar11;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      local_80 = local_80 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_res10.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\AnimNode_ControlRig.cpp"
                   ,0x57);
        local_80 = local_80 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar5;
      local_88 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_80 = local_80 | 4;
    }
  }
  bVar9 = FAnimNode_Base::IsLODEnabled
                    ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
  if (bVar9) {
    this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
    FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
    EVar2 = this->AlphaInputType;
    *(undefined4 *)&this->_padding_ = 0;
    if (EVar2 == Float) {
      fVar17 = FInputScaleBiasClamp::ApplyTo
                         (&this->AlphaScaleBiasClamp,this->Alpha,param_1->DeltaTime);
      fVar17 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar17);
LAB_14a2a668d:
      *(float *)&this->_padding_ = fVar17;
    }
    else {
      if (EVar2 == Bool) {
        fVar17 = FInputAlphaBoolBlend::ApplyTo
                           (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
        goto LAB_14a2a668d;
      }
      if ((EVar2 == Curve) &&
         (pUVar13 = *(UAnimInstance **)(param_1->_padding_ + 0x140), pUVar13 != (UAnimInstance *)0x0
         )) {
        pUVar12 = Z_Construct_UClass_UAnimInstance_NoRegister();
        iVar4 = (int)pUVar12->_padding_;
        if ((iVar4 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar12->_padding_)) {
          fVar17 = param_1->DeltaTime;
          fVar16 = UAnimInstance::GetCurveValue(pUVar13,this->AlphaCurveName);
          fVar17 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,fVar16,fVar17);
          goto LAB_14a2a668d;
        }
      }
    }
    fVar17 = *(float *)&this->_padding_;
    if (__real_3f800000 <= fVar17) {
      fVar17 = __real_3f800000;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    *(float *)&this->_padding_ = fVar17;
    (**(code **)(this->_padding_ + 0xa8))(this,*(undefined8 *)(param_1->_padding_ + 0x140));
  }
  else {
    *(undefined4 *)&this->_padding_ = 0;
  }
  pUVar13 = (UAnimInstance *)
            FAnimationBaseContext::GetAnimInstanceObject((FAnimationBaseContext *)param_1);
  if (pUVar13 != (UAnimInstance *)0x0) {
    pUVar12 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar4 = (int)pUVar12->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar12->_padding_)) {
      lVar6 = param_1->_padding_;
      if ((*(longlong *)(lVar6 + 0x660) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      UpdateControlRigIfNeeded(this,pUVar13,*(FBoneContainer **)(lVar6 + 0x660));
    }
  }
  lVar6 = param_1->_padding_;
  if ((*(longlong *)(lVar6 + 0x660) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar7 = *(FBoneContainer **)(lVar6 + 0x660);
  lVar6 = param_1->_padding_;
  if ((*(longlong *)(lVar6 + 0x158) == 0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2821110184175206020>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                         ,0x17c,"SkeletalMeshComponent"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FControlRigHierarchyMappings::UpdateControlRigRefPoseIfNeeded
            ((FControlRigHierarchyMappings *)&this->_padding_,(this->ControlRig).field0_0x0.DebugPtr
             ,*(UObject **)(param_1->_padding_ + 0x140),*(USkeletalMeshComponent **)(lVar6 + 0x158),
             pFVar7,this->bSetRefPoseFromSkeleton,false);
  FStatsHierarchical::BeginMeasurement("FAnimNode_ControlRigBase::Update_AnyThread");
  FAnimNode_Base::Update_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->_padding_,param_1);
  if ((*(char *)((longlong)&this->_padding_ + 4) != '\0') &&
     (this_01 = (URigVMHost *)(**(code **)(this->_padding_ + 0xb8))(this),
     this_01 != (URigVMHost *)0x0)) {
    URigVMHost::SetDeltaTime(this_01,param_1->DeltaTime);
  }
  FStatsHierarchical::EndMeasurement();
  pUVar12 = (this->ControlRigClass).Class.field0_0x0.DebugPtr;
  if ((pUVar12 != (UClass *)0x0) && (pUVar14 = UControlRig::StaticClass(), pUVar14 != (UClass *)0x0)
     ) {
    iVar4 = (int)pUVar14->_padding_;
    if (((int)pUVar12->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) &&
       (pUVar12 = (this->ControlRigClass).Class.field0_0x0.DebugPtr, pUVar12 != (UClass *)0x0)) {
      local_res18 = (FName)pUVar12->_padding_;
      ::FName::ToString(&local_res18,&local_78);
      goto LAB_14a2a68c1;
    }
  }
  ::FString::FString(&local_78,L"None");
LAB_14a2a68c1:
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar15.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Class",
             (wchar_t *)FVar15.Data);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((local_80 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_80 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar5 = local_88;
  if (((((local_80 & 4) != 0) && (local_88 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_68[0].NameAndInfo.Index = FVar5.ComparisonIndex.Value;
      local_68[0].NameAndInfo.Number = FVar5.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_68[0].StatData.Pad[4] = '\0';
      local_68[0].StatData.Pad[5] = '\0';
      local_68[0].StatData.Pad[6] = '\0';
      local_68[0].StatData.Pad[7] = '\0';
      local_68[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_68[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_68[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_68[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,local_68);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  local_80 = 0;
  FStatsHierarchical::EndMeasurement();
  return;
}

