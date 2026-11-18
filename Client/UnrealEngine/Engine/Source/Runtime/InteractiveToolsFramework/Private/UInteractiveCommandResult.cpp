// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962b600

UClass * __cdecl UInteractiveCommandResult::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveCommandResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveCommandResult",
               &Z_Registration_Info_UClass_UInteractiveCommandResult.InnerSingleton,
               StaticRegisterNativesUInteractiveCommandResult,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInteractiveCommandResult>,
               InternalVTableHelperCtorCaller<UInteractiveCommandResult>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveCommandResult.InnerSingleton;
}

// UInteractiveCommandResult @ 14963b610

UInteractiveCommandResult * __thiscall
UInteractiveCommandResult::UInteractiveCommandResult
          (UInteractiveCommandResult *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveCommandResult__6B_;
  return this;
}

// UInteractiveCommandResult @ 14963b640

UInteractiveCommandResult * __thiscall
UInteractiveCommandResult::UInteractiveCommandResult
          (UInteractiveCommandResult *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveCommandResult__6B_;
  return this;
}

// ~UInteractiveCommandResult @ 14963ead0

void __thiscall
UInteractiveCommandResult::~UInteractiveCommandResult(UInteractiveCommandResult *this)

{
  *(undefined ***)this = &___7UInteractiveCommandResult__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149656c60

UClass * __cdecl UInteractiveCommandResult::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveCommandResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveCommandResult",
               &Z_Registration_Info_UClass_UInteractiveCommandResult.InnerSingleton,
               StaticRegisterNativesUInteractiveCommandResult,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInteractiveCommandResult>,
               InternalVTableHelperCtorCaller<UInteractiveCommandResult>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveCommandResult.InnerSingleton;
}

// StaticRegisterNativesUInteractiveCommandResult @ 149664ba0

void __cdecl UInteractiveCommandResult::StaticRegisterNativesUInteractiveCommandResult(void)

{
  return;
}

