// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146eb0380

UClass * __cdecl UBTTask_MoveDirectlyToward::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_MoveDirectlyToward",
               &Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.InnerSingleton,
               StaticRegisterNativesUBTTask_MoveDirectlyToward,0x160,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_MoveDirectlyToward>,
               InternalVTableHelperCtorCaller<UBTTask_MoveDirectlyToward>,local_res8,
               UBTTask_MoveTo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.InnerSingleton;
}

// UBTTask_MoveDirectlyToward @ 146ec9090

UBTTask_MoveDirectlyToward * __thiscall
UBTTask_MoveDirectlyToward::UBTTask_MoveDirectlyToward
          (UBTTask_MoveDirectlyToward *this,FVTableHelper *param_1)

{
  UBTTask_MoveTo::UBTTask_MoveTo((UBTTask_MoveTo *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UBTTask_MoveDirectlyToward @ 146ec90d0

UBTTask_MoveDirectlyToward * __thiscall
UBTTask_MoveDirectlyToward::UBTTask_MoveDirectlyToward
          (UBTTask_MoveDirectlyToward *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FString local_18;
  
  UBTTask_MoveTo::UBTTask_MoveTo((UBTTask_MoveTo *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::FString(&local_18,"MoveDirectlyToward");
  puVar1 = &this->field_0x30;
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
  *(uint *)&this->field_0x158 = *(uint *)&this->field_0x158 & 0xfffffffe;
  return this;
}

// ~UBTTask_MoveDirectlyToward @ 146ecd570

void __thiscall
UBTTask_MoveDirectlyToward::~UBTTask_MoveDirectlyToward(UBTTask_MoveDirectlyToward *this)

{
  *(undefined ***)this = &UBTTask_BlackboardBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if (*(void **)&this->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x70);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// GetPrivateStaticClass @ 146ee89a0

UClass * __cdecl UBTTask_MoveDirectlyToward::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_MoveDirectlyToward",
               &Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.InnerSingleton,
               StaticRegisterNativesUBTTask_MoveDirectlyToward,0x160,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_MoveDirectlyToward>,
               InternalVTableHelperCtorCaller<UBTTask_MoveDirectlyToward>,local_res8,
               UBTTask_MoveTo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.InnerSingleton;
}

// StaticRegisterNativesUBTTask_MoveDirectlyToward @ 146f00de0

void __cdecl UBTTask_MoveDirectlyToward::StaticRegisterNativesUBTTask_MoveDirectlyToward(void)

{
  return;
}

