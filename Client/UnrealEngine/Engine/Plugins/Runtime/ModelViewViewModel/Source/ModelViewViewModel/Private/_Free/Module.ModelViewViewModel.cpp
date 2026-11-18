// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 385

// LogName'' @ 1411cbb60

void __cdecl `dynamic_initializer_for_'UE::MVVM::FMessageLog::LogName__(void)

{
  ::FName::FName(&UE::MVVM::FMessageLog::LogName,"Model View Viewmodel");
  return;
}

// OnLibraryBindingExecuted'' @ 1411cbb80

void __cdecl `dynamic_initializer_for_'UE::MVVM::FDebugging::OnLibraryBindingExecuted__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::MVVM::FDebugging::OnLibraryBindingExecuted__);
  return;
}

// OnViewBeginDestruction'' @ 1411cbba0

void __cdecl `dynamic_initializer_for_'UE::MVVM::FDebugging::OnViewBeginDestruction__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::MVVM::FDebugging::OnViewBeginDestruction__);
  return;
}

// OnViewConstructed'' @ 1411cbbc0

void __cdecl `dynamic_initializer_for_'UE::MVVM::FDebugging::OnViewConstructed__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::MVVM::FDebugging::OnViewConstructed__);
  return;
}

// OnViewSourceValueChanged'' @ 1411cbbe0

void __cdecl `dynamic_initializer_for_'UE::MVVM::FDebugging::OnViewSourceValueChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::MVVM::FDebugging::OnViewSourceValueChanged__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultEvaluationMode'' @ 1411cbc00

void __cdecl UE::MVVM::Private::_dynamic_initializer_for__CVarDefaultEvaluationMode__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarDefaultEvaluationMode,L"MVVM.DefaultExecutionMode",3,
             L"The default evaluation mode of a MVVM binding. Must restart if changed.",4);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultEvaluationMode__);
  return;
}

// `dynamic_initializer_for_'LogMVVM'' @ 1411cbc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMVVM__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMVVM,L"LogMVVM",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMVVM__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantModelViewViewModel'' @ 1411cbc90

void __cdecl _dynamic_initializer_for__ModuleRegistrantModelViewViewModel__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ModelViewViewModel";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ModelViewViewModel",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FModelViewViewModelModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_BlueprintGetter'' @ 1411cbce0

void __cdecl
UE::MVVM::BindingHelper::Private::_dynamic_initializer_for__NAME_BlueprintGetter__(void)

{
  ::FName::FName(&NAME_BlueprintGetter,"BlueprintGetter");
  return;
}

// `dynamic_initializer_for_'NAME_BlueprintGetter'' @ 1411cbd00

void __cdecl
UE::MVVM::FieldPathHelper::Private::_dynamic_initializer_for__NAME_BlueprintGetter__(void)

{
  ::FName::FName(&NAME_BlueprintGetter,"BlueprintGetter");
  return;
}

// `dynamic_initializer_for_'NAME_BlueprintPrivate'' @ 1411cbd20

void __cdecl
UE::MVVM::BindingHelper::Private::_dynamic_initializer_for__NAME_BlueprintPrivate__(void)

{
  ::FName::FName(&NAME_BlueprintPrivate,"BlueprintPrivate");
  return;
}

// `dynamic_initializer_for_'NAME_BlueprintSetter'' @ 1411cbd40

void __cdecl
UE::MVVM::BindingHelper::Private::_dynamic_initializer_for__NAME_BlueprintSetter__(void)

{
  ::FName::FName(&NAME_BlueprintSetter,"BlueprintSetter");
  return;
}

// `dynamic_initializer_for_'NAME_BlueprintSetter'' @ 1411cbd60

void __cdecl
UE::MVVM::FieldPathHelper::Private::_dynamic_initializer_for__NAME_BlueprintSetter__(void)

{
  ::FName::FName(&NAME_BlueprintSetter,"BlueprintSetter");
  return;
}

// `dynamic_initializer_for_'NAME_DeprecatedFunction'' @ 1411cbd80

void __cdecl
UE::MVVM::BindingHelper::Private::_dynamic_initializer_for__NAME_DeprecatedFunction__(void)

{
  ::FName::FName(&NAME_DeprecatedFunction,"DeprecatedFunction");
  return;
}

// `dynamic_initializer_for_'NAME_UMVVMViewModelContextResolver_K2_CreateInstance'' @ 1411cbda0

void __cdecl _dynamic_initializer_for__NAME_UMVVMViewModelContextResolver_K2_CreateInstance__(void)

{
  FName::FName(&NAME_UMVVMViewModelContextResolver_K2_CreateInstance,L"K2_CreateInstance");
  return;
}

// `dynamic_initializer_for_'NAME_UMVVMViewModelContextResolver_K2_DestroyInstance'' @ 1411cbdc0

void __cdecl _dynamic_initializer_for__NAME_UMVVMViewModelContextResolver_K2_DestroyInstance__(void)

{
  FName::FName(&NAME_UMVVMViewModelContextResolver_K2_DestroyInstance,L"K2_DestroyInstance");
  return;
}

// `dynamic_initializer_for_'RecursiveDetector'' @ 1411cbde0

void __cdecl UE::MVVM::Private::_dynamic_initializer_for__RecursiveDetector__(void)

{
  atexit(_dynamic_atexit_destructor_for__RecursiveDetector__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1411cbe00

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

// `dynamic_initializer_for_'StatPtr_STAT_MVVMBindingTick'' @ 1411cbe90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MVVMBindingTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MVVMBindingTick == (FThreadSafeStaticStat<FStat_STAT_MVVMBindingTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MVVMBindingTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MVVMBindingTick,*pFVar1,L"MVVM Bindings",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Delayed'' @ 1411cbf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Delayed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Delayed ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_Delayed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_ExecuteBinding_Delayed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Delayed,
               *pFVar1,L"ExecuteBinding Delayed","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
               L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Tick'' @ 1411cbfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_ExecuteBinding_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Tick,*pFVar1,
               L"ExecuteBinding Tick","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"UMG Viewmodel",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged'' @ 1411cc040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged,
               *pFVar1,L"ExecuteBinding ValueChanged","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
               L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_ExecuteViewModel'' @ 1411cc0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_ExecuteViewModel__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_ExecuteViewModel ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteViewModel>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_ExecuteViewModel");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_ExecuteViewModel,*pFVar1,
               L"ExecuteViewModel","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"UMG Viewmodel",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_InitializeBindings'' @ 1411cc160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_InitializeBindings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_InitializeBindings ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_InitializeBindings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_InitializeBindings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_InitializeBindings,*pFVar1,
               L"InitializeBindings","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"UMG Viewmodel",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_InitializeSources'' @ 1411cc1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_InitializeSources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_InitializeSources ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_InitializeSources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_InitializeSources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_InitializeSources,*pFVar1,
               L"InitializeSources","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"UMG Viewmodel",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_LoadLibrary'' @ 1411cc280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_LoadLibrary__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_LoadLibrary ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_LoadLibrary>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_LoadLibrary");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_LoadLibrary,*pFVar1,
               L"Load Library","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"UMG Viewmodel",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_SetSource'' @ 1411cc310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_SetSource__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_SetSource ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_SetSource>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_SetSource");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_SetSource,*pFVar1,
               L"SetSource","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"UMG Viewmodel",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_UninitializeBindings'' @ 1411cc3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_UninitializeBindings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_UninitializeBindings ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_UninitializeBindings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_UninitializeBindings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_UninitializeBindings,*pFVar1
               ,L"UninitializeBindings","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
               L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UMG_Viewmodel_UninitializeSources'' @ 1411cc430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMG_Viewmodel_UninitializeSources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMG_Viewmodel_UninitializeSources ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_UninitializeSources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMG_Viewmodel_UninitializeSources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_UninitializeSources,*pFVar1,
               L"UninitializeSources","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"UMG Viewmodel",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h__Script_ModelViewViewModel_2721777618'' @ 1411cc4c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h__Script_ModelViewViewModel_2721777618__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h__Script_ModelViewViewModel_868569773'' @ 1411cc500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h__Script_ModelViewViewModel_868569773__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMSlateBrushConversionLibrary_h__Script_ModelViewViewModel_4074660919'' @ 1411cc540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMSlateBrushConversionLibrary_h__Script_ModelViewViewModel_4074660919__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMSlateBrushConversionLibrary_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMCompiledBindingLibrary_h__Script_ModelViewViewModel_3828004036'' @ 1411cc580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMCompiledBindingLibrary_h__Script_ModelViewViewModel_3828004036__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMCompiledBindingLibrary_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h__Script_ModelViewViewModel_3524013102'' @ 1411cc5c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h__Script_ModelViewViewModel_3524013102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewClassExtension_h__Script_ModelViewViewModel_351731176'' @ 1411cc600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewClassExtension_h__Script_ModelViewViewModel_351731176__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewClassExtension_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewListViewBaseExtension_h__Script_ModelViewViewModel_1336745780'' @ 1411cc640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewListViewBaseExtension_h__Script_ModelViewViewModel_1336745780__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewListViewBaseExtension_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewPanelWidgetExtension_h__Script_ModelViewViewModel_302880896'' @ 1411cc680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewPanelWidgetExtension_h__Script_ModelViewViewModel_302880896__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Extensions_MVVMViewPanelWidgetExtension_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h__Script_ModelViewViewModel_1617997814'' @ 1411cc6c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h__Script_ModelViewViewModel_1617997814__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h__Script_ModelViewViewModel_2740545967'' @ 1411cc700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h__Script_ModelViewViewModel_2740545967__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h__Script_ModelViewViewModel_2366532596'' @ 1411cc740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h__Script_ModelViewViewModel_2366532596__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h__Script_ModelViewViewModel_1977856345'' @ 1411cc780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h__Script_ModelViewViewModel_1977856345__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMAvailableBinding_h__Script_ModelViewViewModel_836160911'' @ 1411cc7c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMAvailableBinding_h__Script_ModelViewViewModel_836160911__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMAvailableBinding_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h__Script_ModelViewViewModel_3035094649'' @ 1411cc800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h__Script_ModelViewViewModel_3035094649__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h__Script_ModelViewViewModel_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingName_h__Script_ModelViewViewModel_2579247084'' @ 1411cc850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingName_h__Script_ModelViewViewModel_2579247084__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingName_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMConditionOperation_h__Script_ModelViewViewModel_2207129930'' @ 1411cc890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMConditionOperation_h__Script_ModelViewViewModel_2207129930__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMConditionOperation_h__Script_ModelViewViewModel_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMEventField_h__Script_ModelViewViewModel_1717253255'' @ 1411cc8e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMEventField_h__Script_ModelViewViewModel_1717253255__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMEventField_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h__Script_ModelViewViewModel_228801963'' @ 1411cc920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h__Script_ModelViewViewModel_228801963__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h__Script_ModelViewViewModel_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h__Script_ModelViewViewModel_2809757379'' @ 1411cc970

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h__Script_ModelViewViewModel_2809757379__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContextInstance_h__Script_ModelViewViewModel_2795491457'' @ 1411cc9c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContextInstance_h__Script_ModelViewViewModel_2795491457__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContextInstance_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContext_h__Script_ModelViewViewModel_1172508412'' @ 1411cca00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContext_h__Script_ModelViewViewModel_1172508412__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelContext_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMInstancedViewModelGeneratedClass_h__Script_ModelViewViewModel_1111291391'' @ 1411cca40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMInstancedViewModelGeneratedClass_h__Script_ModelViewViewModel_1111291391__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMInstancedViewModelGeneratedClass_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h__Script_ModelViewViewModel_573884615'' @ 1411cca80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h__Script_ModelViewViewModel_573884615__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h__Script_ModelViewViewModel_1009369644'' @ 1411ccac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h__Script_ModelViewViewModel_1009369644__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewDeprecatedTypes_h__Script_ModelViewViewModel_1552139443'' @ 1411ccb10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewDeprecatedTypes_h__Script_ModelViewViewModel_1552139443__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewDeprecatedTypes_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h__Script_ModelViewViewModel_160753022'' @ 1411ccb50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h__Script_ModelViewViewModel_160753022__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewTypes_h__Script_ModelViewViewModel_1516778102'' @ 1411ccb90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewTypes_h__Script_ModelViewViewModel_1516778102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewTypes_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h__Script_ModelViewViewModel_2324014491'' @ 1411ccbd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h__Script_ModelViewViewModel_2324014491__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelViewViewModel",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h__Script_ModelViewViewModel_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h__Script_ModelViewViewModel_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ModelViewViewModel'' @ 1411ccc20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ModelViewViewModel__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf4ce03e;
  local_res8[0].DeclarationsHash = 0x30047a09;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ModelViewViewModel,L"/Script/ModelViewViewModel",
             &Z_Registration_Info_UPackage__Script_ModelViewViewModel,local_res8);
  return;
}

// NewStructOps @ 14a735770

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_SourceKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_SourceKey,&UE::CoreUObject::Private::Construct<FMVVMViewClass_SourceKey>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_SourceKey>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_SourceKey>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_SourceKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate @ 14a7357b0

UFunction * __cdecl
Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a735830

void __cdecl
Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue @ 14a735900

UFunction * __cdecl Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a735940

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_BindingKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_BindingKey,&UE::CoreUObject::Private::Construct<FMVVMViewClass_BindingKey>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_BindingKey>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_BindingKey>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_BindingKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a735980

void * __cdecl
Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateBindingKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_EvaluateBindingKey,&UE::CoreUObject::Private::Construct<FMVVMViewClass_EvaluateBindingKey>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_EvaluateBindingKey>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_EvaluateBindingKey>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_EvaluateBindingKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMVVMViewModelContextResolver @ 14a7359c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMViewModelContextResolver(void)

{
  if (Z_Registration_Info_UClass_UMVVMViewModelContextResolver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMViewModelContextResolver.OuterSingleton,
               &Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelContextResolver.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance @ 14a735a00

UFunction * __cdecl Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a735b00

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_EventKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_EventKey,&UE::CoreUObject::Private::Construct<FMVVMViewClass_EventKey>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_EventKey>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_EventKey>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_EventKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_DestroyInstance @ 14a735b40

UFunction * __cdecl Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_DestroyInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_DestroyInstance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMConversionLibrary @ 14a735b80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMConversionLibrary(void)

{
  if (Z_Registration_Info_UClass_UMVVMConversionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMConversionLibrary.OuterSingleton,
               &Z_Construct_UClass_UMVVMConversionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMConversionLibrary.OuterSingleton;
}

// NewProp_bIsVisible_SetBit @ 14a735bc0

void __cdecl
Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::
NewProp_bIsVisible_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14a735bd0

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_ConditionKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_ConditionKey,&UE::CoreUObject::Private::Construct<FMVVMViewClass_ConditionKey>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_ConditionKey>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_ConditionKey>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_ConditionKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility @ 14a735c10

UFunction * __cdecl Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a735c50

void * __cdecl Z_Construct_UScriptStruct_FMVVMView_SourceKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMView_SourceKey,&UE::CoreUObject::Private::Construct<FMVVMView_SourceKey>,&UE::CoreUObject::Private::ConstructForTests<FMVVMView_SourceKey>,&UE::CoreUObject::Private::Destruct<FMVVMView_SourceKey>,&UE::CoreUObject::Private::Copy<FMVVMView_SourceKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMVVMFontConversionLibrary @ 14a735e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMFontConversionLibrary(void)

{
  if (Z_Registration_Info_UClass_UMVVMFontConversionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMFontConversionLibrary.OuterSingleton,
               &Z_Construct_UClass_UMVVMFontConversionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMFontConversionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetScalarParameter @ 14a735f70

UFunction * __cdecl Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetScalarParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetScalarParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetScalarParameterMID @ 14a736280

UFunction * __cdecl
Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetScalarParameterMID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetScalarParameterMID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetTextureParameter @ 14a736300

UFunction * __cdecl Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetTextureParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetTextureParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_ModelViewViewModel @ 14a736340

UPackage * __cdecl Z_Construct_UPackage__Script_ModelViewViewModel(void)

{
  if (Z_Registration_Info_UPackage__Script_ModelViewViewModel.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ModelViewViewModel.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ModelViewViewModel.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetTextureParameterMID @ 14a736400

UFunction * __cdecl
Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetTextureParameterMID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetTextureParameterMID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EMVVMBindingMode_StaticEnum @ 14a736440

UEnum * __cdecl EMVVMBindingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode,(UObject *)pUVar1,
                       L"EMVVMBindingMode");
  }
  return Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMVVMAvailableBinding @ 14a736480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMAvailableBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMAvailableBinding.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMAvailableBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMAvailableBinding.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMVVMAvailableBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMBindingName @ 14a736500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMBindingName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMBindingName.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMBindingName.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMBindingName_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMBindingName.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMBindingName.InnerSingleton;
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

// Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameter @ 14a736580

UFunction * __cdecl Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsReadable_SetBit @ 14a7365c0

void __cdecl
Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsReadable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bIsWritable_SetBit @ 14a7365d0

void __cdecl
Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bIsWritable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bHasNotify_SetBit @ 14a7365e0

void __cdecl
Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewProp_bHasNotify_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewStructOps @ 14a7365f0

void * __cdecl Z_Construct_UScriptStruct_FMVVMAvailableBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMAvailableBinding,&UE::CoreUObject::Private::Construct<FMVVMAvailableBinding>,&UE::CoreUObject::Private::ConstructForTests<FMVVMAvailableBinding>,&UE::CoreUObject::Private::Destruct<FMVVMAvailableBinding>,&UE::CoreUObject::Private::Copy<FMVVMAvailableBinding>,&UE::CoreUObject::Private::GetStructTypeHash<FMVVMAvailableBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EMVVMConditionOperation_StaticEnum @ 14a736630

UEnum * __cdecl EMVVMConditionOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMVVMConditionOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UEnum_EMVVMConditionOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMConditionOperation,
                       (UObject *)pUVar1,L"EMVVMConditionOperation");
  }
  return Z_Registration_Info_UEnum_EMVVMConditionOperation.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameter_FColor @ 14a736670

UFunction * __cdecl
Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameter_FColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameter_FColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMViewModelCollectionObject @ 14a736760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMViewModelCollectionObject(void)

{
  if (Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.OuterSingleton,
               &Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMVVMViewModelCollection @ 14a7367a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewModelCollection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewModelCollection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewModelCollection.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewModelCollection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewModelCollection.InnerSingleton;
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

// NewStructOps @ 14a736850

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewModelCollection,&UE::CoreUObject::Private::Construct<FMVVMViewModelCollection>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewModelCollection>,&UE::CoreUObject::Private::Destruct<FMVVMViewModelCollection>,&UE::CoreUObject::Private::Copy<FMVVMViewModelCollection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameterMID @ 14a736890

UFunction * __cdecl
Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameterMID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameterMID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameterMID_FColor @ 14a736a90

UFunction * __cdecl
Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameterMID_FColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMFontConversionLibrary_Conv_SetVectorParameterMID_FColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a736ad0

void * __cdecl Z_Construct_UScriptStruct_FMVVMBindingName_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMBindingName,&UE::CoreUObject::Private::Construct<FMVVMBindingName>,&UE::CoreUObject::Private::ConstructForTests<FMVVMBindingName>,&UE::CoreUObject::Private::Destruct<FMVVMBindingName>,&UE::CoreUObject::Private::Copy<FMVVMBindingName>,&UE::CoreUObject::Private::GetStructTypeHash<FMVVMBindingName>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a736b10

void __cdecl
Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance @ 14a736b20

UFunction * __cdecl Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMBindingSubsystem @ 14a736b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMBindingSubsystem(void)

{
  if (Z_Registration_Info_UClass_UMVVMBindingSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMBindingSubsystem.OuterSingleton,
               &Z_Construct_UClass_UMVVMBindingSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMBindingSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType @ 14a736be0

UFunction * __cdecl
Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a736c20

void * __cdecl Z_Construct_UScriptStruct_FMVVMEventField_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMEventField,&UE::CoreUObject::Private::Construct<FMVVMEventField>,&UE::CoreUObject::Private::ConstructForTests<FMVVMEventField>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance @ 14a736c60

UFunction * __cdecl Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance @ 14a736ca0

UFunction * __cdecl
Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a736d10

void __cdecl
Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode @ 14a736d20

UEnum * __cdecl Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode(void)

{
  if (Z_Registration_Info_UEnum_EMVVMExecutionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMVVMExecutionMode.InnerSingleton,
               &Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMVVMExecutionMode.InnerSingleton;
}

// EMVVMExecutionMode_StaticEnum @ 14a736de0

UEnum * __cdecl EMVVMExecutionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode,(UObject *)pUVar1,
                       L"EMVVMExecutionMode");
  }
  return Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel @ 14a736eb0

UFunction * __cdecl Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMViewExtension_NoRegister @ 14a737180

UClass * __cdecl Z_Construct_UClass_UMVVMViewExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewExtension",
               &Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton,
               UMVVMViewExtension::StaticRegisterNativesUMVVMViewExtension,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewExtension>,local_res8,UObject::StaticClass,
               UMVVMView::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton;
}

// Z_Construct_UClass_UMVVMViewClassExtension_NoRegister @ 14a737240

UClass * __cdecl Z_Construct_UClass_UMVVMViewClassExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton,
               UMVVMViewClassExtension::StaticRegisterNativesUMVVMViewClassExtension,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewClassExtension>
               ,InternalVTableHelperCtorCaller<UMVVMViewClassExtension>,local_res8,
               UObject::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14a7376c0

void * __thiscall
FModelViewViewModelModule::_scalar_deleting_destructor_
          (FModelViewViewModelModule *this,uint param_1)

{
  *this = (FModelViewViewModelModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary @ 14a7377a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMCompiledBindingLibrary.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMCompiledBindingLibrary.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMCompiledBindingLibrary.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMCompiledBindingLibrary.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex @ 14a737820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex.
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

// Z_Construct_UScriptStruct_FMVVMVCompiledFields @ 14a7378b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMVCompiledFields(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledFields.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMVCompiledFields.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledFields.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMVVMVCompiledFields.InnerSingleton;
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

// NewStructOps @ 14a737930

void * __cdecl Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMVCompiledFields,&UE::CoreUObject::Private::Construct<FMVVMVCompiledFields>,&UE::CoreUObject::Private::ConstructForTests<FMVVMVCompiledFields>,&UE::CoreUObject::Private::Destruct<FMVVMVCompiledFields>,&UE::CoreUObject::Private::Copy<FMVVMVCompiledFields>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a737b10

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewModelContext,&UE::CoreUObject::Private::Construct<FMVVMViewModelContext>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewModelContext>,&UE::CoreUObject::Private::Destruct<FMVVMViewModelContext>,&UE::CoreUObject::Private::Copy<FMVVMViewModelContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a737c00

void * __cdecl Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMVCompiledFieldPath,&UE::CoreUObject::Private::Construct<FMVVMVCompiledFieldPath>,&UE::CoreUObject::Private::ConstructForTests<FMVVMVCompiledFieldPath>,&UE::CoreUObject::Private::Destruct<FMVVMVCompiledFieldPath>,&UE::CoreUObject::Private::Copy<FMVVMVCompiledFieldPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMVVMSlateBrushConversionLibrary @ 14a737d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMSlateBrushConversionLibrary(void)

{
  if (Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.OuterSingleton,
               &Z_Construct_UClass_UMVVMSlateBrushConversionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.OuterSingleton;
}

// Z_Construct_UClass_UMVVMView_NoRegister @ 14a737eb0

UClass * __cdecl Z_Construct_UClass_UMVVMView_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMView",
               &Z_Registration_Info_UClass_UMVVMView.InnerSingleton,
               UMVVMView::StaticRegisterNativesUMVVMView,0x70,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMView>,
               InternalVTableHelperCtorCaller<UMVVMView>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMView.InnerSingleton;
}

// Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetScalarParameter @ 14a737f70

UFunction * __cdecl
Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetScalarParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetScalarParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMViewClass @ 14a737ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMViewClass(void)

{
  if (Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton,
               &Z_Construct_UClass_UMVVMViewClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMVVMViewClass_Binding @ 14a738030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_Binding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Binding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_Binding.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_Binding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Binding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_Binding.InnerSingleton;
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

// NewProp_bIsObjectProperty_SetBit @ 14a7380b0

void __cdecl
Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::
NewProp_bIsObjectProperty_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 1;
  return;
}

// Z_Construct_UScriptStruct_FMVVMViewClass_Condition @ 14a7380c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_Condition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Condition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_Condition.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_Condition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Condition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_Condition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateSource @ 14a738140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateSource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateSource.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateSource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateSource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateSource.InnerSingleton;
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

// NewProp_bIsScriptStructProperty_SetBit @ 14a7381c0

void __cdecl
Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::
NewProp_bIsScriptStructProperty_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 2;
  return;
}

// Z_Construct_UScriptStruct_FMVVMViewClass_Event @ 14a7381d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_Event(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Event.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_Event.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_Event_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Event.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_Event.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_Source @ 14a738250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_Source(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Source.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_Source.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_Source_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Source.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_Source.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_SourceBinding @ 14a7382d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_SourceBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_SourceBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceBinding.InnerSingleton;
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

// NewProp_bIsProperty_SetBit @ 14a738350

void __cdecl
Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::
NewProp_bIsProperty_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 4;
  return;
}

// Z_Construct_UScriptStruct_FMVVMViewClass_SourceCondition @ 14a738360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_SourceCondition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceCondition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceCondition.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_SourceCondition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceCondition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceCondition.InnerSingleton;
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

// NewStructOps @ 14a7383e0

void * __cdecl
Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMCompiledLoadedPropertyOrFunctionIndex,&UE::CoreUObject::Private::Construct<FMVVMCompiledLoadedPropertyOrFunctionIndex>,&UE::CoreUObject::Private::ConstructForTests<FMVVMCompiledLoadedPropertyOrFunctionIndex>,&UE::CoreUObject::Private::Destruct<FMVVMCompiledLoadedPropertyOrFunctionIndex>,&UE::CoreUObject::Private::Copy<FMVVMCompiledLoadedPropertyOrFunctionIndex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a738420

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_SourceBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_SourceBinding,&UE::CoreUObject::Private::Construct<FMVVMViewClass_SourceBinding>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_SourceBinding>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_SourceBinding>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_SourceBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMVVMBlueprintLibrary @ 14a738520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UMVVMBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UMVVMBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetScalarParameterMID @ 14a738560

UFunction * __cdecl
Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetScalarParameterMID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetScalarParameterMID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMBlueprintLibrary_SetViewModelByClass @ 14a738660

UFunction * __cdecl Z_Construct_UFunction_UMVVMBlueprintLibrary_SetViewModelByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMBlueprintLibrary_SetViewModelByClass_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetTextureParameter @ 14a7386a0

UFunction * __cdecl
Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetTextureParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetTextureParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a738720

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_SourceCondition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_SourceCondition,&UE::CoreUObject::Private::Construct<FMVVMViewClass_SourceCondition>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_SourceCondition>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_SourceCondition>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_SourceCondition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a738760

void * __cdecl Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMVCompiledBinding,&UE::CoreUObject::Private::Construct<FMVVMVCompiledBinding>,&UE::CoreUObject::Private::ConstructForTests<FMVVMVCompiledBinding>,&UE::CoreUObject::Private::Destruct<FMVVMVCompiledBinding>,&UE::CoreUObject::Private::Copy<FMVVMVCompiledBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetTextureParameterMID @ 14a7388a0

UFunction * __cdecl
Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetTextureParameterMID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetTextureParameterMID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSyncWhenSetViewModel_SetBit @ 14a738920

void __cdecl
Z_Construct_UScriptStruct_FMVVMViewClass_Binding_Statics::NewProp_bSyncWhenSetViewModel_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14a738930

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_Binding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_Binding,&UE::CoreUObject::Private::Construct<FMVVMViewClass_Binding>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_Binding>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_Binding>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_Binding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameter @ 14a738970

UFunction * __cdecl
Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a7389b0

void * __cdecl Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMCompiledBindingLibrary,&UE::CoreUObject::Private::Construct<FMVVMCompiledBindingLibrary>,&UE::CoreUObject::Private::ConstructForTests<FMVVMCompiledBindingLibrary>,&UE::CoreUObject::Private::Destruct<FMVVMCompiledBindingLibrary>,&UE::CoreUObject::Private::Copy<FMVVMCompiledBindingLibrary>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameter_FColor @ 14a7389f0

UFunction * __cdecl
Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameter_FColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameter_FColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a738af0

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_EvaluateSource,&UE::CoreUObject::Private::Construct<FMVVMViewClass_EvaluateSource>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_EvaluateSource>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_EvaluateSource>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_EvaluateSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameterMID @ 14a738b70

UFunction * __cdecl
Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameterMID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameterMID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMViewClass_NoRegister @ 14a738bb0

UClass * __cdecl Z_Construct_UClass_UMVVMViewClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewClass",
               &Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton,
               UMVVMViewClass::StaticRegisterNativesUMVVMViewClass,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewClass>,
               InternalVTableHelperCtorCaller<UMVVMViewClass>,local_res8,
               UWidgetBlueprintGeneratedClassExtension::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton;
}

// Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameterMID_FColor @ 14a738cf0

UFunction * __cdecl
Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameterMID_FColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSlateBrushConversionLibrary_Conv_SetVectorParameterMID_FColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a738d70

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_Source_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_Source,&UE::CoreUObject::Private::Construct<FMVVMViewClass_Source>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_Source>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_Source>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_Source>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMVVMGameSubsystem @ 14a738db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMGameSubsystem(void)

{
  if (Z_Registration_Info_UClass_UMVVMGameSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMGameSubsystem.OuterSingleton,
               &Z_Construct_UClass_UMVVMGameSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMGameSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection @ 14a738e30

UFunction * __cdecl Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 14a739000

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_Event_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_Event,&UE::CoreUObject::Private::Construct<FMVVMViewClass_Event>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_Event>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_Event>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_Event>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a739040

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_Condition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_Condition,&UE::CoreUObject::Private::Construct<FMVVMViewClass_Condition>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_Condition>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_Condition>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_Condition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInitializeSourcesOnConstruct_SetBit @ 14a739080

void __cdecl
Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeSourcesOnConstruct_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
  return;
}

// NewProp_bInitializeBindingsOnConstruct_SetBit @ 14a739090

void __cdecl
Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeBindingsOnConstruct_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe5) = 1;
  return;
}

// NewProp_bInitializeEventsOnConstruct_SetBit @ 14a7390a0

void __cdecl
Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeEventsOnConstruct_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe6) = 1;
  return;
}

// NewProp_bListenToViewModelCollectionChanged_SetBit @ 14a7390b0

void __cdecl
Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bListenToViewModelCollectionChanged_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe7) = 1;
  return;
}

// NewProp_bCreateViewWithoutBindings_SetBit @ 14a7390c0

void __cdecl
Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bCreateViewWithoutBindings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe8) = 1;
  return;
}

// Z_Construct_UClass_UMVVMViewClassExtension @ 14a739150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMViewClassExtension(void)

{
  if (Z_Registration_Info_UClass_UMVVMViewClassExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMViewClassExtension.OuterSingleton,
               &Z_Construct_UClass_UMVVMViewClassExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMViewClassExtension.OuterSingleton;
}

// Z_Construct_UClass_UMVVMViewExtension @ 14a739190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMViewExtension(void)

{
  if (Z_Registration_Info_UClass_UMVVMViewExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMViewExtension.OuterSingleton,
               &Z_Construct_UClass_UMVVMViewExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMViewExtension.OuterSingleton;
}

// Z_Construct_UClass_UMVVMView @ 14a7391d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMView(void)

{
  if (Z_Registration_Info_UClass_UMVVMView.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMView.OuterSingleton,
               &Z_Construct_UClass_UMVVMView_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMView.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMVVMView_Source @ 14a739210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMView_Source(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMView_Source.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMView_Source.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMView_Source_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMView_Source.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMView_Source.InnerSingleton;
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

// NewProp_bSourceInitialized_SetBit @ 14a739290

void __cdecl
Z_Construct_UScriptStruct_FMVVMView_Source_Statics::NewProp_bSourceInitialized_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bBindingsInitialized_SetBit @ 14a7392a0

void __cdecl
Z_Construct_UScriptStruct_FMVVMView_Source_Statics::NewProp_bBindingsInitialized_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bSetManually_SetBit @ 14a7392b0

void __cdecl
Z_Construct_UScriptStruct_FMVVMView_Source_Statics::NewProp_bSetManually_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bAssignedToUserWidgetProperty_SetBit @ 14a7392c0

void __cdecl
Z_Construct_UScriptStruct_FMVVMView_Source_Statics::NewProp_bAssignedToUserWidgetProperty_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewStructOps @ 14a7392d0

void * __cdecl Z_Construct_UScriptStruct_FMVVMView_Source_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMView_Source,&UE::CoreUObject::Private::Construct<FMVVMView_Source>,&UE::CoreUObject::Private::ConstructForTests<FMVVMView_Source>,&UE::CoreUObject::Private::Destruct<FMVVMView_Source>,&UE::CoreUObject::Private::Copy<FMVVMView_Source>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14a739330

void __cdecl
Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UMVVMSubsystem @ 14a739340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMSubsystem(void)

{
  if (Z_Registration_Info_UClass_UMVVMSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMSubsystem.OuterSingleton,
               &Z_Construct_UClass_UMVVMSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMSubsystem.OuterSingleton;
}

// Z_Construct_UEnum_ModelViewViewModel_EMVVMConditionOperation @ 14a739380

UEnum * __cdecl Z_Construct_UEnum_ModelViewViewModel_EMVVMConditionOperation(void)

{
  if (Z_Registration_Info_UEnum_EMVVMConditionOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMVVMConditionOperation.InnerSingleton,
               &Z_Construct_UEnum_ModelViewViewModel_EMVVMConditionOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMVVMConditionOperation.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14a739400

void __cdecl
Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMVVMView_AreBindingsInitialized @ 14a739410

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_AreBindingsInitialized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister @ 14a739490

UClass * __cdecl Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelCollectionObject",
               &Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton,
               UMVVMViewModelCollectionObject::StaticRegisterNativesUMVVMViewModelCollectionObject,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMViewModelCollectionObject>,
               InternalVTableHelperCtorCaller<UMVVMViewModelCollectionObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14a7395c0

void __cdecl
Z_Construct_UFunction_UMVVMView_AreEventsInitialized_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget @ 14a7395d0

UFunction * __cdecl Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMView_AreEventsInitialized @ 14a739620

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_AreEventsInitialized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_AreEventsInitialized_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a7396c0

void __cdecl
Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection @ 14a7396e0

UFunction * __cdecl Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMView_AreSourcesInitialized @ 14a739750

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_AreSourcesInitialized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a739880

void __cdecl
Z_Construct_UFunction_UMVVMSubsystem_K2_CompareFloatValues_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14a739890

void __cdecl
Z_Construct_UFunction_UMVVMView_AreSourcesValidForBinding_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMVVMView_AreSourcesValidForBinding @ 14a7398a0

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_AreSourcesValidForBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_AreSourcesValidForBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMSubsystem_K2_CompareFloatValues @ 14a7398e0

UFunction * __cdecl Z_Construct_UFunction_UMVVMSubsystem_K2_CompareFloatValues(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSubsystem_K2_CompareFloatValues_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a739920

void __cdecl
Z_Construct_UFunction_UMVVMView_AreSourcesValidForEvent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMVVMView_AreSourcesValidForEvent @ 14a739930

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_AreSourcesValidForEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_AreSourcesValidForEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding @ 14a7399b0

UFunction * __cdecl Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a7399f0

void __cdecl
Z_Construct_UFunction_UMVVMView_ExecuteViewModelBindings_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMVVMView_ExecuteViewModelBindings @ 14a739a00

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_ExecuteViewModelBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_ExecuteViewModelBindings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister @ 14a739a40

UClass * __cdecl Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelContextResolver",
               &Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton,
               UMVVMViewModelContextResolver::StaticRegisterNativesUMVVMViewModelContextResolver,
               0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMViewModelContextResolver>,
               InternalVTableHelperCtorCaller<UMVVMViewModelContextResolver>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelContextResolver.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMVVMVCompiledBinding @ 14a739af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMVCompiledBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledBinding.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMVCompiledBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledBinding.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMVVMVCompiledBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMVCompiledFieldId @ 14a739b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMVCompiledFieldId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldId.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldId.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldId.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldId.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath @ 14a739bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldPath.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldPath.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMVCompiledFieldPath.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewModelContext @ 14a739c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewModelContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewModelContext.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewModelContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewModelContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewModelContext.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewModelContext.InnerSingleton;
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

// NewStructOps @ 14a739cf0

void * __cdecl Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMVCompiledFieldId,&UE::CoreUObject::Private::Construct<FMVVMVCompiledFieldId>,&UE::CoreUObject::Private::ConstructForTests<FMVVMVCompiledFieldId>,&UE::CoreUObject::Private::Destruct<FMVVMVCompiledFieldId>,&UE::CoreUObject::Private::Copy<FMVVMVCompiledFieldId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMView_GetViewModel @ 14a739d30

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_GetViewModel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMView_InitializeBindings @ 14a739d70

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_InitializeBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_InitializeBindings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMView_InitializeEvents @ 14a739db0

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_InitializeEvents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMVVMView_InitializeEvents_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bCreatedSource_SetBit @ 14a739df0

void __cdecl
Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bCreatedSource_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bBindingsInitialized_SetBit @ 14a739e00

void __cdecl
Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bBindingsInitialized_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_bSetManually_SetBit @ 14a739e10

void __cdecl
Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bSetManually_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16) = 1;
  return;
}

// NewProp_bAssignedToUserWidgetProperty_SetBit @ 14a739e20

void __cdecl
Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bAssignedToUserWidgetProperty_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  return;
}

// NewStructOps @ 14a739e30

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewSource,&UE::CoreUObject::Private::Construct<FMVVMViewSource>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewSource>,&UE::CoreUObject::Private::Destruct<FMVVMViewSource>,&UE::CoreUObject::Private::Copy<FMVVMViewSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMView_InitializeSources @ 14a739e70

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_InitializeSources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_InitializeSources_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a739eb0

void __cdecl
Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMVVMView_SetViewModel @ 14a739f20

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_SetViewModel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a739f60

void __cdecl
Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMVVMView_SetViewModelByClass @ 14a73a080

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_SetViewModelByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMView_UninitializeBindings @ 14a73a0f0

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_UninitializeBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_UninitializeBindings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a73a130

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_SourceCreator,&UE::CoreUObject::Private::Construct<FMVVMViewClass_SourceCreator>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_SourceCreator>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_SourceCreator>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_SourceCreator>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMView_UninitializeEvents @ 14a73a170

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_UninitializeEvents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_UninitializeEvents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMView_UninitializeSources @ 14a73a1b0

UFunction * __cdecl Z_Construct_UFunction_UMVVMView_UninitializeSources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMView_UninitializeSources_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLogBinding_SetBit @ 14a73a1f0

void __cdecl Z_Construct_UClass_UMVVMView_Statics::NewProp_bLogBinding_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// NewProp_bConstructed_SetBit @ 14a73a200

void __cdecl Z_Construct_UClass_UMVVMView_Statics::NewProp_bConstructed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  return;
}

// NewProp_bSourcesInitialized_SetBit @ 14a73a210

void __cdecl Z_Construct_UClass_UMVVMView_Statics::NewProp_bSourcesInitialized_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6b) = 1;
  return;
}

// NewProp_bBindingsInitialized_SetBit @ 14a73a220

void __cdecl
Z_Construct_UClass_UMVVMView_Statics::NewProp_bBindingsInitialized_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// NewProp_bEventsInitialized_SetBit @ 14a73a230

void __cdecl Z_Construct_UClass_UMVVMView_Statics::NewProp_bEventsInitialized_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  return;
}

// NewProp_bHasDefaultTickBinding_SetBit @ 14a73a240

void __cdecl
Z_Construct_UClass_UMVVMView_Statics::NewProp_bHasDefaultTickBinding_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6e) = 1;
  return;
}

// NewStructOps @ 14a73a310

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_CompiledBinding,&UE::CoreUObject::Private::Construct<FMVVMViewClass_CompiledBinding>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_CompiledBinding>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_CompiledBinding>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_CompiledBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings @ 14a73a350

UFunction * __cdecl Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMVVMInstancedViewModelGeneratedClass @ 14a73a390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMInstancedViewModelGeneratedClass(void)

{
  if (Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.OuterSingleton,
               &Z_Construct_UClass_UMVVMInstancedViewModelGeneratedClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.OuterSingleton;
}

// Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget @ 14a73a3d0

UFunction * __cdecl Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a73a410

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_CompiledEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_CompiledEvent,&UE::CoreUObject::Private::Construct<FMVVMViewClass_CompiledEvent>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_CompiledEvent>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_CompiledEvent>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_CompiledEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass @ 14a73a670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass.
                OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass.OuterSingleton;
}

// Z_Construct_UClass_UMVVMViewListViewBaseClassExtension @ 14a73aad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMViewListViewBaseClassExtension(void)

{
  if (Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.OuterSingleton,
               &Z_Construct_UClass_UMVVMViewListViewBaseClassExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.OuterSingleton;
}

// Z_Construct_UClass_UMVVMViewPanelWidgetClassExtension_NoRegister @ 14a73ad10

UClass * __cdecl Z_Construct_UClass_UMVVMViewPanelWidgetClassExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewPanelWidgetClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton,
               UMVVMViewPanelWidgetClassExtension::
               StaticRegisterNativesUMVVMViewPanelWidgetClassExtension,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewPanelWidgetClassExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewPanelWidgetClassExtension>,local_res8,
               UMVVMViewClassExtension::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton;
}

// Z_Construct_UClass_UMVVMPanelWidgetViewExtension @ 14a73afb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMPanelWidgetViewExtension(void)

{
  if (Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.OuterSingleton,
               &Z_Construct_UClass_UMVVMPanelWidgetViewExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.OuterSingleton;
}

// Z_Construct_UClass_UMVVMViewPanelWidgetClassExtension @ 14a73aff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMViewPanelWidgetClassExtension(void)

{
  if (Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.OuterSingleton,
               &Z_Construct_UClass_UMVVMViewPanelWidgetClassExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.OuterSingleton;
}

// Z_Construct_UClass_UMVVMViewModelBase_NoRegister @ 14a73b030

UClass * __cdecl Z_Construct_UClass_UMVVMViewModelBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelBase",
               &Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton,
               UMVVMViewModelBase::StaticRegisterNativesUMVVMViewModelBase,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMViewModelBase>,
               InternalVTableHelperCtorCaller<UMVVMViewModelBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton;
}

// Z_Construct_UFunction_UMVVMPanelWidgetViewExtension_BP_SetItems @ 14a73b0e0

UFunction * __cdecl Z_Construct_UFunction_UMVVMPanelWidgetViewExtension_BP_SetItems(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMPanelWidgetViewExtension_BP_SetItems_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a73b240

void * __thiscall
UMVVMViewModelBase::FFieldNotificationClassDescriptor::_scalar_deleting_destructor_
          (FFieldNotificationClassDescriptor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FMVVMViewModelContextInstance @ 14a73b340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewModelContextInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewModelContextInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewModelContextInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewModelContextInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewModelContextInstance.InnerSingleton;
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

// NewStructOps @ 14a73b3c0

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewModelContextInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewModelContextInstance,&UE::CoreUObject::Private::Construct<FMVVMViewModelContextInstance>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewModelContextInstance>,&UE::CoreUObject::Private::Destruct<FMVVMViewModelContextInstance>,&UE::CoreUObject::Private::Copy<FMVVMViewModelContextInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMVVMViewModelBase @ 14a73b400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMVVMViewModelBase(void)

{
  if (Z_Registration_Info_UClass_UMVVMViewModelBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMVVMViewModelBase.OuterSingleton,
               &Z_Construct_UClass_UMVVMViewModelBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMVVMViewClass_BindingKey @ 14a73b440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_BindingKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_BindingKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_BindingKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_BindingKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_BindingKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_BindingKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_ConditionKey @ 14a73b4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_ConditionKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_ConditionKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_ConditionKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_ConditionKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_ConditionKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_ConditionKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_FieldId @ 14a73b540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_FieldId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_FieldId.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_FieldId.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_FieldId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_FieldId.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_FieldId.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_SourceKey @ 14a73b5c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_SourceKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_SourceKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceKey.InnerSingleton;
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

// NewStructOps @ 14a73b640

void * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_FieldId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMVVMViewClass_FieldId,&UE::CoreUObject::Private::Construct<FMVVMViewClass_FieldId>,&UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_FieldId>,&UE::CoreUObject::Private::Destruct<FMVVMViewClass_FieldId>,&UE::CoreUObject::Private::Copy<FMVVMViewClass_FieldId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate @ 14a73b680

UFunction * __cdecl Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged @ 14a73b6c0

UFunction * __cdecl Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// operator<<<wchar_t,FString_&> @ 14a73b7a0

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,FString_&>(TStringBuilderBase<wchar_t> *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  iVar1 = (param_2->Data).ArrayNum;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  uVar4 = (ulong64)iVar5;
  if (param_1->End < param_1->CurPos + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(param_1,uVar4);
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(param_1->CurPos,pFVar2,uVar4 * 2);
    param_1->CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  return param_1;
}

// operator<<<wchar_t,wchar_t_const_(&)[3]> @ 14a73b820

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,wchar_t_const_(&)[3]>
          (TStringBuilderBase<wchar_t> *param_1,wchar_t (*param_2) [3])

{
  size_t sVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar1 = wcslen(*param_2);
    iVar4 = (int)sVar1;
  }
  uVar3 = (ulong64)iVar4;
  if (param_1->End < param_1->CurPos + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(param_1,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,param_2,uVar3 * 2);
    param_1->CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  return param_1;
}

// CastChecked<UClass,UStruct_const_> @ 14a73c1e0

UClass * __cdecl CastChecked<UClass,UStruct_const_>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStruct *)0x0) {
    pFVar3 = GetTypeName<UClass>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UClass *)param_1;
  }
  pFVar3 = GetTypeName<UClass>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStruct_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UClass,UStruct> @ 14a73c2a0

UClass * __cdecl CastChecked<UClass,UStruct>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStruct *)0x0) {
    pFVar3 = GetTypeName<UClass>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UClass *)param_1;
  }
  pFVar3 = GetTypeName<UClass>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStruct>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMVVMView,UUserWidgetExtension> @ 14a73c360

UMVVMView * __cdecl
CastChecked<UMVVMView,UUserWidgetExtension>(UUserWidgetExtension *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UUserWidgetExtension *)0x0) {
    if (param_2 != NullChecked) {
      return (UMVVMView *)0x0;
    }
    pFVar3 = GetTypeName<UMVVMView>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMVVMView::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMVVMView *)param_1;
  }
  pFVar3 = GetTypeName<UMVVMView>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UUserWidgetExtension>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FMVVMVCompiledFields,FMVVMVCompiledFields,int> @ 14a73c440

void __cdecl
ConstructItems<FMVVMVCompiledFields,FMVVMVCompiledFields,int>
          (void *param_1,FMVVMVCompiledFields *param_2,int param_3)

{
  short *psVar1;
  UObject *pUVar2;
  short *psVar3;
  short *psVar4;
  
  if (param_3 != 0) {
    psVar3 = (short *)((longlong)param_1 + 10);
    psVar4 = &param_2->NumberOfProperties;
    do {
      pUVar2 = *(UObject **)((longlong)param_2 + (-10 - (longlong)param_1) + (longlong)psVar3);
      *(UObject **)(psVar3 + -5) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      psVar3[-1] = psVar4[-1];
      *psVar3 = *psVar4;
      psVar1 = psVar4 + 1;
      psVar4 = psVar4 + 8;
      psVar3[1] = *psVar1;
      psVar3 = psVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMVVMViewModelContextInstance,FMVVMViewModelContextInstance,int> @ 14a73c4d0

void __cdecl
ConstructItems<FMVVMViewModelContextInstance,FMVVMViewModelContextInstance,int>
          (void *param_1,FMVVMViewModelContextInstance *param_2,int param_3)

{
  UMVVMViewModelBase *pUVar1;
  TObjectPtr<UMVVMViewModelBase> TVar2;
  TObjectPtr<UMVVMViewModelBase>_u_0 *pTVar3;
  TObjectPtr<UMVVMViewModelBase>_u_0 *pTVar4;
  
  if (param_3 != 0) {
    pTVar3 = (TObjectPtr<UMVVMViewModelBase>_u_0 *)((longlong)param_1 + 0x10);
    pTVar4 = &(param_2->Instance).field0_0x0;
    do {
      pUVar1 = *(UMVVMViewModelBase **)
                ((longlong)pTVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pTVar3[-2].DebugPtr = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UMVVMViewModelBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pTVar3[-1] = pTVar4[-1];
      TVar2.field0_0x0 = (TObjectPtr<UMVVMViewModelBase>_u_0)pTVar4->DebugPtr;
      pTVar3->DebugPtr = (UMVVMViewModelBase *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UMVVMViewModelBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      pTVar4 = pTVar4 + 3;
      pTVar3 = pTVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UMVVMView::FBoundEvent,int> @ 14a73c580

void __cdecl DefaultConstructItems<UMVVMView::FBoundEvent,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMVVMView_Source,int> @ 14a73c5b0

void __cdecl DefaultConstructItems<FMVVMView_Source,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0xc);
    do {
      *(undefined8 *)((longlong)puVar1 + -0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + -4) = 0xffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMVVMViewClass_Source,int> @ 14a73c640

void __cdecl DestructItems<FMVVMViewClass_Source,int>(FMVVMViewClass_Source *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMVVMViewClass_SourceBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Bindings;
    do {
      pFVar1 = (((TArray<FMVVMViewClass_SourceCondition,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FMVVMViewClass_FieldId,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FMVVMViewClass_SourceBinding,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 6) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<UMVVMView> @ 14a73d280

FString * __cdecl GetTypeName<UMVVMView>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMVVMView::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UDEPRECATED_MVVMViewModelBlueprintGeneratedClass> @ 14a73d300

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
InternalConstructor<UDEPRECATED_MVVMViewModelBlueprintGeneratedClass>(FObjectInitializer *param_1)

{
  UBlueprintGeneratedClass *this;
  
  this = (UBlueprintGeneratedClass *)param_1->Obj;
  if (this != (UBlueprintGeneratedClass *)0x0) {
    UBlueprintGeneratedClass::UBlueprintGeneratedClass(this,param_1);
    this->_padding_ =
         (longlong)&UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::_vftable__for__UClass__;
    this->_padding_ =
         (longlong)
         &UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::
          _vftable__for__IBlueprintPropertyGuidProvider__;
  }
  return;
}

// InternalConstructor<UMVVMBindingSubsystem> @ 14a73d340

void __cdecl InternalConstructor<UMVVMBindingSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    *(undefined ***)this = &UMVVMBindingSubsystem::_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) = &UMVVMBindingSubsystem::_vftable__for__FTickableGameObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UMVVMBlueprintLibrary> @ 14a73d3d0

void __cdecl InternalConstructor<UMVVMBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMVVMBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMVVMConversionLibrary> @ 14a73d400

void __cdecl InternalConstructor<UMVVMConversionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMVVMConversionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMVVMFontConversionLibrary> @ 14a73d430

void __cdecl InternalConstructor<UMVVMFontConversionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMVVMFontConversionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMVVMGameSubsystem> @ 14a73d460

void __cdecl InternalConstructor<UMVVMGameSubsystem>(FObjectInitializer *param_1)

{
  UGameInstanceSubsystem *this;
  
  this = (UGameInstanceSubsystem *)param_1->Obj;
  if (this != (UGameInstanceSubsystem *)0x0) {
    UGameInstanceSubsystem::UGameInstanceSubsystem(this);
    *(undefined ***)this = &___7UMVVMGameSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UMVVMInstancedViewModelGeneratedClass> @ 14a73d4a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UMVVMInstancedViewModelGeneratedClass>(FObjectInitializer *param_1)

{
  UBlueprintGeneratedClass *this;
  
  this = (UBlueprintGeneratedClass *)param_1->Obj;
  if (this != (UBlueprintGeneratedClass *)0x0) {
    UBlueprintGeneratedClass::UBlueprintGeneratedClass(this,param_1);
    this->_padding_ = (longlong)&UMVVMInstancedViewModelGeneratedClass::_vftable__for__UClass__;
    this->_padding_ =
         (longlong)
         &UMVVMInstancedViewModelGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMVVMPanelWidgetViewExtension> @ 14a73d530

void __cdecl InternalConstructor<UMVVMPanelWidgetViewExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMVVMPanelWidgetViewExtension__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMVVMSlateBrushConversionLibrary> @ 14a73d570

void __cdecl InternalConstructor<UMVVMSlateBrushConversionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMVVMSlateBrushConversionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMVVMSubsystem> @ 14a73d5a0

void __cdecl InternalConstructor<UMVVMSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UMVVMSubsystem__6B_;
  }
  return;
}

// InternalConstructor<UMVVMView> @ 14a73d5d0

void __cdecl InternalConstructor<UMVVMView>(FObjectInitializer *param_1)

{
  UUserWidgetExtension *this;
  
  this = (UUserWidgetExtension *)param_1->Obj;
  if (this != (UUserWidgetExtension *)0x0) {
    UUserWidgetExtension::UUserWidgetExtension(this,param_1);
    *(undefined ***)this = &___7UMVVMView__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined2 *)&this[2].field_0x1c = 0;
    this[2].field_0x1e = 0;
  }
  return;
}

// InternalConstructor<UMVVMViewClass> @ 14a73d630

void __cdecl InternalConstructor<UMVVMViewClass>(FObjectInitializer *param_1)

{
  UWidgetBlueprintGeneratedClassExtension *this;
  
  this = (UWidgetBlueprintGeneratedClassExtension *)param_1->Obj;
  if (this != (UWidgetBlueprintGeneratedClassExtension *)0x0) {
    UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension(this,param_1);
    *(undefined4 *)&this[5].field_0x1c = 0x10101;
    *(undefined ***)this = &___7UMVVMViewClass__6B_;
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
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x18 = 0;
    this[5].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMVVMViewClassExtension> @ 14a73d700

void __cdecl InternalConstructor<UMVVMViewClassExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMVVMViewClassExtension__6B_;
  }
  return;
}

// InternalConstructor<UMVVMViewExtension> @ 14a73d730

void __cdecl InternalConstructor<UMVVMViewExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMVVMViewExtension__6B_;
  }
  return;
}

// InternalConstructor<UMVVMViewListViewBaseClassExtension> @ 14a73d760

void __cdecl InternalConstructor<UMVVMViewListViewBaseClassExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMVVMViewListViewBaseClassExtension__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMVVMViewModelBase> @ 14a73d7d0

void __cdecl InternalConstructor<UMVVMViewModelBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)&this[1].field_0x1c = 0xffff;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UMVVMViewModelBase::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UMVVMViewModelBase::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
  }
  return;
}

// InternalConstructor<UMVVMViewModelCollectionObject> @ 14a73d830

void __cdecl InternalConstructor<UMVVMViewModelCollectionObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMVVMViewModelCollectionObject__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 2;
  }
  return;
}

// InternalConstructor<UMVVMViewModelContextResolver> @ 14a73d880

void __cdecl InternalConstructor<UMVVMViewModelContextResolver>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMVVMViewModelContextResolver__6B_;
  }
  return;
}

// InternalConstructor<UMVVMViewPanelWidgetClassExtension> @ 14a73d8b0

void __cdecl InternalConstructor<UMVVMViewPanelWidgetClassExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMVVMViewPanelWidgetClassExtension__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_MVVMViewModelBlueprintGeneratedClass> @ 14a73d900

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
InternalVTableHelperCtorCaller<UDEPRECATED_MVVMViewModelBlueprintGeneratedClass>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintGeneratedClass *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::GetPrivateStaticClass();
  this = (UBlueprintGeneratedClass *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintGeneratedClass *)0x0) {
    UBlueprintGeneratedClass::UBlueprintGeneratedClass(this,param_1);
    this->_padding_ =
         (longlong)&UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::_vftable__for__UClass__;
    this->_padding_ =
         (longlong)
         &UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::
          _vftable__for__IBlueprintPropertyGuidProvider__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMBindingSubsystem> @ 14a73d9c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMBindingSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  UEngineSubsystem *pUVar3;
  
  pUVar3 = (UEngineSubsystem *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMBindingSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    *(undefined ***)this = &UMVVMBindingSubsystem::_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) = &UMVVMBindingSubsystem::_vftable__for__FTickableGameObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UMVVMBlueprintLibrary> @ 14a73dab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMConversionLibrary> @ 14a73db60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMConversionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMConversionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMConversionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMFontConversionLibrary> @ 14a73dc10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMFontConversionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMFontConversionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMFontConversionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMGameSubsystem> @ 14a73dcc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMGameSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameInstanceSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMGameSubsystem::GetPrivateStaticClass();
  this = (UGameInstanceSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameInstanceSubsystem *)0x0) {
    UGameInstanceSubsystem::UGameInstanceSubsystem(this,param_1);
    *(undefined ***)this = &___7UMVVMGameSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMInstancedViewModelGeneratedClass> @ 14a73dd70

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
InternalVTableHelperCtorCaller<UMVVMInstancedViewModelGeneratedClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintGeneratedClass *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMInstancedViewModelGeneratedClass::GetPrivateStaticClass();
  this = (UBlueprintGeneratedClass *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintGeneratedClass *)0x0) {
    UBlueprintGeneratedClass::UBlueprintGeneratedClass(this,param_1);
    this->_padding_ = (longlong)&UMVVMInstancedViewModelGeneratedClass::_vftable__for__UClass__;
    this->_padding_ =
         (longlong)
         &UMVVMInstancedViewModelGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMPanelWidgetViewExtension> @ 14a73de80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMVVMPanelWidgetViewExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMPanelWidgetViewExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMPanelWidgetViewExtension__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMSlateBrushConversionLibrary> @ 14a73df40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMVVMSlateBrushConversionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMSlateBrushConversionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMSlateBrushConversionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMSubsystem> @ 14a73dff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UMVVMSubsystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMView> @ 14a73e0a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMView>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMView::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UUserWidgetExtension::UUserWidgetExtension((UUserWidgetExtension *)pUVar1,param_1);
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UMVVMView__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined2 *)&pUVar1[2].field_0x1c = 0;
    pUVar1[2].field_0x1e = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMViewClass> @ 14a73e180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMViewClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMViewClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension
              ((UWidgetBlueprintGeneratedClassExtension *)pUVar1,param_1);
    *(undefined4 *)&pUVar1[5].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UMVVMViewClass__6B_;
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
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x1c = 0x10101;
    pUVar1[5].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMViewClassExtension> @ 14a73e2c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMViewClassExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMViewClassExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMViewClassExtension__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMViewExtension> @ 14a73e370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMViewExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMViewExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMViewExtension__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMViewListViewBaseClassExtension> @ 14a73e420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMVVMViewListViewBaseClassExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMViewListViewBaseClassExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMViewListViewBaseClassExtension__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMViewModelBase> @ 14a73e510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMVVMViewModelBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMViewModelBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMVVMViewModelBase::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UMVVMViewModelBase::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined2 *)&pUVar1[1].field_0x1c = 0xffff;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMViewModelCollectionObject> @ 14a73e5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMVVMViewModelCollectionObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMViewModelCollectionObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMViewModelCollectionObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMViewModelContextResolver> @ 14a73e6c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMVVMViewModelContextResolver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMViewModelContextResolver::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMViewModelContextResolver__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMVVMViewPanelWidgetClassExtension> @ 14a73e770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMVVMViewPanelWidgetClassExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMVVMViewPanelWidgetClassExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMVVMViewPanelWidgetClassExtension__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MutableView<TObjectPtr<UUserWidget>_> @ 14a73ea90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TMutableView<TObjectPtr<UUserWidget>_> __cdecl
MutableView<TObjectPtr<UUserWidget>_>(TObjectPtr<UUserWidget> *param_1)

{
  TObjectPtr<UUserWidget>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UUserWidget>_>)(UUserWidget **)param_1;
}

// NewObject<UMVVMPanelWidgetViewExtension> @ 14a73eaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMVVMPanelWidgetViewExtension * __cdecl NewObject<UMVVMPanelWidgetViewExtension>(UObject *param_1)

{
  UClass *pUVar1;
  UMVVMPanelWidgetViewExtension *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMVVMPanelWidgetViewExtension::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMVVMPanelWidgetViewExtension *)
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

// NewObject<UMVVMViewModelCollectionObject> @ 14a73eb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMVVMViewModelCollectionObject * __cdecl NewObject<UMVVMViewModelCollectionObject>(UObject *param_1)

{
  UClass *pUVar1;
  UMVVMViewModelCollectionObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMVVMViewModelCollectionObject::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMVVMViewModelCollectionObject *)
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

// ObjectPtrWrap<UUserWidget_*,TObjectPtr<UUserWidget>_> @ 14a73ebe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TObjectPtr<UUserWidget> * __cdecl
ObjectPtrWrap<UUserWidget_*,TObjectPtr<UUserWidget>_>(UUserWidget **param_1)

{
  return (TObjectPtr<UUserWidget> *)param_1;
}

// RemoveAllSwap<`UMVVMInstancedViewModelGeneratedClass::Link'::__l2::<lambda_1>_> @ 14a73efa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UFunction>,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_UMVVMInstancedViewModelGeneratedClass::Link_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UFunction>,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      if (*(longlong *)((this->AllocatorInstance).Data + lVar9) == 0) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar8 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar7) * 8,
                  (longlong)iVar7 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar8 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// StaticEnum<enum_EMVVMBindingMode> @ 14a73f120

UEnum * __cdecl StaticEnum<enum_EMVVMBindingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode,(UObject *)pUVar1,
                       L"EMVVMBindingMode");
  }
  return Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton;
}

// StaticEnum<enum_EMVVMConditionOperation> @ 14a73f160

UEnum * __cdecl StaticEnum<enum_EMVVMConditionOperation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMVVMConditionOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UEnum_EMVVMConditionOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMConditionOperation,
                       (UObject *)pUVar1,L"EMVVMConditionOperation");
  }
  return Z_Registration_Info_UEnum_EMVVMConditionOperation.OuterSingleton;
}

// StaticEnum<enum_EMVVMExecutionMode> @ 14a73f1a0

UEnum * __cdecl StaticEnum<enum_EMVVMExecutionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode,(UObject *)pUVar1,
                       L"EMVVMExecutionMode");
  }
  return Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{520}' @ 14a740fac

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::`vector deleting destructor'`adjustor{520}'
   (unsigned int) __ptr64 */

void * __thiscall
UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_520__
          (UDEPRECATED_MVVMViewModelBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDEPRECATED_MVVMViewModelBlueprintGeneratedClass *)&this[-1].field_0x168,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a740fc0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMVVMBindingSubsystem::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UMVVMBindingSubsystem::_vector_deleting_destructor__adjustor_48__
          (UMVVMBindingSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMVVMBindingSubsystem *)&this[-1].DelayedBindings.field_0x30,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{520}' @ 14a740fd0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMVVMInstancedViewModelGeneratedClass::`vector
   deleting destructor'`adjustor{520}' (unsigned int) __ptr64 */

void * __thiscall
UMVVMInstancedViewModelGeneratedClass::_vector_deleting_destructor__adjustor_520__
          (UMVVMInstancedViewModelGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMVVMInstancedViewModelGeneratedClass *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a740fe4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMVVMViewModelBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMVVMViewModelBase::_vector_deleting_destructor__adjustor_40__
          (UMVVMViewModelBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMVVMViewModelBase *)
                      &this[-1].NotificationDelegates.Delegates.DelegateLockCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a741000

void * __thiscall
TBaseRawMethodDelegateInstance<0,FModelViewViewModelModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FModelViewViewModelModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741030

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741060

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741090

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7410c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7410f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741120

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
UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::_scalar_deleting_destructor_
          (UDEPRECATED_MVVMViewModelBlueprintGeneratedClass *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UClass__;
  *(undefined ***)&this->field_0x208 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  UBlueprintGeneratedClass::~UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741190

void * __thiscall
UMVVMBindingSubsystem::_scalar_deleting_destructor_(UMVVMBindingSubsystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->ViewsWithTickBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DelayedBindings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DelayedBindings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DelayedBindings);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x98);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741250

void * __thiscall
UMVVMBlueprintLibrary::_scalar_deleting_destructor_(UMVVMBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMVVMBlueprintLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a7412b0

void * __thiscall
UMVVMConversionLibrary::_scalar_deleting_destructor_(UMVVMConversionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMVVMConversionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a741310

void * __thiscall
UMVVMFontConversionLibrary::_scalar_deleting_destructor_
          (UMVVMFontConversionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMVVMFontConversionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a741370

void * __thiscall
UMVVMGameSubsystem::_scalar_deleting_destructor_(UMVVMGameSubsystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMVVMGameSubsystem__6B_;
  UGameInstanceSubsystem::~UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7413d0

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
UMVVMInstancedViewModelGeneratedClass::_scalar_deleting_destructor_
          (UMVVMInstancedViewModelGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  pvVar1 = *(void **)&(this->OnRepToPropertyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UFunction>,FProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UFunction>,FProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UFunction>,FProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnRepToPropertyMap);
  pFVar2 = (this->OnRepFunctionToLink).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UBlueprintGeneratedClass::~UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMVVMPanelWidgetViewExtension::_scalar_deleting_destructor_
          (UMVVMPanelWidgetViewExtension *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMVVMViewExtension__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7414f0

void * __thiscall
UMVVMSlateBrushConversionLibrary::_scalar_deleting_destructor_
          (UMVVMSlateBrushConversionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMVVMSlateBrushConversionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a741550

void * __thiscall UMVVMSubsystem::_scalar_deleting_destructor_(UMVVMSubsystem *this,uint param_1)

{
  *(undefined ***)this = &___7UMVVMSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a7415b0

void * __thiscall UMVVMView::_scalar_deleting_destructor_(UMVVMView *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMVVMView__6B_;
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UUserWidgetExtension::~UUserWidgetExtension((UUserWidgetExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741640

void * __thiscall UMVVMViewClass::_scalar_deleting_destructor_(UMVVMViewClass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMVVMViewClass__6B_;
  pFVar1 = (this->BindingLibrary).CompiledFieldNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingLibrary).CompiledFields.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingLibrary).FieldPaths.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingLibrary).LoadedFunctions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingLibrary).LoadedProperties.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ViewClassExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Conditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Events).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EvaluateSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMVVMViewClass_Source,int>
            ((FMVVMViewClass_Source *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum);
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWidgetBlueprintGeneratedClassExtension::~UWidgetBlueprintGeneratedClassExtension
            ((UWidgetBlueprintGeneratedClassExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741760

void * __thiscall
UMVVMViewClassExtension::_scalar_deleting_destructor_(UMVVMViewClassExtension *this,uint param_1)

{
  *(undefined ***)this = &___7UMVVMViewClassExtension__6B_;
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

// `scalar_deleting_destructor' @ 14a7417c0

void * __thiscall
UMVVMViewExtension::_scalar_deleting_destructor_(UMVVMViewExtension *this,uint param_1)

{
  *(undefined ***)this = &___7UMVVMViewExtension__6B_;
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

// `scalar_deleting_destructor' @ 14a741820

void * __thiscall
UMVVMViewListViewBaseClassExtension::_scalar_deleting_destructor_
          (UMVVMViewListViewBaseClassExtension *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMVVMViewListViewBaseClassExtension__6B_;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedListViewWidgets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedListViewWidgets);
  this->_padding_ = (longlong)&___7UMVVMViewClassExtension__6B_;
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

// `scalar_deleting_destructor' @ 14a7418c0

void * __thiscall
UMVVMViewModelBase::_scalar_deleting_destructor_(UMVVMViewModelBase *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FVar1 = (this->NotificationDelegates).EnabledFieldNotifications.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)
             (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data,
             (this->NotificationDelegates).Delegates.Delegates.ArrayNum);
  pFVar2 = (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a741960

void * __thiscall
UMVVMViewModelCollectionObject::_scalar_deleting_destructor_
          (UMVVMViewModelCollectionObject *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMVVMViewModelCollectionObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x8,
             *(int *)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x10);
  pvVar1 = *(void **)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ViewModelCollection).OnCollectionChangedDelegate);
  pFVar2 = (this->ViewModelCollection).ViewModelInstances.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
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

// `scalar_deleting_destructor' @ 14a741a10

void * __thiscall
UMVVMViewModelContextResolver::_scalar_deleting_destructor_
          (UMVVMViewModelContextResolver *this,uint param_1)

{
  *(undefined ***)this = &___7UMVVMViewModelContextResolver__6B_;
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

// `scalar_deleting_destructor' @ 14a741a70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMVVMViewPanelWidgetClassExtension::_scalar_deleting_destructor_
          (UMVVMViewPanelWidgetClassExtension *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMVVMViewClassExtension__6B_;
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

// EmptyLinkFunctionForGeneratedCodeMVVMAvailableBinding @ 14a747170

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMAvailableBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMBindingMode @ 14a747180

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMBindingMode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMBindingName @ 14a747190

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMBindingName(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMBindingSubsystem @ 14a7471a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMBindingSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMBlueprintLibrary @ 14a7471b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMCompiledBindingLibrary @ 14a7471c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMCompiledBindingLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMConditionOperation @ 14a7471d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMConditionOperation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMConversionLibrary @ 14a7471e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMConversionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMEventField @ 14a7471f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMEventField(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMExecutionMode @ 14a747200

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMExecutionMode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMFontConversionLibrary @ 14a747210

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMFontConversionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMGameSubsystem @ 14a747220

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMGameSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMInstancedViewModelGeneratedClass @ 14a747230

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMInstancedViewModelGeneratedClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMSlateBrushConversionLibrary @ 14a747240

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMSlateBrushConversionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMSubsystem @ 14a747250

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMView @ 14a747260

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMView(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewClass @ 14a747270

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewClassExtension @ 14a747280

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewClassExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewDeprecatedTypes @ 14a747290

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewDeprecatedTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewListViewBaseExtension @ 14a7472a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewListViewBaseExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewModelBase @ 14a7472b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewModelBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewModelBlueprintGeneratedClass @ 14a7472c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewModelBlueprintGeneratedClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewModelCollection @ 14a7472d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewModelCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewModelContext @ 14a7472e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewModelContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewModelContextInstance @ 14a7472f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewModelContextInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewModelContextResolver @ 14a747300

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewModelContextResolver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewPanelWidgetExtension @ 14a747310

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewPanelWidgetExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMVVMViewTypes @ 14a747320

void __cdecl EmptyLinkFunctionForGeneratedCodeMVVMViewTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeModelViewViewModel_init @ 14a747330

void __cdecl EmptyLinkFunctionForGeneratedCodeModelViewViewModel_init(void)

{
  return;
}

// LexToString @ 14a75ace0

wchar_t * __cdecl LexToString(EMVVMConditionOperation param_1)

{
  switch(param_1) {
  case Equal:
    return L"EMVVMConditionOperation::Equal";
  case NotEqual:
    return L"EMVVMConditionOperation::NotEqual";
  case MoreThan:
    return L"EMVVMConditionOperation::MoreThan";
  case MoreThanOrEqual:
    return L"EMVVMConditionOperation::MoreThanOrEqual";
  case LessThan:
    return L"EMVVMConditionOperation::LessThan";
  case LessThanOrEqual:
    return L"EMVVMConditionOperation::LessThanOrEqual";
  case BetweenInclusive:
    return L"EMVVMConditionOperation::BetweenInclusive";
  case BetweenExclusive:
    return L"EMVVMConditionOperation::BetweenExclusive";
  default:
    return L"<Unknown EMVVMConditionOperation>";
  }
}

// Z_Construct_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass_NoRegister @ 14a7682f0

UClass * __cdecl
Z_Construct_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass.
                InnerSingleton,
               UDEPRECATED_MVVMViewModelBlueprintGeneratedClass::
               StaticRegisterNativesUDEPRECATED_MVVMViewModelBlueprintGeneratedClass,0x370,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_MVVMViewModelBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UDEPRECATED_MVVMViewModelBlueprintGeneratedClass>,
               local_res8,UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MVVMViewModelBlueprintGeneratedClass.InnerSingleton;
}

// Z_Construct_UClass_UMVVMBindingSubsystem_NoRegister @ 14a7683b0

UClass * __cdecl Z_Construct_UClass_UMVVMBindingSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMBindingSubsystem",
               &Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton,
               UMVVMBindingSubsystem::StaticRegisterNativesUMVVMBindingSubsystem,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMVVMBindingSubsystem>,
               InternalVTableHelperCtorCaller<UMVVMBindingSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UMVVMBlueprintLibrary_NoRegister @ 14a768470

UClass * __cdecl Z_Construct_UClass_UMVVMBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMBlueprintLibrary",
               &Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton,
               UMVVMBlueprintLibrary::StaticRegisterNativesUMVVMBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMVVMBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMVVMBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMVVMConversionLibrary_NoRegister @ 14a768530

UClass * __cdecl Z_Construct_UClass_UMVVMConversionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton,
               UMVVMConversionLibrary::StaticRegisterNativesUMVVMConversionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMVVMConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMVVMFontConversionLibrary_NoRegister @ 14a7685f0

UClass * __cdecl Z_Construct_UClass_UMVVMFontConversionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMFontConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton,
               UMVVMFontConversionLibrary::StaticRegisterNativesUMVVMFontConversionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMFontConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMFontConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMVVMGameSubsystem_NoRegister @ 14a7686b0

UClass * __cdecl Z_Construct_UClass_UMVVMGameSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMGameSubsystem",
               &Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton,
               UMVVMGameSubsystem::StaticRegisterNativesUMVVMGameSubsystem,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMGameSubsystem>,
               InternalVTableHelperCtorCaller<UMVVMGameSubsystem>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMGameSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UMVVMInstancedViewModelGeneratedClass_NoRegister @ 14a768770

UClass * __cdecl Z_Construct_UClass_UMVVMInstancedViewModelGeneratedClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMInstancedViewModelGeneratedClass",
               &Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton,
               UMVVMInstancedViewModelGeneratedClass::
               StaticRegisterNativesUMVVMInstancedViewModelGeneratedClass,0x3d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMInstancedViewModelGeneratedClass>,
               InternalVTableHelperCtorCaller<UMVVMInstancedViewModelGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton;
}

// Z_Construct_UClass_UMVVMPanelWidgetViewExtension_NoRegister @ 14a768830

UClass * __cdecl Z_Construct_UClass_UMVVMPanelWidgetViewExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMPanelWidgetViewExtension",
               &Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton,
               UMVVMPanelWidgetViewExtension::StaticRegisterNativesUMVVMPanelWidgetViewExtension,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMPanelWidgetViewExtension>,
               InternalVTableHelperCtorCaller<UMVVMPanelWidgetViewExtension>,local_res8,
               UMVVMViewExtension::StaticClass,UMVVMView::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton;
}

// Z_Construct_UClass_UMVVMSlateBrushConversionLibrary_NoRegister @ 14a7688f0

UClass * __cdecl Z_Construct_UClass_UMVVMSlateBrushConversionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMSlateBrushConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton,
               UMVVMSlateBrushConversionLibrary::
               StaticRegisterNativesUMVVMSlateBrushConversionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMSlateBrushConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMSlateBrushConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMVVMSubsystem_NoRegister @ 14a7689b0

UClass * __cdecl Z_Construct_UClass_UMVVMSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMSubsystem",
               &Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton,
               UMVVMSubsystem::StaticRegisterNativesUMVVMSubsystem,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMSubsystem>,
               InternalVTableHelperCtorCaller<UMVVMSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UMVVMViewListViewBaseClassExtension_NoRegister @ 14a768a70

UClass * __cdecl Z_Construct_UClass_UMVVMViewListViewBaseClassExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewListViewBaseClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton,
               UMVVMViewListViewBaseClassExtension::
               StaticRegisterNativesUMVVMViewListViewBaseClassExtension,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewListViewBaseClassExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewListViewBaseClassExtension>,local_res8,
               UMVVMViewClassExtension::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton;
}

// Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode @ 14a768b30

UEnum * __cdecl Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode(void)

{
  if (Z_Registration_Info_UEnum_EMVVMBindingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMVVMBindingMode.InnerSingleton,
               &Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMVVMBindingMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMVVMEventField @ 14a768b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMEventField(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMEventField.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMEventField.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMEventField_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMEventField.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMEventField.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding @ 14a768bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_CompiledEvent @ 14a768c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_CompiledEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledEvent.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_CompiledEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledEvent.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_CompiledEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateBindingKey @ 14a768cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateBindingKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateBindingKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateBindingKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateBindingKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateBindingKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateBindingKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_EventKey @ 14a768d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_EventKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_EventKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_EventKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_EventKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_EventKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_EventKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator @ 14a768df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceCreator.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceCreator.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceCreator.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewClass_SourceCreator.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMViewSource @ 14a768e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMViewSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewSource.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMViewSource.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMViewSource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMViewSource.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMVVMViewSource.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMVVMView_SourceKey @ 14a768ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMVVMView_SourceKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMVVMView_SourceKey.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMVVMView_SourceKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FMVVMView_SourceKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMVVMView_SourceKey.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMVVMView_SourceKey.InnerSingleton;
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

// IMPLEMENT_MODULE_ModelViewViewModel @ 14a76ce30

void __cdecl IMPLEMENT_MODULE_ModelViewViewModel(void)

{
  return;
}

// OnLibraryBindingExecuted'' @ 1504208c0

void __cdecl `dynamic_atexit_destructor_for_'UE::MVVM::FDebugging::OnLibraryBindingExecuted__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UE::MVVM::FDebugging::OnLibraryBindingExecuted._8_8_,
             UE::MVVM::FDebugging::OnLibraryBindingExecuted._16_4_);
  if (UE::MVVM::FDebugging::OnLibraryBindingExecuted._8_8_ != 0) {
    FMemory::Free((void *)UE::MVVM::FDebugging::OnLibraryBindingExecuted._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UE::MVVM::FDebugging::OnLibraryBindingExecuted);
  return;
}

// OnViewBeginDestruction'' @ 150420900

void __cdecl `dynamic_atexit_destructor_for_'UE::MVVM::FDebugging::OnViewBeginDestruction__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UE::MVVM::FDebugging::OnViewBeginDestruction._8_8_,
             UE::MVVM::FDebugging::OnViewBeginDestruction._16_4_);
  if (UE::MVVM::FDebugging::OnViewBeginDestruction._8_8_ != 0) {
    FMemory::Free((void *)UE::MVVM::FDebugging::OnViewBeginDestruction._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UE::MVVM::FDebugging::OnViewBeginDestruction);
  return;
}

// OnViewConstructed'' @ 150420940

void __cdecl `dynamic_atexit_destructor_for_'UE::MVVM::FDebugging::OnViewConstructed__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UE::MVVM::FDebugging::OnViewConstructed._8_8_,
             UE::MVVM::FDebugging::OnViewConstructed._16_4_);
  if (UE::MVVM::FDebugging::OnViewConstructed._8_8_ != 0) {
    FMemory::Free((void *)UE::MVVM::FDebugging::OnViewConstructed._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UE::MVVM::FDebugging::OnViewConstructed);
  return;
}

// OnViewSourceValueChanged'' @ 150420980

void __cdecl `dynamic_atexit_destructor_for_'UE::MVVM::FDebugging::OnViewSourceValueChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UE::MVVM::FDebugging::OnViewSourceValueChanged._8_8_,
             UE::MVVM::FDebugging::OnViewSourceValueChanged._16_4_);
  if (UE::MVVM::FDebugging::OnViewSourceValueChanged._8_8_ != 0) {
    FMemory::Free((void *)UE::MVVM::FDebugging::OnViewSourceValueChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UE::MVVM::FDebugging::OnViewSourceValueChanged);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultEvaluationMode'' @ 1504209c0

void __cdecl UE::MVVM::Private::_dynamic_atexit_destructor_for__CVarDefaultEvaluationMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultEvaluationMode);
  return;
}

// `dynamic_atexit_destructor_for_'Local'' @ 1504209e0

void __cdecl
`UMVVMViewModelBase::GetFieldNotificationDescriptor'::__l2::_dynamic_atexit_destructor_for__Local__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogMVVM'' @ 1504209f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMVVM__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMVVM);
  return;
}

// `dynamic_atexit_destructor_for_'RecursiveDetector'' @ 150420a10

void __cdecl UE::MVVM::Private::_dynamic_atexit_destructor_for__RecursiveDetector__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RecursiveDetector.AllocatorInstance.Data;
  if (RecursiveDetector.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RecursiveDetector.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'sViewClasses'' @ 150420a30

void __cdecl `UMVVMView::SetViewModel'::__l2::_dynamic_atexit_destructor_for__sViewClasses__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = sViewClasses.AllocatorInstance.Data;
  if (sViewClasses.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (sViewClasses.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

