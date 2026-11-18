// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 4

// SetFieldOfView @ 146ab8bb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraComponent::SetFieldOfView(UCameraComponent *this,float param_1)

{
  this->FieldOfView = param_1;
  return;
}

// SetFirstPersonFieldOfView @ 146ab8e90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraComponent::SetFirstPersonFieldOfView(UCameraComponent *this,float param_1)

{
  this->FirstPersonFieldOfView = param_1;
  return;
}

// SetFirstPersonScale @ 146ab8ea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraComponent::SetFirstPersonScale(UCameraComponent *this,float param_1)

{
  this->FirstPersonScale = param_1;
  return;
}

// StaticClass @ 146ab9390

UClass * __cdecl UCameraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCameraComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraComponent",
               &Z_Registration_Info_UClass_UCameraComponent.InnerSingleton,
               StaticRegisterNativesUCameraComponent,0xaa0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraComponent>,
               InternalVTableHelperCtorCaller<UCameraComponent>,aFStackX_8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraComponent.InnerSingleton;
}

