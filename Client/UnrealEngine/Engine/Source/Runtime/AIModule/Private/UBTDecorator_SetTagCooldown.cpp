// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146eaab20

UClass * __cdecl UBTDecorator_SetTagCooldown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_SetTagCooldown",
               &Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.InnerSingleton,
               StaticRegisterNativesUBTDecorator_SetTagCooldown,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_SetTagCooldown>,
               InternalVTableHelperCtorCaller<UBTDecorator_SetTagCooldown>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.InnerSingleton;
}

// UBTDecorator_SetTagCooldown @ 146ec7690

UBTDecorator_SetTagCooldown * __thiscall
UBTDecorator_SetTagCooldown::UBTDecorator_SetTagCooldown
          (UBTDecorator_SetTagCooldown *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CooldownTag).TagName = (FName)0x0;
  (this->CooldownDuration)._padding_ = 0;
  *(undefined2 *)&(this->CooldownDuration)._padding_ = 0xffff;
  *(undefined8 *)&(this->CooldownDuration).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->bAddToExistingDuration)._padding_ + 4) = 0;
  *(undefined2 *)&(this->bAddToExistingDuration)._padding_ = 0xffff;
  (this->bAddToExistingDuration).DefaultValue = false;
  return this;
}

// UBTDecorator_SetTagCooldown @ 146ec7700

UBTDecorator_SetTagCooldown * __thiscall
UBTDecorator_SetTagCooldown::UBTDecorator_SetTagCooldown
          (UBTDecorator_SetTagCooldown *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FString local_28;
  undefined2 uStack_e;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  plVar2 = &this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  *plVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf0;
  *(undefined4 *)&this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffff47 | 0x47;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CooldownTag).TagName = (FName)0x0;
  (this->CooldownDuration)._padding_ = 0;
  *(undefined2 *)&(this->CooldownDuration)._padding_ = 0xffff;
  *(undefined8 *)&(this->CooldownDuration).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->bAddToExistingDuration)._padding_ + 4) = 0;
  *(undefined2 *)&(this->bAddToExistingDuration)._padding_ = 0xffff;
  (this->bAddToExistingDuration).DefaultValue = false;
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
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf8;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffd0 | 0x10;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->bAddToExistingDuration)._padding_ = 0;
  (this->bAddToExistingDuration)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->bAddToExistingDuration).DefaultValue = (bool)(char)0x40a00000;
  *(int3 *)&(this->bAddToExistingDuration).field_0xd = (int3)(0x40a00000 >> 8);
  (this->CooldownDuration)._padding_ = 0;
  (this->CooldownDuration)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->CooldownDuration).DefaultValue = 5.0;
  return this;
}

// ~UBTDecorator_SetTagCooldown @ 146ecd0b0

void __thiscall
UBTDecorator_SetTagCooldown::~UBTDecorator_SetTagCooldown(UBTDecorator_SetTagCooldown *this)

{
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146ee7db0

UClass * __cdecl UBTDecorator_SetTagCooldown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_SetTagCooldown",
               &Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.InnerSingleton,
               StaticRegisterNativesUBTDecorator_SetTagCooldown,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_SetTagCooldown>,
               InternalVTableHelperCtorCaller<UBTDecorator_SetTagCooldown>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.InnerSingleton;
}

// GetStaticDescription @ 146eec110

FString * __thiscall
UBTDecorator_SetTagCooldown::GetStaticDescription
          (UBTDecorator_SetTagCooldown *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  if ((this->CooldownDuration)._padding_ == 0) {
    ::FString::PrintfImpl(&local_28,L"%.2f");
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)&this->CooldownDuration,&local_28);
  }
  ::FName::ToString(&(this->CooldownTag).TagName,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: set to %s s after execution");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnNodeDeactivation @ 146ef8ec0

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
UBTDecorator_SetTagCooldown::OnNodeDeactivation
          (UBTDecorator_SetTagCooldown *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  float *pfVar1;
  UBehaviorTreeComponent *this_00;
  UBlackboardComponent *pUVar2;
  bool bVar3;
  float fVar4;
  
  this_00 = param_1->OwnerComp;
  pUVar2 = (UBlackboardComponent *)this_00->_padding_;
  if (pUVar2 == (UBlackboardComponent *)0x0) {
    bVar3 = (this->bAddToExistingDuration).DefaultValue;
  }
  else {
    bVar3 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                      (pUVar2,(FName *)&this->bAddToExistingDuration,
                       (FKey *)&(this->bAddToExistingDuration)._padding_,
                       &(this->bAddToExistingDuration).DefaultValue);
  }
  pfVar1 = &(this->CooldownDuration).DefaultValue;
  pUVar2 = (UBlackboardComponent *)param_1->OwnerComp->_padding_;
  if (pUVar2 == (UBlackboardComponent *)0x0) {
    fVar4 = *pfVar1;
  }
  else {
    fVar4 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      (pUVar2,(FName *)&this->CooldownDuration,
                       (FKey *)&(this->CooldownDuration)._padding_,pfVar1);
  }
  UBehaviorTreeComponent::AddCooldownTagDuration
            (this_00,(FGameplayTag)(this->CooldownTag).TagName,fVar4,bVar3);
  return;
}

// StaticRegisterNativesUBTDecorator_SetTagCooldown @ 146f00c50

void __cdecl UBTDecorator_SetTagCooldown::StaticRegisterNativesUBTDecorator_SetTagCooldown(void)

{
  return;
}

