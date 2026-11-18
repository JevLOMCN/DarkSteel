// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 125

// BakedResourcePrefix'' @ 1413ca4b0

void __cdecl `dynamic_initializer_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ::FString::FString(&FBakingConfiguration::BakedResourcePrefix,L"BAKE_");
  atexit(`dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__);
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 1413ca4e0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE__
          (void)

{
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY =
       UE::Math::TTransform<double>::Identity.Rotation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW =
       UE::Math::TTransform<double>::Identity.Rotation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY =
       UE::Math::TTransform<double>::Identity.Translation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW =
       UE::Math::TTransform<double>::Identity.Translation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY =
       UE::Math::TTransform<double>::Identity.Scale3D.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 1413ca540

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE__(void)

{
  FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE = FLinearColor::Black;
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 1413ca560

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
         DEFAULT_PARAMETER_VALUE_NAME__);
  return;
}

// Mutex'' @ 1413ca580

void __cdecl `dynamic_initializer_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex,4000);
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__);
  return;
}

// `dynamic_initializer_for_'GRegisterCustomizableObjectPopulationCustomVersion'' @ 1413ca5b0

void __cdecl _dynamic_initializer_for__GRegisterCustomizableObjectPopulationCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = CustomizableObjectPopulation::FCustomizableObjectPopulationCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0,L"CustomizableObjectPopulationVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterCustomizableObjectPopulationCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogMuscleActivationConstraint'' @ 1413ca5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMuscleActivationConstraint,L"LogMuscleActivationConstraint",Log
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogMuscleActivationConstraint__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCustomizableObjectPopulation'' @ 1413ca630

void __cdecl _dynamic_initializer_for__ModuleRegistrantCustomizableObjectPopulation__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CustomizableObjectPopulation";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CustomizableObjectPopulation",0x1c);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FCustomizableObjectPopulationModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413ca680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413ca710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413ca7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413ca830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413ca8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413ca950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413ca9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413caa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413cab00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413cab90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotated'' @ 1413cac20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotated == (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotated>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotated,*pFVar1,
               L"Chaos XPBD Corotated Constraint","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedDet'' @ 1413cacb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotatedDet__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotatedDet ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedDet>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotatedDet");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotatedDet,*pFVar1,
               L"Chaos XPBD Corotated Constraint Det Compute","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedPolar'' @ 1413cad40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotatedPolar__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotatedPolar ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotatedPolar");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotatedPolar,*pFVar1,
               L"Chaos XPBD Corotated Constraint Polar Compute","STATGROUP_Chaos","STATCAT_Advanced"
               ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_StiffnessApplyValues'' @ 1413cadd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_StiffnessApplyValues__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_StiffnessApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_StiffnessApplyValues");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_StiffnessApplyValues,*pFVar1,
               L"Chaos PBD Stiffness Apply Values","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_WeightMapApplyValues'' @ 1413cae60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_WeightMapApplyValues__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_WeightMapApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_WeightMapApplyValues>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_WeightMapApplyValues");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_WeightMapApplyValues,*pFVar1,
               L"Chaos PBD WeightMap Apply Values","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationCharacteristic_h__Script_CustomizableObjectPopulation_3321960949'' @ 1413caef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationCharacteristic_h__Script_CustomizableObjectPopulation_3321960949__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CustomizableObjectPopulation",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationCharacteristic_h__Script_CustomizableObjectPopulation_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationConstraint_h__Script_CustomizableObjectPopulation_3156543364'' @ 1413caf30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationConstraint_h__Script_CustomizableObjectPopulation_3156543364__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CustomizableObjectPopulation",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationConstraint_h__Script_CustomizableObjectPopulation_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationConstraint_h__Script_CustomizableObjectPopulation_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h__Script_CustomizableObjectPopulation_3180608275'' @ 1413caf80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h__Script_CustomizableObjectPopulation_3180608275__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CustomizableObjectPopulation",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h__Script_CustomizableObjectPopulation_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h__Script_CustomizableObjectPopulation_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationGenerator_h__Script_CustomizableObjectPopulation_1122345198'' @ 1413cafd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationGenerator_h__Script_CustomizableObjectPopulation_1122345198__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CustomizableObjectPopulation",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationGenerator_h__Script_CustomizableObjectPopulation_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h__Script_CustomizableObjectPopulation_2851967230'' @ 1413cb010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h__Script_CustomizableObjectPopulation_2851967230__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CustomizableObjectPopulation",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h__Script_CustomizableObjectPopulation_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h__Script_CustomizableObjectPopulation_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CustomizableObjectPopulation'' @ 1413cb060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CustomizableObjectPopulation__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x38dc0747;
  local_res8[0].DeclarationsHash = 0xbc47364f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CustomizableObjectPopulation,
             L"/Script/CustomizableObjectPopulation",
             &Z_Registration_Info_UPackage__Script_CustomizableObjectPopulation,local_res8);
  return;
}

// Z_Construct_UClass_UCustomizableObjectPopulation @ 14d363680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCustomizableObjectPopulation(void)

{
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulation.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCustomizableObjectPopulation.OuterSingleton,
               &Z_Construct_UClass_UCustomizableObjectPopulation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulation.OuterSingleton;
}

// Z_Construct_UScriptStruct_FClassWeightPair @ 14d3636c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClassWeightPair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClassWeightPair.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClassWeightPair.InnerSingleton,
               &Z_Construct_UScriptStruct_FClassWeightPair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClassWeightPair.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClassWeightPair.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d363740

void * __cdecl Z_Construct_UScriptStruct_FClassWeightPair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClassWeightPair,&UE::CoreUObject::Private::Construct<FClassWeightPair>,&UE::CoreUObject::Private::ConstructForTests<FClassWeightPair>,&UE::CoreUObject::Private::Destruct<FClassWeightPair>,&UE::CoreUObject::Private::Copy<FClassWeightPair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCustomizableObjectPopulationGenerator @ 14d363780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCustomizableObjectPopulationGenerator(void)

{
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.OuterSingleton,
               &Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.OuterSingleton;
}

// Z_Construct_UFunction_UCustomizableObjectPopulation_GeneratePopulation @ 14d3637c0

UFunction * __cdecl Z_Construct_UFunction_UCustomizableObjectPopulation_GeneratePopulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCustomizableObjectPopulation_GeneratePopulation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_CustomizableObjectPopulation @ 14d363800

UPackage * __cdecl Z_Construct_UPackage__Script_CustomizableObjectPopulation(void)

{
  if (Z_Registration_Info_UPackage__Script_CustomizableObjectPopulation.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CustomizableObjectPopulation.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CustomizableObjectPopulation.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d363840

void __cdecl
Z_Construct_UFunction_UCustomizableObjectPopulation_RegeneratePopulation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_UCustomizableObjectPopulation_RegeneratePopulation @ 14d363890

UFunction * __cdecl Z_Construct_UFunction_UCustomizableObjectPopulation_RegeneratePopulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCustomizableObjectPopulation_RegeneratePopulation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCustomizableObjectPopulationClass @ 14d363950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCustomizableObjectPopulationClass(void)

{
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.OuterSingleton,
               &Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPopulationClassParameterOptions @ 14d363990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPopulationClassParameterOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPopulationClassParameterOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPopulationClassParameterOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPopulationClassParameterOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPopulationClassParameterOptions.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d363a10

void * __cdecl
Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPopulationClassParameterOptions,&UE::CoreUObject::Private::Construct<FPopulationClassParameterOptions>,&UE::CoreUObject::Private::ConstructForTests<FPopulationClassParameterOptions>,&UE::CoreUObject::Private::Destruct<FPopulationClassParameterOptions>,&UE::CoreUObject::Private::Copy<FPopulationClassParameterOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d363bd0

void * __cdecl Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPopulationClassParameter,&UE::CoreUObject::Private::Construct<FPopulationClassParameter>,&UE::CoreUObject::Private::ConstructForTests<FPopulationClassParameter>,&UE::CoreUObject::Private::Destruct<FPopulationClassParameter>,&UE::CoreUObject::Private::Copy<FPopulationClassParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic @ 14d363c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationCharacteristic.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationCharacteristic.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationCharacteristic.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationCharacteristic.
           InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint @ 14d363c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationConstraint.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationConstraint.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationConstraint.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCustomizableObjectPopulationConstraint.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d363d10

void * __cdecl
Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomizableObjectPopulationCharacteristic,&UE::CoreUObject::Private::Construct<FCustomizableObjectPopulationCharacteristic>,&UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectPopulationCharacteristic>,&UE::CoreUObject::Private::Destruct<FCustomizableObjectPopulationCharacteristic>,&UE::CoreUObject::Private::Copy<FCustomizableObjectPopulationCharacteristic>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor @ 14d363d90

UEnum * __cdecl Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor(void)

{
  if (Z_Registration_Info_UEnum_ECurveColor.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECurveColor.InnerSingleton,
               &Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECurveColor.InnerSingleton;
}

// Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType @ 14d363dd0

UEnum * __cdecl Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType(void)

{
  if (Z_Registration_Info_UEnum_EPopulationConstraintType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPopulationConstraintType.InnerSingleton,
               &Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EPopulationConstraintType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FConstraintRanges @ 14d363e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintRanges(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintRanges.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintRanges.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintRanges_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintRanges.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstraintRanges.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EPopulationConstraintType_StaticEnum @ 14d363e90

UEnum * __cdecl EPopulationConstraintType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObjectPopulation();
    Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType,
                       (UObject *)pUVar1,L"EPopulationConstraintType");
  }
  return Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton;
}

// ECurveColor_StaticEnum @ 14d363ed0

UEnum * __cdecl ECurveColor_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECurveColor.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObjectPopulation();
    Z_Registration_Info_UEnum_ECurveColor.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor,(UObject *)pUVar1,
                       L"ECurveColor");
  }
  return Z_Registration_Info_UEnum_ECurveColor.OuterSingleton;
}

// NewStructOps @ 14d363f10

void * __cdecl Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintRanges,&UE::CoreUObject::Private::Construct<FConstraintRanges>,&UE::CoreUObject::Private::ConstructForTests<FConstraintRanges>,&UE::CoreUObject::Private::Destruct<FConstraintRanges>,&UE::CoreUObject::Private::Copy<FConstraintRanges>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d363f70

void * __thiscall
FCustomizableObjectPopulationModule::_scalar_deleting_destructor_
          (FCustomizableObjectPopulationModule *this,uint param_1)

{
  *this = (FCustomizableObjectPopulationModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14d364060

void * __cdecl
Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomizableObjectPopulationConstraint,&UE::CoreUObject::Private::Construct<FCustomizableObjectPopulationConstraint>,&UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectPopulationConstraint>,&UE::CoreUObject::Private::Destruct<FCustomizableObjectPopulationConstraint>,&UE::CoreUObject::Private::Copy<FCustomizableObjectPopulationConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCustomizableObjectPopulationClass_NoRegister @ 14d3642d0

UClass * __cdecl Z_Construct_UClass_UCustomizableObjectPopulationClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulationClass",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton,
               UCustomizableObjectPopulationClass::
               StaticRegisterNativesUCustomizableObjectPopulationClass,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPopulationClass>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulationClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton;
}

// Z_Construct_UClass_UCustomizableObjectPopulationGenerator_NoRegister @ 14d3647d0

UClass * __cdecl Z_Construct_UClass_UCustomizableObjectPopulationGenerator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulationGenerator",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton,
               UCustomizableObjectPopulationGenerator::
               StaticRegisterNativesUCustomizableObjectPopulationGenerator,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPopulationGenerator>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulationGenerator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton;
}

// operator<<<float,float> @ 14d3649a0

FArchive * __cdecl operator<<<float,float>(FArchive *param_1,TTuple<float,float> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x4;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// operator<<<TObjectPtr<UCustomizableObject>,TSizedDefaultAllocator<32>_> @ 14d364a70

FArchive * __cdecl
operator<<<TObjectPtr<UCustomizableObject>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TObjectPtr<UCustomizableObject>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            (**(code **)(*(longlong *)param_1 + 0x150))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TObjectPtr<UCustomizableObject>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TTuple<float,float>,TSizedDefaultAllocator<32>_> @ 14d364a80

FArchive * __cdecl
operator<<<TTuple<float,float>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<TTuple<float,float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TTuple<float,float> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<<float,float>
                        (param_1,(TTuple<float,float> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TTuple<float,float>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pTVar2 = (TTuple<float,float> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8);
              DefaultConstructItems<TTuple<float,float>,int>(pTVar2,1);
              operator<<<float,float>(param_1,pTVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FConstraintIndex,TSizedDefaultAllocator<32>_> @ 14d364a90

FArchive * __cdecl
operator<<<CustomizableObjectPopulation::FConstraintIndex_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FConstraintIndex *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              CustomizableObjectPopulation::operator<<
                        (param_1,(FConstraintIndex *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FConstraintIndex *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8)
              ;
              DefaultConstructItems<CustomizableObjectPopulation::FConstraintIndex,int>(pFVar2,1);
              CustomizableObjectPopulation::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FBoolSampler,TSizedDefaultAllocator<32>_> @ 14d364aa0

FArchive * __cdecl
operator<<<CustomizableObjectPopulation::FBoolSampler_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CustomizableObjectPopulation::FBoolSampler,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FBoolSampler *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              CustomizableObjectPopulation::operator<<
                        (param_1,(FBoolSampler *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<CustomizableObjectPopulation::FBoolSampler,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FBoolSampler *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8);
              DefaultConstructItems<CustomizableObjectPopulation::FBoolSampler,int>(pFVar2,1);
              CustomizableObjectPopulation::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FColorCurveUniformSampler,TSizedDefaultAllocator<32>_> @ 14d364ab0

FArchive * __cdecl
operator<<<CustomizableObjectPopulation::FColorCurveUniformSampler_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CustomizableObjectPopulation::FColorCurveUniformSampler,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FColorCurveUniformSampler *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x68);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<CustomizableObjectPopulation::FColorCurveUniformSampler,int>
                ((FColorCurveUniformSampler *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x27628)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              CustomizableObjectPopulation::operator<<
                        (param_1,(FColorCurveUniformSampler *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x68));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<CustomizableObjectPopulation::FColorCurveUniformSampler,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x868,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FColorCurveUniformSampler *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x68);
              DefaultConstructItems<CustomizableObjectPopulation::FColorCurveUniformSampler,int>
                        (pFVar10,1);
              CustomizableObjectPopulation::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FConstraintSampler,TSizedDefaultAllocator<32>_> @ 14d364ac0

FArchive * __cdecl
operator<<<CustomizableObjectPopulation::FConstraintSampler_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CustomizableObjectPopulation::FConstraintSampler,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<CustomizableObjectPopulation::FConstraintSampler,int>
                ((FConstraintSampler *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x30);
              TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
              ::operator<<(param_1,(FString *)(pTVar9 + 1));
              TArrayPrivateFriend::
              Serialize<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>
                                  *)(pTVar9 + 2));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<CustomizableObjectPopulation::FConstraintSampler,TSizedDefaultAllocator<32>_>::
          Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<CustomizableObjectPopulation::FConstraintSampler,int>(pTVar9,1);
              TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
              ::operator<<(param_1,(FString *)(pTVar9 + 1));
              TArrayPrivateFriend::
              Serialize<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>
                                  *)(pTVar9 + 2));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FCurveSampler,TSizedDefaultAllocator<32>_> @ 14d364ad0

FArchive * __cdecl
operator<<<CustomizableObjectPopulation::FCurveSampler_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CustomizableObjectPopulation::FCurveSampler,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FCurveSampler *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x48);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<CustomizableObjectPopulation::FCurveSampler,int>
                ((FCurveSampler *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x38e39)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              CustomizableObjectPopulation::operator<<
                        (param_1,(FCurveSampler *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<CustomizableObjectPopulation::FCurveSampler,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x848,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FCurveSampler *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48)
              ;
              DefaultConstructItems<CustomizableObjectPopulation::FCurveSampler,int>(pFVar2,1);
              CustomizableObjectPopulation::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_> @ 14d364ae0

FArchive * __cdecl
operator<<<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FCustomizableObjectPopulationClassGenerator *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FCustomizableObjectPopulationClassGenerator,int>
                ((FCustomizableObjectPopulationClassGenerator *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FCustomizableObjectPopulationClassGenerator *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x80));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x880,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FCustomizableObjectPopulationClassGenerator *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x80);
              DefaultConstructItems<FCustomizableObjectPopulationClassGenerator,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FFloatUniformSampler,TSizedDefaultAllocator<32>_> @ 14d364af0

FArchive * __cdecl
operator<<<CustomizableObjectPopulation::FFloatUniformSampler_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CustomizableObjectPopulation::FFloatUniformSampler,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FFloatUniformSampler *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              CustomizableObjectPopulation::operator<<
                        (param_1,(FFloatUniformSampler *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<CustomizableObjectPopulation::FFloatUniformSampler,TSizedDefaultAllocator<32>_>::
          Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FFloatUniformSampler *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8);
              DefaultConstructItems<CustomizableObjectPopulation::FFloatUniformSampler,int>
                        (pFVar2,1);
              CustomizableObjectPopulation::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FOptionSampler,TSizedDefaultAllocator<32>_> @ 14d364b00

FArchive * __cdecl
operator<<<CustomizableObjectPopulation::FOptionSampler_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CustomizableObjectPopulation::FOptionSampler,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<CustomizableObjectPopulation::FOptionSampler,int>
                ((FOptionSampler *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20);
              TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
              TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar9 + 1));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<CustomizableObjectPopulation::FOptionSampler,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
              DefaultConstructItems<CustomizableObjectPopulation::FOptionSampler,int>(pTVar9,1);
              TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
              TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar9 + 1));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FRangesSampler,TSizedDefaultAllocator<32>_> @ 14d364b10

FArchive * __cdecl
operator<<<CustomizableObjectPopulation::FRangesSampler_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CustomizableObjectPopulation::FRangesSampler,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<CustomizableObjectPopulation::FRangesSampler,int>
                ((FRangesSampler *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20);
              TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
              TArrayPrivateFriend::Serialize<TTuple<float,float>,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<TTuple<float,float>,TSizedDefaultAllocator<32>_> *)
                                 (pTVar9 + 1));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<CustomizableObjectPopulation::FRangesSampler,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
              DefaultConstructItems<CustomizableObjectPopulation::FRangesSampler,int>(pTVar9,1);
              TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
              TArrayPrivateFriend::Serialize<TTuple<float,float>,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<TTuple<float,float>,TSizedDefaultAllocator<32>_> *)
                                 (pTVar9 + 1));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ConstructItems<FCustomizableObjectPopulationConstraint,FCustomizableObjectPopulationConstraint,int> @ 14d364b20

void __cdecl
ConstructItems<FCustomizableObjectPopulationConstraint,FCustomizableObjectPopulationConstraint,int>
          (void *param_1,FCustomizableObjectPopulationConstraint *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  void *_Src;
  UObject *pUVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_3 != 0) {
    piVar8 = (int *)((longlong)param_1 + 0x48);
    piVar9 = &(param_2->Blocklist).ArrayNum;
    do {
      *(char *)((longlong)piVar9 + (longlong)param_1 + (-0x48 - (longlong)param_2)) =
           (char)piVar9[-0x12];
      piVar8[-0x11] = piVar9[-0x11];
      piVar8[-0x10] = piVar9[-0x10];
      piVar8[-0xf] = piVar9[-0xf];
      FString::FString((FString *)(piVar8 + -0xe),(FString *)(piVar9 + -0xe));
      uVar7 = *(undefined8 *)(piVar9 + -8);
      pFVar1 = (ForAnyElementType *)(piVar8 + -6);
      *(undefined8 *)(piVar8 + -10) = *(undefined8 *)(piVar9 + -10);
      *(undefined8 *)(piVar8 + -8) = uVar7;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar9[-4];
      pFVar4 = *(FString **)(piVar9 + -6);
      piVar8[-4] = iVar3;
      if (iVar3 == 0) {
        piVar8[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,0,pFVar1,iVar3,piVar8 + -3);
        ConstructItems<FString,FString,int>(pFVar1->Data,pFVar4,iVar3);
      }
      piVar8[-2] = 0;
      piVar8[-1] = 0;
      iVar3 = *piVar9;
      pFVar5 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar9 + -2))->AllocatorInstance).
               Data;
      *piVar8 = iVar3;
      if (iVar3 == 0) {
        piVar8[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,0,(ForAnyElementType *)(piVar8 + -2),iVar3,piVar8 + 1);
        ConstructItems<FString,FString,int>
                  (((ForAnyElementType *)(piVar8 + -2))->Data,(FString *)pFVar5,iVar3);
      }
      piVar8[2] = 0;
      piVar8[3] = 0;
      iVar3 = piVar9[4];
      _Src = *(void **)(piVar9 + 2);
      piVar8[4] = iVar3;
      if (iVar3 == 0) {
        piVar8[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,0,(ForAnyElementType *)(piVar8 + 2),iVar3,piVar8 + 5);
        memcpy(((ForAnyElementType *)(piVar8 + 2))->Data,_Src,(longlong)iVar3 * 0xc);
      }
      pUVar6 = *(UObject **)(piVar9 + 6);
      *(UObject **)(piVar8 + 6) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      piVar2 = piVar9 + 8;
      piVar9 = piVar9 + 0x1c;
      *(char *)(piVar8 + 8) = (char)*piVar2;
      piVar8 = piVar8 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<float,float>,int> @ 14d364cf0

void __cdecl DefaultConstructItems<TTuple<float,float>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<CustomizableObjectPopulation::FConstraintIndex,int> @ 14d364d20

void __cdecl
DefaultConstructItems<CustomizableObjectPopulation::FConstraintIndex,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<CustomizableObjectPopulation::FBoolSampler,int> @ 14d364d50

void __cdecl
DefaultConstructItems<CustomizableObjectPopulation::FBoolSampler,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 2;
    *(undefined4 *)((longlong)param_1 + 4) = 1;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<CustomizableObjectPopulation::FColorCurveUniformSampler,int> @ 14d364d80

void __cdecl
DefaultConstructItems<CustomizableObjectPopulation::FColorCurveUniformSampler,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 10;
    do {
      *(undefined8 *)(lVar1 + 6) = 0;
      *(undefined4 *)(lVar1 + -10) = 0;
      *(undefined4 *)(lVar1 + -6) = 0x3f800000;
      *(undefined8 *)(lVar1 + -2) = 0x5050100;
      *(undefined8 *)(lVar1 + 0xe) = 0;
      *(undefined8 *)(lVar1 + 0x16) = 0x5050100;
      *(undefined8 *)(lVar1 + 0x1e) = 0;
      *(undefined8 *)(lVar1 + 0x26) = 0;
      *(undefined8 *)(lVar1 + 0x2e) = 0x5050100;
      *(undefined8 *)(lVar1 + 0x36) = 0;
      *(undefined8 *)(lVar1 + 0x3e) = 0;
      *(undefined8 *)(lVar1 + 0x46) = 0x5050100;
      *(undefined8 *)(lVar1 + 0x4e) = 0;
      *(undefined8 *)(lVar1 + 0x56) = 0;
      lVar1 = lVar1 + 0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<CustomizableObjectPopulation::FConstraintSampler,int> @ 14d364df0

void __cdecl
DefaultConstructItems<CustomizableObjectPopulation::FConstraintSampler,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<CustomizableObjectPopulation::FCurveSampler,int> @ 14d364e30

void __cdecl
DefaultConstructItems<CustomizableObjectPopulation::FCurveSampler,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3d000000;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0x5050100;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FCustomizableObjectPopulationClassGenerator,int> @ 14d364e80

void __cdecl
DefaultConstructItems<FCustomizableObjectPopulationClassGenerator,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      lVar1 = lVar1 + 0x80;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<CustomizableObjectPopulation::FFloatUniformSampler,int> @ 14d364ef0

void __cdecl
DefaultConstructItems<CustomizableObjectPopulation::FFloatUniformSampler,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<CustomizableObjectPopulation::FOptionSampler,int> @ 14d364f20

void __cdecl
DefaultConstructItems<CustomizableObjectPopulation::FOptionSampler,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<CustomizableObjectPopulation::FRangesSampler,int> @ 14d364f50

void __cdecl
DefaultConstructItems<CustomizableObjectPopulation::FRangesSampler,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCustomizableObjectPopulationCharacteristic,int> @ 14d364f80

void __cdecl
DestructItems<FCustomizableObjectPopulationCharacteristic,int>
          (FCustomizableObjectPopulationCharacteristic *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FCustomizableObjectPopulationConstraint,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Constraints;
    do {
      DestructItems<FCustomizableObjectPopulationConstraint,int>
                ((FCustomizableObjectPopulationConstraint *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FCustomizableObjectPopulationCharacteristic *)(pTVar2 + -1))->ParameterName).Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCustomizableObjectPopulationConstraint,int> @ 14d364fe0

void __cdecl
DestructItems<FCustomizableObjectPopulationConstraint,int>
          (FCustomizableObjectPopulationConstraint *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Blocklist;
    do {
      pFVar1 = (((TArray<FConstraintRanges,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)pTVar2[-1].AllocatorInstance.Data,pTVar2[-1].ArrayNum);
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -3))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<CustomizableObjectPopulation::FColorCurveUniformSampler,int> @ 14d365060

void __cdecl
DestructItems<CustomizableObjectPopulation::FColorCurveUniformSampler,int>
          (FColorCurveUniformSampler *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ColorCurves[2].CompressedKeys;
    do {
      if (*(void **)((longlong)(pTVar2 + 1) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + 1) + 8));
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      if (*(void **)(pTVar2 + -3) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -3));
      }
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 6) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<CustomizableObjectPopulation::FConstraintSampler,int> @ 14d3650d0

void __cdecl
DestructItems<CustomizableObjectPopulation::FConstraintSampler,int>
          (FConstraintSampler *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ParameterName;
    do {
      pFVar1 = (((TArray<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>
                  *)(pFVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((void *)((FConstraintSampler *)(pFVar2 + -1))->_padding_ != (void *)0x0) {
        FMemory::Free((void *)((FConstraintSampler *)(pFVar2 + -1))->_padding_);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<CustomizableObjectPopulation::FCurveSampler,int> @ 14d365130

void __cdecl
DestructItems<CustomizableObjectPopulation::FCurveSampler,int>(FCurveSampler *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->CumulativeBinWeights;
    do {
      pFVar1 = (((FCompressedRichCurve *)(pTVar2 + 1))->CompressedKeys).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCustomizableObjectPopulationClassGenerator,int> @ 14d365190

void __cdecl
DestructItems<FCustomizableObjectPopulationClassGenerator,int>
          (FCustomizableObjectPopulationClassGenerator *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<CustomizableObjectPopulation::FConstraintSampler,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ConstraintSamplers;
    do {
      DestructItems<CustomizableObjectPopulation::FConstraintSampler,int>
                ((FConstraintSampler *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<CustomizableObjectPopulation::FColorCurveUniformSampler,int>
                ((FColorCurveUniformSampler *)
                 (((TArray<CustomizableObjectPopulation::FColorCurveUniformSampler,TSizedDefaultAllocator<32>_>
                    *)(pTVar2 + -2))->AllocatorInstance).Data,
                 ((TArray<CustomizableObjectPopulation::FColorCurveUniformSampler,TSizedDefaultAllocator<32>_>
                   *)(pTVar2 + -2))->ArrayNum);
      pFVar1 = (((TArray<CustomizableObjectPopulation::FColorCurveUniformSampler,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<CustomizableObjectPopulation::FCurveSampler,int>
                ((FCurveSampler *)
                 (((TArray<CustomizableObjectPopulation::FCurveSampler,TSizedDefaultAllocator<32>_>
                    *)(pTVar2 + -3))->AllocatorInstance).Data,
                 ((TArray<CustomizableObjectPopulation::FCurveSampler,TSizedDefaultAllocator<32>_> *
                  )(pTVar2 + -3))->ArrayNum);
      pFVar1 = (((TArray<CustomizableObjectPopulation::FCurveSampler,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -3))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<CustomizableObjectPopulation::FRangesSampler,int>
                ((FRangesSampler *)
                 (((TArray<CustomizableObjectPopulation::FRangesSampler,TSizedDefaultAllocator<32>_>
                    *)(pTVar2 + -4))->AllocatorInstance).Data,
                 ((TArray<CustomizableObjectPopulation::FRangesSampler,TSizedDefaultAllocator<32>_>
                   *)(pTVar2 + -4))->ArrayNum);
      pFVar1 = (((TArray<CustomizableObjectPopulation::FRangesSampler,TSizedDefaultAllocator<32>_> *
                 )(pTVar2 + -4))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<CustomizableObjectPopulation::FFloatUniformSampler,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -5))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<CustomizableObjectPopulation::FOptionSampler,int>
                ((FOptionSampler *)
                 (((TArray<CustomizableObjectPopulation::FOptionSampler,TSizedDefaultAllocator<32>_>
                    *)(pTVar2 + -6))->AllocatorInstance).Data,
                 ((TArray<CustomizableObjectPopulation::FOptionSampler,TSizedDefaultAllocator<32>_>
                   *)(pTVar2 + -6))->ArrayNum);
      pFVar1 = (((TArray<CustomizableObjectPopulation::FOptionSampler,TSizedDefaultAllocator<32>_> *
                 )(pTVar2 + -6))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FCustomizableObjectPopulationClassGenerator *)(pTVar2 + -7))->BoolSamplers).
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<CustomizableObjectPopulation::FOptionSampler,int> @ 14d365280

void __cdecl
DestructItems<CustomizableObjectPopulation::FOptionSampler,int>(FOptionSampler *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->OptionNames;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((void *)((FOptionSampler *)(pTVar2 + -1))->_padding_ != (void *)0x0) {
        FMemory::Free((void *)((FOptionSampler *)(pTVar2 + -1))->_padding_);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<CustomizableObjectPopulation::FRangesSampler,int> @ 14d3652e0

void __cdecl
DestructItems<CustomizableObjectPopulation::FRangesSampler,int>(FRangesSampler *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->RangeValues).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->DiscreteSampler).CumulativeWeights.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// InternalConstructor<UCustomizableObjectPopulation> @ 14d365330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UCustomizableObjectPopulation>(FObjectInitializer *param_1)

{
  UObject *this;
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UCustomizableObjectPopulation__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UCustomizableObjectPopulationGenerator::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)&this[1].field_0x20 = pUVar1;
  }
  return;
}

// InternalConstructor<UCustomizableObjectPopulationClass> @ 14d365430

void __cdecl InternalConstructor<UCustomizableObjectPopulationClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCustomizableObjectPopulationClass__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UCustomizableObjectPopulationGenerator> @ 14d3654a0

void __cdecl
InternalConstructor<UCustomizableObjectPopulationGenerator>(FObjectInitializer *param_1)

{
  UObject *this;
  FCustomizableObjectPopulationGeneratorPrivate *pFVar1;
  FCustomizableObjectPopulationGeneratorPrivate *pFVar2;
  TRawPtrProxy<FCustomizableObjectPopulationGeneratorPrivate> local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    pFVar2 = (FCustomizableObjectPopulationGeneratorPrivate *)0x0;
    *(undefined ***)this = &___7UCustomizableObjectPopulationGenerator__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    pFVar1 = operator_new(0x28);
    if (pFVar1 != (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
      *(undefined4 *)&pFVar1->field_0x11 = 0;
      *(undefined2 *)&pFVar1->field_0x15 = 0;
      pFVar1->field_0x17 = 0;
      *(undefined8 *)&pFVar1->ClassSampler = 0;
      *(undefined8 *)&(pFVar1->ClassSampler).field_0x8 = 0;
      pFVar1->bPopulationCompiledForCook = false;
      (pFVar1->ClassGenerators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->ClassGenerators).ArrayNum = 0;
      (pFVar1->ClassGenerators).ArrayMax = 0;
      pFVar2 = pFVar1;
    }
    local_res8.Object = pFVar2;
    TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1>::
    TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1><FCustomizableObjectPopulationGeneratorPrivate>
              ((TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1> *)&this[1].field_0x10,
               &local_res8);
  }
  return;
}

// InternalVTableHelperCtorCaller<UCustomizableObjectPopulation> @ 14d365530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCustomizableObjectPopulation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCustomizableObjectPopulation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCustomizableObjectPopulation__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCustomizableObjectPopulationClass> @ 14d3655f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCustomizableObjectPopulationClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCustomizableObjectPopulationClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCustomizableObjectPopulationClass__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCustomizableObjectPopulationGenerator> @ 14d3656e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCustomizableObjectPopulationGenerator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCustomizableObjectPopulationGenerator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCustomizableObjectPopulationGenerator__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UCustomizableObjectPopulationGenerator> @ 14d3657a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCustomizableObjectPopulationGenerator * __cdecl
NewObject<UCustomizableObjectPopulationGenerator>(UObject *param_1)

{
  UClass *pUVar1;
  UCustomizableObjectPopulationGenerator *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCustomizableObjectPopulationGenerator::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCustomizableObjectPopulationGenerator *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_ECurveColor> @ 14d367130

UEnum * __cdecl StaticEnum<enum_ECurveColor>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECurveColor.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObjectPopulation();
    Z_Registration_Info_UEnum_ECurveColor.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor,(UObject *)pUVar1,
                       L"ECurveColor");
  }
  return Z_Registration_Info_UEnum_ECurveColor.OuterSingleton;
}

// StaticEnum<enum_EPopulationConstraintType> @ 14d367170

UEnum * __cdecl StaticEnum<enum_EPopulationConstraintType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObjectPopulation();
    Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType,
                       (UObject *)pUVar1,L"EPopulationConstraintType");
  }
  return Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton;
}

// operator<< @ 14d367fb0

FArchive * __cdecl
operator<<(FArchive *param_1,FCustomizableObjectPopulationGeneratorPrivate *param_2)

{
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)param_2);
  operator<<(param_1,&param_2->bPopulationCompiledForCook);
  TArrayPrivateFriend::
  Serialize<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ClassGenerators);
  return param_1;
}

// operator<< @ 14d368000

FArchive * __cdecl
operator<<(FArchive *param_1,FCustomizableObjectPopulationClassGenerator *param_2)

{
  TArrayPrivateFriend::
  Serialize<CustomizableObjectPopulation::FBoolSampler,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->BoolSamplers);
  TArrayPrivateFriend::
  Serialize<CustomizableObjectPopulation::FOptionSampler,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->IntSamplers);
  TArrayPrivateFriend::
  Serialize<CustomizableObjectPopulation::FFloatUniformSampler,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->UniformFloatSamplers);
  TArrayPrivateFriend::
  Serialize<CustomizableObjectPopulation::FRangesSampler,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->RangesSamplers);
  TArrayPrivateFriend::
  Serialize<CustomizableObjectPopulation::FCurveSampler,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->CurveSamplers);
  TArrayPrivateFriend::
  Serialize<CustomizableObjectPopulation::FColorCurveUniformSampler,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->UniformColorSamplers);
  TArrayPrivateFriend::Serialize<FLinearColor,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ConstantColors);
  TArrayPrivateFriend::
  Serialize<CustomizableObjectPopulation::FConstraintSampler,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ConstraintSamplers);
  return param_1;
}

// operator<< @ 14d368080

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FConstraintIndex *param_2)

{
  int *piVar1;
  EPopulationSamplerType *pEVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->SamplerIndex = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar2 = (EPopulationSamplerType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar2 + 1 <= (EPopulationSamplerType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->SamplerType = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->SamplerType,1);
  return param_1;
}

// operator<< @ 14d368130

FArchive * __cdecl CustomizableObjectPopulation::operator<<(FArchive *param_1,FBoolSampler *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->CumulativeValue = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->TippingValue;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 14d368200

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FColorCurveUniformSampler *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->MinValue = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->MaxValue;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  FCompressedRichCurve::Serialize(param_2->ColorCurves,param_1);
  FCompressedRichCurve::Serialize(param_2->ColorCurves + 1,param_1);
  FCompressedRichCurve::Serialize(param_2->ColorCurves + 2,param_1);
  FCompressedRichCurve::Serialize(param_2->ColorCurves + 3,param_1);
  return param_1;
}

// operator<< @ 14d3682f0

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FConstraintSampler *param_2)

{
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)param_2);
  ::operator<<(param_1,&param_2->ParameterName);
  TArrayPrivateFriend::
  Serialize<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Samplers);
  return param_1;
}

// operator<< @ 14d368340

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FCurveSampler *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->BinWidth = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->MinT;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->MaxDefault;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&param_2->BinMaxHeights)
  ;
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->CumulativeBinWeights);
  FCompressedRichCurve::Serialize(&param_2->Curve,param_1);
  return param_1;
}

// operator<< @ 14d368460

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FDiscreteImportanceSampler *param_2)

{
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->CumulativeWeights);
  return param_1;
}

// operator<< @ 14d368480

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FFloatUniformSampler *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->MinValue = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->MaxValue;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator<< @ 14d368550

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FOptionSampler *param_2)

{
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)param_2);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&param_2->OptionNames)
  ;
  return param_1;
}

// operator<< @ 14d368590

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FPopulationClassSampler *param_2)

{
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)param_2);
  return param_1;
}

// operator<< @ 14d3685b0

FArchive * __cdecl
CustomizableObjectPopulation::operator<<(FArchive *param_1,FRangesSampler *param_2)

{
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)param_2);
  TArrayPrivateFriend::Serialize<TTuple<float,float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->RangeValues);
  return param_1;
}

// `scalar_deleting_destructor' @ 14d3685f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCustomizableObjectPopulationGeneratorPrivate,SharedPointerInternals::DefaultDeleter<FCustomizableObjectPopulationGeneratorPrivate>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCustomizableObjectPopulationGeneratorPrivate,SharedPointerInternals::DefaultDeleter<FCustomizableObjectPopulationGeneratorPrivate>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d368630

void * __thiscall
UCustomizableObjectPopulation::_scalar_deleting_destructor_
          (UCustomizableObjectPopulation *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulation__6B_;
  pFVar1 = (this->ClassWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3686b0

void * __thiscall
UCustomizableObjectPopulationClass::_scalar_deleting_destructor_
          (UCustomizableObjectPopulationClass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulationClass__6B_;
  DestructItems<FString,int>((FString *)(this->Tags).AllocatorInstance.Data,(this->Tags).ArrayNum);
  pFVar1 = (this->Tags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectPopulationCharacteristic,int>
            ((FCustomizableObjectPopulationCharacteristic *)
             (this->Characteristics).AllocatorInstance.Data,(this->Characteristics).ArrayNum);
  pFVar1 = (this->Characteristics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Blocklist).AllocatorInstance.Data,(this->Blocklist).ArrayNum);
  pFVar1 = (this->Blocklist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Allowlist).AllocatorInstance.Data,(this->Allowlist).ArrayNum);
  pFVar1 = (this->Allowlist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d368790

void * __thiscall
UCustomizableObjectPopulationGenerator::_scalar_deleting_destructor_
          (UCustomizableObjectPopulationGenerator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulationGenerator__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Private).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PopulationObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// ComputeCumulativeWeights @ 14d368810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
`anonymous_namespace'::ComputeCumulativeWeights
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(__return_storage_ptr__,iVar1 + 1,Default);
  if ((__return_storage_ptr__->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  *(undefined4 *)(__return_storage_ptr__->AllocatorInstance).Data = 0xffffffff;
  uVar9 = uVar7;
  uVar10 = uVar7;
  if (0 < iVar1) {
    do {
      uVar6 = (uint)uVar10;
      uVar4 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      uVar6 = uVar6 + 1;
      uVar4 = *(uint *)((param_1->AllocatorInstance).Data + uVar7 * 4);
      uVar8 = 0;
      if (0 < (int)uVar4) {
        uVar8 = uVar4;
      }
      uVar8 = (int)uVar9 + uVar8;
      uVar4 = 0;
      if ((int)uVar6 < __return_storage_ptr__->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + uVar7 * 4 + 4) = uVar8;
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = (ulonglong)uVar6;
    } while ((longlong)uVar7 < (longlong)iVar1);
  }
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulation @ 14d368fc0

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationCharacteristic @ 14d368fd0

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationCharacteristic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationClass @ 14d368fe0

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationConstraint @ 14d368ff0

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationConstraint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationGenerator @ 14d369000

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationGenerator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulation_init @ 14d369010

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulation_init(void)

{
  return;
}

// Z_Construct_UClass_UCustomizableObjectPopulation_NoRegister @ 14d36b270

UClass * __cdecl Z_Construct_UClass_UCustomizableObjectPopulation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulation",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton,
               UCustomizableObjectPopulation::StaticRegisterNativesUCustomizableObjectPopulation,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomizableObjectPopulation>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulation>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulation.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPopulationClassParameter @ 14d36b320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPopulationClassParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPopulationClassParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPopulationClassParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPopulationClassParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPopulationClassParameter.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_CustomizableObjectPopulation @ 14d36b620

void __cdecl IMPLEMENT_MODULE_CustomizableObjectPopulation(void)

{
  return;
}

// BakedResourcePrefix'' @ 150455d40

void __cdecl `dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data;
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 150455d60

void __cdecl
`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
DEFAULT_PARAMETER_VALUE_NAME__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.
               AllocatorInstance.Data;
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Mutex'' @ 150455d80

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150455d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterCustomizableObjectPopulationCustomVersion'' @ 150455da0

void __cdecl
_dynamic_atexit_destructor_for__GRegisterCustomizableObjectPopulationCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterCustomizableObjectPopulationCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogMuscleActivationConstraint'' @ 150455dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMuscleActivationConstraint);
  return;
}

