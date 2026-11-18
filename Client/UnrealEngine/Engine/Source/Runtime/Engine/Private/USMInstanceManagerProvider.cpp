// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732c580

UClass * __cdecl USMInstanceManagerProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceManagerProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceManagerProvider",
               &Z_Registration_Info_UClass_USMInstanceManagerProvider.InnerSingleton,
               StaticRegisterNativesUSMInstanceManagerProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceManagerProvider>,
               InternalVTableHelperCtorCaller<USMInstanceManagerProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceManagerProvider.InnerSingleton;
}

// USMInstanceManagerProvider @ 147330e60

USMInstanceManagerProvider * __thiscall
USMInstanceManagerProvider::USMInstanceManagerProvider
          (USMInstanceManagerProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USMInstanceManagerProvider__6B_;
  return this;
}

// USMInstanceManagerProvider @ 147330e90

USMInstanceManagerProvider * __thiscall
USMInstanceManagerProvider::USMInstanceManagerProvider
          (USMInstanceManagerProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USMInstanceManagerProvider__6B_;
  return this;
}

// ~USMInstanceManagerProvider @ 147331390

void __thiscall
USMInstanceManagerProvider::~USMInstanceManagerProvider(USMInstanceManagerProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1473327c0

UClass * __cdecl USMInstanceManagerProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceManagerProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceManagerProvider",
               &Z_Registration_Info_UClass_USMInstanceManagerProvider.InnerSingleton,
               StaticRegisterNativesUSMInstanceManagerProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceManagerProvider>,
               InternalVTableHelperCtorCaller<USMInstanceManagerProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceManagerProvider.InnerSingleton;
}

// StaticRegisterNativesUSMInstanceManagerProvider @ 1473333f0

void __cdecl USMInstanceManagerProvider::StaticRegisterNativesUSMInstanceManagerProvider(void)

{
  return;
}

