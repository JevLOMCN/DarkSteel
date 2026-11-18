// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 2

// OnAttachmentChanged @ 1463411f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnAttachmentChanged(USceneComponent *this)

{
  return;
}

// StaticClass @ 146342910

UClass * __cdecl USceneComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneComponent",
               &Z_Registration_Info_UClass_USceneComponent.InnerSingleton,
               StaticRegisterNativesUSceneComponent,0x250,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_USceneComponent,L"Engine",InternalConstructor<USceneComponent>,
               InternalVTableHelperCtorCaller<USceneComponent>,aFStackX_8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponent.InnerSingleton;
}

