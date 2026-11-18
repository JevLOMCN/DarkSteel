// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1474973f0

UClass * __cdecl UAnimNotify_ResetClothingSimulation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResetClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton,
               StaticRegisterNativesUAnimNotify_ResetClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_ResetClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResetClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton;
}

// UAnimNotify_ResetClothingSimulation @ 1474b41b0

UAnimNotify_ResetClothingSimulation * __thiscall
UAnimNotify_ResetClothingSimulation::UAnimNotify_ResetClothingSimulation
          (UAnimNotify_ResetClothingSimulation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimNotify_ResetClothingSimulation__6B_;
  return this;
}

// UAnimNotify_ResetClothingSimulation @ 1474b41e0

UAnimNotify_ResetClothingSimulation * __thiscall
UAnimNotify_ResetClothingSimulation::UAnimNotify_ResetClothingSimulation
          (UAnimNotify_ResetClothingSimulation *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UAnimNotify_ResetClothingSimulation__6B_;
  this->field_0x28 = 0;
  return this;
}

// ~UAnimNotify_ResetClothingSimulation @ 1474b56e0

void __thiscall
UAnimNotify_ResetClothingSimulation::~UAnimNotify_ResetClothingSimulation
          (UAnimNotify_ResetClothingSimulation *this)

{
  *(undefined ***)this = &___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNotifyName_Implementation @ 1474dc470

FString * __thiscall
UAnimNotify_ResetClothingSimulation::GetNotifyName_Implementation
          (UAnimNotify_ResetClothingSimulation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Reset Clothing Sim");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dd6d0

UClass * __cdecl UAnimNotify_ResetClothingSimulation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResetClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton,
               StaticRegisterNativesUAnimNotify_ResetClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_ResetClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResetClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton;
}

// Notify @ 1474edd50

void __thiscall
UAnimNotify_ResetClothingSimulation::Notify
          (UAnimNotify_ResetClothingSimulation *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// Notify @ 1474edd60

void __thiscall
UAnimNotify_ResetClothingSimulation::Notify
          (UAnimNotify_ResetClothingSimulation *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  (**(code **)(*(longlong *)this + 0x2c8))();
  USkeletalMeshComponent::ForceClothNextUpdateTeleportAndReset(param_1);
  return;
}

// StaticRegisterNativesUAnimNotify_ResetClothingSimulation @ 1474fae90

void __cdecl
UAnimNotify_ResetClothingSimulation::StaticRegisterNativesUAnimNotify_ResetClothingSimulation(void)

{
  return;
}

