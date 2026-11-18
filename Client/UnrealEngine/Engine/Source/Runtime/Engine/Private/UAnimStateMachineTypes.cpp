// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147516720

UClass * __cdecl UAnimStateMachineTypes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimStateMachineTypes",
               &Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton,
               StaticRegisterNativesUAnimStateMachineTypes,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimStateMachineTypes>,
               InternalVTableHelperCtorCaller<UAnimStateMachineTypes>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton;
}

// UAnimStateMachineTypes @ 147532160

UAnimStateMachineTypes * __thiscall
UAnimStateMachineTypes::UAnimStateMachineTypes(UAnimStateMachineTypes *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimStateMachineTypes__6B_;
  return this;
}

// UAnimStateMachineTypes @ 147532190

UAnimStateMachineTypes * __thiscall
UAnimStateMachineTypes::UAnimStateMachineTypes
          (UAnimStateMachineTypes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimStateMachineTypes__6B_;
  return this;
}

// ~UAnimStateMachineTypes @ 147533b00

void __thiscall UAnimStateMachineTypes::~UAnimStateMachineTypes(UAnimStateMachineTypes *this)

{
  *(undefined ***)this = &___7UAnimStateMachineTypes__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14755eb40

UClass * __cdecl UAnimStateMachineTypes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimStateMachineTypes",
               &Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton,
               StaticRegisterNativesUAnimStateMachineTypes,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimStateMachineTypes>,
               InternalVTableHelperCtorCaller<UAnimStateMachineTypes>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton;
}

// StaticRegisterNativesUAnimStateMachineTypes @ 14757ac40

void __cdecl UAnimStateMachineTypes::StaticRegisterNativesUAnimStateMachineTypes(void)

{
  return;
}

