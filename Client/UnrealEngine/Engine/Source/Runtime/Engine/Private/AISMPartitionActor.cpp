// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// AISMPartitionActor @ 147d76fb0

AISMPartitionActor * __thiscall
AISMPartitionActor::AISMPartitionActor(AISMPartitionActor *this,FVTableHelper *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  *(undefined ***)this = &_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ISMInstanceManager__;
  *(undefined ***)&this->field_0x2c8 = &_vftable__for__ISMInstanceManagerProvider__;
  return this;
}

// AISMPartitionActor @ 147d77000

AISMPartitionActor * __thiscall
AISMPartitionActor::AISMPartitionActor(AISMPartitionActor *this,FObjectInitializer *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  *(undefined ***)this = &_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ISMInstanceManager__;
  *(undefined ***)&this->field_0x2c8 = &_vftable__for__ISMInstanceManagerProvider__;
  return this;
}

// ~AISMPartitionActor @ 147d7b0d0

void __thiscall AISMPartitionActor::~AISMPartitionActor(AISMPartitionActor *this)

{
  *(undefined ***)this = &_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c8 = &___7ISMInstanceManagerProvider__6B_;
  *(undefined ***)&this->field_0x2c0 = &___7ISMInstanceManager__6B_;
  APartitionActor::~APartitionActor((APartitionActor *)this);
  return;
}

// CanDeleteSMInstance @ 147d8c5b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
AISMPartitionActor::CanDeleteSMInstance(AISMPartitionActor *this,FSMInstanceId *param_1)

{
  return false;
}

// CanDuplicateSMInstance @ 147d8c5c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
AISMPartitionActor::CanDuplicateSMInstance(AISMPartitionActor *this,FSMInstanceId *param_1)

{
  return false;
}

// CanEditSMInstance @ 147d8c5d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
AISMPartitionActor::CanEditSMInstance(AISMPartitionActor *this,FSMInstanceId *param_1)

{
  return false;
}

// CanMoveSMInstance @ 147d8c640

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
AISMPartitionActor::CanMoveSMInstance
          (AISMPartitionActor *this,FSMInstanceId *param_1,ETypedElementWorldType param_2)

{
  return false;
}

// DeleteSMInstances @ 147d94e00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
AISMPartitionActor::DeleteSMInstances
          (AISMPartitionActor *this,TArrayView<FSMInstanceId_const_,int> *param_1)

{
  return false;
}

// DuplicateSMInstances @ 147d99030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
AISMPartitionActor::DuplicateSMInstances
          (AISMPartitionActor *this,TArrayView<FSMInstanceId_const_,int> *param_1,
          TArray<FSMInstanceId,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ForEachSMInstanceInSelectionGroup @ 147d9ebc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AISMPartitionActor::ForEachSMInstanceInSelectionGroup
          (AISMPartitionActor *this,FSMInstanceId *param_1,
          TFunctionRef<bool___cdecl(FSMInstanceId)> *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->ISMComponent;
  uStack_14 = *(undefined4 *)((longlong)&param_1->ISMComponent + 4);
  iStack_10 = param_1->InstanceIndex;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
  return;
}

// GetPrivateStaticClass @ 147da7670

UClass * __cdecl AISMPartitionActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AISMPartitionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ISMPartitionActor",
               &Z_Registration_Info_UClass_AISMPartitionActor.InnerSingleton,
               StaticRegisterNativesAISMPartitionActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AISMPartitionActor>,
               InternalVTableHelperCtorCaller<AISMPartitionActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AISMPartitionActor.InnerSingleton;
}

// GetSMInstanceDisplayName @ 147da8bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FText * __thiscall
AISMPartitionActor::GetSMInstanceDisplayName
          (AISMPartitionActor *this,FText *__return_storage_ptr__,FSMInstanceId *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSMInstanceManager @ 147da8bf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ISMInstanceManager * __thiscall
AISMPartitionActor::GetSMInstanceManager(AISMPartitionActor *this,FSMInstanceId *param_1)

{
  return (ISMInstanceManager *)0x0;
}

// GetSMInstanceTooltip @ 147da8c00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FText * __thiscall
AISMPartitionActor::GetSMInstanceTooltip
          (AISMPartitionActor *this,FText *__return_storage_ptr__,FSMInstanceId *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSMInstanceTransform @ 147da8c20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
AISMPartitionActor::GetSMInstanceTransform
          (AISMPartitionActor *this,FSMInstanceId *param_1,TTransform<double> *param_2,bool param_3)

{
  return false;
}

// NotifySMInstanceMovementEnded @ 147db8470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AISMPartitionActor::NotifySMInstanceMovementEnded(AISMPartitionActor *this,FSMInstanceId *param_1)

{
  return;
}

// NotifySMInstanceMovementOngoing @ 147db8480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AISMPartitionActor::NotifySMInstanceMovementOngoing(AISMPartitionActor *this,FSMInstanceId *param_1)

{
  return;
}

// NotifySMInstanceMovementStarted @ 147db8490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AISMPartitionActor::NotifySMInstanceMovementStarted(AISMPartitionActor *this,FSMInstanceId *param_1)

{
  return;
}

// NotifySMInstanceSelectionChanged @ 147db84a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AISMPartitionActor::NotifySMInstanceSelectionChanged
          (AISMPartitionActor *this,FSMInstanceId *param_1,bool param_2)

{
  return;
}

// SetSMInstanceTransform @ 147dc1160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
AISMPartitionActor::SetSMInstanceTransform
          (AISMPartitionActor *this,FSMInstanceId *param_1,TTransform<double> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  return false;
}

// StaticRegisterNativesAISMPartitionActor @ 147dc3f70

void __cdecl AISMPartitionActor::StaticRegisterNativesAISMPartitionActor(void)

{
  return;
}

