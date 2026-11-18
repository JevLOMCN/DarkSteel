// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 33

// StaticClass @ 146eac9e0

UClass * __cdecl UBTTask_BlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_BlueprintBase",
               &Z_Registration_Info_UClass_UBTTask_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUBTTask_BlueprintBase,0xa8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_BlueprintBase>,
               InternalVTableHelperCtorCaller<UBTTask_BlueprintBase>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_BlueprintBase.InnerSingleton;
}

// UBTTask_BlueprintBase @ 146ec8930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBTTask_BlueprintBase * __thiscall
UBTTask_BlueprintBase::UBTTask_BlueprintBase(UBTTask_BlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->TickInterval).Interval = -1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->ActorOwner).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->TickInterval).TimeLeft = 0.0;
  (this->PropertyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).ArrayNum = 0;
  (this->PropertyData).ArrayMax = 0;
  return this;
}

// UBTTask_BlueprintBase @ 146ec89b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBTTask_BlueprintBase * __thiscall
UBTTask_BlueprintBase::UBTTask_BlueprintBase
          (UBTTask_BlueprintBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  longlong lVar3;
  int iVar4;
  UClass *pUVar5;
  FName *pFVar6;
  uint uVar7;
  FName local_res8;
  FName local_res18 [2];
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->ActorOwner).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->TickInterval).Interval = -1.0;
  (this->TickInterval).TimeLeft = 0.0;
  (this->PropertyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).ArrayNum = 0;
  (this->PropertyData).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pUVar5 = GetPrivateStaticClass();
  pFVar6 = ::FName::FName(&local_res8,L"ReceiveTickAI");
  FVar2 = *pFVar6;
  pFVar6 = ::FName::FName(local_res18,L"ReceiveTick");
  iVar4 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar6,FVar2,(UObject *)this,pUVar5);
  *(uint *)&this->field_0xa0 =
       (iVar4 * 2 ^ *(uint *)&this->field_0xa0) & 6 ^ *(uint *)&this->field_0xa0;
  pFVar6 = ::FName::FName(&local_res8,L"ReceiveExecuteAI");
  FVar2 = *pFVar6;
  pFVar6 = ::FName::FName(local_res18,L"ReceiveExecute");
  iVar4 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar6,FVar2,(UObject *)this,pUVar5);
  *(uint *)&this->field_0xa0 =
       (iVar4 * 8 ^ *(uint *)&this->field_0xa0) & 0x18 ^ *(uint *)&this->field_0xa0;
  pFVar6 = ::FName::FName(&local_res8,L"ReceiveAbortAI");
  FVar2 = *pFVar6;
  pFVar6 = ::FName::FName(local_res18,L"ReceiveAbort");
  iVar4 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar6,FVar2,(UObject *)this,pUVar5);
  uVar7 = (iVar4 << 5 ^ *(uint *)&this->field_0xa0) & 0x60 ^ *(uint *)&this->field_0xa0;
  lVar3 = this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  *(uint *)&this->_padding_ = -(uint)((uVar7 & 6) != 0) & 2 | (uint)lVar3 & 0xfffffffd | 4;
  *(uint *)&this->field_0xa0 = uVar7 & 0xffffff7f | 1;
  if ((this->_padding_ & 0x10) != 0) {
    BlueprintNodeHelpers::CollectPropertyData((UObject *)this,pUVar5,&this->PropertyData);
  }
  return this;
}

// ~UBTTask_BlueprintBase @ 146ecd490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTTask_BlueprintBase::~UBTTask_BlueprintBase(UBTTask_BlueprintBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->PropertyData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 146ed1590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_BlueprintBase::AbortTask
          (UBTTask_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  AAIController *pAVar3;
  UObject *pUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UWorld *this_00;
  FLatentActionManager *this_01;
  FTimerManager *this_02;
  UFunction *pUVar8;
  TObjectPtr<AAIController>_u_0 *pTVar9;
  TObjectPtr<AAIController>_u_0 local_res8;
  UBTTask_BlueprintBase *local_res10;
  TObjectPtr<AAIController>_u_0 local_18;
  UObject *local_10;
  
  if ((((uint)param_1->_padding_ >> 0xf & 1) == 0) &&
     ((AActor *)param_1->_padding_ != (AActor *)0x0)) {
    this_00 = AActor::GetWorld((AActor *)param_1->_padding_);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UBTTask_BlueprintBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8.DebugPtr = (AAIController *)0x0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UBTTask_BlueprintBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.ObjectPtr,(FObjectPtr)&local_res10);
      FLatentActionManager::RemoveActionsForObject
                (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res8.ObjectPtr.field0_0x0);
      this_02 = UWorld::GetTimerManager(this_00);
      if (this != (UBTTask_BlueprintBase *)0x0) {
        FTimerManager::InternalClearAllTimers(this_02,this);
      }
    }
  }
  puVar1 = &this->field_0xa0;
  uVar2 = *(undefined4 *)puVar1;
  this->bIsAborting = 1;
  (this->CurrentCallResult).Value = (ZPULL(uVar2,5,2) != 0) + '\x02';
  if (this->ReceiveAbortImplementations == 0) goto LAB_146ed1719;
  pAVar3 = (this->AIOwner).field0_0x0.DebugPtr;
  *(uint *)&this->field_0xa0 = uVar2 | 0x180;
  if ((pAVar3 == (AAIController *)0x0) || ((this->ReceiveAbortImplementations & 2) == 0)) {
    if ((this->ReceiveAbortImplementations & 1) != 0) {
      local_res8 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
      pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveAbort)
      ;
      pTVar9 = &local_res8;
      goto LAB_146ed16fc;
    }
  }
  else {
    pUVar4 = (UObject *)pAVar3->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_18 = (this->AIOwner).field0_0x0;
    local_10 = pUVar4;
    pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveAbortAI)
    ;
    pTVar9 = &local_18;
LAB_146ed16fc:
    (**(code **)(this->_padding_ + 0x260))(this,pUVar8,pTVar9);
  }
  this->bStoreFinishResult = 0;
LAB_146ed1719:
  return (Type)(this->CurrentCallResult).Value;
}

// DescribeRuntimeValues @ 146edc550

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
UBTTask_BlueprintBase::DescribeRuntimeValues
          (UBTTask_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  UClass *this_00;
  UObject *pUVar1;
  
  this_00 = (UClass *)this->_padding_;
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UObject *)0x0) && (*(int *)&pUVar1[3].field_0x20 != 0)) {
    BlueprintNodeHelpers::DescribeRuntimeValues
              ((UObject *)this,
               (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&pUVar1[3].field_0x18,param_4);
  }
  return;
}

// ExecuteTask @ 146ee0b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_BlueprintBase::ExecuteTask
          (UBTTask_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  undefined1 *puVar1;
  AAIController *pAVar2;
  UObject *pUVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar uVar7;
  UFunction *pUVar8;
  uint uVar9;
  TObjectPtr<AAIController>_u_0 *pTVar10;
  TObjectPtr<AAIController>_u_0 local_res8;
  TObjectPtr<AAIController>_u_0 local_18;
  UObject *local_10;
  
  puVar1 = &this->field_0xa0;
  uVar7 = '\x01';
  if (ZPULL(*(undefined4 *)puVar1,1,2) != 0 || this->ReceiveExecuteImplementations != 0) {
    uVar7 = '\x03';
  }
  uVar9 = *(undefined4 *)puVar1 & 0xffffff7f;
  (this->CurrentCallResult).Value = uVar7;
  *(uint *)&this->field_0xa0 = uVar9;
  if (this->ReceiveExecuteImplementations == 0) goto LAB_146ee0c6c;
  pAVar2 = (this->AIOwner).field0_0x0.DebugPtr;
  *(uint *)&this->field_0xa0 = uVar9 | 0x100;
  if ((pAVar2 == (AAIController *)0x0) || ((this->ReceiveExecuteImplementations & 2) == 0)) {
    if ((this->ReceiveExecuteImplementations & 1) != 0) {
      local_res8 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
      pUVar8 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveExecute);
      pTVar10 = &local_res8;
      goto LAB_146ee0c4a;
    }
  }
  else {
    pUVar3 = (UObject *)pAVar2->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_18 = (this->AIOwner).field0_0x0;
    local_10 = pUVar3;
    pUVar8 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveExecuteAI);
    pTVar10 = &local_18;
LAB_146ee0c4a:
    (**(code **)(this->_padding_ + 0x260))(this,pUVar8,pTVar10);
  }
  this->bStoreFinishResult = 0;
LAB_146ee0c6c:
  return (Type)(this->CurrentCallResult).Value;
}

// FinishAbort @ 146ee3800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTTask_BlueprintBase::FinishAbort(UBTTask_BlueprintBase *this)

{
  int iVar1;
  UClass *pUVar2;
  UBTTaskNode *pUVar3;
  UBehaviorTreeComponent *this_00;
  
  this_00 = (UBehaviorTreeComponent *)this->_padding_;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146ee383b;
  }
  this_00 = (UBehaviorTreeComponent *)0x0;
LAB_146ee383b:
  if (this->bStoreFinishResult != 0) {
    (this->CurrentCallResult).Value = '\x02';
    return;
  }
  if ((this_00 != (UBehaviorTreeComponent *)0x0) && ((char)(this->bIsAborting << 7) < '\0')) {
    pUVar3 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(this_00,(UBTNode *)this);
    UBehaviorTreeComponent::OnTaskFinished(this_00,pUVar3,Aborted);
  }
  return;
}

// FinishExecute @ 146ee3890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTTask_BlueprintBase::FinishExecute(UBTTask_BlueprintBase *this,bool param_1)

{
  int iVar1;
  UClass *pUVar2;
  UBTTaskNode *pUVar3;
  UBehaviorTreeComponent *this_00;
  
  this_00 = (UBehaviorTreeComponent *)this->_padding_;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146ee38d3;
  }
  this_00 = (UBehaviorTreeComponent *)0x0;
LAB_146ee38d3:
  if (this->bStoreFinishResult != 0) {
    (this->CurrentCallResult).Value = !param_1;
    return;
  }
  if ((this_00 != (UBehaviorTreeComponent *)0x0) && (-1 < (char)(this->bIsAborting << 7))) {
    pUVar3 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(this_00,(UBTNode *)this);
    UBehaviorTreeComponent::OnTaskFinished(this_00,pUVar3,(uint)!param_1);
  }
  return;
}

// GetPrivateStaticClass @ 146ee86a0

UClass * __cdecl UBTTask_BlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_BlueprintBase",
               &Z_Registration_Info_UClass_UBTTask_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUBTTask_BlueprintBase,0xa8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_BlueprintBase>,
               InternalVTableHelperCtorCaller<UBTTask_BlueprintBase>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_BlueprintBase.InnerSingleton;
}

// GetStaticDescription @ 146eec970

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
UBTTask_BlueprintBase::GetStaticDescription
          (UBTTask_BlueprintBase *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  UClass *pUVar2;
  int iVar3;
  undefined1 *local_res8;
  FString local_28;
  code *local_18;
  undefined1 **local_10;
  
  UBehaviorTreeTypes::GetShortTypeName(__return_storage_ptr__,(UObject *)this);
  pUVar2 = (UClass *)this->_padding_;
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  if ((this->bShowPropertyDetails != 0) &&
     (pUVar1 = (pUVar2->ClassDefaultObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    pUVar2 = StaticClass();
    local_res8 = &pUVar1[3].field_0x18;
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

// InitializeFromAsset @ 146ef23e0

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
UBTTask_BlueprintBase::InitializeFromAsset(UBTTask_BlueprintBase *this,UBehaviorTree *param_1)

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

// IsTaskAborting @ 146ef3f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBTTask_BlueprintBase::IsTaskAborting(UBTTask_BlueprintBase *this)

{
  return this->bIsAborting;
}

// IsTaskExecuting @ 146ef3f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBTTask_BlueprintBase::IsTaskExecuting(UBTTask_BlueprintBase *this)

{
  int iVar1;
  Type TVar2;
  UClass *pUVar3;
  UBehaviorTreeComponent *this_00;
  
  this_00 = (UBehaviorTreeComponent *)this->_padding_;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146ef3f8b;
  }
  this_00 = (UBehaviorTreeComponent *)0x0;
LAB_146ef3f8b:
  TVar2 = UBehaviorTreeComponent::GetTaskStatus(this_00,(UBTTaskNode *)this);
  return TVar2 == Active;
}

// OnInstanceDestroyed @ 146ef8000

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
UBTTask_BlueprintBase::OnInstanceDestroyed
          (UBTTask_BlueprintBase *this,UBehaviorTreeComponent *param_1)

{
  UWorld *this_00;
  FLatentActionManager *this_01;
  FTimerManager *this_02;
  FWeakObjectPtr local_res10;
  UBTTask_BlueprintBase *local_res18;
  
  if (((((uint)param_1->_padding_ >> 0xf & 1) == 0) &&
      ((AActor *)param_1->_padding_ != (AActor *)0x0)) &&
     (this_00 = AActor::GetWorld((AActor *)param_1->_padding_), this_00 != (UWorld *)0x0)) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UBTTask_BlueprintBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UBTTask_BlueprintBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    FLatentActionManager::RemoveActionsForObject
              (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10);
    this_02 = UWorld::GetTimerManager(this_00);
    if (this != (UBTTask_BlueprintBase *)0x0) {
      FTimerManager::InternalClearAllTimers(this_02,this);
    }
  }
  return;
}

// OnTaskFinished @ 146ef9f80

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
UBTTask_BlueprintBase::OnTaskFinished
          (UBTTask_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  UWorld *this_00;
  FLatentActionManager *this_01;
  FTimerManager *this_02;
  FWeakObjectPtr local_res8;
  UBTTask_BlueprintBase *local_18 [2];
  
  (this->TickInterval).TimeLeft = 0.0;
  if ((((param_3 != InProgress) && (((uint)param_1->_padding_ >> 0xf & 1) == 0)) &&
      ((AActor *)param_1->_padding_ != (AActor *)0x0)) &&
     (this_00 = AActor::GetWorld((AActor *)param_1->_padding_), this_00 != (UWorld *)0x0)) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_18);
    FLatentActionManager::RemoveActionsForObject
              (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res8);
    this_02 = UWorld::GetTimerManager(this_00);
    FTimerManager::InternalClearAllTimers(this_02,this);
  }
  return;
}

// ReceiveAbort @ 146efbea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTTask_BlueprintBase::ReceiveAbort(UBTTask_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveAbort);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveAbortAI @ 146efbee0

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
UBTTask_BlueprintBase::ReceiveAbortAI
          (UBTTask_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveAbortAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveExecute @ 146efc050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTTask_BlueprintBase::ReceiveExecute(UBTTask_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveExecute);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveExecuteAI @ 146efc090

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
UBTTask_BlueprintBase::ReceiveExecuteAI
          (UBTTask_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveExecuteAI)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveTick @ 146efc460

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
UBTTask_BlueprintBase::ReceiveTick(UBTTask_BlueprintBase *this,AActor *param_1,float param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  float local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveTickAI @ 146efc550

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
UBTTask_BlueprintBase::ReceiveTickAI
          (UBTTask_BlueprintBase *this,AAIController *param_1,APawn *param_2,float param_3)

{
  UFunction *pUVar1;
  AAIController *local_28;
  APawn *local_20;
  float local_18;
  
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveTickAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// SetFinishOnMessage @ 146eff890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTTask_BlueprintBase::SetFinishOnMessage(UBTTask_BlueprintBase *this,FName param_1)

{
  int iVar1;
  UBehaviorTreeComponent *this_00;
  UClass *pUVar2;
  
  this_00 = (UBehaviorTreeComponent *)this->_padding_;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UBehaviorTreeComponent::RegisterMessageObserver(this_00,(UBTTaskNode *)this,param_1);
    }
  }
  return;
}

// SetFinishOnMessageWithId @ 146eff900

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
UBTTask_BlueprintBase::SetFinishOnMessageWithId
          (UBTTask_BlueprintBase *this,FName param_1,int param_2)

{
  int iVar1;
  UBehaviorTreeComponent *this_00;
  UClass *pUVar2;
  
  this_00 = (UBehaviorTreeComponent *)this->_padding_;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UBehaviorTreeComponent::RegisterMessageObserver
                (this_00,(UBTTaskNode *)this,param_1,(FAIRequestID)param_2);
    }
  }
  return;
}

// SetOwner @ 146effc10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTTask_BlueprintBase::SetOwner(UBTTask_BlueprintBase *this,AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ActorOwner).field0_0x0.DebugPtr = param_1;
LAB_146effc45:
    pUVar2 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146effc6a;
  }
  else {
    (this->ActorOwner).field0_0x0.DebugPtr = param_1;
    if (param_1 != (AActor *)0x0) goto LAB_146effc45;
  }
  param_1 = (AActor *)0x0;
LAB_146effc6a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((AAIController *)param_1 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)param_1;
  return;
}

// StaticRegisterNativesUBTTask_BlueprintBase @ 146f00d70

void __cdecl UBTTask_BlueprintBase::StaticRegisterNativesUBTTask_BlueprintBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UBTTask_BlueprintBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickTask @ 146f02150

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
UBTTask_BlueprintBase::TickTask
          (UBTTask_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
  AAIController *pAVar1;
  UObject *pUVar2;
  UFunction *pUVar3;
  float fVar4;
  TObjectPtr<AAIController>_u_0 local_38;
  UObject *local_30;
  float local_28;
  
  fVar4 = (this->TickInterval).TimeLeft - param_3;
  (this->TickInterval).TimeLeft = fVar4;
  if (fVar4 <= 0.0) {
    if (0.0 < (this->TickInterval).Interval) {
      param_3 = (this->TickInterval).Interval - (this->TickInterval).TimeLeft;
    }
    pAVar1 = (this->AIOwner).field0_0x0.DebugPtr;
    if ((pAVar1 == (AAIController *)0x0) || ((this->ReceiveTickImplementations & 2) == 0)) {
      if ((this->ReceiveTickImplementations & 1) != 0) {
        local_38 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
        local_30 = (UObject *)CONCAT44(local_30._4_4_,param_3);
        pUVar3 = UObject::FindFunctionChecked
                           ((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveTick);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_38);
      }
    }
    else {
      pUVar2 = (UObject *)pAVar1->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_38 = (this->AIOwner).field0_0x0;
      local_30 = pUVar2;
      local_28 = param_3;
      pUVar3 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UBTTask_BlueprintBase_ReceiveTickAI);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_38);
    }
    (this->TickInterval).TimeLeft = (this->TickInterval).Interval;
  }
  return;
}

// execFinishAbort @ 146f08810

void __cdecl UBTTask_BlueprintBase::execFinishAbort(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UClass *pUVar2;
  UBTTaskNode *pUVar3;
  UBehaviorTreeComponent *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UBehaviorTreeComponent **)&param_1->field_0x20;
  if (this != (UBehaviorTreeComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_146f0885e;
  }
  this = (UBehaviorTreeComponent *)0x0;
LAB_146f0885e:
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    param_1[3].field_0x10 = 2;
    return;
  }
  if ((this != (UBehaviorTreeComponent *)0x0) && ((char)*(uint *)(param_1 + 4) < '\0')) {
    pUVar3 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(this,(UBTNode *)param_1);
    UBehaviorTreeComponent::OnTaskFinished(this,pUVar3,Aborted);
  }
  return;
}

// execFinishExecute @ 146f088c0

void __cdecl
UBTTask_BlueprintBase::execFinishExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  UBTTaskNode *pUVar4;
  UBehaviorTreeComponent *this;
  bool bVar5;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar5 = local_res8[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UBehaviorTreeComponent **)&param_1->field_0x20;
  if (this != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146f08962;
  }
  this = (UBehaviorTreeComponent *)0x0;
LAB_146f08962:
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    param_1[3].field_0x10 = bVar5;
    return;
  }
  if ((this != (UBehaviorTreeComponent *)0x0) && (-1 < (char)*(uint *)(param_1 + 4))) {
    pUVar4 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(this,(UBTNode *)param_1);
    UBehaviorTreeComponent::OnTaskFinished(this,pUVar4,(uint)bVar5);
  }
  return;
}

// execIsTaskAborting @ 146f0acd0

void __cdecl
UBTTask_BlueprintBase::execIsTaskAborting(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)(*(uint *)(param_1 + 4) >> 7) & 1;
  return;
}

// execIsTaskExecuting @ 146f0ad00

void __cdecl
UBTTask_BlueprintBase::execIsTaskExecuting(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  Type TVar2;
  UClass *pUVar3;
  UBehaviorTreeComponent *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UBehaviorTreeComponent **)&param_1->field_0x20;
  if (this != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146f0ad56;
  }
  this = (UBehaviorTreeComponent *)0x0;
LAB_146f0ad56:
  TVar2 = UBehaviorTreeComponent::GetTaskStatus(this,(UBTTaskNode *)param_1);
  *(bool *)param_3 = TVar2 == Active;
  return;
}

// execSetFinishOnMessage @ 146f0c520

void __cdecl
UBTTask_BlueprintBase::execSetFinishOnMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UBehaviorTreeComponent *this;
  FName FVar3;
  UClass *pUVar4;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UBehaviorTreeComponent **)&param_1->field_0x20;
  if (this != (UBehaviorTreeComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      UBehaviorTreeComponent::RegisterMessageObserver(this,(UBTTaskNode *)param_1,FVar3);
    }
  }
  return;
}

// execSetFinishOnMessageWithId @ 146f0c5e0

void __cdecl
UBTTask_BlueprintBase::execSetFinishOnMessageWithId(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UBehaviorTreeComponent *this;
  FAIRequestID FVar3;
  FName FVar4;
  UClass *pUVar5;
  FAIRequestID local_res8 [2];
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0].RequestID = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar4 = local_res10;
  FVar3.RequestID = local_res8[0].RequestID;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UBehaviorTreeComponent **)&param_1->field_0x20;
  if (this != (UBehaviorTreeComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      UBehaviorTreeComponent::RegisterMessageObserver(this,(UBTTaskNode *)param_1,FVar4,FVar3);
    }
  }
  return;
}

