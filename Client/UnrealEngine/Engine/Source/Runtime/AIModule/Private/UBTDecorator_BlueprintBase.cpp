// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 39

// StaticClass @ 146eb08f0

UClass * __cdecl UBTDecorator_BlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_BlueprintBase",
               &Z_Registration_Info_UClass_UBTDecorator_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUBTDecorator_BlueprintBase,0xa0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_BlueprintBase>,
               InternalVTableHelperCtorCaller<UBTDecorator_BlueprintBase>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_BlueprintBase.InnerSingleton;
}

// UBTDecorator_BlueprintBase @ 146ec5820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBTDecorator_BlueprintBase * __thiscall
UBTDecorator_BlueprintBase::UBTDecorator_BlueprintBase
          (UBTDecorator_BlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->ActorOwner).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ObservedKeyNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObservedKeyNames).ArrayNum = 0;
  (this->ObservedKeyNames).ArrayMax = 0;
  (this->PropertyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).ArrayNum = 0;
  (this->PropertyData).ArrayMax = 0;
  return this;
}

// UBTDecorator_BlueprintBase @ 146ec5890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBTDecorator_BlueprintBase * __thiscall
UBTDecorator_BlueprintBase::UBTDecorator_BlueprintBase
          (UBTDecorator_BlueprintBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  FName FVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  UClass *pUVar7;
  FName *pFVar8;
  uint uVar9;
  FName local_res8;
  FName local_res18;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  lVar4 = this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf0;
  *(uint *)&this->_padding_ = (uint)lVar4 & 0xffffff47 | 0x47;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->ActorOwner).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ObservedKeyNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObservedKeyNames).ArrayNum = 0;
  (this->ObservedKeyNames).ArrayMax = 0;
  (this->PropertyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).ArrayNum = 0;
  (this->PropertyData).ArrayMax = 0;
  pUVar7 = GetPrivateStaticClass();
  pFVar8 = ::FName::FName(&local_res8,L"ReceiveTickAI");
  FVar3 = *pFVar8;
  pFVar8 = ::FName::FName(&local_res18,L"ReceiveTick");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar8,FVar3,(UObject *)this,pUVar7);
  *(uint *)&this->field_0x98 =
       (iVar6 * 8 ^ *(uint *)&this->field_0x98) & 0x18 ^ *(uint *)&this->field_0x98;
  pFVar8 = ::FName::FName(&local_res8,L"ReceiveExecutionStartAI");
  FVar3 = *pFVar8;
  pFVar8 = ::FName::FName(&local_res18,L"ReceiveExecutionStart");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar8,FVar3,(UObject *)this,pUVar7);
  *(uint *)&this->field_0x98 =
       (iVar6 << 5 ^ *(uint *)&this->field_0x98) & 0x60 ^ *(uint *)&this->field_0x98;
  pFVar8 = ::FName::FName(&local_res8,L"ReceiveExecutionFinishAI");
  FVar3 = *pFVar8;
  pFVar8 = ::FName::FName(&local_res18,L"ReceiveExecutionFinish");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar8,FVar3,(UObject *)this,pUVar7);
  *(uint *)&this->field_0x98 =
       (iVar6 << 7 ^ *(uint *)&this->field_0x98) & 0x180 ^ *(uint *)&this->field_0x98;
  pFVar8 = ::FName::FName(&local_res8,L"ReceiveObserverActivatedAI");
  FVar3 = *pFVar8;
  pFVar8 = ::FName::FName(&local_res18,L"ReceiveObserverActivated");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar8,FVar3,(UObject *)this,pUVar7);
  *(uint *)&this->field_0x98 =
       (iVar6 << 9 ^ *(uint *)&this->field_0x98) & 0x600 ^ *(uint *)&this->field_0x98;
  pFVar8 = ::FName::FName(&local_res8,L"ReceiveObserverDeactivatedAI");
  FVar3 = *pFVar8;
  pFVar8 = ::FName::FName(&local_res18,L"ReceiveObserverDeactivated");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar8,FVar3,(UObject *)this,pUVar7);
  *(uint *)&this->field_0x98 =
       (iVar6 << 0xb ^ *(uint *)&this->field_0x98) & 0x1800 ^ *(uint *)&this->field_0x98;
  pFVar8 = ::FName::FName(&local_res8,L"PerformConditionCheckAI");
  FVar3 = *pFVar8;
  pFVar8 = ::FName::FName(&local_res18,L"PerformConditionCheck");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar8,FVar3,(UObject *)this,pUVar7);
  uVar2 = *(undefined4 *)&this->field_0x98;
  uVar9 = (iVar6 << 0xd ^ uVar2) & 0x6000U ^ uVar2;
  *(byte *)&this->_padding_ =
       (uVar9 & 0x600) != 0 | (byte)this->_padding_ & 0xf8 | -((uVar9 & 0x1800) != 0) & 2U |
       -(ZPULL(uVar2,3,2) != 0) & 4U;
  lVar4 = this->_padding_;
  *(uint *)&this->field_0x98 = uVar9 & 0xfffffff9 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  *(uint *)&this->_padding_ =
       -(uint)(this->ReceiveExecutionStartImplementations != 0) & 8 | (uint)lVar4 & 0xffffffc7 |
       -(uint)((uVar9 & 0x180) != 0) & 0x10;
  return this;
}

// ~UBTDecorator_BlueprintBase @ 146eccb10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::~UBTDecorator_BlueprintBase(UBTDecorator_BlueprintBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->PropertyData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObservedKeyNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateRawConditionValue @ 146ed4530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBTDecorator_BlueprintBase::CalculateRawConditionValue
          (UBTDecorator_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  undefined1 *puVar1;
  AAIController *pAVar2;
  UObject *pUVar3;
  UFunction *pUVar4;
  TObjectPtr<AAIController>_u_0 local_28;
  UObject *local_20;
  char local_18;
  
  if (this->PerformConditionCheckImplementations == 0) {
    return false;
  }
  pAVar2 = (this->AIOwner).field0_0x0.DebugPtr;
  if ((pAVar2 != (AAIController *)0x0) && ((this->PerformConditionCheckImplementations & 2) != 0)) {
    pUVar3 = (UObject *)pAVar2->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_28 = (this->AIOwner).field0_0x0;
    local_18 = '\0';
    local_20 = pUVar3;
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_PerformConditionCheckAI);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_28);
    return local_18 != '\0';
  }
  if ((this->PerformConditionCheckImplementations & 1) != 0) {
    local_28 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
    local_20 = (UObject *)((ulonglong)local_20 & 0xffffffffffffff00);
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_PerformConditionCheck);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_28);
    return (char)local_20 != '\0';
  }
  return false;
}

// DescribeRuntimeValues @ 146edb540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::DescribeRuntimeValues
          (UBTDecorator_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  UClass *this_00;
  UObject *pUVar1;
  
  this_00 = (UClass *)this->_padding_;
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UObject *)0x0) && (*(int *)&pUVar1[3].field_0x18 != 0)) {
    BlueprintNodeHelpers::DescribeRuntimeValues
              ((UObject *)this,
               (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&pUVar1[3].field_0x10,param_4);
  }
  return;
}

// EvaluateAbortType @ 146edf7c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAbortType __thiscall
UBTDecorator_BlueprintBase::EvaluateAbortType
          (UBTDecorator_BlueprintBase *this,UBehaviorTreeComponent *param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  UBTNode *pUVar5;
  EAbortType EVar6;
  
  if (this->PerformConditionCheckImplementations == 0) {
    return Unknown;
  }
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    return NoAbort;
  }
  bVar4 = *(byte *)((longlong)&this->_padding_ + 1);
  if (bVar4 == 0xff) {
    pUVar5 = (UBTNode *)this->_padding_;
  }
  else if ((UBTCompositeNode *)this->_padding_ == (UBTCompositeNode *)0x0) {
    pUVar5 = (UBTNode *)0x0;
  }
  else {
    pUVar5 = UBTCompositeNode::GetChildNode((UBTCompositeNode *)this->_padding_,(uint)bVar4);
  }
  EVar6 = NoAbort;
  bVar3 = UBehaviorTreeComponent::IsExecutingBranch(param_1,pUVar5,(uint)bVar4);
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  if (bVar3) {
    if ((byte)(cVar1 - 2U) < 2) {
      lVar2 = this->_padding_;
      bVar4 = (**(code **)(this->_padding_ + 0x330))(this,param_1,0);
      if (bVar4 == ((byte)((uint)lVar2 >> 7) & 1)) {
        EVar6 = DeactivateBranch;
      }
    }
  }
  else if ((cVar1 - 1U & 0xfd) == 0) {
    lVar2 = this->_padding_;
    bVar4 = (**(code **)(this->_padding_ + 0x330))(this,param_1,0);
    EVar6 = NoAbort;
    if (bVar4 != ((byte)((uint)lVar2 >> 7) & 1)) {
      EVar6 = ActivateBranch;
    }
  }
  return EVar6;
}

// GetPrivateStaticClass @ 146ee7330

UClass * __cdecl UBTDecorator_BlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_BlueprintBase",
               &Z_Registration_Info_UClass_UBTDecorator_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUBTDecorator_BlueprintBase,0xa0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_BlueprintBase>,
               InternalVTableHelperCtorCaller<UBTDecorator_BlueprintBase>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_BlueprintBase.InnerSingleton;
}

// GetStaticDescription @ 146eeb420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBTDecorator_BlueprintBase::GetStaticDescription
          (UBTDecorator_BlueprintBase *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  UClass *pUVar2;
  int iVar3;
  undefined1 *local_res8;
  FString local_28;
  code *local_18;
  undefined1 **local_10;
  
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,__return_storage_ptr__);
  pUVar2 = (UClass *)this->_padding_;
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  if ((this->bShowPropertyDetails != 0) &&
     (pUVar1 = (pUVar2->ClassDefaultObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    pUVar2 = StaticClass();
    local_res8 = &pUVar1[3].field_0x10;
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`BlueprintNodeHelpers::CollectPropertyDescription'::__l2::<lambda_1>,bool,FProperty_*>
               ::Call;
    BlueprintNodeHelpers::CollectPropertyDescription
              (&local_28,(UObject *)this,pUVar2,(TFunctionRef<bool___cdecl(FProperty_*)> *)&local_18
              );
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      ::FString::AppendChars(__return_storage_ptr__,L":\n\n",3);
      iVar3 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef1d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::InitializeFromAsset
          (UBTDecorator_BlueprintBase *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  UClass *pUVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UBlackboardData *)0x0) {
    pUVar2 = StaticClass();
    BlueprintNodeHelpers::ResolveBlackboardSelectors((UObject *)this,pUVar2,pUVar1);
  }
  return;
}

// InitializeProperties @ 146ef32c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTDecorator_BlueprintBase::InitializeProperties(UBTDecorator_BlueprintBase *this)

{
  longlong *plVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FString *this_00;
  UClass *pUVar9;
  void *local_28 [2];
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    pUVar9 = (UClass *)this->_padding_;
    if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar9);
    }
    pUVar2 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar9 = StaticClass();
    lVar3 = *(longlong *)&pUVar2->field_0x10;
    iVar6 = (int)pUVar9->_padding_;
    if (((*(int *)(lVar3 + 0x38) < iVar6) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
         &pUVar9->_padding_)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)&this->field_0x98 =
         (*(uint *)&this->field_0x98 ^ *(uint *)&pUVar2[3].field_0x20) & 4 ^
         *(uint *)&this->field_0x98;
    return;
  }
  pUVar7 = StaticClass();
  BlueprintNodeHelpers::CollectPropertyData((UObject *)this,pUVar7,&this->PropertyData);
  plVar1 = *(longlong **)(this->_padding_ + 0x70);
  pUVar9 = (UClass *)0x0;
  do {
    iVar6 = 0;
    if (plVar1 == (longlong *)0x0) {
LAB_146ef3403:
      this->bIsObservingBB = iVar6;
      return;
    }
    pUVar8 = Z_Construct_UClass_UObject_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)(plVar1 + 2),pUVar8);
    pUVar8 = (UClass *)0x0;
    if (bVar5) {
      pUVar8 = (UClass *)(plVar1[2] & 0xfffffffffffffffe);
    }
    iVar6 = 0;
    if (pUVar8 == pUVar7) goto LAB_146ef3403;
    if ((((ulonglong)plVar1[7] >> 0xd & 1) == 0) && (((ulonglong)plVar1[7] >> 0x10 & 1) == 0)) {
      if (((*(uint *)(plVar1[1] + 0x18) >> 0x14 & 1) == 0) || (plVar1 == (longlong *)0x0)) {
LAB_146ef33c7:
        bVar5 = false;
      }
      else {
        pUVar9 = (UClass *)&DAT_00000001;
        this_00 = (FString *)(**(code **)(*plVar1 + 0x68))(plVar1,local_28,0,0);
        iVar6 = ::FString::Find(this_00,L"FBlackboardKeySelector",0x16,IgnoreCase,FromStart,-1);
        if (iVar6 == -1) goto LAB_146ef33c7;
        bVar5 = true;
      }
      if ((pUVar9 != (UClass *)0x0) && (pUVar9 = (UClass *)0x0, local_28[0] != (void *)0x0)) {
        FMemory::Free(local_28[0]);
      }
      if (bVar5) {
        iVar6 = 1;
        goto LAB_146ef3403;
      }
    }
    plVar1 = (longlong *)plVar1[9];
  } while( true );
}

// IsDecoratorExecutionActive @ 146ef3b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBTDecorator_BlueprintBase::IsDecoratorExecutionActive(UBTDecorator_BlueprintBase *this)

{
  byte bVar1;
  int iVar2;
  UBehaviorTreeComponent *this_00;
  bool bVar3;
  UClass *pUVar4;
  UBTNode *pUVar5;
  
  this_00 = (UBehaviorTreeComponent *)this->_padding_;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
      if (bVar1 == 0xff) {
        pUVar5 = (UBTNode *)this->_padding_;
      }
      else if ((UBTCompositeNode *)this->_padding_ == (UBTCompositeNode *)0x0) {
        pUVar5 = (UBTNode *)0x0;
      }
      else {
        pUVar5 = UBTCompositeNode::GetChildNode((UBTCompositeNode *)this->_padding_,(uint)bVar1);
      }
      bVar3 = UBehaviorTreeComponent::IsExecutingBranch(this_00,pUVar5,(uint)bVar1);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// IsDecoratorObserverActive @ 146ef3ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBTDecorator_BlueprintBase::IsDecoratorObserverActive(UBTDecorator_BlueprintBase *this)

{
  int iVar1;
  UBehaviorTreeComponent *this_00;
  bool bVar2;
  UClass *pUVar3;
  
  this_00 = (UBehaviorTreeComponent *)this->_padding_;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      bVar2 = UBehaviorTreeComponent::IsAuxNodeActive(this_00,(UBTAuxiliaryNode *)this);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// OnBecomeRelevant @ 146ef5770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::OnBecomeRelevant
          (UBTDecorator_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  undefined1 *puVar1;
  AAIController *pAVar2;
  UObject *pUVar3;
  UBlackboardComponent *this_00;
  UBlackboardData *this_01;
  code *pcVar4;
  ushort uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  UFunction *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  uint uVar12;
  TObjectPtr<AAIController>_u_0 *pTVar13;
  FName local_res8;
  TObjectPtr<AAIController>_u_0 local_res10;
  UBTDecorator_BlueprintBase *local_res20;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TObjectPtr<AAIController>_u_0 local_58;
  UObject *local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  pAVar2 = (this->AIOwner).field0_0x0.DebugPtr;
  if ((pAVar2 == (AAIController *)0x0) ||
     ((this->ReceiveObserverActivatedImplementations >> 1 & 1) == 0)) {
    if ((this->ReceiveObserverActivatedImplementations & 1) == 0) goto LAB_146ef5812;
    local_res10 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
    pUVar9 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivated);
    pTVar13 = &local_res10;
  }
  else {
    pUVar3 = (UObject *)pAVar2->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_58 = (this->AIOwner).field0_0x0;
    local_50 = pUVar3;
    pUVar9 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI);
    pTVar13 = &local_58;
  }
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,pTVar13);
LAB_146ef5812:
  if ((this->PerformConditionCheckImplementations != 0) &&
     (this->bCheckConditionOnlyBlackBoardChanges != 1 || this->bIsObservingBB != 1)) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  }
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 != (UBlackboardComponent *)0x0) {
    uVar12 = 0;
    if (0 < (this->ObservedKeyNames).ArrayNum) {
      uVar6 = local_40._4_4_;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->ObservedKeyNames).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = (this_00->BlackboardAsset).field0_0x0.DebugPtr;
        if ((this_01 != (UBlackboardData *)0x0) &&
           (UBlackboardData::InternalGetKeyID
                      (this_01,&local_res8,
                       (int)(this->ObservedKeyNames).AllocatorInstance.Data + uVar12 * 8),
           uVar5 = (ushort)local_res8.ComparisonIndex.Value,
           (ushort)local_res8.ComparisonIndex.Value != 0xffff)) {
          local_68 = OnBlackboardKeyValueChange;
          local_48 = 0;
          local_40 = &local_80;
          uStack_60 = 0;
          uStack_5c = uVar6;
          local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_80.DelegateSize = 0;
          puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &
                       ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
            ;
            uVar11 = FDelegateHandle::GenerateNewID();
            puVar10[2] = uVar11;
            *puVar10 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_BlueprintBase____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar10[3] = 0;
            local_res20 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
            puVar10[4] = local_68;
            puVar10[5] = CONCAT44(uStack_5c,uStack_60);
          }
          UBlackboardComponent::RegisterObserver
                    (this_00,(FKey)(ushort)local_88,(UObject *)(ulonglong)uVar5,
                     (TDelegate<EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
                      *)this);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (this->ObservedKeyNames).ArrayNum);
    }
  }
  return;
}

// OnBlackboardKeyValueChange @ 146ef65f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
UBTDecorator_BlueprintBase::OnBlackboardKeyValueChange
          (UBTDecorator_BlueprintBase *this,UBlackboardComponent *param_1,FKey param_2)

{
  int iVar1;
  EAbortType EVar2;
  UClass *pUVar3;
  UBehaviorTreeComponent *pUVar4;
  
  pUVar4 = (UBehaviorTreeComponent *)(param_1->BrainComp).field0_0x0.DebugPtr;
  if (pUVar4 != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      EVar2 = EvaluateAbortType(this,pUVar4);
      if (EVar2 != Unknown) {
        RequestAbort(this,pUVar4,EVar2);
        return pUVar4 != (UBehaviorTreeComponent *)0x0;
      }
      goto LAB_146ef665d;
    }
  }
  pUVar4 = (UBehaviorTreeComponent *)0x0;
LAB_146ef665d:
  return pUVar4 != (UBehaviorTreeComponent *)0x0;
}

// OnCeaseRelevant @ 146ef6ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::OnCeaseRelevant
          (UBTDecorator_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  undefined1 *puVar1;
  AAIController *pAVar2;
  UObject *pUVar3;
  UFunction *pUVar4;
  TObjectPtr<AAIController>_u_0 *pTVar5;
  TObjectPtr<AAIController>_u_0 local_res8;
  TObjectPtr<AAIController>_u_0 local_18;
  UObject *local_10;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    UBlackboardComponent::UnregisterObserversFrom
              ((UBlackboardComponent *)param_1->_padding_,(UObject *)this);
  }
  pAVar2 = (this->AIOwner).field0_0x0.DebugPtr;
  if ((pAVar2 == (AAIController *)0x0) ||
     ((this->ReceiveObserverDeactivatedImplementations & 2) == 0)) {
    if ((this->ReceiveObserverDeactivatedImplementations & 1) == 0) goto LAB_146ef6f77;
    local_res8 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated);
    pTVar5 = &local_res8;
  }
  else {
    pUVar3 = (UObject *)pAVar2->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_18 = (this->AIOwner).field0_0x0;
    local_10 = pUVar3;
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI
                       );
    pTVar5 = &local_18;
  }
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,pTVar5);
LAB_146ef6f77:
  if (((this->PerformConditionCheckImplementations != 0) &&
      (this->bCheckConditionOnlyBlackBoardChanges != 1 || this->bIsObservingBB != 1)) &&
     (this->ReceiveTickImplementations == 0)) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfb;
  }
  return;
}

// OnInstanceDestroyed @ 146ef7e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::OnInstanceDestroyed
          (UBTDecorator_BlueprintBase *this,UBehaviorTreeComponent *param_1)

{
  UWorld *this_00;
  FLatentActionManager *this_01;
  FTimerManager *this_02;
  FWeakObjectPtr local_res10;
  UBTDecorator_BlueprintBase *local_res18;
  
  if (((((uint)param_1->_padding_ >> 0xf & 1) == 0) &&
      ((AActor *)param_1->_padding_ != (AActor *)0x0)) &&
     (this_00 = AActor::GetWorld((AActor *)param_1->_padding_), this_00 != (UWorld *)0x0)) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UBTDecorator_BlueprintBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UBTDecorator_BlueprintBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    FLatentActionManager::RemoveActionsForObject
              (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10);
    this_02 = UWorld::GetTimerManager(this_00);
    if (this != (UBTDecorator_BlueprintBase *)0x0) {
      FTimerManager::InternalClearAllTimers(this_02,this);
    }
  }
  return;
}

// OnNodeActivation @ 146ef8380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::OnNodeActivation
          (UBTDecorator_BlueprintBase *this,FBehaviorTreeSearchData *param_1)

{
  AAIController *pAVar1;
  UObject *pUVar2;
  UFunction *pUVar3;
  TObjectPtr<AAIController>_u_0 *pTVar4;
  TObjectPtr<AAIController>_u_0 local_res8;
  TObjectPtr<AAIController>_u_0 local_18;
  UObject *local_10;
  
  pAVar1 = (this->AIOwner).field0_0x0.DebugPtr;
  if ((pAVar1 == (AAIController *)0x0) || ((this->ReceiveExecutionStartImplementations & 2) == 0)) {
    if ((this->ReceiveExecutionStartImplementations & 1) == 0) {
      return;
    }
    local_res8 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStart);
    pTVar4 = &local_res8;
  }
  else {
    pUVar2 = (UObject *)pAVar1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_18 = (this->AIOwner).field0_0x0;
    local_10 = pUVar2;
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI);
    pTVar4 = &local_18;
  }
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,pTVar4);
  return;
}

// OnNodeDeactivation @ 146ef89b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::OnNodeDeactivation
          (UBTDecorator_BlueprintBase *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  AAIController *pAVar1;
  UObject *pUVar2;
  UFunction *pUVar3;
  TObjectPtr<AAIController>_u_0 local_28;
  UObject *local_20;
  undefined1 local_18;
  
  pAVar1 = (this->AIOwner).field0_0x0.DebugPtr;
  if ((pAVar1 == (AAIController *)0x0) || ((this->ReceiveExecutionFinishImplementations & 2) == 0))
  {
    if ((this->field_0x98 & 0x80) == 0) {
      return;
    }
    local_28 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
    local_20 = (UObject *)CONCAT71(local_20._1_7_,(char)param_2);
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinish);
  }
  else {
    pUVar2 = (UObject *)pAVar1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_28 = (this->AIOwner).field0_0x0;
    local_20 = pUVar2;
    local_18 = (char)param_2;
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI);
  }
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_28);
  return;
}

// PerformConditionCheck @ 146efa180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBTDecorator_BlueprintBase::PerformConditionCheck(UBTDecorator_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_18;
  char local_10;
  
  local_10 = '\0';
  local_18 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_PerformConditionCheck);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return local_10 != '\0';
}

// PerformConditionCheckAI @ 146efa1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBTDecorator_BlueprintBase::PerformConditionCheckAI
          (UBTDecorator_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_28;
  APawn *local_20;
  char local_18;
  
  local_18 = '\0';
  local_28 = param_1;
  local_20 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_PerformConditionCheckAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return local_18 != '\0';
}

// PostInitProperties @ 146efb0d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTDecorator_BlueprintBase::PostInitProperties(UBTDecorator_BlueprintBase *this)

{
  UObject::PostInitProperties((UObject *)this);
  InitializeProperties(this);
  if (this->bIsObservingBB != 0 || this->PerformConditionCheckImplementations != 0) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  }
  return;
}

// PostLoad @ 146efb150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTDecorator_BlueprintBase::PostLoad(UBTDecorator_BlueprintBase *this)

{
  int *piVar1;
  FProperty *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FString *this_01;
  void *pvVar7;
  UClass *pUVar8;
  void *local_38 [2];
  
  UObject::PostLoad((UObject *)this);
  if ((*(char *)((longlong)&this->_padding_ + 4) != '\0') && (this->bIsObservingBB != 0)) {
    piVar1 = &(this->ObservedKeyNames).ArrayMax;
    (this->ObservedKeyNames).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->ObservedKeyNames).AllocatorInstance,0,piVar1);
    }
    pUVar5 = StaticClass();
    pUVar8 = (UClass *)0x0;
    for (this_00 = *(FProperty **)(this->_padding_ + 0x70); this_00 != (FProperty *)0x0;
        this_00 = this_00->PropertyLinkNext) {
      pUVar6 = Z_Construct_UClass_UObject_NoRegister();
      bVar3 = FFieldVariant::IsA((FFieldVariant *)&this_00->_padding_,pUVar6);
      pUVar6 = (UClass *)0x0;
      if (bVar3) {
        pUVar6 = (UClass *)(this_00->_padding_ & 0xfffffffffffffffe);
      }
      if (pUVar6 == pUVar5) break;
      if (((this_00->PropertyFlags >> 0xd & 1) == 0) && ((this_00->PropertyFlags >> 0x10 & 1) == 0))
      {
        if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) == 0) {
LAB_146efb283:
          bVar3 = false;
        }
        else {
          pUVar8 = (UClass *)&DAT_00000001;
          this_01 = (FString *)(**(code **)(this_00->_padding_ + 0x68))(this_00,local_38,0,0);
          iVar4 = ::FString::Find(this_01,L"FBlackboardKeySelector",0x16,IgnoreCase,FromStart,-1);
          if (iVar4 == -1) goto LAB_146efb283;
          bVar3 = true;
        }
        if ((pUVar8 != (UClass *)0x0) && (pUVar8 = (UClass *)0x0, local_38[0] != (void *)0x0)) {
          FMemory::Free(local_38[0]);
        }
        if (bVar3) {
          pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                    (&this->ObservedKeyNames,(FName *)((longlong)pvVar7 + 0x10));
        }
      }
    }
    if (((this->ObservedKeyNames).ArrayNum < 1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2485763978131669067>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_BlueprintBase.cpp"
                           ,0x4b,"ObservedKeyNames.Num() > 0"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ReceiveExecutionFinish @ 146efc0e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveExecutionFinish
          (UBTDecorator_BlueprintBase *this,AActor *param_1,Type param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  undefined1 local_10;
  
  local_10 = (undefined1)param_2;
  local_18 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinish);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveExecutionFinishAI @ 146efc130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI
          (UBTDecorator_BlueprintBase *this,AAIController *param_1,APawn *param_2,Type param_3)

{
  UFunction *pUVar1;
  AAIController *local_28;
  APawn *local_20;
  undefined1 local_18;
  
  local_18 = (undefined1)param_3;
  local_28 = param_1;
  local_20 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// ReceiveExecutionStart @ 146efc180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveExecutionStart(UBTDecorator_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStart);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveExecutionStartAI @ 146efc1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveExecutionStartAI
          (UBTDecorator_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveObserverActivated @ 146efc210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveObserverActivated
          (UBTDecorator_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivated);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveObserverActivatedAI @ 146efc250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI
          (UBTDecorator_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveObserverDeactivated @ 146efc2a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveObserverDeactivated
          (UBTDecorator_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveObserverDeactivatedAI @ 146efc2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI
          (UBTDecorator_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveTick @ 146efc3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveTick
          (UBTDecorator_BlueprintBase *this,AActor *param_1,float param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  float local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveTick)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveTickAI @ 146efc4b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::ReceiveTickAI
          (UBTDecorator_BlueprintBase *this,AAIController *param_1,APawn *param_2,float param_3)

{
  UFunction *pUVar1;
  AAIController *local_28;
  APawn *local_20;
  float local_18;
  
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveTickAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// RequestAbort @ 146efd900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::RequestAbort
          (UBTDecorator_BlueprintBase *this,UBehaviorTreeComponent *param_1,EAbortType param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == ActivateBranch) {
    UBehaviorTreeComponent::RequestBranchActivation(param_1,(UBTDecorator *)this,false);
    return;
  }
  if (param_2 != DeactivateBranch) {
    if (param_2 == Unknown) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_BlueprintBase.cpp"
                         ,0xef,
                         L"If decorator is active, it must know whether it needs to abort or not");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    return;
  }
  UBehaviorTreeComponent::RequestBranchDeactivation(param_1,(UBTDecorator *)this);
  return;
}

// SetOwner @ 146effae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::SetOwner(UBTDecorator_BlueprintBase *this,AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ActorOwner).field0_0x0.DebugPtr = param_1;
LAB_146effb15:
    pUVar2 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146effb3a;
  }
  else {
    (this->ActorOwner).field0_0x0.DebugPtr = param_1;
    if (param_1 != (AActor *)0x0) goto LAB_146effb15;
  }
  param_1 = (AActor *)0x0;
LAB_146effb3a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((AAIController *)param_1 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)param_1;
  return;
}

// StaticRegisterNativesUBTDecorator_BlueprintBase @ 146f00b40

void __cdecl UBTDecorator_BlueprintBase::StaticRegisterNativesUBTDecorator_BlueprintBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickNode @ 146f01870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_BlueprintBase::TickNode
          (UBTDecorator_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  undefined1 *puVar1;
  AAIController *pAVar2;
  UObject *pUVar3;
  EAbortType EVar4;
  UFunction *pUVar5;
  TObjectPtr<AAIController>_u_0 local_38;
  UObject *local_30;
  float local_28;
  
  pAVar2 = (this->AIOwner).field0_0x0.DebugPtr;
  if ((pAVar2 == (AAIController *)0x0) || ((this->ReceiveTickImplementations & 2) == 0)) {
    if ((this->ReceiveTickImplementations & 1) == 0) goto LAB_146f01927;
    local_38 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
    local_30 = (UObject *)CONCAT44(local_30._4_4_,param_3);
    pUVar5 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveTick);
  }
  else {
    pUVar3 = (UObject *)pAVar2->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_38 = (this->AIOwner).field0_0x0;
    local_30 = pUVar3;
    local_28 = param_3;
    pUVar5 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTDecorator_BlueprintBase_ReceiveTickAI);
  }
  (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_38);
LAB_146f01927:
  if ((this->PerformConditionCheckImplementations != 0) &&
     (this->bCheckConditionOnlyBlackBoardChanges != 1 || this->bIsObservingBB != 1)) {
    EVar4 = EvaluateAbortType(this,param_1);
    RequestAbort(this,param_1,EVar4);
  }
  return;
}

// execIsDecoratorExecutionActive @ 146f0aae0

void __cdecl
UBTDecorator_BlueprintBase::execIsDecoratorExecutionActive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  UBehaviorTreeComponent *this;
  bool bVar3;
  UClass *pUVar4;
  UBTNode *pUVar5;
  
  pUVar5 = (UBTNode *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UBehaviorTreeComponent **)&param_1->field_0x20;
  if (this != (UBehaviorTreeComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      bVar1 = param_1[2].field_0x9;
      if (bVar1 == 0xff) {
        pUVar5 = *(UBTNode **)&param_1[1].field_0x20;
      }
      else if (*(UBTCompositeNode **)&param_1[1].field_0x20 != (UBTCompositeNode *)0x0) {
        pUVar5 = UBTCompositeNode::GetChildNode
                           (*(UBTCompositeNode **)&param_1[1].field_0x20,(uint)bVar1);
      }
      bVar3 = UBehaviorTreeComponent::IsExecutingBranch(this,pUVar5,(uint)bVar1);
      if (bVar3) {
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsDecoratorObserverActive @ 146f0abb0

void __cdecl
UBTDecorator_BlueprintBase::execIsDecoratorObserverActive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UBehaviorTreeComponent *this;
  bool bVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UBehaviorTreeComponent **)&param_1->field_0x20;
  if (this != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      bVar2 = UBehaviorTreeComponent::IsAuxNodeActive(this,(UBTAuxiliaryNode *)param_1);
      if (bVar2) {
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

