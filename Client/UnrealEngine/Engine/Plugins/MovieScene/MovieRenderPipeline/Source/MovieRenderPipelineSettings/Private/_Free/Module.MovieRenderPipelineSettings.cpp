// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 74

// CategoryMetaDataKey'' @ 1413fc260

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::CategoryMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::CategoryMetaDataKey,L"Category");
  return;
}

// DefaultBurnInWidgetAsset'' @ 1413fc280

void __cdecl `dynamic_initializer_for_'UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset__(void)

{
  ::FString::FString(&UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset,
                     L"/MovieRenderPipeline/Blueprints/DefaultBurnIn.DefaultBurnIn_C");
  atexit(`dynamic_atexit_destructor_for_'UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset__);
  return;
}

// DisplayNameMetaDataKey'' @ 1413fc2b0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::DisplayNameMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::DisplayNameMetaDataKey,L"DisplayName");
  return;
}

// EnableCategoriesMetaDataKey'' @ 1413fc2d0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::EnableCategoriesMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::EnableCategoriesMetaDataKey,
                 L"EnableCategories");
  return;
}

// ToolTipMetaDataKey'' @ 1413fc2f0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::ToolTipMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::ToolTipMetaDataKey,L"ToolTip");
  return;
}

// VariableGuidMetaDataKey'' @ 1413fc310

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::VariableGuidMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::VariableGuidMetaDataKey,L"VariableGUID");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMovieRenderPipelineSettings'' @ 1413fc330

void __cdecl _dynamic_initializer_for__ModuleRegistrantMovieRenderPipelineSettings__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MovieRenderPipelineSettings";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MovieRenderPipelineSettings",0x1b);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FMovieRenderPipelineSettingsModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'NAME_UMoviePipelineBurnInWidget_OnOutputFrameStarted'' @ 1413fc380

void __cdecl _dynamic_initializer_for__NAME_UMoviePipelineBurnInWidget_OnOutputFrameStarted__(void)

{
  FName::FName(&NAME_UMoviePipelineBurnInWidget_OnOutputFrameStarted,L"OnOutputFrameStarted");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1413fc3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInSetting_h__Script_MovieRenderPipelineSettings_682679898'' @ 1413fc430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInSetting_h__Script_MovieRenderPipelineSettings_682679898__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineSettings",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInSetting_h__Script_MovieRenderPipelineSettings_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInWidget_h__Script_MovieRenderPipelineSettings_2074555898'' @ 1413fc470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInWidget_h__Script_MovieRenderPipelineSettings_2074555898__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineSettings",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInWidget_h__Script_MovieRenderPipelineSettings_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h__Script_MovieRenderPipelineSettings_1145914153'' @ 1413fc4b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h__Script_MovieRenderPipelineSettings_1145914153__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineSettings",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h__Script_MovieRenderPipelineSettings_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineWidgetRenderSetting_h__Script_MovieRenderPipelineSettings_1861895675'' @ 1413fc4f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineWidgetRenderSetting_h__Script_MovieRenderPipelineSettings_1861895675__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineSettings",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineWidgetRenderSetting_h__Script_MovieRenderPipelineSettings_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MovieRenderPipelineSettings'' @ 1413fc530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MovieRenderPipelineSettings__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x4f42375b;
  local_res8[0].DeclarationsHash = 0x4b6390d6;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
             L"/Script/MovieRenderPipelineSettings",
             &Z_Registration_Info_UPackage__Script_MovieRenderPipelineSettings,local_res8);
  return;
}

// NewProp_bCompositeOntoFinalImage_SetBit @ 14ddaf930

void __cdecl
Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_bCompositeOntoFinalImage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelineBurnInWidget @ 14ddaf940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineBurnInWidget(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.OuterSingleton;
}

// Z_Construct_UPackage__Script_MovieRenderPipelineSettings @ 14ddaf980

UPackage * __cdecl Z_Construct_UPackage__Script_MovieRenderPipelineSettings(void)

{
  if (Z_Registration_Info_UPackage__Script_MovieRenderPipelineSettings.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MovieRenderPipelineSettings.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MovieRenderPipelineSettings.OuterSingleton;
}

// Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted @ 14ddaf9c0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14ddafa20

void * __thiscall
FMovieRenderPipelineSettingsModule::_scalar_deleting_destructor_
          (FMovieRenderPipelineSettingsModule *this,uint param_1)

{
  *this = (FMovieRenderPipelineSettingsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UMoviePipelineBurnInSetting @ 14ddafb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineBurnInSetting(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.OuterSingleton;
}

// NewProp_bCompositeOntoFinalImage_SetBit @ 14ddafb60

void __cdecl
Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_bCompositeOntoFinalImage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelineConsoleVariableSetting @ 14ddafb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineConsoleVariableSetting(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14ddafbb0

void __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable @ 14ddafbc0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ddafcc0

void __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable @ 14ddafcd0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables @ 14ddafd10

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRemoveAllInstances_SetBit @ 14ddafd50

void __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::
NewProp_bRemoveAllInstances_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14ddafd60

void __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable @ 14ddafd70

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14ddafdb0

void __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics
::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14ddafdc0

void __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState @ 14ddafdd0

UFunction * __cdecl
Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineBurnInWidget_NoRegister @ 14ddafed0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineBurnInWidget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineBurnInWidget",
               &Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton,
               UMoviePipelineBurnInWidget::StaticRegisterNativesUMoviePipelineBurnInWidget,0x3a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineBurnInWidget>,
               InternalVTableHelperCtorCaller<UMoviePipelineBurnInWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineWidgetRenderer @ 14ddb0050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineWidgetRenderer(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.OuterSingleton;
}

// ConstructItems<FMoviePipelineConsoleVariableEntry,FMoviePipelineConsoleVariableEntry,int> @ 14ddb0090

void __cdecl
ConstructItems<FMoviePipelineConsoleVariableEntry,FMoviePipelineConsoleVariableEntry,int>
          (void *param_1,FMoviePipelineConsoleVariableEntry *param_2,int param_3)

{
  undefined1 *puVar1;
  bool *pbVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x14);
    pbVar2 = &param_2->bIsEnabled;
    do {
      FString::FString((FString *)(puVar1 + -0x14),
                       (FString *)(puVar1 + (longlong)param_2 + (-0x14 - (longlong)param_1)));
      *(float *)(puVar1 + -4) = *(float *)(pbVar2 + -4);
      *puVar1 = *pbVar2;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x18;
      pbVar2 = pbVar2 + 0x18;
    } while (param_3 != 0);
  }
  return;
}

// CreateWidget<UMoviePipelineBurnInWidget,UWorld_*> @ 14ddb0110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMoviePipelineBurnInWidget * __cdecl
CreateWidget<UMoviePipelineBurnInWidget,UWorld_*>
          (UWorld *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CreateWidget> FVar9;
  TStatId TVar10;
  UClass *pUVar11;
  UUserWidget *pUVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UObjectBaseUtility *pUVar13;
  undefined4 uVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_CreateWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                       L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar9;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  bVar5 = false;
  bVar7 = false;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_14ddb0268:
    bVar6 = false;
    LVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidget.h"
                   ,0x728);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ddb0268;
    local_res8 = LVar15;
    local_58 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar6 = true;
    uVar14 = local_58._0_4_;
  }
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_CreateWidget");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                    L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar3 == 0) {
LAB_14ddb0321:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14ddb0321;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14ddb0321;
    pUVar13 = *(UObjectBaseUtility **)param_2.Class.field0_0x0;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,pUVar13,TVar10);
  if (param_1 != (UWorld *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (UUserWidget *)0x0) {
      pUVar11 = UMoviePipelineBurnInWidget::StaticClass();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_14ddb0393;
    }
  }
  pUVar12 = (UUserWidget *)0x0;
LAB_14ddb0393:
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = uVar14;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return (UMoviePipelineBurnInWidget *)pUVar12;
}

// Enqueue<TRenderCommandTag<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::TSTR_BurnInRenderTargetResolveCommand101>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ddb04e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl_::__l13::TSTR_BurnInRenderTargetResolveCommand101>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::TSTR_BurnInRenderTargetResolveCommand101>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14ddb0631;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14ddb0825;
  }
LAB_14ddb0631:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14ddb070f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ddb070f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14ddb0825:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::TSTR_BurnInRenderTargetResolveCommand81>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ddb0860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl_::__l10::TSTR_BurnInRenderTargetResolveCommand81>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::TSTR_BurnInRenderTargetResolveCommand81>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14ddb09b1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14ddb0ba5;
  }
LAB_14ddb09b1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14ddb0a8f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ddb0a8f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14ddb0ba5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindLastByPredicate<`UMoviePipelineConsoleVariableSetting::AddOrUpdateConsoleVariable'::__l2::<lambda_1>_> @ 14ddb0be0

int __thiscall
TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UMoviePipelineConsoleVariableSetting::AddOrUpdateConsoleVariable_::__l2::<lambda_1>_>
          (TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar1 + (longlong)param_2 * 0x18;
  if (pFVar6 != pFVar1) {
    iVar4 = ((param_1.Name)->Data).ArrayNum;
    do {
      iVar5 = *(int *)(pFVar6 + -0x10);
      pFVar6 = pFVar6 + -0x18;
      if (iVar5 == iVar4) {
        if (iVar5 < 2) goto LAB_14ddb0c8e;
        iVar5 = wcscmp(*(wchar_t **)pFVar6,(wchar_t *)((param_1.Name)->Data).AllocatorInstance.Data)
        ;
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = iVar4 + iVar5 == 1;
      }
      if (bVar3) {
LAB_14ddb0c8e:
        return (int)(((longlong)pFVar6 - (longlong)pFVar1) / 0x18);
      }
    } while (pFVar6 != pFVar1);
  }
  return -1;
}

// FindLastByPredicate<`UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState'::__l2::<lambda_1>_> @ 14ddb0cc0

int __thiscall
TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState_::__l2::<lambda_1>_>
          (TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar1 + (longlong)param_2 * 0x18;
  if (pFVar6 != pFVar1) {
    iVar4 = ((param_1.Name)->Data).ArrayNum;
    do {
      iVar5 = *(int *)(pFVar6 + -0x10);
      pFVar6 = pFVar6 + -0x18;
      if (iVar5 == iVar4) {
        if (iVar5 < 2) goto LAB_14ddb0d6e;
        iVar5 = wcscmp(*(wchar_t **)pFVar6,(wchar_t *)((param_1.Name)->Data).AllocatorInstance.Data)
        ;
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = iVar4 + iVar5 == 1;
      }
      if (bVar3) {
LAB_14ddb0d6e:
        return (int)(((longlong)pFVar6 - (longlong)pFVar1) / 0x18);
      }
    } while (pFVar6 != pFVar1);
  }
  return -1;
}

// FindLastByPredicate<`UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable'::__l2::<lambda_2>_> @ 14ddb0da0

int __thiscall
TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable_::__l2::<lambda_2>_>
          (TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *this,
          <lambda_2> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar1 + (longlong)param_2 * 0x18;
  if (pFVar6 != pFVar1) {
    iVar4 = ((param_1.Name)->Data).ArrayNum;
    do {
      iVar5 = *(int *)(pFVar6 + -0x10);
      pFVar6 = pFVar6 + -0x18;
      if (iVar5 == iVar4) {
        if (iVar5 < 2) goto LAB_14ddb0e4e;
        iVar5 = wcscmp(*(wchar_t **)pFVar6,(wchar_t *)((param_1.Name)->Data).AllocatorInstance.Data)
        ;
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = iVar4 + iVar5 == 1;
      }
      if (bVar3) {
LAB_14ddb0e4e:
        return (int)(((longlong)pFVar6 - (longlong)pFVar1) / 0x18);
      }
    } while (pFVar6 != pFVar1);
  }
  return -1;
}

// InternalConstructor<UMoviePipelineBurnInSetting> @ 14ddb0ee0

void __cdecl InternalConstructor<UMoviePipelineBurnInSetting>(FObjectInitializer *param_1)

{
  UMoviePipelineRenderPass *this;
  TStringView<wchar_t> local_18;
  
  this = (UMoviePipelineRenderPass *)param_1->Obj;
  if (this != (UMoviePipelineRenderPass *)0x0) {
    UMoviePipelineRenderPass::UMoviePipelineRenderPass(this);
    *(undefined ***)this = &___7UMoviePipelineBurnInSetting__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    local_18.Size = UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset.Data.ArrayNum + -1;
    if (UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr =
         (wchar_t *)
         UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath((FSoftObjectPath *)(this + 1),&local_18);
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    this[1].field_0x20 = 1;
  }
  return;
}

// InternalConstructor<UMoviePipelineBurnInWidget> @ 14ddb0fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<UMoviePipelineBurnInWidget>(FObjectInitializer *param_1)

{
  UUserWidget *this;
  
  this = (UUserWidget *)param_1->Obj;
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&UMoviePipelineBurnInWidget::_vftable__for__UVisual__;
    this->_padding_ =
         (longlong)&UMoviePipelineBurnInWidget::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UMoviePipelineBurnInWidget__6B_;
  }
  return;
}

// InternalConstructor<UMoviePipelineConsoleVariableSetting> @ 14ddb0ff0

void __cdecl InternalConstructor<UMoviePipelineConsoleVariableSetting>(FObjectInitializer *param_1)

{
  UMoviePipelineSetting *this;
  
  this = (UMoviePipelineSetting *)param_1->Obj;
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this);
    this->_padding_ = (longlong)&___7UMoviePipelineConsoleVariableSetting__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CachedPipeline.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].bEnabled = false;
    this[1].ValidationState = Valid;
    *(undefined6 *)&this[1].field_0x32 = 0;
    this[1].ValidationResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ValidationResults.ArrayNum = 0;
    this[1].ValidationResults.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMoviePipelineWidgetRenderer> @ 14ddb1060

void __cdecl InternalConstructor<UMoviePipelineWidgetRenderer>(FObjectInitializer *param_1)

{
  UMoviePipelineRenderPass *this;
  
  this = (UMoviePipelineRenderPass *)param_1->Obj;
  if (this != (UMoviePipelineRenderPass *)0x0) {
    UMoviePipelineRenderPass::UMoviePipelineRenderPass(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UMoviePipelineWidgetRenderer__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMoviePipelineBurnInSetting> @ 14ddb10a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineBurnInSetting>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineRenderPass *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineBurnInSetting::GetPrivateStaticClass();
  this = (UMoviePipelineRenderPass *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineRenderPass *)0x0) {
    UMoviePipelineRenderPass::UMoviePipelineRenderPass(this,param_1);
    *(undefined ***)this = &___7UMoviePipelineBurnInSetting__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineBurnInWidget> @ 14ddb1190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineBurnInWidget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineBurnInWidget::GetPrivateStaticClass();
  this = (UUserWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&UMoviePipelineBurnInWidget::_vftable__for__UVisual__;
    this->_padding_ =
         (longlong)&UMoviePipelineBurnInWidget::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UMoviePipelineBurnInWidget__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineConsoleVariableSetting> @ 14ddb1260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineConsoleVariableSetting>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineSetting *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineConsoleVariableSetting::GetPrivateStaticClass();
  this = (UMoviePipelineSetting *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelineConsoleVariableSetting__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CachedPipeline.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].bEnabled = false;
    this[1].ValidationState = Valid;
    *(undefined6 *)&this[1].field_0x32 = 0;
    this[1].ValidationResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ValidationResults.ArrayNum = 0;
    this[1].ValidationResults.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineWidgetRenderer> @ 14ddb1350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineWidgetRenderer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineRenderPass *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineWidgetRenderer::GetPrivateStaticClass();
  this = (UMoviePipelineRenderPass *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineRenderPass *)0x0) {
    UMoviePipelineRenderPass::UMoviePipelineRenderPass(this,param_1);
    *(undefined ***)this = &___7UMoviePipelineWidgetRenderer__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MakeShared<FImagePixelDataPayload,1> @ 14ddb1410

TSharedRef<FImagePixelDataPayload,1> * __cdecl
MakeShared<FImagePixelDataPayload,1>(TSharedRef<FImagePixelDataPayload,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar1 = operator_new(0x300);
  pTVar2 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImagePixelDataPayload___00_SharedPointerInternals__6B_
    ;
    pTVar1[1]._padding_ = (longlong)&___7FImagePixelDataPayload__6B_;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0xb]._padding_ = 0;
    FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
              ((FMoviePipelineFrameOutputState *)(pTVar1 + 0xe));
    pTVar1[0x27].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x27].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x21]._padding_ = (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
    pTVar1[0x28]._padding_ = 0;
    pTVar1[0x28].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x28].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x29]._padding_ = 0;
    pTVar1[0x29].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x29].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2a]._padding_ = 0;
    pTVar1[0x2a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2b]._padding_ = 0;
    pTVar1[0x2c]._padding_ = 0;
    pTVar1[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2d]._padding_ = 0;
    pTVar1[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar1[0x2e]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar1[0x2e]._padding_ + 4) = 0x7fffffff;
    *(undefined1 *)&pTVar1[0x2e].SharedReferenceCount = 0;
    pTVar1[0x2f]._padding_ = 0;
    pTVar1[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2 = pTVar1;
  }
  TSharedRef<FImagePixelDataPayload,1>::TSharedRef<FImagePixelDataPayload,1>
            (__return_storage_ptr__,(FImagePixelDataPayload *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// RemoveAll<`UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable'::__l5::<lambda_1>_> @ 14ddb1540

int __thiscall
TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
RemoveAll<_UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable_::__l5::<lambda_1>_>
          (TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int local_res18;
  
  iVar1 = this->ArrayNum;
  lVar5 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar4 = (param_1->Name->Data).ArrayNum;
  iVar10 = 0;
  iVar7 = *(int *)(pFVar2 + 8);
  local_res18 = 0;
  if (iVar7 == iVar4) {
    if (iVar7 < 2) {
      bVar11 = false;
    }
    else {
      iVar4 = wcscmp(*(wchar_t **)pFVar2,(wchar_t *)(param_1->Name->Data).AllocatorInstance.Data);
      bVar11 = iVar4 != 0;
    }
  }
  else {
    bVar11 = iVar7 + iVar4 != 1;
  }
  lVar6 = 0;
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 1;
    lVar6 = lVar6 + 1;
    if (lVar6 < lVar5) {
      pFVar3 = param_1->Name;
      iVar8 = (pFVar3->Data).ArrayNum;
      pFVar9 = pFVar2 + lVar6 * 0x18;
      do {
        iVar10 = *(int *)(pFVar9 + 8);
        if (iVar10 == iVar8) {
          if (iVar10 < 2) {
            bVar12 = false;
          }
          else {
            iVar10 = wcscmp(*(wchar_t **)pFVar9,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
            bVar12 = iVar10 != 0;
          }
        }
        else {
          bVar12 = iVar8 + iVar10 != 1;
        }
        iVar10 = local_res18;
        if (bVar11 != bVar12) break;
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 1;
        pFVar9 = pFVar9 + 0x18;
      } while (lVar6 < lVar5);
    }
    iVar8 = iVar7 - iVar4;
    if (bVar11 == false) {
      DestructItems<FMoviePipelineConsoleVariableEntry,int>
                ((FMoviePipelineConsoleVariableEntry *)(pFVar2 + (longlong)iVar4 * 0x18),iVar8);
    }
    else {
      if (iVar10 != iVar4) {
        memmove(pFVar2 + (longlong)iVar10 * 0x18,pFVar2 + (longlong)iVar4 * 0x18,
                (longlong)iVar8 * 0x18);
      }
      iVar10 = iVar10 + iVar8;
      local_res18 = iVar10;
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar4 = iVar7;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar10;
      return iVar1 - iVar10;
    }
  } while( true );
}

// ~TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>,1,1> @ 14ddb1a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl_::__l10::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::`10'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2d8));
  if (*(void **)((longlong)this + 0x2b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2b0));
  }
  if (*(void **)((longlong)this + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2a0));
  }
  FMoviePipelineRenderPassMetrics::~FMoviePipelineRenderPassMetrics
            ((FMoviePipelineRenderPassMetrics *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>,1,1> @ 14ddb1a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl_::__l13::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::`13'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2d8));
  if (*(void **)((longlong)this + 0x2b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2b0));
  }
  if (*(void **)((longlong)this + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2a0));
  }
  FMoviePipelineRenderPassMetrics::~FMoviePipelineRenderPassMetrics
            ((FMoviePipelineRenderPassMetrics *)((longlong)this + 8));
  return;
}

// `vector_deleting_destructor'`adjustor{432}' @ 14ddb2598

/* [thunk]:public: virtual void * __ptr64 __cdecl UMoviePipelineBurnInWidget::`vector deleting
   destructor'`adjustor{432}' (unsigned int) __ptr64 */

void * __thiscall
UMoviePipelineBurnInWidget::_vector_deleting_destructor__adjustor_432__
          (UMoviePipelineBurnInWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMoviePipelineBurnInWidget *)&this[-1].field_0x1f8,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ddb25ac

/* [thunk]:public: virtual void * __ptr64 __cdecl UMoviePipelineBurnInWidget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMoviePipelineBurnInWidget::_vector_deleting_destructor__adjustor_40__
          (UMoviePipelineBurnInWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMoviePipelineBurnInWidget *)&this[-1].field_0x380,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ddb25c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::`10'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2d8));
  if (*(void **)((longlong)this + 0x2b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2b0));
  }
  if (*(void **)((longlong)this + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2a0));
  }
  FMoviePipelineRenderPassMetrics::~FMoviePipelineRenderPassMetrics
            ((FMoviePipelineRenderPassMetrics *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ddb2650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::`13'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2d8));
  if (*(void **)((longlong)this + 0x2b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2b0));
  }
  if (*(void **)((longlong)this + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2a0));
  }
  FMoviePipelineRenderPassMetrics::~FMoviePipelineRenderPassMetrics
            ((FMoviePipelineRenderPassMetrics *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ddb26e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImagePixelDataPayload,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FImagePixelDataPayload,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ddb2720

void * __thiscall
FImagePixelDataPayload::_scalar_deleting_destructor_(FImagePixelDataPayload *this,uint param_1)

{
  ~FImagePixelDataPayload(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ddb2760

void * __thiscall
UMoviePipelineBurnInSetting::_scalar_deleting_destructor_
          (UMoviePipelineBurnInSetting *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineBurnInSetting__6B_;
  pFVar1 = (this->BurnInWidgetInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetRenderer).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->BurnInClass).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UMoviePipelineRenderPass::~UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ddb2800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UMoviePipelineBurnInWidget::_scalar_deleting_destructor_
          (UMoviePipelineBurnInWidget *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMoviePipelineBurnInWidget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ddb2880

void * __thiscall
UMoviePipelineConsoleVariableSetting::_scalar_deleting_destructor_
          (UMoviePipelineConsoleVariableSetting *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineConsoleVariableSetting__6B_;
  DestructItems<FMoviePipelineConsoleVariableEntry,int>
            ((FMoviePipelineConsoleVariableEntry *)
             (this->MergedConsoleVariables).AllocatorInstance.Data,
             (this->MergedConsoleVariables).ArrayNum);
  pFVar1 = (this->MergedConsoleVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousConsoleVariableValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMoviePipelineConsoleVariableEntry,int>
            ((FMoviePipelineConsoleVariableEntry *)(this->CVars).AllocatorInstance.Data,
             (this->CVars).ArrayNum);
  pFVar1 = (this->CVars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EndConsoleCommands).AllocatorInstance.Data,
             (this->EndConsoleCommands).ArrayNum);
  pFVar1 = (this->EndConsoleCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->StartConsoleCommands).AllocatorInstance.Data,
             (this->StartConsoleCommands).ArrayNum);
  pFVar1 = (this->StartConsoleCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConsoleVariablePresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ddb2980

void * __thiscall
UMoviePipelineWidgetRenderer::_scalar_deleting_destructor_
          (UMoviePipelineWidgetRenderer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMoviePipelineWidgetRenderer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetRenderer).SharedReferenceCount.ReferenceController);
  UMoviePipelineRenderPass::~UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineBurnInSetting @ 14ddb3460

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineBurnInSetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineBurnInWidget @ 14ddb3470

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineBurnInWidget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineConsoleVariableSetting @ 14ddb3480

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineConsoleVariableSetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineWidgetRenderSetting @ 14ddb3490

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineWidgetRenderSetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineSettings_init @ 14ddb34a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineSettings_init(void)

{
  return;
}

// Z_Construct_UClass_UMoviePipelineBurnInSetting_NoRegister @ 14ddb6e80

UClass * __cdecl Z_Construct_UClass_UMoviePipelineBurnInSetting_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineBurnInSetting",
               &Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton,
               UMoviePipelineBurnInSetting::StaticRegisterNativesUMoviePipelineBurnInSetting,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineBurnInSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineBurnInSetting>,local_res8,
               UMoviePipelineRenderPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister @ 14ddb6f40

UClass * __cdecl Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineConsoleVariableSetting",
               &Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton,
               UMoviePipelineConsoleVariableSetting::
               StaticRegisterNativesUMoviePipelineConsoleVariableSetting,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineConsoleVariableSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineConsoleVariableSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineWidgetRenderer_NoRegister @ 14ddb7000

UClass * __cdecl Z_Construct_UClass_UMoviePipelineWidgetRenderer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineWidgetRenderer",
               &Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton,
               UMoviePipelineWidgetRenderer::StaticRegisterNativesUMoviePipelineWidgetRenderer,0x68,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineWidgetRenderer>,
               InternalVTableHelperCtorCaller<UMoviePipelineWidgetRenderer>,local_res8,
               UMoviePipelineRenderPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton;
}

// IMPLEMENT_MODULE_MovieRenderPipelineSettings @ 14ddb7800

void __cdecl IMPLEMENT_MODULE_MovieRenderPipelineSettings(void)

{
  return;
}

// DefaultBurnInWidgetAsset'' @ 15045e830

void __cdecl
`dynamic_atexit_destructor_for_'UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data;
  if (UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMoviePipelineBurnInSetting::DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data !=
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

