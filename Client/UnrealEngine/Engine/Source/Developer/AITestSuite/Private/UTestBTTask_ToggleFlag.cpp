// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 7

// StaticClass @ 147014280

UClass * __cdecl UTestBTTask_ToggleFlag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_ToggleFlag",
               &Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.InnerSingleton,
               StaticRegisterNativesUTestBTTask_ToggleFlag,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_ToggleFlag>,
               InternalVTableHelperCtorCaller<UTestBTTask_ToggleFlag>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.InnerSingleton;
}

// UTestBTTask_ToggleFlag @ 14704b410

UTestBTTask_ToggleFlag * __thiscall
UTestBTTask_ToggleFlag::UTestBTTask_ToggleFlag(UTestBTTask_ToggleFlag *this,FVTableHelper *param_1)

{
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->KeyName).ComparisonIndex = 0;
  (this->KeyName).Number = 0;
  return this;
}

// UTestBTTask_ToggleFlag @ 14704b450

UTestBTTask_ToggleFlag * __thiscall
UTestBTTask_ToggleFlag::UTestBTTask_ToggleFlag
          (UTestBTTask_ToggleFlag *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FName local_res8;
  FString local_18;
  
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->KeyName).ComparisonIndex = 0;
  (this->KeyName).Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
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
  this->NumToggles = 1;
  return this;
}

// ~UTestBTTask_ToggleFlag @ 14704bba0

void __thiscall UTestBTTask_ToggleFlag::~UTestBTTask_ToggleFlag(UTestBTTask_ToggleFlag *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 147052140

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
UTestBTTask_ToggleFlag::ExecuteTask
          (UTestBTTask_ToggleFlag *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  UBlackboardComponent *this_00;
  bool bVar1;
  int iVar2;
  FKey local_res8;
  
  iVar2 = 0;
  if (this->NumToggles < 1) {
    return (Type)(this->TaskResult).Value;
  }
  do {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    bVar1 = UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>(this_00,&this->KeyName);
    UBlackboardComponent::GetKeyID(this_00,(FName *)&local_res8);
    UBlackboardComponent::SetValue<UBlackboardKeyType_Bool>(this_00,local_res8,!bVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < this->NumToggles);
  return (Type)(this->TaskResult).Value;
}

// GetPrivateStaticClass @ 1470532f0

UClass * __cdecl UTestBTTask_ToggleFlag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_ToggleFlag",
               &Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.InnerSingleton,
               StaticRegisterNativesUTestBTTask_ToggleFlag,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_ToggleFlag>,
               InternalVTableHelperCtorCaller<UTestBTTask_ToggleFlag>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.InnerSingleton;
}

// StaticRegisterNativesUTestBTTask_ToggleFlag @ 147059a50

void __cdecl UTestBTTask_ToggleFlag::StaticRegisterNativesUTestBTTask_ToggleFlag(void)

{
  return;
}

