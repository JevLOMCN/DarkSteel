// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// StaticClass @ 1468ddb60

UClass * __cdecl UUserWidgetBlueprint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetBlueprint",
               &Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton,
               StaticRegisterNativesUUserWidgetBlueprint,0xa8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserWidgetBlueprint>,
               InternalVTableHelperCtorCaller<UUserWidgetBlueprint>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton;
}

// UUserWidgetBlueprint @ 146902590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UUserWidgetBlueprint * __thiscall
UUserWidgetBlueprint::UUserWidgetBlueprint(UUserWidgetBlueprint *this,FVTableHelper *param_1)

{
  UBlueprint::UBlueprint((UBlueprint *)this,param_1);
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  return this;
}

// UUserWidgetBlueprint @ 1469025d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UUserWidgetBlueprint * __thiscall
UUserWidgetBlueprint::UUserWidgetBlueprint(UUserWidgetBlueprint *this,FObjectInitializer *param_1)

{
  UBlueprint::UBlueprint((UBlueprint *)this,param_1);
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  return this;
}

// ~UUserWidgetBlueprint @ 146904ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UUserWidgetBlueprint::~UUserWidgetBlueprint(UUserWidgetBlueprint *this)

{
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  return;
}

// AllowEditorWidget @ 14690c1a0

bool __thiscall UUserWidgetBlueprint::AllowEditorWidget(UUserWidgetBlueprint *this)

{
  return false;
}

// GetPrivateStaticClass @ 146923030

UClass * __cdecl UUserWidgetBlueprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetBlueprint",
               &Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton,
               StaticRegisterNativesUUserWidgetBlueprint,0xa8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserWidgetBlueprint>,
               InternalVTableHelperCtorCaller<UUserWidgetBlueprint>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton;
}

// ShouldAutomaticallyRegisterInputOnConstruction @ 146944c50

bool __thiscall
UUserWidgetBlueprint::ShouldAutomaticallyRegisterInputOnConstruction(UUserWidgetBlueprint *this)

{
  return true;
}

// StaticRegisterNativesUUserWidgetBlueprint @ 146945b50

void __cdecl UUserWidgetBlueprint::StaticRegisterNativesUUserWidgetBlueprint(void)

{
  return;
}

