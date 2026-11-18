// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 25

// StaticClass @ 146eacae0

UClass * __cdecl UBTService_BlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService_BlueprintBase",
               &Z_Registration_Info_UClass_UBTService_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUBTService_BlueprintBase,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTService_BlueprintBase>,
               InternalVTableHelperCtorCaller<UBTService_BlueprintBase>,local_res8,
               UBTService::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService_BlueprintBase.InnerSingleton;
}

// UBTService_BlueprintBase @ 146ec7f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBTService_BlueprintBase * __thiscall
UBTService_BlueprintBase::UBTService_BlueprintBase
          (UBTService_BlueprintBase *this,FVTableHelper *param_1)

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
  (this->PropertyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).ArrayNum = 0;
  (this->PropertyData).ArrayMax = 0;
  return this;
}

// UBTService_BlueprintBase @ 146ec7f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBTService_BlueprintBase * __thiscall
UBTService_BlueprintBase::UBTService_BlueprintBase
          (UBTService_BlueprintBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  FName FVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  FName *pFVar9;
  uint uVar10;
  FName local_res8;
  FName local_res18 [2];
  
  UBTService::UBTService((UBTService *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->ActorOwner).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->PropertyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).ArrayNum = 0;
  (this->PropertyData).ArrayMax = 0;
  pUVar8 = GetPrivateStaticClass();
  pFVar9 = ::FName::FName(&local_res8,L"ReceiveTickAI");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(local_res18,L"ReceiveTick");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar9,FVar3,(UObject *)this,pUVar8);
  *(uint *)&this->field_0x90 =
       (iVar6 * 4 ^ *(uint *)&this->field_0x90) & 0xc ^ *(uint *)&this->field_0x90;
  pFVar9 = ::FName::FName(&local_res8,L"ReceiveActivationAI");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(local_res18,L"ReceiveActivation");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar9,FVar3,(UObject *)this,pUVar8);
  *(uint *)&this->field_0x90 =
       (iVar6 << 4 ^ *(uint *)&this->field_0x90) & 0x30 ^ *(uint *)&this->field_0x90;
  pFVar9 = ::FName::FName(&local_res8,L"ReceiveDeactivationAI");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(local_res18,L"ReceiveDeactivation");
  iVar6 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar9,FVar3,(UObject *)this,pUVar8);
  *(uint *)&this->field_0x90 =
       (iVar6 << 6 ^ *(uint *)&this->field_0x90) & 0xc0 ^ *(uint *)&this->field_0x90;
  pFVar9 = ::FName::FName(&local_res8,L"ReceiveSearchStartAI");
  FVar3 = *pFVar9;
  pFVar9 = ::FName::FName(local_res18,L"ReceiveSearchStart");
  uVar7 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*pFVar9,FVar3,(UObject *)this,pUVar8);
  uVar2 = *(undefined4 *)&this->field_0x90;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffb;
  uVar10 = (uVar7 << 8 ^ uVar2) & 0x300 ^ uVar2;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | -(uint)((uVar7 & 3) != 0) & 4;
  lVar5 = this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  *(uint *)&this->field_0x90 = uVar10 | 1;
  *(byte *)&this->_padding_ =
       (uVar10 & 0x30) != 0 | (byte)lVar5 & 0xf9 | -(ZPULL(uVar2,6,2) != 0) & 2U |
       -(this->ReceiveTickImplementations != 0) & 4U;
  if ((this->_padding_ & 0x10) != 0) {
    BlueprintNodeHelpers::CollectPropertyData((UObject *)this,pUVar8,&this->PropertyData);
  }
  return this;
}

// ~UBTService_BlueprintBase @ 146ecd2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTService_BlueprintBase::~UBTService_BlueprintBase(UBTService_BlueprintBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->PropertyData).AllocatorInstance.Data;
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

// DescribeRuntimeValues @ 146edc4e0

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
UBTService_BlueprintBase::DescribeRuntimeValues
          (UBTService_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  UClass *this_00;
  UObject *pUVar1;
  
  this_00 = (UClass *)this->_padding_;
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UObject *)0x0) && (*(int *)&pUVar1[3].field_0x10 != 0)) {
    StaticClass();
    BlueprintNodeHelpers::DescribeRuntimeValues
              ((UObject *)this,
               (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&pUVar1[3].field_0x8,param_4);
  }
  return;
}

// GetPrivateStaticClass @ 146ee82e0

UClass * __cdecl UBTService_BlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService_BlueprintBase",
               &Z_Registration_Info_UClass_UBTService_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUBTService_BlueprintBase,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTService_BlueprintBase>,
               InternalVTableHelperCtorCaller<UBTService_BlueprintBase>,local_res8,
               UBTService::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService_BlueprintBase.InnerSingleton;
}

// GetStaticServiceDescription @ 146eee600

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
UBTService_BlueprintBase::GetStaticServiceDescription
          (UBTService_BlueprintBase *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  FString *pFVar3;
  UClass *pUVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_res8;
  FString local_48;
  undefined1 local_38 [16];
  
  bVar5 = false;
  local_res8 = (undefined1 *)((ulonglong)local_res8 & 0xffffffff00000000);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pUVar4 = (UClass *)this->_padding_;
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar2 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    iVar6 = 0;
    if (this->bShowEventDetails == 0) {
      if (this->ReceiveTickImplementations != 0) {
        UBTService::GetStaticTickIntervalDescription((UBTService *)this,&local_48);
        iVar7 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar7 = iVar6;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      ::FString::AppendChar(__return_storage_ptr__,L'\n');
    }
    else {
      if (this->ReceiveTickImplementations != 0) {
        pFVar3 = UBTService::GetStaticTickIntervalDescription
                           ((UBTService *)this,(FString *)local_38);
        if ((pFVar3->Data).ArrayNum == 0) {
          bVar5 = true;
        }
        else {
          bVar5 = true;
        }
      }
      ::FString::PrintfImpl(&local_48,L"%s, %s, %s, %s\n");
      iVar7 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar7 = iVar6;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) && ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0))
      {
        FMemory::Free((void *)local_38._0_8_);
      }
    }
    if (this->bShowPropertyDetails != 0) {
      pUVar4 = StaticClass();
      local_res8 = &pUVar2[3].field_0x8;
      local_38._8_8_ = &local_res8;
      local_38._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`BlueprintNodeHelpers::CollectPropertyDescription'::__l2::<lambda_1>,bool,FProperty_*>
           ::Call;
      BlueprintNodeHelpers::CollectPropertyDescription
                (&local_48,(UObject *)this,pUVar4,
                 (TFunctionRef<bool___cdecl(FProperty_*)> *)local_38);
      iVar7 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar7 = iVar6;
      }
      if (iVar7 != 0) {
        ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
        iVar7 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar7 = iVar6;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef2230

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
UBTService_BlueprintBase::InitializeFromAsset(UBTService_BlueprintBase *this,UBehaviorTree *param_1)

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

// IsServiceActive @ 146ef3ed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBTService_BlueprintBase::IsServiceActive(UBTService_BlueprintBase *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UBehaviorTreeComponent *this_00;
  
  this_00 = (UBehaviorTreeComponent *)this->_padding_;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146ef3f0b;
  }
  this_00 = (UBehaviorTreeComponent *)0x0;
LAB_146ef3f0b:
  bVar2 = UBehaviorTreeComponent::IsAuxNodeActive(this_00,(UBTAuxiliaryNode *)this);
  return bVar2;
}

// OnBecomeRelevant @ 146ef5f30

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
UBTService_BlueprintBase::OnBecomeRelevant
          (UBTService_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  AAIController *pAVar1;
  UObject *pUVar2;
  UFunction *pUVar3;
  TObjectPtr<AAIController>_u_0 *pTVar4;
  TObjectPtr<AAIController>_u_0 local_res8;
  TObjectPtr<AAIController>_u_0 local_18;
  UObject *local_10;
  
  pAVar1 = (this->AIOwner).field0_0x0.DebugPtr;
  if ((pAVar1 == (AAIController *)0x0) || ((this->ReceiveActivationImplementations & 2) == 0)) {
    if ((this->ReceiveActivationImplementations & 1) == 0) {
      return;
    }
    local_res8 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveActivation);
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
                       ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveActivationAI);
    pTVar4 = &local_18;
  }
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,pTVar4);
  return;
}

// OnCeaseRelevant @ 146ef6fe0

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
UBTService_BlueprintBase::OnCeaseRelevant
          (UBTService_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  AAIController *pAVar1;
  UObject *pUVar2;
  UWorld *this_00;
  FLatentActionManager *this_01;
  FTimerManager *this_02;
  UFunction *pUVar3;
  TObjectPtr<AActor>_u_0 local_res10 [2];
  UBTService_BlueprintBase *local_res20;
  FString local_58;
  FString local_48;
  TObjectPtr<AAIController>_u_0 local_38;
  UObject *local_30;
  
  if ((((uint)param_1->_padding_ >> 0xf & 1) == 0) && (param_1->_padding_ != 0)) {
    if (((((uint)param_1->_padding_ >> 0xf & 1) == 0) &&
        ((AActor *)param_1->_padding_ != (AActor *)0x0)) &&
       (this_00 = AActor::GetWorld((AActor *)param_1->_padding_), this_00 != (UWorld *)0x0)) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UBTService_BlueprintBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res10[0].DebugPtr = (AActor *)0x0;
      local_res20 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UBTService_BlueprintBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&local_res10[0].ObjectPtr,(FObjectPtr)&local_res20);
      FLatentActionManager::RemoveActionsForObject
                (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10[0].ObjectPtr.field0_0x0
                );
      this_02 = UWorld::GetTimerManager(this_00);
      if (this != (UBTService_BlueprintBase *)0x0) {
        FTimerManager::InternalClearAllTimers(this_02,this);
      }
    }
    pAVar1 = (this->AIOwner).field0_0x0.DebugPtr;
    if ((pAVar1 != (AAIController *)0x0) && ((this->ReceiveDeactivationImplementations & 2) != 0)) {
      pUVar2 = (UObject *)pAVar1->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_38 = (this->AIOwner).field0_0x0;
      local_30 = pUVar2;
      pUVar3 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveDeactivationAI);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_38);
      return;
    }
    if ((this->ReceiveDeactivationImplementations & 1) != 0) {
      local_res10[0] = (this->ActorOwner).field0_0x0;
      pUVar3 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveDeactivation);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar3,local_res10);
      return;
    }
  }
  else if (2 < (byte)LogBehaviorTree._0_1_) {
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res10[0] = *(TObjectPtr<AActor>_u_0 *)(param_1->_padding_ + 0x18);
      ::FName::ToString((FName *)&local_res10[0].ObjectPtr,&local_48);
    }
    local_res10[0] = (TObjectPtr<AActor>_u_0)param_1->_padding_;
    ::FName::ToString((FName *)&local_res10[0].ObjectPtr,(FString *)&local_38.ObjectPtr);
    if (this == (UBTService_BlueprintBase *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res10[0] = (TObjectPtr<AActor>_u_0)this->_padding_;
      ::FName::ToString((FName *)&local_res10[0].ObjectPtr,&local_58);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.DebugPtr != (AAIController *)0x0) {
      FMemory::Free(local_38.DebugPtr);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnInstanceDestroyed @ 146ef7f20

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
UBTService_BlueprintBase::OnInstanceDestroyed
          (UBTService_BlueprintBase *this,UBehaviorTreeComponent *param_1)

{
  UWorld *this_00;
  FLatentActionManager *this_01;
  FTimerManager *this_02;
  FWeakObjectPtr local_res10;
  UBTService_BlueprintBase *local_res18;
  
  if (((((uint)param_1->_padding_ >> 0xf & 1) == 0) &&
      ((AActor *)param_1->_padding_ != (AActor *)0x0)) &&
     (this_00 = AActor::GetWorld((AActor *)param_1->_padding_), this_00 != (UWorld *)0x0)) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UBTService_BlueprintBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UBTService_BlueprintBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    FLatentActionManager::RemoveActionsForObject
              (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10);
    this_02 = UWorld::GetTimerManager(this_00);
    if (this != (UBTService_BlueprintBase *)0x0) {
      FTimerManager::InternalClearAllTimers(this_02,this);
    }
  }
  return;
}

// OnSearchStart @ 146ef9ca0

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
UBTService_BlueprintBase::OnSearchStart
          (UBTService_BlueprintBase *this,FBehaviorTreeSearchData *param_1)

{
  undefined1 *puVar1;
  AAIController *pAVar2;
  UObject *pUVar3;
  UFunction *pUVar4;
  TObjectPtr<AAIController>_u_0 *pTVar5;
  TObjectPtr<AAIController>_u_0 local_res8;
  TObjectPtr<AAIController>_u_0 local_18;
  UObject *local_10;
  
  if (this->ReceiveSearchStartImplementations != 0) {
    pAVar2 = (this->AIOwner).field0_0x0.DebugPtr;
    if ((pAVar2 == (AAIController *)0x0) || ((this->ReceiveSearchStartImplementations & 2) == 0)) {
      if ((this->ReceiveSearchStartImplementations & 1) == 0) {
        return;
      }
      local_res8 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
      pUVar4 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveSearchStart);
      pTVar5 = &local_res8;
    }
    else {
      pUVar3 = (UObject *)pAVar2->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_18 = (this->AIOwner).field0_0x0;
      local_10 = pUVar3;
      pUVar4 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveSearchStartAI);
      pTVar5 = &local_18;
    }
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,pTVar5);
  }
  return;
}

// ReceiveActivation @ 146efbf30

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
UBTService_BlueprintBase::ReceiveActivation(UBTService_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveActivation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveActivationAI @ 146efbf70

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
UBTService_BlueprintBase::ReceiveActivationAI
          (UBTService_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveActivationAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveDeactivation @ 146efbfc0

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
UBTService_BlueprintBase::ReceiveDeactivation(UBTService_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveDeactivation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveDeactivationAI @ 146efc000

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
UBTService_BlueprintBase::ReceiveDeactivationAI
          (UBTService_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveDeactivationAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveSearchStart @ 146efc330

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
UBTService_BlueprintBase::ReceiveSearchStart(UBTService_BlueprintBase *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveSearchStart);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveSearchStartAI @ 146efc370

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
UBTService_BlueprintBase::ReceiveSearchStartAI
          (UBTService_BlueprintBase *this,AAIController *param_1,APawn *param_2)

{
  UFunction *pUVar1;
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveSearchStartAI);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveTick @ 146efc410

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
UBTService_BlueprintBase::ReceiveTick(UBTService_BlueprintBase *this,AActor *param_1,float param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  float local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceiveTickAI @ 146efc500

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
UBTService_BlueprintBase::ReceiveTickAI
          (UBTService_BlueprintBase *this,AAIController *param_1,APawn *param_2,float param_3)

{
  UFunction *pUVar1;
  AAIController *local_28;
  APawn *local_20;
  float local_18;
  
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveTickAI)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// SetOwner @ 146effb80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBTService_BlueprintBase::SetOwner(UBTService_BlueprintBase *this,AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ActorOwner).field0_0x0.DebugPtr = param_1;
LAB_146effbb5:
    pUVar2 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146effbda;
  }
  else {
    (this->ActorOwner).field0_0x0.DebugPtr = param_1;
    if (param_1 != (AActor *)0x0) goto LAB_146effbb5;
  }
  param_1 = (AActor *)0x0;
LAB_146effbda:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((AAIController *)param_1 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)param_1;
  return;
}

// StaticRegisterNativesUBTService_BlueprintBase @ 146f00cf0

void __cdecl UBTService_BlueprintBase::StaticRegisterNativesUBTService_BlueprintBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UBTService_BlueprintBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickNode @ 146f01f80

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
UBTService_BlueprintBase::TickNode
          (UBTService_BlueprintBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  AAIController *pAVar1;
  UObject *pUVar2;
  UFunction *pUVar3;
  TObjectPtr<AAIController>_u_0 local_38;
  UObject *local_30;
  float local_28;
  
  (**(code **)(this->_padding_ + 0x328))();
  pAVar1 = (this->AIOwner).field0_0x0.DebugPtr;
  if ((pAVar1 == (AAIController *)0x0) || ((this->ReceiveTickImplementations & 2) == 0)) {
    if ((this->ReceiveTickImplementations & 1) == 0) {
      return;
    }
    local_38 = *(TObjectPtr<AAIController>_u_0 *)&(this->ActorOwner).field0_0x0;
    local_30 = (UObject *)CONCAT44(local_30._4_4_,param_3);
    pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveTick)
    ;
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
                       ((UObject *)this,NAME_UBTService_BlueprintBase_ReceiveTickAI);
  }
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_38);
  return;
}

// execIsServiceActive @ 146f0ac50

void __cdecl
UBTService_BlueprintBase::execIsServiceActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UBehaviorTreeComponent *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UBehaviorTreeComponent **)&param_1->field_0x20;
  if (this != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146f0aca6;
  }
  this = (UBehaviorTreeComponent *)0x0;
LAB_146f0aca6:
  bVar2 = UBehaviorTreeComponent::IsAuxNodeActive(this,(UBTAuxiliaryNode *)param_1);
  *(bool *)param_3 = bVar2;
  return;
}

