// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// StaticClass @ 147511070

UClass * __cdecl UCachedAnimDataLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CachedAnimDataLibrary",
               &Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton,
               StaticRegisterNativesUCachedAnimDataLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCachedAnimDataLibrary>,
               InternalVTableHelperCtorCaller<UCachedAnimDataLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton;
}

// UCachedAnimDataLibrary @ 147532ab0

UCachedAnimDataLibrary * __thiscall
UCachedAnimDataLibrary::UCachedAnimDataLibrary(UCachedAnimDataLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCachedAnimDataLibrary__6B_;
  return this;
}

// UCachedAnimDataLibrary @ 147532ae0

UCachedAnimDataLibrary * __thiscall
UCachedAnimDataLibrary::UCachedAnimDataLibrary
          (UCachedAnimDataLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCachedAnimDataLibrary__6B_;
  return this;
}

// ~UCachedAnimDataLibrary @ 147533dd0

void __thiscall UCachedAnimDataLibrary::~UCachedAnimDataLibrary(UCachedAnimDataLibrary *this)

{
  *(undefined ***)this = &___7UCachedAnimDataLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14755f280

UClass * __cdecl UCachedAnimDataLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CachedAnimDataLibrary",
               &Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton,
               StaticRegisterNativesUCachedAnimDataLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCachedAnimDataLibrary>,
               InternalVTableHelperCtorCaller<UCachedAnimDataLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton;
}

// StateMachine_GetAssetPlayerTime @ 14757a730

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetAssetPlayerTime
          (UAnimInstance *param_1,FCachedAnimAssetPlayerData *param_2)

{
  float fVar1;
  
  if (param_1 != (UAnimInstance *)0x0) {
    FCachedAnimAssetPlayerData::CacheIndices(param_2,param_1);
    if (param_2->Index != -1) {
      fVar1 = UAnimInstance::GetInstanceAssetPlayerTime(param_1,param_2->Index);
      return fVar1;
    }
  }
  return 0.0;
}

// StateMachine_GetAssetPlayerTimeRatio @ 14757a780

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetAssetPlayerTimeRatio
          (UAnimInstance *param_1,FCachedAnimAssetPlayerData *param_2)

{
  float fVar1;
  
  if (param_1 != (UAnimInstance *)0x0) {
    FCachedAnimAssetPlayerData::CacheIndices(param_2,param_1);
    if (param_2->Index != -1) {
      fVar1 = UAnimInstance::GetInstanceAssetPlayerTimeFraction(param_1,param_2->Index);
      return fVar1;
    }
  }
  return 0.0;
}

// StateMachine_GetCrossfadeDuration @ 14757a7d0

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetCrossfadeDuration
          (UAnimInstance *param_1,FCachedAnimTransitionData *param_2)

{
  float fVar1;
  
  if (param_1 != (UAnimInstance *)0x0) {
    FCachedAnimTransitionData::CacheIndices(param_2,param_1);
    if ((param_2->MachineIndex != -1) && (param_2->TransitionIndex != -1)) {
      fVar1 = UAnimInstance::GetInstanceTransitionCrossfadeDuration
                        (param_1,param_2->MachineIndex,param_2->TransitionIndex);
      return fVar1;
    }
  }
  return 0.0;
}

// StateMachine_GetGlobalWeight @ 14757a830

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetGlobalWeight
          (UAnimInstance *param_1,FCachedAnimStateData *param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 == (UAnimInstance *)0x0) {
    return 0.0;
  }
  bVar2 = FCachedAnimStateData::IsValid(param_2,param_1);
  if (bVar2) {
    iVar1 = param_2->MachineIndex;
    fVar3 = UAnimInstance::GetInstanceStateWeight(param_1,iVar1,param_2->StateIndex);
    fVar4 = UAnimInstance::GetInstanceMachineWeight(param_1,iVar1);
    return fVar3 * fVar4;
  }
  return 0.0;
}

// StateMachine_GetLocalWeight @ 14757a8d0

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetLocalWeight
          (UAnimInstance *param_1,FCachedAnimStateData *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 != (UAnimInstance *)0x0) {
    bVar1 = FCachedAnimStateData::IsValid(param_2,param_1);
    if (bVar1) {
      fVar2 = UAnimInstance::GetInstanceStateWeight
                        (param_1,param_2->MachineIndex,param_2->StateIndex);
      return fVar2;
    }
  }
  return 0.0;
}

// StateMachine_GetRelevantAnimTime @ 14757a930

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTime
          (UAnimInstance *param_1,FCachedAnimRelevancyData *param_2)

{
  float fVar1;
  
  if (param_1 != (UAnimInstance *)0x0) {
    FCachedAnimRelevancyData::CacheIndices(param_2,param_1);
    if ((param_2->MachineIndex != -1) && (param_2->StateIndex != -1)) {
      fVar1 = UAnimInstance::GetRelevantAnimTime(param_1,param_2->MachineIndex,param_2->StateIndex);
      return fVar1;
    }
  }
  return 0.0;
}

// StateMachine_GetRelevantAnimTimeRemaining @ 14757a990

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTimeRemaining
          (UAnimInstance *param_1,FCachedAnimRelevancyData *param_2)

{
  float fVar1;
  
  if (param_1 != (UAnimInstance *)0x0) {
    FCachedAnimRelevancyData::CacheIndices(param_2,param_1);
    if ((param_2->MachineIndex != -1) && (param_2->StateIndex != -1)) {
      fVar1 = UAnimInstance::GetRelevantAnimTimeRemaining
                        (param_1,param_2->MachineIndex,param_2->StateIndex);
      return fVar1;
    }
  }
  return 0.0;
}

// StateMachine_GetRelevantAnimTimeRemainingFraction @ 14757a9f0

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTimeRemainingFraction
          (UAnimInstance *param_1,FCachedAnimRelevancyData *param_2)

{
  float fVar1;
  
  if (param_1 != (UAnimInstance *)0x0) {
    FCachedAnimRelevancyData::CacheIndices(param_2,param_1);
    if ((param_2->MachineIndex != -1) && (param_2->StateIndex != -1)) {
      fVar1 = UAnimInstance::GetRelevantAnimTimeRemainingFraction
                        (param_1,param_2->MachineIndex,param_2->StateIndex);
      return fVar1;
    }
  }
  return 0.0;
}

// StateMachine_GetTotalWeight @ 14757aa50

float __cdecl
UCachedAnimDataLibrary::StateMachine_GetTotalWeight
          (UAnimInstance *param_1,FCachedAnimStateArray *param_2)

{
  float fVar1;
  
  if (param_1 != (UAnimInstance *)0x0) {
    fVar1 = FCachedAnimStateArray::GetTotalWeight(param_2,param_1);
    return fVar1;
  }
  return 0.0;
}

// StateMachine_IsFullWeight @ 14757aa70

bool __cdecl
UCachedAnimDataLibrary::StateMachine_IsFullWeight
          (UAnimInstance *param_1,FCachedAnimStateArray *param_2)

{
  bool bVar1;
  
  if (param_1 != (UAnimInstance *)0x0) {
    bVar1 = FCachedAnimStateArray::IsFullWeight(param_2,param_1);
    return bVar1;
  }
  return false;
}

// StateMachine_IsRelevant @ 14757aa90

bool __cdecl
UCachedAnimDataLibrary::StateMachine_IsRelevant
          (UAnimInstance *param_1,FCachedAnimStateArray *param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  FCachedAnimStateData *this;
  FCachedAnimStateData *pFVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  if (param_1 == (UAnimInstance *)0x0) {
    return false;
  }
  bVar3 = FCachedAnimStateArray::IsValid(param_2,param_1);
  fVar2 = __real_3727c5ac;
  if (bVar3) {
    iVar1 = (param_2->States).ArrayNum;
    this = (FCachedAnimStateData *)(param_2->States).AllocatorInstance.Data;
    pFVar4 = this + iVar1;
    while( true ) {
      if ((param_2->States).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FCachedAnimStateData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this == pFVar4) break;
      bVar3 = FCachedAnimStateData::IsValid(this,param_1);
      if ((bVar3) &&
         (fVar5 = UAnimInstance::GetInstanceStateWeight(param_1,this->MachineIndex,this->StateIndex)
         , fVar2 < fVar5)) {
        return true;
      }
      this = this + 1;
    }
  }
  return false;
}

// StateMachine_IsStateRelevant @ 14757ab50

bool __cdecl
UCachedAnimDataLibrary::StateMachine_IsStateRelevant
          (UAnimInstance *param_1,FCachedAnimStateData *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 == (UAnimInstance *)0x0) {
    return false;
  }
  bVar1 = FCachedAnimStateData::IsValid(param_2,param_1);
  if (bVar1) {
    fVar2 = UAnimInstance::GetInstanceStateWeight(param_1,param_2->MachineIndex,param_2->StateIndex)
    ;
    return __real_3727c5ac < fVar2;
  }
  return __real_3727c5ac < 0.0;
}

// StaticRegisterNativesUCachedAnimDataLibrary @ 14757ad40

void __cdecl UCachedAnimDataLibrary::StaticRegisterNativesUCachedAnimDataLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UCachedAnimDataLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execStateMachine_GetAssetPlayerTime @ 147585f80

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetAssetPlayerTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *this;
  FCachedAnimAssetPlayerData *this_00;
  float fVar2;
  UAnimInstance *local_res10;
  FCachedAnimAssetPlayerData local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.StateMachineName.ComparisonIndex.Value = 0;
  local_28.StateMachineName.Number = 0;
  local_28.StateName.ComparisonIndex.Value = 0;
  local_28.StateName.Number = 0;
  local_28.Index = -1;
  local_28.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = local_res10;
  this_00 = &local_28;
  if ((FCachedAnimAssetPlayerData *)param_2->MostRecentPropertyAddress !=
      (FCachedAnimAssetPlayerData *)0x0) {
    this_00 = (FCachedAnimAssetPlayerData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAnimInstance *)0x0) {
    FCachedAnimAssetPlayerData::CacheIndices(this_00,local_res10);
    if (this_00->Index != -1) {
      fVar2 = UAnimInstance::GetInstanceAssetPlayerTime(this,this_00->Index);
      goto LAB_14758607b;
    }
  }
  fVar2 = 0.0;
LAB_14758607b:
  *(float *)param_3 = fVar2;
  return;
}

// execStateMachine_GetAssetPlayerTimeRatio @ 1475860a0

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetAssetPlayerTimeRatio
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *this;
  FCachedAnimAssetPlayerData *this_00;
  float fVar2;
  UAnimInstance *local_res10;
  FCachedAnimAssetPlayerData local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.StateMachineName.ComparisonIndex.Value = 0;
  local_28.StateMachineName.Number = 0;
  local_28.StateName.ComparisonIndex.Value = 0;
  local_28.StateName.Number = 0;
  local_28.Index = -1;
  local_28.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = local_res10;
  this_00 = &local_28;
  if ((FCachedAnimAssetPlayerData *)param_2->MostRecentPropertyAddress !=
      (FCachedAnimAssetPlayerData *)0x0) {
    this_00 = (FCachedAnimAssetPlayerData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAnimInstance *)0x0) {
    FCachedAnimAssetPlayerData::CacheIndices(this_00,local_res10);
    if (this_00->Index != -1) {
      fVar2 = UAnimInstance::GetInstanceAssetPlayerTimeFraction(this,this_00->Index);
      goto LAB_14758619b;
    }
  }
  fVar2 = 0.0;
LAB_14758619b:
  *(float *)param_3 = fVar2;
  return;
}

// execStateMachine_GetCrossfadeDuration @ 1475861c0

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetCrossfadeDuration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *this;
  FCachedAnimTransitionData *this_00;
  float fVar2;
  UAnimInstance *local_res10;
  FCachedAnimTransitionData local_38;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.StateMachineName.ComparisonIndex.Value = 0;
  local_38.StateMachineName.Number = 0;
  local_38.FromStateName.ComparisonIndex.Value = 0;
  local_38.FromStateName.Number = 0;
  local_38.ToStateName.ComparisonIndex.Value = 0;
  local_38.ToStateName.Number = 0;
  local_38.MachineIndex = -1;
  local_38.TransitionIndex = -1;
  local_38.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = local_res10;
  this_00 = &local_38;
  if ((FCachedAnimTransitionData *)param_2->MostRecentPropertyAddress !=
      (FCachedAnimTransitionData *)0x0) {
    this_00 = (FCachedAnimTransitionData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAnimInstance *)0x0) {
    FCachedAnimTransitionData::CacheIndices(this_00,local_res10);
    if ((this_00->MachineIndex != -1) && (this_00->TransitionIndex != -1)) {
      fVar2 = UAnimInstance::GetInstanceTransitionCrossfadeDuration
                        (this,this_00->MachineIndex,this_00->TransitionIndex);
      goto LAB_1475862cb;
    }
  }
  fVar2 = 0.0;
LAB_1475862cb:
  *(float *)param_3 = fVar2;
  return;
}

// execStateMachine_GetGlobalWeight @ 1475862f0

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetGlobalWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UAnimInstance *this;
  bool bVar3;
  FCachedAnimStateData *this_00;
  float fVar4;
  float fVar5;
  UAnimInstance *local_res10;
  FCachedAnimStateData local_38;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.StateMachineName.ComparisonIndex.Value = 0;
  local_38.StateMachineName.Number = 0;
  local_38.StateName.ComparisonIndex.Value = 0;
  local_38.StateName.Number = 0;
  local_38.MachineIndex = -1;
  local_38.StateIndex = -1;
  local_38.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = local_res10;
  this_00 = &local_38;
  if ((FCachedAnimStateData *)param_2->MostRecentPropertyAddress != (FCachedAnimStateData *)0x0) {
    this_00 = (FCachedAnimStateData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimInstance *)0x0) {
    *(undefined4 *)param_3 = 0;
  }
  else {
    bVar3 = FCachedAnimStateData::IsValid(this_00,local_res10);
    if (bVar3) {
      iVar1 = this_00->MachineIndex;
      fVar4 = UAnimInstance::GetInstanceStateWeight(this,iVar1,this_00->StateIndex);
      fVar5 = UAnimInstance::GetInstanceMachineWeight(this,iVar1);
      *(float *)param_3 = fVar4 * fVar5;
    }
    else {
      *(undefined4 *)param_3 = 0;
    }
  }
  return;
}

// execStateMachine_GetLocalWeight @ 147586440

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetLocalWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *this;
  bool bVar2;
  FCachedAnimStateData *this_00;
  float fVar3;
  UAnimInstance *local_res10;
  FCachedAnimStateData local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.StateMachineName.ComparisonIndex.Value = 0;
  local_28.StateMachineName.Number = 0;
  local_28.StateName.ComparisonIndex.Value = 0;
  local_28.StateName.Number = 0;
  local_28.MachineIndex = -1;
  local_28.StateIndex = -1;
  local_28.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = local_res10;
  this_00 = &local_28;
  if ((FCachedAnimStateData *)param_2->MostRecentPropertyAddress != (FCachedAnimStateData *)0x0) {
    this_00 = (FCachedAnimStateData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAnimInstance *)0x0) {
    bVar2 = FCachedAnimStateData::IsValid(this_00,local_res10);
    if (bVar2) {
      fVar3 = UAnimInstance::GetInstanceStateWeight(this,this_00->MachineIndex,this_00->StateIndex);
      goto LAB_14758653f;
    }
  }
  fVar3 = 0.0;
LAB_14758653f:
  *(float *)param_3 = fVar3;
  return;
}

// execStateMachine_GetRelevantAnimTime @ 147586560

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *this;
  FCachedAnimRelevancyData *this_00;
  float fVar2;
  UAnimInstance *local_res10;
  FCachedAnimRelevancyData local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.StateMachineName.ComparisonIndex.Value = 0;
  local_28.StateMachineName.Number = 0;
  local_28.StateName.ComparisonIndex.Value = 0;
  local_28.StateName.Number = 0;
  local_28.MachineIndex = -1;
  local_28.StateIndex = -1;
  local_28.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = local_res10;
  this_00 = &local_28;
  if ((FCachedAnimRelevancyData *)param_2->MostRecentPropertyAddress !=
      (FCachedAnimRelevancyData *)0x0) {
    this_00 = (FCachedAnimRelevancyData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAnimInstance *)0x0) {
    FCachedAnimRelevancyData::CacheIndices(this_00,local_res10);
    if ((this_00->MachineIndex != -1) && (this_00->StateIndex != -1)) {
      fVar2 = UAnimInstance::GetRelevantAnimTime(this,this_00->MachineIndex,this_00->StateIndex);
      goto LAB_147586666;
    }
  }
  fVar2 = 0.0;
LAB_147586666:
  *(float *)param_3 = fVar2;
  return;
}

// execStateMachine_GetRelevantAnimTimeRemaining @ 147586690

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTimeRemaining
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *this;
  FCachedAnimRelevancyData *this_00;
  float fVar2;
  UAnimInstance *local_res10;
  FCachedAnimRelevancyData local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.StateMachineName.ComparisonIndex.Value = 0;
  local_28.StateMachineName.Number = 0;
  local_28.StateName.ComparisonIndex.Value = 0;
  local_28.StateName.Number = 0;
  local_28.MachineIndex = -1;
  local_28.StateIndex = -1;
  local_28.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = local_res10;
  this_00 = &local_28;
  if ((FCachedAnimRelevancyData *)param_2->MostRecentPropertyAddress !=
      (FCachedAnimRelevancyData *)0x0) {
    this_00 = (FCachedAnimRelevancyData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAnimInstance *)0x0) {
    FCachedAnimRelevancyData::CacheIndices(this_00,local_res10);
    if ((this_00->MachineIndex != -1) && (this_00->StateIndex != -1)) {
      fVar2 = UAnimInstance::GetRelevantAnimTimeRemaining
                        (this,this_00->MachineIndex,this_00->StateIndex);
      goto LAB_147586796;
    }
  }
  fVar2 = 0.0;
LAB_147586796:
  *(float *)param_3 = fVar2;
  return;
}

// execStateMachine_GetRelevantAnimTimeRemainingFraction @ 1475867c0

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTimeRemainingFraction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *this;
  FCachedAnimRelevancyData *this_00;
  float fVar2;
  UAnimInstance *local_res10;
  FCachedAnimRelevancyData local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.StateMachineName.ComparisonIndex.Value = 0;
  local_28.StateMachineName.Number = 0;
  local_28.StateName.ComparisonIndex.Value = 0;
  local_28.StateName.Number = 0;
  local_28.MachineIndex = -1;
  local_28.StateIndex = -1;
  local_28.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = local_res10;
  this_00 = &local_28;
  if ((FCachedAnimRelevancyData *)param_2->MostRecentPropertyAddress !=
      (FCachedAnimRelevancyData *)0x0) {
    this_00 = (FCachedAnimRelevancyData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAnimInstance *)0x0) {
    FCachedAnimRelevancyData::CacheIndices(this_00,local_res10);
    if ((this_00->MachineIndex != -1) && (this_00->StateIndex != -1)) {
      fVar2 = UAnimInstance::GetRelevantAnimTimeRemainingFraction
                        (this,this_00->MachineIndex,this_00->StateIndex);
      goto LAB_1475868c6;
    }
  }
  fVar2 = 0.0;
LAB_1475868c6:
  *(float *)param_3 = fVar2;
  return;
}

// execStateMachine_GetTotalWeight @ 1475868f0

void __cdecl
UCachedAnimDataLibrary::execStateMachine_GetTotalWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCachedAnimStateArray *this;
  float fVar2;
  UAnimInstance *local_res10;
  FCachedAnimStateArray local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.States.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.States.ArrayNum = 0;
  local_28.States.ArrayMax = 0;
  local_28.bCheckedValidity = false;
  local_28.bCachedIsValid = true;
  local_28.bHasMultipleStateMachineEntries = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FCachedAnimStateArray *)param_2->MostRecentPropertyAddress != (FCachedAnimStateArray *)0x0) {
    this = (FCachedAnimStateArray *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimInstance *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = FCachedAnimStateArray::GetTotalWeight(this,local_res10);
  }
  *(float *)param_3 = fVar2;
  if (local_28.States.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.States.AllocatorInstance.Data);
  }
  return;
}

// execStateMachine_IsFullWeight @ 147586a00

void __cdecl
UCachedAnimDataLibrary::execStateMachine_IsFullWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FCachedAnimStateArray *this;
  UAnimInstance *local_res10;
  FCachedAnimStateArray local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.States.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.States.ArrayNum = 0;
  local_28.States.ArrayMax = 0;
  local_28.bCheckedValidity = false;
  local_28.bCachedIsValid = true;
  local_28.bHasMultipleStateMachineEntries = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FCachedAnimStateArray *)param_2->MostRecentPropertyAddress != (FCachedAnimStateArray *)0x0) {
    this = (FCachedAnimStateArray *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimInstance *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = FCachedAnimStateArray::IsFullWeight(this,local_res10);
  }
  *(bool *)param_3 = bVar2;
  if (local_28.States.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.States.AllocatorInstance.Data);
  }
  return;
}

// execStateMachine_IsRelevant @ 147586b10

void __cdecl
UCachedAnimDataLibrary::execStateMachine_IsRelevant(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  float fVar3;
  UAnimInstance *this;
  bool bVar4;
  undefined1 uVar5;
  FCachedAnimStateData *this_00;
  FCachedAnimStateData *pFVar6;
  FCachedAnimStateArray *this_01;
  float fVar7;
  undefined1 local_res10 [8];
  UAnimInstance *local_res18 [2];
  FCachedAnimStateArray local_58 [2];
  
  local_res18[0] = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_58[0].States.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].States.ArrayNum = 0;
  local_58[0].States.ArrayMax = 0;
  local_58[0].bCheckedValidity = false;
  local_58[0].bCachedIsValid = true;
  local_58[0].bHasMultipleStateMachineEntries = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  this = local_res18[0];
  this_01 = local_58;
  if ((FCachedAnimStateArray *)param_2->MostRecentPropertyAddress != (FCachedAnimStateArray *)0x0) {
    this_01 = (FCachedAnimStateArray *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == (UAnimInstance *)0x0) {
    uVar5 = 0;
  }
  else {
    bVar4 = FCachedAnimStateArray::IsValid(this_01,local_res18[0]);
    fVar3 = __real_3727c5ac;
    if (bVar4) {
      iVar1 = (this_01->States).ArrayNum;
      this_00 = (FCachedAnimStateData *)(this_01->States).AllocatorInstance.Data;
      pFVar6 = this_00 + iVar1;
      do {
        if ((this_01->States).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FCachedAnimStateData_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (this_00 == pFVar6) break;
        bVar4 = FCachedAnimStateData::IsValid(this_00,this);
        if (bVar4) {
          fVar7 = UAnimInstance::GetInstanceStateWeight
                            (this,this_00->MachineIndex,this_00->StateIndex);
          if (fVar3 < fVar7) goto LAB_147586c71;
        }
        this_00 = this_00 + 1;
      } while( true );
    }
    uVar5 = 0;
  }
LAB_147586c8f:
  *(undefined1 *)param_3 = uVar5;
  if (local_58[0].States.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].States.AllocatorInstance.Data);
  }
  return;
LAB_147586c71:
  uVar5 = 1;
  goto LAB_147586c8f;
}

// execStateMachine_IsStateRelevant @ 147586cd0

void __cdecl
UCachedAnimDataLibrary::execStateMachine_IsStateRelevant
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *this;
  bool bVar2;
  FCachedAnimStateData *this_00;
  float fVar3;
  UAnimInstance *local_res10;
  FCachedAnimStateData local_28;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.StateMachineName.ComparisonIndex.Value = 0;
  local_28.StateMachineName.Number = 0;
  local_28.StateName.ComparisonIndex.Value = 0;
  local_28.StateName.Number = 0;
  local_28.MachineIndex = -1;
  local_28.StateIndex = -1;
  local_28.bInitialized = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = local_res10;
  this_00 = &local_28;
  if ((FCachedAnimStateData *)param_2->MostRecentPropertyAddress != (FCachedAnimStateData *)0x0) {
    this_00 = (FCachedAnimStateData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimInstance *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    bVar2 = FCachedAnimStateData::IsValid(this_00,local_res10);
    if (bVar2) {
      fVar3 = UAnimInstance::GetInstanceStateWeight(this,this_00->MachineIndex,this_00->StateIndex);
      *(bool *)param_3 = __real_3727c5ac < fVar3;
    }
    else {
      *(bool *)param_3 = __real_3727c5ac < 0.0;
    }
  }
  return;
}

