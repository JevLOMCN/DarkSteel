// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 307

// `dynamic_initializer_for_'CVarEnableFoliageInstanceElements'' @ 141074fa0

void __cdecl FoliageElementUtil::_dynamic_initializer_for__CVarEnableFoliageInstanceElements__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableFoliageInstanceElements,L"TypedElements.EnableFoliageInstanceElements",
             &GEnableFoliageInstanceElements,
             L"Is support for static mesh instance elements enabled for foliage owned instances?",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarEnableFoliageInstanceElements__);
  return;
}

// `dynamic_initializer_for_'CVarEnableGrassInstancedWPOVelocity'' @ 141074ff0

void __cdecl _dynamic_initializer_for__CVarEnableGrassInstancedWPOVelocity__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableGrassInstancedWPOVelocity,L"r.Velocity.EnableLandscapeGrass",local_res8,
             L"Specify if you want to output velocity for the grass component for WPO.\n True (default)\n False"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableGrassInstancedWPOVelocity__);
  return;
}

// `dynamic_initializer_for_'CVarFoliageCullDistanceScale'' @ 141075040

void __cdecl _dynamic_initializer_for__CVarFoliageCullDistanceScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarFoliageCullDistanceScale,L"foliage.CullDistanceScale",local_res8,
             L"Controls the cull distance scale. Foliage must opt-in to cull distance scaling through the foliage type."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarFoliageCullDistanceScale__);
  return;
}

// `dynamic_initializer_for_'CVarFoliageDiscardDataOnLoad'' @ 141075090

void __cdecl _dynamic_initializer_for__CVarFoliageDiscardDataOnLoad__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFoliageDiscardDataOnLoad,L"foliage.DiscardDataOnLoad",local_res8,
             L"1: Discard foliage data on load if the foliage type has it enabled; 0: Keep foliage data regardless of whether the foliage type has it enabled or not (requires reloading level)"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarFoliageDiscardDataOnLoad__);
  return;
}

// `dynamic_initializer_for_'GRegisterFoliageCustomVersion'' @ 1410750e0

void __cdecl _dynamic_initializer_for__GRegisterFoliageCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FFoliageCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0xf,L"FoliageVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterFoliageCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterProceduralFoliageCustomVersion'' @ 141075120

void __cdecl _dynamic_initializer_for__GRegisterProceduralFoliageCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FProceduralFoliageCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,1,L"ProceduralFoliageVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterProceduralFoliageCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogInstancedFoliage'' @ 141075160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInstancedFoliage__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInstancedFoliage,L"LogInstancedFoliage",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInstancedFoliage__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantFoliage'' @ 1410751a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantFoliage__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Foliage";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Foliage",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<IFoliageModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'ProceduralFoliageBlocking_NAME'' @ 1410751f0

void __cdecl _dynamic_initializer_for__ProceduralFoliageBlocking_NAME__(void)

{
  FName::FName(&ProceduralFoliageBlocking_NAME,L"ProceduralFoliageBlockingVolume");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FoliageAddInstance'' @ 141075210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FoliageAddInstance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FoliageAddInstance == (FThreadSafeStaticStat<FStat_STAT_FoliageAddInstance>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_FoliageAddInstance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageAddInstance,*pFVar1,
               L"FoliageMeshInfo_AddInstance","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FoliageCreateComponent'' @ 1410752a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FoliageCreateComponent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FoliageCreateComponent ==
      (FThreadSafeStaticStat<FStat_STAT_FoliageCreateComponent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FoliageCreateComponent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageCreateComponent,*pFVar1,
               L"FoliageMeshInfo_CreateComponent","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FoliageRemoveInstance'' @ 141075330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FoliageRemoveInstance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FoliageRemoveInstance ==
      (FThreadSafeStaticStat<FStat_STAT_FoliageRemoveInstance>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FoliageRemoveInstance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageRemoveInstance,*pFVar1,
               L"FoliageMeshInfo_RemoveInstance","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FoliageTrace'' @ 1410753c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FoliageTrace__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FoliageTrace == (FThreadSafeStaticStat<FStat_STAT_FoliageTrace>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FoliageTrace");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageTrace,*pFVar1,L"FoliageActor_Trace"
               ,"STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h__Script_Foliage_3558064694'' @ 141075450

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h__Script_Foliage_3558064694__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h__Script_Foliage_4119979503'' @ 141075490

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h__Script_Foliage_4119979503__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h__Script_Foliage_3779043661'' @ 1410754d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h__Script_Foliage_3779043661__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageTypeObject_h__Script_Foliage_2093099256'' @ 141075510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageTypeObject_h__Script_Foliage_2093099256__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageTypeObject_h__Script_Foliage_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h__Script_Foliage_3113778290'' @ 141075550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h__Script_Foliage_3113778290__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h__Script_Foliage_20108568'' @ 141075590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h__Script_Foliage_20108568__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h__Script_Foliage_280805743'' @ 1410755d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h__Script_Foliage_280805743__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h__Script_Foliage_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h__Script_Foliage_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h__Script_Foliage_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h__Script_Foliage_3377614460'' @ 141075620

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h__Script_Foliage_3377614460__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h__Script_Foliage_1354560454'' @ 141075660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h__Script_Foliage_1354560454__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h__Script_Foliage_796495449'' @ 1410756a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h__Script_Foliage_796495449__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h__Script_Foliage_3277370143'' @ 1410756e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h__Script_Foliage_3277370143__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h__Script_Foliage_3246295105'' @ 141075720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h__Script_Foliage_3246295105__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h__Script_Foliage_2613527835'' @ 141075760

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h__Script_Foliage_2613527835__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h__Script_Foliage_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h__Script_Foliage_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h__Script_Foliage_3288526255'' @ 1410757b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h__Script_Foliage_3288526255__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h__Script_Foliage_2886665861'' @ 1410757f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h__Script_Foliage_2886665861__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h__Script_Foliage_1439583910'' @ 141075830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h__Script_Foliage_1439583910__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Foliage",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h__Script_Foliage_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Foliage'' @ 141075870

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Foliage__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7e4bae37;
  local_res8[0].DeclarationsHash = 0x875e692d;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Foliage,L"/Script/Foliage",
             &Z_Registration_Info_UPackage__Script_Foliage,local_res8);
  return;
}

// Z_Construct_UClass_UFoliageStatistics @ 145ece2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFoliageStatistics(void)

{
  if (Z_Registration_Info_UClass_UFoliageStatistics.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFoliageStatistics.OuterSingleton,
               &Z_Construct_UClass_UFoliageStatistics_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFoliageStatistics.OuterSingleton;
}

// Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount @ 145ece2f0

UFunction * __cdecl Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms @ 145ece330

UFunction * __cdecl Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount @ 145ece370

UFunction * __cdecl Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature @ 145ece460

UFunction * __cdecl
Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature @ 145ece4a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_Foliage @ 145ece4e0

UPackage * __cdecl Z_Construct_UPackage__Script_Foliage(void)

{
  if (Z_Registration_Info_UPackage__Script_Foliage.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Foliage.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Foliage.OuterSingleton;
}

// Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister @ 145ece520

UClass * __cdecl Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageSpawner",
               &Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton,
               UProceduralFoliageSpawner::StaticRegisterNativesUProceduralFoliageSpawner,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralFoliageSpawner>,
               InternalVTableHelperCtorCaller<UProceduralFoliageSpawner>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton;
}

// Z_Construct_UScriptStruct_FFoliageTypeObject @ 145ece880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFoliageTypeObject(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFoliageTypeObject.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFoliageTypeObject.InnerSingleton,
               &Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFoliageTypeObject.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFoliageTypeObject.InnerSingleton;
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

// NewProp_bIsAsset_SetBit @ 145ece900

void __cdecl
Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewProp_bIsAsset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 145ece910

void * __cdecl Z_Construct_UScriptStruct_FFoliageTypeObject_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFoliageTypeObject,&UE::CoreUObject::Private::Construct<FFoliageTypeObject>,&UE::CoreUObject::Private::ConstructForTests<FFoliageTypeObject>,&UE::CoreUObject::Private::Destruct<FFoliageTypeObject>,&UE::CoreUObject::Private::Copy<FFoliageTypeObject>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 145ecea10

void * __thiscall IFoliageModule::_scalar_deleting_destructor_(IFoliageModule *this,uint param_1)

{
  *this = (IFoliageModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister @ 145ecebd0

UClass * __cdecl Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton,
               UFoliageInstancedStaticMeshComponent::
               StaticRegisterNativesUFoliageInstancedStaticMeshComponent,0xbe0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFoliageInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UFoliageInstancedStaticMeshComponent>,local_res8,
               UHierarchicalInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UProceduralFoliageComponent @ 145eced50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralFoliageComponent(void)

{
  if (Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton,
               &Z_Construct_UClass_UProceduralFoliageComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton;
}

// Z_Construct_UClass_UGrassInstancedStaticMeshComponent @ 145eced90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGrassInstancedStaticMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton;
}

// Z_Construct_UClass_AProceduralFoliageVolume @ 145ecedd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AProceduralFoliageVolume(void)

{
  if (Z_Registration_Info_UClass_AProceduralFoliageVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AProceduralFoliageVolume.OuterSingleton,
               &Z_Construct_UClass_AProceduralFoliageVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AProceduralFoliageVolume.OuterSingleton;
}

// Z_Construct_UClass_UFoliageInstancedStaticMeshComponent @ 145eceed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFoliageInstancedStaticMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FProceduralFoliageInstance @ 145ecef10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProceduralFoliageInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProceduralFoliageInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProceduralFoliageInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProceduralFoliageInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FProceduralFoliageInstance.InnerSingleton;
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

// ESimulationOverlap_StaticEnum @ 145ecef90

UEnum * __cdecl ESimulationOverlap_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationOverlap,(UObject *)pUVar1,
                       L"ESimulationOverlap");
  }
  return Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton;
}

// ESimulationQuery_StaticEnum @ 145ecefd0

UEnum * __cdecl ESimulationQuery_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationQuery,(UObject *)pUVar1,
                       L"ESimulationQuery");
  }
  return Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton;
}

// NewProp_bEnableDiscardOnLoad_SetBit @ 145ecf010

void __cdecl
Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc8) = 1;
  return;
}

// NewStructOps @ 145ecf020

void * __cdecl Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProceduralFoliageInstance,&UE::CoreUObject::Private::Construct<FProceduralFoliageInstance>,&UE::CoreUObject::Private::ConstructForTests<FProceduralFoliageInstance>,&UE::CoreUObject::Private::Destruct<FProceduralFoliageInstance>,&UE::CoreUObject::Private::Copy<FProceduralFoliageInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UFoliageType_NoRegister @ 145ecf060

UClass * __cdecl Z_Construct_UClass_UFoliageType_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType",
               &Z_Registration_Info_UClass_UFoliageType.InnerSingleton,
               UFoliageType::StaticRegisterNativesUFoliageType,0x4c0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFoliageType>,InternalVTableHelperCtorCaller<UFoliageType>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType.InnerSingleton;
}

// Z_Construct_UClass_UProceduralFoliageComponent_NoRegister @ 145ecf290

UClass * __cdecl Z_Construct_UClass_UProceduralFoliageComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageComponent",
               &Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton,
               UProceduralFoliageComponent::StaticRegisterNativesUProceduralFoliageComponent,0xe8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralFoliageComponent>,
               InternalVTableHelperCtorCaller<UProceduralFoliageComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton;
}

// Z_Construct_UClass_UProceduralFoliageSpawner @ 145ecf4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralFoliageSpawner(void)

{
  if (Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton,
               &Z_Construct_UClass_UProceduralFoliageSpawner_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton;
}

// Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate @ 145ecf520

UFunction * __cdecl Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseOverrideFoliageTerrainMaterials_SetBit @ 145ecf560

void __cdecl
Z_Construct_UClass_UProceduralFoliageSpawner_Statics::
NewProp_bUseOverrideFoliageTerrainMaterials_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UClass_UFoliageType @ 145ecf570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFoliageType(void)

{
  if (Z_Registration_Info_UClass_UFoliageType.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFoliageType.OuterSingleton,
               &Z_Construct_UClass_UFoliageType_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFoliageType.OuterSingleton;
}

// Z_Construct_UEnum_Foliage_EFoliageScaling @ 145ecf5b0

UEnum * __cdecl Z_Construct_UEnum_Foliage_EFoliageScaling(void)

{
  if (Z_Registration_Info_UEnum_EFoliageScaling.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFoliageScaling.InnerSingleton,
               &Z_Construct_UEnum_Foliage_EFoliageScaling_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFoliageScaling.InnerSingleton;
}

// Z_Construct_UEnum_Foliage_FoliageVertexColorMask @ 145ecf5f0

UEnum * __cdecl Z_Construct_UEnum_Foliage_FoliageVertexColorMask(void)

{
  if (Z_Registration_Info_UEnum_FoliageVertexColorMask.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_FoliageVertexColorMask.InnerSingleton,
               &Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_FoliageVertexColorMask.InnerSingleton;
}

// Z_Construct_UScriptStruct_FFoliageDensityFalloff @ 145ecf630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFoliageDensityFalloff(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFoliageDensityFalloff.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFoliageDensityFalloff.InnerSingleton,
               &Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFoliageDensityFalloff.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFoliageDensityFalloff.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask @ 145ecf6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFoliageVertexColorChannelMask.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFoliageVertexColorChannelMask.InnerSingleton,
               &Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFoliageVertexColorChannelMask.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFoliageVertexColorChannelMask.InnerSingleton;
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

// FoliageVertexColorMask_StaticEnum @ 145ecf730

UEnum * __cdecl FoliageVertexColorMask_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_FoliageVertexColorMask,(UObject *)pUVar1,
                       L"FoliageVertexColorMask");
  }
  return Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton;
}

// EVertexColorMaskChannel_StaticEnum @ 145ecf770

UEnum * __cdecl EVertexColorMaskChannel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_EVertexColorMaskChannel,(UObject *)pUVar1,
                       L"EVertexColorMaskChannel");
  }
  return Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton;
}

// NewProp_UseMask_SetBit @ 145ecf7b0

void __cdecl
Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_InvertMask_SetBit @ 145ecf7c0

void __cdecl
Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) | 1;
  return;
}

// NewStructOps @ 145ecf7d0

void * __cdecl Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFoliageVertexColorChannelMask,&UE::CoreUObject::Private::Construct<FFoliageVertexColorChannelMask>,&UE::CoreUObject::Private::ConstructForTests<FFoliageVertexColorChannelMask>,&UE::CoreUObject::Private::Destruct<FFoliageVertexColorChannelMask>,&UE::CoreUObject::Private::Copy<FFoliageVertexColorChannelMask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EFoliageScaling_StaticEnum @ 145ecf8d0

UEnum * __cdecl EFoliageScaling_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_EFoliageScaling,(UObject *)pUVar1,
                       L"EFoliageScaling");
  }
  return Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton;
}

// NewProp_bUseFalloffCurve_SetBit @ 145ecf910

void __cdecl
Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewProp_bUseFalloffCurve_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 145ecf920

void * __cdecl Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFoliageDensityFalloff,&UE::CoreUObject::Private::Construct<FFoliageDensityFalloff>,&UE::CoreUObject::Private::ConstructForTests<FFoliageDensityFalloff>,&UE::CoreUObject::Private::Destruct<FFoliageDensityFalloff>,&UE::CoreUObject::Private::Copy<FFoliageDensityFalloff>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AInteractiveFoliageActor @ 145ecf960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AInteractiveFoliageActor(void)

{
  if (Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton,
               &Z_Construct_UClass_AInteractiveFoliageActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton;
}

// NewProp_bSingleInstanceModeOverrideRadius_SetBit @ 145ecf9a0

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bSingleInstanceModeOverrideRadius_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// NewProp_bFromSweep_SetBit @ 145ecf9b0

void __cdecl
Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UClass_AProceduralFoliageVolume_NoRegister @ 145ecf9c0

UClass * __cdecl Z_Construct_UClass_AProceduralFoliageVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageVolume",
               &Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton,
               AProceduralFoliageVolume::StaticRegisterNativesAProceduralFoliageVolume,0x308,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AProceduralFoliageVolume>,
               InternalVTableHelperCtorCaller<AProceduralFoliageVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton;
}

// NewProp_VertexColorMaskInvert_SetBit @ 145ecfa80

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa0) = *(uint *)((longlong)param_1 + 0xa0) | 1;
  return;
}

// NewProp_AlignToNormal_SetBit @ 145ecfb50

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 1;
  return;
}

// NewProp_AverageNormal_SetBit @ 145ecfb60

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormal_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 2;
  return;
}

// NewProp_AverageNormalSingleComponent_SetBit @ 145ecfb70

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormalSingleComponent_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 4;
  return;
}

// NewProp_RandomYaw_SetBit @ 145ecfb80

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xb4) = *(uint *)((longlong)param_1 + 0xb4) | 1;
  return;
}

// NewProp_CollisionWithWorld_SetBit @ 145ecfb90

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x104) = *(uint *)((longlong)param_1 + 0x104) | 1;
  return;
}

// Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched @ 145ecfba0

UFunction * __cdecl Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableStaticLighting_SetBit @ 145ecfbe0

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x184) = *(uint *)((longlong)param_1 + 0x184) | 1;
  return;
}

// NewProp_CastShadow_SetBit @ 145ecfbf0

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x184) = *(uint *)((longlong)param_1 + 0x184) | 2;
  return;
}

// NewProp_bAffectDynamicIndirectLighting_SetBit @ 145ecfc00

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x184) = *(uint *)((longlong)param_1 + 0x184) | 4;
  return;
}

// NewProp_bAffectDistanceFieldLighting_SetBit @ 145ecfc10

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x184) = *(uint *)((longlong)param_1 + 0x184) | 8;
  return;
}

// NewProp_bCastDynamicShadow_SetBit @ 145ecfc20

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x184) = *(uint *)((longlong)param_1 + 0x184) | 0x10;
  return;
}

// NewProp_bCastStaticShadow_SetBit @ 145ecfc30

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x184) = *(uint *)((longlong)param_1 + 0x184) | 0x20;
  return;
}

// NewProp_bCastContactShadow_SetBit @ 145ecfc40

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastContactShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x188) = *(byte *)((longlong)param_1 + 0x188) | 1;
  return;
}

// NewProp_bCastShadowAsTwoSided_SetBit @ 145ecfc50

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18c) = *(uint *)((longlong)param_1 + 0x18c) | 1;
  return;
}

// NewProp_bReceivesDecals_SetBit @ 145ecfc60

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18c) = *(uint *)((longlong)param_1 + 0x18c) | 2;
  return;
}

// NewProp_bOverrideLightMapRes_SetBit @ 145ecfc70

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18c) = *(uint *)((longlong)param_1 + 0x18c) | 4;
  return;
}

// NewProp_bUseAsOccluder_SetBit @ 145ecfc80

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x19c) = *(uint *)((longlong)param_1 + 0x19c) | 1;
  return;
}

// NewProp_bVisibleInRayTracing_SetBit @ 145ecfc90

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bVisibleInRayTracing_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 1;
  return;
}

// NewProp_bEvaluateWorldPositionOffset_SetBit @ 145ecfca0

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 2;
  return;
}

// NewProp_bRenderCustomDepth_SetBit @ 145ecfcb0

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x33c) = *(uint *)((longlong)param_1 + 0x33c) | 1;
  return;
}

// NewProp_bCanGrowInShade_SetBit @ 145ecfcc0

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x370) = 1;
  return;
}

// NewProp_bSpawnsInShade_SetBit @ 145ecfcd0

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x371) = 1;
  return;
}

// NewProp_ReapplyDensity_SetBit @ 145ecfce0

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 1;
  return;
}

// NewProp_ReapplyRadius_SetBit @ 145ecfcf0

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 2;
  return;
}

// NewProp_ReapplyAlignToNormal_SetBit @ 145ecfd00

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 4;
  return;
}

// NewProp_ReapplyRandomYaw_SetBit @ 145ecfd10

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 8;
  return;
}

// NewProp_ReapplyScaling_SetBit @ 145ecfd20

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x10;
  return;
}

// NewProp_ReapplyScaleX_SetBit @ 145ecfd30

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x20;
  return;
}

// NewProp_ReapplyScaleY_SetBit @ 145ecfd40

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x40;
  return;
}

// NewProp_ReapplyScaleZ_SetBit @ 145ecfd50

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x80;
  return;
}

// NewProp_ReapplyRandomPitchAngle_SetBit @ 145ecfd70

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x100;
  return;
}

// NewProp_ReapplyGroundSlope_SetBit @ 145ecfd90

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x200;
  return;
}

// NewProp_ReapplyHeight_SetBit @ 145ecfdb0

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x400;
  return;
}

// NewProp_ReapplyLandscapeLayers_SetBit @ 145ecfdd0

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x800;
  return;
}

// NewProp_ReapplyZOffset_SetBit @ 145ecfdf0

void __cdecl Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x1000;
  return;
}

// NewProp_ReapplyCollisionWithWorld_SetBit @ 145ecfe10

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x2000;
  return;
}

// NewProp_ReapplyVertexColorMask_SetBit @ 145ecfe30

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x4000;
  return;
}

// NewProp_bEnableDensityScaling_SetBit @ 145ecfe50

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x8000;
  return;
}

// NewProp_bEnableDiscardOnLoad_SetBit @ 145ecfe70

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDiscardOnLoad_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x10000;
  return;
}

// NewProp_bEnableCullDistanceScaling_SetBit @ 145ecfe90

void __cdecl
Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableCullDistanceScaling_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4a4) = *(uint *)((longlong)param_1 + 0x4a4) | 0x20000;
  return;
}

// Z_Construct_UClass_UProceduralFoliageTile @ 145ecfeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralFoliageTile(void)

{
  if (Z_Registration_Info_UClass_UProceduralFoliageTile.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralFoliageTile.OuterSingleton,
               &Z_Construct_UClass_UProceduralFoliageTile_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageTile.OuterSingleton;
}

// Z_Construct_UClass_AProceduralFoliageBlockingVolume @ 145ecfef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AProceduralFoliageBlockingVolume(void)

{
  if (Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton,
               &Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.OuterSingleton;
}

// Z_Construct_UClass_AInstancedFoliageActor @ 145ed01f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AInstancedFoliageActor(void)

{
  if (Z_Registration_Info_UClass_AInstancedFoliageActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AInstancedFoliageActor.OuterSingleton,
               &Z_Construct_UClass_AInstancedFoliageActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AInstancedFoliageActor.OuterSingleton;
}

// Z_Construct_UClass_UFoliageType_Actor @ 145ed0230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFoliageType_Actor(void)

{
  if (Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton,
               &Z_Construct_UClass_UFoliageType_Actor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton;
}

// NewProp_bShouldAttachToBaseComponent_SetBit @ 145ed02c0

void __cdecl
Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c8) = 1;
  return;
}

// NewProp_bStaticMeshOnly_SetBit @ 145ed02d0

void __cdecl
Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c9) = 1;
  return;
}

// Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister @ 145ed0320

UClass * __cdecl Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType_InstancedStaticMesh",
               &Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton,
               UFoliageType_InstancedStaticMesh::
               StaticRegisterNativesUFoliageType_InstancedStaticMesh,0x4f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFoliageType_InstancedStaticMesh>,
               InternalVTableHelperCtorCaller<UFoliageType_InstancedStaticMesh>,local_res8,
               UFoliageType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton;
}

// Z_Construct_UClass_UInteractiveFoliageComponent @ 145ed0560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInteractiveFoliageComponent(void)

{
  if (Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton,
               &Z_Construct_UClass_UInteractiveFoliageComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton;
}

// Z_Construct_UClass_UFoliageType_InstancedStaticMesh @ 145ed05a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFoliageType_InstancedStaticMesh(void)

{
  if (Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton,
               &Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton;
}

// operator<<<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> @ 145ed0720

FArchive * __cdecl
operator<<<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_2)

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
        TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
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

// operator<<<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> @ 145ed0730

FArchive * __cdecl
operator<<<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
          (FArchive *param_1,TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> *param_2)

{
  FFoliageInfo *this;
  EFoliageImplType *pEVar1;
  FFoliageImpl *pFVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x150))();
  this = *(FFoliageInfo **)&param_2->field_0x8;
  pEVar1 = (EFoliageImplType *)**(undefined8 **)&param_1->field_0x8;
  if ((EFoliageImplType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    this->Type = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    FFoliageInfo::CreateImplementation(this,this->Type);
  }
  pFVar2 = (this->Implementation).Ptr;
  if (pFVar2 != (FFoliageImpl *)0x0) {
    (**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,param_1);
  }
  return param_1;
}

// operator<<<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator> @ 145ed07c0

FArchive * __cdecl
operator<<<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  UObject *pUVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145ed715e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_145ed715e:
  uVar11 = (ulonglong)uVar13;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar13 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar9 = uVar7;
      while (uVar13 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145ed723b;
        uVar13 = puVar12[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_145ed723b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_ = CONCAT44(uStack_74,uStack_78);
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        pUVar3 = *(UObject **)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar8 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FFoliageInfo> @ 145ed07d0

FArchive * __cdecl operator<<<FFoliageInfo>(FArchive *param_1,TUniqueObj<FFoliageInfo> *param_2)

{
  FFoliageInfo *this;
  EFoliageImplType *pEVar1;
  FFoliageImpl *pFVar2;
  
  this = (param_2->Obj).Ptr;
  pEVar1 = (EFoliageImplType *)**(undefined8 **)&param_1->field_0x8;
  if ((EFoliageImplType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    this->Type = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    FFoliageInfo::CreateImplementation(this,this->Type);
  }
  pFVar2 = (this->Implementation).Ptr;
  if (pFVar2 != (FFoliageImpl *)0x0) {
    (**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,param_1);
  }
  return param_1;
}

// operator<<<FFoliageInstanceCluster_Deprecated,TSizedDefaultAllocator<32>_> @ 145ed0850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FArchive * __cdecl
operator<<<FFoliageInstanceCluster_Deprecated,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FFoliageInstanceCluster_Deprecated,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
  iVar10 = 0;
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
                (0x40,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            operator<<(param_1,(FFoliageInstanceCluster_Deprecated *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x40));
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FFoliageInstanceCluster_Deprecated,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x840,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          operator<<(param_1,(FFoliageInstanceCluster_Deprecated *)(pFVar3 + (longlong)iVar6 * 0x40)
                    );
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// operator<<<FFoliageInstance_Deprecated,TSizedDefaultAllocator<32>_> @ 145ed0860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FArchive * __cdecl
operator<<<FFoliageInstance_Deprecated,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FFoliageInstance_Deprecated,TSizedDefaultAllocator<32>_> *param_2)

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
  FFoliageInstance_Deprecated *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x78);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x22223)) {
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
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
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
              operator<<(param_1,(FFoliageInstance_Deprecated *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x78));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FFoliageInstance_Deprecated,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x878,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FFoliageInstance_Deprecated *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x78);
              DefaultConstructItems<FFoliageInstance_Deprecated,int>(pFVar10,1);
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

// operator<<<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145ed0870

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> *pTVar11;
  uint *puVar12;
  int iVar13;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x18,(longlong)*(int *)&param_2->field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar13 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar13 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_145ed0b9c;
        uVar9 = puVar12[lVar8 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar13 < iStack_64) {
LAB_145ed0b9c:
        iStack_64 = iVar13;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar13) {
      do {
        operator<<<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
                  (param_1,(TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x18));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    iVar13 = 0;
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar5 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x18);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar11 = local_78.Pointer;
        if (local_78.Pointer == (TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> *)0x0) {
          pTVar11 = (TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> *)0x0;
        }
        else {
          *(undefined8 *)local_78.Pointer = 0;
          puVar7 = operator_new(0x10);
          if (puVar7 == (undefined1 *)0x0) {
            *(undefined8 *)((longlong)pTVar11 + 8) = 0;
            *(undefined4 *)((void *)pTVar11 + 1) = 0xffffffff;
          }
          else {
            *puVar7 = 1;
            *(undefined8 *)(puVar7 + 8) = 0;
            *(undefined1 **)((longlong)pTVar11 + 8) = puVar7;
            *(undefined4 *)((void *)pTVar11 + 1) = 0xffffffff;
          }
        }
        operator<<<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>(param_1,pTVar11);
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_> @ 145ed0dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<UProceduralFoliageTile_*>::Run_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TAsyncRunnable<UProceduralFoliageTile_*> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->Thread;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->__this;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>,void>
             ::Call;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    UE::Tasks::Private::FTaskBase::Init(pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (TAsyncRunnable<UProceduralFoliageTile_*> *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_> @ 145ed1a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<UProceduralFoliageTile_*> * __cdecl
Async<_UProceduralFoliageSpawner::Simulate_::__l4::<lambda_1>_>
          (TFuture<UProceduralFoliageTile_*> *__return_storage_ptr__,EAsyncExecution param_1,
          <lambda_1> *param_2,TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  UProceduralFoliageTile *pUVar6;
  wchar_t *pwVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  FTaskBase *pFVar11;
  TFuture<UProceduralFoliageTile_*> *pTVar12;
  FTaskBase *pFVar13;
  FTSTicker *this;
  undefined8 uVar14;
  FTaskBase *pFVar15;
  FRunnableThread *pFVar16;
  undefined8 *puVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FSharedReferencer<1> FVar20;
  longlong *plVar21;
  ForAnyElementType FVar22;
  FTaskBase *pFVar23;
  FTaskBase *pFVar24;
  Type TVar25;
  FTaskBase *pFVar26;
  FTaskBase *this_00;
  undefined1 auStackY_1e8 [32];
  EExtendedTaskPriority local_1a8;
  ETaskPriority local_1a7 [7];
  FTaskBase *local_1a0;
  EAsyncExecution local_198;
  TFuture<UProceduralFoliageTile_*> *local_190;
  FTaskBase *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar24 = (FTaskBase *)0x0;
  local_1a0 = (FTaskBase *)((ulonglong)local_1a0 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_198 = param_1;
  local_190 = __return_storage_ptr__;
  local_188 = (FTaskBase *)param_3;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x28,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UProceduralFoliageSpawner::Simulate'::`4'::<lambda_1>,1,1>::_vftable_
  ;
  pUVar6 = param_2->NewTile;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)param_2->__this;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)pUVar6;
  pwVar7 = *(wchar_t **)&param_2->LastCancelInit;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).
  SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)&param_2->RandomNumber
  ;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->DebugName = pwVar7;
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount !=
      (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>,UProceduralFoliageTile_*>
               ::Call;
  }
  pFVar11 = operator_new(0x90);
  if (pFVar11 == (FTaskBase *)0x0) {
    local_1a0 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar11 = pFVar24;
  }
  else {
    *(atomic<int> *)&pFVar11->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar11->_padding_)[1] = (atomic<int>)0x1;
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_PEAVUProceduralFoliageTile_____00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)&pFVar11->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar11->_padding_;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
      return pTVar12;
    }
    LOCK();
    *(atomic<int> *)&pFVar11->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar11->_padding_ + 1);
    UNLOCK();
    local_1a0 = pFVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
      return pTVar12;
    }
    LOCK();
    *(atomic<int> *)&pFVar11->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar11->_padding_ + 1);
    UNLOCK();
  }
  pFVar23 = this_00;
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (local_198 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar13 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar23 = pFVar24;
    if (pFVar13 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar13,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar13->_padding_ =
           (longlong)&___7__TGraphTask_V__TAsyncGraphTask_PEAVUProceduralFoliageTile______6B_;
      pFVar23 = pFVar13;
    }
    pFVar23[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar23[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar23[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar23[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_1a0 = (FTaskBase *)0x0;
    pFVar23[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar23[1]._padding_ != 0) {
      local_f8 = pFVar24;
    }
    pFVar23[1].Pipe = (FPipe *)this_00;
    *(FTaskBase **)&pFVar23[1].StateChangeEvent = pFVar11;
    *(undefined1 *)&pFVar23[1].ExecutingThreadId = 1;
    *(Type *)&pFVar23[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_1a7,&local_1a8);
    UE::Tasks::Private::FTaskBase::Init(pFVar23,L"GraphTask",local_1a7[0],local_1a8,None);
    if (pFVar23 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar23->RefCount = (atomic<unsigned_int>)((int)pFVar23->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar23,0x130);
      LOCK();
      paVar1 = &pFVar23->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar23->_padding_)(pFVar23,1);
      }
    }
    goto LAB_145ed1d0a;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_1a0 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar11;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UProceduralFoliageSpawner::Simulate'::`4'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
      return pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)(*(code **)pFVar19 + 0x10))();
    }
LAB_145ed1d0a:
    pTVar12 = local_190;
    *(FTaskBase **)local_190 = this_00;
    *(FTaskBase **)&local_190->field_0x8 = pFVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_145ed2531;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pFVar15 = operator_new(0x70);
      pFVar13 = local_188;
      pFVar26 = pFVar24;
      if (pFVar15 != (FTaskBase *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
          return pTVar12;
        }
        pTVar8 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
          return pTVar12;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1a0 = (FTaskBase *)0x0;
        pFVar15->_padding_ = (longlong)&___7__TAsyncRunnable_PEAVUProceduralFoliageTile____6B_;
        pFVar15->_padding_ = (longlong)local_f8;
        pFVar15->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar15->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar15->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar15->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar15->_padding_ != 0) {
          local_f8 = pFVar24;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar15->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_170.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar15->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar15->ExecutingThreadId = pFVar11;
        (pFVar15->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar15->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar13 = pFVar24;
        pFVar23 = pFVar24;
        pFVar24 = (FTaskBase *)&DAT_00000001;
        pFVar26 = pFVar15;
      }
      if (pFVar24 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar13);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar22.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar16 = FRunnableThread::Create
                          ((FRunnable *)pFVar26,(wchar_t *)FVar22.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar16;
      if ((pFVar16 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
        return pTVar12;
      }
      iVar10 = (**(code **)(pFVar16->_padding_ + 0x28))(pFVar16);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
        return pTVar12;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
        return pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
LAB_145ed20ee:
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar20.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar20.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar14 = (**(code **)((longlong)((FPipe *)FVar20.ReferenceController)->LastTask + 8))();
      uVar14 = (*(code *)pFVar24)(uVar14);
      if (this_00 == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
          return pTVar12;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
          return pTVar12;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
        return pTVar12;
      }
      *(undefined8 *)&(this_00->Prerequisites).Mutex = uVar14;
      FFutureState::MarkComplete((FFutureState *)this_00);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((!bVar9) && (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), !bVar9))
    goto LAB_145ed20ee;
    TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
    pFVar15 = operator_new(0x70);
    pFVar13 = local_188;
    pFVar26 = pFVar24;
    if (pFVar15 != (FTaskBase *)0x0) {
      if ((local_158.bFutureRetrieved != false) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!bFutureRetrieved",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x24d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
        return pTVar12;
      }
      pTVar8 = local_158.State.Object;
      local_158.bFutureRetrieved = true;
      if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
        return pTVar12;
      }
      if (local_158.State.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_1a0 = (FTaskBase *)0x0;
      pFVar15->_padding_ = (longlong)&___7__TAsyncRunnable_PEAVUProceduralFoliageTile____6B_;
      pFVar15->_padding_ = (longlong)local_f8;
      pFVar15->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar15->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
      pFVar15->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
      *(TEventCount<unsigned_int> **)&(pFVar15->RefCount).field_0x0 = local_e8.EmptyEventRef.Object;
      if (pFVar15->_padding_ != 0) {
        local_f8 = pFVar24;
      }
      *(TReferenceControllerBase<1> **)
       &(pFVar15->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
           local_158.State.SharedReferenceCount.ReferenceController;
      *(FTaskBase **)&(pFVar15->StateChangeEvent).Count = this_00;
      *(FTaskBase **)&pFVar15->ExecutingThreadId = pFVar11;
      (pFVar15->TraceId).field_0x0 = 1;
      *(TFutureState<FRunnableThread_*> **)
       (pFVar15->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
      pFVar13 = pFVar24;
      pFVar23 = pFVar24;
      pFVar24 = (FTaskBase *)&DAT_00000002;
      pFVar26 = pFVar15;
    }
    if (pFVar24 != (FTaskBase *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
    }
    FAsyncThreadIndex::GetNext();
    FString::PrintfImpl(&local_120,L"TAsync %d");
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar22.Data = local_120.Data.AllocatorInstance.Data;
    }
    pFVar16 = FForkProcessHelper::CreateForkableThread
                        ((FRunnable *)pFVar26,(wchar_t *)FVar22.Data,0,TPri_Normal,
                         0xffffffffffffffff,None,false);
    local_178 = pFVar16;
    if ((pFVar16 == (FRunnableThread *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x161,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
      return pTVar12;
    }
    iVar10 = (**(code **)(pFVar16->_padding_ + 0x28))(pFVar16);
    if ((iVar10 != 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x162,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
      return pTVar12;
    }
    TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
        ((local_158.State.Object)->field_0x68 == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
      return pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.State.SharedReferenceCount.ReferenceController);
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar9) goto LAB_145ed20ee;
    if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("GThreadPool != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x16f,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
      return pTVar12;
    }
    pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
    puVar17 = operator_new(0x60);
    if (puVar17 == (undefined8 *)0x0) {
      (*pcVar5)(GThreadPool,0,3);
    }
    else {
      puVar17[1] = 0;
      local_1a0 = (FTaskBase *)0x0;
      *puVar17 = &___7__TAsyncQueuedWork_PEAVUProceduralFoliageTile____6B_;
      puVar17[2] = local_f8;
      puVar17[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)(puVar17 + 4) = local_e8.LastTask._0_4_;
      *(undefined4 *)((longlong)puVar17 + 0x24) = local_e8.LastTask._4_4_;
      *(undefined4 *)(puVar17 + 5) = local_e8.TaskCount._0_4_;
      *(undefined4 *)((longlong)puVar17 + 0x2c) = local_e8.TaskCount._4_4_;
      puVar17[6] = local_e8.EmptyEventRef.Object;
      if (puVar17[2] != 0) {
        local_f8 = pFVar24;
      }
      puVar17[8] = this_00;
      puVar17[9] = pFVar11;
      *(undefined1 *)(puVar17 + 10) = 1;
      (*pcVar5)(GThreadPool,puVar17,3);
      pFVar23 = pFVar24;
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pTVar12 = local_190;
  *(FTaskBase **)local_190 = this_00;
  *(FTaskBase **)&local_190->field_0x8 = pFVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar23 != (FTaskBase *)0x0) &&
      ((char)(pFVar23->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TFuture<UProceduralFoliageTile_*> *)(*pcVar5)();
    return pTVar12;
  }
LAB_145ed2531:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a0);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar20.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar20.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar20.ReferenceController)->LastTask + 0x10))();
  }
  if (local_188->_padding_ != 0) {
    plVar21 = &local_188->_padding_;
    if ((longlong *)local_188->_padding_ != (longlong *)0x0) {
      plVar21 = (longlong *)local_188->_padding_;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  return pTVar12;
}

// CastChecked<AInstancedFoliageActor,AActor> @ 145ed25f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInstancedFoliageActor * __cdecl CastChecked<AInstancedFoliageActor,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<AInstancedFoliageActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AInstancedFoliageActor::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AInstancedFoliageActor *)param_1;
  }
  pFVar3 = GetTypeName<AInstancedFoliageActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<AInstancedFoliageActor,AActor> @ 145ed26b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInstancedFoliageActor * __cdecl
CastChecked<AInstancedFoliageActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (AInstancedFoliageActor *)0x0;
    }
    pFVar3 = GetTypeName<AInstancedFoliageActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AInstancedFoliageActor::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AInstancedFoliageActor *)param_1;
  }
  pFVar3 = GetTypeName<AInstancedFoliageActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<AInstancedFoliageActor,UObject> @ 145ed2790

AInstancedFoliageActor * __cdecl CastChecked<AInstancedFoliageActor,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<AInstancedFoliageActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AInstancedFoliageActor::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (AInstancedFoliageActor *)param_1;
  }
  pFVar3 = GetTypeName<AInstancedFoliageActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UInteractiveFoliageComponent,UStaticMeshComponent> @ 145ed2850

UInteractiveFoliageComponent * __cdecl
CastChecked<UInteractiveFoliageComponent,UStaticMeshComponent>(UStaticMeshComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStaticMeshComponent *)0x0) {
    pFVar3 = GetTypeName<UInteractiveFoliageComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UInteractiveFoliageComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UInteractiveFoliageComponent *)param_1;
  }
  pFVar3 = GetTypeName<UInteractiveFoliageComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStaticMeshComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<AActor_*,TObjectPtr<AActor>,int> @ 145ed2910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ConstructItems<AActor_*,TObjectPtr<AActor>,int>
          (void *param_1,TObjectPtr<AActor> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FFoliageInstanceCluster_Deprecated,int> @ 145ed2940

void __cdecl
DefaultConstructItems<FFoliageInstanceCluster_Deprecated,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FFoliageInstance_Deprecated,int> @ 145ed2950

void __cdecl DefaultConstructItems<FFoliageInstance_Deprecated,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0x3f800000;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
      puVar1[8] = 0x3f800000;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UMaterialInterface>,int> @ 145ed29e0

void __cdecl
DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
          (TSoftObjectPtr<UMaterialInterface> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFuture<UProceduralFoliageTile_*>,int> @ 145ed2a20

void __cdecl
DestructItems<TFuture<UProceduralFoliageTile_*>,int>
          (TFuture<UProceduralFoliageTile_*> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::TSTR_UpdateFoliageParameters48>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145ed35e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread_::__l2::TSTR_UpdateFoliageParameters48>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  FRenderCommandTag *pFVar16;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar17;
  undefined8 uVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar19;
  FTaskBase *this_02;
  FName FVar20;
  FNameEntryId FVar21;
  FNameEntryId FVar22;
  uint local_res10;
  uint uStackX_14;
  ETaskPriority local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar16 = (FRenderCommandTag *)
            TRenderCommandTag<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::TSTR_UpdateFoliageParameters48>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar16->SpecId,pFVar16->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar16->SpecId);
  }
  bVar14 = IsInRenderingThread();
  if ((!bVar14) && ((GIsThreadedRendering != false || (bVar14 = IsInGameThread(), !bVar14)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar14 = IsInGameThread(), bVar14 &&
        (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar14)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_V__TRenderCommandTask_V__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___FRenderThreadCommandPipe____6B_
        ;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar16;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar9 = param_1->field_0x2c;
      uVar10 = param_1->field_0x2d;
      uVar11 = *(undefined2 *)&param_1->field_0x2e;
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)*(undefined4 *)&param_1->field_0x28;
      this_02[1].ExtendedPriority = uVar9;
      this_02[1].TaskTriggered = (atomic<bool>)uVar10;
      this_02[1]._padding_ = uVar11;
      *(undefined8 *)&param_1->field_0x28 = 0;
      uVar12 = *(undefined4 *)&param_1->field_0x18;
      uVar13 = *(undefined4 *)&param_1->field_0x1c;
      this_02[1]._padding_ = *(longlong *)&param_1->field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar12;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar13;
      this_02[1].Pipe = *(FPipe **)&param_1->field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_res18,
                 (EExtendedTaskPriority *)&local_res10);
      UE::Tasks::Private::FTaskBase::Init
                (this_02,L"GraphTask",local_res18[0],(EExtendedTaskPriority)local_res10,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar16);
    }
    goto LAB_145ed3a08;
  }
  pTVar4 = (pFVar16->StatId).StatIdPtr;
  FVar22.Value = 0;
  bVar14 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar20 = *(FName *)&pTVar4->Name;
  FVar21 = FVar20.ComparisonIndex.Value;
  uVar15 = FVar20.Number;
  if ((FVar21.Value == 0) && (uVar15 == 0)) {
LAB_145ed38f2:
    bVar6 = false;
    FVar20 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar14 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar21.Value;
        local_68.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar14 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ed38f2;
    local_res10 = FVar21.Value;
    uStackX_14 = uVar15;
    local_58 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
    FVar22.Value = local_58.ComparisonIndex.Value;
  }
  pFVar17 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar5 = *(code **)param_1;
  plVar19 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar19 = *(longlong **)&param_1->field_0x28;
  }
  uVar18 = (**(code **)(*plVar19 + 8))();
  (*pcVar5)(uVar18,pFVar17);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar22.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_145ed3a08:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,1,1,`AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 145ed3b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
AActor::
ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,1,1,_AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UFoliageInstancedStaticMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = UFoliageInstancedStaticMeshComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_145ed3c33;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_145ed3c33:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_145ed3ccd;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_145ed3ccd:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_145ed3dd0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_145ed3dd0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,1,1,_AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UFoliageInstancedStaticMeshComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UFoliageInstancedStaticMeshComponent *)0x0) {
      `AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,1,0,`AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 145ed4040

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
AActor::
ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,1,0,_AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UFoliageInstancedStaticMeshComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UFoliageInstancedStaticMeshComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = UFoliageInstancedStaticMeshComponent::StaticClass();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_145ed4146;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_145ed4146:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145ed41cd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145ed41cd:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145ed42d1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_145ed42d1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UFoliageInstancedStaticMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UFoliageInstancedStaticMeshComponent *)0x0) {
      `AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,0,1,`AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 145ed4350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
AActor::
ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,0,1,_AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UFoliageInstancedStaticMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = UFoliageInstancedStaticMeshComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_145ed4443;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_145ed4443:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_145ed44f0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_145ed44f0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_145ed4600;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_145ed4600:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,0,1,_AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UFoliageInstancedStaticMeshComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UFoliageInstancedStaticMeshComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,0,0,`AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 145ed4890

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
AActor::
ForEachComponent_Internal<UFoliageInstancedStaticMeshComponent,0,0,_AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UFoliageInstancedStaticMeshComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UFoliageInstancedStaticMeshComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = UFoliageInstancedStaticMeshComponent::StaticClass();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_145ed496e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_145ed496e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_145ed49ff;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_145ed49ff:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_145ed4b10;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_145ed4b10:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UFoliageInstancedStaticMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UFoliageInstancedStaticMeshComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetFullNameForCastLogError<AActor> @ 145ed4e30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<AActor>(FString *__return_storage_ptr__,AActor *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UStaticMeshComponent> @ 145ed4e60

FString * __cdecl
GetFullNameForCastLogError<UStaticMeshComponent>
          (FString *__return_storage_ptr__,UStaticMeshComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<AInstancedFoliageActor> @ 145ed5040

FString * __cdecl GetTypeName<AInstancedFoliageActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AInstancedFoliageActor::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UInteractiveFoliageComponent> @ 145ed5080

FString * __cdecl GetTypeName<UInteractiveFoliageComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UInteractiveFoliageComponent::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FProceduralFoliageInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FProceduralFoliageInstance_*,`UProceduralFoliageTile::GetInstancesInAABB'::__l2::<lambda_1>_>_> @ 145ed50c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FProceduralFoliageInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FProceduralFoliageInstance_*,_UProceduralFoliageTile::GetInstancesInAABB_::__l2::<lambda_1>_>_>
          (FProceduralFoliageInstance **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FProceduralFoliageInstance_*,_private:_void___cdecl_UProceduralFoliageTile::GetInstancesInAABB(UE::Math::TBox2<double>_const_&,TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_>_&,bool)const_::_2_::<lambda_1>_>
          param_4)

{
  double dVar1;
  double dVar2;
  FProceduralFoliageInstance *pFVar3;
  FProceduralFoliageInstance *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar11 = iVar8;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_145ed51f2:
      if (iVar12 == 0) {
        iVar8 = param_2 + -1;
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar11 = 0;
            pFVar3 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = pFVar3;
            if (1 < iVar8) {
              do {
                iVar12 = iVar11 * 2;
                iVar7 = iVar12 + 1;
                if (iVar12 + 2 < iVar8) {
                  dVar1 = (param_1[iVar7]->Location).field0_0x0._s_0.X;
                  dVar2 = (param_1[(longlong)iVar12 + 2]->Location).field0_0x0._s_0.X;
                  if (dVar1 == dVar2) {
                    bVar6 = (param_1[(longlong)iVar12 + 2]->Location).field0_0x0._s_0.Y <
                            (param_1[iVar7]->Location).field0_0x0._s_0.Y;
                  }
                  else {
                    bVar6 = dVar2 < dVar1;
                  }
                  if (bVar6) {
                    iVar7 = iVar12;
                  }
                  iVar7 = iVar7 + 1;
                }
                pFVar3 = param_1[iVar7];
                pFVar4 = param_1[iVar11];
                dVar1 = (pFVar3->Location).field0_0x0._s_0.X;
                dVar2 = (pFVar4->Location).field0_0x0._s_0.X;
                if (dVar1 == dVar2) {
                  bVar6 = (pFVar4->Location).field0_0x0._s_0.Y <
                          (pFVar3->Location).field0_0x0._s_0.Y;
                }
                else {
                  bVar6 = dVar2 < dVar1;
                }
                if (!bVar6) break;
                param_1[iVar11] = pFVar3;
                param_1[iVar7] = pFVar4;
                iVar11 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar7 = iVar12 + -1;
      iVar8 = iVar11 + -2;
      iVar11 = iVar8;
      iVar12 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      dVar1 = (param_1[iVar9]->Location).field0_0x0._s_0.X;
      dVar2 = (param_1[(longlong)iVar8 + 2]->Location).field0_0x0._s_0.X;
      if (dVar1 == dVar2) {
        bVar6 = (param_1[(longlong)iVar8 + 2]->Location).field0_0x0._s_0.Y <
                (param_1[iVar9]->Location).field0_0x0._s_0.Y;
      }
      else {
        bVar6 = dVar2 < dVar1;
      }
      if (bVar6) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar3 = param_1[iVar9];
    pFVar4 = param_1[iVar7];
    dVar1 = (pFVar3->Location).field0_0x0._s_0.X;
    dVar2 = (pFVar4->Location).field0_0x0._s_0.X;
    if (dVar1 == dVar2) {
      bVar6 = (pFVar4->Location).field0_0x0._s_0.Y < (pFVar3->Location).field0_0x0._s_0.Y;
    }
    else {
      bVar6 = dVar2 < dVar1;
    }
    if (!bVar6) goto LAB_145ed51f2;
    iVar8 = iVar9 * 2 + 1;
    param_1[iVar7] = pFVar3;
    param_1[iVar9] = pFVar4;
    iVar7 = iVar9;
  } while( true );
}

// InternalConstructor<AInstancedFoliageActor> @ 145ed5310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AInstancedFoliageActor>(FObjectInitializer *param_1)

{
  AISMPartitionActor *this;
  
  this = (AISMPartitionActor *)param_1->Obj;
  if (this != (AISMPartitionActor *)0x0) {
    AISMPartitionActor::AISMPartitionActor(this,param_1);
    *(undefined ***)this = &AInstancedFoliageActor::_vftable__for__APartitionActor__;
    *(undefined ***)&this->field_0x2c0 =
         &AInstancedFoliageActor::_vftable__for__ISMInstanceManager__;
    *(undefined ***)&this->field_0x2c8 =
         &AInstancedFoliageActor::_vftable__for__ISMInstanceManagerProvider__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x48 = 0;
    AActor::SetActorEnableCollision((AActor *)this,true);
    this->field_0x32 = this->field_0x32 & 0xfd;
  }
  return;
}

// InternalConstructor<AInteractiveFoliageActor> @ 145ed53c0

void __cdecl InternalConstructor<AInteractiveFoliageActor>(FObjectInitializer *param_1)

{
  if ((AInteractiveFoliageActor *)param_1->Obj != (AInteractiveFoliageActor *)0x0) {
    AInteractiveFoliageActor::AInteractiveFoliageActor
              ((AInteractiveFoliageActor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AProceduralFoliageBlockingVolume> @ 145ed53e0

void __cdecl InternalConstructor<AProceduralFoliageBlockingVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  longlong *plVar1;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7AProceduralFoliageBlockingVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    FFoliageDensityFalloff::FFoliageDensityFalloff((FFoliageDensityFalloff *)&this[1].field_0x8);
    plVar1 = *(longlong **)&this->field_0x2d8;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x790))(plVar1,0);
      (**(code **)(*plVar1 + 0x9f8))(plVar1,0);
    }
    this->field_0x5b = this->field_0x5b | 2;
  }
  return;
}

// InternalConstructor<AProceduralFoliageVolume> @ 145ed5460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<AProceduralFoliageVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  FName FVar1;
  UPrimitiveComponent *this_00;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &AProceduralFoliageVolume::_vftable__for__AVolume__;
    *(undefined ***)(this + 1) =
         &AProceduralFoliageVolume::_vftable__for__IWorldPartitionActorLoaderInterface__;
    pFVar2 = FName::FName(&local_res8,L"ProceduralFoliageComponent");
    FVar1 = *pFVar2;
    pUVar3 = UProceduralFoliageComponent::StaticClass();
    pUVar4 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&this[1].field_0x8 = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(AVolume **)&pUVar4[5].field_0x8 = this;
    this_00 = *(UPrimitiveComponent **)&this->field_0x2d8;
    if (this_00 != (UPrimitiveComponent *)0x0) {
      (**(code **)(*(longlong *)this_00 + 0x790))(this_00);
      (**(code **)(*(longlong *)this_00 + 0x9f8))(this_00);
      UPrimitiveComponent::SetGenerateOverlapEvents(this_00,false);
    }
  }
  return;
}

// InternalConstructor<UFoliageInstancedStaticMeshComponent> @ 145ed5570

void __cdecl InternalConstructor<UFoliageInstancedStaticMeshComponent>(FObjectInitializer *param_1)

{
  UHierarchicalInstancedStaticMeshComponent *this;
  
  this = (UHierarchicalInstancedStaticMeshComponent *)param_1->Obj;
  if (this != (UHierarchicalInstancedStaticMeshComponent *)0x0) {
    UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
              (this,param_1);
    this->bUseTranslatedInstanceSpace = 1;
    *(undefined ***)this = &UFoliageInstancedStaticMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x650 = &___7UFoliageInstancedStaticMeshComponent__6B_;
    this->field_0x27a = this->field_0x27a & 0xfe;
    *(undefined8 *)&this->field_0xb98 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x2c = 0;
    *(undefined8 *)&this[1].field_0x34 = 0;
    this->ViewRelevanceType = Foliage;
  }
  return;
}

// InternalConstructor<UFoliageStatistics> @ 145ed5650

void __cdecl InternalConstructor<UFoliageStatistics>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UFoliageStatistics__6B_;
  }
  return;
}

// InternalConstructor<UFoliageType> @ 145ed5680

void __cdecl InternalConstructor<UFoliageType>(FObjectInitializer *param_1)

{
  if ((UFoliageType *)param_1->Obj != (UFoliageType *)0x0) {
    UFoliageType::UFoliageType((UFoliageType *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UFoliageType_Actor> @ 145ed56a0

void __cdecl InternalConstructor<UFoliageType_Actor>(FObjectInitializer *param_1)

{
  UFoliageType *this;
  UClass *pUVar1;
  
  this = (UFoliageType *)param_1->Obj;
  if (this != (UFoliageType *)0x0) {
    UFoliageType::UFoliageType(this,param_1);
    this->Density = 10.0;
    this->_padding_ = (longlong)&___7UFoliageType_Actor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->Radius = 500.0;
    *(undefined1 *)&this[1]._padding_ = 1;
    pUVar1 = UFoliageInstancedStaticMeshComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this[1]._padding_ = (longlong)pUVar1;
  }
  return;
}

// InternalConstructor<UFoliageType_InstancedStaticMesh> @ 145ed5730

void __cdecl InternalConstructor<UFoliageType_InstancedStaticMesh>(FObjectInitializer *param_1)

{
  UFoliageType *this;
  UClass *pUVar1;
  
  this = (UFoliageType *)param_1->Obj;
  if (this != (UFoliageType *)0x0) {
    UFoliageType::UFoliageType(this,param_1);
    this->_padding_ = (longlong)&___7UFoliageType_InstancedStaticMesh__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].UpdateGuid.A = 0;
    this[1].UpdateGuid.B = 0;
    this[1]._padding_ = 0;
    pUVar1 = UFoliageInstancedStaticMeshComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this[1].UpdateGuid = pUVar1;
    (this->CustomNavigableGeometry).Value = '\x01';
  }
  return;
}

// InternalConstructor<UGrassInstancedStaticMeshComponent> @ 145ed57d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<UGrassInstancedStaticMeshComponent>(FObjectInitializer *param_1)

{
  UHierarchicalInstancedStaticMeshComponent *this;
  
  this = (UHierarchicalInstancedStaticMeshComponent *)param_1->Obj;
  if (this != (UHierarchicalInstancedStaticMeshComponent *)0x0) {
    UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
              (this,param_1);
    this->ViewRelevanceType = Grass;
    *(undefined ***)this = &UGrassInstancedStaticMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x650 = &___7UGrassInstancedStaticMeshComponent__6B_;
    FPrimitiveInstanceDataManager::SetMode
              ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,ExternalLegacyData);
    return;
  }
  return;
}

// InternalConstructor<UInteractiveFoliageComponent> @ 145ed5870

void __cdecl InternalConstructor<UInteractiveFoliageComponent>(FObjectInitializer *param_1)

{
  UStaticMeshComponent *this;
  
  this = (UStaticMeshComponent *)param_1->Obj;
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UInteractiveFoliageComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UInteractiveFoliageComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UInteractiveFoliageComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UInteractiveFoliageComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UInteractiveFoliageComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UInteractiveFoliageComponent::_vftable__for__IPhysicsComponent__;
  }
  return;
}

// InternalConstructor<UProceduralFoliageComponent> @ 145ed58e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UProceduralFoliageComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  longlong lVar1;
  bool bVar2;
  FGuid *pFVar3;
  FGuid local_18;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UProceduralFoliageComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UProceduralFoliageComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UProceduralFoliageComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar2) {
      pFVar3 = FGuid::NewGuid(&local_18);
      lVar1 = *(longlong *)&pFVar3->C;
      this[1]._padding_ = *(longlong *)pFVar3;
      this[1]._padding_ = lVar1;
    }
  }
  return;
}

// InternalConstructor<UProceduralFoliageSpawner> @ 145ed5970

void __cdecl InternalConstructor<UProceduralFoliageSpawner>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x4 = 0x461c4000;
    *(undefined ***)this = &___7UProceduralFoliageSpawner__6B_;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined1 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[1].field_0xc = 0x42c80000;
    *(undefined4 *)&this[1].field_0x8 = 10;
    *(undefined4 *)(this + 1) = 0x2a;
  }
  return;
}

// InternalConstructor<UProceduralFoliageTile> @ 145ed59e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl InternalConstructor<UProceduralFoliageTile>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined7 uStack_17;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    uVar2 = _UNK_15066df78;
    uVar1 = __xmm_80000000000000008000000000000000;
    *(undefined ***)this = &___7UProceduralFoliageTile__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0xc = 0x80;
    *(undefined4 *)&this[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x14 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 7) = uVar1;
    *(undefined8 *)&this[7].field_0x8 = uVar2;
    *(undefined4 *)&this[8].field_0x10 = 0x42c80000;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    this[8].field_0x14 = 0;
    *(ulonglong *)&this[7].field_0x20 = CONCAT71(uStack_17,1);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[8].field_0x1c = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AInstancedFoliageActor> @ 145ed5b10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AInstancedFoliageActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AISMPartitionActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AInstancedFoliageActor::GetPrivateStaticClass();
  this = (AISMPartitionActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AISMPartitionActor *)0x0) {
    AISMPartitionActor::AISMPartitionActor(this,param_1);
    *(undefined ***)this = &AInstancedFoliageActor::_vftable__for__APartitionActor__;
    *(undefined ***)&this->field_0x2c0 =
         &AInstancedFoliageActor::_vftable__for__ISMInstanceManager__;
    *(undefined ***)&this->field_0x2c8 =
         &AInstancedFoliageActor::_vftable__for__ISMInstanceManagerProvider__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined4 *)&this[1].field_0x48 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AInteractiveFoliageActor> @ 145ed5c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AInteractiveFoliageActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AStaticMeshActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AInteractiveFoliageActor::GetPrivateStaticClass();
  this = (AStaticMeshActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AStaticMeshActor *)0x0) {
    AStaticMeshActor::AStaticMeshActor(this,param_1);
    this->_padding_ = (longlong)&___7AInteractiveFoliageActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AProceduralFoliageBlockingVolume> @ 145ed5ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AProceduralFoliageBlockingVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AProceduralFoliageBlockingVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7AProceduralFoliageBlockingVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    FFoliageDensityFalloff::FFoliageDensityFalloff((FFoliageDensityFalloff *)&this[1].field_0x8);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AProceduralFoliageVolume> @ 145ed5da0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AProceduralFoliageVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AProceduralFoliageVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &AProceduralFoliageVolume::_vftable__for__AVolume__;
    *(undefined ***)(this + 1) =
         &AProceduralFoliageVolume::_vftable__for__IWorldPartitionActorLoaderInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFoliageInstancedStaticMeshComponent> @ 145ed5e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFoliageInstancedStaticMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UHierarchicalInstancedStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFoliageInstancedStaticMeshComponent::GetPrivateStaticClass();
  this = (UHierarchicalInstancedStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UHierarchicalInstancedStaticMeshComponent *)0x0) {
    UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
              (this,param_1);
    *(undefined ***)this = &UFoliageInstancedStaticMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UFoliageInstancedStaticMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x650 = &___7UFoliageInstancedStaticMeshComponent__6B_;
    *(undefined8 *)&this->field_0xb98 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x2c = 0;
    *(undefined8 *)&this[1].field_0x34 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFoliageStatistics> @ 145ed5fa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFoliageStatistics>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFoliageStatistics::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFoliageStatistics__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFoliageType> @ 145ed6050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFoliageType>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFoliageType *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFoliageType::GetPrivateStaticClass();
  pUVar3 = (UFoliageType *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UFoliageType *)0x0) {
    pUVar3 = UFoliageType::UFoliageType(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFoliageType_Actor> @ 145ed60f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFoliageType_Actor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFoliageType *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFoliageType_Actor::GetPrivateStaticClass();
  this = (UFoliageType *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UFoliageType *)0x0) {
    UFoliageType::UFoliageType(this,param_1);
    this->_padding_ = (longlong)&___7UFoliageType_Actor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFoliageType_InstancedStaticMesh> @ 145ed61b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFoliageType_InstancedStaticMesh>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFoliageType *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFoliageType_InstancedStaticMesh::GetPrivateStaticClass();
  this = (UFoliageType *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UFoliageType *)0x0) {
    UFoliageType::UFoliageType(this,param_1);
    this->_padding_ = (longlong)&___7UFoliageType_InstancedStaticMesh__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].UpdateGuid.A = 0;
    this[1].UpdateGuid.B = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGrassInstancedStaticMeshComponent> @ 145ed6290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGrassInstancedStaticMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UHierarchicalInstancedStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGrassInstancedStaticMeshComponent::GetPrivateStaticClass();
  this = (UHierarchicalInstancedStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UHierarchicalInstancedStaticMeshComponent *)0x0) {
    UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
              (this,param_1);
    *(undefined ***)this = &UGrassInstancedStaticMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UGrassInstancedStaticMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x650 = &___7UGrassInstancedStaticMeshComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInteractiveFoliageComponent> @ 145ed6390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInteractiveFoliageComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInteractiveFoliageComponent::GetPrivateStaticClass();
  this = (UStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UInteractiveFoliageComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UInteractiveFoliageComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UInteractiveFoliageComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UInteractiveFoliageComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UInteractiveFoliageComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UInteractiveFoliageComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralFoliageComponent> @ 145ed6480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralFoliageComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralFoliageComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UProceduralFoliageComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UProceduralFoliageComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UProceduralFoliageComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralFoliageSpawner> @ 145ed6560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProceduralFoliageSpawner>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralFoliageSpawner::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 2) = 0;
    *(undefined ***)pUVar1 = &___7UProceduralFoliageSpawner__6B_;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralFoliageTile> @ 145ed6630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProceduralFoliageTile>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined7 uStack_17;
  
  pUVar5 = (UObject *)0x0;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UProceduralFoliageTile::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObject *)0x0) {
    UObject::UObject(pUVar3,param_1);
    uVar2 = _UNK_15066df78;
    uVar1 = __xmm_80000000000000008000000000000000;
    *(undefined ***)pUVar3 = &___7UProceduralFoliageTile__6B_;
    *(undefined8 *)&pUVar3[1].field_0x10 = 0;
    *(undefined8 *)(pUVar3 + 1) = 0;
    *(undefined8 *)&pUVar3[1].field_0x8 = 0;
    *(undefined8 *)(pUVar3 + 2) = 0;
    *(undefined4 *)&pUVar3[2].field_0x8 = 0;
    *(undefined4 *)&pUVar3[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar3[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar3[2].field_0x14 = 0;
    *(undefined8 *)&pUVar3[2].field_0x20 = 0;
    *(undefined4 *)(pUVar3 + 3) = 0;
    *(undefined8 *)&pUVar3[3].field_0x10 = 0;
    *(undefined8 *)&pUVar3[3].field_0x8 = 0;
    *(undefined8 *)(pUVar3 + 4) = 0;
    *(undefined4 *)&pUVar3[4].field_0x8 = 0;
    *(undefined4 *)&pUVar3[4].field_0xc = 0x80;
    *(undefined4 *)&pUVar3[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar3[4].field_0x14 = 0;
    *(undefined8 *)&pUVar3[4].field_0x20 = 0;
    *(undefined4 *)(pUVar3 + 5) = 0;
    *(undefined8 *)&pUVar3[5].field_0x10 = 0;
    *(undefined8 *)&pUVar3[5].field_0x8 = 0;
    *(undefined8 *)(pUVar3 + 6) = 0;
    *(undefined8 *)&pUVar3[5].field_0x20 = 0;
    *(undefined8 *)(pUVar3 + 7) = uVar1;
    *(undefined8 *)&pUVar3[7].field_0x8 = uVar2;
    *(undefined8 *)&pUVar3[7].field_0x10 = 0;
    *(undefined8 *)&pUVar3[7].field_0x18 = 0;
    *(undefined4 *)&pUVar3[8].field_0x10 = 0x42c80000;
    *(ulonglong *)&pUVar3[7].field_0x20 = CONCAT71(uStack_17,1);
    *(undefined8 *)(pUVar3 + 8) = 0;
    *(undefined8 *)&pUVar3[8].field_0x8 = 0;
    *(undefined8 *)&pUVar3[6].field_0x20 = 0;
    *(undefined8 *)&pUVar3[6].field_0x18 = 0;
    *(undefined8 *)&pUVar3[6].field_0x10 = 0;
    *(undefined8 *)&pUVar3[6].field_0x8 = 0;
    pUVar3[8].field_0x14 = 0;
    *(undefined8 *)&pUVar3[8].field_0x1c = 0;
    pUVar5 = pUVar3;
  }
  return pUVar5;
}

// IntroSortInternal<FProceduralFoliageInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FProceduralFoliageInstance_*,`UProceduralFoliageTile::GetInstancesInAABB'::__l2::<lambda_1>_>_> @ 145ed67e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FProceduralFoliageInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FProceduralFoliageInstance_*,_UProceduralFoliageTile::GetInstancesInAABB_::__l2::<lambda_1>_>_>
          (FProceduralFoliageInstance **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FProceduralFoliageInstance_*,_private:_void___cdecl_UProceduralFoliageTile::GetInstancesInAABB(UE::Math::TBox2<double>_const_&,TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_>_&,bool)const_::_2_::<lambda_1>_>
          param_4)

{
  FProceduralFoliageInstance **ppFVar1;
  double dVar2;
  double dVar3;
  FProceduralFoliageInstance *pFVar4;
  bool bVar5;
  int iVar6;
  FProceduralFoliageInstance *pFVar7;
  FProceduralFoliageInstance **ppFVar8;
  FProceduralFoliageInstance **ppFVar9;
  FProceduralFoliageInstance **ppFVar10;
  FProceduralFoliageInstance **ppFVar11;
  FProceduralFoliageInstance **ppFVar12;
  FProceduralFoliageInstance ***pppFVar13;
  float fVar14;
  undefined1 auStack_378 [48];
  FProceduralFoliageInstance **local_348;
  FProceduralFoliageInstance **local_338;
  FProceduralFoliageInstance **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar14;
    memset(local_320,0,0x2e8);
    pppFVar13 = &local_338;
    do {
      ppFVar11 = pppFVar13[1];
      ppFVar9 = *pppFVar13;
      ppFVar1 = pppFVar13[2];
      iVar6 = (int)((longlong)ppFVar11 - (longlong)ppFVar9 >> 3) + 1;
      local_348._0_4_ = (int)ppFVar1;
      ppFVar12 = ppFVar9;
      if ((int)local_348 != 0) {
LAB_145ed6890:
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          ppFVar8 = ppFVar11 + 1;
          pFVar4 = ppFVar12[iVar6 >> 1];
          ppFVar12[iVar6 >> 1] = *ppFVar12;
          *ppFVar12 = pFVar4;
          ppFVar9 = ppFVar12;
LAB_145ed68c0:
          ppFVar9 = ppFVar9 + 1;
          if (ppFVar9 <= ppFVar11) goto code_r0x000145ed68c9;
          goto LAB_145ed6900;
        }
        if (ppFVar12 < ppFVar11) {
          ppFVar1 = ppFVar12 + 1;
          do {
            ppFVar9 = ppFVar12;
            if (ppFVar1 <= ppFVar11) {
              ppFVar8 = ppFVar1;
              if (0x1f < ((longlong)ppFVar11 + (8 - (longlong)ppFVar1) & 0xfffffffffffffff8U)) {
                do {
                  pFVar4 = *ppFVar8;
                  pFVar7 = *ppFVar9;
                  dVar2 = (pFVar4->Location).field0_0x0._s_0.X;
                  dVar3 = (pFVar7->Location).field0_0x0._s_0.X;
                  if (dVar2 == dVar3) {
                    bVar5 = (pFVar7->Location).field0_0x0._s_0.Y <
                            (pFVar4->Location).field0_0x0._s_0.Y;
                  }
                  else {
                    bVar5 = dVar3 < dVar2;
                  }
                  if (bVar5) {
                    pFVar7 = pFVar4;
                    ppFVar9 = ppFVar8;
                  }
                  dVar2 = (pFVar7->Location).field0_0x0._s_0.X;
                  dVar3 = (ppFVar8[1]->Location).field0_0x0._s_0.X;
                  if (dVar3 == dVar2) {
                    bVar5 = (pFVar7->Location).field0_0x0._s_0.Y <
                            (ppFVar8[1]->Location).field0_0x0._s_0.Y;
                  }
                  else {
                    bVar5 = dVar2 < dVar3;
                  }
                  if (bVar5) {
                    ppFVar9 = ppFVar8 + 1;
                  }
                  pFVar4 = ppFVar8[2];
                  pFVar7 = *ppFVar9;
                  dVar2 = (pFVar4->Location).field0_0x0._s_0.X;
                  dVar3 = (pFVar7->Location).field0_0x0._s_0.X;
                  if (dVar2 == dVar3) {
                    bVar5 = (pFVar7->Location).field0_0x0._s_0.Y <
                            (pFVar4->Location).field0_0x0._s_0.Y;
                  }
                  else {
                    bVar5 = dVar3 < dVar2;
                  }
                  if (bVar5) {
                    ppFVar9 = ppFVar8 + 2;
                    pFVar7 = pFVar4;
                  }
                  dVar2 = (pFVar7->Location).field0_0x0._s_0.X;
                  dVar3 = (ppFVar8[3]->Location).field0_0x0._s_0.X;
                  if (dVar3 == dVar2) {
                    bVar5 = (pFVar7->Location).field0_0x0._s_0.Y <
                            (ppFVar8[3]->Location).field0_0x0._s_0.Y;
                  }
                  else {
                    bVar5 = dVar2 < dVar3;
                  }
                  if (bVar5) {
                    ppFVar9 = ppFVar8 + 3;
                  }
                  ppFVar8 = ppFVar8 + 4;
                } while (ppFVar8 <= ppFVar11 + -3);
              }
              for (; ppFVar8 <= ppFVar11; ppFVar8 = ppFVar8 + 1) {
                dVar2 = ((*ppFVar8)->Location).field0_0x0._s_0.X;
                dVar3 = ((*ppFVar9)->Location).field0_0x0._s_0.X;
                if (dVar2 == dVar3) {
                  bVar5 = ((*ppFVar9)->Location).field0_0x0._s_0.Y <
                          ((*ppFVar8)->Location).field0_0x0._s_0.Y;
                }
                else {
                  bVar5 = dVar3 < dVar2;
                }
                if (bVar5) {
                  ppFVar9 = ppFVar8;
                }
              }
            }
            pFVar4 = *ppFVar9;
            ppFVar8 = ppFVar11 + -1;
            *ppFVar9 = *ppFVar11;
            *ppFVar11 = pFVar4;
            ppFVar11 = ppFVar8;
          } while (ppFVar12 < ppFVar8);
        }
        goto LAB_145ed69e5;
      }
LAB_145ed69d4:
      local_348 = ppFVar1;
      HeapSortInternal<FProceduralFoliageInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FProceduralFoliageInstance_*,_UProceduralFoliageTile::GetInstancesInAABB_::__l2::<lambda_1>_>_>
                (ppFVar9,iVar6,param_3,param_4);
LAB_145ed69e5:
      pppFVar13 = pppFVar13 + -3;
    } while (&local_338 <= pppFVar13);
  }
  return;
code_r0x000145ed68c9:
  dVar2 = ((*ppFVar9)->Location).field0_0x0._s_0.X;
  dVar3 = ((*ppFVar12)->Location).field0_0x0._s_0.X;
  if (dVar2 == dVar3) {
    bVar5 = ((*ppFVar12)->Location).field0_0x0._s_0.Y < ((*ppFVar9)->Location).field0_0x0._s_0.Y;
  }
  else {
    bVar5 = dVar3 < dVar2;
  }
  if (!bVar5) goto LAB_145ed68c0;
LAB_145ed6900:
  do {
    ppFVar10 = ppFVar8;
    ppFVar8 = ppFVar10 + -1;
    if (ppFVar8 <= ppFVar12) break;
    dVar2 = ((*ppFVar12)->Location).field0_0x0._s_0.X;
    dVar3 = ((*ppFVar8)->Location).field0_0x0._s_0.X;
    if (dVar2 == dVar3) {
      bVar5 = ((*ppFVar8)->Location).field0_0x0._s_0.Y < ((*ppFVar12)->Location).field0_0x0._s_0.Y;
    }
    else {
      bVar5 = dVar3 < dVar2;
    }
  } while (!bVar5);
  if (ppFVar9 <= ppFVar8) {
    pFVar4 = *ppFVar9;
    *ppFVar9 = *ppFVar8;
    *ppFVar8 = pFVar4;
    goto LAB_145ed68c0;
  }
  pFVar4 = *ppFVar12;
  local_348._0_4_ = (int)local_348 + -1;
  *ppFVar12 = *ppFVar8;
  *ppFVar8 = pFVar4;
  if ((longlong)((longlong)ppFVar8 + (-8 - (longlong)ppFVar12) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar11 - (longlong)ppFVar9 & 0xfffffffffffffff8U)) {
    if (ppFVar9 < ppFVar11) {
      *pppFVar13 = ppFVar9;
      pppFVar13[1] = ppFVar11;
      *(int *)(pppFVar13 + 2) = (int)local_348;
      pppFVar13 = pppFVar13 + 3;
    }
    if (ppFVar8 <= ppFVar12 + 1) goto LAB_145ed69e5;
    ppFVar11 = ppFVar10 + -2;
    ppFVar9 = ppFVar12;
  }
  else {
    if (ppFVar12 + 1 < ppFVar8) {
      *pppFVar13 = ppFVar12;
      pppFVar13[1] = ppFVar10 + -2;
      *(int *)(pppFVar13 + 2) = (int)local_348;
      pppFVar13 = pppFVar13 + 3;
    }
    if (ppFVar11 <= ppFVar9) goto LAB_145ed69e5;
  }
  iVar6 = (int)((longlong)ppFVar11 - (longlong)ppFVar9 >> 3) + 1;
  ppFVar12 = ppFVar9;
  if ((int)local_348 == 0) goto LAB_145ed69d4;
  goto LAB_145ed6890;
}

// IsObjectPtrEqual<ULevel,ULevel_*,0> @ 145ed6bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<ULevel,ULevel_*,0>(TObjectPtr<ULevel> *param_1,ULevel **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULevel *)0x0) {
    return *param_2 == (ULevel *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UFoliageType_InstancedStaticMesh> @ 145ed6bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFoliageType_InstancedStaticMesh * __cdecl
NewObject<UFoliageType_InstancedStaticMesh>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UFoliageType_InstancedStaticMesh *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UFoliageType_InstancedStaticMesh::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UFoliageType_InstancedStaticMesh *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UProceduralFoliageTile> @ 145ed6cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UProceduralFoliageTile * __cdecl NewObject<UProceduralFoliageTile>(UObject *param_1)

{
  UClass *pUVar1;
  UProceduralFoliageTile *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UProceduralFoliageTile::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UProceduralFoliageTile *)
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

// SetPromise<UProceduralFoliageTile_*,TUniqueFunction<UProceduralFoliageTile_*___cdecl(void)>_&> @ 145ed7770

void __cdecl
SetPromise<UProceduralFoliageTile_*,TUniqueFunction<UProceduralFoliageTile_*___cdecl(void)>_&>
          (TPromise<UProceduralFoliageTile_*> *param_1,
          TUniqueFunction<UProceduralFoliageTile_*___cdecl(void)> *param_2)

{
  code *pcVar1;
  TFutureState<UProceduralFoliageTile_*> *this;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar3 = (*pcVar1)(uVar3);
  if ((param_1->State).Object == (TFutureState<UProceduralFoliageTile_*> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object == (TFutureState<UProceduralFoliageTile_*> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = (param_1->State).Object;
  if (*(TAtomic<bool> *)&this->field_0x68 != (TAtomic<bool>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)(this->Result).Pad = uVar3;
  FFutureState::MarkComplete((FFutureState *)this);
  return;
}

// StaticEnum<enum_EFoliageScaling> @ 145ed7860

UEnum * __cdecl StaticEnum<enum_EFoliageScaling>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_EFoliageScaling,(UObject *)pUVar1,
                       L"EFoliageScaling");
  }
  return Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton;
}

// StaticEnum<enum_EVertexColorMaskChannel> @ 145ed78a0

UEnum * __cdecl StaticEnum<enum_EVertexColorMaskChannel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_EVertexColorMaskChannel,(UObject *)pUVar1,
                       L"EVertexColorMaskChannel");
  }
  return Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton;
}

// StaticEnum<enum_FoliageVertexColorMask> @ 145ed78e0

UEnum * __cdecl StaticEnum<enum_FoliageVertexColorMask>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_FoliageVertexColorMask,(UObject *)pUVar1,
                       L"FoliageVertexColorMask");
  }
  return Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton;
}

// StaticEnum<enum_ESimulationOverlap::Type> @ 145ed7920

UEnum * __cdecl StaticEnum<enum_ESimulationOverlap::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationOverlap,(UObject *)pUVar1,
                       L"ESimulationOverlap");
  }
  return Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton;
}

// StaticEnum<enum_ESimulationQuery::Type> @ 145ed7960

UEnum * __cdecl StaticEnum<enum_ESimulationQuery::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationQuery,(UObject *)pUVar1,
                       L"ESimulationQuery");
  }
  return Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton;
}

// ~<lambda_1> @ 145ed9800

void __thiscall
`Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000145ed9867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 145ed9880

void __thiscall
`Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000145ed98e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>,0,0> @ 145ed9980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UGrassInstancedStaticMeshComponent::BuildComponentInstanceData_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>,1,0> @ 145ed99a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_TAsyncRunnable<UProceduralFoliageTile_*>::Run_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::<lambda_1>,1,1> @ 145ed99c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateParameters_GameThread_FInteractiveFoliageSceneProxy__QEAAXAEBU__TVector_N_Math_UE__AEBU__TVector4_N_56__Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 145ed99e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<UProceduralFoliageTile_*>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 145ed9a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UProceduralFoliageSpawner::Simulate_::__l4::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UProceduralFoliageSpawner::Simulate'::`4'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>,1,1> @ 145ed9a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UProceduralFoliageSpawner::Simulate_::__l4::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UProceduralFoliageSpawner::Simulate'::`4'::<lambda_1>,1,1>::_vftable_
  ;
  return;
}

// operator<< @ 145eda800

FArchive * __cdecl operator<<(FArchive *param_1,FFoliageInfo *param_2)

{
  EFoliageImplType *pEVar1;
  FFoliageImpl *pFVar2;
  
  pEVar1 = (EFoliageImplType *)**(undefined8 **)&param_1->field_0x8;
  if ((EFoliageImplType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->Type = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    FFoliageInfo::CreateImplementation(param_2,param_2->Type);
  }
  pFVar2 = (param_2->Implementation).Ptr;
  if (pFVar2 != (FFoliageImpl *)0x0) {
    (**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,param_1);
  }
  return param_1;
}

// operator<< @ 145eda880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FFoliageInstance *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int *piVar6;
  
  UE::Math::operator<<(param_1,(TVector<double> *)param_2);
  UE::Math::operator<<(param_1,(TRotator<double> *)&param_2->_padding_);
  UE::Math::operator<<(param_1,(TVector<float> *)&param_2->_padding_);
  UE::Math::operator<<(param_1,(TRotator<double> *)&param_2->_padding_);
  operator<<(param_1,&param_2->ProceduralGuid);
  plVar1 = &param_2->_padding_;
  puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
    }
  }
  else {
    *(undefined4 *)plVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = &param_2->BaseId;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar6 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar3 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
  return param_1;
}

// operator<< @ 145eda9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FFoliageInstanceCluster_Deprecated *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FArchive *pFVar5;
  float local_res8 [2];
  
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFoliageCustomVersion::GUID);
  if (0 < iVar4) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Ar.CustomVer(FFoliageCustomVersion::GUID) < FFoliageCustomVersion::FoliageUsingHierarchicalISMC"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedFoliage.cpp"
                       ,0x1b1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = UE::Math::operator<<(param_1,&(param_2->Bounds).Origin);
  UE::Math::operator<<(pFVar5,&(param_2->Bounds).BoxExtent);
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\BoxSphereBounds.h"
                         ,0x1a2,L"float -> double conversion applied outside of load!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar2)();
        return pFVar5;
      }
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    (param_2->Bounds).SphereRadius = (double)local_res8[0];
  }
  else {
    operator<<(param_1,&(param_2->Bounds).SphereRadius);
  }
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,param_2);
  return param_1;
}

// operator<< @ 145edab10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FFoliageInstance_Deprecated *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint local_res8 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&param_2->Base);
  UE::Math::operator<<(param_1,(TVector<double> *)param_2);
  UE::Math::operator<<(param_1,(TRotator<double> *)&param_2->_padding_);
  UE::Math::operator<<(param_1,(TVector<float> *)&param_2->_padding_);
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFoliageCustomVersion::GUID);
  if (iVar5 < 1) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    UE::Math::operator<<(param_1,(TRotator<double> *)&param_2->_padding_);
    puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->_padding_,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->_padding_);
      }
    }
    else {
      *(undefined4 *)&param_2->_padding_ = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    if (local_res8[0] == 0xffffffff) {
      *(uint *)&param_2->_padding_ = (uint)param_2->_padding_ | 8;
    }
  }
  else {
    UE::Math::operator<<(param_1,(TRotator<double> *)&param_2->_padding_);
    plVar2 = &param_2->_padding_;
    puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar2);
      }
    }
    else {
      *(undefined4 *)plVar2 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  puVar1 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      return param_1;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  *puVar1 = *puVar4;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  return param_1;
}

// operator<< @ 145edacf0

FArchive * __cdecl operator<<(FArchive *param_1,FFoliageMeshInfo_Deprecated2 *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x168))();
  return param_1;
}

// operator<< @ 145edad20

FArchive * __cdecl operator<<(FArchive *param_1,FFoliageMeshInfo_Deprecated *param_2)

{
  int iVar1;
  TArray<FFoliageInstanceCluster_Deprecated,TSizedDefaultAllocator<32>_> local_18;
  
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFoliageCustomVersion::GUID);
  if (0 < iVar1) {
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,param_2);
    return param_1;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<FFoliageInstanceCluster_Deprecated,TSizedDefaultAllocator<32>_>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return param_1;
}

// operator<< @ 145edada0

FArchive * __cdecl operator<<(FArchive *param_1,FFoliageMeshInfo_Old *param_2)

{
  TArrayPrivateFriend::Serialize<FFoliageInstanceCluster_Deprecated,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->InstanceClusters);
  TArrayPrivateFriend::Serialize<FFoliageInstance_Deprecated,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Instances);
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&param_2->Settings);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 145edb584

/* [thunk]:public: virtual void * __ptr64 __cdecl AInstancedFoliageActor::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AInstancedFoliageActor::_vector_deleting_destructor__adjustor_704__
          (AInstancedFoliageActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AInstancedFoliageActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{712}' @ 145edb598

/* [thunk]:public: virtual void * __ptr64 __cdecl AInstancedFoliageActor::`vector deleting
   destructor'`adjustor{712}' (unsigned int) __ptr64 */

void * __thiscall
AInstancedFoliageActor::_vector_deleting_destructor__adjustor_712__
          (AInstancedFoliageActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AInstancedFoliageActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{760}' @ 145edb5ac

/* [thunk]:public: virtual void * __ptr64 __cdecl AProceduralFoliageVolume::`vector deleting
   destructor'`adjustor{760}' (unsigned int) __ptr64 */

void * __thiscall
AProceduralFoliageVolume::_vector_deleting_destructor__adjustor_760__
          (AProceduralFoliageVolume *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AProceduralFoliageVolume *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 145edb5c0

/* [thunk]:public: virtual void * __ptr64 __cdecl FFoliageISMActor::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FFoliageISMActor::_vector_deleting_destructor__adjustor_8__(FFoliageISMActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FFoliageISMActor *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 145edb5d0

/* [thunk]:public: virtual void * __ptr64 __cdecl FFoliageStaticMesh::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FFoliageStaticMesh::_vector_deleting_destructor__adjustor_8__(FFoliageStaticMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FFoliageStaticMesh *)&this[-1].Component,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 145edb5e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UFoliageInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageInstancedStaticMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 145edb5f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UFoliageInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageInstancedStaticMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 145edb608

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UFoliageInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageInstancedStaticMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145edb61c

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UFoliageInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageInstancedStaticMeshComponent *)
                      &this[-1].OnInstanceTakeRadialDamage.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 145edb62c

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_1616__
          (UFoliageInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageInstancedStaticMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 145edb640

/* [thunk]:public: virtual void * __ptr64 __cdecl UGrassInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UGrassInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UGrassInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGrassInstancedStaticMeshComponent *)&this[-1].field_0x950,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 145edb654

/* [thunk]:public: virtual void * __ptr64 __cdecl UGrassInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UGrassInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UGrassInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGrassInstancedStaticMeshComponent *)&this[-1].field_0x948,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 145edb668

/* [thunk]:public: virtual void * __ptr64 __cdecl UGrassInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UGrassInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UGrassInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGrassInstancedStaticMeshComponent *)&this[-1].field_0x940,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145edb67c

/* [thunk]:public: virtual void * __ptr64 __cdecl UGrassInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGrassInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UGrassInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGrassInstancedStaticMeshComponent *)&this[-1].field_0xb78,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 145edb68c

/* [thunk]:public: virtual void * __ptr64 __cdecl UGrassInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
UGrassInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_1616__
          (UGrassInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGrassInstancedStaticMeshComponent *)&this[-1].field_0x550,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 145edb6a0

/* [thunk]:public: virtual void * __ptr64 __cdecl UInteractiveFoliageComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UInteractiveFoliageComponent::_vector_deleting_destructor__adjustor_592__
          (UInteractiveFoliageComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInteractiveFoliageComponent *)&this[-1].field_0x410,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 145edb6b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UInteractiveFoliageComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UInteractiveFoliageComponent::_vector_deleting_destructor__adjustor_600__
          (UInteractiveFoliageComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInteractiveFoliageComponent *)&this[-1].field_0x408,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 145edb6c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UInteractiveFoliageComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UInteractiveFoliageComponent::_vector_deleting_destructor__adjustor_608__
          (UInteractiveFoliageComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInteractiveFoliageComponent *)&this[-1].field_0x400,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145edb6dc

/* [thunk]:public: virtual void * __ptr64 __cdecl UInteractiveFoliageComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UInteractiveFoliageComponent::_vector_deleting_destructor__adjustor_40__
          (UInteractiveFoliageComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInteractiveFoliageComponent *)&this[-1].field_0x638,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145edb6ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UProceduralFoliageComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UProceduralFoliageComponent::_vector_deleting_destructor__adjustor_40__
          (UProceduralFoliageComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UProceduralFoliageComponent *)&this[-1].FoliageSpawner,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145edb700

void * __thiscall
IBaseDelegateInstance<void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edb730

void * __thiscall
TAsyncQueuedWork<UProceduralFoliageTile_*>::_scalar_deleting_destructor_
          (TAsyncQueuedWork<UProceduralFoliageTile_*> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<UProceduralFoliageTile_*> *pTVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  longlong *plVar9;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<UProceduralFoliageTile_*> *)0x0) && (pTVar3->field_0x68 == '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar6)();
      return pvVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar4 = *(longlong **)&(this->Function).field_0x28;
    plVar9 = (longlong *)&(this->Function).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined ***)this = &___7IQueuedWork__6B_;
  puVar5 = *(undefined8 **)&this->field_0x8;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edb800

void * __thiscall
TAsyncRunnable<UProceduralFoliageTile_*>::_scalar_deleting_destructor_
          (TAsyncRunnable<UProceduralFoliageTile_*> *this,uint param_1)

{
  TFutureState<UProceduralFoliageTile_*> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<UProceduralFoliageTile_*> *)0x0) && (pTVar1->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar6 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edb8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FActorIteratorState,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FActorIteratorState,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edb8e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edb910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edb950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edb990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateParameters_GameThread_FInteractiveFoliageSceneProxy__QEAAXAEBU__TVector_N_Math_UE__AEBU__TVector4_N_56__Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edb9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_PEAVUProceduralFoliageTile____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edba20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UProceduralFoliageSpawner::Simulate'::`4'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edba70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UProceduralFoliageSpawner::Simulate'::`4'::<lambda_1>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbab0

void * __thiscall
TGraphTask<TAsyncGraphTask<UProceduralFoliageTile_*>_>::_scalar_deleting_destructor_
          (TGraphTask<TAsyncGraphTask<UProceduralFoliageTile_*>_> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbb10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<UProceduralFoliageTile_*>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<UProceduralFoliageTile_*>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbb50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbb90

void * __thiscall
AInstancedFoliageActor::_scalar_deleting_destructor_(AInstancedFoliageActor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  *(undefined4 *)&(this->FoliageInfos).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__ISMInstanceManager__;
  this->_padding_ = (longlong)&_vftable__for__ISMInstanceManagerProvider__;
  pvVar1 = *(void **)&(this->FoliageInfos).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FoliageInfos);
  AISMPartitionActor::~AISMPartitionActor((AISMPartitionActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbc50

void * __thiscall
AInteractiveFoliageActor::_scalar_deleting_destructor_(AInteractiveFoliageActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AInteractiveFoliageActor__6B_;
  AStaticMeshActor::~AStaticMeshActor((AStaticMeshActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbcb0

void * __thiscall
AProceduralFoliageBlockingVolume::_scalar_deleting_destructor_
          (AProceduralFoliageBlockingVolume *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7AProceduralFoliageBlockingVolume__6B_;
  pFVar1 = (this->DensityFalloff).FalloffCurve.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DensityFalloff).FalloffCurve.EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_);
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbd80

void * __thiscall
AProceduralFoliageVolume::_scalar_deleting_destructor_(AProceduralFoliageVolume *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&___7IWorldPartitionActorLoaderInterface__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbdf0

void * __thiscall FFoliageActor::_scalar_deleting_destructor_(FFoliageActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ActorInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FFoliageImpl__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbe40

void * __thiscall
FFoliageISMActor::_scalar_deleting_destructor_(FFoliageISMActor *this,uint param_1)

{
  *(undefined ***)&this->field_0x8 = &___7IISMPartitionInstanceManager__6B_;
  *(undefined ***)this = &___7FFoliageImpl__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbe80

void * __thiscall FFoliageImpl::_scalar_deleting_destructor_(FFoliageImpl *this,uint param_1)

{
  *this = (FFoliageImpl)&___7FFoliageImpl__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbec0

void * __thiscall
FFoliageStaticMesh::_scalar_deleting_destructor_(FFoliageStaticMesh *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISMInstanceManager__6B_;
  this->_padding_ = (longlong)&___7FFoliageImpl__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbf00

void * __thiscall FIndexedCurve::_scalar_deleting_destructor_(FIndexedCurve *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FIndexedCurve__6B_;
  pFVar1 = (this->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x48 = 0;
  pvVar2 = *(void **)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyHandlesToIndices);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbf80

void * __thiscall
FInteractiveFoliageSceneProxy::_scalar_deleting_destructor_
          (FInteractiveFoliageSceneProxy *this,uint param_1)

{
  FStaticMeshSceneProxy::~FStaticMeshSceneProxy((FStaticMeshSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xbc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edbfc0

void * __thiscall
IISMPartitionInstanceManager::_scalar_deleting_destructor_
          (IISMPartitionInstanceManager *this,uint param_1)

{
  *this = (IISMPartitionInstanceManager)&___7IISMPartitionInstanceManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc000

void * __thiscall
ISMInstanceManager::_scalar_deleting_destructor_(ISMInstanceManager *this,uint param_1)

{
  *this = (ISMInstanceManager)&___7ISMInstanceManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc040

void * __thiscall
IWorldPartitionActorLoaderInterface::_scalar_deleting_destructor_
          (IWorldPartitionActorLoaderInterface *this,uint param_1)

{
  *this = (IWorldPartitionActorLoaderInterface)&___7IWorldPartitionActorLoaderInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc080

void * __thiscall
UFoliageInstancedStaticMeshComponent::_scalar_deleting_destructor_
          (UFoliageInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UFoliageInstancedStaticMeshComponent__6B_;
  pvVar1 = *(void **)&(this->OnInstanceTakeRadialDamage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInstanceTakeRadialDamage);
  pvVar1 = *(void **)&(this->OnInstanceTakePointDamage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInstanceTakePointDamage);
  UHierarchicalInstancedStaticMeshComponent::~UHierarchicalInstancedStaticMeshComponent
            ((UHierarchicalInstancedStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xbe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc180

void * __thiscall
UFoliageStatistics::_scalar_deleting_destructor_(UFoliageStatistics *this,uint param_1)

{
  *(undefined ***)this = &___7UFoliageStatistics__6B_;
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

// `scalar_deleting_destructor' @ 145edc1e0

void * __thiscall UFoliageType::_scalar_deleting_destructor_(UFoliageType *this,uint param_1)

{
  ~UFoliageType(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc240

void * __thiscall
UFoliageType_Actor::_scalar_deleting_destructor_(UFoliageType_Actor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UFoliageType_Actor__6B_;
  UFoliageType::~UFoliageType((UFoliageType *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc2a0

void * __thiscall
UFoliageType_InstancedStaticMesh::_scalar_deleting_destructor_
          (UFoliageType_InstancedStaticMesh *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UFoliageType_InstancedStaticMesh__6B_;
  pFVar1 = (this->NaniteOverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UFoliageType::~UFoliageType((UFoliageType *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc330

void * __thiscall
UGrassInstancedStaticMeshComponent::_scalar_deleting_destructor_
          (UGrassInstancedStaticMeshComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UGrassInstancedStaticMeshComponent__6B_;
  UHierarchicalInstancedStaticMeshComponent::~UHierarchicalInstancedStaticMeshComponent
            ((UHierarchicalInstancedStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xba0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc3e0

void * __thiscall
UInteractiveFoliageComponent::_scalar_deleting_destructor_
          (UInteractiveFoliageComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x660);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UProceduralFoliageComponent::_scalar_deleting_destructor_
          (UProceduralFoliageComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc500

void * __thiscall
UProceduralFoliageSpawner::_scalar_deleting_destructor_
          (UProceduralFoliageSpawner *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UProceduralFoliageSpawner__6B_;
  pFVar1 = (this->PrecomputedTiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)
             (this->OverrideFoliageTerrainMaterials).AllocatorInstance.Data,
             (this->OverrideFoliageTerrainMaterials).ArrayNum);
  pFVar1 = (this->OverrideFoliageTerrainMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FoliageTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145edc5a0

void * __thiscall
UProceduralFoliageTile::_scalar_deleting_destructor_(UProceduralFoliageTile *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UProceduralFoliageTile__6B_;
  TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>
            (&(this->Broadphase).QuadTree);
  pFVar1 = (this->InstancesArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->InstancesSet).HashSize = 0;
  FVar2 = (this->InstancesSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InstancesSet).Elements);
  (this->PendingRemovals).HashSize = 0;
  FVar2 = (this->PendingRemovals).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingRemovals).Elements);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// CircleOverlap @ 145edf470

bool __cdecl
CircleOverlap(TVector<double> *param_1,float param_2,TVector<double> *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  return dVar2 * dVar2 + dVar1 * dVar1 <= (double)((param_2 + param_4) * (param_2 + param_4));
}

// EmptyLinkFunctionForGeneratedCodeFoliageInstancedStaticMeshComponent @ 145ee0c80

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliageInstancedStaticMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFoliageStatistics @ 145ee0c90

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliageStatistics(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFoliageType @ 145ee0ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliageType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFoliageTypeObject @ 145ee0cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliageTypeObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFoliageType_Actor @ 145ee0cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliageType_Actor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFoliageType_InstancedStaticMesh @ 145ee0cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliageType_InstancedStaticMesh(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFoliage_init @ 145ee0ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliage_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGrassInstancedStaticMeshComponent @ 145ee0cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeGrassInstancedStaticMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInstancedFoliageActor @ 145ee0d00

void __cdecl EmptyLinkFunctionForGeneratedCodeInstancedFoliageActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInteractiveFoliageActor @ 145ee0d10

void __cdecl EmptyLinkFunctionForGeneratedCodeInteractiveFoliageActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInteractiveFoliageComponent @ 145ee0d20

void __cdecl EmptyLinkFunctionForGeneratedCodeInteractiveFoliageComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProceduralFoliageBlockingVolume @ 145ee0d30

void __cdecl EmptyLinkFunctionForGeneratedCodeProceduralFoliageBlockingVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProceduralFoliageComponent @ 145ee0d40

void __cdecl EmptyLinkFunctionForGeneratedCodeProceduralFoliageComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProceduralFoliageInstance @ 145ee0d50

void __cdecl EmptyLinkFunctionForGeneratedCodeProceduralFoliageInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProceduralFoliageSpawner @ 145ee0d60

void __cdecl EmptyLinkFunctionForGeneratedCodeProceduralFoliageSpawner(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProceduralFoliageTile @ 145ee0d70

void __cdecl EmptyLinkFunctionForGeneratedCodeProceduralFoliageTile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProceduralFoliageVolume @ 145ee0d80

void __cdecl EmptyLinkFunctionForGeneratedCodeProceduralFoliageVolume(void)

{
  return;
}

// FInstancePointDamageSignature_DelegateWrapper @ 145ee1610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FInstancePointDamageSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,float param_3,
          AController *param_4,TVector<double> *param_5,TVector<double> *param_6,
          UDamageType *param_7,AActor *param_8)

{
  int local_58;
  float local_54;
  AController *local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  UDamageType *local_18;
  AActor *local_10;
  
  local_48 = (param_5->field0_0x0)._s_0.X;
  dStack_40 = (param_5->field0_0x0)._s_0.Y;
  local_38 = (param_5->field0_0x0)._s_0.Z;
  local_30 = (param_6->field0_0x0)._s_0.X;
  dStack_28 = (param_6->field0_0x0)._s_0.Y;
  local_20 = (param_6->field0_0x0)._s_0.Z;
  local_18 = param_7;
  local_10 = param_8;
  local_58 = param_2;
  local_54 = param_3;
  local_50 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_58);
  return;
}

// FInstanceRadialDamageSignature_DelegateWrapper @ 145ee1690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FInstanceRadialDamageSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,AController *param_4,
          TVector<double> *param_5,float param_6,UDamageType *param_7,AActor *param_8)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<float,TSizedDefaultAllocator<32>_> local_68;
  AController *local_58;
  double local_50;
  double dStack_48;
  double local_40;
  float local_38;
  UDamageType *local_30;
  AActor *local_28;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  iVar4 = 0;
  if (&local_78 != param_2) {
    uVar1 = param_2->ArrayNum;
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_78.ArrayMax = 0;
    local_78.ArrayNum = uVar1;
    iVar4 = 0;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,0,&local_78.AllocatorInstance,uVar1,&local_78.ArrayMax);
      memcpy(local_78.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar1 << 2);
      iVar4 = local_68.ArrayMax;
    }
  }
  if (&local_68 != param_3) {
    iVar2 = param_3->ArrayNum;
    pFVar3 = (param_3->AllocatorInstance).Data;
    local_68.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar4 == 0)) {
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,iVar4,&local_68.AllocatorInstance,iVar2,&local_68.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_68.AllocatorInstance.Data,pFVar3,(longlong)iVar2 << 2);
      }
    }
  }
  local_50 = (param_5->field0_0x0)._s_0.X;
  dStack_48 = (param_5->field0_0x0)._s_0.Y;
  local_40 = (param_5->field0_0x0)._s_0.Z;
  local_30 = param_7;
  local_38 = param_6;
  local_28 = param_8;
  local_58 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_78);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// FoliageInstanceElementsEnabled @ 145ee1f10

bool __cdecl FoliageElementUtil::FoliageInstanceElementsEnabled(void)

{
  bool bVar1;
  
  bVar1 = SMInstanceElementDataUtil::SMInstanceElementsEnabled();
  if ((bVar1) && (GEnableFoliageInstanceElements != 0)) {
    return true;
  }
  return false;
}

// GetCullDistance @ 145ee33c0

FInt32Interval __cdecl FoliageUtil::GetCullDistance(UFoliageType *param_1,float param_2)

{
  int iVar1;
  longlong in_RDX;
  float in_XMM2_Da;
  
  if ((*(uint *)(in_RDX + 0x4a4) & 0x20000) == 0) {
    param_1->_padding_ = *(longlong *)(in_RDX + 0x17c);
    return (FInt32Interval)param_1;
  }
  iVar1 = *(int *)(in_RDX + 0x180);
  *(int *)&param_1->_padding_ = (int)((float)*(int *)(in_RDX + 0x17c) * in_XMM2_Da);
  *(int *)((longlong)&param_1->_padding_ + 4) = (int)((float)iVar1 * in_XMM2_Da);
  return (FInt32Interval)param_1;
}

// GetLessFit @ 145ee3cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FProceduralFoliageInstance * __cdecl
GetLessFit(FProceduralFoliageInstance *param_1,FProceduralFoliageInstance *param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1->bBlocker == false) {
    if (param_2->bBlocker != false) {
      return param_1;
    }
    fVar1 = ((param_2->Type).field0_0x0.DebugPtr)->OverlapPriority;
    fVar2 = ((param_1->Type).field0_0x0.DebugPtr)->OverlapPriority;
    if (fVar2 == fVar1) {
      fVar1 = param_2->Age;
      fVar2 = param_1->Age;
      if (fVar2 == fVar1) {
        if (param_1->Scale < param_2->Scale) {
          param_2 = param_1;
        }
        return param_2;
      }
    }
    if (fVar2 < fVar1) {
      param_2 = param_1;
    }
  }
  return param_2;
}

// GetMaxAABB @ 145ee3fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox2<double> * __cdecl
GetMaxAABB(TBox2<double> *__return_storage_ptr__,FProceduralFoliageInstance *param_1)

{
  double dVar1;
  double dVar2;
  UFoliageType *pUVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  pUVar3 = (param_1->Type).field0_0x0.DebugPtr;
  dVar1 = (param_1->Location).field0_0x0._s_0.X;
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  fVar4 = param_1->Scale * pUVar3->ShadeRadius;
  fVar5 = param_1->Scale * pUVar3->CollisionRadius;
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  dVar6 = (double)fVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2 - dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar6 + dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar6 + dVar2;
  __return_storage_ptr__->bIsValid = true;
  return __return_storage_ptr__;
}

// GetSeedMinDistance @ 145ee5f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __cdecl GetSeedMinDistance(FProceduralFoliageInstance *param_1,float param_2,int param_3)

{
  UFoliageType *this;
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  this = (param_1->Type).field0_0x0.DebugPtr;
  iVar1 = 0;
  fVar6 = this->MaxAge;
  iVar3 = (int)(fVar6 - (float)param_3);
  fVar5 = param_1->Age;
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      fVar4 = fVar5 + __real_3f800000;
      if (fVar6 < fVar4) break;
      iVar2 = iVar2 + 1;
      fVar5 = fVar4;
    } while (iVar2 < iVar3);
    if (0 < iVar3) {
      do {
        fVar4 = param_2 + __real_3f800000;
        if (fVar6 < fVar4) break;
        iVar1 = iVar1 + 1;
        param_2 = fVar4;
      } while (iVar1 < iVar3);
    }
  }
  fVar5 = UFoliageType::GetScaleForAge(this,fVar5);
  fVar4 = UFoliageType::GetScaleForAge(this,param_2);
  fVar6 = this->ShadeRadius;
  if (this->ShadeRadius <= this->CollisionRadius) {
    fVar6 = this->CollisionRadius;
  }
  return fVar6 * (fVar4 + fVar5);
}

// UpdateComponentCullDistance @ 145eee8d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FoliageUtil::UpdateComponentCullDistance
          (UFoliageType *param_1,UHierarchicalInstancedStaticMeshComponent *param_2,float param_3)

{
  int iStackX_c;
  
  if (param_1->bEnableCullDistanceScaling == 0) {
    iStackX_c = SUB84(param_1->CullDistance,4);
    UInstancedStaticMeshComponent::SetCullDistances
              ((UInstancedStaticMeshComponent *)param_2,SUB84(param_1->CullDistance,0),iStackX_c);
    return;
  }
  UInstancedStaticMeshComponent::SetCullDistances
            ((UInstancedStaticMeshComponent *)param_2,
             (int)((float)*(int *)&param_1->CullDistance * param_3),
             (int)((float)*(int *)&(param_1->CullDistance).field_0x4 * param_3));
  return;
}

// Z_Construct_UClass_AInstancedFoliageActor_NoRegister @ 145eeec40

UClass * __cdecl Z_Construct_UClass_AInstancedFoliageActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AInstancedFoliageActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InstancedFoliageActor",
               &Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton,
               AInstancedFoliageActor::StaticRegisterNativesAInstancedFoliageActor,800,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AInstancedFoliageActor>,
               InternalVTableHelperCtorCaller<AInstancedFoliageActor>,local_res8,
               AISMPartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton;
}

// Z_Construct_UClass_AInteractiveFoliageActor_NoRegister @ 145eeed00

UClass * __cdecl Z_Construct_UClass_AInteractiveFoliageActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InteractiveFoliageActor",
               &Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton,
               AInteractiveFoliageActor::StaticRegisterNativesAInteractiveFoliageActor,0x360,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AInteractiveFoliageActor>,
               InternalVTableHelperCtorCaller<AInteractiveFoliageActor>,local_res8,
               AStaticMeshActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton;
}

// Z_Construct_UClass_AProceduralFoliageBlockingVolume_NoRegister @ 145eeedc0

UClass * __cdecl Z_Construct_UClass_AProceduralFoliageBlockingVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageBlockingVolume",
               &Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton,
               AProceduralFoliageBlockingVolume::
               StaticRegisterNativesAProceduralFoliageBlockingVolume,0x390,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AProceduralFoliageBlockingVolume>,
               InternalVTableHelperCtorCaller<AProceduralFoliageBlockingVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton;
}

// Z_Construct_UClass_UFoliageStatistics_NoRegister @ 145eeee80

UClass * __cdecl Z_Construct_UClass_UFoliageStatistics_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageStatistics",
               &Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton,
               UFoliageStatistics::StaticRegisterNativesUFoliageStatistics,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFoliageStatistics>,
               InternalVTableHelperCtorCaller<UFoliageStatistics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton;
}

// Z_Construct_UClass_UFoliageType_Actor_NoRegister @ 145eeef40

UClass * __cdecl Z_Construct_UClass_UFoliageType_Actor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType_Actor",
               &Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton,
               UFoliageType_Actor::StaticRegisterNativesUFoliageType_Actor,0x4d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFoliageType_Actor>,
               InternalVTableHelperCtorCaller<UFoliageType_Actor>,local_res8,
               UFoliageType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton;
}

// Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister @ 145eef000

UClass * __cdecl Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"GrassInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton,
               UGrassInstancedStaticMeshComponent::
               StaticRegisterNativesUGrassInstancedStaticMeshComponent,0xba0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGrassInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UGrassInstancedStaticMeshComponent>,local_res8,
               UHierarchicalInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister @ 145eef0c0

UClass * __cdecl Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InteractiveFoliageComponent",
               &Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton,
               UInteractiveFoliageComponent::StaticRegisterNativesUInteractiveFoliageComponent,0x660
               ,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveFoliageComponent>,
               InternalVTableHelperCtorCaller<UInteractiveFoliageComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveFoliageComponent.InnerSingleton;
}

// Z_Construct_UClass_UProceduralFoliageTile_NoRegister @ 145eef180

UClass * __cdecl Z_Construct_UClass_UProceduralFoliageTile_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageTile",
               &Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton,
               UProceduralFoliageTile::StaticRegisterNativesUProceduralFoliageTile,0x170,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UProceduralFoliageTile>,
               InternalVTableHelperCtorCaller<UProceduralFoliageTile>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton;
}

// Z_Construct_UEnum_Foliage_ESimulationOverlap @ 145eef230

UEnum * __cdecl Z_Construct_UEnum_Foliage_ESimulationOverlap(void)

{
  if (Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton,
               &Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton;
}

// Z_Construct_UEnum_Foliage_ESimulationQuery @ 145eef270

UEnum * __cdecl Z_Construct_UEnum_Foliage_ESimulationQuery(void)

{
  if (Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton,
               &Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton;
}

// Z_Construct_UEnum_Foliage_EVertexColorMaskChannel @ 145eef2b0

UEnum * __cdecl Z_Construct_UEnum_Foliage_EVertexColorMaskChannel(void)

{
  if (Z_Registration_Info_UEnum_EVertexColorMaskChannel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVertexColorMaskChannel.InnerSingleton,
               &Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVertexColorMaskChannel.InnerSingleton;
}

// IMPLEMENT_MODULE_Foliage @ 145eefca0

void __cdecl IMPLEMENT_MODULE_Foliage(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableFoliageInstanceElements'' @ 1503d3e80

void __cdecl
FoliageElementUtil::_dynamic_atexit_destructor_for__CVarEnableFoliageInstanceElements__(void)

{
  CVarEnableFoliageInstanceElements._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableFoliageInstanceElements);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableGrassInstancedWPOVelocity'' @ 1503d3ea0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableGrassInstancedWPOVelocity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableGrassInstancedWPOVelocity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFoliageCullDistanceScale'' @ 1503d3ec0

void __cdecl _dynamic_atexit_destructor_for__CVarFoliageCullDistanceScale__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFoliageCullDistanceScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFoliageDiscardDataOnLoad'' @ 1503d3ee0

void __cdecl _dynamic_atexit_destructor_for__CVarFoliageDiscardDataOnLoad__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFoliageDiscardDataOnLoad);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterFoliageCustomVersion'' @ 1503d3f00

void __cdecl _dynamic_atexit_destructor_for__GRegisterFoliageCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterFoliageCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterProceduralFoliageCustomVersion'' @ 1503d3f20

void __cdecl _dynamic_atexit_destructor_for__GRegisterProceduralFoliageCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterProceduralFoliageCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogInstancedFoliage'' @ 1503d3f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInstancedFoliage__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInstancedFoliage);
  return;
}

