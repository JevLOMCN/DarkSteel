// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// StaticClass @ 14d49ad00

UClass * __cdecl UStateTreeSchemaProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeSchemaProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeSchemaProvider",
               &Z_Registration_Info_UClass_UStateTreeSchemaProvider.InnerSingleton,
               StaticRegisterNativesUStateTreeSchemaProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeSchemaProvider>,
               InternalVTableHelperCtorCaller<UStateTreeSchemaProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeSchemaProvider.InnerSingleton;
}

// UStateTreeSchemaProvider @ 14d4b29e0

UStateTreeSchemaProvider * __thiscall
UStateTreeSchemaProvider::UStateTreeSchemaProvider
          (UStateTreeSchemaProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UStateTreeSchemaProvider__6B_;
  return this;
}

// UStateTreeSchemaProvider @ 14d4b2a10

UStateTreeSchemaProvider * __thiscall
UStateTreeSchemaProvider::UStateTreeSchemaProvider
          (UStateTreeSchemaProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UStateTreeSchemaProvider__6B_;
  return this;
}

// ~UStateTreeSchemaProvider @ 14d4b3ee0

void __thiscall UStateTreeSchemaProvider::~UStateTreeSchemaProvider(UStateTreeSchemaProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d4bf260

UClass * __cdecl UStateTreeSchemaProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeSchemaProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeSchemaProvider",
               &Z_Registration_Info_UClass_UStateTreeSchemaProvider.InnerSingleton,
               StaticRegisterNativesUStateTreeSchemaProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeSchemaProvider>,
               InternalVTableHelperCtorCaller<UStateTreeSchemaProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeSchemaProvider.InnerSingleton;
}

// StaticRegisterNativesUStateTreeSchemaProvider @ 14d4d1080

void __cdecl UStateTreeSchemaProvider::StaticRegisterNativesUStateTreeSchemaProvider(void)

{
  return;
}

