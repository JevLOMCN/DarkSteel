// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 6

// StaticClass @ 146cea820

UClass * __cdecl UGameplayTaskOwnerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTaskOwnerInterface",
               &Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton,
               StaticRegisterNativesUGameplayTaskOwnerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayTaskOwnerInterface>,
               InternalVTableHelperCtorCaller<UGameplayTaskOwnerInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton;
}

// UGameplayTaskOwnerInterface @ 146ced940

UGameplayTaskOwnerInterface * __thiscall
UGameplayTaskOwnerInterface::UGameplayTaskOwnerInterface
          (UGameplayTaskOwnerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGameplayTaskOwnerInterface__6B_;
  return this;
}

// UGameplayTaskOwnerInterface @ 146ced970

UGameplayTaskOwnerInterface * __thiscall
UGameplayTaskOwnerInterface::UGameplayTaskOwnerInterface
          (UGameplayTaskOwnerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGameplayTaskOwnerInterface__6B_;
  return this;
}

// ~UGameplayTaskOwnerInterface @ 146cee0e0

void __thiscall
UGameplayTaskOwnerInterface::~UGameplayTaskOwnerInterface(UGameplayTaskOwnerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146cf2df0

UClass * __cdecl UGameplayTaskOwnerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTaskOwnerInterface",
               &Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton,
               StaticRegisterNativesUGameplayTaskOwnerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayTaskOwnerInterface>,
               InternalVTableHelperCtorCaller<UGameplayTaskOwnerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.InnerSingleton;
}

// StaticRegisterNativesUGameplayTaskOwnerInterface @ 146cf7c50

void __cdecl UGameplayTaskOwnerInterface::StaticRegisterNativesUGameplayTaskOwnerInterface(void)

{
  return;
}

