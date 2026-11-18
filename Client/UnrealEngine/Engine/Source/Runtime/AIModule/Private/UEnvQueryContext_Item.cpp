// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146f0d9c0

UClass * __cdecl UEnvQueryContext_Item::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_Item",
               &Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext_Item,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryContext_Item>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_Item>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton;
}

// UEnvQueryContext_Item @ 146f2a560

UEnvQueryContext_Item * __thiscall
UEnvQueryContext_Item::UEnvQueryContext_Item(UEnvQueryContext_Item *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryContext_Item__6B_;
  return this;
}

// UEnvQueryContext_Item @ 146f2a590

UEnvQueryContext_Item * __thiscall
UEnvQueryContext_Item::UEnvQueryContext_Item
          (UEnvQueryContext_Item *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryContext_Item__6B_;
  return this;
}

// ~UEnvQueryContext_Item @ 146f2e8b0

void __thiscall UEnvQueryContext_Item::~UEnvQueryContext_Item(UEnvQueryContext_Item *this)

{
  *(undefined ***)this = &___7UEnvQueryContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146f57c20

UClass * __cdecl UEnvQueryContext_Item::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_Item",
               &Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext_Item,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryContext_Item>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_Item>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryContext_Item @ 146f76c60

void __cdecl UEnvQueryContext_Item::StaticRegisterNativesUEnvQueryContext_Item(void)

{
  return;
}

