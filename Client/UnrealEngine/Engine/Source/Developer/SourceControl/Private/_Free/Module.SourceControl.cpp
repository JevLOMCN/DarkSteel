// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 272

// DefaultRevisionControlStyleInstance'' @ 1410a7c30

void __cdecl
`dynamic_initializer_for_'FRevisionControlStyleManager::DefaultRevisionControlStyleInstance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRevisionControlStyleManager::
         DefaultRevisionControlStyleInstance__);
  return;
}

// IsCheckInChangesEnabled'' @ 1410a7c50

void __cdecl `dynamic_initializer_for_'SSourceControlControls::IsCheckInChangesEnabled__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::IsCheckInChangesEnabled__);
  return;
}

// IsCheckInChangesVisible'' @ 1410a7c70

void __cdecl `dynamic_initializer_for_'SSourceControlControls::IsCheckInChangesVisible__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::IsCheckInChangesVisible__);
  return;
}

// IsRestoreAsLatestEnabled'' @ 1410a7c90

void __cdecl `dynamic_initializer_for_'SSourceControlControls::IsRestoreAsLatestEnabled__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::IsRestoreAsLatestEnabled__);
  return;
}

// IsRestoreAsLatestVisible'' @ 1410a7cb0

void __cdecl `dynamic_initializer_for_'SSourceControlControls::IsRestoreAsLatestVisible__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::IsRestoreAsLatestVisible__);
  return;
}

// IsSyncLatestEnabled'' @ 1410a7cd0

void __cdecl `dynamic_initializer_for_'SSourceControlControls::IsSyncLatestEnabled__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::IsSyncLatestEnabled__);
  return;
}

// IsSyncLatestVisible'' @ 1410a7cf0

void __cdecl `dynamic_initializer_for_'SSourceControlControls::IsSyncLatestVisible__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::IsSyncLatestVisible__);
  return;
}

// NumConflictsRemaining'' @ 1410a7d10

void __cdecl `dynamic_initializer_for_'SSourceControlControls::NumConflictsRemaining__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::NumConflictsRemaining__);
  return;
}

// NumConflictsUpcoming'' @ 1410a7d30

void __cdecl `dynamic_initializer_for_'SSourceControlControls::NumConflictsUpcoming__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::NumConflictsUpcoming__);
  return;
}

// OnCheckInChangesClicked'' @ 1410a7d50

void __cdecl `dynamic_initializer_for_'SSourceControlControls::OnCheckInChangesClicked__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::OnCheckInChangesClicked__);
  return;
}

// OnRestoreAsLatestClicked'' @ 1410a7d70

void __cdecl `dynamic_initializer_for_'SSourceControlControls::OnRestoreAsLatestClicked__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::OnRestoreAsLatestClicked__);
  return;
}

// OnSyncLatestClicked'' @ 1410a7d90

void __cdecl `dynamic_initializer_for_'SSourceControlControls::OnSyncLatestClicked__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SSourceControlControls::OnSyncLatestClicked__);
  return;
}

// StyleName'' @ 1410a7db0

void __cdecl `dynamic_initializer_for_'FDefaultRevisionControlStyle::StyleName__(void)

{
  ::FName::FName(&FDefaultRevisionControlStyle::StyleName,"DefaultRevisionControlStyle");
  return;
}

// `dynamic_initializer_for_'CVarSourceControlAssetDataCacheMaxAsyncTask'' @ 1410a7dd0

void __cdecl _dynamic_initializer_for__CVarSourceControlAssetDataCacheMaxAsyncTask__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 8;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSourceControlAssetDataCacheMaxAsyncTask,
             L"SourceControlAssetDataCache.MaxAsyncTask",local_res8,
             L"Maximum number of task running in parallel to fetch AssetData information.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSourceControlAssetDataCacheMaxAsyncTask__);
  return;
}

// `dynamic_initializer_for_'CVarSourceControlEnableLoginDialogModal'' @ 1410a7e20

void __cdecl
SourceControlCVars::_dynamic_initializer_for__CVarSourceControlEnableLoginDialogModal__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSourceControlEnableLoginDialogModal,L"SourceControl.LoginDialog.ForceModal",
             local_res8,L"Forces the SourceControl \'Login Dialog\' to always be a modal dialog.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarSourceControlEnableLoginDialogModal__);
  return;
}

// `dynamic_initializer_for_'CVarSourceControlEnableRevertFromSceneOutliner'' @ 1410a7e70

void __cdecl
SourceControlCVars::_dynamic_initializer_for__CVarSourceControlEnableRevertFromSceneOutliner__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSourceControlEnableRevertFromSceneOutliner,
             L"SourceControl.Revert.EnableFromSceneOutliner",local_res8,
             L"Allows a SourceControl \'Revert\' operation to be triggered from the SceneOutliner.",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarSourceControlEnableRevertFromSceneOutliner__);
  return;
}

// `dynamic_initializer_for_'CVarSourceControlEnableRevertFromSubmitWidget'' @ 1410a7ec0

void __cdecl
SourceControlCVars::_dynamic_initializer_for__CVarSourceControlEnableRevertFromSubmitWidget__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSourceControlEnableRevertFromSubmitWidget,
             L"SourceControl.Revert.EnableFromSubmitWidget",local_res8,
             L"Allows a SourceControl \'Revert\' operation to be triggered from the SubmitWidget.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarSourceControlEnableRevertFromSubmitWidget__);
  return;
}

// `dynamic_initializer_for_'CVarSourceControlEnableRevertUnsaved'' @ 1410a7f10

void __cdecl
SourceControlCVars::_dynamic_initializer_for__CVarSourceControlEnableRevertUnsaved__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSourceControlEnableRevertUnsaved,L"SourceControl.RevertUnsaved.Enable",local_res8,
             L"Allows a SourceControl \'Revert\' operation to be triggered on an unsaved asset.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSourceControlEnableRevertUnsaved__);
  return;
}

// `dynamic_initializer_for_'CVarSourceControlEnableWorldReload'' @ 1410a7f60

void __cdecl
SourceControlCVars::_dynamic_initializer_for__CVarSourceControlEnableWorldReload__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSourceControlEnableWorldReload,L"SourceControl.EnableWorldReload",local_res8,
             L"Allows a SourceControl operation to perform a world reload.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSourceControlEnableWorldReload__);
  return;
}

// `dynamic_initializer_for_'LastErrorText'' @ 1410a7fb0

void __cdecl SourceControlHelpersInternal::_dynamic_initializer_for__LastErrorText__(void)

{
  FText::FText(&LastErrorText);
  atexit(_dynamic_atexit_destructor_for__LastErrorText__);
  return;
}

// `dynamic_initializer_for_'LogSourceControl'' @ 1410a7fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSourceControl__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSourceControl,L"LogSourceControl",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSourceControl__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1410a8020

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSourceControl'' @ 1410a8040

void __cdecl _dynamic_initializer_for__ModuleRegistrantSourceControl__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SourceControl";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SourceControl",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSourceControlModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SettingsSection'' @ 1410a8090

void __cdecl SourceControlSettingsConstants::_dynamic_initializer_for__SettingsSection__(void)

{
  ::FString::FString(&SettingsSection,L"SourceControl.SourceControlSettings");
  atexit(_dynamic_atexit_destructor_for__SettingsSection__);
  return;
}

// `dynamic_initializer_for_'SourceControlFeatureName'' @ 1410a80c0

void __cdecl _dynamic_initializer_for__SourceControlFeatureName__(void)

{
  FName::FName(&SourceControlFeatureName,"SourceControl");
  return;
}

// `dynamic_initializer_for_'StateRefreshInterval'' @ 1410a80e0

void __cdecl SourceControlConstants::_dynamic_initializer_for__StateRefreshInterval__(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_41e65a0bc0100000;
  auVar1 = roundpd(auVar1,auVar1,1);
  StateRefreshInterval.Ticks = (longlong)auVar1._0_8_;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h__Script_SourceControl_3091981486'' @ 1410a8110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h__Script_SourceControl_3091981486__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SourceControl",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h__Script_SourceControl_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h__Script_SourceControl_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h__Script_SourceControl_1992364168'' @ 1410a8160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h__Script_SourceControl_1992364168__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SourceControl",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h__Script_SourceControl_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_SourceControl'' @ 1410a81a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_SourceControl__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x53033514;
  local_res8[0].DeclarationsHash = 0x15ae0bbc;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_SourceControl,L"/Script/SourceControl",
             &Z_Registration_Info_UPackage__Script_SourceControl,local_res8);
  return;
}

// NewProp_bSilent_SetBit @ 146af4b90

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af4ba0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_CopyFile @ 146af4bb0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_CopyFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceControlHelpers_CurrentProvider @ 146af4bf0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_CurrentProvider(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146af4c30

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_IsAvailable @ 146af4c40

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_IsAvailable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146af4c80

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_IsEnabled @ 146af4c90

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_IsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg @ 146af4cd0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4d10

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af4d20

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd @ 146af4d30

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4d70

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af4d80

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete @ 146af4d90

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4dd0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af4de0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd @ 146af4df0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4e30

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af4e40

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete @ 146af4e50

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4e90

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_QueryFileState @ 146af4ea0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_QueryFileState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4ee0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_QueryFileStates_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_QueryFileStates @ 146af4ef0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_QueryFileStates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_QueryFileStates_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4f30

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af4f40

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_RevertFile @ 146af4f50

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_RevertFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4f90

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af4fa0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_RevertFiles @ 146af4fb0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_RevertFiles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af4ff0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af5000

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile @ 146af5010

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af5050

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af5060

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles @ 146af5070

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af50b0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_bSilent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af50c0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_SyncFile @ 146af50d0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_SyncFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af5110

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_bSilent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af5120

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_SyncFiles @ 146af5130

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_SyncFiles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature @ 146af51b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_SourceControl @ 146af51f0

UPackage * __cdecl Z_Construct_UPackage__Script_SourceControl(void)

{
  if (Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton;
}

// Z_Construct_UClass_USourceControlPreferences @ 146af53a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceControlPreferences(void)

{
  if (Z_Registration_Info_UClass_USourceControlPreferences.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceControlPreferences.OuterSingleton,
               &Z_Construct_UClass_USourceControlPreferences_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceControlPreferences.OuterSingleton;
}

// NewProp_bEnableValidationTag_SetBit @ 146af53e0

void __cdecl
Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableValidationTag_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bShouldDeleteNewFilesOnRevert_SetBit @ 146af53f0

void __cdecl
Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bShouldDeleteNewFilesOnRevert_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bEnableUncontrolledChangelists_SetBit @ 146af5400

void __cdecl
Z_Construct_UClass_USourceControlPreferences_Statics::NewProp_bEnableUncontrolledChangelists_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// NewProp_bRequiresRevisionControlToRenameLocalizableAssets_SetBit @ 146af5410

void __cdecl
Z_Construct_UClass_USourceControlPreferences_Statics::
NewProp_bRequiresRevisionControlToRenameLocalizableAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// Z_Construct_UClass_USourceControlHelpers @ 146af5420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceControlHelpers(void)

{
  if (Z_Registration_Info_UClass_USourceControlHelpers.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceControlHelpers.OuterSingleton,
               &Z_Construct_UClass_USourceControlHelpers_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USourceControlHelpers.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSourceControlState @ 146af5460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceControlState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceControlState.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceControlState.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceControlState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceControlState.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSourceControlState.InnerSingleton;
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

// NewProp_bIsValid_SetBit @ 146af54e0

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIsUnknown_SetBit @ 146af54f0

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bCanCheckIn_SetBit @ 146af5500

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bCanCheckOut_SetBit @ 146af5510

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewProp_bIsCheckedOut_SetBit @ 146af5520

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bIsCurrent_SetBit @ 146af5530

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_bIsSourceControlled_SetBit @ 146af5540

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16) = 1;
  return;
}

// NewProp_bIsAdded_SetBit @ 146af5550

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  return;
}

// NewProp_bIsDeleted_SetBit @ 146af5560

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIsIgnored_SetBit @ 146af5570

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bCanEdit_SetBit @ 146af5580

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bCanDelete_SetBit @ 146af5590

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// NewProp_bIsModified_SetBit @ 146af55a0

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bCanAdd_SetBit @ 146af55b0

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// NewProp_bIsConflicted_SetBit @ 146af55c0

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  return;
}

// NewProp_bCanRevert_SetBit @ 146af55d0

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f) = 1;
  return;
}

// NewProp_bIsCheckedOutOther_SetBit @ 146af55e0

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bIsCheckedOutInOtherBranch_SetBit @ 146af55f0

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutInOtherBranch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bIsModifiedInOtherBranch_SetBit @ 146af5600

void __cdecl
Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModifiedInOtherBranch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewStructOps @ 146af5610

void * __cdecl Z_Construct_UScriptStruct_FSourceControlState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceControlState,&UE::CoreUObject::Private::Construct<FSourceControlState>,&UE::CoreUObject::Private::ConstructForTests<FSourceControlState>,&UE::CoreUObject::Private::Destruct<FSourceControlState>,&UE::CoreUObject::Private::Copy<FSourceControlState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSilent_SetBit @ 146af5820

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState @ 146af5830

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af5870

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileStates_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileStates @ 146af5880

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileStates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileStates_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af58c0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bKeepCheckedOut_SetBit @ 146af58d0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bKeepCheckedOut_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af58e0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_CheckInFile @ 146af58f0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_CheckInFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af5930

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bKeepCheckedOut_SetBit @ 146af5940

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bKeepCheckedOut_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af5950

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_CheckInFiles @ 146af5960

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_CheckInFiles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af59a0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af59b0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_CheckOutFile @ 146af59c0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_CheckOutFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af5a00

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af5a10

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles @ 146af5a20

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af5a60

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af5a70

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile @ 146af5a80

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSilent_SetBit @ 146af5ac0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_bSilent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146af5ad0

void __cdecl
Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles @ 146af5ae0

UFunction * __cdecl Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_> @ 146af69d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FSourceControlAssetDataCache::LaunchFetchAssetDataTasks_::__l11::<lambda_1>_>
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
  TReferenceControllerBase<1> *local_a8;
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
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  local_e8.TaskCount = (atomic<unsigned___int64>)(param_2->FileStateRef).Object;
  local_e8.EmptyEventRef.Object =
       (TEventCount<unsigned_int> *)(param_2->FileStateRef).SharedReferenceCount.ReferenceController
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((TReferenceControllerBase<1> *)local_e8.EmptyEventRef.Object !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_e8.EmptyEventRef.Object)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_e8.EmptyEventRef.Object)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>,void>
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
    local_a8 = (TReferenceControllerBase<1> *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::`11'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
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
                    TFunctionRefCaller<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
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

// ConstructItems<TSharedRef<ISourceControlChangelist,1>,TSharedRef<ISourceControlChangelist,1>,int> @ 146af7b70

void __cdecl
ConstructItems<TSharedRef<ISourceControlChangelist,1>,TSharedRef<ISourceControlChangelist,1>,int>
          (void *param_1,TSharedRef<ISourceControlChangelist,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(ISourceControlChangelist **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FSourceControlProjectInfo,int> @ 146af83f0

void __cdecl
DestructItems<FSourceControlProjectInfo,int>(FSourceControlProjectInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ContentDirectories;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FSourceControlProjectInfo *)(pTVar2 + -1))->ProjectDirectory).Data.
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

// DestructItems<FSourceControlState,int> @ 146af8450

void __cdecl DestructItems<FSourceControlState,int>(FSourceControlState *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->CheckedOutOther;
    do {
      pFVar1 = (((FString *)((longlong)(pFVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pFVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -3) + 8));
      }
      pFVar2 = pFVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<ISourceControlChangelist,1>,int> @ 146af84b0

void __cdecl
DestructItems<TSharedRef<ISourceControlChangelist,1>,int>
          (TSharedRef<ISourceControlChangelist,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<ISourceControlChangelistState,1>,int> @ 146af84f0

void __cdecl
DestructItems<TSharedRef<ISourceControlChangelistState,1>,int>
          (TSharedRef<ISourceControlChangelistState,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<ISourceControlLabel,1>,int> @ 146af8530

void __cdecl
DestructItems<TSharedRef<ISourceControlLabel,1>,int>
          (TSharedRef<ISourceControlLabel,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<ISourceControlRevision,1>,int> @ 146af8570

void __cdecl
DestructItems<TSharedRef<ISourceControlRevision,1>,int>
          (TSharedRef<ISourceControlRevision,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<ISourceControlState,1>,int> @ 146af85b0

void __cdecl
DestructItems<TSharedRef<ISourceControlState,1>,int>
          (TSharedRef<ISourceControlState,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FScopedSourceControlProgress::Tick'::__l8::TSTR_EndFrameCmd248>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146af8f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FScopedSourceControlProgress::Tick_::__l8::TSTR_EndFrameCmd248>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FScopedSourceControlProgress::Tick'::__l8::TSTR_EndFrameCmd248>::Get
                      ();
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
      if (bVar8) goto LAB_146af9071;
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
    goto LAB_146af9265;
  }
LAB_146af9071:
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
LAB_146af914f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146af914f;
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
LAB_146af9265:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// HeapSortInternal<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,`FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>_>_> @ 146af9680

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,_FSourceControlFileStatusMonitor::Tick_::__l28::<lambda_1>_>_>
          (TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
           **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,_private:_bool___cdecl_FSourceControlFileStatusMonitor::Tick(float)_::_28_::<lambda_1>_>
          param_4)

{
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_146af979e:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pTVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pTVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>::operator()
                                  (param_4.Predicate,param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pTVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pTVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_146af979e;
    pTVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pTVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,`SSourceControlPicker::OnGetMenuContent'::__l2::<lambda_1>_>_> @ 146af9880

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,_SSourceControlPicker::OnGetMenuContent_::__l2::<lambda_1>_>_>
          (TTuple<FName,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FName,int>,_private:_class_TSharedRef<SWidget,1>___cdecl_SSourceControlPicker::OnGetMenuContent(void)_::_2_::<lambda_1>_>
          param_4)

{
  TTuple<FName,int> *pTVar1;
  TTuple<FName,int> *pTVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TTuple<FName,int> *pTVar11;
  longlong lVar12;
  int iVar13;
  
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
  iVar13 = iVar8;
  iVar9 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_146af998d:
      if (iVar9 == 0) {
        iVar8 = param_2 + -1;
        lVar12 = (longlong)iVar8;
        if (0 < iVar8) {
          pTVar11 = param_1 + lVar12;
          do {
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined4 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar11;
            *(undefined4 *)&param_1->field_0x8 = *(undefined4 *)&pTVar11->field_0x8;
            *(undefined8 *)pTVar11 = uVar3;
            *(undefined4 *)&pTVar11->field_0x8 = uVar4;
            iVar13 = 0;
            if (1 < iVar8) {
              do {
                iVar7 = iVar13 * 2;
                iVar9 = iVar7 + 1;
                if (iVar7 + 2 < iVar8) {
                  if (*(int *)&param_1[(longlong)iVar7 + 2].field_0x8 <
                      *(int *)&param_1[iVar9].field_0x8) {
                    iVar9 = iVar7;
                  }
                  iVar9 = iVar9 + 1;
                }
                pTVar1 = param_1 + iVar9;
                pTVar2 = param_1 + iVar13;
                if (*(int *)&pTVar1->field_0x8 <= *(int *)&param_1[iVar13].field_0x8) break;
                uVar3 = *(undefined8 *)pTVar2;
                uVar4 = *(undefined4 *)&pTVar2->field_0x8;
                *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
                *(undefined4 *)&pTVar2->field_0x8 = *(undefined4 *)&pTVar1->field_0x8;
                *(undefined8 *)pTVar1 = uVar3;
                *(undefined4 *)&pTVar1->field_0x8 = uVar4;
                iVar13 = iVar9;
              } while (iVar9 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar12 = lVar12 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar7 = iVar9 + -1;
      iVar8 = iVar13 + -2;
      iVar13 = iVar8;
      iVar9 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if (*(int *)&param_1[(longlong)iVar8 + 2].field_0x8 < *(int *)&param_1[iVar10].field_0x8) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar11 = param_1 + iVar10;
    pTVar1 = param_1 + iVar7;
    if (*(int *)&pTVar11->field_0x8 <= *(int *)&param_1[iVar7].field_0x8) goto LAB_146af998d;
    uVar3 = *(undefined8 *)pTVar1;
    uVar4 = *(undefined4 *)&pTVar1->field_0x8;
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar11;
    *(undefined4 *)&pTVar1->field_0x8 = *(undefined4 *)&pTVar11->field_0x8;
    iVar8 = iVar10 * 2 + 1;
    *(undefined8 *)pTVar11 = uVar3;
    *(undefined4 *)&pTVar11->field_0x8 = uVar4;
    iVar7 = iVar10;
  } while( true );
}

// InternalConstructor<USourceControlHelpers> @ 146af9b70

void __cdecl InternalConstructor<USourceControlHelpers>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USourceControlHelpers__6B_;
  }
  return;
}

// InternalConstructor<USourceControlPreferences> @ 146af9ba0

void __cdecl InternalConstructor<USourceControlPreferences>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7USourceControlPreferences__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex.Value = 0;
    *(undefined1 *)&this[2].SectionName.ComparisonIndex.Value = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<USourceControlHelpers> @ 146af9c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USourceControlHelpers>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceControlHelpers::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USourceControlHelpers__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceControlPreferences> @ 146af9cd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USourceControlPreferences>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceControlPreferences::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7USourceControlPreferences__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex.Value = 0;
    *(undefined1 *)&this[2].SectionName.ComparisonIndex.Value = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,`FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>_>_> @ 146af9dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,_FSourceControlFileStatusMonitor::Tick_::__l28::<lambda_1>_>_>
          (TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
           **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,_private:_bool___cdecl_FSourceControlFileStatusMonitor::Tick(float)_::_28_::<lambda_1>_>
          param_4)

{
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_> *pTVar1;
  bool bVar2;
  int iVar3;
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_> **ppTVar4
  ;
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_> **ppTVar5
  ;
  int iVar6;
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
  ***pppTVar7;
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_> **ppTVar8
  ;
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_> **ppTVar9
  ;
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
  **ppTVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
  **local_358;
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
  **local_348;
  TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>
  **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppTVar7 = &local_348;
    do {
      ppTVar4 = pppTVar7[1];
      ppTVar5 = *pppTVar7;
      local_358 = pppTVar7[2];
      iVar3 = (int)((longlong)ppTVar4 - (longlong)ppTVar5 >> 3) + 1;
      ppTVar10 = ppTVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_146af9e90:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppTVar8 = ppTVar4 + 1;
          pTVar1 = ppTVar10[iVar3 >> 1];
          ppTVar10[iVar3 >> 1] = *ppTVar10;
          *ppTVar10 = pTVar1;
          ppTVar5 = ppTVar10;
LAB_146af9ec0:
          ppTVar5 = ppTVar5 + 1;
          if (ppTVar5 <= ppTVar4) goto code_r0x000146af9ec9;
          goto LAB_146af9ee0;
        }
        for (; ppTVar8 = ppTVar10, ppTVar5 = ppTVar10, ppTVar10 < ppTVar4; ppTVar4 = ppTVar4 + -1) {
          while (ppTVar9 = ppTVar8, ppTVar5 = ppTVar5 + 1, ppTVar5 <= ppTVar4) {
            bVar2 = `FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>::operator()
                              (param_4.Predicate,*ppTVar9,*ppTVar5);
            ppTVar8 = ppTVar5;
            if (!bVar2) {
              ppTVar8 = ppTVar9;
            }
          }
          pTVar1 = *ppTVar9;
          *ppTVar9 = *ppTVar4;
          *ppTVar4 = pTVar1;
        }
        goto LAB_146af9fa6;
      }
LAB_146af9f95:
      HeapSortInternal<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>_const_*,_FSourceControlFileStatusMonitor::Tick_::__l28::<lambda_1>_>_>
                (ppTVar5,iVar3,param_3,param_4);
LAB_146af9fa6:
      pppTVar7 = pppTVar7 + -3;
    } while (&local_348 <= pppTVar7);
  }
  return;
code_r0x000146af9ec9:
  bVar2 = `FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>::operator()
                    (param_4.Predicate,*ppTVar10,*ppTVar5);
  if (!bVar2) goto LAB_146af9ec0;
LAB_146af9ee0:
  do {
    ppTVar9 = ppTVar8;
    ppTVar8 = ppTVar9 + -1;
    if (ppTVar8 <= ppTVar10) break;
    bVar2 = `FSourceControlFileStatusMonitor::Tick'::__l28::<lambda_1>::operator()
                      (param_4.Predicate,*ppTVar8,*ppTVar10);
  } while (!bVar2);
  if (ppTVar5 <= ppTVar8) {
    pTVar1 = *ppTVar5;
    *ppTVar5 = *ppTVar8;
    *ppTVar8 = pTVar1;
    goto LAB_146af9ec0;
  }
  pTVar1 = *ppTVar10;
  iVar6 = iVar6 + -1;
  *ppTVar10 = *ppTVar8;
  *ppTVar8 = pTVar1;
  if ((longlong)((longlong)ppTVar8 + (-8 - (longlong)ppTVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppTVar4 - (longlong)ppTVar5 & 0xfffffffffffffff8U)) {
    if (ppTVar5 < ppTVar4) {
      *pppTVar7 = ppTVar5;
      pppTVar7[1] = ppTVar4;
      *(int *)(pppTVar7 + 2) = iVar6;
      pppTVar7 = pppTVar7 + 3;
    }
    if (ppTVar8 <= ppTVar10 + 1) goto LAB_146af9fa6;
    ppTVar4 = ppTVar9 + -2;
    ppTVar5 = ppTVar10;
  }
  else {
    if (ppTVar10 + 1 < ppTVar8) {
      *pppTVar7 = ppTVar10;
      pppTVar7[1] = ppTVar9 + -2;
      *(int *)(pppTVar7 + 2) = iVar6;
      pppTVar7 = pppTVar7 + 3;
    }
    if (ppTVar4 <= ppTVar5) goto LAB_146af9fa6;
  }
  iVar3 = (int)((longlong)ppTVar4 - (longlong)ppTVar5 >> 3) + 1;
  ppTVar10 = ppTVar5;
  if (iVar6 == 0) goto LAB_146af9f95;
  goto LAB_146af9e90;
}

// IntroSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,`SSourceControlPicker::OnGetMenuContent'::__l2::<lambda_1>_>_> @ 146afa070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,_SSourceControlPicker::OnGetMenuContent_::__l2::<lambda_1>_>_>
          (TTuple<FName,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FName,int>,_private:_class_TSharedRef<SWidget,1>___cdecl_SSourceControlPicker::OnGetMenuContent(void)_::_2_::<lambda_1>_>
          param_4)

{
  TTuple<FName,int> *pTVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  TTuple<FName,int> *pTVar6;
  TTuple<FName,int> *pTVar7;
  TTuple<FName,int> *pTVar8;
  TTuple<FName,int> *pTVar9;
  TTuple<FName,int> *pTVar10;
  TTuple<FName,int> *pTVar11;
  TTuple<FName,int> **ppTVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  TTuple<FName,int> *local_348;
  TTuple<FName,int> *local_338;
  TTuple<FName,int> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar13;
    memset(local_320,0,0x2e8);
    ppTVar12 = &local_338;
    do {
      pTVar6 = ppTVar12[1];
      pTVar11 = *ppTVar12;
      pTVar1 = ppTVar12[2];
      local_348._0_4_ = (int)pTVar1;
      iVar5 = (int)(((longlong)pTVar6 - (longlong)pTVar11) / 0xc) + 1;
      pTVar10 = pTVar11;
      if ((int)local_348 != 0) {
LAB_146afa140:
        if (8 < iVar5) {
          pTVar8 = pTVar6 + 1;
          iVar5 = iVar5 / 2;
          uVar2 = *(undefined8 *)(pTVar10 + iVar5);
          uVar3 = *(undefined4 *)&pTVar10[iVar5].field_0x8;
          *(undefined8 *)(pTVar10 + iVar5) = *(undefined8 *)pTVar10;
          *(undefined4 *)&pTVar10[iVar5].field_0x8 = *(undefined4 *)&pTVar10->field_0x8;
          *(undefined8 *)pTVar10 = uVar2;
          *(undefined4 *)&pTVar10->field_0x8 = uVar3;
          pTVar11 = pTVar10;
LAB_146afa186:
          pTVar7 = pTVar11;
          pTVar11 = pTVar7 + 1;
          if (pTVar11 <= pTVar6) goto code_r0x000146afa18f;
          goto LAB_146afa1a0;
        }
        for (; pTVar11 = pTVar10, pTVar1 = pTVar10, pTVar10 < pTVar6; pTVar6 = pTVar6 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar6) {
            if (*(int *)&pTVar11->field_0x8 < *(int *)&pTVar1->field_0x8) {
              pTVar11 = pTVar1;
            }
          }
          uVar2 = *(undefined8 *)pTVar11;
          uVar3 = *(undefined4 *)&pTVar11->field_0x8;
          *(undefined8 *)pTVar11 = *(undefined8 *)pTVar6;
          *(undefined4 *)&pTVar11->field_0x8 = *(undefined4 *)&pTVar6->field_0x8;
          *(undefined8 *)pTVar6 = uVar2;
          *(undefined4 *)&pTVar6->field_0x8 = uVar3;
        }
        goto LAB_146afa2b6;
      }
LAB_146afa2a7:
      local_348 = pTVar1;
      HeapSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,_SSourceControlPicker::OnGetMenuContent_::__l2::<lambda_1>_>_>
                (pTVar11,iVar5,param_3,param_4);
LAB_146afa2b6:
      ppTVar12 = ppTVar12 + -3;
    } while (&local_338 <= ppTVar12);
  }
  return;
code_r0x000146afa18f:
  if (*(int *)&pTVar7[1].field_0x8 <= *(int *)&pTVar10->field_0x8) goto LAB_146afa186;
LAB_146afa1a0:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar10) break;
  } while (*(int *)&pTVar10->field_0x8 <= *(int *)&pTVar9[-1].field_0x8);
  if (pTVar11 <= pTVar8) {
    uVar2 = *(undefined8 *)pTVar11;
    uVar3 = *(undefined4 *)&pTVar7[1].field_0x8;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar8;
    *(undefined4 *)&pTVar7[1].field_0x8 = *(undefined4 *)&pTVar9[-1].field_0x8;
    *(undefined8 *)pTVar8 = uVar2;
    *(undefined4 *)&pTVar9[-1].field_0x8 = uVar3;
    goto LAB_146afa186;
  }
  uVar3 = *(undefined4 *)&pTVar10->field_0x8;
  local_348._0_4_ = (int)local_348 + -1;
  uVar2 = *(undefined8 *)pTVar10;
  *(undefined8 *)pTVar10 = *(undefined8 *)pTVar8;
  *(undefined4 *)&pTVar10->field_0x8 = *(undefined4 *)&pTVar9[-1].field_0x8;
  *(undefined8 *)pTVar8 = uVar2;
  *(undefined4 *)&pTVar9[-1].field_0x8 = uVar3;
  lVar4 = (longlong)pTVar8 + (-0xc - (longlong)pTVar10);
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  if ((lVar4 >> 1) - (lVar4 >> 0x3f) < ((longlong)pTVar6 - (longlong)pTVar11) / 0xc) {
    if (pTVar11 < pTVar6) {
      *ppTVar12 = pTVar11;
      ppTVar12[1] = pTVar6;
      *(int *)(ppTVar12 + 2) = (int)local_348;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar8 <= pTVar10 + 1) goto LAB_146afa2b6;
    pTVar6 = pTVar9 + -2;
    pTVar11 = pTVar10;
  }
  else {
    if (pTVar10 + 1 < pTVar8) {
      *ppTVar12 = pTVar10;
      ppTVar12[1] = pTVar9 + -2;
      *(int *)(ppTVar12 + 2) = (int)local_348;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar6 <= pTVar11) goto LAB_146afa2b6;
  }
  iVar5 = (int)(((longlong)pTVar6 - (longlong)pTVar11) / 0xc) + 1;
  pTVar10 = pTVar11;
  if ((int)local_348 == 0) goto LAB_146afa2a7;
  goto LAB_146afa140;
}

// MakeTDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs> @ 146afa440

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs> @ 146afa4f0

TSlateDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs> @ 146afa5a0

TSlateDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_> @ 146afb040

TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy,_private:_void___cdecl_FSourceControlAssetDataCache::GetFileHistory(void)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,_FSourceControlAssetDataCache::GetFileHistory_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy,_private:_void___cdecl_FSourceControlAssetDataCache::GetFileHistory(void)_::_2_::<lambda_1>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x18);
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).FilesToDispatch.ArrayNum;
  pFVar3 = (param_1->Functor).FilesToDispatch.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x24));
    ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)pFVar3,iVar2);
  }
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_> @ 146afb0f0

TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy,_void___cdecl_SourceControlHelpersInternal::RunQueryFileStates(TArrayView<FString_const_,int>,EConcurrency::Type,bool,TFunction<void___cdecl(FSourceControlState)>)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,_SourceControlHelpersInternal::RunQueryFileStates_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy,_void___cdecl_SourceControlHelpersInternal::RunQueryFileStates(TArrayView<FString_const_,int>,EConcurrency::Type,bool,TFunction<void___cdecl(FSourceControlState)>)_::_2_::<lambda_1>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::`2'::<lambda_1>_>
        ::_vftable_;
  lVar3 = *(longlong *)&(param_1->Functor).FileStateCallback;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(longlong *)((longlong)this + 0x20) = lVar3;
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)&(param_1->Functor).FileStateCallback.field_0x28;
    puVar6 = (undefined8 *)&(param_1->Functor).FileStateCallback.field_0x10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4;
    }
    (**(code **)*puVar6)();
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x58);
  *(ISourceControlProvider **)((longlong)this + 0x50) = (param_1->Functor).Provider;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).SCFilesToUpdate.ArrayNum;
  pFVar5 = (param_1->Functor).SCFilesToUpdate.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x60) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 100) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 100));
    ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)pFVar5,iVar2);
  }
  *(bool *)((longlong)this + 0x68) = (param_1->Functor).bSilent;
  return this;
}

// ~<lambda_1> @ 146b00830

void __thiscall
`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::
<lambda_1>::~<lambda_1>(void *this)

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
                    /* WARNING: Could not recover jumptable at 0x000146b00897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>,0,1> @ 146b008b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_USourceControlHelpers::AsyncQueryFileStates_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::`2'::<lambda_1>,0,1>::
        _vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::__l2::<lambda_1>,0,0> @ 146b008d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceControlHelpers::QueryFileState_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,0,0> @ 146b008f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USourceControlHelpers::QueryFileStates_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 146b00910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FSourceControlAssetDataCache::LaunchFetchAssetDataTasks_::__l11::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::`11'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>,1,0> @ 146b00930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FSourceControlAssetDataCache::LaunchFetchAssetDataTasks_::__l11::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// operator() @ 146b01c10

void __thiscall
`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  TSharedRef<ISourceControlState,1> *pTVar8;
  TSharedRef<ISourceControlState,1> *pTVar9;
  undefined1 local_res8 [8];
  FSourceControlState local_e8;
  TSharedRef<ISourceControlState,1> *local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  undefined1 local_50;
  undefined1 local_4f;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TSharedPtr<ISourceControlState,1> local_38;
  
  local_98 = (TSharedRef<ISourceControlState,1> *)0x0;
  local_90 = 0;
  (**(code **)(**(longlong **)((longlong)this + 0x30) + 0xa0))
            (*(longlong **)((longlong)this + 0x30),(longlong)this + 0x38,&local_98);
  iVar4 = (int)local_90;
  pTVar9 = local_98 + (int)local_90;
  pTVar8 = local_98;
  while( true ) {
    if ((int)local_90 != iVar4) {
      `TCheckedPointerIterator<TSharedRef<ISourceControlState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pTVar8 == pTVar9) break;
    pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_38.Object = pTVar8->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Filename.Data.ArrayNum = 0;
    local_e8.Filename.Data.ArrayMax = 0;
    local_e8.bIsValid = false;
    local_e8.bIsUnknown = false;
    local_e8.bCanCheckIn = false;
    local_e8.bCanCheckOut = false;
    local_e8.bIsCheckedOut = false;
    local_e8.bIsCurrent = false;
    local_e8.bIsSourceControlled = false;
    local_e8.bIsAdded = false;
    local_e8.bIsDeleted = false;
    local_e8.bIsIgnored = false;
    local_e8.bCanEdit = false;
    local_e8.bCanDelete = false;
    local_e8.bIsModified = false;
    local_e8.bCanAdd = false;
    local_e8.bIsConflicted = false;
    local_e8.bCanRevert = false;
    local_e8.bIsCheckedOutOther = false;
    local_e8.CheckedOutOther.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.CheckedOutOther.Data.ArrayNum = 0;
    local_e8.CheckedOutOther.Data.ArrayMax = 0;
    local_e8.bIsCheckedOutInOtherBranch = false;
    local_e8.bIsModifiedInOtherBranch = false;
    local_e8.PreviousUser.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.PreviousUser.Data.ArrayNum = 0;
    local_e8.PreviousUser.Data.ArrayMax = 0;
    local_38.SharedReferenceCount.ReferenceController = pTVar1;
    FSourceControlState::SetFromStatus(&local_e8,&local_38);
    FVar3.Data = local_e8.Filename.Data.AllocatorInstance.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    lVar7 = (longlong)local_e8.Filename.Data.ArrayNum;
    local_80 = local_e8.Filename.Data.ArrayNum;
    if (local_e8.Filename.Data.ArrayNum == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e8.Filename.Data.ArrayNum,0,&local_88,local_e8.Filename.Data.ArrayNum,
                 &local_7c);
      memcpy(local_88.Data,FVar3.Data,lVar7 * 2);
    }
    FVar3.Data = local_e8.CheckedOutOther.Data.AllocatorInstance.Data;
    lVar7 = (longlong)local_e8.CheckedOutOther.Data.ArrayNum;
    local_78 = local_e8.bIsValid;
    local_77 = local_e8.bIsUnknown;
    local_76 = local_e8.bCanCheckIn;
    local_75 = local_e8.bCanCheckOut;
    local_74 = local_e8.bIsCheckedOut;
    local_73 = local_e8.bIsCurrent;
    local_72 = local_e8.bIsSourceControlled;
    local_71 = local_e8.bIsAdded;
    local_70 = local_e8.bIsDeleted;
    local_6f = local_e8.bIsIgnored;
    local_6e = local_e8.bCanEdit;
    local_6d = local_e8.bCanDelete;
    local_6c = local_e8.bIsModified;
    local_6b = local_e8.bCanAdd;
    local_6a = local_e8.bIsConflicted;
    local_69 = local_e8.bCanRevert;
    local_68 = local_e8.bIsCheckedOutOther;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = local_e8.CheckedOutOther.Data.ArrayNum;
    if (local_e8.CheckedOutOther.Data.ArrayNum == 0) {
      local_54 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e8.CheckedOutOther.Data.ArrayNum,0,&local_60,
                 local_e8.CheckedOutOther.Data.ArrayNum,&local_54);
      memcpy(local_60.Data,FVar3.Data,lVar7 * 2);
    }
    FVar3.Data = local_e8.PreviousUser.Data.AllocatorInstance.Data;
    lVar7 = (longlong)local_e8.PreviousUser.Data.ArrayNum;
    local_50 = local_e8.bIsCheckedOutInOtherBranch;
    local_4f = local_e8.bIsModifiedInOtherBranch;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = local_e8.PreviousUser.Data.ArrayNum;
    if (local_e8.PreviousUser.Data.ArrayNum == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e8.PreviousUser.Data.ArrayNum,0,&local_48,
                 local_e8.PreviousUser.Data.ArrayNum,&local_3c);
      memcpy(local_48.Data,FVar3.Data,lVar7 * 2);
    }
    UE::Core::Private::Function::CheckCallable(*(void **)this);
    pcVar2 = *(code **)this;
    plVar6 = *(longlong **)((longlong)this + 0x28);
    if (*(longlong **)((longlong)this + 0x28) == (longlong *)0x0) {
      plVar6 = (longlong *)((longlong)this + 0x10);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(uVar5,&local_88);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if (local_e8.PreviousUser.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.PreviousUser.Data.AllocatorInstance.Data);
    }
    if (local_e8.CheckedOutOther.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.CheckedOutOther.Data.AllocatorInstance.Data);
    }
    if (local_e8.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Filename.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pTVar8 = pTVar8 + 1;
  }
  DestructItems<TSharedRef<ISourceControlState,1>,int>(local_98,(int)local_90);
  if (local_98 != (TSharedRef<ISourceControlState,1> *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// `scalar_deleting_destructor' @ 146b02090

void * __thiscall
IBaseDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b020c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b020f0

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02120

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02150

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::GetFileHistory'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b021a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x58),*(int *)((longlong)this + 0x60));
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02210

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSourceControlFileStatusMonitor,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSourceControlFileStatusMonitor,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02240

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSourceControlModule,void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSourceControlModule,void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02270

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSourceControlModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSourceControlModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b022a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02300

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02360

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b023c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02420

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02480

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b024e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02540

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b025a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02600

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02660

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b026c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02720

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02780

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b027e0

void * __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02810

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02840

void * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02870

void * __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b028a0

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
           *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b028f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02920

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02950

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
           *this,uint param_1)

{
  if (*(void **)&this->Payload != (void *)0x0) {
    FMemory::Free(*(void **)&this->Payload);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b029a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::`2'::<lambda_1>,0,1>::
        _vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b029f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::`11'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02b10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02b50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<FAssetData,TSizedDefaultAllocator<32>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<FAssetData,TSizedDefaultAllocator<32>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02b90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDefaultRevisionControlStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDefaultRevisionControlStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02bd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSourceControlFileStatusMonitor,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSourceControlFileStatusMonitor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02c10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSourceControlLogin,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSourceControlLogin,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02c50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSourceControlPicker,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSourceControlPicker,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02c90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSourceControlProgress,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSourceControlProgress,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02cd0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCheckIn,SharedPointerInternals::DefaultDeleter<FCheckIn>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCheckIn,SharedPointerInternals::DefaultDeleter<FCheckIn>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02d10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCheckOut,SharedPointerInternals::DefaultDeleter<FCheckOut>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCheckOut,SharedPointerInternals::DefaultDeleter<FCheckOut>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02d50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConnect,SharedPointerInternals::DefaultDeleter<FConnect>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FConnect,SharedPointerInternals::DefaultDeleter<FConnect>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02d90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCopy,SharedPointerInternals::DefaultDeleter<FCopy>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCopy,SharedPointerInternals::DefaultDeleter<FCopy>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02dd0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDelete,SharedPointerInternals::DefaultDeleter<FDelete>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDelete,SharedPointerInternals::DefaultDeleter<FDelete>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02e10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGetFileList,SharedPointerInternals::DefaultDeleter<FGetFileList>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGetFileList,SharedPointerInternals::DefaultDeleter<FGetFileList>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02e50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMarkForAdd,SharedPointerInternals::DefaultDeleter<FMarkForAdd>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMarkForAdd,SharedPointerInternals::DefaultDeleter<FMarkForAdd>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02e90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRevert,SharedPointerInternals::DefaultDeleter<FRevert>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FRevert,SharedPointerInternals::DefaultDeleter<FRevert>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02ed0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSync,SharedPointerInternals::DefaultDeleter<FSync>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSync,SharedPointerInternals::DefaultDeleter<FSync>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02f10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUpdateStatus,SharedPointerInternals::DefaultDeleter<FUpdateStatus>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUpdateStatus,SharedPointerInternals::DefaultDeleter<FUpdateStatus>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02f50

void * __thiscall FCheckIn::_scalar_deleting_destructor_(FCheckIn *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  ITextData *pIVar3;
  longlong *plVar4;
  
  pIVar3 = (this->SuccessMessage).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->Description).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b02fe0

void * __thiscall FCheckOut::_scalar_deleting_destructor_(FCheckOut *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->field_0x18)
  ;
  *(undefined ***)this = &___7ISourceControlOperation__6B_;
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03050

void * __thiscall FConnect::_scalar_deleting_destructor_(FConnect *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  pIVar3 = (this->OutErrorText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar4 = (this->Password).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b030e0

void * __thiscall FCopy::_scalar_deleting_destructor_(FCopy *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->Destination).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03160

void * __thiscall
FCreateWorkspace::_scalar_deleting_destructor_(FCreateWorkspace *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)(this->ClientView).AllocatorInstance.Data,
             (this->ClientView).ArrayNum);
  pFVar3 = (this->ClientView).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WorkspaceStream).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WorkspaceDescription).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WorkspaceRoot).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WorkspaceName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03230

void * __thiscall
FDefaultRevisionControlStyle::_scalar_deleting_destructor_
          (FDefaultRevisionControlStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDefaultRevisionControlStyle__6B_;
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03280

void * __thiscall
FDefaultSourceControlProvider::_scalar_deleting_destructor_
          (FDefaultSourceControlProvider *this,uint param_1)

{
  *this = (FDefaultSourceControlProvider)&___7ISourceControlProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b032c0

void * __thiscall FDelete::_scalar_deleting_destructor_(FDelete *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->field_0x18)
  ;
  *(undefined ***)this = &___7ISourceControlOperation__6B_;
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03330

void * __thiscall FDownloadFile::_scalar_deleting_destructor_(FDownloadFile *this,uint param_1)

{
  ~FDownloadFile(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03370

void * __thiscall FGetFileList::_scalar_deleting_destructor_(FGetFileList *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FString,int>
            ((FString *)(this->SearchPatterns).AllocatorInstance.Data,
             (this->SearchPatterns).ArrayNum);
  pFVar3 = (this->SearchPatterns).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(this->FilesList).AllocatorInstance.Data,(this->FilesList).ArrayNum);
  pFVar3 = (this->FilesList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03410

void * __thiscall FMarkForAdd::_scalar_deleting_destructor_(FMarkForAdd *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->field_0x18)
  ;
  *(undefined ***)this = &___7ISourceControlOperation__6B_;
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03480

void * __thiscall FRevert::_scalar_deleting_destructor_(FRevert *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FString,int>
            ((FString *)(this->DeletedFiles).AllocatorInstance.Data,(this->DeletedFiles).ArrayNum);
  pFVar3 = (this->DeletedFiles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03510

void * __thiscall
FSourceControlFileStatusMonitor::_scalar_deleting_destructor_
          (FSourceControlFileStatusMonitor *this,uint param_1)

{
  ~FSourceControlFileStatusMonitor(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03550

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSourceControlModule::_scalar_deleting_destructor_(FSourceControlModule *this,uint param_1)

{
  ~FSourceControlModule(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03590

void * __thiscall
FSourceControlOperationBase::_scalar_deleting_destructor_
          (FSourceControlOperationBase *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FSourceControlResultInfo::~FSourceControlResultInfo(&this->ResultInfo);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03600

void * __thiscall FSync::_scalar_deleting_destructor_(FSync *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->Revision).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03680

void * __thiscall FUpdateStatus::_scalar_deleting_destructor_(FUpdateStatus *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
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
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b036f0

void * __thiscall
ISourceControlModule::_scalar_deleting_destructor_(ISourceControlModule *this,uint param_1)

{
  *this = (ISourceControlModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03730

void * __thiscall
ISourceControlOperation::_scalar_deleting_destructor_(ISourceControlOperation *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7ISourceControlOperation__6B_;
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

// `scalar_deleting_destructor' @ 146b037a0

void * __thiscall
ISourceControlProvider::_scalar_deleting_destructor_(ISourceControlProvider *this,uint param_1)

{
  *this = (ISourceControlProvider)&___7ISourceControlProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b037e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSourceControlLogin::_scalar_deleting_destructor_(SSourceControlLogin *this,uint param_1)

{
  ~SSourceControlLogin(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03840

void * __thiscall
SSourceControlPicker::_scalar_deleting_destructor_(SSourceControlPicker *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b038a0

void * __thiscall
SSourceControlProgress::_scalar_deleting_destructor_(SSourceControlProgress *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCancelled);
  SBorder::~SBorder((SBorder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b03910

void * __thiscall
USourceControlHelpers::_scalar_deleting_destructor_(USourceControlHelpers *this,uint param_1)

{
  *(undefined ***)this = &___7USourceControlHelpers__6B_;
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

// `scalar_deleting_destructor' @ 146b03970

void * __thiscall
USourceControlPreferences::_scalar_deleting_destructor_
          (USourceControlPreferences *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USourceControlPreferences__6B_;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SpecificCollectionChangelistTags).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpecificCollectionChangelistTags);
  DestructItems<FString,int>
            ((FString *)(this->CollectionChangelistTags).AllocatorInstance.Data,
             (this->CollectionChangelistTags).ArrayNum);
  pFVar2 = (this->CollectionChangelistTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// ConvertFileToQualifiedPath @ 146b0f630

FString * __cdecl
SourceControlHelpersInternal::ConvertFileToQualifiedPath
          (FString *__return_storage_ptr__,FString *param_1,bool param_2,bool param_3,
          wchar_t *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FString *pFVar6;
  size_t sVar7;
  UPackage *pUVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_ec;
  FString local_e8;
  FText local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((param_1->Data).ArrayNum < 2) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_d8,L"SourceControlHelpers",L"UnspecifiedFile",L"File not specified");
    LogError(pFVar5,param_2);
    if (local_d8.TextData.Reference == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    return __return_storage_ptr__;
  }
  ::FString::operator=(__return_storage_ptr__,param_1);
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  if (((iVar10 + -1 < 0) || (iVar10 <= iVar10 + -1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  if (*(short *)((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)iVar10 * 2 + -2)
      == 0x27) {
    pFVar6 = FPackageName::ExportTextPathToObjectPath(&local_c8,__return_storage_ptr__);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  iVar11 = 0;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = iVar11;
  }
  if ((iVar10 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  if (*(short *)pFVar2 == 0x2f) {
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = iVar11;
    }
    local_b8._12_4_ = uStack_ec;
    local_b8.Size = iVar10;
    local_b8.DataPtr = (wchar_t *)pFVar2;
    bVar4 = FPackageName::IsValidLongPackageName(&local_b8,false,(EErrorCode *)0x0);
    if (bVar4) {
      bVar4 = FPackageName::DoesPackageExist(__return_storage_ptr__,__return_storage_ptr__,true);
      if (!bVar4) {
        pwVar9 = L"";
        ::FString::FString(&local_e8,L"");
        bVar4 = FPackageName::TryConvertLongPackageNameToFilename
                          (__return_storage_ptr__,__return_storage_ptr__,&local_e8);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (!bVar4) goto LAB_146b0f8f0;
        if ((param_3) && (bVar4 = FPaths::DirectoryExists(__return_storage_ptr__), bVar4)) {
          ::FString::PathAppend(__return_storage_ptr__,(wchar_t *)0x0,0);
        }
        else {
          if (param_4 == (wchar_t *)0x0) {
            if ((__return_storage_ptr__->Data).ArrayNum != 0) {
              pwVar9 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
            }
            pUVar8 = FindPackage((UObject *)0x0,pwVar9);
            if ((pUVar8 == (UPackage *)0x0) ||
               (((uint)pUVar8->PackageFlagsPrivate >> 0x11 & 1) == 0)) {
              pFVar6 = FPackageName::GetAssetPackageExtension();
            }
            else {
              pFVar6 = FPackageName::GetMapPackageExtension();
            }
            iVar1 = (pFVar6->Data).ArrayNum;
            param_4 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
            iVar10 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar10 = iVar11;
            }
          }
          else {
            sVar7 = wcslen(param_4);
            iVar10 = (int)sVar7;
          }
          ::FString::AppendChars(__return_storage_ptr__,param_4,iVar10);
        }
      }
      pFVar6 = FPaths::ConvertRelativePathToFull(&local_a8,__return_storage_ptr__);
      local_38.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      if (__return_storage_ptr__ != pFVar6) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
      goto LAB_146b0fa7c;
    }
  }
LAB_146b0f8f0:
  bVar4 = FPaths::IsRelative(__return_storage_ptr__);
  if (!bVar4) {
    return __return_storage_ptr__;
  }
  pFVar6 = FPaths::ConvertRelativePathToFull(&local_98,param_1);
  if (__return_storage_ptr__ != pFVar6) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  bVar4 = FPaths::FileExists(__return_storage_ptr__);
  if (bVar4) {
    return __return_storage_ptr__;
  }
  if ((param_3) && (bVar4 = FPaths::DirectoryExists(__return_storage_ptr__), bVar4)) {
    return __return_storage_ptr__;
  }
  pFVar6 = FPaths::ProjectDir(&local_68);
  pFVar6 = FPaths::ConvertRelativePathToFull(&local_78,pFVar6);
  pFVar6 = FPaths::ConvertRelativePathToFull(&local_88,pFVar6,param_1);
  if (__return_storage_ptr__ != pFVar6) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar4 = FPaths::FileExists(__return_storage_ptr__);
  if (bVar4) {
    return __return_storage_ptr__;
  }
  if ((param_3) && (bVar4 = FPaths::DirectoryExists(__return_storage_ptr__), bVar4)) {
    return __return_storage_ptr__;
  }
  pFVar6 = FPaths::EngineDir(&local_38);
  pFVar6 = FPaths::ConvertRelativePathToFull(&local_48,pFVar6);
  pFVar6 = FPaths::ConvertRelativePathToFull(&local_58,pFVar6,param_1);
  if (__return_storage_ptr__ != pFVar6) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_146b0fa7c:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertFilesToQualifiedPaths @ 146b0fab0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FString local_d8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_c8;
  FString local_b8;
  TSharedPtr<FCulture,1> local_a8;
  FFormatArgumentValue local_98;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  iVar1 = param_1->ArrayNum;
  uVar9 = 0;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar11) break;
    ConvertFileToQualifiedPath(&local_d8,(FString *)pFVar10,param_3,param_4,(wchar_t *)0x0);
    if (local_d8.Data.ArrayNum < 2) {
      uVar9 = uVar9 + 1;
    }
    else {
      pFVar8 = (param_2->AllocatorInstance).Data;
      if ((pFVar8 <= (FScriptContainerElement *)&local_d8) &&
         ((FScriptContainerElement *)&local_d8 < pFVar8 + (longlong)param_2->ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(FScriptContainerElement **)pFVar8 = local_d8.Data.AllocatorInstance.Data;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar8 + 8) = local_d8.Data.ArrayNum;
      *(int *)(pFVar8 + 0xc) = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    pFVar10 = pFVar10 + 0x10;
  }
  if (uVar9 == 0) {
    bVar3 = true;
  }
  else {
    local_c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Pairs.ArrayNum = 0;
    local_c8.Pairs.ArrayMax = 0;
    local_a8.Object = (FCulture *)0x0;
    local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar6 = FText::AsNumber(&local_78,uVar9,(FNumberFormattingOptions *)0x0,&local_a8);
    local_98.Type = Text;
    FText::FText((FText *)&local_98.TextValue,pFVar6);
    if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    ::FString::FString(&local_b8,L"SkipNum");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_c8,&local_b8,&local_98);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"SourceControlHelpers",L"FilesSkipped",
                        L"During conversion to qualified file paths, {SkipNum} files were skipped!")
    ;
    pFVar7 = FTextFormat::FTextFormat(&local_48,pFVar6,Default);
    pFVar6 = FText::Format(&local_68,pFVar7,&local_c8);
    LogError(pFVar6,param_3);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_c8.Pairs.AllocatorInstance.Data,
               local_c8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_c8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_c8.Pairs.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  return bVar3;
}

// CopyPackage_Internal @ 146b102e0

bool __cdecl
`anonymous_namespace'::CopyPackage_Internal
          (UPackage *param_1,UPackage *param_2,ECopyMethod param_3,Type param_4)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  FCopy *pFVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  EResolveMethod EVar10;
  int iVar11;
  ISourceControlModule *pIVar12;
  longlong *plVar13;
  IFileManager *pIVar14;
  ForAnyElementType FVar15;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  ForAnyElementType local_c0;
  ulonglong local_b8;
  FString local_b0;
  longlong *local_a0;
  TReferenceControllerBase<1> *local_98;
  longlong *local_90;
  TReferenceControllerBase<1> *local_88;
  FString local_80;
  TRawPtrProxy<FCopy> local_70;
  TSharedRef<FCopy,1> local_68;
  FCopy *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FDestructionSentinel local_48;
  
  pIVar12 = ISourceControlModule::Get();
  cVar7 = (**(code **)((longlong)*pIVar12 + 0x70))(pIVar12);
  if (cVar7 != '\0') {
    pIVar12 = ISourceControlModule::Get();
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x78))(pIVar12);
    USourceControlHelpers::PackageFilename(&local_80,param_2);
    (**(code **)(*plVar13 + 0x90))(plVar13,&local_a0,&local_80,param_4);
    if (local_a0 != (longlong *)0x0) {
      if ((local_a0 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      cVar7 = (**(code **)(*local_a0 + 0xd8))();
      if (cVar7 != '\0') {
        USourceControlHelpers::PackageFilename(&local_b0,param_1);
        (**(code **)(*plVar13 + 0x90))(plVar13,&local_90,&local_b0,param_4);
        local_70.Object = ::operator_new(0x70);
        if (local_70.Object == (FCopy *)0x0) {
          local_70.Object = (FCopy *)0x0;
        }
        else {
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = (longlong)&___7FCopy__6B_;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->_padding_ = 0;
          (local_70.Object)->CopyMethod = Branch;
          (local_70.Object)->ResolveMethod = AcceptTarget;
          ((local_70.Object)->Destination).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          ((local_70.Object)->Destination).Data.ArrayNum = 0;
          ((local_70.Object)->Destination).Data.ArrayMax = 0;
        }
        TSharedRef<FCopy,1>::TSharedRef<FCopy,1><FCopy>(&local_68,&local_70);
        pFVar6 = local_68.Object;
        iVar11 = local_b0.Data.ArrayNum;
        FVar15.Data = local_b0.Data.AllocatorInstance.Data;
        pFVar1 = &(local_68.Object)->Destination;
        if (pFVar1 != &local_b0) {
          piVar2 = &((local_68.Object)->Destination).Data.ArrayMax;
          iVar3 = *piVar2;
          ((local_68.Object)->Destination).Data.ArrayNum = local_b0.Data.ArrayNum;
          if ((local_b0.Data.ArrayNum == 0) && (iVar3 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_b0.Data.ArrayNum,iVar3,(ForAnyElementType *)pFVar1,
                       local_b0.Data.ArrayNum,piVar2);
            if (iVar11 != 0) {
              memcpy((pFVar1->Data).AllocatorInstance.Data,FVar15.Data,(longlong)iVar11 * 2);
            }
          }
        }
        pFVar6->CopyMethod = param_3;
        if (local_90 != (longlong *)0x0) {
          if ((local_90 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          cVar7 = (**(code **)(*local_90 + 0x130))();
          if (cVar7 == '\0') {
            pIVar14 = IFileManager::Get();
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_b0.Data.ArrayNum != 0) {
              FVar15.Data = local_b0.Data.AllocatorInstance.Data;
            }
            cVar7 = (**(code **)((longlong)*pIVar14 + 0x50))(pIVar14,FVar15.Data);
            EVar10 = AcceptSource;
            if (cVar7 == '\0') goto LAB_146b10536;
          }
        }
        EVar10 = AcceptTarget;
LAB_146b10536:
        local_58 = local_68.Object;
        pTStack_50 = local_68.SharedReferenceCount.ReferenceController;
        pFVar6->ResolveMethod = EVar10;
        lVar4 = *plVar13;
        local_b8 = 0;
        local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_c0.Data = (FScriptContainerElement *)0x0;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar11 = (**(code **)(lVar4 + 0xd0))(plVar13,&local_58,&local_80,0,&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_50);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_c8,(FWriteAccessScope *)&local_48);
        if (((int)local_b8 != 0) && (local_c0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_c0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
          local_b8 = local_b8 & 0xffffffff00000000;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
        if (local_80.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return iVar11 == 1;
        }
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
        return iVar11 == 1;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// DisplayCheckInStatus @ 146b137d0

bool __cdecl DisplayCheckInStatus(void)

{
  char cVar1;
  ISourceControlModule *pIVar2;
  longlong *plVar3;
  longlong lVar4;
  bool local_res8 [8];
  undefined1 local_res10 [24];
  
  local_res8[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"SourceControlSettings",L"DisplaySourceControlCheckInStatus",local_res8,
             &GEditorIni);
  if (local_res8[0] != false) {
    pIVar2 = ISourceControlModule::Get();
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
      cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
        lVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,local_res10);
        return *(char *)(lVar4 + 4) != '\0';
      }
    }
  }
  return false;
}

// EmptyLinkFunctionForGeneratedCodeSourceControlHelpers @ 146b13c00

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceControlHelpers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceControlPreferences @ 146b13c10

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceControlPreferences(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSourceControl_init @ 146b13c20

void __cdecl EmptyLinkFunctionForGeneratedCodeSourceControl_init(void)

{
  return;
}

// LogCheckoutFailure @ 146b1cc70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
LogCheckoutFailure(FString *param_1,FString *param_2,TSharedPtr<ISourceControlState,1> *param_3,
                  bool param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  ISourceControlState *pIVar6;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1d8
  ;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FFormatArgumentValue local_188;
  FFormatArgumentValue local_168;
  FFormatArgumentValue local_148;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  FTextFormat local_18;
  
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  local_1d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Pairs.ArrayNum = 0;
  local_1d8.Pairs.ArrayMax = 0;
  pFVar4 = FText::FromString(&local_128,param_1);
  local_188.Type = Text;
  FText::FText((FText *)&local_188.TextValue,pFVar4);
  if ((local_188.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FString::FString(&local_1b8,L"InFile");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_1b8,&local_188);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_188.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_188.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::FromString(&local_118,param_2);
  local_168.Type = Text;
  FText::FText((FText *)&local_168.TextValue,pFVar4);
  if ((local_168.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FString::FString(&local_1a8,L"SCFile");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_1a8,&local_168);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_168.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_168.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  if (param_4) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_f8,L"SourceControlHelpers",L"CheckoutFailed",
                        L"Failed to check out file \'{InFile}\' ({SCFile}).");
    pFVar5 = FTextFormat::FTextFormat(&local_58,pFVar4,Default);
    pFVar4 = FText::Format(&local_108,pFVar5,&local_1d8);
    SourceControlHelpersInternal::LogError(pFVar4,param_5);
    local_68.TextData.Reference = local_f8.TextData.Reference;
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      local_68.TextData.Reference = local_f8.TextData.Reference;
    }
  }
  else {
    if ((param_3->Object == (ISourceControlState *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = (**(code **)(*(longlong *)param_3->Object + 0xd8))();
    if (cVar3 == '\0') {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_d8,L"SourceControlHelpers",L"NotSourceControlled",
                          L"Could not check out the file \'{InFile}\' because it is not under revision control ({SCFile})."
                         );
      pFVar5 = FTextFormat::FTextFormat(&local_48,pFVar4,Default);
      pFVar4 = FText::Format(&local_e8,pFVar5,&local_1d8);
      SourceControlHelpersInternal::LogError(pFVar4,param_5);
      local_68.TextData.Reference = local_d8.TextData.Reference;
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        local_68.TextData.Reference = local_d8.TextData.Reference;
      }
    }
    else {
      if ((param_3->Object == (ISourceControlState *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      cVar3 = (**(code **)(*(longlong *)param_3->Object + 0xd0))();
      if (cVar3 == '\0') {
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_b8,L"SourceControlHelpers",L"NotAtHeadRevision",
                            L"File \'{InFile}\' is not at head revision ({SCFile}).");
        pFVar5 = FTextFormat::FTextFormat(&local_38,pFVar4,Default);
        pFVar4 = FText::Format(&local_c8,pFVar5,&local_1d8);
        SourceControlHelpersInternal::LogError(pFVar4,param_5);
        local_68.TextData.Reference = local_b8.TextData.Reference;
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
          local_68.TextData.Reference = local_b8.TextData.Reference;
        }
      }
      else {
        pIVar6 = TSharedPtr<ISourceControlState,1>::operator->(param_3);
        cVar3 = (**(code **)(*(longlong *)pIVar6 + 0x90))(pIVar6,&local_1c8);
        if (cVar3 == '\0') {
          pFVar4 = FText::AsLocalizable_Advanced_LocText
                             (&local_68,L"SourceControlHelpers",L"CouldNotDetermineState",
                              L"Could not determine revision control state of file \'{InFile}\' ({SCFile})."
                             );
          pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
          pFVar4 = FText::Format(&local_78,pFVar5,&local_1d8);
          SourceControlHelpersInternal::LogError(pFVar4,param_5);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
        }
        else {
          pFVar4 = FText::FromString(&local_a8,&local_1c8);
          local_148.Type = Text;
          FText::FText((FText *)&local_148.TextValue,pFVar4);
          if ((local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar2 = FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FString::FString(&local_198,L"SimultaneousCheckoutUser");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_198,&local_148);
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_148.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          pFVar4 = FText::AsLocalizable_Advanced_LocText
                             (&local_88,L"SourceControlHelpers",L"SimultaneousCheckout",
                              L"File \'{InFile}\' is checked out by another ({SimultaneousCheckoutUser}) ({SCFile})."
                             );
          pFVar5 = FTextFormat::FTextFormat(&local_28,pFVar4,Default);
          pFVar4 = FText::Format(&local_98,pFVar5,&local_1d8);
          SourceControlHelpersInternal::LogError(pFVar4,param_5);
          local_68.TextData.Reference = local_88.TextData.Reference;
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            local_68.TextData.Reference = local_88.TextData.Reference;
          }
        }
      }
    }
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data,
             local_1d8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_1d8.Pairs.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// LogError @ 146b1d1a0

void __cdecl SourceControlHelpersInternal::LogError(FText *param_1,bool param_2)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FMessageLog *this;
  FName local_res8;
  undefined1 local_res10 [8];
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  TVar2.Reference = LastErrorText.TextData.Reference;
  pIVar1 = (param_1->TextData).Reference;
  if (LastErrorText.TextData.Reference != pIVar1) {
    LastErrorText.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  LastErrorText.Flags = param_1->Flags;
  if (!param_2) {
    ::FName::FName(&local_res8,"SourceControl");
    this = FMessageLog::FMessageLog(&local_38,&local_res8);
    FMessageLog::Error(this,&local_48,&LastErrorText);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_38);
  }
  return;
}

// PackageFilename_Internal @ 146b219c0

FString * __cdecl PackageFilename_Internal(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  FString::FString(__return_storage_ptr__,param_1);
  local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  bVar2 = FPackageName::IsMemoryPackage(&local_28);
  if (!bVar2) {
    bVar2 = FPackageName::DoesPackageExist(param_1,__return_storage_ptr__,true);
    if (!bVar2) {
      local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar1 = (param_1->Data).ArrayNum;
      local_28.Size = iVar1 + -1;
      if (iVar1 == 0) {
        local_28.Size = 0;
      }
      bVar2 = FPackageName::IsValidLongPackageName(&local_28,false,(EErrorCode *)0x0);
      if (bVar2) {
        if ((param_1->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        pUVar3 = FindPackage((UObject *)0x0,pwVar5);
        if ((pUVar3 == (UPackage *)0x0) || (((uint)pUVar3->PackageFlagsPrivate >> 0x11 & 1) == 0)) {
          pFVar4 = FPackageName::GetAssetPackageExtension();
        }
        else {
          pFVar4 = FPackageName::GetMapPackageExtension();
        }
        FString::FString((FString *)&local_28,pFVar4);
        pFVar4 = FPackageName::LongPackageNameToFilename(&local_18,param_1,(FString *)&local_28);
        FString::operator=(__return_storage_ptr__,pFVar4);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.DataPtr);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// RunQueryFileStates @ 146b23f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146b2427b) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
SourceControlHelpersInternal::RunQueryFileStates
          (TArrayView<FString_const_,int> *param_1,Type param_2,bool param_3,
          TFunction<void___cdecl(FSourceControlState)> *param_4)

{
  longlong lVar1;
  ITextData *pIVar2;
  code *pcVar3;
  TRefCountPtr<ITextData> TVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  ISourceControlProvider *pIVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FMessageLog *this;
  FUpdateStatus *pFVar11;
  FUpdateStatus *pFVar12;
  ISourceControlModule *pIVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FScriptContainerElement *pFVar17;
  FString *pFVar18;
  FString *pFVar19;
  undefined1 auStackY_258 [32];
  ForAnyElementType local_218;
  undefined8 local_210;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_208;
  FDelegateAllocation local_200;
  FString local_1f0;
  Type local_1e0;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1d8
  ;
  undefined1 local_1c8 [4];
  FName local_1c4;
  TRawPtrProxy<FUpdateStatus> local_1b8;
  FString local_1b0;
  TSharedRef<FUpdateStatus,1> local_198;
  FUpdateStatus *local_188;
  TReferenceControllerBase<1> *pTStack_180;
  FDestructionSentinel local_178;
  FFormatArgumentValue local_160;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  FText local_120;
  TSharedRef<FTokenizedMessage,1> local_110;
  FText local_100;
  FText local_f0;
  FTextFormat local_e0;
  FMessageLog local_d0;
  longlong local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  ISourceControlProvider *local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1e0 = param_2;
  pIVar8 = VerifySourceControl(param_3);
  if (pIVar8 == (ISourceControlProvider *)0x0) {
    lVar1 = *(longlong *)param_4;
  }
  else {
    pFVar18 = param_1->DataPtr;
    pFVar19 = pFVar18 + param_1->ArrayNum;
    local_218.Data = (FScriptContainerElement *)0x0;
    local_210 = 0;
    for (; pFVar18 != pFVar19; pFVar18 = pFVar18 + 1) {
      ConvertFileToQualifiedPath(&local_1f0,pFVar18,param_3,false,(wchar_t *)0x0);
      if (local_1f0.Data.ArrayNum < 2) {
        local_1d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.Pairs.ArrayNum = 0;
        local_1d8.Pairs.ArrayMax = 0;
        pFVar9 = FText::FromString(&local_120,pFVar18);
        local_160.Type = Text;
        FText::FText((FText *)&local_160.TextValue,pFVar9);
        if ((local_160.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::FString(&local_1b0,L"InFile");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_1b0,&local_160);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_160.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_120.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
        }
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_f0,L"SourceControlHelpers",L"CouldNotResolveFilepath",
                            L"Could not resolve file path for \'{InFile}\'.");
        pFVar10 = FTextFormat::FTextFormat(&local_e0,pFVar9,Default);
        pFVar9 = FText::Format(&local_100,pFVar10,&local_1d8);
        TVar4 = LastErrorText.TextData;
        pIVar2 = (pFVar9->TextData).Reference;
        if (LastErrorText.TextData.Reference != pIVar2) {
          LastErrorText.TextData.Reference = pIVar2;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_1c8);
          }
          if (TVar4.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
          }
        }
        LastErrorText.Flags = pFVar9->Flags;
        if (!param_3) {
          ::FName::FName(&local_1c4,"SourceControl");
          this = FMessageLog::FMessageLog(&local_d0,&local_1c4);
          FMessageLog::Error(this,&local_110,&LastErrorText);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_110.SharedReferenceCount.ReferenceController);
          FMessageLog::~FMessageLog(&local_d0);
        }
        if (local_100.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
        }
        if (local_f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data,
                   local_1d8.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_1d8.Pairs.AllocatorInstance.Data);
        }
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      else {
        iVar7 = (int)local_210;
        if ((int)local_210 == local_210._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_218,(int *)((longlong)&local_210 + 4));
        }
        local_210 = CONCAT44(local_210._4_4_,iVar7 + 1);
        pFVar17 = local_218.Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar17 = 0;
        *(FScriptContainerElement **)pFVar17 = local_1f0.Data.AllocatorInstance.Data;
        local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar17 + 8) = local_1f0.Data.ArrayNum;
        *(int *)(pFVar17 + 0xc) = local_1f0.Data.ArrayMax;
        local_1f0.Data.ArrayNum = 0;
        local_1f0.Data.ArrayMax = 0;
      }
    }
    local_58._4_4_ = (undefined4)(local_58 >> 0x20);
    pFVar12 = (FUpdateStatus *)0x0;
    pFVar11 = ::operator_new(0x60);
    if (pFVar11 != (FUpdateStatus *)0x0) {
      pFVar11->_padding_ = 0;
      pFVar11->_padding_ = (longlong)&___7FUpdateStatus__6B_;
      pFVar11->_padding_ = 0;
      pFVar11->_padding_ = 0;
      pFVar11->_padding_ = 0;
      pFVar11->_padding_ = 0;
      pFVar11->_padding_ = 0;
      pFVar11->_padding_ = 0;
      pFVar11->_padding_ = 0;
      *(undefined4 *)&pFVar11->_padding_ = 0;
      *(undefined4 *)&pFVar11->_padding_ = 0;
      pFVar11->bUpdateHistory = false;
      pFVar11->bGetOpenedOnly = false;
      pFVar11->bUpdateModifiedState = false;
      pFVar11->bUpdateModifiedStateToLocalRevision = false;
      pFVar11->bCheckingAllFiles = false;
      pFVar11->bForceQuiet = false;
      pFVar11->bForceUpdate = false;
      pFVar11->bSetRequireDirPathEndWithSeparator = false;
      pFVar12 = pFVar11;
    }
    local_1b8.Object = pFVar12;
    TSharedRef<FUpdateStatus,1>::TSharedRef<FUpdateStatus,1><FUpdateStatus>(&local_198,&local_1b8);
    (local_198.Object)->bUpdateModifiedState = true;
    pIVar13 = ISourceControlModule::Get();
    plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x78))(pIVar13);
    local_70 = (longlong *)0x0;
    pcVar3 = *(code **)(*plVar14 + 0xe8);
    local_98 = *(longlong *)param_4;
    if (local_98 != 0) {
      puVar15 = (undefined8 *)&param_4->field_0x10;
      if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
        puVar15 = *(undefined8 **)&param_4->field_0x28;
      }
      (**(code **)*puVar15)(puVar15,&local_88);
    }
    FVar5.Data = local_218.Data;
    iVar7 = (int)local_210;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = CONCAT44(local_58._4_4_,(int)local_210);
    local_68 = pIVar8;
    if ((int)local_210 == 0) {
      local_58 = local_210 & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_210,0,&local_60,(int)local_210,(int *)((longlong)&local_58 + 4));
      ConstructItems<FString,FString,int>(local_60.Data,(FString *)FVar5.Data,iVar7);
    }
    local_208.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_200.DelegateSize = 0;
    local_50 = param_3;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_208,(FWriteAccessScope *)&local_140);
    local_128 = &local_200;
    puVar15 = UE::Core::Private::DelegateAllocate(0x70,&local_200);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar16 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar16;
      *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy,`SourceControlHelpersInternal::RunQueryFileStates'::`2'::<lambda_1>_>
                  ::_vftable_;
      puVar15[4] = local_98;
      puVar15[9] = local_70;
      local_70 = (longlong *)0x0;
      puVar15[6] = local_88;
      puVar15[7] = uStack_80;
      puVar15[8] = local_78;
      if (puVar15[4] != 0) {
        local_98 = 0;
      }
      puVar15[0xb] = 0;
      puVar15[10] = local_68;
      puVar15[0xb] = local_60.Data;
      local_60.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar15 + 0xc) = (int)local_58;
      *(undefined4 *)((longlong)puVar15 + 100) = local_58._4_4_;
      local_58 = 0;
      *(undefined1 *)(puVar15 + 0xd) = local_50;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    local_188 = local_198.Object;
    pTStack_180 = local_198.SharedReferenceCount.ReferenceController;
    if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(plVar14,&local_188,&local_218,local_1e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_180)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_208,(FWriteAccessScope *)&local_178);
    if ((local_200.DelegateSize != 0) &&
       (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_200.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_200,0,0,0x10);
      local_200.DelegateSize = 0;
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    if (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_200.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_208.AccessDetector);
    DestructItems<FString,int>((FString *)local_60.Data,(int)local_58);
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    if (local_98 != 0) {
      plVar14 = &local_88;
      if (local_70 != (longlong *)0x0) {
        plVar14 = local_70;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    DestructItems<FString,int>((FString *)local_218.Data,(int)local_210);
    if (local_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data);
    }
    lVar1 = *(longlong *)param_4;
  }
  if (lVar1 != 0) {
    plVar14 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

// VerifySourceControl @ 146b2a1c0

ISourceControlProvider * __cdecl SourceControlHelpersInternal::VerifySourceControl(bool param_1)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  char cVar3;
  ISourceControlModule *pIVar4;
  ISourceControlProvider *pIVar5;
  FText *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 local_res10 [8];
  FText local_18;
  
  pIVar4 = ISourceControlModule::Get();
  cVar3 = (**(code **)((longlong)*pIVar4 + 0x70))(pIVar4);
  if (cVar3 == '\0') {
    pwVar8 = L"Revision control is not enabled.";
    pwVar7 = L"SourceControlDisabled";
  }
  else {
    pIVar5 = (ISourceControlProvider *)(**(code **)((longlong)*pIVar4 + 0x78))(pIVar4);
    cVar3 = (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
    if (cVar3 != '\0') {
      pFVar6 = FText::GetEmpty();
      TVar2 = LastErrorText.TextData;
      pIVar1 = (pFVar6->TextData).Reference;
      if (LastErrorText.TextData.Reference != pIVar1) {
        LastErrorText.TextData.Reference = pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
        }
        if (TVar2.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
        }
      }
      LastErrorText.Flags = pFVar6->Flags;
      return pIVar5;
    }
    pwVar8 = L"Revision control server is currently not available.";
    pwVar7 = L"SourceControlServerUnavailable";
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText(&local_18,L"SourceControlHelpers",pwVar7,pwVar8);
  LogError(pFVar6,param_1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return (ISourceControlProvider *)0x0;
}

// Z_Construct_UClass_USourceControlHelpers_NoRegister @ 146b2a2d0

UClass * __cdecl Z_Construct_UClass_USourceControlHelpers_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SourceControl",L"SourceControlHelpers",
               &Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton,
               USourceControlHelpers::StaticRegisterNativesUSourceControlHelpers,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceControlHelpers>,
               InternalVTableHelperCtorCaller<USourceControlHelpers>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton;
}

// Z_Construct_UClass_USourceControlPreferences_NoRegister @ 146b2a380

UClass * __cdecl Z_Construct_UClass_USourceControlPreferences_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SourceControl",L"SourceControlPreferences",
               &Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton,
               USourceControlPreferences::StaticRegisterNativesUSourceControlPreferences,0xa8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<USourceControlPreferences>,
               InternalVTableHelperCtorCaller<USourceControlPreferences>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton;
}

// IMPLEMENT_MODULE_SourceControl @ 146b2cda0

void __cdecl IMPLEMENT_MODULE_SourceControl(void)

{
  return;
}

// DefaultRevisionControlStyleInstance'' @ 1503de130

void __cdecl
`dynamic_atexit_destructor_for_'FRevisionControlStyleManager::DefaultRevisionControlStyleInstance__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FRevisionControlStyleManager::DefaultRevisionControlStyleInstance.SharedReferenceCount.
             ReferenceController);
  return;
}

// IsCheckInChangesEnabled'' @ 1503de150

void __cdecl `dynamic_atexit_destructor_for_'SSourceControlControls::IsCheckInChangesEnabled__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::IsCheckInChangesEnabled,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::IsCheckInChangesEnabled._16_4_ != 0) &&
     (SSourceControlControls::IsCheckInChangesEnabled._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::IsCheckInChangesEnabled._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::IsCheckInChangesEnabled.field_0x8,0,0,
               0x10);
    SSourceControlControls::IsCheckInChangesEnabled._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::IsCheckInChangesEnabled._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::IsCheckInChangesEnabled._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::IsCheckInChangesEnabled);
  return;
}

// IsCheckInChangesVisible'' @ 1503de1f0

void __cdecl `dynamic_atexit_destructor_for_'SSourceControlControls::IsCheckInChangesVisible__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::IsCheckInChangesVisible,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::IsCheckInChangesVisible._16_4_ != 0) &&
     (SSourceControlControls::IsCheckInChangesVisible._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::IsCheckInChangesVisible._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::IsCheckInChangesVisible.field_0x8,0,0,
               0x10);
    SSourceControlControls::IsCheckInChangesVisible._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::IsCheckInChangesVisible._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::IsCheckInChangesVisible._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::IsCheckInChangesVisible);
  return;
}

// IsRestoreAsLatestEnabled'' @ 1503de290

void __cdecl
`dynamic_atexit_destructor_for_'SSourceControlControls::IsRestoreAsLatestEnabled__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::IsRestoreAsLatestEnabled,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::IsRestoreAsLatestEnabled._16_4_ != 0) &&
     (SSourceControlControls::IsRestoreAsLatestEnabled._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::IsRestoreAsLatestEnabled._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::IsRestoreAsLatestEnabled.field_0x8,0,0,
               0x10);
    SSourceControlControls::IsRestoreAsLatestEnabled._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::IsRestoreAsLatestEnabled._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::IsRestoreAsLatestEnabled._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::IsRestoreAsLatestEnabled);
  return;
}

// IsRestoreAsLatestVisible'' @ 1503de330

void __cdecl
`dynamic_atexit_destructor_for_'SSourceControlControls::IsRestoreAsLatestVisible__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::IsRestoreAsLatestVisible,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::IsRestoreAsLatestVisible._16_4_ != 0) &&
     (SSourceControlControls::IsRestoreAsLatestVisible._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::IsRestoreAsLatestVisible._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::IsRestoreAsLatestVisible.field_0x8,0,0,
               0x10);
    SSourceControlControls::IsRestoreAsLatestVisible._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::IsRestoreAsLatestVisible._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::IsRestoreAsLatestVisible._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::IsRestoreAsLatestVisible);
  return;
}

// IsSyncLatestEnabled'' @ 1503de3d0

void __cdecl `dynamic_atexit_destructor_for_'SSourceControlControls::IsSyncLatestEnabled__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::IsSyncLatestEnabled,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::IsSyncLatestEnabled._16_4_ != 0) &&
     (SSourceControlControls::IsSyncLatestEnabled._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::IsSyncLatestEnabled._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::IsSyncLatestEnabled.field_0x8,0,0,0x10)
    ;
    SSourceControlControls::IsSyncLatestEnabled._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::IsSyncLatestEnabled._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::IsSyncLatestEnabled._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::IsSyncLatestEnabled);
  return;
}

// IsSyncLatestVisible'' @ 1503de470

void __cdecl `dynamic_atexit_destructor_for_'SSourceControlControls::IsSyncLatestVisible__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::IsSyncLatestVisible,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::IsSyncLatestVisible._16_4_ != 0) &&
     (SSourceControlControls::IsSyncLatestVisible._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::IsSyncLatestVisible._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::IsSyncLatestVisible.field_0x8,0,0,0x10)
    ;
    SSourceControlControls::IsSyncLatestVisible._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::IsSyncLatestVisible._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::IsSyncLatestVisible._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::IsSyncLatestVisible);
  return;
}

// NumConflictsRemaining'' @ 1503de510

void __cdecl `dynamic_atexit_destructor_for_'SSourceControlControls::NumConflictsRemaining__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::NumConflictsRemaining,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::NumConflictsRemaining._16_4_ != 0) &&
     (SSourceControlControls::NumConflictsRemaining._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::NumConflictsRemaining._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::NumConflictsRemaining.field_0x8,0,0,
               0x10);
    SSourceControlControls::NumConflictsRemaining._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::NumConflictsRemaining._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::NumConflictsRemaining._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::NumConflictsRemaining);
  return;
}

// NumConflictsUpcoming'' @ 1503de5b0

void __cdecl `dynamic_atexit_destructor_for_'SSourceControlControls::NumConflictsUpcoming__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::NumConflictsUpcoming,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::NumConflictsUpcoming._16_4_ != 0) &&
     (SSourceControlControls::NumConflictsUpcoming._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::NumConflictsUpcoming._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::NumConflictsUpcoming.field_0x8,0,0,0x10
              );
    SSourceControlControls::NumConflictsUpcoming._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::NumConflictsUpcoming._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::NumConflictsUpcoming._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::NumConflictsUpcoming);
  return;
}

// OnCheckInChangesClicked'' @ 1503de650

void __cdecl `dynamic_atexit_destructor_for_'SSourceControlControls::OnCheckInChangesClicked__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::OnCheckInChangesClicked,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::OnCheckInChangesClicked._16_4_ != 0) &&
     (SSourceControlControls::OnCheckInChangesClicked._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::OnCheckInChangesClicked._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::OnCheckInChangesClicked.field_0x8,0,0,
               0x10);
    SSourceControlControls::OnCheckInChangesClicked._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::OnCheckInChangesClicked._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::OnCheckInChangesClicked._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::OnCheckInChangesClicked);
  return;
}

// OnRestoreAsLatestClicked'' @ 1503de6f0

void __cdecl
`dynamic_atexit_destructor_for_'SSourceControlControls::OnRestoreAsLatestClicked__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::OnRestoreAsLatestClicked,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::OnRestoreAsLatestClicked._16_4_ != 0) &&
     (SSourceControlControls::OnRestoreAsLatestClicked._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::OnRestoreAsLatestClicked._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::OnRestoreAsLatestClicked.field_0x8,0,0,
               0x10);
    SSourceControlControls::OnRestoreAsLatestClicked._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::OnRestoreAsLatestClicked._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::OnRestoreAsLatestClicked._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::OnRestoreAsLatestClicked);
  return;
}

// OnSyncLatestClicked'' @ 1503de790

void __cdecl `dynamic_atexit_destructor_for_'SSourceControlControls::OnSyncLatestClicked__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SSourceControlControls::OnSyncLatestClicked,(FWriteAccessScope *)&local_28);
  if ((SSourceControlControls::OnSyncLatestClicked._16_4_ != 0) &&
     (SSourceControlControls::OnSyncLatestClicked._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SSourceControlControls::OnSyncLatestClicked._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SSourceControlControls::OnSyncLatestClicked.field_0x8,0,0,0x10)
    ;
    SSourceControlControls::OnSyncLatestClicked._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SSourceControlControls::OnSyncLatestClicked._8_8_ != 0) {
    FMemory::Free((void *)SSourceControlControls::OnSyncLatestClicked._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SSourceControlControls::OnSyncLatestClicked);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSourceControlAssetDataCacheMaxAsyncTask'' @ 1503de830

void __cdecl _dynamic_atexit_destructor_for__CVarSourceControlAssetDataCacheMaxAsyncTask__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSourceControlAssetDataCacheMaxAsyncTask);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSourceControlEnableLoginDialogModal'' @ 1503de850

void __cdecl
SourceControlCVars::_dynamic_atexit_destructor_for__CVarSourceControlEnableLoginDialogModal__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSourceControlEnableLoginDialogModal);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSourceControlEnableRevertFromSceneOutliner'' @ 1503de870

void __cdecl
SourceControlCVars::_dynamic_atexit_destructor_for__CVarSourceControlEnableRevertFromSceneOutliner__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSourceControlEnableRevertFromSceneOutliner);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSourceControlEnableRevertFromSubmitWidget'' @ 1503de890

void __cdecl
SourceControlCVars::_dynamic_atexit_destructor_for__CVarSourceControlEnableRevertFromSubmitWidget__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSourceControlEnableRevertFromSubmitWidget);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSourceControlEnableRevertUnsaved'' @ 1503de8b0

void __cdecl
SourceControlCVars::_dynamic_atexit_destructor_for__CVarSourceControlEnableRevertUnsaved__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSourceControlEnableRevertUnsaved);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSourceControlEnableWorldReload'' @ 1503de8d0

void __cdecl
SourceControlCVars::_dynamic_atexit_destructor_for__CVarSourceControlEnableWorldReload__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSourceControlEnableWorldReload)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'LastErrorText'' @ 1503de8f0

void __cdecl SourceControlHelpersInternal::_dynamic_atexit_destructor_for__LastErrorText__(void)

{
  if (LastErrorText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503de8ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*LastErrorText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogSourceControl'' @ 1503de910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSourceControl__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSourceControl);
  return;
}

// `dynamic_atexit_destructor_for_'ResultInfo'' @ 1503de930

void __cdecl
`ISourceControlOperation::GetResultInfo'::__l2::_dynamic_atexit_destructor_for__ResultInfo__(void)

{
  DestructItems<FString,int>
            ((FString *)
             `public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
             ::__l2::ResultInfo.Tags.AllocatorInstance.Data,
             `public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
             ::__l2::ResultInfo.Tags.ArrayNum);
  if (`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
      ::__l2::ResultInfo.Tags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
                  ::__l2::ResultInfo.Tags.AllocatorInstance.Data);
  }
  DestructItems<FText,int>
            ((FText *)`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
                      ::__l2::ResultInfo.ErrorMessages.AllocatorInstance.Data,
             `public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
             ::__l2::ResultInfo.ErrorMessages.ArrayNum);
  if (`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
      ::__l2::ResultInfo.ErrorMessages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
                  ::__l2::ResultInfo.ErrorMessages.AllocatorInstance.Data);
  }
  DestructItems<FText,int>
            ((FText *)`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
                      ::__l2::ResultInfo.InfoMessages.AllocatorInstance.Data,
             `public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
             ::__l2::ResultInfo.InfoMessages.ArrayNum);
  if (`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
      ::__l2::ResultInfo.InfoMessages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
                  ::__l2::ResultInfo.InfoMessages.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SettingsSection'' @ 1503de9b0

void __cdecl SourceControlSettingsConstants::_dynamic_atexit_destructor_for__SettingsSection__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SettingsSection.Data.AllocatorInstance.Data;
  if (SettingsSection.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SettingsSection.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SourceControlGlobalSettingsIni'' @ 1503de9d0

void __cdecl
`USourceControlHelpers::GetGlobalSettingsIni'::__l2::
_dynamic_atexit_destructor_for__SourceControlGlobalSettingsIni__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SourceControlGlobalSettingsIni.Data.AllocatorInstance.Data;
  if (SourceControlGlobalSettingsIni.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SourceControlGlobalSettingsIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'SourceControlSettingsIni'' @ 1503de9f0

void __cdecl
`USourceControlHelpers::GetSettingsIni'::__l7::
_dynamic_atexit_destructor_for__SourceControlSettingsIni__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SourceControlSettingsIni.Data.AllocatorInstance.Data;
  if (SourceControlSettingsIni.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SourceControlSettingsIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

