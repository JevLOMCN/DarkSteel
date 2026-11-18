// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146fe9300

UClass * __cdecl UAITask_LockLogic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_LockLogic",
               &Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton,
               StaticRegisterNativesUAITask_LockLogic,0x80,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAITask_LockLogic>,
               InternalVTableHelperCtorCaller<UAITask_LockLogic>,local_res8,UAITask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton;
}

// UAITask_LockLogic @ 146febec0

UAITask_LockLogic * __thiscall
UAITask_LockLogic::UAITask_LockLogic(UAITask_LockLogic *this,FVTableHelper *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UAITask_LockLogic @ 146febf00

UAITask_LockLogic * __thiscall
UAITask_LockLogic::UAITask_LockLogic(UAITask_LockLogic *this,FObjectInitializer *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  this->field_0x38 = 0x7f;
  return this;
}

// ~UAITask_LockLogic @ 146fec830

void __thiscall UAITask_LockLogic::~UAITask_LockLogic(UAITask_LockLogic *this)

{
  *(undefined ***)this = &UAITask::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UAITask::_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  return;
}

// GetPrivateStaticClass @ 146ff0ab0

UClass * __cdecl UAITask_LockLogic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_LockLogic",
               &Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton,
               StaticRegisterNativesUAITask_LockLogic,0x80,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAITask_LockLogic>,
               InternalVTableHelperCtorCaller<UAITask_LockLogic>,local_res8,UAITask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton;
}

// StaticRegisterNativesUAITask_LockLogic @ 146ff3cb0

void __cdecl UAITask_LockLogic::StaticRegisterNativesUAITask_LockLogic(void)

{
  return;
}

