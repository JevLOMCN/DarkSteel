// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 932

// ObjectRowsByUserWidget'' @ 1410a0f40

void __cdecl `dynamic_initializer_for_'IObjectTableRow::ObjectRowsByUserWidget__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IObjectTableRow::ObjectRowsByUserWidget__);
  return;
}

// StateName'' @ 1410a0f60

void __cdecl `dynamic_initializer_for_'UWidgetCheckedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetCheckedStateRegistration::StateName,"CheckedState");
  return;
}

// StateName'' @ 1410a0f80

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 1410a0fa0

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 1410a0fc0

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 1410a0fe0

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// StorageID'' @ 1410a1000

void __cdecl
`dynamic_initializer_for_'UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage::StorageID__
          (void)

{
  undefined4 local_res8;
  
  UE::MovieScene::FPreAnimatedStateExtension::RegisterStorageInternal();
  UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage::StorageID = local_res8;
  return;
}

// StorageID'' @ 1410a1030

void __cdecl
`dynamic_initializer_for_'UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage::StorageID__
          (void)

{
  undefined4 local_res8;
  
  UE::MovieScene::FPreAnimatedStateExtension::RegisterStorageInternal();
  UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage::StorageID = local_res8;
  return;
}

// `dynamic_initializer_for_'CVarAnimationBudgetMs'' @ 1410a1060

void __cdecl UE::UMG::_dynamic_initializer_for__CVarAnimationBudgetMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimationBudgetMs,L"UMG.AnimationBudgetMs",&GAnimationBudgetMs,
             L"(Default: 0.0) EXPERIMENTAL: A per-frame animation budget to use for evaluation of all UMG animations this frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimationBudgetMs__);
  return;
}

// `dynamic_initializer_for_'CVarAnimationDetailedLogging'' @ 1410a10b0

void __cdecl UE::UMG::_dynamic_initializer_for__CVarAnimationDetailedLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimationDetailedLogging,L"UMG.AnimationDetailedLogging",
             &GVarAnimationDetailedLogging,
             L"(Default: false) Whether to print out detailed information about UMG animations.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimationDetailedLogging__);
  return;
}

// `dynamic_initializer_for_'CVarAnimationMarkers'' @ 1410a1100

void __cdecl UE::UMG::_dynamic_initializer_for__CVarAnimationMarkers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimationMarkers,L"UMG.AnimationMarkers",&GVarAnimationMarkers,
             L"(Default: false) Whether to emit profiling frame markers for starting and stopping UMG animations."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimationMarkers__);
  return;
}

// `dynamic_initializer_for_'CVarUMGAnimationsAtEndOfFrame'' @ 1410a1150

void __cdecl UE::UMG::_dynamic_initializer_for__CVarUMGAnimationsAtEndOfFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUMGAnimationsAtEndOfFrame,L"UMG.FlushAnimationsAtEndOfFrame",
             &GFlushUMGAnimationsAtEndOfFrame,
             L"Whether to automatically flush any outstanding animations at the end of the frame, or just wait until next frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUMGAnimationsAtEndOfFrame__);
  return;
}

// `dynamic_initializer_for_'CVarUMGMaxAnimationLatentActions'' @ 1410a11a0

void __cdecl UE::UMG::_dynamic_initializer_for__CVarUMGMaxAnimationLatentActions__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUMGMaxAnimationLatentActions,L"Widget.MaxAnimationLatentActions",local_res8,
             L"Defines the maximum number of latent actions that can be run in one frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUMGMaxAnimationLatentActions__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 1410a11f0

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'FHasFlagTestAutomationTestInstance'' @ 1410a1220

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FHasFlagTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FHasFlagTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FHasFlagTestAutomationTestInstance,&local_18,false);
  FHasFlagTestAutomationTestInstance._0_8_ = &___7FHasFlagTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FHasFlagTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FOperatorBitwiseAndTestAutomationTestInstance'' @ 1410a1280

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOperatorBitwiseAndTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOperatorBitwiseAndTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FOperatorBitwiseAndTestAutomationTestInstance,&local_18,false);
  FOperatorBitwiseAndTestAutomationTestInstance._0_8_ = &___7FOperatorBitwiseAndTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOperatorBitwiseAndTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FOperatorBitwiseNotTestAutomationTestInstance'' @ 1410a12e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOperatorBitwiseNotTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOperatorBitwiseNotTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FOperatorBitwiseNotTestAutomationTestInstance,&local_18,false);
  FOperatorBitwiseNotTestAutomationTestInstance._0_8_ = &___7FOperatorBitwiseNotTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOperatorBitwiseNotTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FOperatorBitwiseOrTestAutomationTestInstance'' @ 1410a1340

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOperatorBitwiseOrTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOperatorBitwiseOrTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FOperatorBitwiseOrTestAutomationTestInstance,&local_18,false);
  FOperatorBitwiseOrTestAutomationTestInstance._0_8_ = &___7FOperatorBitwiseOrTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOperatorBitwiseOrTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FOperatorBoolTestAutomationTestInstance'' @ 1410a13a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOperatorBoolTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOperatorBoolTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FOperatorBoolTestAutomationTestInstance,&local_18,false);
  FOperatorBoolTestAutomationTestInstance._0_8_ = &___7FOperatorBoolTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOperatorBoolTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'GMovieSceneUMGComponentTypes'' @ 1410a1400

void __cdecl UE::MovieScene::_dynamic_initializer_for__GMovieSceneUMGComponentTypes__(void)

{
  atexit(_dynamic_atexit_destructor_for__GMovieSceneUMGComponentTypes__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 1410a1420

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LogWidgetStateBitfieldTest'' @ 1410a1440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWidgetStateBitfieldTest__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWidgetStateBitfieldTest,L"LogWidgetStateBitfieldTest",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWidgetStateBitfieldTest__);
  return;
}

// `dynamic_initializer_for_'NAME_UUserListEntry_BP_OnEndEntryDropOperation'' @ 1410a1480

void __cdecl _dynamic_initializer_for__NAME_UUserListEntry_BP_OnEndEntryDropOperation__(void)

{
  FName::FName(&NAME_UUserListEntry_BP_OnEndEntryDropOperation,L"BP_OnEndEntryDropOperation");
  return;
}

// `dynamic_initializer_for_'NAME_UUserListEntry_BP_OnEntryDragOverChanged'' @ 1410a14a0

void __cdecl _dynamic_initializer_for__NAME_UUserListEntry_BP_OnEntryDragOverChanged__(void)

{
  FName::FName(&NAME_UUserListEntry_BP_OnEntryDragOverChanged,L"BP_OnEntryDragOverChanged");
  return;
}

// `dynamic_initializer_for_'NAME_UUserListEntry_BP_OnEntryDragged'' @ 1410a14c0

void __cdecl _dynamic_initializer_for__NAME_UUserListEntry_BP_OnEntryDragged__(void)

{
  FName::FName(&NAME_UUserListEntry_BP_OnEntryDragged,L"BP_OnEntryDragged");
  return;
}

// `dynamic_initializer_for_'NAME_UUserListEntry_BP_OnEntryDropped'' @ 1410a14e0

void __cdecl _dynamic_initializer_for__NAME_UUserListEntry_BP_OnEntryDropped__(void)

{
  FName::FName(&NAME_UUserListEntry_BP_OnEntryDropped,L"BP_OnEntryDropped");
  return;
}

// `dynamic_initializer_for_'NAME_UUserListEntry_BP_OnEntryReleased'' @ 1410a1500

void __cdecl _dynamic_initializer_for__NAME_UUserListEntry_BP_OnEntryReleased__(void)

{
  FName::FName(&NAME_UUserListEntry_BP_OnEntryReleased,L"BP_OnEntryReleased");
  return;
}

// `dynamic_initializer_for_'NAME_UUserListEntry_BP_OnItemExpansionChanged'' @ 1410a1520

void __cdecl _dynamic_initializer_for__NAME_UUserListEntry_BP_OnItemExpansionChanged__(void)

{
  FName::FName(&NAME_UUserListEntry_BP_OnItemExpansionChanged,L"BP_OnItemExpansionChanged");
  return;
}

// `dynamic_initializer_for_'NAME_UUserListEntry_BP_OnItemSelectionChanged'' @ 1410a1540

void __cdecl _dynamic_initializer_for__NAME_UUserListEntry_BP_OnItemSelectionChanged__(void)

{
  FName::FName(&NAME_UUserListEntry_BP_OnItemSelectionChanged,L"BP_OnItemSelectionChanged");
  return;
}

// `dynamic_initializer_for_'NAME_UUserListEntry_BP_OnUpdateEntryDropIndicator'' @ 1410a1560

void __cdecl _dynamic_initializer_for__NAME_UUserListEntry_BP_OnUpdateEntryDropIndicator__(void)

{
  FName::FName(&NAME_UUserListEntry_BP_OnUpdateEntryDropIndicator,L"BP_OnUpdateEntryDropIndicator");
  return;
}

// `dynamic_initializer_for_'NAME_UUserObjectListEntry_OnListItemObjectSet'' @ 1410a1580

void __cdecl _dynamic_initializer_for__NAME_UUserObjectListEntry_OnListItemObjectSet__(void)

{
  FName::FName(&NAME_UUserObjectListEntry_OnListItemObjectSet,L"OnListItemObjectSet");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 1410a15a0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 1410a15c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ApplyProperties__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ApplyProperties ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ApplyProperties>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ApplyProperties");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ApplyProperties,*pFVar1,
               L"Apply properties","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 1410a1650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_AquireComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AquireComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AquireComponentAccessLocks>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_AquireComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AquireComponentAccessLocks,
               *pFVar1,L"Aquire Component Access Locks","STATGROUP_MovieSceneECS","STATCAT_Advanced"
               ,L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_FlushEndOfFrameAnimations'' @ 1410a16e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_FlushEndOfFrameAnimations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_FlushEndOfFrameAnimations ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_FlushEndOfFrameAnimations>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_FlushEndOfFrameAnimations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_FlushEndOfFrameAnimations,
               *pFVar1,L"Flush End of Frame Animations","STATGROUP_MovieSceneEval",
               "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1410a1770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PropertyTrack_TokenExecute'' @ 1410a1800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PropertyTrack_TokenExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PropertyTrack_TokenExecute ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PropertyTrack_TokenExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PropertyTrack_TokenExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PropertyTrack_TokenExecute,
               *pFVar1,L"Property Track Token Execute","STATGROUP_MovieSceneEval","STATCAT_Advanced"
               ,L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1410a1890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ReleaseComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ReleaseComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ReleaseComponentAccessLocks>)0x0)
  {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ReleaseComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ReleaseComponentAccessLocks,
               *pFVar1,L"Release Component Access Locks","STATGROUP_MovieSceneECS",
               "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1410a1920

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

// `dynamic_initializer_for_'StatPtr_STAT_UMGBinding'' @ 1410a19b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UMGBinding__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UMGBinding == (FThreadSafeStaticStat<FStat_STAT_UMGBinding>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UMGBinding");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMGBinding,*pFVar1,L"UMG Binding",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 1410a1a40

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h__Script_UMG_1996721842'' @ 1410a1a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h__Script_UMG_1996721842__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Binding_WidgetFieldNotificationExtension_h__Script_UMG_527523007'' @ 1410a1aa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Binding_WidgetFieldNotificationExtension_h__Script_UMG_527523007__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Binding_WidgetFieldNotificationExtension_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h__Script_UMG_4102670514'' @ 1410a1ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h__Script_UMG_4102670514__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h__Script_UMG_1748137926'' @ 1410a1b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h__Script_UMG_1748137926__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h__Script_UMG_2590459242'' @ 1410a1b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h__Script_UMG_2590459242__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformTrack_h__Script_UMG_997786689'' @ 1410a1bb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformTrack_h__Script_UMG_997786689__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformTrack_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h__Script_UMG_1721245612'' @ 1410a1bf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h__Script_UMG_1721245612__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h__Script_UMG_609206791'' @ 1410a1c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h__Script_UMG_609206791__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h__Script_UMG_3240240385'' @ 1410a1c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h__Script_UMG_3240240385__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h__Script_UMG_3118173846'' @ 1410a1cb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h__Script_UMG_3118173846__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h__Script_UMG_1928348038'' @ 1410a1cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h__Script_UMG_1928348038__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h__Script_UMG_821626670'' @ 1410a1d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h__Script_UMG_821626670__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h__Script_UMG_1817167114'' @ 1410a1d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h__Script_UMG_1817167114__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h__Script_UMG_3158752180'' @ 1410a1dc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h__Script_UMG_3158752180__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h__Script_UMG_2555914990'' @ 1410a1e10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h__Script_UMG_2555914990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h__Script_UMG_795602311'' @ 1410a1e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h__Script_UMG_795602311__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h__Script_UMG_3053464119'' @ 1410a1ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h__Script_UMG_3053464119__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h__Script_UMG_444706761'' @ 1410a1ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h__Script_UMG_444706761__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h__Script_UMG_3412551165'' @ 1410a1f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h__Script_UMG_3412551165__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h__Script_UMG_512082116'' @ 1410a1f60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h__Script_UMG_512082116__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h__Script_UMG_817788830'' @ 1410a1fa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h__Script_UMG_817788830__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h__Script_UMG_3087962042'' @ 1410a1fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h__Script_UMG_3087962042__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h__Script_UMG_1257944370'' @ 1410a2020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h__Script_UMG_1257944370__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h__Script_UMG_4122303445'' @ 1410a2060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h__Script_UMG_4122303445__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h__Script_UMG_2990654365'' @ 1410a20a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h__Script_UMG_2990654365__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h__Script_UMG_1471849194'' @ 1410a20e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h__Script_UMG_1471849194__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateBitfield_h__Script_UMG_330227792'' @ 1410a2120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateBitfield_h__Script_UMG_330227792__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateBitfield_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateRegistration_h__Script_UMG_1140575694'' @ 1410a2160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateRegistration_h__Script_UMG_1140575694__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateRegistration_h__Script_UMG_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h__Script_UMG_1270398719'' @ 1410a21a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h__Script_UMG_1270398719__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h__Script_UMG_1991480358'' @ 1410a21e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h__Script_UMG_1991480358__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h__Script_UMG_1523109552'' @ 1410a2220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h__Script_UMG_1523109552__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h__Script_UMG_793532318'' @ 1410a2260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h__Script_UMG_793532318__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h__Script_UMG_781279551'' @ 1410a22a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h__Script_UMG_781279551__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h__Script_UMG_3403200506'' @ 1410a22e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h__Script_UMG_3403200506__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h__Script_UMG_824733046'' @ 1410a2330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h__Script_UMG_824733046__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h__Script_UMG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h__Script_UMG_166798060'' @ 1410a2370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h__Script_UMG_166798060__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h__Script_UMG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UMGSequencePlayMode_h__Script_UMG_2484056856'' @ 1410a23b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UMGSequencePlayMode_h__Script_UMG_2484056856__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UMGSequencePlayMode_h__Script_UMG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h__Script_UMG_4241603102'' @ 1410a2400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h__Script_UMG_4241603102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h__Script_UMG_1244802017'' @ 1410a2440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h__Script_UMG_1244802017__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h__Script_UMG_3240883828'' @ 1410a2480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h__Script_UMG_3240883828__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h__Script_UMG_2026559692'' @ 1410a24d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h__Script_UMG_2026559692__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h__Script_UMG_2583993529'' @ 1410a2510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h__Script_UMG_2583993529__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h__Script_UMG_4026547562'' @ 1410a2550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h__Script_UMG_4026547562__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Border_h__Script_UMG_1155919834'' @ 1410a2590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Border_h__Script_UMG_1155919834__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Border_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h__Script_UMG_3312434773'' @ 1410a25d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h__Script_UMG_3312434773__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h__Script_UMG_4251671251'' @ 1410a2610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h__Script_UMG_4251671251__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h__Script_UMG_2626871416'' @ 1410a2650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h__Script_UMG_2626871416__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h__Script_UMG_3129647424'' @ 1410a26a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h__Script_UMG_3129647424__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RadialBoxSettings_h__Script_UMG_1078458264'' @ 1410a26e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RadialBoxSettings_h__Script_UMG_1078458264__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RadialBoxSettings_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h__Script_UMG_167117145'' @ 1410a2720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h__Script_UMG_167117145__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h__Script_UMG_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h__Script_UMG_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h__Script_UMG_3320686248'' @ 1410a2770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h__Script_UMG_3320686248__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h__Script_UMG_312232937'' @ 1410a27b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h__Script_UMG_312232937__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_WidgetEventField_h__Script_UMG_3381119015'' @ 1410a27f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_WidgetEventField_h__Script_UMG_3381119015__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_WidgetEventField_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_WidgetTransform_h__Script_UMG_1429265518'' @ 1410a2830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_WidgetTransform_h__Script_UMG_1429265518__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_WidgetTransform_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_UMG'' @ 1410a2870

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_UMG__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xca108457;
  local_res8[0].DeclarationsHash = 0xcdbd45cf;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_UMG,L"/Script/UMG",
             &Z_Registration_Info_UPackage__Script_UMG,local_res8);
  return;
}

// Z_Construct_UFunction_UButtonSlot_SetPadding @ 1468d5770

UFunction * __cdecl Z_Construct_UFunction_UButtonSlot_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButtonSlot_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UButtonSlot_SetVerticalAlignment @ 1468d58f0

UFunction * __cdecl Z_Construct_UFunction_UButtonSlot_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UButtonSlot_SetVerticalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetNavigation @ 1468d5930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetNavigation(void)

{
  if (Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton,
               &Z_Construct_UClass_UWidgetNavigation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWidgetNavigationData @ 1468d59a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetNavigationData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetNavigationData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetNavigationData.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetNavigationData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FWidgetNavigationData.InnerSingleton;
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

// NewStructOps @ 1468d5d00

void * __cdecl Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetNavigationData,&UE::CoreUObject::Private::Construct<FWidgetNavigationData>,&UE::CoreUObject::Private::ConstructForTests<FWidgetNavigationData>,&UE::CoreUObject::Private::Destruct<FWidgetNavigationData>,&UE::CoreUObject::Private::Copy<FWidgetNavigationData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UInt32Binding @ 1468d5d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInt32Binding(void)

{
  if (Z_Registration_Info_UClass_UInt32Binding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInt32Binding.OuterSingleton,
               &Z_Construct_UClass_UInt32Binding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInt32Binding.OuterSingleton;
}

// Z_Construct_UFunction_UInt32Binding_GetValue @ 1468d5dc0

UFunction * __cdecl Z_Construct_UFunction_UInt32Binding_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UInt32Binding_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetAnimation @ 1468d5f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetAnimation(void)

{
  if (Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton,
               &Z_Construct_UClass_UWidgetAnimation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWidgetAnimationBinding @ 1468d5f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetAnimationBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetAnimationBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetAnimationBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetAnimationBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetAnimationBinding.InnerSingleton;
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

// Z_Construct_UClass_UUserListEntry @ 1468d5fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserListEntry(void)

{
  if (Z_Registration_Info_UClass_UUserListEntry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserListEntry.OuterSingleton,
               &Z_Construct_UClass_UUserListEntry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserListEntry.OuterSingleton;
}

// Z_Construct_UClass_UUserListEntryLibrary @ 1468d6020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserListEntryLibrary(void)

{
  if (Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton,
               &Z_Construct_UClass_UUserListEntryLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished @ 1468d6490

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSuccess_SetBit @ 1468d6700

void __cdecl
Z_Construct_UFunction_UUserListEntry_BP_OnEndEntryDropOperation_Statics::NewProp_bSuccess_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 1468d6900

void * __thiscall
FOperatorBoolTest::_scalar_deleting_destructor_(FOperatorBoolTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UUserListEntry_BP_OnEndEntryDropOperation @ 1468d6940

UFunction * __cdecl Z_Construct_UFunction_UUserListEntry_BP_OnEndEntryDropOperation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntry_BP_OnEndEntryDropOperation_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted @ 1468d6980

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCanvasPanel @ 1468d69c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCanvasPanel(void)

{
  if (Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton,
               &Z_Construct_UClass_UCanvasPanel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton;
}

// NewStructOps @ 1468d6a00

void * __cdecl Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetTransform,&UE::CoreUObject::Private::Construct<FWidgetTransform>,&UE::CoreUObject::Private::ConstructForTests<FWidgetTransform>,&UE::CoreUObject::Private::Destruct<FWidgetTransform>,&UE::CoreUObject::Private::Copy<FWidgetTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMouseCursorBinding @ 1468d6a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMouseCursorBinding(void)

{
  if (Z_Registration_Info_UClass_UMouseCursorBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMouseCursorBinding.OuterSingleton,
               &Z_Construct_UClass_UMouseCursorBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMouseCursorBinding.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneWidgetMaterialTrack @ 1468d6a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneWidgetMaterialTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton;
}

// Z_Construct_UFunction_UUserListEntry_BP_OnEntryDragged @ 1468d6ac0

UFunction * __cdecl Z_Construct_UFunction_UUserListEntry_BP_OnEntryDragged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntry_BP_OnEntryDragged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas @ 1468d6b00

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetAnimation_GetEndTime @ 1468d6b40

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimation_GetEndTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMouseCursorBinding_GetValue @ 1468d6b80

UFunction * __cdecl Z_Construct_UFunction_UMouseCursorBinding_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUserListEntry_NoRegister @ 1468d6bc0

UClass * __cdecl Z_Construct_UClass_UUserListEntry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserListEntry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserListEntry",
               &Z_Registration_Info_UClass_UUserListEntry.InnerSingleton,
               UUserListEntry::StaticRegisterNativesUUserListEntry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserListEntry>,InternalVTableHelperCtorCaller<UUserListEntry>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserListEntry.InnerSingleton;
}

// Z_Construct_UClass_UBorder @ 1468d6c80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBorder(void)

{
  if (Z_Registration_Info_UClass_UBorder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBorder.OuterSingleton,
               &Z_Construct_UClass_UBorder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBorder.OuterSingleton;
}

// NewProp_bIsDraggingOver_SetBit @ 1468d6d80

void __cdecl
Z_Construct_UFunction_UUserListEntry_BP_OnEntryDragOverChanged_Statics::
NewProp_bIsDraggingOver_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWidgetAnimation_GetStartTime @ 1468d6d90

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimation_GetStartTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserListEntry_BP_OnEntryDragOverChanged @ 1468d6dd0

UFunction * __cdecl Z_Construct_UFunction_UUserListEntry_BP_OnEntryDragOverChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntry_BP_OnEntryDragOverChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_GetDynamicMaterial @ 1468d6e10

UFunction * __cdecl Z_Construct_UFunction_UBorder_GetDynamicMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished @ 1468d7340

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1468d7380

void * __thiscall
FOperatorBitwiseAndTest::_scalar_deleting_destructor_(FOperatorBitwiseAndTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UBorder_SetBrush @ 1468d73c0

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetBrush(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBorder_SetBrush_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserListEntry_BP_OnEntryDropped @ 1468d7400

UFunction * __cdecl Z_Construct_UFunction_UUserListEntry_BP_OnEntryDropped(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntry_BP_OnEntryDropped_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted @ 1468d7440

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_SetBrushColor @ 1468d74f0

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetBrushColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBorder_SetBrushColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased @ 1468d7a00

UFunction * __cdecl Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1468d7a40

void * __thiscall
FOperatorBitwiseOrTest::_scalar_deleting_destructor_(FOperatorBitwiseOrTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished @ 1468d7a80

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_SetBrushFromAsset @ 1468d7b80

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetBrushFromAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bIsExpanded_SetBit @ 1468d7bc0

void __cdecl
Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged @ 1468d7bd0

UFunction * __cdecl Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted @ 1468d7c10

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_SetBrushFromMaterial @ 1468d7f60

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetBrushFromMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1468d7fa0

void * __thiscall
FOperatorBitwiseNotTest::_scalar_deleting_destructor_(FOperatorBitwiseNotTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UCanvasPanelSlot @ 1468d7fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCanvasPanelSlot(void)

{
  if (Z_Registration_Info_UClass_UCanvasPanelSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCanvasPanelSlot.OuterSingleton,
               &Z_Construct_UClass_UCanvasPanelSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCanvasPanelSlot.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnchorData @ 1468d8020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnchorData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnchorData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnchorData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnchorData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnchorData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnchorData.InnerSingleton;
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

// NewStructOps @ 1468d80a0

void * __cdecl Z_Construct_UScriptStruct_FAnchorData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnchorData,&UE::CoreUObject::Private::Construct<FAnchorData>,&UE::CoreUObject::Private::ConstructForTests<FAnchorData>,&UE::CoreUObject::Private::Destruct<FAnchorData>,&UE::CoreUObject::Private::Copy<FAnchorData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLegacyFinishOnStop_SetBit @ 1468d80e0

void __cdecl
Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewProp_bIsSelected_SetBit @ 1468d80f0

void __cdecl
Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UUserObjectListEntry_NoRegister @ 1468d8100

UClass * __cdecl Z_Construct_UClass_UUserObjectListEntry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserObjectListEntry",
               &Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton,
               UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserObjectListEntry>,
               InternalVTableHelperCtorCaller<UUserObjectListEntry>,local_res8,
               UUserListEntry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserObjectListEntry.InnerSingleton;
}

// Z_Construct_UFunction_UBorder_SetBrushFromTexture @ 1468d81c0

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetBrushFromTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged @ 1468d82c0

UFunction * __cdecl Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1468d9160

void * __thiscall FHasFlagTest::_scalar_deleting_destructor_(FHasFlagTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UBorder_SetContentColorAndOpacity @ 1468d91e0

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetContentColorAndOpacity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserListEntry_BP_OnUpdateEntryDropIndicator @ 1468d9320

UFunction * __cdecl Z_Construct_UFunction_UUserListEntry_BP_OnUpdateEntryDropIndicator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntry_BP_OnUpdateEntryDropIndicator_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_SetDesiredSizeScale @ 1468d94d0

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetDesiredSizeScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment @ 1468d9510

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_SetHorizontalAlignment @ 1468d9610

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1468d9650

void * __cdecl Z_Construct_UScriptStruct_FWidgetStateBitfield_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetStateBitfield,&UE::CoreUObject::Private::Construct<FWidgetStateBitfield>,&UE::CoreUObject::Private::ConstructForTests<FWidgetStateBitfield>,&UE::CoreUObject::Private::Destruct<FWidgetStateBitfield>,&UE::CoreUObject::Private::Copy<FWidgetStateBitfield>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors @ 1468d9690

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_SetPadding @ 1468d96d0

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBorder_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1468d9710

void __cdecl
Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bInShowEffectWhenDisabled_SetBit @ 1468d9720

void __cdecl
Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::
NewProp_bInShowEffectWhenDisabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize @ 1468d9730

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled @ 1468d97b0

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_GetLayout @ 1468d97f0

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_GetLayout(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneMarginTrack @ 1468d9830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMarginTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMarginTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton;
}

// Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView @ 1468d9870

UFunction * __cdecl Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBorder_SetVerticalAlignment @ 1468d98b0

UFunction * __cdecl Z_Construct_UFunction_UBorder_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets @ 1468d98f0

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1468d99f0

void __cdecl
Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded @ 1468d9ab0

UFunction * __cdecl Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_GetPosition @ 1468d9af0

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_GetPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1468d9b30

void __cdecl
Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_UWidgetBinaryStateRegistration @ 1468d9b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetBinaryStateRegistration(void)

{
  if (Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.OuterSingleton,
               &Z_Construct_UClass_UWidgetBinaryStateRegistration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.OuterSingleton;
}

// Z_Construct_UClass_UWidgetDisabledStateRegistration @ 1468d9b80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetDisabledStateRegistration(void)

{
  if (Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.OuterSingleton,
               &Z_Construct_UClass_UWidgetDisabledStateRegistration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.OuterSingleton;
}

// Z_Construct_UClass_UWidgetEnumStateRegistration @ 1468d9bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetEnumStateRegistration(void)

{
  if (Z_Registration_Info_UClass_UWidgetEnumStateRegistration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetEnumStateRegistration.OuterSingleton,
               &Z_Construct_UClass_UWidgetEnumStateRegistration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetEnumStateRegistration.OuterSingleton;
}

// Z_Construct_UClass_UWidgetHoveredStateRegistration @ 1468d9c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetHoveredStateRegistration(void)

{
  if (Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.OuterSingleton,
               &Z_Construct_UClass_UWidgetHoveredStateRegistration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.OuterSingleton;
}

// Z_Construct_UClass_UWidgetPressedStateRegistration @ 1468d9c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetPressedStateRegistration(void)

{
  if (Z_Registration_Info_UClass_UWidgetPressedStateRegistration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetPressedStateRegistration.OuterSingleton,
               &Z_Construct_UClass_UWidgetPressedStateRegistration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetPressedStateRegistration.OuterSingleton;
}

// Z_Construct_UFunction_UCanvasPanelSlot_GetSize @ 1468d9c80

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_GetSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected @ 1468d9cc0

UFunction * __cdecl Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetSelectedStateRegistration @ 1468d9d00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetSelectedStateRegistration(void)

{
  if (Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.OuterSingleton,
               &Z_Construct_UClass_UWidgetSelectedStateRegistration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.OuterSingleton;
}

// NewProp_bShowEffectWhenDisabled_SetBit @ 1468d9d80

void __cdecl
Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 1;
  return;
}

// NewProp_bFlipForRightToLeftFlowDirection_SetBit @ 1468d9d90

void __cdecl
Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x310) = 1;
  return;
}

// Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder @ 1468d9da0

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment @ 1468d9e60

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors @ 1468d9fb0

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InbAutoSize_SetBit @ 1468da050

void __cdecl
Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UCanvasPanelSlot_NoRegister @ 1468da070

UClass * __cdecl Z_Construct_UClass_UCanvasPanelSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CanvasPanelSlot",
               &Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton,
               UCanvasPanelSlot::StaticRegisterNativesUCanvasPanelSlot,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCanvasPanelSlot>,
               InternalVTableHelperCtorCaller<UCanvasPanelSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize @ 1468da170

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetLayout @ 1468da200

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetLayout(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUMGSequencePlayer_NoRegister @ 1468da240

UClass * __cdecl Z_Construct_UClass_UUMGSequencePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UMGSequencePlayer",
               &Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton,
               UUMGSequencePlayer::StaticRegisterNativesUUMGSequencePlayer,0x268,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUMGSequencePlayer>,
               InternalVTableHelperCtorCaller<UUMGSequencePlayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum @ 1468da470

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum @ 1468da570

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets @ 1468da5b0

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetPosition @ 1468da5f0

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetSize @ 1468da630

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUserObjectListEntry @ 1468da670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserObjectListEntry(void)

{
  if (Z_Registration_Info_UClass_UUserObjectListEntry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserObjectListEntry.OuterSingleton,
               &Z_Construct_UClass_UUserObjectListEntry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserObjectListEntry.OuterSingleton;
}

// Z_Construct_UClass_UUserObjectListEntryLibrary @ 1468da6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserObjectListEntryLibrary(void)

{
  if (Z_Registration_Info_UClass_UUserObjectListEntryLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserObjectListEntryLibrary.OuterSingleton,
               &Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserObjectListEntryLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder @ 1468da6f0

UFunction * __cdecl Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet @ 1468da760

UFunction * __cdecl Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoSize_SetBit @ 1468da810

void __cdecl Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UClass_UWidgetStateSettings @ 1468da820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetStateSettings(void)

{
  if (Z_Registration_Info_UClass_UWidgetStateSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetStateSettings.OuterSingleton,
               &Z_Construct_UClass_UWidgetStateSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetStateSettings.OuterSingleton;
}

// NewProp_bIsRootWidget_SetBit @ 1468da930

void __cdecl
Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 1468da9f0

void * __cdecl Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetAnimationBinding,&UE::CoreUObject::Private::Construct<FWidgetAnimationBinding>,&UE::CoreUObject::Private::ConstructForTests<FWidgetAnimationBinding>,&UE::CoreUObject::Private::Destruct<FWidgetAnimationBinding>,&UE::CoreUObject::Private::Copy<FWidgetAnimationBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWidgetAnimation_NoRegister @ 1468daa30

UClass * __cdecl Z_Construct_UClass_UWidgetAnimation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimation",
               &Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton,
               UWidgetAnimation::StaticRegisterNativesUWidgetAnimation,0xa0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetAnimation>,
               InternalVTableHelperCtorCaller<UWidgetAnimation>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton;
}

// Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemIndex @ 1468daaf0

UFunction * __cdecl Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject @ 1468dac30

UFunction * __cdecl Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1468dacb0

void __cdecl
Z_Construct_UFunction_UUserObjectListEntryLibrary_IsFirstWidget_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UUserObjectListEntryLibrary_IsFirstWidget @ 1468dacc0

UFunction * __cdecl Z_Construct_UFunction_UUserObjectListEntryLibrary_IsFirstWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserObjectListEntryLibrary_IsFirstWidget_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1468dad40

void __cdecl
Z_Construct_UFunction_UUserObjectListEntryLibrary_IsLastWidget_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UUserObjectListEntryLibrary_IsLastWidget @ 1468dad50

UFunction * __cdecl Z_Construct_UFunction_UUserObjectListEntryLibrary_IsLastWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserObjectListEntryLibrary_IsLastWidget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1468db100

void * __cdecl Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUserWidgetPool,&UE::CoreUObject::Private::Construct<FUserWidgetPool>,&UE::CoreUObject::Private::ConstructForTests<FUserWidgetPool>,&UE::CoreUObject::Private::Destruct<FUserWidgetPool>,&UE::CoreUObject::Private::Copy<FUserWidgetPool>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTextBinding @ 1468db140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextBinding(void)

{
  if (Z_Registration_Info_UClass_UTextBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextBinding.OuterSingleton,
               &Z_Construct_UClass_UTextBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextBinding.OuterSingleton;
}

// Z_Construct_UFunction_UTextBinding_GetStringValue @ 1468db1b0

UFunction * __cdecl Z_Construct_UFunction_UTextBinding_GetStringValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieScene2DTransformTrack @ 1468db220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScene2DTransformTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieScene2DTransformTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScene2DTransformTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformTrack.OuterSingleton;
}

// Z_Construct_UFunction_UTextBinding_GetTextValue @ 1468db260

UFunction * __cdecl Z_Construct_UFunction_UTextBinding_GetTextValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBorderSlot @ 1468db2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBorderSlot(void)

{
  if (Z_Registration_Info_UClass_UBorderSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBorderSlot.OuterSingleton,
               &Z_Construct_UClass_UBorderSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBorderSlot.OuterSingleton;
}

// Z_Construct_UFunction_UBorderSlot_SetHorizontalAlignment @ 1468db2e0

UFunction * __cdecl Z_Construct_UFunction_UBorderSlot_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorderSlot_SetHorizontalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetAnimationDelegateBinding @ 1468db320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetAnimationDelegateBinding(void)

{
  if (Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton,
               &Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding @ 1468db360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding.InnerSingleton
    ;
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

// NewStructOps @ 1468db3e0

void * __cdecl
Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintWidgetAnimationDelegateBinding,&UE::CoreUObject::Private::Construct<FBlueprintWidgetAnimationDelegateBinding>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintWidgetAnimationDelegateBinding>,&UE::CoreUObject::Private::Destruct<FBlueprintWidgetAnimationDelegateBinding>,&UE::CoreUObject::Private::Copy<FBlueprintWidgetAnimationDelegateBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBorderSlot_SetPadding @ 1468db4a0

UFunction * __cdecl Z_Construct_UFunction_UBorderSlot_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBorderSlot_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUMGSequencePlayer @ 1468db540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUMGSequencePlayer(void)

{
  if (Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton,
               &Z_Construct_UClass_UUMGSequencePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton;
}

// Z_Construct_UFunction_UBorderSlot_SetVerticalAlignment @ 1468db690

UFunction * __cdecl Z_Construct_UFunction_UBorderSlot_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBorderSlot_SetVerticalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag @ 1468db740

UFunction * __cdecl Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag @ 1468db7c0

UFunction * __cdecl Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneMarginPropertySystem @ 1468db8c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMarginPropertySystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton;
}

// Z_Construct_UClass_UVisibilityBinding @ 1468db9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVisibilityBinding(void)

{
  if (Z_Registration_Info_UClass_UVisibilityBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVisibilityBinding.OuterSingleton,
               &Z_Construct_UClass_UVisibilityBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVisibilityBinding.OuterSingleton;
}

// Z_Construct_UFunction_UVisibilityBinding_GetValue @ 1468dbac0

UFunction * __cdecl Z_Construct_UFunction_UVisibilityBinding_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary @ 1468dbb00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWidgetAnimationHandle @ 1468dbb40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetAnimationHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetAnimationHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetAnimationHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetAnimationHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetAnimationHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetAnimationHandle.InnerSingleton;
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

// NewStructOps @ 1468dbbc0

void * __cdecl Z_Construct_UScriptStruct_FWidgetAnimationHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetAnimationHandle,&UE::CoreUObject::Private::Construct<FWidgetAnimationHandle>,&UE::CoreUObject::Private::ConstructForTests<FWidgetAnimationHandle>,&UE::CoreUObject::Private::Destruct<FWidgetAnimationHandle>,&UE::CoreUObject::Private::Copy<FWidgetAnimationHandle>,&UE::CoreUObject::Private::GetStructTypeHash<FWidgetAnimationHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UWidgetAnimationHandleFunctionLibrary_GetUserTag @ 1468dbf40

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimationHandleFunctionLibrary_GetUserTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimationHandleFunctionLibrary_GetUserTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetAnimationHandleFunctionLibrary_SetUserTag @ 1468dc1a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetAnimationHandleFunctionLibrary_SetUserTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimationHandleFunctionLibrary_SetUserTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetBinding @ 1468dc1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetBinding(void)

{
  if (Z_Registration_Info_UClass_UWidgetBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetBinding.OuterSingleton,
               &Z_Construct_UClass_UWidgetBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetBinding.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetBinding_GetValue @ 1468dc220

UFunction * __cdecl Z_Construct_UFunction_UWidgetBinding_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UListViewDesignerPreviewItem @ 1468dc270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UListViewDesignerPreviewItem(void)

{
  if (Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton,
               &Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton;
}

// Z_Construct_UPackage__Script_UMG @ 1468dc2e0

UPackage * __cdecl Z_Construct_UPackage__Script_UMG(void)

{
  if (Z_Registration_Info_UPackage__Script_UMG.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_UMG.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_UMG.OuterSingleton;
}

// Z_Construct_UClass_UGameViewportSubsystem @ 1468dc810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameViewportSubsystem(void)

{
  if (Z_Registration_Info_UClass_UGameViewportSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameViewportSubsystem.OuterSingleton,
               &Z_Construct_UClass_UGameViewportSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameViewportSubsystem.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGameViewportWidgetSlot @ 1468dc850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameViewportWidgetSlot(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameViewportWidgetSlot.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameViewportWidgetSlot.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameViewportWidgetSlot.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameViewportWidgetSlot.InnerSingleton;
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

// NewProp_bAutoRemoveOnWorldRemoved_SetBit @ 1468dc8d0

void __cdecl
Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_bAutoRemoveOnWorldRemoved_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// NewStructOps @ 1468dc8e0

void * __cdecl Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameViewportWidgetSlot,&UE::CoreUObject::Private::Construct<FGameViewportWidgetSlot>,&UE::CoreUObject::Private::ConstructForTests<FGameViewportWidgetSlot>,&UE::CoreUObject::Private::Destruct<FGameViewportWidgetSlot>,&UE::CoreUObject::Private::Copy<FGameViewportWidgetSlot>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister @ 1468dc9c0

UClass * __cdecl Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationPlayCallbackProxy",
               &Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton,
               UWidgetAnimationPlayCallbackProxy::
               StaticRegisterNativesUWidgetAnimationPlayCallbackProxy,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimationPlayCallbackProxy>,
               InternalVTableHelperCtorCaller<UWidgetAnimationPlayCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.InnerSingleton;
}

// NewProp_bDistributeItemsEvenly_SetBit @ 1468dca70

void __cdecl
Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bClockwiseOrder_SetBit @ 1468dca80

void __cdecl
Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bClockwiseOrder_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewStructOps @ 1468dca90

void * __cdecl Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRadialBoxSettings,&UE::CoreUObject::Private::Construct<FRadialBoxSettings>,&UE::CoreUObject::Private::ConstructForTests<FRadialBoxSettings>,&UE::CoreUObject::Private::Destruct<FRadialBoxSettings>,&UE::CoreUObject::Private::Copy<FRadialBoxSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 1468dcbd0

void __cdecl
Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UGameViewportSubsystem_AddWidget @ 1468dcc10

UFunction * __cdecl Z_Construct_UFunction_UGameViewportSubsystem_AddWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1468dcc50

void __cdecl
Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy @ 1468dcc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.OuterSingleton;
}

// Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer @ 1468dcca0

UFunction * __cdecl Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USlateAccessibleWidgetData @ 1468dcce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USlateAccessibleWidgetData(void)

{
  if (Z_Registration_Info_UClass_USlateAccessibleWidgetData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USlateAccessibleWidgetData.OuterSingleton,
               &Z_Construct_UClass_USlateAccessibleWidgetData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USlateAccessibleWidgetData.OuterSingleton;
}

// Z_Construct_UEnum_UMG_ESlateAccessibleBehavior @ 1468dcd20

UEnum * __cdecl Z_Construct_UEnum_UMG_ESlateAccessibleBehavior(void)

{
  if (Z_Registration_Info_UEnum_ESlateAccessibleBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESlateAccessibleBehavior.InnerSingleton,
               &Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESlateAccessibleBehavior.InnerSingleton;
}

// Z_Construct_UEnum_UMG_ESlateSizeRule @ 1468dcd60

UEnum * __cdecl Z_Construct_UEnum_UMG_ESlateSizeRule(void)

{
  if (Z_Registration_Info_UEnum_ESlateSizeRule.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESlateSizeRule.InnerSingleton,
               &Z_Construct_UEnum_UMG_ESlateSizeRule_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESlateSizeRule.InnerSingleton;
}

// Z_Construct_UEnum_UMG_ESlateVisibility @ 1468dcda0

UEnum * __cdecl Z_Construct_UEnum_UMG_ESlateVisibility(void)

{
  if (Z_Registration_Info_UEnum_ESlateVisibility.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESlateVisibility.InnerSingleton,
               &Z_Construct_UEnum_UMG_ESlateVisibility_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESlateVisibility.InnerSingleton;
}

// Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature @ 1468dcde0

UFunction * __cdecl
Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot @ 1468dce20

UFunction * __cdecl Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESlateVisibility_StaticEnum @ 1468dce60

UEnum * __cdecl ESlateVisibility_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_ESlateVisibility,(UObject *)pUVar1,L"ESlateVisibility")
    ;
  }
  return Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1468dcea0

void __cdecl
Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UUMGSequenceTickManager @ 1468dceb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUMGSequenceTickManager(void)

{
  if (Z_Registration_Info_UClass_UUMGSequenceTickManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUMGSequenceTickManager.OuterSingleton,
               &Z_Construct_UClass_UUMGSequenceTickManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUMGSequenceTickManager.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData @ 1468dcef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSequenceTickManagerWidgetData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSequenceTickManagerWidgetData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSequenceTickManagerWidgetData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSequenceTickManagerWidgetData.InnerSingleton;
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

// Z_Construct_UClass_UMovieScene2DTransformPropertySystem @ 1468dcf70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScene2DTransformPropertySystem(void)

{
  if (Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton,
               &Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton;
}

// NewStructOps @ 1468dcfb0

void * __cdecl Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSequenceTickManagerWidgetData,&UE::CoreUObject::Private::Construct<FSequenceTickManagerWidgetData>,&UE::CoreUObject::Private::ConstructForTests<FSequenceTickManagerWidgetData>,&UE::CoreUObject::Private::Destruct<FSequenceTickManagerWidgetData>,&UE::CoreUObject::Private::Copy<FSequenceTickManagerWidgetData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// ESlateAccessibleBehavior_StaticEnum @ 1468dcff0

UEnum * __cdecl ESlateAccessibleBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_ESlateAccessibleBehavior,(UObject *)pUVar1,
                       L"ESlateAccessibleBehavior");
  }
  return Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject @ 1468dd030

UFunction * __cdecl
Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded @ 1468dd070

UFunction * __cdecl Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget @ 1468dd0b0

UFunction * __cdecl Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot @ 1468dd0f0

UFunction * __cdecl Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCanChildrenBeAccessible_SetBit @ 1468dd130

void __cdecl
Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize @ 1468dd140

UFunction * __cdecl Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject @ 1468dd180

UFunction * __cdecl
Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRemoveDPIScale_SetBit @ 1468dd1c0

void __cdecl
Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::
NewProp_bRemoveDPIScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition @ 1468dd1d0

UFunction * __cdecl Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ESlateSizeRule_StaticEnum @ 1468dd210

UEnum * __cdecl ESlateSizeRule_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_ESlateSizeRule,(UObject *)pUVar1,L"ESlateSizeRule");
  }
  return Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_NewPlayAnimationProxyObject @ 1468dd250

UFunction * __cdecl
Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_NewPlayAnimationProxyObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_NewPlayAnimationProxyObject_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1468dd290

void * __cdecl Z_Construct_UScriptStruct_FEventReply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEventReply,&UE::CoreUObject::Private::Construct<FEventReply>,&UE::CoreUObject::Private::ConstructForTests<FEventReply>,&UE::CoreUObject::Private::Destruct<FEventReply>,&UE::CoreUObject::Private::Copy<FEventReply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_NewPlayAnimationTimeRangeProxyObject @ 1468dd2d0

UFunction * __cdecl
Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_NewPlayAnimationTimeRangeProxyObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_NewPlayAnimationTimeRangeProxyObject_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1468dd350

void * __cdecl Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSlateChildSize,&UE::CoreUObject::Private::Construct<FSlateChildSize>,&UE::CoreUObject::Private::ConstructForTests<FSlateChildSize>,&UE::CoreUObject::Private::Destruct<FSlateChildSize>,&UE::CoreUObject::Private::Copy<FSlateChildSize>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EVirtualKeyboardType_StaticEnum @ 1468dd440

UEnum * __cdecl EVirtualKeyboardType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EVirtualKeyboardType,(UObject *)pUVar1,
                       L"EVirtualKeyboardType");
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton;
}

// Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister @ 1468dd540

UClass * __cdecl Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"AsyncTaskDownloadImage",
               &Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton,
               UAsyncTaskDownloadImage::StaticRegisterNativesUAsyncTaskDownloadImage,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAsyncTaskDownloadImage>
               ,InternalVTableHelperCtorCaller<UAsyncTaskDownloadImage>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton;
}

// Z_Construct_UClass_UBoolBinding @ 1468dd620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBoolBinding(void)

{
  if (Z_Registration_Info_UClass_UBoolBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBoolBinding.OuterSingleton,
               &Z_Construct_UClass_UBoolBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBoolBinding.OuterSingleton;
}

// Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature @ 1468dd660

UFunction * __cdecl
Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature @ 1468dd6a0

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature @ 1468dd6f0

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPropertyBinding @ 1468dd730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyBinding(void)

{
  if (Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton,
               &Z_Construct_UClass_UPropertyBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton;
}

// Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature @ 1468dd770

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature @ 1468dd7b0

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature @ 1468dd7f0

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1468dd830

void __cdecl
Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature @ 1468dd960

UFunction * __cdecl
Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature @ 1468dd9a0

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBoolBinding_GetValue @ 1468ddaa0

UFunction * __cdecl Z_Construct_UFunction_UBoolBinding_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBoolBinding_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_UMG_EUMGSequencePlayMode @ 1468ddae0

UEnum * __cdecl Z_Construct_UEnum_UMG_EUMGSequencePlayMode(void)

{
  if (Z_Registration_Info_UEnum_EUMGSequencePlayMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUMGSequencePlayMode.InnerSingleton,
               &Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUMGSequencePlayMode.InnerSingleton;
}

// EUMGSequencePlayMode_StaticEnum @ 1468ddb20

UEnum * __cdecl EUMGSequencePlayMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EUMGSequencePlayMode,(UObject *)pUVar1,
                       L"EUMGSequencePlayMode");
  }
  return Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton;
}

// Z_Construct_UClass_UUserWidgetBlueprint @ 1468ddc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserWidgetBlueprint(void)

{
  if (Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton,
               &Z_Construct_UClass_UUserWidgetBlueprint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton;
}

// Z_Construct_UClass_UUserWidgetExtension @ 1468ddde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserWidgetExtension(void)

{
  if (Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton,
               &Z_Construct_UClass_UUserWidgetExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton;
}

// Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension @ 1468de0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension(void)

{
  if (Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton,
               &Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton;
}

// Z_Construct_UClass_UButton @ 1468de0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UButton(void)

{
  if (Z_Registration_Info_UClass_UButton.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UButton.OuterSingleton,
               &Z_Construct_UClass_UButton_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UButton.OuterSingleton;
}

// NewStructOps @ 1468de160

void * __cdecl Z_Construct_UScriptStruct_FWidgetEventField_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetEventField,&UE::CoreUObject::Private::Construct<FWidgetEventField>,&UE::CoreUObject::Private::ConstructForTests<FWidgetEventField>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBrushBinding @ 1468de1a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBrushBinding(void)

{
  if (Z_Registration_Info_UClass_UBrushBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBrushBinding.OuterSingleton,
               &Z_Construct_UClass_UBrushBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBrushBinding.OuterSingleton;
}

// Z_Construct_UClass_UBackgroundBlur @ 1468de1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBackgroundBlur(void)

{
  if (Z_Registration_Info_UClass_UBackgroundBlur.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBackgroundBlur.OuterSingleton,
               &Z_Construct_UClass_UBackgroundBlur_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBackgroundBlur.OuterSingleton;
}

// NewProp_bInApplyAlphaToBlur_SetBit @ 1468de220

void __cdecl
Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::
NewProp_bInApplyAlphaToBlur_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBrushBinding_GetValue @ 1468de230

UFunction * __cdecl Z_Construct_UFunction_UBrushBinding_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBrushBinding_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1468de270

void __cdecl
Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur @ 1468de280

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UButton_IsPressed @ 1468de310

UFunction * __cdecl Z_Construct_UFunction_UButton_IsPressed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButton_IsPressed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius @ 1468de3f0

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInAllowDragDrop_SetBit @ 1468de430

void __cdecl
Z_Construct_UFunction_UButton_SetAllowDragDrop_Statics::NewProp_bInAllowDragDrop_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UButton_SetAllowDragDrop @ 1468de440

UFunction * __cdecl Z_Construct_UFunction_UButton_SetAllowDragDrop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButton_SetAllowDragDrop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength @ 1468de480

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UButton_SetBackgroundColor @ 1468de4f0

UFunction * __cdecl Z_Construct_UFunction_UButton_SetBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius @ 1468de530

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UButton_SetClickMethod @ 1468de570

UFunction * __cdecl Z_Construct_UFunction_UButton_SetClickMethod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButton_SetClickMethod_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment @ 1468de5b0

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UButton_SetColorAndOpacity @ 1468de5f0

UFunction * __cdecl Z_Construct_UFunction_UButton_SetColorAndOpacity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush @ 1468de6f0

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UButton_SetPressMethod @ 1468de730

UFunction * __cdecl Z_Construct_UFunction_UButton_SetPressMethod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButton_SetPressMethod_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlur_SetPadding @ 1468de770

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlur_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UButton_SetStyle @ 1468de7b0

UFunction * __cdecl Z_Construct_UFunction_UButton_SetStyle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButton_SetStyle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment @ 1468de7f0

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UButton_SetTouchMethod @ 1468de830

UFunction * __cdecl Z_Construct_UFunction_UButton_SetTouchMethod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UButton_SetTouchMethod_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCheckedStateBinding @ 1468de870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCheckedStateBinding(void)

{
  if (Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton,
               &Z_Construct_UClass_UCheckedStateBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton;
}

// Z_Construct_UFunction_UCheckedStateBinding_GetValue @ 1468de8b0

UFunction * __cdecl Z_Construct_UFunction_UCheckedStateBinding_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyAlphaToBlur_SetBit @ 1468de8f0

void __cdecl
Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
  return;
}

// NewProp_IsFocusable_SetBit @ 1468de900

void __cdecl Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x583) = 1;
  return;
}

// NewProp_bOverrideAutoRadiusCalculation_SetBit @ 1468de910

void __cdecl
Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e0) = 1;
  return;
}

// NewProp_bAllowDragDrop_SetBit @ 1468de920

void __cdecl Z_Construct_UClass_UButton_Statics::NewProp_bAllowDragDrop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6b8) = 1;
  return;
}

// Z_Construct_UClass_UColorBinding @ 1468deb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UColorBinding(void)

{
  if (Z_Registration_Info_UClass_UColorBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UColorBinding.OuterSingleton,
               &Z_Construct_UClass_UColorBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UColorBinding.OuterSingleton;
}

// Z_Construct_UFunction_UColorBinding_GetLinearValue @ 1468dec60

UFunction * __cdecl Z_Construct_UFunction_UColorBinding_GetLinearValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UColorBinding_GetSlateValue @ 1468dedb0

UFunction * __cdecl Z_Construct_UFunction_UColorBinding_GetSlateValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAsyncTaskDownloadImage @ 1468deef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncTaskDownloadImage(void)

{
  if (Z_Registration_Info_UClass_UAsyncTaskDownloadImage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncTaskDownloadImage.OuterSingleton,
               &Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncTaskDownloadImage.OuterSingleton;
}

// Z_Construct_UClass_UMovieScene2DTransformSection @ 1468deff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScene2DTransformSection(void)

{
  if (Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton,
               &Z_Construct_UClass_UMovieScene2DTransformSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieScene2DTransformMask @ 1468df030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieScene2DTransformMask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieScene2DTransformMask.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieScene2DTransformMask.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieScene2DTransformMask.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieScene2DTransformMask.InnerSingleton;
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

// NewStructOps @ 1468df0b0

void * __cdecl Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieScene2DTransformMask,&UE::CoreUObject::Private::Construct<FMovieScene2DTransformMask>,&UE::CoreUObject::Private::ConstructForTests<FMovieScene2DTransformMask>,&UE::CoreUObject::Private::Destruct<FMovieScene2DTransformMask>,&UE::CoreUObject::Private::Copy<FMovieScene2DTransformMask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage @ 1468df0f0

UFunction * __cdecl Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FDynamicPropertyPath @ 1468df1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicPropertyPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicPropertyPath.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicPropertyPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicPropertyPath.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDynamicPropertyPath.InnerSingleton;
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

// NewStructOps @ 1468df270

void * __cdecl Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicPropertyPath,&UE::CoreUObject::Private::Construct<FDynamicPropertyPath>,&UE::CoreUObject::Private::ConstructForTests<FDynamicPropertyPath>,&UE::CoreUObject::Private::Destruct<FDynamicPropertyPath>,&UE::CoreUObject::Private::Copy<FDynamicPropertyPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBackgroundBlurSlot @ 1468df2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBackgroundBlurSlot(void)

{
  if (Z_Registration_Info_UClass_UBackgroundBlurSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBackgroundBlurSlot.OuterSingleton,
               &Z_Construct_UClass_UBackgroundBlurSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBackgroundBlurSlot.OuterSingleton;
}

// Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment @ 1468df3a0

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding @ 1468df3e0

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment @ 1468df420

UFunction * __cdecl Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneWidgetMaterialSystem @ 1468df5e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneWidgetMaterialSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneMarginSection @ 1468df6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMarginSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMarginSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton;
}

// Z_Construct_UClass_UFloatBinding @ 1468df770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFloatBinding(void)

{
  if (Z_Registration_Info_UClass_UFloatBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFloatBinding.OuterSingleton,
               &Z_Construct_UClass_UFloatBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFloatBinding.OuterSingleton;
}

// Z_Construct_UFunction_UFloatBinding_GetValue @ 1468df7b0

UFunction * __cdecl Z_Construct_UFunction_UFloatBinding_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UFloatBinding_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UButtonSlot @ 1468df7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UButtonSlot(void)

{
  if (Z_Registration_Info_UClass_UButtonSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UButtonSlot.OuterSingleton,
               &Z_Construct_UClass_UButtonSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UButtonSlot.OuterSingleton;
}

// Z_Construct_UClass_UWidgetFieldNotificationExtension @ 1468df830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetFieldNotificationExtension(void)

{
  if (Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.OuterSingleton,
               &Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.OuterSingleton;
}

// Z_Construct_UFunction_UButtonSlot_SetHorizontalAlignment @ 1468df870

UFunction * __cdecl Z_Construct_UFunction_UButtonSlot_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UButtonSlot_SetHorizontalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_> @ 1468df8b0

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,EForwardingConstructor param_1,TAdd<FMovieScenePropertyBinding> *param_2,
          TAddConditional<FGuid> *param_3,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_4,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_5,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_6,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_7,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_8,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_9)

{
  bool bVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  undefined3 uVar5;
  uint uVar6;
  
  *(short *)this = (short)param_2->_padding_;
  this->field_0x18 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x18 = bVar1;
  if (bVar1 != false) {
    uVar2 = (param_2->Payload).TypedValue.PropertyName.Number;
    FVar3.Value = (param_2->Payload).TypedValue.PropertyPath.ComparisonIndex.Value;
    uVar4 = (param_2->Payload).TypedValue.PropertyPath.Number;
    *(uint *)&this->field_0x4 = (param_2->Payload).TypedValue.PropertyName.ComparisonIndex.Value;
    *(uint *)&this->field_0x8 = uVar2;
    *(uint *)&this->field_0xc = FVar3.Value;
    *(uint *)&this->field_0x10 = uVar4;
    uVar5 = *(undefined3 *)&(param_2->Payload).TypedValue.field_0x11;
    this->field_0x14 = (param_2->Payload).TypedValue.bCanUseClassLookup;
    *(undefined3 *)&this->field_0x15 = uVar5;
  }
  *(int *)&this->field_0x1c = param_3->_padding_;
  this->field_0x30 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x30 = bVar1;
  if (bVar1 != false) {
    uVar2 = (param_3->Payload).TypedValue.B;
    uVar4 = (param_3->Payload).TypedValue.C;
    uVar6 = (param_3->Payload).TypedValue.D;
    *(uint *)&this->field_0x20 = (param_3->Payload).TypedValue.A;
    *(uint *)&this->field_0x24 = uVar2;
    *(uint *)&this->field_0x28 = uVar4;
    *(uint *)&this->field_0x2c = uVar6;
  }
  *(int *)&this->field_0x38 = (int)param_4->_padding_;
  this->field_0x48 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x48 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x40 = (param_4->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x50 = (int)param_5->_padding_;
  this->field_0x60 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x60 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x58 = (param_5->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x68 = (int)param_6->_padding_;
  this->field_0x78 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x78 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x70 = (param_6->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x80 = (int)param_7->_padding_;
  this->field_0x90 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x90 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x88 = (param_7->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x98 = (int)param_8->_padding_;
  this->field_0xa8 = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0xa8 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0xa0 = (param_8->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0xb0 = (int)param_9->_padding_;
  this->field_0xc0 = 0;
  bVar1 = (param_9->Payload).bIsSet;
  this->field_0xc0 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0xb8 = (param_9->Payload).TypedValue.Source;
  }
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_> @ 1468df9f0

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,EForwardingConstructor param_1,TAdd<FMovieScenePropertyBinding> *param_2,
          TAddConditional<FGuid> *param_3,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_4,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_5,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_6,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_7,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_8,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_9,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_10)

{
  bool bVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  undefined3 uVar5;
  uint uVar6;
  
  *(short *)this = (short)param_2->_padding_;
  this->field_0x18 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x18 = bVar1;
  if (bVar1 != false) {
    uVar2 = (param_2->Payload).TypedValue.PropertyName.Number;
    FVar3.Value = (param_2->Payload).TypedValue.PropertyPath.ComparisonIndex.Value;
    uVar4 = (param_2->Payload).TypedValue.PropertyPath.Number;
    *(uint *)&this->field_0x4 = (param_2->Payload).TypedValue.PropertyName.ComparisonIndex.Value;
    *(uint *)&this->field_0x8 = uVar2;
    *(uint *)&this->field_0xc = FVar3.Value;
    *(uint *)&this->field_0x10 = uVar4;
    uVar5 = *(undefined3 *)&(param_2->Payload).TypedValue.field_0x11;
    this->field_0x14 = (param_2->Payload).TypedValue.bCanUseClassLookup;
    *(undefined3 *)&this->field_0x15 = uVar5;
  }
  *(int *)&this->field_0x1c = param_3->_padding_;
  this->field_0x30 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x30 = bVar1;
  if (bVar1 != false) {
    uVar2 = (param_3->Payload).TypedValue.B;
    uVar4 = (param_3->Payload).TypedValue.C;
    uVar6 = (param_3->Payload).TypedValue.D;
    *(uint *)&this->field_0x20 = (param_3->Payload).TypedValue.A;
    *(uint *)&this->field_0x24 = uVar2;
    *(uint *)&this->field_0x28 = uVar4;
    *(uint *)&this->field_0x2c = uVar6;
  }
  *(int *)&this->field_0x38 = (int)param_4->_padding_;
  this->field_0x48 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x48 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x40 = (param_4->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x50 = (int)param_5->_padding_;
  this->field_0x60 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x60 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x58 = (param_5->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x68 = (int)param_6->_padding_;
  this->field_0x78 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x78 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x70 = (param_6->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x80 = (int)param_7->_padding_;
  this->field_0x90 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x90 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x88 = (param_7->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x98 = (int)param_8->_padding_;
  this->field_0xa8 = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0xa8 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0xa0 = (param_8->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0xb0 = (int)param_9->_padding_;
  this->field_0xc0 = 0;
  bVar1 = (param_9->Payload).bIsSet;
  this->field_0xc0 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0xb8 = (param_9->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0xc8 = (int)param_10->_padding_;
  this->field_0xd8 = 0;
  bVar1 = (param_10->Payload).bIsSet;
  this->field_0xd8 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0xd0 = (param_10->Payload).TypedValue.Source;
  }
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd> @ 1468dfb60

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
           *this,EForwardingConstructor param_1,TAdd<FMovieScenePropertyBinding> *param_2,
          TAddConditional<FGuid> *param_3,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_4,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_5,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_6,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_7,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_8,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_9,
          TAddConditional<UE::MovieScene::FSourceFloatChannel> *param_10,FAdd *param_11)

{
  bool bVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  undefined3 uVar5;
  uint uVar6;
  
  *(short *)this = (short)param_2->_padding_;
  this->field_0x18 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x18 = bVar1;
  if (bVar1 != false) {
    uVar2 = (param_2->Payload).TypedValue.PropertyName.Number;
    FVar3.Value = (param_2->Payload).TypedValue.PropertyPath.ComparisonIndex.Value;
    uVar4 = (param_2->Payload).TypedValue.PropertyPath.Number;
    *(uint *)&this->field_0x4 = (param_2->Payload).TypedValue.PropertyName.ComparisonIndex.Value;
    *(uint *)&this->field_0x8 = uVar2;
    *(uint *)&this->field_0xc = FVar3.Value;
    *(uint *)&this->field_0x10 = uVar4;
    uVar5 = *(undefined3 *)&(param_2->Payload).TypedValue.field_0x11;
    this->field_0x14 = (param_2->Payload).TypedValue.bCanUseClassLookup;
    *(undefined3 *)&this->field_0x15 = uVar5;
  }
  *(int *)&this->field_0x1c = param_3->_padding_;
  this->field_0x30 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x30 = bVar1;
  if (bVar1 != false) {
    uVar2 = (param_3->Payload).TypedValue.B;
    uVar4 = (param_3->Payload).TypedValue.C;
    uVar6 = (param_3->Payload).TypedValue.D;
    *(uint *)&this->field_0x20 = (param_3->Payload).TypedValue.A;
    *(uint *)&this->field_0x24 = uVar2;
    *(uint *)&this->field_0x28 = uVar4;
    *(uint *)&this->field_0x2c = uVar6;
  }
  *(int *)&this->field_0x38 = (int)param_4->_padding_;
  this->field_0x48 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x48 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x40 = (param_4->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x50 = (int)param_5->_padding_;
  this->field_0x60 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x60 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x58 = (param_5->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x68 = (int)param_6->_padding_;
  this->field_0x78 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x78 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x70 = (param_6->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x80 = (int)param_7->_padding_;
  this->field_0x90 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x90 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0x88 = (param_7->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0x98 = (int)param_8->_padding_;
  this->field_0xa8 = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0xa8 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0xa0 = (param_8->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0xb0 = (int)param_9->_padding_;
  this->field_0xc0 = 0;
  bVar1 = (param_9->Payload).bIsSet;
  this->field_0xc0 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0xb8 = (param_9->Payload).TypedValue.Source;
  }
  *(int *)&this->field_0xc8 = (int)param_10->_padding_;
  this->field_0xd8 = 0;
  bVar1 = (param_10->Payload).bIsSet;
  this->field_0xd8 = bVar1;
  if (bVar1 != false) {
    *(FMovieSceneFloatChannel **)&this->field_0xd0 = (param_10->Payload).TypedValue.Source;
  }
  *(ushort *)&this->field_0xe0 = (param_11->ComponentTypeID).Value;
  return this;
}

// TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_><UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_> @ 1468dfce0

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
* __thiscall
TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
::
TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_><UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
          (TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
           *this,TComponentLock<UE::MovieScene::TRead<UObject_*>_> *param_1,
          TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
          *param_2,TComponentLock<UE::MovieScene::TRead<double>_> *param_3,
          TComponentLock<UE::MovieScene::TRead<double>_> *param_4,
          TComponentLock<UE::MovieScene::TRead<double>_> *param_5,
          TComponentLock<UE::MovieScene::TRead<double>_> *param_6,
          TComponentLock<UE::MovieScene::TRead<double>_> *param_7,
          TComponentLock<UE::MovieScene::TRead<double>_> *param_8,
          TComponentLock<UE::MovieScene::TRead<double>_> *param_9)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)param_2;
  *(undefined4 *)&this->field_0x20 = *(undefined4 *)&param_2->field_0x8;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&param_2->field_0x10 = 0;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_2->field_0x18;
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_2->field_0x20;
  *(undefined8 *)&param_2->field_0x18 = 0;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&param_2->field_0x30;
  *(undefined4 *)&this->field_0x50 = *(undefined4 *)&param_2->field_0x38;
  *(undefined8 *)&param_2->field_0x30 = 0;
  *(undefined8 *)&this->field_0x58 = *(undefined8 *)&param_2->field_0x40;
  *(undefined8 *)&param_2->field_0x40 = 0;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)param_3;
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)&param_3->field_0x8;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&param_3->field_0x10 = 0;
  *(undefined8 *)&this->field_0x78 = *(undefined8 *)param_4;
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_4->field_0x8;
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)&this->field_0x88 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&param_4->field_0x10 = 0;
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)param_5;
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)&param_5->field_0x8;
  *(undefined8 *)param_5 = 0;
  *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&param_5->field_0x10 = 0;
  *(undefined8 *)&this->field_0xa8 = *(undefined8 *)param_6;
  *(undefined4 *)&this->field_0xb0 = *(undefined4 *)&param_6->field_0x8;
  *(undefined8 *)param_6 = 0;
  *(undefined8 *)&this->field_0xb8 = *(undefined8 *)&param_6->field_0x10;
  *(undefined8 *)&param_6->field_0x10 = 0;
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)param_7;
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)&param_7->field_0x8;
  *(undefined8 *)param_7 = 0;
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&param_7->field_0x10;
  *(undefined8 *)&param_7->field_0x10 = 0;
  *(undefined8 *)&this->field_0xd8 = *(undefined8 *)param_8;
  *(undefined4 *)&this->field_0xe0 = *(undefined4 *)&param_8->field_0x8;
  *(undefined8 *)param_8 = 0;
  *(undefined8 *)&this->field_0xe8 = *(undefined8 *)&param_8->field_0x10;
  *(undefined8 *)&param_8->field_0x10 = 0;
  *(undefined8 *)&this->field_0xf0 = *(undefined8 *)param_9;
  *(undefined4 *)&this->field_0xf8 = *(undefined4 *)&param_9->field_0x8;
  *(undefined8 *)param_9 = 0;
  *(undefined8 *)&this->field_0x100 = *(undefined8 *)&param_9->field_0x10;
  *(undefined8 *)&param_9->field_0x10 = 0;
  return this;
}

// TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_><UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_> @ 1468dfe90

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
* __thiscall
TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
::
TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_><UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
          (TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
           *this,TComponentLock<UE::MovieScene::TRead<UObject_*>_> *param_1,
          TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
          *param_2,TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_3,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_4,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_5,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_6,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_7,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_8,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_9)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)param_2;
  *(undefined4 *)&this->field_0x20 = *(undefined4 *)&param_2->field_0x8;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&param_2->field_0x10 = 0;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_2->field_0x18;
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_2->field_0x20;
  *(undefined8 *)&param_2->field_0x18 = 0;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&param_2->field_0x30;
  *(undefined4 *)&this->field_0x50 = *(undefined4 *)&param_2->field_0x38;
  *(undefined8 *)&param_2->field_0x30 = 0;
  *(undefined8 *)&this->field_0x58 = *(undefined8 *)&param_2->field_0x40;
  *(undefined8 *)&param_2->field_0x40 = 0;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)param_3;
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)&param_3->field_0x8;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&param_3->field_0x10 = 0;
  *(undefined8 *)&this->field_0x78 = *(undefined8 *)param_4;
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_4->field_0x8;
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)&this->field_0x88 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&param_4->field_0x10 = 0;
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)param_5;
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)&param_5->field_0x8;
  *(undefined8 *)param_5 = 0;
  *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&param_5->field_0x10 = 0;
  *(undefined8 *)&this->field_0xa8 = *(undefined8 *)param_6;
  *(undefined4 *)&this->field_0xb0 = *(undefined4 *)&param_6->field_0x8;
  *(undefined8 *)param_6 = 0;
  *(undefined8 *)&this->field_0xb8 = *(undefined8 *)&param_6->field_0x10;
  *(undefined8 *)&param_6->field_0x10 = 0;
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)param_7;
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)&param_7->field_0x8;
  *(undefined8 *)param_7 = 0;
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&param_7->field_0x10;
  *(undefined8 *)&param_7->field_0x10 = 0;
  *(undefined8 *)&this->field_0xd8 = *(undefined8 *)param_8;
  *(undefined4 *)&this->field_0xe0 = *(undefined4 *)&param_8->field_0x8;
  *(undefined8 *)param_8 = 0;
  *(undefined8 *)&this->field_0xe8 = *(undefined8 *)&param_8->field_0x10;
  *(undefined8 *)&param_8->field_0x10 = 0;
  *(undefined8 *)&this->field_0xf0 = *(undefined8 *)param_9;
  *(undefined4 *)&this->field_0xf8 = *(undefined4 *)&param_9->field_0x8;
  *(undefined8 *)param_9 = 0;
  *(undefined8 *)&this->field_0x100 = *(undefined8 *)&param_9->field_0x10;
  *(undefined8 *)&param_9->field_0x10 = 0;
  return this;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_> @ 1468e3d10

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>_>
           *param_1,FInterrogationChannel *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FInterrogationChannel_const_&> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x28) < param_2->Value) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x28) <= param_2->Value) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_> @ 1468e3d90

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>_>
           *param_1,FInterrogationChannel *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FInterrogationChannel_const_&> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x40) < param_2->Value) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) &&
     (iVar4 = -1, *(int *)(pFVar2 + (longlong)iVar5 * 0x40) <= param_2->Value)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 1468e3e10

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageIndex *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (param_1->ArrayNum <= iVar4) {
    return -1;
  }
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x40;
  if (param_2->Value == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar1 = param_2->Value;
  if (*(int *)pFVar6 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar5 = -1;
  if (*(int *)pFVar6 <= iVar1) {
    iVar5 = iVar4;
  }
  return iVar5;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 1468e3ef0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageIndex *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (param_1->ArrayNum <= iVar4) {
    return -1;
  }
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x58;
  if (param_2->Value == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar1 = param_2->Value;
  if (*(int *)pFVar6 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar5 = -1;
  if (*(int *)pFVar6 <= iVar1) {
    iVar5 = iVar4;
  }
  return iVar5;
}

// CastChecked<UWidget_const_,UObject_const_> @ 1468e4450

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl CastChecked<UWidget_const_,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UWidget_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UWidget_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UWidget *)param_1;
  }
  pFVar3 = GetTypeName<UWidget_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UBackgroundBlur,UPanelWidget> @ 1468e4510

UBackgroundBlur * __cdecl
CastChecked<UBackgroundBlur,UPanelWidget>(TObjectPtr<UPanelWidget> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UBackgroundBlur *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UPanelWidget *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UBackgroundBlur>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UBackgroundBlur *)0x0;
  }
  else {
    pUVar2 = UBackgroundBlur::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UBackgroundBlur *)(param_1->field0_0x0).DebugPtr, pUVar4 == (UBackgroundBlur *)0x0
       )) {
      pFVar3 = GetTypeName<UBackgroundBlur>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UPanelWidget>(&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UBackgroundBlurSlot,UPanelSlot> @ 1468e45d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UBackgroundBlurSlot * __cdecl CastChecked<UBackgroundBlurSlot,UPanelSlot>(UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar3 = GetTypeName<UBackgroundBlurSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UBackgroundBlurSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UBackgroundBlurSlot *)param_1;
  }
  pFVar3 = GetTypeName<UBackgroundBlurSlot>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UBorder,UPanelWidget> @ 1468e4690

UBorder * __cdecl CastChecked<UBorder,UPanelWidget>(TObjectPtr<UPanelWidget> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UBorder *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UPanelWidget *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UBorder>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UBorder *)0x0;
  }
  else {
    pUVar2 = UBorder::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) || (pUVar4 = (UBorder *)(param_1->field0_0x0).DebugPtr, pUVar4 == (UBorder *)0x0))
    {
      pFVar3 = GetTypeName<UBorder>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UPanelWidget>(&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UBorderSlot,UPanelSlot> @ 1468e4750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UBorderSlot * __cdecl CastChecked<UBorderSlot,UPanelSlot>(UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar3 = GetTypeName<UBorderSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UBorderSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UBorderSlot *)param_1;
  }
  pFVar3 = GetTypeName<UBorderSlot>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UButtonSlot,UPanelSlot> @ 1468e4810

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UButtonSlot * __cdecl CastChecked<UButtonSlot,UPanelSlot>(UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar3 = GetTypeName<UButtonSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UButtonSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UButtonSlot *)param_1;
  }
  pFVar3 = GetTypeName<UButtonSlot>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UCanvasPanelSlot,UObject_const_> @ 1468e48d0

UCanvasPanelSlot * __cdecl CastChecked<UCanvasPanelSlot,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCanvasPanelSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCanvasPanelSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCanvasPanelSlot *)param_1;
  }
  pFVar3 = GetTypeName<UCanvasPanelSlot>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UCanvasPanelSlot,UObject> @ 1468e4990

UCanvasPanelSlot * __cdecl CastChecked<UCanvasPanelSlot,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCanvasPanelSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCanvasPanelSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCanvasPanelSlot *)param_1;
  }
  pFVar3 = GetTypeName<UCanvasPanelSlot>(&local_28);
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

// CastChecked<UCanvasPanelSlot,UPanelSlot> @ 1468e4a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCanvasPanelSlot * __cdecl CastChecked<UCanvasPanelSlot,UPanelSlot>(UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar3 = GetTypeName<UCanvasPanelSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCanvasPanelSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UCanvasPanelSlot *)param_1;
  }
  pFVar3 = GetTypeName<UCanvasPanelSlot>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UUserWidget,UObject> @ 1468e4b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __cdecl CastChecked<UUserWidget,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UUserWidget>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UUserWidget *)param_1;
  }
  pFVar3 = GetTypeName<UUserWidget>(&local_28);
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

// CastChecked<UWidget,UObject> @ 1468e4bd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl CastChecked<UWidget,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UWidget>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UWidget_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UWidget *)param_1;
  }
  pFVar3 = GetTypeName<UWidget>(&local_28);
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

// CastChecked<UWidget,UObject> @ 1468e4c90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl CastChecked<UWidget,UObject>(UObject *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    if (param_2 != NullChecked) {
      return (UWidget *)0x0;
    }
    pFVar3 = GetTypeName<UWidget>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UWidget_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UWidget *)param_1;
  }
  pFVar3 = GetTypeName<UWidget>(&local_28);
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

// CastChecked<UWidgetBinaryStateRegistration,UObject> @ 1468e4d70

UWidgetBinaryStateRegistration * __cdecl
CastChecked<UWidgetBinaryStateRegistration,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UWidgetBinaryStateRegistration>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWidgetBinaryStateRegistration::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UWidgetBinaryStateRegistration *)param_1;
  }
  pFVar3 = GetTypeName<UWidgetBinaryStateRegistration>(&local_28);
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

// CastChecked<UWidgetEnumStateRegistration,UObject> @ 1468e4e30

UWidgetEnumStateRegistration * __cdecl
CastChecked<UWidgetEnumStateRegistration,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UWidgetEnumStateRegistration>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWidgetEnumStateRegistration::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UWidgetEnumStateRegistration *)param_1;
  }
  pFVar3 = GetTypeName<UWidgetEnumStateRegistration>(&local_28);
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

// ConstructItems<TObjectPtr<UUserWidget>,TObjectPtr<UUserWidget>,int> @ 1468e4ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
ConstructItems<TObjectPtr<UUserWidget>,TObjectPtr<UUserWidget>,int>
          (void *param_1,TObjectPtr<UUserWidget> *param_2,int param_3)

{
  TObjectPtr<UUserWidget> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UUserWidget>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UUserWidget>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UUserWidget *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FIntermediateMargin,int> @ 1468e51f0

void __cdecl
DefaultConstructItems<UE::MovieScene::FIntermediateMargin,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::MovieScene::FIntermediateWidgetTransform,int> @ 1468e5200

void __cdecl
DefaultConstructItems<UE::MovieScene::FIntermediateWidgetTransform,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::MovieScene::FWidgetMaterialPath,int> @ 1468e5210

void __cdecl
DefaultConstructItems<UE::MovieScene::FWidgetMaterialPath,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x18);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 2;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWidgetMaterialHandle,int> @ 1468e5240

void __cdecl DefaultConstructItems<FWidgetMaterialHandle,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>,int> @ 1468e58b0

void __cdecl
DestructItems<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>,int>
          (TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>
           *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,int> @ 1468e5900

void __cdecl
DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,int>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
           *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = &param_1->field_0x28;
    do {
      bVar1 = puVar4[0x10];
      if ((2 < (ulonglong)bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(puVar4);
      puVar4 = puVar4 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,int> @ 1468e5990

void __cdecl
DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,int>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
           *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = &param_1->field_0x40;
    do {
      bVar1 = puVar4[0x10];
      if ((2 < (ulonglong)bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(puVar4);
      puVar4 = puVar4 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWidgetAnimationBinding,int> @ 1468e5a20

void __cdecl
DestructItems<FWidgetAnimationBinding,int>(FWidgetAnimationBinding *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->DynamicBinding).ResolveParamsProperty.field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieScene::FWidgetMaterialPath,int> @ 1468e5a60

void __cdecl
DestructItems<UE::MovieScene::FWidgetMaterialPath,int>(FWidgetMaterialPath *param_1,int param_2)

{
  ForElementType<FName> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Path).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FName>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_&> @ 1468e6c40

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  if (param_2->field_0x1e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x1c);
  }
  if (param_2->field_0x3a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x38);
  }
  if (param_2->field_0x52 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x50);
  }
  if (param_2->field_0x6a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x68);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x9a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x98);
  }
  if (param_2->field_0xb2 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0xb0);
  }
  if (param_2->field_0xca != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0xc8);
  }
  MovieScene::FComponentMask::Set
            (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0xe0);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e6d30

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  if (param_2->field_0x1e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x1c);
  }
  if (param_2->field_0x3a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x38);
  }
  if (param_2->field_0x52 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x50);
  }
  if (param_2->field_0x6a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x68);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x9a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x98);
  }
  if (param_2->field_0xb2 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0xb0);
  }
  if (param_2->field_0xca != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0xc8);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e6e10

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>
::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  if (param_2->field_0x1e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x1c);
  }
  if (param_2->field_0x3a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x38);
  }
  if (param_2->field_0x52 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x50);
  }
  if (param_2->field_0x6a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x68);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x9a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x98);
  }
  if (param_2->field_0xb2 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0xb0);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e6ed0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  if (param_2->field_0x1e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x1c);
  }
  if (param_2->field_0x3a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x38);
  }
  if (param_2->field_0x52 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x50);
  }
  if (param_2->field_0x6a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x68);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x9a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x98);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e6f80

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  if (param_2->field_0x1e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x1c);
  }
  if (param_2->field_0x3a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x38);
  }
  if (param_2->field_0x52 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x50);
  }
  if (param_2->field_0x6a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x68);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e7010

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  if (param_2->field_0x1e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x1c);
  }
  if (param_2->field_0x3a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x38);
  }
  if (param_2->field_0x52 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x50);
  }
  if (param_2->field_0x6a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x68);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_&> @ 1468e7090

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
          *param_2)

{
  MovieScene::TAdd<FMovieScenePropertyBinding>::Apply
            ((TAdd<FMovieScenePropertyBinding> *)param_2,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FGuid>::Apply
            ((TAddConditional<FGuid> *)&param_2->field_0x1c,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x38,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x50,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x68,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x80,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x98,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0xb0,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0xc8,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e7150

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::TAdd<FMovieScenePropertyBinding>::Apply
            ((TAdd<FMovieScenePropertyBinding> *)param_2,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FGuid>::Apply
            ((TAddConditional<FGuid> *)&param_2->field_0x1c,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x38,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x50,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x68,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x80,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x98,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0xb0,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0xc8,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e7210

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>
::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::TAdd<FMovieScenePropertyBinding>::Apply
            ((TAdd<FMovieScenePropertyBinding> *)param_2,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FGuid>::Apply
            ((TAddConditional<FGuid> *)&param_2->field_0x1c,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x38,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x50,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x68,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x80,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x98,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0xb0,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e72c0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::TAdd<FMovieScenePropertyBinding>::Apply
            ((TAdd<FMovieScenePropertyBinding> *)param_2,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FGuid>::Apply
            ((TAddConditional<FGuid> *)&param_2->field_0x1c,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x38,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x50,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x68,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x80,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x98,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e7360

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::TAdd<FMovieScenePropertyBinding>::Apply
            ((TAdd<FMovieScenePropertyBinding> *)param_2,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FGuid>::Apply
            ((TAddConditional<FGuid> *)&param_2->field_0x1c,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x38,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x50,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x68,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x80,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&> @ 1468e73f0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_2)

{
  MovieScene::TAdd<FMovieScenePropertyBinding>::Apply
            ((TAdd<FMovieScenePropertyBinding> *)param_2,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FGuid>::Apply
            ((TAddConditional<FGuid> *)&param_2->field_0x1c,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x38,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x50,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
            ((TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&param_2->field_0x68,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// Enqueue<TRenderCommandTag<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::TSTR_FWriteRawDataToTexture91>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1468e9460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UAsyncTaskDownloadImage::HandleImageRequest_::__l21::TSTR_FWriteRawDataToTexture91>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::TSTR_FWriteRawDataToTexture91>
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
    goto LAB_1468e9888;
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
LAB_1468e9772:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1468e9772;
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
LAB_1468e9888:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindFProperty<FObjectProperty> @ 1468e98c0

FObjectProperty * __cdecl
FindFProperty<FObjectProperty>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FObjectProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FObjectProperty> local_28;
  
  if (param_2 == (FName)0x0) {
    return (FObjectProperty *)0x0;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_1468e9950;
  }
  local_28.bIncludeInterface = false;
LAB_1468e9950:
  TFieldIterator<FObjectProperty>::IterateToNext(&local_28);
  pFVar2 = (FObjectProperty *)local_28.Field;
  while( true ) {
    if (pFVar2 == (FObjectProperty *)0x0) {
      return (FObjectProperty *)0x0;
    }
    local_28.Field = (FField *)pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5.ComparisonIndex.Value = *(uint *)&pFVar2->field_0x20;
      FVar5.Number = *(uint *)&pFVar2->field_0x24;
    }
    if (FVar5 == param_2) break;
    local_28.Field = *(FField **)&pFVar2->field_0x18;
    TFieldIterator<FObjectProperty>::IterateToNext(&local_28);
    pFVar2 = (FObjectProperty *)local_28.Field;
  }
  return pFVar2;
}

// GetFullNameForCastLogError<UPanelSlot> @ 1468ed530

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UPanelSlot>(FString *__return_storage_ptr__,UPanelSlot *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UPanelWidget> @ 1468ed560

FString * __cdecl
GetFullNameForCastLogError<UPanelWidget>(FString *__return_storage_ptr__,UPanelWidget *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetPropertyValue<unsigned_char> @ 1468edf90

bool __cdecl
PropertyPathHelpers::GetPropertyValue<unsigned_char>
          (UObject *param_1,FCachedPropertyPath *param_2,uchar *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FPropertyPathResolver local_28;
  uchar *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved(param_2);
  if (bVar2) {
    if (param_1 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
    if (param_1 != pUVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer == InPropertyPath.GetCachedContainer()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FCachedPropertyPath::IsResolved(param_2);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPropertyPath.IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    if (pUVar5 == (UFunction *)0x0) {
      pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
      bVar2 = false;
      if (pvVar6 != (void *)0x0) {
        bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<unsigned_char>::GetValue
                          (param_2,param_3,param_4);
      }
    }
    else {
      pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
      bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<unsigned_char,UObject>::
              CallGetterFunction(param_1,pUVar5,param_3);
    }
  }
  else {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_E_PropertyPathHelpersInternal__6B_;
    local_20 = param_3;
    local_18 = param_4;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath(param_1,param_2,&local_28);
  }
  return bVar2;
}

// GetPropertyValue<double> @ 1468ee100

bool __cdecl
PropertyPathHelpers::GetPropertyValue<double>
          (UObject *param_1,FCachedPropertyPath *param_2,double *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FPropertyPathResolver local_28;
  double *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved(param_2);
  if (bVar2) {
    if (param_1 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
    if (param_1 != pUVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer == InPropertyPath.GetCachedContainer()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FCachedPropertyPath::IsResolved(param_2);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPropertyPath.IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    if (pUVar5 == (UFunction *)0x0) {
      pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
      bVar2 = false;
      if (pvVar6 != (void *)0x0) {
        bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<double>::GetValue
                          (param_2,param_3,param_4);
      }
    }
    else {
      pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
      bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<double,UObject>::
              CallGetterFunction(param_1,pUVar5,param_3);
    }
  }
  else {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_N_PropertyPathHelpersInternal__6B_;
    local_20 = param_3;
    local_18 = param_4;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath(param_1,param_2,&local_28);
  }
  return bVar2;
}

// GetPropertyValue<UObject_*> @ 1468ee270

bool __cdecl
PropertyPathHelpers::GetPropertyValue<UObject_*>
          (UObject *param_1,FCachedPropertyPath *param_2,UObject **param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FPropertyPathResolver local_28;
  UObject **local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved(param_2);
  if (bVar2) {
    if (param_1 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
    if (param_1 != pUVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer == InPropertyPath.GetCachedContainer()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FCachedPropertyPath::IsResolved(param_2);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPropertyPath.IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    if (pUVar5 == (UFunction *)0x0) {
      pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
      bVar2 = false;
      if (pvVar6 != (void *)0x0) {
        bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<UObject_*>::GetValue
                          (param_2,param_3,param_4);
      }
    }
    else {
      pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
      bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<UObject_*,UObject>::
              CallGetterFunction(param_1,pUVar5,param_3);
    }
  }
  else {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_PEAVUObject___PropertyPathHelpersInternal__6B_;
    local_20 = param_3;
    local_18 = param_4;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath(param_1,param_2,&local_28);
  }
  return bVar2;
}

// GetPropertyValue<FLinearColor> @ 1468ee3e0

bool __cdecl
PropertyPathHelpers::GetPropertyValue<FLinearColor>
          (UObject *param_1,FCachedPropertyPath *param_2,FLinearColor *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FPropertyPathResolver local_28;
  FLinearColor *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved(param_2);
  if (bVar2) {
    if (param_1 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
    if (param_1 != pUVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer == InPropertyPath.GetCachedContainer()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FCachedPropertyPath::IsResolved(param_2);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPropertyPath.IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    if (pUVar5 == (UFunction *)0x0) {
      pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
      bVar2 = false;
      if (pvVar6 != (void *)0x0) {
        bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FLinearColor>::GetValue
                          (param_2,param_3,param_4);
      }
    }
    else {
      pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
      bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FLinearColor,UObject>::
              CallGetterFunction(param_1,pUVar5,param_3);
    }
  }
  else {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_UFLinearColor___PropertyPathHelpersInternal__6B_;
    local_20 = param_3;
    local_18 = param_4;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath(param_1,param_2,&local_28);
  }
  return bVar2;
}

// GetPropertyValue<FSlateBrush> @ 1468ee550

bool __cdecl
PropertyPathHelpers::GetPropertyValue<FSlateBrush>
          (UObject *param_1,FCachedPropertyPath *param_2,FSlateBrush *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FPropertyPathResolver local_28;
  FSlateBrush *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved(param_2);
  if (bVar2) {
    if (param_1 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
    if (param_1 != pUVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer == InPropertyPath.GetCachedContainer()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FCachedPropertyPath::IsResolved(param_2);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPropertyPath.IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    if (pUVar5 == (UFunction *)0x0) {
      pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
      bVar2 = false;
      if (pvVar6 != (void *)0x0) {
        bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FSlateBrush>::GetValue
                          (param_2,param_3,param_4);
      }
    }
    else {
      pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
      bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FSlateBrush,UObject>::
              CallGetterFunction(param_1,pUVar5,param_3);
    }
  }
  else {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_UFSlateBrush___PropertyPathHelpersInternal__6B_;
    local_20 = param_3;
    local_18 = param_4;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath(param_1,param_2,&local_28);
  }
  return bVar2;
}

// GetPropertyValue<FSlateColor> @ 1468ee6c0

bool __cdecl
PropertyPathHelpers::GetPropertyValue<FSlateColor>
          (UObject *param_1,FCachedPropertyPath *param_2,FSlateColor *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FPropertyPathResolver local_28;
  FSlateColor *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved(param_2);
  if (bVar2) {
    if (param_1 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
    if (param_1 != pUVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer == InPropertyPath.GetCachedContainer()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FCachedPropertyPath::IsResolved(param_2);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPropertyPath.IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    if (pUVar5 == (UFunction *)0x0) {
      pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
      bVar2 = false;
      if (pvVar6 != (void *)0x0) {
        bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FSlateColor>::GetValue
                          (param_2,param_3,param_4);
      }
    }
    else {
      pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
      bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FSlateColor,UObject>::
              CallGetterFunction(param_1,pUVar5,param_3);
    }
  }
  else {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_UFSlateColor___PropertyPathHelpersInternal__6B_;
    local_20 = param_3;
    local_18 = param_4;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath(param_1,param_2,&local_28);
  }
  return bVar2;
}

// GetPropertyValue<FText> @ 1468ee830

bool __cdecl
PropertyPathHelpers::GetPropertyValue<FText>
          (UObject *param_1,FCachedPropertyPath *param_2,FText *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  FPropertyPathResolver local_28;
  FText *local_20;
  FProperty **local_18;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsFullyResolved(param_2);
  if (bVar2) {
    if (param_1 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
    if (param_1 != pUVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContainer == InPropertyPath.GetCachedContainer()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FCachedPropertyPath::IsResolved(param_2);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPropertyPath.IsResolved()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                         ,0x18c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    if (pUVar5 == (UFunction *)0x0) {
      pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
      bVar2 = false;
      if (pvVar6 != (void *)0x0) {
        bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FText>::GetValue
                          (param_2,param_3,param_4);
      }
    }
    else {
      pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
      bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FText,UObject>::
              CallGetterFunction(param_1,pUVar5,param_3);
    }
  }
  else {
    local_28 = (FPropertyPathResolver)
               &___7__FInternalGetterResolver_VFText___PropertyPathHelpersInternal__6B_;
    local_20 = param_3;
    local_18 = param_4;
    bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath(param_1,param_2,&local_28);
  }
  return bVar2;
}

// GetPropertyValueFast<unsigned_char> @ 1468ee9a0

bool __cdecl
PropertyPathHelpers::GetPropertyValueFast<unsigned_char>
          (UObject *param_1,FCachedPropertyPath *param_2,uchar *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved(param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar5 == (UFunction *)0x0) {
    pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar2 = false;
    if (pvVar6 != (void *)0x0) {
      bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<unsigned_char>::GetValue
                        (param_2,param_3,param_4);
    }
  }
  else {
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<unsigned_char,UObject>::
            CallGetterFunction(param_1,pUVar5,param_3);
  }
  return bVar2;
}

// GetPropertyValueFast<double> @ 1468eeab0

bool __cdecl
PropertyPathHelpers::GetPropertyValueFast<double>
          (UObject *param_1,FCachedPropertyPath *param_2,double *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved(param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar5 == (UFunction *)0x0) {
    pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar2 = false;
    if (pvVar6 != (void *)0x0) {
      bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<double>::GetValue
                        (param_2,param_3,param_4);
    }
  }
  else {
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<double,UObject>::
            CallGetterFunction(param_1,pUVar5,param_3);
  }
  return bVar2;
}

// GetPropertyValueFast<UObject_*> @ 1468eebc0

bool __cdecl
PropertyPathHelpers::GetPropertyValueFast<UObject_*>
          (UObject *param_1,FCachedPropertyPath *param_2,UObject **param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved(param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar5 == (UFunction *)0x0) {
    pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar2 = false;
    if (pvVar6 != (void *)0x0) {
      bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<UObject_*>::GetValue
                        (param_2,param_3,param_4);
    }
  }
  else {
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<UObject_*,UObject>::
            CallGetterFunction(param_1,pUVar5,param_3);
  }
  return bVar2;
}

// GetPropertyValueFast<FLinearColor> @ 1468eecd0

bool __cdecl
PropertyPathHelpers::GetPropertyValueFast<FLinearColor>
          (UObject *param_1,FCachedPropertyPath *param_2,FLinearColor *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved(param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar5 == (UFunction *)0x0) {
    pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar2 = false;
    if (pvVar6 != (void *)0x0) {
      bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FLinearColor>::GetValue
                        (param_2,param_3,param_4);
    }
  }
  else {
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FLinearColor,UObject>::
            CallGetterFunction(param_1,pUVar5,param_3);
  }
  return bVar2;
}

// GetPropertyValueFast<FSlateBrush> @ 1468eede0

bool __cdecl
PropertyPathHelpers::GetPropertyValueFast<FSlateBrush>
          (UObject *param_1,FCachedPropertyPath *param_2,FSlateBrush *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved(param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar5 == (UFunction *)0x0) {
    pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar2 = false;
    if (pvVar6 != (void *)0x0) {
      bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FSlateBrush>::GetValue
                        (param_2,param_3,param_4);
    }
  }
  else {
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FSlateBrush,UObject>::
            CallGetterFunction(param_1,pUVar5,param_3);
  }
  return bVar2;
}

// GetPropertyValueFast<FSlateColor> @ 1468eeef0

bool __cdecl
PropertyPathHelpers::GetPropertyValueFast<FSlateColor>
          (UObject *param_1,FCachedPropertyPath *param_2,FSlateColor *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved(param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar5 == (UFunction *)0x0) {
    pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar2 = false;
    if (pvVar6 != (void *)0x0) {
      bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FSlateColor>::GetValue
                        (param_2,param_3,param_4);
    }
  }
  else {
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FSlateColor,UObject>::
            CallGetterFunction(param_1,pUVar5,param_3);
  }
  return bVar2;
}

// GetPropertyValueFast<FText> @ 1468ef000

bool __cdecl
PropertyPathHelpers::GetPropertyValueFast<FText>
          (UObject *param_1,FCachedPropertyPath *param_2,FText *param_3,FProperty **param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = FCachedPropertyPath::GetCachedContainer(param_2);
  if (param_1 != pUVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContainer == InPropertyPath.GetCachedContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FCachedPropertyPath::IsResolved(param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPropertyPath.IsResolved()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar5 == (UFunction *)0x0) {
    pvVar6 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar2 = false;
    if (pvVar6 != (void *)0x0) {
      bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<FText>::GetValue
                        (param_2,param_3,param_4);
    }
  }
  else {
    pUVar5 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FText,UObject>::
            CallGetterFunction(param_1,pUVar5,param_3);
  }
  return bVar2;
}

// GetTypeHash<FWidgetAnimationState,1> @ 1468ef110

/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl GetTypeHash<FWidgetAnimationState,1>(TWeakPtr<FWidgetAnimationState,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<UWidget_const_> @ 1468ef140

FString * __cdecl GetTypeName<UWidget_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UWidget_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBackgroundBlur> @ 1468ef180

FString * __cdecl GetTypeName<UBackgroundBlur>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UBackgroundBlur::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBackgroundBlurSlot> @ 1468ef1c0

FString * __cdecl GetTypeName<UBackgroundBlurSlot>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UBackgroundBlurSlot::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBorder> @ 1468ef200

FString * __cdecl GetTypeName<UBorder>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UBorder::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBorderSlot> @ 1468ef240

FString * __cdecl GetTypeName<UBorderSlot>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UBorderSlot::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UButtonSlot> @ 1468ef280

FString * __cdecl GetTypeName<UButtonSlot>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UButtonSlot::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UCanvasPanelSlot> @ 1468ef2c0

FString * __cdecl GetTypeName<UCanvasPanelSlot>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCanvasPanelSlot::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UUserWidget> @ 1468ef300

FString * __cdecl GetTypeName<UUserWidget>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UUserWidget_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWidget> @ 1468ef340

FString * __cdecl GetTypeName<UWidget>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UWidget_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWidgetBinaryStateRegistration> @ 1468ef380

FString * __cdecl GetTypeName<UWidgetBinaryStateRegistration>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWidgetBinaryStateRegistration::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWidgetEnumStateRegistration> @ 1468ef3c0

FString * __cdecl GetTypeName<UWidgetEnumStateRegistration>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWidgetEnumStateRegistration::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValue<unsigned_char,UObject> @ 1468ef5a0

bool __cdecl
PropertyPathHelpersInternal::GetValue<unsigned_char,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FProperty **param_3,uchar *param_4)

{
  int iVar1;
  EClassCastFlags EVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  ulonglong *puVar9;
  FFieldClass *pFVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  longlong lVar13;
  void *pvVar14;
  FFieldObjectUnion FVar15;
  UFunction *pUVar16;
  FFieldObjectUnion local_30;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
  if ((!bVar5) || ((FProperty *)local_30.Field == (FProperty *)0x0)) {
    pUVar11 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pUVar11);
    if ((bVar5) &&
       (pUVar16 = (UFunction *)(local_30.Unknown & 0xfffffffffffffffe), pUVar16 != (UFunction *)0x0)
       ) {
      FCachedPropertyPath::ResolveLeaf(param_2,pUVar16);
      bVar5 = FCallGetterFunctionHelper<unsigned_char,UObject>::CallGetterFunction
                        (param_1,pUVar16,param_4);
      return bVar5;
    }
    pFVar8 = FProperty::StaticClass();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
    if (!bVar5) {
      return false;
    }
    if ((FProperty *)local_30.Field == (FProperty *)0x0) {
      return false;
    }
    bVar5 = FGetValueHelper<unsigned_char,UObject>::GetValue(param_1,param_2,param_4,param_3);
    return bVar5;
  }
  if (iVar7 != -1) {
    puVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)local_30.Field,param_1,0)
    ;
    lVar4 = ((FProperty *)(local_30.Unknown + 0x70))->_padding_;
    (**(code **)(**(longlong **)(local_30.Unknown + 0x78) + 0x168))();
    lVar13 = *(longlong *)(local_30.Unknown + 0x78);
    iVar1 = *(int *)(lVar13 + 0x34);
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((lVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (iVar7 < 0) {
      return false;
    }
    if ((int)puVar9[1] <= iVar7) {
      return false;
    }
    lVar13 = *(longlong *)(local_30.Unknown + 0x78);
    if (lVar13 != 0) {
      if ((*(ulonglong *)(*(longlong *)(lVar13 + 8) + 0x18) & 0x1000000000000) == 0) {
        if ((lVar13 != 0) && ((*(uint *)(*(longlong *)(lVar13 + 8) + 0x18) >> 0x11 & 1) != 0)) {
          bVar5 = *(char *)(lVar13 + 0x73) != -1;
          goto LAB_1468ef6e0;
        }
      }
      else {
        lVar13 = *(longlong *)(lVar13 + 0x70);
      }
    }
    pFVar8 = *(FFieldClass **)(lVar13 + 8);
    pFVar10 = FByteProperty::StaticClass();
    bVar5 = pFVar8 == pFVar10;
LAB_1468ef6e0:
    if (!bVar5) {
      return false;
    }
    lVar13 = *(longlong *)(local_30.Unknown + 0x78);
    if ((lVar13 == 0) || ((*(uint *)(*(longlong *)(lVar13 + 8) + 0x18) >> 0x11 & 1) == 0)) {
      bVar5 = *(int *)(lVar13 + 0x34) == 1;
    }
    else {
      bVar5 = *(char *)(lVar13 + 0x73) != -1;
    }
    if (!bVar5) {
      return false;
    }
    if ((int)puVar9[1] == 0) {
      return false;
    }
    uVar12 = *puVar9;
    if (((lVar4 & 1) != 0) && ((uVar12 & 1) != 0)) {
      uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar9;
    }
    pvVar14 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar12);
    if (pvVar14 == (void *)0x0) {
      return false;
    }
    FCachedPropertyPath::ResolveLeaf(param_2,pvVar14);
    FProperty::CopySingleValue(*(FProperty **)(local_30.Unknown + 0x78),param_4,pvVar14);
    *param_3 = *(FProperty **)(local_30.Unknown + 0x78);
    return true;
  }
  EVar2 = (local_30.Field)->ClassPrivate->CastFlags;
  if ((EVar2 >> 0x30 & 1) == 0) {
    FVar15 = local_30;
    if ((EVar2 >> 0x11 & 1) != 0) {
      bVar5 = *(char *)(local_30.Unknown + 0x73) != -1;
      goto LAB_1468ef7b2;
    }
  }
  else {
    FVar15.Field = ((FFieldObjectUnion *)(local_30.Unknown + 0x70))->Field;
  }
  pFVar8 = (FVar15.Field)->ClassPrivate;
  pFVar10 = FByteProperty::StaticClass();
  bVar5 = pFVar8 == pFVar10;
LAB_1468ef7b2:
  if (bVar5) {
    if (((uint)(int)(local_30.Field)->ClassPrivate->CastFlags >> 0x11 & 1) == 0) {
      bVar5 = *(int *)(local_30.Unknown + 0x34) == 1;
    }
    else {
      bVar5 = *(char *)(local_30.Unknown + 0x73) != -1;
    }
    if ((bVar5) &&
       (pvVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            ((FProperty *)local_30.Field,param_1,0), pvVar14 != (void *)0x0)) {
      FCachedPropertyPath::ResolveLeaf(param_2,pvVar14);
      FProperty::CopySingleValue((FProperty *)local_30.Field,param_4,pvVar14);
      *param_3 = (FProperty *)local_30;
      return true;
    }
  }
  return false;
}

// GetValue<unsigned_char,void> @ 1468ef8c0

bool __cdecl
PropertyPathHelpersInternal::GetValue<unsigned_char,void>
          (void *param_1,FCachedPropertyPath *param_2,FProperty **param_3,uchar *param_4)

{
  int iVar1;
  EClassCastFlags EVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  FFieldClass *pFVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  longlong lVar12;
  void *pvVar13;
  FFieldObjectUnion FVar14;
  ulonglong *puVar15;
  FFieldObjectUnion local_48 [2];
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pFVar8);
  if ((!bVar5) || ((FProperty *)local_48[0].Field == (FProperty *)0x0)) {
    pUVar10 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pUVar10);
    if ((bVar5) && ((UFunction *)(local_48[0].Unknown & 0xfffffffffffffffe) != (UFunction *)0x0)) {
      FCachedPropertyPath::ResolveLeaf
                (param_2,(UFunction *)(local_48[0].Unknown & 0xfffffffffffffffe));
      return false;
    }
    pFVar8 = FProperty::StaticClass();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pFVar8);
    if (!bVar5) {
      return false;
    }
    if ((FProperty *)local_48[0].Field == (FProperty *)0x0) {
      return false;
    }
    bVar5 = FGetValueHelper<unsigned_char,void>::GetValue(param_1,param_2,param_4,param_3);
    return bVar5;
  }
  if (iVar7 != -1) {
    if ((*(int *)(local_48[0].Unknown + 0x30) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar1 = *(int *)(local_48[0].Unknown + 0x44);
    lVar4 = ((FProperty *)(local_48[0].Unknown + 0x70))->_padding_;
    (**(code **)(**(longlong **)(local_48[0].Unknown + 0x78) + 0x168))();
    lVar12 = *(longlong *)(local_48[0].Unknown + 0x78);
    puVar15 = (ulonglong *)((longlong)param_1 + (longlong)iVar1);
    iVar1 = *(int *)(lVar12 + 0x34);
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((lVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (iVar7 < 0) {
      return false;
    }
    if ((int)puVar15[1] <= iVar7) {
      return false;
    }
    lVar12 = *(longlong *)(local_48[0].Unknown + 0x78);
    if (lVar12 != 0) {
      if ((*(ulonglong *)(*(longlong *)(lVar12 + 8) + 0x18) & 0x1000000000000) == 0) {
        if ((lVar12 != 0) && ((*(uint *)(*(longlong *)(lVar12 + 8) + 0x18) >> 0x11 & 1) != 0)) {
          bVar5 = *(char *)(lVar12 + 0x73) != -1;
          goto LAB_1468efa5a;
        }
      }
      else {
        lVar12 = *(longlong *)(lVar12 + 0x70);
      }
    }
    pFVar8 = *(FFieldClass **)(lVar12 + 8);
    pFVar9 = FByteProperty::StaticClass();
    bVar5 = pFVar8 == pFVar9;
LAB_1468efa5a:
    if (!bVar5) {
      return false;
    }
    lVar12 = *(longlong *)(local_48[0].Unknown + 0x78);
    if ((lVar12 == 0) || ((*(uint *)(*(longlong *)(lVar12 + 8) + 0x18) >> 0x11 & 1) == 0)) {
      bVar5 = *(int *)(lVar12 + 0x34) == 1;
    }
    else {
      bVar5 = *(char *)(lVar12 + 0x73) != -1;
    }
    if (!bVar5) {
      return false;
    }
    if ((int)puVar15[1] == 0) {
      return false;
    }
    uVar11 = *puVar15;
    if (((lVar4 & 1) != 0) && ((uVar11 & 1) != 0)) {
      uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar15;
    }
    pvVar13 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar11);
    if (pvVar13 == (void *)0x0) {
      return false;
    }
    FCachedPropertyPath::ResolveLeaf(param_2,pvVar13);
    FProperty::CopySingleValue(*(FProperty **)(local_48[0].Unknown + 0x78),param_4,pvVar13);
    *param_3 = *(FProperty **)(local_48[0].Unknown + 0x78);
    return true;
  }
  EVar2 = (local_48[0].Field)->ClassPrivate->CastFlags;
  if ((EVar2 >> 0x30 & 1) == 0) {
    FVar14 = local_48[0];
    if ((EVar2 >> 0x11 & 1) != 0) {
      bVar5 = *(char *)(local_48[0].Unknown + 0x73) != -1;
      goto LAB_1468efb36;
    }
  }
  else {
    FVar14.Field = ((FFieldObjectUnion *)(local_48[0].Unknown + 0x70))->Field;
  }
  pFVar8 = (FVar14.Field)->ClassPrivate;
  pFVar9 = FByteProperty::StaticClass();
  bVar5 = pFVar8 == pFVar9;
LAB_1468efb36:
  if (bVar5) {
    if (((uint)(int)(local_48[0].Field)->ClassPrivate->CastFlags >> 0x11 & 1) == 0) {
      bVar5 = *(int *)(local_48[0].Unknown + 0x34) == 1;
    }
    else {
      bVar5 = *(char *)(local_48[0].Unknown + 0x73) != -1;
    }
    if (bVar5) {
      if ((*(int *)(local_48[0].Unknown + 0x30) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pvVar13 = (void *)((longlong)*(int *)(local_48[0].Unknown + 0x44) + (longlong)param_1);
      if (pvVar13 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar13);
        FProperty::CopySingleValue((FProperty *)local_48[0].Field,param_4,pvVar13);
        *param_3 = (FProperty *)local_48[0];
        return true;
      }
    }
  }
  return false;
}

// GetValue<double,UObject> @ 1468effc0

bool __cdecl
PropertyPathHelpersInternal::GetValue<double,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FProperty **param_3,double *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  ulonglong *puVar9;
  FFieldClass *pFVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  void *pvVar13;
  UFunction *pUVar14;
  FFieldObjectUnion local_30;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
  if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      pFVar8 = (local_30.Field)->ClassPrivate;
      pFVar10 = FDoubleProperty::StaticClass();
      if (pFVar8 == pFVar10) {
        if (((local_30.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)
        {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 8;
        }
        else {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 1;
        }
        if ((bVar5) &&
           (pvVar13 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                ((FProperty *)local_30.Field,param_1,0), pvVar13 != (void *)0x0)) {
          FCachedPropertyPath::ResolveLeaf(param_2,pvVar13);
          FProperty::CopySingleValue((FProperty *)local_30.Field,param_4,pvVar13);
          *param_3 = (FProperty *)local_30;
          return true;
        }
      }
    }
    else {
      puVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)local_30.Field,param_1,0);
      lVar4 = ((FProperty *)(local_30.Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_30.Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_30.Unknown + 0x78);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((-1 < iVar7) && (iVar7 < (int)puVar9[1])) &&
         (pFVar8 = *(FFieldClass **)(*(longlong *)(local_30.Unknown + 0x78) + 8),
         pFVar10 = FDoubleProperty::StaticClass(), pFVar8 == pFVar10)) {
        lVar2 = *(longlong *)(local_30.Unknown + 0x78);
        if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
          bVar5 = *(int *)(lVar2 + 0x34) == 8;
        }
        else {
          bVar5 = *(int *)(lVar2 + 0x34) == 1;
        }
        if ((bVar5) && ((int)puVar9[1] != 0)) {
          uVar12 = *puVar9;
          if (((lVar4 & 1) != 0) && ((uVar12 & 1) != 0)) {
            uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar9;
          }
          pvVar13 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar12);
          if (pvVar13 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar13);
            FProperty::CopySingleValue(*(FProperty **)(local_30.Unknown + 0x78),param_4,pvVar13);
            *param_3 = *(FProperty **)(local_30.Unknown + 0x78);
            return true;
          }
        }
      }
    }
  }
  else {
    pUVar11 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pUVar11);
    if ((bVar5) &&
       (pUVar14 = (UFunction *)(local_30.Unknown & 0xfffffffffffffffe), pUVar14 != (UFunction *)0x0)
       ) {
      FCachedPropertyPath::ResolveLeaf(param_2,pUVar14);
      bVar5 = FCallGetterFunctionHelper<double,UObject>::CallGetterFunction(param_1,pUVar14,param_4)
      ;
      return bVar5;
    }
    pFVar8 = FProperty::StaticClass();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
    if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
      bVar5 = FGetValueHelper<double,UObject>::GetValue(param_1,param_2,param_4,param_3);
      return bVar5;
    }
  }
  return false;
}

// GetValue<double,void> @ 1468f0270

bool __cdecl
PropertyPathHelpersInternal::GetValue<double,void>
          (void *param_1,FCachedPropertyPath *param_2,FProperty **param_3,double *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  FFieldClass *pFVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  void *pvVar12;
  ulonglong *puVar13;
  FFieldObjectUnion local_30;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
  if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      pFVar8 = (local_30.Field)->ClassPrivate;
      pFVar9 = FDoubleProperty::StaticClass();
      if (pFVar8 == pFVar9) {
        if (((local_30.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)
        {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 8;
        }
        else {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 1;
        }
        if (bVar5) {
          if ((*(int *)(local_30.Unknown + 0x30) < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pvVar12 = (void *)((longlong)*(int *)(local_30.Unknown + 0x44) + (longlong)param_1);
          if (pvVar12 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar12);
            FProperty::CopySingleValue((FProperty *)local_30.Field,param_4,pvVar12);
            *param_3 = (FProperty *)local_30;
            return true;
          }
        }
      }
    }
    else {
      if ((*(int *)(local_30.Unknown + 0x30) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar1 = *(int *)(local_30.Unknown + 0x44);
      lVar4 = ((FProperty *)(local_30.Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_30.Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_30.Unknown + 0x78);
      puVar13 = (ulonglong *)((longlong)param_1 + (longlong)iVar1);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((-1 < iVar7) && (iVar7 < (int)puVar13[1])) &&
         (pFVar8 = *(FFieldClass **)(*(longlong *)(local_30.Unknown + 0x78) + 8),
         pFVar9 = FDoubleProperty::StaticClass(), pFVar8 == pFVar9)) {
        lVar2 = *(longlong *)(local_30.Unknown + 0x78);
        if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
          bVar5 = *(int *)(lVar2 + 0x34) == 8;
        }
        else {
          bVar5 = *(int *)(lVar2 + 0x34) == 1;
        }
        if ((bVar5) && ((int)puVar13[1] != 0)) {
          uVar11 = *puVar13;
          if (((lVar4 & 1) != 0) && ((uVar11 & 1) != 0)) {
            uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar13;
          }
          pvVar12 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar11);
          if (pvVar12 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar12);
            FProperty::CopySingleValue(*(FProperty **)(local_30.Unknown + 0x78),param_4,pvVar12);
            *param_3 = *(FProperty **)(local_30.Unknown + 0x78);
            return true;
          }
        }
      }
    }
  }
  else {
    pUVar10 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pUVar10);
    if ((bVar5) && ((UFunction *)(local_30.Unknown & 0xfffffffffffffffe) != (UFunction *)0x0)) {
      FCachedPropertyPath::ResolveLeaf(param_2,(UFunction *)(local_30.Unknown & 0xfffffffffffffffe))
      ;
    }
    else {
      pFVar8 = FProperty::StaticClass();
      bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
      if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
        bVar5 = FGetValueHelper<double,void>::GetValue(param_1,param_2,param_4,param_3);
        return bVar5;
      }
    }
  }
  return false;
}

// GetValue<FLinearColor,UObject> @ 1468f0900

bool __cdecl
PropertyPathHelpersInternal::GetValue<FLinearColor,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FProperty **param_3,FLinearColor *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  FPropertyPathSegment *pFVar9;
  FFieldClass *pFVar10;
  ulonglong *puVar11;
  UClass *pUVar12;
  FFieldVariant FVar13;
  ulonglong uVar14;
  UFunction *pUVar15;
  FProperty *this;
  void *pvVar16;
  FFieldObjectUnion local_40 [3];
  
  pFVar9 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar8 = FPropertyPathSegment::GetArrayIndex(pFVar9);
  FPropertyPathSegment::GetField(pFVar9);
  pFVar10 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)local_40,pFVar10);
  if ((bVar5) && ((FProperty *)local_40[0].Field != (FProperty *)0x0)) {
    if (iVar8 == -1) {
      bVar5 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>
                        ((FProperty *)local_40[0].Field);
      if (bVar5) {
        if (((local_40[0].Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) ==
            CASTCLASS_None) {
          bVar5 = *(int *)(local_40[0].Unknown + 0x34) == 0x10;
        }
        else {
          bVar5 = *(int *)(local_40[0].Unknown + 0x34) == 1;
        }
        if ((bVar5) &&
           (pvVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                ((FProperty *)local_40[0].Field,param_1,0), pvVar16 != (void *)0x0))
        {
          FCachedPropertyPath::ResolveLeaf(param_2,pvVar16);
          FProperty::CopySingleValue((FProperty *)local_40[0].Field,param_4,pvVar16);
          *param_3 = (FProperty *)local_40[0];
          return true;
        }
      }
    }
    else {
      puVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)local_40[0].Field,param_1,0);
      lVar4 = ((FProperty *)(local_40[0].Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_40[0].Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_40[0].Unknown + 0x78);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((-1 < iVar8) && (iVar8 < (int)puVar11[1])) &&
         (bVar5 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>
                            (*(FProperty **)(local_40[0].Unknown + 0x78)), bVar5)) {
        lVar2 = *(longlong *)(local_40[0].Unknown + 0x78);
        if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
          bVar5 = *(int *)(lVar2 + 0x34) == 0x10;
        }
        else {
          bVar5 = *(int *)(lVar2 + 0x34) == 1;
        }
        if ((bVar5) && ((int)puVar11[1] != 0)) {
          uVar14 = *puVar11;
          if (((lVar4 & 1) != 0) && ((uVar14 & 1) != 0)) {
            uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)puVar11;
          }
          pvVar16 = (void *)((longlong)iVar1 * (longlong)iVar8 + uVar14);
          if (pvVar16 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar16);
            FProperty::CopySingleValue(*(FProperty **)(local_40[0].Unknown + 0x78),param_4,pvVar16);
            *param_3 = *(FProperty **)(local_40[0].Unknown + 0x78);
            return true;
          }
        }
      }
    }
  }
  else {
    pUVar12 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)local_40,pUVar12);
    if ((bVar5) &&
       (pUVar15 = (UFunction *)(local_40[0].Unknown & 0xfffffffffffffffe),
       pUVar15 != (UFunction *)0x0)) {
      FCachedPropertyPath::ResolveLeaf(param_2,pUVar15);
      bVar5 = FCallGetterFunctionHelper<FLinearColor,UObject>::CallGetterFunction
                        (param_1,pUVar15,param_4);
      return bVar5;
    }
    pFVar10 = FProperty::StaticClass();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)local_40,pFVar10);
    if ((bVar5) && ((FProperty *)local_40[0].Field != (FProperty *)0x0)) {
      pFVar9 = FCachedPropertyPath::GetLastSegment(param_2);
      iVar8 = FPropertyPathSegment::GetArrayIndex(pFVar9);
      FVar13 = FPropertyPathSegment::GetField(pFVar9);
      if ((((*(byte *)FVar13.Container & 1) != 0) ||
          ((this = *(FProperty **)FVar13.Container, this == (FProperty *)0x0 ||
           ((*(uint *)(this->_padding_ + 0x18) >> 0xf & 1) == 0)))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x472,L"CastFieldChecked failed with 0x%016llx"),
         this = (FProperty *)0x0, bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      bVar5 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>(this);
      if (bVar5) {
        if (iVar8 == -1) {
          iVar8 = 0;
        }
        if ((this == (FProperty *)0x0) || ((*(byte *)(this->_padding_ + 0x18) & 0x40) == 0)) {
          bVar5 = this->ElementSize == 0x10;
        }
        else {
          bVar5 = this->ElementSize == 1;
        }
        if ((bVar5) && (iVar8 < this->ArrayDim)) {
          cVar7 = (**(code **)(this->_padding_ + 0x78))(this);
          if (cVar7 != '\0') {
            (**(code **)(this->_padding_ + 0x90))(this,param_1,param_4);
            *param_3 = this;
            return true;
          }
          pvVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar8);
          if (pvVar16 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar16);
            CallParentGetters(param_4,param_2,pvVar16);
          }
          *param_3 = this;
          return true;
        }
      }
    }
  }
  return false;
}

// GetValue<FLinearColor,void> @ 1468f0cb0

bool __cdecl
PropertyPathHelpersInternal::GetValue<FLinearColor,void>
          (void *param_1,FCachedPropertyPath *param_2,FProperty **param_3,FLinearColor *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  void *pvVar12;
  FFieldObjectUnion local_30;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
  if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      bVar5 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>((FProperty *)local_30.Field);
      if (bVar5) {
        if (((local_30.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)
        {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 0x10;
        }
        else {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 1;
        }
        if (bVar5) {
          if ((*(int *)(local_30.Unknown + 0x30) < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pvVar12 = (void *)((longlong)*(int *)(local_30.Unknown + 0x44) + (longlong)param_1);
          if (pvVar12 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar12);
            FProperty::CopySingleValue((FProperty *)local_30.Field,param_4,pvVar12);
            *param_3 = (FProperty *)local_30;
            return true;
          }
        }
      }
    }
    else {
      if ((*(int *)(local_30.Unknown + 0x30) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar1 = *(int *)(local_30.Unknown + 0x44);
      lVar4 = ((FProperty *)(local_30.Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_30.Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_30.Unknown + 0x78);
      puVar11 = (ulonglong *)((longlong)iVar1 + (longlong)param_1);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((-1 < iVar7) && (iVar7 < (int)puVar11[1])) &&
         (bVar5 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>
                            (*(FProperty **)(local_30.Unknown + 0x78)), bVar5)) {
        lVar2 = *(longlong *)(local_30.Unknown + 0x78);
        if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
          bVar5 = *(int *)(lVar2 + 0x34) == 0x10;
        }
        else {
          bVar5 = *(int *)(lVar2 + 0x34) == 1;
        }
        if ((bVar5) && ((int)puVar11[1] != 0)) {
          uVar10 = *puVar11;
          if (((lVar4 & 1) != 0) && ((uVar10 & 1) != 0)) {
            uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar11;
          }
          pvVar12 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar10);
          if (pvVar12 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar12);
            FProperty::CopySingleValue(*(FProperty **)(local_30.Unknown + 0x78),param_4,pvVar12);
            *param_3 = *(FProperty **)(local_30.Unknown + 0x78);
            return true;
          }
        }
      }
    }
  }
  else {
    pUVar9 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pUVar9);
    if ((bVar5) && ((UFunction *)(local_30.Unknown & 0xfffffffffffffffe) != (UFunction *)0x0)) {
      FCachedPropertyPath::ResolveLeaf(param_2,(UFunction *)(local_30.Unknown & 0xfffffffffffffffe))
      ;
    }
    else {
      pFVar8 = FProperty::StaticClass();
      bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
      if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
        bVar5 = FGetValueHelper<FLinearColor,void>::GetValue(param_1,param_2,param_4,param_3);
        return bVar5;
      }
    }
  }
  return false;
}

// GetValue<FSlateBrush,UObject> @ 1468f1000

bool __cdecl
PropertyPathHelpersInternal::GetValue<FSlateBrush,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FProperty **param_3,FSlateBrush *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  ulonglong *puVar9;
  UScriptStruct *pUVar10;
  UScriptStruct *pUVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  UFunction *pUVar14;
  void *pvVar15;
  FFieldObjectUnion local_30;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
  if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      if (((uint)(int)(local_30.Field)->ClassPrivate->CastFlags >> 0x14 & 1) != 0) {
        pUVar11 = FSlateBrush::StaticStruct();
        pUVar10 = (UScriptStruct *)((FProperty *)(local_30.Unknown + 0x70))->_padding_;
        if (pUVar10 == (UScriptStruct *)0x0) {
          bVar5 = pUVar11 == (UScriptStruct *)0x0;
        }
        else {
          bVar5 = pUVar10 == pUVar11;
        }
        if (bVar5) {
          if (((local_30.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) ==
              CASTCLASS_None) {
            bVar5 = *(int *)(local_30.Unknown + 0x34) == 0xb0;
          }
          else {
            bVar5 = *(int *)(local_30.Unknown + 0x34) == 1;
          }
          if ((bVar5) &&
             (pvVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  ((FProperty *)local_30.Field,param_1,0), pvVar15 != (void *)0x0))
          {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar15);
            FProperty::CopySingleValue((FProperty *)local_30.Field,param_4,pvVar15);
            *param_3 = (FProperty *)local_30;
            return true;
          }
        }
      }
    }
    else {
      puVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)local_30.Field,param_1,0);
      lVar4 = ((FProperty *)(local_30.Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_30.Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_30.Unknown + 0x78);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((((-1 < iVar7) && (iVar7 < (int)puVar9[1])) &&
          (lVar2 = *(longlong *)(local_30.Unknown + 0x78), lVar2 != 0)) &&
         ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x14 & 1) != 0)) {
        pUVar10 = FSlateBrush::StaticStruct();
        if (*(UScriptStruct **)(lVar2 + 0x70) == (UScriptStruct *)0x0) {
          bVar5 = pUVar10 == (UScriptStruct *)0x0;
        }
        else {
          bVar5 = *(UScriptStruct **)(lVar2 + 0x70) == pUVar10;
        }
        if (bVar5) {
          lVar2 = *(longlong *)(local_30.Unknown + 0x78);
          if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
            bVar5 = *(int *)(lVar2 + 0x34) == 0xb0;
          }
          else {
            bVar5 = *(int *)(lVar2 + 0x34) == 1;
          }
          if ((bVar5) && ((int)puVar9[1] != 0)) {
            uVar13 = *puVar9;
            if (((lVar4 & 1) != 0) && ((uVar13 & 1) != 0)) {
              uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar9;
            }
            pvVar15 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar13);
            if (pvVar15 != (void *)0x0) {
              FCachedPropertyPath::ResolveLeaf(param_2,pvVar15);
              FProperty::CopySingleValue(*(FProperty **)(local_30.Unknown + 0x78),param_4,pvVar15);
              *param_3 = *(FProperty **)(local_30.Unknown + 0x78);
              return true;
            }
          }
        }
      }
    }
  }
  else {
    pUVar12 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pUVar12);
    if ((bVar5) &&
       (pUVar14 = (UFunction *)(local_30.Unknown & 0xfffffffffffffffe), pUVar14 != (UFunction *)0x0)
       ) {
      FCachedPropertyPath::ResolveLeaf(param_2,pUVar14);
      bVar5 = FCallGetterFunctionHelper<FSlateBrush,UObject>::CallGetterFunction
                        (param_1,pUVar14,param_4);
      return bVar5;
    }
    pFVar8 = FProperty::StaticClass();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
    if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
      bVar5 = FGetValueHelper<FSlateBrush,UObject>::GetValue(param_1,param_2,param_4,param_3);
      return bVar5;
    }
  }
  return false;
}

// GetValue<FSlateBrush,void> @ 1468f1300

bool __cdecl
PropertyPathHelpersInternal::GetValue<FSlateBrush,void>
          (void *param_1,FCachedPropertyPath *param_2,FProperty **param_3,FSlateBrush *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  UScriptStruct *pUVar9;
  UScriptStruct *pUVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  void *pvVar14;
  FFieldObjectUnion local_48 [2];
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pFVar8);
  if ((bVar5) && ((FProperty *)local_48[0].Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      if (((uint)(int)(local_48[0].Field)->ClassPrivate->CastFlags >> 0x14 & 1) != 0) {
        pUVar10 = FSlateBrush::StaticStruct();
        pUVar9 = (UScriptStruct *)((FProperty *)(local_48[0].Unknown + 0x70))->_padding_;
        if (pUVar9 == (UScriptStruct *)0x0) {
          bVar5 = pUVar10 == (UScriptStruct *)0x0;
        }
        else {
          bVar5 = pUVar9 == pUVar10;
        }
        if (bVar5) {
          if (((local_48[0].Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) ==
              CASTCLASS_None) {
            bVar5 = *(int *)(local_48[0].Unknown + 0x34) == 0xb0;
          }
          else {
            bVar5 = *(int *)(local_48[0].Unknown + 0x34) == 1;
          }
          if (bVar5) {
            if ((*(int *)(local_48[0].Unknown + 0x30) < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            if ((param_1 == (void *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            pvVar14 = (void *)((longlong)*(int *)(local_48[0].Unknown + 0x44) + (longlong)param_1);
            if (pvVar14 != (void *)0x0) {
              FCachedPropertyPath::ResolveLeaf(param_2,pvVar14);
              FProperty::CopySingleValue((FProperty *)local_48[0].Field,param_4,pvVar14);
              *param_3 = (FProperty *)local_48[0];
              return true;
            }
          }
        }
      }
    }
    else {
      if ((*(int *)(local_48[0].Unknown + 0x30) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar1 = *(int *)(local_48[0].Unknown + 0x44);
      lVar4 = ((FProperty *)(local_48[0].Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_48[0].Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_48[0].Unknown + 0x78);
      puVar13 = (ulonglong *)((longlong)iVar1 + (longlong)param_1);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((((-1 < iVar7) && (iVar7 < (int)puVar13[1])) &&
          (lVar2 = *(longlong *)(local_48[0].Unknown + 0x78), lVar2 != 0)) &&
         ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x14 & 1) != 0)) {
        pUVar9 = FSlateBrush::StaticStruct();
        if (*(UScriptStruct **)(lVar2 + 0x70) == (UScriptStruct *)0x0) {
          bVar5 = pUVar9 == (UScriptStruct *)0x0;
        }
        else {
          bVar5 = *(UScriptStruct **)(lVar2 + 0x70) == pUVar9;
        }
        if (bVar5) {
          lVar2 = *(longlong *)(local_48[0].Unknown + 0x78);
          if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
            bVar5 = *(int *)(lVar2 + 0x34) == 0xb0;
          }
          else {
            bVar5 = *(int *)(lVar2 + 0x34) == 1;
          }
          if ((bVar5) && ((int)puVar13[1] != 0)) {
            uVar12 = *puVar13;
            if (((lVar4 & 1) != 0) && ((uVar12 & 1) != 0)) {
              uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar13;
            }
            pvVar14 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar12);
            if (pvVar14 != (void *)0x0) {
              FCachedPropertyPath::ResolveLeaf(param_2,pvVar14);
              FProperty::CopySingleValue
                        (*(FProperty **)(local_48[0].Unknown + 0x78),param_4,pvVar14);
              *param_3 = *(FProperty **)(local_48[0].Unknown + 0x78);
              return true;
            }
          }
        }
      }
    }
  }
  else {
    pUVar11 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pUVar11);
    if ((bVar5) && ((UFunction *)(local_48[0].Unknown & 0xfffffffffffffffe) != (UFunction *)0x0)) {
      FCachedPropertyPath::ResolveLeaf
                (param_2,(UFunction *)(local_48[0].Unknown & 0xfffffffffffffffe));
    }
    else {
      pFVar8 = FProperty::StaticClass();
      bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pFVar8);
      if ((bVar5) && ((FProperty *)local_48[0].Field != (FProperty *)0x0)) {
        bVar5 = FGetValueHelper<FSlateBrush,void>::GetValue(param_1,param_2,param_4,param_3);
        return bVar5;
      }
    }
  }
  return false;
}

// GetValue<FSlateColor,UObject> @ 1468f1840

bool __cdecl
PropertyPathHelpersInternal::GetValue<FSlateColor,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FProperty **param_3,FSlateColor *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  ulonglong *puVar9;
  UScriptStruct *pUVar10;
  UScriptStruct *pUVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  UFunction *pUVar14;
  void *pvVar15;
  FFieldObjectUnion local_30;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
  if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      if (((uint)(int)(local_30.Field)->ClassPrivate->CastFlags >> 0x14 & 1) != 0) {
        pUVar11 = FSlateColor::StaticStruct();
        pUVar10 = (UScriptStruct *)((FProperty *)(local_30.Unknown + 0x70))->_padding_;
        if (pUVar10 == (UScriptStruct *)0x0) {
          bVar5 = pUVar11 == (UScriptStruct *)0x0;
        }
        else {
          bVar5 = pUVar10 == pUVar11;
        }
        if (bVar5) {
          if (((local_30.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) ==
              CASTCLASS_None) {
            bVar5 = *(int *)(local_30.Unknown + 0x34) == 0x14;
          }
          else {
            bVar5 = *(int *)(local_30.Unknown + 0x34) == 1;
          }
          if ((bVar5) &&
             (pvVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  ((FProperty *)local_30.Field,param_1,0), pvVar15 != (void *)0x0))
          {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar15);
            FProperty::CopySingleValue((FProperty *)local_30.Field,param_4,pvVar15);
            *param_3 = (FProperty *)local_30;
            return true;
          }
        }
      }
    }
    else {
      puVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)local_30.Field,param_1,0);
      lVar4 = ((FProperty *)(local_30.Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_30.Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_30.Unknown + 0x78);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((((-1 < iVar7) && (iVar7 < (int)puVar9[1])) &&
          (lVar2 = *(longlong *)(local_30.Unknown + 0x78), lVar2 != 0)) &&
         ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x14 & 1) != 0)) {
        pUVar10 = FSlateColor::StaticStruct();
        if (*(UScriptStruct **)(lVar2 + 0x70) == (UScriptStruct *)0x0) {
          bVar5 = pUVar10 == (UScriptStruct *)0x0;
        }
        else {
          bVar5 = *(UScriptStruct **)(lVar2 + 0x70) == pUVar10;
        }
        if (bVar5) {
          lVar2 = *(longlong *)(local_30.Unknown + 0x78);
          if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
            bVar5 = *(int *)(lVar2 + 0x34) == 0x14;
          }
          else {
            bVar5 = *(int *)(lVar2 + 0x34) == 1;
          }
          if ((bVar5) && ((int)puVar9[1] != 0)) {
            uVar13 = *puVar9;
            if (((lVar4 & 1) != 0) && ((uVar13 & 1) != 0)) {
              uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar9;
            }
            pvVar15 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar13);
            if (pvVar15 != (void *)0x0) {
              FCachedPropertyPath::ResolveLeaf(param_2,pvVar15);
              FProperty::CopySingleValue(*(FProperty **)(local_30.Unknown + 0x78),param_4,pvVar15);
              *param_3 = *(FProperty **)(local_30.Unknown + 0x78);
              return true;
            }
          }
        }
      }
    }
  }
  else {
    pUVar12 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pUVar12);
    if ((bVar5) &&
       (pUVar14 = (UFunction *)(local_30.Unknown & 0xfffffffffffffffe), pUVar14 != (UFunction *)0x0)
       ) {
      FCachedPropertyPath::ResolveLeaf(param_2,pUVar14);
      bVar5 = FCallGetterFunctionHelper<FSlateColor,UObject>::CallGetterFunction
                        (param_1,pUVar14,param_4);
      return bVar5;
    }
    pFVar8 = FProperty::StaticClass();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
    if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
      bVar5 = FGetValueHelper<FSlateColor,UObject>::GetValue(param_1,param_2,param_4,param_3);
      return bVar5;
    }
  }
  return false;
}

// GetValue<FSlateColor,void> @ 1468f1b40

bool __cdecl
PropertyPathHelpersInternal::GetValue<FSlateColor,void>
          (void *param_1,FCachedPropertyPath *param_2,FProperty **param_3,FSlateColor *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  UScriptStruct *pUVar9;
  UScriptStruct *pUVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  void *pvVar14;
  FFieldObjectUnion local_48 [2];
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pFVar8);
  if ((bVar5) && ((FProperty *)local_48[0].Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      if (((uint)(int)(local_48[0].Field)->ClassPrivate->CastFlags >> 0x14 & 1) != 0) {
        pUVar10 = FSlateColor::StaticStruct();
        pUVar9 = (UScriptStruct *)((FProperty *)(local_48[0].Unknown + 0x70))->_padding_;
        if (pUVar9 == (UScriptStruct *)0x0) {
          bVar5 = pUVar10 == (UScriptStruct *)0x0;
        }
        else {
          bVar5 = pUVar9 == pUVar10;
        }
        if (bVar5) {
          if (((local_48[0].Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) ==
              CASTCLASS_None) {
            bVar5 = *(int *)(local_48[0].Unknown + 0x34) == 0x14;
          }
          else {
            bVar5 = *(int *)(local_48[0].Unknown + 0x34) == 1;
          }
          if (bVar5) {
            if ((*(int *)(local_48[0].Unknown + 0x30) < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            if ((param_1 == (void *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            pvVar14 = (void *)((longlong)*(int *)(local_48[0].Unknown + 0x44) + (longlong)param_1);
            if (pvVar14 != (void *)0x0) {
              FCachedPropertyPath::ResolveLeaf(param_2,pvVar14);
              FProperty::CopySingleValue((FProperty *)local_48[0].Field,param_4,pvVar14);
              *param_3 = (FProperty *)local_48[0];
              return true;
            }
          }
        }
      }
    }
    else {
      if ((*(int *)(local_48[0].Unknown + 0x30) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar1 = *(int *)(local_48[0].Unknown + 0x44);
      lVar4 = ((FProperty *)(local_48[0].Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_48[0].Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_48[0].Unknown + 0x78);
      puVar13 = (ulonglong *)((longlong)iVar1 + (longlong)param_1);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((((-1 < iVar7) && (iVar7 < (int)puVar13[1])) &&
          (lVar2 = *(longlong *)(local_48[0].Unknown + 0x78), lVar2 != 0)) &&
         ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x14 & 1) != 0)) {
        pUVar9 = FSlateColor::StaticStruct();
        if (*(UScriptStruct **)(lVar2 + 0x70) == (UScriptStruct *)0x0) {
          bVar5 = pUVar9 == (UScriptStruct *)0x0;
        }
        else {
          bVar5 = *(UScriptStruct **)(lVar2 + 0x70) == pUVar9;
        }
        if (bVar5) {
          lVar2 = *(longlong *)(local_48[0].Unknown + 0x78);
          if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
            bVar5 = *(int *)(lVar2 + 0x34) == 0x14;
          }
          else {
            bVar5 = *(int *)(lVar2 + 0x34) == 1;
          }
          if ((bVar5) && ((int)puVar13[1] != 0)) {
            uVar12 = *puVar13;
            if (((lVar4 & 1) != 0) && ((uVar12 & 1) != 0)) {
              uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar13;
            }
            pvVar14 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar12);
            if (pvVar14 != (void *)0x0) {
              FCachedPropertyPath::ResolveLeaf(param_2,pvVar14);
              FProperty::CopySingleValue
                        (*(FProperty **)(local_48[0].Unknown + 0x78),param_4,pvVar14);
              *param_3 = *(FProperty **)(local_48[0].Unknown + 0x78);
              return true;
            }
          }
        }
      }
    }
  }
  else {
    pUVar11 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pUVar11);
    if ((bVar5) && ((UFunction *)(local_48[0].Unknown & 0xfffffffffffffffe) != (UFunction *)0x0)) {
      FCachedPropertyPath::ResolveLeaf
                (param_2,(UFunction *)(local_48[0].Unknown & 0xfffffffffffffffe));
    }
    else {
      pFVar8 = FProperty::StaticClass();
      bVar5 = FFieldVariant::IsA((FFieldVariant *)local_48,pFVar8);
      if ((bVar5) && ((FProperty *)local_48[0].Field != (FProperty *)0x0)) {
        bVar5 = FGetValueHelper<FSlateColor,void>::GetValue(param_1,param_2,param_4,param_3);
        return bVar5;
      }
    }
  }
  return false;
}

// GetValue<FText,UObject> @ 1468f2210

bool __cdecl
PropertyPathHelpersInternal::GetValue<FText,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FProperty **param_3,FText *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  ulonglong *puVar9;
  FFieldClass *pFVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  void *pvVar13;
  UFunction *pUVar14;
  FFieldObjectUnion local_30;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
  if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      pFVar8 = (local_30.Field)->ClassPrivate;
      pFVar10 = FTextProperty::StaticClass();
      if (pFVar8 == pFVar10) {
        if (((local_30.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)
        {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 0x10;
        }
        else {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 1;
        }
        if ((bVar5) &&
           (pvVar13 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                ((FProperty *)local_30.Field,param_1,0), pvVar13 != (void *)0x0)) {
          FCachedPropertyPath::ResolveLeaf(param_2,pvVar13);
          FProperty::CopySingleValue((FProperty *)local_30.Field,param_4,pvVar13);
          *param_3 = (FProperty *)local_30;
          return true;
        }
      }
    }
    else {
      puVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)local_30.Field,param_1,0);
      lVar4 = ((FProperty *)(local_30.Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_30.Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_30.Unknown + 0x78);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((-1 < iVar7) && (iVar7 < (int)puVar9[1])) &&
         (pFVar8 = *(FFieldClass **)(*(longlong *)(local_30.Unknown + 0x78) + 8),
         pFVar10 = FTextProperty::StaticClass(), pFVar8 == pFVar10)) {
        lVar2 = *(longlong *)(local_30.Unknown + 0x78);
        if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
          bVar5 = *(int *)(lVar2 + 0x34) == 0x10;
        }
        else {
          bVar5 = *(int *)(lVar2 + 0x34) == 1;
        }
        if ((bVar5) && ((int)puVar9[1] != 0)) {
          uVar12 = *puVar9;
          if (((lVar4 & 1) != 0) && ((uVar12 & 1) != 0)) {
            uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar9;
          }
          pvVar13 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar12);
          if (pvVar13 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar13);
            FProperty::CopySingleValue(*(FProperty **)(local_30.Unknown + 0x78),param_4,pvVar13);
            *param_3 = *(FProperty **)(local_30.Unknown + 0x78);
            return true;
          }
        }
      }
    }
  }
  else {
    pUVar11 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pUVar11);
    if ((bVar5) &&
       (pUVar14 = (UFunction *)(local_30.Unknown & 0xfffffffffffffffe), pUVar14 != (UFunction *)0x0)
       ) {
      FCachedPropertyPath::ResolveLeaf(param_2,pUVar14);
      bVar5 = FCallGetterFunctionHelper<FText,UObject>::CallGetterFunction(param_1,pUVar14,param_4);
      return bVar5;
    }
    pFVar8 = FProperty::StaticClass();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
    if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
      bVar5 = FGetValueHelper<FText,UObject>::GetValue(param_1,param_2,param_4,param_3);
      return bVar5;
    }
  }
  return false;
}

// GetValue<FText,void> @ 1468f24c0

bool __cdecl
PropertyPathHelpersInternal::GetValue<FText,void>
          (void *param_1,FCachedPropertyPath *param_2,FProperty **param_3,FText *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FPropertyPathSegment *this;
  FFieldClass *pFVar8;
  FFieldClass *pFVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  void *pvVar12;
  ulonglong *puVar13;
  FFieldObjectUnion local_30;
  
  this = FCachedPropertyPath::GetLastSegment(param_2);
  iVar7 = FPropertyPathSegment::GetArrayIndex(this);
  FPropertyPathSegment::GetField(this);
  pFVar8 = FArrayProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
  if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
    if (iVar7 == -1) {
      pFVar8 = (local_30.Field)->ClassPrivate;
      pFVar9 = FTextProperty::StaticClass();
      if (pFVar8 == pFVar9) {
        if (((local_30.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)
        {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 0x10;
        }
        else {
          bVar5 = *(int *)(local_30.Unknown + 0x34) == 1;
        }
        if (bVar5) {
          if ((*(int *)(local_30.Unknown + 0x30) < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pvVar12 = (void *)((longlong)*(int *)(local_30.Unknown + 0x44) + (longlong)param_1);
          if (pvVar12 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar12);
            FProperty::CopySingleValue((FProperty *)local_30.Field,param_4,pvVar12);
            *param_3 = (FProperty *)local_30;
            return true;
          }
        }
      }
    }
    else {
      if ((*(int *)(local_30.Unknown + 0x30) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar1 = *(int *)(local_30.Unknown + 0x44);
      lVar4 = ((FProperty *)(local_30.Unknown + 0x70))->_padding_;
      (**(code **)(**(longlong **)(local_30.Unknown + 0x78) + 0x168))();
      lVar2 = *(longlong *)(local_30.Unknown + 0x78);
      puVar13 = (ulonglong *)((longlong)param_1 + (longlong)iVar1);
      iVar1 = *(int *)(lVar2 + 0x34);
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((-1 < iVar7) && (iVar7 < (int)puVar13[1])) &&
         (pFVar8 = *(FFieldClass **)(*(longlong *)(local_30.Unknown + 0x78) + 8),
         pFVar9 = FTextProperty::StaticClass(), pFVar8 == pFVar9)) {
        lVar2 = *(longlong *)(local_30.Unknown + 0x78);
        if ((lVar2 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) == 0)) {
          bVar5 = *(int *)(lVar2 + 0x34) == 0x10;
        }
        else {
          bVar5 = *(int *)(lVar2 + 0x34) == 1;
        }
        if ((bVar5) && ((int)puVar13[1] != 0)) {
          uVar11 = *puVar13;
          if (((lVar4 & 1) != 0) && ((uVar11 & 1) != 0)) {
            uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar13;
          }
          pvVar12 = (void *)((longlong)iVar1 * (longlong)iVar7 + uVar11);
          if (pvVar12 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar12);
            FProperty::CopySingleValue(*(FProperty **)(local_30.Unknown + 0x78),param_4,pvVar12);
            *param_3 = *(FProperty **)(local_30.Unknown + 0x78);
            return true;
          }
        }
      }
    }
  }
  else {
    pUVar10 = Z_Construct_UClass_UFunction_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pUVar10);
    if ((bVar5) && ((UFunction *)(local_30.Unknown & 0xfffffffffffffffe) != (UFunction *)0x0)) {
      FCachedPropertyPath::ResolveLeaf(param_2,(UFunction *)(local_30.Unknown & 0xfffffffffffffffe))
      ;
    }
    else {
      pFVar8 = FProperty::StaticClass();
      bVar5 = FFieldVariant::IsA((FFieldVariant *)&local_30,pFVar8);
      if ((bVar5) && ((FProperty *)local_30.Field != (FProperty *)0x0)) {
        bVar5 = FGetValueHelper<FText,void>::GetValue(param_1,param_2,param_4,param_3);
        return bVar5;
      }
    }
  }
  return false;
}

// GetValueFast<unsigned_char,UObject> @ 1468f29b0

bool __cdecl
PropertyPathHelpersInternal::GetValueFast<unsigned_char,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,uchar *param_3,FProperty **param_4)

{
  bool bVar1;
  UFunction *pUVar2;
  void *pvVar3;
  
  pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar2 == (UFunction *)0x0) {
    pvVar3 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar1 = false;
    if (pvVar3 != (void *)0x0) {
      bVar1 = FGetValueFastHelper<unsigned_char>::GetValue(param_2,param_3,param_4);
    }
  }
  else {
    pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar1 = FCallGetterFunctionHelper<unsigned_char,UObject>::CallGetterFunction
                      (param_1,pUVar2,param_3);
  }
  return bVar1;
}

// GetValueFast<double,UObject> @ 1468f2a30

bool __cdecl
PropertyPathHelpersInternal::GetValueFast<double,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,double *param_3,FProperty **param_4)

{
  bool bVar1;
  UFunction *pUVar2;
  void *pvVar3;
  
  pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar2 == (UFunction *)0x0) {
    pvVar3 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar1 = false;
    if (pvVar3 != (void *)0x0) {
      bVar1 = FGetValueFastHelper<double>::GetValue(param_2,param_3,param_4);
    }
  }
  else {
    pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar1 = FCallGetterFunctionHelper<double,UObject>::CallGetterFunction(param_1,pUVar2,param_3);
  }
  return bVar1;
}

// GetValueFast<UObject_*,UObject> @ 1468f2ab0

bool __cdecl
PropertyPathHelpersInternal::GetValueFast<UObject_*,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,UObject **param_3,FProperty **param_4)

{
  bool bVar1;
  UFunction *pUVar2;
  void *pvVar3;
  
  pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar2 == (UFunction *)0x0) {
    pvVar3 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar1 = false;
    if (pvVar3 != (void *)0x0) {
      bVar1 = FGetValueFastHelper<UObject_*>::GetValue(param_2,param_3,param_4);
    }
  }
  else {
    pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar1 = FCallGetterFunctionHelper<UObject_*,UObject>::CallGetterFunction(param_1,pUVar2,param_3)
    ;
  }
  return bVar1;
}

// GetValueFast<FLinearColor,UObject> @ 1468f2b30

bool __cdecl
PropertyPathHelpersInternal::GetValueFast<FLinearColor,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FLinearColor *param_3,FProperty **param_4)

{
  bool bVar1;
  UFunction *pUVar2;
  void *pvVar3;
  
  pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar2 == (UFunction *)0x0) {
    pvVar3 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar1 = false;
    if (pvVar3 != (void *)0x0) {
      bVar1 = FGetValueFastHelper<FLinearColor>::GetValue(param_2,param_3,param_4);
    }
  }
  else {
    pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar1 = FCallGetterFunctionHelper<FLinearColor,UObject>::CallGetterFunction
                      (param_1,pUVar2,param_3);
  }
  return bVar1;
}

// GetValueFast<FSlateBrush,UObject> @ 1468f2bb0

bool __cdecl
PropertyPathHelpersInternal::GetValueFast<FSlateBrush,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FSlateBrush *param_3,FProperty **param_4)

{
  bool bVar1;
  UFunction *pUVar2;
  void *pvVar3;
  
  pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar2 == (UFunction *)0x0) {
    pvVar3 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar1 = false;
    if (pvVar3 != (void *)0x0) {
      bVar1 = FGetValueFastHelper<FSlateBrush>::GetValue(param_2,param_3,param_4);
    }
  }
  else {
    pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar1 = FCallGetterFunctionHelper<FSlateBrush,UObject>::CallGetterFunction
                      (param_1,pUVar2,param_3);
  }
  return bVar1;
}

// GetValueFast<FSlateColor,UObject> @ 1468f2c30

bool __cdecl
PropertyPathHelpersInternal::GetValueFast<FSlateColor,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FSlateColor *param_3,FProperty **param_4)

{
  bool bVar1;
  UFunction *pUVar2;
  void *pvVar3;
  
  pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar2 == (UFunction *)0x0) {
    pvVar3 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar1 = false;
    if (pvVar3 != (void *)0x0) {
      bVar1 = FGetValueFastHelper<FSlateColor>::GetValue(param_2,param_3,param_4);
    }
  }
  else {
    pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar1 = FCallGetterFunctionHelper<FSlateColor,UObject>::CallGetterFunction
                      (param_1,pUVar2,param_3);
  }
  return bVar1;
}

// GetValueFast<FText,UObject> @ 1468f2cb0

bool __cdecl
PropertyPathHelpersInternal::GetValueFast<FText,UObject>
          (UObject *param_1,FCachedPropertyPath *param_2,FText *param_3,FProperty **param_4)

{
  bool bVar1;
  UFunction *pUVar2;
  void *pvVar3;
  
  pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
  if (pUVar2 == (UFunction *)0x0) {
    pvVar3 = FCachedPropertyPath::GetCachedAddress(param_2);
    bVar1 = false;
    if (pvVar3 != (void *)0x0) {
      bVar1 = FGetValueFastHelper<FText>::GetValue(param_2,param_3,param_4);
    }
  }
  else {
    pUVar2 = FCachedPropertyPath::GetCachedFunction(param_2);
    bVar1 = FCallGetterFunctionHelper<FText,UObject>::CallGetterFunction(param_1,pUVar2,param_3);
  }
  return bVar1;
}

// InternalConstructor<UAsyncTaskDownloadImage> @ 1468f2db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UAsyncTaskDownloadImage>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  FUObjectItem *this_00;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UAsyncTaskDownloadImage__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    if ((this->_padding_ & 0x10) == 0) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
      FUObjectItem::SetRootFlags(this_00,RootSet);
      return;
    }
  }
  return;
}

// InternalConstructor<UBackgroundBlur> @ 1468f2e30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UBackgroundBlur>(FObjectInitializer *param_1)

{
  UContentWidget *this;
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  this = (UContentWidget *)param_1->Obj;
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    this[1].field_0x12 = 1;
    *(undefined4 *)&this[1].field_0x14 = 0;
    *(undefined ***)this = &UBackgroundBlur::_vftable__for__UVisual__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)&this->field_0x28 = &UBackgroundBlur::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x1c = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar1 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0
                       );
    FSlateBrush::FSlateBrush((FSlateBrush *)&this[1].field_0x48,pFVar1);
    local_b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    this->field_0xf9 = this->field_0xf9 & 0xfe;
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined8 *)&this[1].field_0x100 = 0;
    UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  }
  return;
}

// InternalConstructor<UBackgroundBlurSlot> @ 1468f2f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UBackgroundBlurSlot>(FObjectInitializer *param_1)

{
  UPanelSlot *this;
  
  this = (UPanelSlot *)param_1->Obj;
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UBackgroundBlurSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x40800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined4 *)&this[1]._padding_ = 0x40800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined2 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UBoolBinding> @ 1468f2fa0

void __cdecl InternalConstructor<UBoolBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7UBoolBinding__6B_;
  }
  return;
}

// InternalConstructor<UBorder> @ 1468f3000

void __cdecl InternalConstructor<UBorder>(FObjectInitializer *param_1)

{
  UContentWidget *this;
  
  this = (UContentWidget *)param_1->Obj;
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    *(undefined ***)this = &UBorder::_vftable__for__UVisual__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)&this->field_0x28 = &UBorder::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    FSlateBrush::FSlateBrush((FSlateBrush *)&this[1].field_0x48);
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined8 *)&this[1].field_0x100 = 0;
    *(undefined8 *)&this[1].field_0x108 = 0;
    *(undefined8 *)&this[1].field_0x120 = 0;
    *(undefined8 *)&this[1].field_0x128 = 0;
    *(undefined8 *)&this[1].field_0x130 = 0;
    *(undefined8 *)&this[1].field_0x150 = 0;
    *(undefined8 *)&this[1].field_0x158 = 0;
    *(undefined8 *)&this[1].field_0x160 = 0;
    *(undefined8 *)&this[1].field_0x168 = 0;
    *(undefined8 *)&this[1].field_0x170 = 0;
    *(undefined8 *)&this[1].field_0x178 = 0;
    *(undefined8 *)&this[1].field_0x180 = 0;
    *(undefined8 *)&this[1].field_0x188 = 0;
    *(undefined8 *)&this[1].field_0x190 = 0;
    *(undefined8 *)&this[1].field_0x198 = 0;
    *(undefined8 *)&this[1].field_0x1a0 = 0;
    *(undefined8 *)&this[1].field_0x1a8 = 0;
    this->field_0xf9 = this->field_0xf9 & 0xfe;
    *(undefined8 *)&this[1].field_0x1b0 = 0;
    *(undefined8 *)&this[1].field_0x1b8 = 0;
    *(FLinearColor_u_0 *)&this[1].field_0x4 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    *(FLinearColor_u_0 *)&this[1].field_0x110 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0
    ;
    *(undefined4 *)&this[1].field_0x30 = 0x40800000;
    *(undefined4 *)&this[1].field_0x34 = 0x40000000;
    *(undefined4 *)&this[1].field_0x38 = 0x40800000;
    *(undefined4 *)&this[1].field_0x3c = 0x40000000;
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x138 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x140 = 0x3ff0000000000000;
    this[1].field_0x2 = this[1].field_0x2 | 1;
  }
  return;
}

// InternalConstructor<UBorderSlot> @ 1468f3180

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UBorderSlot>(FObjectInitializer *param_1)

{
  UPanelSlot *this;
  
  this = (UPanelSlot *)param_1->Obj;
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UBorderSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x40800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined4 *)&this[1]._padding_ = 0x40800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined2 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UBrushBinding> @ 1468f31e0

void __cdecl InternalConstructor<UBrushBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    this[2].field_0x21 = 0;
    *(undefined ***)this = &___7UBrushBinding__6B_;
  }
  return;
}

// InternalConstructor<UButton> @ 1468f3240

void __cdecl InternalConstructor<UButton>(FObjectInitializer *param_1)

{
  UContentWidget *this;
  FLinearColor FVar1;
  FButtonStyle *pFVar2;
  
  this = (UContentWidget *)param_1->Obj;
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    *(undefined ***)this = &UButton::_vftable__for__UVisual__;
    *(undefined ***)&this->field_0x28 = &UButton::_vftable__for__INotifyFieldValueChanged__;
    FButtonStyle::FButtonStyle((FButtonStyle *)&this[1].field_0x8);
    *(undefined8 *)&this[3].field_0x30 = 0;
    *(undefined8 *)&this[3].field_0x38 = 0;
    *(undefined8 *)&this[3].field_0x40 = 0;
    *(undefined8 *)&this[3].field_0x48 = 0;
    *(undefined8 *)&this[3].field_0x50 = 0;
    *(undefined8 *)&this[3].field_0x58 = 0;
    *(undefined8 *)&this[3].field_0x60 = 0;
    *(undefined8 *)&this[3].field_0x68 = 0;
    *(undefined8 *)&this[3].field_0x70 = 0;
    *(undefined8 *)&this[3].field_0x78 = 0;
    *(undefined8 *)&this[3].field_0x80 = 0;
    *(undefined8 *)&this[3].field_0x88 = 0;
    *(undefined8 *)&this[3].field_0x90 = 0;
    *(undefined8 *)&this[3].field_0x98 = 0;
    *(undefined8 *)&this[3].field_0xa0 = 0;
    *(undefined8 *)&this[3].field_0xa8 = 0;
    *(undefined8 *)&this[3].field_0xb0 = 0;
    *(undefined4 *)&this[3].field_0xb8 = 0;
    *(undefined8 *)&this[3].field_0xc0 = 0;
    *(undefined8 *)&this[3].field_0xc8 = 0;
    *(undefined4 *)&this[3].field_0xd0 = 0;
    *(undefined8 *)&this[3].field_0xd8 = 0;
    *(undefined8 *)&this[3].field_0xe0 = 0;
    *(undefined4 *)&this[3].field_0xe8 = 0;
    *(undefined8 *)&this[3].field_0xf0 = 0;
    *(undefined8 *)&this[3].field_0xf8 = 0;
    *(undefined4 *)&this[3].field_0x100 = 0;
    *(undefined8 *)&this[3].field_0x108 = 0;
    *(undefined8 *)&this[3].field_0x110 = 0;
    *(undefined4 *)&this[3].field_0x118 = 0;
    *(undefined8 *)&this[3].field_0x120 = 0;
    *(undefined8 *)&this[3].field_0x128 = 0;
    *(undefined4 *)&this[3].field_0x130 = 0;
    *(undefined8 *)&this[3].field_0x138 = 0;
    *(undefined8 *)&this[3].field_0x140 = 0;
    *(undefined4 *)&this[3].field_0x148 = 0;
    *(undefined8 *)&this[3].field_0x150 = 0;
    *(undefined8 *)&this[3].field_0x158 = 0;
    pFVar2 = (FButtonStyle *)UE::Slate::Private::FDefaultStyleCache::Get();
    FButtonStyle::operator=((FButtonStyle *)&this[1].field_0x8,pFVar2);
    *(FLinearColor_u_0 *)&this[3].field_0x8 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    FVar1 = FLinearColor::White;
    *(undefined2 *)&this[3].field_0x28 = 0;
    this[3].field_0x160 = 0;
    *(FLinearColor_u_0 *)&this[3].field_0x18 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
    this[3].field_0x2b = 1;
  }
  return;
}

// InternalConstructor<UButtonSlot> @ 1468f33e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UButtonSlot>(FObjectInitializer *param_1)

{
  UPanelSlot *this;
  
  this = (UPanelSlot *)param_1->Obj;
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UButtonSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x40800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined4 *)&this[1]._padding_ = 0x40800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined2 *)&this[1]._padding_ = 0x202;
  }
  return;
}

// InternalConstructor<UCanvasPanel> @ 1468f3440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UCanvasPanel>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UPanelWidget *this;
  
  this = (UPanelWidget *)param_1->Obj;
  if (this != (UPanelWidget *)0x0) {
    UPanelWidget::UPanelWidget(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfe;
    this->_padding_ = (longlong)&UCanvasPanel::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UCanvasPanel::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
    return;
  }
  return;
}

// InternalConstructor<UCanvasPanelSlot> @ 1468f34a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UCanvasPanelSlot>(FObjectInitializer *param_1)

{
  UPanelSlot *this;
  
  this = (UPanelSlot *)param_1->Obj;
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UCanvasPanelSlot__6B_;
    this[2]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41f00000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Parent.field0_0x0.DebugPtr = (UPanelWidget *)0x0;
    this[1].Content.field0_0x0.DebugPtr = (UWidget *)0x0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UCheckedStateBinding> @ 1468f3510

void __cdecl InternalConstructor<UCheckedStateBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    this[2].field_0x21 = 0;
    *(undefined ***)this = &___7UCheckedStateBinding__6B_;
  }
  return;
}

// InternalConstructor<UColorBinding> @ 1468f3570

void __cdecl InternalConstructor<UColorBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    this[2].field_0x21 = 0;
    *(undefined ***)this = &___7UColorBinding__6B_;
  }
  return;
}

// InternalConstructor<UFloatBinding> @ 1468f35d0

void __cdecl InternalConstructor<UFloatBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7UFloatBinding__6B_;
  }
  return;
}

// InternalConstructor<UGameViewportSubsystem> @ 1468f3630

void __cdecl InternalConstructor<UGameViewportSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UGameViewportSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[2].field_0x8 = 2;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0xc = 0x80;
    *(undefined4 *)&this[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x28 = 0;
  }
  return;
}

// InternalConstructor<UInt32Binding> @ 1468f36d0

void __cdecl InternalConstructor<UInt32Binding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7UInt32Binding__6B_;
  }
  return;
}

// InternalConstructor<UListViewDesignerPreviewItem> @ 1468f3730

void __cdecl InternalConstructor<UListViewDesignerPreviewItem>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UListViewDesignerPreviewItem__6B_;
  }
  return;
}

// InternalConstructor<UMouseCursorBinding> @ 1468f3760

void __cdecl InternalConstructor<UMouseCursorBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7UMouseCursorBinding__6B_;
  }
  return;
}

// InternalConstructor<UMovieScene2DTransformPropertySystem> @ 1468f37c0

void __cdecl InternalConstructor<UMovieScene2DTransformPropertySystem>(FObjectInitializer *param_1)

{
  UMovieScenePropertySystem *this;
  code *pcVar1;
  bool bVar2;
  FMovieSceneUMGComponentTypes *pFVar3;
  UObject *local_res8;
  UClass *local_res10;
  UObject *local_res18;
  UClass *local_res20;
  
  this = (UMovieScenePropertySystem *)param_1->Obj;
  if (this != (UMovieScenePropertySystem *)0x0) {
    UMovieScenePropertySystem::UMovieScenePropertySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieScene2DTransformPropertySystem::_vftable__for__UMovieSceneEntitySystem__;
    this->_padding_ =
         (longlong)
         &UMovieScene2DTransformPropertySystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    pFVar3 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
    if ((((short)this->_padding_ != -1) || ((this->CompositePropertyID).TypeIndex != -1)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!RelevantComponent && !CompositePropertyID",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieScenePropertySystem.h"
                           ,0x1f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(ushort *)&this->_padding_ = (pFVar3->WidgetTransform).PropertyTag.Value;
    (this->CompositePropertyID).TypeIndex = (int)(pFVar3->WidgetTransform).CompositeID;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
      local_res18 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res18);
      }
      local_res20 = Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res20,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res18);
    }
  }
  return;
}

// InternalConstructor<UMovieScene2DTransformSection> @ 1468f3910

void __cdecl InternalConstructor<UMovieScene2DTransformSection>(FObjectInitializer *param_1)

{
  UMovieSceneSection *this;
  EMovieSceneCompletionMode EVar1;
  int iVar2;
  FGuid local_18;
  
  this = (UMovieSceneSection *)param_1->Obj;
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UMovieScene2DTransformSection::_vftable__for__UMovieSceneSection__;
    this[1]._padding_ =
         (longlong)&UMovieScene2DTransformSection::_vftable__for__IMovieSceneEntityProvider__;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[1]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[2]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[3]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[4]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)&this[5].EvalOptions);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)&this[6].Easing.EaseIn.field_0x8);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)&this[7].Easing.EaseOut.field_0x8);
    local_18 = FSequencerObjectVersion::GUID;
    iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    if (iVar2 < 4) {
      EVar1 = KeepState;
    }
    else {
      local_18 = FSequencerObjectVersion::GUID;
      iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
      EVar1 = (5 < iVar2) + RestoreState;
    }
    (this->EvalOptions).bCanEditCompletionMode = true;
    (this->EvalOptions).CompletionMode = EVar1;
    *(undefined4 *)&this[1]._padding_ = 0x7f;
    (this->BlendType).BlendType = Absolute;
    (this->BlendType).bIsValid = true;
    this->bSupportsInfiniteRange = true;
  }
  return;
}

// InternalConstructor<UMovieScene2DTransformTrack> @ 1468f3a20

void __cdecl InternalConstructor<UMovieScene2DTransformTrack>(FObjectInitializer *param_1)

{
  UMovieScenePropertyTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieScenePropertyTrack *)param_1->Obj;
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(this,param_1);
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
    this->_padding_ =
         (longlong)
         &UMovieScene2DTransformTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieScene2DTransformTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar1 = FMovieSceneBlendTypeField::All();
    *(undefined1 *)&this->_padding_ = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalConstructor<UMovieSceneMarginPropertySystem> @ 1468f3a80

void __cdecl InternalConstructor<UMovieSceneMarginPropertySystem>(FObjectInitializer *param_1)

{
  UMovieScenePropertySystem *this;
  code *pcVar1;
  bool bVar2;
  FMovieSceneUMGComponentTypes *pFVar3;
  UObject *local_res8;
  UClass *local_res10;
  UObject *local_res18;
  UClass *local_res20;
  
  this = (UMovieScenePropertySystem *)param_1->Obj;
  if (this != (UMovieScenePropertySystem *)0x0) {
    UMovieScenePropertySystem::UMovieScenePropertySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneMarginPropertySystem::_vftable__for__UMovieSceneEntitySystem__;
    this->_padding_ =
         (longlong)
         &UMovieSceneMarginPropertySystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    pFVar3 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
    if ((((short)this->_padding_ != -1) || ((this->CompositePropertyID).TypeIndex != -1)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!RelevantComponent && !CompositePropertyID",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieScenePropertySystem.h"
                           ,0x1f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(ushort *)&this->_padding_ = (pFVar3->Margin).PropertyTag.Value;
    (this->CompositePropertyID).TypeIndex = (int)(pFVar3->Margin).CompositeID;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
      local_res18 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res18);
      }
      local_res20 = Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res20,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res18);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneMarginSection> @ 1468f3bd0

void __cdecl InternalConstructor<UMovieSceneMarginSection>(FObjectInitializer *param_1)

{
  if ((UMovieSceneMarginSection *)param_1->Obj != (UMovieSceneMarginSection *)0x0) {
    UMovieSceneMarginSection::UMovieSceneMarginSection
              ((UMovieSceneMarginSection *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneMarginTrack> @ 1468f3bf0

void __cdecl InternalConstructor<UMovieSceneMarginTrack>(FObjectInitializer *param_1)

{
  UMovieScenePropertyTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieScenePropertyTrack *)param_1->Obj;
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(this,param_1);
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
    this->_padding_ =
         (longlong)&UMovieSceneMarginTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ = (longlong)&UMovieSceneMarginTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
    ;
    FVar1 = FMovieSceneBlendTypeField::All();
    *(undefined1 *)&this->_padding_ = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalConstructor<UMovieSceneWidgetMaterialSystem> @ 1468f3c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneWidgetMaterialSystem>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneUMGComponentTypes *pFVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  UObject *local_res8;
  UClass *local_res10;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneWidgetMaterialSystem::_vftable__for__UMovieSceneEntitySystem__;
    this[1]._padding_ =
         (longlong)
         &UMovieSceneWidgetMaterialSystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    UE::MovieScene::
    TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
    ::
    TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
              ((TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
                *)&this[1]._padding_);
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar3 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
    pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    (this->RelevantComponent).Value = (ushort)pFVar3->WidgetMaterialHandle;
    this->Phase = Instantiation;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->ObjectResult;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->BoundObject;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar4->BoundMaterial;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10 = Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneWidgetMaterialTrack> @ 1468f3dc0

void __cdecl InternalConstructor<UMovieSceneWidgetMaterialTrack>(FObjectInitializer *param_1)

{
  UMovieSceneMaterialTrack *this;
  
  this = (UMovieSceneMaterialTrack *)param_1->Obj;
  if (this != (UMovieSceneMaterialTrack *)0x0) {
    UMovieSceneMaterialTrack::UMovieSceneMaterialTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieSceneWidgetMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneWidgetMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ =
         (longlong)&UMovieSceneWidgetMaterialTrack::_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ =
         (longlong)
         &UMovieSceneWidgetMaterialTrack::_vftable__for__IMovieSceneParameterSectionExtender__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPropertyBinding> @ 1468f3e30

void __cdecl InternalConstructor<UPropertyBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<USlateAccessibleWidgetData> @ 1468f3e80

void __cdecl InternalConstructor<USlateAccessibleWidgetData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7USlateAccessibleWidgetData__6B_;
    FText::FText((FText *)&this[1].field_0x8);
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    FText::FText((FText *)&this[2].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined2 *)&this[1].field_0x1 = 0x100;
    *(undefined1 *)(this + 1) = 1;
  }
  return;
}

// InternalConstructor<UTextBinding> @ 1468f3ef0

void __cdecl InternalConstructor<UTextBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    this[2].field_0x21 = 0;
    *(undefined ***)this = &___7UTextBinding__6B_;
  }
  return;
}

// InternalConstructor<UUMGSequencePlayer> @ 1468f3f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UUMGSequencePlayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)(this + 1));
    *(undefined ***)this = &UUMGSequencePlayer::_vftable__for__UObject__;
    *(undefined8 *)&this[0xd].field_0x10 = 0;
    *(undefined ***)(this + 1) = &UUMGSequencePlayer::_vftable__for__IMovieScenePlayer__;
    *(undefined8 *)&this[0xd].field_0x18 = 0;
    FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
              ((FMovieSceneRootEvaluationTemplateInstance *)&this[0xd].field_0x20);
    *(undefined8 *)&this[0xe].field_0x18 = 0;
    *(undefined8 *)&this[0xe].field_0x20 = 0;
    *(undefined8 *)(this + 0xf) = 0;
    *(undefined8 *)&this[0xf].field_0x8 = 2;
  }
  return;
}

// InternalConstructor<UUMGSequenceTickManager> @ 1468f3fe0

void __cdecl InternalConstructor<UUMGSequenceTickManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UUMGSequenceTickManager__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    this[4].field_0x20 = 0;
    *(undefined1 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UUserListEntry> @ 1468f4090

void __cdecl InternalConstructor<UUserListEntry>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UUserListEntry__6B_;
  }
  return;
}

// InternalConstructor<UUserListEntryLibrary> @ 1468f40c0

void __cdecl InternalConstructor<UUserListEntryLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UUserListEntryLibrary__6B_;
  }
  return;
}

// InternalConstructor<UUserObjectListEntry> @ 1468f40f0

void __cdecl InternalConstructor<UUserObjectListEntry>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UUserObjectListEntry__6B_;
  }
  return;
}

// InternalConstructor<UUserObjectListEntryLibrary> @ 1468f4120

void __cdecl InternalConstructor<UUserObjectListEntryLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UUserObjectListEntryLibrary__6B_;
  }
  return;
}

// InternalConstructor<UUserWidgetBlueprint> @ 1468f4150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UUserWidgetBlueprint>(FObjectInitializer *param_1)

{
  UBlueprint *this;
  
  this = (UBlueprint *)param_1->Obj;
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    this->_padding_ = (longlong)&UUserWidgetBlueprint::_vftable__for__UBlueprintCore__;
    this->_padding_ =
         (longlong)&UUserWidgetBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
  }
  return;
}

// InternalConstructor<UUserWidgetExtension> @ 1468f4190

void __cdecl InternalConstructor<UUserWidgetExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UUserWidgetExtension__6B_;
  }
  return;
}

// InternalConstructor<UVisibilityBinding> @ 1468f41c0

void __cdecl InternalConstructor<UVisibilityBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7UVisibilityBinding__6B_;
  }
  return;
}

// InternalConstructor<UWidgetAnimation> @ 1468f4220

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UWidgetAnimation>(FObjectInitializer *param_1)

{
  UMovieSceneSequence *this;
  
  this = (UMovieSceneSequence *)param_1->Obj;
  if (this != (UMovieSceneSequence *)0x0) {
    UMovieSceneSequence::UMovieSceneSequence(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UWidgetAnimation__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->bParentContextsAreSignificant = false;
  }
  return;
}

// InternalConstructor<UWidgetAnimationDelegateBinding> @ 1468f4280

void __cdecl InternalConstructor<UWidgetAnimationDelegateBinding>(FObjectInitializer *param_1)

{
  UDynamicBlueprintBinding *this;
  
  this = (UDynamicBlueprintBinding *)param_1->Obj;
  if (this != (UDynamicBlueprintBinding *)0x0) {
    UDynamicBlueprintBinding::UDynamicBlueprintBinding(this,param_1);
    *(undefined ***)this = &___7UWidgetAnimationDelegateBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UWidgetAnimationHandleFunctionLibrary> @ 1468f42c0

void __cdecl InternalConstructor<UWidgetAnimationHandleFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UWidgetAnimationHandleFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UWidgetAnimationPlayCallbackProxy> @ 1468f42f0

void __cdecl InternalConstructor<UWidgetAnimationPlayCallbackProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWidgetAnimationPlayCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UWidgetBinaryStateRegistration> @ 1468f4340

void __cdecl InternalConstructor<UWidgetBinaryStateRegistration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UWidgetBinaryStateRegistration__6B_;
  }
  return;
}

// InternalConstructor<UWidgetBinding> @ 1468f4370

void __cdecl InternalConstructor<UWidgetBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UPropertyBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this[1].field_0x8);
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7UWidgetBinding__6B_;
  }
  return;
}

// InternalConstructor<UWidgetBlueprintGeneratedClassExtension> @ 1468f43d0

void __cdecl
InternalConstructor<UWidgetBlueprintGeneratedClassExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWidgetBlueprintGeneratedClassExtension__6B_;
  }
  return;
}

// InternalConstructor<UWidgetDisabledStateRegistration> @ 1468f4400

void __cdecl InternalConstructor<UWidgetDisabledStateRegistration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UWidgetDisabledStateRegistration__6B_;
  }
  return;
}

// InternalConstructor<UWidgetEnumStateRegistration> @ 1468f4430

void __cdecl InternalConstructor<UWidgetEnumStateRegistration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UWidgetEnumStateRegistration__6B_;
  }
  return;
}

// InternalConstructor<UWidgetFieldNotificationExtension> @ 1468f4460

void __cdecl InternalConstructor<UWidgetFieldNotificationExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWidgetFieldNotificationExtension__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined2 *)&this[1].field_0x14 = 0xffff;
  }
  return;
}

// InternalConstructor<UWidgetHoveredStateRegistration> @ 1468f44b0

void __cdecl InternalConstructor<UWidgetHoveredStateRegistration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UWidgetHoveredStateRegistration__6B_;
  }
  return;
}

// InternalConstructor<UWidgetNavigation> @ 1468f44e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<UWidgetNavigation>(FObjectInitializer *param_1)

{
  if ((UWidgetNavigation *)param_1->Obj != (UWidgetNavigation *)0x0) {
    UWidgetNavigation::UWidgetNavigation((UWidgetNavigation *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWidgetPressedStateRegistration> @ 1468f4500

void __cdecl InternalConstructor<UWidgetPressedStateRegistration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UWidgetPressedStateRegistration__6B_;
  }
  return;
}

// InternalConstructor<UWidgetSelectedStateRegistration> @ 1468f4530

void __cdecl InternalConstructor<UWidgetSelectedStateRegistration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UWidgetSelectedStateRegistration__6B_;
  }
  return;
}

// InternalConstructor<UWidgetStateSettings> @ 1468f4560

void __cdecl InternalConstructor<UWidgetStateSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UWidgetStateSettings__6B_;
    this[0xc]._padding_ = 0;
    *(undefined4 *)&this[0xc]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0xc]._padding_ + 4) = 0x20;
    this[0xc].SectionName.ComparisonIndex = 0;
    this[0xc].SectionName.Number = 0;
    *(undefined4 *)&this[0xd]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0xd]._padding_ + 4) = 0x20;
    *(undefined4 *)&this[0xd]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[0xd]._padding_ + 4) = 0;
    this[0xe]._padding_ = 0;
    *(undefined4 *)&this[0xe]._padding_ = 0;
    this[0x11]._padding_ = 0;
    this[0x11].CategoryName.ComparisonIndex.Value = 0;
    this[0x11].CategoryName.Number = 8;
    this[0x12]._padding_ = 0;
    *(undefined4 *)&this[0x12]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0x12]._padding_ + 4) = 0x20;
    *(undefined4 *)&this[0x12]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[0x12]._padding_ + 4) = 0;
    this[0x12].CategoryName.ComparisonIndex = 0;
    this[0x12].CategoryName.Number = 0;
    this[0x12].SectionName.ComparisonIndex.Value = 0;
    this[0x17]._padding_ = 0;
    this[0x17].CategoryName.ComparisonIndex.Value = 0;
    this[0x17].CategoryName.Number = 0x20;
    this[0x19]._padding_ = 0;
    *(undefined4 *)&this[0x19]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0x19]._padding_ + 4) = 8;
    this[0x1d].SectionName.ComparisonIndex = 0;
    this[0x1d].SectionName.Number = 0;
    *(undefined4 *)&this[0x1e]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0x1e]._padding_ + 4) = 0x20;
    this[0x1f]._padding_ = 0;
    *(undefined4 *)&this[0x1f]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0x1f]._padding_ + 4) = 8;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAsyncTaskDownloadImage> @ 1468f4690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAsyncTaskDownloadImage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UAsyncTaskDownloadImage__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBackgroundBlur> @ 1468f4760

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBackgroundBlur>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UContentWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBackgroundBlur::GetPrivateStaticClass();
  this = (UContentWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    *(undefined ***)this = &UBackgroundBlur::_vftable__for__UVisual__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)&this->field_0x28 = &UBackgroundBlur::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x40 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    FSlateBrush::FSlateBrush((FSlateBrush *)&this[1].field_0x48);
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined8 *)&this[1].field_0x100 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBackgroundBlurSlot> @ 1468f4870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBackgroundBlurSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBackgroundBlurSlot::GetPrivateStaticClass();
  this = (UPanelSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UBackgroundBlurSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBoolBinding> @ 1468f4930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBoolBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBoolBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UBoolBinding__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBorder> @ 1468f4a00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBorder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UContentWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBorder::GetPrivateStaticClass();
  this = (UContentWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    *(undefined ***)this = &UBorder::_vftable__for__UVisual__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)&this->field_0x28 = &UBorder::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    FSlateBrush::FSlateBrush((FSlateBrush *)&this[1].field_0x48);
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined8 *)&this[1].field_0x100 = 0;
    *(undefined8 *)&this[1].field_0x108 = 0;
    *(undefined8 *)&this[1].field_0x120 = 0;
    *(undefined8 *)&this[1].field_0x128 = 0;
    *(undefined8 *)&this[1].field_0x130 = 0;
    *(undefined8 *)&this[1].field_0x150 = 0;
    *(undefined8 *)&this[1].field_0x158 = 0;
    *(undefined8 *)&this[1].field_0x160 = 0;
    *(undefined8 *)&this[1].field_0x168 = 0;
    *(undefined8 *)&this[1].field_0x170 = 0;
    *(undefined8 *)&this[1].field_0x178 = 0;
    *(undefined8 *)&this[1].field_0x180 = 0;
    *(undefined8 *)&this[1].field_0x188 = 0;
    *(undefined8 *)&this[1].field_0x190 = 0;
    *(undefined8 *)&this[1].field_0x198 = 0;
    *(undefined8 *)&this[1].field_0x1a0 = 0;
    *(undefined8 *)&this[1].field_0x1a8 = 0;
    *(undefined8 *)&this[1].field_0x1b0 = 0;
    *(undefined8 *)&this[1].field_0x1b8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBorderSlot> @ 1468f4b80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBorderSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBorderSlot::GetPrivateStaticClass();
  this = (UPanelSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UBorderSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBrushBinding> @ 1468f4c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBrushBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBrushBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UBrushBinding__6B_;
    pUVar1[2].field_0x21 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UButton> @ 1468f4d10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UButton>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UContentWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UButton::GetPrivateStaticClass();
  this = (UContentWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    *(undefined ***)this = &UButton::_vftable__for__UVisual__;
    *(undefined ***)&this->field_0x28 = &UButton::_vftable__for__INotifyFieldValueChanged__;
    FButtonStyle::FButtonStyle((FButtonStyle *)&this[1].field_0x8);
    *(undefined8 *)&this[3].field_0x30 = 0;
    *(undefined8 *)&this[3].field_0x38 = 0;
    *(undefined8 *)&this[3].field_0x40 = 0;
    *(undefined8 *)&this[3].field_0x48 = 0;
    *(undefined8 *)&this[3].field_0x50 = 0;
    *(undefined8 *)&this[3].field_0x58 = 0;
    *(undefined8 *)&this[3].field_0x60 = 0;
    *(undefined8 *)&this[3].field_0x68 = 0;
    *(undefined8 *)&this[3].field_0x70 = 0;
    *(undefined8 *)&this[3].field_0x78 = 0;
    *(undefined8 *)&this[3].field_0x80 = 0;
    *(undefined8 *)&this[3].field_0x88 = 0;
    *(undefined8 *)&this[3].field_0x90 = 0;
    *(undefined8 *)&this[3].field_0x98 = 0;
    *(undefined8 *)&this[3].field_0xa0 = 0;
    *(undefined8 *)&this[3].field_0xa8 = 0;
    *(undefined8 *)&this[3].field_0xb0 = 0;
    *(undefined4 *)&this[3].field_0xb8 = 0;
    *(undefined8 *)&this[3].field_0xc0 = 0;
    *(undefined8 *)&this[3].field_0xc8 = 0;
    *(undefined4 *)&this[3].field_0xd0 = 0;
    *(undefined8 *)&this[3].field_0xd8 = 0;
    *(undefined8 *)&this[3].field_0xe0 = 0;
    *(undefined4 *)&this[3].field_0xe8 = 0;
    *(undefined8 *)&this[3].field_0xf0 = 0;
    *(undefined8 *)&this[3].field_0xf8 = 0;
    *(undefined4 *)&this[3].field_0x100 = 0;
    *(undefined8 *)&this[3].field_0x108 = 0;
    *(undefined8 *)&this[3].field_0x110 = 0;
    *(undefined4 *)&this[3].field_0x118 = 0;
    *(undefined8 *)&this[3].field_0x120 = 0;
    *(undefined8 *)&this[3].field_0x128 = 0;
    *(undefined4 *)&this[3].field_0x130 = 0;
    *(undefined8 *)&this[3].field_0x138 = 0;
    *(undefined8 *)&this[3].field_0x140 = 0;
    *(undefined4 *)&this[3].field_0x148 = 0;
    *(undefined8 *)&this[3].field_0x150 = 0;
    *(undefined8 *)&this[3].field_0x158 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UButtonSlot> @ 1468f4d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UButtonSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UButtonSlot::GetPrivateStaticClass();
  this = (UPanelSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UButtonSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCanvasPanel> @ 1468f4de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCanvasPanel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCanvasPanel::GetPrivateStaticClass();
  this = (UPanelWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelWidget *)0x0) {
    UPanelWidget::UPanelWidget(this,param_1);
    this->_padding_ = (longlong)&UCanvasPanel::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UCanvasPanel::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCanvasPanelSlot> @ 1468f4eb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCanvasPanelSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCanvasPanelSlot::GetPrivateStaticClass();
  this = (UPanelSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UCanvasPanelSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Parent.field0_0x0.DebugPtr = (UPanelWidget *)0x0;
    *(TVector2<double>_u_0 *)&this[1].Content =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCheckedStateBinding> @ 1468f4f80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCheckedStateBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCheckedStateBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UCheckedStateBinding__6B_;
    pUVar1[2].field_0x21 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UColorBinding> @ 1468f5050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UColorBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UColorBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UColorBinding__6B_;
    pUVar1[2].field_0x21 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFloatBinding> @ 1468f5120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFloatBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFloatBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UFloatBinding__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameViewportSubsystem> @ 1468f51f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameViewportSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameViewportSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UGameViewportSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 2;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0xc = 0x80;
    *(undefined4 *)&this[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInt32Binding> @ 1468f5310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInt32Binding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInt32Binding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UInt32Binding__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UListViewDesignerPreviewItem> @ 1468f53e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UListViewDesignerPreviewItem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UListViewDesignerPreviewItem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UListViewDesignerPreviewItem__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMouseCursorBinding> @ 1468f5490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMouseCursorBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMouseCursorBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UMouseCursorBinding__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScene2DTransformPropertySystem> @ 1468f5560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScene2DTransformPropertySystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePropertySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScene2DTransformPropertySystem::GetPrivateStaticClass();
  this = (UMovieScenePropertySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePropertySystem *)0x0) {
    UMovieScenePropertySystem::UMovieScenePropertySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieScene2DTransformPropertySystem::_vftable__for__UMovieSceneEntitySystem__;
    this->_padding_ =
         (longlong)
         &UMovieScene2DTransformPropertySystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScene2DTransformSection> @ 1468f5620

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScene2DTransformSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  UMovieSceneSection *pUVar3;
  
  pUVar3 = (UMovieSceneSection *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScene2DTransformSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UMovieScene2DTransformSection::_vftable__for__UMovieSceneSection__;
    this[1]._padding_ =
         (longlong)&UMovieScene2DTransformSection::_vftable__for__IMovieSceneEntityProvider__;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[1]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[2]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[3]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[4]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)&this[5].EvalOptions);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)&this[6].Easing.EaseIn.field_0x8);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)&this[7].Easing.EaseOut.field_0x8);
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UMovieScene2DTransformTrack> @ 1468f5730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScene2DTransformTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePropertyTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScene2DTransformTrack::GetPrivateStaticClass();
  this = (UMovieScenePropertyTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieScene2DTransformTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieScene2DTransformTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMarginPropertySystem> @ 1468f57f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneMarginPropertySystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePropertySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMarginPropertySystem::GetPrivateStaticClass();
  this = (UMovieScenePropertySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePropertySystem *)0x0) {
    UMovieScenePropertySystem::UMovieScenePropertySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneMarginPropertySystem::_vftable__for__UMovieSceneEntitySystem__;
    this->_padding_ =
         (longlong)
         &UMovieSceneMarginPropertySystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMarginSection> @ 1468f58b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneMarginSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMarginSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&UMovieSceneMarginSection::_vftable__for__UMovieSceneSection__;
    this[1]._padding_ =
         (longlong)&UMovieSceneMarginSection::_vftable__for__IMovieSceneEntityProvider__;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[1]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[2]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[3]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[4]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMarginTrack> @ 1468f59a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneMarginTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePropertyTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMarginTrack::GetPrivateStaticClass();
  this = (UMovieScenePropertyTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneMarginTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ = (longlong)&UMovieSceneMarginTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
    ;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialSystem> @ 1468f5a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneWidgetMaterialSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneWidgetMaterialSystem::_vftable__for__UMovieSceneEntitySystem__;
    this[1]._padding_ =
         (longlong)
         &UMovieSceneWidgetMaterialSystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    UE::MovieScene::
    TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
    ::
    TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
              ((TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
                *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialTrack> @ 1468f5b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneMaterialTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneWidgetMaterialTrack::GetPrivateStaticClass();
  this = (UMovieSceneMaterialTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneMaterialTrack *)0x0) {
    UMovieSceneMaterialTrack::UMovieSceneMaterialTrack(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)
         &UMovieSceneWidgetMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneWidgetMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ =
         (longlong)&UMovieSceneWidgetMaterialTrack::_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ =
         (longlong)
         &UMovieSceneWidgetMaterialTrack::_vftable__for__IMovieSceneParameterSectionExtender__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyBinding> @ 1468f5c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USlateAccessibleWidgetData> @ 1468f5cd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USlateAccessibleWidgetData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USlateAccessibleWidgetData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USlateAccessibleWidgetData__6B_;
    FText::FText((FText *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    FText::FText((FText *)&pUVar1[2].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextBinding> @ 1468f5db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UTextBinding__6B_;
    pUVar1[2].field_0x21 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUMGSequencePlayer> @ 1468f5e80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUMGSequencePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUMGSequencePlayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)(pUVar1 + 1));
    *(undefined ***)pUVar1 = &UUMGSequencePlayer::_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[0xd].field_0x10 = 0;
    *(undefined ***)(pUVar1 + 1) = &UUMGSequencePlayer::_vftable__for__IMovieScenePlayer__;
    *(undefined8 *)&pUVar1[0xd].field_0x18 = 0;
    FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
              ((FMovieSceneRootEvaluationTemplateInstance *)&pUVar1[0xd].field_0x20);
    *(undefined8 *)&pUVar1[0xe].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xe].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xf) = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x8 = 2;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UUMGSequenceTickManager> @ 1468f5f70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUMGSequenceTickManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUMGSequenceTickManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUMGSequenceTickManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserListEntry> @ 1468f6090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUserListEntry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserListEntry::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUserListEntry__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserListEntryLibrary> @ 1468f6140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUserListEntryLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserListEntryLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUserListEntryLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserObjectListEntry> @ 1468f61f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUserObjectListEntry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserObjectListEntry::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUserObjectListEntry__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserObjectListEntryLibrary> @ 1468f62a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UUserObjectListEntryLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserObjectListEntryLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUserObjectListEntryLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserWidgetBlueprint> @ 1468f6350

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

UObject * __cdecl InternalVTableHelperCtorCaller<UUserWidgetBlueprint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprint *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserWidgetBlueprint::GetPrivateStaticClass();
  this = (UBlueprint *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    this->_padding_ = (longlong)&UUserWidgetBlueprint::_vftable__for__UBlueprintCore__;
    this->_padding_ =
         (longlong)&UUserWidgetBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserWidgetExtension> @ 1468f6410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUserWidgetExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserWidgetExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUserWidgetExtension__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVisibilityBinding> @ 1468f64c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVisibilityBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVisibilityBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UVisibilityBinding__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetAnimation> @ 1468f6590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetAnimation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSequence *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetAnimation::GetPrivateStaticClass();
  this = (UMovieSceneSequence *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSequence *)0x0) {
    UMovieSceneSequence::UMovieSceneSequence(this,param_1);
    this->_padding_ = (longlong)&___7UWidgetAnimation__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetAnimationDelegateBinding> @ 1468f6660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetAnimationDelegateBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetAnimationDelegateBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetAnimationDelegateBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetAnimationHandleFunctionLibrary> @ 1468f6720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetAnimationHandleFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetAnimationHandleFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetAnimationHandleFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetAnimationPlayCallbackProxy> @ 1468f67d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetAnimationPlayCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetAnimationPlayCallbackProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetAnimationPlayCallbackProxy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetBinaryStateRegistration> @ 1468f68a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetBinaryStateRegistration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetBinaryStateRegistration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetBinaryStateRegistration__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetBinding> @ 1468f6950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UWidgetBinding__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetBlueprintGeneratedClassExtension> @ 1468f6a20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetBlueprintGeneratedClassExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetBlueprintGeneratedClassExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetBlueprintGeneratedClassExtension__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetDisabledStateRegistration> @ 1468f6ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetDisabledStateRegistration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetDisabledStateRegistration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetDisabledStateRegistration__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetEnumStateRegistration> @ 1468f6b80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetEnumStateRegistration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetEnumStateRegistration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetEnumStateRegistration__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetFieldNotificationExtension> @ 1468f6c30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetFieldNotificationExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetFieldNotificationExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetFieldNotificationExtension__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined2 *)&pUVar1[1].field_0x14 = 0xffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetHoveredStateRegistration> @ 1468f6cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetHoveredStateRegistration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetHoveredStateRegistration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetHoveredStateRegistration__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetNavigation> @ 1468f6da0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetNavigation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidgetNavigation *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetNavigation::GetPrivateStaticClass();
  pUVar3 = (UWidgetNavigation *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWidgetNavigation *)0x0) {
    pUVar3 = UWidgetNavigation::UWidgetNavigation(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetPressedStateRegistration> @ 1468f6e40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetPressedStateRegistration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetPressedStateRegistration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetPressedStateRegistration__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetSelectedStateRegistration> @ 1468f6ef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetSelectedStateRegistration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetSelectedStateRegistration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetSelectedStateRegistration__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetStateSettings> @ 1468f6fa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetStateSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetStateSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UWidgetStateSettings__6B_;
    this[0xc]._padding_ = 0;
    *(undefined4 *)&this[0xc]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0xc]._padding_ + 4) = 0x20;
    this[0xc].SectionName.ComparisonIndex = 0;
    this[0xc].SectionName.Number = 0;
    *(undefined4 *)&this[0xd]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0xd]._padding_ + 4) = 0x20;
    *(undefined4 *)&this[0xd]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[0xd]._padding_ + 4) = 0;
    this[0xe]._padding_ = 0;
    *(undefined4 *)&this[0xe]._padding_ = 0;
    this[0x11]._padding_ = 0;
    this[0x11].CategoryName.ComparisonIndex.Value = 0;
    this[0x11].CategoryName.Number = 8;
    this[0x12]._padding_ = 0;
    *(undefined4 *)&this[0x12]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0x12]._padding_ + 4) = 0x20;
    *(undefined4 *)&this[0x12]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[0x12]._padding_ + 4) = 0;
    this[0x12].CategoryName.ComparisonIndex = 0;
    this[0x12].CategoryName.Number = 0;
    this[0x12].SectionName.ComparisonIndex.Value = 0;
    this[0x17]._padding_ = 0;
    this[0x17].CategoryName.ComparisonIndex.Value = 0;
    this[0x17].CategoryName.Number = 0x20;
    this[0x19]._padding_ = 0;
    *(undefined4 *)&this[0x19]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0x19]._padding_ + 4) = 8;
    this[0x1d].SectionName.ComparisonIndex = 0;
    this[0x1d].SectionName.Number = 0;
    *(undefined4 *)&this[0x1e]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0x1e]._padding_ + 4) = 0x20;
    this[0x1f]._padding_ = 0;
    *(undefined4 *)&this[0x1f]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0x1f]._padding_ + 4) = 8;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsConcreteTypeCompatibleWithReflectedType<FLinearColor> @ 1468f7820

bool __cdecl IsConcreteTypeCompatibleWithReflectedType<FLinearColor>(FProperty *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `bool___cdecl_IsConcreteTypeCompatibleWithReflectedType_BuiltInStruct<FLinearColor>(FProperty*___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_IsConcreteTypeCompatibleWithReflectedType_BuiltInStruct<FLinearColor>(FProperty*___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_IsConcreteTypeCompatibleWithReflectedType_BuiltInStruct<FLinearColor>(FProperty*___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `bool___cdecl_IsConcreteTypeCompatibleWithReflectedType_BuiltInStruct<FLinearColor>(FProperty*___ptr64)'
      ::__l2::BuiltInStruct = TBaseStructure<FLinearColor>::Get();
      _Init_thread_footer(&`bool___cdecl_IsConcreteTypeCompatibleWithReflectedType_BuiltInStruct<FLinearColor>(FProperty*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return `bool___cdecl_IsConcreteTypeCompatibleWithReflectedType_BuiltInStruct<FLinearColor>(FProperty*___ptr64)'
             ::__l2::BuiltInStruct == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ ==
           `bool___cdecl_IsConcreteTypeCompatibleWithReflectedType_BuiltInStruct<FLinearColor>(FProperty*___ptr64)'
           ::__l2::BuiltInStruct;
  }
  return false;
}

// Iterate_PerAllocationImpl<`UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle>'::__l2::<lambda_1>_&> @ 1468f78d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>_>
::
Iterate_PerAllocationImpl<_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>::BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle>_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  EComponentHeaderLockMode EVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  TRead<UE::MovieScene::FRootInstanceHandle> TVar4;
  code *pcVar5;
  EEntityThreadingModel EVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  FEntityAllocation *pFVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  FComponentHeader *pFVar12;
  FComponentHeader *pFVar13;
  FEntityAllocationProxy local_b8;
  TRead<FWidgetMaterialHandle> local_a8;
  TRead<UObject_*> local_a0;
  FEntityAllocationIteratorProxy local_98;
  FEntityAllocationIterator local_88;
  FEntityAllocationIterator local_70;
  FEntityAllocationWriteContext local_58 [2];
  FEntityAllocationProxy local_48;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 &&
      (*(short *)&(this->Accessors).field_0x6 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
     ) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_58,param_1);
    EVar6 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_98,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_88,local_98.Manager,local_98.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_70,local_98.Manager);
    bVar7 = FEntityAllocationIterator::operator!=(&local_88,&local_70);
    if (bVar7) {
      do {
        FEntityAllocationIterator::operator*(&local_88,&local_b8);
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_b8);
        if (EVar6 == NoThreading) {
          pFVar8->LockMode = LockFree;
        }
        else {
          pFVar8 = (FEntityAllocation *)0x0;
        }
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_b8);
        pFVar11 = pFVar9->ComponentHeaders;
        pFVar12 = pFVar11 + pFVar9->NumComponents;
        for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 1) {
          if ((pFVar11->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x6)
          goto LAB_1468f7a28;
        }
        pFVar11 = (FComponentHeader *)0x0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_1468f7a28:
        EVar1 = pFVar9->LockMode;
        if (EVar1 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
        }
        LOCK();
        pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + 1);
        UNLOCK();
        local_a8 = (TRead<FWidgetMaterialHandle>)pFVar11->Components;
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_b8);
        pFVar12 = pFVar9->ComponentHeaders;
        pFVar13 = pFVar12 + pFVar9->NumComponents;
        for (; pFVar12 != pFVar13; pFVar12 = pFVar12 + 1) {
          if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4)
          goto LAB_1468f7aa9;
        }
        pFVar12 = (FComponentHeader *)0x0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_1468f7aa9:
        EVar2 = pFVar9->LockMode;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        LOCK();
        pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
        UNLOCK();
        local_a0 = (TRead<UObject_*>)pFVar12->Components;
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_b8);
        pFVar13 = pFVar9->ComponentHeaders;
        pFVar10 = pFVar13 + pFVar9->NumComponents;
        for (; pFVar13 != pFVar10; pFVar13 = pFVar13 + 1) {
          if ((pFVar13->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_1468f7b29;
        }
        pFVar13 = (FComponentHeader *)0x0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_1468f7b29:
        EVar3 = pFVar9->LockMode;
        if (EVar3 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        TVar4 = (TRead<UE::MovieScene::FRootInstanceHandle>)pFVar13->Components;
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_b8);
        local_48.Manager = local_b8.Manager;
        local_48.AllocationIndex = local_b8.AllocationIndex;
        local_48._12_4_ = local_b8._12_4_;
        `UE::MovieScene::
        TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
        ::
        BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle>'
        ::__l2::<lambda_1>::operator()
                  (param_3,&local_48,(TRead<UE::MovieScene::FMovieSceneEntityID>)pFVar9->EntityIDs,
                   TVar4,local_a0,local_a8);
        LOCK();
        pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar1 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
        }
        LOCK();
        pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar3 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        if (pFVar8 != (FEntityAllocation *)0x0) {
          pFVar8->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_88);
        bVar7 = FEntityAllocationIterator::operator!=(&local_88,&local_70);
      } while (bVar7);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_88);
  }
  return;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>_const_,int,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_> @ 1468f7c40

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>_const_,int,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
          (TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>
           *param_1,int param_2,FInterrogationChannel *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FInterrogationChannel_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>_const_,int,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_> @ 1468f7c90

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>_const_,int,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
          (TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>
           *param_1,int param_2,FInterrogationChannel *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FInterrogationChannel_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 1468f7cf0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
           *param_1,int param_2,FPreAnimatedStorageIndex *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      if ((*(int *)(param_1 + iVar1) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar2 = *(int *)(param_1 + iVar1);
      if ((param_3->Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (iVar2 < param_3->Value) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar4 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar4 != 0);
  }
  return iVar6;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 1468f7dd0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
           *param_1,int param_2,FPreAnimatedStorageIndex *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      if ((*(int *)(param_1 + iVar1) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar2 = *(int *)(param_1 + iVar1);
      if ((param_3->Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (iVar2 < param_3->Value) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar4 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar4 != 0);
  }
  return iVar6;
}

// MakeTDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs> @ 1468f8230

TSlateDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MutableView<TObjectPtr<UUMGSequencePlayer>_> @ 1468f82e0

/* WARNING: Enum "Type": Some values do not have unique names */

TMutableView<TObjectPtr<UUMGSequencePlayer>_> __cdecl
MutableView<TObjectPtr<UUMGSequencePlayer>_>(TObjectPtr<UUMGSequencePlayer> *param_1)

{
  TObjectPtr<UUMGSequencePlayer>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UUMGSequencePlayer>_>)(UUMGSequencePlayer **)param_1;
}

// NewObject<UAsyncTaskDownloadImage> @ 1468f8df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncTaskDownloadImage * __cdecl NewObject<UAsyncTaskDownloadImage>(UObject *param_1)

{
  UClass *pUVar1;
  UAsyncTaskDownloadImage *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAsyncTaskDownloadImage::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAsyncTaskDownloadImage *)
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

// NewObject<UBackgroundBlurSlot> @ 1468f8e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBackgroundBlurSlot * __cdecl NewObject<UBackgroundBlurSlot>(UObject *param_1)

{
  UClass *pUVar1;
  UBackgroundBlurSlot *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UBackgroundBlurSlot::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBackgroundBlurSlot *)
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

// NewObject<UBorderSlot> @ 1468f8f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBorderSlot * __cdecl NewObject<UBorderSlot>(UObject *param_1)

{
  UClass *pUVar1;
  UBorderSlot *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UBorderSlot::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBorderSlot *)
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

// NewObject<UButtonSlot> @ 1468f8fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UButtonSlot * __cdecl NewObject<UButtonSlot>(UObject *param_1)

{
  UClass *pUVar1;
  UButtonSlot *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UButtonSlot::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UButtonSlot *)
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

// NewObject<UMovieScene2DTransformSection> @ 1468f9070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScene2DTransformSection * __cdecl
NewObject<UMovieScene2DTransformSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieScene2DTransformSection *pUVar2;
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
  pUVar1 = UMovieScene2DTransformSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieScene2DTransformSection *)
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

// NewObject<UMovieSceneMarginSection> @ 1468f9160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneMarginSection * __cdecl
NewObject<UMovieSceneMarginSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneMarginSection *pUVar2;
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
  pUVar1 = UMovieSceneMarginSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneMarginSection *)
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

// NewObject<UUMGSequencePlayer> @ 1468f9250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUMGSequencePlayer * __cdecl NewObject<UUMGSequencePlayer>(UObject *param_1)

{
  UClass *pUVar1;
  UUMGSequencePlayer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UUMGSequencePlayer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUMGSequencePlayer *)
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

// NewObject<UUMGSequenceTickManager> @ 1468f92f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUMGSequenceTickManager * __cdecl
NewObject<UUMGSequenceTickManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UUMGSequenceTickManager *pUVar2;
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
  pUVar1 = UUMGSequenceTickManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UUMGSequenceTickManager *)
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

// NewObject<UWidgetAnimationPlayCallbackProxy> @ 1468f93e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWidgetAnimationPlayCallbackProxy * __cdecl
NewObject<UWidgetAnimationPlayCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UWidgetAnimationPlayCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UWidgetAnimationPlayCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWidgetAnimationPlayCallbackProxy *)
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

// NoneOf<bool_[7]> @ 1468f9480

bool __cdecl Algo::NoneOf<bool_[7]>(bool (*param_1) [7])

{
  bool (*pabVar1) [7];
  
  pabVar1 = param_1 + 1;
  while( true ) {
    if (param_1 == pabVar1) {
      return true;
    }
    if ((*param_1)[0] != '\0') break;
    param_1 = (bool (*) [7])((longlong)param_1 + 1);
  }
  return false;
}

// ObjectPtrWrap<UUMGSequencePlayer_*,TObjectPtr<UUMGSequencePlayer>_> @ 1468f94b0

/* WARNING: Enum "Type": Some values do not have unique names */

TObjectPtr<UUMGSequencePlayer> * __cdecl
ObjectPtrWrap<UUMGSequencePlayer_*,TObjectPtr<UUMGSequencePlayer>_>(UUMGSequencePlayer **param_1)

{
  return (TObjectPtr<UUMGSequencePlayer> *)param_1;
}

// RemoveAll<`TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 1468fa460

int __thiscall
TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  
  iVar1 = this->ArrayNum;
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  plVar2 = *(longlong **)param_1;
  iVar12 = 0;
  pFVar3 = (this->AllocatorInstance).Data;
  if ((((*(longlong *)pFVar3 == *plVar2) && (*(longlong *)(pFVar3 + 8) == plVar2[1])) &&
      (((*(int *)(pFVar3 + 0x1c) == *(int *)((longlong)plVar2 + 0x1c) &&
        *(int *)(pFVar3 + 0x18) == (int)plVar2[3]) &&
       *(int *)(pFVar3 + 0x14) == *(int *)((longlong)plVar2 + 0x14)) &&
       *(int *)(pFVar3 + 0x10) == (int)plVar2[2])) &&
     ((pFVar3[0x20] == *(FScriptContainerElement *)(plVar2 + 4) &&
      (*(longlong *)(pFVar3 + 0x28) == plVar2[5])))) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar11) {
      plVar2 = *(longlong **)param_1;
      pFVar4 = pFVar3 + lVar6 * 0x50 + 0x1c;
      do {
        if (((*(longlong *)(pFVar4 + -0x1c) == *plVar2) &&
            (*(longlong *)(pFVar4 + -0x14) == plVar2[1])) &&
           ((((*(int *)(pFVar4 + -0xc) == (int)plVar2[2] &&
              *(int *)(pFVar4 + -8) == *(int *)((longlong)plVar2 + 0x14)) &&
             *(int *)(pFVar4 + -4) == (int)plVar2[3]) &&
             *(int *)pFVar4 == *(int *)((longlong)plVar2 + 0x1c) &&
            ((pFVar4[4] == *(FScriptContainerElement *)(plVar2 + 4) &&
             (*(longlong *)(pFVar4 + 0xc) == plVar2[5])))))) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        if (bVar10 != bVar5) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
        pFVar4 = pFVar4 + 0x50;
      } while (lVar6 < lVar11);
    }
    iVar9 = iVar8 - iVar7;
    if (bVar10 == 0) {
      DestructItems<FWidgetAnimationBinding,int>
                ((FWidgetAnimationBinding *)(pFVar3 + (longlong)iVar7 * 0x50),iVar9);
    }
    else {
      if (iVar12 != iVar7) {
        memmove(pFVar3 + (longlong)iVar12 * 0x50,pFVar3 + (longlong)iVar7 * 0x50,
                (longlong)iVar9 * 0x50);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar10 = bVar10 ^ 1;
    iVar7 = iVar8;
    if (lVar11 <= lVar6) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// RemoveAll<`UWidgetAnimation::RemoveBinding'::__l2::<lambda_1>_> @ 1468fa640

int __thiscall
TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::
RemoveAll<_UWidgetAnimation::RemoveBinding_::__l2::<lambda_1>_>
          (TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  
  iVar1 = this->ArrayNum;
  lVar5 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  if ((((*(uint *)pFVar2 == (param_1->WidgetName->ComparisonIndex).Value) &&
       (*(uint *)(pFVar2 + 4) == param_1->WidgetName->Number)) &&
      (*(uint *)(pFVar2 + 8) == (param_1->SlotWidgetName->ComparisonIndex).Value)) &&
     (*(uint *)(pFVar2 + 0xc) == param_1->SlotWidgetName->Number)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  lVar6 = 0;
  iVar8 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar9 = iVar8 + 1;
    if (lVar6 < lVar5) {
      pFVar3 = pFVar2 + (lVar6 * 0x14 + 2) * 4;
      do {
        if (((*(uint *)(pFVar3 + -8) == (param_1->WidgetName->ComparisonIndex).Value) &&
            (*(uint *)(pFVar3 + -4) == param_1->WidgetName->Number)) &&
           ((*(uint *)pFVar3 == (param_1->SlotWidgetName->ComparisonIndex).Value &&
            (*(uint *)(pFVar3 + 4) == param_1->SlotWidgetName->Number)))) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar10 != bVar4) break;
        iVar9 = iVar9 + 1;
        lVar6 = lVar6 + 1;
        pFVar3 = pFVar3 + 0x50;
      } while (lVar6 < lVar5);
    }
    iVar7 = iVar9 - iVar8;
    if (bVar10 == 0) {
      DestructItems<FWidgetAnimationBinding,int>
                ((FWidgetAnimationBinding *)(pFVar2 + (longlong)iVar8 * 0x50),iVar7);
    }
    else {
      if (iVar11 != iVar8) {
        memmove(pFVar2 + (longlong)iVar11 * 0x50,pFVar2 + (longlong)iVar8 * 0x50,
                (longlong)iVar7 * 0x50);
      }
      iVar11 = iVar11 + iVar7;
    }
    bVar10 = bVar10 ^ 1;
    iVar8 = iVar9;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// RemoveAll<`UWidgetAnimation::UnbindPossessableObjects'::__l2::<lambda_1>_> @ 1468fa7e0

int __thiscall
TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::
RemoveAll<_UWidgetAnimation::UnbindPossessableObjects_::__l2::<lambda_1>_>
          (TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FGuid *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = this->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar3 = param_1->ObjectId;
  iVar10 = 0;
  bVar11 = ((*(uint *)(pFVar2 + 0x1c) != pFVar3->D || *(uint *)(pFVar2 + 0x18) != pFVar3->C) ||
           *(uint *)(pFVar2 + 0x14) != pFVar3->B) || pFVar3->A != *(uint *)(pFVar2 + 0x10);
  lVar5 = 0;
  iVar7 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar8 = iVar7 + 1;
    if (lVar5 < lVar9) {
      pFVar3 = param_1->ObjectId;
      pFVar4 = pFVar2 + lVar5 * 0x50 + 0x18;
      do {
        if (bVar11 != (((pFVar3->A != *(uint *)(pFVar4 + -8) || pFVar3->B != *(uint *)(pFVar4 + -4))
                       || pFVar3->D != *(uint *)(pFVar4 + 4)) || pFVar3->C != *(uint *)pFVar4))
        break;
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 1;
        pFVar4 = pFVar4 + 0x50;
      } while (lVar5 < lVar9);
    }
    iVar6 = iVar8 - iVar7;
    if (bVar11 == false) {
      DestructItems<FWidgetAnimationBinding,int>
                ((FWidgetAnimationBinding *)(pFVar2 + (longlong)iVar7 * 0x50),iVar6);
    }
    else {
      if (iVar10 != iVar7) {
        memmove(pFVar2 + (longlong)iVar10 * 0x50,pFVar2 + (longlong)iVar7 * 0x50,
                (longlong)iVar6 * 0x50);
      }
      iVar10 = iVar10 + iVar6;
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar7 = iVar8;
    if (lVar9 <= lVar5) {
      this->ArrayNum = iVar10;
      return iVar1 - iVar10;
    }
  } while( true );
}

// StaticEnum<enum_ESlateAccessibleBehavior> @ 1468fcfc0

UEnum * __cdecl StaticEnum<enum_ESlateAccessibleBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_ESlateAccessibleBehavior,(UObject *)pUVar1,
                       L"ESlateAccessibleBehavior");
  }
  return Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton;
}

// StaticEnum<enum_ESlateVisibility> @ 1468fd000

UEnum * __cdecl StaticEnum<enum_ESlateVisibility>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_ESlateVisibility,(UObject *)pUVar1,L"ESlateVisibility")
    ;
  }
  return Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton;
}

// StaticEnum<enum_ESlateSizeRule::Type> @ 1468fd040

UEnum * __cdecl StaticEnum<enum_ESlateSizeRule::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_ESlateSizeRule,(UObject *)pUVar1,L"ESlateSizeRule");
  }
  return Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton;
}

// StaticEnum<enum_EUMGSequencePlayMode::Type> @ 1468fd080

UEnum * __cdecl StaticEnum<enum_EUMGSequencePlayMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EUMGSequencePlayMode,(UObject *)pUVar1,
                       L"EUMGSequencePlayMode");
  }
  return Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton;
}

// StaticEnum<enum_EVirtualKeyboardType::Type> @ 1468fd0c0

UEnum * __cdecl StaticEnum<enum_EVirtualKeyboardType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EVirtualKeyboardType,(UObject *)pUVar1,
                       L"EVirtualKeyboardType");
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 1468fd8b0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x38;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x38 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 1468fd960

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x38;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x38 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 1468fda10

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x38;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x48;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x40 =
       *(undefined8 *)&(param_2->Components).field_0x40;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x48 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd> @ 1468fde20

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
           *this,TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
                 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined2 *)this = *(undefined2 *)param_1;
  this->field_0x18 = 0;
  cVar1 = param_1->field_0x18;
  this->field_0x18 = cVar1;
  if (cVar1 != '\0') {
    uVar2 = *(undefined8 *)&param_1->field_0xc;
    *(undefined8 *)&this->field_0x4 = *(undefined8 *)&param_1->field_0x4;
    *(undefined8 *)&this->field_0xc = uVar2;
    *(undefined4 *)&this->field_0x14 = *(undefined4 *)&param_1->field_0x14;
  }
  *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
  this->field_0x30 = 0;
  cVar1 = param_1->field_0x30;
  this->field_0x30 = cVar1;
  if (cVar1 != '\0') {
    uVar2 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
    *(undefined8 *)&this->field_0x28 = uVar2;
  }
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  this->field_0x48 = 0;
  cVar1 = param_1->field_0x48;
  this->field_0x48 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  }
  *(undefined4 *)&this->field_0x50 = *(undefined4 *)&param_1->field_0x50;
  this->field_0x60 = 0;
  cVar1 = param_1->field_0x60;
  this->field_0x60 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x58 = *(undefined8 *)&param_1->field_0x58;
  }
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)&param_1->field_0x68;
  this->field_0x78 = 0;
  cVar1 = param_1->field_0x78;
  this->field_0x78 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
  }
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_1->field_0x80;
  this->field_0x90 = 0;
  cVar1 = param_1->field_0x90;
  this->field_0x90 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x88 = *(undefined8 *)&param_1->field_0x88;
  }
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)&param_1->field_0x98;
  this->field_0xa8 = 0;
  cVar1 = param_1->field_0xa8;
  this->field_0xa8 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_1->field_0xa0;
  }
  *(undefined4 *)&this->field_0xb0 = *(undefined4 *)&param_1->field_0xb0;
  this->field_0xc0 = 0;
  cVar1 = param_1->field_0xc0;
  this->field_0xc0 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0xb8 = *(undefined8 *)&param_1->field_0xb8;
  }
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)&param_1->field_0xc8;
  this->field_0xd8 = 0;
  cVar1 = param_1->field_0xd8;
  this->field_0xd8 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&param_1->field_0xd0;
  }
  *(undefined2 *)&this->field_0xe0 = *(undefined2 *)&param_1->field_0xe0;
  return this;
}

// ~TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::<lambda_1>,1,1> @ 1469030e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UAsyncTaskDownloadImage::HandleImageRequest_::__l21::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::`21'::<lambda_1>,1,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_> @ 146903da0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xf0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xf0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xf8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xf0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xd8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xd8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xe0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xd8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xc0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xc0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xc0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)&this->field_0x18);
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146903ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_> @ 146903f00

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xf0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xf0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xf8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xf0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xd8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xd8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xe0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xd8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xc0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xc0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xc0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)&this->field_0x18);
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146904047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// `vector_deleting_destructor' @ 146905ff0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FIntermediateMargin>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FIntermediateMargin> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FIntermediateMargin> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 146906090

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FIntermediateWidgetTransform>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FIntermediateWidgetTransform> *this,
          uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FIntermediateWidgetTransform> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 146906130

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FWidgetMaterialPath>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FWidgetMaterialPath> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FWidgetMaterialPath> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 1469061d0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FWidgetMaterialHandle>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FWidgetMaterialHandle> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FWidgetMaterialHandle> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146906264

/* [thunk]:public: virtual void * __ptr64 __cdecl UBackgroundBlur::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBackgroundBlur::_vector_deleting_destructor__adjustor_40__(UBackgroundBlur *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBackgroundBlur *)&this[-1].LowQualityFallbackBrush.ResourceHandle,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146906274

/* [thunk]:public: virtual void * __ptr64 __cdecl UBorder::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall UBorder::_vector_deleting_destructor__adjustor_40__(UBorder *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBorder *)&this[-1].OnMouseDoubleClickEvent.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146906284

/* [thunk]:public: virtual void * __ptr64 __cdecl UButton::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall UButton::_vector_deleting_destructor__adjustor_40__(UButton *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UButton *)&this[-1].OnLostFocus.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146906294

/* [thunk]:public: virtual void * __ptr64 __cdecl UCanvasPanel::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCanvasPanel::_vector_deleting_destructor__adjustor_40__(UCanvasPanel *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCanvasPanel *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 1469062a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieScene2DTransformPropertySystem::`vector
   deleting destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UMovieScene2DTransformPropertySystem::_vector_deleting_destructor__adjustor_72__
          (UMovieScene2DTransformPropertySystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieScene2DTransformPropertySystem *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{272}' @ 1469062b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieScene2DTransformSection::`vector deleting
   destructor'`adjustor{272}' (unsigned int) __ptr64 */

void * __thiscall
UMovieScene2DTransformSection::_vector_deleting_destructor__adjustor_272__
          (UMovieScene2DTransformSection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieScene2DTransformSection *)&this[-1].Shear[1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 1469062c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneMarginPropertySystem::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneMarginPropertySystem::_vector_deleting_destructor__adjustor_72__
          (UMovieSceneMarginPropertySystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneMarginPropertySystem *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{272}' @ 1469062d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneMarginSection::`vector deleting
   destructor'`adjustor{272}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneMarginSection::_vector_deleting_destructor__adjustor_272__
          (UMovieSceneMarginSection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneMarginSection *)&this[-1].BottomCurve._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 1469062ec

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneWidgetMaterialSystem::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneWidgetMaterialSystem::_vector_deleting_destructor__adjustor_72__
          (UMovieSceneWidgetMaterialSystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneWidgetMaterialSystem *)
                      ((longlong)
                       this[-1].SystemImpl.ReinitializeBoundMaterials.Filter.NoneMask.Bits.
                       AllocatorInstance.InlineData + 0x18),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{304}' @ 1469062fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneWidgetMaterialTrack::`vector deleting
   destructor'`adjustor{304}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneWidgetMaterialTrack::_vector_deleting_destructor__adjustor_304__
          (UMovieSceneWidgetMaterialTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneWidgetMaterialTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{312}' @ 146906310

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneWidgetMaterialTrack::`vector deleting
   destructor'`adjustor{312}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneWidgetMaterialTrack::_vector_deleting_destructor__adjustor_312__
          (UMovieSceneWidgetMaterialTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneWidgetMaterialTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146906324

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UUMGSequencePlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUMGSequencePlayer::_vector_deleting_destructor__adjustor_40__
          (UUMGSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UUMGSequencePlayer *)&this[-1].RootTemplateInstance.bOwnsSharedPlaybackState,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 146906334

/* [thunk]:public: virtual void * __ptr64 __cdecl UUserWidgetBlueprint::`vector deleting
   destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
UUserWidgetBlueprint::_vector_deleting_destructor__adjustor_80__
          (UUserWidgetBlueprint *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUserWidgetBlueprint *)&this[-1].field_0x58,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146906350

void * __thiscall
PropertyPathHelpersInternal::FInternalGetterResolver<unsigned_char>::_scalar_deleting_destructor_
          (FInternalGetterResolver<unsigned_char> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906390

void * __thiscall
PropertyPathHelpersInternal::FInternalGetterResolver<double>::_scalar_deleting_destructor_
          (FInternalGetterResolver<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469063d0

void * __thiscall
PropertyPathHelpersInternal::FInternalGetterResolver<FLinearColor>::_scalar_deleting_destructor_
          (FInternalGetterResolver<FLinearColor> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906410

void * __thiscall
PropertyPathHelpersInternal::FInternalGetterResolver<FSlateBrush>::_scalar_deleting_destructor_
          (FInternalGetterResolver<FSlateBrush> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906450

void * __thiscall
PropertyPathHelpersInternal::FInternalGetterResolver<FSlateColor>::_scalar_deleting_destructor_
          (FInternalGetterResolver<FSlateColor> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906490

void * __thiscall
PropertyPathHelpersInternal::FInternalGetterResolver<FText>::_scalar_deleting_destructor_
          (FInternalGetterResolver<FText> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469064d0

void * __thiscall
IBaseDelegateInstance<FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906500

void * __thiscall
IBaseDelegateInstance<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906530

void * __thiscall
IBaseDelegateInstance<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906560

void * __thiscall
IBaseDelegateInstance<void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906590

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469065c0

void * __thiscall
UE::MovieScene::
TAddBoundMaterialMutationImpl<UE::MovieScene::FWidgetMaterialAccessor,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
::_scalar_deleting_destructor_
          (TAddBoundMaterialMutationImpl<UE::MovieScene::FWidgetMaterialAccessor,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906600

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906630

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906690

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469066c0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469066f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UBorder_const_,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FLinearColor>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UBorder_const_,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FLinearColor>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906730

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UBorder_const_,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FSlateBrush>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UBorder_const_,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FSlateBrush>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  this->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906790

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncTaskDownloadImage,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAsyncTaskDownloadImage,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469067c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBorder,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UBorder,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469067f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UButton,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UButton,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906820

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UButton,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UButton,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906850

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UButton,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UButton,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906880

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UButton,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UButton,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469068b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UButton,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UButton,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469068e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UButton,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UButton,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906910

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameViewportSubsystem,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameViewportSubsystem,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906940

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameViewportSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameViewportSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906970

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UUMGSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UUMGSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469069a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWidgetAnimationPlayCallbackProxy,void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWidgetAnimationPlayCallbackProxy,void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469069d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWidgetAnimationPlayCallbackProxy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWidgetAnimationPlayCallbackProxy,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906a00

void * __thiscall
UE::MovieScene::TChildEntityInitializer<UE::MovieScene::FWidgetMaterialPath,FWidgetMaterialHandle>::
_scalar_deleting_destructor_
          (TChildEntityInitializer<UE::MovieScene::FWidgetMaterialPath,FWidgetMaterialHandle> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906a40

void * __thiscall
TCommonDelegateInstanceState<FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906a70

void * __thiscall
TCommonDelegateInstanceState<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FLinearColor>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FLinearColor>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0x18);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906ab0

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906ae0

void * __thiscall
TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FSlateBrush>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FSlateBrush>_>
           *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0xb8);
  pTVar1 = *(TReferenceControllerBase<1> **)&(this->Payload).field_0xa0;
  *(undefined ***)&this->Payload = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906b40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906b70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906ba0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906bd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906c00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FIntermediateMargin>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FIntermediateMargin> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FIntermediateMargin>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906c40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FIntermediateWidgetTransform>::_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FIntermediateWidgetTransform> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FIntermediateWidgetTransform>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906c80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FWidgetMaterialPath>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FWidgetMaterialPath> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FWidgetMaterialPath>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906cc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FWidgetMaterialHandle>::
_scalar_deleting_destructor_(TComplexComponentOps<FWidgetMaterialHandle> *this,uint param_1)

{
  *this = (TComplexComponentOps<FWidgetMaterialHandle>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906d00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FIntermediateMargin>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906d40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform> *this,uint param_1
          )

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FIntermediateWidgetTransform>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906d80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FWidgetMaterialPath>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906dc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FWidgetMaterialHandle>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<FWidgetMaterialHandle> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FWidgetMaterialHandle>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906e00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FIntermediateMargin>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FIntermediateMargin> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906e40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FIntermediateWidgetTransform>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FIntermediateWidgetTransform>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906e80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FWidgetMaterialPath>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FWidgetMaterialPath> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906ec0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<FWidgetMaterialHandle>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<FWidgetMaterialHandle> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906f00

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FIntermediateMargin>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FIntermediateMargin> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906f40

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FIntermediateWidgetTransform>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FIntermediateWidgetTransform> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906f80

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FWidgetMaterialPath>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FWidgetMaterialPath> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146906fc0

void * __thiscall
UE::MovieScene::TComponentHeader<FWidgetMaterialHandle>::_scalar_deleting_destructor_
          (TComponentHeader<FWidgetMaterialHandle> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907000

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FIntermediateMargin>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FIntermediateMargin> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907050

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FIntermediateWidgetTransform>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FIntermediateWidgetTransform> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469070a0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FWidgetMaterialPath>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FWidgetMaterialPath> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469070f0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FWidgetMaterialHandle>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FWidgetMaterialHandle> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907140

void * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,1>
::_scalar_deleting_destructor_
          (TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,1>
           *this,uint param_1)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907190

void * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,1>
::_scalar_deleting_destructor_
          (TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,1>
           *this,uint param_1)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469071e0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateMargin>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateMargin> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907220

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateWidgetTransform>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateWidgetTransform> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907260

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FWidgetMaterialPath>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FWidgetMaterialPath> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469072a0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FWidgetMaterialHandle>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FWidgetMaterialHandle> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469072e0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907320

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907360

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469073a0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469073e0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907420

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907460

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469074a0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469074e0

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_> *this,
          uint param_1)

{
  if ((this->field_0x30 != '\0') && (*(void **)&this->field_0x20 != (void *)0x0)) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907540

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  if ((this->field_0x30 != '\0') && (*(void **)&this->field_0x20 != (void *)0x0)) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469075a0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469075e0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907620

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907660

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469076a0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469076e0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907720

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907760

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469077a0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  void *pvVar1;
  
  if (((this->Payload).field_0x28 != '\0') &&
     (pvVar1 = *(void **)&(this->Payload).field_0x18, pvVar1 != (void *)0x0)) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907800

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  if (((this->Payload).field_0x28 != '\0') &&
     (pvVar1 = *(void **)&(this->Payload).field_0x18, pvVar1 != (void *)0x0)) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907860

void * __thiscall
UE::MovieScene::
TEntityGroupingHandler<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,UObject_*,FWidgetMaterialHandle>
::_scalar_deleting_destructor_
          (TEntityGroupingHandler<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,UObject_*,FWidgetMaterialHandle>
           *this,uint param_1)

{
  TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
  ::
  ~TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
            ((TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469078a0

void * __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
::_scalar_deleting_destructor_
          (TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
           *this,uint param_1)

{
  ~TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469078e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::`21'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907930

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907990

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469079f0

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907a50

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907ab0

void * __thiscall
UE::MovieScene::
TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
::_scalar_deleting_destructor_
          (TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined ***)this = &___7IInitialValueProcessor_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907b00

void * __thiscall
UE::MovieScene::
TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
::_scalar_deleting_destructor_
          (TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined ***)this = &___7IInitialValueProcessor_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907b50

void * __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::_scalar_deleting_destructor_
          (TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ValuesByChannel).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInitialValueProcessor_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907ba0

void * __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::_scalar_deleting_destructor_
          (TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ValuesByChannel).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInitialValueProcessor_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907bf0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907c30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907c70

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907cb0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907cf0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907d30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907d70

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907db0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907df0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907e30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907e70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBackgroundBlur,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SBackgroundBlur,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907eb0

void * __thiscall
UE::MovieScene::TPlaybackCapabilityDebuggingTypedPtr<FMovieSceneEvaluationState>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<FMovieSceneEvaluationState> *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907ef0

void * __thiscall
UE::MovieScene::TPlaybackCapabilityDebuggingTypedPtr<UE::UMG::FUMGLegacyPlayerProvider>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<UE::UMG::FUMGLegacyPlayerProvider> *this,
          uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907f30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::_scalar_deleting_destructor_
          (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907f70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::
TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::_scalar_deleting_destructor_
          (TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
::_scalar_deleting_destructor_
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
           *this,uint param_1)

{
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146907ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
::_scalar_deleting_destructor_
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
           *this,uint param_1)

{
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908030

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::_scalar_deleting_destructor_
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
           *this,uint param_1)

{
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908070

void * __thiscall
UE::MovieScene::
TPropertyComponentHandler<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,double,double,double,double>
::_scalar_deleting_destructor_
          (TPropertyComponentHandler<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,double,double,double,double>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469080b0

void * __thiscall
UE::MovieScene::
TPropertyComponentHandler<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,double,double,double,double,double,double,double>
::_scalar_deleting_destructor_
          (TPropertyComponentHandler<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,double,double,double,double,double,double,double>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469080f0

void * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
::_scalar_deleting_destructor_
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPropertyComponentHandler_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908130

void * __thiscall
UE::MovieScene::
TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
::_scalar_deleting_destructor_
          (TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPropertyComponentHandler_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908170

void * __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<unsigned_char>_>::
_scalar_deleting_destructor_
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<unsigned_char>_>
           *this,uint param_1)

{
  *this = (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<unsigned_char>_>
           )&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469081b0

void * __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<double>_>::
_scalar_deleting_destructor_
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<double>_>
           *this,uint param_1)

{
  *this = (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<double>_>)
          &___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469081f0

void * __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FLinearColor>_>::
_scalar_deleting_destructor_
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FLinearColor>_>
           *this,uint param_1)

{
  *this = (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FLinearColor>_>
           )&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908230

void * __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FSlateBrush>_>::
_scalar_deleting_destructor_
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FSlateBrush>_>
           *this,uint param_1)

{
  *this = (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FSlateBrush>_>
          )&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908270

void * __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FSlateColor>_>::
_scalar_deleting_destructor_
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FSlateColor>_>
           *this,uint param_1)

{
  *this = (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FSlateColor>_>
          )&___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469082b0

void * __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FText>_>::
_scalar_deleting_destructor_
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FText>_> *this
          ,uint param_1)

{
  *this = (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FText>_>)
          &___7FPropertyPathResolver_PropertyPathHelpersInternal__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469082f0

void * __thiscall
UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>::
_scalar_deleting_destructor_
          (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> *this,uint param_1)

{
  *this = (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>)
          &___7IPropertyTraits_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908330

void * __thiscall
UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>::
_scalar_deleting_destructor_
          (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> *this,
          uint param_1)

{
  *this = (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>)
          &___7IPropertyTraits_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908370

void * __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
::_scalar_deleting_destructor_
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->KeyToPropertyIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToPropertyIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToPropertyIndex);
  TSparseArray<UE::MovieScene::FIntermediateMargin,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FIntermediateMargin,FDefaultSparseArrayAllocator>
            (&this->PropertyValues);
  this->_padding_ = (longlong)&___7IPropertyValueStorage_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469083f0

void * __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
::_scalar_deleting_destructor_
          (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->KeyToPropertyIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToPropertyIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToPropertyIndex);
  TSparseArray<UE::MovieScene::FIntermediateWidgetTransform,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FIntermediateWidgetTransform,FDefaultSparseArrayAllocator>
            (&this->PropertyValues);
  this->_padding_ = (longlong)&___7IPropertyValueStorage_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908470

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469084b0

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469084f0

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908530

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908570

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateMargin>::
_scalar_deleting_destructor_
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateMargin> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469085b0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateWidgetTransform>
::_scalar_deleting_destructor_
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateWidgetTransform> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469085f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage::_scalar_deleting_destructor_
          (FPreAnimatedWidgetMaterialParameterStorage *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908630

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage::_scalar_deleting_destructor_
          (FPreAnimatedWidgetMaterialSwitcherStorage *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908670

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::UMG::FUMGLegacyPlayerProvider::_scalar_deleting_destructor_
          (FUMGLegacyPlayerProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ILegacyPlayerProviderPlaybackCapability_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469086b0

void * __thiscall
`UE::MovieScene::FMovieSceneUMGComponentTypes::FMovieSceneUMGComponentTypes'::__l2::
FWidgetMaterialHandleInitializer::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469086f0

void * __thiscall
UE::MovieScene::ILegacyPlayerProviderPlaybackCapability::_scalar_deleting_destructor_
          (ILegacyPlayerProviderPlaybackCapability *this,uint param_1)

{
  *this = (ILegacyPlayerProviderPlaybackCapability)
          &___7ILegacyPlayerProviderPlaybackCapability_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908730

void * __thiscall
UAsyncTaskDownloadImage::_scalar_deleting_destructor_(UAsyncTaskDownloadImage *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncTaskDownloadImage__6B_;
  pvVar1 = *(void **)&(this->OnFail).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFail);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469087d0

void * __thiscall UBackgroundBlur::_scalar_deleting_destructor_(UBackgroundBlur *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyBackgroundBlur).SharedReferenceCount.ReferenceController);
  pTVar1 = (this->LowQualityFallbackBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->LowQualityFallbackBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UBackgroundBlurSlot::_scalar_deleting_destructor_(UBackgroundBlurSlot *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UBackgroundBlurSlot__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBlur).SharedReferenceCount.ReferenceController);
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469088e0

void * __thiscall UBoolBinding::_scalar_deleting_destructor_(UBoolBinding *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908950

void * __thiscall UBorder::_scalar_deleting_destructor_(UBorder *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyBorder).SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseDoubleClickEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseMoveEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseButtonUpEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseButtonDownEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BrushColorDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BackgroundDelegate);
  pTVar1 = (this->Background).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Background)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ContentColorAndOpacityDelegate);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908a40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UBorderSlot::_scalar_deleting_destructor_(UBorderSlot *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UBorderSlot__6B_;
  pTVar3 = (this->Border).WeakReferenceCount.ReferenceController;
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
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908ad0

void * __thiscall UBrushBinding::_scalar_deleting_destructor_(UBrushBinding *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908b40

void * __thiscall UButton::_scalar_deleting_destructor_(UButton *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyButton).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLostFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReceivedFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragOver);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragDetected);
  pvVar1 = *(void **)&(this->OnUnhovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnhovered);
  pvVar1 = *(void **)&(this->OnHovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHovered);
  pvVar1 = *(void **)&(this->OnReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReleased);
  pvVar1 = *(void **)&(this->OnPressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPressed);
  pvVar1 = *(void **)&(this->OnClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClicked);
  FButtonStyle::~FButtonStyle(&this->WidgetStyle);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UButtonSlot::_scalar_deleting_destructor_(UButtonSlot *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UButtonSlot__6B_;
  pTVar3 = (this->Button).WeakReferenceCount.ReferenceController;
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
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908d50

void * __thiscall UCanvasPanel::_scalar_deleting_destructor_(UCanvasPanel *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyCanvas).SharedReferenceCount.ReferenceController);
  UPanelWidget::~UPanelWidget((UPanelWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908dd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UCanvasPanelSlot::_scalar_deleting_destructor_(UCanvasPanelSlot *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCanvasPanelSlot__6B_;
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908e30

void * __thiscall
UCheckedStateBinding::_scalar_deleting_destructor_(UCheckedStateBinding *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908ea0

void * __thiscall UColorBinding::_scalar_deleting_destructor_(UColorBinding *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908f10

void * __thiscall UFloatBinding::_scalar_deleting_destructor_(UFloatBinding *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146908f80

void * __thiscall
UGameViewportSubsystem::_scalar_deleting_destructor_(UGameViewportSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGameViewportSubsystem__6B_;
  *(undefined4 *)&(this->ViewportWidgets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ViewportWidgets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ViewportWidgets);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWidgetRemoved).field_0x8,*(int *)&(this->OnWidgetRemoved).field_0x10);
  pvVar1 = *(void **)&(this->OnWidgetRemoved).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidgetRemoved);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWidgetAdded).field_0x8,*(int *)&(this->OnWidgetAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnWidgetAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidgetAdded);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909060

void * __thiscall UInt32Binding::_scalar_deleting_destructor_(UInt32Binding *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469090d0

void * __thiscall
UListViewDesignerPreviewItem::_scalar_deleting_destructor_
          (UListViewDesignerPreviewItem *this,uint param_1)

{
  *(undefined ***)this = &___7UListViewDesignerPreviewItem__6B_;
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

// `scalar_deleting_destructor' @ 146909130

void * __thiscall
UMouseCursorBinding::_scalar_deleting_destructor_(UMouseCursorBinding *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469091a0

void * __thiscall
UMovieScene2DTransformPropertySystem::_scalar_deleting_destructor_
          (UMovieScene2DTransformPropertySystem *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UMovieScenePropertySystem::~UMovieScenePropertySystem((UMovieScenePropertySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909210

void * __thiscall
UMovieScene2DTransformSection::_scalar_deleting_destructor_
          (UMovieScene2DTransformSection *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Shear + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Shear);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Scale + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Scale);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->Rotation);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Translation + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Translation);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x938);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469092f0

void * __thiscall
UMovieScene2DTransformTrack::_scalar_deleting_destructor_
          (UMovieScene2DTransformTrack *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieScenePropertyTrack::~UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909360

void * __thiscall
UMovieSceneMarginPropertySystem::_scalar_deleting_destructor_
          (UMovieSceneMarginPropertySystem *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UMovieScenePropertySystem::~UMovieScenePropertySystem((UMovieScenePropertySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469093d0

void * __thiscall
UMovieSceneMarginSection::_scalar_deleting_destructor_(UMovieSceneMarginSection *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->BottomCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->RightCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->LeftCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->TopCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909480

void * __thiscall
UMovieSceneMarginTrack::_scalar_deleting_destructor_(UMovieSceneMarginTrack *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieScenePropertyTrack::~UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469094f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneWidgetMaterialSystem::_scalar_deleting_destructor_
          (UMovieSceneWidgetMaterialSystem *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::
  ~TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
            (&this->SystemImpl);
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909570

void * __thiscall
UMovieSceneWidgetMaterialTrack::_scalar_deleting_destructor_
          (UMovieSceneWidgetMaterialTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  pFVar1 = (this->BrushPropertyNamePath).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneParameterSectionExtender__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneMaterialTrack::~UMovieSceneMaterialTrack((UMovieSceneMaterialTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909630

void * __thiscall
UPropertyBinding::_scalar_deleting_destructor_(UPropertyBinding *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->SourcePath);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469096a0

void * __thiscall
USlateAccessibleWidgetData::_scalar_deleting_destructor_
          (USlateAccessibleWidgetData *this,uint param_1)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7USlateAccessibleWidgetData__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AccessibleSummaryTextDelegate);
  pIVar1 = (this->AccessibleSummaryText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AccessibleTextDelegate);
  pIVar1 = (this->AccessibleText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
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

// `scalar_deleting_destructor' @ 146909740

void * __thiscall UTextBinding::_scalar_deleting_destructor_(UTextBinding *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1469097b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UUMGSequencePlayer::_scalar_deleting_destructor_(UUMGSequencePlayer *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSequenceFinishedPlayingEvent).field_0x8,
             *(int *)&(this->OnSequenceFinishedPlayingEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnSequenceFinishedPlayingEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSequenceFinishedPlayingEvent);
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  pTVar4 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  IMovieScenePlayer::~IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x268);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909890

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UUMGSequenceTickManager::_scalar_deleting_destructor_(UUMGSequenceTickManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UUMGSequenceTickManager__6B_;
  DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             (this->LatentActionManager).LatentActions.AllocatorInstance.Data,
             (this->LatentActionManager).LatentActions.ArrayNum);
  pFVar1 = (this->LatentActionManager).LatentActions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Runner).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PendingUserWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WeakUserWidgetData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WeakUserWidgetData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,FSequenceTickManagerWidgetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WeakUserWidgetData);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909960

void * __thiscall UUserListEntry::_scalar_deleting_destructor_(UUserListEntry *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1469099c0

void * __thiscall
UUserListEntryLibrary::_scalar_deleting_destructor_(UUserListEntryLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UUserListEntryLibrary__6B_;
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

// `scalar_deleting_destructor' @ 146909a20

void * __thiscall
UUserObjectListEntry::_scalar_deleting_destructor_(UUserObjectListEntry *this,uint param_1)

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

// `scalar_deleting_destructor' @ 146909a80

void * __thiscall
UUserObjectListEntryLibrary::_scalar_deleting_destructor_
          (UUserObjectListEntryLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UUserObjectListEntryLibrary__6B_;
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

// `scalar_deleting_destructor' @ 146909ae0

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
UUserWidgetBlueprint::_scalar_deleting_destructor_(UUserWidgetBlueprint *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909b50

void * __thiscall
UUserWidgetExtension::_scalar_deleting_destructor_(UUserWidgetExtension *this,uint param_1)

{
  *(undefined ***)this = &___7UUserWidgetExtension__6B_;
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

// `scalar_deleting_destructor' @ 146909bb0

void * __thiscall
UVisibilityBinding::_scalar_deleting_destructor_(UVisibilityBinding *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909c20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UWidgetAnimation::_scalar_deleting_destructor_(UWidgetAnimation *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWidgetAnimation__6B_;
  pFVar1 = (this->DisplayLabel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWidgetAnimationBinding,int>
            ((FWidgetAnimationBinding *)(this->AnimationBindings).AllocatorInstance.Data,
             (this->AnimationBindings).ArrayNum);
  pFVar1 = (this->AnimationBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909cb0

void * __thiscall
UWidgetAnimationDelegateBinding::_scalar_deleting_destructor_
          (UWidgetAnimationDelegateBinding *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWidgetAnimationDelegateBinding__6B_;
  pFVar1 = (this->WidgetAnimationDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909d20

void * __thiscall
UWidgetAnimationHandleFunctionLibrary::_scalar_deleting_destructor_
          (UWidgetAnimationHandleFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UWidgetAnimationHandleFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 146909d80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UWidgetAnimationPlayCallbackProxy::_scalar_deleting_destructor_
          (UWidgetAnimationPlayCallbackProxy *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7UWidgetAnimationPlayCallbackProxy__6B_;
  pTVar3 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
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
  pvVar4 = *(void **)&(this->Finished).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Finished);
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

// `scalar_deleting_destructor' @ 146909e30

void * __thiscall
UWidgetBinaryStateRegistration::_scalar_deleting_destructor_
          (UWidgetBinaryStateRegistration *this,uint param_1)

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

// `scalar_deleting_destructor' @ 146909e90

void * __thiscall UWidgetBinding::_scalar_deleting_destructor_(UWidgetBinding *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146909f00

void * __thiscall
UWidgetBlueprintGeneratedClassExtension::_scalar_deleting_destructor_
          (UWidgetBlueprintGeneratedClassExtension *this,uint param_1)

{
  *(undefined ***)this = &___7UWidgetBlueprintGeneratedClassExtension__6B_;
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

// `scalar_deleting_destructor' @ 146909f60

void * __thiscall
UWidgetDisabledStateRegistration::_scalar_deleting_destructor_
          (UWidgetDisabledStateRegistration *this,uint param_1)

{
  *(undefined ***)this = &___7UWidgetDisabledStateRegistration__6B_;
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

// `scalar_deleting_destructor' @ 146909fc0

void * __thiscall
UWidgetEnumStateRegistration::_scalar_deleting_destructor_
          (UWidgetEnumStateRegistration *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14690a020

void * __thiscall
UWidgetFieldNotificationExtension::_scalar_deleting_destructor_
          (UWidgetFieldNotificationExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWidgetFieldNotificationExtension__6B_;
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)(this->Delegates).Delegates.AllocatorInstance.Data,
             (this->Delegates).Delegates.ArrayNum);
  pFVar1 = (this->Delegates).Delegates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UUserWidgetExtension__6B_;
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

// `scalar_deleting_destructor' @ 14690a0b0

void * __thiscall
UWidgetHoveredStateRegistration::_scalar_deleting_destructor_
          (UWidgetHoveredStateRegistration *this,uint param_1)

{
  *(undefined ***)this = &___7UWidgetHoveredStateRegistration__6B_;
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

// `scalar_deleting_destructor' @ 14690a110

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UWidgetNavigation::_scalar_deleting_destructor_(UWidgetNavigation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWidgetNavigation__6B_;
  FInstancedStruct::Reset(&(this->NavigationMethod).InstancedStruct);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Previous).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Next).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Right).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Left).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Down).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Up).CustomDelegate);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14690a1c0

void * __thiscall
UWidgetPressedStateRegistration::_scalar_deleting_destructor_
          (UWidgetPressedStateRegistration *this,uint param_1)

{
  *(undefined ***)this = &___7UWidgetPressedStateRegistration__6B_;
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

// `scalar_deleting_destructor' @ 14690a220

void * __thiscall
UWidgetSelectedStateRegistration::_scalar_deleting_destructor_
          (UWidgetSelectedStateRegistration *this,uint param_1)

{
  *(undefined ***)this = &___7UWidgetSelectedStateRegistration__6B_;
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

// `scalar_deleting_destructor' @ 14690a280

void * __thiscall
UWidgetStateSettings::_scalar_deleting_destructor_(UWidgetStateSettings *this,uint param_1)

{
  ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> FVar1;
  ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> FVar2;
  ForElementType<FName> FVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7UWidgetStateSettings__6B_;
  FVar1 = (this->EnumStateRegistrationCDOs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->BinaryStateRegistrationCDOs).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->EnumStates).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar3 = (this->BinaryStates).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  *(undefined4 *)&(this->EnumStateMap).field_0xe8 = 0;
  pvVar4 = *(void **)&(this->EnumStateMap).field_0xe0;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->EnumStateMap);
  *(undefined4 *)&(this->BinaryStateMap).field_0x2f8 = 0;
  pvVar4 = *(void **)&(this->BinaryStateMap).field_0x2f0;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->BinaryStateMap);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6e8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAsyncTaskDownloadImage @ 146916140

void __cdecl EmptyLinkFunctionForGeneratedCodeAsyncTaskDownloadImage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBackgroundBlur @ 146916150

void __cdecl EmptyLinkFunctionForGeneratedCodeBackgroundBlur(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBackgroundBlurSlot @ 146916160

void __cdecl EmptyLinkFunctionForGeneratedCodeBackgroundBlurSlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBoolBinding @ 146916170

void __cdecl EmptyLinkFunctionForGeneratedCodeBoolBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBorder @ 146916180

void __cdecl EmptyLinkFunctionForGeneratedCodeBorder(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBorderSlot @ 146916190

void __cdecl EmptyLinkFunctionForGeneratedCodeBorderSlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBrushBinding @ 1469161a0

void __cdecl EmptyLinkFunctionForGeneratedCodeBrushBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeButton @ 1469161b0

void __cdecl EmptyLinkFunctionForGeneratedCodeButton(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeButtonSlot @ 1469161c0

void __cdecl EmptyLinkFunctionForGeneratedCodeButtonSlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCanvasPanel @ 1469161d0

void __cdecl EmptyLinkFunctionForGeneratedCodeCanvasPanel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCanvasPanelSlot @ 1469161e0

void __cdecl EmptyLinkFunctionForGeneratedCodeCanvasPanelSlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCheckedStateBinding @ 1469161f0

void __cdecl EmptyLinkFunctionForGeneratedCodeCheckedStateBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeColorBinding @ 146916200

void __cdecl EmptyLinkFunctionForGeneratedCodeColorBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicPropertyPath @ 146916210

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicPropertyPath(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFloatBinding @ 146916220

void __cdecl EmptyLinkFunctionForGeneratedCodeFloatBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameViewportSubsystem @ 146916230

void __cdecl EmptyLinkFunctionForGeneratedCodeGameViewportSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIUserListEntry @ 146916240

void __cdecl EmptyLinkFunctionForGeneratedCodeIUserListEntry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIUserObjectListEntry @ 146916250

void __cdecl EmptyLinkFunctionForGeneratedCodeIUserObjectListEntry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInt32Binding @ 146916260

void __cdecl EmptyLinkFunctionForGeneratedCodeInt32Binding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeListViewDesignerPreviewItem @ 146916270

void __cdecl EmptyLinkFunctionForGeneratedCodeListViewDesignerPreviewItem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMouseCursorBinding @ 146916280

void __cdecl EmptyLinkFunctionForGeneratedCodeMouseCursorBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformPropertySystem @ 146916290

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformPropertySystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformSection @ 1469162a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformTrack @ 1469162b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMarginPropertySystem @ 1469162c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMarginPropertySystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMarginSection @ 1469162d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMarginSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMarginTrack @ 1469162e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMarginTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialSystem @ 1469162f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTrack @ 146916300

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyBinding @ 146916310

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRadialBoxSettings @ 146916320

void __cdecl EmptyLinkFunctionForGeneratedCodeRadialBoxSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlateWrapperTypes @ 146916330

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateWrapperTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextBinding @ 146916340

void __cdecl EmptyLinkFunctionForGeneratedCodeTextBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUMGSequencePlayMode @ 146916350

void __cdecl EmptyLinkFunctionForGeneratedCodeUMGSequencePlayMode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUMGSequencePlayer @ 146916360

void __cdecl EmptyLinkFunctionForGeneratedCodeUMGSequencePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUMGSequenceTickManager @ 146916370

void __cdecl EmptyLinkFunctionForGeneratedCodeUMGSequenceTickManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUMG_init @ 146916380

void __cdecl EmptyLinkFunctionForGeneratedCodeUMG_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUserWidgetBlueprint @ 146916390

void __cdecl EmptyLinkFunctionForGeneratedCodeUserWidgetBlueprint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUserWidgetExtension @ 1469163a0

void __cdecl EmptyLinkFunctionForGeneratedCodeUserWidgetExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUserWidgetPool @ 1469163b0

void __cdecl EmptyLinkFunctionForGeneratedCodeUserWidgetPool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVisibilityBinding @ 1469163c0

void __cdecl EmptyLinkFunctionForGeneratedCodeVisibilityBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetAnimation @ 1469163d0

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetAnimation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetAnimationBinding @ 1469163e0

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetAnimationBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetAnimationDelegateBinding @ 1469163f0

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetAnimationDelegateBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetAnimationEvents @ 146916400

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetAnimationEvents(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetAnimationHandle @ 146916410

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetAnimationHandle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetAnimationPlayCallbackProxy @ 146916420

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetAnimationPlayCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetBinding @ 146916430

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetBlueprintGeneratedClassExtension @ 146916440

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetBlueprintGeneratedClassExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetEventField @ 146916450

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetEventField(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetFieldNotificationExtension @ 146916460

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetFieldNotificationExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetNavigation @ 146916470

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetNavigation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetStateBitfield @ 146916480

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetStateBitfield(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetStateRegistration @ 146916490

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetStateRegistration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetStateSettings @ 1469164a0

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetStateSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetTransform @ 1469164b0

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetTransform(void)

{
  return;
}

// FCustomWidgetNavigationDelegate_DelegateWrapper @ 1469196f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl
FCustomWidgetNavigationDelegate_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,EUINavigation param_2)

{
  EUINavigation local_18 [8];
  UWidget *local_10;
  
  local_10 = (UWidget *)0x0;
  local_18[0] = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_18);
  return local_10;
}

// FDownloadImageDelegate_DelegateWrapper @ 146919720

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
FDownloadImageDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UTexture2DDynamic *param_2)

{
  UTexture2DDynamic *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnButtonClickedEvent_DelegateWrapper @ 1469197b0

void __cdecl
FOnButtonClickedEvent_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnButtonHoverEvent_DelegateWrapper @ 1469197c0

void __cdecl
FOnButtonHoverEvent_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnButtonPressedEvent_DelegateWrapper @ 1469197d0

void __cdecl
FOnButtonPressedEvent_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnButtonReleasedEvent_DelegateWrapper @ 1469197e0

void __cdecl
FOnButtonReleasedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnWidgetAnimationPlaybackStatusChanged_DelegateWrapper @ 1469197f0

void __cdecl
FOnWidgetAnimationPlaybackStatusChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FWidgetAnimationDynamicEvent_DelegateWrapper @ 146919800

void __cdecl
FWidgetAnimationDynamicEvent_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,(void *)0x0);
  return;
}

// FWidgetAnimationDynamicEvents_DelegateWrapper @ 146919810

void __cdecl
FWidgetAnimationDynamicEvents_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FWidgetAnimationResult_DelegateWrapper @ 146919820

void __cdecl
FWidgetAnimationResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetMaterialBrushPropertyPaths @ 14691f830

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
WidgetMaterialTrackUtilities::GetMaterialBrushPropertyPaths
          (UWidget *param_1,TArray<FWidgetMaterialPropertyPath,TSizedDefaultAllocator<32>_> *param_2
          )

{
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMaterialBrushPropertyPathsRecursive(param_1,(UStruct *)param_1->_padding_,&local_18,param_2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetMaterialBrushPropertyPathsRecursive @ 14691f870

void __cdecl
GetMaterialBrushPropertyPathsRecursive
          (void *param_1,UStruct *param_2,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FWidgetMaterialPropertyPath,TSizedDefaultAllocator<32>_> *param_4)

{
  FName FVar1;
  UStruct *pUVar2;
  code *pcVar3;
  FField *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  FText *this;
  FString *pFVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int *piVar15;
  ForAnyElementType _Src;
  FField *local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  FText local_60;
  TFieldIterator<FProperty> local_50;
  
  if (param_1 != (void *)0x0) {
    if (param_2 == (UStruct *)0x0) {
      local_50.Field = (FField *)0x0;
    }
    else {
      local_50.Field = param_2->ChildProperties;
    }
    local_50.InterfaceIndex = -1;
    local_50.bIncludeSuper = true;
    local_50.bIncludeDeprecated = true;
    local_50.bIncludeInterface = false;
    local_50.Struct = param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_50);
    while (local_50.Field != (FField *)0x0) {
      local_98 = local_50.Field;
      if ((local_50.Field != (FField *)0x0) &&
         ((*(uint *)&local_50.Field[1].ClassPrivate >> 0x1d & 1) == 0)) {
        pFVar14 = (param_3->AllocatorInstance).Data;
        if ((pFVar14 <= (FScriptContainerElement *)&local_98) &&
           (((FScriptContainerElement *)&local_98 < pFVar14 + (longlong)param_3->ArrayMax * 8 &&
            (bVar5 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_3->ArrayNum;
        if (iVar6 == param_3->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        pFVar4 = local_98;
        param_3->ArrayNum = iVar6 + 1;
        *(FField **)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_98;
        if (((local_98 != (FField *)0x0) &&
            (((uint)(int)local_98->ClassPrivate->CastFlags >> 0x14 & 1) != 0)) &&
           (local_98 != (FField *)0x0)) {
          FVar1 = (FName)(local_98[2].Owner.Container.Field)->Next;
          if (((int)local_98[1]._padding_ < 1) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Src.Data = (FScriptContainerElement *)0x0;
          iVar6 = *(int *)((longlong)&pFVar4[1].Owner.Container + 4);
          piVar15 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c);
          if ((*piVar15 <
               `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                          ::__l2::TypeName,"SlateFontInfo");
            _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          if (FVar1 == `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                       ::__l2::TypeName) {
            if (*(longlong *)((longlong)param_1 + (longlong)iVar6 + 8) == 0) {
LAB_14691fa7d:
              lVar12 = 0;
            }
            else {
              pUVar9 = Z_Construct_UClass_UMaterialInterface_NoRegister();
              bVar5 = FObjectPtr::IsA((FObjectPtr *)((longlong)param_1 + (longlong)iVar6 + 8),pUVar9
                                     );
              if (!bVar5) goto LAB_14691fa7d;
              lVar12 = *(longlong *)((longlong)param_1 + (longlong)iVar6 + 8);
            }
            FString::FString(&local_80,L"FontMaterial");
            _Src.Data = local_80.Data.AllocatorInstance.Data;
            iVar6 = local_80.Data.ArrayNum;
            local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_80.Data.ArrayNum = 0;
            local_80.Data.ArrayMax = 0;
LAB_14691fbff:
            if (lVar12 != 0) {
              iVar7 = param_4->ArrayNum;
              if (iVar7 == param_4->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar7 + 1;
              pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
              *(FScriptContainerElement **)&pFVar13->field_0x0 = (FScriptContainerElement *)0x0;
              iVar7 = param_3->ArrayNum;
              pFVar14 = (param_3->AllocatorInstance).Data;
              *(int *)&pFVar13[8].field_0x0 = iVar7;
              if (iVar7 == 0) {
                *(int *)(pFVar13 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar7,0,(ForAnyElementType *)pFVar13,iVar7,(int *)(pFVar13 + 0xc));
                memcpy(*(FScriptContainerElement **)&pFVar13->field_0x0,pFVar14,(longlong)iVar7 << 3
                      );
              }
              pFVar14 = pFVar13 + 0x10;
              *(FScriptContainerElement **)&pFVar14->field_0x0 = (FScriptContainerElement *)0x0;
              *(int *)&pFVar13[0x18].field_0x0 = iVar6;
              if (iVar6 == 0) {
                *(int *)(pFVar13 + 0x1c) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar6,0,(ForAnyElementType *)pFVar14,iVar6,(int *)(pFVar13 + 0x1c));
                memcpy(*(FScriptContainerElement **)&pFVar14->field_0x0,_Src.Data,
                       (longlong)iVar6 * 2);
              }
            }
          }
          else {
            if ((*piVar15 <
                 `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                            ::__l2::TypeName,"SlateBrush");
              _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            if (FVar1 == `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                         ::__l2::TypeName) {
              lVar12 = *(longlong *)((longlong)param_1 + (longlong)iVar6 + 0x38);
              if (lVar12 == 0) {
LAB_14691faf6:
                lVar12 = 0;
              }
              else {
                pUVar9 = Z_Construct_UClass_UMaterialInterface_NoRegister();
                iVar6 = (int)pUVar9->_padding_;
                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar6) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
                    &pUVar9->_padding_)) goto LAB_14691faf6;
              }
              this = FText::AsLocalizable_Advanced_LocText
                               (&local_60,L"WidgetMaterialTrackUtilities",L"BrushMaterialName",
                                L"Brush Material");
              pFVar10 = FText::ToString(this);
              local_90.Data = (FScriptContainerElement *)0x0;
              iVar6 = (pFVar10->Data).ArrayNum;
              pFVar14 = (pFVar10->Data).AllocatorInstance.Data;
              local_88 = CONCAT44(local_88._4_4_,iVar6);
              if (iVar6 == 0) {
                local_88 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar6,0,&local_90,iVar6,(int *)((longlong)&local_88 + 4));
                memcpy(local_90.Data,pFVar14,(longlong)iVar6 * 2);
              }
              if (local_60.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
              }
              _Src.Data = local_90.Data;
              iVar6 = (int)local_88;
              local_90.Data = (FScriptContainerElement *)0x0;
              local_88 = 0;
              goto LAB_14691fbff;
            }
            if ((*piVar15 <
                 `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                            ::__l2::TypeName,"FontOutlineSettings");
              _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            if (FVar1 == `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                         ::__l2::TypeName) {
              if (*(longlong *)((longlong)param_1 + (longlong)iVar6 + 8) == 0) {
LAB_14691fbd8:
                lVar12 = 0;
              }
              else {
                pUVar9 = Z_Construct_UClass_UMaterialInterface_NoRegister();
                bVar5 = FObjectPtr::IsA((FObjectPtr *)((longlong)param_1 + (longlong)iVar6 + 8),
                                        pUVar9);
                if (!bVar5) goto LAB_14691fbd8;
                lVar12 = *(longlong *)((longlong)param_1 + (longlong)iVar6 + 8);
              }
              FString::FString(&local_70,L"OutlineMaterial");
              _Src.Data = local_70.Data.AllocatorInstance.Data;
              iVar6 = local_70.Data.ArrayNum;
              local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_70.Data.ArrayNum = 0;
              local_70.Data.ArrayMax = 0;
              goto LAB_14691fbff;
            }
          }
          pUVar2 = (UStruct *)pFVar4[2].Owner.Container.Field;
          if (((int)pFVar4[1]._padding_ < 1) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          GetMaterialBrushPropertyPathsRecursive
                    ((void *)((longlong)*(int *)((longlong)&pFVar4[1].Owner.Container + 4) +
                             (longlong)param_1),pUVar2,param_3,param_4);
          if (_Src.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(_Src.Data);
          }
        }
        uVar11 = param_3->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar11 < param_3->ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
        iVar6 = (param_3->ArrayNum - uVar11) + -1;
        if (iVar6 != 0) {
          memmove(pFVar14,pFVar14 + 8,(longlong)iVar6 << 3);
        }
        param_3->ArrayNum = param_3->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
      }
      local_50.Field = (local_50.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_50);
    }
  }
  return;
}

// GetMaterialHandle @ 14691fee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetMaterialHandle * __cdecl
WidgetMaterialTrackUtilities::GetMaterialHandle
          (FWidgetMaterialHandle *__return_storage_ptr__,UWidget *param_1,
          TArrayView<FName_const_,int> *param_2)

{
  TArrayView<FName_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  GetPropertyValueByPath(__return_storage_ptr__,param_1,(UStruct *)param_1->_padding_,&local_18,0);
  return __return_storage_ptr__;
}

// GetPropertyValueByPath @ 146923d60

FWidgetMaterialHandle * __cdecl
GetPropertyValueByPath
          (FWidgetMaterialHandle *__return_storage_ptr__,void *param_1,UStruct *param_2,
          TArrayView<FName_const_,int> *param_3,int param_4)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FField *pFVar7;
  bool bVar8;
  FName *pFVar9;
  FName FVar10;
  FWidgetMaterialHandle *pFVar11;
  FName FVar12;
  TArrayView<FName_const_,int> local_58;
  TFieldIterator<FProperty> local_48;
  
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  if ((param_1 != (void *)0x0) && (iVar1 = param_3->ArrayNum, param_4 < iVar1)) {
    if (param_2 == (UStruct *)0x0) {
      local_48.Field = (FField *)0x0;
    }
    else {
      local_48.Field = param_2->ChildProperties;
    }
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    pFVar7 = local_48.Field;
    while (pFVar7 != (FField *)0x0) {
      local_48.Field = pFVar7;
      pFVar9 = TArrayView<FName_const_,int>::operator[](param_3,param_4);
      bVar8 = IsThisNotNull(pFVar7,"FField::GetFName");
      FVar10 = FVar12;
      if (bVar8) {
        FVar10 = pFVar7->NamePrivate;
      }
      if (FVar10 == *pFVar9) {
        if ((((uint)(int)pFVar7->ClassPrivate->CastFlags >> 0x14 & 1) != 0) &&
           (pFVar7 != (FField *)0x0)) {
          pUVar2 = (UStruct *)pFVar7[2].Owner.Container.Field;
          if (param_4 != iVar1 + -1) {
            uVar4 = *(undefined4 *)&param_3->DataPtr;
            uVar5 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
            iVar1 = param_3->ArrayNum;
            uVar6 = *(undefined4 *)&param_3->field_0xc;
            if (((int)pFVar7[1]._padding_ < 1) &&
               (bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar8)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FWidgetMaterialHandle *)(*pcVar3)();
              return pFVar11;
            }
            local_58.DataPtr._0_4_ = uVar4;
            local_58.DataPtr._4_4_ = uVar5;
            local_58.ArrayNum = iVar1;
            local_58._12_4_ = uVar6;
            GetPropertyValueByPath
                      (__return_storage_ptr__,
                       (void *)((longlong)*(int *)((longlong)&pFVar7[1].Owner.Container + 4) +
                               (longlong)param_1),pUVar2,&local_58,param_4 + 1);
            return __return_storage_ptr__;
          }
          FVar12 = (FName)pUVar2->_padding_;
          FVar10 = TMaterialStructType<FSlateFontInfo>::GetTypeName();
          if (((FVar12 == *(FName *)FVar10) ||
              (FVar10 = TMaterialStructType<FSlateBrush>::GetTypeName(), FVar12 == *(FName *)FVar10)
              ) || (FVar10 = TMaterialStructType<FFontOutlineSettings>::GetTypeName(),
                   FVar12 == *(FName *)FVar10)) {
            if (((int)pFVar7[1]._padding_ < 1) &&
               (bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar8)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FWidgetMaterialHandle *)(*pcVar3)();
              return pFVar11;
            }
            iVar1 = *(int *)((longlong)&pFVar7[1].Owner.Container + 4);
            __return_storage_ptr__->TypeName = FVar12;
            __return_storage_ptr__->Data = (void *)((longlong)iVar1 + (longlong)param_1);
            return __return_storage_ptr__;
          }
        }
        break;
      }
      local_48.Field = pFVar7->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_48);
      pFVar7 = local_48.Field;
    }
  }
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  __return_storage_ptr__->Data = (void *)0x0;
  return __return_storage_ptr__;
}

// GetTrackNameFromPropertyNamePath @ 146924ab0

FName __cdecl
WidgetMaterialTrackUtilities::GetTrackNameFromPropertyNamePath
          (TArrayView<FName_const_,int> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *this;
  FName FVar6;
  FString *pFVar7;
  TArrayView<FName_const_,int> *in_RDX;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  FString local_38;
  FString local_28;
  
  iVar1 = in_RDX->ArrayNum;
  if (iVar1 == 0) {
    param_1->DataPtr = (FName *)0x0;
  }
  else {
    this = TArrayView<FName_const_,int>::operator[](in_RDX,0);
    ::FName::ToString(this,&local_38);
    uVar9 = 1;
    if (1 < iVar1) {
      do {
        ::FString::AppendChar(&local_38,L'.');
        uVar5 = 0;
        if ((int)uVar9 < iVar1) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          FVar6 = (FName)(*pcVar3)();
          return FVar6;
        }
        pFVar7 = ::FName::ToString(in_RDX->DataPtr + (int)uVar9,&local_28);
        iVar2 = (pFVar7->Data).ArrayNum;
        iVar10 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(&local_38,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar10);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar1);
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)param_1,(wchar_t *)FVar8.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return (FName)param_1;
}

// GetTypeHash @ 146924c20

uint __cdecl GetTypeHash(FWidgetMaterialHandle *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = param_1->TypeName;
  uVar2 = ((uint)((ulonglong)param_1->Data >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Data >> 4)
          ) * -0x7a143595;
  uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar4 = (FVar1.Number - uVar3) + uVar2 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf;
}

// Z_Construct_UClass_UBackgroundBlurSlot_NoRegister @ 14694de20

UClass * __cdecl Z_Construct_UClass_UBackgroundBlurSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBackgroundBlurSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BackgroundBlurSlot",
               &Z_Registration_Info_UClass_UBackgroundBlurSlot.InnerSingleton,
               UBackgroundBlurSlot::StaticRegisterNativesUBackgroundBlurSlot,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBackgroundBlurSlot>,
               InternalVTableHelperCtorCaller<UBackgroundBlurSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBackgroundBlurSlot.InnerSingleton;
}

// Z_Construct_UClass_UBackgroundBlur_NoRegister @ 14694dee0

UClass * __cdecl Z_Construct_UClass_UBackgroundBlur_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BackgroundBlur",
               &Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton,
               UBackgroundBlur::StaticRegisterNativesUBackgroundBlur,0x2d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBackgroundBlur>,
               InternalVTableHelperCtorCaller<UBackgroundBlur>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton;
}

// Z_Construct_UClass_UBoolBinding_NoRegister @ 14694dfa0

UClass * __cdecl Z_Construct_UClass_UBoolBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoolBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BoolBinding",&Z_Registration_Info_UClass_UBoolBinding.InnerSingleton
               ,UBoolBinding::StaticRegisterNativesUBoolBinding,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBoolBinding>,
               InternalVTableHelperCtorCaller<UBoolBinding>,local_res8,UPropertyBinding::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoolBinding.InnerSingleton;
}

// Z_Construct_UClass_UBorderSlot_NoRegister @ 14694e060

UClass * __cdecl Z_Construct_UClass_UBorderSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBorderSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BorderSlot",&Z_Registration_Info_UClass_UBorderSlot.InnerSingleton,
               UBorderSlot::StaticRegisterNativesUBorderSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBorderSlot>,
               InternalVTableHelperCtorCaller<UBorderSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBorderSlot.InnerSingleton;
}

// Z_Construct_UClass_UBorder_NoRegister @ 14694e120

UClass * __cdecl Z_Construct_UClass_UBorder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Border",&Z_Registration_Info_UClass_UBorder.InnerSingleton,
               UBorder::StaticRegisterNativesUBorder,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBorder>,InternalVTableHelperCtorCaller<UBorder>,
               local_res8,UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBorder.InnerSingleton;
}

// Z_Construct_UClass_UBrushBinding_NoRegister @ 14694e1e0

UClass * __cdecl Z_Construct_UClass_UBrushBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BrushBinding",
               &Z_Registration_Info_UClass_UBrushBinding.InnerSingleton,
               UBrushBinding::StaticRegisterNativesUBrushBinding,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushBinding>,
               InternalVTableHelperCtorCaller<UBrushBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBinding.InnerSingleton;
}

// Z_Construct_UClass_UButtonSlot_NoRegister @ 14694e2a0

UClass * __cdecl Z_Construct_UClass_UButtonSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ButtonSlot",&Z_Registration_Info_UClass_UButtonSlot.InnerSingleton,
               UButtonSlot::StaticRegisterNativesUButtonSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UButtonSlot>,
               InternalVTableHelperCtorCaller<UButtonSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonSlot.InnerSingleton;
}

// Z_Construct_UClass_UButton_NoRegister @ 14694e360

UClass * __cdecl Z_Construct_UClass_UButton_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Button",&Z_Registration_Info_UClass_UButton.InnerSingleton,
               UButton::StaticRegisterNativesUButton,0x6c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UButton>,InternalVTableHelperCtorCaller<UButton>,
               local_res8,UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButton.InnerSingleton;
}

// Z_Construct_UClass_UCanvasPanel_NoRegister @ 14694e420

UClass * __cdecl Z_Construct_UClass_UCanvasPanel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CanvasPanel",&Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton
               ,UCanvasPanel::StaticRegisterNativesUCanvasPanel,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCanvasPanel>,
               InternalVTableHelperCtorCaller<UCanvasPanel>,local_res8,UPanelWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton;
}

// Z_Construct_UClass_UCheckedStateBinding_NoRegister @ 14694e4e0

UClass * __cdecl Z_Construct_UClass_UCheckedStateBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CheckedStateBinding",
               &Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton,
               UCheckedStateBinding::StaticRegisterNativesUCheckedStateBinding,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCheckedStateBinding>,
               InternalVTableHelperCtorCaller<UCheckedStateBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton;
}

// Z_Construct_UClass_UColorBinding_NoRegister @ 14694e5a0

UClass * __cdecl Z_Construct_UClass_UColorBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UColorBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ColorBinding",
               &Z_Registration_Info_UClass_UColorBinding.InnerSingleton,
               UColorBinding::StaticRegisterNativesUColorBinding,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UColorBinding>,
               InternalVTableHelperCtorCaller<UColorBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UColorBinding.InnerSingleton;
}

// Z_Construct_UClass_UFloatBinding_NoRegister @ 14694e660

UClass * __cdecl Z_Construct_UClass_UFloatBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"FloatBinding",
               &Z_Registration_Info_UClass_UFloatBinding.InnerSingleton,
               UFloatBinding::StaticRegisterNativesUFloatBinding,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFloatBinding>,
               InternalVTableHelperCtorCaller<UFloatBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatBinding.InnerSingleton;
}

// Z_Construct_UClass_UGameViewportSubsystem_NoRegister @ 14694e720

UClass * __cdecl Z_Construct_UClass_UGameViewportSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"GameViewportSubsystem",
               &Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton,
               UGameViewportSubsystem::StaticRegisterNativesUGameViewportSubsystem,0xc0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGameViewportSubsystem>,
               InternalVTableHelperCtorCaller<UGameViewportSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameViewportSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UInt32Binding_NoRegister @ 14694e7e0

UClass * __cdecl Z_Construct_UClass_UInt32Binding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt32Binding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Int32Binding",
               &Z_Registration_Info_UClass_UInt32Binding.InnerSingleton,
               UInt32Binding::StaticRegisterNativesUInt32Binding,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInt32Binding>,
               InternalVTableHelperCtorCaller<UInt32Binding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt32Binding.InnerSingleton;
}

// Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister @ 14694e8a0

UClass * __cdecl Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ListViewDesignerPreviewItem",
               &Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton,
               UListViewDesignerPreviewItem::StaticRegisterNativesUListViewDesignerPreviewItem,0x28,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UListViewDesignerPreviewItem>,
               InternalVTableHelperCtorCaller<UListViewDesignerPreviewItem>,local_res8,
               UObject::StaticClass,UListView::StaticClass);
  }
  return Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton;
}

// Z_Construct_UClass_UMouseCursorBinding_NoRegister @ 14694e960

UClass * __cdecl Z_Construct_UClass_UMouseCursorBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MouseCursorBinding",
               &Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton,
               UMouseCursorBinding::StaticRegisterNativesUMouseCursorBinding,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMouseCursorBinding>,
               InternalVTableHelperCtorCaller<UMouseCursorBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton;
}

// Z_Construct_UClass_UMovieScene2DTransformPropertySystem_NoRegister @ 14694ea20

UClass * __cdecl Z_Construct_UClass_UMovieScene2DTransformPropertySystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieScene2DTransformPropertySystem",
               &Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.InnerSingleton,
               UMovieScene2DTransformPropertySystem::
               StaticRegisterNativesUMovieScene2DTransformPropertySystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene2DTransformPropertySystem>,
               InternalVTableHelperCtorCaller<UMovieScene2DTransformPropertySystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister @ 14694eae0

UClass * __cdecl Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieScene2DTransformSection",
               &Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton,
               UMovieScene2DTransformSection::StaticRegisterNativesUMovieScene2DTransformSection,
               0x938,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene2DTransformSection>,
               InternalVTableHelperCtorCaller<UMovieScene2DTransformSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieScene2DTransformTrack_NoRegister @ 14694eba0

UClass * __cdecl Z_Construct_UClass_UMovieScene2DTransformTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieScene2DTransformTrack",
               &Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton,
               UMovieScene2DTransformTrack::StaticRegisterNativesUMovieScene2DTransformTrack,0x148,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene2DTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieScene2DTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMarginPropertySystem_NoRegister @ 14694ec60

UClass * __cdecl Z_Construct_UClass_UMovieSceneMarginPropertySystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneMarginPropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.InnerSingleton,
               UMovieSceneMarginPropertySystem::StaticRegisterNativesUMovieSceneMarginPropertySystem
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMarginPropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneMarginPropertySystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMarginSection_NoRegister @ 14694ed20

UClass * __cdecl Z_Construct_UClass_UMovieSceneMarginSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneMarginSection",
               &Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton,
               UMovieSceneMarginSection::StaticRegisterNativesUMovieSceneMarginSection,0x5b8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMarginSection>,
               InternalVTableHelperCtorCaller<UMovieSceneMarginSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMarginSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMarginTrack_NoRegister @ 14694ede0

UClass * __cdecl Z_Construct_UClass_UMovieSceneMarginTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMarginTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneMarginTrack",
               &Z_Registration_Info_UClass_UMovieSceneMarginTrack.InnerSingleton,
               UMovieSceneMarginTrack::StaticRegisterNativesUMovieSceneMarginTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMarginTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMarginTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMarginTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_NoRegister @ 14694eea0

UClass * __cdecl Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneWidgetMaterialSystem",
               &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton,
               UMovieSceneWidgetMaterialSystem::StaticRegisterNativesUMovieSceneWidgetMaterialSystem
               ,0x210,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneWidgetMaterialSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister @ 14694ef60

UClass * __cdecl Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneWidgetMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton,
               UMovieSceneWidgetMaterialTrack::StaticRegisterNativesUMovieSceneWidgetMaterialTrack,
               0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneWidgetMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialTrack>,local_res8,
               UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton;
}

// Z_Construct_UClass_UPropertyBinding_NoRegister @ 14694f020

UClass * __cdecl Z_Construct_UClass_UPropertyBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PropertyBinding",
               &Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton,
               UPropertyBinding::StaticRegisterNativesUPropertyBinding,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPropertyBinding>,
               InternalVTableHelperCtorCaller<UPropertyBinding>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyBinding.InnerSingleton;
}

// Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister @ 14694f0d0

UClass * __cdecl Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateAccessibleWidgetData",
               &Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton,
               USlateAccessibleWidgetData::StaticRegisterNativesUSlateAccessibleWidgetData,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateAccessibleWidgetData>,
               InternalVTableHelperCtorCaller<USlateAccessibleWidgetData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton;
}

// Z_Construct_UClass_UTextBinding_NoRegister @ 14694f180

UClass * __cdecl Z_Construct_UClass_UTextBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TextBinding",&Z_Registration_Info_UClass_UTextBinding.InnerSingleton
               ,UTextBinding::StaticRegisterNativesUTextBinding,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextBinding>,
               InternalVTableHelperCtorCaller<UTextBinding>,local_res8,UPropertyBinding::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBinding.InnerSingleton;
}

// Z_Construct_UClass_UUMGSequenceTickManager_NoRegister @ 14694f240

UClass * __cdecl Z_Construct_UClass_UUMGSequenceTickManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UMGSequenceTickManager",
               &Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton,
               UUMGSequenceTickManager::StaticRegisterNativesUUMGSequenceTickManager,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UUMGSequenceTickManager>
               ,InternalVTableHelperCtorCaller<UUMGSequenceTickManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUMGSequenceTickManager.InnerSingleton;
}

// Z_Construct_UClass_UUserListEntryLibrary_NoRegister @ 14694f2f0

UClass * __cdecl Z_Construct_UClass_UUserListEntryLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserListEntryLibrary",
               &Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton,
               UUserListEntryLibrary::StaticRegisterNativesUUserListEntryLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UUserListEntryLibrary>,
               InternalVTableHelperCtorCaller<UUserListEntryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton;
}

// Z_Construct_UClass_UUserObjectListEntryLibrary_NoRegister @ 14694f3b0

UClass * __cdecl Z_Construct_UClass_UUserObjectListEntryLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserObjectListEntryLibrary",
               &Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton,
               UUserObjectListEntryLibrary::StaticRegisterNativesUUserObjectListEntryLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserObjectListEntryLibrary>,
               InternalVTableHelperCtorCaller<UUserObjectListEntryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton;
}

// Z_Construct_UClass_UUserWidgetBlueprint_NoRegister @ 14694f470

UClass * __cdecl Z_Construct_UClass_UUserWidgetBlueprint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetBlueprint",
               &Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton,
               UUserWidgetBlueprint::StaticRegisterNativesUUserWidgetBlueprint,0xa8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserWidgetBlueprint>,
               InternalVTableHelperCtorCaller<UUserWidgetBlueprint>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetBlueprint.InnerSingleton;
}

// Z_Construct_UClass_UUserWidgetExtension_NoRegister @ 14694f530

UClass * __cdecl Z_Construct_UClass_UUserWidgetExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetExtension",
               &Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton,
               UUserWidgetExtension::StaticRegisterNativesUUserWidgetExtension,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserWidgetExtension>,
               InternalVTableHelperCtorCaller<UUserWidgetExtension>,local_res8,UObject::StaticClass,
               UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton;
}

// Z_Construct_UClass_UVisibilityBinding_NoRegister @ 14694f5f0

UClass * __cdecl Z_Construct_UClass_UVisibilityBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"VisibilityBinding",
               &Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton,
               UVisibilityBinding::StaticRegisterNativesUVisibilityBinding,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UVisibilityBinding>,
               InternalVTableHelperCtorCaller<UVisibilityBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton;
}

// Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister @ 14694f6b0

UClass * __cdecl Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationDelegateBinding",
               &Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton,
               UWidgetAnimationDelegateBinding::StaticRegisterNativesUWidgetAnimationDelegateBinding
               ,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetAnimationDelegateBinding>,
               InternalVTableHelperCtorCaller<UWidgetAnimationDelegateBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton;
}

// Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_NoRegister @ 14694f770

UClass * __cdecl Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationHandleFunctionLibrary",
               &Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton,
               UWidgetAnimationHandleFunctionLibrary::
               StaticRegisterNativesUWidgetAnimationHandleFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimationHandleFunctionLibrary>,
               InternalVTableHelperCtorCaller<UWidgetAnimationHandleFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationHandleFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UWidgetBinaryStateRegistration_NoRegister @ 14694f830

UClass * __cdecl Z_Construct_UClass_UWidgetBinaryStateRegistration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBinaryStateRegistration",
               &Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton,
               UWidgetBinaryStateRegistration::StaticRegisterNativesUWidgetBinaryStateRegistration,
               0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBinaryStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetBinaryStateRegistration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton;
}

// Z_Construct_UClass_UWidgetBinding_NoRegister @ 14694f8e0

UClass * __cdecl Z_Construct_UClass_UWidgetBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBinding",
               &Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton,
               UWidgetBinding::StaticRegisterNativesUWidgetBinding,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetBinding>,
               InternalVTableHelperCtorCaller<UWidgetBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton;
}

// Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister @ 14694f9a0

UClass * __cdecl Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBlueprintGeneratedClassExtension",
               &Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.InnerSingleton,
               UWidgetBlueprintGeneratedClassExtension::
               StaticRegisterNativesUWidgetBlueprintGeneratedClassExtension,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBlueprintGeneratedClassExtension>,
               InternalVTableHelperCtorCaller<UWidgetBlueprintGeneratedClassExtension>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.InnerSingleton;
}

// Z_Construct_UClass_UWidgetDisabledStateRegistration_NoRegister @ 14694fa50

UClass * __cdecl Z_Construct_UClass_UWidgetDisabledStateRegistration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetDisabledStateRegistration",
               &Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.InnerSingleton,
               UWidgetDisabledStateRegistration::
               StaticRegisterNativesUWidgetDisabledStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetDisabledStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetDisabledStateRegistration>,local_res8,
               UWidgetBinaryStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetDisabledStateRegistration.InnerSingleton;
}

// Z_Construct_UClass_UWidgetEnumStateRegistration_NoRegister @ 14694fb10

UClass * __cdecl Z_Construct_UClass_UWidgetEnumStateRegistration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetEnumStateRegistration",
               &Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton,
               UWidgetEnumStateRegistration::StaticRegisterNativesUWidgetEnumStateRegistration,0x28,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetEnumStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetEnumStateRegistration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton;
}

// Z_Construct_UClass_UWidgetFieldNotificationExtension_NoRegister @ 14694fbc0

UClass * __cdecl Z_Construct_UClass_UWidgetFieldNotificationExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetFieldNotificationExtension",
               &Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton,
               UWidgetFieldNotificationExtension::
               StaticRegisterNativesUWidgetFieldNotificationExtension,0x40,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetFieldNotificationExtension>,
               InternalVTableHelperCtorCaller<UWidgetFieldNotificationExtension>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.InnerSingleton;
}

// Z_Construct_UClass_UWidgetHoveredStateRegistration_NoRegister @ 14694fc80

UClass * __cdecl Z_Construct_UClass_UWidgetHoveredStateRegistration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetHoveredStateRegistration",
               &Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.InnerSingleton,
               UWidgetHoveredStateRegistration::StaticRegisterNativesUWidgetHoveredStateRegistration
               ,0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetHoveredStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetHoveredStateRegistration>,local_res8,
               UWidgetBinaryStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetHoveredStateRegistration.InnerSingleton;
}

// Z_Construct_UClass_UWidgetNavigation_NoRegister @ 14694fd40

UClass * __cdecl Z_Construct_UClass_UWidgetNavigation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetNavigation",
               &Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton,
               UWidgetNavigation::StaticRegisterNativesUWidgetNavigation,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetNavigation>,
               InternalVTableHelperCtorCaller<UWidgetNavigation>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton;
}

// Z_Construct_UClass_UWidgetPressedStateRegistration_NoRegister @ 14694fdf0

UClass * __cdecl Z_Construct_UClass_UWidgetPressedStateRegistration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetPressedStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetPressedStateRegistration",
               &Z_Registration_Info_UClass_UWidgetPressedStateRegistration.InnerSingleton,
               UWidgetPressedStateRegistration::StaticRegisterNativesUWidgetPressedStateRegistration
               ,0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetPressedStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetPressedStateRegistration>,local_res8,
               UWidgetBinaryStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetPressedStateRegistration.InnerSingleton;
}

// Z_Construct_UClass_UWidgetSelectedStateRegistration_NoRegister @ 14694feb0

UClass * __cdecl Z_Construct_UClass_UWidgetSelectedStateRegistration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSelectedStateRegistration",
               &Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton,
               UWidgetSelectedStateRegistration::
               StaticRegisterNativesUWidgetSelectedStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetSelectedStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetSelectedStateRegistration>,local_res8,
               UWidgetBinaryStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton;
}

// Z_Construct_UClass_UWidgetStateSettings_NoRegister @ 14694ff70

UClass * __cdecl Z_Construct_UClass_UWidgetStateSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetStateSettings",
               &Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton,
               UWidgetStateSettings::StaticRegisterNativesUWidgetStateSettings,0x6e8,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UWidgetStateSettings>,
               InternalVTableHelperCtorCaller<UWidgetStateSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetStateSettings.InnerSingleton;
}

// Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature @ 146950030

UFunction * __cdecl
Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature @ 146950070

UFunction * __cdecl
Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_UMG_EVirtualKeyboardType @ 1469500b0

UEnum * __cdecl Z_Construct_UEnum_UMG_EVirtualKeyboardType(void)

{
  if (Z_Registration_Info_UEnum_EVirtualKeyboardType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVirtualKeyboardType.InnerSingleton,
               &Z_Construct_UEnum_UMG_EVirtualKeyboardType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FEventReply @ 1469500f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEventReply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEventReply.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEventReply.InnerSingleton,
               &Z_Construct_UScriptStruct_FEventReply_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEventReply.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEventReply.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRadialBoxSettings @ 146950170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRadialBoxSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRadialBoxSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRadialBoxSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRadialBoxSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRadialBoxSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSlateChildSize @ 1469501f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSlateChildSize(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSlateChildSize.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSlateChildSize.InnerSingleton,
               &Z_Construct_UScriptStruct_FSlateChildSize_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSlateChildSize.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSlateChildSize.InnerSingleton;
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

// Z_Construct_UScriptStruct_FUserWidgetPool @ 146950270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUserWidgetPool(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUserWidgetPool.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUserWidgetPool.InnerSingleton,
               &Z_Construct_UScriptStruct_FUserWidgetPool_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUserWidgetPool.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUserWidgetPool.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetEventField @ 1469502f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetEventField(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetEventField.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetEventField.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetEventField_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetEventField.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetEventField.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetStateBitfield @ 146950370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetStateBitfield(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetStateBitfield.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetStateBitfield.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetStateBitfield_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetStateBitfield.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWidgetStateBitfield.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetTransform @ 1469503f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetTransform.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetTransform.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetTransform.InnerSingleton;
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

// ObjectRowsByUserWidget'' @ 1503dd230

void __cdecl `dynamic_atexit_destructor_for_'IObjectTableRow::ObjectRowsByUserWidget__(void)

{
  IObjectTableRow::ObjectRowsByUserWidget._72_4_ = 0;
  if (IObjectTableRow::ObjectRowsByUserWidget._64_8_ != 0) {
    FMemory::Free((void *)IObjectTableRow::ObjectRowsByUserWidget._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&IObjectTableRow::ObjectRowsByUserWidget);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimationBudgetMs'' @ 1503dd270

void __cdecl UE::UMG::_dynamic_atexit_destructor_for__CVarAnimationBudgetMs__(void)

{
  CVarAnimationBudgetMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimationBudgetMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimationDetailedLogging'' @ 1503dd290

void __cdecl UE::UMG::_dynamic_atexit_destructor_for__CVarAnimationDetailedLogging__(void)

{
  CVarAnimationDetailedLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimationDetailedLogging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimationMarkers'' @ 1503dd2b0

void __cdecl UE::UMG::_dynamic_atexit_destructor_for__CVarAnimationMarkers__(void)

{
  CVarAnimationMarkers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimationMarkers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUMGAnimationsAtEndOfFrame'' @ 1503dd2d0

void __cdecl UE::UMG::_dynamic_atexit_destructor_for__CVarUMGAnimationsAtEndOfFrame__(void)

{
  CVarUMGAnimationsAtEndOfFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUMGAnimationsAtEndOfFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUMGMaxAnimationLatentActions'' @ 1503dd2f0

void __cdecl UE::UMG::_dynamic_atexit_destructor_for__CVarUMGMaxAnimationLatentActions__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUMGMaxAnimationLatentActions);
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 1503dd310

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FHasFlagTestAutomationTestInstance'' @ 1503dd330

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FHasFlagTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FHasFlagTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOperatorBitwiseAndTestAutomationTestInstance'' @ 1503dd350

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FOperatorBitwiseAndTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOperatorBitwiseAndTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOperatorBitwiseNotTestAutomationTestInstance'' @ 1503dd370

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FOperatorBitwiseNotTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOperatorBitwiseNotTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOperatorBitwiseOrTestAutomationTestInstance'' @ 1503dd390

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FOperatorBitwiseOrTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOperatorBitwiseOrTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOperatorBoolTestAutomationTestInstance'' @ 1503dd3b0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FOperatorBoolTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOperatorBoolTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GMovieSceneUMGComponentTypes'' @ 1503dd3d0

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GMovieSceneUMGComponentTypes__(void)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
  FVar1;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
  FVar2;
  TUniquePtr<UE::MovieScene::FMovieSceneUMGComponentTypes,TDefaultDelete<UE::MovieScene::FMovieSceneUMGComponentTypes>_>
  TVar3;
  
  TVar3.Ptr = GMovieSceneUMGComponentTypes.Ptr;
  if (GMovieSceneUMGComponentTypes.Ptr != (FMovieSceneUMGComponentTypes *)0x0) {
    FVar1 = ((GMovieSceneUMGComponentTypes.Ptr)->CustomWidgetTransformAccessors).CustomAccessors.
            AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar1);
    }
    ((TVar3.Ptr)->CustomWidgetTransformAccessors)._padding_ =
         (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
    FVar2 = ((TVar3.Ptr)->CustomMarginAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar2);
    }
    ((TVar3.Ptr)->CustomMarginAccessors)._padding_ =
         (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
    ((TVar3.Ptr)->WidgetTransform).PropertyTraits =
         (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    ((TVar3.Ptr)->Margin).PropertyTraits =
         (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    ::operator_delete(TVar3.Ptr,0xb8);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogWidgetStateBitfieldTest'' @ 1503dd450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWidgetStateBitfieldTest__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWidgetStateBitfieldTest);
  return;
}

