// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732e040

UClass * __cdecl USoundSubmixWidgetInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmixWidgetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmixWidgetInterface",
               &Z_Registration_Info_UClass_USoundSubmixWidgetInterface.InnerSingleton,
               StaticRegisterNativesUSoundSubmixWidgetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSubmixWidgetInterface>,
               InternalVTableHelperCtorCaller<USoundSubmixWidgetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmixWidgetInterface.InnerSingleton;
}

// USoundSubmixWidgetInterface @ 1473310c0

USoundSubmixWidgetInterface * __thiscall
USoundSubmixWidgetInterface::USoundSubmixWidgetInterface
          (USoundSubmixWidgetInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USoundSubmixWidgetInterface__6B_;
  return this;
}

// USoundSubmixWidgetInterface @ 1473310f0

USoundSubmixWidgetInterface * __thiscall
USoundSubmixWidgetInterface::USoundSubmixWidgetInterface
          (USoundSubmixWidgetInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USoundSubmixWidgetInterface__6B_;
  return this;
}

// ~USoundSubmixWidgetInterface @ 1473314c0

void __thiscall
USoundSubmixWidgetInterface::~USoundSubmixWidgetInterface(USoundSubmixWidgetInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147332c10

UClass * __cdecl USoundSubmixWidgetInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmixWidgetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmixWidgetInterface",
               &Z_Registration_Info_UClass_USoundSubmixWidgetInterface.InnerSingleton,
               StaticRegisterNativesUSoundSubmixWidgetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSubmixWidgetInterface>,
               InternalVTableHelperCtorCaller<USoundSubmixWidgetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmixWidgetInterface.InnerSingleton;
}

// StaticRegisterNativesUSoundSubmixWidgetInterface @ 147333450

void __cdecl USoundSubmixWidgetInterface::StaticRegisterNativesUSoundSubmixWidgetInterface(void)

{
  return;
}

