// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146eada00

UClass * __cdecl UBTTask_SetTagCooldown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetTagCooldown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetTagCooldown",
               &Z_Registration_Info_UClass_UBTTask_SetTagCooldown.InnerSingleton,
               StaticRegisterNativesUBTTask_SetTagCooldown,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetTagCooldown>,
               InternalVTableHelperCtorCaller<UBTTask_SetTagCooldown>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetTagCooldown.InnerSingleton;
}

// UBTTask_SetTagCooldown @ 146ecb3f0

UBTTask_SetTagCooldown * __thiscall
UBTTask_SetTagCooldown::UBTTask_SetTagCooldown(UBTTask_SetTagCooldown *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CooldownTag).TagName = (FName)0x0;
  (this->bAddToExistingDuration)._padding_ = 0;
  *(undefined2 *)&(this->bAddToExistingDuration)._padding_ = 0xffff;
  (this->bAddToExistingDuration).DefaultValue = false;
  (this->CooldownDuration)._padding_ = 0;
  *(undefined2 *)&(this->CooldownDuration)._padding_ = 0xffff;
  (this->CooldownDuration).DefaultValue = 0.0;
  return this;
}

// UBTTask_SetTagCooldown @ 146ecb470

UBTTask_SetTagCooldown * __thiscall
UBTTask_SetTagCooldown::UBTTask_SetTagCooldown
          (UBTTask_SetTagCooldown *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FString local_28;
  undefined2 uStack_e;
  
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
  (this->CooldownTag).TagName = (FName)0x0;
  (this->bAddToExistingDuration)._padding_ = 0;
  *(undefined2 *)&(this->bAddToExistingDuration)._padding_ = 0xffff;
  (this->bAddToExistingDuration).DefaultValue = false;
  (this->CooldownDuration)._padding_ = 0;
  *(undefined2 *)&(this->CooldownDuration)._padding_ = 0xffff;
  (this->CooldownDuration).DefaultValue = 0.0;
  ::FString::FString(&local_28,"Set Tag Cooldown");
  if ((FString *)plVar2 != &local_28) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_28.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_28.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->CooldownDuration)._padding_ = 0;
  (this->CooldownDuration)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->CooldownDuration).DefaultValue = 5.0;
  (this->bAddToExistingDuration)._padding_ = 0;
  (this->bAddToExistingDuration)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->bAddToExistingDuration).DefaultValue = (bool)(char)0x40a00000;
  *(int3 *)&(this->bAddToExistingDuration).field_0xd = (int3)(0x40a00000 >> 8);
  return this;
}

// ~UBTTask_SetTagCooldown @ 146ecdb00

void __thiscall UBTTask_SetTagCooldown::~UBTTask_SetTagCooldown(UBTTask_SetTagCooldown *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee3250

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
UBTTask_SetTagCooldown::ExecuteTask
          (UBTTask_SetTagCooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  bool bVar1;
  float fVar2;
  
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    bVar1 = (this->bAddToExistingDuration).DefaultValue;
  }
  else {
    bVar1 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                      ((UBlackboardComponent *)param_1->_padding_,
                       (FName *)&this->bAddToExistingDuration,
                       (FKey *)&(this->bAddToExistingDuration)._padding_,
                       &(this->bAddToExistingDuration).DefaultValue);
  }
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    fVar2 = (this->CooldownDuration).DefaultValue;
  }
  else {
    fVar2 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->CooldownDuration,
                       (FKey *)&(this->CooldownDuration)._padding_,
                       &(this->CooldownDuration).DefaultValue);
  }
  UBehaviorTreeComponent::AddCooldownTagDuration
            (param_1,(FGameplayTag)(this->CooldownTag).TagName,fVar2,bVar1);
  return Succeeded;
}

// GetPrivateStaticClass @ 146ee97e0

UClass * __cdecl UBTTask_SetTagCooldown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetTagCooldown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetTagCooldown",
               &Z_Registration_Info_UClass_UBTTask_SetTagCooldown.InnerSingleton,
               StaticRegisterNativesUBTTask_SetTagCooldown,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetTagCooldown>,
               InternalVTableHelperCtorCaller<UBTTask_SetTagCooldown>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetTagCooldown.InnerSingleton;
}

// GetStaticDescription @ 146eee2d0

FString * __thiscall
UBTTask_SetTagCooldown::GetStaticDescription
          (UBTTask_SetTagCooldown *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((this->CooldownDuration)._padding_ == 0) {
    ::FString::PrintfImpl(&local_38,L"%.2f");
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)&this->CooldownDuration,&local_38);
  }
  ::FName::ToString(&(this->CooldownTag).TagName,&local_18);
  UBehaviorTreeTypes::GetShortTypeName(&local_28,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s: %s s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBTTask_SetTagCooldown @ 146f00f10

void __cdecl UBTTask_SetTagCooldown::StaticRegisterNativesUBTTask_SetTagCooldown(void)

{
  return;
}

