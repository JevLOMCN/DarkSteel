// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147cac900

UClass * __cdecl UImportantToggleSettingInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImportantToggleSettingInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ImportantToggleSettingInterface",
               &Z_Registration_Info_UClass_UImportantToggleSettingInterface.InnerSingleton,
               StaticRegisterNativesUImportantToggleSettingInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UImportantToggleSettingInterface>,
               InternalVTableHelperCtorCaller<UImportantToggleSettingInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImportantToggleSettingInterface.InnerSingleton;
}

// UImportantToggleSettingInterface @ 147cc68b0

UImportantToggleSettingInterface * __thiscall
UImportantToggleSettingInterface::UImportantToggleSettingInterface
          (UImportantToggleSettingInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UImportantToggleSettingInterface__6B_;
  return this;
}

// UImportantToggleSettingInterface @ 147cc68e0

UImportantToggleSettingInterface * __thiscall
UImportantToggleSettingInterface::UImportantToggleSettingInterface
          (UImportantToggleSettingInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UImportantToggleSettingInterface__6B_;
  return this;
}

// ~UImportantToggleSettingInterface @ 147cc9540

void __thiscall
UImportantToggleSettingInterface::~UImportantToggleSettingInterface
          (UImportantToggleSettingInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147d0c4b0

UClass * __cdecl UImportantToggleSettingInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImportantToggleSettingInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ImportantToggleSettingInterface",
               &Z_Registration_Info_UClass_UImportantToggleSettingInterface.InnerSingleton,
               StaticRegisterNativesUImportantToggleSettingInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UImportantToggleSettingInterface>,
               InternalVTableHelperCtorCaller<UImportantToggleSettingInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImportantToggleSettingInterface.InnerSingleton;
}

// StaticRegisterNativesUImportantToggleSettingInterface @ 147d328f0

void __cdecl
UImportantToggleSettingInterface::StaticRegisterNativesUImportantToggleSettingInterface(void)

{
  return;
}

