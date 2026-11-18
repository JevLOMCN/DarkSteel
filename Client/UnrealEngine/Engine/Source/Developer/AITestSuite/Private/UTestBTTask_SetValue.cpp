// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 8

// StaticClass @ 14700dd40

UClass * __cdecl UTestBTTask_SetValue::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_SetValue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_SetValue",
               &Z_Registration_Info_UClass_UTestBTTask_SetValue.InnerSingleton,
               StaticRegisterNativesUTestBTTask_SetValue,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_SetValue>,
               InternalVTableHelperCtorCaller<UTestBTTask_SetValue>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_SetValue.InnerSingleton;
}

// UTestBTTask_SetValue @ 14704b080

UTestBTTask_SetValue * __thiscall
UTestBTTask_SetValue::UTestBTTask_SetValue(UTestBTTask_SetValue *this,FVTableHelper *param_1)

{
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->KeyName).ComparisonIndex = 0;
  (this->KeyName).Number = 0;
  (this->OnAbortKeyName).ComparisonIndex = 0;
  (this->OnAbortKeyName).Number = 0;
  return this;
}

// UTestBTTask_SetValue @ 14704b0c0

UTestBTTask_SetValue * __thiscall
UTestBTTask_SetValue::UTestBTTask_SetValue(UTestBTTask_SetValue *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FName local_res8;
  FString local_18;
  
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->KeyName).ComparisonIndex = 0;
  (this->KeyName).Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OnAbortKeyName).ComparisonIndex = 0;
  (this->OnAbortKeyName).Number = 0;
  ::FString::FString(&local_18,"SetValue");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->TaskResult).Value = '\0';
  ::FName::FName(&local_res8,L"Int");
  this->KeyName = local_res8;
  (this->OnAbortKeyName).ComparisonIndex = 0;
  (this->OnAbortKeyName).Number = 0;
  this->Value = 1;
  this->OnAbortValue = 1;
  return this;
}

// ~UTestBTTask_SetValue @ 14704bb40

void __thiscall UTestBTTask_SetValue::~UTestBTTask_SetValue(UTestBTTask_SetValue *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 14704f160

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
UTestBTTask_SetValue::AbortTask
          (UTestBTTask_SetValue *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  UBlackboardComponent *this_00;
  bool bVar2;
  FKey local_res8;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(this->OnAbortKeyName).ComparisonIndex.Value);
  if (bVar2) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    iVar1 = this->OnAbortValue;
    UBlackboardComponent::GetKeyID(this_00,(FName *)&local_res8);
    UBlackboardComponent::SetValue<UBlackboardKeyType_Int>(this_00,local_res8,iVar1);
  }
  return Aborted;
}

// ExecuteTask @ 147051e10

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
UTestBTTask_SetValue::ExecuteTask
          (UTestBTTask_SetValue *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  UBlackboardComponent *this_00;
  FKey local_res8;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  iVar1 = this->Value;
  UBlackboardComponent::GetKeyID(this_00,(FName *)&local_res8);
  UBlackboardComponent::SetValue<UBlackboardKeyType_Int>(this_00,local_res8,iVar1);
  return (Type)(this->TaskResult).Value;
}

// GetPrivateStaticClass @ 1470530b0

UClass * __cdecl UTestBTTask_SetValue::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_SetValue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_SetValue",
               &Z_Registration_Info_UClass_UTestBTTask_SetValue.InnerSingleton,
               StaticRegisterNativesUTestBTTask_SetValue,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_SetValue>,
               InternalVTableHelperCtorCaller<UTestBTTask_SetValue>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_SetValue.InnerSingleton;
}

// StaticRegisterNativesUTestBTTask_SetValue @ 147059a20

void __cdecl UTestBTTask_SetValue::StaticRegisterNativesUTestBTTask_SetValue(void)

{
  return;
}

