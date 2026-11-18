// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146eaa630

UClass * __cdecl UBTDecorator_ReachedMoveGoal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_ReachedMoveGoal",
               &Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.InnerSingleton,
               StaticRegisterNativesUBTDecorator_ReachedMoveGoal,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_ReachedMoveGoal>,
               InternalVTableHelperCtorCaller<UBTDecorator_ReachedMoveGoal>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.InnerSingleton;
}

// UBTDecorator_ReachedMoveGoal @ 146ec7550

UBTDecorator_ReachedMoveGoal * __thiscall
UBTDecorator_ReachedMoveGoal::UBTDecorator_ReachedMoveGoal
          (UBTDecorator_ReachedMoveGoal *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UBTDecorator_ReachedMoveGoal @ 146ec75a0

UBTDecorator_ReachedMoveGoal * __thiscall
UBTDecorator_ReachedMoveGoal::UBTDecorator_ReachedMoveGoal
          (UBTDecorator_ReachedMoveGoal *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->field_0x55 = this->field_0x55 & 0xf8;
  puVar1 = &this->field_0x30;
  this->field_0x58 = this->field_0x58 & 0xf0;
  this->field_0x59 = 0xff;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  this->field_0x54 = 0;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xffffff47 | 0x47;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  this->field_0x64 = 0;
  ::FString::FString(&local_18,"Reached move goal");
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x38 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x3c = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xfffffff8;
  this->field_0x64 = 0;
  return this;
}

// ~UBTDecorator_ReachedMoveGoal @ 146ecd060

void __thiscall
UBTDecorator_ReachedMoveGoal::~UBTDecorator_ReachedMoveGoal(UBTDecorator_ReachedMoveGoal *this)

{
  *(undefined ***)this = &UBTNode::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  *(undefined ***)&this->field_0x28 = &___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateRawConditionValue @ 146ed5560

bool __thiscall
UBTDecorator_ReachedMoveGoal::CalculateRawConditionValue
          (UBTDecorator_ReachedMoveGoal *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  longlong lVar1;
  
  if ((((param_1->_padding_ != 0) && (lVar1 = *(longlong *)(param_1->_padding_ + 0x3b0), lVar1 != 0)
       ) && ((*(byte *)(lVar1 + 0x265) & 0x40) != 0)) && (*(char *)(lVar1 + 0x264) == '\0')) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 146ee7cf0

UClass * __cdecl UBTDecorator_ReachedMoveGoal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_ReachedMoveGoal",
               &Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.InnerSingleton,
               StaticRegisterNativesUBTDecorator_ReachedMoveGoal,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_ReachedMoveGoal>,
               InternalVTableHelperCtorCaller<UBTDecorator_ReachedMoveGoal>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.InnerSingleton;
}

// StaticRegisterNativesUBTDecorator_ReachedMoveGoal @ 146f00c40

void __cdecl UBTDecorator_ReachedMoveGoal::StaticRegisterNativesUBTDecorator_ReachedMoveGoal(void)

{
  return;
}

