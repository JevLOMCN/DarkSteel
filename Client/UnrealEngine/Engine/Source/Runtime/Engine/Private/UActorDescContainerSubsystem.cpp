// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a2ba80

UClass * __cdecl UActorDescContainerSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainerSubsystem",
               &Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton,
               StaticRegisterNativesUActorDescContainerSubsystem,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorDescContainerSubsystem>,
               InternalVTableHelperCtorCaller<UActorDescContainerSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton;
}

// UActorDescContainerSubsystem @ 148a421c0

UActorDescContainerSubsystem * __thiscall
UActorDescContainerSubsystem::UActorDescContainerSubsystem
          (UActorDescContainerSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined ***)this = &___7UActorDescContainerSubsystem__6B_;
  return this;
}

// ~UActorDescContainerSubsystem @ 148a44400

void __thiscall
UActorDescContainerSubsystem::~UActorDescContainerSubsystem(UActorDescContainerSubsystem *this)

{
  *(undefined ***)this = &___7UActorDescContainerSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 148a59a80

UClass * __cdecl UActorDescContainerSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainerSubsystem",
               &Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton,
               StaticRegisterNativesUActorDescContainerSubsystem,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorDescContainerSubsystem>,
               InternalVTableHelperCtorCaller<UActorDescContainerSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton;
}

// ShouldCreateSubsystem @ 148a6a170

bool __thiscall
UActorDescContainerSubsystem::ShouldCreateSubsystem
          (UActorDescContainerSubsystem *this,UObject *param_1)

{
  return false;
}

// StaticRegisterNativesUActorDescContainerSubsystem @ 148a6a2b0

void __cdecl UActorDescContainerSubsystem::StaticRegisterNativesUActorDescContainerSubsystem(void)

{
  return;
}

