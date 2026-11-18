// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// ULocalPlayerSubsystem @ 148809f60

ULocalPlayerSubsystem * __thiscall
ULocalPlayerSubsystem::ULocalPlayerSubsystem(ULocalPlayerSubsystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULocalPlayerSubsystem__6B_;
  return this;
}

// ULocalPlayerSubsystem @ 148809f90

ULocalPlayerSubsystem * __thiscall
ULocalPlayerSubsystem::ULocalPlayerSubsystem(ULocalPlayerSubsystem *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7ULocalPlayerSubsystem__6B_;
  return this;
}

// ~ULocalPlayerSubsystem @ 14880d3b0

void __thiscall ULocalPlayerSubsystem::~ULocalPlayerSubsystem(ULocalPlayerSubsystem *this)

{
  *(undefined ***)this = &___7USubsystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148840850

UClass * __cdecl ULocalPlayerSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalPlayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalPlayerSubsystem",
               &Z_Registration_Info_UClass_ULocalPlayerSubsystem.InnerSingleton,
               StaticRegisterNativesULocalPlayerSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocalPlayerSubsystem>,
               InternalVTableHelperCtorCaller<ULocalPlayerSubsystem>,local_res8,
               USubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalPlayerSubsystem.InnerSingleton;
}

// PlayerControllerChanged @ 14884c7a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULocalPlayerSubsystem::PlayerControllerChanged
          (ULocalPlayerSubsystem *this,APlayerController *param_1)

{
  return;
}

// StaticRegisterNativesULocalPlayerSubsystem @ 14885ac60

void __cdecl ULocalPlayerSubsystem::StaticRegisterNativesULocalPlayerSubsystem(void)

{
  return;
}

