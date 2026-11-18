// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// UEngineSubsystem @ 148809ea0

UEngineSubsystem * __thiscall
UEngineSubsystem::UEngineSubsystem(UEngineSubsystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEngineSubsystem__6B_;
  return this;
}

// UEngineSubsystem @ 148809ed0

UEngineSubsystem * __thiscall UEngineSubsystem::UEngineSubsystem(UEngineSubsystem *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UEngineSubsystem__6B_;
  return this;
}

// ~UEngineSubsystem @ 14880d370

void __thiscall UEngineSubsystem::~UEngineSubsystem(UEngineSubsystem *this)

{
  *(undefined ***)this = &___7USubsystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1488406d0

UClass * __cdecl UEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineSubsystem",
               &Z_Registration_Info_UClass_UEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUEngineSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineSubsystem>,
               InternalVTableHelperCtorCaller<UEngineSubsystem>,local_res8,
               UDynamicSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineSubsystem.InnerSingleton;
}

// StaticRegisterNativesUEngineSubsystem @ 14885ac40

void __cdecl UEngineSubsystem::StaticRegisterNativesUEngineSubsystem(void)

{
  return;
}

