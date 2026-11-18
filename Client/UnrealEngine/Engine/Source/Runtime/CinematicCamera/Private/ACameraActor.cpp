// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 2

// NotifyCameraCut @ 146ab8130

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraActor::NotifyCameraCut(ACameraActor *this)

{
  return;
}

// StaticClass @ 146ab9380

UClass * __cdecl ACameraActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ACameraActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraActor",
               &Z_Registration_Info_UClass_ACameraActor.InnerSingleton,
               StaticRegisterNativesACameraActor,0xa60,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraActor>,
               InternalVTableHelperCtorCaller<ACameraActor>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraActor.InnerSingleton;
}

