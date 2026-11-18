// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 227

// FeatureName'' @ 1411d2860

void __cdecl
`dynamic_initializer_for_'UE::PoseSearch::IInteractionIslandDependency::FeatureName__(void)

{
  ::FName::FName(&UE::PoseSearch::IInteractionIslandDependency::FeatureName,
                 "IInteractionIslandDependency");
  return;
}

// Name'' @ 1411d2880

void __cdecl `dynamic_initializer_for_'UE::PoseSearch::FTraceLogger::Name__(void)

{
  ::FName::FName(&UE::PoseSearch::FTraceLogger::Name,"PoseSearch");
  return;
}

// Name'' @ 1411d28a0

void __cdecl
`dynamic_initializer_for_'UE::PoseSearch::FTraceMotionMatchingStateMessage::Name__(void)

{
  ::FName::FName(&UE::PoseSearch::FTraceMotionMatchingStateMessage::Name,"MotionMatchingState3");
  return;
}

// `dynamic_initializer_for_'CVarAnimMotionMatchDrawMatchEnable'' @ 1411d28c0

void __cdecl _dynamic_initializer_for__CVarAnimMotionMatchDrawMatchEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimMotionMatchDrawMatchEnable,L"a.MotionMatch.DrawMatch.Enable",
             &GVarAnimMotionMatchDrawMatchEnable,L"Enable / Disable MotionMatch Draw Match",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimMotionMatchDrawMatchEnable__);
  return;
}

// `dynamic_initializer_for_'CVarAnimMotionMatchDrawQueryEnable'' @ 1411d2910

void __cdecl _dynamic_initializer_for__CVarAnimMotionMatchDrawQueryEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimMotionMatchDrawQueryEnable,L"a.MotionMatch.DrawQuery.Enable",
             &GVarAnimMotionMatchDrawQueryEnable,L"Enable / Disable MotionMatch Draw Query",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimMotionMatchDrawQueryEnable__);
  return;
}

// `dynamic_initializer_for_'CVarPoseSearchInteractionCacheIslands'' @ 1411d2960

void __cdecl UE::PoseSearch::_dynamic_initializer_for__CVarPoseSearchInteractionCacheIslands__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPoseSearchInteractionCacheIslands,L"a.PoseSearchInteraction.CacheIslands",
             &GVarPoseSearchInteractionCacheIslands,
             L"Cache Pose Search Interaction Islands for future reuse instead of destrying them",0);
  atexit(_dynamic_atexit_destructor_for__CVarPoseSearchInteractionCacheIslands__);
  return;
}

// `dynamic_initializer_for_'CVarPoseSearchInteractionEnabled'' @ 1411d29b0

void __cdecl UE::PoseSearch::_dynamic_initializer_for__CVarPoseSearchInteractionEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPoseSearchInteractionEnabled,L"a.PoseSearchInteraction.Enabled",
             &GVarPoseSearchInteractionEnabled,L"Enable/Disable Pose Search Interaction",0);
  atexit(_dynamic_atexit_destructor_for__CVarPoseSearchInteractionEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPoseSearchInteractionLoglandsTickDependencies'' @ 1411d2a00

void __cdecl
UE::PoseSearch::_dynamic_initializer_for__CVarPoseSearchInteractionLoglandsTickDependencies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPoseSearchInteractionLoglandsTickDependencies,
             L"a.PoseSearchInteraction.LoglandsTickDependencies",
             &GVarPoseSearchInteractionLoglandsTickDependencies,L"Log islands tick dependencies",0);
  atexit(_dynamic_atexit_destructor_for__CVarPoseSearchInteractionLoglandsTickDependencies__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPoseSearch'' @ 1411d2a50

void __cdecl _dynamic_initializer_for__ModuleRegistrantPoseSearch__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PoseSearch";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PoseSearch",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FPoseSearchModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PoseSearchChannelReg'' @ 1411d2aa0

void __cdecl _dynamic_initializer_for__PoseSearchChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&PoseSearchChannelObject,"PoseSearchChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h__Script_PoseSearch_2296238888'' @ 1411d2ad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h__Script_PoseSearch_2296238888__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h__Script_PoseSearch_45173103'' @ 1411d2b10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h__Script_PoseSearch_45173103__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h__Script_PoseSearch_1588487695'' @ 1411d2b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h__Script_PoseSearch_1588487695__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h__Script_PoseSearch_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchNormalizationSet_h__Script_PoseSearch_595263117'' @ 1411d2ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchNormalizationSet_h__Script_PoseSearch_595263117__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchNormalizationSet_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchResult_h__Script_PoseSearch_4291611273'' @ 1411d2be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchResult_h__Script_PoseSearch_4291611273__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchResult_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h__Script_PoseSearch_529738662'' @ 1411d2c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h__Script_PoseSearch_529738662__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h__Script_PoseSearch_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h__Script_PoseSearch_1154276542'' @ 1411d2c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h__Script_PoseSearch_1154276542__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryTypes_h__Script_PoseSearch_2898313258'' @ 1411d2cc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryTypes_h__Script_PoseSearch_2898313258__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryTypes_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UFunction_UPoseSearchInteractionLibrary_GetMontageContinuingProperties @ 14a90c320

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchInteractionLibrary_GetMontageContinuingProperties(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchInteractionLibrary_GetMontageContinuingProperties_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14a90c358

/* [thunk]:public: virtual void * __ptr64 __cdecl FPoseSearchModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FPoseSearchModule::_vector_deleting_destructor__adjustor_8__(FPoseSearchModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPoseSearchModule *)&this[-1].RewindDebuggerPoseSearchRuntime,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a90c590

void * __thiscall
UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::_scalar_deleting_destructor_
          (TAttributeBlendOperator<FPoseHistoryAnimationAttribute> *this,uint param_1)

{
  *this = (TAttributeBlendOperator<FPoseHistoryAnimationAttribute>)
          &___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bValidateResultAgainstAvailabilities_SetBit @ 14a90c5d0

void __cdecl
Z_Construct_UFunction_UPoseSearchInteractionLibrary_MotionMatchInteraction_Statics::
NewProp_bValidateResultAgainstAvailabilities_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample @ 14a90c5e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectorySample.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectorySample.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectorySample.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectorySample.InnerSingleton;
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

// NewStructOps @ 14a90c660

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchQueryTrajectorySample,&UE::CoreUObject::Private::Construct<FPoseSearchQueryTrajectorySample>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchQueryTrajectorySample>,&UE::CoreUObject::Private::Destruct<FPoseSearchQueryTrajectorySample>,&UE::CoreUObject::Private::Copy<FPoseSearchQueryTrajectorySample>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPoseSearchInteractionLibrary_MotionMatchInteraction @ 14a90c6a0

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchInteractionLibrary_MotionMatchInteraction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchInteractionLibrary_MotionMatchInteraction_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a90c6e0

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchQueryTrajectory,&UE::CoreUObject::Private::Construct<FPoseSearchQueryTrajectory>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchQueryTrajectory>,&UE::CoreUObject::Private::Destruct<FPoseSearchQueryTrajectory>,&UE::CoreUObject::Private::Copy<FPoseSearchQueryTrajectory>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bValidateResultAgainstAvailabilities_SetBit @ 14a90c720

void __cdecl
Z_Construct_UFunction_UPoseSearchInteractionLibrary_MotionMatchInteraction_Pure_Statics::
NewProp_bValidateResultAgainstAvailabilities_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UPoseSearchInteractionLibrary_MotionMatchInteraction_Pure @ 14a90c730

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchInteractionLibrary_MotionMatchInteraction_Pure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchInteractionLibrary_MotionMatchInteraction_Pure_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a90cd40

void * __thiscall
UE::Anim::IPoseSearchProvider::_scalar_deleting_destructor_(IPoseSearchProvider *this,uint param_1)

{
  *this = (IPoseSearchProvider)&___7IPoseSearchProvider_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a90cec0

void * __thiscall
FRewindDebuggerPoseSearchRuntime::_scalar_deleting_destructor_
          (FRewindDebuggerPoseSearchRuntime *this,uint param_1)

{
  *this = (FRewindDebuggerPoseSearchRuntime)&___7IRewindDebuggerRuntimeExtension__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a90d440

void * __thiscall
FPoseSearchModule::_scalar_deleting_destructor_(FPoseSearchModule *this,uint param_1)

{
  this->RewindDebuggerPoseSearchRuntime =
       (FRewindDebuggerPoseSearchRuntime)&___7IRewindDebuggerRuntimeExtension__6B_;
  this->_padding_ = (longlong)&___7IPoseSearchProvider_Anim_UE__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UClass_UPoseSearchNormalizationSet @ 14a90d610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchNormalizationSet(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchNormalizationSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchNormalizationSet.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchNormalizationSet.OuterSingleton;
}

// NewProp_bIsContinuingPoseSearch_SetBit @ 14a90d690

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchBlueprintResult_Statics::NewProp_bIsContinuingPoseSearch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bLoop_SetBit @ 14a90d6b0

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchBlueprintResult_Statics::NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bIsMirrored_SetBit @ 14a90d6c0

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchBlueprintResult_Statics::NewProp_bIsMirrored_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_bIsInteraction_SetBit @ 14a90d700

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchBlueprintResult_Statics::NewProp_bIsInteraction_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// NewStructOps @ 14a90d710

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchBlueprintResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchBlueprintResult,&UE::CoreUObject::Private::Construct<FPoseSearchBlueprintResult>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchBlueprintResult>,&UE::CoreUObject::Private::Destruct<FPoseSearchBlueprintResult>,&UE::CoreUObject::Private::Copy<FPoseSearchBlueprintResult>,&UE::CoreUObject::Private::Identical<FPoseSearchBlueprintResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseSearchInteractionSubsystem @ 14a90d830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchInteractionSubsystem(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchInteractionSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UPoseSearchTrajectoryLibrary @ 14a90dcd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchTrajectoryLibrary(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchTrajectoryLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults @ 14a90dd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults.
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

// Z_Construct_UScriptStruct_FPoseSearchTrajectoryData @ 14a90dd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchTrajectoryData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectoryData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchTrajectoryData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchTrajectoryData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectoryData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchTrajectoryData.InnerSingleton;
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

// NewProp_bUseSpeedRemappingCurve_SetBit @ 14a90de10

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchTrajectoryData_Statics::NewProp_bUseSpeedRemappingCurve_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUseAccelerationRemappingCurve_SetBit @ 14a90de20

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchTrajectoryData_Statics::
NewProp_bUseAccelerationRemappingCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewStructOps @ 14a90de30

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchTrajectoryData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchTrajectoryData,&UE::CoreUObject::Private::Construct<FPoseSearchTrajectoryData>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchTrajectoryData>,&UE::CoreUObject::Private::Destruct<FPoseSearchTrajectoryData>,&UE::CoreUObject::Private::Copy<FPoseSearchTrajectoryData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseSearchLibrary @ 14a90de70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchLibrary(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchLibrary.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchLibrary.OuterSingleton;
}

// Z_Construct_UEnum_PoseSearch_EPoseSearchInterruptMode @ 14a90deb0

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EPoseSearchInterruptMode(void)

{
  if (Z_Registration_Info_UEnum_EPoseSearchInterruptMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPoseSearchInterruptMode.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EPoseSearchInterruptMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPoseSearchInterruptMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchFutureProperties @ 14a90def0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchFutureProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchFutureProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchFutureProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchFutureProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchFutureProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchFutureProperties.InnerSingleton;
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

// EPoseSearchInterruptMode_StaticEnum @ 14a90df70

UEnum * __cdecl EPoseSearchInterruptMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchInterruptMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchInterruptMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchInterruptMode,(UObject *)pUVar1,
                       L"EPoseSearchInterruptMode");
  }
  return Z_Registration_Info_UEnum_EPoseSearchInterruptMode.OuterSingleton;
}

// NewStructOps @ 14a90dfb0

void * __cdecl Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionMatchingState,&UE::CoreUObject::Private::Construct<FMotionMatchingState>,&UE::CoreUObject::Private::ConstructForTests<FMotionMatchingState>,&UE::CoreUObject::Private::Destruct<FMotionMatchingState>,&UE::CoreUObject::Private::Copy<FMotionMatchingState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a90dff0

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchTrajectory_WorldCollisionResults,&UE::CoreUObject::Private::Construct<FPoseSearchTrajectory_WorldCollisionResults>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchTrajectory_WorldCollisionResults>,&UE::CoreUObject::Private::Destruct<FPoseSearchTrajectory_WorldCollisionResults>,&UE::CoreUObject::Private::Copy<FPoseSearchTrajectory_WorldCollisionResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a90e0f0

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchFutureProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchFutureProperties,&UE::CoreUObject::Private::Construct<FPoseSearchFutureProperties>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchFutureProperties>,&UE::CoreUObject::Private::Destruct<FPoseSearchFutureProperties>,&UE::CoreUObject::Private::Copy<FPoseSearchFutureProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_DrawTransformTrajectory @ 14a90e130

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_DrawTransformTrajectory(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_DrawTransformTrajectory_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExtrapolate_SetBit @ 14a90e170

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectoryAngularVelocity_Statics::
NewProp_bExtrapolate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bIsPlayingAssetMirrored_SetBit @ 14a90e180

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchContinuingProperties_Statics::
NewProp_bIsPlayingAssetMirrored_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bIsContinuingInteraction_SetBit @ 14a90e190

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchContinuingProperties_Statics::
NewProp_bIsContinuingInteraction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 14a90e1d0

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchContinuingProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchContinuingProperties,&UE::CoreUObject::Private::Construct<FPoseSearchContinuingProperties>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchContinuingProperties>,&UE::CoreUObject::Private::Destruct<FPoseSearchContinuingProperties>,&UE::CoreUObject::Private::Copy<FPoseSearchContinuingProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectoryAngularVelocity @ 14a90e240

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectoryAngularVelocity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectoryAngularVelocity_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExtrapolate_SetBit @ 14a90e470

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectorySampleAtTime_Statics::
NewProp_bExtrapolate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectorySampleAtTime @ 14a90e480

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectorySampleAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectorySampleAtTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectorySampleTransform @ 14a90e4c0

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectorySampleTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectorySampleTransform_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExtrapolate_SetBit @ 14a90e500

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectoryVelocity_Statics::
NewProp_bExtrapolate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPoseSearchLibrary_GetDatabaseTags @ 14a90e510

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchLibrary_GetDatabaseTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchLibrary_GetDatabaseTags_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsAssetLooping_SetBit @ 14a90e550

void __cdecl
Z_Construct_UFunction_UPoseSearchLibrary_IsAnimationAssetLooping_Statics::
NewProp_bIsAssetLooping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectoryVelocity @ 14a90e560

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectoryVelocity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_GetTransformTrajectoryVelocity_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchLibrary_IsAnimationAssetLooping @ 14a90e5a0

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchLibrary_IsAnimationAssetLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchLibrary_IsAnimationAssetLooping_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bApplyGravity_SetBit @ 14a90e5e0

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisions_Statics
::NewProp_bApplyGravity_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bTraceComplex_SetBit @ 14a90e5f0

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisions_Statics
::NewProp_bTraceComplex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bIgnoreSelf_SetBit @ 14a90e600

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisions_Statics
::NewProp_bIgnoreSelf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch @ 14a90e610

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisions @ 14a90e650

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisions_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyGravity_SetBit @ 14a90e7b0

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisionsWithGravity_Statics
::NewProp_bApplyGravity_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bTraceComplex_SetBit @ 14a90e7c0

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisionsWithGravity_Statics
::NewProp_bTraceComplex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bIgnoreSelf_SetBit @ 14a90e7d0

void __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisionsWithGravity_Statics
::NewProp_bIgnoreSelf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x89) = 1;
  return;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisionsWithGravity @ 14a90eac0

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisionsWithGravity
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_HandleTransformTrajectoryWorldCollisionsWithGravity_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGeneratePredictorTransformTrajectory @ 14a90eb00

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGeneratePredictorTransformTrajectory
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGeneratePredictorTransformTrajectory_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGenerateTransformTrajectory @ 14a90eb40

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGenerateTransformTrajectory(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGenerateTransformTrajectory_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGenerateTransformTrajectoryWithPredictor @ 14a90eb80

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGenerateTransformTrajectoryWithPredictor
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchTrajectoryLibrary_PoseSearchGenerateTransformTrajectoryWithPredictor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPoseSearchSchema @ 14a90ebc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchSchema(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchSchema_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchRoledSkeleton @ 14a90ec00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchRoledSkeleton(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchRoledSkeleton.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchRoledSkeleton.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchRoledSkeleton_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchRoledSkeleton.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchRoledSkeleton.InnerSingleton;
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

// EPoseSearchDataPreprocessor_StaticEnum @ 14a90ec80

UEnum * __cdecl EPoseSearchDataPreprocessor_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor,(UObject *)pUVar1,
                       L"EPoseSearchDataPreprocessor");
  }
  return Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton;
}

// NewStructOps @ 14a90ecc0

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchRoledSkeleton_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchRoledSkeleton,&UE::CoreUObject::Private::Construct<FPoseSearchRoledSkeleton>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchRoledSkeleton>,&UE::CoreUObject::Private::Destruct<FPoseSearchRoledSkeleton>,&UE::CoreUObject::Private::Copy<FPoseSearchRoledSkeleton>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAddDataPadding_SetBit @ 14a90ed00

void __cdecl
Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bAddDataPadding_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// NewProp_bInjectAdditionalDebugChannels_SetBit @ 14a90ed10

void __cdecl
Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bInjectAdditionalDebugChannels_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  return;
}

// Z_Construct_UClass_UPoseSearchInteractionLibrary @ 14a90ed20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchInteractionLibrary(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchInteractionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchBlueprintResult @ 14a90ed60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchBlueprintResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchBlueprintResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchBlueprintResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchBlueprintResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchBlueprintResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchBlueprintResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchContinuingProperties @ 14a90ede0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchContinuingProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchContinuingProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchContinuingProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchContinuingProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchContinuingProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchContinuingProperties.InnerSingleton;
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

// FArchivedPoseHistory,TSizedDefaultAllocator<32>_> @ 14a90ef80

FArchive * __cdecl
operator<<<UE::PoseSearch::FArchivedPoseHistory_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_> *param_2)

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
  FArchivedPoseHistory *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x98);
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
      DestructItems<UE::PoseSearch::FArchivedPoseHistory,int>
                ((FArchivedPoseHistory *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x98,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1af29)) {
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
              UE::PoseSearch::operator<<
                        (param_1,(FArchivedPoseHistory *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x98));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x898,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FArchivedPoseHistory *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x98);
              DefaultConstructItems<UE::PoseSearch::FArchivedPoseHistory,int>(pFVar10,1);
              UE::PoseSearch::operator<<(param_1,pFVar10);
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

// operator<<<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_> @ 14a90ef90

FArchive * __cdecl
operator<<<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_> *param_2)

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
  FPoseSearchQueryTrajectorySample *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
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
                (0x40,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
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
              operator<<(param_1,(FPoseSearchQueryTrajectorySample *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1040,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FPoseSearchQueryTrajectorySample *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<FPoseSearchQueryTrajectorySample,int>(pFVar10,1);
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

// FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_> @ 14a90efa0

FArchive * __cdecl
operator<<<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FTraceMotionMatchingStateDatabaseEntry *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
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
      DestructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
                ((FTraceMotionMatchingStateDatabaseEntry *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x66667)) {
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
              UE::PoseSearch::operator<<
                        (param_1,(FTraceMotionMatchingStateDatabaseEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FTraceMotionMatchingStateDatabaseEntry *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
                        (pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
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

// FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_> @ 14a90efb0

FArchive * __cdecl
operator<<<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FTraceMotionMatchingStatePoseEntry *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
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
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
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
              UE::PoseSearch::operator<<
                        (param_1,(FTraceMotionMatchingStatePoseEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>::
          Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FTraceMotionMatchingStatePoseEntry *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,int>
                        (pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
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

// FVPTreeNode,TSizedDefaultAllocator<32>_> @ 14a90efc0

FArchive * __cdecl
operator<<<UE::PoseSearch::FVPTreeNode_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_> *param_2)

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
  FVPTreeNode *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
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
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
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
              UE::PoseSearch::operator<<
                        (param_1,(FVPTreeNode *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FVPTreeNode *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<UE::PoseSearch::FVPTreeNode,int>(pFVar10,1);
              UE::PoseSearch::operator<<(param_1,pFVar10);
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

// operator<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>_TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos> @ 14a90efd0

TTuple<UPoseSearchDatabase_const_*,_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FRoledAnimContextInfos>
* __thiscall
TKeyInitializer<UPoseSearchDatabase_const_*_const_&>::
operator<UPoseSearchDatabase_const_*,_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfos>_TTuple<UPoseSearchDatabase_const_*,_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfos>
          (TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *this,
          TTuple<UPoseSearchDatabase_const_*,_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FRoledAnimContextInfos>
          *__return_storage_ptr__)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  memset(&local_b8,0,0xb0);
  *(UPoseSearchDatabase **)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_b8;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uStack_b0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_a8;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_a0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_98;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uStack_90;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = local_88;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uStack_80;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = local_78;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = uStack_70;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = local_68;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = uStack_60;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x90 = uStack_30;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0xa0 = uStack_20;
  *(undefined8 *)&__return_storage_ptr__->field_0xa8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xb0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xb4 = 4;
  return __return_storage_ptr__;
}

// AddUniqueImpl<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo> @ 14a90f580

int __thiscall
TArray<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
::
AddUniqueImpl<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>
          (void *this,FRoledAnimContextInfo *param_1)

{
  undefined8 *puVar1;
  FName *pFVar2;
  FRoledAnimContextInfo *pFVar3;
  code *pcVar4;
  FAnimContextInfo *pFVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FRoledAnimContextInfo *pFVar9;
  longlong lVar10;
  
  iVar8 = Find(this,param_1);
  if (iVar8 == -1) {
    pFVar3 = *(FRoledAnimContextInfo **)((longlong)this + 0xa0);
    pFVar9 = this;
    if (pFVar3 != (FRoledAnimContextInfo *)0x0) {
      pFVar9 = pFVar3;
    }
    if (pFVar9 <= param_1) {
      pFVar9 = this;
      if (pFVar3 != (FRoledAnimContextInfo *)0x0) {
        pFVar9 = pFVar3;
      }
      if ((param_1 < pFVar9 + *(int *)((longlong)this + 0xac)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    iVar8 = *(int *)((longlong)this + 0xa8);
    if (iVar8 == *(int *)((longlong)this + 0xac)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>_>
                        (0x828,this,(int *)((longlong)this + 0xac));
    }
    *(int *)((longlong)this + 0xa8) = iVar8 + 1;
    pFVar5 = param_1->AnimContextInfo;
    if (*(void **)((longlong)this + 0xa0) != (void *)0x0) {
      this = *(void **)((longlong)this + 0xa0);
    }
    lVar10 = (longlong)iVar8;
    puVar1 = (undefined8 *)((longlong)this + lVar10 * 0x28);
    *puVar1 = param_1->Availability;
    puVar1[1] = pFVar5;
    FVar6 = (FName)param_1->PoseHistory;
    pFVar2 = (FName *)((longlong)this + lVar10 * 0x28 + 0x10);
    *pFVar2 = param_1->Role;
    pFVar2[1] = FVar6;
    *(UPoseSearchDatabase **)((longlong)this + lVar10 * 0x28 + 0x20) = param_1->Database;
  }
  return iVar8;
}

// CastChecked<UPoseSearchDatabase,UObject> @ 14a90f720

UPoseSearchDatabase * __cdecl CastChecked<UPoseSearchDatabase,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPoseSearchDatabase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPoseSearchDatabase *)param_1;
  }
  pFVar3 = GetTypeName<UPoseSearchDatabase>(&local_28);
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

// CompareItems<TObjectPtr<UObject_const_>,int> @ 14a90f7e0

bool __cdecl
CompareItems<TObjectPtr<UObject_const_>,int>
          (TObjectPtr<UObject_const_> *param_1,TObjectPtr<UObject_const_> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((TObjectPtr<UObject_const_>_u_0 *)(lVar1 + (longlong)param_2))->DebugPtr !=
          param_2->field0_0x0) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::PoseSearch::FVPTreeNode,int> @ 14a90f810

bool __cdecl
CompareItems<UE::PoseSearch::FVPTreeNode,int>(FVPTreeNode *param_1,FVPTreeNode *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = &param_2->LeftIndex;
    piVar1 = &param_1->LeftIndex;
    do {
      if (((((int)((FVPTreeNode *)(piVar1 + -2))->_padding_ !=
             *(int *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)piVar1)) ||
           ((float)piVar2[-1] != (float)piVar1[-1])) || (*piVar1 != *piVar2)) ||
         (piVar1[1] != piVar2[1])) {
        return false;
      }
      piVar2 = piVar2 + 4;
      piVar1 = piVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<UE::PoseSearch::FValidInteractionSearch,UE::PoseSearch::FValidInteractionSearch,int> @ 14a90f870

void __cdecl
ConstructItems<UE::PoseSearch::FValidInteractionSearch,UE::PoseSearch::FValidInteractionSearch,int>
          (void *param_1,FValidInteractionSearch *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  TArray<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0xc0);
    pTVar4 = &param_2->DisabledCollisions;
    do {
      UE::PoseSearch::FInteractionSearchContextBase::FInteractionSearchContextBase
                ((FInteractionSearchContextBase *)
                 ((longlong)param_1 + (-0xc0 - (longlong)param_2) + (longlong)pTVar4),
                 (FInteractionSearchContextBase *)(pTVar4 + -0xc));
      pFVar3->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      iVar2 = pTVar4->ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 4);
      }
      pTVar4 = pTVar4 + 0xd;
      pFVar3 = pFVar3 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int> @ 14a90fa40

void __cdecl
DefaultConstructItems<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x90);
    do {
      *(undefined8 *)(puVar1 + -0x24) = 0;
      *(undefined8 *)(puVar1 + -0x22) = 0;
      *(undefined8 *)(puVar1 + -0x20) = 0;
      *(undefined8 *)(puVar1 + -0x1e) = 0;
      *(undefined8 *)(puVar1 + -0x1c) = 0;
      *(undefined8 *)(puVar1 + -0x1a) = 0;
      *(undefined8 *)(puVar1 + -0x18) = 0;
      *(undefined8 *)(puVar1 + -0x16) = 0;
      *(undefined8 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -0xe) = 0;
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined8 *)(puVar1 + -10) = 0;
      *(undefined8 *)(puVar1 + -8) = 0;
      *(undefined8 *)(puVar1 + -6) = 0;
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 8;
      *(undefined8 *)(puVar1 + 4) = 0;
      puVar1[6] = 0;
      puVar1[7] = 0x20;
      puVar1[8] = 0xffffffff;
      puVar1[9] = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x36;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FAnimContextInfo,int> @ 14a90fb10

void __cdecl DefaultConstructItems<UE::PoseSearch::FAnimContextInfo,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((longlong)param_1 + 0x20);
    do {
      *(undefined8 *)(puVar2 + -8) = 0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)(puVar2 + -6) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(puVar2 + -4) = uVar1;
      *(double *)(puVar2 + -2) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined8 *)(puVar2 + 0x12) = 0;
      *puVar2 = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 8;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x1e;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FArchivedPoseHistory,int> @ 14a90fb60

void __cdecl
DefaultConstructItems<UE::PoseSearch::FArchivedPoseHistory,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[-2] = &___7FArchivedPoseHistory_PoseSearch_UE__6B_;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0x80;
      *(undefined4 *)(puVar1 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1 = puVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup,int> @ 14a90fbe0

void __cdecl
DefaultConstructItems<_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l2::FInteractionSearchContextGroup,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x188);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x10;
      *(undefined8 *)(puVar1 + 4) = 0;
      puVar1[6] = 0;
      puVar1[7] = 0x20;
      puVar1[8] = 0xffffffff;
      puVar1[9] = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1[0x14] = 0;
      *(undefined8 *)(puVar1 + 0x26) = 0;
      puVar1[0x28] = 0;
      puVar1[0x29] = 0x10;
      puVar1 = puVar1 + 0x8c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FMemStackPoseHistory,int> @ 14a90fc50

void __cdecl
DefaultConstructItems<UE::PoseSearch::FMemStackPoseHistory,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[-2] = &___7FMemStackPoseHistory_PoseSearch_UE__6B_;
      puVar1[1] = 0;
      puVar1[0x26] = 0;
      *(undefined4 *)(puVar1 + 0x27) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x13c) = 4;
      puVar1 = puVar1 + 0x2a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPoseSearchInteractionAnimContextAvailabilities,int> @ 14a90fca0

void __cdecl
DefaultConstructItems<FPoseSearchInteractionAnimContextAvailabilities,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPoseSearchInteractionAvailabilityEx,int> @ 14a90fcd0

void __cdecl
DefaultConstructItems<FPoseSearchInteractionAvailabilityEx,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0x43fa0000;
      *(undefined4 *)(lVar1 + 0x18) = 0x41200000;
      *(undefined1 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 100;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPoseSearchQueryTrajectorySample,int> @ 14a90fd20

void __cdecl DefaultConstructItems<FPoseSearchQueryTrajectorySample,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined4 *)((longlong)param_1 + 0x38);
    do {
      dVar2 = UE::Math::TQuat<double>::Identity.Y;
      *(double *)(puVar3 + -0xe) = UE::Math::TQuat<double>::Identity.X;
      *(double *)(puVar3 + -0xc) = dVar2;
      dVar2 = UE::Math::TQuat<double>::Identity.W;
      *(double *)(puVar3 + -10) = UE::Math::TQuat<double>::Identity.Z;
      *(double *)(puVar3 + -8) = dVar2;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)(puVar3 + -6) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(puVar3 + -4) = uVar1;
      *(double *)(puVar3 + -2) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *puVar3 = 0;
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 0x10;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPoseSearchRoledSkeleton,int> @ 14a90fd80

void __cdecl DefaultConstructItems<FPoseSearchRoledSkeleton,int>(void *param_1,int param_2)

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
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int> @ 14a90fdd0

void __cdecl
DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
          (void *param_1,int param_2)

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
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,int> @ 14a90fe10

void __cdecl
DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      puVar1[-2] = 0xffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0x7f7fffff;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FVPTreeNode,int> @ 14a90fe40

void __cdecl DefaultConstructItems<UE::PoseSearch::FVPTreeNode,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + -4) = 0;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FValidInteractionSearch,int> @ 14a90fe80

void __cdecl
DefaultConstructItems<UE::PoseSearch::FValidInteractionSearch,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x28);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 4;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 4;
      *(undefined8 *)(puVar1 + 0x1e) = 0;
      puVar1[0x20] = 0;
      *(undefined8 *)(puVar1 + 0x21) = 4;
      puVar1[0x23] = 0;
      *(undefined1 *)(puVar1 + 0x24) = 0;
      *(undefined8 *)(puVar1 + 0x26) = 0;
      *(undefined8 *)(puVar1 + 0x28) = 0;
      puVar1 = puVar1 + 0x34;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>,int> @ 14a90fef0

void __cdecl
DefaultConstructItems<TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int> @ 14a90ff40

void __cdecl
DestructItems<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int>
          (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
           *param_1,int param_2)

{
  TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  *this;
  
  if (param_2 != 0) {
    this = (TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)&param_1->field_0x8;
    do {
      *(undefined4 *)&this[1].field_0x18 = 0;
      TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                (this);
      this = (TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              *)&this[1].field_0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::PoseSearch::FArchivedPoseHistory,int> @ 14a90ff90

void __cdecl
DestructItems<UE::PoseSearch::FArchivedPoseHistory,int>(FArchivedPoseHistory *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)&(param_1->BoneToTransformMap).field_0x40;
    do {
      if ((void *)puVar4[6] != (void *)0x0) {
        FMemory::Free((void *)puVar4[6]);
      }
      DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>
                ((FPoseHistoryEntry *)puVar4[4],*(int *)(puVar4 + 5));
      if ((void *)puVar4[4] != (void *)0x0) {
        FMemory::Free((void *)puVar4[4]);
      }
      if ((void *)puVar4[2] != (void *)0x0) {
        FMemory::Free((void *)puVar4[2]);
      }
      *(undefined4 *)(puVar4 + 1) = 0;
      if ((void *)*puVar4 != (void *)0x0) {
        FMemory::Free((void *)*puVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar4 + -8));
      puVar4[-0xb] = &___7IPoseHistory_PoseSearch_UE__6B_;
      plVar3 = (longlong *)puVar4[-9];
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
      puVar4 = puVar4 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup,int> @ 14a910070

void __cdecl
DestructItems<_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l2::FInteractionSearchContextGroup,int>
          (FInteractionSearchContextGroup *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)&(param_1->AnimContextToTickPriority).field_0x1d8 = 0;
    TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::PoseSearch::FMemStackPoseHistory,int> @ 14a9100c0

void __cdecl
DestructItems<UE::PoseSearch::FMemStackPoseHistory,int>(FMemStackPoseHistory *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ForElementType<UE::PoseSearch::FPoseHistoryEntry> *pFVar4;
  ForElementType<UE::PoseSearch::FPoseHistoryEntry> *pFVar5;
  
  if (param_2 != 0) {
    pFVar5 = &(param_1->FutureEntries).AllocatorInstance.SecondaryData;
    do {
      pFVar4 = (ForElementType<UE::PoseSearch::FPoseHistoryEntry> *)pFVar5->Data;
      if ((ForElementType<UE::PoseSearch::FPoseHistoryEntry> *)pFVar5->Data ==
          (ForElementType<UE::PoseSearch::FPoseHistoryEntry> *)0x0) {
        pFVar4 = (ForElementType<UE::PoseSearch::FPoseHistoryEntry> *)(pFVar5 + -0x24);
      }
      DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>
                ((FPoseHistoryEntry *)pFVar4,*(int *)(pFVar5 + 1));
      pFVar5[-0x28] =
           (ForElementType<UE::PoseSearch::FPoseHistoryEntry>)&___7IPoseHistory_PoseSearch_UE__6B_;
      plVar3 = *(longlong **)(pFVar5 + -0x26);
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
      pFVar5 = pFVar5 + 0x2a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPoseSearchInteractionAnimContextAvailabilities,int> @ 14a910160

void __cdecl
DestructItems<FPoseSearchInteractionAnimContextAvailabilities,int>
          (FPoseSearchInteractionAnimContextAvailabilities *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FPoseSearchInteractionAvailabilityEx,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Availabilities;
    DestructItems<FPoseSearchInteractionAvailabilityEx,int>
              ((FPoseSearchInteractionAvailabilityEx *)(pTVar2->AllocatorInstance).Data,
               pTVar2->ArrayNum);
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FPoseSearchInteractionAnimContextAvailabilities *)(pTVar2 + 1);
  }
  return;
}

// DestructItems<FPoseSearchRoledSkeleton,int> @ 14a9101b0

void __cdecl
DestructItems<FPoseSearchRoledSkeleton,int>(FPoseSearchRoledSkeleton *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->BoneIndicesWithParents_DEPRECATED;
    do {
      pFVar1 = (((TArray<FName,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data
      ;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int> @ 14a910210

void __cdecl
DestructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
          (FTraceMotionMatchingStateDatabaseEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->QueryVector;
    pFVar1 = (((TArray<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>
                *)(pTVar2 + 1))->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FTraceMotionMatchingStateDatabaseEntry *)(pTVar2 + 2);
  }
  return;
}

// DestructItems<UE::PoseSearch::FValidInteractionSearch,int> @ 14a910260

void __cdecl
DestructItems<UE::PoseSearch::FValidInteractionSearch,int>
          (FValidInteractionSearch *param_1,int param_2)

{
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar1;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->SearchContext).PoseHistories.AllocatorInstance.SecondaryData;
    do {
      if (pFVar2[10] != (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
        FMemory::Free((void *)pFVar2[10]);
      }
      if (pFVar2[6] != (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
        FMemory::Free((void *)pFVar2[6]);
      }
      FVar1 = *pFVar2;
      if (*pFVar2 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
        FVar1 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)(pFVar2 + -8);
      }
      DestructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
                ((TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)FVar1,*(int *)(pFVar2 + 1));
      if (*pFVar2 != (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      if (pFVar2[-10] != (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
        FMemory::Free((void *)pFVar2[-10]);
      }
      pFVar2 = pFVar2 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>,int> @ 14a9102e0

void __cdecl
DestructItems<TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>,int>
          (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *param_1,
          int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Hash).SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindChannelRecursive<`UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_Trajectory>'::__l2::<lambda_1>_> @ 14a911e70

UPoseSearchFeatureChannel * __cdecl
UPoseSearchSchema::
FindChannelRecursive<_UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_Trajectory>_::__l2::<lambda_1>_>
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
      pUVar4 = Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister();
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
      pUVar6 = FindChannelRecursive<_UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_Trajectory>_::__l2::<lambda_1>_>
                         (&local_28,param_2);
      if (pUVar6 != (UPoseSearchFeatureChannel *)0x0) {
        return pUVar6;
      }
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// GenerateCombinationsRecursive<``UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_2>::operator()'::__l6::<lambda_2>_> @ 14a912880

void __cdecl
UE::PoseSearch::
GenerateCombinationsRecursive<__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_2>_>
          (int param_1,int param_2,TArrayView<int,int> *param_3,int param_4,<lambda_2> *param_5)

{
  int *piVar1;
  TArrayView<int_const_,int> local_48;
  <lambda_2> local_38;
  
  if (param_4 == param_3->ArrayNum) {
    local_48.DataPtr = param_3->DataPtr;
    local_48.ArrayNum = param_3->ArrayNum;
    ``UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_2>::operator()'::__l6
    ::<lambda_2>::operator()(param_5,&local_48);
  }
  else if (param_2 < param_1) {
    piVar1 = TArrayView<int,int>::operator[](param_3,param_4);
    *piVar1 = param_2;
    local_38.RoledAnimContextInfos = param_5->RoledAnimContextInfos;
    local_38.SearchContexts = param_5->SearchContexts;
    local_38.Database = param_5->Database;
    local_38.RoledSkeletons = param_5->RoledSkeletons;
    local_48.DataPtr = param_3->DataPtr;
    local_48.ArrayNum = param_3->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_38.PreviousValidInteractionSearches = param_5->PreviousValidInteractionSearches;
    GenerateCombinationsRecursive<__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_2>_>
              (param_1,param_2 + 1,(TArrayView<int,int> *)&local_48,param_4 + 1,&local_38);
    local_38.RoledAnimContextInfos = param_5->RoledAnimContextInfos;
    local_38.SearchContexts = param_5->SearchContexts;
    local_38.Database = param_5->Database;
    local_38.RoledSkeletons = param_5->RoledSkeletons;
    local_48.DataPtr = param_3->DataPtr;
    local_48.ArrayNum = param_3->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_38.PreviousValidInteractionSearches = param_5->PreviousValidInteractionSearches;
    GenerateCombinationsRecursive<__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_2>_>
              (param_1,param_2 + 1,(TArrayView<int,int> *)&local_48,param_4,&local_38);
  }
  return;
}

// GetTypeHash<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> @ 14a912a40

uint __cdecl
GetTypeHash<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
          (TArray<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned___int64> FVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<unsigned___int64>)0x0) {
    param_1 = (TArray<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *)
              FVar3;
  }
  FVar3 = (ForElementType<unsigned___int64>)((longlong)param_1 + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<unsigned___int64>)param_1 == FVar3) break;
    uVar4 = uVar4 ^ (uVar4 >> 2) + 0x9e3779b9 +
                    uVar4 * 0x40 + (int)*(undefined8 *)param_1 +
                    (int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0x17;
    param_1 = (TArray<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_1 + 8);
  }
  return uVar4;
}

// GetTypeName<UMultiAnimAsset> @ 14a912ae0

FString * __cdecl GetTypeName<UMultiAnimAsset>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMultiAnimAsset_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPoseSearchDatabase> @ 14a912b20

FString * __cdecl GetTypeName<UPoseSearchDatabase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TTuple<UObject_const_*,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UObject_const_*,int>,`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l39::<lambda_1>_>_> @ 14a912b60

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<UObject_const_*,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UObject_const_*,int>,_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l39::<lambda_1>_>_>
          (TTuple<UObject_const_*,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<UObject_const_*,int>,_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_39_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TTuple<UObject_const_*,int> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14a912c50:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)&pTVar12->field_0x8;
            iVar10 = 0;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar12;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar12 = uVar3;
            *(undefined8 *)&pTVar12->field_0x8 = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if (*(int *)&param_1[iVar6].field_0x8 <
                      *(int *)&param_1[(longlong)iVar11 + 2].field_0x8) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (*(int *)&param_1[iVar10].field_0x8 <= *(int *)&param_1[iVar6].field_0x8) break;
                uVar2 = *(undefined8 *)&param_1[iVar6].field_0x8;
                uVar3 = *(undefined8 *)(param_1 + iVar10);
                uVar4 = *(undefined8 *)&param_1[iVar10].field_0x8;
                *(undefined8 *)(param_1 + iVar10) = *(undefined8 *)(param_1 + iVar6);
                *(undefined8 *)&param_1[iVar10].field_0x8 = uVar2;
                *(undefined8 *)(param_1 + iVar6) = uVar3;
                *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)&param_1[iVar8].field_0x8 < *(int *)&param_1[(longlong)iVar7 + 2].field_0x8) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (*(int *)&param_1[iVar6].field_0x8 <= *(int *)&param_1[iVar8].field_0x8) goto LAB_14a912c50;
    uVar2 = *(undefined8 *)&param_1[iVar8].field_0x8;
    iVar7 = iVar8 * 2 + 1;
    uVar3 = *(undefined8 *)(param_1 + iVar6);
    uVar4 = *(undefined8 *)&param_1[iVar6].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar8);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar2;
    *(undefined8 *)(param_1 + iVar8) = uVar3;
    *(undefined8 *)&param_1[iVar8].field_0x8 = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<FPoseSearchInteractionAnimContextAvailabilities,int,FIdentityFunctor,TDereferenceWrapper<FPoseSearchInteractionAnimContextAvailabilities,`UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities'::__l2::<lambda_1>_>_> @ 14a912d30

void __cdecl
AlgoImpl::
HeapSortInternal<FPoseSearchInteractionAnimContextAvailabilities,int,FIdentityFunctor,TDereferenceWrapper<FPoseSearchInteractionAnimContextAvailabilities,_UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities_::__l2::<lambda_1>_>_>
          (FPoseSearchInteractionAnimContextAvailabilities *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<FPoseSearchInteractionAnimContextAvailabilities,_private:_bool___cdecl_UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities(void)_::_2_::<lambda_1>_>
          param_4)

{
  FPoseSearchInteractionAnimContextAvailabilities *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UObject_const_>_u_0 TVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14a912e40:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar16 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar13 = param_1 + lVar16;
          do {
            pFVar3 = (pFVar13->Availabilities).AllocatorInstance.Data;
            iVar10 = (param_1->Availabilities).ArrayNum;
            iVar15 = (param_1->Availabilities).ArrayMax;
            TVar4 = (param_1->AnimContext).field0_0x0;
            pFVar5 = (param_1->Availabilities).AllocatorInstance.Data;
            (param_1->AnimContext).field0_0x0 = (pFVar13->AnimContext).field0_0x0;
            (param_1->Availabilities).AllocatorInstance.Data = pFVar3;
            iVar14 = (pFVar13->Availabilities).ArrayMax;
            (param_1->Availabilities).ArrayNum = (pFVar13->Availabilities).ArrayNum;
            (param_1->Availabilities).ArrayMax = iVar14;
            (pFVar13->AnimContext).field0_0x0 = TVar4;
            (pFVar13->Availabilities).AllocatorInstance.Data = pFVar5;
            (pFVar13->Availabilities).ArrayNum = iVar10;
            (pFVar13->Availabilities).ArrayMax = iVar15;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].AnimContext.field0_0x0.DebugPtr <
                      param_1[iVar10].AnimContext.field0_0x0.DebugPtr) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar10;
                if ((pFVar1->AnimContext).field0_0x0.DebugPtr <=
                    param_1[iVar14].AnimContext.field0_0x0.DebugPtr) break;
                pFVar3 = (pFVar1->Availabilities).AllocatorInstance.Data;
                iVar12 = param_1[iVar14].Availabilities.ArrayNum;
                iVar6 = param_1[iVar14].Availabilities.ArrayMax;
                TVar4 = param_1[iVar14].AnimContext.field0_0x0;
                pFVar5 = param_1[iVar14].Availabilities.AllocatorInstance.Data;
                param_1[iVar14].AnimContext.field0_0x0 = (pFVar1->AnimContext).field0_0x0;
                param_1[iVar14].Availabilities.AllocatorInstance.Data = pFVar3;
                iVar15 = (pFVar1->Availabilities).ArrayMax;
                param_1[iVar14].Availabilities.ArrayNum = (pFVar1->Availabilities).ArrayNum;
                param_1[iVar14].Availabilities.ArrayMax = iVar15;
                (pFVar1->AnimContext).field0_0x0 = TVar4;
                (pFVar1->Availabilities).AllocatorInstance.Data = pFVar5;
                (pFVar1->Availabilities).ArrayNum = iVar12;
                (pFVar1->Availabilities).ArrayMax = iVar6;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar16 = lVar16 + -1;
            pFVar13 = pFVar13 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].AnimContext.field0_0x0.DebugPtr <
          param_1[iVar12].AnimContext.field0_0x0.DebugPtr) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar13 = param_1 + iVar12;
    if ((pFVar13->AnimContext).field0_0x0.DebugPtr <=
        param_1[iVar10].AnimContext.field0_0x0.DebugPtr) goto LAB_14a912e40;
    pFVar3 = (pFVar13->Availabilities).AllocatorInstance.Data;
    iVar11 = iVar12 * 2 + 1;
    iVar7 = param_1[iVar10].Availabilities.ArrayNum;
    iVar8 = param_1[iVar10].Availabilities.ArrayMax;
    TVar4 = param_1[iVar10].AnimContext.field0_0x0;
    pFVar5 = param_1[iVar10].Availabilities.AllocatorInstance.Data;
    param_1[iVar10].AnimContext.field0_0x0 = (pFVar13->AnimContext).field0_0x0;
    param_1[iVar10].Availabilities.AllocatorInstance.Data = pFVar3;
    iVar6 = (pFVar13->Availabilities).ArrayMax;
    param_1[iVar10].Availabilities.ArrayNum = (pFVar13->Availabilities).ArrayNum;
    param_1[iVar10].Availabilities.ArrayMax = iVar6;
    (pFVar13->AnimContext).field0_0x0 = TVar4;
    (pFVar13->Availabilities).AllocatorInstance.Data = pFVar5;
    (pFVar13->Availabilities).ArrayNum = iVar7;
    (pFVar13->Availabilities).ArrayMax = iVar8;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,int,FIdentityFunctor,TDereferenceWrapper<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,``UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>_>_> @ 14a912f50

void __cdecl
AlgoImpl::
HeapSortInternal<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,int,FIdentityFunctor,TDereferenceWrapper<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_1>_>_>
          (FRoledAnimContextInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FRoledAnimContextInfo,_public:___cdecl__private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::<lambda_2>::operator()(void)const_::_6_::<lambda_1>_>
          param_4)

{
  FRoledAnimContextInfo *pFVar1;
  FRoledAnimContextInfo *pFVar2;
  UPoseSearchDatabase *pUVar3;
  code *pcVar4;
  FAnimContextInfo *pFVar5;
  FPoseSearchInteractionAvailabilityEx *pFVar6;
  FAnimContextInfo *pFVar7;
  FName FVar8;
  IPoseHistory *pIVar9;
  IPoseHistory *pIVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FRoledAnimContextInfo *pFVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar17 = iVar13;
  iVar18 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_14a913097:
      if (iVar18 == 0) {
        iVar13 = param_2 + -1;
        lVar14 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar15 = param_1 + lVar14;
          do {
            pFVar5 = pFVar15->AnimContextInfo;
            pUVar3 = param_1->Database;
            pFVar6 = param_1->Availability;
            pFVar7 = param_1->AnimContextInfo;
            FVar8 = param_1->Role;
            pIVar9 = param_1->PoseHistory;
            param_1->Availability = pFVar15->Availability;
            param_1->AnimContextInfo = pFVar5;
            pIVar10 = pFVar15->PoseHistory;
            param_1->Role = pFVar15->Role;
            param_1->PoseHistory = pIVar10;
            param_1->Database = pFVar15->Database;
            pFVar15->Availability = pFVar6;
            pFVar15->AnimContextInfo = pFVar7;
            pFVar15->Role = FVar8;
            pFVar15->PoseHistory = pIVar9;
            pFVar15->Database = pUVar3;
            iVar17 = 0;
            if (1 < iVar13) {
              do {
                iVar18 = iVar17 * 2;
                iVar12 = iVar18 + 1;
                if (iVar18 + 2 < iVar13) {
                  if (((param_1[(longlong)iVar18 + 2].AnimContextInfo)->AnimContextAvailabilities->
                      AnimContext).field0_0x0.DebugPtr <
                      ((param_1[iVar12].AnimContextInfo)->AnimContextAvailabilities->AnimContext).
                      field0_0x0.DebugPtr) {
                    iVar12 = iVar18;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar1 = param_1 + iVar12;
                pFVar2 = param_1 + iVar17;
                if ((pFVar1->AnimContextInfo->AnimContextAvailabilities->AnimContext).field0_0x0.
                    DebugPtr <=
                    ((param_1[iVar17].AnimContextInfo)->AnimContextAvailabilities->AnimContext).
                    field0_0x0.DebugPtr) break;
                pFVar5 = pFVar1->AnimContextInfo;
                pFVar6 = pFVar2->Availability;
                pFVar7 = pFVar2->AnimContextInfo;
                FVar8 = pFVar2->Role;
                pIVar9 = pFVar2->PoseHistory;
                pUVar3 = pFVar2->Database;
                pFVar2->Availability = pFVar1->Availability;
                pFVar2->AnimContextInfo = pFVar5;
                pIVar10 = pFVar1->PoseHistory;
                pFVar2->Role = pFVar1->Role;
                pFVar2->PoseHistory = pIVar10;
                pFVar2->Database = pFVar1->Database;
                pFVar1->Availability = pFVar6;
                pFVar1->AnimContextInfo = pFVar7;
                pFVar1->Role = FVar8;
                pFVar1->PoseHistory = pIVar9;
                pFVar1->Database = pUVar3;
                iVar17 = iVar12;
              } while (iVar12 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar14 = lVar14 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar12 = iVar18 + -1;
      iVar13 = iVar17 + -2;
      iVar17 = iVar13;
      iVar18 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar16 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (((param_1[(longlong)iVar13 + 2].AnimContextInfo)->AnimContextAvailabilities->AnimContext).
          field0_0x0.DebugPtr <
          ((param_1[iVar16].AnimContextInfo)->AnimContextAvailabilities->AnimContext).field0_0x0.
          DebugPtr) {
        iVar16 = iVar13;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar15 = param_1 + iVar16;
    pFVar1 = param_1 + iVar12;
    if ((pFVar15->AnimContextInfo->AnimContextAvailabilities->AnimContext).field0_0x0.DebugPtr <=
        ((param_1[iVar12].AnimContextInfo)->AnimContextAvailabilities->AnimContext).field0_0x0.
        DebugPtr) goto LAB_14a913097;
    pFVar5 = pFVar15->AnimContextInfo;
    iVar13 = iVar16 * 2 + 1;
    pUVar3 = pFVar1->Database;
    pFVar6 = pFVar1->Availability;
    pFVar7 = pFVar1->AnimContextInfo;
    FVar8 = pFVar1->Role;
    pIVar9 = pFVar1->PoseHistory;
    pFVar1->Availability = pFVar15->Availability;
    pFVar1->AnimContextInfo = pFVar5;
    pIVar10 = pFVar15->PoseHistory;
    pFVar1->Role = pFVar15->Role;
    pFVar1->PoseHistory = pIVar10;
    pFVar1->Database = pFVar15->Database;
    pFVar15->Availability = pFVar6;
    pFVar15->AnimContextInfo = pFVar7;
    pFVar15->Role = FVar8;
    pFVar15->PoseHistory = pIVar9;
    pFVar15->Database = pUVar3;
    iVar12 = iVar16;
  } while( true );
}

// HeapSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,``UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>_>_> @ 14a9131e0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l12::<lambda_1>_>_>
          (FSearchResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::PoseSearch::FSearchResult,_public:___cdecl__public:___cdecl_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi(int)_::_2_::<lambda_1>::operator()(UE::PoseSearch::FSearchResult_const_&)const_::_12_::<lambda_1>_>
          param_4)

{
  FSearchResult *pFVar1;
  FSearchResult *pFVar2;
  float fVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  FPoseSearchCost FVar7;
  undefined3 uVar8;
  undefined4 uVar9;
  FPoseSearchCost FVar10;
  int iVar11;
  float fVar12;
  undefined3 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  FSearchResult *pFVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar20 = iVar16;
  iVar21 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14a91330d:
      if (iVar21 == 0) {
        iVar16 = param_2 + -1;
        lVar17 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar18 = param_1 + lVar17;
          do {
            uVar6 = *(undefined4 *)&pFVar18->field_0x8;
            FVar7.TotalCost = (pFVar18->PoseCost).TotalCost;
            bVar14 = param_1->bIsContinuingPoseSearch;
            uVar13 = *(undefined3 *)&param_1->field_0x19;
            iVar20 = param_1->EventPoseIdx;
            fVar12 = param_1->AssetTime;
            uVar5 = *(undefined8 *)param_1;
            uVar9 = *(undefined4 *)&param_1->field_0x8;
            FVar10.TotalCost = (param_1->PoseCost).TotalCost;
            *(undefined8 *)param_1 = *(undefined8 *)pFVar18;
            *(undefined4 *)&param_1->field_0x8 = uVar6;
            param_1->PoseCost = (FPoseSearchCost)FVar7.TotalCost;
            fVar3 = pFVar18->AssetTime;
            param_1->EventPoseIdx = pFVar18->EventPoseIdx;
            param_1->AssetTime = fVar3;
            uVar8 = *(undefined3 *)&pFVar18->field_0x19;
            param_1->bIsContinuingPoseSearch = pFVar18->bIsContinuingPoseSearch;
            *(undefined3 *)&param_1->field_0x19 = uVar8;
            *(undefined8 *)pFVar18 = uVar5;
            *(undefined4 *)&pFVar18->field_0x8 = uVar9;
            pFVar18->PoseCost = (FPoseSearchCost)FVar10.TotalCost;
            pFVar18->EventPoseIdx = iVar20;
            pFVar18->AssetTime = fVar12;
            pFVar18->bIsContinuingPoseSearch = bVar14;
            *(undefined3 *)&pFVar18->field_0x19 = uVar13;
            iVar20 = 0;
            if (1 < iVar16) {
              do {
                iVar21 = iVar20 * 2;
                iVar15 = iVar21 + 1;
                if (iVar21 + 2 < iVar16) {
                  fVar3 = param_1[iVar15].PoseCost.TotalCost;
                  if (param_1[(longlong)iVar21 + 2].PoseCost.TotalCost <= fVar3 &&
                      fVar3 != param_1[(longlong)iVar21 + 2].PoseCost.TotalCost) {
                    iVar15 = iVar21;
                  }
                  iVar15 = iVar15 + 1;
                }
                fVar3 = param_1[iVar15].PoseCost.TotalCost;
                if (fVar3 < param_1[iVar20].PoseCost.TotalCost ||
                    fVar3 == param_1[iVar20].PoseCost.TotalCost) break;
                pFVar1 = param_1 + iVar15;
                uVar6 = *(undefined4 *)&pFVar1->field_0x8;
                FVar7.TotalCost = (pFVar1->PoseCost).TotalCost;
                bVar14 = param_1[iVar20].bIsContinuingPoseSearch;
                uVar13 = *(undefined3 *)&param_1[iVar20].field_0x19;
                pFVar2 = param_1 + iVar20;
                uVar5 = *(undefined8 *)pFVar2;
                uVar9 = *(undefined4 *)&pFVar2->field_0x8;
                FVar10.TotalCost = (pFVar2->PoseCost).TotalCost;
                iVar21 = param_1[iVar20].EventPoseIdx;
                fVar12 = param_1[iVar20].AssetTime;
                pFVar2 = param_1 + iVar20;
                *(undefined8 *)pFVar2 = *(undefined8 *)pFVar1;
                *(undefined4 *)&pFVar2->field_0x8 = uVar6;
                pFVar2->PoseCost = (FPoseSearchCost)FVar7.TotalCost;
                fVar3 = param_1[iVar15].AssetTime;
                param_1[iVar20].EventPoseIdx = param_1[iVar15].EventPoseIdx;
                param_1[iVar20].AssetTime = fVar3;
                uVar8 = *(undefined3 *)&param_1[iVar15].field_0x19;
                param_1[iVar20].bIsContinuingPoseSearch = param_1[iVar15].bIsContinuingPoseSearch;
                *(undefined3 *)&param_1[iVar20].field_0x19 = uVar8;
                pFVar1 = param_1 + iVar15;
                *(undefined8 *)pFVar1 = uVar5;
                *(undefined4 *)&pFVar1->field_0x8 = uVar9;
                pFVar1->PoseCost = (FPoseSearchCost)FVar10.TotalCost;
                param_1[iVar15].EventPoseIdx = iVar21;
                param_1[iVar15].AssetTime = fVar12;
                param_1[iVar15].bIsContinuingPoseSearch = bVar14;
                *(undefined3 *)&param_1[iVar15].field_0x19 = uVar13;
                iVar20 = iVar15;
              } while (iVar15 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar17 = lVar17 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar15 = iVar21 + -1;
      iVar16 = iVar20 + -2;
      iVar20 = iVar16;
      iVar21 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar19 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      fVar3 = param_1[iVar19].PoseCost.TotalCost;
      if (param_1[(longlong)iVar16 + 2].PoseCost.TotalCost <= fVar3 &&
          fVar3 != param_1[(longlong)iVar16 + 2].PoseCost.TotalCost) {
        iVar19 = iVar16;
      }
      iVar19 = iVar19 + 1;
    }
    fVar3 = param_1[iVar19].PoseCost.TotalCost;
    if (fVar3 < param_1[iVar15].PoseCost.TotalCost || fVar3 == param_1[iVar15].PoseCost.TotalCost)
    goto LAB_14a91330d;
    pFVar18 = param_1 + iVar19;
    uVar6 = *(undefined4 *)&pFVar18->field_0x8;
    FVar7.TotalCost = (pFVar18->PoseCost).TotalCost;
    bVar14 = param_1[iVar15].bIsContinuingPoseSearch;
    uVar13 = *(undefined3 *)&param_1[iVar15].field_0x19;
    pFVar1 = param_1 + iVar15;
    uVar5 = *(undefined8 *)pFVar1;
    uVar9 = *(undefined4 *)&pFVar1->field_0x8;
    FVar10.TotalCost = (pFVar1->PoseCost).TotalCost;
    iVar11 = param_1[iVar15].EventPoseIdx;
    fVar12 = param_1[iVar15].AssetTime;
    pFVar1 = param_1 + iVar15;
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar18;
    *(undefined4 *)&pFVar1->field_0x8 = uVar6;
    pFVar1->PoseCost = (FPoseSearchCost)FVar7.TotalCost;
    fVar3 = param_1[iVar19].AssetTime;
    param_1[iVar15].EventPoseIdx = param_1[iVar19].EventPoseIdx;
    param_1[iVar15].AssetTime = fVar3;
    uVar8 = *(undefined3 *)&param_1[iVar19].field_0x19;
    param_1[iVar15].bIsContinuingPoseSearch = param_1[iVar19].bIsContinuingPoseSearch;
    *(undefined3 *)&param_1[iVar15].field_0x19 = uVar8;
    iVar16 = iVar19 * 2 + 1;
    pFVar18 = param_1 + iVar19;
    *(undefined8 *)pFVar18 = uVar5;
    *(undefined4 *)&pFVar18->field_0x8 = uVar9;
    pFVar18->PoseCost = (FPoseSearchCost)FVar10.TotalCost;
    param_1[iVar19].EventPoseIdx = iVar11;
    param_1[iVar19].AssetTime = fVar12;
    param_1[iVar19].bIsContinuingPoseSearch = bVar14;
    *(undefined3 *)&param_1[iVar19].field_0x19 = uVar13;
    iVar15 = iVar19;
  } while( true );
}

// HeapSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,``UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>_>_> @ 14a913450

void __cdecl
AlgoImpl::
HeapSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
          (FSearchResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::PoseSearch::FSearchResult,_public:___cdecl__public:___cdecl_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi(int)_::_2_::<lambda_1>::operator()(UE::PoseSearch::FSearchResult_const_&)const_::_17_::<lambda_2>_>
          param_4)

{
  FSearchResult *pFVar1;
  FSearchResult *pFVar2;
  float fVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  FPoseSearchCost FVar7;
  undefined3 uVar8;
  undefined4 uVar9;
  FPoseSearchCost FVar10;
  int iVar11;
  float fVar12;
  undefined3 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  FSearchResult *pFVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar20 = iVar16;
  iVar21 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14a91357d:
      if (iVar21 == 0) {
        iVar16 = param_2 + -1;
        lVar17 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar18 = param_1 + lVar17;
          do {
            uVar6 = *(undefined4 *)&pFVar18->field_0x8;
            FVar7.TotalCost = (pFVar18->PoseCost).TotalCost;
            bVar14 = param_1->bIsContinuingPoseSearch;
            uVar13 = *(undefined3 *)&param_1->field_0x19;
            iVar20 = param_1->EventPoseIdx;
            fVar12 = param_1->AssetTime;
            uVar5 = *(undefined8 *)param_1;
            uVar9 = *(undefined4 *)&param_1->field_0x8;
            FVar10.TotalCost = (param_1->PoseCost).TotalCost;
            *(undefined8 *)param_1 = *(undefined8 *)pFVar18;
            *(undefined4 *)&param_1->field_0x8 = uVar6;
            param_1->PoseCost = (FPoseSearchCost)FVar7.TotalCost;
            fVar3 = pFVar18->AssetTime;
            param_1->EventPoseIdx = pFVar18->EventPoseIdx;
            param_1->AssetTime = fVar3;
            uVar8 = *(undefined3 *)&pFVar18->field_0x19;
            param_1->bIsContinuingPoseSearch = pFVar18->bIsContinuingPoseSearch;
            *(undefined3 *)&param_1->field_0x19 = uVar8;
            *(undefined8 *)pFVar18 = uVar5;
            *(undefined4 *)&pFVar18->field_0x8 = uVar9;
            pFVar18->PoseCost = (FPoseSearchCost)FVar10.TotalCost;
            pFVar18->EventPoseIdx = iVar20;
            pFVar18->AssetTime = fVar12;
            pFVar18->bIsContinuingPoseSearch = bVar14;
            *(undefined3 *)&pFVar18->field_0x19 = uVar13;
            iVar20 = 0;
            if (1 < iVar16) {
              do {
                iVar21 = iVar20 * 2;
                iVar15 = iVar21 + 1;
                if (iVar21 + 2 < iVar16) {
                  fVar3 = param_1[iVar15].PoseCost.TotalCost;
                  if (param_1[(longlong)iVar21 + 2].PoseCost.TotalCost <= fVar3 &&
                      fVar3 != param_1[(longlong)iVar21 + 2].PoseCost.TotalCost) {
                    iVar15 = iVar21;
                  }
                  iVar15 = iVar15 + 1;
                }
                fVar3 = param_1[iVar15].PoseCost.TotalCost;
                if (fVar3 < param_1[iVar20].PoseCost.TotalCost ||
                    fVar3 == param_1[iVar20].PoseCost.TotalCost) break;
                pFVar1 = param_1 + iVar15;
                uVar6 = *(undefined4 *)&pFVar1->field_0x8;
                FVar7.TotalCost = (pFVar1->PoseCost).TotalCost;
                bVar14 = param_1[iVar20].bIsContinuingPoseSearch;
                uVar13 = *(undefined3 *)&param_1[iVar20].field_0x19;
                pFVar2 = param_1 + iVar20;
                uVar5 = *(undefined8 *)pFVar2;
                uVar9 = *(undefined4 *)&pFVar2->field_0x8;
                FVar10.TotalCost = (pFVar2->PoseCost).TotalCost;
                iVar21 = param_1[iVar20].EventPoseIdx;
                fVar12 = param_1[iVar20].AssetTime;
                pFVar2 = param_1 + iVar20;
                *(undefined8 *)pFVar2 = *(undefined8 *)pFVar1;
                *(undefined4 *)&pFVar2->field_0x8 = uVar6;
                pFVar2->PoseCost = (FPoseSearchCost)FVar7.TotalCost;
                fVar3 = param_1[iVar15].AssetTime;
                param_1[iVar20].EventPoseIdx = param_1[iVar15].EventPoseIdx;
                param_1[iVar20].AssetTime = fVar3;
                uVar8 = *(undefined3 *)&param_1[iVar15].field_0x19;
                param_1[iVar20].bIsContinuingPoseSearch = param_1[iVar15].bIsContinuingPoseSearch;
                *(undefined3 *)&param_1[iVar20].field_0x19 = uVar8;
                pFVar1 = param_1 + iVar15;
                *(undefined8 *)pFVar1 = uVar5;
                *(undefined4 *)&pFVar1->field_0x8 = uVar9;
                pFVar1->PoseCost = (FPoseSearchCost)FVar10.TotalCost;
                param_1[iVar15].EventPoseIdx = iVar21;
                param_1[iVar15].AssetTime = fVar12;
                param_1[iVar15].bIsContinuingPoseSearch = bVar14;
                *(undefined3 *)&param_1[iVar15].field_0x19 = uVar13;
                iVar20 = iVar15;
              } while (iVar15 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar17 = lVar17 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar15 = iVar21 + -1;
      iVar16 = iVar20 + -2;
      iVar20 = iVar16;
      iVar21 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar19 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      fVar3 = param_1[iVar19].PoseCost.TotalCost;
      if (param_1[(longlong)iVar16 + 2].PoseCost.TotalCost <= fVar3 &&
          fVar3 != param_1[(longlong)iVar16 + 2].PoseCost.TotalCost) {
        iVar19 = iVar16;
      }
      iVar19 = iVar19 + 1;
    }
    fVar3 = param_1[iVar19].PoseCost.TotalCost;
    if (fVar3 < param_1[iVar15].PoseCost.TotalCost || fVar3 == param_1[iVar15].PoseCost.TotalCost)
    goto LAB_14a91357d;
    pFVar18 = param_1 + iVar19;
    uVar6 = *(undefined4 *)&pFVar18->field_0x8;
    FVar7.TotalCost = (pFVar18->PoseCost).TotalCost;
    bVar14 = param_1[iVar15].bIsContinuingPoseSearch;
    uVar13 = *(undefined3 *)&param_1[iVar15].field_0x19;
    pFVar1 = param_1 + iVar15;
    uVar5 = *(undefined8 *)pFVar1;
    uVar9 = *(undefined4 *)&pFVar1->field_0x8;
    FVar10.TotalCost = (pFVar1->PoseCost).TotalCost;
    iVar11 = param_1[iVar15].EventPoseIdx;
    fVar12 = param_1[iVar15].AssetTime;
    pFVar1 = param_1 + iVar15;
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar18;
    *(undefined4 *)&pFVar1->field_0x8 = uVar6;
    pFVar1->PoseCost = (FPoseSearchCost)FVar7.TotalCost;
    fVar3 = param_1[iVar19].AssetTime;
    param_1[iVar15].EventPoseIdx = param_1[iVar19].EventPoseIdx;
    param_1[iVar15].AssetTime = fVar3;
    uVar8 = *(undefined3 *)&param_1[iVar19].field_0x19;
    param_1[iVar15].bIsContinuingPoseSearch = param_1[iVar19].bIsContinuingPoseSearch;
    *(undefined3 *)&param_1[iVar15].field_0x19 = uVar8;
    iVar16 = iVar19 * 2 + 1;
    pFVar18 = param_1 + iVar19;
    *(undefined8 *)pFVar18 = uVar5;
    *(undefined4 *)&pFVar18->field_0x8 = uVar9;
    pFVar18->PoseCost = (FPoseSearchCost)FVar10.TotalCost;
    param_1[iVar19].EventPoseIdx = iVar11;
    param_1[iVar19].AssetTime = fVar12;
    param_1[iVar19].bIsContinuingPoseSearch = bVar14;
    *(undefined3 *)&param_1[iVar19].field_0x19 = uVar13;
    iVar15 = iVar19;
  } while( true );
}

// InternalConstructor<UPoseSearchInteractionLibrary> @ 14a9136c0

void __cdecl InternalConstructor<UPoseSearchInteractionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPoseSearchInteractionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPoseSearchInteractionSubsystem> @ 14a9136f0

void __cdecl InternalConstructor<UPoseSearchInteractionSubsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this);
    this->_padding_ = (longlong)&UPoseSearchInteractionSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ =
         (longlong)&UPoseSearchInteractionSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPoseSearchLibrary> @ 14a913750

void __cdecl InternalConstructor<UPoseSearchLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPoseSearchLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPoseSearchNormalizationSet> @ 14a913780

void __cdecl InternalConstructor<UPoseSearchNormalizationSet>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UPoseSearchNormalizationSet__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPoseSearchSchema> @ 14a9137c0

void __cdecl InternalConstructor<UPoseSearchSchema>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x1e;
    this->_padding_ = (longlong)&___7UPoseSearchSchema__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UPoseSearchTrajectoryLibrary> @ 14a913820

void __cdecl InternalConstructor<UPoseSearchTrajectoryLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPoseSearchTrajectoryLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPoseSearchInteractionLibrary> @ 14a913850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchInteractionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchInteractionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPoseSearchInteractionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchInteractionSubsystem> @ 14a913900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchInteractionSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchInteractionSubsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&UPoseSearchInteractionSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ =
         (longlong)&UPoseSearchInteractionSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchLibrary> @ 14a9139e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPoseSearchLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPoseSearchLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchNormalizationSet> @ 14a913a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchNormalizationSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchNormalizationSet::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UPoseSearchNormalizationSet__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchSchema> @ 14a913b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPoseSearchSchema>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchSchema::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x1e;
    this->_padding_ = (longlong)&___7UPoseSearchSchema__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchTrajectoryLibrary> @ 14a913c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchTrajectoryLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchTrajectoryLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPoseSearchTrajectoryLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TTuple<UObject_const_*,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UObject_const_*,int>,`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l39::<lambda_1>_>_> @ 14a913cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<UObject_const_*,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UObject_const_*,int>,_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l39::<lambda_1>_>_>
          (TTuple<UObject_const_*,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<UObject_const_*,int>,_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_39_::<lambda_1>_>
          param_4)

{
  TTuple<UObject_const_*,int> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<UObject_const_*,int> *pTVar6;
  TTuple<UObject_const_*,int> **ppTVar7;
  TTuple<UObject_const_*,int> *pTVar8;
  TTuple<UObject_const_*,int> *pTVar9;
  TTuple<UObject_const_*,int> *pTVar10;
  TTuple<UObject_const_*,int> *pTVar11;
  TTuple<UObject_const_*,int> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<UObject_const_*,int> *local_338;
  TTuple<UObject_const_*,int> *local_328;
  TTuple<UObject_const_*,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar7 = &local_328;
    do {
      pTVar10 = ppTVar7[1];
      pTVar12 = *ppTVar7;
      pTVar1 = ppTVar7[2];
      iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar11 = pTVar12;
      if ((int)local_338 != 0) {
LAB_14a913d80:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar11->field_0x8;
          pTVar8 = pTVar10 + 1;
          uVar3 = *(undefined8 *)(pTVar11 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar11[iVar5 / 2].field_0x8;
          *(undefined8 *)(pTVar11 + iVar5 / 2) = *(undefined8 *)pTVar11;
          *(undefined8 *)&pTVar11[iVar5 / 2].field_0x8 = uVar2;
          *(undefined8 *)pTVar11 = uVar3;
          *(undefined8 *)&pTVar11->field_0x8 = uVar4;
          pTVar12 = pTVar11;
LAB_14a913db0:
          pTVar6 = pTVar12;
          pTVar12 = pTVar6 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x00014a913db9;
          goto LAB_14a913dc2;
        }
        for (; pTVar12 = pTVar11, pTVar1 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar10) {
            if (*(int *)&pTVar1->field_0x8 < *(int *)&pTVar12->field_0x8) {
              pTVar12 = pTVar1;
            }
          }
          uVar2 = *(undefined8 *)pTVar12;
          uVar3 = *(undefined8 *)&pTVar12->field_0x8;
          uVar4 = *(undefined8 *)&pTVar10->field_0x8;
          *(undefined8 *)pTVar12 = *(undefined8 *)pTVar10;
          *(undefined8 *)&pTVar12->field_0x8 = uVar4;
          *(undefined8 *)pTVar10 = uVar2;
          *(undefined8 *)&pTVar10->field_0x8 = uVar3;
        }
        goto LAB_14a913e83;
      }
LAB_14a913e72:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<UObject_const_*,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UObject_const_*,int>,_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l39::<lambda_1>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_14a913e83:
      ppTVar7 = ppTVar7 + -3;
    } while (&local_328 <= ppTVar7);
  }
  return;
code_r0x00014a913db9:
  if (*(int *)&pTVar11->field_0x8 <= *(int *)&pTVar6[1].field_0x8) goto LAB_14a913db0;
LAB_14a913dc2:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar11) break;
  } while (*(int *)&pTVar9[-1].field_0x8 <= *(int *)&pTVar11->field_0x8);
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar12 <= pTVar8) {
    uVar3 = *(undefined8 *)pTVar12;
    uVar4 = *(undefined8 *)&pTVar6[1].field_0x8;
    *(undefined8 *)pTVar12 = *(undefined8 *)pTVar8;
    *(undefined8 *)&pTVar6[1].field_0x8 = uVar2;
    *(undefined8 *)pTVar8 = uVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_14a913db0;
  }
  uVar3 = *(undefined8 *)pTVar11;
  uVar4 = *(undefined8 *)&pTVar11->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(undefined8 *)pTVar11 = *(undefined8 *)pTVar8;
  *(undefined8 *)&pTVar11->field_0x8 = uVar2;
  *(undefined8 *)pTVar8 = uVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar7 = pTVar12;
      ppTVar7[1] = pTVar10;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar8 <= pTVar11 + 1) goto LAB_14a913e83;
    pTVar10 = pTVar9 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar8) {
      *ppTVar7 = pTVar11;
      ppTVar7[1] = pTVar9 + -2;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar10 <= pTVar12) goto LAB_14a913e83;
  }
  iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if ((int)local_338 == 0) goto LAB_14a913e72;
  goto LAB_14a913d80;
}

// IntroSortInternal<FPoseSearchInteractionAnimContextAvailabilities,int,FIdentityFunctor,TDereferenceWrapper<FPoseSearchInteractionAnimContextAvailabilities,`UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities'::__l2::<lambda_1>_>_> @ 14a913f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FPoseSearchInteractionAnimContextAvailabilities,int,FIdentityFunctor,TDereferenceWrapper<FPoseSearchInteractionAnimContextAvailabilities,_UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities_::__l2::<lambda_1>_>_>
          (FPoseSearchInteractionAnimContextAvailabilities *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<FPoseSearchInteractionAnimContextAvailabilities,_private:_bool___cdecl_UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities(void)_::_2_::<lambda_1>_>
          param_4)

{
  FPoseSearchInteractionAnimContextAvailabilities *pFVar1;
  FScriptContainerElement *pFVar2;
  TObjectPtr<UObject_const_>_u_0 TVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UObject_const_>_u_0 TVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar11;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar12;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar13;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar14;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar15;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar16;
  FPoseSearchInteractionAnimContextAvailabilities **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FPoseSearchInteractionAnimContextAvailabilities *local_348;
  FPoseSearchInteractionAnimContextAvailabilities *local_338;
  FPoseSearchInteractionAnimContextAvailabilities *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar11 = ppFVar17[1];
      pFVar16 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar1;
      iVar10 = (int)(((longlong)pFVar11 - (longlong)pFVar16) / 0x18) + 1;
      pFVar15 = pFVar16;
      if ((int)local_348 != 0) {
LAB_14a913fe0:
        if (8 < iVar10) {
          pFVar2 = (pFVar15->Availabilities).AllocatorInstance.Data;
          pFVar13 = pFVar11 + 1;
          iVar10 = iVar10 / 2;
          TVar3 = pFVar15[iVar10].AnimContext.field0_0x0;
          pFVar4 = pFVar15[iVar10].Availabilities.AllocatorInstance.Data;
          iVar7 = pFVar15[iVar10].Availabilities.ArrayNum;
          iVar8 = pFVar15[iVar10].Availabilities.ArrayMax;
          pFVar15[iVar10].AnimContext.field0_0x0 = (pFVar15->AnimContext).field0_0x0;
          pFVar15[iVar10].Availabilities.AllocatorInstance.Data = pFVar2;
          iVar6 = (pFVar15->Availabilities).ArrayMax;
          pFVar15[iVar10].Availabilities.ArrayNum = (pFVar15->Availabilities).ArrayNum;
          pFVar15[iVar10].Availabilities.ArrayMax = iVar6;
          (pFVar15->AnimContext).field0_0x0 = TVar3;
          (pFVar15->Availabilities).AllocatorInstance.Data = pFVar4;
          (pFVar15->Availabilities).ArrayNum = iVar7;
          (pFVar15->Availabilities).ArrayMax = iVar8;
          pFVar16 = pFVar15;
LAB_14a914030:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar11) goto code_r0x00014a914039;
          goto LAB_14a914041;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar11; pFVar11 = pFVar11 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar11) {
            if ((pFVar16->AnimContext).field0_0x0.DebugPtr <
                (pFVar1->AnimContext).field0_0x0.DebugPtr) {
              pFVar16 = pFVar1;
            }
          }
          TVar3 = (pFVar16->AnimContext).field0_0x0;
          pFVar2 = (pFVar16->Availabilities).AllocatorInstance.Data;
          iVar6 = (pFVar16->Availabilities).ArrayNum;
          iVar7 = (pFVar16->Availabilities).ArrayMax;
          pFVar4 = (pFVar11->Availabilities).AllocatorInstance.Data;
          (pFVar16->AnimContext).field0_0x0 = (pFVar11->AnimContext).field0_0x0;
          (pFVar16->Availabilities).AllocatorInstance.Data = pFVar4;
          iVar10 = (pFVar11->Availabilities).ArrayMax;
          (pFVar16->Availabilities).ArrayNum = (pFVar11->Availabilities).ArrayNum;
          (pFVar16->Availabilities).ArrayMax = iVar10;
          (pFVar11->AnimContext).field0_0x0 = TVar3;
          (pFVar11->Availabilities).AllocatorInstance.Data = pFVar2;
          (pFVar11->Availabilities).ArrayNum = iVar6;
          (pFVar11->Availabilities).ArrayMax = iVar7;
        }
        goto LAB_14a914161;
      }
LAB_14a914152:
      local_348 = pFVar1;
      HeapSortInternal<FPoseSearchInteractionAnimContextAvailabilities,int,FIdentityFunctor,TDereferenceWrapper<FPoseSearchInteractionAnimContextAvailabilities,_UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities_::__l2::<lambda_1>_>_>
                (pFVar16,iVar10,param_3,param_4);
LAB_14a914161:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014a914039:
  if ((pFVar16->AnimContext).field0_0x0.DebugPtr <= (pFVar15->AnimContext).field0_0x0.DebugPtr)
  goto LAB_14a914030;
LAB_14a914041:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar15) break;
  } while ((pFVar15->AnimContext).field0_0x0.DebugPtr <= (pFVar13->AnimContext).field0_0x0.DebugPtr)
  ;
  TVar3 = (pFVar13->AnimContext).field0_0x0;
  pFVar2 = pFVar14[-1].Availabilities.AllocatorInstance.Data;
  if (pFVar16 <= pFVar13) {
    TVar5 = (pFVar16->AnimContext).field0_0x0;
    pFVar4 = pFVar12[1].Availabilities.AllocatorInstance.Data;
    iVar6 = pFVar12[1].Availabilities.ArrayNum;
    iVar7 = pFVar12[1].Availabilities.ArrayMax;
    (pFVar16->AnimContext).field0_0x0 = TVar3;
    pFVar12[1].Availabilities.AllocatorInstance.Data = pFVar2;
    iVar10 = pFVar14[-1].Availabilities.ArrayMax;
    pFVar12[1].Availabilities.ArrayNum = pFVar14[-1].Availabilities.ArrayNum;
    pFVar12[1].Availabilities.ArrayMax = iVar10;
    (pFVar13->AnimContext).field0_0x0 = TVar5;
    pFVar14[-1].Availabilities.AllocatorInstance.Data = pFVar4;
    pFVar14[-1].Availabilities.ArrayNum = iVar6;
    pFVar14[-1].Availabilities.ArrayMax = iVar7;
    goto LAB_14a914030;
  }
  TVar5 = (pFVar15->AnimContext).field0_0x0;
  pFVar4 = (pFVar15->Availabilities).AllocatorInstance.Data;
  iVar6 = (pFVar15->Availabilities).ArrayNum;
  iVar7 = (pFVar15->Availabilities).ArrayMax;
  lVar9 = (longlong)pFVar13 + (-0x18 - (longlong)pFVar15);
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  (pFVar15->AnimContext).field0_0x0 = TVar3;
  (pFVar15->Availabilities).AllocatorInstance.Data = pFVar2;
  iVar10 = pFVar14[-1].Availabilities.ArrayMax;
  (pFVar15->Availabilities).ArrayNum = pFVar14[-1].Availabilities.ArrayNum;
  (pFVar15->Availabilities).ArrayMax = iVar10;
  (pFVar13->AnimContext).field0_0x0 = TVar5;
  pFVar14[-1].Availabilities.AllocatorInstance.Data = pFVar4;
  pFVar14[-1].Availabilities.ArrayNum = iVar6;
  pFVar14[-1].Availabilities.ArrayMax = iVar7;
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)pFVar11 - (longlong)pFVar16) / 0x18) {
    if (pFVar16 < pFVar11) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar11;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar15 + 1) goto LAB_14a914161;
    pFVar11 = pFVar14 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar13) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar14 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar16) goto LAB_14a914161;
  }
  iVar10 = (int)(((longlong)pFVar11 - (longlong)pFVar16) / 0x18) + 1;
  pFVar15 = pFVar16;
  if ((int)local_348 == 0) goto LAB_14a914152;
  goto LAB_14a913fe0;
}

// IntroSortInternal<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,int,FIdentityFunctor,TDereferenceWrapper<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,``UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>_>_> @ 14a914220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,int,FIdentityFunctor,TDereferenceWrapper<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_1>_>_>
          (FRoledAnimContextInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FRoledAnimContextInfo,_public:___cdecl__private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::<lambda_2>::operator()(void)const_::_6_::<lambda_1>_>
          param_4)

{
  FRoledAnimContextInfo *pFVar1;
  UPoseSearchDatabase *pUVar2;
  FAnimContextInfo *pFVar3;
  FPoseSearchInteractionAvailabilityEx *pFVar4;
  FAnimContextInfo *pFVar5;
  FName FVar6;
  IPoseHistory *pIVar7;
  IPoseHistory *pIVar8;
  int iVar9;
  FRoledAnimContextInfo *pFVar10;
  FRoledAnimContextInfo *pFVar11;
  FRoledAnimContextInfo *pFVar12;
  FRoledAnimContextInfo *pFVar13;
  FRoledAnimContextInfo *pFVar14;
  FRoledAnimContextInfo *pFVar15;
  FRoledAnimContextInfo **ppFVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  FRoledAnimContextInfo *local_348;
  FRoledAnimContextInfo *local_338;
  FRoledAnimContextInfo *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar17;
    memset(local_320,0,0x2e8);
    ppFVar16 = &local_338;
    do {
      pFVar10 = ppFVar16[1];
      pFVar15 = *ppFVar16;
      pFVar1 = ppFVar16[2];
      local_348._0_4_ = (int)pFVar1;
      iVar9 = (int)(((longlong)pFVar10 - (longlong)pFVar15) / 0x28) + 1;
      pFVar14 = pFVar15;
      if ((int)local_348 != 0) {
LAB_14a9142f0:
        if (8 < iVar9) {
          pFVar3 = pFVar14->AnimContextInfo;
          pFVar12 = pFVar10 + 1;
          iVar9 = iVar9 / 2;
          pFVar4 = pFVar14[iVar9].Availability;
          pFVar5 = pFVar14[iVar9].AnimContextInfo;
          FVar6 = pFVar14[iVar9].Role;
          pIVar7 = *(IPoseHistory **)(&pFVar14[iVar9].Role + 1);
          pUVar2 = pFVar14[iVar9].Database;
          pFVar14[iVar9].Availability = pFVar14->Availability;
          pFVar14[iVar9].AnimContextInfo = pFVar3;
          pIVar8 = pFVar14->PoseHistory;
          pFVar14[iVar9].Role = pFVar14->Role;
          (&pFVar14[iVar9].Role)[1] = (FName)pIVar8;
          pFVar14[iVar9].Database = pFVar14->Database;
          pFVar14->Availability = pFVar4;
          pFVar14->AnimContextInfo = pFVar5;
          pFVar14->Role = FVar6;
          pFVar14->PoseHistory = pIVar7;
          pFVar14->Database = pUVar2;
          pFVar15 = pFVar14;
LAB_14a914350:
          pFVar11 = pFVar15;
          pFVar15 = pFVar11 + 1;
          if (pFVar15 <= pFVar10) goto code_r0x00014a914359;
          goto LAB_14a914370;
        }
        for (; pFVar15 = pFVar14, pFVar1 = pFVar14, pFVar14 < pFVar10; pFVar10 = pFVar10 + -1) {
          while (pFVar12 = pFVar15, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar10) {
            pFVar15 = pFVar1;
            if ((pFVar1->AnimContextInfo->AnimContextAvailabilities->AnimContext).field0_0x0.
                DebugPtr <=
                (pFVar12->AnimContextInfo->AnimContextAvailabilities->AnimContext).field0_0x0.
                DebugPtr) {
              pFVar15 = pFVar12;
            }
          }
          pFVar4 = pFVar12->Availability;
          pFVar3 = pFVar12->AnimContextInfo;
          pUVar2 = pFVar12->Database;
          FVar6 = pFVar12->Role;
          pIVar7 = pFVar12->PoseHistory;
          pFVar5 = pFVar10->AnimContextInfo;
          pFVar12->Availability = pFVar10->Availability;
          pFVar12->AnimContextInfo = pFVar5;
          pIVar8 = pFVar10->PoseHistory;
          pFVar12->Role = pFVar10->Role;
          pFVar12->PoseHistory = pIVar8;
          pFVar12->Database = pFVar10->Database;
          pFVar10->Availability = pFVar4;
          pFVar10->AnimContextInfo = pFVar3;
          pFVar10->Role = FVar6;
          pFVar10->PoseHistory = pIVar7;
          pFVar10->Database = pUVar2;
        }
        goto LAB_14a9144c9;
      }
LAB_14a9144ba:
      local_348 = pFVar1;
      HeapSortInternal<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,int,FIdentityFunctor,TDereferenceWrapper<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_1>_>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_14a9144c9:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_338 <= ppFVar16);
  }
  return;
code_r0x00014a914359:
  if (((pFVar11[1].AnimContextInfo)->AnimContextAvailabilities->AnimContext).field0_0x0.DebugPtr <=
      (pFVar14->AnimContextInfo->AnimContextAvailabilities->AnimContext).field0_0x0.DebugPtr)
  goto LAB_14a914350;
LAB_14a914370:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar14) break;
  } while ((pFVar14->AnimContextInfo->AnimContextAvailabilities->AnimContext).field0_0x0.DebugPtr <=
           ((pFVar13[-1].AnimContextInfo)->AnimContextAvailabilities->AnimContext).field0_0x0.
           DebugPtr);
  pFVar3 = pFVar13[-1].AnimContextInfo;
  if (pFVar15 <= pFVar12) {
    pFVar4 = pFVar15->Availability;
    pFVar5 = pFVar11[1].AnimContextInfo;
    FVar6 = pFVar11[1].Role;
    pIVar7 = pFVar11[1].PoseHistory;
    pUVar2 = pFVar11[1].Database;
    pFVar15->Availability = pFVar12->Availability;
    pFVar11[1].AnimContextInfo = pFVar3;
    pIVar8 = pFVar13[-1].PoseHistory;
    pFVar11[1].Role = pFVar13[-1].Role;
    pFVar11[1].PoseHistory = pIVar8;
    pFVar11[1].Database = pFVar13[-1].Database;
    pFVar12->Availability = pFVar4;
    pFVar13[-1].AnimContextInfo = pFVar5;
    pFVar13[-1].Role = FVar6;
    pFVar13[-1].PoseHistory = pIVar7;
    pFVar13[-1].Database = pUVar2;
    goto LAB_14a914350;
  }
  pFVar4 = pFVar14->Availability;
  pFVar5 = pFVar14->AnimContextInfo;
  FVar6 = pFVar14->Role;
  pIVar7 = pFVar14->PoseHistory;
  local_348._0_4_ = (int)local_348 + -1;
  pUVar2 = pFVar14->Database;
  pFVar14->Availability = pFVar12->Availability;
  pFVar14->AnimContextInfo = pFVar3;
  pIVar8 = pFVar13[-1].PoseHistory;
  pFVar14->Role = pFVar13[-1].Role;
  pFVar14->PoseHistory = pIVar8;
  pFVar14->Database = pFVar13[-1].Database;
  pFVar12->Availability = pFVar4;
  pFVar13[-1].AnimContextInfo = pFVar5;
  pFVar13[-1].Role = FVar6;
  pFVar13[-1].PoseHistory = pIVar7;
  pFVar13[-1].Database = pUVar2;
  if (((longlong)pFVar12 + (-0x28 - (longlong)pFVar14)) / 0x28 <
      ((longlong)pFVar10 - (longlong)pFVar15) / 0x28) {
    if (pFVar15 < pFVar10) {
      *ppFVar16 = pFVar15;
      ppFVar16[1] = pFVar10;
      *(int *)(ppFVar16 + 2) = (int)local_348;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar12 <= pFVar14 + 1) goto LAB_14a9144c9;
    pFVar10 = pFVar13 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar12) {
      *ppFVar16 = pFVar14;
      ppFVar16[1] = pFVar13 + -2;
      *(int *)(ppFVar16 + 2) = (int)local_348;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar10 <= pFVar15) goto LAB_14a9144c9;
  }
  iVar9 = (int)(((longlong)pFVar10 - (longlong)pFVar15) / 0x28) + 1;
  pFVar14 = pFVar15;
  if ((int)local_348 == 0) goto LAB_14a9144ba;
  goto LAB_14a9142f0;
}

// IntroSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,``UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>_>_> @ 14a9145b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l12::<lambda_1>_>_>
          (FSearchResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::PoseSearch::FSearchResult,_public:___cdecl__public:___cdecl_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi(int)_::_2_::<lambda_1>::operator()(UE::PoseSearch::FSearchResult_const_&)const_::_12_::<lambda_1>_>
          param_4)

{
  FSearchResult *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  FPoseSearchCost FVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  FPoseSearchCost FVar8;
  float fVar9;
  bool bVar10;
  undefined3 uVar11;
  FSearchResult *pFVar12;
  int iVar13;
  FSearchResult *pFVar14;
  FSearchResult *pFVar15;
  FSearchResult *pFVar16;
  FSearchResult *pFVar17;
  FSearchResult *pFVar18;
  FSearchResult **ppFVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  FSearchResult *local_348;
  FSearchResult *local_338;
  FSearchResult *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar14 = ppFVar19[1];
      pFVar15 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      local_348._0_4_ = (int)pFVar1;
      iVar13 = (int)(((longlong)pFVar14 - (longlong)pFVar15) / 0x1c) + 1;
      pFVar18 = pFVar15;
      if ((int)local_348 != 0) {
LAB_14a914680:
        if (8 < iVar13) {
          uVar4 = *(undefined4 *)&pFVar18->field_0x8;
          FVar5.TotalCost = (pFVar18->PoseCost).TotalCost;
          pFVar12 = pFVar14 + 1;
          pFVar15 = pFVar18 + iVar13 / 2;
          uVar2 = *(undefined8 *)pFVar15;
          uVar7 = *(undefined4 *)&pFVar15->field_0x8;
          FVar8.TotalCost = (pFVar15->PoseCost).TotalCost;
          bVar10 = pFVar15->bIsContinuingPoseSearch;
          uVar11 = *(undefined3 *)&pFVar15->field_0x19;
          iVar13 = pFVar15->EventPoseIdx;
          fVar9 = pFVar15->AssetTime;
          *(undefined8 *)pFVar15 = *(undefined8 *)pFVar18;
          *(undefined4 *)&pFVar15->field_0x8 = uVar4;
          pFVar15->PoseCost = (FPoseSearchCost)FVar5.TotalCost;
          fVar20 = pFVar18->AssetTime;
          pFVar15->EventPoseIdx = pFVar18->EventPoseIdx;
          pFVar15->AssetTime = fVar20;
          uVar6 = *(undefined3 *)&pFVar18->field_0x19;
          pFVar15->bIsContinuingPoseSearch = pFVar18->bIsContinuingPoseSearch;
          *(undefined3 *)&pFVar15->field_0x19 = uVar6;
          *(undefined8 *)pFVar18 = uVar2;
          *(undefined4 *)&pFVar18->field_0x8 = uVar7;
          pFVar18->PoseCost = (FPoseSearchCost)FVar8.TotalCost;
          pFVar18->EventPoseIdx = iVar13;
          pFVar18->AssetTime = fVar9;
          pFVar18->bIsContinuingPoseSearch = bVar10;
          *(undefined3 *)&pFVar18->field_0x19 = uVar11;
          pFVar15 = pFVar18;
LAB_14a9146d3:
          pFVar16 = pFVar15;
          pFVar15 = pFVar16 + 1;
          if (pFVar15 <= pFVar14) goto code_r0x00014a9146dc;
          goto LAB_14a9146f0;
        }
        if (pFVar18 < pFVar14) {
          pFVar1 = pFVar18 + 1;
          do {
            pFVar15 = pFVar18;
            if (pFVar1 <= pFVar14) {
              pFVar12 = pFVar1;
              if (0x6f < (ulonglong)((longlong)pFVar14 + (0x1c - (longlong)pFVar1))) {
                do {
                  fVar20 = pFVar12[1].PoseCost.TotalCost;
                  if ((pFVar15->PoseCost).TotalCost < (pFVar12->PoseCost).TotalCost) {
                    pFVar15 = pFVar12;
                  }
                  if ((pFVar15->PoseCost).TotalCost <= fVar20 &&
                      fVar20 != (pFVar15->PoseCost).TotalCost) {
                    pFVar15 = pFVar12 + 1;
                  }
                  fVar20 = pFVar12[2].PoseCost.TotalCost;
                  if ((pFVar15->PoseCost).TotalCost <= fVar20 &&
                      fVar20 != (pFVar15->PoseCost).TotalCost) {
                    pFVar15 = pFVar12 + 2;
                  }
                  fVar20 = pFVar12[3].PoseCost.TotalCost;
                  if ((pFVar15->PoseCost).TotalCost <= fVar20 &&
                      fVar20 != (pFVar15->PoseCost).TotalCost) {
                    pFVar15 = pFVar12 + 3;
                  }
                  pFVar12 = pFVar12 + 4;
                } while (pFVar12 <= pFVar14 + -3);
              }
              for (; pFVar12 <= pFVar14; pFVar12 = pFVar12 + 1) {
                if ((pFVar15->PoseCost).TotalCost < (pFVar12->PoseCost).TotalCost) {
                  pFVar15 = pFVar12;
                }
              }
            }
            uVar2 = *(undefined8 *)pFVar15;
            uVar7 = *(undefined4 *)&pFVar15->field_0x8;
            FVar8.TotalCost = (pFVar15->PoseCost).TotalCost;
            bVar10 = pFVar15->bIsContinuingPoseSearch;
            uVar11 = *(undefined3 *)&pFVar15->field_0x19;
            iVar13 = pFVar15->EventPoseIdx;
            fVar9 = pFVar15->AssetTime;
            pFVar12 = pFVar14 + -1;
            uVar4 = *(undefined4 *)&pFVar14->field_0x8;
            FVar5.TotalCost = (pFVar14->PoseCost).TotalCost;
            *(undefined8 *)pFVar15 = *(undefined8 *)pFVar14;
            *(undefined4 *)&pFVar15->field_0x8 = uVar4;
            pFVar15->PoseCost = (FPoseSearchCost)FVar5.TotalCost;
            fVar20 = pFVar14->AssetTime;
            pFVar15->EventPoseIdx = pFVar14->EventPoseIdx;
            pFVar15->AssetTime = fVar20;
            uVar6 = *(undefined3 *)&pFVar14->field_0x19;
            pFVar15->bIsContinuingPoseSearch = pFVar14->bIsContinuingPoseSearch;
            *(undefined3 *)&pFVar15->field_0x19 = uVar6;
            *(undefined8 *)pFVar14 = uVar2;
            *(undefined4 *)&pFVar14->field_0x8 = uVar7;
            pFVar14->PoseCost = (FPoseSearchCost)FVar8.TotalCost;
            pFVar14->EventPoseIdx = iVar13;
            pFVar14->AssetTime = fVar9;
            pFVar14->bIsContinuingPoseSearch = bVar10;
            *(undefined3 *)&pFVar14->field_0x19 = uVar11;
            pFVar14 = pFVar12;
          } while (pFVar18 < pFVar12);
        }
        goto LAB_14a914835;
      }
LAB_14a914826:
      local_348 = pFVar1;
      HeapSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l12::<lambda_1>_>_>
                (pFVar15,iVar13,param_3,param_4);
LAB_14a914835:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
code_r0x00014a9146dc:
  fVar20 = pFVar16[1].PoseCost.TotalCost;
  if (fVar20 < (pFVar18->PoseCost).TotalCost || fVar20 == (pFVar18->PoseCost).TotalCost)
  goto LAB_14a9146d3;
LAB_14a9146f0:
  do {
    pFVar17 = pFVar12;
    pFVar12 = pFVar17 + -1;
    if (pFVar12 <= pFVar18) break;
    fVar20 = (pFVar18->PoseCost).TotalCost;
  } while (fVar20 < pFVar17[-1].PoseCost.TotalCost || fVar20 == pFVar17[-1].PoseCost.TotalCost);
  uVar2 = *(undefined8 *)&pFVar17[-1].field_0x8;
  if (pFVar15 <= pFVar12) {
    uVar3 = *(undefined8 *)pFVar15;
    uVar4 = *(undefined4 *)&pFVar16[1].field_0x8;
    FVar5.TotalCost = pFVar16[1].PoseCost.TotalCost;
    bVar10 = pFVar16[1].bIsContinuingPoseSearch;
    uVar11 = *(undefined3 *)&pFVar16[1].field_0x19;
    iVar13 = pFVar16[1].EventPoseIdx;
    fVar9 = pFVar16[1].AssetTime;
    *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
    *(undefined8 *)&pFVar16[1].field_0x8 = uVar2;
    fVar20 = pFVar17[-1].AssetTime;
    pFVar16[1].EventPoseIdx = pFVar17[-1].EventPoseIdx;
    pFVar16[1].AssetTime = fVar20;
    uVar6 = *(undefined3 *)&pFVar17[-1].field_0x19;
    pFVar16[1].bIsContinuingPoseSearch = pFVar17[-1].bIsContinuingPoseSearch;
    *(undefined3 *)&pFVar16[1].field_0x19 = uVar6;
    *(undefined8 *)pFVar12 = uVar3;
    *(undefined4 *)&pFVar17[-1].field_0x8 = uVar4;
    pFVar17[-1].PoseCost = (FPoseSearchCost)FVar5.TotalCost;
    pFVar17[-1].EventPoseIdx = iVar13;
    pFVar17[-1].AssetTime = fVar9;
    pFVar17[-1].bIsContinuingPoseSearch = bVar10;
    *(undefined3 *)&pFVar17[-1].field_0x19 = uVar11;
    goto LAB_14a9146d3;
  }
  bVar10 = pFVar18->bIsContinuingPoseSearch;
  uVar11 = *(undefined3 *)&pFVar18->field_0x19;
  local_348._0_4_ = (int)local_348 + -1;
  uVar3 = *(undefined8 *)pFVar18;
  uVar4 = *(undefined4 *)&pFVar18->field_0x8;
  FVar5.TotalCost = (pFVar18->PoseCost).TotalCost;
  iVar13 = pFVar18->EventPoseIdx;
  fVar9 = pFVar18->AssetTime;
  *(undefined8 *)pFVar18 = *(undefined8 *)pFVar12;
  *(undefined8 *)&pFVar18->field_0x8 = uVar2;
  fVar20 = pFVar17[-1].AssetTime;
  pFVar18->EventPoseIdx = pFVar17[-1].EventPoseIdx;
  pFVar18->AssetTime = fVar20;
  uVar6 = *(undefined3 *)&pFVar17[-1].field_0x19;
  pFVar18->bIsContinuingPoseSearch = pFVar17[-1].bIsContinuingPoseSearch;
  *(undefined3 *)&pFVar18->field_0x19 = uVar6;
  *(undefined8 *)pFVar12 = uVar3;
  *(undefined4 *)&pFVar17[-1].field_0x8 = uVar4;
  pFVar17[-1].PoseCost = (FPoseSearchCost)FVar5.TotalCost;
  pFVar17[-1].EventPoseIdx = iVar13;
  pFVar17[-1].AssetTime = fVar9;
  pFVar17[-1].bIsContinuingPoseSearch = bVar10;
  *(undefined3 *)&pFVar17[-1].field_0x19 = uVar11;
  if (((longlong)pFVar12 + (-0x1c - (longlong)pFVar18)) / 0x1c <
      ((longlong)pFVar14 - (longlong)pFVar15) / 0x1c) {
    if (pFVar15 < pFVar14) {
      *ppFVar19 = pFVar15;
      ppFVar19[1] = pFVar14;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar12 <= pFVar18 + 1) goto LAB_14a914835;
    pFVar14 = pFVar17 + -2;
    pFVar15 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar12) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar17 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar14 <= pFVar15) goto LAB_14a914835;
  }
  iVar13 = (int)(((longlong)pFVar14 - (longlong)pFVar15) / 0x1c) + 1;
  pFVar18 = pFVar15;
  if ((int)local_348 == 0) goto LAB_14a914826;
  goto LAB_14a914680;
}

// IntroSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,``UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>_>_> @ 14a914970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
          (FSearchResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::PoseSearch::FSearchResult,_public:___cdecl__public:___cdecl_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi(int)_::_2_::<lambda_1>::operator()(UE::PoseSearch::FSearchResult_const_&)const_::_17_::<lambda_2>_>
          param_4)

{
  FSearchResult *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  FPoseSearchCost FVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  FPoseSearchCost FVar8;
  float fVar9;
  bool bVar10;
  undefined3 uVar11;
  FSearchResult *pFVar12;
  int iVar13;
  FSearchResult *pFVar14;
  FSearchResult *pFVar15;
  FSearchResult *pFVar16;
  FSearchResult *pFVar17;
  FSearchResult *pFVar18;
  FSearchResult **ppFVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  FSearchResult *local_348;
  FSearchResult *local_338;
  FSearchResult *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar14 = ppFVar19[1];
      pFVar15 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      local_348._0_4_ = (int)pFVar1;
      iVar13 = (int)(((longlong)pFVar14 - (longlong)pFVar15) / 0x1c) + 1;
      pFVar18 = pFVar15;
      if ((int)local_348 != 0) {
LAB_14a914a40:
        if (8 < iVar13) {
          uVar4 = *(undefined4 *)&pFVar18->field_0x8;
          FVar5.TotalCost = (pFVar18->PoseCost).TotalCost;
          pFVar12 = pFVar14 + 1;
          pFVar15 = pFVar18 + iVar13 / 2;
          uVar2 = *(undefined8 *)pFVar15;
          uVar7 = *(undefined4 *)&pFVar15->field_0x8;
          FVar8.TotalCost = (pFVar15->PoseCost).TotalCost;
          bVar10 = pFVar15->bIsContinuingPoseSearch;
          uVar11 = *(undefined3 *)&pFVar15->field_0x19;
          iVar13 = pFVar15->EventPoseIdx;
          fVar9 = pFVar15->AssetTime;
          *(undefined8 *)pFVar15 = *(undefined8 *)pFVar18;
          *(undefined4 *)&pFVar15->field_0x8 = uVar4;
          pFVar15->PoseCost = (FPoseSearchCost)FVar5.TotalCost;
          fVar20 = pFVar18->AssetTime;
          pFVar15->EventPoseIdx = pFVar18->EventPoseIdx;
          pFVar15->AssetTime = fVar20;
          uVar6 = *(undefined3 *)&pFVar18->field_0x19;
          pFVar15->bIsContinuingPoseSearch = pFVar18->bIsContinuingPoseSearch;
          *(undefined3 *)&pFVar15->field_0x19 = uVar6;
          *(undefined8 *)pFVar18 = uVar2;
          *(undefined4 *)&pFVar18->field_0x8 = uVar7;
          pFVar18->PoseCost = (FPoseSearchCost)FVar8.TotalCost;
          pFVar18->EventPoseIdx = iVar13;
          pFVar18->AssetTime = fVar9;
          pFVar18->bIsContinuingPoseSearch = bVar10;
          *(undefined3 *)&pFVar18->field_0x19 = uVar11;
          pFVar15 = pFVar18;
LAB_14a914a93:
          pFVar16 = pFVar15;
          pFVar15 = pFVar16 + 1;
          if (pFVar15 <= pFVar14) goto code_r0x00014a914a9c;
          goto LAB_14a914ab0;
        }
        if (pFVar18 < pFVar14) {
          pFVar1 = pFVar18 + 1;
          do {
            pFVar15 = pFVar18;
            if (pFVar1 <= pFVar14) {
              pFVar12 = pFVar1;
              if (0x6f < (ulonglong)((longlong)pFVar14 + (0x1c - (longlong)pFVar1))) {
                do {
                  fVar20 = pFVar12[1].PoseCost.TotalCost;
                  if ((pFVar15->PoseCost).TotalCost < (pFVar12->PoseCost).TotalCost) {
                    pFVar15 = pFVar12;
                  }
                  if ((pFVar15->PoseCost).TotalCost <= fVar20 &&
                      fVar20 != (pFVar15->PoseCost).TotalCost) {
                    pFVar15 = pFVar12 + 1;
                  }
                  fVar20 = pFVar12[2].PoseCost.TotalCost;
                  if ((pFVar15->PoseCost).TotalCost <= fVar20 &&
                      fVar20 != (pFVar15->PoseCost).TotalCost) {
                    pFVar15 = pFVar12 + 2;
                  }
                  fVar20 = pFVar12[3].PoseCost.TotalCost;
                  if ((pFVar15->PoseCost).TotalCost <= fVar20 &&
                      fVar20 != (pFVar15->PoseCost).TotalCost) {
                    pFVar15 = pFVar12 + 3;
                  }
                  pFVar12 = pFVar12 + 4;
                } while (pFVar12 <= pFVar14 + -3);
              }
              for (; pFVar12 <= pFVar14; pFVar12 = pFVar12 + 1) {
                if ((pFVar15->PoseCost).TotalCost < (pFVar12->PoseCost).TotalCost) {
                  pFVar15 = pFVar12;
                }
              }
            }
            uVar2 = *(undefined8 *)pFVar15;
            uVar7 = *(undefined4 *)&pFVar15->field_0x8;
            FVar8.TotalCost = (pFVar15->PoseCost).TotalCost;
            bVar10 = pFVar15->bIsContinuingPoseSearch;
            uVar11 = *(undefined3 *)&pFVar15->field_0x19;
            iVar13 = pFVar15->EventPoseIdx;
            fVar9 = pFVar15->AssetTime;
            pFVar12 = pFVar14 + -1;
            uVar4 = *(undefined4 *)&pFVar14->field_0x8;
            FVar5.TotalCost = (pFVar14->PoseCost).TotalCost;
            *(undefined8 *)pFVar15 = *(undefined8 *)pFVar14;
            *(undefined4 *)&pFVar15->field_0x8 = uVar4;
            pFVar15->PoseCost = (FPoseSearchCost)FVar5.TotalCost;
            fVar20 = pFVar14->AssetTime;
            pFVar15->EventPoseIdx = pFVar14->EventPoseIdx;
            pFVar15->AssetTime = fVar20;
            uVar6 = *(undefined3 *)&pFVar14->field_0x19;
            pFVar15->bIsContinuingPoseSearch = pFVar14->bIsContinuingPoseSearch;
            *(undefined3 *)&pFVar15->field_0x19 = uVar6;
            *(undefined8 *)pFVar14 = uVar2;
            *(undefined4 *)&pFVar14->field_0x8 = uVar7;
            pFVar14->PoseCost = (FPoseSearchCost)FVar8.TotalCost;
            pFVar14->EventPoseIdx = iVar13;
            pFVar14->AssetTime = fVar9;
            pFVar14->bIsContinuingPoseSearch = bVar10;
            *(undefined3 *)&pFVar14->field_0x19 = uVar11;
            pFVar14 = pFVar12;
          } while (pFVar18 < pFVar12);
        }
        goto LAB_14a914bf5;
      }
LAB_14a914be6:
      local_348 = pFVar1;
      HeapSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
                (pFVar15,iVar13,param_3,param_4);
LAB_14a914bf5:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
code_r0x00014a914a9c:
  fVar20 = pFVar16[1].PoseCost.TotalCost;
  if (fVar20 < (pFVar18->PoseCost).TotalCost || fVar20 == (pFVar18->PoseCost).TotalCost)
  goto LAB_14a914a93;
LAB_14a914ab0:
  do {
    pFVar17 = pFVar12;
    pFVar12 = pFVar17 + -1;
    if (pFVar12 <= pFVar18) break;
    fVar20 = (pFVar18->PoseCost).TotalCost;
  } while (fVar20 < pFVar17[-1].PoseCost.TotalCost || fVar20 == pFVar17[-1].PoseCost.TotalCost);
  uVar2 = *(undefined8 *)&pFVar17[-1].field_0x8;
  if (pFVar15 <= pFVar12) {
    uVar3 = *(undefined8 *)pFVar15;
    uVar4 = *(undefined4 *)&pFVar16[1].field_0x8;
    FVar5.TotalCost = pFVar16[1].PoseCost.TotalCost;
    bVar10 = pFVar16[1].bIsContinuingPoseSearch;
    uVar11 = *(undefined3 *)&pFVar16[1].field_0x19;
    iVar13 = pFVar16[1].EventPoseIdx;
    fVar9 = pFVar16[1].AssetTime;
    *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
    *(undefined8 *)&pFVar16[1].field_0x8 = uVar2;
    fVar20 = pFVar17[-1].AssetTime;
    pFVar16[1].EventPoseIdx = pFVar17[-1].EventPoseIdx;
    pFVar16[1].AssetTime = fVar20;
    uVar6 = *(undefined3 *)&pFVar17[-1].field_0x19;
    pFVar16[1].bIsContinuingPoseSearch = pFVar17[-1].bIsContinuingPoseSearch;
    *(undefined3 *)&pFVar16[1].field_0x19 = uVar6;
    *(undefined8 *)pFVar12 = uVar3;
    *(undefined4 *)&pFVar17[-1].field_0x8 = uVar4;
    pFVar17[-1].PoseCost = (FPoseSearchCost)FVar5.TotalCost;
    pFVar17[-1].EventPoseIdx = iVar13;
    pFVar17[-1].AssetTime = fVar9;
    pFVar17[-1].bIsContinuingPoseSearch = bVar10;
    *(undefined3 *)&pFVar17[-1].field_0x19 = uVar11;
    goto LAB_14a914a93;
  }
  bVar10 = pFVar18->bIsContinuingPoseSearch;
  uVar11 = *(undefined3 *)&pFVar18->field_0x19;
  local_348._0_4_ = (int)local_348 + -1;
  uVar3 = *(undefined8 *)pFVar18;
  uVar4 = *(undefined4 *)&pFVar18->field_0x8;
  FVar5.TotalCost = (pFVar18->PoseCost).TotalCost;
  iVar13 = pFVar18->EventPoseIdx;
  fVar9 = pFVar18->AssetTime;
  *(undefined8 *)pFVar18 = *(undefined8 *)pFVar12;
  *(undefined8 *)&pFVar18->field_0x8 = uVar2;
  fVar20 = pFVar17[-1].AssetTime;
  pFVar18->EventPoseIdx = pFVar17[-1].EventPoseIdx;
  pFVar18->AssetTime = fVar20;
  uVar6 = *(undefined3 *)&pFVar17[-1].field_0x19;
  pFVar18->bIsContinuingPoseSearch = pFVar17[-1].bIsContinuingPoseSearch;
  *(undefined3 *)&pFVar18->field_0x19 = uVar6;
  *(undefined8 *)pFVar12 = uVar3;
  *(undefined4 *)&pFVar17[-1].field_0x8 = uVar4;
  pFVar17[-1].PoseCost = (FPoseSearchCost)FVar5.TotalCost;
  pFVar17[-1].EventPoseIdx = iVar13;
  pFVar17[-1].AssetTime = fVar9;
  pFVar17[-1].bIsContinuingPoseSearch = bVar10;
  *(undefined3 *)&pFVar17[-1].field_0x19 = uVar11;
  if (((longlong)pFVar12 + (-0x1c - (longlong)pFVar18)) / 0x1c <
      ((longlong)pFVar14 - (longlong)pFVar15) / 0x1c) {
    if (pFVar15 < pFVar14) {
      *ppFVar19 = pFVar15;
      ppFVar19[1] = pFVar14;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar12 <= pFVar18 + 1) goto LAB_14a914bf5;
    pFVar14 = pFVar17 + -2;
    pFVar15 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar12) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar17 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar14 <= pFVar15) goto LAB_14a914bf5;
  }
  iVar13 = (int)(((longlong)pFVar14 - (longlong)pFVar15) / 0x1c) + 1;
  pFVar18 = pFVar15;
  if ((int)local_348 == 0) goto LAB_14a914be6;
  goto LAB_14a914a40;
}

// IsObjectPtrEqual<UPoseSearchDatabase_const_,UPoseSearchDatabase_const_*,0> @ 14a914d80

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPoseSearchDatabase_const_,UPoseSearchDatabase_const_*,0>
          (TObjectPtr<UPoseSearchDatabase_const_> *param_1,UPoseSearchDatabase **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPoseSearchDatabase *)0x0) {
    return *param_2 == (UPoseSearchDatabase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UPoseSearchFeatureChannel_Pose> @ 14a914da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPoseSearchFeatureChannel_Pose * __cdecl
NewObject<UPoseSearchFeatureChannel_Pose>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel_Pose *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPoseSearchFeatureChannel_Pose *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPoseSearchFeatureChannel_Trajectory> @ 14a914e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPoseSearchFeatureChannel_Trajectory * __cdecl
NewObject<UPoseSearchFeatureChannel_Trajectory>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel_Trajectory *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPoseSearchFeatureChannel_Trajectory *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup>_> @ 14a915070

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l2::FInteractionSearchContextGroup>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
          *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup>
    ::ResizeAllocation(param_3,uVar2,uVar3,(ulonglong)param_1);
    *param_4 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo>_> @ 14a915ac0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>_>
          (ushort param_1,
          ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FRoledAnimContextInfo>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo>
    ::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup>_> @ 14a916d00

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l2::FInteractionSearchContextGroup>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup>
    ::ResizeAllocation(param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// StaticEnum<enum_EPoseSearchDataPreprocessor> @ 14a9181e0

UEnum * __cdecl StaticEnum<enum_EPoseSearchDataPreprocessor>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor,(UObject *)pUVar1,
                       L"EPoseSearchDataPreprocessor");
  }
  return Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton;
}

// StaticEnum<enum_EPoseSearchInterruptMode> @ 14a918220

UEnum * __cdecl StaticEnum<enum_EPoseSearchInterruptMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchInterruptMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchInterruptMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchInterruptMode,(UObject *)pUVar1,
                       L"EPoseSearchInterruptMode");
  }
  return Z_Registration_Info_UEnum_EPoseSearchInterruptMode.OuterSingleton;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>,0,0> @ 14a91a590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>,0,0> @ 14a91a5b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>,0,0> @ 14a91a5d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Single::FSearchResults_Single_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>,0,0> @ 14a91a5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>,0,0> @ 14a91a610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>,0,0> @ 14a91a630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Single::FSearchResults_Single_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>,0,0> @ 14a91a650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>,0,0> @ 14a91a670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_3>,0,0> @ 14a91a690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Single::FSearchResults_Single_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_4>,0,0> @ 14a91a6b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>,0,0> @ 14a91a6d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_4>,0,0> @ 14a91a6f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Single::FSearchResults_Single_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>,0,0> @ 14a91a710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests_::__l2::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>,0,0> @ 14a91a730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_5>,0,0> @ 14a91a750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_5>,0,0>
::
~TFunction_OwnedObject<_UE::PoseSearch::FSearchResults_Single::FSearchResults_Single_::__l2::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  return;
}

// operator<< @ 14a91b2f0

FArchive * __cdecl operator<<(FArchive *param_1,FPoseSearchQueryTrajectory *param_2)

{
  TArrayPrivateFriend::Serialize<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Samples);
  return param_1;
}

// operator<< @ 14a91b310

FArchive * __cdecl operator<<(FArchive *param_1,FPoseSearchQueryTrajectorySample *param_2)

{
  float *pfVar1;
  
  UE::Math::operator<<(param_1,&param_2->Facing);
  UE::Math::operator<<(param_1,&param_2->Position);
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar1 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->AccumulatedSeconds = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->AccumulatedSeconds,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->AccumulatedSeconds);
  return param_1;
}

// operator() @ 14a91e5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
``UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_2>::operator()'::__l6::
<lambda_2>::operator()(void *this,TArrayView<int_const_,int> *param_1)

{
  ForElementType<FName> FVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ForElementType<UE::PoseSearch::FInteractionSearchContext> *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FPoseSearchInteractionAvailability *pFVar15;
  ForElementType<FPoseSearchInteractionAvailability> FVar16;
  longlong lVar17;
  longlong lVar18;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar19;
  TArrayView<int_const_,int> *pTVar20;
  ForElementType<FName> FVar21;
  FInteractionSearchContextBase *pFVar22;
  ForElementType<UE::PoseSearch::FInteractionSearchContext> *pFVar23;
  ForElementType<FPoseSearchInteractionAvailability> FVar24;
  longlong lVar25;
  undefined8 *puVar26;
  uint uVar27;
  ForElementType<FPoseSearchInteractionAvailability> FVar28;
  FInteractionSearchContextBase *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  FInteractionSearchContextBase *pFVar33;
  ulonglong uVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  double dVar38;
  undefined1 auStack_348 [32];
  ForElementType<FPoseSearchInteractionAvailability> local_328;
  ForElementType<FPoseSearchInteractionAvailability> local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  char local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6 [6];
  undefined8 *local_2f0;
  TArrayView<int_const_,int> *local_2e8;
  int local_2e0;
  longlong local_2d8;
  UObject *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  UObject *local_2b8;
  undefined1 local_2b0 [184];
  bool local_1f8;
  FWeakObjectPtr local_1f0;
  float local_1e8;
  bool local_1e4;
  TVector<double>_u_0 local_1e0;
  undefined2 local_1c8;
  undefined1 local_1c0 [224];
  ForElementType<FPoseSearchInteractionAvailability> local_e0;
  int local_d8;
  int local_d4;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  local_d0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_2e0 = param_1->ArrayNum;
  lVar14 = (longlong)local_2e0;
  uVar32 = 0;
  local_d0.Elements._64_8_ = 0;
  local_d0.Elements._72_4_ = 0;
  local_d0.Elements._76_4_ = 4;
  local_d0.Elements._88_8_ = 0;
  local_d0.Hash.SecondaryData.Data = (FSetElementId *)0x0;
  local_d0.HashSize = 0;
  local_d0.Elements._96_8_ = ___xmm_00000000ffffffff0000002000000000;
  local_d0.Elements._104_8_ = _UNK_150631d78;
  uVar34 = uVar32;
  uVar31 = uVar32;
  local_2f0 = this;
  local_2e8 = param_1;
  local_2d8 = lVar14;
  if (0 < local_2e0) {
    do {
      pTVar20 = local_2e8;
      uVar27 = (uint)uVar34;
      uVar30 = 0;
      if ((int)uVar27 < local_2e8->ArrayNum) {
        uVar30 = ~uVar27 >> 0x1f;
      }
      if (uVar30 == 0) {
        local_328 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)(int)uVar27;
        local_320 = (ForElementType<FPoseSearchInteractionAvailability>)
                    (longlong)local_2e8->ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      lVar17 = *(longlong *)((longlong)this + 0x10);
      uVar30 = pTVar20->DataPtr[uVar31];
      FVar24 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)(int)uVar30;
      uVar11 = 0;
      if ((int)uVar30 < *(int *)(lVar17 + 0xa8)) {
        uVar11 = ~uVar30 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_328 = FVar24,
         local_320 = (ForElementType<FPoseSearchInteractionAvailability>)
                     (longlong)*(int *)(lVar17 + 0xa8),
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(longlong *)(lVar17 + 0xa0) != 0) {
        lVar17 = *(longlong *)(lVar17 + 0xa0);
      }
      if ((*(longlong *)(lVar17 + 8 + (longlong)FVar24 * 0x28) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RoledAnimContextInfo.AnimContextInfo",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                             ,0x338,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_2c8 = *(undefined8 *)**(undefined8 **)(lVar17 + 8 + (longlong)FVar24 * 0x28);
      TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::Emplace<UObject_const_*>(&local_d0,&local_2d0,(bool *)&local_2c8);
      if (local_2f8 != '\0') {
        bVar8 = false;
        goto LAB_14a91f077;
      }
      uVar31 = uVar31 + 1;
      uVar34 = (ulonglong)(uVar27 + 1);
    } while ((longlong)uVar31 < lVar14);
  }
  pTVar20 = local_2e8;
  puVar26 = local_2f0;
  local_2b0._32_8_ = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0;
  local_2b0._168_8_ = ___xmm_00000000000000000000000400000000;
  local_2b0._176_4_ = _UNK_152280eb8;
  local_2b0._180_4_ = _UNK_152280ebc;
  local_2b0._40_4_ = 0;
  local_2b0._44_4_ = 4;
  local_2b0._112_8_ = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0;
  local_2b0._120_4_ = 0;
  local_2b0._124_4_ = 4;
  local_2b0._160_8_ = (ForElementType<FName>)0x0;
  local_1f8 = false;
  local_1f0.ObjectIndex = 0;
  local_1f0.ObjectSerialNumber = 0;
  local_2c0 = 0;
  FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_2c0);
  local_2b8 = (UObject *)*puVar26;
  local_1e0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1e0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1e8 = 0.0;
  local_1e4 = false;
  local_1e0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1c8._0_1_ = DoNotInterrupt;
  local_1c8._1_1_ = false;
  local_1c0._16_8_ = (FPoseSearchInteractionAvailability *)0x0;
  local_1c0._24_4_ = 0;
  local_1c0._28_4_ = 4;
  local_e0 = (ForElementType<FPoseSearchInteractionAvailability>)0x0;
  local_d8 = 0;
  local_d4 = 4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_2b8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_2b0 + 0xb0),(FObjectPtr)&local_2b8);
  uVar34 = uVar32;
  if (0 < lVar14) {
    do {
      uVar27 = (uint)uVar32;
      uVar30 = 0;
      if ((int)uVar27 < pTVar20->ArrayNum) {
        uVar30 = ~uVar27 >> 0x1f;
      }
      if (uVar30 == 0) {
        local_328 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)(int)uVar27;
        local_320 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)pTVar20->ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      lVar17 = *(longlong *)((longlong)this + 0x10);
      uVar30 = pTVar20->DataPtr[uVar34];
      FVar24 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)(int)uVar30;
      uVar11 = 0;
      if ((int)uVar30 < *(int *)(lVar17 + 0xa8)) {
        uVar11 = ~uVar30 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_328 = FVar24,
         local_320 = (ForElementType<FPoseSearchInteractionAvailability>)
                     (longlong)*(int *)(lVar17 + 0xa8),
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(longlong *)(lVar17 + 0xa0) != 0) {
        lVar17 = *(longlong *)(lVar17 + 0xa0);
      }
      if (((*(longlong *)(lVar17 + 0x18 + (longlong)FVar24 * 0x28) == 0) ||
          (*(longlong *)(lVar17 + (longlong)FVar24 * 0x28) == 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RoledAnimContextInfo.PoseHistory && RoledAnimContextInfo.Availability"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                             ,0x34c,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      UE::PoseSearch::FInteractionSearchContextBase::Add
                ((FInteractionSearchContextBase *)local_2b0,
                 *(UObject **)**(undefined8 **)(lVar17 + 8 + (longlong)FVar24 * 0x28),
                 *(IPoseHistory **)(lVar17 + 0x18 + (longlong)FVar24 * 0x28),
                 *(FName *)(lVar17 + 0x10 + (longlong)FVar24 * 0x28));
      local_1f8 = (bool)(local_1f8 |
                        *(byte *)(*(longlong *)(lVar17 + (longlong)FVar24 * 0x28) + 0x28));
      FVar28 = (ForElementType<FPoseSearchInteractionAvailability>)
               (*(longlong *)(lVar17 + (longlong)FVar24 * 0x28) + 0x2c);
      FVar16 = (ForElementType<FPoseSearchInteractionAvailability>)local_1c0;
      if ((FPoseSearchInteractionAvailability *)local_1c0._16_8_ !=
          (FPoseSearchInteractionAvailability *)0x0) {
        FVar16 = (ForElementType<FPoseSearchInteractionAvailability>)local_1c0._16_8_;
      }
      if ((ulonglong)FVar16 <= (ulonglong)FVar28) {
        pFVar15 = (FPoseSearchInteractionAvailability *)local_1c0;
        if ((FPoseSearchInteractionAvailability *)local_1c0._16_8_ !=
            (FPoseSearchInteractionAvailability *)0x0) {
          pFVar15 = (FPoseSearchInteractionAvailability *)local_1c0._16_8_;
        }
        if ((ulonglong)FVar28 <
            (ulonglong)
            ((longlong)&(pFVar15->Database).field0_0x0 + (longlong)(int)local_1c0._28_4_ * 4)) {
          local_310 = (longlong)(int)local_1c0._24_4_;
          local_308 = 4;
          local_320 = (ForElementType<FPoseSearchInteractionAvailability>)local_1c0;
          if ((FPoseSearchInteractionAvailability *)local_1c0._16_8_ !=
              (FPoseSearchInteractionAvailability *)0x0) {
            local_320 = (ForElementType<FPoseSearchInteractionAvailability>)local_1c0._16_8_;
          }
          local_328 = FVar28;
          local_318 = (longlong)(int)local_1c0._28_4_;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
      }
      if (local_1c0._24_4_ == local_1c0._28_4_) {
        local_1c0._24_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                       (0x404,(ForElementType<int> *)local_1c0,(int *)(local_1c0 + 0x1c));
      }
      lVar18 = (longlong)(int)local_1c0._24_4_;
      pFVar15 = (FPoseSearchInteractionAvailability *)local_1c0;
      if ((FPoseSearchInteractionAvailability *)local_1c0._16_8_ !=
          (FPoseSearchInteractionAvailability *)0x0) {
        pFVar15 = (FPoseSearchInteractionAvailability *)local_1c0._16_8_;
      }
      local_1c0._24_4_ = local_1c0._24_4_ + 1;
      *(undefined4 *)((longlong)&(pFVar15->Database).field0_0x0 + lVar18 * 4) =
           *(undefined4 *)FVar28;
      FVar24 = *(ForElementType<FPoseSearchInteractionAvailability> *)
                (lVar17 + (longlong)FVar24 * 0x28);
      FVar16 = (ForElementType<FPoseSearchInteractionAvailability>)((longlong)local_1c0 + 0x20);
      if (local_e0 != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FVar16 = local_e0;
      }
      if ((ulonglong)FVar16 <= (ulonglong)FVar24) {
        FVar16 = (ForElementType<FPoseSearchInteractionAvailability>)((longlong)local_1c0 + 0x20);
        if (local_e0 != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
          FVar16 = local_e0;
        }
        if ((ulonglong)FVar24 < (ulonglong)((longlong)local_d4 * 0x30 + (longlong)FVar16)) {
          local_310 = (longlong)local_d8;
          local_308 = 0x30;
          local_320 = (ForElementType<FPoseSearchInteractionAvailability>)
                      ((longlong)local_1c0 + 0x20);
          if (local_e0 != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
            local_320 = local_e0;
          }
          local_328 = FVar24;
          local_318 = (longlong)local_d4;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
      }
      if (local_d8 == local_d4) {
        local_d8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPoseSearchInteractionAvailability>_>
                             (0x830,(ForElementType<FPoseSearchInteractionAvailability> *)
                                    (local_1c0 + 0x20),&local_d4);
      }
      FVar16 = (ForElementType<FPoseSearchInteractionAvailability>)((longlong)local_1c0 + 0x20);
      if (local_e0 != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FVar16 = local_e0;
      }
      lVar17 = (longlong)local_d8;
      local_d8 = local_d8 + 1;
      FPoseSearchInteractionAvailability::FPoseSearchInteractionAvailability
                ((FPoseSearchInteractionAvailability *)(lVar17 * 0x30 + (longlong)FVar16),
                 (FPoseSearchInteractionAvailability *)FVar24);
      uVar32 = (ulonglong)(uVar27 + 1);
      uVar34 = uVar34 + 1;
      pTVar20 = local_2e8;
      puVar26 = local_2f0;
    } while ((longlong)uVar34 < lVar14);
  }
  plVar3 = (longlong *)puVar26[1];
  lVar18 = plVar3[1];
  lVar17 = *plVar3;
  lVar14 = lVar17 + (longlong)(int)lVar18 * 0x48;
  while( true ) {
    if ((int)plVar3[1] != (int)lVar18) {
      local_2f7 = 0;
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_2f7);
    }
    puVar26 = local_2f0;
    if (lVar17 == lVar14) {
      pFVar22 = *(FInteractionSearchContextBase **)local_2f0[4];
      pFVar29 = (FInteractionSearchContextBase *)
                ((longlong)(int)((longlong *)local_2f0[4])[1] * 0xd0 + (longlong)pFVar22);
      goto joined_r0x00014a91ec36;
    }
    lVar25 = (longlong)(int)local_2b0._168_4_;
    FVar21 = (ForElementType<FName>)((longlong)local_2b0 + 0x80);
    if ((ForElementType<FName>)local_2b0._160_8_ != (ForElementType<FName>)0x0) {
      FVar21 = (ForElementType<FName>)local_2b0._160_8_;
    }
    if (((int)local_2b0._168_4_ < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    FVar1 = (ForElementType<FName>)((longlong)FVar21 + lVar25 * 8);
    if (FVar21 == FVar1) break;
    while (*(longlong *)FVar21 != *(longlong *)(lVar17 + 0x10)) {
      FVar21 = (ForElementType<FName>)((longlong)FVar21 + 8);
      if (FVar21 == FVar1) goto LAB_14a91ec02;
    }
    lVar17 = lVar17 + 0x48;
  }
LAB_14a91ec02:
  bVar8 = false;
LAB_14a91eff1:
  FVar24 = (ForElementType<FPoseSearchInteractionAvailability>)((longlong)local_1c0 + 0x20);
  if (local_e0 != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
    FVar24 = local_e0;
  }
  DestructItems<FPoseSearchInteractionAvailability,int>
            ((FPoseSearchInteractionAvailability *)FVar24,local_d8);
  if (local_e0 != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
    FMemory::Free((void *)local_e0);
  }
  if ((FPoseSearchInteractionAvailability *)local_1c0._16_8_ !=
      (FPoseSearchInteractionAvailability *)0x0) {
    FMemory::Free((void *)local_1c0._16_8_);
  }
  if ((ForElementType<FName>)local_2b0._160_8_ != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_2b0._160_8_);
  }
  FVar19 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)
           ((longlong)local_2b0 + 0x30);
  if ((ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)local_2b0._112_8_ !=
      (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
    FVar19 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)local_2b0._112_8_;
  }
  DestructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
            ((TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)FVar19,local_2b0._120_4_);
  if ((ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)local_2b0._112_8_ !=
      (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
    FMemory::Free((void *)local_2b0._112_8_);
  }
  if ((ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)local_2b0._32_8_ !=
      (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_2b0._32_8_);
  }
LAB_14a91f077:
  local_d0.HashSize = 0;
  TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            (&local_d0.Elements);
  return bVar8;
joined_r0x00014a91ec36:
  if (pFVar22 == pFVar29) goto LAB_14a91ec65;
  bVar8 = UE::PoseSearch::FInteractionSearchContextBase::IsEquivalent
                    (pFVar22,(FInteractionSearchContextBase *)local_2b0);
  if (bVar8) {
    local_1c8._1_1_ = true;
    goto LAB_14a91ec65;
  }
  pFVar22 = (FInteractionSearchContextBase *)
            (pFVar22[1].AnimContexts.AllocatorInstance.InlineData + 0x10);
  goto joined_r0x00014a91ec36;
LAB_14a91ec65:
  uVar30 = 0;
  if (0 < local_2e0) {
    lVar14 = 0;
    while( true ) {
      pTVar20 = local_2e8;
      uVar27 = 0;
      if ((int)uVar30 < local_2e8->ArrayNum) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if (uVar27 == 0) {
        local_328 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)(int)uVar30;
        local_320 = (ForElementType<FPoseSearchInteractionAvailability>)
                    (longlong)local_2e8->ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      lVar17 = puVar26[2];
      uVar27 = pTVar20->DataPtr[lVar14];
      uVar11 = 0;
      if ((int)uVar27 < *(int *)(lVar17 + 0xa8)) {
        uVar11 = ~uVar27 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_328 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)(int)uVar27,
         local_320 = (ForElementType<FPoseSearchInteractionAvailability>)
                     (longlong)*(int *)(lVar17 + 0xa8),
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar18 = lVar14 + 1;
      if (*(longlong *)(lVar17 + 0xa0) != 0) {
        lVar17 = *(longlong *)(lVar17 + 0xa0);
      }
      plVar3 = (longlong *)(lVar17 + (longlong)(int)uVar27 * 0x28);
      puVar26 = local_2f0;
      uVar27 = uVar30;
      if (local_2d8 <= lVar18) break;
      do {
        pTVar20 = local_2e8;
        uVar27 = uVar27 + 1;
        uVar11 = 0;
        if ((int)uVar27 < local_2e8->ArrayNum) {
          uVar11 = ~uVar27 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_328 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)(int)uVar27;
          local_320 = (ForElementType<FPoseSearchInteractionAvailability>)
                      (longlong)local_2e8->ArrayNum;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        uVar11 = pTVar20->DataPtr[lVar18];
        lVar17 = local_2f0[2];
        uVar12 = 0;
        if ((int)uVar11 < *(int *)(lVar17 + 0xa8)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_328 = (ForElementType<FPoseSearchInteractionAvailability>)(longlong)(int)uVar11,
           local_320 = (ForElementType<FPoseSearchInteractionAvailability>)
                       (longlong)*(int *)(lVar17 + 0xa8),
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        bVar8 = local_1c8._1_1_;
        if (*(longlong *)(lVar17 + 0xa0) != 0) {
          lVar17 = *(longlong *)(lVar17 + 0xa0);
        }
        plVar2 = (longlong *)(lVar17 + (longlong)(int)uVar11 * 0x28);
        if ((plVar3 == plVar2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("this != &OtherRoledAnimContextInfo",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                ,0x25c,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        lVar17 = plVar3[1];
        lVar25 = plVar2[1];
        lVar4 = *plVar3;
        dVar38 = *(double *)(lVar17 + 0x10) - *(double *)(lVar25 + 0x10);
        dVar7 = *(double *)(lVar17 + 8) - *(double *)(lVar25 + 8);
        dVar36 = *(double *)(lVar17 + 0x18) - *(double *)(lVar25 + 0x18);
        lVar17 = *plVar2;
        if (bVar8 == false) {
          fVar37 = *(float *)(lVar4 + 0x20);
          if (*(float *)(lVar17 + 0x20) <= *(float *)(lVar4 + 0x20)) {
            fVar37 = *(float *)(lVar17 + 0x20);
          }
        }
        else {
          fVar37 = *(float *)(lVar17 + 0x24) + *(float *)(lVar17 + 0x20);
          fVar35 = *(float *)(lVar4 + 0x24) + *(float *)(lVar4 + 0x20);
          if (fVar35 <= fVar37) {
            fVar37 = fVar35;
          }
        }
        if (fVar37 * fVar37 < (float)(dVar38 * dVar38 + dVar7 * dVar7 + dVar36 * dVar36))
        goto LAB_14a91ec02;
        lVar18 = lVar18 + 1;
      } while (lVar18 < local_2d8);
      uVar30 = uVar30 + 1;
      lVar14 = lVar14 + 1;
      puVar26 = local_2f0;
    }
  }
  pFVar22 = (FInteractionSearchContextBase *)puVar26[3];
  pFVar29 = *(FInteractionSearchContextBase **)pFVar22[10].AnimContexts.AllocatorInstance.InlineData
  ;
  iVar13 = *(int *)(pFVar22[10].AnimContexts.AllocatorInstance.InlineData + 8);
  if (pFVar29 == (FInteractionSearchContextBase *)0x0) {
    pFVar29 = pFVar22;
  }
  pFVar33 = (FInteractionSearchContextBase *)((longlong)iVar13 * 0x1e0 + (longlong)pFVar29);
  while( true ) {
    if (*(int *)(pFVar22[10].AnimContexts.AllocatorInstance.InlineData + 8) != iVar13) {
      local_2f6[0] = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FInteractionSearchContext,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2f6);
    }
    if (pFVar29 == pFVar33) break;
    bVar8 = UE::PoseSearch::FInteractionSearchContextBase::IsEquivalent
                      (pFVar29,(FInteractionSearchContextBase *)local_2b0);
    if ((bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ContainedSearchContext.IsEquivalent(SearchContext)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                           ,0x380,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pFVar29 = (FInteractionSearchContextBase *)
              (pFVar29[2].PoseHistories.AllocatorInstance.InlineData + 0x30);
  }
  bVar8 = UE::PoseSearch::FInteractionSearchContextBase::CheckForConsistency
                    ((FInteractionSearchContextBase *)local_2b0);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SearchContext.CheckForConsistency()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                         ,899,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar23 = (ForElementType<UE::PoseSearch::FInteractionSearchContext> *)local_2f0[3];
  iVar13 = *(int *)pFVar23[1].InlineData;
  if (iVar13 == *(int *)(pFVar23[1].InlineData + 4)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FInteractionSearchContext>_>
                       (0x1e0,8,pFVar23,(int *)(pFVar23[1].InlineData + 4));
  }
  *(int *)pFVar23[1].InlineData = iVar13 + 1;
  pFVar5 = (ForElementType<UE::PoseSearch::FInteractionSearchContext> *)
           (pFVar23->SecondaryData).Data;
  if (pFVar5 != (ForElementType<UE::PoseSearch::FInteractionSearchContext> *)0x0) {
    pFVar23 = pFVar5;
  }
  UE::PoseSearch::FInteractionSearchContext::FInteractionSearchContext
            ((FInteractionSearchContext *)(pFVar23->InlineData + (longlong)iVar13 * 0x1e0),
             (FInteractionSearchContext *)local_2b0);
  bVar8 = true;
  goto LAB_14a91eff1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14a91fd44

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchInteractionSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchInteractionSubsystem::_vector_deleting_destructor__adjustor_56__
          (UPoseSearchInteractionSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchInteractionSubsystem *)&this[-1].AnimContextsAvailabilitiesBuffer,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a91fd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AUFSearchResult_PoseSearch_UE__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91fda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFSearchResult_PoseSearch_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91fde0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(float),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<bool_(__cdecl*)(float),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NM_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91fe20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NV__TFunctionRef___A6A_NAEBUFSearchResult_PoseSearch_UE___Z___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91fe60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91fea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91fee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91ff20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91ff60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91ffa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a91ffe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a9200a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a9200e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a9201a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a9201e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_5>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920220

void * __thiscall
UE::PoseSearch::FArchivedPoseHistory::_scalar_deleting_destructor_
          (FArchivedPoseHistory *this,uint param_1)

{
  ~FArchivedPoseHistory(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920260

void * __thiscall
UE::PoseSearch::FMemStackPoseHistory::_scalar_deleting_destructor_
          (FMemStackPoseHistory *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FPoseHistoryEntry *pFVar4;
  
  pFVar4 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
  if (pFVar4 == (FPoseHistoryEntry *)0x0) {
    pFVar4 = (FPoseHistoryEntry *)&this->FutureEntries;
  }
  DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>(pFVar4,(this->FutureEntries).ArrayNum);
  this->_padding_ = (longlong)&___7IPoseHistory_PoseSearch_UE__6B_;
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a9202e0

void * __thiscall
UE::PoseSearch::FSearchResults_AssetBests::_scalar_deleting_destructor_
          (FSearchResults_AssetBests *this,uint param_1)

{
  *(undefined4 *)&(this->PerDatabaseSourceAssetIdxToBestSearchResult).field_0xc00 = 0;
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              *)&this->PerDatabaseSourceAssetIdxToBestSearchResult);
  FSearchResults::~FSearchResults((FSearchResults *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920340

void * __thiscall
UE::PoseSearch::FSearchResults_Multi::_scalar_deleting_destructor_
          (FSearchResults_Multi *this,uint param_1)

{
  FSearchResults::~FSearchResults((FSearchResults *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920380

void * __thiscall
UE::PoseSearch::FSearchResults_Single::_scalar_deleting_destructor_
          (FSearchResults_Single *this,uint param_1)

{
  FSearchResults::~FSearchResults((FSearchResults *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a9203c0

void * __thiscall
UPoseSearchInteractionLibrary::_scalar_deleting_destructor_
          (UPoseSearchInteractionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPoseSearchInteractionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a920420

void * __thiscall
UPoseSearchInteractionSubsystem::_scalar_deleting_destructor_
          (UPoseSearchInteractionSubsystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  DestructItems<UE::PoseSearch::FValidInteractionSearch,int>
            ((FValidInteractionSearch *)(this->ValidInteractionSearches).AllocatorInstance.Data,
             (this->ValidInteractionSearches).ArrayNum);
  pFVar1 = (this->ValidInteractionSearches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Islands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPoseSearchInteractionAnimContextAvailabilities,int>
            ((FPoseSearchInteractionAnimContextAvailabilities *)
             (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data,
             (this->AnimContextsAvailabilitiesBuffer).ArrayNum);
  pFVar1 = (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a9204d0

void * __thiscall
UPoseSearchLibrary::_scalar_deleting_destructor_(UPoseSearchLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPoseSearchLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a920530

void * __thiscall
UPoseSearchNormalizationSet::_scalar_deleting_destructor_
          (UPoseSearchNormalizationSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPoseSearchNormalizationSet__6B_;
  pFVar1 = (this->Databases).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a9205a0

void * __thiscall
UPoseSearchSchema::_scalar_deleting_destructor_(UPoseSearchSchema *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPoseSearchSchema__6B_;
  pFVar1 = (this->FinalizedChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Channels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPoseSearchRoledSkeleton,int>
            ((FPoseSearchRoledSkeleton *)(this->Skeletons).AllocatorInstance.Data,
             (this->Skeletons).ArrayNum);
  pFVar1 = (this->Skeletons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a920640

void * __thiscall
UPoseSearchTrajectoryLibrary::_scalar_deleting_destructor_
          (UPoseSearchTrajectoryLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPoseSearchTrajectoryLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodePoseSearchInteractionLibrary @ 14a9282d0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchInteractionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchInteractionSubsystem @ 14a9282e0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchInteractionSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchLibrary @ 14a9282f0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchNormalizationSet @ 14a928300

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchNormalizationSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchResult @ 14a928310

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchResult(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchSchema @ 14a928320

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchSchema(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchTrajectoryLibrary @ 14a928330

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchTrajectoryLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchTrajectoryTypes @ 14a928340

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchTrajectoryTypes(void)

{
  return;
}

// Z_Construct_UClass_UPoseSearchInteractionLibrary_NoRegister @ 14a9473b0

UClass * __cdecl Z_Construct_UClass_UPoseSearchInteractionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionLibrary",
               &Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton,
               UPoseSearchInteractionLibrary::StaticRegisterNativesUPoseSearchInteractionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchInteractionLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchInteractionSubsystem_NoRegister @ 14a947470

UClass * __cdecl Z_Construct_UClass_UPoseSearchInteractionSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionSubsystem",
               &Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton,
               UPoseSearchInteractionSubsystem::StaticRegisterNativesUPoseSearchInteractionSubsystem
               ,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchInteractionSubsystem>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchLibrary_NoRegister @ 14a947530

UClass * __cdecl Z_Construct_UClass_UPoseSearchLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchLibrary",
               &Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton,
               UPoseSearchLibrary::StaticRegisterNativesUPoseSearchLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchNormalizationSet_NoRegister @ 14a9475f0

UClass * __cdecl Z_Construct_UClass_UPoseSearchNormalizationSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchNormalizationSet",
               &Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton,
               UPoseSearchNormalizationSet::StaticRegisterNativesUPoseSearchNormalizationSet,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchNormalizationSet>,
               InternalVTableHelperCtorCaller<UPoseSearchNormalizationSet>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchSchema_NoRegister @ 14a9476b0

UClass * __cdecl Z_Construct_UClass_UPoseSearchSchema_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchSchema",
               &Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton,
               UPoseSearchSchema::StaticRegisterNativesUPoseSearchSchema,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchSchema>,
               InternalVTableHelperCtorCaller<UPoseSearchSchema>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchTrajectoryLibrary_NoRegister @ 14a947770

UClass * __cdecl Z_Construct_UClass_UPoseSearchTrajectoryLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchTrajectoryLibrary",
               &Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton,
               UPoseSearchTrajectoryLibrary::StaticRegisterNativesUPoseSearchTrajectoryLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchTrajectoryLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchTrajectoryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton;
}

// Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor @ 14a947830

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor(void)

{
  if (Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMotionMatchingState @ 14a947870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionMatchingState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingState.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionMatchingState.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionMatchingState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingState.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMotionMatchingState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory @ 14a9478f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectory.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectory.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectory.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectory.InnerSingleton;
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

// IMPLEMENT_MODULE_PoseSearch @ 14a94a7b0

void __cdecl IMPLEMENT_MODULE_PoseSearch(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimMotionMatchDrawMatchEnable'' @ 150421950

void __cdecl _dynamic_atexit_destructor_for__CVarAnimMotionMatchDrawMatchEnable__(void)

{
  CVarAnimMotionMatchDrawMatchEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimMotionMatchDrawMatchEnable)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimMotionMatchDrawQueryEnable'' @ 150421970

void __cdecl _dynamic_atexit_destructor_for__CVarAnimMotionMatchDrawQueryEnable__(void)

{
  CVarAnimMotionMatchDrawQueryEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimMotionMatchDrawQueryEnable)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarPoseSearchInteractionCacheIslands'' @ 150421990

void __cdecl
UE::PoseSearch::_dynamic_atexit_destructor_for__CVarPoseSearchInteractionCacheIslands__(void)

{
  CVarPoseSearchInteractionCacheIslands._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPoseSearchInteractionCacheIslands);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPoseSearchInteractionEnabled'' @ 1504219b0

void __cdecl
UE::PoseSearch::_dynamic_atexit_destructor_for__CVarPoseSearchInteractionEnabled__(void)

{
  CVarPoseSearchInteractionEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPoseSearchInteractionEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPoseSearchInteractionLoglandsTickDependencies'' @ 1504219d0

void __cdecl
UE::PoseSearch::_dynamic_atexit_destructor_for__CVarPoseSearchInteractionLoglandsTickDependencies__
          (void)

{
  CVarPoseSearchInteractionLoglandsTickDependencies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPoseSearchInteractionLoglandsTickDependencies);
  return;
}

