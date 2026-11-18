// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147aa97d0

UClass * __cdecl UDestructibleInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDestructibleInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DestructibleInterface",
               &Z_Registration_Info_UClass_UDestructibleInterface.InnerSingleton,
               StaticRegisterNativesUDestructibleInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDestructibleInterface>,
               InternalVTableHelperCtorCaller<UDestructibleInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDestructibleInterface.InnerSingleton;
}

// UDestructibleInterface @ 147abd870

UDestructibleInterface * __thiscall
UDestructibleInterface::UDestructibleInterface(UDestructibleInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDestructibleInterface__6B_;
  return this;
}

// UDestructibleInterface @ 147abd8a0

UDestructibleInterface * __thiscall
UDestructibleInterface::UDestructibleInterface
          (UDestructibleInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDestructibleInterface__6B_;
  return this;
}

// ~UDestructibleInterface @ 147abf9f0

void __thiscall UDestructibleInterface::~UDestructibleInterface(UDestructibleInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147aeb890

UClass * __cdecl UDestructibleInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDestructibleInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DestructibleInterface",
               &Z_Registration_Info_UClass_UDestructibleInterface.InnerSingleton,
               StaticRegisterNativesUDestructibleInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDestructibleInterface>,
               InternalVTableHelperCtorCaller<UDestructibleInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDestructibleInterface.InnerSingleton;
}

// StaticRegisterNativesUDestructibleInterface @ 147b172f0

void __cdecl UDestructibleInterface::StaticRegisterNativesUDestructibleInterface(void)

{
  return;
}

