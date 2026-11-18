// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a72770

UClass * __cdecl UNullHLODBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NullHLODBuilder",
               &Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton,
               StaticRegisterNativesUNullHLODBuilder,0x28,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Editor",InternalConstructor<UNullHLODBuilder>,
               InternalVTableHelperCtorCaller<UNullHLODBuilder>,local_res8,UHLODBuilder::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton;
}

// UNullHLODBuilder @ 148a7fcd0

UNullHLODBuilder * __thiscall
UNullHLODBuilder::UNullHLODBuilder(UNullHLODBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNullHLODBuilder__6B_;
  return this;
}

// UNullHLODBuilder @ 148a7fd00

UNullHLODBuilder * __thiscall
UNullHLODBuilder::UNullHLODBuilder(UNullHLODBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNullHLODBuilder__6B_;
  return this;
}

// ~UNullHLODBuilder @ 148a819d0

void __thiscall UNullHLODBuilder::~UNullHLODBuilder(UNullHLODBuilder *this)

{
  *(undefined ***)this = &___7UHLODBuilder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a960d0

UClass * __cdecl UNullHLODBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NullHLODBuilder",
               &Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton,
               StaticRegisterNativesUNullHLODBuilder,0x28,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Editor",InternalConstructor<UNullHLODBuilder>,
               InternalVTableHelperCtorCaller<UNullHLODBuilder>,local_res8,UHLODBuilder::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton;
}

// StaticRegisterNativesUNullHLODBuilder @ 148aa2950

void __cdecl UNullHLODBuilder::StaticRegisterNativesUNullHLODBuilder(void)

{
  return;
}

