// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 298

// CVarMotionWarpingDebug'' @ 1413bd840

void __cdecl `dynamic_initializer_for_'FMotionWarpingCVars::CVarMotionWarpingDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&FMotionWarpingCVars::CVarMotionWarpingDebug,L"a.MotionWarping.Debug",local_res8,
             L"0: Disable, 1: Only Log, 2: Only DrawDebug, 3: Log and DrawDebug",1);
  atexit(`dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarMotionWarpingDebug__);
  return;
}

// CVarMotionWarpingDisable'' @ 1413bd890

void __cdecl `dynamic_initializer_for_'FMotionWarpingCVars::CVarMotionWarpingDisable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&FMotionWarpingCVars::CVarMotionWarpingDisable,L"a.MotionWarping.Disable",local_res8,
             L"Disable Motion Warping",1);
  atexit(`dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarMotionWarpingDisable__);
  return;
}

// CVarMotionWarpingDrawDebugDuration'' @ 1413bd8e0

void __cdecl
`dynamic_initializer_for_'FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration,
             L"a.MotionWarping.DrawDebugLifeTime",local_res8,
             L"Time in seconds each draw debug persists.\nRequires \'a.MotionWarping.Debug 2\'",1);
  atexit(`dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration__);
  return;
}

// CVarWarpedSwitchOffConditionDebug'' @ 1413bd930

void __cdecl
`dynamic_initializer_for_'FMotionWarpingCVars::CVarWarpedSwitchOffConditionDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&FMotionWarpingCVars::CVarWarpedSwitchOffConditionDebug,
             L"a.MotionWarping.Debug.SwitchOffCondition",local_res8,
             L"Shows switch off condition debug. 0 - disabled, 1 - enabled for selected actor, 2 - enabled for all actors"
             ,1);
  atexit(`dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarWarpedSwitchOffConditionDebug__);
  return;
}

// CVarWarpedTargetDebug'' @ 1413bd980

void __cdecl `dynamic_initializer_for_'FMotionWarpingCVars::CVarWarpedTargetDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&FMotionWarpingCVars::CVarWarpedTargetDebug,L"a.MotionWarping.Debug.Target",local_res8,
             L"Shows warp target debug. 0 - disabled, 1 - enabled for selected actor, 2 - enabled for all actors"
             ,1);
  atexit(`dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarWarpedTargetDebug__);
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 1413bd9d0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'LogMotionWarping'' @ 1413bd9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMotionWarping__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMotionWarping,L"LogMotionWarping",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMotionWarping__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMotionWarping'' @ 1413bda30

void __cdecl _dynamic_initializer_for__ModuleRegistrantMotionWarping__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MotionWarping";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MotionWarping",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMotionWarpingModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier'' @ 1413bda80

void __cdecl
_dynamic_initializer_for__NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier__(void)

{
  FName::FName(&NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier,L"AddRootMotionModifier");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_MotionWarping_OnWarpBegin'' @ 1413bdaa0

void __cdecl _dynamic_initializer_for__NAME_UAnimNotifyState_MotionWarping_OnWarpBegin__(void)

{
  FName::FName(&NAME_UAnimNotifyState_MotionWarping_OnWarpBegin,L"OnWarpBegin");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_MotionWarping_OnWarpEnd'' @ 1413bdac0

void __cdecl _dynamic_initializer_for__NAME_UAnimNotifyState_MotionWarping_OnWarpEnd__(void)

{
  FName::FName(&NAME_UAnimNotifyState_MotionWarping_OnWarpEnd,L"OnWarpEnd");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate'' @ 1413bdae0

void __cdecl _dynamic_initializer_for__NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate__(void)

{
  FName::FName(&NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate,L"OnWarpUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check'' @ 1413bdb00

void __cdecl
_dynamic_initializer_for__NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check__(void)

{
  FName::FName(&NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check,L"BP_Check");
  return;
}

// `dynamic_initializer_for_'NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo'' @ 1413bdb20

void __cdecl
_dynamic_initializer_for__NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo__
          (void)

{
  FName::FName(&NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo,
               L"BP_ExtraDebugInfo");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MotionWarping_ExtractMotionDelta'' @ 1413bdb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MotionWarping_ExtractMotionDelta__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MotionWarping_ExtractMotionDelta ==
      (FThreadSafeStaticStat<FStat_STAT_MotionWarping_ExtractMotionDelta>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MotionWarping_ExtractMotionDelta");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MotionWarping_ExtractMotionDelta,*pFVar1,
               L"MotionWarping ExtractMotionDelta","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MotionWarping_PrecomputeWarpedTracks'' @ 1413bdbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MotionWarping_PrecomputeWarpedTracks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MotionWarping_PrecomputeWarpedTracks ==
      (FThreadSafeStaticStat<FStat_STAT_MotionWarping_PrecomputeWarpedTracks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MotionWarping_PrecomputeWarpedTracks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MotionWarping_PrecomputeWarpedTracks,
               *pFVar1,L"MotionWarping PrecomputeWarpedTracks","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h__Script_MotionWarping_3523311648'' @ 1413bdc60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h__Script_MotionWarping_3523311648__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h__Script_MotionWarping_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h__Script_MotionWarping_4056744909'' @ 1413bdca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h__Script_MotionWarping_4056744909__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h__Script_MotionWarping_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h__Script_MotionWarping_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h__Script_MotionWarping_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h__Script_MotionWarping_2271405571'' @ 1413bdcf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h__Script_MotionWarping_2271405571__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h__Script_MotionWarping_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingCharacterAdapter_h__Script_MotionWarping_1237135937'' @ 1413bdd30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingCharacterAdapter_h__Script_MotionWarping_1237135937__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingCharacterAdapter_h__Script_MotionWarping_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h__Script_MotionWarping_2687650353'' @ 1413bdd70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h__Script_MotionWarping_2687650353__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h__Script_MotionWarping_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h__Script_MotionWarping_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h__Script_MotionWarping_1385846033'' @ 1413bddc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h__Script_MotionWarping_1385846033__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h__Script_MotionWarping_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h__Script_MotionWarping_2000928367'' @ 1413bde00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h__Script_MotionWarping_2000928367__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h__Script_MotionWarping_Statics
             ::ClassInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h__Script_MotionWarping_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h__Script_MotionWarping_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h__Script_MotionWarping_2041042943'' @ 1413bde50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h__Script_MotionWarping_2041042943__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h__Script_MotionWarping_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h__Script_MotionWarping_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h__Script_MotionWarping_2588567168'' @ 1413bdea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h__Script_MotionWarping_2588567168__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h__Script_MotionWarping_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h__Script_MotionWarping_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h__Script_MotionWarping_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h__Script_MotionWarping_1332283619'' @ 1413bdef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h__Script_MotionWarping_1332283619__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h__Script_MotionWarping_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h__Script_MotionWarping_112572307'' @ 1413bdf30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h__Script_MotionWarping_112572307__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MotionWarping",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h__Script_MotionWarping_Statics
             ::ClassInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h__Script_MotionWarping_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h__Script_MotionWarping_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MotionWarping'' @ 1413bdf80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MotionWarping__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf8553e;
  local_res8[0].DeclarationsHash = 0x3599fbf7;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MotionWarping,L"/Script/MotionWarping",
             &Z_Registration_Info_UPackage__Script_MotionWarping,local_res8);
  return;
}

// NewProp_bInUseWarpTargetAsTargetLocation_SetBit @ 14cefd370

void __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffCompositeCondition_CreateSwitchOffCompositeCondition_Statics
::NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget @ 14cefd380

UFunction * __cdecl Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionWarpingSwitchOffCompositeCondition_CreateSwitchOffCompositeCondition @ 14cefd3c0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffCompositeCondition_CreateSwitchOffCompositeCondition
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingSwitchOffCompositeCondition_CreateSwitchOffCompositeCondition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTargets @ 14cefd400

UFunction * __cdecl Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTargets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTargets_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bSearchForWindowsInAnimsWithinMontages_SetBit @ 14cefd440

void __cdecl
Z_Construct_UClass_UMotionWarpingComponent_Statics::
NewProp_bSearchForWindowsInAnimsWithinMontages_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bInUseWarpTargetAsTargetLocation_SetBit @ 14cefd470

void __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check_Statics::
NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14cefd480

void * __thiscall
FMotionWarpingModule::_scalar_deleting_destructor_(FMotionWarpingModule *this,uint param_1)

{
  *this = (FMotionWarpingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14cefd4c0

void __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check @ 14cefd4d0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInUseWarpTargetAsTargetLocation_SetBit @ 14cefd5d0

void __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo_Statics::
NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo @ 14cefd5e0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInUseWarpTargetAsTargetLocation_SetBit @ 14cefd6e0

void __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_CreateSwitchOffBlueprintableCondition_Statics
::NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_CreateSwitchOffBlueprintableCondition @ 14cefd6f0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_CreateSwitchOffBlueprintableCondition
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_CreateSwitchOffBlueprintableCondition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMotionWarpingCharacterAdapter @ 14cefd730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingCharacterAdapter(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingCharacterAdapter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.OuterSingleton;
}

// Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature @ 14cefd7f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature @ 14cefd830

UFunction * __cdecl
Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_MotionWarping @ 14cefd870

UPackage * __cdecl Z_Construct_UPackage__Script_MotionWarping(void)

{
  if (Z_Registration_Info_UPackage__Script_MotionWarping.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MotionWarping.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MotionWarping.OuterSingleton;
}

// Z_Construct_UClass_URootMotionModifier_NoRegister @ 14cefd8b0

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier",
               &Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton,
               URootMotionModifier::StaticRegisterNativesURootMotionModifier,0x170,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier>,
               InternalVTableHelperCtorCaller<URootMotionModifier>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton;
}

// Z_Construct_UClass_URootMotionModifier_Scale_NoRegister @ 14cefd960

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_Scale_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_Scale",
               &Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton,
               URootMotionModifier_Scale::StaticRegisterNativesURootMotionModifier_Scale,400,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier_Scale>,
               InternalVTableHelperCtorCaller<URootMotionModifier_Scale>,local_res8,
               URootMotionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffCondition_NoRegister @ 14cefda60

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton,
               UMotionWarpingSwitchOffCondition::
               StaticRegisterNativesUMotionWarpingSwitchOffCondition,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCondition>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_NoRegister @ 14cefdb10

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffDistanceCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton,
               UMotionWarpingSwitchOffDistanceCondition::
               StaticRegisterNativesUMotionWarpingSwitchOffDistanceCondition,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffDistanceCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffDistanceCondition>,local_res8,
               UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_NoRegister @ 14cefdc80

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffAngleToTargetCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.
                InnerSingleton,
               UMotionWarpingSwitchOffAngleToTargetCondition::
               StaticRegisterNativesUMotionWarpingSwitchOffAngleToTargetCondition,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffAngleToTargetCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffAngleToTargetCondition>,
               local_res8,UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_NoRegister @ 14cefdd40

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffCompositeCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton,
               UMotionWarpingSwitchOffCompositeCondition::
               StaticRegisterNativesUMotionWarpingSwitchOffCompositeCondition,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffCompositeCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCompositeCondition>,local_res8,
               UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_NoRegister @ 14cefde00

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffBlueprintableCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.
                InnerSingleton,
               UMotionWarpingSwitchOffBlueprintableCondition::
               StaticRegisterNativesUMotionWarpingSwitchOffBlueprintableCondition,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffBlueprintableCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffBlueprintableCondition>,
               local_res8,UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingBaseAdapter_NoRegister @ 14cefe1c0

UClass * __cdecl Z_Construct_UClass_UMotionWarpingBaseAdapter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingBaseAdapter",
               &Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton,
               UMotionWarpingBaseAdapter::StaticRegisterNativesUMotionWarpingBaseAdapter,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingBaseAdapter>,
               InternalVTableHelperCtorCaller<UMotionWarpingBaseAdapter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp @ 14cefe360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton;
}

// Z_Construct_UClass_URootMotionModifier @ 14cefe3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URootMotionModifier(void)

{
  if (Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton,
               &Z_Construct_UClass_URootMotionModifier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton;
}

// Z_Construct_UClass_URootMotionModifier_Scale @ 14cefe3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_Scale(void)

{
  if (Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton,
               &Z_Construct_UClass_URootMotionModifier_Scale_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton;
}

// Z_Construct_UClass_URootMotionModifier_Warp @ 14cefe420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_Warp(void)

{
  if (Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton,
               &Z_Construct_UClass_URootMotionModifier_Warp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton;
}

// Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod @ 14cefe460

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod(void)

{
  if (Z_Registration_Info_UEnum_EMotionWarpRotationMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMotionWarpRotationMethod.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMotionWarpRotationMethod.InnerSingleton;
}

// Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType @ 14cefe4a0

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType(void)

{
  if (Z_Registration_Info_UEnum_EMotionWarpRotationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMotionWarpRotationType.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMotionWarpRotationType.InnerSingleton;
}

// Z_Construct_UEnum_MotionWarping_ERootMotionModifierState @ 14cefe4e0

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_ERootMotionModifierState(void)

{
  if (Z_Registration_Info_UEnum_ERootMotionModifierState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERootMotionModifierState.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERootMotionModifierState.InnerSingleton;
}

// Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider @ 14cefe520

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider(void)

{
  if (Z_Registration_Info_UEnum_EWarpPointAnimProvider.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWarpPointAnimProvider.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWarpPointAnimProvider.InnerSingleton;
}

// NewStructOps @ 14cefe560

void * __cdecl Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionWarpingUpdateContext,&UE::CoreUObject::Private::Construct<FMotionWarpingUpdateContext>,&UE::CoreUObject::Private::ConstructForTests<FMotionWarpingUpdateContext>,&UE::CoreUObject::Private::Destruct<FMotionWarpingUpdateContext>,&UE::CoreUObject::Private::Copy<FMotionWarpingUpdateContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ERootMotionModifierState_StaticEnum @ 14cefe5a0

UEnum * __cdecl ERootMotionModifierState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ERootMotionModifierState,(UObject *)pUVar1,
                       L"ERootMotionModifierState");
  }
  return Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton;
}

// EWarpTargetLocationOffsetDirection_StaticEnum @ 14cefe5e0

UEnum * __cdecl EWarpTargetLocationOffsetDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection,
                       (UObject *)pUVar1,L"EWarpTargetLocationOffsetDirection");
  }
  return Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.OuterSingleton;
}

// NewProp_bFollowComponent_SetBit @ 14cefe6e0

void __cdecl
Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_bFollowComponent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UClass_UMotionWarpingBaseAdapter @ 14cefe6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingBaseAdapter(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingBaseAdapter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.OuterSingleton;
}

// NewStructOps @ 14cefe730

void * __cdecl Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionWarpingTarget,&UE::CoreUObject::Private::Construct<FMotionWarpingTarget>,&UE::CoreUObject::Private::ConstructForTests<FMotionWarpingTarget>,&UE::CoreUObject::Private::Destruct<FMotionWarpingTarget>,&UE::CoreUObject::Private::Copy<FMotionWarpingTarget>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EMotionWarpRotationType_StaticEnum @ 14cefe820

UEnum * __cdecl EMotionWarpRotationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType,(UObject *)pUVar1,
                       L"EMotionWarpRotationType");
  }
  return Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton;
}

// EMotionWarpRotationMethod_StaticEnum @ 14cefe860

UEnum * __cdecl EMotionWarpRotationMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMotionWarpRotationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EMotionWarpRotationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod,(UObject *)pUVar1,
                       L"EMotionWarpRotationMethod");
  }
  return Z_Registration_Info_UEnum_EMotionWarpRotationMethod.OuterSingleton;
}

// EWarpPointAnimProvider_StaticEnum @ 14cefe8a0

UEnum * __cdecl EWarpPointAnimProvider_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider,(UObject *)pUVar1,
                       L"EWarpPointAnimProvider");
  }
  return Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton;
}

// Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp @ 14cefe8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp(void)

{
  if (Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton,
               &Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMotionDeltaTrack @ 14cefe920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionDeltaTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.InnerSingleton;
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

// NewStructOps @ 14cefe9a0

void * __cdecl Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionDeltaTrack,&UE::CoreUObject::Private::Construct<FMotionDeltaTrack>,&UE::CoreUObject::Private::ConstructForTests<FMotionDeltaTrack>,&UE::CoreUObject::Private::Destruct<FMotionDeltaTrack>,&UE::CoreUObject::Private::Copy<FMotionDeltaTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bWarpTranslation_SetBit @ 14cefe9e0

void __cdecl
Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpTranslation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e8) = 1;
  return;
}

// NewProp_bIgnoreZAxis_SetBit @ 14cefe9f0

void __cdecl
Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bIgnoreZAxis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e9) = 1;
  return;
}

// Z_Construct_UClass_UAnimNotifyState_MotionWarping_NoRegister @ 14cefea00

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_MotionWarping_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"AnimNotifyState_MotionWarping",
               &Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton,
               UAnimNotifyState_MotionWarping::StaticRegisterNativesUAnimNotifyState_MotionWarping,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_MotionWarping>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_MotionWarping>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton;
}

// NewProp_bWarpToFeetLocation_SetBit @ 14cefeac0

void __cdecl
Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpToFeetLocation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1ea) = 1;
  return;
}

// NewProp_bWarpRotation_SetBit @ 14cefead0

void __cdecl
Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f8) = 1;
  return;
}

// NewProp_bSubtractRemainingRootMotion_SetBit @ 14cefeae0

void __cdecl
Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bSubtractRemainingRootMotion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 1;
  return;
}

// NewStructOps @ 14cefec70

void * __cdecl Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionDeltaTrackContainer,&UE::CoreUObject::Private::Construct<FMotionDeltaTrackContainer>,&UE::CoreUObject::Private::ConstructForTests<FMotionDeltaTrackContainer>,&UE::CoreUObject::Private::Destruct<FMotionDeltaTrackContainer>,&UE::CoreUObject::Private::Copy<FMotionDeltaTrackContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bWarpIKBones_SetBit @ 14cefed70

void __cdecl
Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x368) = 1;
  return;
}

// Z_Construct_UClass_UMotionWarpingComponent_NoRegister @ 14cefed80

UClass * __cdecl Z_Construct_UClass_UMotionWarpingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingComponent",
               &Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton,
               UMotionWarpingComponent::StaticRegisterNativesUMotionWarpingComponent,0x158,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingComponent>,
               InternalVTableHelperCtorCaller<UMotionWarpingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton;
}

// Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale @ 14cefef40

UFunction * __cdecl Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URootMotionModifier_PrecomputedWarp @ 14ceff420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_PrecomputedWarp(void)

{
  if (Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.OuterSingleton,
               &Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.OuterSingleton;
}

// Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode @ 14ceff460

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode(void)

{
  if (Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.InnerSingleton;
}

// Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType @ 14ceff4a0

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType(void)

{
  if (Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPrecomputedWarpCurve @ 14ceff4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPrecomputedWarpCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FPrecomputedWarpCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings @ 14ceff560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.InnerSingleton;
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

// EPrecomputedWarpWeightCurveType_StaticEnum @ 14ceff5e0

UEnum * __cdecl EPrecomputedWarpWeightCurveType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType,
                       (UObject *)pUVar1,L"EPrecomputedWarpWeightCurveType");
  }
  return Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.OuterSingleton;
}

// NewStructOps @ 14ceff680

void * __cdecl Z_Construct_UScriptStruct_FPrecomputedWarpCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPrecomputedWarpCurve,&UE::CoreUObject::Private::Construct<FPrecomputedWarpCurve>,&UE::CoreUObject::Private::ConstructForTests<FPrecomputedWarpCurve>,&UE::CoreUObject::Private::Destruct<FPrecomputedWarpCurve>,&UE::CoreUObject::Private::Copy<FPrecomputedWarpCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URootMotionModifier_SkewWarp_NoRegister @ 14ceff7b0

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_SkewWarp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_SkewWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton,
               URootMotionModifier_SkewWarp::StaticRegisterNativesURootMotionModifier_SkewWarp,0x370
               ,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier_SkewWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_SkewWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton;
}

// NewProp_bEnableSmoothing_SetBit @ 14ceff870

void __cdecl
Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings_Statics::NewProp_bEnableSmoothing_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14ceff880

void * __cdecl
Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPrecomputedWarpSteeringSettings,&UE::CoreUObject::Private::Construct<FPrecomputedWarpSteeringSettings>,&UE::CoreUObject::Private::ConstructForTests<FPrecomputedWarpSteeringSettings>,&UE::CoreUObject::Private::Destruct<FPrecomputedWarpSteeringSettings>,&UE::CoreUObject::Private::Copy<FPrecomputedWarpSteeringSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotifyState_MotionWarping @ 14ceff980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_MotionWarping(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton;
}

// EPrecomputedWarpUpdateMode_StaticEnum @ 14ceff9c0

UEnum * __cdecl EPrecomputedWarpUpdateMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode,(UObject *)pUVar1,
                       L"EPrecomputedWarpUpdateMode");
  }
  return Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.OuterSingleton;
}

// NewProp_bSeparateTranslationCurves_SetBit @ 14ceffa00

void __cdecl
Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_Statics::
NewProp_bSeparateTranslationCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x374) = 1;
  return;
}

// NewProp_bForceTargetTransformUpright_SetBit @ 14ceffa10

void __cdecl
Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_Statics::
NewProp_bForceTargetTransformUpright_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x400) = 1;
  return;
}

// Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier @ 14ceffa20

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableSteering_SetBit @ 14ceffa60

void __cdecl
Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_Statics::NewProp_bEnableSteering_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x410) = 1;
  return;
}

// Z_Construct_UClass_UMotionWarpingComponent @ 14ceffa70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingComponent(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton;
}

// Z_Construct_UClass_UMotionWarpingUtilities @ 14ceffab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingUtilities(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingUtilities_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton;
}

// Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection @ 14ceffaf0

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection(void)

{
  if (Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMotionWarpingTarget @ 14ceffb30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionWarpingTarget(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMotionWarpingWindowData @ 14ceffbb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionWarpingWindowData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSwitchOffConditionData @ 14ceffc30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSwitchOffConditionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSwitchOffConditionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.InnerSingleton;
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

// NewStructOps @ 14ceffcb0

void * __cdecl Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionWarpingWindowData,&UE::CoreUObject::Private::Construct<FMotionWarpingWindowData>,&UE::CoreUObject::Private::ConstructForTests<FMotionWarpingWindowData>,&UE::CoreUObject::Private::Destruct<FMotionWarpingWindowData>,&UE::CoreUObject::Private::Copy<FMotionWarpingWindowData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate @ 14ceffcf0

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate @ 14ceffe30

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate @ 14cf00110

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExtractRootMotion_SetBit @ 14cf00150

void __cdecl
Z_Construct_UFunction_UMotionWarpingUtilities_ExtractBoneTransformFromAnimationAtTime_Statics::
NewProp_bExtractRootMotion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bLocalSpace_SetBit @ 14cf00160

void __cdecl
Z_Construct_UFunction_UMotionWarpingUtilities_ExtractBoneTransformFromAnimationAtTime_Statics::
NewProp_bLocalSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UClass_UMotionWarpingFunctionLibrary @ 14cf00170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin @ 14cf001b0

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionWarpingUtilities_ExtractBoneTransformFromAnimationAtTime @ 14cf001f0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingUtilities_ExtractBoneTransformFromAnimationAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingUtilities_ExtractBoneTransformFromAnimationAtTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFollowComponent_SetBit @ 14cf00230

void __cdecl
Z_Construct_UFunction_UMotionWarpingFunctionLibrary_MakeMotionWarpingTarget_Statics::
NewProp_bFollowComponent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd @ 14cf00240

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation @ 14cf00280

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionWarpingFunctionLibrary_MakeMotionWarpingTarget @ 14cf002c0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingFunctionLibrary_MakeMotionWarpingTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingFunctionLibrary_MakeMotionWarpingTarget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate @ 14cf00300

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URootMotionModifier_SkewWarp @ 14cf00340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_SkewWarp(void)

{
  if (Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton,
               &Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton;
}

// NewProp_bInWarpTranslation_SetBit @ 14cf00380

void __cdecl
Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::
NewProp_bInWarpTranslation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_bInIgnoreZAxis_SetBit @ 14cf00390

void __cdecl
Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::
NewProp_bInIgnoreZAxis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x99) = 1;
  return;
}

// NewProp_bInWarpRotation_SetBit @ 14cf003a0

void __cdecl
Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::
NewProp_bInWarpRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9a) = 1;
  return;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition @ 14cf003e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.
                OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.OuterSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition @ 14cf00420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.
                OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.OuterSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition @ 14cf00460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.OuterSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffCondition @ 14cf004a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffCondition(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingSwitchOffCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.OuterSingleton;
}

// Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition @ 14cf004e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition(void)

{
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.OuterSingleton,
               &Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.OuterSingleton;
}

// Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp @ 14cf00520

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp(void)

{
  if (Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.InnerSingleton;
}

// Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp @ 14cf00560

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp(void)

{
  if (Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.InnerSingleton;
}

// Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType @ 14cf005a0

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType(void)

{
  if (Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.InnerSingleton;
}

// Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp @ 14cf005e0

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp(void)

{
  if (Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.InnerSingleton;
}

// Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect @ 14cf00620

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect(void)

{
  if (Z_Registration_Info_UEnum_ESwitchOffConditionEffect.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESwitchOffConditionEffect.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionEffect.InnerSingleton;
}

// Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp @ 14cf007c0

UFunction * __cdecl
Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf00800

void * __cdecl Z_Construct_UScriptStruct_FSwitchOffConditionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSwitchOffConditionData,&UE::CoreUObject::Private::Construct<FSwitchOffConditionData>,&UE::CoreUObject::Private::ConstructForTests<FSwitchOffConditionData>,&UE::CoreUObject::Private::Destruct<FSwitchOffConditionData>,&UE::CoreUObject::Private::Copy<FSwitchOffConditionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ESwitchOffConditionEffect_StaticEnum @ 14cf00840

UEnum * __cdecl ESwitchOffConditionEffect_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionEffect.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionEffect.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect,(UObject *)pUVar1,
                       L"ESwitchOffConditionEffect");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionEffect.OuterSingleton;
}

// Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation @ 14cf00880

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseWarpTargetAsTargetLocation_SetBit @ 14cf008c0

void __cdecl
Z_Construct_UClass_UMotionWarpingSwitchOffCondition_Statics::
NewProp_bUseWarpTargetAsTargetLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation @ 14cf008d0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESwitchOffConditionDistanceOp_StaticEnum @ 14cf00910

UEnum * __cdecl ESwitchOffConditionDistanceOp_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp,
                       (UObject *)pUVar1,L"ESwitchOffConditionDistanceOp");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.OuterSingleton;
}

// ESwitchOffConditionDistanceAxesType_StaticEnum @ 14cf00950

UEnum * __cdecl ESwitchOffConditionDistanceAxesType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType,
                       (UObject *)pUVar1,L"ESwitchOffConditionDistanceAxesType");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.OuterSingleton;
}

// NewProp_InbUseWarpTargetAsTargetLocation_SetBit @ 14cf00990

void __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffDistanceCondition_CreateSwitchOffDistanceCondition_Statics
::NewProp_InbUseWarpTargetAsTargetLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMotionWarpingSwitchOffDistanceCondition_CreateSwitchOffDistanceCondition @ 14cf00ad0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffDistanceCondition_CreateSwitchOffDistanceCondition
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingSwitchOffDistanceCondition_CreateSwitchOffDistanceCondition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget @ 14cf00b10

UFunction * __cdecl Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFollowComponent_SetBit @ 14cf00c10

void __cdecl
Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::
NewProp_bFollowComponent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UClass_UAttributeBasedRootMotionComponent @ 14cf00c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAttributeBasedRootMotionComponent(void)

{
  if (Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.OuterSingleton,
               &Z_Construct_UClass_UAttributeBasedRootMotionComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.OuterSingleton;
}

// Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode @ 14cf00c60

UEnum * __cdecl Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode(void)

{
  if (Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.InnerSingleton,
               &Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.InnerSingleton;
}

// NewStructOps @ 14cf00ca0

void * __cdecl
Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction_Statics::
NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAttributeBasedRootMotionComponentPrePhysicsTickFunction,&UE::CoreUObject::Private::Construct<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>,&UE::CoreUObject::Private::ConstructForTests<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>,&UE::CoreUObject::Private::Destruct<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent @ 14cf00ce0

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESwitchOffConditionAngleOp_StaticEnum @ 14cf00d20

UEnum * __cdecl ESwitchOffConditionAngleOp_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp,(UObject *)pUVar1,
                       L"ESwitchOffConditionAngleOp");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.OuterSingleton;
}

// Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation @ 14cf00d60

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIgnoreZAxis_SetBit @ 14cf00da0

void __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffAngleToTargetCondition_CreateSwitchOffAngleToTargetCondition_Statics
::NewProp_bInIgnoreZAxis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bInUseWarpTargetAsTargetLocation_SetBit @ 14cf00db0

void __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffAngleToTargetCondition_CreateSwitchOffAngleToTargetCondition_Statics
::NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// EAttributeBasedRootMotionMode_StaticEnum @ 14cf00dc0

UEnum * __cdecl EAttributeBasedRootMotionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode,
                       (UObject *)pUVar1,L"EAttributeBasedRootMotionMode");
  }
  return Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.OuterSingleton;
}

// Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation @ 14cf00e00

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionWarpingSwitchOffAngleToTargetCondition_CreateSwitchOffAngleToTargetCondition @ 14cf00e40

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingSwitchOffAngleToTargetCondition_CreateSwitchOffAngleToTargetCondition
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingSwitchOffAngleToTargetCondition_CreateSwitchOffAngleToTargetCondition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableRootMotion_SetBit @ 14cf00e80

void __cdecl
Z_Construct_UClass_UAttributeBasedRootMotionComponent_Statics::NewProp_bEnableRootMotion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform @ 14cf00e90

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIgnoreZAxis_SetBit @ 14cf00ed0

void __cdecl
Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_Statics::
NewProp_bIgnoreZAxis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UMotionWarpingComponent_AddSwitchOffCondition @ 14cf00ee0

UFunction * __cdecl Z_Construct_UFunction_UMotionWarpingComponent_AddSwitchOffCondition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_AddSwitchOffCondition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers @ 14cf00f80

UFunction * __cdecl
Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESwitchOffConditionCompositeOp_StaticEnum @ 14cf00fc0

UEnum * __cdecl ESwitchOffConditionCompositeOp_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp,
                       (UObject *)pUVar1,L"ESwitchOffConditionCompositeOp");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.OuterSingleton;
}

// Z_Construct_UFunction_UMotionWarpingComponent_RemoveAllWarpTargets @ 14cf010e0

UFunction * __cdecl Z_Construct_UFunction_UMotionWarpingComponent_RemoveAllWarpTargets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionWarpingComponent_RemoveAllWarpTargets_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// CastChecked<UMotionWarpingCharacterAdapter,UMotionWarpingBaseAdapter> @ 14cf01130

UMotionWarpingCharacterAdapter * __cdecl
CastChecked<UMotionWarpingCharacterAdapter,UMotionWarpingBaseAdapter>
          (UMotionWarpingBaseAdapter *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMotionWarpingBaseAdapter *)0x0) {
    pFVar3 = GetTypeName<UMotionWarpingCharacterAdapter>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMotionWarpingCharacterAdapter::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMotionWarpingCharacterAdapter *)param_1;
  }
  pFVar3 = GetTypeName<UMotionWarpingCharacterAdapter>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMotionWarpingBaseAdapter>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<URootMotionModifier,UObject> @ 14cf011f0

URootMotionModifier * __cdecl CastChecked<URootMotionModifier,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<URootMotionModifier>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = URootMotionModifier::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (URootMotionModifier *)param_1;
  }
  pFVar3 = GetTypeName<URootMotionModifier>(&local_28);
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

// ConstructItems<TObjectPtr<UMotionWarpingSwitchOffCondition>,UMotionWarpingSwitchOffCondition_*,int> @ 14cf012b0

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
ConstructItems<TObjectPtr<UMotionWarpingSwitchOffCondition>,UMotionWarpingSwitchOffCondition_*,int>
          (void *param_1,UMotionWarpingSwitchOffCondition **param_2,int param_3)

{
  UMotionWarpingSwitchOffCondition *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UMotionWarpingSwitchOffCondition **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UMotionWarpingSwitchOffCondition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UMotionWarpingSwitchOffCondition>,TObjectPtr<UMotionWarpingSwitchOffCondition>,int> @ 14cf01310

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
ConstructItems<TObjectPtr<UMotionWarpingSwitchOffCondition>,TObjectPtr<UMotionWarpingSwitchOffCondition>,int>
          (void *param_1,TObjectPtr<UMotionWarpingSwitchOffCondition> *param_2,int param_3)

{
  TObjectPtr<UMotionWarpingSwitchOffCondition> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UMotionWarpingSwitchOffCondition>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UMotionWarpingSwitchOffCondition>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UMotionWarpingSwitchOffCondition *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UMotionWarpingSwitchOffCondition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMotionDeltaTrack,FMotionDeltaTrack,int> @ 14cf01370

void __cdecl
ConstructItems<FMotionDeltaTrack,FMotionDeltaTrack,int>
          (void *param_1,FMotionDeltaTrack *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  void *pvVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x28);
    lVar8 = (longlong)param_1 + (-0x28 - (longlong)param_2);
    piVar7 = &(param_2->DeltaRotationTrack).ArrayNum;
    do {
      *(undefined8 *)((longlong)piVar7 + lVar8) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar7 + lVar8);
      iVar3 = piVar7[-8];
      pvVar4 = *(void **)(piVar7 + -10);
      piVar6[-8] = iVar3;
      if (iVar3 == 0) {
        piVar6[-7] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,0,pFVar2,iVar3,piVar6 + -7);
        memcpy(pFVar2->Data,pvVar4,(longlong)iVar3 * 0x60);
      }
      piVar6[-6] = 0;
      piVar6[-5] = 0;
      iVar3 = piVar7[-4];
      pvVar4 = *(void **)(piVar7 + -6);
      piVar6[-4] = iVar3;
      if (iVar3 == 0) {
        piVar6[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,0,(ForAnyElementType *)(piVar6 + -6),iVar3,piVar6 + -3);
        memcpy(((ForAnyElementType *)(piVar6 + -6))->Data,pvVar4,(longlong)iVar3 * 0x18);
      }
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      iVar3 = *piVar7;
      _Src = (((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
             AllocatorInstance).Data;
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,0,(ForAnyElementType *)(piVar6 + -2),iVar3,piVar6 + 1);
        memcpy(((ForAnyElementType *)(piVar6 + -2))->Data,_Src,(longlong)iVar3 * 0x18);
      }
      uVar5 = *(undefined8 *)(piVar7 + 4);
      *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(piVar7 + 2);
      *(undefined8 *)(piVar6 + 4) = uVar5;
      *(undefined8 *)(piVar6 + 6) = *(undefined8 *)(piVar7 + 6);
      uVar5 = *(undefined8 *)(piVar7 + 10);
      *(undefined8 *)(piVar6 + 8) = *(undefined8 *)(piVar7 + 8);
      *(undefined8 *)(piVar6 + 10) = uVar5;
      piVar1 = piVar7 + 0xc;
      piVar7 = piVar7 + 0x18;
      *(undefined8 *)(piVar6 + 0xc) = *(undefined8 *)piVar1;
      piVar6 = piVar6 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FMotionDeltaTrack,int> @ 14cf01530

void __cdecl DefaultConstructItems<FMotionDeltaTrack,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined8 *)(lVar3 + 4) = 0;
      *(undefined8 *)(lVar3 + 0xc) = 0;
      *(undefined8 *)(lVar3 + 0x14) = 0;
      *(undefined8 *)(lVar3 + 0x1c) = 0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)(lVar3 + 0x24) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(lVar3 + 0x2c) = uVar1;
      *(double *)(lVar3 + 0x34) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      *(double *)(lVar3 + 0x3c) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      *(double *)(lVar3 + 0x44) = dVar2;
      *(double *)(lVar3 + 0x4c) = UE::Math::TRotator<double>::ZeroRotator.Roll;
      param_2 = param_2 + -1;
      lVar3 = lVar3 + 0x60;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMotionDeltaTrack,int> @ 14cf015e0

void __cdecl DestructItems<FMotionDeltaTrack,int>(FMotionDeltaTrack *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->DeltaTranslationTrack;
    do {
      pFVar1 = (((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FMotionDeltaTrack *)(pTVar2 + -1))->BoneTransformTrack).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSwitchOffConditionData,int> @ 14cf01640

void __cdecl
DestructItems<FSwitchOffConditionData,int>(FSwitchOffConditionData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SwitchOffConditions).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FSwitchOffConditionData *)(&param_1->SwitchOffConditions + 1);
  }
  return;
}

// ExecuteTickHelper<`FAttributeBasedRootMotionComponentPrePhysicsTickFunction::ExecuteTick'::__l2::<lambda_1>_> @ 14cf01680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FActorComponentTickFunction::
ExecuteTickHelper<_FAttributeBasedRootMotionComponentPrePhysicsTickFunction::ExecuteTick_::__l2::<lambda_1>_>
          (UActorComponent *param_1,bool param_2,float param_3,ELevelTick param_4,
          <lambda_1> *param_5)

{
  double dVar1;
  double dVar2;
  AActor *pAVar3;
  UAttributeBasedRootMotionComponent *pUVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  UObjectBaseUtility *pUVar19;
  UObject *pUVar20;
  double dVar21;
  float fVar22;
  FName local_a8;
  byte local_a0;
  FName local_98;
  byte local_90;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  TQuat<double> local_68 [3];
  
  if ((param_1 != (UActorComponent *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_98,(UObjectBaseUtility *)param_1);
    pUVar19 = (UObjectBaseUtility *)(**(code **)(param_1->_padding_ + 0x480))(param_1);
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_a8,pUVar19);
    if ((param_1->bRegistered != 0) &&
       (((pAVar3 = param_1->OwnerPrivate, param_4 != LEVELTICK_ViewportsOnly || (param_2)) ||
        ((pAVar3 != (AActor *)0x0 &&
         (cVar18 = (**(code **)(pAVar3->_padding_ + 0x520))(pAVar3), cVar18 != '\0')))))) {
      fVar22 = __real_3f800000;
      if (pAVar3 != (AActor *)0x0) {
        fVar22 = pAVar3->CustomTimeDilation;
      }
      pUVar4 = param_5->__this->Target;
      if (((pUVar4->bEnableRootMotion != false) &&
          (pUVar20 = FWeakObjectPtr::Get(&(pUVar4->CharacterOwner).WeakPtr),
          pUVar20 != (UObject *)0x0)) && (lVar5 = *(longlong *)(pUVar20 + 0x15), lVar5 != 0)) {
        fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
        dVar21 = (double)(fVar22 * param_3);
        dVar10 = dVar21 * (pUVar4->TranslationVelocity).field0_0x0._s_0.Y;
        dVar1 = (pUVar4->TranslationVelocity).field0_0x0._s_0.Z;
        dVar2 = (pUVar4->TranslationVelocity).field0_0x0._s_0.X;
        dVar11 = (pUVar4->RotationVelocity).field0_0x0._s_0.Y * dVar21 * _UNK_150689678;
        local_78 = dVar21 * (pUVar4->RotationVelocity).field0_0x0._s_0.Z *
                   ___xmm_3fe00000000000003fe0000000000000;
        local_88._8_4_ = SUB84(dVar11,0);
        local_88._0_8_ =
             (pUVar4->RotationVelocity).field0_0x0._s_0.X * dVar21 *
             ___xmm_3fe00000000000003fe0000000000000;
        local_88._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        local_70 = 0.0;
        UE::Math::TQuat<double>::Exp((TQuat<double> *)local_88,local_68);
        *(undefined1 *)(lVar5 + 0xf40) = 1;
        *(double *)(lVar5 + 0xf50) = local_68[0].X;
        *(double *)(lVar5 + 0xf58) = local_68[0].Y;
        *(double *)(lVar5 + 0xf60) = local_68[0].Z;
        *(double *)(lVar5 + 0xf68) = local_68[0].W;
        auVar13._8_4_ = SUB84(dVar10,0);
        auVar13._0_8_ = dVar21 * dVar2;
        auVar13._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + 0xf70) = auVar13;
        auVar12._8_4_ = SUB84(dVar21,0);
        auVar12._0_8_ = dVar21 * dVar1;
        auVar12._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + 0xf80) = auVar12;
        auVar15._8_4_ = SUB84((double)fVar7,0);
        auVar15._0_8_ = (double)fVar6;
        auVar15._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + 0xf90) = auVar15;
        auVar14._8_4_ = SUB84((double)fVar9,0);
        auVar14._0_8_ = (double)fVar8;
        auVar14._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + 4000) = auVar14;
        uVar17 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
        uVar16 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
        *(double *)(lVar5 + 0xf90) = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
        *(undefined8 *)(lVar5 + 0xf98) = uVar16;
        *(undefined8 *)(lVar5 + 4000) = uVar17;
        *(undefined8 *)(lVar5 + 0xfa8) = 0;
        *(undefined4 *)(lVar5 + 0xf44) = 0x3f800000;
      }
    }
    if ((local_a0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_a0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_a0 & 4) != 0) {
      FThreadStats::AddMessage(local_a8,CycleScopeEnd);
    }
    local_a0 = 0;
    if ((local_90 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_90 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_90 & 4) != 0) {
      FThreadStats::AddMessage(local_98,CycleScopeEnd);
    }
  }
  return;
}

// GetFullNameForCastLogError<UCharacterMovementComponent> @ 14cf01930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UCharacterMovementComponent>
          (FString *__return_storage_ptr__,UCharacterMovementComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UMotionWarpingBaseAdapter> @ 14cf01960

FString * __cdecl
GetFullNameForCastLogError<UMotionWarpingBaseAdapter>
          (FString *__return_storage_ptr__,UMotionWarpingBaseAdapter *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UMotionWarpingCharacterAdapter> @ 14cf01990

FString * __cdecl GetTypeName<UMotionWarpingCharacterAdapter>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMotionWarpingCharacterAdapter::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<URootMotionModifier> @ 14cf019d0

FString * __cdecl GetTypeName<URootMotionModifier>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = URootMotionModifier::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UAnimNotifyState_MotionWarping> @ 14cf01a10

void __cdecl InternalConstructor<UAnimNotifyState_MotionWarping>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_MotionWarping__6B_;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"RootMotionModifier_SkewWarp");
    FVar1 = *pFVar2;
    pUVar3 = URootMotionModifier_SkewWarp::StaticClass();
    pUVar4 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
  }
  return;
}

// InternalConstructor<UAttributeBasedRootMotionComponent> @ 14cf01ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAttributeBasedRootMotionComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UAttributeBasedRootMotionComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAttributeBasedRootMotionComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAttributeBasedRootMotionComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    FTickFunction::FTickFunction((FTickFunction *)&this[1]._padding_);
    this[1]._padding_ = (longlong)&___7FAttributeBasedRootMotionComponentPrePhysicsTickFunction__6B_
    ;
    this[1].PrimaryComponentTick._padding_ = 0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1].PrimaryComponentTick._padding_ =
         (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].PrimaryComponentTick._padding_ = (longlong)(double)fVar2;
    this[1].PrimaryComponentTick._padding_ = (longlong)(double)fVar3;
    this[1].PrimaryComponentTick._padding_ = (longlong)(double)fVar4;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].PrimaryComponentTick.Target =
         (UActorComponent *)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar2;
    *(double *)&this[1].ComponentTags.ArrayNum = (double)fVar3;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar4;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[1].AssetUserData.ArrayNum =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[1].field_0x88 = (double)fVar2;
    *(double *)&this[1].UCSSerializationIndex = (double)fVar3;
    *(double *)&this[1].field_0x98 = (double)fVar4;
    this->bWantsInitializeComponent = '\x01';
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    *(undefined1 *)&this[1].PhysicsStateAsyncCreationScene = 0;
    *(undefined1 *)&(this->PrimaryComponentTick)._padding_ = 5;
  }
  return;
}

// InternalConstructor<UDEPRECATED_RootMotionModifier_SimpleWarp> @ 14cf01bf0

void __cdecl
InternalConstructor<UDEPRECATED_RootMotionModifier_SimpleWarp>(FObjectInitializer *param_1)

{
  URootMotionModifier_Warp *this;
  
  this = (URootMotionModifier_Warp *)param_1->Obj;
  if (this != (URootMotionModifier_Warp *)0x0) {
    URootMotionModifier_Warp::URootMotionModifier_Warp(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_RootMotionModifier_SimpleWarp__6B_;
  }
  return;
}

// InternalConstructor<UMotionWarpingBaseAdapter> @ 14cf01c20

void __cdecl InternalConstructor<UMotionWarpingBaseAdapter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMotionWarpingBaseAdapter__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMotionWarpingCharacterAdapter> @ 14cf01c60

void __cdecl InternalConstructor<UMotionWarpingCharacterAdapter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &___7UMotionWarpingCharacterAdapter__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UMotionWarpingComponent> @ 14cf01ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UMotionWarpingComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->bWantsInitializeComponent = '\x01';
    this->_padding_ = (longlong)&UMotionWarpingComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UMotionWarpingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UMotionWarpingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined1 *)&this[1].ComponentTags.ArrayNum = 0;
    *(undefined1 *)&this[1].UCSSerializationIndex = 0;
    UActorComponent::SetIsReplicatedByDefault(this,true);
    return;
  }
  return;
}

// InternalConstructor<UMotionWarpingFunctionLibrary> @ 14cf01d60

void __cdecl InternalConstructor<UMotionWarpingFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMotionWarpingFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMotionWarpingSwitchOffAngleToTargetCondition> @ 14cf01d90

void __cdecl
InternalConstructor<UMotionWarpingSwitchOffAngleToTargetCondition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x101;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMotionWarpingSwitchOffAngleToTargetCondition__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UMotionWarpingSwitchOffBlueprintableCondition> @ 14cf01de0

void __cdecl
InternalConstructor<UMotionWarpingSwitchOffBlueprintableCondition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x101;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMotionWarpingSwitchOffBlueprintableCondition__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UMotionWarpingSwitchOffCompositeCondition> @ 14cf01e30

void __cdecl
InternalConstructor<UMotionWarpingSwitchOffCompositeCondition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x101;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMotionWarpingSwitchOffCompositeCondition__6B_;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UMotionWarpingSwitchOffCondition> @ 14cf01e80

void __cdecl InternalConstructor<UMotionWarpingSwitchOffCondition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x101;
    *(undefined ***)this = &___7UMotionWarpingSwitchOffCondition__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UMotionWarpingSwitchOffDistanceCondition> @ 14cf01ed0

void __cdecl
InternalConstructor<UMotionWarpingSwitchOffDistanceCondition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x101;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMotionWarpingSwitchOffDistanceCondition__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UMotionWarpingUtilities> @ 14cf01f20

void __cdecl InternalConstructor<UMotionWarpingUtilities>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMotionWarpingUtilities__6B_;
  }
  return;
}

// InternalConstructor<URootMotionModifier> @ 14cf01f50

void __cdecl InternalConstructor<URootMotionModifier>(FObjectInitializer *param_1)

{
  if ((URootMotionModifier *)param_1->Obj != (URootMotionModifier *)0x0) {
    URootMotionModifier::URootMotionModifier((URootMotionModifier *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<URootMotionModifier_AdjustmentBlendWarp> @ 14cf01f70

void __cdecl
InternalConstructor<URootMotionModifier_AdjustmentBlendWarp>(FObjectInitializer *param_1)

{
  if ((URootMotionModifier_AdjustmentBlendWarp *)param_1->Obj !=
      (URootMotionModifier_AdjustmentBlendWarp *)0x0) {
    URootMotionModifier_AdjustmentBlendWarp::URootMotionModifier_AdjustmentBlendWarp
              ((URootMotionModifier_AdjustmentBlendWarp *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<URootMotionModifier_PrecomputedWarp> @ 14cf01f90

void __cdecl InternalConstructor<URootMotionModifier_PrecomputedWarp>(FObjectInitializer *param_1)

{
  if ((URootMotionModifier_PrecomputedWarp *)param_1->Obj !=
      (URootMotionModifier_PrecomputedWarp *)0x0) {
    URootMotionModifier_PrecomputedWarp::URootMotionModifier_PrecomputedWarp
              ((URootMotionModifier_PrecomputedWarp *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<URootMotionModifier_Scale> @ 14cf01fb0

void __cdecl InternalConstructor<URootMotionModifier_Scale>(FObjectInitializer *param_1)

{
  URootMotionModifier *this;
  
  this = (URootMotionModifier *)param_1->Obj;
  if (this != (URootMotionModifier *)0x0) {
    URootMotionModifier::URootMotionModifier(this,param_1);
    this->_padding_ = (longlong)&___7URootMotionModifier_Scale__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<URootMotionModifier_SkewWarp> @ 14cf02000

void __cdecl InternalConstructor<URootMotionModifier_SkewWarp>(FObjectInitializer *param_1)

{
  URootMotionModifier_Warp *this;
  
  this = (URootMotionModifier_Warp *)param_1->Obj;
  if (this != (URootMotionModifier_Warp *)0x0) {
    URootMotionModifier_Warp::URootMotionModifier_Warp(this,param_1);
    *(undefined4 *)&this->field_0x368 = 0;
    *(undefined ***)this = &___7URootMotionModifier_SkewWarp__6B_;
  }
  return;
}

// InternalConstructor<URootMotionModifier_Warp> @ 14cf02040

void __cdecl InternalConstructor<URootMotionModifier_Warp>(FObjectInitializer *param_1)

{
  if ((URootMotionModifier_Warp *)param_1->Obj != (URootMotionModifier_Warp *)0x0) {
    URootMotionModifier_Warp::URootMotionModifier_Warp
              ((URootMotionModifier_Warp *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_MotionWarping> @ 14cf02060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_MotionWarping>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_MotionWarping::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotifyState_MotionWarping__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAttributeBasedRootMotionComponent> @ 14cf02110

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
InternalVTableHelperCtorCaller<UAttributeBasedRootMotionComponent>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UActorComponent *this;
  UActorComponent *pUVar6;
  
  pUVar6 = (UActorComponent *)0x0;
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UAttributeBasedRootMotionComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UAttributeBasedRootMotionComponent::_vftable__for__UObject__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ =
         (longlong)&UAttributeBasedRootMotionComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAttributeBasedRootMotionComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    FTickFunction::FTickFunction((FTickFunction *)&this[1]._padding_);
    this[1]._padding_ = (longlong)&___7FAttributeBasedRootMotionComponentPrePhysicsTickFunction__6B_
    ;
    this[1].PrimaryComponentTick._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1].PrimaryComponentTick._padding_ =
         (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].PrimaryComponentTick._padding_ = (longlong)(double)fVar1;
    this[1].PrimaryComponentTick._padding_ = (longlong)(double)fVar2;
    this[1].PrimaryComponentTick._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].PrimaryComponentTick.Target =
         (UActorComponent *)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar1;
    *(double *)&this[1].ComponentTags.ArrayNum = (double)fVar2;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[1].AssetUserData.ArrayNum =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[1].field_0x88 = (double)fVar1;
    *(double *)&this[1].UCSSerializationIndex = (double)fVar2;
    *(double *)&this[1].field_0x98 = (double)fVar3;
    *(undefined1 *)&this[1].PhysicsStateAsyncCreationScene = 0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    pUVar6 = this;
  }
  return (UObject *)pUVar6;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_RootMotionModifier_SimpleWarp> @ 14cf02290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_RootMotionModifier_SimpleWarp>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URootMotionModifier_Warp *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_RootMotionModifier_SimpleWarp::GetPrivateStaticClass();
  this = (URootMotionModifier_Warp *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (URootMotionModifier_Warp *)0x0) {
    URootMotionModifier_Warp::URootMotionModifier_Warp(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_RootMotionModifier_SimpleWarp__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingBaseAdapter> @ 14cf02340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMotionWarpingBaseAdapter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingBaseAdapter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMotionWarpingBaseAdapter__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingCharacterAdapter> @ 14cf02400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionWarpingCharacterAdapter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingCharacterAdapter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMotionWarpingCharacterAdapter__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingComponent> @ 14cf024c0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UMotionWarpingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UMotionWarpingComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UMotionWarpingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UMotionWarpingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined1 *)&this[1].ComponentTags.ArrayNum = 0;
    *(undefined1 *)&this[1].UCSSerializationIndex = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingFunctionLibrary> @ 14cf025e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionWarpingFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMotionWarpingFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffAngleToTargetCondition> @ 14cf02690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffAngleToTargetCondition>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingSwitchOffAngleToTargetCondition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x101;
    *(undefined ***)pUVar1 = &___7UMotionWarpingSwitchOffAngleToTargetCondition__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffBlueprintableCondition> @ 14cf02750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffBlueprintableCondition>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingSwitchOffBlueprintableCondition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x101;
    *(undefined ***)pUVar1 = &___7UMotionWarpingSwitchOffBlueprintableCondition__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCompositeCondition> @ 14cf02810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCompositeCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingSwitchOffCompositeCondition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x101;
    *(undefined ***)pUVar1 = &___7UMotionWarpingSwitchOffCompositeCondition__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCondition> @ 14cf028e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingSwitchOffCondition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x101;
    *(undefined ***)pUVar1 = &___7UMotionWarpingSwitchOffCondition__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffDistanceCondition> @ 14cf029a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffDistanceCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingSwitchOffDistanceCondition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x101;
    *(undefined ***)pUVar1 = &___7UMotionWarpingSwitchOffDistanceCondition__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionWarpingUtilities> @ 14cf02a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMotionWarpingUtilities>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMotionWarpingUtilities::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMotionWarpingUtilities__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URootMotionModifier> @ 14cf02b10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URootMotionModifier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URootMotionModifier *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URootMotionModifier::GetPrivateStaticClass();
  pUVar3 = (URootMotionModifier *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (URootMotionModifier *)0x0) {
    pUVar3 = URootMotionModifier::URootMotionModifier(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URootMotionModifier_AdjustmentBlendWarp> @ 14cf02bb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URootMotionModifier_AdjustmentBlendWarp>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URootMotionModifier_AdjustmentBlendWarp *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URootMotionModifier_AdjustmentBlendWarp::GetPrivateStaticClass();
  pUVar3 = (URootMotionModifier_AdjustmentBlendWarp *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (URootMotionModifier_AdjustmentBlendWarp *)0x0) {
    pUVar3 = URootMotionModifier_AdjustmentBlendWarp::URootMotionModifier_AdjustmentBlendWarp
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URootMotionModifier_PrecomputedWarp> @ 14cf02c50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URootMotionModifier_PrecomputedWarp>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URootMotionModifier_PrecomputedWarp *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URootMotionModifier_PrecomputedWarp::GetPrivateStaticClass();
  pUVar3 = (URootMotionModifier_PrecomputedWarp *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (URootMotionModifier_PrecomputedWarp *)0x0) {
    pUVar3 = URootMotionModifier_PrecomputedWarp::URootMotionModifier_PrecomputedWarp
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URootMotionModifier_Scale> @ 14cf02cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URootMotionModifier_Scale>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URootMotionModifier *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URootMotionModifier_Scale::GetPrivateStaticClass();
  this = (URootMotionModifier *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (URootMotionModifier *)0x0) {
    URootMotionModifier::URootMotionModifier(this,param_1);
    this->_padding_ = (longlong)&___7URootMotionModifier_Scale__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URootMotionModifier_SkewWarp> @ 14cf02dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URootMotionModifier_SkewWarp>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URootMotionModifier_Warp *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URootMotionModifier_SkewWarp::GetPrivateStaticClass();
  this = (URootMotionModifier_Warp *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (URootMotionModifier_Warp *)0x0) {
    URootMotionModifier_Warp::URootMotionModifier_Warp(this,param_1);
    *(undefined4 *)&this->field_0x368 = 0;
    *(undefined ***)this = &___7URootMotionModifier_SkewWarp__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URootMotionModifier_Warp> @ 14cf02e70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URootMotionModifier_Warp>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URootMotionModifier_Warp *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URootMotionModifier_Warp::GetPrivateStaticClass();
  pUVar3 = (URootMotionModifier_Warp *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (URootMotionModifier_Warp *)0x0) {
    pUVar3 = URootMotionModifier_Warp::URootMotionModifier_Warp(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// NewObject<UMotionWarpingBaseAdapter> @ 14cf02f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMotionWarpingBaseAdapter * __cdecl
NewObject<UMotionWarpingBaseAdapter>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMotionWarpingBaseAdapter *pUVar2;
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
  pUVar1 = UMotionWarpingBaseAdapter::StaticClass();
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
  pUVar2 = (UMotionWarpingBaseAdapter *)
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

// NewObject<UMotionWarpingSwitchOffAngleToTargetCondition> @ 14cf03010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMotionWarpingSwitchOffAngleToTargetCondition * __cdecl
NewObject<UMotionWarpingSwitchOffAngleToTargetCondition>(UObject *param_1)

{
  UClass *pUVar1;
  UMotionWarpingSwitchOffAngleToTargetCondition *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMotionWarpingSwitchOffAngleToTargetCondition::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMotionWarpingSwitchOffAngleToTargetCondition *)
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

// NewObject<UMotionWarpingSwitchOffBlueprintableCondition> @ 14cf030b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMotionWarpingSwitchOffBlueprintableCondition * __cdecl
NewObject<UMotionWarpingSwitchOffBlueprintableCondition>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMotionWarpingSwitchOffBlueprintableCondition *pUVar2;
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
  pUVar1 = UMotionWarpingSwitchOffBlueprintableCondition::StaticClass();
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
  pUVar2 = (UMotionWarpingSwitchOffBlueprintableCondition *)
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

// NewObject<UMotionWarpingSwitchOffCompositeCondition> @ 14cf031b0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMotionWarpingSwitchOffCompositeCondition * __cdecl
NewObject<UMotionWarpingSwitchOffCompositeCondition>(UObject *param_1)

{
  UClass *pUVar1;
  UMotionWarpingSwitchOffCompositeCondition *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMotionWarpingSwitchOffCompositeCondition::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMotionWarpingSwitchOffCompositeCondition *)
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

// NewObject<UMotionWarpingSwitchOffDistanceCondition> @ 14cf03250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMotionWarpingSwitchOffDistanceCondition * __cdecl
NewObject<UMotionWarpingSwitchOffDistanceCondition>(UObject *param_1)

{
  UClass *pUVar1;
  UMotionWarpingSwitchOffDistanceCondition *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMotionWarpingSwitchOffDistanceCondition::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMotionWarpingSwitchOffDistanceCondition *)
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

// NewObject<URootMotionModifier_AdjustmentBlendWarp> @ 14cf032f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URootMotionModifier_AdjustmentBlendWarp * __cdecl
NewObject<URootMotionModifier_AdjustmentBlendWarp>(UObject *param_1)

{
  UClass *pUVar1;
  URootMotionModifier_AdjustmentBlendWarp *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = URootMotionModifier_AdjustmentBlendWarp::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (URootMotionModifier_AdjustmentBlendWarp *)
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

// NewObject<URootMotionModifier_Scale> @ 14cf03390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URootMotionModifier_Scale * __cdecl NewObject<URootMotionModifier_Scale>(UObject *param_1)

{
  UClass *pUVar1;
  URootMotionModifier_Scale *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = URootMotionModifier_Scale::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (URootMotionModifier_Scale *)
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

// NewObject<URootMotionModifier_SkewWarp> @ 14cf03430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URootMotionModifier_SkewWarp * __cdecl NewObject<URootMotionModifier_SkewWarp>(UObject *param_1)

{
  UClass *pUVar1;
  URootMotionModifier_SkewWarp *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = URootMotionModifier_SkewWarp::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (URootMotionModifier_SkewWarp *)
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

// StaticEnum<enum_EAttributeBasedRootMotionMode> @ 14cf034d0

UEnum * __cdecl StaticEnum<enum_EAttributeBasedRootMotionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode,
                       (UObject *)pUVar1,L"EAttributeBasedRootMotionMode");
  }
  return Z_Registration_Info_UEnum_EAttributeBasedRootMotionMode.OuterSingleton;
}

// StaticEnum<enum_EMotionWarpRotationMethod> @ 14cf03510

UEnum * __cdecl StaticEnum<enum_EMotionWarpRotationMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMotionWarpRotationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EMotionWarpRotationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod,(UObject *)pUVar1,
                       L"EMotionWarpRotationMethod");
  }
  return Z_Registration_Info_UEnum_EMotionWarpRotationMethod.OuterSingleton;
}

// StaticEnum<enum_EMotionWarpRotationType> @ 14cf03550

UEnum * __cdecl StaticEnum<enum_EMotionWarpRotationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType,(UObject *)pUVar1,
                       L"EMotionWarpRotationType");
  }
  return Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton;
}

// StaticEnum<enum_EPrecomputedWarpUpdateMode> @ 14cf03590

UEnum * __cdecl StaticEnum<enum_EPrecomputedWarpUpdateMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode,(UObject *)pUVar1,
                       L"EPrecomputedWarpUpdateMode");
  }
  return Z_Registration_Info_UEnum_EPrecomputedWarpUpdateMode.OuterSingleton;
}

// StaticEnum<enum_EPrecomputedWarpWeightCurveType> @ 14cf035d0

UEnum * __cdecl StaticEnum<enum_EPrecomputedWarpWeightCurveType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType,
                       (UObject *)pUVar1,L"EPrecomputedWarpWeightCurveType");
  }
  return Z_Registration_Info_UEnum_EPrecomputedWarpWeightCurveType.OuterSingleton;
}

// StaticEnum<enum_ERootMotionModifierState> @ 14cf03610

UEnum * __cdecl StaticEnum<enum_ERootMotionModifierState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ERootMotionModifierState,(UObject *)pUVar1,
                       L"ERootMotionModifierState");
  }
  return Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton;
}

// StaticEnum<enum_ESwitchOffConditionAngleOp> @ 14cf03650

UEnum * __cdecl StaticEnum<enum_ESwitchOffConditionAngleOp>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp,(UObject *)pUVar1,
                       L"ESwitchOffConditionAngleOp");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionAngleOp.OuterSingleton;
}

// StaticEnum<enum_ESwitchOffConditionCompositeOp> @ 14cf03690

UEnum * __cdecl StaticEnum<enum_ESwitchOffConditionCompositeOp>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp,
                       (UObject *)pUVar1,L"ESwitchOffConditionCompositeOp");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionCompositeOp.OuterSingleton;
}

// StaticEnum<enum_ESwitchOffConditionDistanceAxesType> @ 14cf036d0

UEnum * __cdecl StaticEnum<enum_ESwitchOffConditionDistanceAxesType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType,
                       (UObject *)pUVar1,L"ESwitchOffConditionDistanceAxesType");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionDistanceAxesType.OuterSingleton;
}

// StaticEnum<enum_ESwitchOffConditionDistanceOp> @ 14cf03710

UEnum * __cdecl StaticEnum<enum_ESwitchOffConditionDistanceOp>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp,
                       (UObject *)pUVar1,L"ESwitchOffConditionDistanceOp");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionDistanceOp.OuterSingleton;
}

// StaticEnum<enum_ESwitchOffConditionEffect> @ 14cf03750

UEnum * __cdecl StaticEnum<enum_ESwitchOffConditionEffect>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwitchOffConditionEffect.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_ESwitchOffConditionEffect.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect,(UObject *)pUVar1,
                       L"ESwitchOffConditionEffect");
  }
  return Z_Registration_Info_UEnum_ESwitchOffConditionEffect.OuterSingleton;
}

// StaticEnum<enum_EWarpPointAnimProvider> @ 14cf03790

UEnum * __cdecl StaticEnum<enum_EWarpPointAnimProvider>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider,(UObject *)pUVar1,
                       L"EWarpPointAnimProvider");
  }
  return Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton;
}

// StaticEnum<enum_EWarpTargetLocationOffsetDirection> @ 14cf037d0

UEnum * __cdecl StaticEnum<enum_EWarpTargetLocationOffsetDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection,
                       (UObject *)pUVar1,L"EWarpTargetLocationOffsetDirection");
  }
  return Z_Registration_Info_UEnum_EWarpTargetLocationOffsetDirection.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf05efc

/* [thunk]:public: virtual void * __ptr64 __cdecl UAttributeBasedRootMotionComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAttributeBasedRootMotionComponent::_vector_deleting_destructor__adjustor_40__
          (UAttributeBasedRootMotionComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAttributeBasedRootMotionComponent *)
                      ((longlong)&this[-1].TranslationVelocity.field0_0x0 + 0x10),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf05f0c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMotionWarpingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMotionWarpingComponent::_vector_deleting_destructor__adjustor_40__
          (UMotionWarpingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMotionWarpingComponent *)&this[-1].OriginalRootMotionAccum.bIsSet,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cf05f20

void * __thiscall
IBaseDelegateInstance<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf05f50

void * __thiscall
IBaseDelegateInstance<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf05f80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf05fb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf05fe0

void * __thiscall
TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06010

void * __thiscall
TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FAttributeBasedRootMotionComponentPrePhysicsTickFunction::_scalar_deleting_destructor_
          (FAttributeBasedRootMotionComponentPrePhysicsTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06080

void * __thiscall
UAnimNotifyState_MotionWarping::_scalar_deleting_destructor_
          (UAnimNotifyState_MotionWarping *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_MotionWarping__6B_;
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

// `scalar_deleting_destructor' @ 14cf060e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAttributeBasedRootMotionComponent::_scalar_deleting_destructor_
          (UAttributeBasedRootMotionComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FTickFunction::~FTickFunction((FTickFunction *)&this->PrePhysicsTickFunction);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06170

void * __thiscall
UDEPRECATED_RootMotionModifier_SimpleWarp::_scalar_deleting_destructor_
          (UDEPRECATED_RootMotionModifier_SimpleWarp *this,uint param_1)

{
  *(undefined ***)this = &___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x150);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x138);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x120);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06200

void * __thiscall
UMotionWarpingBaseAdapter::_scalar_deleting_destructor_
          (UMotionWarpingBaseAdapter *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMotionWarpingBaseAdapter__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->WarpLocalRootMotionDelegate);
  pvVar1 = *(void **)&(this->WarpLocalRootMotionDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WarpLocalRootMotionDelegate);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06290

void * __thiscall
UMotionWarpingCharacterAdapter::_scalar_deleting_destructor_
          (UMotionWarpingCharacterAdapter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMotionWarpingBaseAdapter__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
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

// `scalar_deleting_destructor' @ 14cf06320

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
UMotionWarpingComponent::_scalar_deleting_destructor_(UMotionWarpingComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<FSwitchOffConditionData,int>
            ((FSwitchOffConditionData *)(this->SwitchOffConditions).AllocatorInstance.Data,
             (this->SwitchOffConditions).ArrayNum);
  pFVar1 = (this->SwitchOffConditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Modifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnPreUpdate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreUpdate);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06410

void * __thiscall
UMotionWarpingFunctionLibrary::_scalar_deleting_destructor_
          (UMotionWarpingFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMotionWarpingFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14cf06470

void * __thiscall
UMotionWarpingSwitchOffAngleToTargetCondition::_scalar_deleting_destructor_
          (UMotionWarpingSwitchOffAngleToTargetCondition *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf064d0

void * __thiscall
UMotionWarpingSwitchOffBlueprintableCondition::_scalar_deleting_destructor_
          (UMotionWarpingSwitchOffBlueprintableCondition *this,uint param_1)

{
  *(undefined ***)this = &___7UMotionWarpingSwitchOffCondition__6B_;
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

// `scalar_deleting_destructor' @ 14cf06530

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
UMotionWarpingSwitchOffCompositeCondition::_scalar_deleting_destructor_
          (UMotionWarpingSwitchOffCompositeCondition *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06590

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
UMotionWarpingSwitchOffCondition::_scalar_deleting_destructor_
          (UMotionWarpingSwitchOffCondition *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
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

// `scalar_deleting_destructor' @ 14cf065f0

void * __thiscall
UMotionWarpingSwitchOffDistanceCondition::_scalar_deleting_destructor_
          (UMotionWarpingSwitchOffDistanceCondition *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
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

// `scalar_deleting_destructor' @ 14cf06650

void * __thiscall
UMotionWarpingUtilities::_scalar_deleting_destructor_(UMotionWarpingUtilities *this,uint param_1)

{
  *(undefined ***)this = &___7UMotionWarpingUtilities__6B_;
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

// `scalar_deleting_destructor' @ 14cf066b0

void * __thiscall
URootMotionModifier::_scalar_deleting_destructor_(URootMotionModifier *this,uint param_1)

{
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDeactivateDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivateDelegate);
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

// `scalar_deleting_destructor' @ 14cf06740

void * __thiscall
URootMotionModifier_AdjustmentBlendWarp::_scalar_deleting_destructor_
          (URootMotionModifier_AdjustmentBlendWarp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URootMotionModifier_AdjustmentBlendWarp__6B_;
  pFVar1 = (this->Result).TrackNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRawAnimSequenceTrack,int>
            ((FRawAnimSequenceTrack *)(this->Result).AnimationTracks.AllocatorInstance.Data,
             (this->Result).AnimationTracks.ArrayNum);
  pFVar1 = (this->Result).AnimationTracks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IKBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06820

void * __thiscall
URootMotionModifier_PrecomputedWarp::_scalar_deleting_destructor_
          (URootMotionModifier_PrecomputedWarp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URootMotionModifier_PrecomputedWarp__6B_;
  pFVar1 = (this->AnimTrajectoryData).RotationCurve.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimTrajectoryData).TranslationCurve.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpedTrajectory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06900

void * __thiscall
URootMotionModifier_Scale::_scalar_deleting_destructor_
          (URootMotionModifier_Scale *this,uint param_1)

{
  *(undefined ***)this = &___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x150);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x138);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x120);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06990

void * __thiscall
URootMotionModifier_SkewWarp::_scalar_deleting_destructor_
          (URootMotionModifier_SkewWarp *this,uint param_1)

{
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf06a20

void * __thiscall
URootMotionModifier_Warp::_scalar_deleting_destructor_(URootMotionModifier_Warp *this,uint param_1)

{
  *(undefined ***)this = &___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x150);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x138);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x120);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MotionWarping @ 14cf0c170

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MotionWarping(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAttributeBasedRootMotionComponent @ 14cf0c180

void __cdecl EmptyLinkFunctionForGeneratedCodeAttributeBasedRootMotionComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionWarpingAdapter @ 14cf0c190

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionWarpingAdapter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionWarpingCharacterAdapter @ 14cf0c1a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionWarpingCharacterAdapter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionWarpingComponent @ 14cf0c1b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionWarpingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionWarpingFunctionLibrary @ 14cf0c1c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionWarpingFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionWarpingSwitchOffCondition @ 14cf0c1d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionWarpingSwitchOffCondition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionWarping_init @ 14cf0c1e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionWarping_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRootMotionModifier @ 14cf0c1f0

void __cdecl EmptyLinkFunctionForGeneratedCodeRootMotionModifier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRootMotionModifier_AdjustmentBlendWarp @ 14cf0c200

void __cdecl EmptyLinkFunctionForGeneratedCodeRootMotionModifier_AdjustmentBlendWarp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRootMotionModifier_PrecomputedWarp @ 14cf0c210

void __cdecl EmptyLinkFunctionForGeneratedCodeRootMotionModifier_PrecomputedWarp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRootMotionModifier_SkewWarp @ 14cf0c220

void __cdecl EmptyLinkFunctionForGeneratedCodeRootMotionModifier_SkewWarp(void)

{
  return;
}

// ExtractRootMotionHelper @ 14cf0e660

TTransform<double> * __cdecl
`anonymous_namespace'::ExtractRootMotionHelper
          (TTransform<double> *__return_storage_ptr__,UAnimSequenceBase *param_1,float param_2,
          float param_3,bool param_4)

{
  int iVar1;
  UClass *pUVar2;
  FAnimExtractContext local_78;
  
  local_78.bExtractRootMotion = true;
  local_78.DeltaTimeRecord.Previous = 0.0;
  local_78.DeltaTimeRecord.bPreviousIsValid = false;
  local_78.CurrentTime = (double)param_2;
  local_78.bLooping = param_4;
  local_78.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.PoseCurves.ArrayNum = 0;
  local_78.PoseCurves.ArrayMax = 0;
  local_78.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.BonesRequired.ArrayNum = 0;
  local_78.BonesRequired.ArrayMax = 0;
  local_78.InterpolationOverride.bIsSet = false;
  local_78.DeltaTimeRecord.Delta = param_3;
  if (param_1 != (UAnimSequenceBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UAnimMontage::ExtractRootMotionFromTrackRange
                ((UAnimMontage *)param_1,__return_storage_ptr__,param_2,param_2 + param_3,&local_78)
      ;
      goto LAB_14cf0e73b;
    }
  }
  (**(code **)(param_1->_padding_ + 0x348))(param_1,__return_storage_ptr__,&local_78);
LAB_14cf0e73b:
  if (local_78.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BonesRequired.AllocatorInstance.Data);
  }
  if (local_78.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.PoseCurves.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FMotionWarpingPreUpdate_DelegateWrapper @ 14cf0eb50

void __cdecl
FMotionWarpingPreUpdate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UMotionWarpingComponent *param_2)

{
  UMotionWarpingComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnRootMotionModifierDelegate_DelegateWrapper @ 14cf0eb70

void __cdecl
FOnRootMotionModifierDelegate_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UMotionWarpingComponent *param_2,
          URootMotionModifier *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this;
  UFunction *pUVar3;
  UMotionWarpingComponent *local_38;
  URootMotionModifier *local_30;
  FDestructionSentinel local_28;
  
  local_38 = param_2;
  local_30 = param_3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&param_1->Object);
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->FunctionName == (FName)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = FWeakObjectPtr::Get(&param_1->Object);
  pUVar3 = UObject::FindFunctionChecked(this,param_1->FunctionName);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,&local_38);
  return;
}

// GetTransformForFrame @ 14cf11a00

void __cdecl
`anonymous_namespace'::GetTransformForFrame
          (float param_1,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TTransform<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2->ArrayNum == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Trajectory.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier_PrecomputedWarp.cpp"
                       ,0x35,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar4 = (double)param_1;
  uVar9 = param_2->ArrayNum - 1;
  lVar7 = (longlong)param_1;
  if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != dVar4)) {
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uVar6 = movmskpd(0,auVar3);
    dVar4 = (double)(longlong)(lVar7 - (ulonglong)(uVar6 & 1));
  }
  if ((double)(int)uVar9 <= dVar4) {
    dVar4 = (double)(int)uVar9;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  uVar8 = (uint)dVar4;
  uVar6 = uVar8 + 1;
  if ((int)uVar9 < (int)(uVar8 + 1)) {
    uVar6 = uVar9;
  }
  uVar9 = 0;
  if ((int)uVar8 < param_2->ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  lVar7 = (longlong)(int)uVar8 * 0x60;
  dVar4 = *(double *)(pFVar1 + lVar7 + 8);
  (param_3->Rotation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar7);
  (param_3->Rotation).XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(pFVar1 + lVar7 + 0x10 + 8);
  (param_3->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar7 + 0x10);
  (param_3->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(pFVar1 + lVar7 + 0x20 + 8);
  (param_3->Translation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar7 + 0x20);
  (param_3->Translation).XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(pFVar1 + lVar7 + 0x30 + 8);
  (param_3->Translation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar7 + 0x30);
  (param_3->Translation).ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(pFVar1 + lVar7 + 0x40 + 8);
  (param_3->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar7 + 0x40);
  (param_3->Scale3D).XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(pFVar1 + lVar7 + 0x50 + 8);
  (param_3->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar7 + 0x50);
  (param_3->Scale3D).ZW.m128d_f64[1] = dVar4;
  uVar9 = 0;
  if ((int)uVar6 < param_2->ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Math::TTransform<double>::BlendWith
            (param_3,(TTransform<double> *)
                     ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x60),
             param_1 - (float)(int)uVar8);
  return;
}

// SampleCurve @ 14cf1b4d0

float __cdecl
`anonymous_namespace'::SampleCurve
          (float param_1,float param_2,float param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  
  if ((param_4->ArrayNum == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurveData.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier_PrecomputedWarp.cpp"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    fVar12 = (float)(*pcVar6)();
    return fVar12;
  }
  if (param_2 < param_1) {
    fVar12 = __real_3f800000;
    if (param_1 < param_3) {
      iVar1 = param_4->ArrayNum;
      dVar13 = (double)round((double)(param_2 * __real_41efffff));
      iVar2 = param_4->ArrayNum;
      dVar14 = (double)(iVar1 + -1);
      if (dVar14 <= dVar13) {
        dVar13 = dVar14;
      }
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      uVar10 = (uint)dVar13;
      dVar13 = (double)round((double)(param_3 * __real_41efffff));
      iVar1 = param_4->ArrayNum;
      dVar14 = (double)(iVar2 + -1);
      if (dVar14 <= dVar13) {
        dVar13 = dVar14;
      }
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      uVar11 = (uint)dVar13;
      dVar13 = (double)round((double)(param_1 * __real_41efffff));
      dVar14 = (double)(iVar1 + -1);
      if (dVar14 <= dVar13) {
        dVar13 = dVar14;
      }
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      uVar9 = (uint)dVar13;
      uVar8 = 0;
      if ((int)uVar9 < param_4->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        fVar12 = (float)(*pcVar6)();
        return fVar12;
      }
      pFVar3 = (param_4->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)uVar10 < param_4->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        fVar12 = (float)(*pcVar6)();
        return fVar12;
      }
      pFVar4 = (param_4->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)uVar11 < param_4->ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        fVar12 = (float)(*pcVar6)();
        return fVar12;
      }
      pFVar5 = (param_4->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)uVar10 < param_4->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        fVar12 = (float)(*pcVar6)();
        return fVar12;
      }
      fVar12 = (*(float *)(pFVar3 + (longlong)(int)uVar9 * 4) -
               *(float *)(pFVar4 + (longlong)(int)uVar10 * 4)) /
               (*(float *)(pFVar5 + (longlong)(int)uVar11 * 4) -
               *(float *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
    }
  }
  else {
    fVar12 = 0.0;
  }
  return fVar12;
}

// Z_Construct_UClass_UAttributeBasedRootMotionComponent_NoRegister @ 14cf1fa40

UClass * __cdecl Z_Construct_UClass_UAttributeBasedRootMotionComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"AttributeBasedRootMotionComponent",
               &Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton,
               UAttributeBasedRootMotionComponent::
               StaticRegisterNativesUAttributeBasedRootMotionComponent,0x1a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAttributeBasedRootMotionComponent>,
               InternalVTableHelperCtorCaller<UAttributeBasedRootMotionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_NoRegister @ 14cf1fb00

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_SimpleWarp",
               &Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton,
               UDEPRECATED_RootMotionModifier_SimpleWarp::
               StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp,0x370,0x10,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_RootMotionModifier_SimpleWarp>,
               InternalVTableHelperCtorCaller<UDEPRECATED_RootMotionModifier_SimpleWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingCharacterAdapter_NoRegister @ 14cf1fbc0

UClass * __cdecl Z_Construct_UClass_UMotionWarpingCharacterAdapter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingCharacterAdapter",
               &Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton,
               UMotionWarpingCharacterAdapter::StaticRegisterNativesUMotionWarpingCharacterAdapter,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingCharacterAdapter>,
               InternalVTableHelperCtorCaller<UMotionWarpingCharacterAdapter>,local_res8,
               UMotionWarpingBaseAdapter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingFunctionLibrary_NoRegister @ 14cf1fc80

UClass * __cdecl Z_Construct_UClass_UMotionWarpingFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingFunctionLibrary",
               &Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton,
               UMotionWarpingFunctionLibrary::StaticRegisterNativesUMotionWarpingFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMotionWarpingFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMotionWarpingUtilities_NoRegister @ 14cf1fd40

UClass * __cdecl Z_Construct_UClass_UMotionWarpingUtilities_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingUtilities",
               &Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton,
               UMotionWarpingUtilities::StaticRegisterNativesUMotionWarpingUtilities,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingUtilities>
               ,InternalVTableHelperCtorCaller<UMotionWarpingUtilities>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton;
}

// Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_NoRegister @ 14cf1fe00

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_AdjustmentBlendWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton,
               URootMotionModifier_AdjustmentBlendWarp::
               StaticRegisterNativesURootMotionModifier_AdjustmentBlendWarp,0x4c0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier_AdjustmentBlendWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_AdjustmentBlendWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton;
}

// Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_NoRegister @ 14cf1fec0

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_PrecomputedWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton,
               URootMotionModifier_PrecomputedWarp::
               StaticRegisterNativesURootMotionModifier_PrecomputedWarp,0x600,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier_PrecomputedWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_PrecomputedWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton;
}

// Z_Construct_UClass_URootMotionModifier_Warp_NoRegister @ 14cf1ff80

UClass * __cdecl Z_Construct_UClass_URootMotionModifier_Warp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_Warp",
               &Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton,
               URootMotionModifier_Warp::StaticRegisterNativesURootMotionModifier_Warp,0x370,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier_Warp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_Warp>,local_res8,
               URootMotionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction @ 14cf20040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction
           .InnerSingleton;
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

// Z_Construct_UScriptStruct_FMotionDeltaTrackContainer @ 14cf200c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionDeltaTrackContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMotionWarpingUpdateContext @ 14cf20140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionWarpingUpdateContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.InnerSingleton;
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

// IMPLEMENT_MODULE_MotionWarping @ 14cf24450

void __cdecl IMPLEMENT_MODULE_MotionWarping(void)

{
  return;
}

// CVarMotionWarpingDebug'' @ 150453e30

void __cdecl `dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarMotionWarpingDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FMotionWarpingCVars::CVarMotionWarpingDebug);
  return;
}

// CVarMotionWarpingDisable'' @ 150453e50

void __cdecl `dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarMotionWarpingDisable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FMotionWarpingCVars::CVarMotionWarpingDisable);
  return;
}

// CVarMotionWarpingDrawDebugDuration'' @ 150453e70

void __cdecl
`dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration);
  return;
}

// CVarWarpedSwitchOffConditionDebug'' @ 150453e90

void __cdecl
`dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarWarpedSwitchOffConditionDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FMotionWarpingCVars::CVarWarpedSwitchOffConditionDebug);
  return;
}

// CVarWarpedTargetDebug'' @ 150453eb0

void __cdecl `dynamic_atexit_destructor_for_'FMotionWarpingCVars::CVarWarpedTargetDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FMotionWarpingCVars::CVarWarpedTargetDebug);
  return;
}

// `dynamic_atexit_destructor_for_'LogMotionWarping'' @ 150453ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMotionWarping__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMotionWarping);
  return;
}

