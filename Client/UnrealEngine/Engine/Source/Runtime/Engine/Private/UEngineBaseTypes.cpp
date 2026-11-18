// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147273370

UClass * __cdecl UEngineBaseTypes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineBaseTypes",
               &Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton,
               StaticRegisterNativesUEngineBaseTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineBaseTypes>,
               InternalVTableHelperCtorCaller<UEngineBaseTypes>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton;
}

// UEngineBaseTypes @ 1472775d0

UEngineBaseTypes * __thiscall
UEngineBaseTypes::UEngineBaseTypes(UEngineBaseTypes *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEngineBaseTypes__6B_;
  return this;
}

// ~UEngineBaseTypes @ 147278570

void __thiscall UEngineBaseTypes::~UEngineBaseTypes(UEngineBaseTypes *this)

{
  *(undefined ***)this = &___7UEngineBaseTypes__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472792e0

UClass * __cdecl UEngineBaseTypes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineBaseTypes",
               &Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton,
               StaticRegisterNativesUEngineBaseTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineBaseTypes>,
               InternalVTableHelperCtorCaller<UEngineBaseTypes>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton;
}

// StaticRegisterNativesUEngineBaseTypes @ 147279650

void __cdecl UEngineBaseTypes::StaticRegisterNativesUEngineBaseTypes(void)

{
  return;
}

// UEngineBaseTypes @ 147bbc0e0

UEngineBaseTypes * __thiscall
UEngineBaseTypes::UEngineBaseTypes(UEngineBaseTypes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEngineBaseTypes__6B_;
  return this;
}

