// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732be10

UClass * __cdecl USMInstanceManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceManager",
               &Z_Registration_Info_UClass_USMInstanceManager.InnerSingleton,
               StaticRegisterNativesUSMInstanceManager,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceManager>,
               InternalVTableHelperCtorCaller<USMInstanceManager>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceManager.InnerSingleton;
}

// USMInstanceManager @ 147330e00

USMInstanceManager * __thiscall
USMInstanceManager::USMInstanceManager(USMInstanceManager *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USMInstanceManager__6B_;
  return this;
}

// USMInstanceManager @ 147330e30

USMInstanceManager * __thiscall
USMInstanceManager::USMInstanceManager(USMInstanceManager *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USMInstanceManager__6B_;
  return this;
}

// ~USMInstanceManager @ 147331380

void __thiscall USMInstanceManager::~USMInstanceManager(USMInstanceManager *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147332700

UClass * __cdecl USMInstanceManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceManager",
               &Z_Registration_Info_UClass_USMInstanceManager.InnerSingleton,
               StaticRegisterNativesUSMInstanceManager,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceManager>,
               InternalVTableHelperCtorCaller<USMInstanceManager>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceManager.InnerSingleton;
}

// StaticRegisterNativesUSMInstanceManager @ 1473333e0

void __cdecl USMInstanceManager::StaticRegisterNativesUSMInstanceManager(void)

{
  return;
}

