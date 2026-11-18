// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 22

// StaticStruct @ 14defec90

UScriptStruct * __cdecl FAnimNode_IKRig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_IKRig,(UObject *)pUVar1,
                         L"AnimNode_IKRig");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.OuterSingleton;
}

// FAnimNode_IKRig @ 14df158f0

FAnimNode_IKRig * __thiscall FAnimNode_IKRig::FAnimNode_IKRig(FAnimNode_IKRig *this)

{
  float fVar1;
  
  FAnimNode_CustomProperty::FAnimNode_CustomProperty((FAnimNode_CustomProperty *)this);
  fVar1 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_IKRig__6B_;
  *(undefined4 *)&(this->Source).field_0x8 = 0xffffffff;
  *(undefined8 *)&this->Source = 0;
  (this->Source).field_0xc = 0;
  (this->RigDefinitionAsset).field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->Goals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Goals).ArrayNum = 0;
  (this->Goals).ArrayMax = 0;
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  (this->AlphaBoolBlend).BlendInTime = 0.0;
  (this->AlphaBoolBlend).BlendOutTime = 0.0;
  (this->AlphaBoolBlend).BlendOption = HermiteCubic;
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->bStartFromRefPose = false;
  this->AlphaInputType = Float;
  this->bAlphaBoolEnabled = true;
  this->Alpha = 1.0;
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
  FIKRigProcessor::FIKRigProcessor(&this->IKRigProcessor);
  (this->GoalCreators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GoalCreators).ArrayNum = 0;
  (this->GoalCreators).ArrayMax = 0;
  *(undefined8 *)&this->GoalsFromGoalCreators = 0;
  *(undefined8 *)&(this->GoalsFromGoalCreators).field_0x8 = 0;
  *(undefined8 *)&(this->GoalsFromGoalCreators).field_0x20 = 0;
  *(undefined4 *)&(this->GoalsFromGoalCreators).field_0x28 = 0;
  *(undefined4 *)&(this->GoalsFromGoalCreators).field_0x2c = 0x80;
  *(undefined4 *)&(this->GoalsFromGoalCreators).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GoalsFromGoalCreators).field_0x34 = 0;
  *(undefined8 *)&(this->GoalsFromGoalCreators).field_0x40 = 0;
  *(undefined4 *)&(this->GoalsFromGoalCreators).field_0x48 = 0;
  *(undefined8 *)&this->CompactPoseToRigIndices = 0;
  *(undefined8 *)&(this->CompactPoseToRigIndices).field_0x8 = 0;
  *(undefined8 *)&(this->CompactPoseToRigIndices).field_0x20 = 0;
  this->bSearchedForGoalCreators = false;
  *(undefined4 *)&(this->CompactPoseToRigIndices).field_0x28 = 0;
  *(undefined4 *)&(this->CompactPoseToRigIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompactPoseToRigIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompactPoseToRigIndices).field_0x34 = 0;
  *(undefined8 *)&(this->CompactPoseToRigIndices).field_0x40 = 0;
  *(undefined4 *)&(this->CompactPoseToRigIndices).field_0x48 = 0;
  (this->UpdateFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateFunctions).ArrayNum = 0;
  (this->UpdateFunctions).ArrayMax = 0;
  this->ActualAlpha = 0.0;
  return this;
}

// ~FAnimNode_IKRig @ 14df1b760

void __thiscall FAnimNode_IKRig::~FAnimNode_IKRig(FAnimNode_IKRig *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TFunction<void___cdecl(UObject_const_*)>,int>
            ((TFunction<void___cdecl(UObject_const_*)> *)
             (this->UpdateFunctions).AllocatorInstance.Data,(this->UpdateFunctions).ArrayNum);
  pFVar1 = (this->UpdateFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CompactPoseToRigIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CompactPoseToRigIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FCompactPoseBoneIndex,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCompactPoseBoneIndex,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCompactPoseBoneIndex,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompactPoseToRigIndices);
  *(undefined4 *)&(this->GoalsFromGoalCreators).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GoalsFromGoalCreators).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GoalsFromGoalCreators);
  pFVar1 = (this->GoalCreators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIKRigProcessor::~FIKRigProcessor(&this->IKRigProcessor);
  pFVar1 = (this->Goals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAnimNode_CustomProperty::~FAnimNode_CustomProperty((FAnimNode_CustomProperty *)this);
  return;
}

// operator= @ 14df1cfc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAnimNode_IKRig * __thiscall
FAnimNode_IKRig::operator=(FAnimNode_IKRig *this,FAnimNode_IKRig *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TArray<TObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *pTVar4;
  TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
  *this_00;
  TMap<FCompactPoseBoneIndex,int,FDefaultSetAllocator,TCompactPoseBoneIndexMapKeyFuncs<int>_>
  *this_01;
  TArray<TFunction<void___cdecl(UObject_const_*)>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  UIKRigDefinition *pUVar7;
  UCurveFloat *pUVar8;
  FScriptContainerElement *pFVar9;
  TFunction<void___cdecl(UObject_const_*)> *pTVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  this->_padding_ = param_1->_padding_;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  uVar11 = *(undefined8 *)&(param_1->Source).field_0x8;
  *(undefined8 *)&this->Source = *(undefined8 *)&param_1->Source;
  *(undefined8 *)&(this->Source).field_0x8 = uVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->RigDefinitionAsset).field0_0x0.DebugPtr, pUVar7 != (UIKRigDefinition *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->RigDefinitionAsset).field0_0x0 = (param_1->RigDefinitionAsset).field0_0x0;
  TArray<FIKRigGoal,TSizedDefaultAllocator<32>_>::operator=(&this->Goals,&param_1->Goals);
  this->bStartFromRefPose = param_1->bStartFromRefPose;
  this->AlphaInputType = param_1->AlphaInputType;
  this->bAlphaBoolEnabled = param_1->bAlphaBoolEnabled;
  this->Alpha = param_1->Alpha;
  this->AlphaScaleBias = param_1->AlphaScaleBias;
  (this->AlphaBoolBlend).BlendInTime = (param_1->AlphaBoolBlend).BlendInTime;
  (this->AlphaBoolBlend).BlendOutTime = (param_1->AlphaBoolBlend).BlendOutTime;
  (this->AlphaBoolBlend).BlendOption = (param_1->AlphaBoolBlend).BlendOption;
  (this->AlphaBoolBlend).bInitialized = (param_1->AlphaBoolBlend).bInitialized;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr,
     pUVar8 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->AlphaBoolBlend).CustomCurve.field0_0x0 = (param_1->AlphaBoolBlend).CustomCurve.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->AlphaBoolBlend).AlphaBlend.CustomCurve.field0_0x0.DebugPtr,
     pUVar8 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
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
  bVar12 = (param_1->AlphaScaleBiasClamp).bClampResult;
  bVar13 = (param_1->AlphaScaleBiasClamp).bInterpResult;
  bVar14 = (param_1->AlphaScaleBiasClamp).bInitialized;
  fVar15 = (param_1->AlphaScaleBiasClamp).InRange.Min;
  uVar11 = *(undefined8 *)&(param_1->AlphaScaleBiasClamp).InRange.Max;
  (this->AlphaScaleBiasClamp).bMapRange = (param_1->AlphaScaleBiasClamp).bMapRange;
  (this->AlphaScaleBiasClamp).bClampResult = bVar12;
  (this->AlphaScaleBiasClamp).bInterpResult = bVar13;
  (this->AlphaScaleBiasClamp).bInitialized = bVar14;
  (this->AlphaScaleBiasClamp).InRange.Min = fVar15;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).InRange.Max = uVar11;
  fVar15 = (param_1->AlphaScaleBiasClamp).Bias;
  fVar16 = (param_1->AlphaScaleBiasClamp).ClampMin;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).OutRange.Max =
       *(undefined8 *)&(param_1->AlphaScaleBiasClamp).OutRange.Max;
  (this->AlphaScaleBiasClamp).Bias = fVar15;
  (this->AlphaScaleBiasClamp).ClampMin = fVar16;
  fVar15 = (param_1->AlphaScaleBiasClamp).InterpSpeedIncreasing;
  fVar16 = (param_1->AlphaScaleBiasClamp).InterpSpeedDecreasing;
  fVar17 = (param_1->AlphaScaleBiasClamp).InterpolatedResult;
  (this->AlphaScaleBiasClamp).ClampMax = (param_1->AlphaScaleBiasClamp).ClampMax;
  (this->AlphaScaleBiasClamp).InterpSpeedIncreasing = fVar15;
  (this->AlphaScaleBiasClamp).InterpSpeedDecreasing = fVar16;
  (this->AlphaScaleBiasClamp).InterpolatedResult = fVar17;
  FIKRigProcessor::operator=(&this->IKRigProcessor,&param_1->IKRigProcessor);
  pTVar4 = &this->GoalCreators;
  if (pTVar4 != &param_1->GoalCreators) {
    iVar6 = (param_1->GoalCreators).ArrayNum;
    piVar1 = &(this->GoalCreators).ArrayMax;
    pFVar9 = (param_1->GoalCreators).AllocatorInstance.Data;
    (this->GoalCreators).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,*piVar1,&pTVar4->AllocatorInstance,iVar6,piVar1);
      ConstructItems<TObjectPtr<UActorComponent>,TObjectPtr<UActorComponent>,int>
                ((pTVar4->AllocatorInstance).Data,(TObjectPtr<UActorComponent> *)pFVar9,iVar6);
    }
  }
  this_00 = &this->GoalsFromGoalCreators;
  if (this_00 != &param_1->GoalsFromGoalCreators) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->GoalsFromGoalCreators).field_0x38,
               (int *)&(this->GoalsFromGoalCreators).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->GoalsFromGoalCreators).field_0x38,
               *(int *)&(param_1->GoalsFromGoalCreators).field_0x48);
    iVar6 = *(int *)&(param_1->GoalsFromGoalCreators).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar6);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,iVar6,(ForAnyElementType *)this_00,
               (int *)&(this->GoalsFromGoalCreators).field_0x8,
               (int *)&(this->GoalsFromGoalCreators).field_0xc);
    puVar2 = &(param_1->GoalsFromGoalCreators).field_0x10;
    puVar3 = &(this->GoalsFromGoalCreators).field_0x10;
    *(undefined4 *)&(this->GoalsFromGoalCreators).field_0x30 =
         *(undefined4 *)&(param_1->GoalsFromGoalCreators).field_0x30;
    *(undefined4 *)&(this->GoalsFromGoalCreators).field_0x34 =
         *(undefined4 *)&(param_1->GoalsFromGoalCreators).field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar6 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->GoalsFromGoalCreators,(longlong)iVar6 * 0xd0);
    }
  }
  this_01 = &this->CompactPoseToRigIndices;
  this->bSearchedForGoalCreators = param_1->bSearchedForGoalCreators;
  if (this_01 != &param_1->CompactPoseToRigIndices) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->CompactPoseToRigIndices).field_0x38,
               (int *)&(this->CompactPoseToRigIndices).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->CompactPoseToRigIndices).field_0x38,
               *(int *)&(param_1->CompactPoseToRigIndices).field_0x48);
    iVar6 = *(int *)&(param_1->CompactPoseToRigIndices).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FCompactPoseBoneIndex,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FCompactPoseBoneIndex,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar6);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar6,(ForAnyElementType *)this_01,
               (int *)&(this->CompactPoseToRigIndices).field_0x8,
               (int *)&(this->CompactPoseToRigIndices).field_0xc);
    puVar2 = &(param_1->CompactPoseToRigIndices).field_0x10;
    puVar3 = &(this->CompactPoseToRigIndices).field_0x10;
    *(undefined4 *)&(this->CompactPoseToRigIndices).field_0x30 =
         *(undefined4 *)&(param_1->CompactPoseToRigIndices).field_0x30;
    *(undefined4 *)&(this->CompactPoseToRigIndices).field_0x34 =
         *(undefined4 *)&(param_1->CompactPoseToRigIndices).field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar6 != 0) {
      memcpy(*(void **)this_01,*(void **)&param_1->CompactPoseToRigIndices,(longlong)iVar6 << 4);
    }
  }
  pTVar5 = &this->UpdateFunctions;
  if (pTVar5 != &param_1->UpdateFunctions) {
    DestructItems<TFunction<void___cdecl(UObject_const_*)>,int>
              ((TFunction<void___cdecl(UObject_const_*)> *)(pTVar5->AllocatorInstance).Data,
               (this->UpdateFunctions).ArrayNum);
    iVar6 = (param_1->UpdateFunctions).ArrayNum;
    piVar1 = &(this->UpdateFunctions).ArrayMax;
    pTVar10 = (TFunction<void___cdecl(UObject_const_*)> *)
              (param_1->UpdateFunctions).AllocatorInstance.Data;
    (this->UpdateFunctions).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar6,*piVar1,&pTVar5->AllocatorInstance,iVar6,piVar1);
      ConstructItems<TFunction<void___cdecl(UObject_const_*)>,TFunction<void___cdecl(UObject_const_*)>,int>
                ((pTVar5->AllocatorInstance).Data,pTVar10,iVar6);
    }
  }
  this->ActualAlpha = param_1->ActualAlpha;
  return this;
}

// AssignGoalTargets @ 14df264a0

void __thiscall FAnimNode_IKRig::AssignGoalTargets(FAnimNode_IKRig *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FIKRigGoal *pFVar9;
  uint uVar10;
  FIKRigGoal *pFVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar3 = (this->Goals).ArrayNum;
  pFVar9 = (FIKRigGoal *)(this->Goals).AllocatorInstance.Data;
  pFVar11 = pFVar9 + iVar3;
  while( true ) {
    if ((this->Goals).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FIKRigGoal,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar11) break;
    if ((this->IKRigProcessor).bInitialized == false) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_727633314675949218>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                         ,0x15e,"bInitialized");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      FIKRigGoalContainer::SetIKGoal(&(this->IKRigProcessor).GoalContainer,pFVar9);
    }
    pFVar9 = pFVar9 + 1;
  }
  iVar12 = 0;
  puVar1 = &(this->GoalsFromGoalCreators).field_0x10;
  iVar3 = *(int *)&(this->GoalsFromGoalCreators).field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->GoalsFromGoalCreators).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14df265cd;
      uVar10 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res18;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14df265cd:
  uVar10 = *(uint *)&(this->GoalsFromGoalCreators).field_0x28;
  uVar16 = uVar10 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar12);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_70._28_4_ = local_ac;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->GoalsFromGoalCreators).field_0x8 -
                       *(int *)&(this->GoalsFromGoalCreators).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->GoalsFromGoalCreators).field_0x28;
  if (uVar10 != uVar6) {
    puVar13 = *(undefined1 **)&(this->GoalsFromGoalCreators).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14df266e0;
      uVar10 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar10 = local_res20 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14df266e0:
  while( true ) {
    if (*(int *)&(this->GoalsFromGoalCreators).field_0x8 -
        *(int *)&(this->GoalsFromGoalCreators).field_0x34 != (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar10) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if ((this->IKRigProcessor).bInitialized == false) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_727633314675949218>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                         ,0x15e,"bInitialized");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      FIKRigGoalContainer::SetIKGoal
                (&(this->IKRigProcessor).GoalContainer,
                 (FIKRigGoal *)
                 (*(longlong *)&this->GoalsFromGoalCreators +
                 (longlong)TStack_70.CurrentBitIndex * 0xd0 + 0x10));
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// CacheBones_AnyThread @ 14df27250

void __thiscall
FAnimNode_IKRig::CacheBones_AnyThread(FAnimNode_IKRig *this,FAnimationCacheBonesContext *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  UObject *pUVar8;
  longlong lVar9;
  ushort *puVar10;
  TTuple<FName,int> *pTVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  ushort uVar14;
  undefined4 local_res8 [2];
  TKeyInitializer<FCompactPoseBoneIndex_const_&> local_res10;
  undefined4 *local_res18;
  
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  lVar9 = *(longlong *)param_1;
  if ((*(longlong *)(lVar9 + 0x660) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar3 = *(undefined8 **)(lVar9 + 0x660);
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(puVar3 + 6));
  if (((bVar7) && (puVar3[9] != 0)) && (0 < *(int *)(puVar3 + 1))) {
    TSet<TTuple<FCompactPoseBoneIndex,int>,TCompactPoseBoneIndexMapKeyFuncs<int>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FCompactPoseBoneIndex,int>,TCompactPoseBoneIndexMapKeyFuncs<int>,FDefaultSetAllocator>
             *)&this->CompactPoseToRigIndices);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar3 + 7));
    if (pUVar8 == (UObject *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7966094887222977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\AnimNodes\\AnimNode_IKRig.cpp"
                         ,0x13f,"SkeletalMesh");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      lVar9 = (**(code **)(*(longlong *)pUVar8 + 0x318))(pUVar8);
      iVar2 = *(int *)(puVar3 + 1);
      uVar14 = 0;
      puVar12 = (undefined4 *)0x0;
      if (0 < iVar2) {
        do {
          if ((*(int *)(puVar3 + 1) <= (int)puVar12) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar4 = (ushort *)*puVar3;
          uVar1 = puVar4[uVar14];
          for (puVar10 = puVar4; puVar10 != puVar4 + *(int *)(puVar3 + 1); puVar10 = puVar10 + 1) {
            if ((uint)*puVar10 == (uint)uVar1) {
              local_res8[0] = (undefined4)((longlong)puVar10 - (longlong)puVar4 >> 1);
              goto LAB_14df273e9;
            }
          }
          local_res8[0] = 0xffffffff;
LAB_14df273e9:
          if ((*(int *)(lVar9 + 0x28) <= (int)(uint)uVar1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar13 = 0xffffffff;
          FVar5 = *(FName *)(*(longlong *)(lVar9 + 0x20) + (ulonglong)uVar1 * 0xc);
          if (FVar5 != (FName)0x0) {
            pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                              *)(lVar9 + 0x90),FVar5);
            puVar12 = (undefined4 *)&pTVar11->field_0x8;
            if (pTVar11 == (TTuple<FName,int> *)0x0) {
              puVar12 = (undefined4 *)0x0;
            }
            if (puVar12 != (undefined4 *)0x0) {
              uVar13 = *puVar12;
            }
          }
          local_res18 = local_res8;
          TSet<TTuple<FCompactPoseBoneIndex,int>,TCompactPoseBoneIndexMapKeyFuncs<int>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<FCompactPoseBoneIndex_const_&>_>
                    ((TSet<TTuple<FCompactPoseBoneIndex,int>,TCompactPoseBoneIndexMapKeyFuncs<int>,FDefaultSetAllocator>
                      *)&this->CompactPoseToRigIndices,&local_res10,(bool *)&local_res18);
          uVar14 = uVar14 + 1;
          *(undefined4 *)
           (*(longlong *)&this->CompactPoseToRigIndices + 4 + (longlong)(int)local_res10.Key * 0x10)
               = uVar13;
          puVar12 = (undefined4 *)(ulonglong)uVar14;
        } while ((int)(uint)uVar14 < iVar2);
      }
      (this->IKRigProcessor).bInitialized = false;
      (this->IKRigProcessor).bTriedToInitialize = false;
    }
  }
  return;
}

// CopyInputPoseToSolver @ 14df2ca60

void __thiscall FAnimNode_IKRig::CopyInputPoseToSolver(FAnimNode_IKRig *this,FCompactPose *param_1)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  longlong lVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  
  if (this->bStartFromRefPose == false) {
    puVar29 = (uint *)0x0;
    uVar28 = *(uint *)&param_1->field_0x8;
    puVar24 = puVar29;
    puVar30 = puVar29;
    if (uVar28 != 0) {
      do {
        uVar27 = (uint)puVar24;
        if (*(int *)&(this->CompactPoseToRigIndices).field_0x8 !=
            *(int *)&(this->CompactPoseToRigIndices).field_0x34) {
          puVar4 = *(undefined1 **)&(this->CompactPoseToRigIndices).field_0x40;
          puVar26 = &(this->CompactPoseToRigIndices).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar26 = puVar4;
          }
          uVar22 = *(uint *)(puVar26 +
                            ((ulonglong)(*(int *)&(this->CompactPoseToRigIndices).field_0x48 - 1) &
                            (ulonglong)puVar24) * 4);
          if (uVar22 != 0xffffffff) {
            do {
              puVar24 = (uint *)((longlong)(int)uVar22 * 0x10 +
                                *(longlong *)&this->CompactPoseToRigIndices);
              if (*puVar24 == uVar27) {
                puVar31 = puVar24 + 1;
                if (puVar24 == (uint *)0x0) {
                  puVar31 = puVar29;
                }
                if (((puVar31 != (uint *)0x0) && (-1 < (int)*puVar31)) &&
                   ((int)*puVar31 < (this->IKRigProcessor).Skeleton.CurrentPoseLocal.ArrayNum)) {
                  uVar22 = 0;
                  if ((int)uVar27 < *(int *)&param_1->field_0x8) {
                    uVar22 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar25 = *(longlong *)param_1;
                  uVar22 = *puVar31;
                  puVar3 = (undefined8 *)((longlong)puVar30 + lVar25 + 0x10);
                  uVar11 = *puVar3;
                  uVar12 = puVar3[1];
                  puVar3 = (undefined8 *)((longlong)puVar30 + lVar25 + 0x20);
                  uVar13 = *puVar3;
                  uVar14 = puVar3[1];
                  puVar1 = (undefined4 *)((longlong)puVar30 + lVar25);
                  uVar7 = *puVar1;
                  uVar8 = puVar1[1];
                  uVar9 = puVar1[2];
                  uVar10 = puVar1[3];
                  puVar3 = (undefined8 *)((longlong)puVar30 + lVar25 + 0x30);
                  uVar15 = *puVar3;
                  uVar16 = puVar3[1];
                  puVar3 = (undefined8 *)((longlong)puVar30 + lVar25 + 0x50);
                  uVar17 = *puVar3;
                  uVar18 = puVar3[1];
                  puVar3 = (undefined8 *)((longlong)puVar30 + lVar25 + 0x40);
                  uVar19 = *puVar3;
                  uVar20 = puVar3[1];
                  uVar23 = 0;
                  if ((int)uVar22 < (this->IKRigProcessor).Skeleton.CurrentPoseLocal.ArrayNum) {
                    uVar23 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar5 = (this->IKRigProcessor).Skeleton.CurrentPoseLocal.AllocatorInstance.Data;
                  lVar25 = (longlong)(int)uVar22 * 0x60;
                  pFVar2 = pFVar5 + lVar25;
                  *(undefined4 *)pFVar2 = uVar7;
                  *(undefined4 *)(pFVar2 + 4) = uVar8;
                  *(undefined4 *)(pFVar2 + 8) = uVar9;
                  *(undefined4 *)(pFVar2 + 0xc) = uVar10;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x10) = uVar11;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x10 + 8) = uVar12;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x20) = uVar13;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x20 + 8) = uVar14;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x30) = uVar15;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x30 + 8) = uVar16;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x40) = uVar19;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x40 + 8) = uVar20;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x50) = uVar17;
                  *(undefined8 *)(pFVar5 + lVar25 + 0x50 + 8) = uVar18;
                }
                break;
              }
              uVar22 = puVar24[2];
            } while (uVar22 != 0xffffffff);
          }
        }
        puVar24 = (uint *)(ulonglong)(uVar27 + 1);
        puVar30 = puVar30 + 0x18;
      } while (uVar27 + 1 != uVar28);
    }
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->IKRigProcessor).Skeleton.CurrentPoseGlobal,
               &(this->IKRigProcessor).Skeleton.CurrentPoseLocal);
    if (0 < (this->IKRigProcessor).Skeleton.CurrentPoseLocal.ArrayNum) {
      do {
        FIKRigSkeleton::UpdateGlobalTransformFromLocal
                  (&(this->IKRigProcessor).Skeleton,(int)puVar29);
        uVar28 = (int)puVar29 + 1;
        puVar29 = (uint *)(ulonglong)uVar28;
      } while ((int)uVar28 < (this->IKRigProcessor).Skeleton.CurrentPoseLocal.ArrayNum);
    }
  }
  else {
    if ((this->IKRigProcessor).bInitialized != false) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                (&(this->IKRigProcessor).Skeleton.CurrentPoseGlobal,
                 &(this->IKRigProcessor).Skeleton.RefPoseGlobal);
      return;
    }
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_727633314675949236>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                        ,0x14c,"bInitialized");
    if (bVar21) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// CopyOutputPoseToAnimGraph @ 14df2cd70

void __thiscall
FAnimNode_IKRig::CopyOutputPoseToAnimGraph(FAnimNode_IKRig *this,FCompactPose *param_1)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  uint *puVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  double dVar47;
  double dVar49;
  undefined4 uVar51;
  undefined1 auVar48 [16];
  double dVar50;
  double dVar52;
  double dVar54;
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->IKRigProcessor).Skeleton.CurrentPoseLocal,
             &(this->IKRigProcessor).Skeleton.CurrentPoseGlobal);
  uVar24 = 0;
  uVar23 = uVar24;
  if (0 < (this->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum) {
    do {
      FIKRigSkeleton::UpdateLocalTransformFromGlobal(&(this->IKRigProcessor).Skeleton,(int)uVar23);
      uVar21 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar21;
    } while ((int)uVar21 < (this->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum);
  }
  fVar15 = __real_3f7fff58;
  fVar14 = __real_3727c5ac;
  uVar21 = *(uint *)&param_1->field_0x8;
  uVar23 = uVar24;
  if (uVar21 != 0) {
    do {
      puVar17 = (uint *)0x0;
      uVar22 = (uint)uVar24;
      if (*(int *)&(this->CompactPoseToRigIndices).field_0x8 !=
          *(int *)&(this->CompactPoseToRigIndices).field_0x34) {
        puVar4 = *(undefined1 **)&(this->CompactPoseToRigIndices).field_0x40;
        puVar20 = &(this->CompactPoseToRigIndices).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar20 = puVar4;
        }
        uVar43 = *(uint *)(puVar20 +
                          (*(int *)&(this->CompactPoseToRigIndices).field_0x48 - 1 & uVar24) * 4);
        if (uVar43 != 0xffffffff) {
          do {
            puVar18 = (uint *)((longlong)(int)uVar43 * 0x10 +
                              *(longlong *)&this->CompactPoseToRigIndices);
            if (*puVar18 == uVar22) {
              puVar25 = puVar18 + 1;
              if (puVar18 == (uint *)0x0) {
                puVar25 = puVar17;
              }
              if ((puVar25 != (uint *)0x0) && (*puVar25 != 0xffffffff)) {
                if ((int)uVar22 < *(int *)&param_1->field_0x8) {
                  puVar17 = (uint *)(ulonglong)(~uVar22 >> 0x1f);
                }
                if (((int)puVar17 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar43 = *puVar25;
                lVar5 = *(longlong *)param_1;
                fVar3 = this->ActualAlpha;
                uVar44 = 0;
                if ((int)uVar43 < (this->IKRigProcessor).Skeleton.CurrentPoseLocal.ArrayNum) {
                  uVar44 = ~uVar43 >> 0x1f;
                }
                if ((uVar44 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar19 = (this->IKRigProcessor).Skeleton.CurrentPoseLocal.AllocatorInstance.Data +
                          (longlong)(int)uVar43 * 0x60;
                if (fVar14 < fVar3) {
                  if (fVar3 < fVar15) {
                    dVar47 = (double)fVar3;
                    dVar49 = (double)fVar3;
                    dVar50 = (double)fVar3;
                    dVar13 = (double)fVar3;
                    uVar58 = (undefined4)((ulonglong)dVar13 >> 0x20);
                    dVar42 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
                    pdVar1 = (double *)(uVar23 + 0x20 + lVar5);
                    pdVar2 = (double *)(uVar23 + 0x30 + lVar5);
                    auVar33._8_4_ = SUB84(dVar13,0);
                    auVar33._0_8_ = dVar50;
                    auVar33._12_4_ = uVar58;
                    dVar54 = *(double *)(pFVar19 + 0x30);
                    dVar52 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar13) * pdVar2[1]
                             + auVar33._8_8_ * *(double *)(pFVar19 + 0x38);
                    auVar34._8_4_ = SUB84(dVar49,0);
                    auVar34._0_8_ = dVar47;
                    uVar51 = (undefined4)((ulonglong)dVar49 >> 0x20);
                    auVar34._12_4_ = uVar51;
                    dVar32 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) * pdVar1[1]
                             + auVar34._8_8_ * *(double *)(pFVar19 + 0x28);
                    auVar35._8_4_ = SUB84(dVar13,0);
                    auVar35._0_8_ = dVar50;
                    auVar35._12_4_ = uVar58;
                    auVar41._8_4_ = SUB84(dVar32,0);
                    auVar41._0_8_ =
                         (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) * *pdVar1 +
                         dVar47 * *(double *)(pFVar19 + 0x20);
                    auVar41._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                    *(undefined1 (*) [16])(uVar23 + 0x20 + lVar5) = auVar41;
                    auVar9._8_4_ = SUB84(dVar52,0);
                    auVar9._0_8_ = (dVar42 - dVar50) * *pdVar2 + dVar50 * dVar54;
                    auVar9._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
                    *(undefined1 (*) [16])(uVar23 + 0x30 + lVar5) = auVar9;
                    dVar54 = *(double *)(pFVar19 + 0x50);
                    dVar42 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
                    pdVar1 = (double *)(uVar23 + 0x40 + lVar5);
                    pdVar2 = (double *)(uVar23 + 0x50 + lVar5);
                    dVar52 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar13) * pdVar2[1]
                             + auVar35._8_8_ * *(double *)(pFVar19 + 0x58);
                    auVar36._8_4_ = SUB84(dVar49,0);
                    auVar36._0_8_ = dVar47;
                    auVar36._12_4_ = uVar51;
                    dVar32 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) * pdVar1[1]
                             + auVar36._8_8_ * *(double *)(pFVar19 + 0x48);
                    auVar56._8_4_ = SUB84(dVar32,0);
                    auVar56._0_8_ =
                         (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) * *pdVar1 +
                         dVar47 * *(double *)(pFVar19 + 0x40);
                    auVar56._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                    *(undefined1 (*) [16])(uVar23 + 0x40 + lVar5) = auVar56;
                    auVar10._8_4_ = SUB84(dVar52,0);
                    auVar10._0_8_ = (dVar42 - dVar50) * *pdVar2 + dVar50 * dVar54;
                    auVar10._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
                    *(undefined1 (*) [16])(uVar23 + 0x50 + lVar5) = auVar10;
                    pdVar1 = (double *)(uVar23 + 0x10 + lVar5);
                    pdVar2 = (double *)(uVar23 + 0x10 + lVar5);
                    dVar52 = 0.0 - *pdVar2;
                    dVar54 = 0.0 - pdVar2[1];
                    dVar32 = *pdVar1 * *(double *)(pFVar19 + 0x10) +
                             *(double *)(uVar23 + lVar5) * *(double *)pFVar19;
                    dVar42 = pdVar1[1] * *(double *)(pFVar19 + 0x18) +
                             ((double *)(uVar23 + lVar5))[1] * *(double *)(pFVar19 + 8);
                    auVar37._8_4_ = SUB84(dVar42,0);
                    auVar37._0_8_ = dVar32;
                    auVar37._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                    lVar26 = -(ulonglong)(0.0 <= auVar37._8_8_ + dVar32);
                    lVar29 = -(ulonglong)(0.0 <= dVar32 + dVar42);
                    uVar43 = (uint)lVar26;
                    uVar44 = (uint)((ulonglong)lVar26 >> 0x20);
                    uVar45 = (uint)lVar29;
                    uVar46 = (uint)((ulonglong)lVar29 >> 0x20);
                    dVar32 = 0.0 - *(double *)(uVar23 + lVar5);
                    dVar42 = 0.0 - ((double *)(uVar23 + lVar5))[1];
                    puVar17 = (uint *)(uVar23 + lVar5);
                    auVar55._0_4_ = ~uVar43 & SUB84(dVar32,0);
                    auVar55._4_4_ = ~uVar44 & (uint)((ulonglong)dVar32 >> 0x20);
                    auVar55._8_4_ = ~uVar45 & SUB84(dVar42,0);
                    auVar55._12_4_ = ~uVar46 & (uint)((ulonglong)dVar42 >> 0x20);
                    auVar7._4_4_ = uVar44 & puVar17[1];
                    auVar7._0_4_ = uVar43 & *puVar17;
                    auVar7._8_4_ = uVar45 & puVar17[2];
                    auVar7._12_4_ = uVar46 & puVar17[3];
                    dVar47 = SUB168(auVar55 | auVar7,0) *
                             (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) +
                             dVar47 * *(double *)pFVar19;
                    dVar49 = SUB168(auVar55 | auVar7,8) *
                             (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) +
                             dVar49 * *(double *)(pFVar19 + 8);
                    puVar17 = (uint *)(uVar23 + 0x10 + lVar5);
                    auVar48._0_4_ = ~uVar43 & SUB84(dVar52,0);
                    auVar48._4_4_ = ~uVar44 & (uint)((ulonglong)dVar52 >> 0x20);
                    auVar48._8_4_ = ~uVar45 & SUB84(dVar54,0);
                    auVar48._12_4_ = ~uVar46 & (uint)((ulonglong)dVar54 >> 0x20);
                    auVar11._4_4_ = uVar44 & puVar17[1];
                    auVar11._0_4_ = uVar43 & *puVar17;
                    auVar11._8_4_ = uVar45 & puVar17[2];
                    auVar11._12_4_ = uVar46 & puVar17[3];
                    auVar38._8_4_ = SUB84(dVar49,0);
                    auVar38._0_8_ = dVar47;
                    auVar38._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
                    dVar52 = SUB168(auVar48 | auVar11,0) *
                             (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar50) +
                             dVar50 * *(double *)(pFVar19 + 0x10);
                    dVar50 = SUB168(auVar48 | auVar11,8) *
                             (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar13) +
                             dVar13 * *(double *)(pFVar19 + 0x18);
                    dVar32 = dVar52 * dVar52 + dVar47 * dVar47;
                    dVar42 = dVar50 * dVar50 + auVar38._8_8_ * dVar49;
                    auVar39._8_4_ = SUB84(dVar42,0);
                    auVar39._0_8_ = dVar32;
                    auVar39._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                    auVar40._0_8_ = auVar39._8_8_ + dVar32;
                    auVar40._8_8_ = dVar32 + dVar42;
                    uVar27 = -(ulonglong)
                              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                              auVar40._0_8_);
                    uVar30 = -(ulonglong)
                              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                              auVar40._8_8_);
                    uVar28 = -(ulonglong)
                              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                              auVar40._0_8_);
                    uVar31 = -(ulonglong)
                              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                              auVar40._8_8_);
                    auVar41 = sqrtpd(auVar40,auVar40);
                    auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                    auVar41);
                    auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                    auVar41);
                    auVar57._0_8_ = uVar27 & (ulonglong)(auVar56._0_8_ * dVar47);
                    uVar24 = uVar30 & (ulonglong)(auVar56._8_8_ * dVar49);
                    auVar57._8_4_ = (undefined4)uVar24;
                    auVar57._12_4_ = (undefined4)(uVar24 >> 0x20);
                    auVar53._0_8_ = uVar28 & (ulonglong)(auVar41._0_8_ * dVar52);
                    uVar24 = uVar31 & (ulonglong)(auVar41._8_8_ * dVar50);
                    auVar53._8_4_ = (undefined4)uVar24;
                    auVar53._12_4_ = (undefined4)(uVar24 >> 0x20);
                    auVar12._4_4_ =
                         ~(uint)(uVar27 >> 0x20) &
                         GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                    auVar12._0_4_ =
                         ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                    auVar12._8_4_ =
                         ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                    auVar12._12_4_ =
                         ~(uint)(uVar30 >> 0x20) &
                         GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                    auVar8._4_4_ = ~(uint)(uVar28 >> 0x20) &
                                   GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                    auVar8._0_4_ = ~(uint)uVar28 &
                                   GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                    auVar8._8_4_ = ~(uint)uVar31 &
                                   GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                    auVar8._12_4_ =
                         ~(uint)(uVar31 >> 0x20) &
                         GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                    *(undefined1 (*) [16])(uVar23 + lVar5) = auVar57 | auVar12;
                    *(undefined1 (*) [16])(uVar23 + 0x10 + lVar5) = auVar53 | auVar8;
                  }
                  else {
                    dVar32 = *(double *)(pFVar19 + 8);
                    *(double *)(uVar23 + lVar5) = *(double *)pFVar19;
                    ((double *)(uVar23 + lVar5))[1] = dVar32;
                    dVar32 = *(double *)(pFVar19 + 0x18);
                    pdVar1 = (double *)(uVar23 + 0x10 + lVar5);
                    *pdVar1 = *(double *)(pFVar19 + 0x10);
                    pdVar1[1] = dVar32;
                    dVar32 = *(double *)(pFVar19 + 0x28);
                    pdVar1 = (double *)(uVar23 + 0x20 + lVar5);
                    *pdVar1 = *(double *)(pFVar19 + 0x20);
                    pdVar1[1] = dVar32;
                    dVar32 = *(double *)(pFVar19 + 0x38);
                    pdVar1 = (double *)(uVar23 + 0x30 + lVar5);
                    *pdVar1 = *(double *)(pFVar19 + 0x30);
                    pdVar1[1] = dVar32;
                    *(undefined1 (*) [16])(uVar23 + 0x40 + lVar5) =
                         *(undefined1 (*) [16])(pFVar19 + 0x40);
                    dVar32 = *(double *)(pFVar19 + 0x58);
                    pdVar1 = (double *)(uVar23 + 0x50 + lVar5);
                    *pdVar1 = *(double *)(pFVar19 + 0x50);
                    pdVar1[1] = dVar32;
                  }
                }
              }
              break;
            }
            uVar43 = puVar18[2];
          } while (uVar43 != 0xffffffff);
        }
      }
      uVar24 = (ulonglong)(uVar22 + 1);
      uVar23 = uVar23 + 0x60;
    } while (uVar22 + 1 != uVar21);
  }
  return;
}

// Evaluate_AnyThread @ 14df30ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAnimNode_IKRig::Evaluate_AnyThread(FAnimNode_IKRig *this,FPoseContext *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 extraout_EAX;
  int iVar4;
  FAnimNode_Base *pFVar5;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar6;
  uint uVar7;
  FAnimNode_IKRig *pFVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  FIKRigGoalContainer local_88;
  TTransform<double> local_68;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_IKRig::Evaluate_AnyThread");
  if (this->bStartFromRefPose == false) {
    pFVar5 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->Source);
    if (pFVar5 != (FAnimNode_Base *)0x0) {
      FPoseLink::Evaluate(&this->Source,param_1);
    }
  }
  else if (param_1->bExpectsAdditivePose == false) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
  }
  else {
    FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
  }
  if (__real_3727c5ac < this->ActualAlpha) {
    if ((this->IKRigProcessor).bInitialized == false) {
      local_88.Goals.ArrayNum = 0;
      local_88.Goals.ArrayMax = 0;
      local_88.bRigNeedsInitialized = true;
      local_88._1_7_ = 0;
      local_88.Goals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00 = FAnimInstanceProxy::GetSkelMeshComponent((FAnimInstanceProxy *)param_1->_padding_);
      pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
      FIKRigProcessor::Initialize
                (&this->IKRigProcessor,(this->RigDefinitionAsset).field0_0x0.DebugPtr,pUVar6,
                 &local_88);
      if (local_88.Goals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Goals.AllocatorInstance.Data);
      }
      if ((this->IKRigProcessor).bInitialized == false) goto LAB_14df31062;
    }
    CopyInputPoseToSolver(this,&param_1->Pose);
    pFVar8 = this;
    AssignGoalTargets(this);
    lVar1 = param_1->_padding_;
    auVar10._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)(lVar1 + 100),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(lVar1 + 0x60));
    auVar10._8_4_ = _UNK_15061cc88 & *(uint *)(lVar1 + 0x68);
    auVar10._12_4_ = _UNK_15061cc8c & *(uint *)(lVar1 + 0x6c);
    lVar9 = -(ulonglong)
             ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
             (double)CONCAT44(_UNK_15061cc8c & *(uint *)(lVar1 + 0x7c),
                              _UNK_15061cc88 & *(uint *)(lVar1 + 0x78)));
    auVar3._8_4_ = (int)lVar9;
    auVar3._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)(lVar1 + 0x74),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)(lVar1 + 0x70)));
    auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar7 = movmskpd((int)pFVar8,auVar3);
    lVar9 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar10._8_8_);
    auVar2._8_4_ = (int)lVar9;
    auVar2._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar10._0_8_);
    auVar2._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    iVar4 = movmskpd(extraout_EAX,auVar2);
    if ((uVar7 & 0x3fffffff) == 0 && iVar4 == 0) {
      local_68.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_68.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_68.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_68.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_68.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_68.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast((TTransform<double> *)(lVar1 + 0x20),&local_68);
    }
    FIKRigProcessor::Solve(&this->IKRigProcessor,&local_68);
    CopyOutputPoseToAnimGraph(this,&param_1->Pose);
  }
LAB_14df31062:
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 14df34010

void __thiscall FAnimNode_IKRig::GatherDebugData(FAnimNode_IKRig *this,FNodeDebugData *param_1)

{
  ulonglong uVar1;
  TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
  *pTVar2;
  int iVar3;
  longlong lVar4;
  FName FVar5;
  undefined1 *puVar6;
  code *pcVar7;
  TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UPackage *pUVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uint uVar15;
  FNodeDebugData *pFVar16;
  uint uVar17;
  FName *this_00;
  int iVar18;
  int iVar19;
  uint *puVar20;
  FName *pFVar21;
  undefined1 local_res8 [8];
  FNodeDebugData *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_17c;
  FName local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [4];
  
  local_res10 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_IKRig::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar12 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_IKRig,(UObject *)pUVar12,
                         L"AnimNode_IKRig");
  }
  local_178 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_IKRig.OuterSingleton)->_padding_;
  ::FName::ToString(&local_178,&local_170);
  ::FString::PrintfImpl(&local_160,L"%s<W:%.1f%%> %s");
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_c0,L"%s IK Rig evaluated with %d Goals.");
  FNodeDebugData::AddDebugItem(param_1,&local_c0,false);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  iVar18 = 0;
  puVar6 = &(this->GoalsFromGoalCreators).field_0x10;
  iVar3 = *(int *)&(this->GoalsFromGoalCreators).field_0x28;
  pTVar2 = &this->GoalsFromGoalCreators;
  uVar10 = 1;
  iVar19 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->GoalsFromGoalCreators).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar6;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      iVar19 = iVar19 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14df341d0;
      uVar17 = puVar20[lVar13 + 1];
    }
    uVar10 = -uVar17 & uVar17;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iVar11 = iVar19 + -1 + local_res20;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14df341d0:
  uVar17 = *(uint *)&(this->GoalsFromGoalCreators).field_0x28;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uVar10,iVar18);
  TStack_e8.CurrentBitIndex = iVar11;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_e8._28_4_ = iVar11;
  TStack_e8.BaseBitIndex = iVar19;
  uStack_c8 = CONCAT44(uStack_17c,
                       *(int *)&(this->GoalsFromGoalCreators).field_0x8 -
                       *(int *)&(this->GoalsFromGoalCreators).field_0x34);
  local_f0 = pTVar2;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&(this->GoalsFromGoalCreators).field_0x28;
  pFVar16 = local_res10;
  if (uVar17 != uVar10) {
    puVar14 = *(undefined1 **)&(this->GoalsFromGoalCreators).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar6;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14df342f0;
      uVar17 = *(uint *)(puVar14 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar17 = (int)lVar13 + -1 + uVar15;
    if ((int)uVar10 < (int)uVar17) {
      uVar17 = uVar10;
    }
  }
LAB_14df342f0:
  while( true ) {
    pTVar8 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar13 = (longlong)TStack_e8.CurrentBitIndex;
    if (((TStack_e8.CurrentBitIndex == uVar17) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar6)) && (pTVar8 == pTVar2))
    break;
    lVar4 = *(longlong *)pTVar8;
    ::FString::PrintfImpl(&local_140,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::PrintfImpl(&local_150,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FName::ToString((FName *)(lVar4 + lVar13 * 0xd0 + 0x10),&local_b0);
    ::FString::PrintfImpl(&local_130,L"Name=%s, Pos=(%s, Alpha=%3.3f), Rot=(%s, Alpha=%3.3f)");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_a0,L"Goal supplied by actor component: %s");
    pFVar16 = local_res10;
    FNodeDebugData::AddDebugItem(local_res10,&local_a0,false);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  iVar3 = (this->Goals).ArrayNum;
  this_00 = (FName *)(this->Goals).AllocatorInstance.Data;
  pFVar21 = this_00 + (longlong)iVar3 * 0x16;
  do {
    if ((this->Goals).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FIKRigGoal,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (this_00 == pFVar21) {
      FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,pFVar16);
      FStatsHierarchical::EndMeasurement();
      return;
    }
    FVar5 = *this_00;
    uVar10 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    if (*(int *)&(this->GoalsFromGoalCreators).field_0x8 !=
        *(int *)&(this->GoalsFromGoalCreators).field_0x34) {
      puVar6 = *(undefined1 **)&(this->GoalsFromGoalCreators).field_0x40;
      puVar14 = &(this->GoalsFromGoalCreators).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar14 = puVar6;
      }
      iVar18 = *(int *)(puVar14 +
                       (ulonglong)
                       (*(int *)&(this->GoalsFromGoalCreators).field_0x48 - 1U &
                       FVar5.Number + uVar10) * 4);
      if (iVar18 != -1) {
        do {
          if (*(FName *)((longlong)iVar18 * 0xd0 + *(longlong *)pTVar2) == FVar5)
          goto LAB_14df34674;
          iVar18 = *(int *)((longlong)iVar18 * 0xd0 + 0xc0 + *(longlong *)pTVar2);
        } while (iVar18 != -1);
      }
    }
    ::FString::PrintfImpl(&local_110,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::PrintfImpl(&local_120,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FName::ToString(this_00,&local_90);
    ::FString::PrintfImpl(&local_100,L"Name=%s, Pos=(%s, Alpha=%3.3f), Rot=(%s, Alpha=%3.3f)");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(local_80,L"Goal supplied by node pin: %s");
    pFVar16 = local_res10;
    FNodeDebugData::AddDebugItem(local_res10,local_80,false);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
LAB_14df34674:
    this_00 = this_00 + 0x16;
  } while( true );
}

// GetIKRigProcessor @ 14df38b90

FIKRigProcessor * __thiscall FAnimNode_IKRig::GetIKRigProcessor(FAnimNode_IKRig *this)

{
  return &this->IKRigProcessor;
}

// GetTargetClass @ 14df40a60

UClass * __thiscall FAnimNode_IKRig::GetTargetClass(FAnimNode_IKRig *this)

{
  return (UClass *)0x0;
}

// HasPreUpdate @ 14df41550

bool __thiscall FAnimNode_IKRig::HasPreUpdate(FAnimNode_IKRig *this)

{
  return true;
}

// InitializeProperties @ 14df45fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014df46ae3) */

void __thiscall
FAnimNode_IKRig::InitializeProperties(FAnimNode_IKRig *this,UObject *param_1,UClass *param_2)

{
  TArray<TFunction<void___cdecl(UObject_const_*)>,TSizedDefaultAllocator<32>_> *pTVar1;
  TFunction<void___cdecl(UObject_const_*)> *pTVar2;
  FName FVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FString *this_00;
  FString *pFVar10;
  FName *pFVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  int *piVar14;
  longlong lVar15;
  FName *this_01;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FField *pFVar18;
  int iVar19;
  FAnimNode_IKRig *pFVar20;
  undefined1 auStackY_218 [32];
  FField *local_1c8;
  uint local_1c0;
  FAnimNode_IKRig *local_1b8;
  undefined8 local_1b0;
  FName local_1a8;
  longlong *local_1a0;
  UStruct *local_198;
  TFieldIterator<FProperty> local_190;
  longlong local_178;
  FString local_170;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FString local_120;
  FString local_110;
  code *local_f8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  FField *local_d8;
  longlong local_d0;
  code *local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  FField *local_a8;
  longlong local_a0;
  code *local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  FField *local_78;
  longlong local_70;
  code *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  FField *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_1b8 = this;
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar11 = ::FName::FName(&local_140,0xd,L"PositionAlpha",FNAME_Add);
    local_160 = *pFVar11;
    ::FName::ToString(&local_160,&AlphaPosPropStr);
    atexit(`FAnimNode_IKRig::InitializeProperties'::__l2::
           _dynamic_atexit_destructor_for__AlphaPosPropStr__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar14 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar11 = ::FName::FName(&local_138,0xd,L"RotationAlpha",FNAME_Add);
    local_158 = *pFVar11;
    ::FName::ToString(&local_158,&AlphaRotPropStr);
    atexit(`FAnimNode_IKRig::InitializeProperties'::__l2::
           _dynamic_atexit_destructor_for__AlphaRotPropStr__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar14 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pFVar11 = ::FName::FName(&local_130,8,L"Position",FNAME_Add);
    local_150 = *pFVar11;
    ::FName::ToString(&local_150,&PositionPropStr);
    atexit(`FAnimNode_IKRig::InitializeProperties'::__l2::
           _dynamic_atexit_destructor_for__PositionPropStr__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar14 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pFVar11 = ::FName::FName(&local_128,8,L"Rotation",FNAME_Add);
    local_148 = *pFVar11;
    ::FName::ToString(&local_148,&RotationPropStr);
    atexit(`FAnimNode_IKRig::InitializeProperties'::__l2::
           _dynamic_atexit_destructor_for__RotationPropStr__);
    _Init_thread_footer(&::_TSS3);
  }
  uVar8 = (uint)this->_padding_;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  iVar9 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar9 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  uVar8 = (uint)this->_padding_;
  plVar12 = &this->_padding_;
  local_1a0 = plVar12;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  iVar9 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar9 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,(ForAnyElementType *)plVar12,0,(int *)((longlong)&this->_padding_ + 4));
  }
  uVar8 = (uint)this->_padding_;
  pTVar1 = &this->UpdateFunctions;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  pTVar2 = (TFunction<void___cdecl(UObject_const_*)> *)(pTVar1->AllocatorInstance).Data;
  iVar9 = (this->UpdateFunctions).ArrayNum;
  piVar14 = &(this->UpdateFunctions).ArrayMax;
  if ((this->UpdateFunctions).ArrayMax < (int)uVar8) {
    DestructItems<TFunction<void___cdecl(UObject_const_*)>,int>(pTVar2,iVar9);
    (this->UpdateFunctions).ArrayNum = 0;
    if (*piVar14 != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,uVar8,&pTVar1->AllocatorInstance,0,piVar14);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(UObject_const_*)>,int>(pTVar2,iVar9);
    (this->UpdateFunctions).ArrayNum = 0;
  }
  if (((int)this->_padding_ != (int)this->_padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourcePropertyNames.Num() == DestPropertyNames.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\AnimNodes\\AnimNode_IKRig.cpp"
                         ,0x161,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_198 = *(UStruct **)&param_1->field_0x10;
  local_1c0 = 0;
  if (0 < (int)this->_padding_) {
    local_178 = 0;
    pFVar20 = this;
    do {
      lVar15 = local_178;
      uVar17 = ~local_1c0;
      uVar8 = 0;
      if ((int)local_1c0 < (int)pFVar20->_padding_) {
        uVar8 = uVar17 >> 0x1f;
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
      pFVar18 = (FField *)0x0;
      FVar3 = *(FName *)(lVar15 + pFVar20->_padding_);
      if (FVar3 != (FName)0x0) {
        if (local_198 == (UStruct *)0x0) {
          local_190.Field = (FField *)0x0;
        }
        else {
          local_190.Field = local_198->ChildProperties;
        }
        local_190.InterfaceIndex = -1;
        local_190.bIncludeSuper = true;
        local_190.bIncludeDeprecated = true;
        local_190.bIncludeInterface = false;
        local_190.Struct = local_198;
        TFieldIterator<FProperty>::IterateToNext(&local_190);
        pFVar18 = local_190.Field;
        while (local_190.Field = pFVar18, pFVar18 != (FField *)0x0) {
          bVar7 = IsThisNotNull(pFVar18,"FField::GetFName");
          if (bVar7) {
            local_1a8 = pFVar18->NamePrivate;
          }
          else {
            local_1a8.ComparisonIndex.Value = 0;
            local_1a8.Number = 0;
          }
          if (local_1a8 == FVar3) goto LAB_14df4627a;
          local_190.Field = pFVar18->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_190);
          pFVar18 = local_190.Field;
        }
        pFVar18 = (FField *)0x0;
      }
LAB_14df4627a:
      local_1c8 = pFVar18;
      if ((((FField **)pFVar20->_padding_ <= &local_1c8) &&
          (&local_1c8 < (FField **)pFVar20->_padding_ + *(int *)((longlong)&pFVar20->_padding_ + 4))
          ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (int)pFVar20->_padding_;
      if (iVar9 == *(int *)((longlong)&pFVar20->_padding_ + 4)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&pFVar20->_padding_,
                           (int *)((longlong)&pFVar20->_padding_ + 4));
      }
      *(int *)&pFVar20->_padding_ = iVar9 + 1;
      local_1b0 = 0;
      *(FField **)(pFVar20->_padding_ + (longlong)iVar9 * 8) = local_1c8;
      if ((((undefined8 *)*plVar12 <= &local_1b0) &&
          (&local_1b0 < (undefined8 *)*plVar12 + *(int *)((longlong)plVar12 + 0xc))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (int)plVar12[1];
      if (iVar9 == *(int *)((longlong)plVar12 + 0xc)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)plVar12,(int *)((longlong)plVar12 + 0xc));
      }
      *(int *)(plVar12 + 1) = iVar9 + 1;
      *(undefined8 *)(*plVar12 + (longlong)iVar9 * 8) = local_1b0;
      if (local_1c8 != (FField *)0x0) {
        lVar15 = (longlong)(int)local_1c0;
        uVar8 = 0;
        if ((int)local_1c0 < (int)pFVar20->_padding_) {
          uVar8 = uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (FName *)(pFVar20->Goals).AllocatorInstance.Data;
        pFVar11 = (FName *)(pFVar20->_padding_ + lVar15 * 8);
        iVar9 = (local_1b8->Goals).ArrayNum;
        pFVar20 = local_1b8;
        plVar12 = local_1a0;
        for (this_01 = pFVar4; local_1b8 = pFVar20, local_1a0 = plVar12,
            this_01 != pFVar4 + (longlong)iVar9 * 0x16; this_01 = this_01 + 0x16) {
          this_00 = ::FName::ToString(pFVar11,&local_110);
          pFVar10 = ::FName::ToString(this_01,&local_120);
          iVar19 = (pFVar10->Data).ArrayNum;
          if (iVar19 == 0) {
            iVar19 = 0;
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            iVar19 = iVar19 + -1;
          }
          bVar7 = ::FString::EndsWith(this_00,pwVar13,iVar19,IgnoreCase);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          pFVar20 = local_1b8;
          plVar12 = local_1a0;
          if (bVar7) {
            iVar9 = (int)(((longlong)this_01 - (longlong)pFVar4) / 0xb0);
            if (-1 < iVar9) {
              if (iVar9 < (local_1b8->Goals).ArrayNum) {
                if (((local_1b8->Goals).ArrayNum <= iVar9) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar16 = (pFVar20->Goals).AllocatorInstance.Data + (longlong)iVar9 * 0xb0;
                ::FName::ToString(pFVar11,&local_170);
                iVar19 = 0;
                iVar9 = AlphaPosPropStr.Data.ArrayNum + -1;
                if (AlphaPosPropStr.Data.ArrayNum == 0) {
                  iVar9 = iVar19;
                }
                pwVar13 = L"";
                if (AlphaPosPropStr.Data.ArrayNum != 0) {
                  pwVar13 = (wchar_t *)AlphaPosPropStr.Data.AllocatorInstance;
                }
                bVar7 = ::FString::StartsWith(&local_170,pwVar13,iVar9,IgnoreCase);
                if (bVar7) {
                  pFVar5 = (pTVar1->AllocatorInstance).Data;
                  local_e8 = &UE::Core::Private::Function::
                              TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`20'::<lambda_2>,0,0>
                              ::_vftable_;
                  local_d8 = local_1c8;
                  local_f8[0] = UE::Core::Private::Function::
                                TFunctionRefCaller<`FAnimNode_IKRig::InitializeProperties'::__l20::<lambda_2>,void,UObject_const_*>
                                ::Call;
                  local_d0 = 0;
                  uStack_e0 = pFVar16;
                  if (((pFVar5 <= (FScriptContainerElement *)local_f8) &&
                      ((FScriptContainerElement *)local_f8 < pFVar5 + (longlong)*piVar14 * 0x30)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar9 = (this->UpdateFunctions).ArrayNum;
                  if (iVar9 == *piVar14) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x1030,&pTVar1->AllocatorInstance,piVar14);
                  }
                  (this->UpdateFunctions).ArrayNum = iVar9 + 1;
                  pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
                  *(code **)pFVar16 = local_f8[0];
                  *(longlong *)(pFVar16 + 0x28) = local_d0;
                  local_d0 = 0;
                  *(undefined4 *)(pFVar16 + 0x10) = (undefined4)local_e8;
                  *(undefined4 *)(pFVar16 + 0x14) = local_e8._4_4_;
                  *(undefined4 *)(pFVar16 + 0x18) = (undefined4)uStack_e0;
                  *(undefined4 *)(pFVar16 + 0x1c) = uStack_e0._4_4_;
                  *(FField **)(pFVar16 + 0x20) = local_d8;
                  if (*(longlong *)pFVar16 == 0) {
                    if (local_f8[0] != (code *)0x0) {
                      plVar12 = &local_e8;
LAB_14df46ae0:
                      (**(code **)(*plVar12 + 0x10))();
                    }
                  }
                  else {
                    local_f8[0] = (code *)0x0;
                  }
                }
                else {
                  iVar9 = AlphaRotPropStr.Data.ArrayNum + -1;
                  if (AlphaRotPropStr.Data.ArrayNum == 0) {
                    iVar9 = iVar19;
                  }
                  pwVar13 = L"";
                  if (AlphaRotPropStr.Data.ArrayNum != 0) {
                    pwVar13 = (wchar_t *)AlphaRotPropStr.Data.AllocatorInstance;
                  }
                  bVar7 = ::FString::StartsWith(&local_170,pwVar13,iVar9,IgnoreCase);
                  if (bVar7) {
                    pFVar5 = (pTVar1->AllocatorInstance).Data;
                    local_b8 = &UE::Core::Private::Function::
                                TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`24'::<lambda_3>,0,0>
                                ::_vftable_;
                    local_a8 = local_1c8;
                    local_c8[0] = UE::Core::Private::Function::
                                  TFunctionRefCaller<`FAnimNode_IKRig::InitializeProperties'::__l24::<lambda_3>,void,UObject_const_*>
                                  ::Call;
                    local_a0 = 0;
                    uStack_b0 = pFVar16;
                    if (((pFVar5 <= (FScriptContainerElement *)local_c8) &&
                        ((FScriptContainerElement *)local_c8 < pFVar5 + (longlong)*piVar14 * 0x30))
                       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar7)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar9 = (this->UpdateFunctions).ArrayNum;
                    if (iVar9 == *piVar14) {
                      iVar9 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x1030,&pTVar1->AllocatorInstance,piVar14);
                    }
                    (this->UpdateFunctions).ArrayNum = iVar9 + 1;
                    pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
                    *(code **)pFVar16 = local_c8[0];
                    *(longlong *)(pFVar16 + 0x28) = local_a0;
                    local_a0 = 0;
                    *(undefined4 *)(pFVar16 + 0x10) = (undefined4)local_b8;
                    *(undefined4 *)(pFVar16 + 0x14) = local_b8._4_4_;
                    *(undefined4 *)(pFVar16 + 0x18) = (undefined4)uStack_b0;
                    *(undefined4 *)(pFVar16 + 0x1c) = uStack_b0._4_4_;
                    *(FField **)(pFVar16 + 0x20) = local_a8;
                    if (*(longlong *)pFVar16 == 0) {
                      if (local_c8[0] != (code *)0x0) {
                        plVar12 = &local_b8;
                        goto LAB_14df46ae0;
                      }
                    }
                    else {
                      local_c8[0] = (code *)0x0;
                    }
                  }
                  else {
                    iVar9 = PositionPropStr.Data.ArrayNum + -1;
                    if (PositionPropStr.Data.ArrayNum == 0) {
                      iVar9 = iVar19;
                    }
                    pwVar13 = L"";
                    if (PositionPropStr.Data.ArrayNum != 0) {
                      pwVar13 = (wchar_t *)PositionPropStr.Data.AllocatorInstance;
                    }
                    bVar7 = ::FString::StartsWith(&local_170,pwVar13,iVar9,IgnoreCase);
                    if (bVar7) {
                      pFVar5 = (pTVar1->AllocatorInstance).Data;
                      local_88 = &UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`28'::<lambda_4>,0,0>
                                  ::_vftable_;
                      local_78 = local_1c8;
                      local_98[0] = UE::Core::Private::Function::
                                    TFunctionRefCaller<`FAnimNode_IKRig::InitializeProperties'::__l28::<lambda_4>,void,UObject_const_*>
                                    ::Call;
                      local_70 = 0;
                      uStack_80 = pFVar16;
                      if (((pFVar5 <= (FScriptContainerElement *)local_98) &&
                          ((FScriptContainerElement *)local_98 < pFVar5 + (longlong)*piVar14 * 0x30)
                          ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar9 = (this->UpdateFunctions).ArrayNum;
                      if (iVar9 == *piVar14) {
                        iVar9 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x1030,&pTVar1->AllocatorInstance,piVar14);
                      }
                      (this->UpdateFunctions).ArrayNum = iVar9 + 1;
                      pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
                      *(code **)pFVar16 = local_98[0];
                      *(longlong *)(pFVar16 + 0x28) = local_70;
                      local_70 = 0;
                      *(undefined4 *)(pFVar16 + 0x10) = (undefined4)local_88;
                      *(undefined4 *)(pFVar16 + 0x14) = local_88._4_4_;
                      *(undefined4 *)(pFVar16 + 0x18) = (undefined4)uStack_80;
                      *(undefined4 *)(pFVar16 + 0x1c) = uStack_80._4_4_;
                      *(FField **)(pFVar16 + 0x20) = local_78;
                      if (*(longlong *)pFVar16 == 0) {
                        if (local_98[0] != (code *)0x0) {
                          plVar12 = &local_88;
                          goto LAB_14df46ae0;
                        }
                      }
                      else {
                        local_98[0] = (code *)0x0;
                      }
                    }
                    else {
                      iVar9 = RotationPropStr.Data.ArrayNum + -1;
                      if (RotationPropStr.Data.ArrayNum == 0) {
                        iVar9 = iVar19;
                      }
                      pwVar13 = L"";
                      if (RotationPropStr.Data.ArrayNum != 0) {
                        pwVar13 = (wchar_t *)RotationPropStr.Data.AllocatorInstance;
                      }
                      bVar7 = ::FString::StartsWith(&local_170,pwVar13,iVar9,IgnoreCase);
                      if (bVar7) {
                        pFVar5 = (pTVar1->AllocatorInstance).Data;
                        local_58 = &UE::Core::Private::Function::
                                    TFunction_OwnedObject<`FAnimNode_IKRig::InitializeProperties'::`32'::<lambda_5>,0,0>
                                    ::_vftable_;
                        local_48 = local_1c8;
                        local_68[0] = UE::Core::Private::Function::
                                      TFunctionRefCaller<`FAnimNode_IKRig::InitializeProperties'::__l32::<lambda_5>,void,UObject_const_*>
                                      ::Call;
                        local_40 = 0;
                        uStack_50 = pFVar16;
                        if (((pFVar5 <= (FScriptContainerElement *)local_68) &&
                            ((FScriptContainerElement *)local_68 <
                             pFVar5 + (longlong)*piVar14 * 0x30)) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar7)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar9 = (this->UpdateFunctions).ArrayNum;
                        if (iVar9 == *piVar14) {
                          iVar9 = UE::Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x1030,&pTVar1->AllocatorInstance,piVar14);
                        }
                        (this->UpdateFunctions).ArrayNum = iVar9 + 1;
                        pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
                        *(code **)pFVar16 = local_68[0];
                        *(longlong *)(pFVar16 + 0x28) = local_40;
                        local_40 = 0;
                        *(undefined4 *)(pFVar16 + 0x10) = (undefined4)local_58;
                        *(undefined4 *)(pFVar16 + 0x14) = local_58._4_4_;
                        *(undefined4 *)(pFVar16 + 0x18) = (undefined4)uStack_50;
                        *(undefined4 *)(pFVar16 + 0x1c) = uStack_50._4_4_;
                        *(FField **)(pFVar16 + 0x20) = local_48;
                        if (*(longlong *)pFVar16 == 0) {
                          if (local_68[0] != (code *)0x0) {
                            plVar12 = &local_58;
                            goto LAB_14df46ae0;
                          }
                        }
                        else {
                          local_68[0] = (code *)0x0;
                        }
                      }
                    }
                  }
                }
                if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_170.Data.AllocatorInstance.Data);
                }
              }
              plVar12 = &pFVar20->_padding_;
            }
            break;
          }
        }
      }
      local_1c0 = local_1c0 + 1;
      local_178 = local_178 + 8;
    } while ((int)local_1c0 < (int)pFVar20->_padding_);
  }
  return;
}

// Initialize_AnyThread @ 14df47790

void __thiscall
FAnimNode_IKRig::Initialize_AnyThread(FAnimNode_IKRig *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  FExposedValueHandler *this_00;
  undefined8 uVar2;
  UObject *pUVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_IKRig::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  lVar1 = this->_padding_;
  uVar2 = (**(code **)(lVar1 + 0xb0))(this);
  pUVar3 = FAnimationBaseContext::GetAnimInstanceObject((FAnimationBaseContext *)param_1);
  (**(code **)(lVar1 + 0xa0))(this,pUVar3,uVar2);
  this->bSearchedForGoalCreators = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// NeedsOnInitializeAnimInstance @ 14df4b660

bool __thiscall FAnimNode_IKRig::NeedsOnInitializeAnimInstance(FAnimNode_IKRig *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14df4baa0

void __thiscall
FAnimNode_IKRig::OnInitializeAnimInstance
          (FAnimNode_IKRig *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FAnimNode_Base::OnInitializeAnimInstance((FAnimNode_Base *)this,param_1,param_2);
  lVar1 = this->_padding_;
  uVar2 = (**(code **)(lVar1 + 0xb0))(this);
                    /* WARNING: Could not recover jumptable at 0x00014df4bae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0xa0))(this,param_2,uVar2);
  return;
}

// PreUpdate @ 14df4cc80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAnimNode_IKRig::PreUpdate(FAnimNode_IKRig *this,UAnimInstance *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  AActor *this_00;
  UObjectBaseUtility *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  USkeletalMeshComponent *pUVar8;
  UClass *pUVar9;
  void *pvVar10;
  undefined8 *puVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UObjectBaseUtility *local_58;
  UClass *local_50;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_48;
  
  if (this->bSearchedForGoalCreators == false) {
    pTVar2 = &this->GoalCreators;
    this->bSearchedForGoalCreators = true;
    piVar1 = &(this->GoalCreators).ArrayMax;
    (this->GoalCreators).ArrayNum = 0;
    if ((this->GoalCreators).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pUVar8 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
    this_00 = (AActor *)pUVar8->_padding_;
    local_50 = Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_50);
    }
    AActor::GetComponentsByInterface(this_00,&local_48,(TSubclassOf<UInterface>)&local_50);
    iVar12 = local_48.ArrayNum;
    pFVar3 = local_48.AllocatorInstance.Data + (longlong)iVar12 * 8;
    FVar14.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar14.Data == pFVar3) break;
      pUVar4 = *(UObjectBaseUtility **)FVar14.Data;
      if (pUVar4 == (UObjectBaseUtility *)0x0) {
LAB_14df4cd6f:
        local_res18[0] = 0;
        bVar6 = `FAnimNode_IKRig::PreUpdate'::__l10::<lambda_1>::operator()(local_res18);
        if (bVar6) goto LAB_14df4cd8c;
      }
      else {
        pUVar9 = Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
        pvVar10 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar9);
        if (pvVar10 == (void *)0x0) goto LAB_14df4cd6f;
LAB_14df4cd8c:
        local_58 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UObjectBaseUtility *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        pFVar13 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar13 <= (FScriptContainerElement *)&local_58) &&
           ((FScriptContainerElement *)&local_58 < pFVar13 + (longlong)*piVar1 * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = (this->GoalCreators).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->GoalCreators).ArrayNum = iVar7 + 1;
        *(UObjectBaseUtility **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_58 != (UObjectBaseUtility *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_58);
        }
      }
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  TSet<TTuple<FName,FIKRigGoal>,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FIKRigGoal>,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>,FDefaultSetAllocator>
           *)&this->GoalsFromGoalCreators);
  pFVar13 = (this->GoalCreators).AllocatorInstance.Data;
  iVar12 = (this->GoalCreators).ArrayNum;
  pFVar3 = pFVar13 + (longlong)iVar12 * 8;
  while( true ) {
    if ((this->GoalCreators).ArrayNum != iVar12) {
      `TCheckedPointerIterator<TObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar13 == pFVar3) break;
    pUVar4 = *(UObjectBaseUtility **)pFVar13;
    if (pUVar4 != (UObjectBaseUtility *)0x0) {
      pUVar9 = Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
      puVar11 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar9);
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11,&this->GoalsFromGoalCreators);
      }
    }
    pFVar13 = pFVar13 + 8;
  }
  return;
}

// PropagateInputProperties @ 14df4cf60

void __thiscall FAnimNode_IKRig::PropagateInputProperties(FAnimNode_IKRig *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  UObject *local_res10;
  
  if (param_1 != (UObject *)0x0) {
    pFVar5 = (this->UpdateFunctions).AllocatorInstance.Data;
    iVar1 = (this->UpdateFunctions).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
    while( true ) {
      if ((this->UpdateFunctions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TFunction<void___cdecl(UObject_const_*)>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res10);
      }
      if (pFVar5 == pFVar6) break;
      local_res10 = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
      pcVar2 = *(code **)pFVar5;
      pFVar4 = pFVar5 + 0x10;
      if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
      }
      uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
      (*pcVar2)(uVar3,&local_res10);
      pFVar5 = pFVar5 + 0x30;
    }
  }
  return;
}

// SetProcessorNeedsInitialized @ 14df55890

void __thiscall FAnimNode_IKRig::SetProcessorNeedsInitialized(FAnimNode_IKRig *this)

{
  (this->IKRigProcessor).bInitialized = false;
  (this->IKRigProcessor).bTriedToInitialize = false;
  return;
}

// Update_AnyThread @ 14df5f990

void __thiscall
FAnimNode_IKRig::Update_AnyThread(FAnimNode_IKRig *this,FAnimationUpdateContext *param_1)

{
  EAnimAlphaInputType EVar1;
  int iVar2;
  UAnimInstance *this_00;
  UIKRigDefinition *pUVar3;
  FExposedValueHandler *this_01;
  UClass *pUVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  float fVar7;
  float fVar8;
  FName local_res8;
  FString local_28 [2];
  
  bVar5 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  EVar1 = this->AlphaInputType;
  this->ActualAlpha = 0.0;
  if (EVar1 == Float) {
    fVar8 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,this->Alpha,param_1->DeltaTime)
    ;
    fVar8 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar8);
  }
  else if (EVar1 == Bool) {
    fVar8 = FInputAlphaBoolBlend::ApplyTo
                      (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
  }
  else {
    if ((EVar1 != Curve) ||
       (this_00 = *(UAnimInstance **)(param_1->_padding_ + 0x140), this_00 == (UAnimInstance *)0x0))
    goto LAB_14df5fa99;
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) goto LAB_14df5fa99;
    fVar8 = param_1->DeltaTime;
    fVar7 = UAnimInstance::GetCurveValue(this_00,this->AlphaCurveName);
    fVar8 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,fVar7,fVar8);
  }
  this->ActualAlpha = fVar8;
LAB_14df5fa99:
  fVar8 = this->ActualAlpha;
  if (__real_3f800000 <= this->ActualAlpha) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  this->ActualAlpha = fVar8;
  (**(code **)(this->_padding_ + 0xa8))(this,*(undefined8 *)(param_1->_padding_ + 0x140));
  FAnimNode_Base::Update_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  pUVar3 = (this->RigDefinitionAsset).field0_0x0.DebugPtr;
  if (pUVar3 == (UIKRigDefinition *)0x0) {
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  else {
    local_res8 = (FName)pUVar3->_padding_;
    bVar5 = true;
    ::FName::ToString(&local_res8,local_28);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28[0].Data.ArrayNum != 0) {
      FVar6.Data = local_28[0].Data.AllocatorInstance.Data;
    }
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             (wchar_t *)FVar6.Data);
  if ((bVar5) && (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Asset",
             (UObject *)(this->RigDefinitionAsset).field0_0x0.DebugPtr);
  return;
}

// operator() @ 150591740

bool __thiscall `FAnimNode_IKRig::PreUpdate'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7966094887223029>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7966094887223029>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

