// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 5

// StaticClass @ 146c480f0

UClass * __cdecl ULegacyLevelSequenceDirectorBlueprint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LegacyLevelSequenceDirectorBlueprint",
               &Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton,
               StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULegacyLevelSequenceDirectorBlueprint>,
               InternalVTableHelperCtorCaller<ULegacyLevelSequenceDirectorBlueprint>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton;
}

// ULegacyLevelSequenceDirectorBlueprint @ 146c4e620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULegacyLevelSequenceDirectorBlueprint * __thiscall
ULegacyLevelSequenceDirectorBlueprint::ULegacyLevelSequenceDirectorBlueprint
          (ULegacyLevelSequenceDirectorBlueprint *this,FVTableHelper *param_1)

{
  UBlueprint::UBlueprint((UBlueprint *)this,param_1);
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  return this;
}

// ~ULegacyLevelSequenceDirectorBlueprint @ 146c4f090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULegacyLevelSequenceDirectorBlueprint::~ULegacyLevelSequenceDirectorBlueprint
          (ULegacyLevelSequenceDirectorBlueprint *this)

{
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  return;
}

// GetPrivateStaticClass @ 146c556a0

UClass * __cdecl ULegacyLevelSequenceDirectorBlueprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LegacyLevelSequenceDirectorBlueprint",
               &Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton,
               StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULegacyLevelSequenceDirectorBlueprint>,
               InternalVTableHelperCtorCaller<ULegacyLevelSequenceDirectorBlueprint>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton;
}

// StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint @ 146c5c550

void __cdecl
ULegacyLevelSequenceDirectorBlueprint::StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint
          (void)

{
  return;
}

