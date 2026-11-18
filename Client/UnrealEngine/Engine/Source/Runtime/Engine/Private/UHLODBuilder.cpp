// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// UHLODBuilder @ 148a7f8b0

UHLODBuilder * __thiscall UHLODBuilder::UHLODBuilder(UHLODBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHLODBuilder__6B_;
  return this;
}

// UHLODBuilder @ 148a7f8e0

UHLODBuilder * __thiscall UHLODBuilder::UHLODBuilder(UHLODBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHLODBuilder__6B_;
  return this;
}

// ~UHLODBuilder @ 148a817f0

void __thiscall UHLODBuilder::~UHLODBuilder(UHLODBuilder *this)

{
  *(undefined ***)this = &___7UHLODBuilder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a95b00

UClass * __cdecl UHLODBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODBuilder",
               &Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton,
               StaticRegisterNativesUHLODBuilder,0x28,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Editor",InternalConstructor<UHLODBuilder>,
               InternalVTableHelperCtorCaller<UHLODBuilder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton;
}

// StaticRegisterNativesUHLODBuilder @ 148aa28d0

void __cdecl UHLODBuilder::StaticRegisterNativesUHLODBuilder(void)

{
  return;
}

