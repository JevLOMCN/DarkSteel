// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 322

// FeatureName'' @ 1411d15d0

void __cdecl
`dynamic_initializer_for_'UE::PoseSearch::IInteractionIslandDependency::FeatureName__(void)

{
  ::FName::FName(&UE::PoseSearch::IInteractionIslandDependency::FeatureName,
                 "IInteractionIslandDependency");
  return;
}

// GUID'' @ 1411d15f0

void __cdecl `dynamic_initializer_for_'FPoseSearchCustomVersion::GUID__(void)

{
  bool bVar1;
  FString local_18;
  
  ::FString::FString(&local_18,"99c277d4-1347-497b-ab23-47514df0f30b");
  bVar1 = FGuid::Parse(&local_18,&FPoseSearchCustomVersion::GUID);
  if (!bVar1) {
    FPoseSearchCustomVersion::GUID.C = 0;
    FPoseSearchCustomVersion::GUID.D = 0;
    FPoseSearchCustomVersion::GUID.A = 0;
    FPoseSearchCustomVersion::GUID.B = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeMotionMatchingDrawCurResult'' @ 1411d1650

void __cdecl _dynamic_initializer_for__CVarAnimNodeMotionMatchingDrawCurResult__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeMotionMatchingDrawCurResult,
             L"a.AnimNode.MotionMatching.DebugDrawCurResult",
             &GVarAnimNodeMotionMatchingDrawCurResult,L"Draw current result",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawCurResult__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeMotionMatchingDrawInfo'' @ 1411d16a0

void __cdecl _dynamic_initializer_for__CVarAnimNodeMotionMatchingDrawInfo__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeMotionMatchingDrawInfo,L"a.AnimNode.MotionMatching.DebugDrawInfo",
             &GVarAnimNodeMotionMatchingDrawInfo,L"Draw info like current databases and asset",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawInfo__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeMotionMatchingDrawInfoHeight'' @ 1411d16f0

void __cdecl _dynamic_initializer_for__CVarAnimNodeMotionMatchingDrawInfoHeight__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeMotionMatchingDrawInfoHeight,
             L"a.AnimNode.MotionMatching.DebugDrawInfoHeight",
             &GVarAnimNodeMotionMatchingDrawInfoHeight,L"Vertical offset for DebugDrawInfo",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawInfoHeight__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeMotionMatchingDrawInfoVerbose'' @ 1411d1740

void __cdecl _dynamic_initializer_for__CVarAnimNodeMotionMatchingDrawInfoVerbose__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeMotionMatchingDrawInfoVerbose,
             L"a.AnimNode.MotionMatching.DebugDrawInfoVerbose",
             &GVarAnimNodeMotionMatchingDrawInfoVerbose,L"Draw additional info like blend stack",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawInfoVerbose__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeMotionMatchingDrawQuery'' @ 1411d1790

void __cdecl _dynamic_initializer_for__CVarAnimNodeMotionMatchingDrawQuery__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeMotionMatchingDrawQuery,L"a.AnimNode.MotionMatching.DebugDrawQuery",
             &GVarAnimNodeMotionMatchingDrawQuery,L"Draw input query",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawQuery__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeMotionMatchingPlayRateEnabled'' @ 1411d17e0

void __cdecl _dynamic_initializer_for__CVarAnimNodeMotionMatchingPlayRateEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeMotionMatchingPlayRateEnabled,
             L"a.AnimNode.MotionMatching.DebugPlayRateEnabled",
             &GVarAnimNodeMotionMatchingPlayRateEnabled,
             L"Toggles if PlayRate is used in motion matching. Same as setting PlayRate to (1,1) when disabled.\n0: Completely disable PlayRate usage.\n1: Enable all usages of PlayRate.\n2: Enable PlayRate in PoseSeach only (Not used in actual playback).\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingPlayRateEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarMotionMatchDebugWeightGroupID'' @ 1411d1830

void __cdecl UE::PoseSearch::_dynamic_initializer_for__CVarMotionMatchDebugWeightGroupID__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMotionMatchDebugWeightGroupID,L"a.MotionMatch.DebugWeightGroupID",
             &GVarMotionMatchDebugWeightGroupID,
             L"Only the channels with this or negative DebugWeightGroupID will have non zero weights"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMotionMatchDebugWeightGroupID__);
  return;
}

// `dynamic_initializer_for_'GRegisterPoseSearchCustomVersion'' @ 1411d1880

void __cdecl _dynamic_initializer_for__GRegisterPoseSearchCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FPoseSearchCustomVersion::GUID;
  GRegisterPoseSearchCustomVersion.Key = FPoseSearchCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,2,L"Dev-PoseSearch-Version",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterPoseSearchCustomVersion__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PoseSearch_BruteForce'' @ 1411d18d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PoseSearch_BruteForce__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PoseSearch_BruteForce ==
      (FThreadSafeStaticStat<FStat_STAT_PoseSearch_BruteForce>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PoseSearch_BruteForce");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_BruteForce,*pFVar1,
               L"Search Brute Force","STATGROUP_PoseSearch","STATCAT_Advanced",L"PoseSearch",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PoseSearch_Event'' @ 1411d1960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PoseSearch_Event__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PoseSearch_Event == (FThreadSafeStaticStat<FStat_STAT_PoseSearch_Event>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PoseSearch_Event");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_Event,*pFVar1,L"Search Event",
               "STATGROUP_PoseSearch","STATCAT_Advanced",L"PoseSearch",true,true,ST_int64,true,false
               ,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PoseSearch_PCAKNN'' @ 1411d19f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PoseSearch_PCAKNN__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PoseSearch_PCAKNN == (FThreadSafeStaticStat<FStat_STAT_PoseSearch_PCAKNN>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PoseSearch_PCAKNN");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_PCAKNN,*pFVar1,
               L"Search PCA/KNN","STATGROUP_PoseSearch","STATCAT_Advanced",L"PoseSearch",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PoseSearch_VPTree'' @ 1411d1a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PoseSearch_VPTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PoseSearch_VPTree == (FThreadSafeStaticStat<FStat_STAT_PoseSearch_VPTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PoseSearch_VPTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_VPTree,*pFVar1,L"Search VPTree"
               ,"STATGROUP_PoseSearch","STATCAT_Advanced",L"PoseSearch",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatchingInteraction_h__Script_PoseSearch_1058397202'' @ 1411d1b10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatchingInteraction_h__Script_PoseSearch_1058397202__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatchingInteraction_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h__Script_PoseSearch_3719098252'' @ 1411d1b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h__Script_PoseSearch_3719098252__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h__Script_PoseSearch_3282446953'' @ 1411d1b90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h__Script_PoseSearch_3282446953__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_Chooser_ChooserParameterPoseHistoryBase_h__Script_PoseSearch_1696130698'' @ 1411d1bd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_Chooser_ChooserParameterPoseHistoryBase_h__Script_PoseSearch_1696130698__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_Chooser_ChooserParameterPoseHistoryBase_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_Chooser_PoseSearchChooserColumn_h__Script_PoseSearch_1922193170'' @ 1411d1c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_Chooser_PoseSearchChooserColumn_h__Script_PoseSearch_1922193170__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_Chooser_PoseSearchChooserColumn_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h__Script_PoseSearch_2820609005'' @ 1411d1c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h__Script_PoseSearch_2820609005__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h__Script_PoseSearch_3288285246'' @ 1411d1ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h__Script_PoseSearch_3288285246__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h__Script_PoseSearch_313474703'' @ 1411d1cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h__Script_PoseSearch_313474703__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h__Script_PoseSearch_5764324'' @ 1411d1d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h__Script_PoseSearch_5764324__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h__Script_PoseSearch_Statics
             ::ClassInfo,0xb,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h__Script_PoseSearch_3049299223'' @ 1411d1d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h__Script_PoseSearch_3049299223__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h__Script_PoseSearch_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchCost_h__Script_PoseSearch_4092289905'' @ 1411d1dd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchCost_h__Script_PoseSearch_4092289905__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchCost_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h__Script_PoseSearch_2936932900'' @ 1411d1e10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h__Script_PoseSearch_2936932900__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h__Script_PoseSearch_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAvailability_h__Script_PoseSearch_2649579276'' @ 1411d1e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAvailability_h__Script_PoseSearch_2649579276__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAvailability_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h__Script_PoseSearch_2240543996'' @ 1411d1ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h__Script_PoseSearch_2240543996__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_PoseSearch'' @ 1411d1ee0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_PoseSearch__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x674e5611;
  local_res8[0].DeclarationsHash = 0x50b5c0bb;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_PoseSearch,L"/Script/PoseSearch",
             &Z_Registration_Info_UPackage__Script_PoseSearch,local_res8);
  return;
}

// `dynamic_initializer_for_'end'' @ 1411d1f20

void __cdecl Eigen::placeholders::_dynamic_initializer_for__end__(void)

{
  end = lastp1;
  return;
}

// Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface @ 14a894db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.OuterSingleton;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetCurrentState @ 14a894eb0

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetCurrentState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetCurrentState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetGravity @ 14a894ef0

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetGravity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetGravity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetVelocity @ 14a894ff0

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetVelocity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_GetVelocity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_Predict @ 14a8950f0

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_Predict(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryPredictorInterface_Predict_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FPoseSearchColumnNullInputValue @ 14a8953b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchColumnNullInputValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchColumnNullInputValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchColumnNullInputValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchColumnNullInputValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchColumnNullInputValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchColumnNullInputValue.InnerSingleton;
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

// NewStructOps @ 14a895430

void * __cdecl Z_Construct_UScriptStruct_FPoseHistoryContextProperty_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseHistoryContextProperty,&UE::CoreUObject::Private::Construct<FPoseHistoryContextProperty>,&UE::CoreUObject::Private::ConstructForTests<FPoseHistoryContextProperty>,&UE::CoreUObject::Private::Destruct<FPoseHistoryContextProperty>,&UE::CoreUObject::Private::Copy<FPoseHistoryContextProperty>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a895470

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchColumnNullInputValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchColumnNullInputValue,&UE::CoreUObject::Private::Construct<FPoseSearchColumnNullInputValue>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchColumnNullInputValue>,&UE::CoreUObject::Private::Destruct<FPoseSearchColumnNullInputValue>,&UE::CoreUObject::Private::Copy<FPoseSearchColumnNullInputValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a895660

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchColumn,&UE::CoreUObject::Private::Construct<FPoseSearchColumn>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchColumn>,&UE::CoreUObject::Private::Destruct<FPoseSearchColumn>,&UE::CoreUObject::Private::Copy<FPoseSearchColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseSearchDatabase @ 14a895810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchDatabase(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchDatabase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton;
}

// Z_Construct_UEnum_PoseSearch_EPoseSearchMode @ 14a895850

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EPoseSearchMode(void)

{
  if (Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAsset @ 14a895890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAsset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAsset.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAsset.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAsset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAsset.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAsset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase @ 14a895910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase.InnerSingleton;
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

// EPoseSearchMode_StaticEnum @ 14a895990

UEnum * __cdecl EPoseSearchMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchMode,(UObject *)pUVar1,
                       L"EPoseSearchMode");
  }
  return Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton;
}

// EPoseSearchMirrorOption_StaticEnum @ 14a895a00

UEnum * __cdecl EPoseSearchMirrorOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption,(UObject *)pUVar1,
                       L"EPoseSearchMirrorOption");
  }
  return Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton;
}

// NewStructOps @ 14a895a70

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchDatabaseAnimationAssetBase,&UE::CoreUObject::Private::Construct<FPoseSearchDatabaseAnimationAssetBase>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseAnimationAssetBase>,&UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseAnimationAssetBase>,&UE::CoreUObject::Private::Copy<FPoseSearchDatabaseAnimationAssetBase>,&UE::CoreUObject::Private::Identical<FPoseSearchDatabaseAnimationAssetBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a895ab0

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAsset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchDatabaseAnimationAsset,&UE::CoreUObject::Private::Construct<FPoseSearchDatabaseAnimationAsset>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseAnimationAsset>,&UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseAnimationAsset>,&UE::CoreUObject::Private::Copy<FPoseSearchDatabaseAnimationAsset>,&UE::CoreUObject::Private::Identical<FPoseSearchDatabaseAnimationAsset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a895b30

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchDatabaseSequence,&UE::CoreUObject::Private::Construct<FPoseSearchDatabaseSequence>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseSequence>,&UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseSequence>,&UE::CoreUObject::Private::Copy<FPoseSearchDatabaseSequence>,&UE::CoreUObject::Private::Identical<FPoseSearchDatabaseSequence>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a895bb0

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchDatabaseBlendSpace,&UE::CoreUObject::Private::Construct<FPoseSearchDatabaseBlendSpace>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseBlendSpace>,&UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseBlendSpace>,&UE::CoreUObject::Private::Copy<FPoseSearchDatabaseBlendSpace>,&UE::CoreUObject::Private::Identical<FPoseSearchDatabaseBlendSpace>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a895cb0

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchDatabaseAnimComposite,&UE::CoreUObject::Private::Construct<FPoseSearchDatabaseAnimComposite>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseAnimComposite>,&UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseAnimComposite>,&UE::CoreUObject::Private::Copy<FPoseSearchDatabaseAnimComposite>,&UE::CoreUObject::Private::Identical<FPoseSearchDatabaseAnimComposite>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMotionMatchingAnimNodeLibrary @ 14a895cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionMatchingAnimNodeLibrary(void)

{
  if (Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.OuterSingleton,
               &Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference @ 14a895d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingAnimNodeReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionMatchingAnimNodeReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingAnimNodeReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionMatchingAnimNodeReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMotionMatchingBlueprintBlendSettings @ 14a895db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionMatchingBlueprintBlendSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingBlueprintBlendSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionMatchingBlueprintBlendSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionMatchingBlueprintBlendSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingBlueprintBlendSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionMatchingBlueprintBlendSettings.InnerSingleton;
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

// NewProp_bUseInertialBlend_SetBit @ 14a895e30

void __cdecl
Z_Construct_UScriptStruct_FMotionMatchingBlueprintBlendSettings_Statics::
NewProp_bUseInertialBlend_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewStructOps @ 14a895e40

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchDatabaseAnimMontage,&UE::CoreUObject::Private::Construct<FPoseSearchDatabaseAnimMontage>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseAnimMontage>,&UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseAnimMontage>,&UE::CoreUObject::Private::Copy<FPoseSearchDatabaseAnimMontage>,&UE::CoreUObject::Private::Identical<FPoseSearchDatabaseAnimMontage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a895e80

void * __cdecl
Z_Construct_UScriptStruct_FMotionMatchingBlueprintBlendSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionMatchingBlueprintBlendSettings,&UE::CoreUObject::Private::Construct<FMotionMatchingBlueprintBlendSettings>,&UE::CoreUObject::Private::ConstructForTests<FMotionMatchingBlueprintBlendSettings>,&UE::CoreUObject::Private::Destruct<FMotionMatchingBlueprintBlendSettings>,&UE::CoreUObject::Private::SerializeArchive<FMotionMatchingBlueprintBlendSettings>,&UE::CoreUObject::Private::SerializeSlot<FMotionMatchingBlueprintBlendSettings>,&UE::CoreUObject::Private::Copy<FMotionMatchingBlueprintBlendSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a895fe0

void * __cdecl
Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionMatchingAnimNodeReference,&UE::CoreUObject::Private::Construct<FMotionMatchingAnimNodeReference>,&UE::CoreUObject::Private::ConstructForTests<FMotionMatchingAnimNodeReference>,&UE::CoreUObject::Private::Destruct<FMotionMatchingAnimNodeReference>,&UE::CoreUObject::Private::Copy<FMotionMatchingAnimNodeReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a8960c0

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchDatabaseMultiAnimAsset,&UE::CoreUObject::Private::Construct<FPoseSearchDatabaseMultiAnimAsset>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseMultiAnimAsset>,&UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseMultiAnimAsset>,&UE::CoreUObject::Private::Copy<FPoseSearchDatabaseMultiAnimAsset>,&UE::CoreUObject::Private::Identical<FPoseSearchDatabaseMultiAnimAsset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPoseSearchDatabase_GetAnimationAsset @ 14a896100

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchDatabase_GetAnimationAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchDatabase_GetAnimationAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchDatabase_GetNumAnimationAssets @ 14a896140

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchDatabase_GetNumAnimationAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchDatabase_GetNumAnimationAssets_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode @ 14a896180

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Result_SetBit @ 14a8961c0

void __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::
NewProp_Result_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure @ 14a8961d0

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsResultValid_SetBit @ 14a896210

void __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_GetMotionMatchingBlendSettings_Statics::
NewProp_bIsResultValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_GetMotionMatchingBlendSettings @ 14a896220

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_GetMotionMatchingBlendSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_GetMotionMatchingBlendSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsResultValid_SetBit @ 14a896260

void __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_GetMotionMatchingSearchResult_Statics::
NewProp_bIsResultValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_GetMotionMatchingSearchResult @ 14a896270

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_GetMotionMatchingSearchResult(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_GetMotionMatchingSearchResult_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsResultValid_SetBit @ 14a8962b0

void __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_OverrideMotionMatchingBlendSettings_Statics::
NewProp_bIsResultValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_OverrideMotionMatchingBlendSettings @ 14a8962c0

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_OverrideMotionMatchingBlendSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_OverrideMotionMatchingBlendSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bValidateResultAgainstAvailabilities_SetBit @ 14a896300

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction_Statics::
NewProp_bValidateResultAgainstAvailabilities_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bWarpUsingRootBone_SetBit @ 14a896310

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction_Statics::
NewProp_bWarpUsingRootBone_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdc) = 1;
  return;
}

// NewProp_bResetOnBecomingRelevant_SetBit @ 14a896320

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction_Statics::
NewProp_bResetOnBecomingRelevant_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdd) = 1;
  return;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch @ 14a896330

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseInertialBlend_SetBit @ 14a896370

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction_Statics::
NewProp_bUseInertialBlend_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf2) = 1;
  return;
}

// NewStructOps @ 14a896380

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x250;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_MotionMatchingInteraction,&UE::CoreUObject::Private::Construct<FAnimNode_MotionMatchingInteraction>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_MotionMatchingInteraction>,&UE::CoreUObject::Private::Destruct<FAnimNode_MotionMatchingInteraction>,&UE::CoreUObject::Private::Copy<FAnimNode_MotionMatchingInteraction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseInertialBlend_SetBit @ 14a8964c0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bUseInertialBlend_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
  return;
}

// NewProp_bResetOnBecomingRelevant_SetBit @ 14a8964d0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf9) = 1;
  return;
}

// NewProp_bShouldSearch_SetBit @ 14a8964e0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bShouldSearch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xfa) = 1;
  return;
}

// NewProp_bShouldUseCachedChannelData_SetBit @ 14a8964f0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::
NewProp_bShouldUseCachedChannelData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xfb) = 1;
  return;
}

// NewProp_bValidateResultAgainstAvailabilities_SetBit @ 14a896500

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::
NewProp_bValidateResultAgainstAvailabilities_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x248) = 1;
  return;
}

// NewProp_bKeepInteractionAlive_SetBit @ 14a896510

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bKeepInteractionAlive_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x249) = 1;
  return;
}

// NewProp_bWarpUsingRootBone_SetBit @ 14a896520

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bWarpUsingRootBone_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24a) = 1;
  return;
}

// NewStructOps @ 14a896530

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 800;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_MotionMatching,&UE::CoreUObject::Private::Construct<FAnimNode_MotionMatching>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_MotionMatching>,&UE::CoreUObject::Private::Destruct<FAnimNode_MotionMatching>,&UE::CoreUObject::Private::Copy<FAnimNode_MotionMatching>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch @ 14a896570

UFunction * __cdecl Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch @ 14a8965b0

UFunction * __cdecl Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetInterruptMode @ 14a8965f0

UFunction * __cdecl Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetInterruptMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetInterruptMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base @ 14a896630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base.
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

// NewProp_bInitializeWithRefPose_SetBit @ 14a8966b0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::
NewProp_bInitializeWithRefPose_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bResetOnBecomingRelevant_SetBit @ 14a8966c0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::
NewProp_bResetOnBecomingRelevant_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bStoreScales_SetBit @ 14a8966d0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::
NewProp_bStoreScales_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// NewProp_bGenerateTrajectory_SetBit @ 14a8966e0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::
NewProp_bGenerateTrajectory_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewStructOps @ 14a8966f0

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_PoseSearchHistoryCollector_Base,&UE::CoreUObject::Private::Construct<FAnimNode_PoseSearchHistoryCollector_Base>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_PoseSearchHistoryCollector_Base>,&UE::CoreUObject::Private::Destruct<FAnimNode_PoseSearchHistoryCollector_Base>,&UE::CoreUObject::Private::Copy<FAnimNode_PoseSearchHistoryCollector_Base>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a896780

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2f0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_PoseSearchHistoryCollector,&UE::CoreUObject::Private::Construct<FAnimNode_PoseSearchHistoryCollector>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_PoseSearchHistoryCollector>,&UE::CoreUObject::Private::Destruct<FAnimNode_PoseSearchHistoryCollector>,&UE::CoreUObject::Private::Copy<FAnimNode_PoseSearchHistoryCollector>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a896870

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2f0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_PoseSearchComponentSpaceHistoryCollector,&UE::CoreUObject::Private::Construct<FAnimNode_PoseSearchComponentSpaceHistoryCollector>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_PoseSearchComponentSpaceHistoryCollector>,&UE::CoreUObject::Private::Destruct<FAnimNode_PoseSearchComponentSpaceHistoryCollector>,&UE::CoreUObject::Private::Copy<FAnimNode_PoseSearchComponentSpaceHistoryCollector>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a896d10

void * __thiscall
FPoseSearchDatabaseSequence::_scalar_deleting_destructor_
          (FPoseSearchDatabaseSequence *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a896f60

void * __thiscall
FPoseSearchDatabaseBlendSpace::_scalar_deleting_destructor_
          (FPoseSearchDatabaseBlendSpace *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8970a0

void * __thiscall
FChooserParameterPoseHistoryBase::_scalar_deleting_destructor_
          (FChooserParameterPoseHistoryBase *this,uint param_1)

{
  *this = (FChooserParameterPoseHistoryBase)&___7FChooserParameterBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase @ 14a8970e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.InnerSingleton;
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

// Z_Construct_UPackage__Script_PoseSearch @ 14a897160

UPackage * __cdecl Z_Construct_UPackage__Script_PoseSearch(void)

{
  if (Z_Registration_Info_UPackage__Script_PoseSearch.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_PoseSearch.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_PoseSearch.OuterSingleton;
}

// NewStructOps @ 14a8971a0

void * __cdecl
Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChooserParameterPoseHistoryBase,&UE::CoreUObject::Private::Construct<FChooserParameterPoseHistoryBase>,&UE::CoreUObject::Private::ConstructForTests<FChooserParameterPoseHistoryBase>,&UE::CoreUObject::Private::Destruct<FChooserParameterPoseHistoryBase>,&UE::CoreUObject::Private::Copy<FChooserParameterPoseHistoryBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary @ 14a8971e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary(void)

{
  if (Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.OuterSingleton,
               &Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMotionMatchingInteractionAnimNodeReference @ 14a897220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionMatchingInteractionAnimNodeReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingInteractionAnimNodeReference.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionMatchingInteractionAnimNodeReference.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionMatchingInteractionAnimNodeReference_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingInteractionAnimNodeReference.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionMatchingInteractionAnimNodeReference.
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

// NewStructOps @ 14a8972a0

void * __cdecl
Z_Construct_UScriptStruct_FMotionMatchingInteractionAnimNodeReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionMatchingInteractionAnimNodeReference,&UE::CoreUObject::Private::Construct<FMotionMatchingInteractionAnimNodeReference>,&UE::CoreUObject::Private::ConstructForTests<FMotionMatchingInteractionAnimNodeReference>,&UE::CoreUObject::Private::Destruct<FMotionMatchingInteractionAnimNodeReference>,&UE::CoreUObject::Private::Copy<FMotionMatchingInteractionAnimNodeReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_ConvertToMotionMatchingInteractionNode @ 14a897440

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_ConvertToMotionMatchingInteractionNode
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_ConvertToMotionMatchingInteractionNode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMultiAnimAsset_NoRegister @ 14a897480

UClass * __cdecl Z_Construct_UClass_UMultiAnimAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MultiAnimAsset",
               &Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton,
               UMultiAnimAsset::StaticRegisterNativesUMultiAnimAsset,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiAnimAsset>,InternalVTableHelperCtorCaller<UMultiAnimAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton;
}

// NewProp_Result_SetBit @ 14a897530

void __cdecl
Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_ConvertToMotionMatchingInteractionNodePure_Statics
::NewProp_Result_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a897600

void * __thiscall
FPoseSearchDatabaseAnimComposite::_scalar_deleting_destructor_
          (FPoseSearchDatabaseAnimComposite *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_ConvertToMotionMatchingInteractionNodePure @ 14a897640

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_ConvertToMotionMatchingInteractionNodePure
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_ConvertToMotionMatchingInteractionNodePure_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a8976f0

void __cdecl
Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_IsInteracting_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_IsInteracting @ 14a897830

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_IsInteracting(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_IsInteracting_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_SetAvailabilities @ 14a8978c0

UFunction * __cdecl
Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_SetAvailabilities(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionMatchingInteractionAnimNodeLibrary_SetAvailabilities_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a897a00

void * __thiscall
FPoseSearchDatabaseAnimMontage::_scalar_deleting_destructor_
          (FPoseSearchDatabaseAnimMontage *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UClass_UPoseSearchAssetSamplerLibrary @ 14a897a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchAssetSamplerLibrary(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.OuterSingleton;
}

// Z_Construct_UEnum_PoseSearch_EPoseSearchAssetSamplerSpace @ 14a897a70

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EPoseSearchAssetSamplerSpace(void)

{
  if (Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EPoseSearchAssetSamplerSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchAssetSamplerInput @ 14a897ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchAssetSamplerInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerInput.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchAssetSamplerInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerInput.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerInput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchAssetSamplerPose @ 14a897b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchAssetSamplerPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerPose.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchAssetSamplerPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerPose.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchAssetSamplerPose.InnerSingleton;
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

// NewProp_bMirrored_SetBit @ 14a897bb0

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchAssetSamplerInput_Statics::NewProp_bMirrored_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewStructOps @ 14a897bc0

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchAssetSamplerInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchAssetSamplerInput,&UE::CoreUObject::Private::Construct<FPoseSearchAssetSamplerInput>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchAssetSamplerInput>,&UE::CoreUObject::Private::Destruct<FPoseSearchAssetSamplerInput>,&UE::CoreUObject::Private::Copy<FPoseSearchAssetSamplerInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a897d50

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchAssetSamplerPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchAssetSamplerPose,&UE::CoreUObject::Private::Construct<FPoseSearchAssetSamplerPose>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchAssetSamplerPose>,&UE::CoreUObject::Private::Destruct<FPoseSearchAssetSamplerPose>,&UE::CoreUObject::Private::Copy<FPoseSearchAssetSamplerPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotify_PoseSearchBase @ 14a897dd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PoseSearchBase(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_PoseSearchBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotify_PoseSearchEvent @ 14a897e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PoseSearchEvent(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_PoseSearchEvent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchBase @ 14a897e50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchBase(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition @ 14a897e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.OuterSingleton
               ,&Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchBranchIn @ 14a897ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchBranchIn(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_PoseSearchBranchIn_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase @ 14a897f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.
                OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchIKWindow @ 14a897f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchIKWindow(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_PoseSearchIKWindow_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost @ 14a897fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias @ 14a897ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.
      OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
                .OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics
                ::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.
         OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingAttribute @ 14a898050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingAttribute(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.
                OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingAttribute_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingEvent @ 14a898090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingEvent(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingEvent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchIKWindowConstraint @ 14a8980f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchIKWindowConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchIKWindowConstraint.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchIKWindowConstraint.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchIKWindowConstraint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchIKWindowConstraint.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchIKWindowConstraint.InnerSingleton;
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

// Z_Construct_UClass_UMultiAnimAsset @ 14a898170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMultiAnimAsset(void)

{
  if (Z_Registration_Info_UClass_UMultiAnimAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMultiAnimAsset.OuterSingleton,
               &Z_Construct_UClass_UMultiAnimAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMultiAnimAsset.OuterSingleton;
}

// Z_Construct_UFunction_UMultiAnimAsset_BP_GetAnimationAsset @ 14a8981c0

UFunction * __cdecl Z_Construct_UFunction_UMultiAnimAsset_BP_GetAnimationAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMultiAnimAsset_BP_GetAnimationAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EPoseSearchAssetSamplerSpace_StaticEnum @ 14a898200

UEnum * __cdecl EPoseSearchAssetSamplerSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchAssetSamplerSpace,(UObject *)pUVar1,
                       L"EPoseSearchAssetSamplerSpace");
  }
  return Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a8983e0

void * __thiscall
FPoseSearchDatabaseMultiAnimAsset::_scalar_deleting_destructor_
          (FPoseSearchDatabaseMultiAnimAsset *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UFunction_UMultiAnimAsset_BP_GetOrigin @ 14a898450

UFunction * __cdecl Z_Construct_UFunction_UMultiAnimAsset_BP_GetOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMultiAnimAsset_BP_GetOrigin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_Draw @ 14a898530

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_Draw(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_Draw_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_GetTransformByName @ 14a898590

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_GetTransformByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_GetTransformByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_SamplePose @ 14a8986a0

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_SamplePose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchAssetSamplerLibrary_SamplePose_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a898ae0

void * __thiscall
FPoseHistoryContextProperty::_scalar_deleting_destructor_
          (FPoseHistoryContextProperty *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->Binding)._padding_ = (longlong)&___7FChooserPropertyBinding__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Binding).CompiledBinding.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Binding).PropertyBindingChain.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FChooserParameterBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// NewStructOps @ 14a898b90

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchIKWindowConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchIKWindowConstraint,&UE::CoreUObject::Private::Construct<FPoseSearchIKWindowConstraint>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchIKWindowConstraint>,&UE::CoreUObject::Private::Destruct<FPoseSearchIKWindowConstraint>,&UE::CoreUObject::Private::Copy<FPoseSearchIKWindowConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a898cc0

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchCost,&UE::CoreUObject::Private::Construct<FPoseSearchCost>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchCost>,&UE::CoreUObject::Private::Destruct<FPoseSearchCost>,&UE::CoreUObject::Private::Copy<FPoseSearchCost>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a89ca20

void * __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::_scalar_deleting_destructor_
          (FAnimNode_PoseSearchHistoryCollector_Base *this,uint param_1)

{
  ~FAnimNode_PoseSearchHistoryCollector_Base(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a89d0e0

void * __thiscall
FAnimNode_PoseSearchHistoryCollector::_scalar_deleting_destructor_
          (FAnimNode_PoseSearchHistoryCollector *this,uint param_1)

{
  FAnimNode_PoseSearchHistoryCollector_Base::~FAnimNode_PoseSearchHistoryCollector_Base
            ((FAnimNode_PoseSearchHistoryCollector_Base *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a89d740

void * __thiscall
FAnimNode_PoseSearchComponentSpaceHistoryCollector::_scalar_deleting_destructor_
          (FAnimNode_PoseSearchComponentSpaceHistoryCollector *this,uint param_1)

{
  FAnimNode_PoseSearchHistoryCollector_Base::~FAnimNode_PoseSearchHistoryCollector_Base
            ((FAnimNode_PoseSearchHistoryCollector_Base *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// Z_Construct_UClass_UPoseSearchDatabase_NoRegister @ 14a89f0c0

UClass * __cdecl Z_Construct_UClass_UPoseSearchDatabase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchDatabase",
               &Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton,
               UPoseSearchDatabase::StaticRegisterNativesUPoseSearchDatabase,0x1e8,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchDatabase>,
               InternalVTableHelperCtorCaller<UPoseSearchDatabase>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchInteractionAvailability @ 14a89f180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchInteractionAvailability(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailability.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailability.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchInteractionAvailability_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailability.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailability.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchInteractionAvailabilityEx @ 14a89f200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchInteractionAvailabilityEx(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailabilityEx.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailabilityEx.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchInteractionAvailabilityEx_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailabilityEx.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailabilityEx.InnerSingleton;
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

// NewProp_bDisableCollisions_SetBit @ 14a89f280

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchInteractionAvailability_Statics::
NewProp_bDisableCollisions_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14a89f290

void * __thiscall
FAnimNode_MotionMatchingInteraction::_scalar_deleting_destructor_
          (FAnimNode_MotionMatchingInteraction *this,uint param_1)

{
  ~FAnimNode_MotionMatchingInteraction(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// NewStructOps @ 14a89f2d0

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchInteractionAvailability_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchInteractionAvailability,&UE::CoreUObject::Private::Construct<FPoseSearchInteractionAvailability>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchInteractionAvailability>,&UE::CoreUObject::Private::Destruct<FPoseSearchInteractionAvailability>,&UE::CoreUObject::Private::Copy<FPoseSearchInteractionAvailability>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a89f310

void * __thiscall
FAnimNode_MotionMatching::_scalar_deleting_destructor_(FAnimNode_MotionMatching *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FPoseSearchInteractionAvailability,int>
            ((FPoseSearchInteractionAvailability *)(this->Availabilities).AllocatorInstance.Data,
             (this->Availabilities).ArrayNum);
  pFVar1 = (this->Availabilities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DatabasesToSearch).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMotionMatchingState::~FMotionMatchingState(&this->MotionMatchingState);
  FAnimNode_BlendStack_Standalone::~FAnimNode_BlendStack_Standalone
            ((FAnimNode_BlendStack_Standalone *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,800);
  }
  return this;
}

// NewStructOps @ 14a89f390

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchInteractionAvailabilityEx_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchInteractionAvailabilityEx,&UE::CoreUObject::Private::Construct<FPoseSearchInteractionAvailabilityEx>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchInteractionAvailabilityEx>,&UE::CoreUObject::Private::Destruct<FPoseSearchInteractionAvailabilityEx>,&UE::CoreUObject::Private::Copy<FPoseSearchInteractionAvailabilityEx>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a89f550

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchInteractionAnimContextAvailabilities_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchInteractionAnimContextAvailabilities,&UE::CoreUObject::Private::Construct<FPoseSearchInteractionAnimContextAvailabilities>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchInteractionAnimContextAvailabilities>,&UE::CoreUObject::Private::Destruct<FPoseSearchInteractionAnimContextAvailabilities>,&UE::CoreUObject::Private::Copy<FPoseSearchInteractionAnimContextAvailabilities>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// BinarySearch<TArrayView<int_const_,int>,int,TLess<void>_> @ 14a89fe50

int __cdecl
Algo::BinarySearch<TArrayView<int_const_,int>,int,TLess<void>_>
          (TArrayView<int_const_,int> *param_1,int *param_2,TLess<void> param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar5 = uVar1;
    do {
      iVar3 = (uVar5 >> 1) + iVar4;
      if (param_1->DataPtr[iVar3] < *param_2) {
        iVar4 = iVar3 + (uVar5 & 1);
      }
      uVar2 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar2 != 0);
  }
  iVar3 = -1;
  if ((iVar4 < (int)uVar1) && (iVar3 = -1, param_1->DataPtr[iVar4] <= *param_2)) {
    iVar3 = iVar4;
  }
  return iVar3;
}

// ConstructItems<TObjectPtr<UObject_const_>,TObjectPtr<UObject_const_>,int> @ 14a89fec0

void __cdecl
ConstructItems<TObjectPtr<UObject_const_>,TObjectPtr<UObject_const_>,int>
          (void *param_1,TObjectPtr<UObject_const_> *param_2,int param_3)

{
  TObjectPtr<UObject_const_> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UObject_const_>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UObject_const_>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UObject *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UPoseSearchDatabase_const_>,TObjectPtr<UPoseSearchDatabase_const_>,int> @ 14a89ff20

void __cdecl
ConstructItems<TObjectPtr<UPoseSearchDatabase_const_>,TObjectPtr<UPoseSearchDatabase_const_>,int>
          (void *param_1,TObjectPtr<UPoseSearchDatabase_const_> *param_2,int param_3)

{
  TObjectPtr<UPoseSearchDatabase_const_> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UPoseSearchDatabase_const_>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UPoseSearchDatabase_const_>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UPoseSearchDatabase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UPoseSearchDatabase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPoseSearchInteractionAvailability,FPoseSearchInteractionAvailability,int> @ 14a89ff80

void __cdecl
ConstructItems<FPoseSearchInteractionAvailability,FPoseSearchInteractionAvailability,int>
          (void *param_1,FPoseSearchInteractionAvailability *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  uint uVar2;
  UObject *pUVar3;
  FName _Src;
  FName *pFVar4;
  int *piVar5;
  FName *pFVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x1c);
    pFVar6 = &param_2->Tag;
    do {
      pUVar3 = *(UObject **)&pFVar6[-1].ComparisonIndex;
      *(UObject **)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pFVar6) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pFVar1 = (ForAnyElementType *)(piVar5 + -3);
      *(FName *)(piVar5 + -5) = *pFVar6;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      uVar2 = pFVar6[2].ComparisonIndex.Value;
      _Src = pFVar6[1];
      piVar5[-1] = uVar2;
      if (uVar2 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar2,0,pFVar1,uVar2,piVar5);
        memcpy(pFVar1->Data,(void *)_Src,(longlong)(int)uVar2 << 3);
      }
      piVar5[1] = pFVar6[3].ComparisonIndex.Value;
      piVar5[2] = pFVar6[3].Number;
      *(char *)(piVar5 + 3) = (char)pFVar6[4].ComparisonIndex.Value;
      pFVar4 = pFVar6 + 4;
      pFVar6 = pFVar6 + 6;
      piVar5[4] = pFVar4->Number;
      piVar5 = piVar5 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPoseSearchInteractionAvailabilityEx,FPoseSearchInteractionAvailabilityEx,int> @ 14a8a0090

void __cdecl
ConstructItems<FPoseSearchInteractionAvailabilityEx,FPoseSearchInteractionAvailabilityEx,int>
          (void *param_1,FPoseSearchInteractionAvailabilityEx *param_2,int param_3)

{
  undefined8 *puVar1;
  IPoseHistory **ppIVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x38);
    ppIVar2 = &param_2->PoseHistory;
    do {
      FPoseSearchInteractionAvailability::FPoseSearchInteractionAvailability
                ((FPoseSearchInteractionAvailability *)(puVar1 + -7),
                 (FPoseSearchInteractionAvailability *)
                 ((longlong)param_2 + (-0x38 - (longlong)param_1) + (longlong)puVar1));
      *(FName *)(puVar1 + -1) = *(FName *)(ppIVar2 + -1);
      *puVar1 = *ppIVar2;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 8;
      ppIVar2 = ppIVar2 + 8;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<UE::PoseSearch::FPoseHistoryEntry,unsigned_int> @ 14a8a0110

void __cdecl
DestructItems<UE::PoseSearch::FPoseHistoryEntry,unsigned_int>
          (FPoseHistoryEntry *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ComponentSpaceScales;
    do {
      pFVar1 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data
      ;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FPoseHistoryEntry *)(pTVar2 + -2))->ComponentSpaceRotations).AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPoseSearchInteractionAvailability,int> @ 14a8a0180

void __cdecl
DestructItems<FPoseSearchInteractionAvailability,int>
          (FPoseSearchInteractionAvailability *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RolesFilter;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPoseSearchInteractionAvailabilityEx,int> @ 14a8a01c0

void __cdecl
DestructItems<FPoseSearchInteractionAvailabilityEx,int>
          (FPoseSearchInteractionAvailabilityEx *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindChannelRecursive<`UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime'::__l6::<lambda_1>_> @ 14a8a24d0

UPoseSearchFeatureChannel * __cdecl
UPoseSearchSchema::
FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime_::__l6::<lambda_1>_>
          (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *param_1,<lambda_1> param_2)

{
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar1;
  int iVar2;
  TObjectPtr<UPoseSearchFeatureChannel> TVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  UPoseSearchFeatureChannel *pUVar6;
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar7;
  undefined4 uStack_2c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_28;
  undefined1 local_18 [16];
  
  pTVar7 = &param_1->DataPtr->field0_0x0;
  pTVar1 = pTVar7 + param_1->ArrayNum;
  do {
    if (pTVar7 == pTVar1) {
      return (UPoseSearchFeatureChannel *)0x0;
    }
    TVar3.field0_0x0 = (TObjectPtr<UPoseSearchFeatureChannel>_u_0)pTVar7->DebugPtr;
    if (TVar3.field0_0x0 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar4 = Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x30) +
           (longlong)iVar2 * 8) == &pUVar4->_padding_)) {
        return (UPoseSearchFeatureChannel *)TVar3.field0_0x0;
      }
      puVar5 = (undefined8 *)
               (**(code **)(pTVar7->DebugPtr->_padding_ + 0x2c8))(pTVar7->DebugPtr,local_18);
      local_28.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)*puVar5;
      local_28._12_4_ = uStack_2c;
      local_28.ArrayNum = *(int *)(puVar5 + 1);
      pUVar6 = FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime_::__l6::<lambda_1>_>
                         (&local_28,param_2);
      if (pUVar6 != (UPoseSearchFeatureChannel *)0x0) {
        return pUVar6;
      }
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// FindChannelRecursive<`UE::PoseSearch::FDebugDrawParams::ExtractPosition'::__l13::<lambda_1>_> @ 14a8a2590

UPoseSearchFeatureChannel * __cdecl
UPoseSearchSchema::
FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractPosition_::__l13::<lambda_1>_>
          (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *param_1,<lambda_1> *param_2
          )

{
  TObjectPtr<UPoseSearchFeatureChannel> *pTVar1;
  int iVar2;
  TObjectPtr<UPoseSearchFeatureChannel> TVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  UPoseSearchFeatureChannel *pUVar6;
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar7;
  undefined4 uStack_5c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_58;
  undefined1 local_48 [16];
  <lambda_1> local_38 [2];
  
  pTVar7 = &param_1->DataPtr->field0_0x0;
  pTVar1 = (TObjectPtr<UPoseSearchFeatureChannel> *)(pTVar7 + param_1->ArrayNum);
  do {
    if (pTVar7 == (TObjectPtr<UPoseSearchFeatureChannel>_u_0 *)pTVar1) {
      return (UPoseSearchFeatureChannel *)0x0;
    }
    TVar3.field0_0x0 = (TObjectPtr<UPoseSearchFeatureChannel>_u_0)pTVar7->DebugPtr;
    if (TVar3.field0_0x0 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar4 = Z_Construct_UClass_UPoseSearchFeatureChannel_Position_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((((((iVar2 <= *(int *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x30) +
               (longlong)iVar2 * 8) == &pUVar4->_padding_)) &&
            ((char)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x80))->_padding_ ==
             param_2->SchemaBoneIdx)) &&
           ((param_2->SampleTimeOffset ==
             (float)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                    ChannelDataOffset &&
            ((float)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                    ChannelCardinality == 0.0)))) &&
          ((*(EPermutationTimeType *)
             ((longlong)
              &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x80))->_padding_ + 4) ==
            param_2->PermutationTimeType &&
           ((*(int *)((longlong)
                      &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_
                     + 4) == param_2->SamplingAttributeId &&
            (*(char *)((longlong)
                       &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x80))->
                        _padding_ + 1) == '\0')))))) &&
         ((*(FName *)((longlong)
                      &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_
                     + 4) == *param_2->Role &&
          (*(FName *)((longlong)
                      &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_
                     + 4) == *param_2->Role)))) {
        return (UPoseSearchFeatureChannel *)TVar3.field0_0x0;
      }
      puVar5 = (undefined8 *)
               (**(code **)(pTVar7->DebugPtr->_padding_ + 0x2c8))(pTVar7->DebugPtr,local_48);
      local_38[0].SampleTimeOffset = param_2->SampleTimeOffset;
      local_38[0].SchemaBoneIdx = param_2->SchemaBoneIdx;
      local_38[0]._5_3_ = *(undefined3 *)&param_2->field_0x5;
      local_38[0].Role = param_2->Role;
      local_38[0].PermutationTimeType = param_2->PermutationTimeType;
      local_38[0]._17_3_ = *(undefined3 *)&param_2->field_0x11;
      local_38[0].SamplingAttributeId = param_2->SamplingAttributeId;
      local_58.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)*puVar5;
      local_58._12_4_ = uStack_5c;
      local_58.ArrayNum = *(int *)(puVar5 + 1);
      pUVar6 = FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractPosition_::__l13::<lambda_1>_>
                         (&local_58,local_38);
      if (pUVar6 != (UPoseSearchFeatureChannel *)0x0) {
        return pUVar6;
      }
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// FindChannelRecursive<`UE::PoseSearch::FDebugDrawParams::ExtractRotation'::__l14::<lambda_1>_> @ 14a8a26e0

UPoseSearchFeatureChannel * __cdecl
UPoseSearchSchema::
FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractRotation_::__l14::<lambda_1>_>
          (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *param_1,<lambda_1> *param_2
          )

{
  TObjectPtr<UPoseSearchFeatureChannel> *pTVar1;
  TVector<double> *pTVar2;
  int iVar3;
  TObjectPtr<UPoseSearchFeatureChannel> TVar4;
  TVector<double> (*paTVar5) [3];
  double dVar6;
  bool bVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  UPoseSearchFeatureChannel *pUVar10;
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar11;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_b8;
  TObjectPtr<UPoseSearchFeatureChannel> *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TVector<double>_u_0 local_98;
  <lambda_1> local_78;
  undefined1 local_38 [48];
  
  dVar6 = __real_3e45798ee0000000;
  pTVar11 = &param_1->DataPtr->field0_0x0;
  pTVar1 = (TObjectPtr<UPoseSearchFeatureChannel> *)(pTVar11 + param_1->ArrayNum);
  do {
    if (pTVar11 == (TObjectPtr<UPoseSearchFeatureChannel>_u_0 *)pTVar1) {
      return (UPoseSearchFeatureChannel *)0x0;
    }
    TVar4.field0_0x0 = (TObjectPtr<UPoseSearchFeatureChannel>_u_0)pTVar11->DebugPtr;
    if (TVar4.field0_0x0 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar8 = Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_NoRegister();
      iVar3 = (int)pUVar8->_padding_;
      if ((((((iVar3 <= *(int *)(*(longlong *)((longlong)TVar4.field0_0x0 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)TVar4.field0_0x0 + 0x10) + 0x30) +
               (longlong)iVar3 * 8) == &pUVar8->_padding_)) &&
            (*(char *)((longlong)
                       &((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x80))->
                        _padding_ + 1) == param_2->SchemaBoneIdx)) &&
           ((param_2->SampleTimeOffset ==
             (float)((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x40))->
                    ChannelDataOffset &&
            ((float)((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x40))->
                    ChannelCardinality == 0.0)))) &&
          ((*(EPermutationTimeType *)
             ((longlong)
              &((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x80))->_padding_ + 5) ==
            param_2->PermutationTimeType &&
           ((*(int *)((longlong)
                      &((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x40))->_padding_
                     + 4) == param_2->SamplingAttributeId &&
            (*(char *)((longlong)
                       &((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x80))->
                        _padding_ + 2) == '\0')))))) &&
         ((*(FName *)((longlong)
                      &((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x40))->_padding_
                     + 4) == *param_2->Role &&
          ((*(FName *)((longlong)
                       &((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x40))->
                        _padding_ + 4) == *param_2->Role &&
           ((uint)(byte)((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x80))->
                        _padding_ == param_2->HeadingAxis)))))) {
        local_b8.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)(param_2->PoseVector).DataPtr;
        local_b8.ArrayNum = (param_2->PoseVector).ArrayNum;
        local_b8._12_4_ = *(undefined4 *)&(param_2->PoseVector).field_0xc;
        UE::PoseSearch::FFeatureVectorHelper::DecodeVector
                  ((TVector<double> *)&local_98._s_0,(TArrayView<float_const_,int> *)&local_b8,
                   *(int *)((longlong)TVar4.field0_0x0 + 0x38),
                   *(EComponentStrippingVector *)
                    ((longlong)
                     &((UPoseSearchFeatureChannel *)((longlong)TVar4.field0_0x0 + 0x80))->_padding_
                    + 4));
        bVar7 = UE::Math::TVector<double>::Normalize((TVector<double> *)&local_98._s_0,dVar6);
        if (bVar7) {
          iVar3 = param_2->HeadingAxis;
          ((TObjectPtr<UPoseSearchFeatureChannel>_u_0 *)(*param_2->FoundHeading + iVar3))->DebugPtr
               = (UPoseSearchFeatureChannel *)TVar4.field0_0x0;
          paTVar5 = param_2->DecodedHeading;
          pTVar2 = *paTVar5 + iVar3;
          (pTVar2->field0_0x0)._s_0.X = local_98._s_0.X;
          (pTVar2->field0_0x0)._s_0.Y = local_98._s_0.Y;
          (*paTVar5)[iVar3].field0_0x0._s_0.Z = local_98._s_0.Z;
          return (UPoseSearchFeatureChannel *)TVar4.field0_0x0;
        }
      }
      puVar9 = (undefined8 *)
               (**(code **)(pTVar11->DebugPtr->_padding_ + 0x2c8))(pTVar11->DebugPtr,local_38);
      local_78.SampleTimeOffset = param_2->SampleTimeOffset;
      local_78.SchemaBoneIdx = param_2->SchemaBoneIdx;
      local_78._5_3_ = *(undefined3 *)&param_2->field_0x5;
      local_78.Role = param_2->Role;
      local_78.PermutationTimeType = param_2->PermutationTimeType;
      local_78._17_3_ = *(undefined3 *)&param_2->field_0x11;
      local_78.SamplingAttributeId = param_2->SamplingAttributeId;
      local_78.HeadingAxis = param_2->HeadingAxis;
      local_78._28_4_ = *(undefined4 *)&param_2->field_0x1c;
      local_b8.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)*puVar9;
      local_78.PoseVector.DataPtr = (param_2->PoseVector).DataPtr;
      local_78.PoseVector.ArrayNum = (param_2->PoseVector).ArrayNum;
      local_78.PoseVector._12_4_ = *(undefined4 *)&(param_2->PoseVector).field_0xc;
      iStack_a0 = *(int *)(puVar9 + 1);
      local_78.FoundHeading = param_2->FoundHeading;
      local_78.DecodedHeading = param_2->DecodedHeading;
      local_b8._12_4_ = uStack_9c;
      local_b8.ArrayNum = iStack_a0;
      local_a8 = local_b8.DataPtr;
      pUVar10 = FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractRotation_::__l14::<lambda_1>_>
                          (&local_b8,&local_78);
      if (pUVar10 != (UPoseSearchFeatureChannel *)0x0) {
        return pUVar10;
      }
    }
    pTVar11 = pTVar11 + 1;
  } while( true );
}

// InternalConstructor<UAnimNotifyState_PoseSearchBase> @ 14a8a6700

void __cdecl InternalConstructor<UAnimNotifyState_PoseSearchBase>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_PoseSearchBlockTransition> @ 14a8a6730

void __cdecl
InternalConstructor<UAnimNotifyState_PoseSearchBlockTransition>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBlockTransition__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_PoseSearchBranchIn> @ 14a8a6760

void __cdecl InternalConstructor<UAnimNotifyState_PoseSearchBranchIn>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBranchIn__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_PoseSearchExcludeFromDatabase> @ 14a8a67a0

void __cdecl
InternalConstructor<UAnimNotifyState_PoseSearchExcludeFromDatabase>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchExcludeFromDatabase__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_PoseSearchIKWindow> @ 14a8a67d0

void __cdecl InternalConstructor<UAnimNotifyState_PoseSearchIKWindow>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchIKWindow__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_PoseSearchModifyCost> @ 14a8a6810

void __cdecl InternalConstructor<UAnimNotifyState_PoseSearchModifyCost>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xbf800000;
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchModifyCost__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias> @ 14a8a6850

void __cdecl
InternalConstructor<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>
          (FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xbf800000;
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_PoseSearchSamplingAttribute> @ 14a8a6890

void __cdecl
InternalConstructor<UAnimNotifyState_PoseSearchSamplingAttribute>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchSamplingAttribute__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_PoseSearchSamplingEvent> @ 14a8a68c0

void __cdecl
InternalConstructor<UAnimNotifyState_PoseSearchSamplingEvent>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchSamplingEvent__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotify_PoseSearchBase> @ 14a8a68f0

void __cdecl InternalConstructor<UAnimNotify_PoseSearchBase>(FObjectInitializer *param_1)

{
  UAnimNotify *this;
  
  this = (UAnimNotify *)param_1->Obj;
  if (this != (UAnimNotify *)0x0) {
    UAnimNotify::UAnimNotify(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotify_PoseSearchBase__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotify_PoseSearchEvent> @ 14a8a6920

void __cdecl InternalConstructor<UAnimNotify_PoseSearchEvent>(FObjectInitializer *param_1)

{
  UAnimNotify *this;
  
  this = (UAnimNotify *)param_1->Obj;
  if (this != (UAnimNotify *)0x0) {
    UAnimNotify::UAnimNotify(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotify_PoseSearchEvent__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMotionMatchingAnimNodeLibrary> @ 14a8a6960

void __cdecl InternalConstructor<UMotionMatchingAnimNodeLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMotionMatchingAnimNodeLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMotionMatchingInteractionAnimNodeLibrary> @ 14a8a6990

void __cdecl
InternalConstructor<UMotionMatchingInteractionAnimNodeLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMotionMatchingInteractionAnimNodeLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMultiAnimAsset> @ 14a8a69c0

void __cdecl InternalConstructor<UMultiAnimAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMultiAnimAsset__6B_;
  }
  return;
}

// InternalConstructor<UPoseSearchAssetSamplerLibrary> @ 14a8a69f0

void __cdecl InternalConstructor<UPoseSearchAssetSamplerLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPoseSearchAssetSamplerLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPoseSearchDatabase> @ 14a8a6a20

void __cdecl InternalConstructor<UPoseSearchDatabase>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xbc23d70a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&___7UPoseSearchDatabase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xbba3d70a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    *(undefined8 *)((longlong)&this[2]._padding_ + 4) = 200;
    UE::PoseSearch::FSearchIndex::FSearchIndex((FSearchIndex *)&this[2].NativeClass);
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[9]._padding_ = 0;
    *(undefined4 *)&this[9]._padding_ = 0;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0x80;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    *(undefined4 *)&this[9]._padding_ = 0xffffffff;
    this[9].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    *(undefined4 *)&this[10]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPoseSearchTrajectoryPredictorInterface> @ 14a8a6af0

void __cdecl
InternalConstructor<UPoseSearchTrajectoryPredictorInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UPoseSearchTrajectoryPredictorInterface__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBase> @ 14a8a6b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchBase::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBlockTransition> @ 14a8a6bd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBlockTransition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchBlockTransition::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBlockTransition__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBranchIn> @ 14a8a6c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBranchIn>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchBranchIn::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBranchIn__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchExcludeFromDatabase> @ 14a8a6d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchExcludeFromDatabase>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchExcludeFromDatabase::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchExcludeFromDatabase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchIKWindow> @ 14a8a6de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchIKWindow>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchIKWindow::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchIKWindow__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchModifyCost> @ 14a8a6ea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchModifyCost>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchModifyCost::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xbf800000;
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchModifyCost__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias> @ 14a8a6f60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xbf800000;
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingAttribute> @ 14a8a7020

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingAttribute>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchSamplingAttribute::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchSamplingAttribute__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingEvent> @ 14a8a70d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingEvent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_PoseSearchSamplingEvent::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchSamplingEvent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchBase> @ 14a8a7180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotify *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_PoseSearchBase::GetPrivateStaticClass();
  this = (UAnimNotify *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotify *)0x0) {
    UAnimNotify::UAnimNotify(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotify_PoseSearchBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchEvent> @ 14a8a7230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchEvent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotify *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_PoseSearchEvent::GetPrivateStaticClass();
  this = (UAnimNotify *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotify *)0x0) {
    UAnimNotify::UAnimNotify(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotify_PoseSearchEvent__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionMatchingAnimNodeLibrary> @ 14a8a72e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionMatchingAnimNodeLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionMatchingAnimNodeLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMotionMatchingAnimNodeLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionMatchingInteractionAnimNodeLibrary> @ 14a8a7390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionMatchingInteractionAnimNodeLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionMatchingInteractionAnimNodeLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMotionMatchingInteractionAnimNodeLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMultiAnimAsset> @ 14a8a7440

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMultiAnimAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMultiAnimAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMultiAnimAsset__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchAssetSamplerLibrary> @ 14a8a74f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchAssetSamplerLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchAssetSamplerLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPoseSearchAssetSamplerLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchDatabase> @ 14a8a75a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPoseSearchDatabase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchDatabase::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xbc23d70a;
    this->_padding_ = (longlong)&___7UPoseSearchDatabase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0xbba3d70a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    *(undefined8 *)((longlong)&this[2]._padding_ + 4) = 200;
    UE::PoseSearch::FSearchIndex::FSearchIndex((FSearchIndex *)&this[2].NativeClass);
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[9]._padding_ = 0;
    *(undefined4 *)&this[9]._padding_ = 0;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[9]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    this[9].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    *(undefined4 *)&this[10]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchTrajectoryPredictorInterface> @ 14a8a76e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchTrajectoryPredictorInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchTrajectoryPredictorInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPoseSearchTrajectoryPredictorInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UPoseSearchSchema_const_,UPoseSearchSchema_const_*,0> @ 14a8a7790

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPoseSearchSchema_const_,UPoseSearchSchema_const_*,0>
          (TObjectPtr<UPoseSearchSchema_const_> *param_1,UPoseSearchSchema **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPoseSearchSchema *)0x0) {
    return *param_2 == (UPoseSearchSchema *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPoseSearchDatabase,TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>,0> @ 14a8a77b0

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<UPoseSearchDatabase,TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>,0>
          (TObjectPtr<UPoseSearchDatabase> *param_1,
          TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *param_2)

{
  UPoseSearchDatabase *pUVar1;
  
  pUVar1 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  if ((param_1->field0_0x0).DebugPtr == (UPoseSearchDatabase *)0x0) {
    return pUVar1 == (UPoseSearchDatabase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == pUVar1;
}

// IterateChannelsRecursive<`UPoseSearchDatabase::CalculateDynamicWeightsSqrt'::__l2::<lambda_1>_> @ 14a8a77f0

void __cdecl
UPoseSearchSchema::
IterateChannelsRecursive<_UPoseSearchDatabase::CalculateDynamicWeightsSqrt_::__l2::<lambda_1>_>
          (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *param_1,<lambda_1> *param_2
          )

{
  TObjectPtr<UPoseSearchFeatureChannel> *pTVar1;
  int iVar2;
  TObjectPtr<UPoseSearchFeatureChannel> TVar3;
  bool *pbVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar7;
  undefined4 uStack_4c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar7 = &param_1->DataPtr->field0_0x0;
  pTVar1 = (TObjectPtr<UPoseSearchFeatureChannel> *)(pTVar7 + param_1->ArrayNum);
  for (; pTVar7 != (TObjectPtr<UPoseSearchFeatureChannel>_u_0 *)pTVar1; pTVar7 = pTVar7 + 1) {
    TVar3.field0_0x0 = (TObjectPtr<UPoseSearchFeatureChannel>_u_0)pTVar7->DebugPtr;
    if (TVar3.field0_0x0 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar5 = Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((((iVar2 <= *(int *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x30) +
             (longlong)iVar2 * 8) == &pUVar5->_padding_)) &&
          (*(int *)((longlong)TVar3.field0_0x0 + 0x48) != -1)) &&
         (*(int *)((longlong)TVar3.field0_0x0 + 0x48) !=
          UE::PoseSearch::GVarMotionMatchDebugWeightGroupID)) {
        pbVar4 = param_2->bInitialized;
        if (*pbVar4 == false) {
          memcpy(param_2->DynamicWeightsSqrtBuffer->DataPtr,
                 (param_2->SearchIndex->WeightsSqrt).AllocatorInstance.Data,
                 (longlong)(param_2->SearchIndex->WeightsSqrt).ArrayNum << 2);
          *pbVar4 = true;
        }
        memset(param_2->DynamicWeightsSqrtBuffer->DataPtr +
               *(int *)((longlong)TVar3.field0_0x0 + 0x38),0,
               (longlong)*(int *)((longlong)TVar3.field0_0x0 + 0x3c) << 2);
      }
      puVar6 = (undefined8 *)
               (**(code **)(pTVar7->DebugPtr->_padding_ + 0x2c8))(pTVar7->DebugPtr,local_38);
      local_28.bInitialized = param_2->bInitialized;
      local_28.SearchIndex = param_2->SearchIndex;
      local_28.DynamicWeightsSqrtBuffer = param_2->DynamicWeightsSqrtBuffer;
      local_48.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)*puVar6;
      local_48._12_4_ = uStack_4c;
      local_48.ArrayNum = *(int *)(puVar6 + 1);
      IterateChannelsRecursive<_UPoseSearchDatabase::CalculateDynamicWeightsSqrt_::__l2::<lambda_1>_>
                (&local_48,&local_28);
    }
  }
  return;
}

// StaticEnum<enum_EPoseSearchAssetSamplerSpace> @ 14a8a8930

UEnum * __cdecl StaticEnum<enum_EPoseSearchAssetSamplerSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchAssetSamplerSpace,(UObject *)pUVar1,
                       L"EPoseSearchAssetSamplerSpace");
  }
  return Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton;
}

// StaticEnum<enum_EPoseSearchMirrorOption> @ 14a8a8970

UEnum * __cdecl StaticEnum<enum_EPoseSearchMirrorOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption,(UObject *)pUVar1,
                       L"EPoseSearchMirrorOption");
  }
  return Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton;
}

// StaticEnum<enum_EPoseSearchMode> @ 14a8a89b0

UEnum * __cdecl StaticEnum<enum_EPoseSearchMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchMode,(UObject *)pUVar1,
                       L"EPoseSearchMode");
  }
  return Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton;
}

// _Copy_memmove<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval_*,nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval_*> @ 14a8a8af0

Interval * __cdecl
std::
_Copy_memmove<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval_*,nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval_*>
          (Interval *param_1,Interval *param_2,Interval *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (Interval *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval_*> @ 14a8a8b30

Interval * __cdecl
std::
_Copy_memmove_tail<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval_*>
          (char *param_1,Interval *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (Interval *)((longlong)&param_2->low + param_3);
}

// _Resize<std::_Value_init_tag> @ 14a8a8b60

void __thiscall
std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
          (vector<int,std::allocator<int>_> *this,ulong64 param_1,_Value_init_tag *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  
  piVar1 = (this->_Mypair)._Myval2._Mylast;
  piVar3 = (this->_Mypair)._Myval2._Myfirst;
  uVar7 = (longlong)piVar1 - (longlong)piVar3 >> 2;
  if (param_1 < uVar7) {
    (this->_Mypair)._Myval2._Mylast = piVar3 + param_1;
    return;
  }
  if (uVar7 < param_1) {
    uVar4 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)piVar3 >> 2;
    if (param_1 <= uVar4) {
      memset(piVar1,0,(param_1 - uVar7) * 4);
      (this->_Mypair)._Myval2._Mylast = piVar1 + (param_1 - uVar7);
      return;
    }
    if (0x3fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar2 = 0x3fffffffffffffff;
    }
    else {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar2 = param_1;
      if ((param_1 <= uVar4) && (uVar2 = uVar4, 0x3fffffffffffffff < uVar4)) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
    }
    piVar3 = _Allocate<16,std::_Default_allocate_traits>(uVar2 * 4);
    memset(piVar3 + uVar7,0,(param_1 - uVar7) * 4);
    piVar1 = (this->_Mypair)._Myval2._Myfirst;
    memmove(piVar3,piVar1,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)piVar1);
    piVar1 = (this->_Mypair)._Myval2._Myfirst;
    if (piVar1 != (int *)0x0) {
      uVar6 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)piVar1 & 0xfffffffffffffffc;
      piVar5 = piVar1;
      if (0xfff < uVar6) {
        piVar5 = *(int **)(piVar1 + -2);
        uVar6 = uVar6 + 0x27;
        if (0x1f < (ulonglong)((longlong)piVar1 + (-8 - (longlong)piVar5))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(piVar5,uVar6);
    }
    (this->_Mypair)._Myval2._Myfirst = piVar3;
    (this->_Mypair)._Myval2._Mylast = piVar3 + param_1;
    (this->_Mypair)._Myval2._Myend = piVar3 + uVar2;
  }
  return;
}

// _Resize<std::_Value_init_tag> @ 14a8a8d00

void __thiscall
std::
vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
::_Resize<std::_Value_init_tag>
          (vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
           *this,ulong64 param_1,_Value_init_tag *param_2)

{
  Interval *pIVar1;
  Interval IVar2;
  ulonglong uVar3;
  Interval *pIVar4;
  ulonglong uVar5;
  Interval IVar6;
  ulong64 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  pIVar4 = (this->_Mypair)._Myval2._Mylast;
  pIVar1 = (this->_Mypair)._Myval2._Myfirst;
  uVar9 = (longlong)pIVar4 - (longlong)pIVar1 >> 3;
  if (param_1 < uVar9) {
    (this->_Mypair)._Myval2._Mylast = pIVar1 + param_1;
  }
  else if (uVar9 < param_1) {
    uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar1 >> 3;
    if (uVar5 < param_1) {
      if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
        _Xlength();
      }
      if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
        uVar3 = 0x1fffffffffffffff;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
        uVar3 = param_1;
        if ((param_1 <= uVar5) && (uVar3 = uVar5, 0x1fffffffffffffff < uVar5)) {
                    /* WARNING: Subroutine does not return */
          _Throw_bad_array_new_length();
        }
      }
      pIVar4 = _Allocate<16,std::_Default_allocate_traits>(uVar3 * 8);
      if (param_1 - uVar9 != 0) {
        memset(pIVar4 + uVar9,0,(param_1 - uVar9) * 8);
      }
      pIVar1 = (this->_Mypair)._Myval2._Myfirst;
      memmove(pIVar4,pIVar1,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pIVar1);
      IVar2 = (Interval)(this->_Mypair)._Myval2._Myfirst;
      if (IVar2 != (Interval)0x0) {
        uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)IVar2 & 0xfffffffffffffff8;
        IVar6 = IVar2;
        if (0xfff < uVar7) {
          IVar6 = *(Interval *)((longlong)IVar2 + -8);
          uVar7 = uVar7 + 0x27;
          if (0x1f < (ulonglong)((longlong)IVar2 + (-8 - (longlong)IVar6))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)IVar6,uVar7);
      }
      (this->_Mypair)._Myval2._Myfirst = pIVar4;
      (this->_Mypair)._Myval2._Mylast = pIVar4 + param_1;
      (this->_Mypair)._Myval2._Myend = pIVar4 + uVar3;
    }
    else {
      lVar8 = param_1 - uVar9;
      if (lVar8 != 0) {
        memset(pIVar4,0,lVar8 * 8);
        pIVar4 = pIVar4 + lVar8;
      }
      (this->_Mypair)._Myval2._Mylast = pIVar4;
    }
  }
  return;
}

// _Uninitialized_fill_n<std::allocator<float>_> @ 14a8a8ea0

float * __cdecl
std::_Uninitialized_fill_n<std::allocator<float>_>
          (float *param_1,ulong64 param_2,float *param_3,allocator<float> *param_4)

{
  longlong lVar1;
  
  if (*param_3 == 0.0) {
    memset(param_1,0,param_2 * 4);
    return param_1 + param_2;
  }
  if (3 < param_2) {
    lVar1 = (param_2 - 4 >> 2) + 1;
    param_2 = param_2 + lVar1 * -4;
    do {
      *param_1 = *param_3;
      param_1[1] = *param_3;
      param_1[2] = *param_3;
      param_1[3] = *param_3;
      param_1 = param_1 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = *param_3;
    param_1 = param_1 + 1;
  }
  return param_1;
}

// allocate<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Node> @ 14a8a8f50

Node * __thiscall
nanoflann::PooledAllocator::
allocate<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Node>
          (PooledAllocator *this,ulong64 param_1)

{
  ulonglong uVar1;
  Node *pNVar2;
  undefined8 *puVar3;
  _iobuf *p_Var4;
  uint uVar5;
  uint uVar6;
  size_t _Size;
  
  uVar5 = (int)param_1 * 0x20;
  uVar6 = this->remaining;
  if (uVar6 < uVar5) {
    this->wastedMemory = this->wastedMemory + uVar6;
    uVar1 = (ulonglong)uVar5 + 0x17;
    _Size = 0x2000;
    if (0x2000 < uVar1) {
      _Size = uVar1;
    }
    puVar3 = malloc(_Size);
    if (puVar3 == (undefined8 *)0x0) {
      p_Var4 = (_iobuf *)__acrt_iob_func(2);
      fprintf(p_Var4,"Failed to allocate memory.\n");
    }
    *puVar3 = this->base;
    uVar6 = (int)_Size - 8;
    this->base = puVar3;
    this->loc = puVar3 + 1;
  }
  pNVar2 = this->loc;
  this->usedMemory = this->usedMemory + uVar5;
  this->remaining = uVar6 + (int)param_1 * -0x20;
  this->loc = (void *)((longlong)&pNVar2->node_type + (ulonglong)uVar5);
  return pNVar2;
}

// fill<float_*,float> @ 14a8a9000

void __cdecl std::fill<float_*,float>(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float *pfVar4;
  
  if (*param_3 == 0.0) {
    memset(param_1,0,(longlong)param_2 - (longlong)param_1 & 0xfffffffffffffffc);
    return;
  }
  uVar3 = ((longlong)param_2 - (longlong)param_1) + 3U >> 2;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (3 < uVar3)) {
    fVar1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      pfVar4 = param_1;
      for (uVar2 = uVar3 & 0x3ffffffffffffffc; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pfVar4 = fVar1;
        pfVar4 = pfVar4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffc);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14a8a90a0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_68;
  
  local_68._24_8_ = *(undefined8 *)(this + 0x18);
  local_68._40_8_ = *(undefined8 *)(this + 0x20);
  local_68._48_8_ = *(undefined8 *)(this + 0x38);
  local_68._64_8_ = *(undefined8 *)(this + 0x40);
  local_68._72_8_ = *(undefined8 *)(this + 0x60);
  local_68._88_8_ = *(undefined8 *)(this + 0x68);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                    (&local_68,param_1,
                     (CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>
                      *)this);
  return fVar1;
}

// run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_> @ 14a8a9100

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,3,0>
::
run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
          (redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>
          *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  lVar15 = (param_3->m_xpr).m_rhs._padding_;
  uVar13 = (uint)(lVar15 >> 0x3f);
  pfVar12 = *(float **)&param_1->field_0x48;
  lVar7 = (longlong)(lVar15 + (ulonglong)(uVar13 & 7)) >> 3;
  lVar9 = lVar7 * 8;
  uVar16 = (ulonglong)(uVar13 & 3) + lVar15 & 0xfffffffffffffffc;
  if (uVar16 == 0) {
    lVar9 = 1;
    pfVar11 = *(float **)&param_1->field_0x30;
    fVar22 = (**(float **)&param_1->field_0x18 - *pfVar11) * *pfVar12;
    fVar22 = fVar22 * fVar22;
    if (1 < lVar15) {
      if (3 < lVar15 + -1) {
        lVar14 = *(longlong *)&param_1->field_0x18 - (longlong)pfVar11;
        lVar8 = (longlong)pfVar12 - (longlong)pfVar11;
        pfVar11 = pfVar11 + 2;
        lVar7 = (lVar15 - 5U >> 2) + 1;
        lVar9 = lVar7 * 4 + 1;
        do {
          fVar23 = (*(float *)((longlong)pfVar11 + lVar14 + -4) - pfVar11[-1]) *
                   *(float *)((longlong)pfVar11 + lVar8 + -4);
          fVar25 = (*(float *)((longlong)pfVar11 + lVar14) - *pfVar11) *
                   *(float *)((longlong)pfVar11 + lVar8);
          fVar24 = (*(float *)((longlong)pfVar11 + lVar14 + 4) - pfVar11[1]) *
                   *(float *)((longlong)pfVar11 + lVar8 + 4);
          fVar26 = (*(float *)((longlong)pfVar11 + lVar14 + 8) - pfVar11[2]) *
                   *(float *)((longlong)pfVar11 + lVar8 + 8);
          pfVar11 = pfVar11 + 4;
          fVar22 = fVar22 + fVar23 * fVar23 + fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar9 < lVar15) {
        lVar7 = *(longlong *)&param_1->field_0x30;
        pfVar12 = (float *)(lVar7 + lVar9 * 4);
        lVar15 = lVar15 - lVar9;
        do {
          fVar23 = (*(float *)((*(longlong *)&param_1->field_0x18 - lVar7) + (longlong)pfVar12) -
                   *pfVar12) *
                   *(float *)((*(longlong *)&param_1->field_0x48 - lVar7) + (longlong)pfVar12);
          pfVar12 = pfVar12 + 1;
          fVar22 = fVar22 + fVar23 * fVar23;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
  }
  else {
    pfVar3 = *(float **)&param_1->field_0x30;
    pfVar11 = *(float **)&param_1->field_0x18;
    fVar22 = (*pfVar11 - *pfVar3) * *pfVar12;
    fVar23 = (pfVar11[1] - pfVar3[1]) * pfVar12[1];
    fVar24 = (pfVar11[2] - pfVar3[2]) * pfVar12[2];
    fVar25 = (pfVar11[3] - pfVar3[3]) * pfVar12[3];
    fVar22 = fVar22 * fVar22;
    fVar23 = fVar23 * fVar23;
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    if (4 < (longlong)uVar16) {
      fVar26 = (pfVar11[4] - pfVar3[4]) * pfVar12[4];
      fVar27 = (pfVar11[5] - pfVar3[5]) * pfVar12[5];
      fVar28 = (pfVar11[6] - pfVar3[6]) * pfVar12[6];
      fVar29 = (pfVar11[7] - pfVar3[7]) * pfVar12[7];
      fVar26 = fVar26 * fVar26;
      fVar27 = fVar27 * fVar27;
      fVar28 = fVar28 * fVar28;
      fVar29 = fVar29 * fVar29;
      if (8 < lVar9) {
        pfVar10 = pfVar3 + 0xc;
        lVar8 = (lVar9 - 9U >> 3) + 1;
        do {
          pfVar1 = (float *)(((longlong)pfVar12 - (longlong)pfVar3) + -0x10 + (longlong)pfVar10);
          pfVar2 = (float *)(((longlong)pfVar11 - (longlong)pfVar3) + -0x10 + (longlong)pfVar10);
          fVar18 = *pfVar10;
          pfVar4 = pfVar10 + 1;
          pfVar5 = pfVar10 + 2;
          pfVar6 = pfVar10 + 3;
          fVar17 = (*pfVar2 - pfVar10[-4]) * *pfVar1;
          fVar19 = (pfVar2[1] - pfVar10[-3]) * pfVar1[1];
          fVar20 = (pfVar2[2] - pfVar10[-2]) * pfVar1[2];
          fVar21 = (pfVar2[3] - pfVar10[-1]) * pfVar1[3];
          pfVar1 = (float *)(((longlong)pfVar12 - (longlong)pfVar3) + (longlong)pfVar10);
          fVar22 = fVar22 + fVar17 * fVar17;
          fVar23 = fVar23 + fVar19 * fVar19;
          fVar24 = fVar24 + fVar20 * fVar20;
          fVar25 = fVar25 + fVar21 * fVar21;
          pfVar2 = (float *)(((longlong)pfVar11 - (longlong)pfVar3) + (longlong)pfVar10);
          pfVar10 = pfVar10 + 8;
          fVar18 = (*pfVar2 - fVar18) * *pfVar1;
          fVar17 = (pfVar2[1] - *pfVar4) * pfVar1[1];
          fVar19 = (pfVar2[2] - *pfVar5) * pfVar1[2];
          fVar20 = (pfVar2[3] - *pfVar6) * pfVar1[3];
          fVar26 = fVar26 + fVar18 * fVar18;
          fVar27 = fVar27 + fVar17 * fVar17;
          fVar28 = fVar28 + fVar19 * fVar19;
          fVar29 = fVar29 + fVar20 * fVar20;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      fVar22 = fVar22 + fVar26;
      fVar23 = fVar23 + fVar27;
      fVar24 = fVar24 + fVar28;
      fVar25 = fVar25 + fVar29;
      if (lVar9 < (longlong)uVar16) {
        pfVar11 = pfVar11 + lVar7 * 8;
        pfVar10 = pfVar3 + lVar7 * 8;
        pfVar1 = pfVar12 + lVar7 * 8;
        fVar26 = (*pfVar11 - *pfVar10) * *pfVar1;
        fVar27 = (pfVar11[1] - pfVar10[1]) * pfVar1[1];
        fVar28 = (pfVar11[2] - pfVar10[2]) * pfVar1[2];
        fVar29 = (pfVar11[3] - pfVar10[3]) * pfVar1[3];
        fVar22 = fVar22 + fVar26 * fVar26;
        fVar23 = fVar23 + fVar27 * fVar27;
        fVar24 = fVar24 + fVar28 * fVar28;
        fVar25 = fVar25 + fVar29 * fVar29;
      }
    }
    fVar22 = fVar24 + fVar22 + fVar25 + fVar23;
    if ((longlong)uVar16 < lVar15) {
      if (3 < (longlong)(lVar15 - uVar16)) {
        pfVar11 = pfVar3 + uVar16 + 1;
        lVar8 = *(longlong *)&param_1->field_0x18 - (longlong)pfVar3;
        lVar7 = (longlong)pfVar12 - (longlong)pfVar3;
        lVar9 = ((lVar15 - uVar16) - 4 >> 2) + 1;
        uVar16 = uVar16 + lVar9 * 4;
        do {
          fVar23 = (*(float *)((longlong)pfVar11 + lVar8 + -4) - pfVar11[-1]) *
                   *(float *)((longlong)pfVar11 + lVar7 + -4);
          fVar25 = (*(float *)((longlong)pfVar11 + lVar8) - *pfVar11) *
                   *(float *)((longlong)pfVar11 + lVar7);
          fVar24 = (*(float *)((longlong)pfVar11 + lVar8 + 4) - pfVar11[1]) *
                   *(float *)((longlong)pfVar11 + lVar7 + 4);
          fVar26 = (*(float *)((longlong)pfVar11 + lVar8 + 8) - pfVar11[2]) *
                   *(float *)((longlong)pfVar11 + lVar7 + 8);
          pfVar11 = pfVar11 + 4;
          fVar22 = fVar22 + fVar23 * fVar23 + fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (lVar15 <= (longlong)uVar16) {
          return fVar22;
        }
      }
      lVar9 = *(longlong *)&param_1->field_0x30;
      pfVar12 = (float *)(lVar9 + uVar16 * 4);
      lVar15 = lVar15 - uVar16;
      do {
        fVar23 = (*(float *)((longlong)pfVar12 + (*(longlong *)&param_1->field_0x18 - lVar9)) -
                 *pfVar12) *
                 *(float *)((longlong)pfVar12 + (*(longlong *)&param_1->field_0x48 - lVar9));
        pfVar12 = pfVar12 + 1;
        fVar22 = fVar22 + fVar23 * fVar23;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      return fVar22;
    }
  }
  return fVar22;
}

// searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet> @ 14a8a9470

bool __thiscall
nanoflann::
KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>
          (KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
           *this,FFilteredKNNMaxHeapResultSet *param_1,float *param_2,Node *param_3,float param_4,
          vector<float,std::allocator<float>_> *param_5,float param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  Node *pNVar4;
  FDataSource *pFVar5;
  int *piVar6;
  float *pfVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  Node *pNVar12;
  int iVar13;
  ulonglong uVar14;
  Node *pNVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pNVar4 = param_3->child1;
  if ((pNVar4 == (Node *)0x0) && (param_3->child2 == (Node *)0x0)) {
    uVar11 = (param_3->node_type).lr.left;
    fVar19 = *(float *)((longlong)&param_1->_padding_ + 4);
    if (uVar11 < (param_3->node_type).lr.right) {
      do {
        uVar10 = 0;
        uVar14 = (ulonglong)(int)this->_padding_;
        fVar18 = 0.0;
        iVar2 = *(int *)(this->_padding_ + uVar11 * 4);
        if (uVar14 != 0) {
          pFVar5 = (this->distance).data_source;
          do {
            pfVar7 = param_2 + uVar10;
            iVar13 = (int)uVar10;
            uVar10 = uVar10 + 1;
            fVar17 = *pfVar7 - pFVar5->Data[iVar2 * pFVar5->PointDim + iVar13];
            fVar18 = fVar18 + fVar17 * fVar17;
          } while (uVar10 < uVar14);
        }
        if (fVar18 < fVar19) {
          uVar3 = (param_1->ExcludeFromSearchIndexes).ArrayNum;
          iVar13 = 0;
          piVar6 = (param_1->ExcludeFromSearchIndexes).DataPtr;
          uVar16 = uVar3;
          if (0 < (int)uVar3) {
            do {
              iVar1 = (uVar16 >> 1) + iVar13;
              if (piVar6[iVar1] < iVar2) {
                iVar13 = iVar1 + (uVar16 & 1);
              }
              uVar8 = uVar16 >> 1;
              uVar16 = uVar16 >> 1;
            } while (uVar8 != 0);
          }
          if ((((int)uVar3 <= iVar13) || (iVar2 < piVar6[iVar13])) || (iVar13 == -1)) {
            UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::addPoint
                      ((FKNNMaxHeapResultSet *)param_1,fVar18,iVar2);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (param_3->node_type).lr.right);
    }
    bVar9 = true;
  }
  else {
    iVar2 = (param_3->node_type).sub.divfeat;
    pNVar15 = param_3->child2;
    fVar18 = param_2[iVar2] - (param_3->node_type).sub.divhigh;
    fVar19 = param_2[iVar2] - (param_3->node_type).sub.divlow;
    if (0.0 <= fVar18 + fVar19) {
      fVar18 = fVar19 * fVar19;
      pNVar12 = pNVar4;
    }
    else {
      fVar18 = fVar18 * fVar18;
      pNVar12 = pNVar15;
      pNVar15 = pNVar4;
    }
    bVar9 = searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>
                      (this,param_1,param_2,pNVar15,param_4,param_5,param_6);
    if (bVar9) {
      pfVar7 = (param_5->_Mypair)._Myval2._Myfirst;
      fVar19 = pfVar7[iVar2];
      pfVar7[iVar2] = fVar18;
      fVar17 = (fVar18 + param_4) - fVar19;
      fVar18 = fVar17 * param_6;
      pfVar7 = (float *)((longlong)&param_1->_padding_ + 4);
      if ((*pfVar7 <= fVar18 && fVar18 != *pfVar7) ||
         (bVar9 = searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>
                            (this,param_1,param_2,pNVar12,fVar17,param_5,param_6), bVar9)) {
        (param_5->_Mypair)._Myval2._Myfirst[iVar2] = fVar19;
        return true;
      }
    }
    bVar9 = false;
  }
  return bVar9;
}

// searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNResultSet> @ 14a8a96c0

bool __thiscall
nanoflann::
KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>
          (KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
           *this,FFilteredKNNResultSet *param_1,float *param_2,Node *param_3,float param_4,
          vector<float,std::allocator<float>_> *param_5,float param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FDataSource *pFVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  Node *pNVar13;
  uint uVar14;
  Node *pNVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pNVar15 = param_3->child1;
  if ((pNVar15 == (Node *)0x0) && (param_3->child2 == (Node *)0x0)) {
    pfVar8 = TArrayView<float,int>::operator[]
                       ((TArrayView<float,int> *)&param_1->_padding_,(int)param_1->_padding_ + -1);
    uVar10 = (param_3->node_type).lr.left;
    fVar18 = *pfVar8;
    if (uVar10 < (param_3->node_type).lr.right) {
      do {
        uVar9 = 0;
        uVar12 = (ulonglong)(int)this->_padding_;
        fVar17 = 0.0;
        iVar2 = *(int *)(this->_padding_ + uVar10 * 4);
        if (uVar12 != 0) {
          pFVar4 = (this->distance).data_source;
          do {
            pfVar8 = param_2 + uVar9;
            iVar11 = (int)uVar9;
            uVar9 = uVar9 + 1;
            fVar16 = *pfVar8 - pFVar4->Data[iVar2 * pFVar4->PointDim + iVar11];
            fVar17 = fVar17 + fVar16 * fVar16;
          } while (uVar9 < uVar12);
        }
        if (fVar17 < fVar18) {
          uVar3 = (param_1->ExcludeFromSearchIndexes).ArrayNum;
          iVar11 = 0;
          piVar5 = (param_1->ExcludeFromSearchIndexes).DataPtr;
          uVar14 = uVar3;
          if (0 < (int)uVar3) {
            do {
              iVar1 = (uVar14 >> 1) + iVar11;
              if (piVar5[iVar1] < iVar2) {
                iVar11 = iVar1 + (uVar14 & 1);
              }
              uVar6 = uVar14 >> 1;
              uVar14 = uVar14 >> 1;
            } while (uVar6 != 0);
          }
          if ((((int)uVar3 <= iVar11) || (iVar2 < piVar5[iVar11])) || (iVar11 == -1)) {
            UE::PoseSearch::FKDTree::FKNNResultSet::addPoint((FKNNResultSet *)param_1,fVar17,iVar2);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (param_3->node_type).lr.right);
    }
    bVar7 = true;
  }
  else {
    iVar2 = (param_3->node_type).sub.divfeat;
    fVar17 = param_2[iVar2] - (param_3->node_type).sub.divhigh;
    fVar18 = param_2[iVar2] - (param_3->node_type).sub.divlow;
    if (0.0 <= fVar17 + fVar18) {
      fVar17 = fVar18 * fVar18;
      pNVar13 = param_3->child2;
    }
    else {
      fVar17 = fVar17 * fVar17;
      pNVar13 = pNVar15;
      pNVar15 = param_3->child2;
    }
    bVar7 = searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>
                      (this,param_1,param_2,pNVar13,param_4,param_5,param_6);
    if (bVar7) {
      pfVar8 = (param_5->_Mypair)._Myval2._Myfirst;
      fVar18 = pfVar8[iVar2];
      pfVar8[iVar2] = fVar17;
      fVar16 = (fVar17 + param_4) - fVar18;
      pfVar8 = TArrayView<float,int>::operator[]
                         ((TArrayView<float,int> *)&param_1->_padding_,(int)param_1->_padding_ + -1)
      ;
      fVar17 = fVar16 * param_6;
      if ((*pfVar8 <= fVar17 && fVar17 != *pfVar8) ||
         (bVar7 = searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>
                            (this,param_1,param_2,pNVar15,fVar16,param_5,param_6), bVar7)) {
        (param_5->_Mypair)._Myval2._Myfirst[iVar2] = fVar18;
        return true;
      }
    }
    bVar7 = false;
  }
  return bVar7;
}

// searchLevel<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet> @ 14a8a9940

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
nanoflann::
KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::searchLevel<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>
          (KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
           *this,FKNNMaxHeapResultSet *param_1,float *param_2,Node *param_3,float param_4,
          vector<float,std::allocator<float>_> *param_5,float param_6)

{
  int iVar1;
  FDataSource *pFVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  Node *pNVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  Node *pNVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pNVar9 = param_3->child1;
  if ((pNVar9 != (Node *)0x0) || (param_3->child2 != (Node *)0x0)) {
    iVar1 = (param_3->node_type).sub.divfeat;
    fVar12 = param_2[iVar1] - (param_3->node_type).sub.divhigh;
    fVar13 = param_2[iVar1] - (param_3->node_type).sub.divlow;
    if (0.0 <= fVar12 + fVar13) {
      fVar12 = fVar13 * fVar13;
      pNVar6 = param_3->child2;
    }
    else {
      fVar12 = fVar12 * fVar12;
      pNVar6 = pNVar9;
      pNVar9 = param_3->child2;
    }
    bVar5 = searchLevel<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>
                      (this,param_1,param_2,pNVar6,param_4,param_5,param_6);
    if (bVar5) {
      pfVar3 = (param_5->_Mypair)._Myval2._Myfirst;
      fVar13 = pfVar3[iVar1];
      pfVar3[iVar1] = fVar12;
      fVar11 = (fVar12 + param_4) - fVar13;
      fVar12 = fVar11 * param_6;
      if ((param_1->WorstDist <= fVar12 && fVar12 != param_1->WorstDist) ||
         (bVar5 = searchLevel<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>
                            (this,param_1,param_2,pNVar9,fVar11,param_5,param_6), bVar5)) {
        (param_5->_Mypair)._Myval2._Myfirst[iVar1] = fVar13;
        return true;
      }
    }
    return false;
  }
  uVar8 = (param_3->node_type).lr.left;
  fVar13 = param_1->WorstDist;
  if (uVar8 < (param_3->node_type).lr.right) {
    do {
      uVar7 = 0;
      uVar10 = (ulonglong)(int)this->_padding_;
      fVar12 = 0.0;
      iVar1 = *(int *)(this->_padding_ + uVar8 * 4);
      if (uVar10 != 0) {
        pFVar2 = (this->distance).data_source;
        do {
          pfVar3 = param_2 + uVar7;
          iVar4 = (int)uVar7;
          uVar7 = uVar7 + 1;
          fVar11 = *pfVar3 - pFVar2->Data[iVar1 * pFVar2->PointDim + iVar4];
          fVar12 = fVar12 + fVar11 * fVar11;
        } while (uVar7 < uVar10);
      }
      if ((fVar12 < fVar13) &&
         (bVar5 = UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::addPoint(param_1,fVar12,iVar1),
         !bVar5)) {
        return false;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (param_3->node_type).lr.right);
  }
  return true;
}

// searchLevel<UE::PoseSearch::FKDTree::FKNNResultSet> @ 14a8a9b30

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
nanoflann::
KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::searchLevel<UE::PoseSearch::FKDTree::FKNNResultSet>
          (KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
           *this,FKNNResultSet *param_1,float *param_2,Node *param_3,float param_4,
          vector<float,std::allocator<float>_> *param_5,float param_6)

{
  int iVar1;
  Node *pNVar2;
  FDataSource *pFVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  Node *pNVar9;
  Node *pNVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pNVar2 = param_3->child1;
  if ((pNVar2 != (Node *)0x0) || (param_3->child2 != (Node *)0x0)) {
    iVar1 = (param_3->node_type).sub.divfeat;
    pNVar10 = param_3->child2;
    fVar13 = param_2[iVar1] - (param_3->node_type).sub.divhigh;
    fVar14 = param_2[iVar1] - (param_3->node_type).sub.divlow;
    if (0.0 <= fVar13 + fVar14) {
      fVar13 = fVar14 * fVar14;
      pNVar9 = pNVar2;
    }
    else {
      fVar13 = fVar13 * fVar13;
      pNVar9 = pNVar10;
      pNVar10 = pNVar2;
    }
    bVar5 = searchLevel<UE::PoseSearch::FKDTree::FKNNResultSet>
                      (this,param_1,param_2,pNVar10,param_4,param_5,param_6);
    if (bVar5) {
      pfVar6 = (param_5->_Mypair)._Myval2._Myfirst;
      fVar14 = pfVar6[iVar1];
      pfVar6[iVar1] = fVar13;
      fVar12 = (fVar13 + param_4) - fVar14;
      pfVar6 = TArrayView<float,int>::operator[](&param_1->Distances,param_1->NumNeighbors + -1);
      fVar13 = fVar12 * param_6;
      if ((*pfVar6 <= fVar13 && fVar13 != *pfVar6) ||
         (bVar5 = searchLevel<UE::PoseSearch::FKDTree::FKNNResultSet>
                            (this,param_1,param_2,pNVar9,fVar12,param_5,param_6), bVar5)) {
        (param_5->_Mypair)._Myval2._Myfirst[iVar1] = fVar14;
        return true;
      }
    }
    return false;
  }
  pfVar6 = TArrayView<float,int>::operator[](&param_1->Distances,param_1->NumNeighbors + -1);
  uVar8 = (param_3->node_type).lr.left;
  fVar14 = *pfVar6;
  if (uVar8 < (param_3->node_type).lr.right) {
    do {
      uVar7 = 0;
      uVar11 = (ulonglong)(int)this->_padding_;
      fVar13 = 0.0;
      iVar1 = *(int *)(this->_padding_ + uVar8 * 4);
      if (uVar11 != 0) {
        pFVar3 = (this->distance).data_source;
        do {
          pfVar6 = param_2 + uVar7;
          iVar4 = (int)uVar7;
          uVar7 = uVar7 + 1;
          fVar12 = *pfVar6 - pFVar3->Data[iVar1 * pFVar3->PointDim + iVar4];
          fVar13 = fVar13 + fVar12 * fVar12;
        } while (uVar7 < uVar11);
      }
      if ((fVar13 < fVar14) &&
         (bVar5 = UE::PoseSearch::FKDTree::FKNNResultSet::addPoint(param_1,fVar13,iVar1), !bVar5)) {
        return false;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (param_3->node_type).lr.right);
  }
  return true;
}

// searchLevel<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet> @ 14a8a9d40

bool __thiscall
nanoflann::
KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::searchLevel<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>
          (KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
           *this,FRadiusMaxHeapResultSet *param_1,float *param_2,Node *param_3,float param_4,
          vector<float,std::allocator<float>_> *param_5,float param_6)

{
  int iVar1;
  Node *pNVar2;
  FDataSource *pFVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  Node *pNVar9;
  Node *pNVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pNVar2 = param_3->child1;
  if ((pNVar2 == (Node *)0x0) && (param_3->child2 == (Node *)0x0)) {
    uVar8 = (param_3->node_type).lr.left;
    fVar14 = *(float *)&param_1->field_0x14;
    if (uVar8 < (param_3->node_type).lr.right) {
      do {
        uVar7 = 0;
        uVar11 = (ulonglong)(int)this->_padding_;
        fVar13 = 0.0;
        iVar1 = *(int *)(this->_padding_ + uVar8 * 4);
        if (uVar11 != 0) {
          pFVar3 = (this->distance).data_source;
          do {
            pfVar4 = param_2 + uVar7;
            iVar5 = (int)uVar7;
            uVar7 = uVar7 + 1;
            fVar12 = *pfVar4 - pFVar3->Data[iVar1 * pFVar3->PointDim + iVar5];
            fVar13 = fVar13 + fVar12 * fVar12;
          } while (uVar7 < uVar11);
        }
        if ((fVar13 < fVar14) && (fVar13 < *(float *)&param_1->field_0x14)) {
          UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::addPoint
                    ((FKNNMaxHeapResultSet *)param_1,fVar13,iVar1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (param_3->node_type).lr.right);
    }
    bVar6 = true;
  }
  else {
    pNVar10 = param_3->child2;
    iVar1 = (param_3->node_type).sub.divfeat;
    fVar13 = param_2[iVar1] - (param_3->node_type).sub.divhigh;
    fVar14 = param_2[iVar1] - (param_3->node_type).sub.divlow;
    if (0.0 <= fVar13 + fVar14) {
      fVar13 = fVar14 * fVar14;
      pNVar9 = pNVar2;
    }
    else {
      fVar13 = fVar13 * fVar13;
      pNVar9 = pNVar10;
      pNVar10 = pNVar2;
    }
    bVar6 = searchLevel<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>
                      (this,param_1,param_2,pNVar10,param_4,param_5,param_6);
    if (bVar6) {
      pfVar4 = (param_5->_Mypair)._Myval2._Myfirst;
      fVar14 = pfVar4[iVar1];
      pfVar4[iVar1] = fVar13;
      fVar12 = (fVar13 + param_4) - fVar14;
      fVar13 = fVar12 * param_6;
      if ((*(float *)&param_1->field_0x14 <= fVar13 && fVar13 != *(float *)&param_1->field_0x14) ||
         (bVar6 = searchLevel<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>
                            (this,param_1,param_2,pNVar9,fVar12,param_5,param_6), bVar6)) {
        (param_5->_Mypair)._Myval2._Myfirst[iVar1] = fVar14;
        return true;
      }
    }
    bVar6 = false;
  }
  return bVar6;
}

// searchLevel<UE::PoseSearch::FKDTree::FRadiusResultSet> @ 14a8a9f30

bool __thiscall
nanoflann::
KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::searchLevel<UE::PoseSearch::FKDTree::FRadiusResultSet>
          (KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
           *this,FRadiusResultSet *param_1,float *param_2,Node *param_3,float param_4,
          vector<float,std::allocator<float>_> *param_5,float param_6)

{
  int iVar1;
  Node *pNVar2;
  FDataSource *pFVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  Node *pNVar9;
  ulonglong uVar10;
  Node *pNVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pNVar2 = param_3->child1;
  if ((pNVar2 == (Node *)0x0) && (param_3->child2 == (Node *)0x0)) {
    pfVar6 = TArrayView<float,int>::operator[]
                       ((TArrayView<float,int> *)&param_1->field_0x10,
                        *(int *)&param_1->field_0x20 + -1);
    uVar8 = (param_3->node_type).lr.left;
    fVar13 = *pfVar6;
    if (uVar8 < (param_3->node_type).lr.right) {
      do {
        uVar7 = 0;
        uVar10 = (ulonglong)(int)this->_padding_;
        fVar14 = 0.0;
        iVar1 = *(int *)(this->_padding_ + uVar8 * 4);
        if (uVar10 != 0) {
          pFVar3 = (this->distance).data_source;
          do {
            pfVar6 = param_2 + uVar7;
            iVar4 = (int)uVar7;
            uVar7 = uVar7 + 1;
            fVar12 = *pfVar6 - pFVar3->Data[iVar1 * pFVar3->PointDim + iVar4];
            fVar14 = fVar14 + fVar12 * fVar12;
          } while (uVar7 < uVar10);
        }
        if ((fVar14 < fVar13) &&
           (pfVar6 = TArrayView<float,int>::operator[]
                               ((TArrayView<float,int> *)&param_1->field_0x10,
                                *(int *)&param_1->field_0x20 + -1), fVar14 < *pfVar6)) {
          UE::PoseSearch::FKDTree::FKNNResultSet::addPoint((FKNNResultSet *)param_1,fVar14,iVar1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (param_3->node_type).lr.right);
    }
    bVar5 = true;
  }
  else {
    iVar1 = (param_3->node_type).sub.divfeat;
    pNVar11 = param_3->child2;
    fVar14 = param_2[iVar1] - (param_3->node_type).sub.divhigh;
    fVar13 = param_2[iVar1] - (param_3->node_type).sub.divlow;
    if (0.0 <= fVar14 + fVar13) {
      fVar14 = fVar13 * fVar13;
      pNVar9 = pNVar2;
    }
    else {
      fVar14 = fVar14 * fVar14;
      pNVar9 = pNVar11;
      pNVar11 = pNVar2;
    }
    bVar5 = searchLevel<UE::PoseSearch::FKDTree::FRadiusResultSet>
                      (this,param_1,param_2,pNVar11,param_4,param_5,param_6);
    if (bVar5) {
      pfVar6 = (param_5->_Mypair)._Myval2._Myfirst;
      fVar13 = pfVar6[iVar1];
      pfVar6[iVar1] = fVar14;
      fVar12 = (fVar14 + param_4) - fVar13;
      pfVar6 = TArrayView<float,int>::operator[]
                         ((TArrayView<float,int> *)&param_1->field_0x10,
                          *(int *)&param_1->field_0x20 + -1);
      fVar14 = fVar12 * param_6;
      if ((*pfVar6 <= fVar14 && fVar14 != *pfVar6) ||
         (bVar5 = searchLevel<UE::PoseSearch::FKDTree::FRadiusResultSet>
                            (this,param_1,param_2,pNVar9,fVar12,param_5,param_6), bVar5)) {
        (param_5->_Mypair)._Myval2._Myfirst[iVar1] = fVar13;
        return true;
      }
    }
    bVar5 = false;
  }
  return bVar5;
}

// vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_> @ 14a8aa2e0

vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
* __thiscall
std::
vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
::
vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
          (vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
           *this,vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
                 *param_1)

{
  Interval *_Src;
  Interval *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  (this->_Mypair)._Myval2._Myfirst = (Interval *)0x0;
  (this->_Mypair)._Myval2._Mylast = (Interval *)0x0;
  (this->_Mypair)._Myval2._Myend = (Interval *)0x0;
  uVar1 = (longlong)(param_1->_Mypair)._Myval2._Mylast -
          (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 3;
  if (uVar1 != 0) {
    if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar1 * 8);
    (this->_Mypair)._Myval2._Myfirst = _Dst;
    (this->_Mypair)._Myval2._Mylast = _Dst;
    (this->_Mypair)._Myval2._Myend = _Dst + uVar1;
    _Src = (param_1->_Mypair)._Myval2._Myfirst;
    _Size = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)_Src;
    memmove(_Dst,_Src,_Size);
    (this->_Mypair)._Myval2._Mylast = _Dst + ((longlong)_Size >> 3);
  }
  return this;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::__l2::<lambda_1>,0,0> @ 14a8ad1c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::__l21::<lambda_1>,0,0> @ 14a8ad1e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::__l21::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UPoseSearchDatabase::SearchContinuingPose_::__l21::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::`21'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>,0,1> @ 14a8ad200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPoseSearchDatabase::SearchEvent_::__l49::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::`49'::<lambda_1>,0,1>::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14a8afa60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afaa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::__l21::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::`21'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::`49'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afb20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PoseSearch::FPoseHistoryProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PoseSearch::FPoseHistoryProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afb60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::PoseSearch::FGenerateTrajectoryPoseHistory,SharedPointerInternals::DefaultDeleter<UE::PoseSearch::FGenerateTrajectoryPoseHistory>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UE::PoseSearch::FGenerateTrajectoryPoseHistory,SharedPointerInternals::DefaultDeleter<UE::PoseSearch::FGenerateTrajectoryPoseHistory>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afba0

void * __thiscall
UE::PoseSearch::FSearchFilters::FBlockTransitionFilter::_scalar_deleting_destructor_
          (FBlockTransitionFilter *this,uint param_1)

{
  *this = (FBlockTransitionFilter)&___7IPoseSearchFilter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afbe0

void * __thiscall
UE::PoseSearch::FGenerateTrajectoryPoseHistory::_scalar_deleting_destructor_
          (FGenerateTrajectoryPoseHistory *this,uint param_1)

{
  FPoseSearchTrajectoryData::~FPoseSearchTrajectoryData(&this->TrajectoryData);
  FPoseHistory::~FPoseHistory((FPoseHistory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afc30

void * __thiscall
UE::PoseSearch::FSearchFilters::FNonSelectableIdxFilter::_scalar_deleting_destructor_
          (FNonSelectableIdxFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afc70

void * __thiscall
UE::PoseSearch::FPoseHistory::_scalar_deleting_destructor_(FPoseHistory *this,uint param_1)

{
  ~FPoseHistory(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afcb0

void * __thiscall
UE::PoseSearch::FPoseHistoryProvider::_scalar_deleting_destructor_
          (FPoseHistoryProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afce0

void * __thiscall
FPoseSearchColumn::_scalar_deleting_destructor_(FPoseSearchColumn *this,uint param_1)

{
  FInstancedStruct::Reset(&this->OutputCost);
  FInstancedStruct::Reset(&this->OutputForceBlendTo);
  FInstancedStruct::Reset(&this->OutputMirror);
  FInstancedStruct::Reset(&this->OutputStartTime);
  this->NullInputValue = (FPoseSearchColumnNullInputValue)&___7FChooserParameterBase__6B_;
  FInstancedStruct::Reset(&this->InputValue);
  FInstancedStruct::Reset(&this->InterruptMode);
  this->_padding_ = (longlong)&___7FChooserColumnBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afd60

void * __thiscall
FPoseSearchColumnNullInputValue::_scalar_deleting_destructor_
          (FPoseSearchColumnNullInputValue *this,uint param_1)

{
  *this = (FPoseSearchColumnNullInputValue)&___7FChooserParameterBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afda0

void * __thiscall
FPoseSearchDatabaseAnimationAsset::_scalar_deleting_destructor_
          (FPoseSearchDatabaseAnimationAsset *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afdd0

void * __thiscall
FPoseSearchDatabaseAnimationAssetBase::_scalar_deleting_destructor_
          (FPoseSearchDatabaseAnimationAssetBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afe00

void * __thiscall
UE::PoseSearch::FSearchResults::_scalar_deleting_destructor_(FSearchResults *this,uint param_1)

{
  ~FSearchResults(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afe40

void * __thiscall
UE::PoseSearch::FSearchFilters::FSelectableAssetIdxFilter::_scalar_deleting_destructor_
          (FSelectableAssetIdxFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afe80

void * __thiscall
UE::PoseSearch::IComponentSpacePoseProvider::_scalar_deleting_destructor_
          (IComponentSpacePoseProvider *this,uint param_1)

{
  *this = (IComponentSpacePoseProvider)&___7IComponentSpacePoseProvider_PoseSearch_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8afec0

void * __thiscall
UE::PoseSearch::IPoseHistory::_scalar_deleting_destructor_(IPoseHistory *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IPoseHistory_PoseSearch_UE__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8aff30

void * __thiscall
IPoseSearchFilter::_scalar_deleting_destructor_(IPoseSearchFilter *this,uint param_1)

{
  *this = (IPoseSearchFilter)&___7IPoseSearchFilter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8aff70

void * __thiscall
UAnimNotifyState_PoseSearchBase::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchBase *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8affd0

void * __thiscall
UAnimNotifyState_PoseSearchBlockTransition::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchBlockTransition *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0030

void * __thiscall
UAnimNotifyState_PoseSearchBranchIn::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchBranchIn *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0090

void * __thiscall
UAnimNotifyState_PoseSearchExcludeFromDatabase::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchExcludeFromDatabase *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b00f0

void * __thiscall
UAnimNotifyState_PoseSearchIKWindow::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchIKWindow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchIKWindow__6B_;
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0170

void * __thiscall
UAnimNotifyState_PoseSearchModifyCost::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchModifyCost *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b01d0

void * __thiscall
UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0230

void * __thiscall
UAnimNotifyState_PoseSearchSamplingAttribute::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchSamplingAttribute *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0290

void * __thiscall
UAnimNotifyState_PoseSearchSamplingEvent::_scalar_deleting_destructor_
          (UAnimNotifyState_PoseSearchSamplingEvent *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b02f0

void * __thiscall
UAnimNotify_PoseSearchBase::_scalar_deleting_destructor_
          (UAnimNotify_PoseSearchBase *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotify_PoseSearchBase__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0350

void * __thiscall
UAnimNotify_PoseSearchEvent::_scalar_deleting_destructor_
          (UAnimNotify_PoseSearchEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotify_PoseSearchBase__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b03b0

void * __thiscall
UMotionMatchingAnimNodeLibrary::_scalar_deleting_destructor_
          (UMotionMatchingAnimNodeLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMotionMatchingAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0410

void * __thiscall
UMotionMatchingInteractionAnimNodeLibrary::_scalar_deleting_destructor_
          (UMotionMatchingInteractionAnimNodeLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMotionMatchingInteractionAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0470

void * __thiscall UMultiAnimAsset::_scalar_deleting_destructor_(UMultiAnimAsset *this,uint param_1)

{
  *(undefined ***)this = &___7UMultiAnimAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b04d0

void * __thiscall
UPoseSearchAssetSamplerLibrary::_scalar_deleting_destructor_
          (UPoseSearchAssetSamplerLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPoseSearchAssetSamplerLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0530

void * __thiscall
UPoseSearchDatabase::_scalar_deleting_destructor_(UPoseSearchDatabase *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPoseSearchDatabase__6B_;
  *(undefined4 *)&(this->CachedAssetMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedAssetMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedAssetMap);
  UE::PoseSearch::FSearchIndex::~FSearchIndex(&this->SearchIndexPrivate);
  pFVar2 = (this->Tags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DatabaseAnimationAssets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->AnimationAssets_DEPRECATED).AllocatorInstance.Data,
             (this->AnimationAssets_DEPRECATED).ArrayNum);
  pFVar2 = (this->AnimationAssets_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8b0610

void * __thiscall
UPoseSearchTrajectoryPredictorInterface::_scalar_deleting_destructor_
          (UPoseSearchTrajectoryPredictorInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_MotionMatching @ 14a8b4830

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_MotionMatching(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_MotionMatchingInteraction @ 14a8b4840

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_MotionMatchingInteraction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_PoseSearchHistoryCollector @ 14a8b4850

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_PoseSearchHistoryCollector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChooserParameterPoseHistoryBase @ 14a8b4860

void __cdecl EmptyLinkFunctionForGeneratedCodeChooserParameterPoseHistoryBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionMatchingAnimNodeLibrary @ 14a8b4870

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionMatchingAnimNodeLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionMatchingInteractionAnimNodeLibrary @ 14a8b4880

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionMatchingInteractionAnimNodeLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMultiAnimAsset @ 14a8b4890

void __cdecl EmptyLinkFunctionForGeneratedCodeMultiAnimAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchAnimNotifies @ 14a8b48a0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchAnimNotifies(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchAssetSamplerLibrary @ 14a8b48b0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchAssetSamplerLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchChooserColumn @ 14a8b48c0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchChooserColumn(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchCost @ 14a8b48d0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchCost(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchDatabase @ 14a8b48e0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchDatabase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchInteractionAvailability @ 14a8b48f0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchInteractionAvailability(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchTrajectoryPredictor @ 14a8b4900

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchTrajectoryPredictor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearch_init @ 14a8b4910

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearch_init(void)

{
  return;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_NoRegister @ 14a8d05e0

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBase",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton,
               UAnimNotifyState_PoseSearchBase::StaticRegisterNativesUAnimNotifyState_PoseSearchBase
               ,0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchBase>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBase>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_NoRegister @ 14a8d06a0

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBlockTransition",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton
               ,UAnimNotifyState_PoseSearchBlockTransition::
                StaticRegisterNativesUAnimNotifyState_PoseSearchBlockTransition,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchBlockTransition>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBlockTransition>,local_res8
               ,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchBranchIn_NoRegister @ 14a8d0760

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchBranchIn_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBranchIn",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton,
               UAnimNotifyState_PoseSearchBranchIn::
               StaticRegisterNativesUAnimNotifyState_PoseSearchBranchIn,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchBranchIn>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBranchIn>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_NoRegister @ 14a8d0820

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchExcludeFromDatabase",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.
                InnerSingleton,
               UAnimNotifyState_PoseSearchExcludeFromDatabase::
               StaticRegisterNativesUAnimNotifyState_PoseSearchExcludeFromDatabase,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchExcludeFromDatabase>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchExcludeFromDatabase>,
               local_res8,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchIKWindow_NoRegister @ 14a8d08e0

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchIKWindow_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchIKWindow",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton,
               UAnimNotifyState_PoseSearchIKWindow::
               StaticRegisterNativesUAnimNotifyState_PoseSearchIKWindow,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchIKWindow>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchIKWindow>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_NoRegister @ 14a8d09a0

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchModifyCost",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton,
               UAnimNotifyState_PoseSearchModifyCost::
               StaticRegisterNativesUAnimNotifyState_PoseSearchModifyCost,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchModifyCost>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchModifyCost>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_NoRegister @ 14a8d0a60

UClass * __cdecl
Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
                .InnerSingleton,
               UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::
               StaticRegisterNativesUAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias,0x38,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>
               ,local_res8,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.
         InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingAttribute_NoRegister @ 14a8d0b20

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingAttribute_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchSamplingAttribute",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.
                InnerSingleton,
               UAnimNotifyState_PoseSearchSamplingAttribute::
               StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingAttribute,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchSamplingAttribute>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingAttribute>,
               local_res8,UAnimNotifyState_PoseSearchSamplingEvent::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingAttribute.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingEvent_NoRegister @ 14a8d0be0

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_PoseSearchSamplingEvent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchSamplingEvent",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton,
               UAnimNotifyState_PoseSearchSamplingEvent::
               StaticRegisterNativesUAnimNotifyState_PoseSearchSamplingEvent,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchSamplingEvent>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchSamplingEvent>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchSamplingEvent.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_PoseSearchBase_NoRegister @ 14a8d0ca0

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PoseSearchBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotify_PoseSearchBase",
               &Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton,
               UAnimNotify_PoseSearchBase::StaticRegisterNativesUAnimNotify_PoseSearchBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotify_PoseSearchBase>,
               InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchBase>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PoseSearchBase.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_PoseSearchEvent_NoRegister @ 14a8d0d60

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PoseSearchEvent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotify_PoseSearchEvent",
               &Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton,
               UAnimNotify_PoseSearchEvent::StaticRegisterNativesUAnimNotify_PoseSearchEvent,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotify_PoseSearchEvent>,
               InternalVTableHelperCtorCaller<UAnimNotify_PoseSearchEvent>,local_res8,
               UAnimNotify_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PoseSearchEvent.InnerSingleton;
}

// Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_NoRegister @ 14a8d0e20

UClass * __cdecl Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MotionMatchingAnimNodeLibrary",
               &Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton,
               UMotionMatchingAnimNodeLibrary::StaticRegisterNativesUMotionMatchingAnimNodeLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionMatchingAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UMotionMatchingAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_NoRegister @ 14a8d0ee0

UClass * __cdecl Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MotionMatchingInteractionAnimNodeLibrary",
               &Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton,
               UMotionMatchingInteractionAnimNodeLibrary::
               StaticRegisterNativesUMotionMatchingInteractionAnimNodeLibrary,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionMatchingInteractionAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UMotionMatchingInteractionAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_NoRegister @ 14a8d0fa0

UClass * __cdecl Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchAssetSamplerLibrary",
               &Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton,
               UPoseSearchAssetSamplerLibrary::StaticRegisterNativesUPoseSearchAssetSamplerLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchAssetSamplerLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchAssetSamplerLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister @ 14a8d1060

UClass * __cdecl Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchTrajectoryPredictorInterface",
               &Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton,
               UPoseSearchTrajectoryPredictorInterface::
               StaticRegisterNativesUPoseSearchTrajectoryPredictorInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchTrajectoryPredictorInterface>,
               InternalVTableHelperCtorCaller<UPoseSearchTrajectoryPredictorInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton;
}

// Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption @ 14a8d1120

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption(void)

{
  if (Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_MotionMatching @ 14a8d1160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_MotionMatching(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction @ 14a8d11e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.InnerSingleton
               ,&Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector @ 14a8d1260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector.
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

// Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector @ 14a8d12e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseHistoryContextProperty @ 14a8d1360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseHistoryContextProperty(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseHistoryContextProperty.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseHistoryContextProperty.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseHistoryContextProperty_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseHistoryContextProperty.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseHistoryContextProperty.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchColumn @ 14a8d13e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchColumn.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchColumn.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchCost @ 14a8d1460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchCost(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchCost.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchCost.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchCost_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchCost.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchCost.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite @ 14a8d14e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage @ 14a8d1560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace @ 14a8d15e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset @ 14a8d1660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence @ 14a8d16e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchInteractionAnimContextAvailabilities @ 14a8d1760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FPoseSearchInteractionAnimContextAvailabilities(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAnimContextAvailabilities.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAnimContextAvailabilities.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchInteractionAnimContextAvailabilities_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAnimContextAvailabilities.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAnimContextAvailabilities.
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

// _Tidy @ 14a8d17e0

void __thiscall
std::
vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
::_Tidy(vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
        *this)

{
  Interval IVar1;
  Interval IVar2;
  ulong64 uVar3;
  
  IVar1 = (Interval)(this->_Mypair)._Myval2._Myfirst;
  if (IVar1 != (Interval)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)IVar1 & 0xfffffffffffffff8;
    IVar2 = IVar1;
    if (0xfff < uVar3) {
      IVar2 = *(Interval *)((longlong)IVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)IVar1 + (-8 - (longlong)IVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)IVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (Interval *)0x0;
    (this->_Mypair)._Myval2._Mylast = (Interval *)0x0;
    (this->_Mypair)._Myval2._Myend = (Interval *)0x0;
  }
  return;
}

// _Xlength @ 14a8d1860

void __cdecl
std::
vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// assign @ 14a8d1ca0

void __thiscall
std::vector<float,std::allocator<float>_>::assign
          (vector<float,std::allocator<float>_> *this,ulong64 param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  float *pfVar6;
  ulonglong uVar7;
  
  pfVar3 = (this->_Mypair)._Myval2._Myfirst;
  uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar3 >> 2;
  if (uVar5 < param_1) {
    if (0x3fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    if (0x3fffffffffffffff - (uVar5 >> 1) < uVar5) {
      uVar7 = 0x3fffffffffffffff;
    }
    else {
      uVar7 = uVar5 + (uVar5 >> 1);
      if (uVar7 < param_1) {
        uVar7 = param_1;
      }
    }
    if (pfVar3 != (float *)0x0) {
      allocator<float>::deallocate((allocator<float> *)this,pfVar3,uVar5);
      (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
      (this->_Mypair)._Myval2._Mylast = (float *)0x0;
      (this->_Mypair)._Myval2._Myend = (float *)0x0;
    }
    if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
    pfVar3 = _Allocate<16,std::_Default_allocate_traits>(uVar7 * 4);
    (this->_Mypair)._Myval2._Myfirst = pfVar3;
    (this->_Mypair)._Myval2._Mylast = pfVar3;
    (this->_Mypair)._Myval2._Myend = pfVar3 + uVar7;
    pfVar3 = _Uninitialized_fill_n<std::allocator<float>_>
                       (pfVar3,param_1,param_2,(allocator<float> *)this);
    (this->_Mypair)._Myval2._Mylast = pfVar3;
  }
  else {
    pfVar2 = (this->_Mypair)._Myval2._Mylast;
    uVar7 = (longlong)pfVar2 - (longlong)pfVar3 >> 2;
    if (uVar7 < param_1) {
      if (*param_2 == 0.0) {
        memset(pfVar3,0,uVar7 * 4);
      }
      else {
        uVar4 = ((longlong)pfVar2 - (longlong)pfVar3) + 3U >> 2;
        if (pfVar2 < pfVar3) {
          uVar4 = 0;
        }
        pfVar6 = pfVar3;
        if ((uVar4 != 0) && (3 < uVar4)) {
          fVar1 = *param_2;
          if ((param_2 < pfVar3) || (pfVar3 + (uVar4 - 1) < param_2)) {
            pfVar6 = pfVar3 + (uVar4 & 0xfffffffffffffffc);
            for (uVar4 = uVar4 & 0x3ffffffffffffffc; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pfVar3 = fVar1;
              pfVar3 = pfVar3 + 1;
            }
          }
        }
        for (; pfVar6 != pfVar2; pfVar6 = pfVar6 + 1) {
          *pfVar6 = *param_2;
        }
      }
      pfVar3 = _Uninitialized_fill_n<std::allocator<float>_>
                         ((this->_Mypair)._Myval2._Mylast,param_1 - uVar7,param_2,
                          (allocator<float> *)this);
      (this->_Mypair)._Myval2._Mylast = pfVar3;
    }
    else {
      fill<float_*,float>(pfVar3,pfVar3 + param_1,param_2);
      (this->_Mypair)._Myval2._Mylast = pfVar3 + param_1;
    }
  }
  return;
}

// buildIndex @ 14a8d1e70

void __thiscall
nanoflann::
KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::buildIndex(KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
             *this)

{
  longlong *this_00;
  float *pfVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined8 *_Memory;
  int iVar4;
  longlong lVar5;
  Node *pNVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  _Value_init_tag local_res8 [8];
  
  lVar5 = (longlong)this->dataset->PointCount;
  this->_padding_ = lVar5;
  this->_padding_ = lVar5;
  uVar8 = (ulong64)this->dataset->PointCount;
  this->_padding_ = uVar8;
  if (this->_padding_ - this->_padding_ >> 2 != uVar8) {
    std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
              ((vector<int,std::allocator<int>_> *)this,uVar8,local_res8);
  }
  uVar9 = 0;
  uVar7 = uVar9;
  if (this->_padding_ != 0) {
    do {
      *(int *)(this->_padding_ + uVar7 * 4) = (int)uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)this->_padding_);
  }
  _Memory = (undefined8 *)this->_padding_;
  while (_Memory != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*_Memory;
    free(_Memory);
    this->_padding_ = (longlong)puVar3;
    _Memory = puVar3;
  }
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = this->_padding_;
  if (this->_padding_ != 0) {
    this_00 = &this->_padding_;
    std::
    vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
    ::_Resize<std::_Value_init_tag>
              ((vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
                *)this_00,(longlong)(int)this->_padding_,local_res8);
    uVar14 = (ulonglong)this->dataset->PointCount;
    iVar4 = (int)this->_padding_;
    uVar7 = uVar9;
    uVar10 = uVar9;
    if (0 < iVar4) {
      do {
        uVar11 = (int)uVar10 + 1;
        fVar2 = this->dataset->Data[this->dataset->PointDim * *(int *)this->_padding_ + (int)uVar10]
        ;
        *(float *)(uVar7 + 4 + *this_00) = fVar2;
        *(float *)(uVar7 + *this_00) = fVar2;
        iVar4 = (int)this->_padding_;
        uVar7 = uVar7 + 8;
        uVar10 = (ulonglong)uVar11;
      } while ((int)uVar11 < iVar4);
    }
    uVar7 = 1;
    if (1 < uVar14) {
      do {
        uVar10 = uVar9;
        uVar13 = uVar9;
        if (0 < iVar4) {
          do {
            iVar12 = (int)uVar13;
            fVar2 = this->dataset->Data
                    [*(int *)(this->_padding_ + uVar7 * 4) * this->dataset->PointDim + iVar12];
            if (fVar2 < *(float *)(uVar10 + *this_00)) {
              *(float *)(uVar10 + *this_00) = fVar2;
            }
            fVar2 = this->dataset->Data
                    [*(int *)(this->_padding_ + uVar7 * 4) * this->dataset->PointDim + iVar12];
            pfVar1 = (float *)(uVar10 + 4 + *this_00);
            if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
              *(float *)(uVar10 + 4 + *this_00) = fVar2;
            }
            iVar4 = (int)this->_padding_;
            uVar10 = uVar10 + 8;
            uVar13 = (ulonglong)(iVar12 + 1U);
          } while ((int)(iVar12 + 1U) < iVar4);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar14);
    }
    pNVar6 = KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
             ::divideTree((KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                           *)this,this,0,this->_padding_,
                          (vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
                           *)this_00);
    this->_padding_ = (longlong)pNVar6;
  }
  return;
}

// computeMinMax @ 14a8d2050

void __thiscall
nanoflann::
KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::computeMinMax(KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                *this,KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                      *param_1,ulong64 param_2,ulong64 param_3,int param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  FDataSource *pFVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  
  pFVar2 = param_1->dataset;
  piVar6 = (this->vAcc)._Mypair._Myval2._Myfirst;
  uVar3 = 1;
  fVar1 = pFVar2->Data[piVar6[param_2] * pFVar2->PointDim + param_4];
  *param_5 = fVar1;
  *param_6 = fVar1;
  if (1 < param_3) {
    if (3 < param_3 - 1) {
      piVar5 = piVar6 + param_2 + 3;
      lVar4 = (param_3 - 5 >> 2) + 1;
      uVar3 = lVar4 * 4 + 1;
      do {
        fVar1 = pFVar2->Data[piVar5[-2] * pFVar2->PointDim + param_4];
        if (fVar1 < *param_5) {
          *param_5 = fVar1;
        }
        if (*param_6 <= fVar1 && fVar1 != *param_6) {
          *param_6 = fVar1;
        }
        fVar1 = pFVar2->Data[piVar5[-1] * pFVar2->PointDim + param_4];
        if (fVar1 < *param_5) {
          *param_5 = fVar1;
        }
        if (*param_6 <= fVar1 && fVar1 != *param_6) {
          *param_6 = fVar1;
        }
        fVar1 = pFVar2->Data[*piVar5 * pFVar2->PointDim + param_4];
        if (fVar1 < *param_5) {
          *param_5 = fVar1;
        }
        if (*param_6 <= fVar1 && fVar1 != *param_6) {
          *param_6 = fVar1;
        }
        fVar1 = pFVar2->Data[piVar5[1] * pFVar2->PointDim + param_4];
        if (fVar1 < *param_5) {
          *param_5 = fVar1;
        }
        if (*param_6 <= fVar1 && fVar1 != *param_6) {
          *param_6 = fVar1;
        }
        piVar5 = piVar5 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      if (param_3 <= uVar3) {
        return;
      }
    }
    lVar4 = param_3 - uVar3;
    piVar6 = piVar6 + uVar3 + param_2;
    do {
      fVar1 = pFVar2->Data[*piVar6 * pFVar2->PointDim + param_4];
      if (fVar1 < *param_5) {
        *param_5 = fVar1;
      }
      if (*param_6 <= fVar1 && fVar1 != *param_6) {
        *param_6 = fVar1;
      }
      piVar6 = piVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

// deallocate @ 14a8d2200

void __thiscall
std::allocator<float>::deallocate(allocator<float> *this,float *param_1,ulong64 param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 4;
  pfVar1 = param_1;
  if (0xfff < uVar2) {
    pfVar1 = *(float **)(param_1 + -2);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pfVar1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete(pfVar1,uVar2);
  return;
}

// divideTree @ 14a8d2260

Node * __thiscall
nanoflann::
KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::divideTree(KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
             *this,KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                   *param_1,ulong64 param_2,ulong64 param_3,
            vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
            *param_4)

{
  float fVar1;
  Interval *pIVar2;
  int iVar3;
  Node *pNVar4;
  float *pfVar5;
  float *pfVar6;
  Interval IVar7;
  ulong64 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int local_res10 [2];
  float local_res18 [2];
  Node *local_res20;
  ulong64 local_88;
  vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
  local_80;
  vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
  local_68 [2];
  
  local_res20 = PooledAllocator::
                allocate<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Node>
                          ((PooledAllocator *)&param_1->_padding_,1);
  if ((ulonglong)param_1->_padding_ < param_3 - param_2) {
    middleSplit_(this,param_1,param_2,param_3 - param_2,&local_88,local_res10,local_res18,param_4);
    lVar9 = (longlong)local_res10[0];
    (local_res20->node_type).sub.divfeat = local_res10[0];
    std::
    vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
    ::
    vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
              (local_68,param_4);
    *(float *)((longlong)local_68[0]._Mypair._Myval2._Myfirst + 4 + lVar9 * 8) = local_res18[0];
    pNVar4 = divideTree(this,param_1,param_2,local_88 + param_2,local_68);
    local_res20->child1 = pNVar4;
    std::
    vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
    ::
    vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
              (&local_80,param_4);
    *(float *)((longlong)local_80._Mypair._Myval2._Myfirst + lVar9 * 8) = local_res18[0];
    pNVar4 = divideTree(this,param_1,local_88 + param_2,param_3,&local_80);
    local_res20->child2 = pNVar4;
    (local_res20->node_type).sub.divlow =
         *(float *)((longlong)local_68[0]._Mypair._Myval2._Myfirst + 4 + lVar9 * 8);
    uVar12 = 0;
    (local_res20->node_type).sub.divhigh =
         ((Interval *)((longlong)local_80._Mypair._Myval2._Myfirst + lVar9 * 8))->low;
    uVar11 = uVar12;
    if (0 < (int)param_1->_padding_) {
      do {
        pfVar5 = (float *)(uVar12 + (longlong)local_68[0]._Mypair._Myval2._Myfirst);
        if (*(float *)(uVar12 + (longlong)local_80._Mypair._Myval2._Myfirst) <
            *(float *)(uVar12 + (longlong)local_68[0]._Mypair._Myval2._Myfirst)) {
          pfVar5 = (float *)(uVar12 + (longlong)local_80._Mypair._Myval2._Myfirst);
        }
        *(float *)((longlong)&((param_4->_Mypair)._Myval2._Myfirst)->low + uVar12) = *pfVar5;
        pfVar5 = (float *)((longlong)local_68[0]._Mypair._Myval2._Myfirst + 4 + uVar12);
        pfVar6 = (float *)((longlong)((longlong)local_80._Mypair._Myval2._Myfirst + 4) + uVar12);
        if (*pfVar5 < *pfVar6) {
          pfVar5 = pfVar6;
        }
        uVar14 = (int)uVar11 + 1;
        *(float *)((longlong)&((param_4->_Mypair)._Myval2._Myfirst)->high + uVar12) = *pfVar5;
        uVar12 = uVar12 + 8;
        uVar11 = (ulonglong)uVar14;
      } while ((int)uVar14 < (int)param_1->_padding_);
    }
    if (local_80._Mypair._Myval2._Myfirst != (Interval *)0x0) {
      uVar8 = (longlong)local_80._Mypair._Myval2._Myend -
              (longlong)local_80._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
      IVar7 = (Interval)local_80._Mypair._Myval2._Myfirst;
      if (0xfff < uVar8) {
        IVar7 = *(Interval *)((longlong)local_80._Mypair._Myval2._Myfirst + -8);
        uVar8 = uVar8 + 0x27;
        if (0x1f < ((longlong)local_80._Mypair._Myval2._Myfirst - (longlong)IVar7) - 8U)
        goto LAB_14a8d2590;
      }
      ::operator_delete((void *)IVar7,uVar8);
      local_80._Mypair._Myval2._Myfirst = (Interval *)0x0;
      local_80._Mypair._Myval2._Mylast = (Interval *)0x0;
      local_80._Mypair._Myval2._Myend = (Interval *)0x0;
    }
    if ((Interval)local_68[0]._Mypair._Myval2._Myfirst != (Interval)0x0) {
      uVar8 = (longlong)local_68[0]._Mypair._Myval2._Myend -
              (longlong)local_68[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
      IVar7 = (Interval)local_68[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar8) {
        IVar7 = *(Interval *)((longlong)local_68[0]._Mypair._Myval2._Myfirst + -8);
        uVar8 = uVar8 + 0x27;
        if (0x1f < ((longlong)local_68[0]._Mypair._Myval2._Myfirst - (longlong)IVar7) - 8U) {
LAB_14a8d2590:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)IVar7,uVar8);
    }
  }
  else {
    uVar10 = 0;
    local_res20->child2 = (Node *)0x0;
    local_res20->child1 = (Node *)0x0;
    (local_res20->node_type).lr.left = param_2;
    (local_res20->node_type).lr.right = param_3;
    iVar3 = (int)param_1->_padding_;
    uVar11 = uVar10;
    uVar12 = uVar10;
    if (0 < iVar3) {
      do {
        iVar13 = (int)uVar11;
        *(float *)((longlong)&((param_4->_Mypair)._Myval2._Myfirst)->low + uVar12) =
             param_1->dataset->Data
             [*(int *)(param_1->_padding_ + param_2 * 4) * param_1->dataset->PointDim + iVar13];
        *(float *)((longlong)&((param_4->_Mypair)._Myval2._Myfirst)->high + uVar12) =
             param_1->dataset->Data
             [*(int *)(param_1->_padding_ + param_2 * 4) * param_1->dataset->PointDim + iVar13];
        iVar3 = (int)param_1->_padding_;
        uVar11 = (ulonglong)(iVar13 + 1U);
        uVar12 = uVar12 + 8;
      } while ((int)(iVar13 + 1U) < iVar3);
    }
    while (param_2 = param_2 + 1, param_2 < param_3) {
      uVar11 = uVar10;
      uVar12 = uVar10;
      if (0 < iVar3) {
        do {
          pIVar2 = (param_4->_Mypair)._Myval2._Myfirst;
          iVar13 = (int)uVar12;
          fVar1 = param_1->dataset->Data
                  [*(int *)(param_1->_padding_ + param_2 * 4) * param_1->dataset->PointDim + iVar13]
          ;
          if (fVar1 < *(float *)((longlong)&pIVar2->low + uVar11)) {
            *(float *)((longlong)&pIVar2->low + uVar11) = fVar1;
          }
          pIVar2 = (param_4->_Mypair)._Myval2._Myfirst;
          fVar1 = param_1->dataset->Data
                  [*(int *)(param_1->_padding_ + param_2 * 4) * param_1->dataset->PointDim + iVar13]
          ;
          pfVar5 = (float *)((longlong)&pIVar2->high + uVar11);
          if (*pfVar5 <= fVar1 && fVar1 != *pfVar5) {
            *(float *)((longlong)&pIVar2->high + uVar11) = fVar1;
          }
          iVar3 = (int)param_1->_padding_;
          uVar11 = uVar11 + 8;
          uVar12 = (ulonglong)(iVar13 + 1U);
        } while ((int)(iVar13 + 1U) < iVar3);
      }
    }
  }
  return local_res20;
}

// middleSplit_ @ 14a8d4e20

void __thiscall
nanoflann::
KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::middleSplit_(KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
               *this,KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                     *param_1,ulong64 param_2,ulong64 param_3,ulong64 *param_4,int *param_5,
              float *param_6,
              vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
              *param_7)

{
  Interval *pIVar1;
  Interval *pIVar2;
  Interval *pIVar3;
  Interval *pIVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  Interval *pIVar13;
  Interval *pIVar14;
  Interval *pIVar15;
  Interval *pIVar16;
  int *piVar17;
  Interval *pIVar18;
  float *pfVar19;
  Interval *pIVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
  *pvVar26;
  ulonglong uVar27;
  int *piVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  piVar17 = param_5;
  fVar38 = __real_bf800000;
  iVar25 = (int)param_1->_padding_;
  lVar29 = (longlong)iVar25;
  pIVar20 = (param_7->_Mypair)._Myval2._Myfirst;
  iVar24 = 1;
  fVar34 = pIVar20->high - pIVar20->low;
  auVar40 = ZEXT416((uint)fVar34);
  if ((1 < iVar25) && (7 < iVar25 - 1U)) {
    auVar39._0_8_ = CONCAT44(fVar34,fVar34);
    auVar39._8_4_ = fVar34;
    auVar39._12_4_ = fVar34;
    auVar35._8_4_ = fVar34;
    auVar35._0_8_ = auVar39._0_8_;
    auVar35._12_4_ = fVar34;
    uVar21 = iVar25 - 1U & 0x80000007;
    if ((int)uVar21 < 0) {
      uVar21 = (uVar21 - 1 | 0xfffffff8) + 1;
    }
    lVar22 = 1;
    pIVar18 = pIVar20 + 3;
    do {
      iVar24 = iVar24 + 8;
      lVar22 = lVar22 + 8;
      pIVar13 = pIVar18 + 5;
      pIVar14 = pIVar18 + 3;
      pIVar15 = pIVar18 + 4;
      pIVar1 = pIVar18 + 2;
      pIVar2 = pIVar18 + 5;
      auVar10._4_4_ = pIVar18[-1].high - pIVar18[-1].low;
      auVar10._0_4_ = pIVar18[-2].high - pIVar18[-2].low;
      auVar10._8_4_ = pIVar18->high - pIVar18->low;
      auVar10._12_4_ = pIVar18[1].high - pIVar18[1].low;
      auVar39 = maxps(auVar39,auVar10);
      pIVar16 = pIVar18 + 2;
      pIVar3 = pIVar18 + 3;
      pIVar4 = pIVar18 + 4;
      pIVar18 = pIVar18 + 8;
      auVar11._4_4_ = pIVar14->high - pIVar3->low;
      auVar11._0_4_ = pIVar16->high - pIVar1->low;
      auVar11._8_4_ = pIVar15->high - pIVar4->low;
      auVar11._12_4_ = pIVar13->high - pIVar2->low;
      auVar35 = maxps(auVar35,auVar11);
    } while (lVar22 < (int)(iVar25 - uVar21));
    auVar40 = maxps(auVar39,auVar35);
    auVar12._4_8_ = auVar35._8_8_;
    auVar12._0_4_ = auVar40._4_4_;
    auVar36._0_8_ = auVar12._0_8_ << 0x20;
    auVar36._8_4_ = auVar40._8_4_;
    auVar36._12_4_ = auVar40._12_4_;
    auVar37._8_8_ = auVar36._8_8_;
    auVar37._0_8_ = auVar40._8_8_;
    auVar40 = maxps(auVar37,auVar40);
    if (auVar40._0_4_ <= auVar40._4_4_) {
      auVar40._0_4_ = auVar40._4_4_;
    }
  }
  fVar34 = auVar40._0_4_;
  lVar22 = (longlong)iVar24;
  if (lVar22 < lVar29) {
    if (3 < lVar29 - lVar22) {
      pfVar19 = &pIVar20[lVar22 + 1].high;
      lVar23 = ((lVar29 - lVar22) - 4U >> 2) + 1;
      lVar22 = lVar22 + lVar23 * 4;
      do {
        fVar30 = *pfVar19 - ((Interval *)(pfVar19 + -1))->low;
        pfVar5 = pfVar19 + 2;
        pfVar6 = pfVar19 + 1;
        fVar34 = pfVar19[-2] - pfVar19[-3];
        if (pfVar19[-2] - pfVar19[-3] <= auVar40._0_4_) {
          fVar34 = auVar40._0_4_;
        }
        if (fVar34 <= fVar30) {
          fVar34 = fVar30;
        }
        pfVar7 = pfVar19 + 4;
        pfVar8 = pfVar19 + 3;
        pfVar19 = pfVar19 + 8;
        if (fVar34 <= *pfVar5 - *pfVar6) {
          fVar34 = *pfVar5 - *pfVar6;
        }
        if (fVar34 <= *pfVar7 - *pfVar8) {
          fVar34 = *pfVar7 - *pfVar8;
        }
        auVar40 = ZEXT416((uint)fVar34);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      if (lVar29 <= lVar22) goto LAB_14a8d4ffc;
    }
    pIVar20 = pIVar20 + lVar22;
    lVar29 = lVar29 - lVar22;
    do {
      fVar34 = pIVar20->high - pIVar20->low;
      pIVar20 = pIVar20 + 1;
      if (fVar34 <= auVar40._0_4_) {
        fVar34 = auVar40._0_4_;
      }
      auVar40 = ZEXT416((uint)fVar34);
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
LAB_14a8d4ffc:
  iVar25 = 0;
  *param_5 = 0;
  if (0 < (int)param_1->_padding_) {
    fVar34 = fVar34 * __real_3f7fff58;
    lVar29 = 0;
    do {
      pIVar20 = (param_7->_Mypair)._Myval2._Myfirst;
      if (fVar34 < *(float *)((longlong)&pIVar20->high + lVar29) -
                   *(float *)((longlong)&pIVar20->low + lVar29)) {
        piVar9 = (this->vAcc)._Mypair._Myval2._Myfirst;
        iVar24 = param_1->dataset->PointDim;
        pfVar19 = param_1->dataset->Data;
        fVar30 = pfVar19[iVar24 * piVar9[param_2] + iVar25];
        fVar32 = fVar30;
        if (1 < param_3) {
          if (param_3 - 1 < 4) {
            uVar27 = 1;
          }
          else {
            lVar22 = (param_3 - 5 >> 2) + 1;
            uVar27 = lVar22 * 4 + 1;
            piVar28 = piVar9 + param_2 + 3;
            do {
              fVar31 = pfVar19[iVar24 * piVar28[-2] + iVar25];
              fVar33 = fVar31;
              if (fVar31 <= fVar30) {
                fVar33 = fVar30;
              }
              if (fVar32 <= fVar31) {
                fVar31 = fVar32;
              }
              fVar30 = pfVar19[iVar24 * piVar28[-1] + iVar25];
              fVar32 = fVar30;
              if (fVar30 <= fVar33) {
                fVar32 = fVar33;
              }
              if (fVar31 <= fVar30) {
                fVar30 = fVar31;
              }
              fVar31 = pfVar19[iVar24 * *piVar28 + iVar25];
              fVar33 = fVar31;
              if (fVar31 <= fVar32) {
                fVar33 = fVar32;
              }
              if (fVar30 <= fVar31) {
                fVar31 = fVar30;
              }
              fVar32 = pfVar19[iVar24 * piVar28[1] + iVar25];
              fVar30 = fVar32;
              if (fVar32 <= fVar33) {
                fVar30 = fVar33;
              }
              if (fVar31 <= fVar32) {
                fVar32 = fVar31;
              }
              lVar22 = lVar22 + -1;
              piVar28 = piVar28 + 4;
            } while (lVar22 != 0);
            if (param_3 <= uVar27) goto LAB_14a8d5175;
          }
          lVar22 = (uVar27 + param_2) * 4;
          lVar23 = param_3 - uVar27;
          fVar31 = fVar30;
          fVar33 = fVar32;
          do {
            piVar28 = (int *)((longlong)piVar9 + lVar22);
            lVar22 = lVar22 + 4;
            fVar32 = pfVar19[iVar24 * *piVar28 + iVar25];
            fVar30 = fVar32;
            if (fVar32 <= fVar31) {
              fVar30 = fVar31;
            }
            if (fVar33 <= fVar32) {
              fVar32 = fVar33;
            }
            lVar23 = lVar23 + -1;
            fVar31 = fVar30;
            fVar33 = fVar32;
          } while (lVar23 != 0);
        }
LAB_14a8d5175:
        if (fVar38 < fVar30 - fVar32) {
          *param_5 = iVar25;
          fVar38 = fVar30 - fVar32;
        }
      }
      iVar25 = iVar25 + 1;
      lVar29 = lVar29 + 8;
    } while (iVar25 < (int)param_1->_padding_);
  }
  iVar25 = *param_5;
  pIVar20 = (param_7->_Mypair)._Myval2._Myfirst;
  fVar38 = (pIVar20[iVar25].high + pIVar20[iVar25].low) * __real_3f000000;
  computeMinMax(this,param_1,param_2,param_3,iVar25,(float *)&param_7,(float *)&param_5);
  if (param_7._0_4_ <= fVar38) {
    if (param_5._0_4_ <= fVar38) {
      fVar38 = param_5._0_4_;
    }
    *param_6 = fVar38;
  }
  else {
    *param_6 = param_7._0_4_;
  }
  planeSplit(this,param_1,param_2,param_3,*piVar17,param_6,(ulong64 *)&param_7,(ulong64 *)&param_5);
  pvVar26 = (vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
             *)(param_3 >> 1);
  if (param_7 <= pvVar26) {
    if (param_5 < pvVar26) {
      pvVar26 = (vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
                 *)param_5;
    }
    *param_4 = (ulong64)pvVar26;
    return;
  }
  *param_4 = (ulong64)param_7;
  return;
}

// planeSplit @ 14a8d52b0

void __thiscall
nanoflann::
KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
::planeSplit(KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
             *this,KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                   *param_1,ulong64 param_2,ulong64 param_3,int param_4,float *param_5,
            ulong64 *param_6,ulong64 *param_7)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = param_3 - 1;
  uVar7 = 0;
  uVar8 = uVar5;
  do {
    if (uVar7 <= uVar8) {
      piVar4 = (this->vAcc)._Mypair._Myval2._Myfirst + uVar7 + param_2;
      do {
        pfVar1 = param_1->dataset->Data + (param_1->dataset->PointDim * *piVar4 + param_4);
        if (*param_5 < *pfVar1 || *param_5 == *pfVar1) break;
        uVar7 = uVar7 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar7 <= uVar8);
    }
    if (uVar8 != 0) {
      lVar6 = (uVar8 + param_2) * 4;
      do {
        if (uVar8 < uVar7) goto LAB_14a8d53a2;
        pfVar1 = param_1->dataset->Data +
                 (*(int *)(lVar6 + (longlong)(this->vAcc)._Mypair._Myval2._Myfirst) *
                  param_1->dataset->PointDim + param_4);
        if (*pfVar1 <= *param_5 && *param_5 != *pfVar1) goto LAB_14a8d5377;
        lVar6 = lVar6 + -4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar8 < uVar7) break;
LAB_14a8d5377:
    if (uVar8 == 0) break;
    piVar4 = (this->vAcc)._Mypair._Myval2._Myfirst;
    lVar6 = uVar7 + param_2;
    lVar2 = uVar8 + param_2;
    uVar7 = uVar7 + 1;
    uVar8 = uVar8 - 1;
    iVar3 = piVar4[lVar6];
    piVar4[lVar6] = piVar4[lVar2];
    piVar4[lVar2] = iVar3;
  } while( true );
LAB_14a8d53a2:
  *param_6 = uVar7;
  do {
    if (uVar7 <= uVar5) {
      piVar4 = (this->vAcc)._Mypair._Myval2._Myfirst + uVar7 + param_2;
      do {
        if (*param_5 < param_1->dataset->Data[param_1->dataset->PointDim * *piVar4 + param_4])
        break;
        uVar7 = uVar7 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar7 <= uVar5);
    }
    if (uVar5 != 0) {
      lVar6 = (uVar5 + param_2) * 4;
      do {
        if (uVar5 < uVar7) goto LAB_14a8d5462;
        if (param_1->dataset->Data
            [*(int *)(lVar6 + (longlong)(this->vAcc)._Mypair._Myval2._Myfirst) *
             param_1->dataset->PointDim + param_4] <= *param_5) goto LAB_14a8d5437;
        lVar6 = lVar6 + -4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (uVar5 < uVar7) {
LAB_14a8d5462:
      *param_7 = uVar7;
      return;
    }
LAB_14a8d5437:
    if (uVar5 == 0) goto LAB_14a8d5462;
    piVar4 = (this->vAcc)._Mypair._Myval2._Myfirst;
    lVar6 = uVar7 + param_2;
    lVar2 = uVar5 + param_2;
    uVar7 = uVar7 + 1;
    uVar5 = uVar5 - 1;
    iVar3 = piVar4[lVar6];
    piVar4[lVar6] = piVar4[lVar2];
    piVar4[lVar2] = iVar3;
  } while( true );
}

// sum @ 14a8d5490

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
::sum(DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
      *this)

{
  float fVar1;
  scalar_sum_op<float,float> local_res8 [32];
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_68;
  
  local_68._88_8_ = *(undefined8 *)(this + 0x68);
  if (local_68._88_8_ == 0) {
    return 0.0;
  }
  local_68._24_8_ = *(undefined8 *)(this + 0x18);
  local_68._40_8_ = *(undefined8 *)(this + 0x20);
  local_68._48_8_ = *(undefined8 *)(this + 0x38);
  local_68._64_8_ = *(undefined8 *)(this + 0x40);
  local_68._72_8_ = *(undefined8 *)(this + 0x60);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                    (&local_68,local_res8,
                     (CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>
                      *)this);
  return fVar1;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeMotionMatchingDrawCurResult'' @ 150421770

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawCurResult__(void)

{
  CVarAnimNodeMotionMatchingDrawCurResult._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeMotionMatchingDrawCurResult);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeMotionMatchingDrawInfo'' @ 150421790

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawInfo__(void)

{
  CVarAnimNodeMotionMatchingDrawInfo._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeMotionMatchingDrawInfo)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeMotionMatchingDrawInfoHeight'' @ 1504217b0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawInfoHeight__(void)

{
  CVarAnimNodeMotionMatchingDrawInfoHeight._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeMotionMatchingDrawInfoHeight);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeMotionMatchingDrawInfoVerbose'' @ 1504217d0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawInfoVerbose__(void)

{
  CVarAnimNodeMotionMatchingDrawInfoVerbose._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeMotionMatchingDrawInfoVerbose);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeMotionMatchingDrawQuery'' @ 1504217f0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingDrawQuery__(void)

{
  CVarAnimNodeMotionMatchingDrawQuery._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeMotionMatchingDrawQuery);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeMotionMatchingPlayRateEnabled'' @ 150421810

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeMotionMatchingPlayRateEnabled__(void)

{
  CVarAnimNodeMotionMatchingPlayRateEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeMotionMatchingPlayRateEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMotionMatchDebugWeightGroupID'' @ 150421830

void __cdecl
UE::PoseSearch::_dynamic_atexit_destructor_for__CVarMotionMatchDebugWeightGroupID__(void)

{
  CVarMotionMatchDebugWeightGroupID._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMotionMatchDebugWeightGroupID);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterPoseSearchCustomVersion'' @ 150421850

void __cdecl _dynamic_atexit_destructor_for__GRegisterPoseSearchCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterPoseSearchCustomVersion.Key);
  return;
}

