// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 8

// StaticClass @ 14700b020

UClass * __cdecl UTestBTTask_SetFlag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_SetFlag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_SetFlag",
               &Z_Registration_Info_UClass_UTestBTTask_SetFlag.InnerSingleton,
               StaticRegisterNativesUTestBTTask_SetFlag,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_SetFlag>,
               InternalVTableHelperCtorCaller<UTestBTTask_SetFlag>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_SetFlag.InnerSingleton;
}

// UTestBTTask_SetFlag @ 14704af50

UTestBTTask_SetFlag * __thiscall
UTestBTTask_SetFlag::UTestBTTask_SetFlag(UTestBTTask_SetFlag *this,FVTableHelper *param_1)

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

// UTestBTTask_SetFlag @ 14704af90

UTestBTTask_SetFlag * __thiscall
UTestBTTask_SetFlag::UTestBTTask_SetFlag(UTestBTTask_SetFlag *this,FObjectInitializer *param_1)

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
  ::FString::FString(&local_18,"Log");
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
  ::FName::FName(&local_res8,L"Bool1");
  this->KeyName = local_res8;
  (this->OnAbortKeyName).ComparisonIndex = 0;
  (this->OnAbortKeyName).Number = 0;
  this->bValue = true;
  this->bOnAbortValue = true;
  return this;
}

// ~UTestBTTask_SetFlag @ 14704bb20

void __thiscall UTestBTTask_SetFlag::~UTestBTTask_SetFlag(UTestBTTask_SetFlag *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 14704f0f0

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
UTestBTTask_SetFlag::AbortTask
          (UTestBTTask_SetFlag *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  UBlackboardComponent *this_00;
  bool bVar1;
  FKey local_res8;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->OnAbortKeyName).ComparisonIndex.Value);
  if (bVar1) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    bVar1 = this->bOnAbortValue;
    UBlackboardComponent::GetKeyID(this_00,(FName *)&local_res8);
    UBlackboardComponent::SetValue<UBlackboardKeyType_Bool>(this_00,local_res8,bVar1);
  }
  return Aborted;
}

// ExecuteTask @ 147051db0

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
UTestBTTask_SetFlag::ExecuteTask
          (UTestBTTask_SetFlag *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  bool bVar1;
  UBlackboardComponent *this_00;
  FKey local_res8;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  bVar1 = this->bValue;
  UBlackboardComponent::GetKeyID(this_00,(FName *)&local_res8);
  UBlackboardComponent::SetValue<UBlackboardKeyType_Bool>(this_00,local_res8,bVar1);
  return (Type)(this->TaskResult).Value;
}

// GetPrivateStaticClass @ 147052ff0

UClass * __cdecl UTestBTTask_SetFlag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_SetFlag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_SetFlag",
               &Z_Registration_Info_UClass_UTestBTTask_SetFlag.InnerSingleton,
               StaticRegisterNativesUTestBTTask_SetFlag,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_SetFlag>,
               InternalVTableHelperCtorCaller<UTestBTTask_SetFlag>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_SetFlag.InnerSingleton;
}

// StaticRegisterNativesUTestBTTask_SetFlag @ 147059a10

void __cdecl UTestBTTask_SetFlag::StaticRegisterNativesUTestBTTask_SetFlag(void)

{
  return;
}

