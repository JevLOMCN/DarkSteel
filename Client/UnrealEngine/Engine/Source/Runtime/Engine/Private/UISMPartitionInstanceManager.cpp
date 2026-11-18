// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147284b20

UClass * __cdecl UISMPartitionInstanceManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPartitionInstanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ISMPartitionInstanceManager",
               &Z_Registration_Info_UClass_UISMPartitionInstanceManager.InnerSingleton,
               StaticRegisterNativesUISMPartitionInstanceManager,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UISMPartitionInstanceManager>,
               InternalVTableHelperCtorCaller<UISMPartitionInstanceManager>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPartitionInstanceManager.InnerSingleton;
}

// UISMPartitionInstanceManager @ 14728b7c0

UISMPartitionInstanceManager * __thiscall
UISMPartitionInstanceManager::UISMPartitionInstanceManager
          (UISMPartitionInstanceManager *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UISMPartitionInstanceManager__6B_;
  return this;
}

// UISMPartitionInstanceManager @ 14728b7f0

UISMPartitionInstanceManager * __thiscall
UISMPartitionInstanceManager::UISMPartitionInstanceManager
          (UISMPartitionInstanceManager *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UISMPartitionInstanceManager__6B_;
  return this;
}

// ~UISMPartitionInstanceManager @ 14728d220

void __thiscall
UISMPartitionInstanceManager::~UISMPartitionInstanceManager(UISMPartitionInstanceManager *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14728f2c0

UClass * __cdecl UISMPartitionInstanceManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPartitionInstanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ISMPartitionInstanceManager",
               &Z_Registration_Info_UClass_UISMPartitionInstanceManager.InnerSingleton,
               StaticRegisterNativesUISMPartitionInstanceManager,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UISMPartitionInstanceManager>,
               InternalVTableHelperCtorCaller<UISMPartitionInstanceManager>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPartitionInstanceManager.InnerSingleton;
}

// StaticRegisterNativesUISMPartitionInstanceManager @ 147291210

void __cdecl UISMPartitionInstanceManager::StaticRegisterNativesUISMPartitionInstanceManager(void)

{
  return;
}

