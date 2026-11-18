// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146eae990

UClass * __cdecl UBTTask_FinishWithResult::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_FinishWithResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_FinishWithResult",
               &Z_Registration_Info_UClass_UBTTask_FinishWithResult.InnerSingleton,
               StaticRegisterNativesUBTTask_FinishWithResult,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_FinishWithResult>,
               InternalVTableHelperCtorCaller<UBTTask_FinishWithResult>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_FinishWithResult.InnerSingleton;
}

// UBTTask_FinishWithResult @ 146ec8b80

UBTTask_FinishWithResult * __thiscall
UBTTask_FinishWithResult::UBTTask_FinishWithResult
          (UBTTask_FinishWithResult *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FValueOrBBKey_Enum::FValueOrBBKey_Enum<enum_EBTNodeResult::Type>(&this->Result,Succeeded);
  return this;
}

// UBTTask_FinishWithResult @ 146ec8be0

UBTTask_FinishWithResult * __thiscall
UBTTask_FinishWithResult::UBTTask_FinishWithResult
          (UBTTask_FinishWithResult *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  UPackage *pUVar4;
  FString *pFVar5;
  FName local_res8;
  FString local_58;
  longlong local_48;
  int local_40;
  uchar local_3c;
  UEnum *local_38;
  FString local_30;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  plVar2 = &this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *plVar2 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FValueOrBBKey_Enum::FValueOrBBKey_Enum<enum_EBTNodeResult::Type>(&this->Result,Succeeded);
  ::FString::FString(&local_58,"FinishWithResult");
  if ((FString *)plVar2 != &local_58) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_58.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_58.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48 = 0;
  local_40 = CONCAT22(local_40._2_2_,0xffff);
  local_3c = '\0';
  if (Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EBTNodeResult,(UObject *)pUVar4,L"EBTNodeResult");
  }
  local_38 = Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_146ec8d00:
    if (local_38 != (UEnum *)0x0) {
      local_res8 = (FName)local_38->_padding_;
      ::FName::ToString(&local_res8,&local_30);
      goto LAB_146ec8d2c;
    }
  }
  else if (Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton != (UEnum *)0x0) {
    UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton);
    goto LAB_146ec8d00;
  }
  ::FString::FString(&local_30,L"None");
LAB_146ec8d2c:
  (this->Result)._padding_ = local_48;
  (this->Result)._padding_ = local_40;
  (this->Result).DefaultValue = local_3c;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  (this->Result).EnumType.field0_0x0.DebugPtr = local_38;
  pFVar5 = &(this->Result).NativeEnumTypeName;
  if (pFVar5 != &local_30) {
    pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_30.Data.AllocatorInstance.Data;
    (this->Result).NativeEnumTypeName.Data.ArrayNum = local_30.Data.ArrayNum;
    (this->Result).NativeEnumTypeName.Data.ArrayMax = local_30.Data.ArrayMax;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UBTTask_FinishWithResult @ 146ecd4e0

void __thiscall UBTTask_FinishWithResult::~UBTTask_FinishWithResult(UBTTask_FinishWithResult *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->Result).NativeEnumTypeName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee0c80

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
UBTTask_FinishWithResult::ExecuteTask
          (UBTTask_FinishWithResult *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  byte bVar1;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    bVar1 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->Result,
                       (FKey *)&(this->Result)._padding_,&(this->Result).DefaultValue);
    return (Type)bVar1;
  }
  return (Type)(this->Result).DefaultValue;
}

// GetPrivateStaticClass @ 146ee8760

UClass * __cdecl UBTTask_FinishWithResult::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_FinishWithResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_FinishWithResult",
               &Z_Registration_Info_UClass_UBTTask_FinishWithResult.InnerSingleton,
               StaticRegisterNativesUBTTask_FinishWithResult,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_FinishWithResult>,
               InternalVTableHelperCtorCaller<UBTTask_FinishWithResult>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_FinishWithResult.InnerSingleton;
}

// GetStaticDescription @ 146eeca70

FString * __thiscall
UBTTask_FinishWithResult::GetStaticDescription
          (UBTTask_FinishWithResult *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  FValueOrBBKey_Enum::ToString(&this->Result,&local_18);
  UBehaviorTreeTypes::GetShortTypeName(&local_28,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBTTask_FinishWithResult @ 146f00db0

void __cdecl UBTTask_FinishWithResult::StaticRegisterNativesUBTTask_FinishWithResult(void)

{
  return;
}

