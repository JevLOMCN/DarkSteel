// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 85

// StaticClass @ 147336340

UClass * __cdecl UTimelineComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TimelineComponent",
               &Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton,
               StaticRegisterNativesUTimelineComponent,0x178,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimelineComponent>,
               InternalVTableHelperCtorCaller<UTimelineComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton;
}

// UTimelineComponent @ 147340cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UTimelineComponent * __thiscall
UTimelineComponent::UTimelineComponent(UTimelineComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FTimeline::FTimeline(&this->TheTimeline);
  return this;
}

// ~UTimelineComponent @ 147342250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTimelineComponent::~UTimelineComponent(UTimelineComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FTimeline::~FTimeline(&this->TheTimeline);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14734ff70

UClass * __cdecl UTimelineComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TimelineComponent",
               &Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton,
               StaticRegisterNativesUTimelineComponent,0x178,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimelineComponent>,
               InternalVTableHelperCtorCaller<UTimelineComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton;
}

// StaticRegisterNativesUTimelineComponent @ 1473588a0

void __cdecl UTimelineComponent::StaticRegisterNativesUTimelineComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1e;
  local_18.DataPtr = Z_Construct_UClass_UTimelineComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 14735ecd0

void __thiscall
UTimelineComponent::ValidateGeneratedRepEnums
          (UTimelineComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_TheTimeline,L"TheTimeline");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_TheTimeline != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\TimelineComponent.gen.cpp"
                       ,0xab6,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTimelineComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execAddEvent @ 147360b40

void __cdecl UTimelineComponent::execAddEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  FOnTimelineEvent local_40;
  FReadAccessScope local_28;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
  local_40._8_8_ = local_50;
  local_40._16_8_ = local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  AddEvent((UTimelineComponent *)param_1,local_res10[0],&local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execAddInterpFloat @ 147360c70

void __cdecl UTimelineComponent::execAddInterpFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  FName local_res10;
  FName local_res20;
  UCurveFloat *local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  FOnTimelineFloat local_48;
  FReadAccessScope local_30;
  
  local_68 = (UCurveFloat *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58 = 0;
  local_50 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res20;
  FVar2 = local_res10;
  local_48._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48._8_8_ = local_58;
  local_48._16_8_ = local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  AddInterpFloat((UTimelineComponent *)param_1,local_68,&local_48,FVar3,FVar2);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// execAddInterpLinearColor @ 147360e10

void __cdecl
UTimelineComponent::execAddInterpLinearColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  FName local_res10;
  FName local_res20;
  UCurveLinearColor *local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  FOnTimelineLinearColor local_48;
  FReadAccessScope local_30;
  
  local_68 = (UCurveLinearColor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58 = 0;
  local_50 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res20;
  FVar2 = local_res10;
  local_48._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48._8_8_ = local_58;
  local_48._16_8_ = local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  AddInterpLinearColor((UTimelineComponent *)param_1,local_68,&local_48,FVar3,FVar2);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// execAddInterpVector @ 147360fb0

void __cdecl UTimelineComponent::execAddInterpVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  FName local_res10;
  FName local_res20;
  UCurveVector *local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  FOnTimelineVector local_48;
  FReadAccessScope local_30;
  
  local_68 = (UCurveVector *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58 = 0;
  local_50 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res20;
  FVar2 = local_res10;
  local_48._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48._8_8_ = local_58;
  local_48._16_8_ = local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  AddInterpVector((UTimelineComponent *)param_1,local_68,&local_48,FVar3,FVar2);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// execGetIgnoreTimeDilation @ 1473612b0

void __cdecl
UTimelineComponent::execGetIgnoreTimeDilation(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = GetIgnoreTimeDilation((UTimelineComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetPlayRate @ 147361330

void __cdecl UTimelineComponent::execGetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetPlayRate((UTimelineComponent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetPlaybackPosition @ 147361370

void __cdecl
UTimelineComponent::execGetPlaybackPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetPlaybackPosition((UTimelineComponent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetScaledTimelineLength @ 1473613b0

void __cdecl
UTimelineComponent::execGetScaledTimelineLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetScaledTimelineLength((UTimelineComponent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetTimelineLength @ 1473613f0

void __cdecl
UTimelineComponent::execGetTimelineLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetTimelineLength((UTimelineComponent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execIsLooping @ 147361460

void __cdecl UTimelineComponent::execIsLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsLooping((UTimelineComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsPlaying @ 1473614a0

void __cdecl UTimelineComponent::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsPlaying((UTimelineComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsReversing @ 1473614e0

void __cdecl UTimelineComponent::execIsReversing(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsReversing((UTimelineComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnRep_Timeline @ 147361520

void __cdecl UTimelineComponent::execOnRep_Timeline(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTimeline *pFVar2;
  undefined1 local_b8 [104];
  FMRSWRecursiveAccessDetector local_50 [5];
  TDelegateBase<FNotThreadSafeDelegateMode> local_28;
  
  FTimeline::FTimeline((FTimeline *)local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  pFVar2 = (FTimeline *)local_b8;
  if ((FTimeline *)param_2->MostRecentPropertyAddress != (FTimeline *)0x0) {
    pFVar2 = (FTimeline *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRep_Timeline((UTimelineComponent *)param_1,pFVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_28);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_50);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_b8 + 0x50));
  DestructItems<FTimelineLinearColorTrack,int>
            ((FTimelineLinearColorTrack *)local_b8._64_8_,local_b8._72_4_);
  if ((FTimelineLinearColorTrack *)local_b8._64_8_ != (FTimelineLinearColorTrack *)0x0) {
    FMemory::Free((void *)local_b8._64_8_);
  }
  DestructItems<FTimelineFloatTrack,int>((FTimelineFloatTrack *)local_b8._48_8_,local_b8._56_4_);
  if ((FTimelineFloatTrack *)local_b8._48_8_ != (FTimelineFloatTrack *)0x0) {
    FMemory::Free((void *)local_b8._48_8_);
  }
  DestructItems<FTimelineVectorTrack,int>((FTimelineVectorTrack *)local_b8._32_8_,local_b8._40_4_);
  if ((FTimelineVectorTrack *)local_b8._32_8_ != (FTimelineVectorTrack *)0x0) {
    FMemory::Free((void *)local_b8._32_8_);
  }
  DestructItems<FTimelineEventEntry,int>((FTimelineEventEntry *)local_b8._16_8_,local_b8._24_4_);
  if ((FTimelineEventEntry *)local_b8._16_8_ != (FTimelineEventEntry *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  return;
}

// execPlay @ 147361660

void __cdecl UTimelineComponent::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Play((UTimelineComponent *)param_1);
  return;
}

// execPlayFromStart @ 147361680

void __cdecl UTimelineComponent::execPlayFromStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PlayFromStart((UTimelineComponent *)param_1);
  return;
}

// execReverse @ 1473616a0

void __cdecl UTimelineComponent::execReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Reverse((UTimelineComponent *)param_1);
  return;
}

// execReverseFromEnd @ 1473616c0

void __cdecl UTimelineComponent::execReverseFromEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReverseFromEnd((UTimelineComponent *)param_1);
  return;
}

// execSetFloatCurve @ 1473616e0

void __cdecl UTimelineComponent::execSetFloatCurve(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  UCurveFloat *local_res20;
  
  local_res20 = (UCurveFloat *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetFloatCurve((UTimelineComponent *)param_1,local_res20,local_res10);
  return;
}

// execSetIgnoreTimeDilation @ 1473617b0

void __cdecl
UTimelineComponent::execSetIgnoreTimeDilation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIgnoreTimeDilation((UTimelineComponent *)param_1,local_res10[0] != 0);
  return;
}

// execSetLinearColorCurve @ 1473618d0

void __cdecl
UTimelineComponent::execSetLinearColorCurve(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  UCurveLinearColor *local_res20;
  
  local_res20 = (UCurveLinearColor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLinearColorCurve((UTimelineComponent *)param_1,local_res20,local_res10);
  return;
}

// execSetLooping @ 1473619a0

void __cdecl UTimelineComponent::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLooping((UTimelineComponent *)param_1,local_res10[0] != 0);
  return;
}

// execSetNewTime @ 147361b50

void __cdecl UTimelineComponent::execSetNewTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetNewTime((UTimelineComponent *)param_1,local_res10[0]);
  return;
}

// execSetPlayRate @ 147361be0

void __cdecl UTimelineComponent::execSetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlayRate((UTimelineComponent *)param_1,local_res10[0]);
  return;
}

// execSetPlaybackPosition @ 147361c70

void __cdecl
UTimelineComponent::execSetPlaybackPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  float local_28 [4];
  
  local_28[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlaybackPosition((UTimelineComponent *)param_1,local_28[0],bVar2,local_res20[0] != 0);
  return;
}

// execSetTimelineFinishedFunc @ 147361f40

void __cdecl
UTimelineComponent::execSetTimelineFinishedFunc(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  FOnTimelineEvent local_40;
  FReadAccessScope local_28;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
  local_40._8_8_ = local_50;
  local_40._16_8_ = local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SetTimelineFinishedFunc((UTimelineComponent *)param_1,&local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execSetTimelineLength @ 147362020

void __cdecl
UTimelineComponent::execSetTimelineLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTimelineLength((UTimelineComponent *)param_1,local_res10[0]);
  return;
}

// execSetTimelineLengthMode @ 1473620b0

void __cdecl
UTimelineComponent::execSetTimelineLengthMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTimelineLengthMode((UTimelineComponent *)param_1,(uint)local_res10[0]);
  return;
}

// execSetTimelinePostUpdateFunc @ 147362140

void __cdecl
UTimelineComponent::execSetTimelinePostUpdateFunc(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  FOnTimelineEvent local_40;
  FReadAccessScope local_28;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
  local_40._8_8_ = local_50;
  local_40._16_8_ = local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SetTimelinePostUpdateFunc((UTimelineComponent *)param_1,&local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execSetVectorCurve @ 147362220

void __cdecl UTimelineComponent::execSetVectorCurve(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  UCurveVector *local_res20;
  
  local_res20 = (UCurveVector *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVectorCurve((UTimelineComponent *)param_1,local_res20,local_res10);
  return;
}

// execStop @ 1473624f0

void __cdecl UTimelineComponent::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Stop((UTimelineComponent *)param_1);
  return;
}

// UTimelineComponent @ 1488b16f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UTimelineComponent * __thiscall
UTimelineComponent::UTimelineComponent(UTimelineComponent *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  undefined1 *puVar1;
  byte bVar2;
  undefined8 local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->TheTimeline).PropertySetObject;
  (this->TheTimeline).bLooping = '\0';
  (this->TheTimeline).bPlaying_DEPRECATED = '\0';
  (this->TheTimeline).bReversePlayback = '\0';
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->TheTimeline).LengthMode.Value = '\x01';
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->TheTimeline).PlayingStateTracker = '\x02';
  (this->TheTimeline).Length = 5.0;
  (this->TheTimeline).PlayRate = 1.0;
  (this->TheTimeline).Position = 0.0;
  (this->TheTimeline).Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TheTimeline).Events.ArrayNum = 0;
  (this->TheTimeline).Events.ArrayMax = 0;
  (this->TheTimeline).InterpVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TheTimeline).InterpVectors.ArrayNum = 0;
  (this->TheTimeline).InterpVectors.ArrayMax = 0;
  (this->TheTimeline).InterpFloats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TheTimeline).InterpFloats.ArrayNum = 0;
  (this->TheTimeline).InterpFloats.ArrayMax = 0;
  (this->TheTimeline).InterpLinearColors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TheTimeline).InterpLinearColors.ArrayNum = 0;
  (this->TheTimeline).InterpLinearColors.ArrayMax = 0;
  *(undefined8 *)&(this->TheTimeline).TimelinePostUpdateFunc = 0;
  *(undefined8 *)&(this->TheTimeline).TimelinePostUpdateFunc.field_0x8 = 0;
  *(undefined8 *)&(this->TheTimeline).TimelinePostUpdateFunc.field_0x10 = 0;
  *(undefined8 *)&(this->TheTimeline).TimelineFinishedFunc = 0;
  *(undefined8 *)&(this->TheTimeline).TimelineFinishedFunc.field_0x8 = 0;
  *(undefined8 *)&(this->TheTimeline).TimelineFinishedFunc.field_0x10 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->TheTimeline).DirectionPropertyName.ComparisonIndex = 0;
  (this->TheTimeline).DirectionPropertyName.Number = 0;
  *(undefined8 *)&(this->TheTimeline).TimelineFinishFuncStatic = 0;
  *(undefined8 *)&(this->TheTimeline).TimelineFinishFuncStatic.field_0x8 = 0;
  *(undefined4 *)&(this->TheTimeline).TimelineFinishFuncStatic.field_0x10 = 0;
  (this->TheTimeline).DirectionProperty = (FProperty *)0x0;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
  *(undefined1 *)&this->_padding_ = 0;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0xfb | 2;
  return this;
}

// Activate @ 1488b6f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTimelineComponent::Activate(UTimelineComponent *this,bool param_1)

{
  UActorComponent::Activate((UActorComponent *)this,param_1);
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,true);
  return;
}

// AddEvent @ 1488b77c0

void __thiscall
UTimelineComponent::AddEvent(UTimelineComponent *this,float param_1,FOnTimelineEvent *param_2)

{
  int *piVar1;
  TArray<FTimelineEventEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  float local_c8 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FDestructionSentinel local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48 [2];
  
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_78);
  local_a0 = *(undefined8 *)&param_2->field_0x8;
  local_98 = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c8[0] = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_60);
  uVar6 = local_98;
  uVar5 = local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_90);
  uStack_b8 = uVar5;
  local_b0 = uVar6;
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  pTVar2 = &(this->TheTimeline).Events;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_c8) &&
     ((FScriptContainerElement *)local_c8 <
      pFVar3 + (longlong)(this->TheTimeline).Events.ArrayMax * 0x20)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->TheTimeline).Events.ArrayNum;
  piVar1 = &(this->TheTimeline).Events.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TheTimeline).Events.ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  lVar9 = (longlong)iVar8 * 0x20;
  *(float *)(pFVar3 + lVar9) = local_c8[0];
  *(undefined8 *)(pFVar3 + lVar9 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar9 + 0x18) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c0,local_48);
  *(undefined8 *)(pFVar3 + lVar9 + 0x10) = uStack_b8;
  *(undefined8 *)(pFVar3 + lVar9 + 0x18) = local_b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// AddInterpFloat @ 1488b82f0

void __thiscall
UTimelineComponent::AddInterpFloat
          (UTimelineComponent *this,UCurveFloat *param_1,
          TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *param_2)

{
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,param_2);
  FTimeline::AddInterpFloat(&this->TheTimeline,param_1,&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// AddInterpFloat @ 1488b8360

void __thiscall
UTimelineComponent::AddInterpFloat
          (UTimelineComponent *this,UCurveFloat *param_1,FOnTimelineFloat *param_2,FName param_3,
          FName param_4)

{
  FOnTimelineFloat local_38;
  FReadAccessScope local_20;
  
  local_38._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  FTimeline::AddInterpFloat(&this->TheTimeline,param_1,&local_38,param_3,param_4);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// AddInterpLinearColor @ 1488b8820

void __thiscall
UTimelineComponent::AddInterpLinearColor
          (UTimelineComponent *this,UCurveLinearColor *param_1,
          TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *param_2)

{
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_28,param_2);
  FTimeline::AddInterpLinearColor(&this->TheTimeline,param_1,&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// AddInterpLinearColor @ 1488b8890

void __thiscall
UTimelineComponent::AddInterpLinearColor
          (UTimelineComponent *this,UCurveLinearColor *param_1,FOnTimelineLinearColor *param_2,
          FName param_3,FName param_4)

{
  FOnTimelineLinearColor local_38;
  FReadAccessScope local_20;
  
  local_38._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  FTimeline::AddInterpLinearColor(&this->TheTimeline,param_1,&local_38,param_3,param_4);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// AddInterpVector @ 1488b8d50

void __thiscall
UTimelineComponent::AddInterpVector
          (UTimelineComponent *this,UCurveVector *param_1,
          TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy> *param_2)

{
  TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_28,param_2);
  FTimeline::AddInterpVector(&this->TheTimeline,param_1,&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// AddInterpVector @ 1488b8dc0

void __thiscall
UTimelineComponent::AddInterpVector
          (UTimelineComponent *this,UCurveVector *param_1,FOnTimelineVector *param_2,FName param_3,
          FName param_4)

{
  FOnTimelineVector local_38;
  FReadAccessScope local_20;
  
  local_38._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  FTimeline::AddInterpVector(&this->TheTimeline,param_1,&local_38,param_3,param_4);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// Deactivate @ 1488bb980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTimelineComponent::Deactivate(UTimelineComponent *this)

{
  UActorComponent::Deactivate((UActorComponent *)this);
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  return;
}

// GetAllCurves @ 1488c1ed0

void __thiscall
UTimelineComponent::GetAllCurves
          (UTimelineComponent *this,
          TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 local_res8;
  UCurveBase *local_res18;
  
  iVar1 = (this->TheTimeline).InterpVectors.ArrayNum;
  pFVar2 = (this->TheTimeline).InterpVectors.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->TheTimeline).InterpVectors.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTimelineVectorTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res8 = *(undefined8 *)pFVar2;
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar2 = pFVar2 + 0x50;
  }
  iVar1 = (this->TheTimeline).InterpFloats.ArrayNum;
  pFVar2 = (this->TheTimeline).InterpFloats.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->TheTimeline).InterpFloats.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTimelineFloatTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res8 = *(undefined8 *)pFVar2;
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar2 = pFVar2 + 0x50;
  }
  iVar1 = (this->TheTimeline).InterpLinearColors.ArrayNum;
  pFVar2 = (this->TheTimeline).InterpLinearColors.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->TheTimeline).InterpLinearColors.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTimelineLinearColorTrack_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res8 = *(undefined8 *)pFVar2;
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar2 = pFVar2 + 0x50;
  }
  return;
}

// GetIgnoreTimeDilation @ 1488c3170

bool __thiscall UTimelineComponent::GetIgnoreTimeDilation(UTimelineComponent *this)

{
  return this->bIgnoreTimeDilation;
}

// GetLifetimeReplicatedProps @ 1488c3400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTimelineComponent::GetLifetimeReplicatedProps
          (UTimelineComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  UActorComponent::GetLifetimeReplicatedProps((UActorComponent *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0xb,L"TheTimeline",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UTimelineComponent_NoRegister();
  Z_Construct_UClass_UTimelineComponent_NoRegister();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetPlayRate @ 1488c3be0

float __thiscall UTimelineComponent::GetPlayRate(UTimelineComponent *this)

{
  return (this->TheTimeline).PlayRate;
}

// GetPlaybackPosition @ 1488c3c00

float __thiscall UTimelineComponent::GetPlaybackPosition(UTimelineComponent *this)

{
  return (this->TheTimeline).Position;
}

// GetScaledTimelineLength @ 1488c4a20

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UTimelineComponent::GetScaledTimelineLength(UTimelineComponent *this)

{
  float fVar1;
  uchar uVar2;
  float fVar3;
  
  fVar3 = 0.0;
  fVar1 = (this->TheTimeline).PlayRate;
  if (fVar1 == 0.0) {
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
    return 0.0;
  }
  uVar2 = (this->TheTimeline).LengthMode.Value;
  if (uVar2 == '\0') {
    fVar3 = (this->TheTimeline).Length;
  }
  else {
    if (uVar2 == '\x01') {
      fVar3 = FTimeline::GetLastKeyframeTime(&this->TheTimeline);
      return fVar3 / fVar1;
    }
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      return 0.0 / fVar1;
    }
  }
  return fVar3 / fVar1;
}

// GetTimelineEventSignature @ 1488c66a0

UFunction * __cdecl UTimelineComponent::GetTimelineEventSignature(void)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  pUVar3 = FindPackage((UObject *)0x0,L"/Script/Engine");
  pUVar4 = Z_Construct_UClass_UFunction_NoRegister();
  local_18._12_4_ = uStack_1c;
  local_18.Size = 0x22;
  local_18.DataPtr = L"OnTimelineEvent__DelegateSignature";
  pUVar5 = (UFunction *)StaticFindObject(pUVar4,(UObject *)pUVar3,&local_18,None);
  if ((pUVar5 == (UFunction *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimelineEventSig != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                         ,0x40e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UFunction *)(*pcVar1)();
    return pUVar5;
  }
  return pUVar5;
}

// GetTimelineFloatSignature @ 1488c6730

UFunction * __cdecl UTimelineComponent::GetTimelineFloatSignature(void)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  pUVar3 = FindPackage((UObject *)0x0,L"/Script/Engine");
  pUVar4 = Z_Construct_UClass_UFunction_NoRegister();
  local_18._12_4_ = uStack_1c;
  local_18.Size = 0x22;
  local_18.DataPtr = L"OnTimelineFloat__DelegateSignature";
  pUVar5 = (UFunction *)StaticFindObject(pUVar4,(UObject *)pUVar3,&local_18,None);
  if ((pUVar5 == (UFunction *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimelineFloatSig != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                         ,0x416,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UFunction *)(*pcVar1)();
    return pUVar5;
  }
  return pUVar5;
}

// GetTimelineLength @ 1488c6810

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UTimelineComponent::GetTimelineLength(UTimelineComponent *this)

{
  uchar uVar1;
  float fVar2;
  
  uVar1 = (this->TheTimeline).LengthMode.Value;
  if (uVar1 == '\0') {
    return (this->TheTimeline).Length;
  }
  if (uVar1 != '\x01') {
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
    return 0.0;
  }
  fVar2 = FTimeline::GetLastKeyframeTime(&this->TheTimeline);
  return fVar2;
}

// GetTimelineLinearColorSignature @ 1488c6870

UFunction * __cdecl UTimelineComponent::GetTimelineLinearColorSignature(void)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  pUVar3 = FindPackage((UObject *)0x0,L"/Script/Engine");
  pUVar4 = Z_Construct_UClass_UFunction_NoRegister();
  local_18._12_4_ = uStack_1c;
  local_18.Size = 0x28;
  local_18.DataPtr = L"OnTimelineLinearColor__DelegateSignature";
  pUVar5 = (UFunction *)StaticFindObject(pUVar4,(UObject *)pUVar3,&local_18,None);
  if ((pUVar5 == (UFunction *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimelineVectorSig != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                         ,0x426,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UFunction *)(*pcVar1)();
    return pUVar5;
  }
  return pUVar5;
}

// GetTimelineSignatureForFunction @ 1488c6900

ETimelineSigType __cdecl UTimelineComponent::GetTimelineSignatureForFunction(UFunction *param_1)

{
  code *pcVar1;
  bool bVar2;
  ETimelineSigType EVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if (param_1 == (UFunction *)0x0) {
    return ETS_InvalidSignature;
  }
  pUVar4 = FindPackage((UObject *)0x0,L"/Script/Engine");
  pUVar5 = Z_Construct_UClass_UFunction_NoRegister();
  local_48._12_4_ = uStack_7c;
  local_48.Size = 0x22;
  local_48.DataPtr = L"OnTimelineEvent__DelegateSignature";
  pUVar6 = (UFunction *)StaticFindObject(pUVar5,(UObject *)pUVar4,&local_48,None);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimelineEventSig != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                       ,0x40e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  bVar2 = UFunction::IsSignatureCompatibleWith(param_1,pUVar6);
  if (bVar2) {
    return ETS_EventSignature;
  }
  pUVar4 = FindPackage((UObject *)0x0,L"/Script/Engine");
  pUVar5 = Z_Construct_UClass_UFunction_NoRegister();
  local_38._12_4_ = uStack_6c;
  local_38.Size = 0x22;
  local_38.DataPtr = L"OnTimelineFloat__DelegateSignature";
  pUVar6 = (UFunction *)StaticFindObject(pUVar5,(UObject *)pUVar4,&local_38,None);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimelineFloatSig != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  bVar2 = UFunction::IsSignatureCompatibleWith(param_1,pUVar6);
  if (bVar2) {
    return ETS_FloatSignature;
  }
  pUVar4 = FindPackage((UObject *)0x0,L"/Script/Engine");
  pUVar5 = Z_Construct_UClass_UFunction_NoRegister();
  local_28._12_4_ = uStack_5c;
  local_28.Size = 0x23;
  local_28.DataPtr = L"OnTimelineVector__DelegateSignature";
  pUVar6 = (UFunction *)StaticFindObject(pUVar5,(UObject *)pUVar4,&local_28,None);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimelineVectorSig != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                       ,0x41e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  bVar2 = UFunction::IsSignatureCompatibleWith(param_1,pUVar6);
  if (bVar2) {
    return ETS_VectorSignature;
  }
  pUVar4 = FindPackage((UObject *)0x0,L"/Script/Engine");
  pUVar5 = Z_Construct_UClass_UFunction_NoRegister();
  local_18._12_4_ = uStack_4c;
  local_18.Size = 0x28;
  local_18.DataPtr = L"OnTimelineLinearColor__DelegateSignature";
  pUVar6 = (UFunction *)StaticFindObject(pUVar5,(UObject *)pUVar4,&local_18,None);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimelineVectorSig != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                       ,0x426,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  bVar2 = UFunction::IsSignatureCompatibleWith(param_1,pUVar6);
  return ETS_InvalidSignature - bVar2;
}

// GetTimelineVectorSignature @ 1488c6bb0

UFunction * __cdecl UTimelineComponent::GetTimelineVectorSignature(void)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  pUVar3 = FindPackage((UObject *)0x0,L"/Script/Engine");
  pUVar4 = Z_Construct_UClass_UFunction_NoRegister();
  local_18._12_4_ = uStack_1c;
  local_18.Size = 0x23;
  local_18.DataPtr = L"OnTimelineVector__DelegateSignature";
  pUVar5 = (UFunction *)StaticFindObject(pUVar4,(UObject *)pUVar3,&local_18,None);
  if ((pUVar5 == (UFunction *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimelineVectorSig != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                         ,0x41e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UFunction *)(*pcVar1)();
    return pUVar5;
  }
  return pUVar5;
}

// IsLooping @ 1488cd080

bool __thiscall UTimelineComponent::IsLooping(UTimelineComponent *this)

{
  return (this->TheTimeline).bLooping;
}

// IsPlaying @ 1488cd2d0

bool __thiscall UTimelineComponent::IsPlaying(UTimelineComponent *this)

{
  return (bool)((this->TheTimeline).PlayingStateTracker & 1);
}

// IsPostLoadThreadSafe @ 1488cd2e0

bool __thiscall UTimelineComponent::IsPostLoadThreadSafe(UTimelineComponent *this)

{
  return true;
}

// IsReadyForOwnerToAutoDestroy @ 1488cd2f0

bool __thiscall UTimelineComponent::IsReadyForOwnerToAutoDestroy(UTimelineComponent *this)

{
  return (bool)(~(this->TheTimeline).PlayingStateTracker & 1);
}

// IsReversing @ 1488cd330

bool __thiscall UTimelineComponent::IsReversing(UTimelineComponent *this)

{
  if ((((this->TheTimeline).PlayingStateTracker & 1) != 0) &&
     ((this->TheTimeline).bReversePlayback != '\0')) {
    return true;
  }
  return false;
}

// OnRep_Timeline @ 1488d00c0

void __thiscall UTimelineComponent::OnRep_Timeline(UTimelineComponent *this,FTimeline *param_1)

{
  float fVar1;
  
  if ((((this->TheTimeline).PlayingStateTracker & 1) == 0) &&
     (fVar1 = (this->TheTimeline).Position, fVar1 != param_1->Position)) {
    FTimeline::SetPlaybackPosition(&this->TheTimeline,fVar1,false,true);
    return;
  }
  return;
}

// Play @ 1488d0960

void __thiscall UTimelineComponent::Play(UTimelineComponent *this)

{
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  FTimeline::Play(&this->TheTimeline);
  return;
}

// PlayFromStart @ 1488d09c0

void __thiscall UTimelineComponent::PlayFromStart(UTimelineComponent *this)

{
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  FTimeline::SetPlaybackPosition(&this->TheTimeline,0.0,false,true);
  FTimeline::Play(&this->TheTimeline);
  return;
}

// Reverse @ 1488dbbb0

void __thiscall UTimelineComponent::Reverse(UTimelineComponent *this)

{
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  FTimeline::Reverse(&this->TheTimeline);
  return;
}

// ReverseFromEnd @ 1488dbc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTimelineComponent::ReverseFromEnd(UTimelineComponent *this)

{
  uchar uVar1;
  FTimeline *this_00;
  float fVar2;
  
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  this_00 = &this->TheTimeline;
  uVar1 = (this_00->LengthMode).Value;
  if (uVar1 == '\0') {
    fVar2 = (this->TheTimeline).Length;
  }
  else if (uVar1 == '\x01') {
    fVar2 = FTimeline::GetLastKeyframeTime(this_00);
  }
  else {
    if (1 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
    }
    fVar2 = 0.0;
  }
  FTimeline::SetPlaybackPosition(this_00,fVar2,false,true);
  FTimeline::Reverse(this_00);
  return;
}

// SetDirectionPropertyName @ 1488dd8e0

void __thiscall UTimelineComponent::SetDirectionPropertyName(UTimelineComponent *this,FName param_1)

{
  (this->TheTimeline).DirectionPropertyName = param_1;
  return;
}

// SetFloatCurve @ 1488dda10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTimelineComponent::SetFloatCurve(UTimelineComponent *this,UCurveFloat *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_28;
  
  local_res10 = param_2;
  if (param_1 == (UCurveFloat *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      return;
    }
  }
  else if (param_2 == (FName)0x0) {
LAB_1488ddab3:
    if (4 < (byte)LogTimeline._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar1 = (this->TheTimeline).InterpFloats.ArrayNum;
    pFVar2 = (this->TheTimeline).InterpFloats.AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((this->TheTimeline).InterpFloats.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTimelineFloatTrack,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        param_2 = local_res10;
      }
      if (pFVar2 == pFVar3) goto LAB_1488ddab3;
      if (*(FName *)(pFVar2 + 0x20) == param_2) break;
      pFVar2 = pFVar2 + 0x50;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UCurveFloat **)pFVar2 = param_1;
  }
  return;
}

// SetIgnoreTimeDilation @ 1488ddbb0

void __thiscall UTimelineComponent::SetIgnoreTimeDilation(UTimelineComponent *this,bool param_1)

{
  this->bIgnoreTimeDilation = 0;
  *(uint *)&this->field_0x170 = *(uint *)&this->field_0x170 | (uint)param_1;
  return;
}

// SetLinearColorCurve @ 1488ddcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTimelineComponent::SetLinearColorCurve
          (UTimelineComponent *this,UCurveLinearColor *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_28;
  
  local_res10 = param_2;
  if (param_1 == (UCurveLinearColor *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      return;
    }
  }
  else if (param_2 == (FName)0x0) {
LAB_1488ddd93:
    if (4 < (byte)LogTimeline._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar1 = (this->TheTimeline).InterpLinearColors.ArrayNum;
    pFVar2 = (this->TheTimeline).InterpLinearColors.AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((this->TheTimeline).InterpLinearColors.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTimelineLinearColorTrack,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        param_2 = local_res10;
      }
      if (pFVar2 == pFVar3) goto LAB_1488ddd93;
      if (*(FName *)(pFVar2 + 0x20) == param_2) break;
      pFVar2 = pFVar2 + 0x50;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UCurveLinearColor **)pFVar2 = param_1;
  }
  return;
}

// SetLooping @ 1488dde20

void __thiscall UTimelineComponent::SetLooping(UTimelineComponent *this,bool param_1)

{
  undefined1 *puVar1;
  
  (this->TheTimeline).bLooping = '\0';
  puVar1 = &(this->TheTimeline).field_0x1;
  *puVar1 = *puVar1 | param_1;
  return;
}

// SetNewTime @ 1488ddfd0

void __thiscall UTimelineComponent::SetNewTime(UTimelineComponent *this,float param_1)

{
  float fVar1;
  
  fVar1 = (this->TheTimeline).Length;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FTimeline::SetPlaybackPosition(&this->TheTimeline,fVar1,false,true);
  return;
}

// SetPlayRate @ 1488de1a0

void __thiscall UTimelineComponent::SetPlayRate(UTimelineComponent *this,float param_1)

{
  (this->TheTimeline).PlayRate = param_1;
  return;
}

// SetPlaybackPosition @ 1488df0a0

void __thiscall
UTimelineComponent::SetPlaybackPosition
          (UTimelineComponent *this,float param_1,bool param_2,bool param_3)

{
  FTimeline::SetPlaybackPosition(&this->TheTimeline,param_1,param_2,param_3);
  return;
}

// SetPropertySetObject @ 1488df400

void __thiscall UTimelineComponent::SetPropertySetObject(UTimelineComponent *this,UObject *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->TheTimeline).PropertySetObject.WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetTimelineFinishedFunc @ 1488dfa80

void __thiscall
UTimelineComponent::SetTimelineFinishedFunc
          (UTimelineComponent *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,param_1);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TheTimeline).TimelineFinishFuncStatic,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// SetTimelineFinishedFunc @ 1488dfb50

void __thiscall
UTimelineComponent::SetTimelineFinishedFunc(UTimelineComponent *this,FOnTimelineEvent *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  local_38._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
  local_38.Object.ObjectIndex = *(int *)&param_1->field_0x8;
  local_38.Object.ObjectSerialNumber = *(int *)&param_1->field_0xc;
  local_38.FunctionName.ComparisonIndex.Value = *(uint *)&param_1->field_0x10;
  local_38.FunctionName.Number = *(uint *)&param_1->field_0x14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->TheTimeline).TimelineFinishedFunc,&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetTimelineLength @ 1488dfc10

void __thiscall UTimelineComponent::SetTimelineLength(UTimelineComponent *this,float param_1)

{
  float fVar1;
  
  (this->TheTimeline).Length = param_1;
  if (param_1 < (this->TheTimeline).Position) {
    fVar1 = param_1 - __real_38d1b717;
    if (param_1 <= param_1 - __real_38d1b717) {
      fVar1 = param_1;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    FTimeline::SetPlaybackPosition(&this->TheTimeline,fVar1,false,true);
    return;
  }
  return;
}

// SetTimelineLengthMode @ 1488dfc60

void __thiscall
UTimelineComponent::SetTimelineLengthMode(UTimelineComponent *this,ETimelineLengthMode param_1)

{
  (this->TheTimeline).LengthMode.Value = (uchar)param_1;
  return;
}

// SetTimelinePostUpdateFunc @ 1488dfca0

void __thiscall
UTimelineComponent::SetTimelinePostUpdateFunc(UTimelineComponent *this,FOnTimelineEvent *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  local_38._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
  local_38.Object.ObjectIndex = *(int *)&param_1->field_0x8;
  local_38.Object.ObjectSerialNumber = *(int *)&param_1->field_0xc;
  local_38.FunctionName.ComparisonIndex.Value = *(uint *)&param_1->field_0x10;
  local_38.FunctionName.Number = *(uint *)&param_1->field_0x14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->TheTimeline).TimelinePostUpdateFunc,&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetVectorCurve @ 1488dff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTimelineComponent::SetVectorCurve(UTimelineComponent *this,UCurveVector *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_28;
  
  local_res10 = param_2;
  if (param_1 == (UCurveVector *)0x0) {
    if (2 < (byte)LogTimeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      return;
    }
  }
  else if (param_2 == (FName)0x0) {
LAB_1488dffb3:
    if (4 < (byte)LogTimeline._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeline);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar1 = (this->TheTimeline).InterpVectors.ArrayNum;
    pFVar2 = (this->TheTimeline).InterpVectors.AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((this->TheTimeline).InterpVectors.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTimelineVectorTrack,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        param_2 = local_res10;
      }
      if (pFVar2 == pFVar3) goto LAB_1488dffb3;
      if (*(FName *)(pFVar2 + 0x20) == param_2) break;
      pFVar2 = pFVar2 + 0x50;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UCurveVector **)pFVar2 = param_1;
  }
  return;
}

// Stop @ 1488e2330

void __thiscall UTimelineComponent::Stop(UTimelineComponent *this)

{
  uchar *puVar1;
  
  puVar1 = &(this->TheTimeline).PlayingStateTracker;
  *puVar1 = *puVar1 & 0xfe;
  return;
}

// TickComponent @ 1488e35d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTimelineComponent::TickComponent
          (UTimelineComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ENetRole EVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_TimelineCompTick> FVar8;
  UWorld *this_00;
  AWorldSettings *pAVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FStatMessage local_58;
  FName local_48;
  
  if (!__CsvProfilerStat788) {
    FCsvProfilerTrace::OutputInlineStatExclusive("TimelineComponent");
    __CsvProfilerStat788 = true;
  }
  FCsvProfiler::BeginExclusiveStat("TimelineComponent","CSV_TimelineComponent");
  FVar13.Value = 0;
  FVar8 = StatPtr_STAT_TimelineCompTick;
  if (StatPtr_STAT_TimelineCompTick == (FThreadSafeStaticStat<FStat_STAT_TimelineCompTick>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_58,"STAT_TimelineCompTick");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_TimelineCompTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TimelineCompTick,*pFVar7,
                       L"TimelineComp Tick","STATGROUP_Default","STATCAT_Advanced",
                       L"Default Stat Group",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_1488e376a:
    bVar4 = false;
    FVar12 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Timeline.cpp"
                   ,0x315);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488e376a;
    local_res8.s.LowPart = FVar11.Value;
    local_res8.s.HighPart = uVar10;
    local_48 = FVar12;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
    FVar13.Value = local_48.ComparisonIndex.Value;
  }
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (this->bIgnoreTimeDilation != 0) {
    this_00 = (UWorld *)this->_padding_;
    param_1 = (float)(double)FApp::DeltaTime;
    if (this_00 == (UWorld *)0x0) {
      this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      if (this_00 == (UWorld *)0x0) goto LAB_1488e37db;
    }
    pAVar9 = UWorld::GetWorldSettings(this_00,false,true);
    if (pAVar9 != (AWorldSettings *)0x0) {
      fVar2 = pAVar9->MaxUndilatedFrameTime;
      if (param_1 <= pAVar9->MaxUndilatedFrameTime) {
        fVar2 = param_1;
      }
      param_1 = fVar2;
      if (fVar2 <= pAVar9->MinUndilatedFrameTime) {
        param_1 = pAVar9->MinUndilatedFrameTime;
      }
    }
  }
LAB_1488e37db:
  FTimeline::TickTimeline(&this->TheTimeline,param_1);
  if ((char)this->_padding_ < '\0') {
    EVar6 = UActorComponent::GetOwnerRole((UActorComponent *)this);
    if (EVar6 != ROLE_Authority) goto LAB_1488e3815;
  }
  if (((this->TheTimeline).PlayingStateTracker & 1) == 0) {
    (**(code **)(this->_padding_ + 0x2c0))(this);
  }
LAB_1488e3815:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_58);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("TimelineComponent");
  return;
}

