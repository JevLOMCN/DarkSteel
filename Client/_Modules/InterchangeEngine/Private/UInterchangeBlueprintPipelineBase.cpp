// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 5

// StaticClass @ 14e4cb090

UClass * __cdecl UInterchangeBlueprintPipelineBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeBlueprintPipelineBase",
               &Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton,
               StaticRegisterNativesUInterchangeBlueprintPipelineBase,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeBlueprintPipelineBase>,
               InternalVTableHelperCtorCaller<UInterchangeBlueprintPipelineBase>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton;
}

// UInterchangeBlueprintPipelineBase @ 14e4d83a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeBlueprintPipelineBase * __thiscall
UInterchangeBlueprintPipelineBase::UInterchangeBlueprintPipelineBase
          (UInterchangeBlueprintPipelineBase *this,FVTableHelper *param_1)

{
  UBlueprint::UBlueprint((UBlueprint *)this,param_1);
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  return this;
}

// ~UInterchangeBlueprintPipelineBase @ 14e4dac90

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
UInterchangeBlueprintPipelineBase::~UInterchangeBlueprintPipelineBase
          (UInterchangeBlueprintPipelineBase *this)

{
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  return;
}

// GetPrivateStaticClass @ 14e4f7c40

UClass * __cdecl UInterchangeBlueprintPipelineBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeBlueprintPipelineBase",
               &Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton,
               StaticRegisterNativesUInterchangeBlueprintPipelineBase,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeBlueprintPipelineBase>,
               InternalVTableHelperCtorCaller<UInterchangeBlueprintPipelineBase>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton;
}

// StaticRegisterNativesUInterchangeBlueprintPipelineBase @ 14e50aa00

void __cdecl
UInterchangeBlueprintPipelineBase::StaticRegisterNativesUInterchangeBlueprintPipelineBase(void)

{
  return;
}

